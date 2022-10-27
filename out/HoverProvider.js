const vscode = require("vscode")
const extension = require("./extension.js")


const HoverProvider = {
	async provideHover(document, position, token) {
		
		const { getNodeAtLocation } = await extension.parseTreeExtension.activate()

		const location = new vscode.Location(document.uri, position)
		let node = getNodeAtLocation(location)

		var markdownString = new vscode.MarkdownString()
		
		markdownString.appendCodeblock(node.text, 'casio')
		
		if (node.parent != null)
			markdownString.appendText(node.parent.type + ' => ')
		markdownString.appendText(node.type)

		const range = extension.nodeToVscodeRange(node)
		const hover = new vscode.Hover(markdownString, range)
		return hover
	}
}


exports.HoverProvider = HoverProvider