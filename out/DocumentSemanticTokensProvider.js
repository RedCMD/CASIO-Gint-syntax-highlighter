const vscode = require("vscode")
const extension = require("./extension.js")


const tokenConversion = {

	char: 18,
	port: 6,
	register: 7,
	register0: 7,
	register_control: 7,
	register_system: 7,
	register_pointer_increment: 7,
	register_pointer_decrement: 7,
	memory: 10,
	label: 11,
	instruction: 15,
	macro: 19,
	preprocessor: 19,
	comment: 17,
	commentblock: 17,
	numeric: 20,
	constant: 20,
	relative: 20,
	char: 18,
	identifier: 7,
	variable: 8,
	
	comment_block: 17,

	a: 6,
	aqua: 6,
	b: 15,
	blue: 15,
	operators: 22,
	semicolon: 22,
	comma: 22,
	'(': 22,
	')': 22,
	';': 22,
	',': 22,
	':': 11,
	'#': 20,


	escape_sequence: 17,
	number: 20,
	true: 19,
	false: 19,
	null: 19,
	string: 18,
	char1: 18,
	char2: 18,
	char3: 18,

	import: 19,
	keyword: 19,
	func_name: 13,
	type: 15,
	header: 16,
	"instruction.unknown": 15,
	registerspecial: 7,
	address: 10,
	"string.special": 18,
	number: 20,
	"identifier.placeholder": 7,

	"error": 21,
}

const tokenTypesLegend = [
	"namespace",	// 0  %port
	"class",		// 1  %port
	"enum",			// 2  %port
	"interface",	// 3  %port
	"struct",		// 4  %port
	"typeParameter",// 5  %port
	"type",			// 6  %port
	"parameter",	// 7  $register
	"variable",		// 8  $register
	"property",		// 9  $register
	"enumMember",	// 10 #memory
	"decorator",	// 11 .label
	"event",		// 12 $register
	"function",		// 13 .label
	"method",		// 14 .label
	"macro",		// 15 instruction
	"label",		// 16 @macro
	"comment",		// 17 //comment
	"string",		// 18 "string"
	"keyword",		// 19 @macro
	"number",		// 20 -numeric
	"regexp",		// 21 
	"operator",		// 22 =operators
]

const tokenModifiersLegend = [ // idk what this does/is for
	"declaration",
	"definition",
	"readonly",
	"static",
	"deprecated",
	"abstract",
	"async",
	"modification",
	"documentation",
	"defaultLibrary",
	"strong",
	"bold",
	"strikethrough",
	"underline"
]

const SemanticTokensLegend = new vscode.SemanticTokensLegend(tokenTypesLegend, tokenModifiersLegend)


const DocumentSemanticTokensProvider = {
	async provideDocumentSemanticTokens(document, token) {
		const { getTree } = await extension.parseTreeExtension.activate()
		const tree = getTree(document)

		const builder = new vscode.SemanticTokensBuilder()
		this.getAllChildren(builder, tree.rootNode)

		const tokens = builder.build()
		// vscode.window.showInformationMessage(JSON.stringify(tokens))
		return tokens
	},
	async getAllChildren(builder, node) {

		for (let index = 0; index < node.childCount; index++)
			this.getAllChildren(builder, node.child(index))

		// vscode.window.showInformationMessage(JSON.stringify(tokenConversion['node.type']))

		if (node.childCount > 0)
			return

		const token = tokenConversion[node.type.toLowerCase()]
		if (token) {
			// vscode.window.showInformationMessage(JSON.stringify(node.text))
			let line = node.startPosition.row
			const char = node.startPosition.column

			if (line != node.endPosition.row) {
				const text = node.text.split(/\r?\n|\r/)

				builder.push(line, char, text.shift().length, token, 0)
				text.forEach(element => {
					line++
					builder.push(line, 0, element.length, token, 0)
				});

			} else {
				const length = node.endPosition.column - char
				builder.push(line, char, length, token, 0)

				// const range = extension.nodeToVscodeRange(node)
				// builder.push(range, node.type)
			}
		}
	}
}

exports.DocumentSemanticTokensProvider = DocumentSemanticTokensProvider
exports.SemanticTokensLegend = SemanticTokensLegend