const vscode = require("vscode");
const extension = require("./extension.js");


const ReferenceProvider = {
	async provideReferences(document, position, context, token) {
		const { getNodeAtLocation } = await extension.parseTreeExtension.activate()
		const location = new vscode.Location(document.uri, position)
		const node = getNodeAtLocation(location)

		if (node.type != 'label')
			return

		const { getTree } = await extension.parseTreeExtension.activate()
		const tree = getTree(document)

		const text = node.text
		const locations = []

		this.getAllChildren(tree.rootNode, locations, text, document.uri)

		// vscode.window.showInformationMessage(JSON.stringify(locations))
		return locations
	},
	async getAllChildren(node, locations, text, uri) {
		node.namedChildren.forEach(childNode => {
			this.getAllChildren(childNode, locations, text, uri)
		})

		if (node.type != 'label')
			return

		if (node.text != text)
			return

		const range = extension.nodeToVscodeRange(node)
		const location = new vscode.Location(uri, range)
		locations.push(location)
	}
}


exports.ReferenceProvider = ReferenceProvider