#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 391
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 5
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 13

enum {
  anon_sym_DOTEND = 1,
  aux_sym_source_file_token1 = 2,
  aux_sym_source_file_token2 = 3,
  sym_register_0 = 4,
  sym_register = 5,
  anon_sym_POUND = 6,
  anon_sym_DASH = 7,
  aux_sym_numeric_hex_token1 = 8,
  anon_sym_SQUOTE = 9,
  aux_sym_numeric_hex_token2 = 10,
  sym_numeric_32bit = 11,
  sym_numeric_8bit = 12,
  sym_numeric_4bit = 13,
  anon_sym_COLON = 14,
  anon_sym_BSLASH = 15,
  anon_sym_AMP = 16,
  sym__word = 17,
  sym__word_start = 18,
  anon_sym_DOTAIF = 19,
  anon_sym_DOTAELSE = 20,
  aux_sym__aif_token1 = 21,
  anon_sym_EQ = 22,
  anon_sym_LT = 23,
  anon_sym_GE = 24,
  anon_sym_DOTMACRO = 25,
  anon_sym_COMMA = 26,
  aux_sym__macro_token1 = 27,
  aux_sym_preprocessor_token1 = 28,
  aux_sym__argument_token1 = 29,
  aux_sym__argument_token2 = 30,
  anon_sym_AT = 31,
  anon_sym_LPAREN = 32,
  aux_sym_pointer_offset_token1 = 33,
  aux_sym_pointer_offset_token2 = 34,
  anon_sym_RPAREN = 35,
  sym_register_control = 36,
  sym_register_system = 37,
  anon_sym_PLUS = 38,
  sym_instruction = 39,
  sym_comment = 40,
  sym__whitespace = 41,
  sym_source_file = 42,
  sym_constant = 43,
  sym__numeric = 44,
  sym_numeric_hex = 45,
  sym_label_colon = 46,
  sym_label = 47,
  sym__label = 48,
  sym_symbol = 49,
  sym__line = 50,
  sym__aif = 51,
  sym_aif_arguments = 52,
  sym__macro = 53,
  sym_preprocessor = 54,
  sym_assembly = 55,
  sym__argument = 56,
  sym__operand = 57,
  sym_pointer_offset = 58,
  sym_pointer_decrement = 59,
  sym_pointer_increment = 60,
  sym_pointer = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_source_file_repeat2 = 63,
  aux_sym_source_file_repeat3 = 64,
  aux_sym_numeric_hex_repeat1 = 65,
  aux_sym__label_repeat1 = 66,
  aux_sym_symbol_repeat1 = 67,
  aux_sym__macro_repeat1 = 68,
  aux_sym_preprocessor_repeat1 = 69,
  aux_sym_assembly_repeat1 = 70,
  anon_alias_sym_char = 71,
  anon_alias_sym_char_label = 72,
  anon_alias_sym_name = 73,
  anon_alias_sym_numeric = 74,
  anon_alias_sym_variable = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTEND] = "END",
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
  [anon_sym_COLON] = ":",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_AMP] = "&",
  [sym__word] = "_word",
  [sym__word_start] = "_word_start",
  [anon_sym_DOTAIF] = "if",
  [anon_sym_DOTAELSE] = ".AELSE",
  [aux_sym__aif_token1] = "if_end",
  [anon_sym_EQ] = "comparsion",
  [anon_sym_LT] = "comparsion",
  [anon_sym_GE] = "comparsion",
  [anon_sym_DOTMACRO] = "macro",
  [anon_sym_COMMA] = ",",
  [aux_sym__macro_token1] = "macro_end",
  [aux_sym_preprocessor_token1] = "directive",
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
  [sym_instruction] = "instruction",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym_constant] = "constant",
  [sym__numeric] = "_numeric",
  [sym_numeric_hex] = "numeric_hex",
  [sym_label_colon] = "label",
  [sym_label] = "label",
  [sym__label] = "_label",
  [sym_symbol] = "symbol",
  [sym__line] = "_line",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_source_file_repeat3] = "source_file_repeat3",
  [aux_sym_numeric_hex_repeat1] = "numeric_hex_repeat1",
  [aux_sym__label_repeat1] = "_label_repeat1",
  [aux_sym_symbol_repeat1] = "symbol_repeat1",
  [aux_sym__macro_repeat1] = "_macro_repeat1",
  [aux_sym_preprocessor_repeat1] = "preprocessor_repeat1",
  [aux_sym_assembly_repeat1] = "assembly_repeat1",
  [anon_alias_sym_char] = "char",
  [anon_alias_sym_char_label] = "char_label",
  [anon_alias_sym_name] = "name",
  [anon_alias_sym_numeric] = "numeric",
  [anon_alias_sym_variable] = "variable",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym__word] = sym__word,
  [sym__word_start] = sym__word_start,
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
  [sym_instruction] = sym_instruction,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym_constant] = sym_constant,
  [sym__numeric] = sym__numeric,
  [sym_numeric_hex] = sym_numeric_hex,
  [sym_label_colon] = sym_label,
  [sym_label] = sym_label,
  [sym__label] = sym__label,
  [sym_symbol] = sym_symbol,
  [sym__line] = sym__line,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_source_file_repeat3] = aux_sym_source_file_repeat3,
  [aux_sym_numeric_hex_repeat1] = aux_sym_numeric_hex_repeat1,
  [aux_sym__label_repeat1] = aux_sym__label_repeat1,
  [aux_sym_symbol_repeat1] = aux_sym_symbol_repeat1,
  [aux_sym__macro_repeat1] = aux_sym__macro_repeat1,
  [aux_sym_preprocessor_repeat1] = aux_sym_preprocessor_repeat1,
  [aux_sym_assembly_repeat1] = aux_sym_assembly_repeat1,
  [anon_alias_sym_char] = anon_alias_sym_char,
  [anon_alias_sym_char_label] = anon_alias_sym_char_label,
  [anon_alias_sym_name] = anon_alias_sym_name,
  [anon_alias_sym_numeric] = anon_alias_sym_numeric,
  [anon_alias_sym_variable] = anon_alias_sym_variable,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOTEND] = {
    .visible = true,
    .named = true,
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
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym__word_start] = {
    .visible = false,
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
    .named = true,
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
    .named = true,
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
  [sym_instruction] = {
    .visible = true,
    .named = true,
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
  [sym_label_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
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
  [aux_sym__label_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_repeat1] = {
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
  [anon_alias_sym_name] = {
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
    [1] = anon_alias_sym_char,
  },
  [2] = {
    [0] = anon_alias_sym_char_label,
  },
  [3] = {
    [2] = anon_alias_sym_char,
  },
  [4] = {
    [1] = anon_alias_sym_char,
    [2] = anon_alias_sym_char,
  },
  [5] = {
    [2] = anon_alias_sym_char,
    [3] = anon_alias_sym_char,
  },
  [6] = {
    [1] = anon_alias_sym_numeric,
  },
  [7] = {
    [2] = anon_alias_sym_name,
  },
  [8] = {
    [2] = anon_alias_sym_numeric,
  },
  [9] = {
    [2] = anon_alias_sym_name,
    [4] = anon_alias_sym_variable,
  },
  [10] = {
    [1] = anon_alias_sym_variable,
  },
  [11] = {
    [2] = anon_alias_sym_variable,
  },
  [12] = {
    [3] = anon_alias_sym_variable,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_symbol_repeat1, 2,
    aux_sym_symbol_repeat1,
    anon_alias_sym_char,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '&') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == '2') ADVANCE(90);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '?') ADVANCE(124);
      if (lookahead == '@') ADVANCE(189);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(86);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(88);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(87);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(107);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(112);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(107);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(115);
      if (('B' <= lookahead && lookahead <= 'E') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(193);
      if (lookahead == '+') ADVANCE(198);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == '2') ADVANCE(95);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '@') ADVANCE(189);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(84);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(124);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(126);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(135);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(134);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(137);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(136);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(134);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == ',') ADVANCE(155);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(163);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 11:
      if (lookahead == '\r') ADVANCE(12);
      if (lookahead == '"') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(186);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '@') ADVANCE(189);
      if (lookahead == 'R') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(143);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(142);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(142);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(147);
      if (lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 15:
      if (lookahead == '&') ADVANCE(103);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == '2') ADVANCE(96);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'm' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 19:
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(33);
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(42);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(22);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'h' ||
          lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'Q') ADVANCE(151);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(152);
      END_STATE();
    case 36:
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(13);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 44:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(194);
      END_STATE();
    case 45:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 46:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 49:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 50:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 51:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(40);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'h' ||
          lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 53:
      if (lookahead == 'B' ||
          lookahead == 'L' ||
          lookahead == 'W' ||
          lookahead == 'b' ||
          lookahead == 'l' ||
          lookahead == 'w') ADVANCE(157);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '$' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOTEND);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOTEND);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_register_0);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_register_0);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(71);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(73);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(67);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token1);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token1);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '5') ADVANCE(91);
      if (lookahead == '=') ADVANCE(54);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '5') ADVANCE(97);
      if (lookahead == '=') ADVANCE(54);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '5') ADVANCE(99);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '=') ADVANCE(54);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(117);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(69);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(117);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(109);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(108);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'h' ||
          lookahead == 'l') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(123);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word_start);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '0') ADVANCE(197);
      if (lookahead == '=') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '0') ADVANCE(196);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '0') ADVANCE(65);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(195);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '1') ADVANCE(72);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(194);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '1') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(74);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(197);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(41);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(48);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(78);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(49);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(196);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOTAIF);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOTAELSE);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__aif_token1);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOTMACRO);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__macro_token1);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead == 'M') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'M') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'M') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead == 'M') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'E') ADVANCE(181);
      if (lookahead == 'M') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'M') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'C') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == 'I') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'I') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'L') ADVANCE(184);
      if (lookahead == 'N') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'M') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'N') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'O') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'R') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == 'S') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__argument_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__argument_token1);
      if (lookahead == '"') ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__argument_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_pointer_offset_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_pointer_offset_token2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_register_control);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_register_control);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_register_system);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_register_system);
      if (lookahead == '=') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '.') ADVANCE(55);
      if (lookahead == '/') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_instruction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(203);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 57},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 57},
  [58] = {.lex_state = 57},
  [59] = {.lex_state = 57},
  [60] = {.lex_state = 57},
  [61] = {.lex_state = 57},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 57},
  [64] = {.lex_state = 57},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 57},
  [67] = {.lex_state = 57},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 57},
  [71] = {.lex_state = 57},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 57},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 57},
  [78] = {.lex_state = 57},
  [79] = {.lex_state = 57},
  [80] = {.lex_state = 57},
  [81] = {.lex_state = 57},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 57},
  [85] = {.lex_state = 57},
  [86] = {.lex_state = 57},
  [87] = {.lex_state = 57},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 19},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 19},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 57},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 57},
  [174] = {.lex_state = 57},
  [175] = {.lex_state = 57},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 57},
  [178] = {.lex_state = 19},
  [179] = {.lex_state = 19},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 19},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 19},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 19},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 19},
  [192] = {.lex_state = 19},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 19},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 57},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
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
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 2},
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 2},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 3},
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
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 3},
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
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 0},
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
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 15},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 15},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 15},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 15},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 15},
  [365] = {.lex_state = 15},
  [366] = {.lex_state = 15},
  [367] = {.lex_state = 15},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 15},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 15},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 57},
  [376] = {.lex_state = 57},
  [377] = {.lex_state = 15},
  [378] = {.lex_state = 15},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 63},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [sym__word_start] = ACTIONS(1),
    [anon_sym_DOTAIF] = ACTIONS(1),
    [anon_sym_DOTAELSE] = ACTIONS(1),
    [aux_sym__aif_token1] = ACTIONS(1),
    [anon_sym_DOTMACRO] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__macro_token1] = ACTIONS(1),
    [aux_sym_preprocessor_token1] = ACTIONS(1),
    [aux_sym__argument_token1] = ACTIONS(1),
    [aux_sym__argument_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_register_control] = ACTIONS(1),
    [sym_register_system] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_instruction] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(389),
    [sym_label_colon] = STATE(317),
    [sym_label] = STATE(317),
    [sym__label] = STATE(316),
    [sym_symbol] = STATE(100),
    [sym__line] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(47),
    [aux_sym_source_file_repeat2] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym__word_start] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym__whitespace] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_source_file_token1,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(274), 1,
      sym_aif_arguments,
    STATE(275), 1,
      sym__label,
    ACTIONS(29), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(19), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(322), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [61] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym__whitespace,
    STATE(7), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(41), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(35), 6,
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
      sym_label,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [116] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(49), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(47), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(171), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [171] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(41), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(35), 6,
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
      sym_label,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [226] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(275), 1,
      sym__label,
    ACTIONS(53), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(51), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(345), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [281] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(43), 1,
      anon_sym_AT,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(57), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(55), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(312), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [336] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(63), 1,
      sym__whitespace,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(61), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(59), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(302), 10,
      sym_constant,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
      sym__argument,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(67), 8,
      sym_register,
      aux_sym_numeric_hex_token1,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym__word_start,
      sym_register_control,
      sym_register_system,
    ACTIONS(65), 11,
      aux_sym_source_file_token1,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
      anon_sym_AT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
  [424] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(72), 1,
      sym_register,
    ACTIONS(76), 1,
      sym__whitespace,
    STATE(13), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(74), 2,
      sym_register_control,
      sym_register_system,
    STATE(271), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [468] = 17,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
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
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    STATE(82), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [522] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(96), 1,
      sym_register,
    ACTIONS(100), 1,
      sym__whitespace,
    STATE(91), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(98), 2,
      sym_register_control,
      sym_register_system,
    STATE(172), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [566] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(100), 1,
      sym__whitespace,
    ACTIONS(102), 1,
      sym_register,
    STATE(91), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(104), 2,
      sym_register_control,
      sym_register_system,
    STATE(279), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [610] = 17,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(106), 1,
      anon_sym_DOTAELSE,
    ACTIONS(108), 1,
      aux_sym__aif_token1,
    STATE(82), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [664] = 17,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(110), 1,
      anon_sym_DOTAELSE,
    ACTIONS(112), 1,
      aux_sym__aif_token1,
    STATE(82), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [718] = 17,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(114), 1,
      anon_sym_DOTAELSE,
    ACTIONS(116), 1,
      aux_sym__aif_token1,
    STATE(82), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [772] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(118), 1,
      sym_register,
    ACTIONS(122), 1,
      sym__whitespace,
    STATE(18), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(120), 2,
      sym_register_control,
      sym_register_system,
    STATE(213), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [816] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(72), 1,
      sym_register,
    ACTIONS(100), 1,
      sym__whitespace,
    STATE(91), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(280), 1,
      sym__label,
    ACTIONS(74), 2,
      sym_register_control,
      sym_register_system,
    STATE(271), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [860] = 17,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym__whitespace,
    ACTIONS(124), 1,
      anon_sym_DOTAELSE,
    ACTIONS(126), 1,
      aux_sym__aif_token1,
    STATE(82), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [914] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(108), 1,
      aux_sym__aif_token1,
    ACTIONS(128), 1,
      sym__whitespace,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [965] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym__macro_token1,
    ACTIONS(132), 1,
      sym__whitespace,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1016] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(112), 1,
      aux_sym__aif_token1,
    ACTIONS(128), 1,
      sym__whitespace,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1067] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__whitespace,
    ACTIONS(134), 1,
      aux_sym__aif_token1,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1118] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__whitespace,
    ACTIONS(136), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1169] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__whitespace,
    ACTIONS(138), 1,
      aux_sym__aif_token1,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1220] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__whitespace,
    ACTIONS(140), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1271] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(142), 1,
      anon_sym_DOTEND,
    ACTIONS(144), 1,
      sym__whitespace,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1322] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__whitespace,
    ACTIONS(146), 1,
      aux_sym__aif_token1,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1373] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__whitespace,
    ACTIONS(148), 1,
      aux_sym__aif_token1,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1424] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__whitespace,
    ACTIONS(150), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1475] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__whitespace,
    ACTIONS(152), 1,
      aux_sym__aif_token1,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1526] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(154), 1,
      anon_sym_DOTEND,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1577] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__whitespace,
    ACTIONS(156), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1628] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__whitespace,
    ACTIONS(158), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1679] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
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
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__whitespace,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1730] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym__whitespace,
    ACTIONS(160), 1,
      aux_sym__aif_token1,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1781] = 16,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym__whitespace,
    ACTIONS(162), 1,
      aux_sym__macro_token1,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1832] = 15,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(90), 1,
      sym_instruction,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym__whitespace,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(231), 1,
      sym_label_colon,
    STATE(380), 1,
      sym__label,
    STATE(267), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [1880] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(168), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(172), 1,
      sym__whitespace,
    STATE(43), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(275), 1,
      sym__label,
    ACTIONS(166), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(170), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(268), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [1918] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(168), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(178), 1,
      sym__whitespace,
    STATE(44), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(275), 1,
      sym__label,
    ACTIONS(174), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(176), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(263), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [1956] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(168), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(184), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(275), 1,
      sym__label,
    ACTIONS(180), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(182), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(301), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [1994] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(168), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(186), 1,
      sym__whitespace,
    STATE(45), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(275), 1,
      sym__label,
    ACTIONS(180), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(182), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(301), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [2032] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(168), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(184), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(275), 1,
      sym__label,
    ACTIONS(174), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(176), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(263), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [2070] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(168), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(184), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(275), 1,
      sym__label,
    ACTIONS(188), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(190), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(242), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [2108] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(168), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(184), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(275), 1,
      sym__label,
    ACTIONS(192), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(194), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(306), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [2146] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(27), 1,
      sym__word_start,
    ACTIONS(168), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(200), 1,
      sym__whitespace,
    STATE(41), 1,
      aux_sym_source_file_repeat2,
    STATE(97), 1,
      sym_symbol,
    STATE(275), 1,
      sym__label,
    ACTIONS(196), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(198), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(257), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [2184] = 11,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(13), 1,
      sym_comment,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      aux_sym_source_file_token1,
    ACTIONS(206), 1,
      sym__whitespace,
    STATE(27), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2220] = 11,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 1,
      aux_sym_source_file_token1,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      sym__word_start,
    ACTIONS(219), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__whitespace,
    STATE(38), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2256] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(225), 1,
      aux_sym_source_file_token1,
    ACTIONS(228), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__whitespace,
    STATE(30), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(71), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2289] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(234), 1,
      aux_sym_source_file_token1,
    ACTIONS(237), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__whitespace,
    STATE(37), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(87), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2322] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(243), 1,
      aux_sym_source_file_token1,
    ACTIONS(246), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym__whitespace,
    STATE(36), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(67), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2355] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(252), 1,
      aux_sym_source_file_token1,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym__whitespace,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(64), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2388] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(261), 1,
      aux_sym_source_file_token1,
    ACTIONS(264), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym__whitespace,
    STATE(23), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2421] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(270), 1,
      aux_sym_source_file_token1,
    ACTIONS(273), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym__whitespace,
    STATE(33), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(73), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2454] = 10,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      sym__word_start,
    ACTIONS(279), 1,
      aux_sym_source_file_token1,
    ACTIONS(283), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym__whitespace,
    STATE(20), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2487] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(291), 1,
      aux_sym_source_file_token1,
    ACTIONS(294), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym__whitespace,
    STATE(16), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(63), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2520] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(300), 1,
      aux_sym_source_file_token1,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__whitespace,
    STATE(21), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2553] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(264), 1,
      sym_comment,
    ACTIONS(267), 1,
      sym__whitespace,
    ACTIONS(309), 1,
      aux_sym_source_file_token1,
    STATE(23), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(85), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2586] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(312), 1,
      aux_sym_source_file_token1,
    ACTIONS(315), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__whitespace,
    STATE(20), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(86), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2619] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(246), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym__whitespace,
    ACTIONS(321), 1,
      aux_sym_source_file_token1,
    STATE(36), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2652] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(303), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym__whitespace,
    ACTIONS(324), 1,
      aux_sym_source_file_token1,
    STATE(21), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(70), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2685] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(327), 1,
      aux_sym_source_file_token1,
    ACTIONS(330), 1,
      sym_comment,
    ACTIONS(333), 1,
      sym__whitespace,
    STATE(34), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(57), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2718] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(336), 1,
      aux_sym_source_file_token1,
    ACTIONS(339), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__whitespace,
    STATE(19), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(77), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2751] = 10,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      sym__word_start,
    ACTIONS(345), 1,
      aux_sym_source_file_token1,
    ACTIONS(349), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__whitespace,
    STATE(36), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2784] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(339), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym__whitespace,
    ACTIONS(357), 1,
      aux_sym_source_file_token1,
    STATE(19), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(81), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2817] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(315), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_source_file_token1,
    ACTIONS(363), 1,
      sym__whitespace,
    STATE(14), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(78), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2850] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(366), 1,
      aux_sym_source_file_token1,
    ACTIONS(369), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__whitespace,
    STATE(31), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2883] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(369), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__whitespace,
    ACTIONS(375), 1,
      aux_sym_source_file_token1,
    STATE(31), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(53), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2916] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(315), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym__whitespace,
    ACTIONS(378), 1,
      aux_sym_source_file_token1,
    STATE(14), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(52), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2949] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(237), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym__whitespace,
    ACTIONS(381), 1,
      aux_sym_source_file_token1,
    STATE(37), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [2982] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(384), 1,
      aux_sym_source_file_token1,
    ACTIONS(387), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym__whitespace,
    STATE(26), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3015] = 10,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(393), 1,
      aux_sym_source_file_token1,
    ACTIONS(395), 1,
      sym_instruction,
    ACTIONS(397), 1,
      sym_comment,
    ACTIONS(399), 1,
      sym__whitespace,
    STATE(126), 1,
      aux_sym_source_file_repeat2,
    STATE(270), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [3048] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(228), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym__whitespace,
    ACTIONS(401), 1,
      aux_sym_source_file_token1,
    STATE(30), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3081] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(404), 1,
      aux_sym_source_file_token1,
    ACTIONS(407), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__whitespace,
    STATE(11), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(66), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3114] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(413), 1,
      aux_sym_source_file_token1,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__whitespace,
    STATE(29), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3147] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(422), 1,
      aux_sym_source_file_token1,
    ACTIONS(425), 1,
      sym__whitespace,
    STATE(22), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(60), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3180] = 10,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      sym__word_start,
    ACTIONS(428), 1,
      aux_sym_source_file_token1,
    ACTIONS(432), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym__whitespace,
    STATE(35), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3213] = 10,
    ACTIONS(213), 1,
      anon_sym_BSLASH,
    ACTIONS(216), 1,
      sym__word_start,
    ACTIONS(440), 1,
      aux_sym_source_file_token1,
    ACTIONS(444), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym__whitespace,
    STATE(22), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3246] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(452), 1,
      aux_sym_source_file_token1,
    ACTIONS(455), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__whitespace,
    STATE(28), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(75), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3279] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(455), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym__whitespace,
    ACTIONS(461), 1,
      aux_sym_source_file_token1,
    STATE(28), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3312] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(407), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym__whitespace,
    ACTIONS(464), 1,
      aux_sym_source_file_token1,
    STATE(11), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(55), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3345] = 4,
    ACTIONS(467), 1,
      sym__whitespace,
    STATE(82), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(67), 7,
      sym__word_start,
      anon_sym_DOTAIF,
      anon_sym_DOTAELSE,
      aux_sym__aif_token1,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [3366] = 10,
    ACTIONS(80), 1,
      anon_sym_DOTAIF,
    ACTIONS(86), 1,
      anon_sym_DOTMACRO,
    ACTIONS(88), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(395), 1,
      sym_instruction,
    ACTIONS(399), 1,
      sym__whitespace,
    ACTIONS(470), 1,
      aux_sym_source_file_token1,
    ACTIONS(472), 1,
      sym_comment,
    STATE(126), 1,
      aux_sym_source_file_repeat2,
    STATE(319), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(323), 2,
      sym__aif,
      sym__macro,
  [3399] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(474), 1,
      aux_sym_source_file_token1,
    ACTIONS(477), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__whitespace,
    STATE(25), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(80), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3432] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(477), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__whitespace,
    ACTIONS(483), 1,
      aux_sym_source_file_token1,
    STATE(25), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3465] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym__whitespace,
    ACTIONS(486), 1,
      aux_sym_source_file_token1,
    STATE(22), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3498] = 10,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(11), 1,
      sym__word_start,
    ACTIONS(489), 1,
      aux_sym_source_file_token1,
    ACTIONS(492), 1,
      sym_comment,
    ACTIONS(495), 1,
      sym__whitespace,
    STATE(24), 1,
      aux_sym_source_file_repeat2,
    STATE(100), 1,
      sym_symbol,
    STATE(316), 1,
      sym__label,
    STATE(48), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(317), 2,
      sym_label_colon,
      sym_label,
  [3531] = 4,
    ACTIONS(498), 1,
      sym__whitespace,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(67), 6,
      sym__word_start,
      anon_sym_DOTAIF,
      aux_sym__aif_token1,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [3551] = 4,
    ACTIONS(501), 1,
      sym__whitespace,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(67), 6,
      anon_sym_DOTEND,
      sym__word_start,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [3571] = 4,
    ACTIONS(504), 1,
      sym__whitespace,
    STATE(90), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(67), 6,
      sym__word_start,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym__macro_token1,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [3591] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__whitespace,
    STATE(91), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(67), 2,
      sym_register,
      sym__word_start,
    ACTIONS(65), 5,
      anon_sym_POUND,
      anon_sym_BSLASH,
      anon_sym_AT,
      sym_register_control,
      sym_register_system,
  [3612] = 6,
    ACTIONS(512), 1,
      anon_sym_DASH,
    ACTIONS(514), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(516), 1,
      sym_numeric_32bit,
    ACTIONS(518), 1,
      anon_sym_BSLASH,
    STATE(283), 2,
      sym_numeric_hex,
      sym_symbol,
    ACTIONS(510), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym__whitespace,
    STATE(93), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(67), 3,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym__word_start,
    ACTIONS(65), 4,
      sym_register_0,
      aux_sym_numeric_hex_token1,
      sym_numeric_32bit,
      anon_sym_BSLASH,
  [3656] = 4,
    ACTIONS(523), 1,
      sym__whitespace,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(67), 5,
      sym__word_start,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [3675] = 4,
    ACTIONS(528), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(530), 1,
      sym__word,
    STATE(95), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(526), 6,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3693] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(533), 1,
      anon_sym_DASH,
    ACTIONS(535), 1,
      sym_numeric_32bit,
    ACTIONS(537), 1,
      anon_sym_BSLASH,
    ACTIONS(510), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
    STATE(350), 2,
      sym_numeric_hex,
      sym_symbol,
  [3717] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(541), 1,
      sym__word,
    STATE(101), 2,
      sym_symbol,
      aux_sym__label_repeat1,
    ACTIONS(539), 4,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__whitespace,
  [3737] = 4,
    ACTIONS(545), 1,
      anon_sym_SQUOTE,
    ACTIONS(547), 1,
      sym__word,
    STATE(120), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(543), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3755] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SQUOTE,
    ACTIONS(552), 1,
      sym__word,
    STATE(106), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(543), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [3775] = 4,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(555), 1,
      sym__word,
    STATE(102), 2,
      sym_symbol,
      aux_sym__label_repeat1,
    ACTIONS(539), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3793] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(541), 1,
      sym__word,
    STATE(107), 2,
      sym_symbol,
      aux_sym__label_repeat1,
    ACTIONS(557), 4,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__whitespace,
  [3813] = 4,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(555), 1,
      sym__word,
    STATE(121), 2,
      sym_symbol,
      aux_sym__label_repeat1,
    ACTIONS(557), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3831] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SQUOTE,
    ACTIONS(563), 1,
      sym__word,
    STATE(110), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(559), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [3851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 6,
      sym_register,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GE,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [3869] = 5,
    ACTIONS(571), 1,
      anon_sym_SQUOTE,
    ACTIONS(573), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(575), 1,
      sym__word,
    STATE(95), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(569), 5,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3889] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(581), 1,
      sym__word,
    STATE(112), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(577), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [3909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_BSLASH,
    ACTIONS(589), 1,
      sym__word,
    STATE(107), 2,
      sym_symbol,
      aux_sym__label_repeat1,
    ACTIONS(584), 4,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym__whitespace,
  [3929] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_SQUOTE,
    ACTIONS(594), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(596), 1,
      sym__word,
    STATE(115), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(543), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [3951] = 5,
    ACTIONS(575), 1,
      sym__word,
    ACTIONS(598), 1,
      anon_sym_SQUOTE,
    ACTIONS(600), 1,
      aux_sym_numeric_hex_token2,
    STATE(95), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(577), 5,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3971] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(604), 1,
      sym__word,
    STATE(112), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(569), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [3991] = 5,
    ACTIONS(575), 1,
      sym__word,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
    ACTIONS(609), 1,
      aux_sym_numeric_hex_token2,
    STATE(105), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(559), 5,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4011] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      sym__word,
    STATE(112), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(526), 6,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4029] = 5,
    ACTIONS(575), 1,
      sym__word,
    ACTIONS(594), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    STATE(109), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(543), 5,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4049] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(596), 1,
      sym__word,
    ACTIONS(616), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(569), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4071] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__word,
    ACTIONS(600), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(618), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(577), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4093] = 3,
    ACTIONS(620), 1,
      sym__word,
    STATE(116), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(526), 7,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4109] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym__word,
    ACTIONS(609), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(623), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(559), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4131] = 4,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    ACTIONS(627), 1,
      sym__word,
    STATE(119), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(559), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4149] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(632), 1,
      sym__word,
    STATE(116), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(569), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4167] = 4,
    ACTIONS(635), 1,
      anon_sym_SQUOTE,
    ACTIONS(637), 1,
      sym__word,
    STATE(116), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(577), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4185] = 4,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    ACTIONS(643), 1,
      sym__word,
    STATE(121), 2,
      sym_symbol,
      aux_sym__label_repeat1,
    ACTIONS(584), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4203] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(646), 1,
      sym__word,
    STATE(122), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(526), 5,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 2,
      aux_sym_numeric_hex_token2,
      sym__word,
    ACTIONS(649), 5,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4238] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(657), 1,
      anon_sym_BSLASH,
    STATE(127), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(653), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [4257] = 2,
    ACTIONS(651), 2,
      aux_sym_numeric_hex_token2,
      sym__word,
    ACTIONS(649), 6,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4270] = 4,
    ACTIONS(659), 1,
      sym__whitespace,
    STATE(126), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 3,
      aux_sym_source_file_token1,
      sym_instruction,
      sym_comment,
    ACTIONS(67), 3,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
  [4287] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(667), 1,
      anon_sym_BSLASH,
    STATE(127), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(662), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [4306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 7,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym__whitespace,
  [4319] = 4,
    ACTIONS(670), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(672), 1,
      anon_sym_BSLASH,
    STATE(130), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(653), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4336] = 4,
    ACTIONS(674), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(677), 1,
      anon_sym_BSLASH,
    STATE(130), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(662), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4353] = 1,
    ACTIONS(649), 8,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4364] = 1,
    ACTIONS(680), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4374] = 1,
    ACTIONS(682), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4384] = 1,
    ACTIONS(684), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4394] = 4,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    ACTIONS(686), 1,
      sym__word,
    STATE(145), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(559), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4410] = 4,
    ACTIONS(635), 1,
      anon_sym_SQUOTE,
    ACTIONS(686), 1,
      sym__word,
    STATE(116), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(577), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4426] = 1,
    ACTIONS(688), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym__whitespace,
  [4448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym__whitespace,
  [4460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym__whitespace,
  [4472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym__whitespace,
  [4484] = 4,
    ACTIONS(545), 1,
      anon_sym_SQUOTE,
    ACTIONS(686), 1,
      sym__word,
    STATE(136), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(543), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym__whitespace,
  [4512] = 1,
    ACTIONS(690), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4522] = 4,
    ACTIONS(630), 1,
      anon_sym_SQUOTE,
    ACTIONS(686), 1,
      sym__word,
    STATE(116), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(569), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(692), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GE,
  [4553] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      sym__whitespace,
    STATE(184), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(696), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4568] = 5,
    ACTIONS(702), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      sym__whitespace,
    STATE(148), 1,
      aux_sym_assembly_repeat1,
    STATE(227), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(700), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4585] = 1,
    ACTIONS(680), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4594] = 6,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    ACTIONS(712), 1,
      sym_comment,
    ACTIONS(714), 1,
      sym__whitespace,
    STATE(168), 1,
      aux_sym_source_file_repeat2,
    STATE(278), 1,
      aux_sym_source_file_repeat3,
  [4613] = 1,
    ACTIONS(684), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4622] = 1,
    ACTIONS(682), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      sym__whitespace,
    STATE(182), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(716), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4646] = 6,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    ACTIONS(712), 1,
      sym_comment,
    ACTIONS(720), 1,
      sym__whitespace,
    STATE(201), 1,
      aux_sym_source_file_repeat2,
    STATE(278), 1,
      aux_sym_source_file_repeat3,
  [4665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 5,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 5,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_SQUOTE,
    ACTIONS(722), 1,
      sym__word,
    STATE(112), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(569), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [4704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 5,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4715] = 5,
    ACTIONS(726), 1,
      anon_sym_COMMA,
    ACTIONS(729), 1,
      sym__whitespace,
    STATE(159), 1,
      aux_sym_preprocessor_repeat1,
    STATE(265), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(724), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4732] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_SQUOTE,
    ACTIONS(722), 1,
      sym__word,
    STATE(112), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(577), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [4749] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 5,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym__whitespace,
  [4760] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(732), 1,
      aux_sym_source_file_token1,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      sym__whitespace,
    STATE(169), 1,
      aux_sym__macro_repeat1,
    STATE(202), 1,
      aux_sym_source_file_repeat2,
  [4779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_SQUOTE,
    ACTIONS(722), 1,
      sym__word,
    STATE(157), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(559), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [4796] = 2,
    ACTIONS(740), 1,
      sym__word_start,
    ACTIONS(738), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SQUOTE,
    ACTIONS(722), 1,
      sym__word,
    STATE(160), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(543), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [4824] = 4,
    ACTIONS(744), 1,
      anon_sym_PLUS,
    ACTIONS(746), 1,
      sym__whitespace,
    STATE(245), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(742), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
  [4839] = 4,
    ACTIONS(751), 1,
      anon_sym_PLUS,
    ACTIONS(753), 1,
      sym__whitespace,
    STATE(251), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(749), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
  [4854] = 6,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    ACTIONS(720), 1,
      sym__whitespace,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    ACTIONS(758), 1,
      sym_comment,
    STATE(201), 1,
      aux_sym_source_file_repeat2,
    STATE(266), 1,
      aux_sym_source_file_repeat3,
  [4873] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(760), 1,
      aux_sym_source_file_token1,
    ACTIONS(762), 1,
      sym__whitespace,
    STATE(199), 1,
      aux_sym__macro_repeat1,
    STATE(205), 1,
      aux_sym_source_file_repeat2,
  [4892] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_register,
    ACTIONS(766), 1,
      anon_sym_DASH,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
    ACTIONS(770), 1,
      sym__whitespace,
    STATE(187), 1,
      aux_sym_source_file_repeat2,
  [4911] = 5,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      sym__whitespace,
    STATE(194), 1,
      aux_sym_preprocessor_repeat1,
    STATE(265), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(772), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4928] = 5,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      sym__whitespace,
    STATE(195), 1,
      aux_sym_assembly_repeat1,
    STATE(227), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(779), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4945] = 2,
    ACTIONS(788), 1,
      sym__word_start,
    ACTIONS(786), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4956] = 2,
    ACTIONS(792), 1,
      sym__word_start,
    ACTIONS(790), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4967] = 2,
    ACTIONS(796), 1,
      sym__word_start,
    ACTIONS(794), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4978] = 6,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    ACTIONS(798), 1,
      ts_builtin_sym_end,
    ACTIONS(800), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym__whitespace,
    STATE(154), 1,
      aux_sym_source_file_repeat2,
    STATE(311), 1,
      aux_sym_source_file_repeat3,
  [4997] = 2,
    ACTIONS(806), 1,
      sym__word_start,
    ACTIONS(804), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [5008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(808), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      sym__whitespace,
    STATE(178), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(810), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      sym_register,
    ACTIONS(816), 1,
      anon_sym_DASH,
    ACTIONS(818), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      sym__whitespace,
    STATE(181), 1,
      aux_sym_source_file_repeat2,
  [5057] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(822), 1,
      sym_register,
    ACTIONS(824), 1,
      anon_sym_DASH,
    ACTIONS(826), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5076] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(828), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym__whitespace,
    STATE(197), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(828), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5106] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(832), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(810), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym__whitespace,
    STATE(185), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(834), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5151] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(838), 1,
      sym_register,
    ACTIONS(840), 1,
      anon_sym_DASH,
    ACTIONS(842), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5170] = 1,
    ACTIONS(688), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(696), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(834), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5209] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym__whitespace,
    STATE(190), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(844), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(844), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5239] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__whitespace,
    STATE(192), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(848), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5254] = 5,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(854), 1,
      sym__whitespace,
    STATE(159), 1,
      aux_sym_preprocessor_repeat1,
    STATE(265), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(852), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [5271] = 5,
    ACTIONS(781), 1,
      anon_sym_COMMA,
    ACTIONS(859), 1,
      sym__whitespace,
    STATE(148), 1,
      aux_sym_assembly_repeat1,
    STATE(227), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(857), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [5288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      sym__whitespace,
    STATE(189), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(862), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      sym__whitespace,
    STATE(104), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(862), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [5318] = 2,
    ACTIONS(868), 1,
      sym__word_start,
    ACTIONS(866), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [5329] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      aux_sym_source_file_token1,
    ACTIONS(872), 1,
      anon_sym_COMMA,
    ACTIONS(875), 1,
      sym__whitespace,
    STATE(199), 1,
      aux_sym__macro_repeat1,
    STATE(228), 1,
      aux_sym_source_file_repeat2,
  [5348] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_BSLASH,
    ACTIONS(878), 1,
      aux_sym_numeric_hex_token2,
    STATE(129), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
  [5362] = 3,
    ACTIONS(880), 1,
      sym__whitespace,
    STATE(201), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      sym_comment,
  [5374] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(760), 1,
      aux_sym_source_file_token1,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      aux_sym_source_file_token1,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    ACTIONS(887), 1,
      sym__whitespace,
    STATE(308), 1,
      aux_sym_source_file_repeat2,
  [5406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym__whitespace,
    STATE(204), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(65), 2,
      aux_sym_source_file_token1,
      sym__word,
  [5420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      aux_sym_source_file_token1,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      aux_sym_source_file_token1,
    ACTIONS(895), 1,
      anon_sym_PLUS,
    ACTIONS(897), 1,
      sym__whitespace,
    STATE(235), 1,
      aux_sym_source_file_repeat2,
  [5452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_BSLASH,
    ACTIONS(900), 1,
      aux_sym_numeric_hex_token2,
    STATE(124), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
  [5466] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      aux_sym_source_file_token1,
    ACTIONS(904), 1,
      sym__word,
    ACTIONS(906), 1,
      sym__whitespace,
    STATE(204), 1,
      aux_sym_source_file_repeat2,
  [5482] = 3,
    ACTIONS(910), 1,
      sym__whitespace,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(908), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [5493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    ACTIONS(915), 1,
      sym__whitespace,
    STATE(233), 1,
      aux_sym_source_file_repeat2,
  [5506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    ACTIONS(919), 1,
      sym__whitespace,
    STATE(225), 1,
      aux_sym_source_file_repeat2,
  [5519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    ACTIONS(923), 1,
      sym__whitespace,
    STATE(215), 1,
      aux_sym_source_file_repeat2,
  [5532] = 1,
    ACTIONS(700), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__whitespace,
    ACTIONS(925), 1,
      sym__word,
    STATE(204), 1,
      aux_sym_source_file_repeat2,
  [5578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [5587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5600] = 4,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(931), 1,
      aux_sym_source_file_token1,
    ACTIONS(933), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [5613] = 4,
    ACTIONS(931), 1,
      aux_sym_source_file_token1,
    ACTIONS(933), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym__whitespace,
    STATE(238), 1,
      aux_sym_source_file_repeat2,
  [5626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(921), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5639] = 4,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(937), 1,
      aux_sym_source_file_token1,
    ACTIONS(939), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [5652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    ACTIONS(943), 1,
      sym__whitespace,
    STATE(221), 1,
      aux_sym_source_file_repeat2,
  [5665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [5674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__whitespace,
    ACTIONS(949), 1,
      sym__word,
    STATE(204), 1,
      aux_sym_source_file_repeat2,
  [5700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(951), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(883), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5739] = 4,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(953), 1,
      aux_sym_source_file_token1,
    ACTIONS(955), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [5752] = 4,
    ACTIONS(470), 1,
      aux_sym_source_file_token1,
    ACTIONS(472), 1,
      sym_comment,
    ACTIONS(957), 1,
      sym__whitespace,
    STATE(72), 1,
      aux_sym_source_file_repeat2,
  [5765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    ACTIONS(961), 1,
      sym__whitespace,
    STATE(229), 1,
      aux_sym_source_file_repeat2,
  [5778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    ACTIONS(965), 1,
      sym__whitespace,
    STATE(246), 1,
      aux_sym_source_file_repeat2,
  [5804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(885), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5817] = 4,
    ACTIONS(967), 1,
      aux_sym_source_file_token1,
    ACTIONS(969), 1,
      sym_comment,
    ACTIONS(971), 1,
      sym__whitespace,
    STATE(219), 1,
      aux_sym_source_file_repeat2,
  [5830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5843] = 4,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(973), 1,
      aux_sym_source_file_token1,
    ACTIONS(975), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [5856] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    ACTIONS(979), 1,
      sym__whitespace,
    STATE(237), 1,
      aux_sym_source_file_repeat2,
  [5869] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(981), 1,
      aux_sym_source_file_token1,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [5891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    ACTIONS(987), 1,
      sym__whitespace,
    STATE(218), 1,
      aux_sym_source_file_repeat2,
  [5904] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(989), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      sym_register,
    ACTIONS(993), 1,
      sym__whitespace,
    STATE(258), 1,
      aux_sym_source_file_repeat2,
  [5930] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(995), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_RPAREN,
    ACTIONS(999), 1,
      sym__whitespace,
    STATE(254), 1,
      aux_sym_source_file_repeat2,
  [5969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(985), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      sym_register,
    ACTIONS(1003), 1,
      sym__whitespace,
    STATE(243), 1,
      aux_sym_source_file_repeat2,
  [5995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1001), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(744), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_RPAREN,
    ACTIONS(1007), 1,
      sym__whitespace,
    STATE(214), 1,
      aux_sym_source_file_repeat2,
  [6034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      sym_register,
    ACTIONS(1011), 1,
      sym__whitespace,
    STATE(250), 1,
      aux_sym_source_file_repeat2,
  [6047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    ACTIONS(1015), 1,
      sym__whitespace,
    STATE(261), 1,
      aux_sym_source_file_repeat2,
  [6073] = 4,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(967), 1,
      aux_sym_source_file_token1,
    ACTIONS(969), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [6086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_COMMA,
    ACTIONS(1019), 1,
      sym__whitespace,
    STATE(289), 1,
      aux_sym_source_file_repeat2,
  [6099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1021), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      aux_sym_source_file_token1,
    ACTIONS(1025), 1,
      sym__whitespace,
    STATE(2), 1,
      aux_sym_source_file_repeat2,
  [6125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      sym__word,
    ACTIONS(1027), 1,
      sym__whitespace,
    STATE(226), 1,
      aux_sym_source_file_repeat2,
  [6138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6151] = 4,
    ACTIONS(1031), 1,
      aux_sym_source_file_token1,
    ACTIONS(1033), 1,
      sym_comment,
    ACTIONS(1035), 1,
      sym__whitespace,
    STATE(230), 1,
      aux_sym_source_file_repeat2,
  [6164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_COMMA,
    ACTIONS(1039), 1,
      sym__whitespace,
    STATE(248), 1,
      aux_sym_source_file_repeat2,
  [6177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    ACTIONS(1041), 1,
      ts_builtin_sym_end,
    STATE(277), 1,
      aux_sym_source_file_repeat3,
  [6190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1043), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    ACTIONS(1045), 1,
      ts_builtin_sym_end,
    STATE(277), 1,
      aux_sym_source_file_repeat3,
  [6216] = 4,
    ACTIONS(470), 1,
      aux_sym_source_file_token1,
    ACTIONS(472), 1,
      sym_comment,
    ACTIONS(1047), 1,
      sym__whitespace,
    STATE(304), 1,
      aux_sym_source_file_repeat2,
  [6229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_COMMA,
    ACTIONS(1051), 1,
      sym__whitespace,
    STATE(313), 1,
      aux_sym_source_file_repeat2,
  [6242] = 4,
    ACTIONS(953), 1,
      aux_sym_source_file_token1,
    ACTIONS(955), 1,
      sym_comment,
    ACTIONS(1053), 1,
      sym__whitespace,
    STATE(303), 1,
      aux_sym_source_file_repeat2,
  [6255] = 4,
    ACTIONS(1055), 1,
      aux_sym_source_file_token1,
    ACTIONS(1057), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym__whitespace,
    STATE(222), 1,
      aux_sym_source_file_repeat2,
  [6268] = 1,
    ACTIONS(1061), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      sym_register,
    ACTIONS(1063), 1,
      sym__whitespace,
    STATE(307), 1,
      aux_sym_source_file_repeat2,
  [6288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      aux_sym_source_file_token1,
    ACTIONS(1067), 1,
      sym__whitespace,
    STATE(208), 1,
      aux_sym_source_file_repeat2,
  [6301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      aux_sym_source_file_token1,
    ACTIONS(1071), 1,
      sym__whitespace,
    STATE(240), 1,
      aux_sym_source_file_repeat2,
  [6314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [6323] = 1,
    ACTIONS(1075), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      ts_builtin_sym_end,
    ACTIONS(1079), 1,
      aux_sym_source_file_token1,
    STATE(277), 1,
      aux_sym_source_file_repeat3,
  [6343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    STATE(277), 1,
      aux_sym_source_file_repeat3,
  [6356] = 1,
    ACTIONS(1082), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6363] = 1,
    ACTIONS(1073), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
    STATE(266), 1,
      aux_sym_source_file_repeat3,
  [6383] = 1,
    ACTIONS(1084), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6390] = 1,
    ACTIONS(1086), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1088), 1,
      sym__word,
    ACTIONS(1090), 1,
      sym__whitespace,
    STATE(216), 1,
      aux_sym_source_file_repeat2,
  [6410] = 1,
    ACTIONS(1092), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6417] = 4,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(1055), 1,
      aux_sym_source_file_token1,
    ACTIONS(1057), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [6430] = 1,
    ACTIONS(1094), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6437] = 1,
    ACTIONS(1096), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6457] = 1,
    ACTIONS(1100), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6464] = 1,
    ACTIONS(1102), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6471] = 1,
    ACTIONS(1104), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6478] = 1,
    ACTIONS(1106), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6485] = 1,
    ACTIONS(1108), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6492] = 1,
    ACTIONS(1110), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6499] = 1,
    ACTIONS(1112), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6506] = 1,
    ACTIONS(1114), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6513] = 1,
    ACTIONS(1116), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6520] = 1,
    ACTIONS(1118), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    ACTIONS(1045), 1,
      ts_builtin_sym_end,
    STATE(264), 1,
      aux_sym_source_file_repeat3,
  [6540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(1120), 1,
      sym__whitespace,
    STATE(305), 1,
      aux_sym_source_file_repeat2,
  [6553] = 1,
    ACTIONS(724), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6560] = 4,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(1122), 1,
      aux_sym_source_file_token1,
    ACTIONS(1124), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [6573] = 4,
    ACTIONS(144), 1,
      sym__whitespace,
    ACTIONS(393), 1,
      aux_sym_source_file_token1,
    ACTIONS(397), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_source_file_repeat2,
  [6586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1126), 1,
      anon_sym_COMMA,
    ACTIONS(1128), 1,
      sym__whitespace,
    STATE(314), 1,
      aux_sym_source_file_repeat2,
  [6612] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1130), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1132), 1,
      anon_sym_PLUS,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym__whitespace,
    ACTIONS(1134), 1,
      sym__word,
    STATE(204), 1,
      aux_sym_source_file_repeat2,
  [6651] = 3,
    ACTIONS(1138), 1,
      sym__whitespace,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(1136), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [6662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    STATE(277), 1,
      aux_sym_source_file_repeat3,
  [6675] = 1,
    ACTIONS(1141), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [6682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1037), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      sym__whitespace,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [6708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      ts_builtin_sym_end,
    ACTIONS(710), 1,
      aux_sym_source_file_token1,
    STATE(278), 1,
      aux_sym_source_file_repeat3,
  [6721] = 2,
    ACTIONS(1145), 1,
      anon_sym_COLON,
    ACTIONS(1073), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6730] = 4,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
    ACTIONS(92), 1,
      sym_comment,
    ACTIONS(1147), 1,
      sym__whitespace,
    STATE(83), 1,
      aux_sym_source_file_repeat2,
  [6743] = 4,
    ACTIONS(1122), 1,
      aux_sym_source_file_token1,
    ACTIONS(1124), 1,
      sym_comment,
    ACTIONS(1149), 1,
      sym__whitespace,
    STATE(256), 1,
      aux_sym_source_file_repeat2,
  [6756] = 4,
    ACTIONS(393), 1,
      aux_sym_source_file_token1,
    ACTIONS(397), 1,
      sym_comment,
    ACTIONS(1151), 1,
      sym__whitespace,
    STATE(286), 1,
      aux_sym_source_file_repeat2,
  [6769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1108), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6777] = 1,
    ACTIONS(1153), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6783] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      sym__whitespace,
    STATE(146), 1,
      aux_sym_source_file_repeat2,
  [6793] = 1,
    ACTIONS(908), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6799] = 1,
    ACTIONS(1157), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6805] = 1,
    ACTIONS(1159), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1118), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1100), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1102), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6835] = 1,
    ACTIONS(1161), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6841] = 1,
    ACTIONS(1163), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_AMP,
    ACTIONS(1167), 1,
      sym__word_start,
  [6857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      sym__whitespace,
    STATE(309), 1,
      aux_sym_source_file_repeat2,
  [6867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1116), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6875] = 1,
    ACTIONS(1171), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6881] = 1,
    ACTIONS(1173), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      sym__whitespace,
    STATE(6), 1,
      aux_sym_source_file_repeat2,
  [6897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1096), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6905] = 1,
    ACTIONS(1177), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1104), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6919] = 1,
    ACTIONS(1179), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1106), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_AMP,
    ACTIONS(1183), 1,
      sym__word_start,
  [6943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1094), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6951] = 1,
    ACTIONS(1185), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6965] = 1,
    ACTIONS(1189), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1114), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1084), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6987] = 1,
    ACTIONS(1191), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1086), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [7001] = 1,
    ACTIONS(1193), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [7007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1092), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [7015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1112), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [7023] = 1,
    ACTIONS(1195), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [7029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [7037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1197), 1,
      anon_sym_AMP,
    ACTIONS(1199), 1,
      sym__word_start,
  [7047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1110), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [7055] = 1,
    ACTIONS(1201), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [7061] = 1,
    ACTIONS(1203), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [7067] = 1,
    ACTIONS(1205), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [7073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1207), 1,
      anon_sym_AMP,
    ACTIONS(1209), 1,
      sym__word_start,
  [7083] = 1,
    ACTIONS(1211), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [7089] = 1,
    ACTIONS(1213), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [7095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1215), 1,
      anon_sym_AMP,
    ACTIONS(1217), 1,
      sym__word_start,
  [7105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1219), 1,
      anon_sym_AMP,
    ACTIONS(1221), 1,
      sym__word_start,
  [7115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1223), 1,
      sym__word_start,
  [7122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1225), 1,
      sym__word_start,
  [7129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      aux_sym_source_file_token1,
  [7136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1227), 1,
      sym__word_start,
  [7143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      aux_sym_source_file_token1,
  [7150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1229), 1,
      sym__word_start,
  [7157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1231), 1,
      anon_sym_SQUOTE,
  [7164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      aux_sym_source_file_token1,
  [7171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1233), 1,
      aux_sym_source_file_token1,
  [7178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1235), 1,
      sym_numeric_32bit,
  [7185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1237), 1,
      sym_numeric_32bit,
  [7192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1239), 1,
      sym__word_start,
  [7199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1241), 1,
      sym__word_start,
  [7206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      aux_sym_source_file_token1,
  [7213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_COLON,
  [7220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      aux_sym_source_file_token1,
  [7227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      aux_sym_source_file_token1,
  [7234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1243), 1,
      aux_sym_source_file_token1,
  [7241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym_source_file_token1,
  [7248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1122), 1,
      aux_sym_source_file_token1,
  [7255] = 2,
    ACTIONS(1245), 1,
      aux_sym_source_file_token2,
    ACTIONS(1247), 1,
      sym_comment,
  [7262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1249), 1,
      anon_sym_SQUOTE,
  [7269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      aux_sym_source_file_token1,
  [7276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1251), 1,
      ts_builtin_sym_end,
  [7283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 226,
  [SMALL_STATE(7)] = 281,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 391,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 468,
  [SMALL_STATE(12)] = 522,
  [SMALL_STATE(13)] = 566,
  [SMALL_STATE(14)] = 610,
  [SMALL_STATE(15)] = 664,
  [SMALL_STATE(16)] = 718,
  [SMALL_STATE(17)] = 772,
  [SMALL_STATE(18)] = 816,
  [SMALL_STATE(19)] = 860,
  [SMALL_STATE(20)] = 914,
  [SMALL_STATE(21)] = 965,
  [SMALL_STATE(22)] = 1016,
  [SMALL_STATE(23)] = 1067,
  [SMALL_STATE(24)] = 1118,
  [SMALL_STATE(25)] = 1169,
  [SMALL_STATE(26)] = 1220,
  [SMALL_STATE(27)] = 1271,
  [SMALL_STATE(28)] = 1322,
  [SMALL_STATE(29)] = 1373,
  [SMALL_STATE(30)] = 1424,
  [SMALL_STATE(31)] = 1475,
  [SMALL_STATE(32)] = 1526,
  [SMALL_STATE(33)] = 1577,
  [SMALL_STATE(34)] = 1628,
  [SMALL_STATE(35)] = 1679,
  [SMALL_STATE(36)] = 1730,
  [SMALL_STATE(37)] = 1781,
  [SMALL_STATE(38)] = 1832,
  [SMALL_STATE(39)] = 1880,
  [SMALL_STATE(40)] = 1918,
  [SMALL_STATE(41)] = 1956,
  [SMALL_STATE(42)] = 1994,
  [SMALL_STATE(43)] = 2032,
  [SMALL_STATE(44)] = 2070,
  [SMALL_STATE(45)] = 2108,
  [SMALL_STATE(46)] = 2146,
  [SMALL_STATE(47)] = 2184,
  [SMALL_STATE(48)] = 2220,
  [SMALL_STATE(49)] = 2256,
  [SMALL_STATE(50)] = 2289,
  [SMALL_STATE(51)] = 2322,
  [SMALL_STATE(52)] = 2355,
  [SMALL_STATE(53)] = 2388,
  [SMALL_STATE(54)] = 2421,
  [SMALL_STATE(55)] = 2454,
  [SMALL_STATE(56)] = 2487,
  [SMALL_STATE(57)] = 2520,
  [SMALL_STATE(58)] = 2553,
  [SMALL_STATE(59)] = 2586,
  [SMALL_STATE(60)] = 2619,
  [SMALL_STATE(61)] = 2652,
  [SMALL_STATE(62)] = 2685,
  [SMALL_STATE(63)] = 2718,
  [SMALL_STATE(64)] = 2751,
  [SMALL_STATE(65)] = 2784,
  [SMALL_STATE(66)] = 2817,
  [SMALL_STATE(67)] = 2850,
  [SMALL_STATE(68)] = 2883,
  [SMALL_STATE(69)] = 2916,
  [SMALL_STATE(70)] = 2949,
  [SMALL_STATE(71)] = 2982,
  [SMALL_STATE(72)] = 3015,
  [SMALL_STATE(73)] = 3048,
  [SMALL_STATE(74)] = 3081,
  [SMALL_STATE(75)] = 3114,
  [SMALL_STATE(76)] = 3147,
  [SMALL_STATE(77)] = 3180,
  [SMALL_STATE(78)] = 3213,
  [SMALL_STATE(79)] = 3246,
  [SMALL_STATE(80)] = 3279,
  [SMALL_STATE(81)] = 3312,
  [SMALL_STATE(82)] = 3345,
  [SMALL_STATE(83)] = 3366,
  [SMALL_STATE(84)] = 3399,
  [SMALL_STATE(85)] = 3432,
  [SMALL_STATE(86)] = 3465,
  [SMALL_STATE(87)] = 3498,
  [SMALL_STATE(88)] = 3531,
  [SMALL_STATE(89)] = 3551,
  [SMALL_STATE(90)] = 3571,
  [SMALL_STATE(91)] = 3591,
  [SMALL_STATE(92)] = 3612,
  [SMALL_STATE(93)] = 3635,
  [SMALL_STATE(94)] = 3656,
  [SMALL_STATE(95)] = 3675,
  [SMALL_STATE(96)] = 3693,
  [SMALL_STATE(97)] = 3717,
  [SMALL_STATE(98)] = 3737,
  [SMALL_STATE(99)] = 3755,
  [SMALL_STATE(100)] = 3775,
  [SMALL_STATE(101)] = 3793,
  [SMALL_STATE(102)] = 3813,
  [SMALL_STATE(103)] = 3831,
  [SMALL_STATE(104)] = 3851,
  [SMALL_STATE(105)] = 3869,
  [SMALL_STATE(106)] = 3889,
  [SMALL_STATE(107)] = 3909,
  [SMALL_STATE(108)] = 3929,
  [SMALL_STATE(109)] = 3951,
  [SMALL_STATE(110)] = 3971,
  [SMALL_STATE(111)] = 3991,
  [SMALL_STATE(112)] = 4011,
  [SMALL_STATE(113)] = 4029,
  [SMALL_STATE(114)] = 4049,
  [SMALL_STATE(115)] = 4071,
  [SMALL_STATE(116)] = 4093,
  [SMALL_STATE(117)] = 4109,
  [SMALL_STATE(118)] = 4131,
  [SMALL_STATE(119)] = 4149,
  [SMALL_STATE(120)] = 4167,
  [SMALL_STATE(121)] = 4185,
  [SMALL_STATE(122)] = 4203,
  [SMALL_STATE(123)] = 4223,
  [SMALL_STATE(124)] = 4238,
  [SMALL_STATE(125)] = 4257,
  [SMALL_STATE(126)] = 4270,
  [SMALL_STATE(127)] = 4287,
  [SMALL_STATE(128)] = 4306,
  [SMALL_STATE(129)] = 4319,
  [SMALL_STATE(130)] = 4336,
  [SMALL_STATE(131)] = 4353,
  [SMALL_STATE(132)] = 4364,
  [SMALL_STATE(133)] = 4374,
  [SMALL_STATE(134)] = 4384,
  [SMALL_STATE(135)] = 4394,
  [SMALL_STATE(136)] = 4410,
  [SMALL_STATE(137)] = 4426,
  [SMALL_STATE(138)] = 4436,
  [SMALL_STATE(139)] = 4448,
  [SMALL_STATE(140)] = 4460,
  [SMALL_STATE(141)] = 4472,
  [SMALL_STATE(142)] = 4484,
  [SMALL_STATE(143)] = 4500,
  [SMALL_STATE(144)] = 4512,
  [SMALL_STATE(145)] = 4522,
  [SMALL_STATE(146)] = 4538,
  [SMALL_STATE(147)] = 4553,
  [SMALL_STATE(148)] = 4568,
  [SMALL_STATE(149)] = 4585,
  [SMALL_STATE(150)] = 4594,
  [SMALL_STATE(151)] = 4613,
  [SMALL_STATE(152)] = 4622,
  [SMALL_STATE(153)] = 4631,
  [SMALL_STATE(154)] = 4646,
  [SMALL_STATE(155)] = 4665,
  [SMALL_STATE(156)] = 4676,
  [SMALL_STATE(157)] = 4687,
  [SMALL_STATE(158)] = 4704,
  [SMALL_STATE(159)] = 4715,
  [SMALL_STATE(160)] = 4732,
  [SMALL_STATE(161)] = 4749,
  [SMALL_STATE(162)] = 4760,
  [SMALL_STATE(163)] = 4779,
  [SMALL_STATE(164)] = 4796,
  [SMALL_STATE(165)] = 4807,
  [SMALL_STATE(166)] = 4824,
  [SMALL_STATE(167)] = 4839,
  [SMALL_STATE(168)] = 4854,
  [SMALL_STATE(169)] = 4873,
  [SMALL_STATE(170)] = 4892,
  [SMALL_STATE(171)] = 4911,
  [SMALL_STATE(172)] = 4928,
  [SMALL_STATE(173)] = 4945,
  [SMALL_STATE(174)] = 4956,
  [SMALL_STATE(175)] = 4967,
  [SMALL_STATE(176)] = 4978,
  [SMALL_STATE(177)] = 4997,
  [SMALL_STATE(178)] = 5008,
  [SMALL_STATE(179)] = 5023,
  [SMALL_STATE(180)] = 5038,
  [SMALL_STATE(181)] = 5057,
  [SMALL_STATE(182)] = 5076,
  [SMALL_STATE(183)] = 5091,
  [SMALL_STATE(184)] = 5106,
  [SMALL_STATE(185)] = 5121,
  [SMALL_STATE(186)] = 5136,
  [SMALL_STATE(187)] = 5151,
  [SMALL_STATE(188)] = 5170,
  [SMALL_STATE(189)] = 5179,
  [SMALL_STATE(190)] = 5194,
  [SMALL_STATE(191)] = 5209,
  [SMALL_STATE(192)] = 5224,
  [SMALL_STATE(193)] = 5239,
  [SMALL_STATE(194)] = 5254,
  [SMALL_STATE(195)] = 5271,
  [SMALL_STATE(196)] = 5288,
  [SMALL_STATE(197)] = 5303,
  [SMALL_STATE(198)] = 5318,
  [SMALL_STATE(199)] = 5329,
  [SMALL_STATE(200)] = 5348,
  [SMALL_STATE(201)] = 5362,
  [SMALL_STATE(202)] = 5374,
  [SMALL_STATE(203)] = 5390,
  [SMALL_STATE(204)] = 5406,
  [SMALL_STATE(205)] = 5420,
  [SMALL_STATE(206)] = 5436,
  [SMALL_STATE(207)] = 5452,
  [SMALL_STATE(208)] = 5466,
  [SMALL_STATE(209)] = 5482,
  [SMALL_STATE(210)] = 5493,
  [SMALL_STATE(211)] = 5506,
  [SMALL_STATE(212)] = 5519,
  [SMALL_STATE(213)] = 5532,
  [SMALL_STATE(214)] = 5539,
  [SMALL_STATE(215)] = 5552,
  [SMALL_STATE(216)] = 5565,
  [SMALL_STATE(217)] = 5578,
  [SMALL_STATE(218)] = 5587,
  [SMALL_STATE(219)] = 5600,
  [SMALL_STATE(220)] = 5613,
  [SMALL_STATE(221)] = 5626,
  [SMALL_STATE(222)] = 5639,
  [SMALL_STATE(223)] = 5652,
  [SMALL_STATE(224)] = 5665,
  [SMALL_STATE(225)] = 5674,
  [SMALL_STATE(226)] = 5687,
  [SMALL_STATE(227)] = 5700,
  [SMALL_STATE(228)] = 5713,
  [SMALL_STATE(229)] = 5726,
  [SMALL_STATE(230)] = 5739,
  [SMALL_STATE(231)] = 5752,
  [SMALL_STATE(232)] = 5765,
  [SMALL_STATE(233)] = 5778,
  [SMALL_STATE(234)] = 5791,
  [SMALL_STATE(235)] = 5804,
  [SMALL_STATE(236)] = 5817,
  [SMALL_STATE(237)] = 5830,
  [SMALL_STATE(238)] = 5843,
  [SMALL_STATE(239)] = 5856,
  [SMALL_STATE(240)] = 5869,
  [SMALL_STATE(241)] = 5882,
  [SMALL_STATE(242)] = 5891,
  [SMALL_STATE(243)] = 5904,
  [SMALL_STATE(244)] = 5917,
  [SMALL_STATE(245)] = 5930,
  [SMALL_STATE(246)] = 5943,
  [SMALL_STATE(247)] = 5956,
  [SMALL_STATE(248)] = 5969,
  [SMALL_STATE(249)] = 5982,
  [SMALL_STATE(250)] = 5995,
  [SMALL_STATE(251)] = 6008,
  [SMALL_STATE(252)] = 6021,
  [SMALL_STATE(253)] = 6034,
  [SMALL_STATE(254)] = 6047,
  [SMALL_STATE(255)] = 6060,
  [SMALL_STATE(256)] = 6073,
  [SMALL_STATE(257)] = 6086,
  [SMALL_STATE(258)] = 6099,
  [SMALL_STATE(259)] = 6112,
  [SMALL_STATE(260)] = 6125,
  [SMALL_STATE(261)] = 6138,
  [SMALL_STATE(262)] = 6151,
  [SMALL_STATE(263)] = 6164,
  [SMALL_STATE(264)] = 6177,
  [SMALL_STATE(265)] = 6190,
  [SMALL_STATE(266)] = 6203,
  [SMALL_STATE(267)] = 6216,
  [SMALL_STATE(268)] = 6229,
  [SMALL_STATE(269)] = 6242,
  [SMALL_STATE(270)] = 6255,
  [SMALL_STATE(271)] = 6268,
  [SMALL_STATE(272)] = 6275,
  [SMALL_STATE(273)] = 6288,
  [SMALL_STATE(274)] = 6301,
  [SMALL_STATE(275)] = 6314,
  [SMALL_STATE(276)] = 6323,
  [SMALL_STATE(277)] = 6330,
  [SMALL_STATE(278)] = 6343,
  [SMALL_STATE(279)] = 6356,
  [SMALL_STATE(280)] = 6363,
  [SMALL_STATE(281)] = 6370,
  [SMALL_STATE(282)] = 6383,
  [SMALL_STATE(283)] = 6390,
  [SMALL_STATE(284)] = 6397,
  [SMALL_STATE(285)] = 6410,
  [SMALL_STATE(286)] = 6417,
  [SMALL_STATE(287)] = 6430,
  [SMALL_STATE(288)] = 6437,
  [SMALL_STATE(289)] = 6444,
  [SMALL_STATE(290)] = 6457,
  [SMALL_STATE(291)] = 6464,
  [SMALL_STATE(292)] = 6471,
  [SMALL_STATE(293)] = 6478,
  [SMALL_STATE(294)] = 6485,
  [SMALL_STATE(295)] = 6492,
  [SMALL_STATE(296)] = 6499,
  [SMALL_STATE(297)] = 6506,
  [SMALL_STATE(298)] = 6513,
  [SMALL_STATE(299)] = 6520,
  [SMALL_STATE(300)] = 6527,
  [SMALL_STATE(301)] = 6540,
  [SMALL_STATE(302)] = 6553,
  [SMALL_STATE(303)] = 6560,
  [SMALL_STATE(304)] = 6573,
  [SMALL_STATE(305)] = 6586,
  [SMALL_STATE(306)] = 6599,
  [SMALL_STATE(307)] = 6612,
  [SMALL_STATE(308)] = 6625,
  [SMALL_STATE(309)] = 6638,
  [SMALL_STATE(310)] = 6651,
  [SMALL_STATE(311)] = 6662,
  [SMALL_STATE(312)] = 6675,
  [SMALL_STATE(313)] = 6682,
  [SMALL_STATE(314)] = 6695,
  [SMALL_STATE(315)] = 6708,
  [SMALL_STATE(316)] = 6721,
  [SMALL_STATE(317)] = 6730,
  [SMALL_STATE(318)] = 6743,
  [SMALL_STATE(319)] = 6756,
  [SMALL_STATE(320)] = 6769,
  [SMALL_STATE(321)] = 6777,
  [SMALL_STATE(322)] = 6783,
  [SMALL_STATE(323)] = 6793,
  [SMALL_STATE(324)] = 6799,
  [SMALL_STATE(325)] = 6805,
  [SMALL_STATE(326)] = 6811,
  [SMALL_STATE(327)] = 6819,
  [SMALL_STATE(328)] = 6827,
  [SMALL_STATE(329)] = 6835,
  [SMALL_STATE(330)] = 6841,
  [SMALL_STATE(331)] = 6847,
  [SMALL_STATE(332)] = 6857,
  [SMALL_STATE(333)] = 6867,
  [SMALL_STATE(334)] = 6875,
  [SMALL_STATE(335)] = 6881,
  [SMALL_STATE(336)] = 6887,
  [SMALL_STATE(337)] = 6897,
  [SMALL_STATE(338)] = 6905,
  [SMALL_STATE(339)] = 6911,
  [SMALL_STATE(340)] = 6919,
  [SMALL_STATE(341)] = 6925,
  [SMALL_STATE(342)] = 6933,
  [SMALL_STATE(343)] = 6943,
  [SMALL_STATE(344)] = 6951,
  [SMALL_STATE(345)] = 6957,
  [SMALL_STATE(346)] = 6965,
  [SMALL_STATE(347)] = 6971,
  [SMALL_STATE(348)] = 6979,
  [SMALL_STATE(349)] = 6987,
  [SMALL_STATE(350)] = 6993,
  [SMALL_STATE(351)] = 7001,
  [SMALL_STATE(352)] = 7007,
  [SMALL_STATE(353)] = 7015,
  [SMALL_STATE(354)] = 7023,
  [SMALL_STATE(355)] = 7029,
  [SMALL_STATE(356)] = 7037,
  [SMALL_STATE(357)] = 7047,
  [SMALL_STATE(358)] = 7055,
  [SMALL_STATE(359)] = 7061,
  [SMALL_STATE(360)] = 7067,
  [SMALL_STATE(361)] = 7073,
  [SMALL_STATE(362)] = 7083,
  [SMALL_STATE(363)] = 7089,
  [SMALL_STATE(364)] = 7095,
  [SMALL_STATE(365)] = 7105,
  [SMALL_STATE(366)] = 7115,
  [SMALL_STATE(367)] = 7122,
  [SMALL_STATE(368)] = 7129,
  [SMALL_STATE(369)] = 7136,
  [SMALL_STATE(370)] = 7143,
  [SMALL_STATE(371)] = 7150,
  [SMALL_STATE(372)] = 7157,
  [SMALL_STATE(373)] = 7164,
  [SMALL_STATE(374)] = 7171,
  [SMALL_STATE(375)] = 7178,
  [SMALL_STATE(376)] = 7185,
  [SMALL_STATE(377)] = 7192,
  [SMALL_STATE(378)] = 7199,
  [SMALL_STATE(379)] = 7206,
  [SMALL_STATE(380)] = 7213,
  [SMALL_STATE(381)] = 7220,
  [SMALL_STATE(382)] = 7227,
  [SMALL_STATE(383)] = 7234,
  [SMALL_STATE(384)] = 7241,
  [SMALL_STATE(385)] = 7248,
  [SMALL_STATE(386)] = 7255,
  [SMALL_STATE(387)] = 7262,
  [SMALL_STATE(388)] = 7269,
  [SMALL_STATE(389)] = 7276,
  [SMALL_STATE(390)] = 7283,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(331),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(390),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5, .production_id = 7), SHIFT(71),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5, .production_id = 7), SHIFT(390),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5, .production_id = 7), SHIFT(30),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9), SHIFT(87),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9), SHIFT(390),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9), SHIFT(37),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(67),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(390),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(36),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(64),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(390),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(15),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(48),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(390),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(23),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 4, .production_id = 7), SHIFT(73),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 4, .production_id = 7), SHIFT(390),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 4, .production_id = 7), SHIFT(33),
  [279] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 5), SHIFT(48),
  [283] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 5), SHIFT(390),
  [287] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 5), SHIFT(20),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 2), SHIFT(63),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 2), SHIFT(390),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 2), SHIFT(16),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 9), SHIFT(48),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 9), SHIFT(390),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 9), SHIFT(21),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(85),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(86),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(390),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(20),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(48),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 9), SHIFT(70),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 9), SHIFT(57),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 9), SHIFT(390),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 9), SHIFT(34),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(77),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(390),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(19),
  [345] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 7), SHIFT(48),
  [349] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 7), SHIFT(390),
  [353] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 7), SHIFT(36),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(81),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(78),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(14),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(48),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(390),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(31),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(53),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(52),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9), SHIFT(48),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 7), SHIFT(48),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 7), SHIFT(390),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 7), SHIFT(26),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5, .production_id = 7), SHIFT(48),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(66),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(390),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(11),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 12), SHIFT(48),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 12), SHIFT(390),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 12), SHIFT(29),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(60),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(22),
  [428] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 4), SHIFT(48),
  [432] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 4), SHIFT(390),
  [436] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 4), SHIFT(35),
  [440] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 6), SHIFT(48),
  [444] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 6), SHIFT(390),
  [448] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), REDUCE(sym__aif, 6), SHIFT(22),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(75),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(390),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(28),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(48),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(55),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(82),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(80),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(390),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(25),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(48),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(48),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 9), SHIFT(48),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 9), SHIFT(390),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 9), SHIFT(24),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(88),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(89),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(90),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(91),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(93),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(94),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [530] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(125),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2, .production_id = 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 2, .production_id = 1), SHIFT(131),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [552] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 2, .production_id = 1), SHIFT(128),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 3), SHIFT(128),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(104),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4, .production_id = 5),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 4), SHIFT(128),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2), SHIFT_REPEAT(342),
  [589] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2), SHIFT_REPEAT(141),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2, .production_id = 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3, .production_id = 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 5), SHIFT(128),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3, .production_id = 3),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(128),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(131),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 3), SHIFT(131),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 5), SHIFT(131),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 4), SHIFT(131),
  [640] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2), SHIFT_REPEAT(331),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2), SHIFT_REPEAT(144),
  [646] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(123),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_hex, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(126),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(127),
  [667] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(361),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(130),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(356),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 4),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 3),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 5, .production_id = 5),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 1, .production_id = 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 2),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 2), SHIFT_REPEAT(17),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 2), SHIFT_REPEAT(227),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 2),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 2), SHIFT_REPEAT(8),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 2), SHIFT_REPEAT(265),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 4),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 3), SHIFT(245),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 2), SHIFT(251),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [776] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_preprocessor, 3), SHIFT(265),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembly, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assembly, 3), SHIFT(227),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 5),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 5),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 7),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 7),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 4),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_preprocessor, 4), SHIFT(265),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembly, 4),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assembly, 4), SHIFT(227),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 6),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 6),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2),
  [872] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(284),
  [875] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(228),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(201),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 3), SHIFT(308),
  [890] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(204),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [897] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 2), SHIFT(235),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 1),
  [910] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_preprocessor, 1), SHIFT(4),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2, .production_id = 10),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 3, .production_id = 11),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 4, .production_id = 12),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1041] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1045] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 3),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1073] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 3),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [1079] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(386),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 4),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, .production_id = 6),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, .production_id = 8),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_increment, 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_decrement, 3),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_increment, 4),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_decrement, 4),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_increment, 5),
  [1106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_decrement, 5),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 6),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 7),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 8),
  [1114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 9),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 10),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 11),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembly, 1),
  [1138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assembly, 1), SHIFT(12),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 4),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 9),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 14),
  [1159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 13),
  [1161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 6),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 7),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 12),
  [1173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_colon, 2),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 7),
  [1179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 11, .production_id = 9),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 4),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aif_arguments, 5),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 7),
  [1191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 11),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 10, .production_id = 9),
  [1195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 10),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 9),
  [1203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 7),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 8),
  [1213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 5),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1247] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1251] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
