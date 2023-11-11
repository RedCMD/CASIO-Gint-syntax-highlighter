const vscode = require("vscode");
const extension = require("./extension.js");
const fs = require("fs");

// https://bible.planet-casio.com/simlo/chm/v20/fx9860_G1A.htm
// https://bible.planet-casio.com/yatis/software/g1a.html#casio-header-file-offset-0x000-to-0x020

function g1a_to_src(uri) {
	const path = uri.fsPath
	const file = fs.readFileSync(path)

	let line = 0
	let text = ''

	text += '; ' + path + '\n'
	text += '; G1A header is inverted 0x01 => 0xFE' + '\n'

	// text += label(0)
	// // // text += instruction('.SDATA', '"' + String.fromCharCode(file[0]) + '"')
	// text += '\t'
	// text += ';' + ' ' + ((file[0] << 24) + (file[1] << 16) + (file[2] << 8) + file[3]).toString(16).toUpperCase().padStart(8, '0')
	// // text += ';' + ' ' + ((file[0] << 56) + (file[1] << 48) + (file[2] << 40) + (file[3] << 32) + (file[4] << 24) + (file[5] << 16) + (file[6] << 8) + file[7]).toString(16).toUpperCase().padStart(16, '0')
	// text += '\n'

	for (let index = 0; index < 512; index += 2) {
		const byte = (file[index] << 8) + file[index + 1]
		// for (let index = 0; index <= 0xFFFF; index++) {
		// 	const byte = index

		text += '$' + line.toString(16).toUpperCase().padStart(5, '0') + ':'

		text += instruction('.DATA.W', 'H\'' + byte.toString(16).toUpperCase().padStart(4, '0'))

		text += '\t'

		text += ';' + ' ' + byte.toString(16).toUpperCase().padStart(4, '0')

		text += '\n'

		line += 2
	}

	for (let index = 512; index < file.length - 1; index += 2) {
		const byte = (file[index] << 8) + file[index + 1]
		// for (let index = 0; index <= 0xFFFF; index++) {
		// 	const byte = index

		text += '$' + line.toString(16).toUpperCase().padStart(5, '0') + ':'

		text += assembly(byte, line)

		text += '\t'

		text += ';' + ' ' + byte.toString(16).toUpperCase().padStart(4, '0')

		text += '\n'

		line += 2
	}

	text += ' .END'


	vscode.workspace.openTextDocument({ language: 'casio', content: text })
		.then(document => vscode.window.showTextDocument(document))

	// const path = uri.path.replace(/\.G1A$/i, '')
	// const saveDialogOptions = {
	// 	defaultUri: uri.with({ scheme: "file", path: path }),
	// 	// saveLabel: "save",
	// 	filters: {
	// 		"CASIO SuperH Source": ["src"],
	// 		"Gint Source": ["s"]
	// 	},
	// 	// title: "Save As"
	// }

	// vscode.window
	// 	.showSaveDialog(saveDialogOptions)
	// 	.then(
	// 		saveFile(uri),
	// 		vscode.window.showErrorMessage
	// 	)
}

function label(line) {
	return '$' + line.toString(16).toUpperCase().padStart(5, '0') + ':'
}


