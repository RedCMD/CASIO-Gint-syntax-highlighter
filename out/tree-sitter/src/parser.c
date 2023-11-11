#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 360
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
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
  sym_line = 43,
  sym_constant = 44,
  sym__numeric = 45,
  sym_numeric_hex = 46,
  sym_label_colon = 47,
  sym_label = 48,
  sym__label = 49,
  sym_symbol = 50,
  sym__line = 51,
  sym__aif = 52,
  sym_aif_arguments = 53,
  sym__macro = 54,
  sym_preprocessor = 55,
  sym_assembly = 56,
  sym__argument = 57,
  sym__operand = 58,
  sym_pointer_offset = 59,
  sym_pointer_decrement = 60,
  sym_pointer_increment = 61,
  sym_pointer = 62,
  aux_sym_source_file_repeat1 = 63,
  aux_sym_source_file_repeat2 = 64,
  aux_sym_source_file_repeat3 = 65,
  aux_sym_line_repeat1 = 66,
  aux_sym_numeric_hex_repeat1 = 67,
  aux_sym__label_repeat1 = 68,
  aux_sym_symbol_repeat1 = 69,
  aux_sym__aif_repeat1 = 70,
  aux_sym__macro_repeat1 = 71,
  aux_sym_preprocessor_repeat1 = 72,
  aux_sym_assembly_repeat1 = 73,
  anon_alias_sym_char = 74,
  anon_alias_sym_char_label = 75,
  anon_alias_sym_name = 76,
  anon_alias_sym_numeric = 77,
  anon_alias_sym_variable = 78,
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
  [sym_line] = "line",
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
  [aux_sym_line_repeat1] = "line_repeat1",
  [aux_sym_numeric_hex_repeat1] = "numeric_hex_repeat1",
  [aux_sym__label_repeat1] = "_label_repeat1",
  [aux_sym_symbol_repeat1] = "symbol_repeat1",
  [aux_sym__aif_repeat1] = "_aif_repeat1",
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
  [sym_line] = sym_line,
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
  [aux_sym_line_repeat1] = aux_sym_line_repeat1,
  [aux_sym_numeric_hex_repeat1] = aux_sym_numeric_hex_repeat1,
  [aux_sym__label_repeat1] = aux_sym__label_repeat1,
  [aux_sym_symbol_repeat1] = aux_sym_symbol_repeat1,
  [aux_sym__aif_repeat1] = aux_sym__aif_repeat1,
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
  [sym_line] = {
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
  [aux_sym_line_repeat1] = {
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
  [aux_sym__aif_repeat1] = {
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
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '&') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '1') ADVANCE(89);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '?') ADVANCE(122);
      if (lookahead == '@') ADVANCE(187);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(84);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(86);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(105);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(105);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(113);
      if (('B' <= lookahead && lookahead <= 'E') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('I' <= lookahead && lookahead <= 'Z') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '+') ADVANCE(196);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '.') ADVANCE(161);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '?' ||
          lookahead == '_') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(162);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 10:
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '"') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(184);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '@') ADVANCE(187);
      if (lookahead == 'R') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(125);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(144);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(141);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(140);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(139);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(142);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(140);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(145);
      if (lookahead == '$' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(101);
      if (lookahead == '$' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'm' ||
          lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(20);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'h' ||
          lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(32);
      if (lookahead == 'L') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(151);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'Q') ADVANCE(149);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(150);
      END_STATE();
    case 35:
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(190);
      END_STATE();
    case 42:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 43:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 49:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 50:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'h' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 52:
      if (lookahead == 'B' ||
          lookahead == 'L' ||
          lookahead == 'W' ||
          lookahead == 'b' ||
          lookahead == 'l' ||
          lookahead == 'w') ADVANCE(155);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 56:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '(') ADVANCE(188);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '2') ADVANCE(93);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '@') ADVANCE(187);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (lookahead == 'R') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (lookahead == '$' ||
          lookahead == '?') ADVANCE(122);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(124);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(136);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(133);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(132);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(132);
      if (lookahead == 'X' ||
          lookahead == 'Y' ||
          lookahead == 'x' ||
          lookahead == 'y') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 57:
      if (eof) ADVANCE(58);
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ';') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '$' ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOTEND);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOTEND);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_register_0);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_register_0);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(69);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(71);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(65);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token1);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token1);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(120);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '5') ADVANCE(89);
      if (lookahead == '=') ADVANCE(53);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_numeric_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (lookahead == '$' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '5') ADVANCE(95);
      if (lookahead == '=') ADVANCE(53);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '5') ADVANCE(97);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '=') ADVANCE(53);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_numeric_32bit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(115);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(67);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '_') ADVANCE(120);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(115);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(107);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(66);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      if (('2' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'h' ||
          lookahead == 'l') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$') ADVANCE(121);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word_start);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '0') ADVANCE(195);
      if (lookahead == '=') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '0') ADVANCE(194);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '0') ADVANCE(63);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(193);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(192);
      if (lookahead == 'm' ||
          lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '1') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'S' ||
          lookahead == 'e' ||
          lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(72);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(193);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(195);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(47);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(192);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(48);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word_start);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOTAIF);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOTAELSE);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__aif_token1);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOTMACRO);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__macro_token1);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == 'M') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(168);
      if (lookahead == 'M') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(170);
      if (lookahead == 'M') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead == 'M') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == 'M') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'M') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'C') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'D') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'I') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'F') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'L') ADVANCE(182);
      if (lookahead == 'N') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'O') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'R') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_preprocessor_token1);
      if (lookahead == '.') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__argument_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__argument_token1);
      if (lookahead == '"') ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__argument_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_pointer_offset_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_pointer_offset_token2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_register_control);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_register_control);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_register_system);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_register_system);
      if (lookahead == '=') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_instruction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(201);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 56},
  [3] = {.lex_state = 56},
  [4] = {.lex_state = 56},
  [5] = {.lex_state = 56},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 56},
  [8] = {.lex_state = 56},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 57},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 57},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 57},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 57},
  [60] = {.lex_state = 57},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 57},
  [65] = {.lex_state = 57},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 57},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 57},
  [70] = {.lex_state = 57},
  [71] = {.lex_state = 57},
  [72] = {.lex_state = 57},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 57},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 57},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 57},
  [80] = {.lex_state = 57},
  [81] = {.lex_state = 57},
  [82] = {.lex_state = 57},
  [83] = {.lex_state = 57},
  [84] = {.lex_state = 57},
  [85] = {.lex_state = 57},
  [86] = {.lex_state = 57},
  [87] = {.lex_state = 57},
  [88] = {.lex_state = 57},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 57},
  [91] = {.lex_state = 57},
  [92] = {.lex_state = 57},
  [93] = {.lex_state = 57},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 56},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 57},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 31},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 57},
  [132] = {.lex_state = 57},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 57},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 57},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 57},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 57},
  [144] = {.lex_state = 57},
  [145] = {.lex_state = 57},
  [146] = {.lex_state = 3},
  [147] = {.lex_state = 57},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 3},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 57},
  [153] = {.lex_state = 57},
  [154] = {.lex_state = 57},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 57},
  [157] = {.lex_state = 57},
  [158] = {.lex_state = 57},
  [159] = {.lex_state = 57},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 56},
  [163] = {.lex_state = 31},
  [164] = {.lex_state = 31},
  [165] = {.lex_state = 57},
  [166] = {.lex_state = 31},
  [167] = {.lex_state = 31},
  [168] = {.lex_state = 31},
  [169] = {.lex_state = 31},
  [170] = {.lex_state = 31},
  [171] = {.lex_state = 56},
  [172] = {.lex_state = 57},
  [173] = {.lex_state = 31},
  [174] = {.lex_state = 57},
  [175] = {.lex_state = 57},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 31},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 57},
  [181] = {.lex_state = 57},
  [182] = {.lex_state = 57},
  [183] = {.lex_state = 57},
  [184] = {.lex_state = 57},
  [185] = {.lex_state = 57},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 0},
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
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
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
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 56},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 56},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 56},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 56},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
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
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 14},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 14},
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
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 62},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 57},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 14},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 14},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 14},
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
    [sym_comment] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(354),
    [sym_line] = STATE(45),
    [sym_label_colon] = STATE(189),
    [sym_label] = STATE(189),
    [sym__label] = STATE(190),
    [sym_symbol] = STATE(107),
    [aux_sym_source_file_repeat1] = STATE(45),
    [aux_sym_source_file_repeat2] = STATE(25),
    [aux_sym_line_repeat1] = STATE(93),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_BSLASH] = ACTIONS(7),
    [sym__word_start] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym__whitespace] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(15), 1,
      aux_sym_source_file_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    STATE(291), 1,
      sym_aif_arguments,
    ACTIONS(23), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(17), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(315), 10,
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
  [58] = 12,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym__whitespace,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(31), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(29), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(226), 10,
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
  [110] = 12,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(37), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(35), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(129), 10,
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
  [162] = 12,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(41), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(39), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(243), 10,
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
  [214] = 12,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(31), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(29), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(226), 10,
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
  [266] = 12,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      sym__whitespace,
    STATE(6), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(45), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(43), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(205), 10,
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
  [318] = 12,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(51), 2,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
    ACTIONS(49), 6,
      sym_register,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym_register_control,
      sym_register_system,
    STATE(320), 10,
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
  [370] = 4,
    ACTIONS(57), 1,
      sym__whitespace,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(55), 8,
      sym_register,
      aux_sym_numeric_hex_token1,
      sym_numeric_32bit,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym__word_start,
      sym_register_control,
      sym_register_system,
    ACTIONS(53), 10,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_BSLASH,
      aux_sym__argument_token1,
      aux_sym__argument_token2,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_comment,
  [399] = 17,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(64), 1,
      anon_sym_DOTAELSE,
    ACTIONS(66), 1,
      aux_sym__aif_token1,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__whitespace,
    STATE(58), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [453] = 17,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__whitespace,
    ACTIONS(78), 1,
      anon_sym_DOTAELSE,
    ACTIONS(80), 1,
      aux_sym__aif_token1,
    STATE(58), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [507] = 17,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__whitespace,
    ACTIONS(82), 1,
      anon_sym_DOTAELSE,
    ACTIONS(84), 1,
      aux_sym__aif_token1,
    STATE(58), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [561] = 17,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__whitespace,
    ACTIONS(86), 1,
      anon_sym_DOTAELSE,
    ACTIONS(88), 1,
      aux_sym__aif_token1,
    STATE(58), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [615] = 17,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym__whitespace,
    ACTIONS(90), 1,
      anon_sym_DOTAELSE,
    ACTIONS(92), 1,
      aux_sym__aif_token1,
    STATE(58), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [669] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym__macro_token1,
    ACTIONS(96), 1,
      sym__whitespace,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [720] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(98), 1,
      aux_sym__aif_token1,
    ACTIONS(100), 1,
      sym__whitespace,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [771] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym__whitespace,
    ACTIONS(102), 1,
      aux_sym__macro_token1,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [822] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym__whitespace,
    ACTIONS(104), 1,
      aux_sym__macro_token1,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [873] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym__whitespace,
    ACTIONS(106), 1,
      aux_sym__macro_token1,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [924] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__whitespace,
    ACTIONS(108), 1,
      aux_sym__aif_token1,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [975] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__whitespace,
    ACTIONS(110), 1,
      aux_sym__aif_token1,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1026] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(112), 1,
      anon_sym_DOTEND,
    ACTIONS(114), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__whitespace,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(201), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(202), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1077] = 11,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_register,
    ACTIONS(124), 1,
      sym__whitespace,
    STATE(29), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(122), 2,
      sym_register_control,
      sym_register_system,
    STATE(227), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [1118] = 11,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      sym_register,
    ACTIONS(130), 1,
      sym__whitespace,
    STATE(107), 1,
      sym_symbol,
    STATE(109), 1,
      aux_sym_source_file_repeat2,
    STATE(224), 1,
      sym__label,
    ACTIONS(128), 2,
      sym_register_control,
      sym_register_system,
    STATE(130), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [1159] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(114), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(132), 1,
      anon_sym_DOTEND,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(201), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(202), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1210] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__whitespace,
    ACTIONS(134), 1,
      aux_sym__aif_token1,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1261] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(66), 1,
      aux_sym__aif_token1,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__whitespace,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1312] = 11,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(136), 1,
      sym_register,
    ACTIONS(140), 1,
      sym__whitespace,
    STATE(35), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(138), 2,
      sym_register_control,
      sym_register_system,
    STATE(206), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [1353] = 11,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(130), 1,
      sym__whitespace,
    ACTIONS(142), 1,
      sym_register,
    STATE(107), 1,
      sym_symbol,
    STATE(109), 1,
      aux_sym_source_file_repeat2,
    STATE(224), 1,
      sym__label,
    ACTIONS(144), 2,
      sym_register_control,
      sym_register_system,
    STATE(246), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [1394] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym__whitespace,
    ACTIONS(146), 1,
      aux_sym__macro_token1,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1445] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym__aif_token1,
    ACTIONS(100), 1,
      sym__whitespace,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1496] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__whitespace,
    ACTIONS(148), 1,
      aux_sym__aif_token1,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1547] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym__aif_token1,
    ACTIONS(100), 1,
      sym__whitespace,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1598] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym__whitespace,
    ACTIONS(150), 1,
      aux_sym__macro_token1,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1649] = 11,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_register,
    ACTIONS(130), 1,
      sym__whitespace,
    STATE(107), 1,
      sym_symbol,
    STATE(109), 1,
      aux_sym_source_file_repeat2,
    STATE(224), 1,
      sym__label,
    ACTIONS(122), 2,
      sym_register_control,
      sym_register_system,
    STATE(227), 7,
      sym_constant,
      sym_label,
      sym__operand,
      sym_pointer_offset,
      sym_pointer_decrement,
      sym_pointer_increment,
      sym_pointer,
  [1690] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym__whitespace,
    ACTIONS(152), 1,
      aux_sym__macro_token1,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1741] = 16,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__whitespace,
    ACTIONS(154), 1,
      aux_sym__aif_token1,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1792] = 15,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__whitespace,
    STATE(96), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(242), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(248), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1840] = 15,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(156), 1,
      sym__whitespace,
    ACTIONS(158), 1,
      aux_sym_source_file_token1,
    ACTIONS(160), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(210), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(204), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1888] = 15,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(114), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__whitespace,
    STATE(96), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(201), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
    STATE(202), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [1936] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(164), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(168), 1,
      sym__whitespace,
    STATE(43), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(162), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(166), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(311), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [1971] = 4,
    ACTIONS(170), 1,
      sym__whitespace,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(53), 6,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      sym_comment,
    ACTIONS(55), 6,
      anon_sym_DOTEND,
      sym__word_start,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [1994] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(164), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(177), 1,
      sym__whitespace,
    STATE(107), 1,
      sym_symbol,
    STATE(111), 1,
      aux_sym_source_file_repeat2,
    STATE(224), 1,
      sym__label,
    ACTIONS(173), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(175), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(256), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [2029] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(164), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(177), 1,
      sym__whitespace,
    STATE(107), 1,
      sym_symbol,
    STATE(111), 1,
      aux_sym_source_file_repeat2,
    STATE(224), 1,
      sym__label,
    ACTIONS(162), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(166), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(311), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [2064] = 12,
    ACTIONS(5), 1,
      aux_sym_source_file_token1,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(11), 1,
      sym_comment,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      sym__whitespace,
    STATE(22), 1,
      aux_sym_source_file_repeat2,
    STATE(93), 1,
      aux_sym_line_repeat1,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(47), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(189), 2,
      sym_label_colon,
      sym_label,
  [2103] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(164), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(187), 1,
      sym__whitespace,
    STATE(44), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(224), 1,
      sym__label,
    ACTIONS(183), 2,
      sym_register_0,
      sym_numeric_32bit,
    ACTIONS(185), 2,
      sym_numeric_8bit,
      sym_numeric_4bit,
    STATE(270), 3,
      sym__numeric,
      sym_numeric_hex,
      sym_label,
  [2138] = 12,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      aux_sym_source_file_token1,
    ACTIONS(194), 1,
      anon_sym_BSLASH,
    ACTIONS(197), 1,
      sym__word_start,
    ACTIONS(200), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__whitespace,
    STATE(40), 1,
      aux_sym_source_file_repeat2,
    STATE(93), 1,
      aux_sym_line_repeat1,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(47), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(189), 2,
      sym_label_colon,
      sym_label,
  [2177] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(206), 1,
      aux_sym_source_file_token1,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__whitespace,
    STATE(21), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(62), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2210] = 10,
    ACTIONS(215), 1,
      aux_sym_source_file_token1,
    ACTIONS(219), 1,
      anon_sym_BSLASH,
    ACTIONS(222), 1,
      sym__word_start,
    ACTIONS(225), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__whitespace,
    STATE(31), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2243] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(233), 1,
      aux_sym_source_file_token1,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__whitespace,
    STATE(33), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2276] = 10,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(242), 1,
      aux_sym_source_file_token1,
    ACTIONS(244), 1,
      sym_instruction,
    ACTIONS(246), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym__whitespace,
    STATE(116), 1,
      aux_sym_source_file_repeat2,
    STATE(213), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [2309] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(250), 1,
      aux_sym_source_file_token1,
    ACTIONS(253), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__whitespace,
    STATE(26), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2342] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(259), 1,
      aux_sym_source_file_token1,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__whitespace,
    STATE(27), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(50), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2375] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(268), 1,
      aux_sym_source_file_token1,
    ACTIONS(271), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__whitespace,
    STATE(18), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(82), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2408] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym_source_file_token1,
    ACTIONS(280), 1,
      sym__whitespace,
    STATE(10), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(72), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2441] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(262), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym__whitespace,
    ACTIONS(283), 1,
      aux_sym_source_file_token1,
    STATE(10), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(75), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2474] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(286), 1,
      aux_sym_source_file_token1,
    ACTIONS(289), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym__whitespace,
    STATE(17), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2507] = 4,
    ACTIONS(295), 1,
      sym__whitespace,
    STATE(58), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(53), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(55), 7,
      sym__word_start,
      anon_sym_DOTAIF,
      anon_sym_DOTAELSE,
      aux_sym__aif_token1,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [2528] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(298), 1,
      aux_sym_source_file_token1,
    ACTIONS(301), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym__whitespace,
    STATE(11), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(83), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2561] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(307), 1,
      aux_sym_source_file_token1,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym__whitespace,
    STATE(20), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2594] = 10,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(244), 1,
      sym_instruction,
    ACTIONS(248), 1,
      sym__whitespace,
    ACTIONS(316), 1,
      aux_sym_source_file_token1,
    ACTIONS(318), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_source_file_repeat2,
    STATE(229), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [2627] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(320), 1,
      aux_sym_source_file_token1,
    ACTIONS(323), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym__whitespace,
    STATE(16), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2660] = 10,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(244), 1,
      sym_instruction,
    ACTIONS(248), 1,
      sym__whitespace,
    ACTIONS(329), 1,
      aux_sym_source_file_token1,
    ACTIONS(331), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_source_file_repeat2,
    STATE(229), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [2693] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(209), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__whitespace,
    ACTIONS(333), 1,
      aux_sym_source_file_token1,
    STATE(21), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2726] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(253), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__whitespace,
    ACTIONS(336), 1,
      aux_sym_source_file_token1,
    STATE(26), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(89), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2759] = 10,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(244), 1,
      sym_instruction,
    ACTIONS(248), 1,
      sym__whitespace,
    ACTIONS(339), 1,
      aux_sym_source_file_token1,
    ACTIONS(341), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_source_file_repeat2,
    STATE(230), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [2792] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(310), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym__whitespace,
    ACTIONS(343), 1,
      aux_sym_source_file_token1,
    STATE(20), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(52), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2825] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(346), 1,
      aux_sym_source_file_token1,
    ACTIONS(349), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym__whitespace,
    STATE(34), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(80), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2858] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(355), 1,
      aux_sym_source_file_token1,
    ACTIONS(358), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__whitespace,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(56), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2891] = 10,
    ACTIONS(219), 1,
      anon_sym_BSLASH,
    ACTIONS(222), 1,
      sym__word_start,
    ACTIONS(364), 1,
      aux_sym_source_file_token1,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__whitespace,
    STATE(20), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2924] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(358), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym__whitespace,
    ACTIONS(376), 1,
      aux_sym_source_file_token1,
    STATE(12), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(90), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2957] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(379), 1,
      aux_sym_source_file_token1,
    ACTIONS(382), 1,
      sym__whitespace,
    STATE(13), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(70), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [2990] = 10,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(244), 1,
      sym_instruction,
    ACTIONS(248), 1,
      sym__whitespace,
    ACTIONS(385), 1,
      aux_sym_source_file_token1,
    ACTIONS(387), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_source_file_repeat2,
    STATE(191), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [3023] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(389), 1,
      aux_sym_source_file_token1,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym__whitespace,
    STATE(37), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(64), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3056] = 10,
    ACTIONS(219), 1,
      anon_sym_BSLASH,
    ACTIONS(222), 1,
      sym__word_start,
    ACTIONS(398), 1,
      aux_sym_source_file_token1,
    ACTIONS(402), 1,
      sym_comment,
    ACTIONS(406), 1,
      sym__whitespace,
    STATE(33), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3089] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(410), 1,
      aux_sym_source_file_token1,
    ACTIONS(413), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym__whitespace,
    STATE(30), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3122] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(392), 1,
      sym_comment,
    ACTIONS(395), 1,
      sym__whitespace,
    ACTIONS(419), 1,
      aux_sym_source_file_token1,
    STATE(37), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3155] = 10,
    ACTIONS(62), 1,
      anon_sym_DOTAIF,
    ACTIONS(68), 1,
      anon_sym_DOTMACRO,
    ACTIONS(70), 1,
      aux_sym_preprocessor_token1,
    ACTIONS(244), 1,
      sym_instruction,
    ACTIONS(248), 1,
      sym__whitespace,
    ACTIONS(422), 1,
      aux_sym_source_file_token1,
    ACTIONS(424), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_source_file_repeat2,
    STATE(204), 2,
      sym_preprocessor,
      sym_assembly,
    STATE(271), 2,
      sym__aif,
      sym__macro,
  [3188] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(426), 1,
      aux_sym_source_file_token1,
    ACTIONS(429), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__whitespace,
    STATE(36), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3221] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(435), 1,
      aux_sym_source_file_token1,
    ACTIONS(438), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym__whitespace,
    STATE(19), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3254] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(438), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym__whitespace,
    ACTIONS(444), 1,
      aux_sym_source_file_token1,
    STATE(19), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(57), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3287] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(447), 1,
      aux_sym_source_file_token1,
    ACTIONS(450), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__whitespace,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3320] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(456), 1,
      aux_sym_source_file_token1,
    ACTIONS(459), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__whitespace,
    STATE(14), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(49), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3353] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(459), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym__whitespace,
    ACTIONS(465), 1,
      aux_sym_source_file_token1,
    STATE(14), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(71), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3386] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(413), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym__whitespace,
    ACTIONS(468), 1,
      aux_sym_source_file_token1,
    STATE(30), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(79), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3419] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(450), 1,
      sym_comment,
    ACTIONS(453), 1,
      sym__whitespace,
    ACTIONS(471), 1,
      aux_sym_source_file_token1,
    STATE(15), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(76), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3452] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(236), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__whitespace,
    ACTIONS(474), 1,
      aux_sym_source_file_token1,
    STATE(33), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(60), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3485] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(477), 1,
      aux_sym_source_file_token1,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__whitespace,
    STATE(32), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(77), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3518] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(480), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__whitespace,
    ACTIONS(486), 1,
      aux_sym_source_file_token1,
    STATE(32), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3551] = 10,
    ACTIONS(219), 1,
      anon_sym_BSLASH,
    ACTIONS(222), 1,
      sym__word_start,
    ACTIONS(489), 1,
      aux_sym_source_file_token1,
    ACTIONS(493), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym__whitespace,
    STATE(27), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3584] = 10,
    ACTIONS(219), 1,
      anon_sym_BSLASH,
    ACTIONS(222), 1,
      sym__word_start,
    ACTIONS(501), 1,
      aux_sym_source_file_token1,
    ACTIONS(504), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym__whitespace,
    STATE(38), 1,
      aux_sym_source_file_repeat2,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(91), 2,
      sym__line,
      aux_sym__aif_repeat1,
    STATE(222), 2,
      sym_label_colon,
      sym_label,
  [3617] = 10,
    ACTIONS(510), 1,
      aux_sym_source_file_token1,
    ACTIONS(513), 1,
      anon_sym_BSLASH,
    ACTIONS(516), 1,
      sym__word_start,
    ACTIONS(519), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym__whitespace,
    STATE(92), 1,
      aux_sym_line_repeat1,
    STATE(107), 1,
      sym_symbol,
    STATE(112), 1,
      aux_sym_source_file_repeat2,
    STATE(190), 1,
      sym__label,
    STATE(215), 2,
      sym_label_colon,
      sym_label,
  [3649] = 10,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(525), 1,
      aux_sym_source_file_token1,
    ACTIONS(527), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__whitespace,
    STATE(39), 1,
      aux_sym_source_file_repeat2,
    STATE(92), 1,
      aux_sym_line_repeat1,
    STATE(107), 1,
      sym_symbol,
    STATE(190), 1,
      sym__label,
    STATE(203), 2,
      sym_label_colon,
      sym_label,
  [3681] = 4,
    ACTIONS(531), 1,
      sym__whitespace,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(53), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(55), 6,
      sym__word_start,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym__macro_token1,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [3701] = 4,
    ACTIONS(534), 1,
      sym__whitespace,
    STATE(95), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(53), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(55), 6,
      sym__word_start,
      anon_sym_DOTAIF,
      aux_sym__aif_token1,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [3721] = 4,
    ACTIONS(537), 1,
      sym__whitespace,
    STATE(96), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(53), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
    ACTIONS(55), 5,
      sym__word_start,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
      sym_instruction,
  [3740] = 6,
    ACTIONS(164), 1,
      aux_sym_numeric_hex_token1,
    ACTIONS(542), 1,
      anon_sym_DASH,
    ACTIONS(544), 1,
      sym_numeric_32bit,
    ACTIONS(546), 1,
      anon_sym_BSLASH,
    STATE(238), 2,
      sym_numeric_hex,
      sym_symbol,
    ACTIONS(540), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3763] = 3,
    ACTIONS(550), 1,
      sym__word,
    STATE(98), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(548), 7,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3779] = 4,
    ACTIONS(555), 1,
      anon_sym_SQUOTE,
    ACTIONS(557), 1,
      sym__word,
    STATE(104), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(553), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3797] = 5,
    ACTIONS(562), 1,
      anon_sym_SQUOTE,
    ACTIONS(564), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(566), 1,
      sym__word,
    STATE(102), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(560), 5,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3817] = 5,
    ACTIONS(566), 1,
      sym__word,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
    ACTIONS(570), 1,
      aux_sym_numeric_hex_token2,
    STATE(103), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(553), 5,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3837] = 5,
    ACTIONS(566), 1,
      sym__word,
    ACTIONS(574), 1,
      anon_sym_SQUOTE,
    ACTIONS(576), 1,
      aux_sym_numeric_hex_token2,
    STATE(106), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(572), 5,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3857] = 5,
    ACTIONS(566), 1,
      sym__word,
    ACTIONS(580), 1,
      anon_sym_SQUOTE,
    ACTIONS(582), 1,
      aux_sym_numeric_hex_token2,
    STATE(106), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(578), 5,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3877] = 4,
    ACTIONS(584), 1,
      anon_sym_SQUOTE,
    ACTIONS(586), 1,
      sym__word,
    STATE(98), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(578), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3895] = 4,
    ACTIONS(591), 1,
      anon_sym_BSLASH,
    ACTIONS(594), 1,
      sym__word,
    STATE(105), 2,
      sym_symbol,
      aux_sym__label_repeat1,
    ACTIONS(589), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3913] = 4,
    ACTIONS(597), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(599), 1,
      sym__word,
    STATE(106), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(548), 6,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3931] = 4,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(604), 1,
      sym__word,
    STATE(110), 2,
      sym_symbol,
      aux_sym__label_repeat1,
    ACTIONS(602), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3949] = 4,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(608), 1,
      sym__word,
    STATE(113), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(560), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [3967] = 4,
    ACTIONS(611), 1,
      sym__whitespace,
    STATE(109), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(55), 2,
      sym_register,
      sym__word_start,
    ACTIONS(53), 5,
      anon_sym_POUND,
      anon_sym_BSLASH,
      anon_sym_AT,
      sym_register_control,
      sym_register_system,
  [3985] = 4,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(604), 1,
      sym__word,
    STATE(105), 2,
      sym_symbol,
      aux_sym__label_repeat1,
    ACTIONS(614), 5,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4003] = 4,
    ACTIONS(616), 1,
      sym__whitespace,
    STATE(111), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(55), 3,
      sym_numeric_8bit,
      sym_numeric_4bit,
      sym__word_start,
    ACTIONS(53), 4,
      sym_register_0,
      aux_sym_numeric_hex_token1,
      sym_numeric_32bit,
      anon_sym_BSLASH,
  [4021] = 9,
    ACTIONS(7), 1,
      anon_sym_BSLASH,
    ACTIONS(9), 1,
      sym__word_start,
    ACTIONS(619), 1,
      aux_sym_source_file_token1,
    ACTIONS(621), 1,
      sym_comment,
    ACTIONS(623), 1,
      sym__whitespace,
    STATE(107), 1,
      sym_symbol,
    STATE(131), 1,
      aux_sym_source_file_repeat2,
    STATE(235), 1,
      sym_label_colon,
    STATE(324), 1,
      sym__label,
  [4049] = 4,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    ACTIONS(627), 1,
      sym__word,
    STATE(98), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(572), 6,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4067] = 1,
    ACTIONS(630), 8,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4078] = 3,
    ACTIONS(632), 1,
      sym__whitespace,
    STATE(115), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(53), 6,
      sym_register,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GE,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4093] = 4,
    ACTIONS(635), 1,
      sym__whitespace,
    STATE(116), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(53), 3,
      aux_sym_source_file_token1,
      sym_instruction,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_DOTAIF,
      anon_sym_DOTMACRO,
      aux_sym_preprocessor_token1,
  [4110] = 2,
    ACTIONS(638), 2,
      aux_sym_numeric_hex_token2,
      sym__word,
    ACTIONS(630), 6,
      aux_sym_source_file_token1,
      anon_sym_SQUOTE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4123] = 4,
    ACTIONS(642), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(645), 1,
      anon_sym_BSLASH,
    STATE(118), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(640), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4140] = 4,
    ACTIONS(650), 1,
      aux_sym_numeric_hex_token2,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    STATE(118), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
    ACTIONS(648), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4157] = 1,
    ACTIONS(654), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4167] = 1,
    ACTIONS(656), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4177] = 1,
    ACTIONS(658), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4187] = 1,
    ACTIONS(660), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4197] = 4,
    ACTIONS(555), 1,
      anon_sym_SQUOTE,
    ACTIONS(662), 1,
      sym__word,
    STATE(126), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(553), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4213] = 4,
    ACTIONS(606), 1,
      anon_sym_SQUOTE,
    ACTIONS(662), 1,
      sym__word,
    STATE(128), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(560), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4229] = 4,
    ACTIONS(584), 1,
      anon_sym_SQUOTE,
    ACTIONS(662), 1,
      sym__word,
    STATE(98), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(578), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4245] = 1,
    ACTIONS(664), 7,
      aux_sym_source_file_token1,
      anon_sym_COLON,
      anon_sym_BSLASH,
      sym__word,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4255] = 4,
    ACTIONS(625), 1,
      anon_sym_SQUOTE,
    ACTIONS(662), 1,
      sym__word,
    STATE(98), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(572), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4271] = 5,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      sym__whitespace,
    STATE(133), 1,
      aux_sym_preprocessor_repeat1,
    STATE(295), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(666), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4288] = 5,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      sym__whitespace,
    STATE(136), 1,
      aux_sym_assembly_repeat1,
    STATE(275), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(673), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4305] = 4,
    ACTIONS(55), 1,
      sym__word_start,
    ACTIONS(680), 1,
      sym__whitespace,
    STATE(131), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(53), 3,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
  [4320] = 3,
    ACTIONS(683), 1,
      ts_builtin_sym_end,
    ACTIONS(688), 1,
      sym__word_start,
    ACTIONS(685), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4333] = 5,
    ACTIONS(668), 1,
      anon_sym_COMMA,
    ACTIONS(693), 1,
      sym__whitespace,
    STATE(138), 1,
      aux_sym_preprocessor_repeat1,
    STATE(295), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(691), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4350] = 6,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(700), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym__whitespace,
    STATE(151), 1,
      aux_sym_source_file_repeat2,
    STATE(283), 1,
      aux_sym_source_file_repeat3,
  [4369] = 2,
    ACTIONS(706), 1,
      sym__word_start,
    ACTIONS(704), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4380] = 5,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      sym__whitespace,
    STATE(160), 1,
      aux_sym_assembly_repeat1,
    STATE(275), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(708), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4397] = 3,
    ACTIONS(713), 1,
      ts_builtin_sym_end,
    ACTIONS(718), 1,
      sym__word_start,
    ACTIONS(715), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4410] = 5,
    ACTIONS(723), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      sym__whitespace,
    STATE(138), 1,
      aux_sym_preprocessor_repeat1,
    STATE(295), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(721), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4427] = 3,
    ACTIONS(713), 1,
      ts_builtin_sym_end,
    ACTIONS(732), 1,
      sym__word_start,
    ACTIONS(729), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4440] = 1,
    ACTIONS(656), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4449] = 2,
    ACTIONS(737), 1,
      sym__word_start,
    ACTIONS(735), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4460] = 1,
    ACTIONS(654), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4469] = 3,
    ACTIONS(683), 1,
      ts_builtin_sym_end,
    ACTIONS(742), 1,
      sym__word_start,
    ACTIONS(739), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4482] = 3,
    ACTIONS(745), 1,
      ts_builtin_sym_end,
    ACTIONS(750), 1,
      sym__word_start,
    ACTIONS(747), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4495] = 2,
    ACTIONS(753), 1,
      sym__word_start,
    ACTIONS(745), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4506] = 1,
    ACTIONS(658), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4515] = 3,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    ACTIONS(760), 1,
      sym__word_start,
    ACTIONS(757), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4528] = 6,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    ACTIONS(765), 1,
      sym_comment,
    ACTIONS(767), 1,
      sym__whitespace,
    STATE(161), 1,
      aux_sym_source_file_repeat2,
    STATE(309), 1,
      aux_sym_source_file_repeat3,
  [4547] = 4,
    ACTIONS(771), 1,
      anon_sym_PLUS,
    ACTIONS(773), 1,
      sym__whitespace,
    STATE(266), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(769), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
  [4562] = 1,
    ACTIONS(664), 6,
      aux_sym_source_file_token1,
      aux_sym_numeric_hex_token2,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [4571] = 6,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    ACTIONS(765), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(309), 1,
      aux_sym_source_file_repeat3,
  [4590] = 2,
    ACTIONS(776), 1,
      sym__word_start,
    ACTIONS(713), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4601] = 2,
    ACTIONS(778), 1,
      sym__word_start,
    ACTIONS(755), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4612] = 3,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    ACTIONS(783), 1,
      sym__word_start,
    ACTIONS(780), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4625] = 4,
    ACTIONS(788), 1,
      anon_sym_PLUS,
    ACTIONS(790), 1,
      sym__whitespace,
    STATE(313), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(786), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
  [4640] = 3,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
    ACTIONS(798), 1,
      sym__word_start,
    ACTIONS(795), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4653] = 2,
    ACTIONS(801), 1,
      sym__word_start,
    ACTIONS(793), 5,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4664] = 3,
    ACTIONS(803), 1,
      ts_builtin_sym_end,
    ACTIONS(808), 1,
      sym__word_start,
    ACTIONS(805), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4677] = 3,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
    ACTIONS(814), 1,
      sym__word_start,
    ACTIONS(811), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4690] = 5,
    ACTIONS(819), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      sym__whitespace,
    STATE(160), 1,
      aux_sym_assembly_repeat1,
    STATE(275), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(817), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [4707] = 6,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(825), 1,
      ts_builtin_sym_end,
    ACTIONS(827), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    STATE(269), 1,
      aux_sym_source_file_repeat3,
  [4726] = 5,
    ACTIONS(829), 1,
      sym_register,
    ACTIONS(831), 1,
      anon_sym_DASH,
    ACTIONS(833), 1,
      anon_sym_LPAREN,
    ACTIONS(835), 1,
      sym__whitespace,
    STATE(171), 1,
      aux_sym_source_file_repeat2,
  [4742] = 3,
    ACTIONS(839), 1,
      sym__whitespace,
    STATE(115), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(837), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4754] = 3,
    ACTIONS(841), 1,
      sym__whitespace,
    STATE(166), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(837), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4766] = 2,
    ACTIONS(845), 1,
      sym__word_start,
    ACTIONS(843), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4776] = 3,
    ACTIONS(839), 1,
      sym__whitespace,
    STATE(115), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(847), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4788] = 3,
    ACTIONS(839), 1,
      sym__whitespace,
    STATE(115), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(849), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4800] = 3,
    ACTIONS(839), 1,
      sym__whitespace,
    STATE(115), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(851), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GE,
  [4812] = 3,
    ACTIONS(839), 1,
      sym__whitespace,
    STATE(115), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(853), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4824] = 3,
    ACTIONS(855), 1,
      sym__whitespace,
    STATE(163), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(849), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4836] = 5,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(857), 1,
      sym_register,
    ACTIONS(859), 1,
      anon_sym_DASH,
    ACTIONS(861), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [4852] = 2,
    ACTIONS(865), 1,
      sym__word_start,
    ACTIONS(863), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4862] = 3,
    ACTIONS(867), 1,
      sym__whitespace,
    STATE(167), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(853), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4874] = 2,
    ACTIONS(871), 1,
      sym__word_start,
    ACTIONS(869), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4884] = 2,
    ACTIONS(875), 1,
      sym__word_start,
    ACTIONS(873), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4894] = 5,
    ACTIONS(877), 1,
      aux_sym_source_file_token1,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    ACTIONS(882), 1,
      sym__whitespace,
    STATE(176), 1,
      aux_sym__macro_repeat1,
    STATE(286), 1,
      aux_sym_source_file_repeat2,
  [4910] = 3,
    ACTIONS(887), 1,
      sym__whitespace,
    STATE(169), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(885), 3,
      sym_register,
      aux_sym_pointer_offset_token1,
      aux_sym_pointer_offset_token2,
  [4922] = 5,
    ACTIONS(889), 1,
      aux_sym_source_file_token1,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      sym__whitespace,
    STATE(179), 1,
      aux_sym__macro_repeat1,
    STATE(225), 1,
      aux_sym_source_file_repeat2,
  [4938] = 5,
    ACTIONS(891), 1,
      anon_sym_COMMA,
    ACTIONS(895), 1,
      aux_sym_source_file_token1,
    ACTIONS(897), 1,
      sym__whitespace,
    STATE(176), 1,
      aux_sym__macro_repeat1,
    STATE(236), 1,
      aux_sym_source_file_repeat2,
  [4954] = 2,
    ACTIONS(901), 1,
      sym__word_start,
    ACTIONS(899), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4964] = 2,
    ACTIONS(905), 1,
      sym__word_start,
    ACTIONS(903), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4974] = 2,
    ACTIONS(909), 1,
      sym__word_start,
    ACTIONS(907), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4984] = 2,
    ACTIONS(913), 1,
      sym__word_start,
    ACTIONS(911), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [4994] = 2,
    ACTIONS(917), 1,
      sym__word_start,
    ACTIONS(915), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [5004] = 2,
    ACTIONS(921), 1,
      sym__word_start,
    ACTIONS(919), 4,
      aux_sym_source_file_token1,
      anon_sym_BSLASH,
      sym_comment,
      sym__whitespace,
  [5014] = 1,
    ACTIONS(923), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5021] = 4,
    ACTIONS(925), 1,
      aux_sym_source_file_token1,
    ACTIONS(927), 1,
      sym_comment,
    ACTIONS(929), 1,
      sym__whitespace,
    STATE(193), 1,
      aux_sym_source_file_repeat2,
  [5034] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(931), 1,
      aux_sym_source_file_token1,
    ACTIONS(933), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5047] = 4,
    ACTIONS(114), 1,
      aux_sym_source_file_token1,
    ACTIONS(116), 1,
      sym_comment,
    ACTIONS(935), 1,
      sym__whitespace,
    STATE(78), 1,
      aux_sym_source_file_repeat2,
  [5060] = 2,
    ACTIONS(939), 1,
      anon_sym_COLON,
    ACTIONS(937), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5069] = 4,
    ACTIONS(242), 1,
      aux_sym_source_file_token1,
    ACTIONS(246), 1,
      sym_comment,
    ACTIONS(941), 1,
      sym__whitespace,
    STATE(211), 1,
      aux_sym_source_file_repeat2,
  [5082] = 3,
    ACTIONS(943), 1,
      sym__whitespace,
    STATE(192), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(53), 2,
      aux_sym_source_file_token1,
      sym__word,
  [5093] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(946), 1,
      aux_sym_source_file_token1,
    ACTIONS(948), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5106] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(242), 1,
      aux_sym_source_file_token1,
    ACTIONS(246), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5119] = 4,
    ACTIONS(946), 1,
      aux_sym_source_file_token1,
    ACTIONS(948), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym__whitespace,
    STATE(214), 1,
      aux_sym_source_file_repeat2,
  [5132] = 3,
    ACTIONS(954), 1,
      sym__whitespace,
    STATE(4), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(952), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [5143] = 1,
    ACTIONS(957), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5150] = 1,
    ACTIONS(959), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5157] = 3,
    ACTIONS(963), 1,
      sym__whitespace,
    STATE(24), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(961), 2,
      aux_sym_source_file_token1,
      sym_comment,
  [5168] = 1,
    ACTIONS(966), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5175] = 4,
    ACTIONS(422), 1,
      aux_sym_source_file_token1,
    ACTIONS(424), 1,
      sym_comment,
    ACTIONS(968), 1,
      sym__whitespace,
    STATE(61), 1,
      aux_sym_source_file_repeat2,
  [5188] = 4,
    ACTIONS(970), 1,
      aux_sym_source_file_token1,
    ACTIONS(972), 1,
      sym_comment,
    ACTIONS(974), 1,
      sym__whitespace,
    STATE(207), 1,
      aux_sym_source_file_repeat2,
  [5201] = 4,
    ACTIONS(158), 1,
      aux_sym_source_file_token1,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(976), 1,
      sym__whitespace,
    STATE(63), 1,
      aux_sym_source_file_repeat2,
  [5214] = 4,
    ACTIONS(978), 1,
      aux_sym_source_file_token1,
    ACTIONS(980), 1,
      sym_comment,
    ACTIONS(982), 1,
      sym__whitespace,
    STATE(220), 1,
      aux_sym_source_file_repeat2,
  [5227] = 1,
    ACTIONS(721), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5234] = 1,
    ACTIONS(817), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5241] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(978), 1,
      aux_sym_source_file_token1,
    ACTIONS(980), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5254] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(984), 1,
      aux_sym_source_file_token1,
    ACTIONS(986), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5267] = 1,
    ACTIONS(988), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5274] = 4,
    ACTIONS(329), 1,
      aux_sym_source_file_token1,
    ACTIONS(331), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym__whitespace,
    STATE(66), 1,
      aux_sym_source_file_repeat2,
  [5287] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(992), 1,
      aux_sym_source_file_token1,
    ACTIONS(994), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5300] = 1,
    ACTIONS(996), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5307] = 4,
    ACTIONS(992), 1,
      aux_sym_source_file_token1,
    ACTIONS(994), 1,
      sym_comment,
    ACTIONS(998), 1,
      sym__whitespace,
    STATE(237), 1,
      aux_sym_source_file_repeat2,
  [5320] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1000), 1,
      aux_sym_source_file_token1,
    ACTIONS(1002), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5333] = 4,
    ACTIONS(619), 1,
      aux_sym_source_file_token1,
    ACTIONS(621), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym__whitespace,
    STATE(233), 1,
      aux_sym_source_file_repeat2,
  [5346] = 4,
    ACTIONS(1000), 1,
      aux_sym_source_file_token1,
    ACTIONS(1002), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym__whitespace,
    STATE(239), 1,
      aux_sym_source_file_repeat2,
  [5359] = 1,
    ACTIONS(1008), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5366] = 1,
    ACTIONS(1010), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5373] = 1,
    ACTIONS(1012), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5380] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1014), 1,
      aux_sym_source_file_token1,
    ACTIONS(1016), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5393] = 1,
    ACTIONS(1018), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5400] = 4,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(1020), 1,
      sym__whitespace,
    STATE(73), 1,
      aux_sym_source_file_repeat2,
  [5413] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1022), 1,
      aux_sym_source_file_token1,
    ACTIONS(1024), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5426] = 1,
    ACTIONS(937), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5433] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(895), 1,
      aux_sym_source_file_token1,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5446] = 1,
    ACTIONS(1028), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5453] = 1,
    ACTIONS(1030), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5460] = 1,
    ACTIONS(1032), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5467] = 4,
    ACTIONS(1014), 1,
      aux_sym_source_file_token1,
    ACTIONS(1016), 1,
      sym_comment,
    ACTIONS(1034), 1,
      sym__whitespace,
    STATE(234), 1,
      aux_sym_source_file_repeat2,
  [5480] = 4,
    ACTIONS(1036), 1,
      aux_sym_source_file_token1,
    ACTIONS(1038), 1,
      sym_comment,
    ACTIONS(1040), 1,
      sym__whitespace,
    STATE(208), 1,
      aux_sym_source_file_repeat2,
  [5493] = 4,
    ACTIONS(1042), 1,
      aux_sym_source_file_token1,
    ACTIONS(1044), 1,
      sym_comment,
    ACTIONS(1046), 1,
      sym__whitespace,
    STATE(223), 1,
      aux_sym_source_file_repeat2,
  [5506] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1042), 1,
      aux_sym_source_file_token1,
    ACTIONS(1044), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5519] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1048), 1,
      aux_sym_source_file_token1,
    ACTIONS(1050), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5532] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1036), 1,
      aux_sym_source_file_token1,
    ACTIONS(1038), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5545] = 4,
    ACTIONS(1048), 1,
      aux_sym_source_file_token1,
    ACTIONS(1050), 1,
      sym_comment,
    ACTIONS(1052), 1,
      sym__whitespace,
    STATE(188), 1,
      aux_sym_source_file_repeat2,
  [5558] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    ACTIONS(1054), 1,
      aux_sym_source_file_token1,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5571] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1056), 1,
      aux_sym_source_file_token1,
    ACTIONS(1058), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5584] = 1,
    ACTIONS(1060), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5591] = 4,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1062), 1,
      aux_sym_source_file_token1,
    ACTIONS(1064), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5604] = 1,
    ACTIONS(1066), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5611] = 4,
    ACTIONS(1068), 1,
      aux_sym_source_file_token1,
    ACTIONS(1070), 1,
      sym__word,
    ACTIONS(1072), 1,
      sym__whitespace,
    STATE(192), 1,
      aux_sym_source_file_repeat2,
  [5624] = 4,
    ACTIONS(385), 1,
      aux_sym_source_file_token1,
    ACTIONS(387), 1,
      sym_comment,
    ACTIONS(1074), 1,
      sym__whitespace,
    STATE(51), 1,
      aux_sym_source_file_repeat2,
  [5637] = 1,
    ACTIONS(1076), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5644] = 1,
    ACTIONS(1078), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5651] = 1,
    ACTIONS(1080), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5658] = 1,
    ACTIONS(1082), 4,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym_comment,
      sym__whitespace,
  [5665] = 4,
    ACTIONS(1062), 1,
      aux_sym_source_file_token1,
    ACTIONS(1064), 1,
      sym_comment,
    ACTIONS(1084), 1,
      sym__whitespace,
    STATE(232), 1,
      aux_sym_source_file_repeat2,
  [5678] = 4,
    ACTIONS(385), 1,
      aux_sym_source_file_token1,
    ACTIONS(387), 1,
      sym_comment,
    ACTIONS(1086), 1,
      sym__whitespace,
    STATE(194), 1,
      aux_sym_source_file_repeat2,
  [5691] = 3,
    ACTIONS(652), 1,
      anon_sym_BSLASH,
    ACTIONS(1088), 1,
      aux_sym_numeric_hex_token2,
    STATE(119), 2,
      sym_symbol,
      aux_sym_numeric_hex_repeat1,
  [5702] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5712] = 3,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(1092), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5722] = 1,
    ACTIONS(1094), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5728] = 3,
    ACTIONS(1096), 1,
      anon_sym_RPAREN,
    ACTIONS(1098), 1,
      sym__whitespace,
    STATE(272), 1,
      aux_sym_source_file_repeat2,
  [5738] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1100), 1,
      aux_sym_source_file_token1,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5748] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5758] = 3,
    ACTIONS(1102), 1,
      anon_sym_COMMA,
    ACTIONS(1104), 1,
      sym__whitespace,
    STATE(276), 1,
      aux_sym_source_file_repeat2,
  [5768] = 3,
    ACTIONS(1106), 1,
      sym_register,
    ACTIONS(1108), 1,
      sym__whitespace,
    STATE(268), 1,
      aux_sym_source_file_repeat2,
  [5778] = 1,
    ACTIONS(1110), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5784] = 1,
    ACTIONS(1112), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5790] = 3,
    ACTIONS(1114), 1,
      aux_sym_source_file_token1,
    ACTIONS(1116), 1,
      sym__whitespace,
    STATE(2), 1,
      aux_sym_source_file_repeat2,
  [5800] = 1,
    ACTIONS(1118), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [5806] = 3,
    ACTIONS(1072), 1,
      sym__whitespace,
    ACTIONS(1120), 1,
      sym__word,
    STATE(192), 1,
      aux_sym_source_file_repeat2,
  [5816] = 3,
    ACTIONS(1120), 1,
      sym__word,
    ACTIONS(1122), 1,
      sym__whitespace,
    STATE(284), 1,
      aux_sym_source_file_repeat2,
  [5826] = 1,
    ACTIONS(1124), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5832] = 1,
    ACTIONS(1126), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5838] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(788), 1,
      anon_sym_PLUS,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5848] = 3,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(1128), 1,
      ts_builtin_sym_end,
    STATE(274), 1,
      aux_sym_source_file_repeat3,
  [5858] = 3,
    ACTIONS(27), 1,
      sym__whitespace,
    ACTIONS(1130), 1,
      sym_register,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
  [5868] = 3,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(1128), 1,
      ts_builtin_sym_end,
    STATE(304), 1,
      aux_sym_source_file_repeat3,
  [5878] = 3,
    ACTIONS(1132), 1,
      anon_sym_COMMA,
    ACTIONS(1134), 1,
      sym__whitespace,
    STATE(305), 1,
      aux_sym_source_file_repeat2,
  [5888] = 1,
    ACTIONS(952), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5894] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5904] = 3,
    ACTIONS(1136), 1,
      anon_sym_RPAREN,
    ACTIONS(1138), 1,
      sym__whitespace,
    STATE(293), 1,
      aux_sym_source_file_repeat2,
  [5914] = 3,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(1140), 1,
      ts_builtin_sym_end,
    STATE(304), 1,
      aux_sym_source_file_repeat3,
  [5924] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1142), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5934] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [5944] = 1,
    ACTIONS(1146), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5950] = 3,
    ACTIONS(1130), 1,
      sym_register,
    ACTIONS(1148), 1,
      sym__whitespace,
    STATE(251), 1,
      aux_sym_source_file_repeat2,
  [5960] = 1,
    ACTIONS(1150), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5966] = 1,
    ACTIONS(1152), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [5972] = 3,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    STATE(309), 1,
      aux_sym_source_file_repeat3,
  [5982] = 1,
    ACTIONS(1154), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [5988] = 3,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(763), 1,
      ts_builtin_sym_end,
    STATE(304), 1,
      aux_sym_source_file_repeat3,
  [5998] = 3,
    ACTIONS(1072), 1,
      sym__whitespace,
    ACTIONS(1156), 1,
      sym__word,
    STATE(192), 1,
      aux_sym_source_file_repeat2,
  [6008] = 3,
    ACTIONS(1072), 1,
      sym__whitespace,
    ACTIONS(1158), 1,
      sym__word,
    STATE(192), 1,
      aux_sym_source_file_repeat2,
  [6018] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1026), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [6028] = 1,
    ACTIONS(1160), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6034] = 1,
    ACTIONS(1162), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6040] = 3,
    ACTIONS(1164), 1,
      aux_sym_source_file_token1,
    ACTIONS(1166), 1,
      sym__whitespace,
    STATE(241), 1,
      aux_sym_source_file_repeat2,
  [6050] = 1,
    ACTIONS(1168), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6056] = 3,
    ACTIONS(1170), 1,
      aux_sym_source_file_token1,
    ACTIONS(1172), 1,
      sym__whitespace,
    STATE(254), 1,
      aux_sym_source_file_repeat2,
  [6066] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1174), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [6076] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [6086] = 3,
    ACTIONS(1176), 1,
      anon_sym_RPAREN,
    ACTIONS(1178), 1,
      sym__whitespace,
    STATE(307), 1,
      aux_sym_source_file_repeat2,
  [6096] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1180), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [6106] = 1,
    ACTIONS(1182), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6112] = 1,
    ACTIONS(1184), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6118] = 3,
    ACTIONS(1186), 1,
      sym__word,
    ACTIONS(1188), 1,
      sym__whitespace,
    STATE(262), 1,
      aux_sym_source_file_repeat2,
  [6128] = 1,
    ACTIONS(1190), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6134] = 1,
    ACTIONS(1192), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6140] = 1,
    ACTIONS(1194), 3,
      aux_sym_source_file_token1,
      anon_sym_COMMA,
      sym__whitespace,
  [6146] = 1,
    ACTIONS(1196), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6152] = 1,
    ACTIONS(1198), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6158] = 3,
    ACTIONS(1200), 1,
      ts_builtin_sym_end,
    ACTIONS(1202), 1,
      aux_sym_source_file_token1,
    STATE(304), 1,
      aux_sym_source_file_repeat3,
  [6168] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [6178] = 3,
    ACTIONS(1090), 1,
      anon_sym_RPAREN,
    ACTIONS(1207), 1,
      sym__whitespace,
    STATE(292), 1,
      aux_sym_source_file_repeat2,
  [6188] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [6198] = 3,
    ACTIONS(1209), 1,
      anon_sym_RPAREN,
    ACTIONS(1211), 1,
      sym__whitespace,
    STATE(250), 1,
      aux_sym_source_file_repeat2,
  [6208] = 3,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(825), 1,
      ts_builtin_sym_end,
    STATE(304), 1,
      aux_sym_source_file_repeat3,
  [6218] = 3,
    ACTIONS(698), 1,
      aux_sym_source_file_token1,
    ACTIONS(825), 1,
      ts_builtin_sym_end,
    STATE(269), 1,
      aux_sym_source_file_repeat3,
  [6228] = 3,
    ACTIONS(1205), 1,
      anon_sym_COMMA,
    ACTIONS(1213), 1,
      sym__whitespace,
    STATE(255), 1,
      aux_sym_source_file_repeat2,
  [6238] = 1,
    ACTIONS(1215), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6244] = 3,
    ACTIONS(118), 1,
      sym__whitespace,
    ACTIONS(1217), 1,
      anon_sym_PLUS,
    STATE(42), 1,
      aux_sym_source_file_repeat2,
  [6254] = 1,
    ACTIONS(1219), 3,
      aux_sym_source_file_token1,
      sym_comment,
      sym__whitespace,
  [6260] = 2,
    ACTIONS(1221), 1,
      sym__whitespace,
    STATE(168), 1,
      aux_sym_source_file_repeat2,
  [6267] = 2,
    ACTIONS(1223), 1,
      anon_sym_AMP,
    ACTIONS(1225), 1,
      sym__word_start,
  [6274] = 2,
    ACTIONS(1227), 1,
      anon_sym_AMP,
    ACTIONS(1229), 1,
      sym__word_start,
  [6281] = 2,
    ACTIONS(1231), 1,
      anon_sym_AMP,
    ACTIONS(1233), 1,
      sym__word_start,
  [6288] = 1,
    ACTIONS(1200), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [6293] = 1,
    ACTIONS(1235), 2,
      aux_sym_source_file_token1,
      sym__whitespace,
  [6298] = 2,
    ACTIONS(1237), 1,
      sym__whitespace,
    STATE(285), 1,
      aux_sym_source_file_repeat2,
  [6305] = 2,
    ACTIONS(1239), 1,
      sym__whitespace,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [6312] = 1,
    ACTIONS(329), 1,
      aux_sym_source_file_token1,
  [6316] = 1,
    ACTIONS(939), 1,
      anon_sym_COLON,
  [6320] = 1,
    ACTIONS(1241), 1,
      aux_sym_source_file_token1,
  [6324] = 1,
    ACTIONS(1000), 1,
      aux_sym_source_file_token1,
  [6328] = 1,
    ACTIONS(1014), 1,
      aux_sym_source_file_token1,
  [6332] = 1,
    ACTIONS(992), 1,
      aux_sym_source_file_token1,
  [6336] = 1,
    ACTIONS(1243), 1,
      aux_sym_source_file_token1,
  [6340] = 1,
    ACTIONS(1245), 1,
      aux_sym_source_file_token1,
  [6344] = 1,
    ACTIONS(978), 1,
      aux_sym_source_file_token1,
  [6348] = 1,
    ACTIONS(1247), 1,
      aux_sym_source_file_token1,
  [6352] = 1,
    ACTIONS(339), 1,
      aux_sym_source_file_token1,
  [6356] = 1,
    ACTIONS(1048), 1,
      aux_sym_source_file_token1,
  [6360] = 1,
    ACTIONS(1249), 1,
      aux_sym_source_file_token2,
  [6364] = 1,
    ACTIONS(984), 1,
      aux_sym_source_file_token1,
  [6368] = 1,
    ACTIONS(316), 1,
      aux_sym_source_file_token1,
  [6372] = 1,
    ACTIONS(1251), 1,
      aux_sym_source_file_token1,
  [6376] = 1,
    ACTIONS(158), 1,
      aux_sym_source_file_token1,
  [6380] = 1,
    ACTIONS(1056), 1,
      aux_sym_source_file_token1,
  [6384] = 1,
    ACTIONS(1036), 1,
      aux_sym_source_file_token1,
  [6388] = 1,
    ACTIONS(1253), 1,
      anon_sym_SQUOTE,
  [6392] = 1,
    ACTIONS(1042), 1,
      aux_sym_source_file_token1,
  [6396] = 1,
    ACTIONS(1255), 1,
      aux_sym_source_file_token1,
  [6400] = 1,
    ACTIONS(385), 1,
      aux_sym_source_file_token1,
  [6404] = 1,
    ACTIONS(1022), 1,
      aux_sym_source_file_token1,
  [6408] = 1,
    ACTIONS(1257), 1,
      sym_numeric_32bit,
  [6412] = 1,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
  [6416] = 1,
    ACTIONS(1062), 1,
      aux_sym_source_file_token1,
  [6420] = 1,
    ACTIONS(422), 1,
      aux_sym_source_file_token1,
  [6424] = 1,
    ACTIONS(1259), 1,
      sym__word_start,
  [6428] = 1,
    ACTIONS(946), 1,
      aux_sym_source_file_token1,
  [6432] = 1,
    ACTIONS(242), 1,
      aux_sym_source_file_token1,
  [6436] = 1,
    ACTIONS(1261), 1,
      ts_builtin_sym_end,
  [6440] = 1,
    ACTIONS(114), 1,
      aux_sym_source_file_token1,
  [6444] = 1,
    ACTIONS(619), 1,
      aux_sym_source_file_token1,
  [6448] = 1,
    ACTIONS(1263), 1,
      sym__word_start,
  [6452] = 1,
    ACTIONS(931), 1,
      aux_sym_source_file_token1,
  [6456] = 1,
    ACTIONS(1265), 1,
      sym__word_start,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 58,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 370,
  [SMALL_STATE(10)] = 399,
  [SMALL_STATE(11)] = 453,
  [SMALL_STATE(12)] = 507,
  [SMALL_STATE(13)] = 561,
  [SMALL_STATE(14)] = 615,
  [SMALL_STATE(15)] = 669,
  [SMALL_STATE(16)] = 720,
  [SMALL_STATE(17)] = 771,
  [SMALL_STATE(18)] = 822,
  [SMALL_STATE(19)] = 873,
  [SMALL_STATE(20)] = 924,
  [SMALL_STATE(21)] = 975,
  [SMALL_STATE(22)] = 1026,
  [SMALL_STATE(23)] = 1077,
  [SMALL_STATE(24)] = 1118,
  [SMALL_STATE(25)] = 1159,
  [SMALL_STATE(26)] = 1210,
  [SMALL_STATE(27)] = 1261,
  [SMALL_STATE(28)] = 1312,
  [SMALL_STATE(29)] = 1353,
  [SMALL_STATE(30)] = 1394,
  [SMALL_STATE(31)] = 1445,
  [SMALL_STATE(32)] = 1496,
  [SMALL_STATE(33)] = 1547,
  [SMALL_STATE(34)] = 1598,
  [SMALL_STATE(35)] = 1649,
  [SMALL_STATE(36)] = 1690,
  [SMALL_STATE(37)] = 1741,
  [SMALL_STATE(38)] = 1792,
  [SMALL_STATE(39)] = 1840,
  [SMALL_STATE(40)] = 1888,
  [SMALL_STATE(41)] = 1936,
  [SMALL_STATE(42)] = 1971,
  [SMALL_STATE(43)] = 1994,
  [SMALL_STATE(44)] = 2029,
  [SMALL_STATE(45)] = 2064,
  [SMALL_STATE(46)] = 2103,
  [SMALL_STATE(47)] = 2138,
  [SMALL_STATE(48)] = 2177,
  [SMALL_STATE(49)] = 2210,
  [SMALL_STATE(50)] = 2243,
  [SMALL_STATE(51)] = 2276,
  [SMALL_STATE(52)] = 2309,
  [SMALL_STATE(53)] = 2342,
  [SMALL_STATE(54)] = 2375,
  [SMALL_STATE(55)] = 2408,
  [SMALL_STATE(56)] = 2441,
  [SMALL_STATE(57)] = 2474,
  [SMALL_STATE(58)] = 2507,
  [SMALL_STATE(59)] = 2528,
  [SMALL_STATE(60)] = 2561,
  [SMALL_STATE(61)] = 2594,
  [SMALL_STATE(62)] = 2627,
  [SMALL_STATE(63)] = 2660,
  [SMALL_STATE(64)] = 2693,
  [SMALL_STATE(65)] = 2726,
  [SMALL_STATE(66)] = 2759,
  [SMALL_STATE(67)] = 2792,
  [SMALL_STATE(68)] = 2825,
  [SMALL_STATE(69)] = 2858,
  [SMALL_STATE(70)] = 2891,
  [SMALL_STATE(71)] = 2924,
  [SMALL_STATE(72)] = 2957,
  [SMALL_STATE(73)] = 2990,
  [SMALL_STATE(74)] = 3023,
  [SMALL_STATE(75)] = 3056,
  [SMALL_STATE(76)] = 3089,
  [SMALL_STATE(77)] = 3122,
  [SMALL_STATE(78)] = 3155,
  [SMALL_STATE(79)] = 3188,
  [SMALL_STATE(80)] = 3221,
  [SMALL_STATE(81)] = 3254,
  [SMALL_STATE(82)] = 3287,
  [SMALL_STATE(83)] = 3320,
  [SMALL_STATE(84)] = 3353,
  [SMALL_STATE(85)] = 3386,
  [SMALL_STATE(86)] = 3419,
  [SMALL_STATE(87)] = 3452,
  [SMALL_STATE(88)] = 3485,
  [SMALL_STATE(89)] = 3518,
  [SMALL_STATE(90)] = 3551,
  [SMALL_STATE(91)] = 3584,
  [SMALL_STATE(92)] = 3617,
  [SMALL_STATE(93)] = 3649,
  [SMALL_STATE(94)] = 3681,
  [SMALL_STATE(95)] = 3701,
  [SMALL_STATE(96)] = 3721,
  [SMALL_STATE(97)] = 3740,
  [SMALL_STATE(98)] = 3763,
  [SMALL_STATE(99)] = 3779,
  [SMALL_STATE(100)] = 3797,
  [SMALL_STATE(101)] = 3817,
  [SMALL_STATE(102)] = 3837,
  [SMALL_STATE(103)] = 3857,
  [SMALL_STATE(104)] = 3877,
  [SMALL_STATE(105)] = 3895,
  [SMALL_STATE(106)] = 3913,
  [SMALL_STATE(107)] = 3931,
  [SMALL_STATE(108)] = 3949,
  [SMALL_STATE(109)] = 3967,
  [SMALL_STATE(110)] = 3985,
  [SMALL_STATE(111)] = 4003,
  [SMALL_STATE(112)] = 4021,
  [SMALL_STATE(113)] = 4049,
  [SMALL_STATE(114)] = 4067,
  [SMALL_STATE(115)] = 4078,
  [SMALL_STATE(116)] = 4093,
  [SMALL_STATE(117)] = 4110,
  [SMALL_STATE(118)] = 4123,
  [SMALL_STATE(119)] = 4140,
  [SMALL_STATE(120)] = 4157,
  [SMALL_STATE(121)] = 4167,
  [SMALL_STATE(122)] = 4177,
  [SMALL_STATE(123)] = 4187,
  [SMALL_STATE(124)] = 4197,
  [SMALL_STATE(125)] = 4213,
  [SMALL_STATE(126)] = 4229,
  [SMALL_STATE(127)] = 4245,
  [SMALL_STATE(128)] = 4255,
  [SMALL_STATE(129)] = 4271,
  [SMALL_STATE(130)] = 4288,
  [SMALL_STATE(131)] = 4305,
  [SMALL_STATE(132)] = 4320,
  [SMALL_STATE(133)] = 4333,
  [SMALL_STATE(134)] = 4350,
  [SMALL_STATE(135)] = 4369,
  [SMALL_STATE(136)] = 4380,
  [SMALL_STATE(137)] = 4397,
  [SMALL_STATE(138)] = 4410,
  [SMALL_STATE(139)] = 4427,
  [SMALL_STATE(140)] = 4440,
  [SMALL_STATE(141)] = 4449,
  [SMALL_STATE(142)] = 4460,
  [SMALL_STATE(143)] = 4469,
  [SMALL_STATE(144)] = 4482,
  [SMALL_STATE(145)] = 4495,
  [SMALL_STATE(146)] = 4506,
  [SMALL_STATE(147)] = 4515,
  [SMALL_STATE(148)] = 4528,
  [SMALL_STATE(149)] = 4547,
  [SMALL_STATE(150)] = 4562,
  [SMALL_STATE(151)] = 4571,
  [SMALL_STATE(152)] = 4590,
  [SMALL_STATE(153)] = 4601,
  [SMALL_STATE(154)] = 4612,
  [SMALL_STATE(155)] = 4625,
  [SMALL_STATE(156)] = 4640,
  [SMALL_STATE(157)] = 4653,
  [SMALL_STATE(158)] = 4664,
  [SMALL_STATE(159)] = 4677,
  [SMALL_STATE(160)] = 4690,
  [SMALL_STATE(161)] = 4707,
  [SMALL_STATE(162)] = 4726,
  [SMALL_STATE(163)] = 4742,
  [SMALL_STATE(164)] = 4754,
  [SMALL_STATE(165)] = 4766,
  [SMALL_STATE(166)] = 4776,
  [SMALL_STATE(167)] = 4788,
  [SMALL_STATE(168)] = 4800,
  [SMALL_STATE(169)] = 4812,
  [SMALL_STATE(170)] = 4824,
  [SMALL_STATE(171)] = 4836,
  [SMALL_STATE(172)] = 4852,
  [SMALL_STATE(173)] = 4862,
  [SMALL_STATE(174)] = 4874,
  [SMALL_STATE(175)] = 4884,
  [SMALL_STATE(176)] = 4894,
  [SMALL_STATE(177)] = 4910,
  [SMALL_STATE(178)] = 4922,
  [SMALL_STATE(179)] = 4938,
  [SMALL_STATE(180)] = 4954,
  [SMALL_STATE(181)] = 4964,
  [SMALL_STATE(182)] = 4974,
  [SMALL_STATE(183)] = 4984,
  [SMALL_STATE(184)] = 4994,
  [SMALL_STATE(185)] = 5004,
  [SMALL_STATE(186)] = 5014,
  [SMALL_STATE(187)] = 5021,
  [SMALL_STATE(188)] = 5034,
  [SMALL_STATE(189)] = 5047,
  [SMALL_STATE(190)] = 5060,
  [SMALL_STATE(191)] = 5069,
  [SMALL_STATE(192)] = 5082,
  [SMALL_STATE(193)] = 5093,
  [SMALL_STATE(194)] = 5106,
  [SMALL_STATE(195)] = 5119,
  [SMALL_STATE(196)] = 5132,
  [SMALL_STATE(197)] = 5143,
  [SMALL_STATE(198)] = 5150,
  [SMALL_STATE(199)] = 5157,
  [SMALL_STATE(200)] = 5168,
  [SMALL_STATE(201)] = 5175,
  [SMALL_STATE(202)] = 5188,
  [SMALL_STATE(203)] = 5201,
  [SMALL_STATE(204)] = 5214,
  [SMALL_STATE(205)] = 5227,
  [SMALL_STATE(206)] = 5234,
  [SMALL_STATE(207)] = 5241,
  [SMALL_STATE(208)] = 5254,
  [SMALL_STATE(209)] = 5267,
  [SMALL_STATE(210)] = 5274,
  [SMALL_STATE(211)] = 5287,
  [SMALL_STATE(212)] = 5300,
  [SMALL_STATE(213)] = 5307,
  [SMALL_STATE(214)] = 5320,
  [SMALL_STATE(215)] = 5333,
  [SMALL_STATE(216)] = 5346,
  [SMALL_STATE(217)] = 5359,
  [SMALL_STATE(218)] = 5366,
  [SMALL_STATE(219)] = 5373,
  [SMALL_STATE(220)] = 5380,
  [SMALL_STATE(221)] = 5393,
  [SMALL_STATE(222)] = 5400,
  [SMALL_STATE(223)] = 5413,
  [SMALL_STATE(224)] = 5426,
  [SMALL_STATE(225)] = 5433,
  [SMALL_STATE(226)] = 5446,
  [SMALL_STATE(227)] = 5453,
  [SMALL_STATE(228)] = 5460,
  [SMALL_STATE(229)] = 5467,
  [SMALL_STATE(230)] = 5480,
  [SMALL_STATE(231)] = 5493,
  [SMALL_STATE(232)] = 5506,
  [SMALL_STATE(233)] = 5519,
  [SMALL_STATE(234)] = 5532,
  [SMALL_STATE(235)] = 5545,
  [SMALL_STATE(236)] = 5558,
  [SMALL_STATE(237)] = 5571,
  [SMALL_STATE(238)] = 5584,
  [SMALL_STATE(239)] = 5591,
  [SMALL_STATE(240)] = 5604,
  [SMALL_STATE(241)] = 5611,
  [SMALL_STATE(242)] = 5624,
  [SMALL_STATE(243)] = 5637,
  [SMALL_STATE(244)] = 5644,
  [SMALL_STATE(245)] = 5651,
  [SMALL_STATE(246)] = 5658,
  [SMALL_STATE(247)] = 5665,
  [SMALL_STATE(248)] = 5678,
  [SMALL_STATE(249)] = 5691,
  [SMALL_STATE(250)] = 5702,
  [SMALL_STATE(251)] = 5712,
  [SMALL_STATE(252)] = 5722,
  [SMALL_STATE(253)] = 5728,
  [SMALL_STATE(254)] = 5738,
  [SMALL_STATE(255)] = 5748,
  [SMALL_STATE(256)] = 5758,
  [SMALL_STATE(257)] = 5768,
  [SMALL_STATE(258)] = 5778,
  [SMALL_STATE(259)] = 5784,
  [SMALL_STATE(260)] = 5790,
  [SMALL_STATE(261)] = 5800,
  [SMALL_STATE(262)] = 5806,
  [SMALL_STATE(263)] = 5816,
  [SMALL_STATE(264)] = 5826,
  [SMALL_STATE(265)] = 5832,
  [SMALL_STATE(266)] = 5838,
  [SMALL_STATE(267)] = 5848,
  [SMALL_STATE(268)] = 5858,
  [SMALL_STATE(269)] = 5868,
  [SMALL_STATE(270)] = 5878,
  [SMALL_STATE(271)] = 5888,
  [SMALL_STATE(272)] = 5894,
  [SMALL_STATE(273)] = 5904,
  [SMALL_STATE(274)] = 5914,
  [SMALL_STATE(275)] = 5924,
  [SMALL_STATE(276)] = 5934,
  [SMALL_STATE(277)] = 5944,
  [SMALL_STATE(278)] = 5950,
  [SMALL_STATE(279)] = 5960,
  [SMALL_STATE(280)] = 5966,
  [SMALL_STATE(281)] = 5972,
  [SMALL_STATE(282)] = 5982,
  [SMALL_STATE(283)] = 5988,
  [SMALL_STATE(284)] = 5998,
  [SMALL_STATE(285)] = 6008,
  [SMALL_STATE(286)] = 6018,
  [SMALL_STATE(287)] = 6028,
  [SMALL_STATE(288)] = 6034,
  [SMALL_STATE(289)] = 6040,
  [SMALL_STATE(290)] = 6050,
  [SMALL_STATE(291)] = 6056,
  [SMALL_STATE(292)] = 6066,
  [SMALL_STATE(293)] = 6076,
  [SMALL_STATE(294)] = 6086,
  [SMALL_STATE(295)] = 6096,
  [SMALL_STATE(296)] = 6106,
  [SMALL_STATE(297)] = 6112,
  [SMALL_STATE(298)] = 6118,
  [SMALL_STATE(299)] = 6128,
  [SMALL_STATE(300)] = 6134,
  [SMALL_STATE(301)] = 6140,
  [SMALL_STATE(302)] = 6146,
  [SMALL_STATE(303)] = 6152,
  [SMALL_STATE(304)] = 6158,
  [SMALL_STATE(305)] = 6168,
  [SMALL_STATE(306)] = 6178,
  [SMALL_STATE(307)] = 6188,
  [SMALL_STATE(308)] = 6198,
  [SMALL_STATE(309)] = 6208,
  [SMALL_STATE(310)] = 6218,
  [SMALL_STATE(311)] = 6228,
  [SMALL_STATE(312)] = 6238,
  [SMALL_STATE(313)] = 6244,
  [SMALL_STATE(314)] = 6254,
  [SMALL_STATE(315)] = 6260,
  [SMALL_STATE(316)] = 6267,
  [SMALL_STATE(317)] = 6274,
  [SMALL_STATE(318)] = 6281,
  [SMALL_STATE(319)] = 6288,
  [SMALL_STATE(320)] = 6293,
  [SMALL_STATE(321)] = 6298,
  [SMALL_STATE(322)] = 6305,
  [SMALL_STATE(323)] = 6312,
  [SMALL_STATE(324)] = 6316,
  [SMALL_STATE(325)] = 6320,
  [SMALL_STATE(326)] = 6324,
  [SMALL_STATE(327)] = 6328,
  [SMALL_STATE(328)] = 6332,
  [SMALL_STATE(329)] = 6336,
  [SMALL_STATE(330)] = 6340,
  [SMALL_STATE(331)] = 6344,
  [SMALL_STATE(332)] = 6348,
  [SMALL_STATE(333)] = 6352,
  [SMALL_STATE(334)] = 6356,
  [SMALL_STATE(335)] = 6360,
  [SMALL_STATE(336)] = 6364,
  [SMALL_STATE(337)] = 6368,
  [SMALL_STATE(338)] = 6372,
  [SMALL_STATE(339)] = 6376,
  [SMALL_STATE(340)] = 6380,
  [SMALL_STATE(341)] = 6384,
  [SMALL_STATE(342)] = 6388,
  [SMALL_STATE(343)] = 6392,
  [SMALL_STATE(344)] = 6396,
  [SMALL_STATE(345)] = 6400,
  [SMALL_STATE(346)] = 6404,
  [SMALL_STATE(347)] = 6408,
  [SMALL_STATE(348)] = 6412,
  [SMALL_STATE(349)] = 6416,
  [SMALL_STATE(350)] = 6420,
  [SMALL_STATE(351)] = 6424,
  [SMALL_STATE(352)] = 6428,
  [SMALL_STATE(353)] = 6432,
  [SMALL_STATE(354)] = 6436,
  [SMALL_STATE(355)] = 6440,
  [SMALL_STATE(356)] = 6444,
  [SMALL_STATE(357)] = 6448,
  [SMALL_STATE(358)] = 6452,
  [SMALL_STATE(359)] = 6456,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(42),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(355),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(62),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(348),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(21),
  [215] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 4), SHIFT(91),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), SHIFT_REPEAT(318),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__aif_repeat1, 2), SHIFT_REPEAT(107),
  [225] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 4), SHIFT(348),
  [229] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 4), SHIFT(31),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(91),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(348),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(33),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(91),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(348),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(26),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(50),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(348),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(27),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 9), SHIFT(82),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 9), SHIFT(348),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 9), SHIFT(18),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(72),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(10),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 5), SHIFT(75),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 7), SHIFT(91),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 7), SHIFT(348),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 7), SHIFT(17),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(58),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 2), SHIFT(83),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 2), SHIFT(348),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 2), SHIFT(11),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(91),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(348),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(20),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 12), SHIFT(91),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 12), SHIFT(348),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 12), SHIFT(16),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 11), SHIFT(91),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 8), SHIFT(89),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 7), SHIFT(52),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 4, .production_id = 7), SHIFT(80),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 4, .production_id = 7), SHIFT(348),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 4, .production_id = 7), SHIFT(34),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(56),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(348),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(12),
  [364] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 7), SHIFT(91),
  [368] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 7), SHIFT(348),
  [372] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 7), SHIFT(20),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 4), SHIFT(90),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(70),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(13),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(64),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(348),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(37),
  [398] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 6), SHIFT(91),
  [402] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 6), SHIFT(348),
  [406] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 6), SHIFT(33),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9), SHIFT(91),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9), SHIFT(348),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9), SHIFT(30),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 10), SHIFT(91),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 9), SHIFT(91),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 9), SHIFT(348),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 9), SHIFT(36),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5, .production_id = 7), SHIFT(91),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5, .production_id = 7), SHIFT(348),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5, .production_id = 7), SHIFT(19),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 5, .production_id = 7), SHIFT(57),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 9), SHIFT(91),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 9), SHIFT(348),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 9), SHIFT(15),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(49),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(348),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(14),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 3), SHIFT(71),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9), SHIFT(79),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 9), SHIFT(76),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 6), SHIFT(60),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(77),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(348),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(32),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__aif, 9), SHIFT(91),
  [489] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 5), SHIFT(91),
  [493] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 5), SHIFT(348),
  [497] = {.entry = {.count = 3, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), REDUCE(sym__aif, 5), SHIFT(27),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), SHIFT_REPEAT(91),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), SHIFT_REPEAT(348),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__aif_repeat1, 2), SHIFT_REPEAT(38),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(92),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(318),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(107),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(356),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), SHIFT_REPEAT(112),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(94),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(95),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(96),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(114),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 2, .production_id = 1), SHIFT(114),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3, .production_id = 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2, .production_id = 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 5),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 4, .production_id = 5),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3, .production_id = 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 4), SHIFT(114),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2), SHIFT_REPEAT(318),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 2), SHIFT_REPEAT(123),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(117),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 3), SHIFT(114),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(109),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(111),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 5), SHIFT(114),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(115),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(116),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2),
  [642] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(118),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_hex_repeat1, 2), SHIFT_REPEAT(316),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_hex, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 4),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 5, .production_id = 5),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 4, .production_id = 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__label_repeat1, 1, .production_id = 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3, .production_id = 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [670] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_preprocessor, 3), SHIFT(295),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembly, 3),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [677] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assembly, 3), SHIFT(275),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(131),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_line, 2), REDUCE(aux_sym_line_repeat1, 2),
  [688] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_line, 2), REDUCE(aux_sym_line_repeat1, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 4),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_preprocessor, 4), SHIFT(295),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 8),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 8),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembly, 4),
  [710] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assembly, 4), SHIFT(275),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 5),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_line, 5), REDUCE(aux_sym_line_repeat1, 5),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_line, 5), REDUCE(aux_sym_line_repeat1, 5),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 2),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 2), SHIFT_REPEAT(7),
  [726] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 2), SHIFT_REPEAT(295),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 4), REDUCE(sym_line, 5),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 4), REDUCE(sym_line, 5),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 7),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 7),
  [739] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 1), REDUCE(sym_line, 2),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 1), REDUCE(sym_line, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 6),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 5), REDUCE(sym_line, 6),
  [750] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 5), REDUCE(sym_line, 6),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 6),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_line, 3), REDUCE(aux_sym_line_repeat1, 3),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_line, 3), REDUCE(aux_sym_line_repeat1, 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [773] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 2), SHIFT(266),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 5),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2), REDUCE(sym_line, 3),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2), REDUCE(sym_line, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [790] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_pointer, 3), SHIFT(313),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 4),
  [795] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_line, 4), REDUCE(aux_sym_line_repeat1, 4),
  [798] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_line, 4), REDUCE(aux_sym_line_repeat1, 4),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_line, 1), REDUCE(aux_sym_line_repeat1, 1),
  [808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_line, 1), REDUCE(aux_sym_line_repeat1, 1),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 3), REDUCE(sym_line, 4),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 3), REDUCE(sym_line, 4),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 2),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 2), SHIFT_REPEAT(28),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 2), SHIFT_REPEAT(275),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 7),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 7),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 4),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 4),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 4),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 3),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2),
  [879] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(298),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2), SHIFT_REPEAT(286),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 3),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 3),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 5),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 5),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 5),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 5),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_line_repeat1, 2),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_repeat1, 2),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 6),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 6),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 2),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 6),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(192),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [952] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor, 1),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_preprocessor, 1), SHIFT(4),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, .production_id = 8),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_increment, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assembly, 1),
  [963] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_assembly, 1), SHIFT(24),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_decrement, 3),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 11),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 10),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_increment, 4),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_decrement, 4),
  [1012] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 9),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1018] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 8),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 3),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 3),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_offset, 7),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2, .production_id = 6),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_preprocessor_repeat1, 4),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_increment, 5),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_decrement, 5),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assembly_repeat1, 4),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_colon, 2),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 5),
  [1112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 7, .production_id = 7),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 2, .production_id = 10),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 4),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 8),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 5),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 6),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 7),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 7),
  [1152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 8, .production_id = 9),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 3, .production_id = 11),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 9),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 14),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 13),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 6),
  [1184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 12),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 9, .production_id = 9),
  [1192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 6, .production_id = 7),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__macro_repeat1, 4, .production_id = 12),
  [1196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 11, .production_id = 9),
  [1198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 10),
  [1200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2),
  [1202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat3, 2), SHIFT_REPEAT(335),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro, 10, .production_id = 9),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aif, 11),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aif_arguments, 5),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1261] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
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
