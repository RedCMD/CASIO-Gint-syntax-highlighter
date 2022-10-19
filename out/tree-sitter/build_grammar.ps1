# location relative to build_grammar.ps1
Push-Location $PSScriptRoot

# generate the grammar files
tree-sitter generate

# build the wasm file
tree-sitter build-wasm

# return to previous location
Pop-Location