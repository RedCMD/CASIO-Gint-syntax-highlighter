module.exports = grammar({
	name: "casio",
	extras: $ => [
		// $._whitespace,
		$.comment,
	],

	rules: {
		source_file: $ => seq(
			repeat(
				seq(
					_line($),
					/\r?\n/,
				),
			),
			_line($),
		),


		preprocessor: $ => alias(
			seq(
				/\.\w+/,
			),
			'preprocessor',
		),
		
		
		assembly: $ => choice(
			instruction($, /CLRMAC|CLR[ST]|NOP|RT[ES]|SET[ST]|SLEEP/),
			instruction($, /BRAF|BSRF|CMP\/P[LZ]|DT|LDTLB|MOVT|ROTC?[LR]|SHA[LR]|SHLL16|SHLL[28]?|SHLR16|SHLR[28]?|TAS\.B/, $.register),
			instruction($, /B[FT](\/S)?|BRA|BSR/, $.label),
			instruction($, /JMP|JSR|PREF/, $.pointer),
			instruction($, /SETRC|TRAPA/, $.numeric),
			instruction($, /(AND|X?OR|TST)\.B/, $.numeric, $.pointer_gbr),
			instruction($, /AND|X?OR|TST/, $.numeric, $.register_0),
			instruction($, /AND|X?OR|TST/, $.register, $.register),
			instruction($, /ADD/, choice($.register, $.numeric), $.register),
			instruction($, /ADD[CV]|CMP\/(G[ET]|H[IS]|STR)|DIV0[SU]|DIV1|DMUL[SU]\.L|EXT[US]\.[BW]|MUL\.L|MUL[SU](\.W)?|NEGC?|NOT|SH[AL]D|SUB[CV]?|SWAP\.[BW]|XTRCT/, $.register, $.register),
			instruction($, /CMP\/EQ/, choice($.register, $.numeric), $.register_0),
			instruction($, /LDC\.L/, $.pointer, $.register_control),
			instruction($, /LDC/, $.register, $.register_control),
			instruction($, /LDS\.L/, $.pointer, $.register_system),
			instruction($, /LDS/, $.register, $.register_system),
			instruction($, /MAC\.[WL]/, $.pointer_increment, $.pointer_increment),

			instruction($, /MOV/, choice($.register, $.numeric), $.register),
			
			// instruction($, /MOV\.B/, $.register_0, choice($.pointer_8x_gbr, $.pointer_4x_register)),
			instruction($, /MOV\.B/, $.register_0, $.register_0_pointer),
			// instruction($, /MOV\.B/, choice($.pointer_8x_gbr, $.pointer_4x_register), $.register_0),
			instruction($, /MOV\.B/, $.register_0_pointer, $.register_0),
			instruction($, /MOV\.B/, $.register, choice($.pointer, $.pointer_decrement, $.pointer_r0_register)),
			instruction($, /MOV\.B/, choice($.register, $.numeric, $.pointer, $.pointer_increment, $.pointer_r0_register), $.register),

			instruction($, /MOV\.W/, $.register, $.numeric),
			instruction($, /MOV\.L/, $.register, $.numeric),

			instruction($, /MOVA(\.L)?/, $.pointer_pc, $.register_0),
			instruction($, /STC\.L/, $.register_control, $.pointer),
			instruction($, /STC/, $.register_control, $.register),
			instruction($, /STS\.L/, $.register_system, $.pointer),
			instruction($, /STS/, $.register_system, $.register),
		),

		// register_0_pointer: $ => pointer_offset($, choice($.operand_4x_register, $.operand_8x_gbr)),
		register_0_pointer: $ => seq(
			'@',
			optional($._whitespace),
			'(',
			optional($._whitespace),
			choice($.operand_4x_register, $.operand_8x_gbr),
			optional($._whitespace),
			')'
		),
		// operand_4x_register: $ => operands($, $.numeric_4bit, $.register),
		operand_8x_gbr: $ => seq(/[01]\d*/, ',', alias(caseInsensitive('GBR'), 'GBR')),
		operand_4x_register: $ => seq(/0\d*/, ',', $.register),
		// operand_8x_gbr: $ => operands($, $.numeric_8bit, alias(caseInsensitive('GBR'), 'GBR')),

		

		register_control: $ => caseInsensitive(/GBR|VBR|MOD|RE|RS|R(1[0-5]|[0-9])_BANK|SPC|SS?R/),
		register_system: $ => caseInsensitive(/FPSCR|FPUL|MAC[HL]|PR|DSR|A0|[XY][01]/),
		pointer_pc: $ => pointer_offset($, $.register, caseInsensitive('PC')),
		pointer_gbr: $ => pointer_offset($, $.register_0, caseInsensitive('GBR')),
		// pointer_8x_gbr: $ => pointer_offset($, $.numeric_8bit, caseInsensitive('GBR')),
		// pointer_4x_register: $ => pointer_offset($, $.numeric_4bit, $.register),
		pointer_r0_register: $ => pointer_offset($, $.register_0, $.register),
		pointer_register_register: $ => pointer_offset($, $.register, $.register),
		pointer_decrement: $ => prec(1,
			seq(
				'@',
				optional($._whitespace),
				'-',
				optional($._whitespace),
				$.register,
			),
		),
		pointer_increment: $ => prec(1,
			seq(
				'@',
				optional($._whitespace),
				$.register,
				optional($._whitespace),
				'+',
			),
		),
		pointer: $ => seq(
			'@',
			optional($._whitespace),
			$.register,
		),
		register_0: $ => /[rR]0/,
		register: $ => /[rR](1[0-5]|\d)/,
		numeric: $ => choice(
			seq(
				'#',
				'H',
				'\'',
				alias(
					/[0-9A-Fa-f]{1,8}/,
					'numeric',
				),
			),
			seq(
				'#',
				optional(
					'-',
				),
				alias(
					$.numeric_8bit,
					'numeric',
				),
			),
		),
		numeric_8bit: $ => /25[0-5]|2[0-4]\d|1?\d\d?/,
		numeric_4bit: $ => /1[0-5]|\d/,


		label_colon: $ => alias(
			/[A-Za-z_]\w*:/,
			'label',
		),
		label: $ => alias(
			/[A-Za-z_]\w*/,
			'label',
		),


		// error: $ => alias(
		// 	/\w+/,
		// 	'error',
		// ),
		comment: $ => /;[^\r\n]*/,
		_whitespace: $ => /[ \t]+/,
	},
});

