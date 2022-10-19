module.exports = grammar({
	name: "casio",
	extras: $ => [
		// $._whitespace,
		$.comment,
	],
	conflicts: $ => [
		[$.assembly,],
		[$.source_file,],
		[$.preprocessor,],
		[$._macro,],
		[$._aif,],
		[$.pointer_offset, $.pointer_decrement, $.pointer_increment, $.pointer,],
		[$.pointer_increment, $.pointer,],
		[$.register, $._label,],
	],
	word: $ => $._word,

	rules: {
		source_file: $ => seq(
			repeat($._line),
			optional(
				seq(
					repeat1($._whitespace),
					'.END',
					repeat($._whitespace),
					optional($.comment),
					repeat(
						seq(
							/\r?\n/,
							alias(
								/.*/,
								'comment',
							),
						)
					)
				),
			),
		),

		_line: $ => seq(
			optional(
				choice(
					$.label,
					seq(
						repeat($._whitespace),
						alias(
							$.label_colon,
							$.label,
						),
					),
					// prec.right(2,
					// 	$.label,
					// ),
					// prec.left(1,
					// 	seq(
					// 		repeat($._whitespace),
					// 		alias(
					// 			$.label_colon,
					// 			$.label,
					// 		),
					// 	),
					// ),
				),
			),
			optional(
				seq(
					repeat1($._whitespace),
					choice(
						$.assembly,
						$.preprocessor,
					),
				),
			),
			repeat($._whitespace),
			optional($.comment),
			/\r?\n/,
		),

		register_0: $ => /[rR]0/,
		register: $ => /[rR](1[0-5]|\d)|R[nm]/,
		constant: $ => choice(
			seq(
				'#',
				$.numeric_hex,
			),
			seq(
				'#',
				optional(
					'-',
				),
				alias(
					$.numeric_32bit,
					'numeric',
				),
			),
			seq(
				'#',
				optional($.symbol),
			),
		),
		_numeric: $ => choice(
			$.numeric_hex,
			$.numeric_8bit,
			$.numeric_4bit,
			$.numeric_32bit,
		),
		numeric_hex: $ => seq(
			/H|h/,
			'\'',
			repeat1(
				choice(
					alias(
						/[0-9A-Fa-f]+/,
						'constant',
					),
					$.symbol,
				),
			),
		),
		numeric_32bit: $ => /\d+/,
		numeric_8bit: $ => /25[0-5]|2[0-4]\d|1?\d\d?/,
		numeric_4bit: $ => /1[0-5]|\d/,


		_aif: $ => seq(
			alias(
				'.AIF',
				'if',
			),
			optional(
				seq(
					repeat1($._whitespace),
					$.aif_arguments,
				),
			),
			repeat($._whitespace),
			/\r?\n/,
			repeat($._line),
			optional(
				seq(
					repeat1($._whitespace),
					'.AELSE',
					repeat($._whitespace),
					optional($.comment),
					/\r?\n/,
				),
			),
			repeat($._line),
			// repeat(
			// 	choice(
			// 		seq(
			// 			repeat1($._whitespace),
			// 			'.AELSE',
			// 			repeat($._whitespace),
			// 			optional($.comment),
			// 			/\r?\n/,
			// 		),
			// 		$._line,
			// 	),
			// ),
			optional(
				seq(
					repeat1($._whitespace),
					alias(
						/\.AENDI/,
						'if_end',
					),
				),
			),
		),
		aif_arguments: $ => seq(
			$._argument,
			repeat1($._whitespace),
			alias(
				choice(
					'EQ',	// EQual to
					'LT',	// Less Than
					'GE',	// Greater Than
				),
				'comparsion',
			),
			repeat1($._whitespace),
			$._argument,
		),

		_macro: $ => seq(
			alias(
				'.MACRO',
				'macro',
			),
			seq(
				repeat1($._whitespace),
				alias(
					$._word,
					'name',
				),
				optional(
					seq(
						repeat1($._whitespace),
						alias(
							$._word,
							'variable',
						),
						repeat(
							seq(
								repeat($._whitespace),
								',',
								repeat($._whitespace),
								alias(
									$._word,
									'variable',
								),
							),
						),
					),
				),
			),
			repeat($._whitespace),
			// optional($.comment),
			/\r?\n/,
			repeat($._line),
			optional(
				seq(
					repeat1($._whitespace),
					alias(
						/\.ENDM/,
						'macro_end',
					),
				),
			),
		),

		// _export: $ => seq(
		// 	alias(
		// 		/\.EXPORT/,
		// 		'export',
		// 	),
		// 	repeat1($._whitespace),
		// 	alias(
		// 		$._word,
		// 		'label',
		// 	),
		// ),

		preprocessor: $ => choice(
			$._macro,
			$._aif,
			// $._export,
			seq(
				alias(
					/\.\w*(\.[BbLlWw])?/,
					'preprocessor',
				),
				optional(
					seq(
						repeat1($._whitespace),
						$._argument,
						repeat(
							seq(
								repeat($._whitespace),
								',',
								repeat($._whitespace),
								$._argument,
							),
						),
					),
				),
			),
		),


		assembly: $ => seq(
			alias(
				/[A-Za-z]+(\.\w|\/\w+|\w+)?/,
				'instruction',
			),
			optional(
				seq(
					repeat1($._whitespace),
					$._operand,
					repeat( // Better error correction
						seq(
							repeat($._whitespace),
							',',
							repeat($._whitespace),
							$._operand,
						),
					),
				),
			),
		),


		_argument: $ => choice(
			$._operand,
			$._numeric,
			alias(
				token(
					seq(
						'"',
						/[^\r\n\"]+|\\./,
						'"',
					),
				),
				'string',
			),
			alias(
				token(
					seq(
						/\w+/,
						'=',
						/\d+/,
					),
				),
				'assign',
			),
		),

		_operand: $ => choice(
			$.constant,
			$.register,
			$.register_system,
			$.register_control,
			$.pointer,
			$.pointer_increment,
			$.pointer_decrement,
			$.pointer_offset,
			$.label,
		),

		pointer_offset: $ => seq(
			'@',
			repeat($._whitespace),
			'(',
			repeat($._whitespace),
			choice(
				$._numeric,
				$.register_0,
				$.label,
			),
			repeat($._whitespace),
			',',
			repeat($._whitespace),
			choice(
				alias(caseInsensitive('GBR'), 'GBR'),
				alias(caseInsensitive('PC'), 'PC'),
				$.register,
			),
			repeat($._whitespace),
			')'
		),



		register_control: $ => caseInsensitive(/GBR|VBR|MOD|RE|RS|R(1[0-5]|[0-9])_BANK|SPC|SS?R/),
		register_system: $ => caseInsensitive(/FPSCR|FPUL|MAC[HL]|PR|DSR|A0|[XY][01]/),
		pointer_decrement: $ => prec(1,
			seq(
				'@',
				repeat($._whitespace),
				'-',
				repeat($._whitespace),
				$.register,
			),
		),
		pointer_increment: $ => seq(
			'@',
			repeat($._whitespace),
			$.register,
			repeat($._whitespace),
			'+',
		),
		pointer: $ => seq(
			'@',
			repeat($._whitespace),
			$.register,
		),


		label: $ => $._label,
		_label: $ => repeat1(
			choice(
				alias(
					$._word,
					'char_label',
				),
				$.symbol,
				// seq(
				// 	'\\',
				// 	optional('&'),
				// 	alias(
				// 		$._word,
				// 		'char',
				// 	),
				// 	optional('\''),
				// ),
			),
		),
		label_colon: $ => seq(
			$._label,
			':',
		),
		// label_colon: $ => seq(
		// 	alias(
		// 		token(
		// 			repeat1(
		// 				choice(
		// 					seq(
		// 						'\\',
		// 						optional('&'),
		// 						/\w+/,
		// 						optional('\''),
		// 					),
		// 					/\w+/,
		// 				),
		// 			),
		// 		),
		// 		'label',
		// 	),
		// 	':',
		// ),
		symbol: $ => seq(
			'\\',
			optional('&'),
			alias(
				$._word,
				'char',
			),
			optional('\''),
		),

		// ERROR: $ => /\.\w+/,
		_word: $ => /\w+/,
		// comment: $ => seq(
		// 	';',
		// 	repeat(
		// 		choice(
		// 			/[^\r\n\\]+/,
		// 			alias(
		// 				$.symbol,
		// 				'',
		// 			),
		// 		),
		// 	),
		// ),
		comment: $ => /;[^\r\n]*/,
		_whitespace: $ => /[ \t]+/,
	},
});


function caseInsensitive(string) {
	// Doesn't support letters inside character class (ranges)
	return new RegExp(
		typeof string === 'string' ?
			string
				.split('')
				.map(char =>
					char.match(/[a-zA-Z]/) ? `[${char.toLowerCase()}${char.toUpperCase()}]` :
						char.match(/[^_a-zA-Z0-9]/) ? '\\' + char :
							char
				)
				.join('')
			:
			string.toString().slice(1, -1)
				.split('')
				.map(char =>
					char.match(/[a-zA-Z]/) ? `[${char.toLowerCase()}${char.toUpperCase()}]` :
						char
				)
				.join('')
	)
};