function assembly(byte, line) {
	const nibble1 = byte >> 12
	const nibble2 = (byte >> 8) & 0xF
	const nibble3 = (byte >> 4) & 0xF
	const nibble4 = byte & 0xF

	switch (nibble1) {
		case 0x0:
			switch (nibble4) {
				case 0x0: break
				case 0x1: break
				case 0x2:
					switch (nibble3) {
						case 0x0: return instruction('STC', 'SR', register(nibble2))
						case 0x1: return instruction('STC', 'GBR', register(nibble2))
						case 0x2: return instruction('STC', 'VBR', register(nibble2))
						case 0x3: return instruction('STC', 'SSR', register(nibble2))
						case 0x4: return instruction('STC', 'SPC', register(nibble2))
						// case 0x5: return instruction('STC', 'MOD', register(nibble2))
						// case 0x6: return instruction('STC', 'RS', register(nibble2))
						// case 0x7: return instruction('STC', 'RE', register(nibble2))
						case 0x8: return instruction('STC', 'R0_BANK', register(nibble2))
						case 0x9: return instruction('STC', 'R1_BANK', register(nibble2))
						case 0xA: return instruction('STC', 'R2_BANK', register(nibble2))
						case 0xB: return instruction('STC', 'R3_BANK', register(nibble2))
						case 0xC: return instruction('STC', 'R4_BANK', register(nibble2))
						case 0xD: return instruction('STC', 'R5_BANK', register(nibble2))
						case 0xE: return instruction('STC', 'R6_BANK', register(nibble2))
						case 0xF: return instruction('STC', 'R7_BANK', register(nibble2))
					}
					break
				case 0x3:
					switch (nibble3) {
						case 0x0: return instruction('BSRF', register(nibble2))
						case 0x1: break
						case 0x2: return instruction('BRAF', register(nibble2))
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: return instruction('PREF', pointer(nibble2))
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0x4: return instruction('MOV.B', register(nibble3), pointer_offset(register(0), register(nibble2)))
				case 0x5: return instruction('MOV.W', register(nibble3), pointer_offset(register(0), register(nibble2)))
				case 0x6: return instruction('MOV.L', register(nibble3), pointer_offset(register(0), register(nibble2)))
				case 0x7: return instruction('MUL.L', register(nibble3), register(nibble2))
				case 0x8:
					switch (nibble2) {
						case 0x0:
							switch (nibble3) {
								case 0x0: return instruction('CLRT')
								case 0x1: return instruction('SETT')
								case 0x2: return instruction('CLRMAC')
								case 0x3: return instruction('LDTLB')
								case 0x4: return instruction('CLRS')
								case 0x5: return instruction('SETS')
								case 0x6: break
								case 0x7: break
								case 0x8: break
								case 0x9: break
								case 0xA: break
								case 0xB: break
								case 0xC: break
								case 0xD: break
								case 0xE: break
								case 0xF: break
							}
							break
						case 0x1: break
						case 0x2: break
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0x9:
					switch (nibble3) {
						case 0x0:
							switch (nibble2) {
								case 0x0: return instruction('NOP')
								case 0x1: break
								case 0x2: break
								case 0x3: break
								case 0x4: break
								case 0x5: break
								case 0x6: break
								case 0x7: break
								case 0x8: break
								case 0x9: break
								case 0xA: break
								case 0xB: break
								case 0xC: break
								case 0xD: break
								case 0xE: break
								case 0xF: break
							}
							break
						case 0x1:
							switch (nibble2) {
								case 0x0: return instruction('DIV0U')
								case 0x1: break
								case 0x2: break
								case 0x3: break
								case 0x4: break
								case 0x5: break
								case 0x6: break
								case 0x7: break
								case 0x8: break
								case 0x9: break
								case 0xA: break
								case 0xB: break
								case 0xC: break
								case 0xD: break
								case 0xE: break
								case 0xF: break
							}
							break
						case 0x2: return instruction('MOVT', register(nibble2))
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0xA:
					switch (nibble3) {
						case 0x0: return instruction('STS', 'MACH', register(nibble2))
						case 0x1: return instruction('STS', 'MACL', register(nibble2))
						case 0x2: return instruction('STS', 'PR', register(nibble2))
						case 0x3: break
						case 0x4: break
						// case 0x5: return instruction('STS', 'FPUL', register(nibble2))
						// case 0x6: return instruction('STS', 'FPSCR', register(nibble2))
						// case 0x7: return instruction('STS', 'A0', register(nibble2))
						// case 0x8: return instruction('STS', 'X0', register(nibble2))
						// case 0x9: return instruction('STS', 'X1', register(nibble2))
						// case 0xA: return instruction('STS', 'Y0', register(nibble2))
						// case 0xB: return instruction('STS', 'Y1', register(nibble2))
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0xB:
					switch (nibble2) {
						case 0x0:
							switch (nibble3) {
								case 0x0: return instruction('RTS')
								case 0x1: return instruction('SLEEP')
								case 0x2: return instruction('RTE')
								case 0x3: break
								case 0x4: break
								case 0x5: break
								case 0x6: break
								case 0x7: break
								case 0x8: break
								case 0x9: break
								case 0xA: break
								case 0xB: break
								case 0xC: break
								case 0xD: break
								case 0xE: break
								case 0xF: break
							}
							break
						case 0x1: break
						case 0x2: break
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0xC: return instruction('MOV.B', pointer_offset(register(0), register(nibble3)), register(nibble2))
				case 0xD: return instruction('MOV.W', pointer_offset(register(0), register(nibble3)), register(nibble2))
				case 0xE: return instruction('MOV.L', pointer_offset(register(0), register(nibble3)), register(nibble2))
				case 0xF: return instruction('MAC.L', pointer_increment(nibble3), pointer_increment(nibble2))
			}
			break
		case 0x1: return instruction('MOV.L', register(nibble3), pointer_offset(displacement(4, nibble4), register(nibble2)))
		case 0x2:
			switch (nibble4) {
				case 0x0: return instruction('MOV.B', register(nibble3), pointer(nibble2))
				case 0x1: return instruction('MOV.W', register(nibble3), pointer(nibble2))
				case 0x2: return instruction('MOV.L', register(nibble3), pointer(nibble2))
				case 0x3: break
				case 0x4: return instruction('MOV.B', register(nibble3), pointer_decrement(nibble2))
				case 0x5: return instruction('MOV.W', register(nibble3), pointer_decrement(nibble2))
				case 0x6: return instruction('MOV.L', register(nibble3), pointer_decrement(nibble2))
				case 0x7: return instruction('DIV0S', register(nibble3), register(nibble2))
				case 0x8: return instruction('TST', register(nibble3), register(nibble2))
				case 0x9: return instruction('AND', register(nibble3), register(nibble2))
				case 0xA: return instruction('XOR', register(nibble3), register(nibble2))
				case 0xB: return instruction('OR', register(nibble3), register(nibble2))
				case 0xC: return instruction('CMP/STR', register(nibble3), register(nibble2))
				case 0xD: return instruction('XTRCT', register(nibble3), register(nibble2))
				case 0xE: return instruction('MULU.W', register(nibble3), register(nibble2))
				case 0xF: return instruction('MULS.W', register(nibble3), register(nibble2))
			}
			break
		case 0x3:
			switch (nibble4) {
				case 0x0: return instruction('CMP/EQ', register(nibble3), register(nibble2))
				case 0x1: break
				case 0x2: return instruction('CMP/HS', register(nibble3), register(nibble2))
				case 0x3: return instruction('CMP/GE', register(nibble3), register(nibble2))
				case 0x4: return instruction('DIV1', register(nibble3), register(nibble2))
				case 0x5: return instruction('DMULU.L', register(nibble3), register(nibble2))
				case 0x6: return instruction('CMP/HI', register(nibble3), register(nibble2))
				case 0x7: return instruction('CMP/GT', register(nibble3), register(nibble2))
				case 0x8: return instruction('SUB', register(nibble3), register(nibble2))
				case 0x9: break
				case 0xA: return instruction('SUBC', register(nibble3), register(nibble2))
				case 0xB: return instruction('SUBV', register(nibble3), register(nibble2))
				case 0xC: return instruction('ADD', register(nibble3), register(nibble2))
				case 0xD: return instruction('DMULS.L', register(nibble3), register(nibble2))
				case 0xE: return instruction('ADDC', register(nibble3), register(nibble2))
				case 0xF: return instruction('ADDV', register(nibble3), register(nibble2))
			}
			break
		case 0x4:
			switch (nibble4) {
				case 0x0:
					switch (nibble3) {
						case 0x0: return instruction('SHLL', register(nibble2))
						case 0x1: return instruction('DT', register(nibble2))
						case 0x2: return instruction('SHAL', register(nibble2))
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0x1:
					switch (nibble3) {
						case 0x0: return instruction('SHLR', register(nibble2))
						case 0x1: return instruction('CMP/PZ', register(nibble2))
						case 0x2: return instruction('SHAR', register(nibble2))
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0x2:
					switch (nibble3) {
						case 0x0: return instruction('STS.L', 'MACH', pointer_decrement(nibble2))
						case 0x1: return instruction('STS.L', 'MACL', pointer_decrement(nibble2))
						case 0x2: return instruction('STS.L', 'PR', pointer_decrement(nibble2))
						case 0x3: break
						case 0x4: break
						// case 0x5: return instruction('STS.L', 'FPUL', pointer_decrement(nibble2))
						// case 0x6: return instruction('STS.L', 'DSR', pointer_decrement(nibble2))
						// case 0x7: return instruction('STS.L', 'A0', pointer_decrement(nibble2))
						// case 0x8: return instruction('STS.L', 'X0', pointer_decrement(nibble2))
						// case 0x9: return instruction('STS.L', 'X1', pointer_decrement(nibble2))
						// case 0xA: return instruction('STS.L', 'Y0', pointer_decrement(nibble2))
						// case 0xB: return instruction('STS.L', 'Y1', pointer_decrement(nibble2))
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0x3:
					switch (nibble3) {
						case 0x0: return instruction('STC.L', 'SR', pointer_decrement(nibble2))
						case 0x1: return instruction('STC.L', 'GBR', pointer_decrement(nibble2))
						case 0x2: return instruction('STC.L', 'VBR', pointer_decrement(nibble2))
						case 0x3: return instruction('STC.L', 'SSR', pointer_decrement(nibble2))
						case 0x4: return instruction('STC.L', 'SPC', pointer_decrement(nibble2))
						// case 0x5: return instruction('STC.L', 'MOD', pointer_decrement(nibble2))
						// case 0x6: return instruction('STC.L', 'RS', pointer_decrement(nibble2))
						// case 0x7: return instruction('STC.L', 'RE', pointer_decrement(nibble2))
						case 0x8: return instruction('STC.L', 'R0_BANK', pointer_decrement(nibble2))
						case 0x9: return instruction('STC.L', 'R1_BANK', pointer_decrement(nibble2))
						case 0xA: return instruction('STC.L', 'R2_BANK', pointer_decrement(nibble2))
						case 0xB: return instruction('STC.L', 'R3_BANK', pointer_decrement(nibble2))
						case 0xC: return instruction('STC.L', 'R4_BANK', pointer_decrement(nibble2))
						case 0xD: return instruction('STC.L', 'R5_BANK', pointer_decrement(nibble2))
						case 0xE: return instruction('STC.L', 'R6_BANK', pointer_decrement(nibble2))
						case 0xF: return instruction('STC.L', 'R7_BANK', pointer_decrement(nibble2))
					}
					break
				case 0x4:
					switch (nibble3) {
						case 0x0: return instruction('ROTL', register(nibble2))
						// case 0x1: return instruction('SETRC', register(nibble2))
						case 0x2: return instruction('ROTCL', register(nibble2))
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0x5:
					switch (nibble3) {
						case 0x0: return instruction('ROTR', register(nibble2))
						case 0x1: return instruction('CMP/PL', register(nibble2))
						case 0x2: return instruction('ROTCR', register(nibble2))
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0x6:
					switch (nibble3) {
						case 0x0: return instruction('LDS.L', pointer_increment(nibble2), 'MACH')
						case 0x1: return instruction('LDS.L', pointer_increment(nibble2), 'MACL')
						case 0x2: return instruction('LDS.L', pointer_increment(nibble2), 'PR')
						case 0x3: break
						case 0x4: break
						// case 0x5: return instruction('LDS.L', pointer_increment(nibble2), 'FPUL')
						// case 0x6: return instruction('LDS.L', pointer_increment(nibble2), 'DSR')
						// case 0x7: return instruction('LDS.L', pointer_increment(nibble2), 'A0')
						// case 0x8: return instruction('LDS.L', pointer_increment(nibble2), 'X0')
						// case 0x9: return instruction('LDS.L', pointer_increment(nibble2), 'X1')
						// case 0xA: return instruction('LDS.L', pointer_increment(nibble2), 'Y0')
						// case 0xB: return instruction('LDS.L', pointer_increment(nibble2), 'Y1')
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0x7:
					switch (nibble3) {
						case 0x0: return instruction('LDC.L', pointer_increment(nibble2), 'SR')
						case 0x1: return instruction('LDC.L', pointer_increment(nibble2), 'GBR')
						case 0x2: return instruction('LDC.L', pointer_increment(nibble2), 'VBR')
						case 0x3: return instruction('LDC.L', pointer_increment(nibble2), 'SSR')
						case 0x4: return instruction('LDC.L', pointer_increment(nibble2), 'SPC')
						// case 0x5: return instruction('LDC.L', pointer_increment(nibble2), 'MOD')
						// case 0x6: return instruction('LDC.L', pointer_increment(nibble2), 'RS')
						// case 0x7: return instruction('LDC.L', pointer_increment(nibble2), 'RE')
						case 0x8: return instruction('LDC.L', pointer_increment(nibble2), 'R0_BANK')
						case 0x9: return instruction('LDC.L', pointer_increment(nibble2), 'R1_BANK')
						case 0xA: return instruction('LDC.L', pointer_increment(nibble2), 'R2_BANK')
						case 0xB: return instruction('LDC.L', pointer_increment(nibble2), 'R3_BANK')
						case 0xC: return instruction('LDC.L', pointer_increment(nibble2), 'R4_BANK')
						case 0xD: return instruction('LDC.L', pointer_increment(nibble2), 'R5_BANK')
						case 0xE: return instruction('LDC.L', pointer_increment(nibble2), 'R6_BANK')
						case 0xF: return instruction('LDC.L', pointer_increment(nibble2), 'R7_BANK')
					}
					break
				case 0x8:
					switch (nibble3) {
						case 0x0: return instruction('SHLL2', register(nibble2))
						case 0x1: return instruction('SHLL8', register(nibble2))
						case 0x2: return instruction('SHLL16', register(nibble2))
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0x9:
					switch (nibble3) {
						case 0x0: return instruction('SHLR2', register(nibble2))
						case 0x1: return instruction('SHLR8', register(nibble2))
						case 0x2: return instruction('SHLR16', register(nibble2))
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0xA:
					switch (nibble3) {
						case 0x0: return instruction('LDS', register(nibble2), 'MACH')
						case 0x1: return instruction('LDS', register(nibble2), 'MACL')
						case 0x2: return instruction('LDS', register(nibble2), 'PR')
						case 0x3: break
						case 0x4: break
						// case 0x5: return instruction('LDS', register(nibble2), 'FPUL')
						// case 0x6: return instruction('LDS', register(nibble2), 'DSR')
						// case 0x7: return instruction('LDS', register(nibble2), 'A0')
						// case 0x8: return instruction('LDS', register(nibble2), 'X0')
						// case 0x9: return instruction('LDS', register(nibble2), 'X1')
						// case 0xA: return instruction('LDS', register(nibble2), 'Y0')
						// case 0xB: return instruction('LDS', register(nibble2), 'Y1')
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0xB:
					switch (nibble3) {
						case 0x0: return instruction('JSR', pointer(nibble2))
						case 0x1: return instruction('TAS.B', pointer(nibble2))
						case 0x2: return instruction('JMP', pointer(nibble2))
						case 0x3: break
						case 0x4: break
						case 0x5: break
						case 0x6: break
						case 0x7: break
						case 0x8: break
						case 0x9: break
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0xC: return instruction('SHAD', register(nibble3), register(nibble2))
				case 0xD: return instruction('SHLD', register(nibble3), register(nibble2))
				case 0xE:
					switch (nibble3) {
						case 0x0: return instruction('LDC', register(nibble2), 'SR')
						case 0x1: return instruction('LDC', register(nibble2), 'GBR')
						case 0x2: return instruction('LDC', register(nibble2), 'VBR')
						case 0x3: return instruction('LDC', register(nibble2), 'SSR')
						case 0x4: return instruction('LDC', register(nibble2), 'SPC')
						// case 0x5: return instruction('LDC', register(nibble2), 'MOD')
						// case 0x6: return instruction('LDC', register(nibble2), 'RS')
						// case 0x7: return instruction('LDC', register(nibble2), 'RE')
						case 0x8: return instruction('LDC', register(nibble2), 'R0_BANK')
						case 0x9: return instruction('LDC', register(nibble2), 'R1_BANK')
						case 0xA: return instruction('LDC', register(nibble2), 'R2_BANK')
						case 0xB: return instruction('LDC', register(nibble2), 'R3_BANK')
						case 0xC: return instruction('LDC', register(nibble2), 'R4_BANK')
						case 0xD: return instruction('LDC', register(nibble2), 'R5_BANK')
						case 0xE: return instruction('LDC', register(nibble2), 'R6_BANK')
						case 0xF: return instruction('LDC', register(nibble2), 'R7_BANK')
					}
					break
				case 0xF: return instruction('MAC.W', pointer_increment(nibble3), pointer_increment(nibble2))
			}
			break
		case 0x5: return instruction('MOV.L', pointer_offset(displacement(4, nibble4), register(nibble3)), register(nibble2))
		case 0x6:
			switch (nibble4) {
				case 0x0: return instruction('MOV.B', pointer(nibble3), register(nibble2))
				case 0x1: return instruction('MOV.W', pointer(nibble3), register(nibble2))
				case 0x2: return instruction('MOV.L', pointer(nibble3), register(nibble2))
				case 0x3: return instruction('MOV', register(nibble3), register(nibble2))
				case 0x4: return instruction('MOV.B', pointer_increment(nibble3), register(nibble2))
				case 0x5: return instruction('MOV.W', pointer_increment(nibble3), register(nibble2))
				case 0x6: return instruction('MOV.L', pointer_increment(nibble3), register(nibble2))
				case 0x7: return instruction('NOT', register(nibble3), register(nibble2))
				case 0x8: return instruction('SWAP.B', register(nibble3), register(nibble2))
				case 0x9: return instruction('SWAP.W', register(nibble3), register(nibble2))
				case 0xA: return instruction('NEGC', register(nibble3), register(nibble2))
				case 0xB: return instruction('NEG', register(nibble3), register(nibble2))
				case 0xC: return instruction('EXTU.B', register(nibble3), register(nibble2))
				case 0xD: return instruction('EXTU.W', register(nibble3), register(nibble2))
				case 0xE: return instruction('EXTS.B', register(nibble3), register(nibble2))
				case 0xF: return instruction('EXTS.W', register(nibble3), register(nibble2))
			}
			break
		case 0x7: return instruction('ADD', immediate(1, nibble3, nibble4), register(nibble2))
		case 0x8:
			switch (nibble2) {
				case 0x0: return instruction('MOV.B', register(0), pointer_offset(displacement(1, nibble4), register(nibble3)))
				case 0x1: return instruction('MOV.W', register(0), pointer_offset(displacement(2, nibble4), register(nibble3)))
				// case 0x2: return instruction('SETRC', immediate(1, nibble3, nibble4))
				case 0x3: break
				case 0x4: return instruction('MOV.B', pointer_offset(displacement(1, nibble4), register(nibble3)), register(0))
				case 0x5: return instruction('MOV.W', pointer_offset(displacement(2, nibble4), register(nibble3)), register(0))
				case 0x6: break
				case 0x7: break
				case 0x8: return instruction('CMP/EQ', immediate(1, nibble3, nibble4), register(0))
				case 0x9: return instruction('BT', address_branch(line, nibble3, nibble4))
				case 0xA: break
				case 0xB: return instruction('BF', address_branch(line, nibble3, nibble4))
				// case 0xC: return instruction('LDRS', pointer_offset(displacement(1, nibble3, nibble4), 'PC'))
				case 0xD:
					// if (line & 1)
					// 	break
					return instruction('BT/S', address_branch(line, nibble3, nibble4))
				// case 0xE: return instruction('LDRE', pointer_offset(displacement(1, nibble3, nibble4), 'PC'))
				case 0xF:
					// if (line & 1)
					// 	break
					return instruction('BF/S', address_branch(line, nibble3, nibble4))
			}
			break
		case 0x9: return instruction('MOV.W', address_mov(line, 2, nibble3, nibble4), register(nibble2))
		// case 0x9: return instruction('MOV.W', pointer_offset(displacement(2, nibble3, nibble4), 'PC'), register(nibble2))
		case 0xA:
			// if (line & 1)
			// 	break
			return instruction('BRA', address_branch(line, nibble2, nibble3, nibble4))
		case 0xB:
			// if (line & 1)
			// 	break
			return instruction('BSR', address_branch(line, nibble2, nibble3, nibble4))
		case 0xC:
			switch (nibble2) {
				case 0x0: return instruction('MOV.B', register(0), pointer_offset(displacement(1, nibble3, nibble4), 'GBR'))
				case 0x1: return instruction('MOV.W', register(0), pointer_offset(displacement(2, nibble3, nibble4), 'GBR'))
				case 0x2: return instruction('MOV.L', register(0), pointer_offset(displacement(4, nibble3, nibble4), 'GBR'))
				case 0x3: return instruction('TRAPA', immediate(1, nibble3, nibble4))
				case 0x4: return instruction('MOV.B', pointer_offset(displacement(1, nibble3, nibble4), 'GBR'), register(0))
				case 0x5: return instruction('MOV.W', pointer_offset(displacement(2, nibble3, nibble4), 'GBR'), register(0))
				case 0x6: return instruction('MOV.L', pointer_offset(displacement(4, nibble3, nibble4), 'GBR'), register(0))
				case 0x7: return instruction('MOVA.L', pointer_offset(displacement(4, nibble3, nibble4), 'PC'), register(0))
				case 0x8: return instruction('TST', immediate(1, nibble3, nibble4), register(0))
				case 0x9: return instruction('AND', immediate(1, nibble3, nibble4), register(0))
				case 0xA: return instruction('XOR', immediate(1, nibble3, nibble4), register(0))
				case 0xB: return instruction('OR', immediate(1, nibble3, nibble4), register(0))
				case 0xC: return instruction('TST.B', immediate(1, nibble3, nibble4), pointer_offset(register(0), 'GBR'))
				case 0xD: return instruction('AND.B', immediate(1, nibble3, nibble4), pointer_offset(register(0), 'GBR'))
				case 0xE: return instruction('XOR.B', immediate(1, nibble3, nibble4), pointer_offset(register(0), 'GBR'))
				case 0xF: return instruction('OR.B', immediate(1, nibble3, nibble4), pointer_offset(register(0), 'GBR'))
			}
			break
		case 0xD: return instruction('MOV.L', address_mov(line, 4, nibble3, nibble4), register(nibble2))
		// case 0xD: return instruction('MOV.L', pointer_offset(displacement(4, nibble3, nibble4), 'PC'), register(nibble2))
		case 0xE: return instruction('MOV', immediate(1, nibble3, nibble4), register(nibble2))
		case 0xF:
			break	// Floating Point instructions
			switch (nibble4) {
				case 0x0: return instruction('FADD', float_register(nibble3), float_register(nibble2))
				case 0x1: return instruction('FSUB', float_register(nibble3), float_register(nibble2))
				case 0x2: return instruction('FMUL', float_register(nibble3), float_register(nibble2))
				case 0x3: return instruction('FDIV', float_register(nibble3), float_register(nibble2))
				case 0x4: return instruction('FCMP/EQ', float_register(nibble3), float_register(nibble2))
				case 0x5: return instruction('FCMP/GT', float_register(nibble3), float_register(nibble2))
				case 0x6: return instruction('FMOV.S', pointer_offset(register(0), register(nibble3)), float_register(nibble2))
				case 0x7: return instruction('FMOV.S', float_register(nibble3), pointer_offset(register(0), register(nibble2)))
				case 0x8: return instruction('FMOV.S', pointer(nibble3), float_register(nibble2))
				case 0x9: return instruction('FMOV.S', pointer_increment(nibble3), float_register(nibble2))
				case 0xA: return instruction('FMOV.S', float_register(nibble3), pointer(nibble2))
				case 0xB: return instruction('FMOV.S', float_register(nibble3), pointer_decrement(nibble2))
				case 0xC: return instruction('FMOV', float_register(nibble3), float_register(nibble2))
				case 0xD:
					switch (nibble3) {
						case 0x0: return instruction('FSTS', 'FPUL', float_register(nibble2))
						case 0x1: return instruction('FLDS', float_register(nibble2), 'FPUL')
						case 0x2: return instruction('FLOAT', 'FPUL', float_register(nibble2))
						case 0x3: return instruction('FTRC', float_register(nibble2), 'FPUL')
						case 0x4: return instruction('FNEG', float_register(nibble2))
						case 0x5: return instruction('FABS', float_register(nibble2))
						case 0x6: return instruction('FSQRT', float_register(nibble2))
						case 0x7: break
						case 0x8: return instruction('FLDI0', float_register(nibble2))
						case 0x9: return instruction('FLDI1', float_register(nibble2))
						case 0xA: break
						case 0xB: break
						case 0xC: break
						case 0xD: break
						case 0xE: break
						case 0xF: break
					}
					break
				case 0xE: return instruction('FMAC', float_register(nibble3), float_register(nibble2))
				case 0xF: break
			}
			break
	}


	return instruction('.DATA.W', 'H\'' + byte.toString(16).toUpperCase().padStart(4, '0'))
}

function instruction(instruction, operand1, operand2) {

	if (instruction == null)
		return ''

	let text

	if (instruction.startsWith('.'))
		text = ' '
	else
		text = '\t'

	text += instruction

	if (operand1 == null)
		return text + padEndTab(instruction, 10)

	if (instruction.length < 4)
		text += '\t'

	text += '\t' + operand1

	if (operand2 == null)
		return text + padEndTab(operand1, 8)

	text += ','

	text += padEndTab(',' + operand1, 4)

	text += operand2

	text += padEndTab(operand2, 4)

	return text
}

function pointer(register1) {
	return '@' + register(register1)
}
function pointer_decrement(register1) {
	return '@-' + register(register1)
}
function pointer_increment(register1) {
	return '@' + register(register1) + '+'
}
function pointer_offset(operand1, operand2) {
	return '@(' + operand1 + ', ' + operand2 + ')'
}
function register(register) {
	if (register == 15)
		return 'SP'
	else
		return 'r' + register.toString()
}

function float_register(register) {
	return 'fr' + register.toString()
}

function immediate(size, number1, number2, number3) {
	return '#' + displacement(size, number1, number2, number3)
}

function displacement(size, number1, number2, number3) {
	if (number1 == null)
		return '0'

	if (number2 == null)
		return (number1 * size).toString()

	if (number3 == null)
		return 'H\'' + (((number1 << 4) + number2) * size).toString(16).toUpperCase().padStart(2, '0')

	return 'H\'' + (((number1 << 8) + (number2 << 4) + number3) * size).toString(16).toUpperCase().padStart(4, '0')
}

function address_branch(line, number1, number2, number3) {
	let offset
	const overflow = number3 == null ? (number2 == null ? (number1 == null ? 0 : 0x80) : 0x80) : 0x800

	if (number1 == null)
		offset = 0
	else if (number2 == null)
		offset = number1
	else if (number3 == null)
		offset = (number1 << 4) + number2
	else offset = (number1 << 8) + (number2 << 4) + number3


	if (offset >= overflow)
		offset -= overflow * 2

	const address = line + 4 + offset * 2

	if (address >= 0)
		return '$' + address.toString(16).toUpperCase().padStart(5, '0')

	return immediate(2, number1, number2, number3)
}
function address_mov(line, size, number1, number2, number3) {
	let offset

	if (number1 == null)
		offset = 0
	else if (number2 == null)
		offset = number1
	else if (number3 == null)
		offset = (number1 << 4) + number2
	else offset = (number1 << 8) + (number2 << 4) + number3

	const address = Math.ceil((line + 6 - size + offset * size) / size) * size

	if (address >= 0)
		return '$' + address.toString(16).toUpperCase().padStart(5, '0')

	return pointer_offset(displacement(size, number1, number2), 'PC')
}


function padEndTab(string, maxLength) {
	return ''.padEnd(maxLength - Math.trunc(string.length / 4), '\t')
}

exports.g1a_to_src = g1a_to_src