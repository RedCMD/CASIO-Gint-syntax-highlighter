#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 350
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 4
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 10

enum {
  sym__word = 1,
  anon_sym_DOTEND = 2,
  aux_sym_source_file_token1 = 3,
  aux_sym_source_file_token2 = 4,
  sym_register_0 = 5,
  sym_register = 6,
  anon_sym_POUND = 7,
  anon_sym_DASH = 8,
  aux_sym_numeric_hex_token1 = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_numeric_hex_token2 = 11,
  sym_numeric_32bit = 12,
  sym_numeric_8bit = 13,
  sym_numeric_4bit = 14,
  anon_sym_DOTAIF = 15,
  anon_sym_DOTAELSE = 16,
  aux_sym__aif_token1 = 17,
  anon_sym_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_GE = 20,
  anon_sym_DOTMACRO = 21,
  anon_sym_COMMA = 22,
  aux_sym__macro_token1 = 23,
  aux_sym_preprocessor_token1 = 24,
  aux_sym_assembly_token1 = 25,
  aux_sym__argument_token1 = 26,
  aux_sym__argument_token2 = 27,
  anon_sym_AT = 28,
  anon_sym_LPAREN = 29,
  aux_sym_pointer_offset_token1 = 30,
  aux_sym_pointer_offset_token2 = 31,
  anon_sym_RPAREN = 32,
  sym_register_control = 33,
  sym_register_system = 34,
  anon_sym_PLUS = 35,
  anon_sym_COLON = 36,
  anon_sym_BSLASH = 37,
  anon_sym_AMP = 38,
  sym_comment = 39,
  sym__whitespace = 40,
  sym_source_file = 41,
  sym__line = 42,
  sym_constant = 43,
  sym__numeric = 44,
  sym_numeric_hex = 45,
  sym__aif = 46,
  sym_aif_arguments = 47,
  sym__macro = 48,
  sym_preprocessor = 49,
  sym_assembly = 50,
  sym__argument = 51,
  sym__operand = 52,
  sym_pointer_offset = 53,
  sym_pointer_decrement = 54,
  sym_pointer_increment = 55,
  sym_pointer = 56,
  sym_label = 57,
  aux_sym__label = 58,
  sym_label_colon = 59,
  sym_symbol = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_source_file_repeat2 = 62,
  aux_sym_source_file_repeat3 = 63,
  aux_sym_numeric_hex_repeat1 = 64,
  aux_sym__macro_repeat1 = 65,
  aux_sym_preprocessor_repeat1 = 66,
  aux_sym_assembly_repeat1 = 67,
  anon_alias_sym_char = 68,
  anon_alias_sym_char_label = 69,
  anon_alias_sym_numeric = 70,
  anon_alias_sym_variable = 71,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "name",
  [anon_sym_DOTEND] = ".END",
  [aux_sym_source_file_token1] = "source_file_token1",
  [aux_sym_source_file_token2] = "comment",
  [sym_register_0] = "register_0",
  [sym_register] = "register",
  [anon_sym_POUND] = "#",
  [anon_sym_DASH] = "-",
  [aux_sym_numeric_hex_token1] = "numeric_hex_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_numeric_hex_token2] = "constant",
  [sym_numeric_32bit] = "numeric_32bit",
  [sym_numeric_8bit] = "numeric_8bit",
  [sym_numeric_4bit] = "numeric_4bit",
  [anon_sym_DOTAIF] = "if",
  [anon_sym_DOTAELSE] = ".AELSE",
  [aux_sym__aif_token1] = "if_end",
  [anon_sym_EQ] = "comparsion",
  [anon_sym_LT] = "comparsion",
  [anon_sym_GE] = "comparsion",
  [anon_sym_DOTMACRO] = "macro",
  [anon_sym_COMMA] = ",",
  [aux_sym__macro_token1] = "macro_end",
  [aux_sym_preprocessor_token1] = "preprocessor",
  [aux_sym_assembly_token1] = "instruction",
  [aux_sym__argument_token1] = "string",
  [aux_sym__argument_token2] = "assign",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [aux_sym_pointer_offset_token1] = "GBR",
  [aux_sym_pointer_offset_token2] = "PC",
  [anon_sym_RPAREN] = ")",
  [sym_register_control] = "register_control",
  [sym_register_system] = "register_system",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_AMP] = "&",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_constant] = "constant",
  [sym__numeric] = "_numeric",
  [sym_numeric_hex] = "numeric_hex",
  [sym__aif] = "_aif",
  [sym_aif_arguments] = "aif_arguments",
  [sym__macro] = "_macro",
  [sym_preprocessor] = "preprocessor",
  [sym_assembly] = "assembly",
  [sym__argument] = "_argument",
  [sym__operand] = "_operand",
  [sym_pointer_offset] = "pointer_offset",
  [sym_pointer_decrement] = "pointer_decrement",
  [sym_pointer_increment] = "pointer_increment",
  [sym_pointer] = "pointer",
  [sym_label] = "label",
  [aux_sym__label] = "_label",
  [sym_label_colon] = "label",
  [sym_symbol] = "symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_numeric_hex_repeat1] = "numeric_hex_repeat1",
  [aux_sym__macro_repeat1] = "_macro_repeat1",
  [aux_sym_preprocessor_repeat1] = "preprocessor_repeat1",
  [aux_sym_assembly_repeat1] = "assembly_repeat1",
  [anon_alias_sym_char] = "char",
  [anon_alias_sym_char_label] = "char_label",
  [anon_alias_sym_numeric] = "numeric",
  [anon_alias_sym_variable] = "variable",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_DOTEND] = anon_sym_DOTEND,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_source_file_token2] = aux_sym_source_file_token2,
  [sym_register_0] = sym_register_0,
  [sym_register] = sym_register,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_numeric_hex_token1] = aux_sym_numeric_hex_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_numeric_hex_token2] = aux_sym_numeric_hex_token2,
  [sym_numeric_32bit] = sym_numeric_32bit,
  [sym_numeric_8bit] = sym_numeric_8bit,
  [sym_numeric_4bit] = sym_numeric_4bit,
  [anon_sym_DOTAIF] = anon_sym_DOTAIF,
  [anon_sym_DOTAELSE] = anon_sym_DOTAELSE,
  [aux_sym__aif_token1] = aux_sym__aif_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT] = anon_sym_EQ,
  [anon_sym_GE] = anon_sym_EQ,
  [anon_sym_DOTMACRO] = anon_sym_DOTMACRO,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__macro_token1] = aux_sym__macro_token1,
  [aux_sym_preprocessor_token1] = aux_sym_preprocessor_token1,
  [aux_sym_assembly_token1] = aux_sym_assembly_token1,
  [aux_sym__argument_token1] = aux_sym__argument_token1,
  [aux_sym__argument_token2] = aux_sym__argument_token2,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_pointer_offset_token1] = aux_sym_pointer_offset_token1,
  [aux_sym_pointer_offset_token2] = aux_sym_pointer_offset_token2,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_register_control] = sym_register_control,
  [sym_register_system] = sym_register_system,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_constant] = sym_constant,
  [sym__numeric] = sym__numeric,
  [sym_numeric_hex] = sym_numeric_hex,
  [sym__aif] = sym__aif,
  [sym_aif_arguments] = sym_aif_arguments,
  [sym__macro] = sym__macro,
  [sym_preprocessor] = sym_preprocessor,
  [sym_assembly] = sym_assembly,
  [sym__argument] = sym__argument,
  [sym__operand] = sym__operand,
  [sym_pointer_offset] = sym_pointer_offset,
  [sym_pointer_decrement] = sym_pointer_decrement,
  [sym_pointer_increment] = sym_pointer_increment,
  [sym_pointer] = sym_pointer,
  [sym_label] = sym_label,
  [aux_sym__label] = aux_sym__label,
  [sym_label_colon] = sym_label,
  [sym_symbol] = sym_symbol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_numeric_hex_repeat1] = aux_sym_numeric_hex_repeat1,
  [aux_sym__macro_repeat1] = aux_sym__macro_repeat1,
  [aux_sym_preprocessor_repeat1] = aux_sym_preprocessor_repeat1,
  [aux_sym_assembly_repeat1] = aux_sym_assembly_repeat1,
  [anon_alias_sym_char] = anon_alias_sym_char,
  [anon_alias_sym_char_label] = anon_alias_sym_char_label,
  [anon_alias_sym_numeric] = anon_alias_sym_numeric,
  [anon_alias_sym_variable] = anon_alias_sym_variable,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTEND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_token2] = {
    .visible = true,
    .named = false,
  },
  [sym_register_0] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_hex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_hex_token2] = {
    .visible = true,
    .named = false,
  },
  [sym_numeric_32bit] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_8bit] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_4bit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTAIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTAELSE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__aif_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTMACRO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__macro_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preprocessor_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_assembly_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__argument_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__argument_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pointer_offset_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pointer_offset_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_register_control] = {
    .visible = true,
    .named = true,
  },
  [sym_register_system] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric] = {
    .visible = false,
    .named = true,
  },
  [sym_numeric_hex] = {
    .visible = true,
    .named = true,
  },
  [sym__aif] = {
    .visible = false,
    .named = true,
  },
  [sym_aif_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__macro] = {
    .visible = false,
    .named = true,
  },
  [sym_preprocessor] = {
    .visible = true,
    .named = true,
  },
  [sym_assembly] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_pointer_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_decrement] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_increment] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__label] = {
    .visible = false,
    .named = false,
  },
  [sym_label_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_hex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__macro_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_preprocessor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assembly_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_char_label] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_numeric] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_variable] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_char_label,
  },
  [2] = {
    [1] = anon_alias_sym_char,
  },
  [3] = {
    [2] = anon_alias_sym_char,
  },
  [4] = {
    [1] = anon_alias_sym_numeric,
  },
  [5] = {
    [2] = anon_alias_sym_numeric,
  },
  [6] = {
    [4] = anon_alias_sym_variable,
  },
  [7] = {
    [1] = anon_alias_sym_variable,
  },
  [8] = {
    [2] = anon_alias_sym_variable,
  },
  [9] = {
    [3] = anon_alias_sym_variable,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(40);
      if (lookahead == 'R') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '_') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(95);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(98);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '1') ADVANCE(53);
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(41);
      if (lookahead == 'R') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(128);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(65);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(68);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '\r') ADVANCE(10);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '@') ADVANCE(112);
      if (lookahead == 'R') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(146);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(55);
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 14:
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'B' ||
          lookahead == 'L' ||
          lookahead == 'W' ||
          lookahead == 'b' ||
          lookahead == 'l' ||
          lookahead == 'w') ADVANCE(63);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '&') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOTEND);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'M') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOTEND);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '\r') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(30);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(32);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '_') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(35);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(37);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token1);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '5') ADVANCE(46);
      if (lookahead == '=') ADVANCE(17);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '=') ADVANCE(17);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '5') ADVANCE(53);
      if (lookahead == '=') ADVANCE(17);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '5') ADVANCE(55);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '=') ADVANCE(17);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOTAIF);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOTAELSE);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__aif_token1);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOTMACRO);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__macro_token1);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'A') ADVANCE(76);
      if (lookahead == 'M') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'A') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'A') ADVANCE(78);
      if (lookahead == 'M') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'M') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'M') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'A') ADVANCE(80);
      if (lookahead == 'M') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'C') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'D') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'D') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'D') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'D') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'E') ADVANCE(82);
      if (lookahead == 'I') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'E') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'I') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'I') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'I') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'L') ADVANCE(90);
      if (lookahead == 'N') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'M') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'O') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'R') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == 'S') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '1') ADVANCE(29);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(101);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '1') ADVANCE(29);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(96);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_assembly_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__argument_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__argument_token1);
      if (lookahead == '"') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__argument_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_register_control);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_register_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(116);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '1') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '1') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'm' ||
          lookahead == 'n') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '1') ADVANCE(31);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(130);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '=') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'E') ADVANCE(1);
      if (lookahead == 'G') ADVANCE(2);
      if (lookahead == 'L') ADVANCE(3);
      if (lookahead == 'g') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(6);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(7);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(8);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(10);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == 'Q') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'T') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(20);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_GE);
      END_STATE();
    case 14:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_register_system);
      END_STATE();
    case 17:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(23);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_pointer_offset_token2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_register_0);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_pointer_offset_token1);
      END_STATE();
    case 23:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'h' ||
          lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 20},
  [97] = {.lex_state = 20},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 20},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 20},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 20},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 14},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 20},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 20},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 14},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 14},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 14},
  [152] = {.lex_state = 20},
  [153] = {.lex_state = 14},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 14},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 20},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 14},
  [162] = {.lex_state = 14},
  [163] = {.lex_state = 20},
  [164] = {.lex_state = 20},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 14},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 3},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 20},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 20},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 20},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 20},
  [215] = {.lex_state = 20},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 2},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 20},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 2},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 20},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 20},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 20},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 20},
  [328] = {.lex_state = 20},
  [329] = {.lex_state = 2},
  [330] = {.lex_state = 20},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 2},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 20},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 26},
  [346] = {.lex_state = 20},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_DOTEND] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [sym_register_0] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_numeric_hex_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_numeric_hex_token2] = ACTIONS(1),
    [sym_numeric_32bit] = ACTIONS(1),
    [sym_numeric_8bit] = ACTIONS(1),
    [sym_numeric_4bit] = ACTIONS(1),
    [anon_sym_DOTAIF] = ACTIONS(1),
    [anon_sym_DOTAELSE] = ACTIONS(1),
    [aux_sym__aif_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GE] = ACTIONS(1),
    [anon_sym_DOTMACRO] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__macro_token1] = ACTIONS(1),
    [aux_sym_preprocessor_token1] = ACTIONS(1),
    [aux_sym_assembly_token1] = ACTIONS(1),
    [aux_sym__argument_token1] = ACTIONS(1),
    [aux_sym__argument_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym_pointer_offset_token1] = ACTIONS(1),
    [aux_sym_pointer_offset_token2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_register_control] = ACTIONS(1),
    [sym_register_system] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(348),
    [sym__line] = STATE(48),
    [sym_label] = STATE(202),
    [aux_sym__label] = STATE(108),
    [sym_label_colon] = STATE(202),
    [sym_symbol] = STATE(108),
    [aux_sym_source_file_repeat1] = STATE(48),
    [aux_sym_source_file_repeat2] = STATE(29),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__word] = ACTIONS(7),
    [aux_sym_source_file_token1] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(19), 1,
      aux_sym_source_file_token1,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(274), 1,
      sym_aif_arguments,
    ACTIONS(27), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(21), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(314), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [59] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      sym__whitespace,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(43), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(37), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(210), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [112] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(51), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(49), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(155), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [165] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(55), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(53), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(194), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [218] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(61), 1,
      sym__whitespace,
    STATE(7), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(59), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(57), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(276), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [271] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(45), 1,
      anon_sym_AT,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(43), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(37), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(210), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [324] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(63), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(326), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(67), 11,
      sym_register,
      aux_sym_numeric_hex_token1,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GE,
      sym_register_control,
      sym_register_system,
      sym__word,
    ACTIONS(69), 11,
      aux_sym_source_file_token1,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_COMMA,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_BSLASH,
  [413] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      sym__whitespace,
    STATE(14), 1,
      aux_sym_source_file_repeat2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(74), 3,
      sym_register,
      sym_register_control,
      sym_register_system,
    STATE(275), 7,
      sym_constant,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [453] = 16,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(82), 1,
      anon_sym_DOTAELSE,
    ACTIONS(84), 1,
      aux_sym__aif_token1,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    STATE(74), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [505] = 16,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(96), 1,
      anon_sym_DOTAELSE,
    ACTIONS(98), 1,
      aux_sym__aif_token1,
    STATE(74), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [557] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(102), 1,
      sym__whitespace,
    STATE(92), 1,
      aux_sym_source_file_repeat2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(100), 3,
      sym_register,
      sym_register_control,
      sym_register_system,
    STATE(158), 7,
      sym_constant,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [597] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(102), 1,
      sym__whitespace,
    STATE(92), 1,
      aux_sym_source_file_repeat2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(104), 3,
      sym_register,
      sym_register_control,
      sym_register_system,
    STATE(205), 7,
      sym_constant,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [637] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(106), 1,
      sym__whitespace,
    STATE(19), 1,
      aux_sym_source_file_repeat2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(104), 3,
      sym_register,
      sym_register_control,
      sym_register_system,
    STATE(205), 7,
      sym_constant,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [677] = 16,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(108), 1,
      anon_sym_DOTAELSE,
    ACTIONS(110), 1,
      aux_sym__aif_token1,
    STATE(74), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [729] = 16,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(112), 1,
      anon_sym_DOTAELSE,
    ACTIONS(114), 1,
      aux_sym__aif_token1,
    STATE(74), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [781] = 16,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(116), 1,
      anon_sym_DOTAELSE,
    ACTIONS(118), 1,
      aux_sym__aif_token1,
    STATE(74), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [833] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      sym__word,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(102), 1,
      sym__whitespace,
    STATE(92), 1,
      aux_sym_source_file_repeat2,
    STATE(98), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(120), 3,
      sym_register,
      sym_register_control,
      sym_register_system,
    STATE(195), 7,
      sym_constant,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
      sym_label,
  [873] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(110), 1,
      aux_sym__aif_token1,
    ACTIONS(122), 1,
      sym__whitespace,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [922] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__whitespace,
    ACTIONS(124), 1,
      aux_sym__aif_token1,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [971] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__whitespace,
    ACTIONS(126), 1,
      aux_sym__aif_token1,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1020] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(128), 1,
      aux_sym__macro_token1,
    ACTIONS(130), 1,
      sym__whitespace,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1069] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__whitespace,
    ACTIONS(132), 1,
      aux_sym__aif_token1,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1118] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(134), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1167] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__whitespace,
    ACTIONS(136), 1,
      aux_sym__aif_token1,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1216] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(138), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1265] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(84), 1,
      aux_sym__aif_token1,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__whitespace,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1314] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DOTEND,
    ACTIONS(142), 1,
      sym__whitespace,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1363] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(144), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1412] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym__aif_token1,
    ACTIONS(122), 1,
      sym__whitespace,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1461] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(146), 1,
      anon_sym_DOTEND,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1510] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(148), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1559] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__whitespace,
    ACTIONS(150), 1,
      aux_sym__aif_token1,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1608] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(152), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1657] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(154), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1706] = 15,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(122), 1,
      sym__whitespace,
    ACTIONS(156), 1,
      aux_sym__aif_token1,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1755] = 14,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym__whitespace,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(258), 1,
      sym_label_colon,
    STATE(128), 2,
      aux_sym__label,
      sym_symbol,
    STATE(273), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [1801] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(162), 1,
      sym__whitespace,
    STATE(41), 1,
      aux_sym_source_file_repeat2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    STATE(281), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
    ACTIONS(160), 4,
      sym_register_0,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
  [1835] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(166), 1,
      sym__whitespace,
    STATE(45), 1,
      aux_sym_source_file_repeat2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    STATE(256), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
    ACTIONS(164), 4,
      sym_register_0,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
  [1869] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    STATE(233), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
    ACTIONS(168), 4,
      sym_register_0,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
  [1903] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(172), 1,
      sym__whitespace,
    STATE(46), 1,
      aux_sym_source_file_repeat2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    STATE(233), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
    ACTIONS(168), 4,
      sym_register_0,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
  [1937] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    STATE(256), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
    ACTIONS(164), 4,
      sym_register_0,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
  [1971] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(176), 1,
      sym__whitespace,
    STATE(43), 1,
      aux_sym_source_file_repeat2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    STATE(251), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
    ACTIONS(174), 4,
      sym_register_0,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
  [2005] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    STATE(262), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
    ACTIONS(178), 4,
      sym_register_0,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
  [2039] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(25), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(105), 2,
      aux_sym__label,
      sym_symbol,
    STATE(182), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
    ACTIONS(180), 4,
      sym_register_0,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
  [2073] = 10,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      sym__word,
    ACTIONS(187), 1,
      aux_sym_source_file_token1,
    ACTIONS(190), 1,
      anon_sym_BSLASH,
    ACTIONS(193), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym__whitespace,
    STATE(38), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2107] = 10,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      aux_sym_source_file_token1,
    ACTIONS(203), 1,
      sym__whitespace,
    STATE(32), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2141] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(205), 1,
      aux_sym_source_file_token1,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__whitespace,
    STATE(17), 1,
      aux_sym_source_file_repeat2,
    STATE(77), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2172] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(214), 1,
      aux_sym_source_file_token1,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__whitespace,
    STATE(34), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2203] = 10,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(223), 1,
      aux_sym_source_file_token1,
    ACTIONS(225), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(213), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [2236] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(227), 1,
      aux_sym_source_file_token1,
    ACTIONS(230), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__whitespace,
    STATE(18), 1,
      aux_sym_source_file_repeat2,
    STATE(80), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2267] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(236), 1,
      aux_sym_source_file_token1,
    ACTIONS(239), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__whitespace,
    STATE(22), 1,
      aux_sym_source_file_repeat2,
    STATE(84), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2298] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(239), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym__whitespace,
    ACTIONS(245), 1,
      aux_sym_source_file_token1,
    STATE(22), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2329] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(248), 1,
      aux_sym_source_file_token1,
    ACTIONS(251), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym__whitespace,
    STATE(26), 1,
      aux_sym_source_file_repeat2,
    STATE(54), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2360] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym__whitespace,
    ACTIONS(257), 1,
      aux_sym_source_file_token1,
    STATE(26), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2391] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(208), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__whitespace,
    ACTIONS(260), 1,
      aux_sym_source_file_token1,
    STATE(17), 1,
      aux_sym_source_file_repeat2,
    STATE(73), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2422] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      aux_sym_source_file_token1,
    ACTIONS(266), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__whitespace,
    STATE(11), 1,
      aux_sym_source_file_repeat2,
    STATE(70), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2453] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_source_file_token1,
    ACTIONS(275), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__whitespace,
    STATE(25), 1,
      aux_sym_source_file_repeat2,
    STATE(64), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2484] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(281), 1,
      aux_sym_source_file_token1,
    ACTIONS(284), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym__whitespace,
    STATE(23), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2515] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(275), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__whitespace,
    ACTIONS(290), 1,
      aux_sym_source_file_token1,
    STATE(25), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2546] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(293), 1,
      aux_sym_source_file_token1,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym__whitespace,
    STATE(24), 1,
      aux_sym_source_file_repeat2,
    STATE(56), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2577] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(296), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym__whitespace,
    ACTIONS(302), 1,
      aux_sym_source_file_token1,
    STATE(24), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2608] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(305), 1,
      aux_sym_source_file_token1,
    ACTIONS(308), 1,
      sym_comment,
    ACTIONS(311), 1,
      sym__whitespace,
    STATE(33), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2639] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(314), 1,
      aux_sym_source_file_token1,
    ACTIONS(317), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym__whitespace,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
    STATE(57), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2670] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      aux_sym_source_file_token1,
    ACTIONS(326), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__whitespace,
    STATE(30), 1,
      aux_sym_source_file_repeat2,
    STATE(60), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2701] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(326), 1,
      sym_comment,
    ACTIONS(329), 1,
      sym__whitespace,
    ACTIONS(332), 1,
      aux_sym_source_file_token1,
    STATE(30), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2732] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(266), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__whitespace,
    ACTIONS(335), 1,
      aux_sym_source_file_token1,
    STATE(11), 1,
      aux_sym_source_file_repeat2,
    STATE(52), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2763] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(217), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__whitespace,
    ACTIONS(338), 1,
      aux_sym_source_file_token1,
    STATE(34), 1,
      aux_sym_source_file_repeat2,
    STATE(63), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2794] = 9,
    ACTIONS(184), 1,
      sym__word,
    ACTIONS(190), 1,
      anon_sym_BSLASH,
    ACTIONS(341), 1,
      aux_sym_source_file_token1,
    ACTIONS(345), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__whitespace,
    STATE(31), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2825] = 10,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      aux_sym_assembly_token1,
    ACTIONS(158), 1,
      sym__whitespace,
    ACTIONS(353), 1,
      aux_sym_source_file_token1,
    ACTIONS(355), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(252), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(289), 2,
      sym__aif,
      sym__macro,
  [2858] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      aux_sym_source_file_token1,
    ACTIONS(360), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym__whitespace,
    STATE(36), 1,
      aux_sym_source_file_repeat2,
    STATE(67), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2889] = 9,
    ACTIONS(184), 1,
      sym__word,
    ACTIONS(190), 1,
      anon_sym_BSLASH,
    ACTIONS(366), 1,
      aux_sym_source_file_token1,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__whitespace,
    STATE(20), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2920] = 4,
    ACTIONS(378), 1,
      sym__whitespace,
    STATE(74), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(69), 4,
      aux_sym_source_file_token1,
      aux_sym_assembly_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(67), 6,
      anon_sym_DOTAIF,
      anon_sym_DOTAELSE,
      aux_sym__aif_token1,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym__word,
  [2941] = 9,
    ACTIONS(184), 1,
      sym__word,
    ACTIONS(190), 1,
      anon_sym_BSLASH,
    ACTIONS(381), 1,
      aux_sym_source_file_token1,
    ACTIONS(385), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym__whitespace,
    STATE(28), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [2972] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym__whitespace,
    ACTIONS(393), 1,
      aux_sym_source_file_token1,
    STATE(36), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3003] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(396), 1,
      aux_sym_source_file_token1,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__whitespace,
    STATE(16), 1,
      aux_sym_source_file_repeat2,
    STATE(75), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3034] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(230), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_source_file_token1,
    ACTIONS(408), 1,
      sym__whitespace,
    STATE(31), 1,
      aux_sym_source_file_repeat2,
    STATE(83), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3065] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(230), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym__whitespace,
    ACTIONS(411), 1,
      aux_sym_source_file_token1,
    STATE(31), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3096] = 9,
    ACTIONS(184), 1,
      sym__word,
    ACTIONS(190), 1,
      anon_sym_BSLASH,
    ACTIONS(414), 1,
      aux_sym_source_file_token1,
    ACTIONS(418), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym__whitespace,
    STATE(37), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3127] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(426), 1,
      aux_sym_source_file_token1,
    ACTIONS(429), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__whitespace,
    STATE(37), 1,
      aux_sym_source_file_repeat2,
    STATE(50), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3158] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(266), 1,
      sym_comment,
    ACTIONS(435), 1,
      aux_sym_source_file_token1,
    ACTIONS(438), 1,
      sym__whitespace,
    STATE(28), 1,
      aux_sym_source_file_repeat2,
    STATE(79), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3189] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(429), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__whitespace,
    ACTIONS(441), 1,
      aux_sym_source_file_token1,
    STATE(37), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3220] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(444), 1,
      aux_sym_source_file_token1,
    ACTIONS(447), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym__whitespace,
    STATE(21), 1,
      aux_sym_source_file_repeat2,
    STATE(47), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3251] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(402), 1,
      sym__whitespace,
    ACTIONS(453), 1,
      aux_sym_source_file_token1,
    STATE(16), 1,
      aux_sym_source_file_repeat2,
    STATE(58), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3282] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(456), 1,
      aux_sym_source_file_token1,
    ACTIONS(459), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__whitespace,
    STATE(35), 1,
      aux_sym_source_file_repeat2,
    STATE(76), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3313] = 9,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      aux_sym_source_file_token1,
    ACTIONS(468), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__whitespace,
    STATE(27), 1,
      aux_sym_source_file_repeat2,
    STATE(61), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(108), 2,
      aux_sym__label,
      sym_symbol,
    STATE(202), 2,
      sym_label,
      sym_label_colon,
  [3344] = 4,
    ACTIONS(474), 1,
      sym__whitespace,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(69), 4,
      aux_sym_source_file_token1,
      aux_sym_assembly_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(67), 5,
      anon_sym_DOTEND,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym__word,
  [3364] = 4,
    ACTIONS(477), 1,
      sym__whitespace,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(69), 4,
      aux_sym_source_file_token1,
      aux_sym_assembly_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(67), 5,
      anon_sym_DOTAIF,
      aux_sym__aif_token1,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym__word,
  [3384] = 4,
    ACTIONS(480), 1,
      sym__whitespace,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(69), 4,
      aux_sym_source_file_token1,
      aux_sym_assembly_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(67), 5,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym__macro_token1,
      aux_sym_preprocessor_token1,
      sym__word,
  [3404] = 6,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(485), 1,
      anon_sym_DASH,
    ACTIONS(487), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(489), 1,
      sym_numeric_32bit,
    STATE(255), 2,
      sym_numeric_hex,
      sym_symbol,
    ACTIONS(483), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3427] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym__whitespace,
    STATE(92), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(69), 3,
      anon_sym_POUND,
      anon_sym_AT,
      anon_sym_BSLASH,
    ACTIONS(67), 4,
      sym_register,
      sym_register_control,
      sym_register_system,
      sym__word,
  [3448] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(67), 6,
      sym_register_0,
      aux_sym_numeric_hex_token1,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym__word,
  [3469] = 4,
    ACTIONS(497), 1,
      sym__whitespace,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(67), 4,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym__word,
    ACTIONS(69), 4,
      aux_sym_source_file_token1,
      aux_sym_assembly_token1,
      anon_sym_BSLASH,
      sym_comment,
  [3488] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(500), 1,
      anon_sym_DASH,
    ACTIONS(502), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(504), 1,
      sym_numeric_32bit,
    ACTIONS(483), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
    STATE(320), 2,
      sym_numeric_hex,
      sym_symbol,
  [3512] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym__word,
    ACTIONS(511), 1,
      anon_sym_BSLASH,
    STATE(96), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(509), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym__whitespace,
  [3532] = 4,
    ACTIONS(514), 1,
      sym__word,
    ACTIONS(517), 1,
      anon_sym_BSLASH,
    STATE(97), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(509), 5,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym_comment,
      sym__whitespace,
  [3550] = 4,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    STATE(97), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(520), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3567] = 2,
    ACTIONS(524), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 7,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [3580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(531), 1,
      anon_sym_BSLASH,
    STATE(100), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(526), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [3599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 6,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym__whitespace,
  [3614] = 4,
    ACTIONS(538), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(540), 1,
      anon_sym_BSLASH,
    STATE(107), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(536), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(544), 1,
      anon_sym_BSLASH,
    STATE(100), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(536), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [3650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 6,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym__whitespace,
  [3665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(550), 1,
      sym__word,
    STATE(96), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(520), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [3684] = 2,
    ACTIONS(552), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 7,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [3697] = 4,
    ACTIONS(554), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(557), 1,
      anon_sym_BSLASH,
    STATE(107), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(526), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3714] = 5,
    ACTIONS(7), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(560), 1,
      anon_sym_COLON,
    STATE(97), 2,
      aux_sym__label,
      sym_symbol,
    ACTIONS(520), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [3733] = 2,
    ACTIONS(562), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [3745] = 2,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [3757] = 1,
    ACTIONS(566), 7,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [3767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 6,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym__whitespace,
  [3779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 6,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym__whitespace,
  [3791] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 5,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym__whitespace,
  [3805] = 1,
    ACTIONS(568), 7,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [3815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 6,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym__whitespace,
  [3827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_SQUOTE,
    ACTIONS(546), 5,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym__whitespace,
  [3841] = 1,
    ACTIONS(572), 7,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [3851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(576), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GE,
  [3866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      sym__whitespace,
    STATE(141), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(578), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [3881] = 6,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(586), 1,
      sym_comment,
    ACTIONS(588), 1,
      sym__whitespace,
    STATE(135), 1,
      aux_sym_source_file_repeat2,
    STATE(248), 1,
      aux_sym_source_file_repeat3,
  [3900] = 1,
    ACTIONS(566), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [3909] = 1,
    ACTIONS(568), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [3918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 5,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym__whitespace,
  [3929] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      aux_sym_source_file_token1,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      sym__whitespace,
    STATE(160), 1,
      aux_sym__macro_repeat1,
    STATE(170), 1,
      aux_sym_source_file_repeat2,
  [3948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 5,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym__whitespace,
  [3959] = 5,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      sym__whitespace,
    STATE(127), 1,
      aux_sym_preprocessor_repeat1,
    STATE(218), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(596), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [3976] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(550), 1,
      sym__word,
    ACTIONS(560), 1,
      anon_sym_COLON,
    STATE(96), 2,
      aux_sym__label,
      sym_symbol,
  [3993] = 4,
    ACTIONS(606), 1,
      anon_sym_PLUS,
    ACTIONS(608), 1,
      sym__whitespace,
    STATE(211), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(604), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
  [4008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym__whitespace,
    STATE(162), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(611), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4023] = 5,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      sym__whitespace,
    STATE(131), 1,
      aux_sym_assembly_repeat1,
    STATE(224), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(615), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4040] = 4,
    ACTIONS(625), 1,
      anon_sym_PLUS,
    ACTIONS(627), 1,
      sym__whitespace,
    STATE(221), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(623), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
  [4055] = 1,
    ACTIONS(630), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [4064] = 6,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    ACTIONS(634), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym__whitespace,
    STATE(137), 1,
      aux_sym_source_file_repeat2,
    STATE(238), 1,
      aux_sym_source_file_repeat3,
  [4083] = 6,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    ACTIONS(634), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym__whitespace,
    STATE(167), 1,
      aux_sym_source_file_repeat2,
    STATE(238), 1,
      aux_sym_source_file_repeat3,
  [4102] = 1,
    ACTIONS(640), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [4111] = 6,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(638), 1,
      sym__whitespace,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 1,
      sym_comment,
    STATE(167), 1,
      aux_sym_source_file_repeat2,
    STATE(198), 1,
      aux_sym_source_file_repeat3,
  [4130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__whitespace,
    STATE(144), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(646), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4145] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__whitespace,
    STATE(144), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(650), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym__whitespace,
    STATE(138), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(652), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__whitespace,
    STATE(144), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(652), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__whitespace,
    STATE(144), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(656), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym__whitespace,
    STATE(147), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(658), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym__whitespace,
    STATE(144), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(69), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4235] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      sym_register,
    ACTIONS(667), 1,
      anon_sym_DASH,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    ACTIONS(671), 1,
      sym__whitespace,
    STATE(150), 1,
      aux_sym_source_file_repeat2,
  [4254] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_register,
    ACTIONS(675), 1,
      anon_sym_DASH,
    ACTIONS(677), 1,
      anon_sym_LPAREN,
    ACTIONS(679), 1,
      sym__whitespace,
    STATE(165), 1,
      aux_sym_source_file_repeat2,
  [4273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__whitespace,
    STATE(144), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(611), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4288] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      aux_sym_source_file_token1,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    ACTIONS(686), 1,
      sym__whitespace,
    STATE(148), 1,
      aux_sym__macro_repeat1,
    STATE(216), 1,
      aux_sym_source_file_repeat2,
  [4307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      sym__whitespace,
    STATE(142), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(689), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(693), 1,
      sym_register,
    ACTIONS(695), 1,
      anon_sym_DASH,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym__whitespace,
    STATE(139), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(699), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4356] = 1,
    ACTIONS(703), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [4365] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__whitespace,
    STATE(144), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(699), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4380] = 5,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    ACTIONS(709), 1,
      sym__whitespace,
    STATE(131), 1,
      aux_sym_assembly_repeat1,
    STATE(224), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(705), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4397] = 5,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    ACTIONS(716), 1,
      sym__whitespace,
    STATE(157), 1,
      aux_sym_preprocessor_repeat1,
    STATE(218), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(712), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4414] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__whitespace,
    STATE(144), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(578), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4429] = 5,
    ACTIONS(714), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      sym__whitespace,
    STATE(127), 1,
      aux_sym_preprocessor_repeat1,
    STATE(218), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(719), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4446] = 5,
    ACTIONS(707), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      sym__whitespace,
    STATE(154), 1,
      aux_sym_assembly_repeat1,
    STATE(224), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(724), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4463] = 1,
    ACTIONS(729), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [4472] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(731), 1,
      aux_sym_source_file_token1,
    ACTIONS(733), 1,
      sym__whitespace,
    STATE(148), 1,
      aux_sym__macro_repeat1,
    STATE(173), 1,
      aux_sym_source_file_repeat2,
  [4491] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym__whitespace,
    STATE(153), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(735), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym__whitespace,
    STATE(144), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(735), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4521] = 1,
    ACTIONS(739), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [4530] = 1,
    ACTIONS(741), 6,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym__word,
      sym_comment,
      sym__whitespace,
  [4539] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(743), 1,
      sym_register,
    ACTIONS(745), 1,
      anon_sym_DASH,
    ACTIONS(747), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym__whitespace,
    STATE(156), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(656), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4573] = 3,
    ACTIONS(751), 1,
      sym__whitespace,
    STATE(167), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      sym_comment,
  [4585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_BSLASH,
    ACTIONS(754), 1,
      aux_sym_numeric_hex_token2,
    STATE(103), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
  [4599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      aux_sym_source_file_token1,
    ACTIONS(756), 1,
      anon_sym_PLUS,
    ACTIONS(758), 1,
      sym__whitespace,
    STATE(181), 1,
      aux_sym_source_file_repeat2,
  [4615] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(731), 1,
      aux_sym_source_file_token1,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4631] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym__word,
    ACTIONS(765), 1,
      aux_sym_source_file_token1,
    ACTIONS(767), 1,
      sym__whitespace,
    STATE(172), 1,
      aux_sym_source_file_repeat2,
  [4647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym__whitespace,
    STATE(172), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(69), 2,
      aux_sym_source_file_token1,
      sym__word,
  [4661] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      aux_sym_source_file_token1,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      anon_sym_BSLASH,
    ACTIONS(774), 1,
      aux_sym_numeric_hex_token2,
    STATE(102), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
  [4691] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      aux_sym_source_file_token1,
    ACTIONS(776), 1,
      anon_sym_PLUS,
    ACTIONS(778), 1,
      sym__whitespace,
    STATE(232), 1,
      aux_sym_source_file_repeat2,
  [4707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4720] = 4,
    ACTIONS(783), 1,
      aux_sym_source_file_token1,
    ACTIONS(785), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym__whitespace,
    STATE(249), 1,
      aux_sym_source_file_repeat2,
  [4733] = 4,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(789), 1,
      aux_sym_source_file_token1,
    ACTIONS(791), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [4746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    ACTIONS(795), 1,
      sym__whitespace,
    STATE(176), 1,
      aux_sym_source_file_repeat2,
  [4759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(776), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      sym__whitespace,
    STATE(206), 1,
      aux_sym_source_file_repeat2,
  [4798] = 4,
    ACTIONS(789), 1,
      aux_sym_source_file_token1,
    ACTIONS(791), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym__whitespace,
    STATE(207), 1,
      aux_sym_source_file_repeat2,
  [4811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(803), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    ACTIONS(807), 1,
      sym__whitespace,
    STATE(184), 1,
      aux_sym_source_file_repeat2,
  [4837] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(805), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4850] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    ACTIONS(811), 1,
      sym__whitespace,
    STATE(186), 1,
      aux_sym_source_file_repeat2,
  [4863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(809), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    ACTIONS(815), 1,
      sym__whitespace,
    STATE(188), 1,
      aux_sym_source_file_repeat2,
  [4889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [4898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym__whitespace,
    ACTIONS(819), 1,
      sym__word,
    STATE(172), 1,
      aux_sym_source_file_repeat2,
  [4911] = 4,
    ACTIONS(821), 1,
      aux_sym_source_file_token1,
    ACTIONS(823), 1,
      sym_comment,
    ACTIONS(825), 1,
      sym__whitespace,
    STATE(245), 1,
      aux_sym_source_file_repeat2,
  [4924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      sym__word,
    ACTIONS(827), 1,
      sym__whitespace,
    STATE(214), 1,
      aux_sym_source_file_repeat2,
  [4937] = 1,
    ACTIONS(829), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4944] = 1,
    ACTIONS(831), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4951] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(833), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      aux_sym_source_file_repeat3,
  [4964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(833), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      aux_sym_source_file_repeat3,
  [4990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    ACTIONS(837), 1,
      sym__whitespace,
    STATE(197), 1,
      aux_sym_source_file_repeat2,
  [5003] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5016] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_RPAREN,
    ACTIONS(841), 1,
      sym__whitespace,
    STATE(200), 1,
      aux_sym_source_file_repeat2,
  [5029] = 4,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(843), 1,
      sym__whitespace,
    STATE(71), 1,
      aux_sym_source_file_repeat2,
  [5042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RPAREN,
    ACTIONS(845), 1,
      sym__whitespace,
    STATE(222), 1,
      aux_sym_source_file_repeat2,
  [5055] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(847), 1,
      aux_sym_source_file_token1,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5068] = 1,
    ACTIONS(849), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(851), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5088] = 4,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(853), 1,
      aux_sym_source_file_token1,
    ACTIONS(855), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [5101] = 4,
    ACTIONS(853), 1,
      aux_sym_source_file_token1,
    ACTIONS(855), 1,
      sym_comment,
    ACTIONS(857), 1,
      sym__whitespace,
    STATE(227), 1,
      aux_sym_source_file_repeat2,
  [5114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(859), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5127] = 1,
    ACTIONS(861), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(863), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [5156] = 4,
    ACTIONS(867), 1,
      aux_sym_source_file_token1,
    ACTIONS(869), 1,
      sym_comment,
    ACTIONS(871), 1,
      sym__whitespace,
    STATE(225), 1,
      aux_sym_source_file_repeat2,
  [5169] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym__whitespace,
    ACTIONS(873), 1,
      sym__word,
    STATE(172), 1,
      aux_sym_source_file_repeat2,
  [5182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym__word,
    ACTIONS(877), 1,
      sym__whitespace,
    STATE(191), 1,
      aux_sym_source_file_repeat2,
  [5195] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      sym_register,
    ACTIONS(881), 1,
      sym__whitespace,
    STATE(209), 1,
      aux_sym_source_file_repeat2,
  [5221] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5234] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      aux_sym_source_file_token1,
    ACTIONS(887), 1,
      sym__whitespace,
    STATE(171), 1,
      aux_sym_source_file_repeat2,
  [5247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(879), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(606), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5273] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5286] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
    ACTIONS(891), 1,
      sym__whitespace,
    STATE(235), 1,
      aux_sym_source_file_repeat2,
  [5299] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(893), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5312] = 4,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(895), 1,
      aux_sym_source_file_token1,
    ACTIONS(897), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [5325] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(899), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      aux_sym_source_file_repeat3,
  [5338] = 4,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(901), 1,
      aux_sym_source_file_token1,
    ACTIONS(903), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [5351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      sym_register,
    ACTIONS(907), 1,
      sym__whitespace,
    STATE(220), 1,
      aux_sym_source_file_repeat2,
  [5364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_register,
    ACTIONS(911), 1,
      sym__whitespace,
    STATE(283), 1,
      aux_sym_source_file_repeat2,
  [5377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [5386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(915), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(917), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      sym__whitespace,
    STATE(180), 1,
      aux_sym_source_file_repeat2,
  [5425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      ts_builtin_sym_end,
    ACTIONS(925), 1,
      aux_sym_source_file_token1,
    STATE(234), 1,
      aux_sym_source_file_repeat3,
  [5438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    ACTIONS(930), 1,
      sym__whitespace,
    STATE(240), 1,
      aux_sym_source_file_repeat2,
  [5464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      aux_sym_source_file_repeat3,
  [5490] = 4,
    ACTIONS(932), 1,
      aux_sym_source_file_token1,
    ACTIONS(934), 1,
      sym_comment,
    ACTIONS(936), 1,
      sym__whitespace,
    STATE(178), 1,
      aux_sym_source_file_repeat2,
  [5503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    ACTIONS(940), 1,
      sym__whitespace,
    STATE(244), 1,
      aux_sym_source_file_repeat2,
  [5529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    STATE(198), 1,
      aux_sym_source_file_repeat3,
  [5542] = 4,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(867), 1,
      aux_sym_source_file_token1,
    ACTIONS(869), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [5555] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(942), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5568] = 4,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(783), 1,
      aux_sym_source_file_token1,
    ACTIONS(785), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [5581] = 4,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(223), 1,
      aux_sym_source_file_token1,
    ACTIONS(225), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [5594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym__whitespace,
    ACTIONS(944), 1,
      sym__word,
    STATE(172), 1,
      aux_sym_source_file_repeat2,
  [5607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      aux_sym_source_file_repeat3,
  [5620] = 4,
    ACTIONS(142), 1,
      sym__whitespace,
    ACTIONS(932), 1,
      aux_sym_source_file_token1,
    ACTIONS(934), 1,
      sym_comment,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [5633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      aux_sym_source_file_token1,
    ACTIONS(632), 1,
      ts_builtin_sym_end,
    STATE(238), 1,
      aux_sym_source_file_repeat3,
  [5646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      anon_sym_COMMA,
    ACTIONS(948), 1,
      sym__whitespace,
    STATE(253), 1,
      aux_sym_source_file_repeat2,
  [5659] = 4,
    ACTIONS(223), 1,
      aux_sym_source_file_token1,
    ACTIONS(225), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym__whitespace,
    STATE(243), 1,
      aux_sym_source_file_repeat2,
  [5672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5685] = 1,
    ACTIONS(954), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5692] = 1,
    ACTIONS(956), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5699] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      sym__whitespace,
    STATE(261), 1,
      aux_sym_source_file_repeat2,
  [5712] = 1,
    ACTIONS(960), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5719] = 4,
    ACTIONS(353), 1,
      aux_sym_source_file_token1,
    ACTIONS(355), 1,
      sym_comment,
    ACTIONS(962), 1,
      sym__whitespace,
    STATE(51), 1,
      aux_sym_source_file_repeat2,
  [5732] = 1,
    ACTIONS(964), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5739] = 1,
    ACTIONS(966), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      sym__whitespace,
    STATE(279), 1,
      aux_sym_source_file_repeat2,
  [5772] = 1,
    ACTIONS(972), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5779] = 1,
    ACTIONS(974), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5786] = 1,
    ACTIONS(976), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5793] = 1,
    ACTIONS(978), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5800] = 1,
    ACTIONS(980), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5807] = 1,
    ACTIONS(982), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5814] = 1,
    ACTIONS(984), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5821] = 1,
    ACTIONS(986), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5828] = 1,
    ACTIONS(988), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5835] = 1,
    ACTIONS(990), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5842] = 4,
    ACTIONS(353), 1,
      aux_sym_source_file_token1,
    ACTIONS(355), 1,
      sym_comment,
    ACTIONS(992), 1,
      sym__whitespace,
    STATE(246), 1,
      aux_sym_source_file_repeat2,
  [5855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(994), 1,
      aux_sym_source_file_token1,
    ACTIONS(996), 1,
      sym__whitespace,
    STATE(204), 1,
      aux_sym_source_file_repeat2,
  [5868] = 1,
    ACTIONS(615), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5875] = 1,
    ACTIONS(596), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5882] = 3,
    ACTIONS(1000), 1,
      sym__whitespace,
    STATE(13), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(998), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [5893] = 3,
    ACTIONS(1005), 1,
      sym__whitespace,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(1003), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [5904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_register,
    ACTIONS(1012), 1,
      sym__whitespace,
    STATE(231), 1,
      aux_sym_source_file_repeat2,
  [5930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_COMMA,
    ACTIONS(1016), 1,
      sym__whitespace,
    STATE(237), 1,
      aux_sym_source_file_repeat2,
  [5943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1018), 1,
      aux_sym_source_file_token1,
    ACTIONS(1020), 1,
      sym__whitespace,
    STATE(2), 1,
      aux_sym_source_file_repeat2,
  [5956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1010), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [5977] = 1,
    ACTIONS(1022), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [5991] = 1,
    ACTIONS(1024), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5997] = 1,
    ACTIONS(1026), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6003] = 1,
    ACTIONS(1003), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6009] = 1,
    ACTIONS(1028), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6023] = 1,
    ACTIONS(1030), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6029] = 1,
    ACTIONS(1032), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym__whitespace,
    STATE(247), 1,
      aux_sym_source_file_repeat2,
  [6045] = 1,
    ACTIONS(1036), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6067] = 1,
    ACTIONS(1038), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__whitespace,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [6083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6091] = 1,
    ACTIONS(1042), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6105] = 1,
    ACTIONS(1044), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(966), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6119] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym__word,
    ACTIONS(1048), 1,
      anon_sym_AMP,
  [6129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(972), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(974), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6145] = 1,
    ACTIONS(1050), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6151] = 1,
    ACTIONS(1052), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1054), 1,
      sym__word,
    ACTIONS(1056), 1,
      anon_sym_AMP,
  [6167] = 1,
    ACTIONS(1058), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6173] = 1,
    ACTIONS(1060), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1062), 1,
      sym__whitespace,
    STATE(119), 1,
      aux_sym_source_file_repeat2,
  [6197] = 1,
    ACTIONS(1064), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6203] = 1,
    ACTIONS(1066), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6241] = 1,
    ACTIONS(1068), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6247] = 1,
    ACTIONS(1070), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1072), 1,
      sym__word,
    ACTIONS(1074), 1,
      anon_sym_AMP,
  [6263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(954), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6271] = 1,
    ACTIONS(1076), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1078), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1080), 1,
      sym__word,
    ACTIONS(1082), 1,
      anon_sym_AMP,
  [6295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__word,
  [6302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym_numeric_32bit,
  [6309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym__word,
  [6316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1090), 1,
      anon_sym_SQUOTE,
  [6323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      aux_sym_source_file_token1,
  [6330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym_source_file_token1,
  [6337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      aux_sym_source_file_token1,
  [6344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      aux_sym_source_file_token1,
  [6351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 1,
      sym_numeric_32bit,
  [6358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 1,
      anon_sym_SQUOTE,
  [6365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 1,
      sym__word,
  [6372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      aux_sym_source_file_token1,
  [6379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      aux_sym_source_file_token1,
  [6386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      aux_sym_source_file_token1,
  [6393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_source_file_token1,
  [6400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      aux_sym_source_file_token1,
  [6407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      aux_sym_source_file_token1,
  [6414] = 2,
    ACTIONS(1100), 1,
      aux_sym_source_file_token2,
    ACTIONS(1102), 1,
      sym_comment,
  [6421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 1,
      sym__word,
  [6428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 1,
      aux_sym_source_file_token1,
  [6435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 1,
      ts_builtin_sym_end,
  [6442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 165,
  [SMALL_STATE(6)] = 218,
  [SMALL_STATE(7)] = 271,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 377,
  [SMALL_STATE(10)] = 413,
  [SMALL_STATE(11)] = 453,
  [SMALL_STATE(12)] = 505,
  [SMALL_STATE(13)] = 557,
  [SMALL_STATE(14)] = 597,
  [SMALL_STATE(15)] = 637,
  [SMALL_STATE(16)] = 677,
  [SMALL_STATE(17)] = 729,
  [SMALL_STATE(18)] = 781,
  [SMALL_STATE(19)] = 833,
  [SMALL_STATE(20)] = 873,
  [SMALL_STATE(21)] = 922,
  [SMALL_STATE(22)] = 971,
  [SMALL_STATE(23)] = 1020,
  [SMALL_STATE(24)] = 1069,
  [SMALL_STATE(25)] = 1118,
  [SMALL_STATE(26)] = 1167,
  [SMALL_STATE(27)] = 1216,
  [SMALL_STATE(28)] = 1265,
  [SMALL_STATE(29)] = 1314,
  [SMALL_STATE(30)] = 1363,
  [SMALL_STATE(31)] = 1412,
  [SMALL_STATE(32)] = 1461,
  [SMALL_STATE(33)] = 1510,
  [SMALL_STATE(34)] = 1559,
  [SMALL_STATE(35)] = 1608,
  [SMALL_STATE(36)] = 1657,
  [SMALL_STATE(37)] = 1706,
  [SMALL_STATE(38)] = 1755,
  [SMALL_STATE(39)] = 1801,
  [SMALL_STATE(40)] = 1835,
  [SMALL_STATE(41)] = 1869,
  [SMALL_STATE(42)] = 1903,
  [SMALL_STATE(43)] = 1937,
  [SMALL_STATE(44)] = 1971,
  [SMALL_STATE(45)] = 2005,
  [SMALL_STATE(46)] = 2039,
  [SMALL_STATE(47)] = 2073,
  [SMALL_STATE(48)] = 2107,
  [SMALL_STATE(49)] = 2141,
  [SMALL_STATE(50)] = 2172,
  [SMALL_STATE(51)] = 2203,
  [SMALL_STATE(52)] = 2236,
  [SMALL_STATE(53)] = 2267,
  [SMALL_STATE(54)] = 2298,
  [SMALL_STATE(55)] = 2329,
  [SMALL_STATE(56)] = 2360,
  [SMALL_STATE(57)] = 2391,
  [SMALL_STATE(58)] = 2422,
  [SMALL_STATE(59)] = 2453,
  [SMALL_STATE(60)] = 2484,
  [SMALL_STATE(61)] = 2515,
  [SMALL_STATE(62)] = 2546,
  [SMALL_STATE(63)] = 2577,
  [SMALL_STATE(64)] = 2608,
  [SMALL_STATE(65)] = 2639,
  [SMALL_STATE(66)] = 2670,
  [SMALL_STATE(67)] = 2701,
  [SMALL_STATE(68)] = 2732,
  [SMALL_STATE(69)] = 2763,
  [SMALL_STATE(70)] = 2794,
  [SMALL_STATE(71)] = 2825,
  [SMALL_STATE(72)] = 2858,
  [SMALL_STATE(73)] = 2889,
  [SMALL_STATE(74)] = 2920,
  [SMALL_STATE(75)] = 2941,
  [SMALL_STATE(76)] = 2972,
  [SMALL_STATE(77)] = 3003,
  [SMALL_STATE(78)] = 3034,
  [SMALL_STATE(79)] = 3065,
  [SMALL_STATE(80)] = 3096,
  [SMALL_STATE(81)] = 3127,
  [SMALL_STATE(82)] = 3158,
  [SMALL_STATE(83)] = 3189,
  [SMALL_STATE(84)] = 3220,
  [SMALL_STATE(85)] = 3251,
  [SMALL_STATE(86)] = 3282,
  [SMALL_STATE(87)] = 3313,
  [SMALL_STATE(88)] = 3344,
  [SMALL_STATE(89)] = 3364,
  [SMALL_STATE(90)] = 3384,
  [SMALL_STATE(91)] = 3404,
  [SMALL_STATE(92)] = 3427,
  [SMALL_STATE(93)] = 3448,
  [SMALL_STATE(94)] = 3469,
  [SMALL_STATE(95)] = 3488,
  [SMALL_STATE(96)] = 3512,
  [SMALL_STATE(97)] = 3532,
  [SMALL_STATE(98)] = 3550,
  [SMALL_STATE(99)] = 3567,
  [SMALL_STATE(100)] = 3580,
  [SMALL_STATE(101)] = 3599,
  [SMALL_STATE(102)] = 3614,
  [SMALL_STATE(103)] = 3631,
  [SMALL_STATE(104)] = 3650,
  [SMALL_STATE(105)] = 3665,
  [SMALL_STATE(106)] = 3684,
  [SMALL_STATE(107)] = 3697,
  [SMALL_STATE(108)] = 3714,
  [SMALL_STATE(109)] = 3733,
  [SMALL_STATE(110)] = 3745,
  [SMALL_STATE(111)] = 3757,
  [SMALL_STATE(112)] = 3767,
  [SMALL_STATE(113)] = 3779,
  [SMALL_STATE(114)] = 3791,
  [SMALL_STATE(115)] = 3805,
  [SMALL_STATE(116)] = 3815,
  [SMALL_STATE(117)] = 3827,
  [SMALL_STATE(118)] = 3841,
  [SMALL_STATE(119)] = 3851,
  [SMALL_STATE(120)] = 3866,
  [SMALL_STATE(121)] = 3881,
  [SMALL_STATE(122)] = 3900,
  [SMALL_STATE(123)] = 3909,
  [SMALL_STATE(124)] = 3918,
  [SMALL_STATE(125)] = 3929,
  [SMALL_STATE(126)] = 3948,
  [SMALL_STATE(127)] = 3959,
  [SMALL_STATE(128)] = 3976,
  [SMALL_STATE(129)] = 3993,
  [SMALL_STATE(130)] = 4008,
  [SMALL_STATE(131)] = 4023,
  [SMALL_STATE(132)] = 4040,
  [SMALL_STATE(133)] = 4055,
  [SMALL_STATE(134)] = 4064,
  [SMALL_STATE(135)] = 4083,
  [SMALL_STATE(136)] = 4102,
  [SMALL_STATE(137)] = 4111,
  [SMALL_STATE(138)] = 4130,
  [SMALL_STATE(139)] = 4145,
  [SMALL_STATE(140)] = 4160,
  [SMALL_STATE(141)] = 4175,
  [SMALL_STATE(142)] = 4190,
  [SMALL_STATE(143)] = 4205,
  [SMALL_STATE(144)] = 4220,
  [SMALL_STATE(145)] = 4235,
  [SMALL_STATE(146)] = 4254,
  [SMALL_STATE(147)] = 4273,
  [SMALL_STATE(148)] = 4288,
  [SMALL_STATE(149)] = 4307,
  [SMALL_STATE(150)] = 4322,
  [SMALL_STATE(151)] = 4341,
  [SMALL_STATE(152)] = 4356,
  [SMALL_STATE(153)] = 4365,
  [SMALL_STATE(154)] = 4380,
  [SMALL_STATE(155)] = 4397,
  [SMALL_STATE(156)] = 4414,
  [SMALL_STATE(157)] = 4429,
  [SMALL_STATE(158)] = 4446,
  [SMALL_STATE(159)] = 4463,
  [SMALL_STATE(160)] = 4472,
  [SMALL_STATE(161)] = 4491,
  [SMALL_STATE(162)] = 4506,
  [SMALL_STATE(163)] = 4521,
  [SMALL_STATE(164)] = 4530,
  [SMALL_STATE(165)] = 4539,
  [SMALL_STATE(166)] = 4558,
  [SMALL_STATE(167)] = 4573,
  [SMALL_STATE(168)] = 4585,
  [SMALL_STATE(169)] = 4599,
  [SMALL_STATE(170)] = 4615,
  [SMALL_STATE(171)] = 4631,
  [SMALL_STATE(172)] = 4647,
  [SMALL_STATE(173)] = 4661,
  [SMALL_STATE(174)] = 4677,
  [SMALL_STATE(175)] = 4691,
  [SMALL_STATE(176)] = 4707,
  [SMALL_STATE(177)] = 4720,
  [SMALL_STATE(178)] = 4733,
  [SMALL_STATE(179)] = 4746,
  [SMALL_STATE(180)] = 4759,
  [SMALL_STATE(181)] = 4772,
  [SMALL_STATE(182)] = 4785,
  [SMALL_STATE(183)] = 4798,
  [SMALL_STATE(184)] = 4811,
  [SMALL_STATE(185)] = 4824,
  [SMALL_STATE(186)] = 4837,
  [SMALL_STATE(187)] = 4850,
  [SMALL_STATE(188)] = 4863,
  [SMALL_STATE(189)] = 4876,
  [SMALL_STATE(190)] = 4889,
  [SMALL_STATE(191)] = 4898,
  [SMALL_STATE(192)] = 4911,
  [SMALL_STATE(193)] = 4924,
  [SMALL_STATE(194)] = 4937,
  [SMALL_STATE(195)] = 4944,
  [SMALL_STATE(196)] = 4951,
  [SMALL_STATE(197)] = 4964,
  [SMALL_STATE(198)] = 4977,
  [SMALL_STATE(199)] = 4990,
  [SMALL_STATE(200)] = 5003,
  [SMALL_STATE(201)] = 5016,
  [SMALL_STATE(202)] = 5029,
  [SMALL_STATE(203)] = 5042,
  [SMALL_STATE(204)] = 5055,
  [SMALL_STATE(205)] = 5068,
  [SMALL_STATE(206)] = 5075,
  [SMALL_STATE(207)] = 5088,
  [SMALL_STATE(208)] = 5101,
  [SMALL_STATE(209)] = 5114,
  [SMALL_STATE(210)] = 5127,
  [SMALL_STATE(211)] = 5134,
  [SMALL_STATE(212)] = 5147,
  [SMALL_STATE(213)] = 5156,
  [SMALL_STATE(214)] = 5169,
  [SMALL_STATE(215)] = 5182,
  [SMALL_STATE(216)] = 5195,
  [SMALL_STATE(217)] = 5208,
  [SMALL_STATE(218)] = 5221,
  [SMALL_STATE(219)] = 5234,
  [SMALL_STATE(220)] = 5247,
  [SMALL_STATE(221)] = 5260,
  [SMALL_STATE(222)] = 5273,
  [SMALL_STATE(223)] = 5286,
  [SMALL_STATE(224)] = 5299,
  [SMALL_STATE(225)] = 5312,
  [SMALL_STATE(226)] = 5325,
  [SMALL_STATE(227)] = 5338,
  [SMALL_STATE(228)] = 5351,
  [SMALL_STATE(229)] = 5364,
  [SMALL_STATE(230)] = 5377,
  [SMALL_STATE(231)] = 5386,
  [SMALL_STATE(232)] = 5399,
  [SMALL_STATE(233)] = 5412,
  [SMALL_STATE(234)] = 5425,
  [SMALL_STATE(235)] = 5438,
  [SMALL_STATE(236)] = 5451,
  [SMALL_STATE(237)] = 5464,
  [SMALL_STATE(238)] = 5477,
  [SMALL_STATE(239)] = 5490,
  [SMALL_STATE(240)] = 5503,
  [SMALL_STATE(241)] = 5516,
  [SMALL_STATE(242)] = 5529,
  [SMALL_STATE(243)] = 5542,
  [SMALL_STATE(244)] = 5555,
  [SMALL_STATE(245)] = 5568,
  [SMALL_STATE(246)] = 5581,
  [SMALL_STATE(247)] = 5594,
  [SMALL_STATE(248)] = 5607,
  [SMALL_STATE(249)] = 5620,
  [SMALL_STATE(250)] = 5633,
  [SMALL_STATE(251)] = 5646,
  [SMALL_STATE(252)] = 5659,
  [SMALL_STATE(253)] = 5672,
  [SMALL_STATE(254)] = 5685,
  [SMALL_STATE(255)] = 5692,
  [SMALL_STATE(256)] = 5699,
  [SMALL_STATE(257)] = 5712,
  [SMALL_STATE(258)] = 5719,
  [SMALL_STATE(259)] = 5732,
  [SMALL_STATE(260)] = 5739,
  [SMALL_STATE(261)] = 5746,
  [SMALL_STATE(262)] = 5759,
  [SMALL_STATE(263)] = 5772,
  [SMALL_STATE(264)] = 5779,
  [SMALL_STATE(265)] = 5786,
  [SMALL_STATE(266)] = 5793,
  [SMALL_STATE(267)] = 5800,
  [SMALL_STATE(268)] = 5807,
  [SMALL_STATE(269)] = 5814,
  [SMALL_STATE(270)] = 5821,
  [SMALL_STATE(271)] = 5828,
  [SMALL_STATE(272)] = 5835,
  [SMALL_STATE(273)] = 5842,
  [SMALL_STATE(274)] = 5855,
  [SMALL_STATE(275)] = 5868,
  [SMALL_STATE(276)] = 5875,
  [SMALL_STATE(277)] = 5882,
  [SMALL_STATE(278)] = 5893,
  [SMALL_STATE(279)] = 5904,
  [SMALL_STATE(280)] = 5917,
  [SMALL_STATE(281)] = 5930,
  [SMALL_STATE(282)] = 5943,
  [SMALL_STATE(283)] = 5956,
  [SMALL_STATE(284)] = 5969,
  [SMALL_STATE(285)] = 5977,
  [SMALL_STATE(286)] = 5983,
  [SMALL_STATE(287)] = 5991,
  [SMALL_STATE(288)] = 5997,
  [SMALL_STATE(289)] = 6003,
  [SMALL_STATE(290)] = 6009,
  [SMALL_STATE(291)] = 6015,
  [SMALL_STATE(292)] = 6023,
  [SMALL_STATE(293)] = 6029,
  [SMALL_STATE(294)] = 6035,
  [SMALL_STATE(295)] = 6045,
  [SMALL_STATE(296)] = 6051,
  [SMALL_STATE(297)] = 6059,
  [SMALL_STATE(298)] = 6067,
  [SMALL_STATE(299)] = 6073,
  [SMALL_STATE(300)] = 6083,
  [SMALL_STATE(301)] = 6091,
  [SMALL_STATE(302)] = 6097,
  [SMALL_STATE(303)] = 6105,
  [SMALL_STATE(304)] = 6111,
  [SMALL_STATE(305)] = 6119,
  [SMALL_STATE(306)] = 6129,
  [SMALL_STATE(307)] = 6137,
  [SMALL_STATE(308)] = 6145,
  [SMALL_STATE(309)] = 6151,
  [SMALL_STATE(310)] = 6157,
  [SMALL_STATE(311)] = 6167,
  [SMALL_STATE(312)] = 6173,
  [SMALL_STATE(313)] = 6179,
  [SMALL_STATE(314)] = 6187,
  [SMALL_STATE(315)] = 6197,
  [SMALL_STATE(316)] = 6203,
  [SMALL_STATE(317)] = 6209,
  [SMALL_STATE(318)] = 6217,
  [SMALL_STATE(319)] = 6225,
  [SMALL_STATE(320)] = 6233,
  [SMALL_STATE(321)] = 6241,
  [SMALL_STATE(322)] = 6247,
  [SMALL_STATE(323)] = 6253,
  [SMALL_STATE(324)] = 6263,
  [SMALL_STATE(325)] = 6271,
  [SMALL_STATE(326)] = 6277,
  [SMALL_STATE(327)] = 6285,
  [SMALL_STATE(328)] = 6295,
  [SMALL_STATE(329)] = 6302,
  [SMALL_STATE(330)] = 6309,
  [SMALL_STATE(331)] = 6316,
  [SMALL_STATE(332)] = 6323,
  [SMALL_STATE(333)] = 6330,
  [SMALL_STATE(334)] = 6337,
  [SMALL_STATE(335)] = 6344,
  [SMALL_STATE(336)] = 6351,
  [SMALL_STATE(337)] = 6358,
  [SMALL_STATE(338)] = 6365,
  [SMALL_STATE(339)] = 6372,
  [SMALL_STATE(340)] = 6379,
  [SMALL_STATE(341)] = 6386,
  [SMALL_STATE(342)] = 6393,
  [SMALL_STATE(343)] = 6400,
  [SMALL_STATE(344)] = 6407,
  [SMALL_STATE(345)] = 6414,
  [SMALL_STATE(346)] = 6421,
  [SMALL_STATE(347)] = 6428,
  [SMALL_STATE(348)] = 6435,
  [SMALL_STATE(349)] = 6442,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(349),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(77),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(349),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(17),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(47),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(349),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(34),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(80),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(349),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(18),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(84),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(349),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(22),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(47),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(54),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(349),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(26),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(47),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(73),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(70),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(349),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(11),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5), SHIFT(64),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5), SHIFT(349),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5), SHIFT(25),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 6), SHIFT(47),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 6), SHIFT(349),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 6), SHIFT(23),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5), SHIFT(47),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(56),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(349),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(24),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(47),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6), SHIFT(47),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6), SHIFT(349),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6), SHIFT(33),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 2), SHIFT(57),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 2), SHIFT(349),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 2), SHIFT(12),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 6), SHIFT(60),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 6), SHIFT(349),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 6), SHIFT(30),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 6), SHIFT(47),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(52),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(63),
  [341] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 6), SHIFT(47),
  [345] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 6), SHIFT(349),
  [349] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 6), SHIFT(31),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 6), SHIFT(67),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 6), SHIFT(349),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 6), SHIFT(36),
  [366] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 4), SHIFT(47),
  [370] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 4), SHIFT(349),
  [374] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 4), SHIFT(20),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(74),
  [381] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 5), SHIFT(47),
  [385] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 5), SHIFT(349),
  [389] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 5), SHIFT(28),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 6), SHIFT(47),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(75),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(349),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(16),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(83),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(31),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(47),
  [414] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 7), SHIFT(47),
  [418] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 7), SHIFT(349),
  [422] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 7), SHIFT(37),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(50),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(349),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(37),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(79),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(28),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(47),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 12), SHIFT(47),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 12), SHIFT(349),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 12), SHIFT(21),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(58),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 6), SHIFT(76),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 6), SHIFT(349),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 6), SHIFT(35),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 4), SHIFT(61),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 4), SHIFT(349),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 4), SHIFT(27),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(88),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(89),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(90),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(92),
  [494] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(93),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(94),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label, 2), SHIFT_REPEAT(116),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label, 2),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label, 2), SHIFT_REPEAT(305),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label, 2), SHIFT_REPEAT(118),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label, 2), SHIFT_REPEAT(310),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(100),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(327),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_hex, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2, .production_id = 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(107),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(323),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label, 1, .production_id = 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 2),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 2), SHIFT_REPEAT(6),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 2), SHIFT_REPEAT(218),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 3), SHIFT(211),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 2), SHIFT_REPEAT(10),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 2), SHIFT_REPEAT(224),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 2), SHIFT(221),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(144),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2),
  [683] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(215),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(216),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 6),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembly, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [709] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assembly, 4), SHIFT(224),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_preprocessor, 3), SHIFT(218),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 4),
  [721] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_preprocessor, 4), SHIFT(218),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembly, 3),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assembly, 3), SHIFT(224),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 5),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 7),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(167),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 2), SHIFT(181),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(172),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [778] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 3), SHIFT(232),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2, .production_id = 7),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 4),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 4),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 3),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 3),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 3, .production_id = 8),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 4, .production_id = 9),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [925] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(345),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, .production_id = 4),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, .production_id = 5),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [964] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_increment, 3),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_decrement, 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_increment, 4),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_decrement, 4),
  [976] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_increment, 5),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_decrement, 5),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 6),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 7),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 8),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 9),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 10),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 11),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembly, 1),
  [1000] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assembly, 1), SHIFT(13),
  [1003] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 1),
  [1005] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_preprocessor, 1), SHIFT(4),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1022] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 8),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 13),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 14),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 10, .production_id = 6),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 11),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 11, .production_id = 6),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 12),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_colon, 2),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 6),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 5),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 6),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 10),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 6),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 7),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 9),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 6),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 8),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 4),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 7),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aif_arguments, 5),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_casio(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
