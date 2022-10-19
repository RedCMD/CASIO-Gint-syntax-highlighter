'use strict'
Object.defineProperty(exports, "__esModule", { value: true })


const vscode = require("vscode")

// const DocumentFormattingEditProvider = require("./DocumentFormattingEditProvider.js").DocumentFormattingEditProvider
const DocumentSemanticTokensProvider = require("./DocumentSemanticTokensProvider.js").DocumentSemanticTokensProvider
const SemanticTokensLegend = require("./DocumentSemanticTokensProvider.js").SemanticTokensLegend
const DocumentSymbolProvider = require("./DocumentSymbolProvider.js").DocumentSymbolProvider
// const CompletionItemProvider = require("./CompletionItemProvider.js").CompletionItemProvider
// const CodeActionProvider = require("./CodeActionProvider.js").CodeActionProvider
const DefinitionProvider = require("./DefinitionProvider.js").DefinitionProvider
const ReferenceProvider = require("./ReferenceProvider.js").ReferenceProvider
const CodeLensProvider = require("./CodeLensProvider.js").CodeLensProvider
const HoverProvider = require("./HoverProvider.js").HoverProvider

const g1a_to_src = require("./g1a_to_src.js").g1a_to_src
const DiagnosticCollection = require("./DiagnosticCollection.js").DiagnosticCollection



function nodeToVscodeRange(node) {
	const startPosition = node.startPosition
	const endPosition = node.endPosition

	return new vscode.Range(
		startPosition.row,
		startPosition.column,
		endPosition.row,
		endPosition.column
	)
}

function getNodeAtPosition(rootNode, position) {
	if (rootNode.type == 'value')
		return rootNode

	for (let index = 0; index < rootNode.namedChildCount; index++) {
		const childNode = rootNode.namedChild(index);
		if (nodeToVscodeRange(childNode).contains(position))
			return getNodeAtPosition(childNode, position)
	}

	return rootNode
}


function subscribeToDocumentChanges(context, callback, Disposable, ...args) {
	context.subscriptions.push(Disposable)

	if (vscode.window.activeTextEditor)
		if (vscode.languages.match(DocumentSelector, vscode.window.activeTextEditor.document))
			callback(vscode.window.activeTextEditor.document, Disposable, ...args)

	vscode.window.visibleTextEditors.forEach(editor => {
		if (vscode.languages.match(DocumentSelector, editor.document))
			callback(editor.document, Disposable, ...args)
	})

	context.subscriptions.push(
		vscode.workspace.onDidOpenTextDocument(TextDocument => {
			if (vscode.languages.match(DocumentSelector, TextDocument))
				callback(TextDocument, Disposable, ...args)
		})
	)
	
	context.subscriptions.push(
		vscode.window.onDidChangeActiveTextEditor(editor => {
			if (editor)
				if (vscode.languages.match(DocumentSelector, editor.document))
					callback(editor.document, Disposable, ...args)
		})
	)

	context.subscriptions.push(
		vscode.workspace.onDidChangeTextDocument(editor => {
			if (vscode.languages.match(DocumentSelector, editor.document))
				callback(editor.document, Disposable, ...args)
		})
	)

	context.subscriptions.push(
		vscode.workspace.onDidCloseTextDocument(
			document => Disposable.delete(document.uri)
		)
	)
}

const DocumentSelector = [
	{ language: 'casio' },
	{ language: '.asm' },
	{ language: '.src' },
	{ language: '.lst' },
	{ language: '.fsy' },
	{ language: '.s' }
]

// main()
async function activate(context) {
	// vscode.window.showInformationMessage(JSON.stringify())

	const parseTreeExtension = vscode.extensions.getExtension("pokey.parse-tree")
	if (parseTreeExtension == null)
		throw new Error("Depends on pokey.parse-tree extension")
	exports.parseTreeExtension = parseTreeExtension

	const { registerLanguage } = await parseTreeExtension.activate()
	const wasm = context.asAbsolutePath('out/tree-sitter/tree-sitter-casio.wasm')
	registerLanguage('casio', wasm)
	registerLanguage('.asm', wasm)
	registerLanguage('.src', wasm)
	registerLanguage('.lst', wasm)
	registerLanguage('.fsy', wasm)
	registerLanguage('.s', wasm)


	context.subscriptions.push(vscode.commands.registerCommand("casio.g1a_to_src", g1a_to_src))


	context.subscriptions.push(vscode.languages.registerHoverProvider(DocumentSelector, HoverProvider)) // mouse hovers
	context.subscriptions.push(vscode.languages.registerCodeLensProvider(DocumentSelector, CodeLensProvider)) // overhead references
	// context.subscriptions.push(vscode.languages.registerReferenceProvider(DocumentSelector, ReferenceProvider)) // right click => references
	// context.subscriptions.push(vscode.languages.registerDefinitionProvider(DocumentSelector, DefinitionProvider)) // ctrl+click
	// context.subscriptions.push(vscode.languages.registerCodeActionsProvider(DocumentSelector, CodeActionProvider)) // quick fixes
	// context.subscriptions.push(vscode.languages.registerCompletionItemProvider(DocumentSelector, CompletionItemProvider)) // intellisense
	context.subscriptions.push(vscode.languages.registerDocumentSymbolProvider(DocumentSelector, DocumentSymbolProvider)) // breadcrumbs
	// context.subscriptions.push(vscode.languages.registerDocumentFormattingEditProvider(DocumentSelector, DocumentFormattingEditProvider)) // right-click => format
	context.subscriptions.push(vscode.languages.registerDocumentSemanticTokensProvider(DocumentSelector, DocumentSemanticTokensProvider, SemanticTokensLegend)) // syntax highlighting

	subscribeToDocumentChanges(context, DiagnosticCollection, vscode.languages.createDiagnosticCollection("casio")) // squiggle errors
}


exports.nodeToVscodeRange = nodeToVscodeRange
exports.getNodeAtPosition = getNodeAtPosition

exports.activate = activate
function deactivate() { }
exports.deactivate = deactivate