function _line($) {
	return seq(
		optional(
			choice(
				seq(
					optional($._whitespace),
					$.label_colon,
				),
				$.label,
			),
		),
		optional(
			seq(
				$._whitespace,
				choice(
					$.assembly,
					$.preprocessor,
				),
			),
		),
		optional($._whitespace),
		optional($.comment),
	)
}


function instruction($, instruction, operand1, operand2, operand3) {
	if (operand3)
		return seq(
			alias(
				caseInsensitive(instruction),
				'instruction',
			),
			$._whitespace,
			operand1,
			optional($._whitespace),
			',',
			optional($._whitespace),
			operand2,
			optional($._whitespace),
			',',
			optional($._whitespace),
			operand3,
		)
	if (operand2)
		return seq(
			alias(
				caseInsensitive(instruction),
				'instruction',
			),
			$._whitespace,
			operand1,
			optional($._whitespace),
			',',
			optional($._whitespace),
			operand2,
		)
	if (operand1)
		return seq(
			alias(
				caseInsensitive(instruction),
				'instruction',
			),
			$._whitespace,
			operand1,
		)
	return alias(
		caseInsensitive(instruction),
		'instruction',
	)
};

// function pointer_offset($, operand1, operand2) {
// 	return seq(
// 		'@',
// 		optional($._whitespace),
// 		'(',
// 		optional($._whitespace),
// 		operand1,
// 		optional($._whitespace),
// 		',',
// 		optional($._whitespace),
// 		operand2,
// 		optional($._whitespace),
// 		')'
// 	)
// }

function pointer_offset($, operands) {
	return seq(
		'@',
		optional($._whitespace),
		'(',
		optional($._whitespace),
		operands,
		optional($._whitespace),
		')'
	)
}


function operands($, operand1, operand2) {
	return seq(
		operand1,
		// optional($._whitespace),
		',',
		// optional($._whitespace),
		operand2,
	)
}


