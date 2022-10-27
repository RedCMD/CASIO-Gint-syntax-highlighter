const vscode = require("vscode")
const extension = require("./extension.js")

const DefinitionProvider = {
	async provideDefinition(document, position, token) {
		const { getTree } = await extension.parseTreeExtension.activate()
		const tree = getTree(document)
		const rootNode = tree.rootNode
		const language = tree.getLanguage()
		const queryRef = language.query(`(label) @label`)
		const point = {
			row: position.line,
			column: position.character
		}
		const queryCapturesRef = queryRef.captures(rootNode, point, point)

		const locations = []
		const uri = document.uri

		const node = queryCapturesRef[0].node
		const originSelectionRange = extension.nodeToVscodeRange(node)
		const text = node.text

		const query = language.query(
			`(` +
			`	[` +
			`		(source_file (label) @label)` +
			`		(preprocessor .(["if" (macro)]) (label) @label)` +
			`	]` +
			`	(#match? @label "${text.replace(/(?<=\\)|[$?\\]/g, '\\\\$&')}:?")` +
			`)`
		)
		const queryCaptures = query.captures(rootNode)

		for (const capture of queryCaptures) {
			const targetRange = extension.nodeToVscodeRange(capture.node)
			const locationLink = {
				originSelectionRange: originSelectionRange,
				targetUri: uri,
				targetRange: targetRange,
				targetSelectionRange: targetRange
			}
			locations.push(locationLink)
		}


		if (locations.length == 0) {
			// vscode will automatically run the ReferenceProvider if the only location overlaps the input
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
	}
}


exports.DefinitionProvider = DefinitionProvider