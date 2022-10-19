const vscode = require("vscode");
const extension = require("./extension.js");



const CodeLensProvider = {
	async provideCodeLenses(document, token) {
		const { getTree } = await extension.parseTreeExtension.activate()
		const tree = getTree(document)

		const codeLenses = []

		this.getLabelDefinitions(tree.rootNode, codeLenses, document)

		// vscode.window.showInformationMessage(JSON.stringify(codeLenses))
		return codeLenses
	},
	async getLabelDefinitions(rootNode, codeLenses, document) {
		for (const node of rootNode.namedChildren) {
			if (node.type == 'preprocessor')
				if (node.firstChild.type == 'macro' || node.firstChild.type == 'if')
					this.getLabelDefinitions(node, codeLenses, document)

			if (node.type != 'label')
				continue

			const range = extension.nodeToVscodeRange(node)
			const codeLens = new vscode.CodeLens(range)
			codeLens.document = document
			codeLens.text = node.text
			codeLenses.push(codeLens)
		}
	},
	async resolveCodeLens(codeLens, token) {
		const document = codeLens.document
		const uri = document.uri

		const { getTree } = await extension.parseTreeExtension.activate()
		const tree = getTree(document)

		const text = codeLens.text.replace(/:$/, '')
		const line = codeLens.range.start.line

		const locations = []


		for (const rootNode of tree.rootNode.namedChildren) {
			// if (rootNode.startIndex > endIndex)
			// 	break
			for (const node of rootNode.namedChildren) {
				this.getAllChildren(node, locations, text, uri, line)
			}
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
	},
	async getAllChildren(node, locations, text, uri, line) {
		if (node.startPosition.row >= line)
			return
		
		for (const childNode of node.namedChildren)
			this.getAllChildren(childNode, locations, text, uri, line)

		if (node.parent.type == 'preprocessor')
			return

		if (node.type != 'label')
			return
		if (node.text != text)
			return

		const range = extension.nodeToVscodeRange(node)
		const location = new vscode.Location(uri, range)
		locations.push(location)
	}
}


exports.CodeLensProvider = CodeLensProvider