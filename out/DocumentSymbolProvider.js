const vscode = require("vscode")
const extension = require("./extension.js")

const DocumentSymbolProvider = {
	async provideDocumentSymbols(document) {

		const { getTree } = await extension.parseTreeExtension.activate()

		const tree = getTree(document)
		const symbols = []

		this.getAllChildren(tree.rootNode, symbols)

		// vscode.window.showInformationMessage(JSON.stringify(symbols))
		return symbols
	},
	async getAllChildren(node, symbols) {
		// vscode.window.showInformationMessage(JSON.stringify(node.type))

		const symbolsChildren = []


		if (false)
			for (let index = 0; index < node.namedChildCount; index++)
				this.getAllChildren(node.namedChild(index), symbolsChildren)
		else
			for (let index = 0; index < node.childCount; index++)
				this.getAllChildren(node.child(index), symbolsChildren)


		const range = extension.nodeToVscodeRange(node)
		const documentSymbol = new vscode.DocumentSymbol(
			node.type,
			node.text,
			node.isNamed() ? vscode.SymbolKind.Function : vscode.SymbolKind.Field,
			range,
			range
		)

		documentSymbol.children = symbolsChildren
		symbols.push(documentSymbol)
	}
}

exports.DocumentSymbolProvider = DocumentSymbolProvider