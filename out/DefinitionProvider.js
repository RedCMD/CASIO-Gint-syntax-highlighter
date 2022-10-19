const vscode = require("vscode")
const extension = require("./extension.js")

const DefinitionProvider = {
	async provideDefinition(document, position, token) {
		const { getNodeAtLocation } = await extension.parseTreeExtension.activate()
		const uri = document.uri
		const location = new vscode.Location(uri, position)
		const node = getNodeAtLocation(location)

		if (node.type != 'label')
			return

		const { getTree } = await extension.parseTreeExtension.activate()
		const tree = getTree(document)
	
		const originSelectionRange = extension.nodeToVscodeRange(node)
		const text = node.text
		const locations = []

		if (node.parent.type == 'source_file') {
			tree.rootNode.namedChildren.forEach(rootNode => {
				rootNode.namedChildren.forEach(childNode => {
					this.getAllChildren(childNode, locations, text, uri, originSelectionRange)
				})
			})
			if (locations.length > 1)
				locations.length = 0
		} else {
			tree.rootNode.namedChildren.forEach(rootNode => {
				if (rootNode.type != 'label')
					return

				if (rootNode.text != text)
					return
		
				const targetRange = extension.nodeToVscodeRange(rootNode)
				const locationLink = {
					originSelectionRange: originSelectionRange,
					targetUri: uri,
					targetRange: targetRange,
					targetSelectionRange: targetRange
				}
				locations.push(locationLink)
			})
		}


		if (locations.length == 0) {
			// vscode will automatically run the ReferenceProvider if the only location is the same as the input
			const locationLink = {
				originSelectionRange: originSelectionRange,
				targetUri: uri,
				targetRange: originSelectionRange,
				targetSelectionRange: originSelectionRange
			}
			locations.push(locationLink)
		}

		// vscode.window.showInformationMessage(JSON.stringify(locations))
		return locations
	},
	async getAllChildren(node, locations, text, uri, originSelectionRange) {
		node.namedChildren.forEach(childNode => {
			this.getAllChildren(childNode, locations, text, uri, originSelectionRange)
		})

		if (node.type != 'label')
			return

		if (node.text != text)
			return

		const targetRange = extension.nodeToVscodeRange(node)
		const locationLink = {
			originSelectionRange: originSelectionRange,
			targetUri: uri,
			targetRange: targetRange,
			targetSelectionRange: targetRange
		}
		locations.push(locationLink)
	}
}

exports.DefinitionProvider = DefinitionProvider