// function instruction($, instruction, operand1, operand2, operand3) {
// 	return seq(
// 		alias(
// 			caseInsensitive(instruction),
// 			'instruction',
// 		),
// 		() => {
// 			if (operand1)
// 				return seq(
// 					$._whitespace,
// 					operand1,
// 					() => {
// 						if (operand2)
// 							return seq(
// 								optional($._whitespace),
// 								',',
// 								optional($._whitespace),
// 								operand2,
// 								() => {
// 									if (operand3)
// 										return seq(
// 											optional($._whitespace),
// 											',',
// 											optional($._whitespace),
// 											operand3,
// 										)
// 								},
// 							)
// 					},
// 				)
// 		},
// 	)
// };


function caseInsensitive(string) {
	// Doesn't support letters inside character class (ranges)
	return new RegExp(
		typeof string === 'string' ?
			string
				.split('')
				.map(char =>
					char.match(/[a-zA-Z]/) ? `[${char.toLowerCase()}${char.toUpperCase()}]` :
						char.match(/[^_a-zA-Z0-9]/) ? '\\' + char :
							char
				)
				.join('')
			:
			string.toString().slice(1, -1)
				.split('')
				.map(char =>
					char.match(/[a-zA-Z]/) ? `[${char.toLowerCase()}${char.toUpperCase()}]` :
						char
				)
				.join('')
	)
};


// module.exports = grammar({
// 	name: "casio",

// 	rules: {
// 		source_file: $ => repeat(
// 			choice(
// 				$.register,
// 				seq(
// 					'{',
// 					$.label,
// 					'}',
// 				),
// 			),
// 		),

// 		// error: $ => alias(
// 		// 	/\w+/,
// 		// 	'error',
// 		// ),

// 		label: $ => alias(
// 			/\w+/,
// 			'label',
// 		),

// 		register: $ => alias(
// 			/r\d/,
// 			'register',
// 		),

// 	},
// });

// module.exports = grammar({
// 	name: "casio",
// 	extras: $ => [
// 		// $._whitespace,
// 		$.comment,
// 	],
// 	conflicts: $ => [
// 		[$.assembly,],
// 		[$.preprocessor,],
// 	],

// 	rules: {
// 		source_file: $ => seq(
// 			repeat(
// 				seq(
// 					_line($),
// 					/\r?\n/,
// 				),
// 			),
// 			_line($),
// 		),


// 		assembly: $ => seq(
// 			alias(
// 				/\w+/,
// 				'instruction',
// 			),
// 			optional(
// 				seq(
// 					$._whitespace,
// 					$._operand,
// 					repeat(
// 						seq(
// 							optional($._whitespace),
// 							',',
// 							optional($._whitespace),
// 							$._operand,
// 						),
// 					),
// 				),
// 			),
// 		),

// 		preprocessor: $ => seq(
// 			alias(
// 				/\.\w+/,
// 				'preprocessor',
// 			),
// 			optional(
// 				seq(
// 					$._whitespace,
// 					alias(
// 						/\w+/,
// 						'name',
// 					),
// 					repeat(
// 						seq(
// 							optional($._whitespace),
// 							',',
// 							optional($._whitespace),
// 							$._operand,
// 						),
// 					),
// 				),
// 			),
// 		),


// 		_operand: $ => choice(
// 			$.register,
// 			$.pointer,
// 			$.label,
// 		),

// 		register: $ => seq(
// 			'r',
// 			/1[0-5]|\d/,
// 		),
// 		pointer: $ => seq(
// 			'@',
// 			$.register,
// 		),


// 		label: $ => /\w+/,
// 		label_colon: $ => /\w+:/,

// 		comment: $ => /;[^\r\n]*/,
// 		_whitespace: $ => /[ \t]+/,
// 	},
// });

// function _line($) {
// 	return seq(
// 		optional(
// 			choice(
// 				seq(
// 					optional($._whitespace),
// 					$.label_colon,
// 				),
// 				$.label,
// 			),
// 		),
// 		optional(
// 			seq(
// 				$._whitespace,
// 				choice(
// 					$.assembly,
// 					$.preprocessor,
// 				),
// 			),
// 		),
// 		optional($._whitespace),
// 		optional($.comment),
// 	)
// }
