const vscode = require("vscode")
const extension = require("./extension.js")



const CodeLensProvider = {
	async provideCodeLenses(document, token) {
		const { getTree } = await extension.parseTreeExtension.activate()
		const tree = getTree(document)
		const language = tree.getLanguage()
		const query = language.query(
			`(source_file (label) @label)` +
			`(preprocessor .(["if" (macro)]) (label) @label)`
		)
		const queryCaptures = query.captures(tree.rootNode)

		const codeLenses = []

		for (const capture of queryCaptures) {
			const node = capture.node

			if (/^\$[0-9A-F]{5}:$/.test(node.text))
				continue

			const range = extension.nodeToVscodeRange(node)
			const codeLens = new vscode.CodeLens(range)
			codeLens.document = document
			codeLens.text = node.text
			codeLenses.push(codeLens)
		}

		// vscode.window.showInformationMessage(JSON.stringify(codeLenses))
		return codeLenses
	},
	async resolveCodeLens(codeLens, token) {
		const text = codeLens.text.replace(/:$|\n/, '')
		const document = codeLens.document

		const { getTree } = await extension.parseTreeExtension.activate()
		const tree = getTree(document)
		const language = tree.getLanguage()
		const query = language.query(
			`(` +
			`	[` +
			`		(assembly					(label) @label)` +
			`		(aif_arguments				(label) @label)` +
			`		(preprocessor .(directive)	(label) @label)` +
			`	]` +
			`	(#eq? @label "${text}")` +
			`)`
		)
		// const query = language.query(
		// 	`(assembly					(label) @label (#eq? @label "${text}"))` +
		// 	`(aif_arguments				(label) @label (#eq? @label "${text}"))` +
		// 	`(preprocessor .(directive) (label) @label (#eq? @label "${text}"))`
		// )
		const queryCaptures = query.captures(tree.rootNode)


		const locations = []
		const uri = document.uri

		for (const capture of queryCaptures) {
			const range = extension.nodeToVscodeRange(capture.node)
			const location = new vscode.Location(uri, range)
			locations.push(location)
		}


		const length = locations.length
		codeLens.command = {
			title: `${length} reference${length == 1 ? '' : 's'}`,
			tooltip: `Label: ${text}`,
			command: 'editor.action.showReferences',
			arguments: [
				uri,
				codeLens.range.start,
				locations
			]
		}

		// vscode.window.showInformationMessage(JSON.stringify(codeLens))
		return codeLens
	}
}


exports.CodeLensProvider = CodeLensProvider