/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 28 "parser.y" /* yacc.c:339  */

#include "config.h"

#include <stdlib.h>
#include <string.h>

#define	COB_IN_PARSER	1
#include "cobc.h"
#include "tree.h"

#ifndef	_STDLIB_H
#define	_STDLIB_H 1
#endif

#define YYSTYPE			cb_tree
#define yyerror(x)		cb_error ("%s", x)

#define PENDING(x)		cb_warning (_("'%s' not implemented"), x)

#define emit_statement(x) \
do { \
  if (!skip_statements) { \
	CB_ADD_TO_CHAIN (x, current_program->exec_list); \
  } \
} while (0)

#define push_expr(type, node) \
  current_expr = cb_build_list (cb_int (type), node, current_expr)

/* Statement terminator definitions */
#define TERM_NONE		0
#define TERM_ACCEPT		1U
#define TERM_ADD		2U
#define TERM_CALL		3U
#define TERM_COMPUTE		4U
#define TERM_DELETE		5U
#define TERM_DISPLAY		6U
#define TERM_DIVIDE		7U
#define TERM_EVALUATE		8U
#define TERM_IF			9U
#define TERM_MULTIPLY		10U
#define TERM_PERFORM		11U
#define TERM_READ		12U
#define TERM_RECEIVE		13U
#define TERM_RETURN		14U
#define TERM_REWRITE		15U
#define TERM_SEARCH		16U
#define TERM_START		17U
#define TERM_STRING		18U
#define TERM_SUBTRACT		19U
#define TERM_UNSTRING		20U
#define TERM_WRITE		21U
#define TERM_MAX		22U

#define	TERMINATOR_WARNING(x,z)	terminator_warning (x, TERM_##z, #z)
#define	TERMINATOR_ERROR(x,z)	terminator_error (x, TERM_##z, #z)
#define	TERMINATOR_CLEAR(x,z)	terminator_clear (x, TERM_##z)

/* Defines for duplicate checks */
/* Note - We use <= 16 for common item definitons and */
/* > 16 for non-common item definitions eg. REPORT and SCREEN */
#define	SYN_CLAUSE_1		(1U << 0)
#define	SYN_CLAUSE_2		(1U << 1)
#define	SYN_CLAUSE_3		(1U << 2)
#define	SYN_CLAUSE_4		(1U << 3)
#define	SYN_CLAUSE_5		(1U << 4)
#define	SYN_CLAUSE_6		(1U << 5)
#define	SYN_CLAUSE_7		(1U << 6)
#define	SYN_CLAUSE_8		(1U << 7)
#define	SYN_CLAUSE_9		(1U << 8)
#define	SYN_CLAUSE_10		(1U << 9)
#define	SYN_CLAUSE_11		(1U << 10)
#define	SYN_CLAUSE_12		(1U << 11)
#define	SYN_CLAUSE_13		(1U << 12)
#define	SYN_CLAUSE_14		(1U << 13)
#define	SYN_CLAUSE_15		(1U << 14)
#define	SYN_CLAUSE_16		(1U << 15)
#define	SYN_CLAUSE_17		(1U << 16)
#define	SYN_CLAUSE_18		(1U << 17)
#define	SYN_CLAUSE_19		(1U << 18)
#define	SYN_CLAUSE_20		(1U << 19)
#define	SYN_CLAUSE_21		(1U << 20)
#define	SYN_CLAUSE_22		(1U << 21)
#define	SYN_CLAUSE_23		(1U << 22)
#define	SYN_CLAUSE_24		(1U << 23)
#define	SYN_CLAUSE_25		(1U << 24)
#define	SYN_CLAUSE_26		(1U << 25)
#define	SYN_CLAUSE_27		(1U << 26)
#define	SYN_CLAUSE_28		(1U << 27)
#define	SYN_CLAUSE_29		(1U << 28)
#define	SYN_CLAUSE_30		(1U << 29)
#define	SYN_CLAUSE_31		(1U << 30)
#define	SYN_CLAUSE_32		(1U << 31)

#define	EVAL_DEPTH		32
#define	PROG_DEPTH		16

/* Global variables */

struct cb_program		*current_program = NULL;
struct cb_statement		*current_statement = NULL;
struct cb_label			*current_section = NULL;
struct cb_label			*current_paragraph = NULL;
char				*cobc_glob_line = NULL;
int				cb_exp_line = 0;

cb_tree				cobc_printer_node = NULL;
int				functions_are_all = 0;
int				non_const_word = 0;
unsigned int			cobc_in_procedure = 0;
unsigned int			cobc_in_repository = 0;
unsigned int			cobc_force_literal = 0;
unsigned int			cobc_cs_check = 0;

/* Local variables */

static struct cb_statement	*main_statement;

static cb_tree			current_expr;
static struct cb_field		*current_field;
static struct cb_field		*control_field;
static struct cb_field		*description_field;
static struct cb_file		*current_file;
static struct cb_report		*current_report;
static struct cb_report		*report_instance;
static struct cb_key_component	*key_component_list;

static struct cb_file		*linage_file;
static cb_tree			next_label_list;

static char			*stack_progid[PROG_DEPTH];

static enum cb_storage		current_storage;

static cb_tree			perform_stack;
static cb_tree			qualifier;

static cb_tree			save_tree;
static cb_tree			start_tree;

static unsigned int		check_unreached;
static unsigned int		in_declaratives;
static unsigned int		in_debugging;
static unsigned int		current_linage;
static unsigned int		report_count;
static unsigned int		prog_end;
static unsigned int		use_global_ind;
static unsigned int		samearea;
static unsigned int		inspect_keyword;
static unsigned int		main_flag_set;
static int			next_label_id;
static int			eval_level;
static int			eval_inc;
static int			eval_inc2;
static int			depth;
static int			call_mode;
static int			size_mode;
static int			setattr_val_on;
static int			setattr_val_off;
static unsigned int		check_duplicate;
static unsigned int		check_on_off_duplicate;
static unsigned int		check_pic_duplicate;
static unsigned int		check_comp_duplicate;
static unsigned int		skip_statements;
static unsigned int		start_debug;
static unsigned int		save_debug;
static unsigned int		needs_field_debug;
static unsigned int		needs_debug_item;
static unsigned int		env_div_seen;
static unsigned int		header_check;

static int			term_array[TERM_MAX];
static cb_tree			eval_check[EVAL_DEPTH][EVAL_DEPTH];

/* Defines for header presence */

#define	COBC_HD_ENVIRONMENT_DIVISION	(1U << 0)
#define	COBC_HD_CONFIGURATION_SECTION	(1U << 1)
#define	COBC_HD_SPECIAL_NAMES		(1U << 2)
#define	COBC_HD_INPUT_OUTPUT_SECTION	(1U << 3)
#define	COBC_HD_FILE_CONTROL		(1U << 4)
#define	COBC_HD_I_O_CONTROL		(1U << 5)
#define	COBC_HD_DATA_DIVISION		(1U << 6)
#define	COBC_HD_FILE_SECTION		(1U << 7)
#define	COBC_HD_WORKING_STORAGE_SECTION	(1U << 8)
#define	COBC_HD_LOCAL_STORAGE_SECTION	(1U << 9)
#define	COBC_HD_LINKAGE_SECTION		(1U << 10)
#define	COBC_HD_COMMUNICATIONS_SECTION	(1U << 11)
#define	COBC_HD_REPORT_SECTION		(1U << 12)
#define	COBC_HD_SCREEN_SECTION		(1U << 13)
#define	COBC_HD_PROCEDURE_DIVISION	(1U << 14)
#define	COBC_HD_PROGRAM_ID		(1U << 15)

/* Static functions */

static void
begin_statement (const char *name, const unsigned int term)
{
	if (cb_warn_unreachable && check_unreached) {
		cb_warning (_("Unreachable statement '%s'"), name);
	}
	current_paragraph->flag_statement = 1;
	current_statement = cb_build_statement (name);
	CB_TREE (current_statement)->source_file = cb_source_file;
	CB_TREE (current_statement)->source_line = cb_source_line;
	current_statement->statement = cobc_glob_line;
	current_statement->flag_in_debug = in_debugging;
	emit_statement (CB_TREE (current_statement));
	if (term) {
		term_array[term]++;
	}
	main_statement = current_statement;
}

static void
begin_implicit_statement (void)
{
	current_statement = cb_build_statement (NULL);
	current_statement->flag_in_debug = !!in_debugging;
	main_statement->body = cb_list_add (main_statement->body,
					    CB_TREE (current_statement));
}

# if 0 /* activate only for debugging purposes for attribs */
static
void printBits(unsigned int num){
	unsigned int size = sizeof(unsigned int);
	unsigned int maxPow = 1<<(size*8-1);
	int i=0;

	for(;i<size*8;++i){
		/* print last bit and shift left. */
		fprintf(stderr, "%u ",num&maxPow ? 1 : 0);
		num = num<<1;
	}
	fprintf(stderr, "\n");
}
#endif

static void
emit_entry (const char *name, const int encode, cb_tree using_list)
{
	cb_tree		l;
	cb_tree		label;
	cb_tree		x;
	struct cb_field	*f;
	int		parmnum;
	char		buff[COB_MINI_BUFF];

	snprintf (buff, (size_t)COB_MINI_MAX, "E$%s", name);
	label = cb_build_label (cb_build_reference (buff), NULL);
	if (encode) {
		CB_LABEL (label)->name = cb_encode_program_id (name);
		CB_LABEL (label)->orig_name = name;
	} else {
		CB_LABEL (label)->name = name;
		CB_LABEL (label)->orig_name = current_program->orig_program_id;
	}
	CB_LABEL (label)->flag_begin = 1;
	CB_LABEL (label)->flag_entry = 1;
	label->source_file = cb_source_file;
	label->source_line = cb_source_line;
	emit_statement (label);

	if (current_program->flag_debugging) {
		emit_statement (cb_build_debug (cb_debug_contents,
						"START PROGRAM", NULL));
	}

	parmnum = 1;
	for (l = using_list; l; l = CB_CHAIN (l)) {
		x = CB_VALUE (l);
		if (CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
			f = CB_FIELD (cb_ref (x));
			if (f->level != 01 && f->level != 77) {
				cb_error_x (x, _("'%s' not level 01 or 77"), cb_name (x));
			}
			if (!current_program->flag_chained) {
				if (f->storage != CB_STORAGE_LINKAGE) {
					cb_error_x (x, _("'%s' is not in LINKAGE SECTION"), cb_name (x));
				}
				if (f->flag_item_based || f->flag_external) {
					cb_error_x (x, _("'%s' can not be BASED/EXTERNAL"), cb_name (x));
				}
				f->flag_is_pdiv_parm = 1;
			} else {
				if (f->storage != CB_STORAGE_WORKING) {
					cb_error_x (x, _("'%s' is not in WORKING-STORAGE SECTION"), cb_name (x));
				}
				f->flag_chained = 1;
				f->param_num = parmnum;
				parmnum++;
			}
			if (f->redefines) {
				cb_error_x (x, _("'%s' REDEFINES field not allowed here"), cb_name (x));
			}
		}
	}

	/* Check dangling LINKAGE items */
	if (cb_warn_linkage) {
		for (f = current_program->linkage_storage; f; f = f->sister) {
			if (current_program->returning) {
				if (cb_ref (current_program->returning) != cb_error_node) {
					if (f == CB_FIELD (cb_ref (current_program->returning))) {
						continue;
					}
				}
			}
			for (l = using_list; l; l = CB_CHAIN (l)) {
				x = CB_VALUE (l);
				if (CB_VALID_TREE (x) && cb_ref (x) != cb_error_node) {
					if (f == CB_FIELD (cb_ref (x))) {
						break;
					}
				}
			}
			if (!l && !f->redefines) {
				cb_warning (_("LINKAGE item '%s' is not a PROCEDURE USING parameter"), f->name);
			}
		}
	}

	/* Check returning item against using items when FUNCTION */
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		for (l = using_list; l; l = CB_CHAIN (l)) {
			x = CB_VALUE (l);
			if (CB_VALID_TREE (x) && current_program->returning &&
			    cb_ref (x) == cb_ref (current_program->returning)) {
				cb_error_x (x, _("'%s' USING item duplicates RETURNING item"), cb_name (x));
			}
		}
	}

	for (l = current_program->entry_list; l; l = CB_CHAIN (l)) {
		if (strcmp ((const char *)name,
			    (const char *)(CB_LABEL(CB_PURPOSE(l))->name)) == 0) {
			cb_error_x (CB_TREE (current_statement),
				    _("ENTRY '%s' duplicated"), name);
		}
	}

	current_program->entry_list =
		cb_list_append (current_program->entry_list,
				CB_BUILD_PAIR (label, using_list));
}

static size_t
increment_depth (void)
{
	if (++depth >= PROG_DEPTH) {
		cb_error (_("Maximum nested program depth exceeded (%d)"),
			  PROG_DEPTH);
		return 1;
	}
	return 0;
}

static void
terminator_warning (cb_tree stmt, const unsigned int termid,
		    const char *name)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
		if (cb_warn_terminator) {
			cb_warning_x (stmt,
				_("%s statement not terminated by END-%s"),
				name, name);
		}
	}
	/* Free tree associated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_error (cb_tree stmt, const unsigned int termid, const char *name)
{
	check_unreached = 0;
	cb_error_x (CB_TREE (current_statement),
			_("%s statement not terminated by END-%s"),
			name, name);
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree associated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_clear (cb_tree stmt, const unsigned int termid)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree associated with terminator */
	cobc_parse_free (stmt);
}

static int
literal_value (cb_tree x)
{
	if (x == cb_space) {
		return ' ';
	} else if (x == cb_zero) {
		return '0';
	} else if (x == cb_quote) {
		return cb_flag_apostrophe ? '\'' : '"';
	} else if (x == cb_null) {
		return 0;
	} else if (x == cb_low) {
		return 0;
	} else if (x == cb_high) {
		return 255;
	} else if (CB_TREE_CLASS (x) == CB_CLASS_NUMERIC) {
		return cb_get_int (x);
	} else {
		return CB_LITERAL (x)->data[0];
	}
}

static void
setup_use_file (struct cb_file *fileptr)
{
	struct cb_file	*newptr;

	if (fileptr->organization == COB_ORG_SORT) {
		cb_error (_("USE statement invalid for SORT file"));
	}
	if (fileptr->flag_global) {
		newptr = cobc_parse_malloc (sizeof(struct cb_file));
		*newptr = *fileptr;
		newptr->handler = current_section;
		newptr->handler_prog = current_program;
		if (!use_global_ind) {
			current_program->local_file_list =
				cb_list_add (current_program->local_file_list,
					     CB_TREE (newptr));
		} else {
			current_program->global_file_list =
				cb_list_add (current_program->global_file_list,
					     CB_TREE (newptr));
		}
	} else {
		fileptr->handler = current_section;
	}
}

static void
build_nested_special (const int ndepth)
{
	cb_tree		x;
	cb_tree		y;

	if (!ndepth) {
		return;
	}

	/* Inherit special name mnemonics from parent */
	for (x = current_program->mnemonic_spec_list; x; x = CB_CHAIN (x)) {
		y = cb_build_reference (cb_name(CB_PURPOSE(x)));
		if (CB_SYSTEM_NAME_P (CB_VALUE(x))) {
			cb_define (y, CB_VALUE(x));
		} else {
			cb_build_constant (y, CB_VALUE(x));
		}
	}
}

static void
clear_initial_values (void)
{
	perform_stack = NULL;
	current_statement = NULL;
	main_statement = NULL;
	qualifier = NULL;
	in_declaratives = 0;
	in_debugging = 0;
	use_global_ind = 0;
	check_duplicate = 0;
	check_pic_duplicate = 0;
	check_comp_duplicate = 0;
	skip_statements = 0;
	start_debug = 0;
	save_debug = 0;
	needs_field_debug = 0;
	needs_debug_item = 0;
	env_div_seen = 0;
	header_check = 0;
	next_label_id = 0;
	current_linage = 0;
	setattr_val_on = 0;
	setattr_val_off = 0;
	report_count = 0;
	current_storage = CB_STORAGE_WORKING;
	eval_level = 0;
	eval_inc = 0;
	eval_inc2 = 0;
	inspect_keyword = 0;
	check_unreached = 0;
	cobc_in_procedure = 0;
	cobc_in_repository = 0;
	cobc_force_literal = 0;
	non_const_word = 0;
	samearea = 1;
	memset ((void *)eval_check, 0, sizeof(eval_check));
	memset ((void *)term_array, 0, sizeof(term_array));
	linage_file = NULL;
	current_file = NULL;
	current_report = NULL;
	report_instance = NULL;
	next_label_list = NULL;
	if (cobc_glob_line) {
		cobc_free (cobc_glob_line);
		cobc_glob_line = NULL;
	}
}

static void
check_repeated (const char *clause, const unsigned int bitval, unsigned int *already_seen)
{
	if (*already_seen & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		*already_seen |= bitval;
	}
}

static void
check_screen_attr (const char *clause, const int bitval)
{
	if (current_field->screen_flag & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		current_field->screen_flag |= bitval;
	}
}

static void
bit_set_attr (const cb_tree onoff, const int attrval)
{
	if (onoff == cb_int1) {
		setattr_val_on |= attrval;
	} else {
		setattr_val_off |= attrval;
	}
}

static void
check_attribs (cb_tree fgc, cb_tree bgc, cb_tree scroll,
	       cb_tree timeout, cb_tree prompt, int attrib)
{
	/* Attach attribute to current_statement */
	if (!current_statement->attr_ptr) {
		current_statement->attr_ptr =
			cobc_parse_malloc (sizeof(struct cb_attr_struct));
	}
	if (fgc) {
		current_statement->attr_ptr->fgc = fgc;
	}
	if (bgc) {
		current_statement->attr_ptr->bgc = bgc;
	}
	if (scroll) {
		current_statement->attr_ptr->scroll = scroll;
	}
	if (timeout) {
		current_statement->attr_ptr->timeout = timeout;
	}
	if (prompt) {
		current_statement->attr_ptr->prompt = prompt;
	}
	current_statement->attr_ptr->dispattrs |= attrib;
}

static void
remove_attrib (int attrib)
{
	/* Remove attribute from current_statement */
	if (!current_statement->attr_ptr) {
		return;
	}
	current_statement->attr_ptr->dispattrs ^= attrib;
}

static void
check_set_usage (const enum cb_usage usage)
{
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	current_field->usage = usage;
}

static void
check_relaxed_syntax (const unsigned int lev)
{
	const char	*s;

	switch (lev) {
	case COBC_HD_ENVIRONMENT_DIVISION:
		s = "ENVIRONMENT DIVISION";
		break;
	case COBC_HD_CONFIGURATION_SECTION:
		s = "CONFIGURATION SECTION";
		break;
	case COBC_HD_SPECIAL_NAMES:
		s = "SPECIAL-NAMES";
		break;
	case COBC_HD_INPUT_OUTPUT_SECTION:
		s = "INPUT-OUTPUT SECTION";
		break;
	case COBC_HD_FILE_CONTROL:
		s = "FILE-CONTROL";
		break;
	case COBC_HD_I_O_CONTROL:
		s = "I-O-CONTROL";
		break;
	case COBC_HD_DATA_DIVISION:
		s = "DATA DIVISION";
		break;
	case COBC_HD_FILE_SECTION:
		s = "FILE SECTION";
		break;
	case COBC_HD_WORKING_STORAGE_SECTION:
		s = "WORKING-STORAGE SECTION";
		break;
	case COBC_HD_LOCAL_STORAGE_SECTION:
		s = "LOCAL-STORAGE SECTION";
		break;
	case COBC_HD_LINKAGE_SECTION:
		s = "LINKAGE SECTION";
		break;
	case COBC_HD_COMMUNICATIONS_SECTION:
		s = "COMMUNICATIONS SECTION";
		break;
	case COBC_HD_REPORT_SECTION:
		s = "REPORT SECTION";
		break;
	case COBC_HD_SCREEN_SECTION:
		s = "SCREEN SECTION";
		break;
	case COBC_HD_PROCEDURE_DIVISION:
		s = "PROCEDURE DIVISION";
		break;
	case COBC_HD_PROGRAM_ID:
		s = "PROGRAM-ID";
		break;
	default:
		s = "Unknown";
		break;
	}
	if (cb_relaxed_syntax_check) {
		cb_warning (_("%s header missing - assumed"), s);
	} else {
		cb_error (_("%s header missing"), s);
	}
}

static void
check_headers_present (const unsigned int lev1, const unsigned int lev2,
		       const unsigned int lev3, const unsigned int lev4)
{
	/* Lev1 is always present and checked */
	/* Lev2/3/4, if non-zero (forced) may be present */
	if (!(header_check & lev1)) {
		header_check |= lev1;
		check_relaxed_syntax (lev1);
	}
	if (lev2) {
		if (!(header_check & lev2)) {
			header_check |= lev2;
			check_relaxed_syntax (lev2);
		}
	}
	if (lev3) {
		if (!(header_check & lev3)) {
			header_check |= lev3;
			check_relaxed_syntax (lev3);
		}
	}
	if (lev4) {
		if (!(header_check & lev4)) {
			header_check |= lev4;
			check_relaxed_syntax (lev4);
		}
	}
}


#line 764 "parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_EOF = 0,
    ABSENT = 258,
    ACCEPT = 259,
    ACCESS = 260,
    ADD = 261,
    ADDRESS = 262,
    ADVANCING = 263,
    AFTER = 264,
    ALL = 265,
    ALLOCATE = 266,
    ALPHABET = 267,
    ALPHABETIC = 268,
    ALPHABETIC_LOWER = 269,
    ALPHABETIC_UPPER = 270,
    ALPHANUMERIC = 271,
    ALPHANUMERIC_EDITED = 272,
    ALSO = 273,
    ALTER = 274,
    ALTERNATE = 275,
    AND = 276,
    ANY = 277,
    ARE = 278,
    AREA = 279,
    ARGUMENT_NUMBER = 280,
    ARGUMENT_VALUE = 281,
    AS = 282,
    ASCENDING = 283,
    ASCII = 284,
    ASSIGN = 285,
    AT = 286,
    ATTRIBUTE = 287,
    AUTO = 288,
    AUTOMATIC = 289,
    AWAY_FROM_ZERO = 290,
    BACKGROUND_COLOR = 291,
    BASED = 292,
    BEFORE = 293,
    BELL = 294,
    BINARY = 295,
    BINARY_C_LONG = 296,
    BINARY_CHAR = 297,
    BINARY_DOUBLE = 298,
    BINARY_LONG = 299,
    BINARY_SHORT = 300,
    BLANK = 301,
    BLINK = 302,
    BLOCK = 303,
    BOTTOM = 304,
    BY = 305,
    BYTE_LENGTH = 306,
    CALL = 307,
    CANCEL = 308,
    CAPACITY = 309,
    CENTER = 310,
    CF = 311,
    CH = 312,
    CHAINING = 313,
    CHARACTER = 314,
    CHARACTERS = 315,
    CLASS = 316,
    CLASSIFICATION = 317,
    CLOSE = 318,
    CODE = 319,
    CODE_SET = 320,
    COLLATING = 321,
    COL = 322,
    COLS = 323,
    COLUMN = 324,
    COLUMNS = 325,
    COMMA = 326,
    COMMAND_LINE = 327,
    COMMA_DELIM = 328,
    COMMIT = 329,
    COMMON = 330,
    COMP = 331,
    COMPUTE = 332,
    COMP_1 = 333,
    COMP_2 = 334,
    COMP_3 = 335,
    COMP_4 = 336,
    COMP_5 = 337,
    COMP_6 = 338,
    COMP_X = 339,
    CONCATENATE_FUNC = 340,
    CONDITION = 341,
    CONFIGURATION = 342,
    CONSTANT = 343,
    CONTAINS = 344,
    CONTENT = 345,
    CONTINUE = 346,
    CONTROL = 347,
    CONTROLS = 348,
    CONVERSION = 349,
    CONVERTING = 350,
    COPY = 351,
    CORRESPONDING = 352,
    COUNT = 353,
    CRT = 354,
    CRT_UNDER = 355,
    CURRENCY = 356,
    CURRENT_DATE_FUNC = 357,
    CURSOR = 358,
    CYCLE = 359,
    DATA = 360,
    DATE = 361,
    DAY = 362,
    DAY_OF_WEEK = 363,
    DE = 364,
    DEBUGGING = 365,
    DECIMAL_POINT = 366,
    DECLARATIVES = 367,
    DEFAULT = 368,
    DELETE = 369,
    DELIMITED = 370,
    DELIMITER = 371,
    DEPENDING = 372,
    DESCENDING = 373,
    DETAIL = 374,
    DISC = 375,
    DISK = 376,
    DISPLAY = 377,
    DISPLAY_OF_FUNC = 378,
    DIVIDE = 379,
    DIVISION = 380,
    DOWN = 381,
    DUPLICATES = 382,
    DYNAMIC = 383,
    EBCDIC = 384,
    EC = 385,
    ELSE = 386,
    END = 387,
    END_ACCEPT = 388,
    END_ADD = 389,
    END_CALL = 390,
    END_COMPUTE = 391,
    END_DELETE = 392,
    END_DISPLAY = 393,
    END_DIVIDE = 394,
    END_EVALUATE = 395,
    END_FUNCTION = 396,
    END_IF = 397,
    END_MULTIPLY = 398,
    END_PERFORM = 399,
    END_PROGRAM = 400,
    END_READ = 401,
    END_RETURN = 402,
    END_REWRITE = 403,
    END_SEARCH = 404,
    END_START = 405,
    END_STRING = 406,
    END_SUBTRACT = 407,
    END_UNSTRING = 408,
    END_WRITE = 409,
    ENTRY = 410,
    ENVIRONMENT = 411,
    ENVIRONMENT_NAME = 412,
    ENVIRONMENT_VALUE = 413,
    EOL = 414,
    EOP = 415,
    EOS = 416,
    EQUAL = 417,
    ERASE = 418,
    ERROR = 419,
    ESCAPE = 420,
    EVALUATE = 421,
    EVENT_STATUS = 422,
    EXCEPTION = 423,
    EXCEPTION_CONDITION = 424,
    EXCLUSIVE = 425,
    EXIT = 426,
    EXPONENTIATION = 427,
    EXTEND = 428,
    EXTERNAL = 429,
    FD = 430,
    FILE_CONTROL = 431,
    FILE_ID = 432,
    FILLER = 433,
    FINAL = 434,
    FIRST = 435,
    FLOAT_BINARY_128 = 436,
    FLOAT_BINARY_32 = 437,
    FLOAT_BINARY_64 = 438,
    FLOAT_DECIMAL_16 = 439,
    FLOAT_DECIMAL_34 = 440,
    FLOAT_DECIMAL_7 = 441,
    FLOAT_EXTENDED = 442,
    FLOAT_LONG = 443,
    FLOAT_SHORT = 444,
    FOOTING = 445,
    FOR = 446,
    FOREGROUND_COLOR = 447,
    FOREVER = 448,
    FORMATTED_DATE_FUNC = 449,
    FORMATTED_DATETIME_FUNC = 450,
    FORMATTED_TIME_FUNC = 451,
    FREE = 452,
    FROM = 453,
    FROM_CRT = 454,
    FULL = 455,
    FUNCTION = 456,
    FUNCTION_ID = 457,
    FUNCTION_NAME = 458,
    GENERATE = 459,
    GIVING = 460,
    GLOBAL = 461,
    GO = 462,
    GOBACK = 463,
    GREATER = 464,
    GREATER_OR_EQUAL = 465,
    GROUP = 466,
    HEADING = 467,
    HIGHLIGHT = 468,
    HIGH_VALUE = 469,
    ID = 470,
    IDENTIFICATION = 471,
    IF = 472,
    IGNORE = 473,
    IGNORING = 474,
    IN = 475,
    INDEX = 476,
    INDEXED = 477,
    INDICATE = 478,
    INITIALIZE = 479,
    INITIALIZED = 480,
    INITIATE = 481,
    INPUT = 482,
    INPUT_OUTPUT = 483,
    INSPECT = 484,
    INTO = 485,
    INTRINSIC = 486,
    INVALID = 487,
    INVALID_KEY = 488,
    IS = 489,
    I_O = 490,
    I_O_CONTROL = 491,
    JUSTIFIED = 492,
    KEPT = 493,
    KEY = 494,
    KEYBOARD = 495,
    LABEL = 496,
    LAST = 497,
    LEADING = 498,
    LEFT = 499,
    LEFTLINE = 500,
    LENGTH = 501,
    LENGTH_OF = 502,
    LESS = 503,
    LESS_OR_EQUAL = 504,
    LIMIT = 505,
    LIMITS = 506,
    LINAGE = 507,
    LINAGE_COUNTER = 508,
    LINE = 509,
    LINE_COUNTER = 510,
    LINE_LIMIT = 511,
    LINES = 512,
    LINKAGE = 513,
    LITERAL = 514,
    LOCALE = 515,
    LOCALE_DATE_FUNC = 516,
    LOCALE_TIME_FUNC = 517,
    LOCALE_TIME_FROM_FUNC = 518,
    LOCAL_STORAGE = 519,
    LOCK = 520,
    LOWER = 521,
    LOWER_CASE_FUNC = 522,
    LOWLIGHT = 523,
    LOW_VALUE = 524,
    MANUAL = 525,
    MEMORY = 526,
    MERGE = 527,
    MINUS = 528,
    MNEMONIC_NAME = 529,
    MODE = 530,
    MOVE = 531,
    MULTIPLE = 532,
    MULTIPLY = 533,
    NAME = 534,
    NATIONAL = 535,
    NATIONAL_EDITED = 536,
    NATIONAL_OF_FUNC = 537,
    NATIVE = 538,
    NEAREST_AWAY_FROM_ZERO = 539,
    NEAREST_EVEN = 540,
    NEAREST_TOWARD_ZERO = 541,
    NEGATIVE = 542,
    NEW = 543,
    NEXT = 544,
    NEXT_GROUP = 545,
    NEXT_PAGE = 546,
    NO = 547,
    NO_ECHO = 548,
    NORMAL = 549,
    NOT = 550,
    NOT_END = 551,
    NOT_EOP = 552,
    NOT_EQUAL = 553,
    NOT_EXCEPTION = 554,
    NOT_INVALID_KEY = 555,
    NOT_OVERFLOW = 556,
    NOT_SIZE_ERROR = 557,
    NO_ADVANCING = 558,
    NUMBER = 559,
    NUMBERS = 560,
    NUMERIC = 561,
    NUMERIC_EDITED = 562,
    NUMVALC_FUNC = 563,
    OBJECT_COMPUTER = 564,
    OCCURS = 565,
    OF = 566,
    OFF = 567,
    OMITTED = 568,
    ON = 569,
    ONLY = 570,
    OPEN = 571,
    OPTIONAL = 572,
    OR = 573,
    ORDER = 574,
    ORGANIZATION = 575,
    OTHER = 576,
    OUTPUT = 577,
    OVERLINE = 578,
    PACKED_DECIMAL = 579,
    PADDING = 580,
    PAGE = 581,
    PAGE_COUNTER = 582,
    PARAGRAPH = 583,
    PERFORM = 584,
    PH = 585,
    PF = 586,
    PICTURE = 587,
    PICTURE_SYMBOL = 588,
    PLUS = 589,
    POINTER = 590,
    POSITION = 591,
    POSITIVE = 592,
    PRESENT = 593,
    PREVIOUS = 594,
    PRINTER = 595,
    PRINTING = 596,
    PROCEDURE = 597,
    PROCEDURES = 598,
    PROCEED = 599,
    PROGRAM = 600,
    PROGRAM_ID = 601,
    PROGRAM_NAME = 602,
    PROGRAM_POINTER = 603,
    PROHIBITED = 604,
    PROMPT = 605,
    QUOTE = 606,
    RANDOM = 607,
    RD = 608,
    READ = 609,
    READY_TRACE = 610,
    RECORD = 611,
    RECORDING = 612,
    RECORDS = 613,
    RECURSIVE = 614,
    REDEFINES = 615,
    REEL = 616,
    REFERENCE = 617,
    REFERENCES = 618,
    RELATIVE = 619,
    RELEASE = 620,
    REMAINDER = 621,
    REMOVAL = 622,
    RENAMES = 623,
    REPLACE = 624,
    REPLACING = 625,
    REPORT = 626,
    REPORTING = 627,
    REPORTS = 628,
    REPOSITORY = 629,
    REPO_FUNCTION = 630,
    REQUIRED = 631,
    RESERVE = 632,
    RESET = 633,
    RESET_TRACE = 634,
    RETRY = 635,
    RETURN = 636,
    RETURNING = 637,
    REVERSE_FUNC = 638,
    REVERSE_VIDEO = 639,
    REVERSED = 640,
    REWIND = 641,
    REWRITE = 642,
    RF = 643,
    RH = 644,
    RIGHT = 645,
    ROLLBACK = 646,
    ROUNDED = 647,
    RUN = 648,
    SAME = 649,
    SCREEN = 650,
    SCREEN_CONTROL = 651,
    SCROLL = 652,
    SD = 653,
    SEARCH = 654,
    SECONDS = 655,
    SECTION = 656,
    SECURE = 657,
    SEGMENT_LIMIT = 658,
    SELECT = 659,
    SEMI_COLON = 660,
    SENTENCE = 661,
    SEPARATE = 662,
    SEQUENCE = 663,
    SEQUENTIAL = 664,
    SET = 665,
    SHARING = 666,
    SIGN = 667,
    SIGNED = 668,
    SIGNED_INT = 669,
    SIGNED_LONG = 670,
    SIGNED_SHORT = 671,
    SIZE = 672,
    SIZE_ERROR = 673,
    SORT = 674,
    SORT_MERGE = 675,
    SOURCE = 676,
    SOURCE_COMPUTER = 677,
    SPACE = 678,
    SPECIAL_NAMES = 679,
    STANDARD = 680,
    STANDARD_1 = 681,
    STANDARD_2 = 682,
    START = 683,
    STATIC = 684,
    STATUS = 685,
    STDCALL = 686,
    STEP = 687,
    STOP = 688,
    STRING = 689,
    SUBSTITUTE_FUNC = 690,
    SUBSTITUTE_CASE_FUNC = 691,
    SUBTRACT = 692,
    SUM = 693,
    SUPPRESS = 694,
    SYMBOLIC = 695,
    SYNCHRONIZED = 696,
    SYSTEM_DEFAULT = 697,
    SYSTEM_OFFSET = 698,
    TAB = 699,
    TALLYING = 700,
    TAPE = 701,
    TERMINATE = 702,
    TEST = 703,
    THAN = 704,
    THEN = 705,
    THRU = 706,
    TIME = 707,
    TIMEOUT = 708,
    TIMES = 709,
    TO = 710,
    TOK_AMPER = 711,
    TOK_CLOSE_PAREN = 712,
    TOK_COLON = 713,
    TOK_DIV = 714,
    TOK_DOT = 715,
    TOK_EQUAL = 716,
    TOK_FALSE = 717,
    TOK_FILE = 718,
    TOK_GREATER = 719,
    TOK_INITIAL = 720,
    TOK_LESS = 721,
    TOK_MINUS = 722,
    TOK_MUL = 723,
    TOK_NULL = 724,
    TOK_OVERFLOW = 725,
    TOK_OPEN_PAREN = 726,
    TOK_PLUS = 727,
    TOK_TRUE = 728,
    TOP = 729,
    TOWARD_GREATER = 730,
    TOWARD_LESSER = 731,
    TRAILING = 732,
    TRANSFORM = 733,
    TRIM_FUNC = 734,
    TRUNCATION = 735,
    TYPE = 736,
    UNDERLINE = 737,
    UNIT = 738,
    UNLOCK = 739,
    UNSIGNED = 740,
    UNSIGNED_INT = 741,
    UNSIGNED_LONG = 742,
    UNSIGNED_SHORT = 743,
    UNSTRING = 744,
    UNTIL = 745,
    UP = 746,
    UPDATE = 747,
    UPON = 748,
    UPON_ARGUMENT_NUMBER = 749,
    UPON_COMMAND_LINE = 750,
    UPON_ENVIRONMENT_NAME = 751,
    UPON_ENVIRONMENT_VALUE = 752,
    UPPER = 753,
    UPPER_CASE_FUNC = 754,
    USAGE = 755,
    USE = 756,
    USER = 757,
    USER_DEFAULT = 758,
    USER_FUNCTION_NAME = 759,
    USER_REPO_FUNCTION = 760,
    USING = 761,
    VALUE = 762,
    VARYING = 763,
    WAIT = 764,
    WHEN = 765,
    WHEN_COMPILED_FUNC = 766,
    WITH = 767,
    WORD = 768,
    WORDS = 769,
    WORKING_STORAGE = 770,
    WRITE = 771,
    YYYYDDD = 772,
    YYYYMMDD = 773,
    ZERO = 774,
    SHIFT_PREFER = 775
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 1337 "parser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8677

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  521
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  846
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1972
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2820

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   775

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1352,  1352,  1352,  1384,  1385,  1389,  1390,  1394,  1395,
    1399,  1399,  1422,  1429,  1436,  1442,  1443,  1444,  1448,  1449,
    1453,  1477,  1478,  1482,  1516,  1522,  1534,  1508,  1544,  1543,
    1581,  1613,  1614,  1621,  1622,  1625,  1626,  1630,  1639,  1648,
    1649,  1653,  1657,  1666,  1667,  1675,  1676,  1686,  1687,  1691,
    1692,  1693,  1694,  1695,  1702,  1701,  1714,  1715,  1718,  1719,
    1733,  1732,  1742,  1743,  1744,  1745,  1749,  1750,  1754,  1755,
    1756,  1757,  1761,  1768,  1775,  1782,  1793,  1797,  1801,  1805,
    1812,  1813,  1820,  1819,  1830,  1831,  1832,  1839,  1840,  1844,
    1848,  1860,  1864,  1865,  1870,  1873,  1880,  1885,  1896,  1909,
    1910,  1918,  1919,  1923,  1924,  1925,  1926,  1927,  1928,  1929,
    1930,  1931,  1932,  1933,  1934,  1942,  1941,  1969,  1979,  1992,
    2000,  2003,  2004,  2008,  2015,  2030,  2051,  2050,  2074,  2080,
    2086,  2092,  2098,  2104,  2114,  2118,  2125,  2129,  2134,  2133,
    2144,  2148,  2155,  2156,  2157,  2158,  2159,  2160,  2164,  2165,
    2172,  2187,  2190,  2197,  2205,  2209,  2220,  2240,  2248,  2259,
    2260,  2266,  2287,  2288,  2292,  2296,  2317,  2340,  2422,  2425,
    2434,  2453,  2469,  2487,  2505,  2522,  2538,  2539,  2546,  2547,
    2555,  2556,  2566,  2567,  2572,  2571,  2592,  2602,  2603,  2607,
    2608,  2609,  2610,  2611,  2612,  2613,  2614,  2615,  2616,  2617,
    2618,  2619,  2626,  2632,  2642,  2655,  2668,  2684,  2685,  2686,
    2687,  2690,  2691,  2697,  2698,  2702,  2706,  2707,  2712,  2715,
    2716,  2723,  2731,  2732,  2733,  2740,  2769,  2807,  2809,  2814,
    2824,  2835,  2842,  2844,  2845,  2851,  2851,  2858,  2863,  2868,
    2875,  2876,  2877,  2881,  2892,  2893,  2897,  2902,  2907,  2912,
    2923,  2934,  2944,  2949,  2970,  2971,  2975,  2975,  2979,  2984,
    3002,  3013,  3020,  3021,  3027,  3035,  3036,  3037,  3043,  3044,
    3045,  3052,  3053,  3057,  3058,  3064,  3092,  3093,  3094,  3095,
    3102,  3101,  3117,  3118,  3122,  3125,  3126,  3132,  3133,  3141,
    3142,  3150,  3151,  3155,  3175,  3174,  3191,  3198,  3202,  3208,
    3209,  3213,  3223,  3238,  3239,  3240,  3241,  3242,  3243,  3244,
    3245,  3246,  3253,  3260,  3260,  3260,  3266,  3286,  3320,  3351,
    3352,  3359,  3360,  3364,  3365,  3372,  3383,  3388,  3399,  3400,
    3404,  3405,  3411,  3422,  3440,  3441,  3445,  3446,  3447,  3451,
    3458,  3465,  3474,  3486,  3538,  3553,  3554,  3558,  3570,  3612,
    3614,  3613,  3629,  3632,  3632,  3650,  3651,  3653,  3657,  3659,
    3658,  3693,  3706,  3714,  3719,  3725,  3734,  3744,  3747,  3759,
    3760,  3761,  3762,  3766,  3770,  3774,  3778,  3782,  3786,  3790,
    3794,  3798,  3802,  3806,  3810,  3814,  3825,  3826,  3830,  3831,
    3835,  3836,  3837,  3841,  3842,  3846,  3872,  3876,  3885,  3889,
    3898,  3899,  3900,  3901,  3902,  3903,  3904,  3905,  3906,  3907,
    3908,  3909,  3910,  3911,  3918,  3942,  3970,  3973,  3982,  4007,
    4018,  4019,  4023,  4027,  4031,  4035,  4039,  4043,  4047,  4051,
    4055,  4059,  4063,  4067,  4071,  4076,  4081,  4085,  4089,  4097,
    4101,  4105,  4113,  4117,  4121,  4125,  4129,  4133,  4137,  4141,
    4145,  4153,  4161,  4165,  4169,  4173,  4177,  4181,  4189,  4190,
    4194,  4195,  4201,  4207,  4219,  4237,  4238,  4247,  4268,  4290,
    4291,  4295,  4296,  4299,  4300,  4306,  4307,  4314,  4315,  4322,
    4346,  4347,  4364,  4365,  4368,  4369,  4376,  4377,  4382,  4393,
    4404,  4411,  4413,  4414,  4426,  4437,  4466,  4465,  4474,  4475,
    4479,  4480,  4483,  4484,  4497,  4510,  4531,  4540,  4554,  4556,
    4555,  4575,  4577,  4576,  4592,  4594,  4593,  4604,  4605,  4612,
    4611,  4640,  4641,  4642,  4649,  4655,  4659,  4660,  4666,  4673,
    4674,  4675,  4679,  4686,  4687,  4691,  4701,  4741,  4751,  4761,
    4780,  4781,  4784,  4785,  4790,  4791,  4792,  4793,  4794,  4795,
    4807,  4818,  4829,  4840,  4851,  4861,  4862,  4867,  4866,  4887,
    4888,  4892,  4893,  4894,  4895,  4896,  4897,  4898,  4899,  4900,
    4901,  4902,  4903,  4904,  4905,  4906,  4907,  4911,  4918,  4922,
    4926,  4927,  4928,  4935,  4939,  4946,  4949,  4954,  4960,  4967,
    4970,  4975,  4979,  4987,  4994,  5003,  5008,  5013,  5026,  5034,
    5035,  5036,  5043,  5047,  5054,  5059,  5065,  5072,  5078,  5088,
    5092,  5099,  5100,  5104,  5108,  5112,  5116,  5120,  5128,  5131,
    5132,  5136,  5142,  5146,  5161,  5178,  5179,  5180,  5184,  5210,
    5225,  5228,  5230,  5234,  5238,  5242,  5249,  5269,  5273,  5274,
    5278,  5310,  5318,  5326,  5334,  5336,  5335,  5356,  5357,  5361,
    5362,  5367,  5369,  5368,  5425,  5443,  5444,  5448,  5452,  5456,
    5460,  5464,  5468,  5472,  5476,  5480,  5484,  5488,  5492,  5496,
    5500,  5504,  5508,  5512,  5517,  5521,  5525,  5530,  5535,  5540,
    5545,  5546,  5547,  5548,  5549,  5550,  5551,  5552,  5553,  5560,
    5565,  5574,  5575,  5579,  5580,  5585,  5588,  5592,  5600,  5603,
    5607,  5615,  5626,  5634,  5636,  5646,  5635,  5673,  5673,  5706,
    5710,  5709,  5723,  5722,  5742,  5743,  5748,  5755,  5757,  5761,
    5771,  5773,  5781,  5789,  5797,  5826,  5857,  5859,  5869,  5874,
    5901,  5903,  5902,  5939,  5940,  5944,  5945,  5946,  5963,  5964,
    5975,  5974,  6024,  6025,  6029,  6077,  6090,  6093,  6112,  6117,
    6111,  6130,  6130,  6160,  6167,  6168,  6169,  6170,  6171,  6172,
    6173,  6174,  6175,  6176,  6177,  6178,  6179,  6180,  6181,  6182,
    6183,  6184,  6185,  6186,  6187,  6188,  6189,  6190,  6191,  6192,
    6193,  6194,  6195,  6196,  6197,  6198,  6199,  6200,  6201,  6202,
    6203,  6204,  6205,  6206,  6207,  6208,  6209,  6210,  6211,  6212,
    6213,  6214,  6215,  6216,  6230,  6242,  6241,  6257,  6263,  6267,
    6271,  6276,  6281,  6286,  6291,  6295,  6299,  6303,  6307,  6312,
    6316,  6320,  6324,  6328,  6332,  6336,  6343,  6344,  6351,  6352,
    6356,  6357,  6361,  6362,  6363,  6364,  6365,  6369,  6373,  6374,
    6377,  6378,  6381,  6382,  6388,  6389,  6393,  6394,  6398,  6402,
    6408,  6412,  6416,  6420,  6424,  6428,  6432,  6436,  6440,  6444,
    6448,  6452,  6456,  6460,  6464,  6468,  6472,  6478,  6482,  6486,
    6490,  6494,  6498,  6502,  6509,  6510,  6514,  6518,  6536,  6535,
    6544,  6548,  6552,  6558,  6559,  6566,  6570,  6581,  6580,  6589,
    6593,  6605,  6606,  6614,  6613,  6622,  6623,  6627,  6633,  6633,
    6640,  6639,  6649,  6672,  6676,  6681,  6686,  6707,  6711,  6710,
    6727,  6728,  6733,  6741,  6765,  6767,  6771,  6780,  6793,  6796,
    6800,  6804,  6827,  6828,  6832,  6833,  6838,  6841,  6849,  6853,
    6861,  6865,  6876,  6875,  6883,  6887,  6898,  6897,  6905,  6910,
    6918,  6919,  6920,  6921,  6922,  6930,  6929,  6938,  6945,  6949,
    6959,  6970,  6988,  6987,  6996,  7000,  7004,  7009,  7017,  7021,
    7032,  7031,  7041,  7045,  7049,  7053,  7057,  7061,  7062,  7071,
    7073,  7072,  7080,  7089,  7096,  7100,  7104,  7108,  7118,  7120,
    7124,  7125,  7128,  7130,  7137,  7138,  7142,  7143,  7148,  7152,
    7156,  7160,  7164,  7168,  7172,  7176,  7180,  7184,  7188,  7192,
    7196,  7200,  7204,  7208,  7215,  7219,  7230,  7229,  7238,  7242,
    7246,  7250,  7254,  7261,  7265,  7276,  7275,  7284,  7303,  7302,
    7326,  7334,  7335,  7340,  7351,  7362,  7376,  7380,  7387,  7388,
    7393,  7402,  7411,  7416,  7425,  7426,  7431,  7493,  7494,  7495,
    7499,  7500,  7504,  7508,  7519,  7518,  7530,  7531,  7552,  7566,
    7588,  7610,  7630,  7653,  7654,  7662,  7661,  7670,  7681,  7680,
    7689,  7702,  7701,  7714,  7723,  7727,  7738,  7754,  7753,  7762,
    7766,  7770,  7777,  7781,  7792,  7791,  7799,  7807,  7808,  7812,
    7813,  7814,  7819,  7822,  7829,  7833,  7841,  7848,  7849,  7850,
    7851,  7852,  7853,  7854,  7859,  7862,  7872,  7871,  7879,  7886,
    7899,  7898,  7907,  7911,  7915,  7919,  7926,  7927,  7928,  7929,
    7936,  7935,  7949,  7959,  7968,  7969,  7973,  7974,  7975,  7976,
    7977,  7978,  7982,  7983,  7987,  7992,  7999,  8000,  8001,  8002,
    8003,  8007,  8035,  8038,  8045,  8049,  8059,  8058,  8071,  8070,
    8078,  8082,  8093,  8092,  8101,  8105,  8112,  8116,  8127,  8126,
    8134,  8155,  8179,  8180,  8181,  8182,  8186,  8187,  8191,  8192,
    8193,  8194,  8206,  8205,  8217,  8224,  8223,  8235,  8244,  8252,
    8259,  8263,  8276,  8283,  8295,  8298,  8303,  8307,  8318,  8325,
    8326,  8330,  8331,  8334,  8335,  8340,  8380,  8379,  8388,  8417,
    8418,  8422,  8426,  8430,  8434,  8441,  8442,  8446,  8450,  8453,
    8455,  8459,  8468,  8469,  8470,  8473,  8475,  8479,  8483,  8487,
    8495,  8496,  8500,  8501,  8505,  8509,  8519,  8530,  8529,  8537,
    8547,  8558,  8557,  8566,  8573,  8577,  8588,  8587,  8599,  8608,
    8611,  8615,  8619,  8626,  8630,  8640,  8652,  8651,  8660,  8664,
    8673,  8674,  8679,  8682,  8690,  8694,  8701,  8709,  8713,  8724,
    8723,  8737,  8738,  8739,  8740,  8741,  8742,  8746,  8747,  8751,
    8752,  8758,  8767,  8774,  8775,  8779,  8783,  8787,  8791,  8795,
    8799,  8803,  8807,  8816,  8820,  8829,  8838,  8839,  8843,  8852,
    8853,  8857,  8861,  8872,  8871,  8880,  8879,  8910,  8913,  8933,
    8934,  8937,  8938,  8946,  8947,  8952,  8957,  8967,  8983,  8988,
    8998,  9015,  9014,  9024,  9037,  9040,  9048,  9051,  9056,  9061,
    9069,  9070,  9071,  9072,  9073,  9074,  9078,  9086,  9087,  9091,
    9095,  9106,  9105,  9115,  9128,  9131,  9135,  9143,  9155,  9158,
    9165,  9166,  9167,  9168,  9175,  9174,  9183,  9190,  9191,  9195,
    9196,  9197,  9201,  9202,  9206,  9210,  9221,  9220,  9229,  9233,
    9237,  9244,  9248,  9258,  9269,  9270,  9277,  9276,  9284,  9292,
    9305,  9304,  9312,  9326,  9325,  9333,  9346,  9348,  9349,  9357,
    9356,  9365,  9373,  9374,  9379,  9380,  9385,  9392,  9393,  9398,
    9405,  9406,  9410,  9411,  9415,  9416,  9420,  9424,  9435,  9434,
    9443,  9444,  9445,  9446,  9447,  9451,  9478,  9481,  9493,  9503,
    9508,  9513,  9518,  9526,  9564,  9565,  9569,  9609,  9619,  9642,
    9643,  9644,  9645,  9649,  9658,  9664,  9674,  9705,  9714,  9715,
    9722,  9721,  9733,  9743,  9744,  9749,  9752,  9756,  9760,  9767,
    9768,  9772,  9773,  9777,  9781,  9793,  9796,  9797,  9806,  9807,
    9816,  9819,  9820,  9829,  9830,  9841,  9844,  9845,  9854,  9855,
    9867,  9870,  9872,  9882,  9883,  9895,  9896,  9900,  9901,  9902,
    9906,  9915,  9926,  9927,  9928,  9932,  9941,  9952,  9957,  9958,
    9967,  9968,  9979,  9983,  9993, 10000, 10007, 10007, 10018, 10019,
   10020, 10024, 10033, 10034, 10036, 10037, 10038, 10039, 10040, 10042,
   10043, 10044, 10045, 10046, 10047, 10049, 10050, 10051, 10053, 10054,
   10055, 10056, 10057, 10060, 10061, 10065, 10066, 10070, 10071, 10075,
   10076, 10080, 10084, 10090, 10094, 10100, 10101, 10102, 10106, 10107,
   10108, 10112, 10113, 10114, 10118, 10122, 10126, 10127, 10128, 10131,
   10132, 10142, 10154, 10163, 10179, 10188, 10204, 10219, 10220, 10225,
   10234, 10240, 10260, 10264, 10285, 10326, 10340, 10341, 10346, 10352,
   10353, 10358, 10370, 10371, 10372, 10379, 10390, 10391, 10395, 10403,
   10411, 10415, 10422, 10431, 10432, 10438, 10452, 10469, 10473, 10480,
   10481, 10482, 10489, 10493, 10500, 10501, 10502, 10503, 10504, 10508,
   10512, 10516, 10520, 10524, 10545, 10549, 10556, 10557, 10558, 10562,
   10563, 10564, 10565, 10566, 10570, 10574, 10581, 10582, 10586, 10587,
   10591, 10592, 10596, 10597, 10608, 10609, 10613, 10614, 10615, 10619,
   10620, 10621, 10628, 10629, 10633, 10634, 10638, 10639, 10640, 10646,
   10650, 10654, 10655, 10659, 10663, 10670, 10677, 10684, 10694, 10698,
   10705, 10715, 10725, 10735, 10748, 10752, 10760, 10768, 10772, 10782,
   10797, 10820, 10840, 10847, 10863, 10864, 10865, 10866, 10867, 10868,
   10872, 10876, 10893, 10897, 10904, 10905, 10906, 10907, 10908, 10909,
   10910, 10916, 10920, 10924, 10928, 10932, 10936, 10940, 10944, 10948,
   10952, 10956, 10960, 10967, 10968, 10972, 10973, 10974, 10978, 10979,
   10980, 10981, 10985, 10989, 10993, 11000, 11004, 11008, 11015, 11022,
   11029, 11039, 11046, 11056, 11063, 11073, 11077, 11090, 11094, 11109,
   11117, 11118, 11122, 11123, 11127, 11128, 11133, 11136, 11144, 11147,
   11154, 11156, 11157, 11161, 11162, 11166, 11167, 11168, 11173, 11176,
   11189, 11193, 11201, 11205, 11209, 11213, 11217, 11221, 11225, 11229,
   11236, 11237, 11243, 11244, 11245, 11246, 11247, 11248, 11249, 11250,
   11251, 11252, 11253, 11254, 11255, 11256, 11257, 11258, 11259, 11260,
   11261, 11262, 11263, 11264, 11265, 11266, 11267, 11268, 11269, 11270,
   11271, 11272, 11273, 11274, 11275, 11276, 11277, 11278, 11279, 11280,
   11281, 11282, 11283, 11284, 11285, 11286, 11287, 11288, 11289, 11290,
   11291, 11292, 11293, 11294, 11295, 11296, 11297, 11298, 11299, 11300,
   11301, 11302, 11303, 11304, 11305, 11306, 11307, 11308, 11309, 11310,
   11311, 11312, 11319, 11319, 11320, 11320, 11321, 11321, 11322, 11322,
   11323, 11323, 11324, 11324, 11325, 11325, 11326, 11326, 11327, 11327,
   11328, 11328, 11329, 11329, 11330, 11330, 11331, 11331, 11332, 11332,
   11333, 11333, 11334, 11334, 11335, 11335, 11335, 11336, 11336, 11337,
   11337, 11338, 11338, 11339, 11339, 11340, 11340, 11340, 11341, 11341,
   11342, 11342, 11342, 11343, 11343, 11343, 11344, 11344, 11345, 11345,
   11346, 11346, 11347, 11347, 11348, 11348, 11348, 11349, 11349, 11350,
   11350, 11351, 11351, 11351, 11352, 11352, 11352, 11352, 11353, 11353,
   11354, 11354, 11355, 11355, 11356, 11356, 11357, 11357, 11358, 11358,
   11359, 11359, 11360, 11360, 11360, 11361, 11361, 11362, 11362, 11363,
   11363, 11364, 11364, 11365, 11365, 11366, 11366, 11367, 11367, 11368,
   11368, 11368, 11369, 11369, 11370, 11370, 11371, 11371, 11372, 11372,
   11376, 11376, 11377, 11377, 11378, 11378, 11379, 11379, 11380, 11380,
   11381, 11381, 11382, 11382, 11383, 11383, 11384, 11384, 11385, 11385,
   11386, 11386, 11387, 11387, 11388, 11388, 11389, 11389, 11390, 11390,
   11391, 11391, 11392, 11392, 11395, 11396, 11397, 11401, 11401, 11402,
   11402, 11403, 11403, 11404, 11404, 11405, 11405, 11406, 11406, 11407,
   11407, 11408, 11408
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "ABSENT", "ACCEPT", "ACCESS",
  "ADD", "ADDRESS", "ADVANCING", "AFTER", "ALL", "ALLOCATE", "ALPHABET",
  "ALPHABETIC", "\"ALPHABETIC-LOWER\"", "\"ALPHABETIC-UPPER\"",
  "ALPHANUMERIC", "\"ALPHANUMERIC-EDITED\"", "ALSO", "ALTER", "ALTERNATE",
  "AND", "ANY", "ARE", "AREA", "\"ARGUMENT-NUMBER\"", "\"ARGUMENT-VALUE\"",
  "AS", "ASCENDING", "ASCII", "ASSIGN", "AT", "ATTRIBUTE", "AUTO",
  "AUTOMATIC", "\"AWAY-FROM-ZERO\"", "\"BACKGROUND-COLOR\"", "BASED",
  "BEFORE", "BELL", "BINARY", "\"BINARY-C-LONG\"", "\"BINARY-CHAR\"",
  "\"BINARY-DOUBLE\"", "\"BINARY-LONG\"", "\"BINARY-SHORT\"", "BLANK",
  "BLINK", "BLOCK", "BOTTOM", "BY", "\"BYTE-LENGTH\"", "CALL", "CANCEL",
  "CAPACITY", "CENTER", "CF", "CH", "CHAINING", "CHARACTER", "CHARACTERS",
  "CLASS", "CLASSIFICATION", "CLOSE", "CODE", "\"CODE-SET\"", "COLLATING",
  "COL", "COLS", "COLUMN", "COLUMNS", "COMMA", "\"COMMAND-LINE\"",
  "\"comma delimiter\"", "COMMIT", "COMMON", "COMP", "COMPUTE",
  "\"COMP-1\"", "\"COMP-2\"", "\"COMP-3\"", "\"COMP-4\"", "\"COMP-5\"",
  "\"COMP-6\"", "\"COMP-X\"", "\"FUNCTION CONCATENATE\"", "CONDITION",
  "CONFIGURATION", "CONSTANT", "CONTAINS", "CONTENT", "CONTINUE",
  "CONTROL", "CONTROLS", "CONVERSION", "CONVERTING", "COPY",
  "CORRESPONDING", "COUNT", "CRT", "\"CRT-UNDER\"", "CURRENCY",
  "\"FUNCTION CURRENT-DATE\"", "CURSOR", "CYCLE", "DATA", "DATE", "DAY",
  "\"DAY-OF-WEEK\"", "DE", "DEBUGGING", "\"DECIMAL-POINT\"",
  "DECLARATIVES", "DEFAULT", "DELETE", "DELIMITED", "DELIMITER",
  "DEPENDING", "DESCENDING", "DETAIL", "DISC", "DISK", "DISPLAY",
  "\"FUNCTION DISPLAY-OF\"", "DIVIDE", "DIVISION", "DOWN", "DUPLICATES",
  "DYNAMIC", "EBCDIC", "EC", "ELSE", "END", "\"END-ACCEPT\"",
  "\"END-ADD\"", "\"END-CALL\"", "\"END-COMPUTE\"", "\"END-DELETE\"",
  "\"END-DISPLAY\"", "\"END-DIVIDE\"", "\"END-EVALUATE\"",
  "\"END FUNCTION\"", "\"END-IF\"", "\"END-MULTIPLY\"", "\"END-PERFORM\"",
  "\"END PROGRAM\"", "\"END-READ\"", "\"END-RETURN\"", "\"END-REWRITE\"",
  "\"END-SEARCH\"", "\"END-START\"", "\"END-STRING\"", "\"END-SUBTRACT\"",
  "\"END-UNSTRING\"", "\"END-WRITE\"", "ENTRY", "ENVIRONMENT",
  "\"ENVIRONMENT-NAME\"", "\"ENVIRONMENT-VALUE\"", "EOL", "EOP", "EOS",
  "EQUAL", "ERASE", "ERROR", "ESCAPE", "EVALUATE", "\"EVENT STATUS\"",
  "EXCEPTION", "\"EXCEPTION CONDITION\"", "EXCLUSIVE", "EXIT",
  "\"Exponentiation operator\"", "EXTEND", "EXTERNAL", "FD",
  "\"FILE-CONTROL\"", "\"FILE-ID\"", "FILLER", "FINAL", "FIRST",
  "\"FLOAT-BINARY-128\"", "\"FLOAT-BINARY-32\"", "\"FLOAT-BINARY-64\"",
  "\"FLOAT-DECIMAL-16\"", "\"FLOAT-DECIMAL-34\"", "\"FLOAT-DECIMAL-7\"",
  "\"FLOAT-EXTENDED\"", "\"FLOAT-LONG\"", "\"FLOAT-SHORT\"", "FOOTING",
  "FOR", "\"FOREGROUND-COLOR\"", "FOREVER", "\"FUNCTION FORMATTED-DATE\"",
  "\"FUNCTION FORMATTED-DATETIME\"", "\"FUNCTION FORMATTED-TIME\"", "FREE",
  "FROM", "\"FROM CRT\"", "FULL", "FUNCTION", "\"FUNCTION-ID\"",
  "\"FUNCTION\"", "GENERATE", "GIVING", "GLOBAL", "GO", "GOBACK",
  "GREATER", "\"GREATER OR EQUAL\"", "GROUP", "HEADING", "HIGHLIGHT",
  "\"HIGH-VALUE\"", "ID", "IDENTIFICATION", "IF", "IGNORE", "IGNORING",
  "IN", "INDEX", "INDEXED", "INDICATE", "INITIALIZE", "INITIALIZED",
  "INITIATE", "INPUT", "\"INPUT-OUTPUT\"", "INSPECT", "INTO", "INTRINSIC",
  "INVALID", "\"INVALID KEY\"", "IS", "\"I-O\"", "\"I-O-CONTROL\"",
  "JUSTIFIED", "KEPT", "KEY", "KEYBOARD", "LABEL", "LAST", "LEADING",
  "LEFT", "LEFTLINE", "LENGTH", "\"LENGTH OF\"", "LESS",
  "\"LESS OR EQUAL\"", "LIMIT", "LIMITS", "LINAGE", "\"LINAGE-COUNTER\"",
  "LINE", "\"LINE-COUNTER\"", "\"LINE LIMIT\"", "LINES", "LINKAGE",
  "\"Literal\"", "LOCALE", "\"FUNCTION LOCALE-DATE\"",
  "\"FUNCTION LOCALE-TIME\"", "\"FUNCTION LOCALE-TIME-FROM-SECONDS\"",
  "\"LOCAL-STORAGE\"", "LOCK", "LOWER", "\"FUNCTION LOWER-CASE\"",
  "LOWLIGHT", "\"LOW-VALUE\"", "MANUAL", "MEMORY", "MERGE", "MINUS",
  "\"MNEMONIC NAME\"", "MODE", "MOVE", "MULTIPLE", "MULTIPLY", "NAME",
  "NATIONAL", "\"NATIONAL-EDITED\"", "\"FUNCTION NATIONAL-OF\"", "NATIVE",
  "\"NEAREST-AWAY-FROM-ZERO\"", "\"NEAREST-EVEN\"",
  "\"NEAREST-TOWARD-ZERO\"", "NEGATIVE", "NEW", "NEXT", "\"NEXT GROUP\"",
  "\"NEXT PAGE\"", "NO", "\"NO-ECHO\"", "NORMAL", "NOT", "\"NOT END\"",
  "\"NOT EOP\"", "\"NOT EQUAL\"", "\"NOT EXCEPTION\"",
  "\"NOT INVALID KEY\"", "\"NOT OVERFLOW\"", "\"NOT SIZE ERROR\"",
  "\"NO ADVANCING\"", "NUMBER", "NUMBERS", "NUMERIC", "\"NUMERIC-EDITED\"",
  "\"FUNCTION NUMVAL-C\"", "\"OBJECT-COMPUTER\"", "OCCURS", "OF", "OFF",
  "OMITTED", "ON", "ONLY", "OPEN", "OPTIONAL", "OR", "ORDER",
  "ORGANIZATION", "OTHER", "OUTPUT", "OVERLINE", "\"PACKED-DECIMAL\"",
  "PADDING", "PAGE", "\"PAGE-COUNTER\"", "PARAGRAPH", "PERFORM", "PH",
  "PF", "PICTURE", "\"PICTURE SYMBOL\"", "PLUS", "POINTER", "POSITION",
  "POSITIVE", "PRESENT", "PREVIOUS", "PRINTER", "PRINTING", "PROCEDURE",
  "PROCEDURES", "PROCEED", "PROGRAM", "\"PROGRAM-ID\"", "\"Program name\"",
  "\"PROGRAM-POINTER\"", "PROHIBITED", "PROMPT", "QUOTE", "RANDOM", "RD",
  "READ", "\"READY TRACE\"", "RECORD", "RECORDING", "RECORDS", "RECURSIVE",
  "REDEFINES", "REEL", "REFERENCE", "REFERENCES", "RELATIVE", "RELEASE",
  "REMAINDER", "REMOVAL", "RENAMES", "REPLACE", "REPLACING", "REPORT",
  "REPORTING", "REPORTS", "REPOSITORY", "\"Intrinsic function name\"",
  "REQUIRED", "RESERVE", "RESET", "\"RESET TRACE\"", "RETRY", "RETURN",
  "RETURNING", "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED",
  "REWIND", "REWRITE", "RF", "RH", "RIGHT", "ROLLBACK", "ROUNDED", "RUN",
  "SAME", "SCREEN", "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH",
  "SECONDS", "SECTION", "SECURE", "\"SEGMENT-LIMIT\"", "SELECT",
  "\"semi-colon\"", "SENTENCE", "SEPARATE", "SEQUENCE", "SEQUENTIAL",
  "SET", "SHARING", "SIGN", "SIGNED", "\"SIGNED-INT\"", "\"SIGNED-LONG\"",
  "\"SIGNED-SHORT\"", "SIZE", "\"SIZE ERROR\"", "SORT", "\"SORT-MERGE\"",
  "SOURCE", "\"SOURCE-COMPUTER\"", "SPACE", "\"SPECIAL-NAMES\"",
  "STANDARD", "\"STANDARD-1\"", "\"STANDARD-2\"", "START", "STATIC",
  "STATUS", "STDCALL", "STEP", "STOP", "STRING", "\"FUNCTION SUBSTITUTE\"",
  "\"FUNCTION SUBSTITUTE-CASE\"", "SUBTRACT", "SUM", "SUPPRESS",
  "SYMBOLIC", "SYNCHRONIZED", "\"SYSTEM-DEFAULT\"", "\"SYSTEM-OFFSET\"",
  "TAB", "TALLYING", "TAPE", "TERMINATE", "TEST", "THAN", "THEN", "THRU",
  "TIME", "TIMEOUT", "TIMES", "TO", "\"&\"", "\")\"", "\":\"", "\"/\"",
  "\".\"", "\"=\"", "\"FALSE\"", "\"FILE\"", "\">\"", "\"INITIAL\"",
  "\"<\"", "\"-\"", "\"*\"", "\"NULL\"", "\"OVERFLOW\"", "\"(\"", "\"+\"",
  "\"TRUE\"", "TOP", "\"TOWARD-GREATER\"", "\"TOWARD-LESSER\"", "TRAILING",
  "TRANSFORM", "\"FUNCTION TRIM\"", "TRUNCATION", "TYPE", "UNDERLINE",
  "UNIT", "UNLOCK", "UNSIGNED", "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"",
  "\"UNSIGNED-SHORT\"", "UNSTRING", "UNTIL", "UP", "UPDATE", "UPON",
  "\"UPON ARGUMENT-NUMBER\"", "\"UPON COMMAND-LINE\"",
  "\"UPON ENVIRONMENT-NAME\"", "\"UPON ENVIRONMENT-VALUE\"", "UPPER",
  "\"FUNCTION UPPER-CASE\"", "USAGE", "USE", "USER", "\"USER-DEFAULT\"",
  "\"User FUNCTION\"", "\"User FUNCTION name\"", "USING", "VALUE",
  "VARYING", "WAIT", "WHEN", "\"FUNCTION WHEN-COMPILED\"", "WITH",
  "\"Identifier\"", "WORDS", "\"WORKING-STORAGE\"", "WRITE", "YYYYDDD",
  "YYYYMMDD", "ZERO", "SHIFT_PREFER", "$accept", "start", "$@1",
  "nested_list", "nested_progs", "source_element", "simple_prog", "$@2",
  "program_definition", "program_mandatory", "function_definition",
  "nested_prog", "end_program", "end_mandatory", "end_function",
  "end_function_mandatory", "program_body", "$@3", "$@4", "$@5",
  "program_identification", "$@6", "function_identification",
  "program_name", "as_literal", "program_type", "program_type_clause",
  "_init_or_recurs", "environment_header", "configuration_header",
  "configuration_list", "configuration_paragraph",
  "source_computer_paragraph", "$@7", "source_computer_entry",
  "with_debugging_mode", "object_computer_paragraph", "$@8",
  "object_computer_entry", "object_clauses_list", "object_clauses",
  "object_computer_memory", "object_computer_sequence",
  "object_computer_segment", "object_computer_class", "locale_class",
  "computer_words", "repository_paragraph", "$@9", "repository_entry",
  "repository_list", "repository_name", "user_or_intrinsic",
  "_as_literal_intrinsic", "repository_name_list",
  "special_names_paragraph", "special_names_entry", "special_name_list",
  "special_name", "mnemonic_name_clause", "$@10", "mnemonic_choices",
  "special_name_mnemonic_on_off", "on_off_clauses", "on_off_clauses_1",
  "alphabet_name_clause", "@11", "alphabet_definition",
  "alphabet_literal_list", "alphabet_literal", "@12",
  "alphabet_also_sequence", "alphabet_lits", "space_or_zero",
  "symbolic_characters_clause", "sym_in_word", "symbolic_collection",
  "symbolic_chars_list", "symbolic_chars_phrase", "char_list",
  "integer_list", "class_name_clause", "class_item_list", "class_item",
  "locale_clause", "currency_sign_clause", "with_pic_symbol",
  "decimal_point_clause", "numeric_sign_clause", "cursor_clause",
  "crt_status_clause", "screen_control", "event_status",
  "input_output_header", "file_control_header", "i_o_control_header",
  "file_control_sequence", "file_control_entry", "$@13",
  "select_clause_sequence", "select_clause", "assign_clause",
  "device_name", "_line_adv_file", "_ext_clause", "assignment_name",
  "opt_assignment_name", "access_mode_clause", "access_mode",
  "alternative_record_key_clause", "suppress_clause",
  "collating_sequence_clause", "file_status_clause", "file_or_sort",
  "lock_mode_clause", "$@14", "lock_mode", "lock_with",
  "organization_clause", "organization", "padding_character_clause",
  "record_delimiter_clause", "record_key_clause", "_source_is",
  "split_key_list", "$@15", "split_key", "relative_key_clause",
  "reserve_clause", "no_or_integer", "sharing_clause", "sharing_option",
  "opt_i_o_control", "i_o_control_list", "i_o_control_clause",
  "same_clause", "same_option", "multiple_file_tape_clause", "$@16",
  "multiple_file_list", "multiple_file", "multiple_file_position",
  "data_division_header", "file_section_header",
  "file_description_sequence", "file_description",
  "file_description_entry", "$@17", "file_type",
  "file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "record_depending", "opt_from_integer", "opt_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "code_set_clause", "report_clause",
  "report_keyword", "rep_name_list", "working_storage_section", "$@18",
  "record_description_list", "$@19", "record_description_list_2",
  "data_description", "$@20", "level_number", "entry_name", "const_name",
  "const_global", "lit_or_length", "con_identifier", "fp32_usage",
  "fp64_usage", "fp128_usage", "pointer_len", "constant_entry",
  "constant_source", "data_description_clause_sequence",
  "data_description_clause", "redefines_clause", "external_clause",
  "as_extname", "global_clause", "picture_clause", "usage_clause", "usage",
  "float_usage", "double_usage", "sign_clause", "report_occurs_clause",
  "occurs_step", "occurs_clause", "occurs_to_integer",
  "occurs_from_integer", "occurs_depending", "capacity_in",
  "occurs_initialized", "occurs_keys", "occurs_key_list",
  "ascending_or_descending", "occurs_indexed", "occurs_index_list",
  "occurs_index", "justified_clause", "synchronized_clause",
  "_left_or_right", "blank_clause", "based_clause", "value_clause", "$@21",
  "value_item_list", "value_item", "false_is", "renames_clause",
  "any_length_clause", "local_storage_section", "$@22", "linkage_section",
  "$@23", "report_section", "$@24", "report_description_sequence",
  "report_description", "$@25", "report_description_options",
  "report_description_option", "control_clause", "control_field_list",
  "control_final_tag", "identifier_list", "control_identifier",
  "page_limit_clause", "page_line_column", "report_int_ident",
  "page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "report_group_description_list", "report_group_description_entry",
  "$@26", "report_group_options", "report_group_option", "type_clause",
  "type_option", "control_heading_final", "control_footing_final",
  "next_group_clause", "next_group_plus", "sum_clause_list",
  "reset_clause", "data_or_final", "present_when_condition",
  "present_absent", "page_or_id", "page_or_ids", "varying_clause",
  "line_clause", "line_keyword_clause", "line_clause_options",
  "line_clause_option", "number_is", "line_clause_integer",
  "column_clause", "col_keyword_clause", "_orientation",
  "_left_right_center", "col_or_plus", "column_integer_list",
  "column_integer", "source_clause", "group_indicate_clause",
  "report_usage_clause", "screen_section", "$@27",
  "opt_screen_description_list", "screen_description_list",
  "screen_description", "$@28", "screen_options", "screen_option",
  "plus_plus", "minus_minus", "screen_line_plus_minus",
  "screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "procedure_division", "$@29", "$@30", "$@31", "procedure_using_chaining",
  "$@32", "$@33", "procedure_param_list", "procedure_param",
  "procedure_type", "size_optional", "procedure_optional",
  "procedure_returning", "procedure_declaratives", "$@34",
  "procedure_list", "procedure", "section_header", "$@35",
  "opt_use_statement", "paragraph_header", "invalid_statement",
  "opt_segment", "statement_list", "@36", "@37", "statements", "$@38",
  "statement", "accept_statement", "$@39", "accept_body",
  "accp_identifier", "lines_or_number", "opt_at_line_column",
  "at_line_column", "line_number", "column_number", "opt_at_from",
  "opt_at_block", "opt_accp_attr", "accp_attrs", "accp_attr",
  "update_default", "end_accept", "add_statement", "$@40", "add_body",
  "add_to", "end_add", "allocate_statement", "$@41", "allocate_body",
  "allocate_returning", "alter_statement", "$@42", "alter_body",
  "alter_entry", "_proceed_to", "call_statement", "$@43", "call_body",
  "mnemonic_conv", "call_using", "$@44", "call_param_list", "call_param",
  "call_type", "call_returning", "return_give", "null_or_omitted",
  "call_on_exception", "call_not_on_exception", "end_call",
  "cancel_statement", "$@45", "cancel_body", "close_statement", "$@46",
  "close_body", "close_option", "compute_statement", "$@47",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@48", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "$@49", "display_body",
  "display_list", "$@50", "display_atom", "display_upon",
  "display_upon_crt", "crt_under", "with_clause", "with_no_adv_clause",
  "disp_attrs", "disp_attr", "end_display", "divide_statement", "$@51",
  "divide_body", "end_divide", "entry_statement", "$@52", "entry_body",
  "evaluate_statement", "$@53", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "opt_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@54", "exit_body",
  "exit_program_returning", "free_statement", "$@55", "free_body",
  "generate_statement", "$@56", "generate_body", "goto_statement", "$@57",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@58",
  "if_else_statements", "end_if", "initialize_statement", "$@59",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@60", "initiate_body", "inspect_statement",
  "$@61", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@62", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region",
  "inspect_before_after", "merge_statement", "$@63", "move_statement",
  "$@64", "move_body", "multiply_statement", "$@65", "multiply_body",
  "end_multiply", "open_statement", "$@66", "open_body", "open_mode",
  "open_sharing", "open_option", "perform_statement", "$@67",
  "perform_body", "$@68", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@69",
  "read_body", "read_into", "lock_phrases", "ignoring_lock",
  "advancing_lock_or_retry", "_retry_phrase", "retry_phrase",
  "retry_options", "_extended_with_lock", "extended_with_lock", "read_key",
  "read_handler", "end_read", "ready_statement", "release_statement",
  "$@70", "release_body", "reset_statement", "return_statement", "$@71",
  "return_body", "end_return", "rewrite_statement", "$@72", "rewrite_body",
  "_with_lock", "with_lock", "end_rewrite", "rollback_statement",
  "search_statement", "$@73", "search_body", "search_varying",
  "search_at_end", "search_whens", "search_when", "end_search",
  "set_statement", "$@74", "set_body", "on_or_off", "up_or_down",
  "set_environment", "set_attr", "set_attr_clause", "set_attr_one",
  "set_to", "set_up_down", "set_to_on_off_sequence", "set_to_on_off",
  "set_to_true_false_sequence", "set_to_true_false", "sort_statement",
  "$@75", "sort_body", "@76", "sort_key_list", "opt_key_list",
  "sort_duplicates", "sort_collating", "sort_input", "sort_output",
  "start_statement", "$@77", "start_body", "sizelen_clause", "start_key",
  "start_op", "disallowed_op", "not_equal_op", "end_start",
  "stop_statement", "$@78", "stop_returning", "_opt_status",
  "stop_literal", "string_statement", "$@79", "string_body",
  "string_item_list", "string_item", "opt_with_pointer", "end_string",
  "subtract_statement", "$@80", "subtract_body", "end_subtract",
  "suppress_statement", "_printing", "terminate_statement", "$@81",
  "terminate_body", "transform_statement", "$@82", "transform_body",
  "unlock_statement", "$@83", "unlock_body", "opt_record",
  "unstring_statement", "$@84", "unstring_body", "unstring_delimited",
  "unstring_delimited_list", "unstring_delimited_item", "unstring_into",
  "unstring_into_item", "unstring_into_delimiter", "unstring_into_count",
  "unstring_tallying", "end_unstring", "use_statement", "$@85",
  "use_phrase", "use_file_exception", "use_global",
  "use_file_exception_target", "use_debugging", "debugging_list",
  "debugging_target", "all_refs", "use_start_end", "program_start_end",
  "use_reporting", "use_exception", "use_ex_keyw", "write_statement",
  "$@86", "write_body", "from_option", "write_option", "before_or_after",
  "write_handler", "end_write", "on_accp_exception",
  "opt_on_accp_exception", "opt_not_on_accp_exception",
  "on_disp_exception", "opt_on_disp_exception",
  "opt_not_on_disp_exception", "on_size_error", "opt_on_size_error",
  "opt_not_on_size_error", "on_overflow", "opt_on_overflow",
  "opt_not_on_overflow", "return_at_end", "at_end", "at_end_clause",
  "not_at_end_clause", "at_eop", "at_eop_clause", "not_at_eop_clause",
  "invalid_key", "opt_invalid_key_sentence",
  "opt_not_invalid_key_sentence", "_opt_scroll_lines", "condition", "expr",
  "partial_expr", "$@87", "expr_tokens", "expr_token", "eq", "gt", "lt",
  "ge", "le", "exp_list", "e_sep", "exp", "exp_term", "exp_factor",
  "exp_unary", "exp_atom", "line_linage_page_counter", "arithmetic_x_list",
  "arithmetic_x", "record_name", "table_name", "file_name_list",
  "file_name", "report_name", "mnemonic_name_list", "mnemonic_name",
  "procedure_name_list", "procedure_name", "label", "integer_label",
  "reference_list", "reference", "single_reference", "opt_reference_list",
  "opt_reference", "reference_or_literal", "undefined_word", "unique_word",
  "target_x_list", "target_x", "x_list", "x", "report_x_list", "expr_x",
  "arith_x", "prog_or_entry", "alnum_or_id", "simple_value",
  "simple_all_value", "id_or_lit", "id_or_lit_or_func", "num_id_or_lit",
  "positive_id_or_lit", "pos_num_id_or_lit", "from_parameter",
  "sub_identifier", "sort_identifier", "sub_identifier_1", "identifier",
  "identifier_1", "target_identifier", "target_identifier_1",
  "qualified_word", "subref", "refmod", "integer", "symbolic_integer",
  "report_integer", "class_value", "literal", "basic_literal",
  "basic_value", "function", "func_no_parm", "func_one_parm",
  "func_multi_parm", "func_refmod", "func_args", "trim_args",
  "numvalc_args", "locale_dt_args", "formatted_datetime_args",
  "formatted_time_args", "not_const_word", "flag_all", "flag_duplicates",
  "flag_initialized", "flag_initialized_to", "to_init_val", "flag_next",
  "flag_not", "flag_optional", "flag_rounded", "round_mode",
  "round_choice", "flag_separate", "error_stmt_recover", "_advancing",
  "_after", "_are", "_area", "_as", "_at", "_binary", "_by", "_character",
  "_characters", "_contains", "_data", "_file", "_for", "_from", "_in",
  "_in_order", "_indicate", "_initial", "_into", "_is", "_is_are", "_key",
  "_line_or_lines", "_limits", "_lines", "_mode", "_new", "_number",
  "_numbers", "_of", "_on", "_on_for", "_onoff_status", "_other",
  "_procedure", "_program", "_record", "_right", "_sign", "_signed",
  "_sign_is", "_size", "_standard", "_status", "_tape", "_then", "_times",
  "_to", "_to_using", "_when", "_when_set_to", "_with", "rel_record",
  "coll_sequence", "column_or_col", "columns_or_cols", "column_or_cols",
  "comp_equal", "exception_or_error", "exception_or_overflow", "in_of",
  "label_option", "line_or_lines", "lock_records", "object_char_or_word",
  "records", "reel_or_unit", "scroll_line_or_lines", "size_or_length",
  "with_dups", "prog_coll_sequence", "detail_keyword", "ch_keyword",
  "cf_keyword", "ph_keyword", "pf_keyword", "rh_keyword", "rf_keyword",
  "control_keyword", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   718,   719,   720,   721,   722,   723,   724,
     725,   726,   727,   728,   729,   730,   731,   732,   733,   734,
     735,   736,   737,   738,   739,   740,   741,   742,   743,   744,
     745,   746,   747,   748,   749,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775
};
# endif

#define YYPACT_NINF -2495

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2495)))

#define YYTABLE_NINF -1917

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2495,   266,   571, -2495,   383,   446, -2495,   571, -2495, -2495,
     725, -2495, -2495,   725,   725,   -50,   -50, -2495,   649, -2495,
     915,   747,   978, -2495, -2495,  1138,  1138,   690,   810, -2495,
   -2495,    16,   725,   -50, -2495, -2495,  1120,   943, -2495, -2495,
     995,  2142,   -50, -2495, -2495, -2495,   747,  1006, -2495, -2495,
     413, -2495,   911,   911,  1008,  1121,  1262,  1262,  1262,  1124,
     911,  1130,  1088,  1101,  1262,  1112,  1116,  1524, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,   237, -2495, -2495, -2495, -2495,
    1384, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
    1437,  1188,    16, -2495, -2495,  1191,    68, -2495, -2495,  1262,
    1262, -2495,  1262,  1125,  1566,  1125,  1195,  1262,  1262, -2495,
   -2495,  1125, -2495, -2495, -2495,  1132,  1020,  1196, -2495, -2495,
    1153, -2495,  1207, -2495, -2495, -2495, -2495,  -155, -2495, -2495,
   -2495,  1325, -2495,  1262,   949,  1125,  1417,    -2, -2495, -2495,
   -2495, -2495, -2495,  1418,  1210,   566,  1485, -2495,  1186, -2495,
    1132, -2495,    65, -2495, -2495, -2495, -2495, -2495, -2495,  1209,
     -52,  1262,    -5, -2495, -2495, -2495,   529, -2495, -2495, -2495,
     273, -2495, -2495, -2495, -2495, -2495, -2495, -2495,   949, -2495,
    1239, -2495,   -78, -2495, -2495,  1125, -2495,  1291, -2495,  1293,
    1285,  1638,  1262, -2495, -2495, -2495,   605, -2495, -2495, -2495,
   -2495, -2495,   651,  1643,  1262,    48, -2495,    99, -2495, -2495,
     140, -2495, -2495, -2495, -2495,  1454,   -52, -2495,  1475,   911,
     911, -2495,  1209,  1263,    77,   594, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,   610,
   -2495,   142, -2495,   949, -2495, -2495,  1388, -2495, -2495, -2495,
    1262,  1316,  1478, -2495, -2495, -2495, -2495,   735,  1262,  1229,
    1513,   568, -2495,  1718,   583,  1288, -2495, -2495,  1294,  1641,
   -2495,  1454, -2495,   911, -2495, -2495, -2495, -2495, -2495, -2495,
    1295,  1441, -2495,   911, -2495,   714, -2495,   113, -2495, -2495,
   -2495, -2495, -2495,   610, -2495,  1500,  1478, -2495, -2495, -2495,
     533, -2495, -2495, -2495,  1501, -2495, -2495, -2495, -2495, -2495,
    1489, -2495, -2495, -2495, -2495, -2495,  1302, -2495, -2495, -2495,
    1744,  1666,  1312, -2495, -2495,   610, -2495, -2495,    31, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,  1329, -2495,
    1585,  1652,  1315, -2495,  1761, -2495, -2495, -2495, -2495,  2272,
   -2495,  1694, -2495,  1268,  1330,  1391, -2495,   610,  1523,  1443,
     766,  1397, -2495,  1408,  1262,  1759,   639,   -89,  1067, -2495,
    1307, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
    1392, -2495,  1558, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495,  1785,  1262, -2495,  1268, -2495,  1268, -2495, -2495,  1367,
      40, -2495, -2495,  1262, -2495,  1587, -2495, -2495,   837, -2495,
   -2495,  1029,  1262,  1262, -2495,  1262,  1262, -2495,  1744, -2495,
     141,  1262,  1523, -2495,  1421,  1319,  1268, -2495,  1498, -2495,
   -2495, -2495, -2495,  1320, -2495,  1326,    74,   298,  1262, -2495,
   -2495,   951, -2495, -2495, -2495,   -73,  1407,  1125,  1125, -2495,
    1517,  1517,  1526, -2495,  1125,  1262, -2495, -2495, -2495,  1478,
   -2495,  1446,  1579, -2495, -2495,  1389, -2495, -2495, -2495, -2495,
   -2495,  1125, -2495, -2495,   -36,   -36,  1836,   -36, -2495, -2495,
     -36,    17, -2495, -2495, -2495, -2495,   715, -2495, -2495, -2495,
   -2495, -2495, -2495,   626, -2495,  1390,  1451,  1593,   603,  1393,
    5588, -2495,  1341, -2495, -2495,   309, -2495, -2495, -2495, -2495,
    1302, -2495, -2495, -2495, -2495, -2495,  1262, -2495, -2495,  1344,
   -2495,  1344, -2495, -2495,  1398,  1456,  1488, -2495,  1400, -2495,
    1401, -2495,  1774, -2495,  1775, -2495,  1208, -2495,  1740, -2495,
    1430, -2495, -2495, -2495,  1125,  1125,   618, -2495, -2495,  1326,
   -2495,  1410,  1470,  1481, -2495, -2495, -2495,  1041,  1694,  1262,
    1212,  1212,  1262,    27,  1523,  1262,  1850, -2495,  1568, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,   911,
    1113, -2495,     1,  1371, -2495, -2495, -2495, -2495,  1563, -2495,
   -2495,  1326, -2495,  1420,  1484, -2495,  6960,   687,  1676,  1478,
    1373,   675,   675,  1374,   546,   -73,  1478,  1381,  1262, -2495,
   -2495, -2495,   -45,   911, -2495, -2495, -2495,  1430,    76,   930,
   -2495,  1326, -2495,  1432,   815,   836, -2495, -2495,  -196,  -193,
    -172,   407,   613,  1380, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495,  1503, -2495,    63, -2495, -2495, -2495, -2495,  1125,  1125,
    1661, -2495, -2495, -2495,   601, -2495, -2495, -2495,  1262,   675,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,  1161,   -21,
   -2495,  1385, -2495,    80, -2495,  1445, -2495, -2495, -2495, -2495,
    1374, -2495, -2495, -2495, -2495,  1640,    50,  1681,  1394,  1262,
   -2495, -2495,  1262, -2495, -2495,   265, -2495, -2495, -2495,  1224,
   -2495, -2495, -2495, -2495, -2495, -2495,  1777, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495,  1399, -2495, -2495,  1852,  1449, -2495,  1439,
    1457, -2495, -2495, -2495, -2495,  7165,   265,  1884, -2495,  1506,
    1506, -2495,  1318,  1605, -2495,  1158,  1158, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,  1463, -2495,  1478,   114, -2495,
   -2495, -2495,  1478, -2495, -2495,  1505, -2495,    96,    96, -2495,
   -2495,  1570,  1411,    22,  4022,  2908, -2495,  1681,  1723,  1478,
    1471,  7734,  1455, -2495,  1125, -2495,   265, -2495,  1476,  1670,
   -2495,  1759, -2495, -2495, -2495, -2495,  1158,  1479, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495,  1318, -2495, -2495, -2495, -2495,    38,  1524, -2495,    55,
   -2495, -2495, -2495, -2495,  1422, -2495,  4535, -2495, -2495,  1411,
    1480, -2495, -2495,  1548,  4755, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495,   563, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495,  1525, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495,   564, -2495, -2495,  1595,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495,  1428,  1478,  1449,
   -2495, -2495,  1825, -2495, -2495, -2495,  1472,  1473,  1474,  8158,
      -2,    -2,  1477,  1483,  1490, -2495,  1491,    -2, -2495, -2495,
   -2495,  8016,  7734,  8016,  1493, -2495,  1474, -2495,   117,  1014,
    1019, -2495,  1778, -2495, -2495, -2495, -2495, -2495,  1463, -2495,
    1499,  1502,  1508,  7734, -2495, -2495,   374, -2495,   265, -2495,
   -2495, -2495, -2495, -2495,   -73,   -73, -2495, -2495, -2495, -2495,
    1756, -2495, -2495,  1445,  1478, -2495, -2495,  1487, -2495,  1492,
   -2495,   107,   107,  1436,  1496, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495,  -114,  5096,  7734,   392,
     656,   419,  1268,  1494,   518,  6408,  6511,  1706,   376,   638,
    1494,  1125,  1514, -2495, -2495,  6511, -2495, -2495,  1494,  1422,
    1968,  1125,  5592,  6511, -2495,   800,  3169,  1268,  1125,  1268,
    1125,    92,   589,  1125,  1268, -2495, -2495, -2495, -2495, -2495,
   -2495,  5711,  5855, -2495, -2495,  1422,    57,  1125,  1268,  2504,
    1125, -2495, -2495,  1726,  1654, -2495,  7734,  7734,  7267, -2495,
   -2495,  1463, -2495,  1461,  1462,  7734,  7734,  7734,  8158,  1464,
   -2495,  1035, -2495,  8158, -2495, -2495, -2495, -2495,  7734,  7370,
    7734,  7734,  7734,  7734,  7734,  7734, -2495,  8158,  7734,  1014,
    1572, -2495,  1521, -2495, -2495, -2495,  1953,  1524, -2495,   434,
   -2495, -2495, -2495, -2495,   255, -2495,  -212,   456,   280, -2495,
   -2495, -2495,  1855,   860,  1791,  1605,  1125,  8158, -2495,  1856,
   -2495,  5958, -2495, -2495, -2495, -2495, -2495,   171,   645, -2495,
     392, -2495,  1536, -2495,    -2, -2495, -2495, -2495, -2495,  1857,
    2504, -2495,   419, -2495, -2495,  1268,  1012,  1605,  1859, -2495,
    1000, -2495,  1601, -2495, -2495,  1439,  1463,  1268,  1860,  1642,
    1178,  1861,  5981, -2495,  6116,   109,  1185,  1223,  1862,   129,
    1512, -2495, -2495, -2495,  1863,    41, -2495, -2495, -2495,  5240,
   -2495, -2495,  1896,   563, -2495, -2495, -2495,  1494, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,  1552, -2495, -2495,  1261,  1422,
   -2495, -2495,   334, -2495, -2495, -2495, -2495, -2495, -2495,  1533,
    6511, -2495,  1550,  1865,  1956, -2495, -2495, -2495, -2495,   800,
    1600, -2495,  1560, -2495,  3368,   -14,   720,  1561,  1565, -2495,
    -191, -2495,  1573,  1879,   956, -2495,  1828, -2495,  1880,  1642,
    1881,  1828,  1125,  1882,  1529, -2495,   887, -2495, -2495, -2495,
   -2495, -2495, -2495,  1758, -2495,  1494, -2495,   487, -2495,  1123,
    2002, -2495,    73, -2495,  1888,   948,   531,  1989,  1889,  3231,
   -2495, -2495,  1125,  1890,  6250,  1422, -2495, -2495,   476, -2495,
   -2495, -2495, -2495,  4268, -2495,  1843, -2495,  1237, -2495,  1891,
    1928,  1892,  1828, -2495, -2495, -2495,  1125,  1823,   206,   218,
    1022,  1590,   244,  1591, -2495,   269, -2495, -2495,   338,  1592,
    1594,  1597,   314, -2495,  1463, -2495,  1598, -2495, -2495,   319,
    1599,  1022, -2495,  1118,  1019,  1019, -2495, -2495, -2495,  1059,
    1602,   341,  1603,  1262, -2495,   -73,  1933,  1604,   320,  7090,
   -2495,  1262,  1635,  1745, -2495, -2495,  1945, -2495, -2495,   887,
    1864, -2495,   845,  2405,   -17,  1606, -2495,  1463, -2495, -2495,
   -2495,  6598,  1866, -2495,  1840, -2495,  1684, -2495,  1724,  1808,
   -2495, -2495,  1512, -2495,  1012, -2495, -2495, -2495,  1036,    -6,
    1125, -2495, -2495, -2495, -2495, -2495,  7734,  1794, -2495,  1455,
   -2495,  1268, -2495, -2495, -2495,  1693, -2495, -2495, -2495,  6511,
   -2495,  1773,    42,  1771,  1692,  1582,  1909,  1909,  1909,  1909,
   -2495, -2495,  6511,  6598, -2495, -2495, -2495, -2495,   376,   172,
   -2495,  1569, -2495,  1571, -2495, -2495, -2495, -2495,  1514, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
    4961, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495,    10, -2495,  1947,   891,  1902, -2495,   887,    64, -2495,
   -2495,  1712, -2495, -2495,    94,  7734, -2495,  1628,  1494, -2495,
   -2495,  6598,  1600,  1307,  1268, -2495, -2495, -2495, -2495, -2495,
    1913,  1125,   392, -2495,  1327, -2495, -2495, -2495, -2495,  1642,
    1968, -2495, -2495, -2495,  1867, -2495, -2495,  1693,  1955, -2495,
   -2495,  1125,  1955,  1630, -2495,  1463, -2495, -2495,   971,  1209,
   -2495, -2495,   972, -2495,  2040,   808,    81, -2495, -2495, -2495,
    1262, -2495,  -102,  6511, -2495,    43,  6385, -2495, -2495,  1125,
   -2495,  1894, -2495, -2495,  6598, -2495,  1478, -2495, -2495,   887,
   -2495, -2495, -2495, -2495, -2495,  1989,  1868, -2495, -2495,  1327,
    1823, -2495,  1989, -2495, -2495, -2495,  1587,  7408,  1499,  7555,
    1499, -2495,  1125,  1499,  1499,  1499,  8158, -2495,   162,  1499,
   -2495,  7696,  1499,  1499, -2495,   265, -2495,  1654, -2495, -2495,
    1262,   675,   675,  1015, -2495, -2495, -2495, -2495,  1887,   -37,
   -2495,  1262, -2495,   427, -2495, -2495, -2495,  1442,  1262,  1968,
   -2495, -2495, -2495,  1790, -2495,  1478, -2495,  2036, -2495, -2495,
   -2495,  1125, -2495, -2495,  1125, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495,  1893,  1790,   636,  1262, -2495,  1583,
    1644, -2495, -2495, -2495,  1827,  1790,  1790,   684,  1846,  1790,
   -2495,  1935, -2495, -2495, -2495,  1588,  1596, -2495,   887,  1935,
    1869,  1677,  1810, -2495, -2495,  1833, -2495, -2495, -2495, -2495,
   -2495, -2495,   421, -2495,  1125,  1605,  1910,  1497, -2495,   -53,
     -58,  1494,  1662,  1684,  1494, -2495,  1664,   392, -2495,   563,
   -2495, -2495,  1730,  1753, -2495,   737,  1262, -2495, -2495, -2495,
    1450,  1895, -2495, -2495, -2495, -2495, -2495,  2090, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,  1909,  1262, -2495,   575, -2495,
   -2495,  1504,  1262, -2495, -2495, -2495, -2495,    45, -2495,   892,
   -2495,  1218,  1827, -2495, -2495, -2495, -2495,  1917,  1497,  1919,
     123, -2495, -2495, -2495, -2495,  2107, -2495,  1675,   145, -2495,
   -2495,   172, -2495, -2495, -2495, -2495,  1654, -2495, -2495, -2495,
    1998,  1988,  1514, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
    1762,  1514, -2495,  1680, -2495,  2081, -2495, -2495, -2495,  1359,
   -2495,   887,  1419, -2495,    83,   206,    -1,  1494,  1494,  1497,
    1929,  1268,   141,   769,  1992, -2495, -2495, -2495,  2128, -2495,
    1940, -2495, -2495, -2495, -2495,  1867, -2495, -2495, -2495, -2495,
    1125,  2007,   -62, -2495,  1631, -2495,  1632,   887,   615, -2495,
     421, -2495, -2495, -2495,  6511,  1209,  1209,  1209,  1209,  1209,
    1209,  1209,  1209,   808, -2495,   511,  1895,   493, -2495,  1710,
    1710, -2495, -2495,   437,  1125,  1497,  1938,  1685, -2495,  1689,
    2136,  1125,  -146,  1693,  2140, -2495,  1636,  1262, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495,  1177, -2495, -2495, -2495,  1125,   419, -2495, -2495,   675,
     675,  -113,  1411, -2495, -2495, -2495,  1125,  1125, -2495, -2495,
     406, -2495, -2495, -2495, -2495,   406, -2495, -2495,  1262,  1471,
    1262, -2495, -2495, -2495,  1262, -2495, -2495, -2495,   223, -2495,
   -2495, -2495,  1262,  1639,   406,   406, -2495, -2495,   406, -2495,
   -2495,  1851, -2495, -2495,  1935, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495,  1601,   -17, -2495, -2495,  1853,   186,  1948,
    1497,   225, -2495, -2495, -2495, -2495, -2495,    19,   151, -2495,
   -2495, -2495,   713, -2495,  7734, -2495, -2495,  1858, -2495, -2495,
   -2495,   406, -2495, -2495, -2495, -2495,   406,   488,   488, -2495,
   -2495, -2495, -2495, -2495,  1645,  1494, -2495,  1494,  2683, -2495,
     371,     9,   172, -2495, -2495, -2495,  2107,  1125, -2495, -2495,
   -2495, -2495,  1653,  1247,   270,  1658,   225,   887, -2495, -2495,
    2102, -2495, -2495, -2495, -2495,  1419, -2495,  1975, -2495,  1262,
    1587,  1848, -2495, -2495,  1494, -2495,  1494,   769, -2495, -2495,
   -2495,  1046, -2495, -2495,  1125,  6511,    85, -2495, -2495, -2495,
    1872,  1895, -2495,  1106, -2495, -2495, -2495, -2495,  1632, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495,   -39, -2495,  1125, -2495, -2495, -2495,   964, -2495, -2495,
   -2495,  7734, -2495,  6511,  6511,  1699,  1824,  1601, -2495,  1494,
   -2495,   225, -2495,  1854, -2495,   887, -2495,  2057,  1731, -2495,
     -62, -2495,   851, -2495,  1636, -2495,  1125, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,  1216, -2495, -2495,   -43, -2495,
    1125, -2495, -2495, -2495, -2495, -2495, -2495,   517, -2495,   419,
     517, -2495, -2495, -2495,    69,  2127,  3196,  1935, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,  1760,  1972, -2495, -2495, -2495,
    1974, -2495, -2495, -2495, -2495, -2495, -2495,  1885, -2495,  1605,
   -2495, -2495, -2495, -2495,  1125, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495,   842, -2495, -2495, -2495,  3808, -2495,
   -2495, -2495,  1332, -2495, -2495, -2495,  1692, -2495,  1497,  1814,
    1497,  1815, -2495, -2495,  6511, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495,  1247, -2495,  2078, -2495,  1514, -2495,
   -2495, -2495,   225,  1353, -2495, -2495,  1353,   -74,  1125, -2495,
   -2495,  1497, -2495, -2495,  1799, -2495,  2138,  1654,  1921,  1951,
   -2495,   597, -2495, -2495, -2495,   628, -2495, -2495, -2495, -2495,
   -2495,  1930, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495,  1022, -2495, -2495, -2495, -2495, -2495,  1897,  1262,  1760,
    1497,  1695, -2495,  2136, -2495,  1681,  2099,  1681,  1699,   961,
   -2495, -2495,  1340, -2495,  1125, -2495,  1287, -2495, -2495,  -113,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,   406, -2495,
   -2495, -2495,   406,    -7, -2495, -2495,  1262, -2495, -2495, -2495,
   -2495,  1262, -2495, -2495, -2495, -2495, -2495,    -4, -2495, -2495,
    2143, -2495, -2495,   120, -2495, -2495,  2192, -2495, -2495, -2495,
    3196, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
    1125, -2495, -2495, -2495, -2495, -2495, -2495, -2495,  1692, -2495,
    1494, -2495,  1494, -2495, -2495, -2495,  2154,  2092,  1353,  1353,
   -2495,  1741,  1741, -2495,  1870,  1268,   697, -2495,  1125, -2495,
   -2495,  6511,  1942, -2495,  1262,    60, -2495, -2495,   661,  1943,
    1944, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,  1125,
   -2495, -2495, -2495, -2495,  1750, -2495,  1125,  1681, -2495,  1125,
   -2495, -2495, -2495, -2495, -2495,  1914, -2495, -2495, -2495, -2495,
   -2495, -2495,  1308,  1262,  1262,  1193,  1262, -2495, -2495, -2495,
   -2495, -2495, -2495,  1615, -2495, -2495, -2495,  2101,   406,   406,
   -2495,  1262,   488,   488, -2495,  -113, -2495, -2495, -2495,  1760,
    1760,  6511, -2495,  1353, -2495,  6511,  6511,  1262,  1268,  1268,
    1873, -2495, -2495,  1728, -2495,  1125, -2495, -2495,  1872, -2495,
   -2495, -2495, -2495, -2495, -2495,   659, -2495, -2495,  1125, -2495,
   -2495, -2495, -2495, -2495, -2495,  1262,  -113,  -113, -2495,  2004,
    1262,  1262,  -113, -2495,  2124,  1754, -2495, -2495,   419, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,   392,
    1268,  1262, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
    1366, -2495, -2495, -2495, -2495, -2495,  1876,  2114, -2495,  -113,
   -2495, -2495, -2495,  -113,  -113, -2495, -2495,  2005,  1932,  1262,
    1478, -2495,  1262,  1605, -2495,  1262,  1262,  1125, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,    88,
   -2495, -2495,   844, -2495,   449, -2495, -2495, -2495, -2495, -2495,
    1251, -2495, -2495, -2495,   392, -2495,  1874,  1800,     2,  1654,
   -2495, -2495, -2495, -2495, -2495,  1999, -2495,   463,  1449,  8142,
    8142,  1396,  2110,  2041,  1946,  1946,  1387, -2495,   -82,   -82,
   -2495,   844, -2495, -2495,  1949, -2495, -2495,   -82,   -82, -2495,
   -2495, -2495,   423, -2495,  1125, -2495,  1084, -2495, -2495, -2495,
      62, -2495, -2495,  1478,  1478, -2495, -2495,  1471,  1601,  7881,
   -2495, -2495,    89,  1141, -2495, -2495,  1187, -2495, -2495, -2495,
   -2495,   676,   676, -2495, -2495, -2495, -2495, -2495,  8142, -2495,
     482,   482,  1946,  1946, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495,   675, -2495, -2495, -2495, -2495,  1900,
    1047,    62, -2495, -2495, -2495, -2495,  1825, -2495,  1654,  1125,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,   -20,
      91,  2188, -2495, -2495, -2495,   482, -2495, -2495,  1918,  1922,
   -2495, -2495,  1654, -2495, -2495,  1936,  1125, -2495,  1817,   -13,
   -2495, -2495, -2495,  1934, -2495, -2495, -2495, -2495,  8142, -2495,
   -2495, -2495,   -11, -2495, -2495,  1478, -2495, -2495, -2495, -2495,
    1924, -2495, -2495, -2495, -2495, -2495, -2495,  1268, -2495, -2495
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,    10,     1,     0,     0,     3,     5,     6,     4,
      43,     8,     9,    43,    43,     0,     0,     7,     0,    11,
      45,    15,    21,    32,    31,    33,    33,     0,     0,    47,
      16,    18,    43,     0,    14,    22,     0,     0,    28,    44,
       0,   176,     0,    17,    12,    19,    15,     0,    34,    30,
    1843,    46,     0,     0,     0,  1888,  1843,  1843,  1843,     0,
       0,     0,     0,     0,  1843,     0,     0,  1820,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     151,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     178,     0,     0,    23,  1844,     0,     0,  1565,   126,  1843,
    1843,  1889,  1843,     0,     0,     0,     0,  1843,  1843,    60,
      82,     0,    54,    98,  1821,     0,  1843,     0,    99,   102,
       0,   150,     0,   182,    20,    13,    29,    37,    40,    42,
      41,  1882,    39,  1843,     0,     0,     0,  1634,   172,  1558,
     170,   175,   177,     0,     0,    62,    84,   174,    56,  1566,
     153,   154,  1845,   157,  1639,  1258,  1257,   116,   120,   123,
    1874,  1843,     0,   100,   152,   179,   180,    38,  1883,    36,
       0,  1647,  1643,  1648,  1646,  1644,  1649,  1645,   161,   162,
     164,   173,   168,  1934,  1935,     0,   166,     0,  1819,     0,
       0,     0,  1843,  1956,    80,    61,  1818,    66,    68,    69,
      70,    71,  1818,     0,  1843,     0,    83,     0,    87,    55,
      58,   155,  1847,  1846,   158,     0,  1874,  1877,  1876,     0,
       0,   117,   121,     0,     0,   268,   183,   132,   131,   146,
     142,   147,   128,   145,   143,   129,   130,   144,   127,   133,
     134,   136,   163,     0,  1917,   167,     0,  1635,   171,  1955,
    1843,     0,     0,    65,    67,    63,    81,  1818,  1843,     0,
       0,    92,    93,    94,     0,     0,    85,    88,     0,     0,
    1640,   156,   159,     0,  1875,   124,   118,   119,   122,   181,
       0,     0,  1716,     0,   280,   276,    24,     0,   271,   273,
     274,   135,   138,     0,   165,     0,     0,  1954,    74,    64,
       0,  1559,    73,    89,     0,    90,    91,    97,    86,    57,
       0,   160,   125,   186,  1717,   184,  1826,   277,   278,   279,
    1808,   287,     0,   269,   272,     0,   137,   169,     0,    77,
      79,    78,    75,    76,    95,    59,   187,  1827,  1901,  1809,
    1828,     0,   289,   270,   139,   140,  1942,  1943,    72,  1884,
    1902,  1822,  1829,     0,     0,     0,   291,     0,  1858,  1918,
    1909,     0,   246,     0,  1843,  1818,  1848,   248,     0,  1921,
    1916,   234,   185,   233,   188,   189,   190,   191,   192,   193,
       0,   194,     0,   195,   245,   196,   197,   198,   199,   200,
     201,  1814,  1843,  1823,     0,  1544,   275,  1542,   288,     0,
      25,   141,  1859,  1843,  1919,  1848,  1910,  1911,   213,  1920,
     249,  1884,  1843,  1843,  1849,  1843,  1843,   262,  1808,   263,
       0,  1843,  1858,  1815,     0,     0,   281,   282,   285,  1543,
     290,   297,   298,   349,   292,   352,     0,     0,  1843,   215,
     214,   211,  1885,   248,   244,     0,     0,     0,     0,   261,
    1878,  1878,     0,   264,     0,  1843,   247,   230,   283,     0,
     284,     0,   508,   293,  1699,     0,   294,   223,   224,   222,
     221,     0,   207,   208,   218,   218,     0,   218,   210,   209,
     218,     0,  1564,  1563,   250,   251,   252,   260,  1879,   265,
     266,   267,   231,     0,   286,     0,     0,   511,   354,     0,
       0,   358,     0,   296,   299,  1702,   219,   204,   220,   205,
    1826,   206,   203,   216,   202,   217,  1843,   254,   256,   240,
     239,   240,   236,   350,     0,     0,   514,   357,     0,   355,
       0,   364,   365,   359,     0,   362,  1843,  1953,     0,   256,
     227,  1703,   212,   255,   253,     0,     0,   238,   237,   352,
     509,     0,     0,   644,   356,   361,   398,   367,  1822,  1843,
       0,     0,  1843,  1822,  1858,  1843,  1806,   295,     0,   300,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,  1952,  1702,     0,   225,   258,   259,   257,     0,   243,
     351,   352,   512,     0,     0,    26,  1843,  1810,     0,     0,
       0,  1845,  1845,     0,     0,     0,     0,     0,  1843,   345,
    1807,   346,     0,   344,   347,   301,   302,   227,     0,     0,
     510,   352,   515,     0,   707,     0,   495,   422,  1890,  1890,
    1890,  1890,  1890,  1912,   423,   458,   460,   426,   427,   428,
     429,   430,   431,   454,   452,   453,   455,   456,   461,   459,
     432,  1886,   457,     0,   433,   419,   434,   435,     0,     0,
    1893,   437,   438,   436,   491,   440,   441,   439,  1843,  1845,
     399,   400,   401,   402,   403,   404,   420,   424,   425,   405,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
    1811,     0,   395,     0,   368,   323,   343,  1944,  1945,  1562,
     332,  1560,  1937,  1936,   325,  1856,  1820,  1832,     0,  1843,
     329,   328,  1843,   348,   226,     0,   148,   149,   229,     0,
    1940,  1941,   241,   513,   517,   645,     0,    27,   751,   506,
     507,  1891,   451,   450,   443,   442,   449,   448,   447,   446,
     445,   444,  1913,     0,  1887,   489,   475,   469,   414,  1627,
     504,  1894,   492,   493,   490,     0,     0,   416,   418,  1730,
    1730,   397,     0,  1867,  1658,     0,     0,  1654,  1659,  1657,
    1655,  1660,  1656,   396,   369,  1650,  1652,     0,   313,  1561,
    1857,   334,     0,   316,  1833,  1895,   342,     0,     0,   228,
     242,   516,   647,   709,     0,     0,   494,  1832,   471,     0,
    1905,     0,  1625,  1626,     0,   421,   496,   498,   500,     0,
     415,  1818,   462,   463,  1651,  1868,     0,     0,   378,   374,
     377,   376,   375,   390,   386,   388,   389,   391,   387,   392,
     393,   394,   371,   382,   383,   384,   379,   380,   381,   373,
     370,     0,   324,   315,   314,   312,   333,  1820,  1896,   321,
     330,   327,   331,   326,     0,   518,     0,   651,   646,   648,
       0,   712,   710,   728,     0,   805,   878,   887,   893,   900,
     932,   936,   950,   945,   951,   952,   960,  1006,  1015,  1018,
    1044,  1055,  1058,  1061,  1053,  1067,  1074,  1096,  1100,  1136,
    1138,  1142,     0,  1148,  1162,  1186,  1216,  1217,  1220,  1221,
    1226,  1235,  1236,  1249,  1283,  1301,     0,  1334,  1346,  1354,
    1356,   733,  1360,  1363,  1369,  1420,   753,   754,   755,   756,
     757,   758,   759,   760,   762,   761,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   752,     0,     0,   469,
     470,  1906,   473,  1678,  1673,  1679,     0,     0,  1685,     0,
    1531,  1533,     0,     0,     0,  1676,     0,  1535,  1677,  1680,
    1681,     0,     0,     0,     0,  1675,  1685,  1674,  1515,  1513,
    1520,  1523,  1525,  1528,  1592,  1530,  1589,  1623,  1590,  1591,
    1682,     0,     0,     0,  1624,   505,   502,   499,     0,   417,
    1731,   372,   385,  1653,     0,     0,   335,   336,   337,   338,
       0,   317,  1831,   323,     0,  1545,   519,     0,   652,     0,
     649,   717,   717,     0,     0,  1733,  1734,  1735,  1736,  1737,
    1738,  1739,  1740,  1741,  1742,  1743,  1744,  1745,  1746,  1782,
    1783,  1784,  1785,  1786,  1787,  1788,  1789,  1790,  1791,  1792,
    1793,  1794,  1795,  1796,  1797,  1798,  1799,  1800,  1801,  1747,
    1748,  1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,  1757,
    1758,  1759,  1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,
    1768,  1769,  1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,
    1732,  1778,  1779,  1780,  1781,   804,     0,     0,     0,     0,
     903,     0,     0,     0,     0,     0,     0,     0,  1476,  1046,
       0,     0,  1907,   923,   922,     0,  1066,  1476,     0,     0,
       0,     0,     0,     0,   803,     0,  1174,     0,     0,     0,
       0,     0,     0,     0,     0,  1330,  1333,  1321,  1331,  1332,
    1323,     0,     0,  1355,  1353,     0,   751,     0,     0,     0,
       0,   476,   472,   477,  1869,   480,     0,     0,     0,  1671,
    1593,  1594,  1595,     0,     0,     0,     0,     0,     0,     0,
    1527,     0,  1526,     0,  1672,  1516,  1517,  1636,     0,     0,
       0,     0,     0,     0,     0,     0,  1661,     0,     0,     0,
       0,   497,     0,   501,   341,   340,  1812,  1820,   322,     0,
     654,   655,   650,  1817,   717,   714,   720,     0,   717,   729,
     704,   827,   876,   830,   826,  1867,     0,     0,  1583,   885,
    1577,   883,  1572,  1574,  1575,  1576,   888,     0,  1704,  1555,
     894,   895,     0,  1551,  1553,  1552,   906,   904,   905,   930,
       0,  1605,   933,   934,  1604,   937,   940,  1867,   948,  1629,
       0,  1537,  1718,  1569,  1628,  1633,  1570,     0,   958,  1884,
    1654,  1004,  1441,   969,   973,  1572,     0,  1574,  1013,     0,
     907,  1016,  1025,  1024,  1042,     0,  1021,  1023,  1475,     0,
    1048,  1052,  1050,  1053,  1051,  1045,  1056,  1057,  1567,  1059,
    1060,  1908,  1062,  1549,  1054,  1903,  1474,  1075,  1077,  1097,
    1098,  1101,     0,  1103,  1104,  1105,  1137,  1287,  1620,  1621,
       0,  1139,     0,  1146,     0,  1155,  1152,  1154,  1153,  1149,
    1156,  1176,  1555,  1163,  1174,  1165,     0,  1172,     0,  1606,
    1552,  1608,     0,  1214,  1710,  1218,  1423,  1540,  1224,  1884,
    1233,  1423,     0,  1247,  1240,  1541,     0,  1548,  1250,  1251,
    1252,  1253,  1254,  1255,  1276,  1256,  1279,     0,  1546,     0,
       0,  1619,  1633,  1284,  1319,  1306,  1324,  1816,  1344,     0,
    1337,  1339,     0,  1351,     0,  1357,  1358,   739,   745,   734,
     735,   736,   738,     0,  1361,     0,  1364,  1366,  1607,  1386,
    1372,  1433,  1423,   478,   480,  1870,     0,   484,   479,  1515,
    1513,     0,  1515,     0,  1687,  1515,  1532,  1534,  1515,     0,
       0,     0,  1515,  1586,  1587,  1588,     0,  1536,  1529,  1515,
       0,  1514,  1637,     0,  1519,  1518,  1522,  1521,  1524,     0,
       0,  1515,     0,  1843,  1813,     0,   319,     0,  1843,  1892,
     715,  1843,     0,   726,   718,   719,   730,   877,   806,  1813,
     840,   831,     0,     0,     0,     0,  1578,  1579,  1580,   886,
     879,     0,     0,  1573,  1706,  1705,   891,   896,   898,     0,
     931,   901,   907,   935,   940,  1946,  1947,   938,     0,   941,
       0,   949,   946,  1929,  1928,  1538,     0,  1720,  1539,  1631,
    1632,   955,   956,   959,   953,  1199,  1005,   961,   748,     0,
     967,  1443,     0,   984,     0,   978,  1441,  1441,  1441,  1441,
    1014,  1007,     0,     0,   908,  1017,  1043,  1019,  1476,  1476,
    1020,  1027,  1028,   748,  1500,  1501,  1502,  1496,  1907,  1488,
    1508,  1511,  1510,  1512,  1504,  1495,  1494,  1499,  1498,  1497,
    1503,  1483,  1487,  1505,  1507,  1509,  1485,  1486,  1482,  1484,
    1477,  1478,  1489,  1490,  1491,  1492,  1493,  1481,  1049,  1047,
    1568,  1064,  1904,   748,  1079,     0,  1099,     0,  1126,  1110,
    1102,  1107,  1108,  1109,  1291,     0,  1622,     0,     0,  1147,
    1143,     0,  1156,  1916,     0,  1164,  1170,  1171,   748,  1167,
    1476,     0,     0,  1175,     0,  1215,  1187,  1711,  1712,  1884,
       0,  1219,  1225,  1222,  1189,  1234,  1227,  1199,  1242,  1248,
    1237,     0,  1242,     0,  1600,  1601,  1277,  1280,     0,     0,
    1547,  1260,     0,  1259,     0,     0,  1631,  1320,  1302,  1308,
    1843,  1309,  1304,     0,  1322,     0,     0,  1345,  1335,     0,
    1338,     0,  1352,  1347,     0,  1359,   746,   744,   737,     0,
    1367,  1368,  1365,  1387,  1370,  1816,     0,  1434,  1421,  1425,
     484,   474,  1816,   467,   482,   483,  1848,     0,  1682,     0,
    1682,  1686,     0,  1682,  1682,  1682,     0,  1665,     0,  1682,
    1638,     0,  1682,  1682,  1915,     0,   339,  1869,   318,   523,
    1843,  1845,  1845,  1853,   555,   522,   526,   527,     0,     0,
     669,  1843,   659,  1912,   660,  1923,  1922,     0,  1843,     0,
     672,   663,   668,  1862,   664,     0,   667,   674,   671,   665,
     670,     0,   675,   666,     0,   686,   680,   684,   683,   681,
     685,   656,   687,   682,     0,  1862,     0,  1843,   727,     0,
       0,   705,   836,   841,   842,  1862,  1862,   834,   835,  1862,
     822,  1436,  1925,  1924,   819,   811,   813,   814,     0,  1436,
       0,     0,     0,   828,   817,     0,   825,   808,   824,   809,
    1597,  1596,     0,  1582,     0,  1867,  1629,  1446,   884,  1633,
    1570,     0,  1708,   891,     0,   889,     0,     0,  1554,   918,
     939,   944,     0,     0,  1571,  1446,  1843,  1719,  1630,   957,
    1828,  1468,  1200,  1201,  1442,   749,   971,  1812,   748,  1440,
     977,   976,   975,   974,   985,  1441,  1843,   988,     0,   991,
     992,     0,  1843,   995,   996,   997,   998,     0,   999,  1441,
     986,     0,   842,   964,   965,   962,   963,     0,  1446,     0,
     914,  1022,  1037,  1039,  1038,  1032,  1034,  1040,  1476,  1029,
    1026,  1476,  1030,  1506,  1479,  1480,  1869,  1063,  1550,   748,
    1071,  1072,  1907,  1087,  1088,  1090,  1092,  1093,  1089,  1091,
    1082,  1907,  1078,     0,  1127,     0,  1129,  1128,  1130,  1112,
    1122,     0,     0,  1106,  1293,     0,  1834,     0,  1140,  1446,
       0,     0,     0,  1158,  1168,  1181,  1177,  1182,  1178,  1183,
       0,  1173,  1430,  1429,  1180,  1189,  1424,  1616,  1617,  1618,
       0,     0,  1229,   748,     0,  1241,     0,     0,     0,  1278,
       0,  1282,  1281,  1274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1262,  1263,  1713,  1468,     0,  1325,  1899,
    1899,  1340,  1341,  1342,     0,  1446,     0,     0,   747,     0,
    1700,     0,  1342,  1199,  1802,   468,     0,  1843,  1696,  1669,
    1698,  1670,  1694,  1666,  1667,  1668,  1692,  1689,  1690,  1664,
    1683,     0,  1662,  1663,   503,     0,     0,  1971,  1972,  1845,
    1845,     0,   520,   524,   532,   528,   530,   531,   533,   535,
       0,   657,   658,   661,   662,     0,   689,  1863,  1843,  1905,
    1843,   690,   688,   702,  1843,   721,   722,   725,     0,   716,
     731,   733,  1843,   844,     0,     0,   832,   833,     0,   748,
     823,  1438,   810,   812,  1436,   820,   815,   816,   829,   818,
    1599,  1581,  1598,  1718,     0,   748,   880,  1448,  1631,  1632,
    1446,     0,  1707,   890,   892,   899,   897,   926,  1841,   943,
     942,   947,     0,  1204,     0,   748,   954,  1470,   751,  1444,
     966,     0,   989,   990,   993,   994,     0,  1472,  1472,   987,
     968,   980,   981,   979,   982,     0,  1008,     0,   909,   910,
     720,     0,  1476,  1476,  1036,   748,  1033,     0,  1070,   748,
    1073,  1068,     0,     0,  1094,     0,     0,     0,  1123,  1125,
       0,  1118,  1132,  1119,  1120,  1111,  1114,  1132,  1285,  1843,
    1848,     0,  1835,  1292,  1141,  1144,     0,  1158,  1157,  1161,
    1150,     0,  1169,  1166,     0,     0,  1191,  1190,   748,  1223,
    1456,  1468,  1230,     0,  1243,  1476,  1476,  1238,  1244,  1261,
    1273,  1275,  1265,  1266,  1267,  1271,  1268,  1272,  1269,  1270,
    1264,  1714,  1318,     0,  1315,  1316,  1310,     0,  1303,  1951,
    1950,     0,  1900,  1328,  1328,  1451,     0,  1718,  1348,     0,
     740,     0,  1701,  1373,  1374,     0,  1377,  1380,  1384,  1378,
    1229,  1803,     0,   488,   485,   486,     0,  1684,   320,   525,
    1854,  1855,  1641,  1642,   542,   537,   541,   540,   363,   556,
     529,   534,  1611,   679,  1609,  1610,   678,   695,   701,     0,
     698,   723,   724,   733,   751,     0,     0,  1436,   837,   839,
     838,  1437,   748,  1435,   821,  1446,  1571,  1447,   748,  1445,
    1630,   881,  1709,  1602,  1603,  1932,  1933,   928,   748,  1867,
    1842,   925,   924,   920,     0,  1722,  1723,  1724,  1725,  1726,
    1727,  1728,  1729,  1721,     0,  1469,   748,  1467,     0,  1001,
    1000,  1003,     0,  1614,  1615,  1002,     0,   972,  1446,  1537,
    1446,  1537,   911,   912,     0,   916,   915,   917,  1035,  1041,
    1031,  1065,  1069,  1080,  1083,  1084,  1824,  1076,  1907,  1081,
    1132,  1132,     0,  1117,  1115,  1116,  1121,  1295,     0,  1289,
    1836,  1446,  1151,  1160,     0,  1184,     0,  1869,     0,  1210,
    1192,  1205,  1198,  1194,  1207,     0,  1460,   748,  1455,  1228,
    1231,     0,   748,   748,  1245,  1317,  1307,  1311,  1312,  1313,
    1314,  1305,  1326,  1329,  1327,   748,  1336,  1453,  1843,  1446,
    1446,   742,  1362,  1700,  1376,  1832,  1382,  1832,  1451,  1468,
    1428,  1427,  1850,   487,   481,  1556,   536,  1938,  1939,   538,
     365,   557,   693,   691,   694,   692,   696,   697,     0,   673,
     699,   700,     0,   751,   843,   848,  1843,   850,   851,   852,
     875,  1843,   853,   854,   855,   856,   857,     0,   858,   859,
     861,   862,   863,     0,   864,   849,  1804,   865,   874,   868,
     845,   846,   867,   807,  1439,   882,  1449,   748,   902,   927,
       0,   919,  1203,  1202,  1471,  1948,  1949,  1473,   983,  1010,
       0,  1009,     0,   913,  1085,  1825,     0,     0,  1113,  1124,
    1132,  1839,  1839,  1133,     0,     0,  1298,  1294,  1288,  1145,
    1159,     0,     0,  1195,  1843,  1468,  1193,  1206,     0,     0,
       0,  1209,  1461,  1232,  1239,  1246,  1452,   748,  1450,     0,
    1350,  1349,  1388,   741,     0,  1375,     0,  1832,  1379,     0,
    1371,   748,   748,  1422,  1432,  1463,  1464,  1431,  1851,  1852,
    1426,  1557,     0,  1843,  1843,     0,  1843,   543,   544,   545,
     546,   547,   548,     0,   559,   676,   677,     0,     0,     0,
     866,  1843,  1472,  1472,  1805,     0,   847,   929,   921,  1446,
    1446,     0,  1095,  1131,  1840,     0,     0,  1843,  1296,     0,
       0,  1286,  1290,     0,  1197,     0,  1188,  1213,  1458,  1459,
    1212,  1196,  1208,  1454,  1343,  1396,   743,  1381,     0,  1385,
    1465,  1466,  1462,  1958,  1957,  1843,     0,     0,  1960,     0,
    1843,  1843,     0,   539,  1892,     0,   870,   869,     0,   872,
     871,   873,  1612,  1613,  1012,  1011,  1086,  1135,  1134,     0,
    1299,  1843,  1476,  1211,  1457,  1419,  1418,  1397,  1389,  1390,
    1804,  1391,  1392,  1393,  1394,  1417,     0,     0,  1383,     0,
     554,   550,  1959,     0,     0,   549,   610,  1837,   625,  1843,
       0,   609,  1843,  1867,   558,  1843,  1843,     0,   564,   566,
     575,   567,   569,   572,   560,   561,   562,   571,   573,     0,
     576,   563,   619,   568,     0,   570,   574,   565,  1926,  1927,
    1864,   732,   860,  1297,     0,  1185,     0,  1897,     0,  1869,
     551,   553,   552,  1838,   642,   627,   618,     0,   469,     0,
       0,     0,     0,     0,  1860,  1860,     0,  1476,     0,     0,
     617,   619,   621,   628,     0,   629,   637,   638,     0,   640,
    1865,  1866,   631,  1300,     0,  1898,     0,  1415,  1414,  1413,
       0,   626,   597,     0,     0,   593,   594,  1905,  1718,   599,
    1584,  1962,     0,     0,  1964,  1966,     0,  1970,  1968,   577,
     582,  1871,  1871,   579,   583,   578,   584,   643,     0,  1861,
     611,   611,  1860,  1860,   604,   623,   624,   620,   622,   639,
     636,   635,   633,   634,  1845,   632,  1416,  1931,  1930,  1880,
    1409,  1403,  1404,  1406,   595,   596,   473,   641,  1869,     0,
     598,  1585,  1961,  1965,  1963,  1969,  1967,  1873,  1872,   585,
     589,     0,   615,   613,   605,   611,   614,   607,     0,     0,
     630,  1881,  1869,  1412,  1407,  1410,     0,  1405,   465,     0,
     601,   588,   580,   586,   592,   591,   581,   590,     0,   612,
     606,   608,     0,  1411,  1408,     0,   464,   603,   600,   602,
       0,   616,  1402,  1399,  1401,  1400,  1395,  1398,   466,   587
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2495, -2495, -2495, -2495, -2495,  2244, -2495, -2495, -2495,   795,
   -2495,  2208, -2495,  2166, -2495, -2495,  1370, -2495, -2495, -2495,
    1429, -2495, -2495,  1404,  2235, -2495, -2495,  2135, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,  2061,
      72, -2495, -2495, -2495, -2495, -2495,  2118, -2495, -2495, -2495,
   -2495,  2060, -2495, -2495, -2495, -2495, -2495, -2495,  2193, -2495,
   -2495, -2495, -2495,  2047, -2495, -2495, -2495, -2495, -2495,  2031,
   -2495, -2495,  1004, -2495, -2495, -2495, -2495, -2495,  2121, -2495,
   -2495, -2495, -2495,  2094, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495,  1082, -2495, -2495, -2495,
    1667, -2495, -2495, -2495, -2495, -2495, -2495,  1765, -2495,  1877,
   -2495, -2495, -2495,  1770,  1751, -2495,  1738, -2495, -2495, -2495,
   -2495,   377, -2495, -2495,  2006, -2495, -2495, -2495, -2495, -2495,
    1871, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495,  1265, -2495, -2495, -2495,
    1507, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,   671, -2495, -2495,  1796, -2495,
    -770,  -837, -2495, -2495, -2495,   541, -2495, -2495, -2495, -2495,
     232, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -1434,   840,
    1541,   505,   682, -1433, -2495, -2495, -2495,  -961, -2495,  -453,
   -2495, -2495,   890, -2495,   400,   627, -2495,   106, -1430, -2495,
   -2495, -1429, -2495, -1427, -2495, -2495,  1509, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495,   305, -1240, -2495, -2495,  -920, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2494, -2495, -2495, -2495, -2495,  -369, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495,  -374, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,  1458, -2495, -2495, -2495, -2123,
      84, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495,  1274,   230, -2495,   220, -2495, -2495, -2495, -2495,
   -1868, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -1248, -2495,
   -2495,  -710, -2495,  1527, -2495, -2495, -2495, -2495, -2495, -2495,
    1085,   553,   558, -2495,   474, -2495, -2495,   -92,   -71, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,   530, -2495,
   -2495, -2495,  1087, -2495, -2495, -2495, -2495, -2495,   848, -2495,
   -2495,   236, -2495, -2495, -1291, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,   849, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495,   823, -2495, -2495, -2495, -2495, -2495,    58, -1794,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495,   807, -2495, -2495,   806, -2495, -2495,   477,   247,
   -2495, -2495, -2495, -2495, -2495,  1049, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,    46,   770,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495,   762, -2495, -2495,   231, -2495,   459, -2495, -2495, -1457,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495,  1016,   758,   226, -2495, -2495, -2495, -2495,
   -2495, -2495, -2364,  1021, -2495, -2495, -2495,   222, -2495, -2495,
   -2495,   439, -2495, -2495, -2495, -1519,   221, -2495, -2495,    37,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495,   169, -1387, -2495, -2495, -2495,
   -2495, -2495, -2495,   739,   214, -2495, -2495, -2495, -2495, -2495,
    -136, -2495, -2495, -2495, -2495,   420, -2495, -2495, -2495,  1001,
   -2495,  1002, -2495, -2495,  1226, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495,   192, -2495, -2495, -2495, -2495, -2495,
     992,   410, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495,    20, -2495,   412, -2495, -2495, -2495,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,  -366,
   -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495, -2495,  -280,
   -2495,   707, -2495, -2495, -1712, -2495, -2495,  -696, -2495, -2495,
   -1632, -2495, -2495,    21, -2495, -2495, -2495, -2495,   -77, -2229,
   -2495, -2495,  -103, -1877, -2495, -2495, -1887, -1577, -1087, -1483,
   -2495, -2495,   820, -1762,   216,   217,   219,   233,   358,   119,
    -725,   416,   306, -2495,   704,  1679, -1404, -1092,  -892,  1033,
   -1580,  -391,  -305, -2495, -1334, -2495, -1066, -1443,   908, -2495,
     -96,  2098, -2495,  1708,  -567,    13,  2257, -1088, -1067,  -880,
    -878, -2495, -1111, -1376, -2495,   471, -1315, -1948, -1114,  -940,
   -1917, -2495, -2495,   683, -1136, -2495,   268,  1139,  -610, -2495,
   -2495,  -101, -1210,  -774,  -116,  2144,  -813,  2170,  -673,   422,
    -535,  -578, -2495, -2495, -2495,   101,  1423, -2495, -2495,   445,
   -2495, -2495, -2495, -2495,  1834, -2495, -2495, -2495, -2495, -2495,
   -2495, -2006, -2495, -2495,  1660, -2495, -2495,  -175, -2495,  2009,
   -2495, -1195, -2495, -1341,  -273,  -636,   986, -2495,  1923, -1463,
   -2495,  -796, -2495, -2495,   -24, -2495,     4,  -588,  -361, -2495,
   -2495, -2495,   382, -1549,  -105, -2495, -1218, -1147,  -293,  2216,
    1984, -2495, -2495, -1164, -2495, -2495,  1104, -2495, -2495, -2495,
     479, -2495,   322, -1965, -1496, -2495, -2495, -2495,  -170, -2495,
     536, -1422, -1536, -2495, -2495, -2495, -2495,  -269, -2495, -2495,
    1722, -2495,  1883, -2495, -2495, -2495,   852, -2495, -1723,  -229,
   -2495, -2495, -2495, -2495, -2495, -2495
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    30,
      12,    31,    44,    45,    34,    35,    19,   321,   433,   624,
      32,    50,    14,    25,    37,    95,   131,   132,    20,    29,
      41,    69,    70,   148,   209,   268,    71,   145,   195,   196,
     197,   198,   199,   200,   201,   332,   202,    72,   146,   206,
     207,   208,   263,   305,   264,    73,    74,    75,    76,    77,
     116,   157,   277,   158,   159,    78,   133,   238,   239,   240,
     325,   344,   241,   718,    79,   121,    80,   150,   151,   152,
     271,    81,   178,   179,    82,    83,   245,    84,    85,    86,
      87,    88,    89,    90,   123,   225,   166,   226,   336,   349,
     374,   375,   480,   481,   441,   514,   507,   376,   470,   377,
     584,   378,   379,   380,   381,   382,   522,   547,   383,   384,
     385,   386,   387,   518,   544,   545,   585,   388,   389,   418,
     390,   453,   286,   287,   288,   289,   320,   290,   316,   426,
     427,   460,   342,   356,   400,   434,   435,   504,   436,   536,
     569,   570,   845,   571,  1708,  1033,   778,   572,   573,   712,
     851,   574,   575,   846,  1026,  1027,  1028,  1029,   576,   577,
     578,   579,   613,   462,   549,   463,   464,   498,   499,   556,
     500,   533,   534,   597,   773,   832,   833,   834,   835,   836,
     501,   692,   596,   670,   671,   672,   810,   673,   674,   675,
     676,   677,   678,   679,  2630,  2806,   680,   800,   969,  1175,
     798,  1414,  1417,  1418,  1686,  1683,  2204,  2205,   681,   682,
     754,   683,   684,   685,  1016,   806,   807,  1211,   686,   687,
     497,   591,   526,   621,   553,   724,   791,   855,  1219,  1458,
    1715,  1716,  2005,  2006,  2007,  2008,  1717,  2214,  2215,  2376,
    2507,  2508,  2509,  2510,  2511,  2512,  2002,  2219,  2514,  2574,
    2634,  2635,  2719,  2792,  2796,  2636,  2705,  2637,  2760,  2808,
    2638,  2639,  2774,  2775,  2640,  2641,  2642,  2680,  2681,  2666,
    2682,  2643,  2644,  2744,  2745,  2685,  2686,  2687,  2645,  2646,
    2647,   595,   792,   858,   859,   860,  1221,  1459,  1751,  2386,
    2387,  2388,  2392,  1752,  1753,   727,  1466,  2031,   728,   863,
    1042,  1041,  1224,  1225,  1226,  1463,  1759,  1044,  1761,  2233,
    1166,  1399,  1400,  2361,  2483,  1401,  1402,  1967,  1824,  1825,
    2078,  1403,   795,   916,   917,  1116,  1232,  1233,  1787,  1470,
    1525,  1767,  1768,  1764,  2033,  2237,  2420,  2421,  2422,  1468,
     918,  1117,  1239,  1482,  1480,   919,  1118,  1246,  1805,   920,
    1119,  1250,  1251,  1807,   921,  1120,  1259,  1260,  1535,  1860,
    2098,  2099,  2100,  2067,  1135,  2263,  2257,  2428,  1491,   922,
    1121,  1262,   923,  1122,  1265,  1497,   924,  1123,  1268,  1502,
     925,   926,   927,  1124,  1278,  1511,  1514,   928,  1125,  1281,
    1282,  1519,  1283,  1523,  1852,  2093,  2287,  1835,  1849,  1850,
    1517,   929,  1126,  1288,  1531,   930,  1127,  1291,   931,  1128,
    1294,  1295,  1296,  1540,  1541,  1542,  1870,  1543,  1865,  1866,
    2104,  1537,   932,  1129,  1305,  1136,   933,  1130,  1306,   934,
    1131,  1309,   935,  1132,  1312,  1877,   936,   937,  1137,  1881,
    2111,   938,  1138,  1317,  1584,  1890,  2114,  2304,  2305,  2306,
    2307,   939,  1139,  1319,   940,  1140,  1321,  1322,  1590,  1591,
    1902,  1592,  1593,  2125,  2126,  1899,  1900,  1901,  2119,  2313,
    2453,   941,  1141,   942,  1142,  1331,   943,  1143,  1333,  1600,
     944,  1145,  1339,  1340,  1604,  2140,   945,  1146,  1343,  1608,
    2143,  1609,  1344,  1345,  1346,  1916,  1918,  1919,   946,  1147,
    1353,  1931,  2329,  2330,  2331,  1821,  1822,  1823,  2466,  2333,
    2465,  2546,  1616,   947,   948,  1148,  1355,   949,   950,  1149,
    1358,  1623,   951,  1150,  1360,  2151,  2152,  1626,   952,   953,
    1151,  1363,  1632,  1934,  2157,  2158,  1630,   954,  1152,  1368,
     160,  1644,  1369,  1370,  1953,  1954,  1371,  1372,  1373,  1374,
    1375,  1376,   955,  1153,  1326,  2317,  1594,  2458,  1904,  2128,
    2456,  2541,   956,  1154,  1384,  1956,  1652,  2173,  2174,  2175,
    1648,   957,  1386,  1654,  2352,  1160,   958,  1161,  1388,  1389,
    1390,  2185,  1658,   959,  1162,  1393,  1663,   960,  1164,   961,
    1165,  1395,   962,  1167,  1404,   963,  1168,  1406,  1672,   964,
    1169,  1409,  1676,  2193,  2194,  1972,  2196,  2366,  2488,  2368,
    1674,  2484,  2555,  2598,  2599,  2600,  2816,  2601,  2751,  2752,
    2786,  2602,  2699,  2603,  2604,  2605,   965,  1170,  1411,  1621,
    1973,  1924,  2493,  1678,  2040,  2041,  2243,  1520,  1521,  1829,
    2056,  2057,  2249,  2356,  2357,  2478,  2149,  2547,  2150,  2338,
    2494,  2495,  2496,  2076,  2077,  2277,  2281,  1315,  1316,  1298,
    1299,  1570,  1571,  1572,  1573,  1574,  1575,  1576,   998,  1198,
    1420,  1000,  1001,  1002,  1003,  1004,  1270,  1505,  1356,  1364,
     396,   397,  1036,  1377,  1378,  1581,  1347,  1253,  1254,  2374,
     483,   302,   700,   701,   484,    98,   153,  1307,  1272,  1241,
    1483,  2709,  1432,  1005,  1792,  2051,  2127,  2252,  1263,  1348,
    2223,  2581,  2282,  1926,  2224,  1327,  1381,  1006,  1007,  1273,
    1274,   749,   802,   803,  2225,   272,  2217,   180,  1244,   775,
     776,  1009,  1010,  1011,  1012,  1206,  1179,  1440,  1436,  1429,
    1421,  1423,   502,  2195,   540,  1486,  1803,  2062,  1619,  2177,
     283,  1508,  1817,  2273,   812,  1115,  2202,  2525,   611,   340,
     693,  1472,   424,  1227,   203,   115,   394,  2446,   338,   353,
    1034,   785,  2133,  2664,  2535,  2264,    96,   215,   415,  2500,
    2001,   781,   403,  2730,  2018,  2692,   816,  2684,  2769,   219,
     489,  2782,   169,   391,   745,   102,   733,   689,   849,  2696,
    2183,   351,  1583,   972,  1313,   408,   743,  1212,  1352,   405,
     392,  1769,  1789,  2650,  1506,  2749,  2258,   185,   704,  2379,
     722,   348,   603,  1499,  2437,  2181,   541,   204,  2565,  2571,
    2722,  2723,  2724,  2725,  2726,  1719
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     161,   967,   139,   428,   139,   429,   416,   138,  1173,   141,
     139,  1286,   246,   697,   698,   147,  1380,  1474,   794,  1038,
     774,  1455,   856,   216,  1913,  1745,  1747,  1416,  1014,  1748,
    1749,  1271,  1750,  1917,   139,   428,  1813,  1755,   705,   181,
     269,  1297,   789,  1640,   438,   466,  1656,  2245,   748,  1500,
    1318,  1633,  1873,  1252,  2228,  2089,  1867,  -708,   260,  1538,
     103,   104,   105,  1308,  1379,  1509,    99,  2045,   111,  -706,
     783,  1308,  2750,   107,  1894,   465,   999,  1797,   280,  2178,
     861,   756,  1439,   808,   247,  1308,   715,  1024,   212,   856,
     762,   346,   412,  2327,   221,  1653,  1450,  2674,  2226,  2295,
     265,  2794,  1362,   134,   135, -1621,   136,  2390,  1932,  2400,
     114,   143,   144, -1622,   322,  1515,   393,  2238,  2239,  1596,
     162,  2240, -1869,  1548,  1895,  2517,  2675,  1876,   537,  1858,
    1606,   763,   709,   808,  2697,   531,   298,   170,  1790,  1788,
    1469,  1830,  2004,   127, -1916, -1848,  2212, -1650,  1493,   361,
     414,   450, -1627,  2454,  1762,   839,   839,  1223,  2259,  2791,
     292,    42,  2812,  2234,  2279,   220,  2807,  1862,  2310,  2280,
     710,  2087,  1646,  1223,   843,   222, -1812,  2212, -1812,  1532,
     328,  2359,   217,  2071,  1252,   352,   482,  2255,  1833, -1916,
    1195,   746,  2148,  2176,  1862,  1624,   252,  1909,  -708,  1231,
     420,  2285,  -708, -1916,   129,  1461,   839,  1959,   259,    23,
    -706,  1031, -1869, -1816,  -706,   431,  2813,   731,   183,  2131,
     731,   537,   759,   506,  2814,  2653,  2096,   814, -1916,  1410,
   -1916,  1484,   275,   276,  1684,   762,  2549,  2777,   117,  1242,
    1580,   731,   128,  2362,  1896,  1284,  2522,  1285,  1289,    52,
   -1916,  1580,   419,  1032,   296, -1916,  2231,  1314,  1361,  -708,
    1965,    94,   300, -1627,  1332,  1334,     3,  1191,   254,  1249,
    2795,  -706,  1893,  1462,  2339,   762,   513,  2135,  1412,  2762,
     801,  2799,  1394,  1391,  1242,  2372,   312,  1638,  1209,   732,
    2693,  1195,   734,  2075,   764,  1872,   315,    24,    53,   213,
     205,  2612,   227, -1916,  2328,  1223,  1023,  1897,  1308,   184,
     130,  2815,  1580,   736, -1830, -1916,  1367,  1195,  2132,  2594,
    1492,  1249,   154, -1916,  1685,  2676,   765,   766,  1791,   254,
    1223,  2137,  2244,  2188,  1970,  1880,    54,  1960,    55,   767,
      56,  1976,  1195,   494,   139,  1213,   139,   139,    57,   768,
   -1916,   486,   487,   139,  1969,   850,  2337,  2074,   492,  1533,
    1914, -1828,     5, -1812,  2450,  2393,   244,   137,   411,  1180,
     139,  2296,   281,   508,   508,   505,   508, -1916,   218,   508,
     515,  2260,  1831, -1903,  1710,  1867,  2112,  1195,  1867,  1271,
     284, -1625,  1195,  1247,   282,  2115,   425,  2060,   841,   137,
     137,  1182,   228,  -708,    58,  1987,  2213,   437,  1415,  2345,
     244,  1195,  1711,  1712,  1195,  -706,   445,   446,   801,   447,
     448,  1577,  1563,   261, -1848,   454,   467,   129,  2251,  1587,
    2698,   769,  2455,   451,   244,  1457,   537,  2213,   432,   764,
     137,  1271,   471,   139,   139, -1812,  1607,  1905,   586,   586,
     244,  1297,  1597,  1397,  2200,  1925,   760,  1214,  1215,   493,
    1428,  1428,  1428,  2044,  2261,  1820,  2105,  1324,   711, -1816,
    2380,  2515,   844,  1441,  1443,  2516,   137,   137,  2741,   764,
    1449,   139,   154,   695,   767, -1816,   586,   229,  2418,  2256,
     706,   369,  2497,   137,   768,   452,   137,    60,  -521,   716,
     137,  1510,   395,   770,   139,   782,  1398,   285,    97,  1271,
    1908,  1391,  1025,   538,   137,  1878,  2297,  1397,  2068,  2101,
     543,  2688,  1196,   137,   767,  2423,  -521,  -521,   862,  1397,
     137,  1308,   230,   130,   768, -1843,  2088,   747,  1020,  1245,
     580,  1898,   231,    61,   801,   347,  1921,  1245,  1245,   771,
     244,  1539,  1013,   262,    94,  1832,   232,  1245,   750,   266,
    1995,   598,  1325,   600,  1245,  1245,   605,   607,  1351,   609,
    1398,  1580,  1271,   323,  1197,   137,   769,  2054,   149,  2343,
    2079,  1456,  1398,  1245,  1245,  1986,  2120,   395,  2550,  2058,
   -1715,  1351,   614,   293, -1916,   717,  1267,   244,  2677,   772,
     688,  2576,  2577,  1798,   137,   137,   538,  1863,  1510,   137,
    1435,  2523,   708,  2425, -1816,  1435,   769, -1816,  1864,  1867,
    2262,  1524,  2159,  1196,   233,   188,   713,  1476, -1818,  1435,
   -1816,  2108,   189,    64,  1863,  2579,  2580,  -713,  1200,  1988,
    -521,  1827, -1816,  1201,  2089,  1864,  1713,    94,   770,  1196,
     468,  1249,   244,   256,  1857,  1859,  2439,  1013,  2441,  1478,
     519,   842,  -711,  1245,   188,   154,   847,  2742,  -521,  2025,
    2316,   189,   755,  1548,  1196, -1695,  1030,    67,  1261, -1885,
    2050,  2011,  1351,   970,  2293,  2154,   852,   852,   770,  2459,
    1454,  2288,  1577,  2290,   771, -1916,   234,   118,   212,   235,
     236, -1697,  2757,  1015,  1588, -1589,  1245,   469,  2212,  1271,
     188,  1183,  1184,   787,   690,  -713,   788,   189,  1189,  1196,
    1582,  1245,   154,  1910,  1196, -1903,  1691,  2480,  2481,  2107,
     516,  1266,  2321,  1279,   771,  1818,  1133,  2064,   137,  2179,
    -711,  2066,  2756,  1196,   772,  1366,  1196,   154,  2265,  2026,
      68,  1725,  1245,  1726,  2702,   413,  1354,  2101,  1359,  2334,
    -521,  1367, -1816,  1385,  1943,   223,  1351,  2221,  1133, -1828,
     517, -1691, -1916,     4,    27,  1958, -1688,  1407,  1962,  1589,
    1714,  1815,  2570,  2383,   772,  2360,  1966, -1816,  1461,  2595,
    2382,  2241,   237,   329,   188, -1693,   520,  2703,  1703,   -96,
    2772,   189,  2311,   764,   455,  1200,  2171,  2247,  2773,  2172,
    1201,  1245,  2447,  2743,   306,  -703,  1245, -1589,  1464,  2134,
     731,   538,  2012,  1155,   229, -1916,    43,  2275,  2596,  2082,
    1853,  1854,  1855,  1856,  1320, -1916, -1914,   190,  1292,  1300,
    1308,  1580,   980,    15,   981,   752,  2469,  1945,   767,  1293,
     352,  2383,  1172,  2448,  2449,  1946,  1462,  2300,   768,   702,
    1396,  2302, -1916,  1367,  1793,  2597,  2470,  2767,  2371,   230,
    1485,   284,  1818,   -35,  1494,  2538,   190,  1666,   414,   231,
    2364,    18,  2209,   588,  1210,   691,  1512,    43,  1706, -1916,
    1814,  1469,   738,  2340,  -521,   154,   521,  2584,  2585,  2470,
    2336,  1882,  2539,  1245,  1883,   137,    16,  1884,  1885,   213,
    2180,   191,  1725,  1134,  1726,  1156,   987,     5,  1218,   137,
    2341,  2385,   190,   139,   139,  2222,  2340, -1812,  1836, -1812,
    1256,  1837,   137,   224,   137,  2704,  1667,   742,  1838,  1839,
     769,  1245,  1639,   -96,  2334,  1134,   608,  1928,  2720,   244,
     191,  2283,  2283,  2341,  1245,  1245,  -703,  1157,   307,  2590,
    -703,   233,  1441,  1465,  1441,   439,  1301,  1302,  2213,   192,
    2083,   703,  1563,  1335,   193,   330,  1991,  2573,  1267,  1235,
    2221,  1277,   762,  1303,  2384,  1489,  1840,  1158,   285,  2385,
    2768,   753,  1245,  2533,  2424,   137,   191,  2266,  2267,  2268,
    2426,   137,    28,  2289, -1812,  2291,   190,  1267,   192,   589,
    2429,   440,   770,   193,  1586,  2655,  2299,  -703,  1255,  2540,
    1766,  1947,  1275,  1245,   857,  2059,   731,  1336,  2434,  1275,
    1310,   395,  1994,   234, -1916,  1337,   331,  1275,  2649,  1304,
    1329,  2430,  1929,   244,  1271,  1350,   301,  1357, -1885,  1357,
    1365,  1382,  1329,  1948,   192,  1841,  1928,   973,   771,   193,
    1518, -1916,  2269,   527,  1245,   253,  2161,  1580,  2342,  1357,
     317,   472,   473,   474,   974,  1245,  1949,  1941,  1245,   194,
     191,  1627,   729,  1159,  1842,  1257,  1245,  1258,  1942,  2472,
    1665,   857,  2607,     5,  2474,  2475,  1498,  1271,   740,  1765,
    2734,   764,   137,  2212, -1589,  1843, -1916,  2476,   772,   244,
     154,   255, -1589, -1589, -1812,  2389, -1699, -1589,  1435,    33,
    1819,  2491,  1338,  1997,  1998,  1367,  2731,  1940,  1649,   237,
    1267,  1950,  1679,   318,   319, -1869,   516,  2471,   192,  2080,
    2628,  2629,   730,   193,  2631,  2632,   767,  2633,  1585,  1255,
      39,  1929,  2648,  2090,  2139,  2055,   768,   726,  1415,   817,
    1844,  -703,  1503,   171,   256,    36,   975,   976,   977,  1275,
    2471,  1886,  1887,  1550,  1551,   978,   517,  2370,  2678,  2527,
    2462,  1766,  2052,  2778,  2779,   764,   764,  1650,  2270,  2271,
    1651,   475,  1951,  2272,  2075,   299, -1812,  1888,  1889,   818,
     819,   820,   821,   822,  1200,   476,  1275,   719,   172,  1201,
    1610,    40,  1552,  1553,   764,  1845,  1655,  1275,   173,  1237,
     590,   406,  2817,  1008,   980,   980,   981,   981,  1611,  2553,
     767,   767,  2218,   982,   983,   984,   635,   636,   769,   985,
     768,   768,  2432,  2560,  2561,  1617,  1238, -1843,  2747,  1641,
    2568,   362,  2748,   980,    94,   981,   558,  2753,  2492,   767,
    1883,  1365,   620,  1884,  1885,  1999,  2000,  2326,  1267,   768,
     837,   837,   407,   559,  1275,    94,  1846, -1916,  1275,   154,
     986,   244,   395,   363,  2250,  2569,   720,   615,   721,  1847,
    1952,   477,   723,  2708,  2710,  1618,  2433,   326,   987,   987,
     174,  1811,  2563,   478, -1916,  2353,  2353,   840,  2753,  1200,
     770,  2323,  2564,   560,  1201,   139,  2679,  2091,  2092,   616,
    1681,   837,   769,   769,  1498,  1977,   154,   987,  1812,   345,
    2052,  2763,   155,  2761,   156,   757,  1922,   764,  2324,   823,
     824,   825,   826,   827,   828,   829,   648,   649,  2529,  2274,
    2530,   769,  2771,  2764,   139,   988,   771,  1021,  2783,   417,
    2606,   401,  2451,  2213,   137,  1923,  1245,   758,  2278,  1894,
    2222,  2340,   175,  1495,  1848,  2524,   980,  2765,   981,    48,
    1799,  2381,   767,    21,    22,   442,  2283,  2283,  2254,  2582,
    2784,  2452,   768,   443,   770,   770,  2732,   479,  2341,  2766,
     137,  1181,    46,    49,  2656,  2670,   772,   989,   990,  1328,
    2785,  2210,  2211,  1008,  1008,  1008,  2443,  2563,   176,  1895,
      26,  1328,  2811,   770,    97,  2733,  1938,  2564,  1564,  2121,
    1565,    13,  1799,  1912,  1941,  1008,    13,    47,   100, -1916,
     771,   771,    94,  2254,  2246,  1942,    91,   838,   838,   561,
     987,   994,  2711,  2568,  1460,    51,  2351,  1705,  1460,  2513,
     562,  1504,  1718,  1754,  2652,  1756,    93,  2502,   177,   771,
    2377,   995,  1199,  2378,   769,   764,   996,  2503,  1202,  2122,
    1255,  1200,  1957,   997,   137,   137,  1201,  1203,  2712,  1200,
     772,   772,  1438,   830,  1201,  1496,    94,  1275,   838,  2504,
    1799,  1267,  1200,  1939,  1267,  2563,   831,  1201,  1446,  1447,
    1448,  1255,  2700,   137,   980,  2564,   981,  1701,  2254,   772,
     767,   155,   429,   156,   244,   106,  1200,  1886,  1887,  2505,
     768,  1201,   764,   101,  1419,  1422,  1425,  1275,  1687,  1896,
    1008,  1689,   108,  2506,   599,  1276,   770,  1692,   109,   606,
    1968,  1696,  1276,  1888,  1889,  2690,  2691,   509,  1698,   511,
    1276,   110,   512,  1799,   563,   564,  1451,  1245,   601,  2486,
     602,  2489,   112, -1126,  1276,  1700,   113,   767,  1642,   565,
     720,   566,   721,  2543,   114,  1200,  2435,   768,   987,  2436,
    1201,   139,   771,  1670,  2498,  1671,  1982,  2499,  1008,  1008,
    1008,  2013,  1897,  2014,   120,  1245,  1245,  1008,  1008,  1008,
    1434,  2789,   769,   122,  1643,  1434,  1444,  1445, -1126,  2019,
    1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008, -1126,  1434,
    1008,  1430,  1431,   764,  2207,  2802,   137,   140,   137,  2254,
    2027,   352,   772,  2073,  1200,   149,  2610,  2611,   124,  1201,
    2024,   126,  2615,  2586,  1955,   142,   163,  2587,  2588,  1477,
    2034,  2035,  2123,  2084,  2038,  2085,   164,   165,   567,   769,
     168,   137, -1605, -1605, -1605, -1605,   182,   186,   767,  1526,
    1527,  1528,  1529,  1772,   770,  1773,   205,   187,   768,  2660,
     243,  2558,  1276,  2661,  2662,  1190,  1275,  1192,   248,   194,
    1275,   249,   250,  1275,   251,   258,  1255,  2707,   764,   274,
   -1126,   764,  2583,   270,  1996,   568,  1245, -1604, -1604, -1604,
   -1604,   295,  2713,   279,   297,  2010,  2714,  2715,  1836,  1276,
     771,  1837,  2015,   735,   737,   739,   741,   154,  1838,  1839,
    1276,   770,   301,  2141,   303,   304,   429,   980,   308,   981,
     980,   310,   981,   767,   309,   313,   767,  1275,   314,   327,
     334,  2028,  2153,   768,   335,   337,   768,  2716,   339,  2319,
     769,   341,   343,   244,   137,   350,   352,   354,   355,   357,
     772,   395, -1126,   393,  2717,  2718,  1840,   771,  1635,  1979,
     398,  1981,   399,  2186,  1983,  1984,  1985,  1276,   402,   404,
    1989,  1276,  2186,  1992,  1993,   409,  1275,  1275,  1275,  2162,
    2163,  2164,  2165,  2166,  2167,  2168,  2169,   410,   188,   244,
    2072,   987,   421,   422,   987,   423,   414,   430, -1126,  2683,
     456,  2689,   457,   485,   459,   461,  1898,   772,   488,  -353,
    2081,   491,   770,   496,   510,   769,  2086,   495,   769,   503,
     523,   525,   524,   529,   535,  1841,   546,   551,   550,   552,
     554,   555,  -366,   557,  1275,  2735,  2736,   581,  2683,   583,
     592,   593, -1126,   610,  2689,  2740,   594,   619, -1126,   612,
     622,   618,   694,  1245,  1842,   623,   696,   699,   771,   707,
     742,  1635,   725,   744,   139,   751,  2124,   780,   761,  2208,
     777,   784,   793,  1800,   799,  1843,   797,   786,   804,  1329,
     801,   809,  2232,   811,  1329,  2055,   815,   770,   796,   841,
     770,   968,   848,   854, -1699,   971,  1013,  1018,  1008,  1019,
    1043,  1144,   137,  1329,  1329,  1035,  1163,  1329,   772,  1022,
    1040,  1171,  1174,  1176,  1177,  1178,  1216,  1220,  1185,  1229,
    1204,  1413,  1222,  1245,  1186,  1800,  1230,  1245,  1245,  1275,
    1844,  1187,  1188,   771,  1193,  1290,   771,  2141,  1415,  1311,
    1205,  2284,  2284,  1207,  1426,  1427,  2335,  1437,   762,  1208,
    1329,  2206,  1452,  1453,  1454,  1329,  1329,  1329,  1467,  1473,
    1479,  1488,  1490,  1507,  1275,  1501,  1275,  1513,   442,  1516,
    1578,  1530,  1582,  1536,  1595,  1598,  1601,   137,  1599,  1635,
     137,  1603,  1612,   772, -1607,  1845,   772,  1008,  1534,  1613,
    1276,  1614,  2227,  1800,  2229,  1615,  1620,  1622,  2230,  1625,
    2153,  1629,  1367,  1275,  1645,  1275,  2235,  1631,  1647,  1223,
    1657,  1669,  1662,  1675,  1673,  1682,  1677,  1688,  1690,  1693,
    1707,  1694,  1757,   973,  1695,  1697,  1699,  1760,  1704,  1702,
    1276,  1794,  1758,  1763,  1709,  1802,  1804,  1249,  1806,  1816,
     974,  1801,  1828,  1820,  1834,  1851,  1846,  1518,  1879,  1868,
    1892,  1871,  1588,  1907,  1915,  1937,  1800,  1933,  1275,  1847,
    1944,  1635,  1964,  2003,  2017,  2020,  2029,  1930,  1971,  2023,
    1765,  1329,  2032,  2039,  2030,   139,  2042,  2047,  2046,  1008,
    2375,  1008,  2049,  2043,  2048, -1577,  2069,  2061,  1434,  2065,
    2070,  1469,  2095,  1008,  2097,  2102,  2103,  2616,  2075,  2109,
    2110,  2117,  2113,  2318,  2136,  2116,  2142,  2144,  2145,  2148,
    2182,  2155,  2156,  2189,  2191,  2190,  2192,   429,  2201,  2203,
    2242,  2236,  2312, -1626,    52,  2248,  2780,  2286,  2276,  2358,
    2303,  2468,   975,   976,   977,  2309,  2315,  2320,  2337,  2355,
     633,   978,  2363,  2365,  1848,  2394,  2367, -1582,  2055, -1624,
    2440,  2442,   764,  2445,  2427,  2460,  2463,  1275,  2461,  1275,
    2464,  1725,  1772,  1726,  1773,  2473,  2482,  2487,  2477,   429,
    1635,  2524,  2521,    53,  2531,  2532,  2534,  2544,  2551,  2552,
    2556,  2492,  2537,  2575,  2651,  2591,  2612,   139,  2592,  1276,
    1275,  2658,  2457,  1276,  2659,  2695,  1276,   767,  2663,   982,
     983,   984,  2727,  2701,  2729,   985,  2665,   768,  2798,  2728,
    2738,    54,  2781,    55,  2800,    56,  2694,  2803,  2801,  2805,
    2819,    17,  2810,    57,    92,  1234,  1243,  1248,   125,  1275,
    1264,    38,   167,   257,  1287,  1243,   210,   267,   119,   278,
     291,   211,   242,   139,  1243,   539,   986,   358,  2501,  1323,
    1276,  1243,  1243,   587,   714,  1349,   548,  1329,   444,  2138,
     582,  1329,   359,   324,   528,   853,   805,   458,  1217,  1746,
    1243,  1243,   360,  2788,  1680,  2130,  1405,  1975,  1349,    58,
    2373,  2220,  2737,  2739,  2391,  1017,  1228,  1039,  1471,   769,
    2294,  2037,   966,  1635,  1635,  2036,  2094,  1433,  2526,  1276,
    1276,  1276,  1433,  2063,  2292,  2617,  2520,  1487,   361,  1275,
    1809,  1275,  1826,  1810,  2438,  1861,  1433,  1869,  2106,  2298,
    2444,   988,  1579,  1903,  1891,  1602,  2314,  2542,  2118,  1635,
    1911,   651,  2479,  2322,  2146,  1605,  2325,  2332,  2467,  2369,
      59,  1936,  2344,  2170,  1636,  1475,  2354,  1637,  2618,  1383,
    1243,  1660,  2198,  2485,  2199,  2787,  1974,  1276,  2548,  2490,
    1875,   770,  2562,  2347,  2348,  1628,  2349,  1808,   333,  1349,
    2518,  1264,    60,   989,   990,  2519,  2284,  2284,   779,   214,
    2350,  2160,  2016,   294,  2619,   311,   617,  1329,  1329,  1194,
     813,  1329,  1329,  1243,  1329,  2657,   429,   449,  2536,  2770,
    1770,  1771,   273,   542,  2620,   490,  2308,   771,  1243,  2184,
    2129,   790,  2721,     0,   604,     0,  1906,   994,    61,     0,
       0,    62,     0,     0,     0,     0,   655,     0,     0,     0,
       0,     0,  2621,     0,     0,     0,     0,   995,  2545,  1243,
       0,     0,   996,  1772,     0,  1773,     0,  1774,     0,   997,
       0,   137,  1276,  1349,     0,     0,     0,   772,  1255,     0,
       0,     0,     0,     0,   362,     0,  1008,     0,     0,     0,
       0,     0,     0,     0,  2668,  1634,     0,  2566,  2567,     0,
    2572,  1775,  1776,  1777,     0,     0,    63,  1276,     0,  1276,
       0,     0,     0,     0,     0,  2578,   363,     0,  1243,     0,
       0,  1661,     0,  1243,     0,     0,   660,  -235,    64,  1635,
       0,  2589,     0,     0,     0,  2622,     0,  1635,     0,     0,
       0,  2706,     0,  1255,     0,     0,  1276,     0,  1276,     0,
       0,  1778,  2623,  1779,    65,     0,    66,     0,     0,  2609,
    1780,     0,     0,  1781,  2613,  2614,     0,     0,     0,     0,
       0,     0,    67,     0,  2624,     0,     0,  2754,  2755,   973,
       0,     0,   364,     0,     0,  2654,     0,   365,     0,  1255,
       0,     0,     0,  1008,     0,  2625,   974,     0,  1634,     0,
       0,  1276,     0,     0,     0,     0,     0,  1635,     0,     0,
    1243,     0,     0,  2667,  2626,     0,  2669,     0,   366,  2671,
    2672,   669,  2627,     0,     0,     0,   367,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   368,
    1255,     0,     0,     0,     0,    68,     0,     0,  1243,  1782,
       0,     0,  1783,     0,     0,     0,     0,     0,     0,     0,
       0,  1243,  1243,     0,     0,     0,     0,     0,     0,  1367,
     369,     0,     0,   370,     0,  2804,     0,     0,     0,  2818,
    -914,   371,     0,  -914,     0,     0,     0,     0,   975,   976,
     977,     0,  -232,     0,     0,     0,     0,   978,     0,  1243,
    1276,     0,  1276,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1634,     0,     0,     0,
       0,     0,   372,  1223,     0,   373,     0,     0,     0,     0,
    1243,     0,     0,  1276,     0,     0,     0,     0,     0,     0,
    1920,     0,     0,     0,     0,     0,     0,     0,     0,  1927,
       0,     0,     0,  1408,     0,   982,   983,   984,  -914,     0,
    1935,   985,     0, -1816,     0,     0,     0,     0,     0,     0,
       0,  1243,  1276,     0,     0,  -914,     0,     0,     0,     0,
       0,     0,  1243,     0,     0,  1243,  1240,     0,  1963,     0,
       0,     0,  1269,  1243,  1240,  1240,     0,     0,  1634,  1269,
       0,     0,   986,     0,  1240,     0,     0,  1269,     0,     0,
       0,  1240,  1240,     0,     0,     0,     0,     0,     0,     0,
       0,  1269,     0,     0,     0,  1433,     0,     0,     0,     0,
    1240,  1240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1784,  2009,     0,
       0,     0,  1276,     0,  1276,     0,     0,     0,  1927,     0,
       0,     0,     0,     0,     0,     0,     0,  -914,  -914,  -914,
    2021,     0,     0,  2022,     0,     0,  -914,   988,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -914,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1785,     0,   864,
       0,     0,   865,     0,   866,     0,     0,  1634,  1786,   867,
    1240,     0,     0,     0,     0,     0,     0,   868,     0,     0,
    -914,     0,     0,  2053,     0,     0,  -914,     0,  -914,   989,
     990,     0,  -914,     0,  -914,  -914,  -914,     0,     0,  1269,
    -914,     0,  -914,     0,     0,     0,     0,  -914,     0,     0,
     869,   870,     0,  1240,     0,     0,     0,     0,     0,     0,
       0,   871,     0,     0,     0,     0,     0,     0,  1240,     0,
       0,     0,   872,   994,     0,   873,  1269,     0,     0,     0,
       0,  -914,     0,     0,     0,     0,  -914,  1269,     0,   874,
       0,     0,     0,   995,     0,     0,     0,     0,   996,  1240,
    -914,     0,     0,     0,     0,   997,     0,   137,     0,     0,
       0,     0,   875,     0,     0,     0,     0,     0,     0,     0,
     876,     0,   877,     0,  -914,     0,     0,     0,     0,     0,
    1634,  1634,     0,     0,     0, -1816,     0,     0,     0,     0,
       0,     0,     0,     0,  1269,     0,     0,     0,  1269,     0,
       0,     0,     0,   878,     0,     0,  -914,     0,  1240,  2147,
       0,     0,     0,  1240,   879,     0,  1634,     0,     0,   880,
       0,     0,     0,  1243,     0,     0,     0,     0,     0,     0,
       0,  1008,  1008,     0,     0,     0,     0,     0,     0,     0,
    -914,     0,     0,  2187,     0,   881,  -914,     0,     0,     0,
    2197,  2197,   882,     0,     0,   883,   884,     0,  -914,  -914,
       0,     0,     0,     0,     0,   885,     0,     0,     0,     0,
       0,  1008,   886,     0,   887,  1264,     0,   888,     0,     0,
    2216,     0,     0,     0,     0,  2009,  2009,     0,     0,     0,
    1008,     0,  -914,     0,     0,     0,     0,     0,     0,     0,
    1796,     0,  -914,     0,     0,     0,     0,     0,  -914,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     889,     0,  -914,     0,   890,     0,   891,  -914,     0,     0,
   -1816,     0,     0,     0,  -914,     0,  -914,   892,  1240,     0,
    2253,     0,  -914,     0,     0,     0,     0,     0,     0,     0,
       0,  1240,  1796,     0,     0,     0,     0,     0,     0,     0,
    1008,     0,     0,     0,   893,     0,     0,     0,     0,  2395,
       0,     0,  2396,     0,     0,  2397,     0,   894,  1235,     0,
       0,   762,     0,  2398,     0,     0,  2301,     0,     0,  1240,
       0,     0,     0,     0,   973,  2253,  1634,     0,     0,     0,
       0,     0,   895,   896,  1634,     0,     0,     0,     0,     0,
       0,   974,     0,   897,     0,     0,     0,  1269,     0,     0,
    1796,     0,     0,  1920,  1243,     0,     0,   898,     0,   899,
    2399,     0,     0,     0,     0,   900,     0,     0,     0,   901,
       0,     0,     0,     0,     0,     0,     0,   902,     0,  2400,
       0,     0,  2346,     0,     0,     0,   973,  1269,   903,     0,
       0,  1240,  1243,  1243,     0,     0,     0,   904,     0,     0,
    2253,     0,  1240,   974,  1634,  1240,   905,     0,     0,     0,
       0,   906,   907,  1796,     0,   908,  1387,   909,     0,     0,
       0,     0,     0,     0,     0,   910,     0,     0,     0,  2009,
       0,     0,  1341,   975,   976,   977,     0,     0,  1264,     0,
       0,     0,   978,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   912,     0,  2401,     0,
       0,     0,   913,     0,     0,     0,  2402,   914,     0,     0,
       0,     0,     0,  2431,     0,     0,     0,     0,     0,  2403,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   915,   975,   976,   977,  1342,     0,
     982,   983,   984,  1243,   978,     0,   985,     0,     0,     0,
       0,  2404,     0,     0,     0,   764,     0,     0,     0,     0,
       0,  2253,     0,   973,     0,     0,     0,     0,     0,     0,
       0,  1659,  2405,     0,  2406,     0,     0,     0,     0,     0,
     974,     0,     0,     0,     0,     0,  1269,   986,  1237,     0,
    1269,     0,     0,  1269,   980,     0,   981,     0,  2407,  2408,
     767,     0,   982,   983,   984,     0,     0,     0,   985,     0,
     768,     0,     0,     0,     0,  1238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2216,  2409,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1269,     0,   986,
       0,     0,     0,     0,     0,     0,  2410,     0,     0,     0,
       0,     0,   988,     0,     0,     0,     0,     0,   987,     0,
       0,  1341,   975,   976,   977,     0,     0,     0,     0,  2528,
       0,   978,  2411,     0,     0,     0,     0,     0,     0,     0,
    2412,     0,   769,     0,     0,     0,  1269,  1269,  1269,     0,
       0,     0,     0,  2413,     0,     0,     0,     0,  2414,     0,
    1243,     0,     0,     0,   989,   990,     0,     0,     0,     0,
       0,     0,     0,     0,   988,     0,     0, -1916,  2554,     0,
       0,     0,     0,  1240,     0,  2557,     0,  1408,  2559,   982,
     983,   984,     0,     0,     0,   985,     0,     0,     0,     0,
    2415,     0,     0,     0,  1269,     0,     0,     0,   994,  2416,
       0,     0,     0,     0,   770,     0,     0,     0,     0, -1179,
       0,     0,     0,     0,     0,     0,   989,   990,   995,     0,
    1243,     0,     0,   996,  1243,  1243,   986, -1179,  2417,     0,
     997,   244,   137,     0,  2593,     0,     0,     0,  2418,     0,
       0,     0,     0,     0,  2419,     0,     0,  2608,     0,     0,
     771,     0,     0,     0,     0,  2216,  2216,     0,     0,     0,
     994,  2216,     0,     0,     0,     0,     0,  1264,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,     0,     0,  1269,
       0,     0,   997,     0,   137,     0,     0,     0,  2216,     0,
     772,   988,  2216,  2216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2673,     0,     0,     0,
       0,     0,     0,     0,  1269,     0,  1269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   989,   990,     0,     0,     0,     0,   864,
       0,     0,   865,  1269,   866,  1269, -1916,     0,     0,   867,
       0,     0,     0,     0,  1240,     0,     0,   868,     0,     0,
       0,     0,     0,  2746,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   994,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0, -1179,     0,
     869,   870,  1240,  1240,     0,     0,     0,   995,  1269,  2776,
    2776,   871,   996,     0,     0,     0, -1179,     0,     0,   997,
     244,   137,   872,     0,     0,   873,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2790,   874,
       0,     0,     0,     0,     0,     0,     0,     0,  2793,  2797,
       0,     0,     0,     0,  2776,     0,     0,     0,     0,     0,
       0,     0,   875,     0,     0,     0,     0,     0,  2809,     0,
     876,     0,   877,     0,     0,     0,     0,     0,     0,  -750,
       0,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,     0,
    -750,  -750,  -750,     0,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   878,     0,     0,     0,  1269,     0,  1269,
       0,     0,     0,  1240,   879,     0,     0,     0,     0,   880,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1269,     0,     0,     0,     0,   881,     0,     0,     0,     0,
       0,     0,   882,     0,     0,   883,   884,     0,     0,     0,
       0,     0,     0,   864,     0,   885,   865,     0,   866,     0,
       0,     0,   886,   867,   887,     0,     0,   888,     0,  1269,
       0,   868,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   869,   870,     0,     0,     0,     0,
     889,     0,     0,     0,   890,   871,   891,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   872,   892,     0,   873,
       0,     0,     0,     0,  -750,  -750,     0,  -750,  -750,  -750,
    -750,     0,     0,   874,     0,     0,     0,     0,     0,  1269,
       0,  1269,     0,     0,   893,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   875,   894,     0,     0,
    1240,     0,     0,     0,   876,     0,   877,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   895,   896,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   897,     0,     0,     0,   878,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   898,   879,   899,
       0,     0,     0,   880,     0,   900,     0,     0,     0,   901,
       0,     0,     0,     0,     0,     0,     0,   902,     0,     0,
    1240,     0,     0,     0,  1240,  1240,     0,     0,   903,   881,
       0,     0,     0,     0,     0,     0,   882,   904,     0,   883,
     884,     0,     0,     0,     0,     0,   905,     0,     0,   885,
       0,   906,   907,     0,     0,   908,   886,   909,   887,     0,
       0,   888,     0,     0,     0,   910,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -750,   864,
       0,     0,   865,     0,   866,     0,     0,     0,     0,   867,
       0,     0,     0,     0,     0,     0,   912,   868,     0,     0,
       0,     0,   913,     0,   889,     0,     0,   914,   890,     0,
     891,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   892,     0,     0,     0,     0,     0,     0,  -750,     0,
     869,   870,     0,     0,   915,     0,     0,     0,     0,     0,
       0,   871,     0,     0,     0,     0,     0,     0,   893,     0,
       0,     0,   872,     0,     0,   873,     0,     0,     0,     0,
       0,   894,     0,     0,     0,     0,     0,     0,     0,   874,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   895,   896,     0,     0,
       0,     0,   875,     0,     0,     0,     0,   897,     0,     0,
     876,     0,   877,     0,     0,     0,     0,     0,     0,     0,
       0,   898,     0,   899,     0,     0,     0,     0,     0,   900,
       0,     0,     0,   901,     0,     0,     0,     0,     0,     0,
       0,   902,     0,   878,     0,     0,     0,     0,     0,     0,
       0,     0,   903,     0,   879,     0,     0,     0,     0,   880,
       0,   904,     0,     0,     0,     0,     0,     0,     0,     0,
     905,     0,     0,     0,     0,   906,   907,     0,     0,   908,
       0,   909,     0,     0,     0,   881,     0,     0,     0,   910,
       0,     0,   882,     0,     0,   883,   884,     0,     0,     0,
       0,     0,   911,     0,     0,   885,     0,     0,     0,     0,
       0,     0,   886,     0,   887,     0,     0,   888,     0,     0,
     912,     0,     0,     0,     0,     0,   913,     0,     0,     0,
       0,   914,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1037,     0,   915,     0,
     889,     0,     0,     0,   890,     0,   891,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   892,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -363,     0,
       0,  -363,     0,     0,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,     0,   893,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   894,     0,     0,
       0,     0,  -363,     0,  -363,     0,     0,     0,     0,     0,
       0,  -363,     0,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
       0,     0,   895,   896,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   897,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   898,     0,   899,
       0,     0,     0,     0,     0,   900,     0,  -363,     0,   901,
       0,     0,     0,     0,     0,     0,     0,   902,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   903,     0,
       0,     0,     0,     0,     0,     0,     0,   904,     0,     0,
       0,     0,     0,     0,     0,     0,   905,     0,  -363,     0,
       0,   906,   907,     0,     0,   908,     0,   909,     0,     0,
       0,     0,     0,   531,     0,   910,  -363,  -363,  -363,  -363,
    -363,     0,     0,  -363,  -363,     0,     0,  -363,  1668,     0,
       0,     0,     0,  -363,     0,  -363,     0,     0,     0,     0,
       0,  -363,     0,     0,     0,     0,   912,     0,  -363,     0,
       0,     0,   913,     0,     0,     0,  -363,   914,     0,  1045,
       0,  1046,     0,     0,     0,     0,  1047,     0,     0,  -363,
       0,     0,  -363,     0,  1048,     0,     0,     0,  -363,     0,
    -363,     0,     0,     0,   915,     0,     0,     0,     0,  -363,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -363,     0,     0,     0,  1049,  1050,     0,
       0,     0,     0,     0,     0,  -363,     0,     0,  1051,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1052,
       0,     0,  1053,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -363,  1054,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -363,  -363,
       0,     0,     0,     0,     0,     0,     0,  -363,     0,  1055,
    -363,     0,     0,     0,     0,     0,     0,  1056,     0,  1057,
       0,     0,     0,  -363,     0,  -363,  1058,     0,  1059,  1060,
    1061,  1062,  1063,  1064,  1065,  1066,     0,  1067,  1068,  1069,
       0,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    1079,  -363,     0,     0,     0,     0,     0,     0,     0,  -363,
       0,  1080,     0,     0,     0,     0,  1081,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -363,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -363,     0,  -363,
    -363,  -363,  1082,     0,     0,     0,     0,     0,     0,  1083,
       0,     0,  1084,  1085,     0,     0,     0,     0,  1235,     0,
       0,   762,  1086,     0,  1544,  1545,  1546,     0,     0,  1087,
       0,  1088,  1547,     0,  1089,     0,     0,     0,     0,     0,
    -363,     0,     0,     0,     0,  -363,     0,     0,     0,     0,
    -363,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -363,     0,     0,     0,     0,  -363,     0,     0,
       0,  -363,  -363,  -363,     0,     0,     0,  1090,     0,     0,
       0,  1091,     0,  1092,     0,  -363,     0,     0,     0,     0,
       0,  -363,  -363,     0,  1093,     0,   973,     0,   532,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   974,     0,     0,     0,     0,     0,     0,
       0,  1094,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1095,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1235,     0,     0,   762,     0,     0,  1096,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1097,     0,     0,  1548,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1549,     0,     0,  1098,     0,     0,     0,
       0,     0,  1099,     0,     0,     0,  1100,     0,     0,     0,
       0,     0,     0,     0,  1101,   975,   976,   977,     0,     0,
       0,     0,     0,     0,   978,  1102,     0,     0,     0,     0,
    1550,  1551,     0,     0,  1103,   764,     0,     0,     0,     0,
       0,   973,     0,  1104,     0,     0,     0,     0,  1105,  1106,
       0,     0,  1107,  1236,  1108,  1874,     0,     0,   974,     0,
       0,     0,  1109,     0,     0,     0,     0,     0,  1237,  1552,
    1553,     0,     0,     0,   980,  1110,   981,     0,     0,     0,
     767,     0,   982,   983,   984,     0,     0,     0,   985,     0,
     768,     0,     0,  1111,     0,  1238,     0,     0,     0,  1112,
       0,     0,     0,     0,  1113,     0,     0,  1235,  1554,     0,
     762,     0,     0,  1544,  1545,  1546,  1555,     0,     0,  1556,
       0,  1547,     0,     0,     0,     0,     0,  1557,     0,   986,
       0,  1114,     0,     0,  1558,     0,     0,     0,     0,  1559,
       0,     0,     0,     0,     0,     0,     0,     0,   987,     0,
     975,   976,   977,     0,     0,     0,     0,     0,  1560,   978,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,   769,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   973,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   974,  1237,   988,     0,     0,     0,     0,   980,
       0,   981,     0,     0,     0,   767,     0,   982,   983,   984,
       0,     0,     0,   985,     0,   768,     0,     0,     0,     0,
    1238,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   989,   990,     0,     0,
       0,     0,  1548,     0,   986,     0,     0,     0,     0,     0,
       0,     0,  1549,     0,     0,     0,     0,     0,  1561,     0,
    1562,     0,  1563,   987,     0,  1564,     0,  1565,  1566,  1567,
     771,     0,  1568,  1569,   975,   976,   977,     0,     0,     0,
     994,     0,     0,   978,     0,     0,     0,   769,     0,  1550,
    1551,     0,     0,     0,   764,     0,     0,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,     0,     0,     0,
       0,     0,   997,     0,   137,     0,     0,     0,     0,   988,
     772,     0,     0,     0,     0,     0,     0,  1237,  1552,  1553,
       0,     0,     0,   980,     0,   981,     0,     0,     0,   767,
       0,   982,   983,   984,     0,     0,     0,   985,     0,   768,
       0,     0,     0,     0,  1238,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,  1554,     0,     0,
       0,   989,   990,     0,     0,  1555,     0,     0,  1556,     0,
       0,     0,     0,     0,     0,     0,  1557,     0,   986,     0,
       0,     0,     0,  1558,     0,     0,     0,     0,  1559,     0,
       0,     0,     0,     0,     0,   771,     0,   987,     0,     0,
       0,     0,     0,     0,     0,   994,     0,  1560,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   530,
       0,   769,     0,     0,     0,   995,     0,     0,     0,  1235,
     996,     0,   762,     0,     0,     0,     0,   997,     0,   137,
    -363,     0,     0,     0,     0,   772,     0,     0,     0,     0,
       0,     0,     0,   988,     0,  -363,     0,     0,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   770,  -363,     0,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,     0,     0,   989,   990,   973,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1330,
       0,     0,     0,     0,   974,     0,     0,  1561,     0,  1562,
       0,  1563,     0,     0,  1564,     0,  1565,  1566,  1567,   771,
    -363,  1568,  1569,     0,     0,     0,     0,     0,  1235,   994,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   995,
       0,     0,     0,     0,   996,     0,     0,     0,     0,     0,
       0,   997,     0,   137,     0,     0,     0,     0,     0,   772,
       0,     0,  -363,     0,     0,     0,   531,     0,     0,  -363,
    -363,  -363,  -363,  -363,     0,     0,  -363,  -363,     0,     0,
       0,     0,     0,     0,     0,     0,   975,   976,   977,     0,
       0,     0,     0,     0,  -363,   978,   973,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,  -363,
       0,     0,     0,   974,     0,     0,     0,     0,     0,     0,
       0,     0,  -363,     0,     0,  -363,  1387,     0,     0,     0,
       0,  -363,     0,     0,     0,     0,     0,     0,     0,  1237,
       0,     0,     0,     0,     0,   980,     0,   981,     0,     0,
       0,   767,     0,   982,   983,   984,     0,     0,     0,   985,
       0,   768,  1235,     0,     0,   762,  1238,     0,  -363,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -363,     0,
     986,     0,     0,     0,     0,   975,   976,   977,     0,     0,
       0,     0,  -363,     0,   978,     0,     0,     0,     0,   987,
    -363,     0,     0,  -363,     0,   764,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -363,     0,     0,     0,
     973,     0,     0,   769,     0,     0,     0,     0,  -363,     0,
       0,     0,  1392,     0,     0,     0,  -363,   974,  1237,     0,
       0,     0,     0,     0,   980,  1235,   981,     0,   762,     0,
     767,     0,   982,   983,   984,   988,     0,     0,   985,     0,
     768,     0,     0,     0,     0,  1238,     0,     0,  -970,     0,
       0,  -970,     0,     0,     0,     0,     0,     0,     0,     0,
    -363,     0,  -363,  -363,  -363,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   770,     0,     0,     0,   986,
       0,     0,     0,     0,     0,     0,     0,   989,   990,  -363,
       0,     0,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,   973,     0,     0,     0,     0,  -363,   975,
     976,   977,     0,     0,     0,     0,     0,     0,   978,     0,
     974,   771,   769,     0,     0,  -363,  -970,     0,     0,   764,
       0,   994,     0,     0,  -363,  -363,  -363,     0,     0,     0,
       0,     0,     0,  -970,     0,     0,     0,     0,  -363,     0,
       0,   995,     0,     0,   988,  -363,   996,     0,     0,     0,
       0,   532,  1237,   997,     0,   137,     0,     0,   980,     0,
     981,   772,     0,     0,   767,     0,   982,   983,   984,     0,
       0,     0,   985,  1235,   768,     0,   762,     0,     0,  1238,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   989,   990,     0,  1518,
       0,     0,   975,   976,   977,     0,     0,     0,     0,     0,
       0,   978,     0,   986,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,  -970,  -970,  -970,     0,     0,
     771,     0,   987,     0,  -970,     0,     0,     0,     0,     0,
     994,     0,     0,     0,     0,  -970,     0,     0,     0,     0,
       0,   973,     0,     0,     0,  1237,   769,     0,     0,     0,
     995,   980,     0,   981,     0,   996,     0,   767,   974,   982,
     983,   984,   997,     0,   137,   985,     0,   768,  -970,     0,
     772,     0,  1238,     0,  -970,     0,  -970,     0,   988,     0,
    -970,     0,  -970,  -970,  -970,     0,     0,     0,  -970,     0,
    -970,     0,     0,     0,     0,  -970,     0,  1235,     0,     0,
     762,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,   987,     0,     0,     0,  -970,
     989,   990,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -970,   769,
     975,   976,   977,     0,     0,     0,     0,     0,     0,   978,
       0,     0,     0,     0,   771,     0,     0,     0,     0,     0,
     764,     0,  -970,     0,   994,   973,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   974,     0,   995,     0,     0,     0,     0,   996,
       0,     0,     0,  1237,  -970,     0,   997,     0,   137,   980,
       0,   981,     0,     0,   772,   767,     0,   982,   983,   984,
       0,   770,     0,   985,     0,   768,     0,     0,     0,     0,
    1238,     0,  1235,   989,   990,   762,     0,     0,     0,     0,
       0,     0,     0,     0,  -970,     0,     0,     0,     0,     0,
       0,     0,     0,  1481,     0,  1235,  -970,  -970,   762,     0,
       0,     0,     0,     0,   986,     0,     0,   771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   994,     0,     0,
       0,     0,     0,   987,   975,   976,   977,     0,  1664,     0,
    -970,     0,     0,   978,     0,     0,     0,   995,     0,     0,
    -970,     0,   996,     0,   764,     0,     0,   769,     0,   997,
     973,   137,     0,     0,     0,     0,     0,   772,     0,     0,
    -970,     0,     0,     0,     0,  -970,     0,   974,     0,     0,
       0,     0,  -970,   973,  -970,     0,     0,  1237,     0,   988,
    -970,     0,     0,   980,     0,   981,     0,     0,     0,   767,
     974,   982,   983,   984,     0,     0,     0,   985,  1235,   768,
       0,   762,     0,     0,  1238,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   989,   990,     0,     0,     0,     0,     0,   986,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,     0,   975,
     976,   977,     0,     0,     0,   771,     0,     0,   978,     0,
       0,     0,     0,     0,     0,   994,   973,     0,     0,   764,
       0,   769,   975,   976,   977,  1795,     0,     0,   762,  1522,
       0,   978,     0,   974,     0,   995,     0,     0,     0,     0,
     996,     0,   764,     0,     0,     0,     0,   997,     0,   137,
       0,     0,  1237,   988,     0,   772,     0,     0,   980,     0,
     981,     0,     0,     0,   767,     0,   982,   983,   984,     0,
       0,     0,   985,     0,   768,  1237,     0,     0,     0,  1238,
       0,   980,     0,   981,     0,     0,     0,  1280,     0,   982,
     983,   984,     0,   770,     0,   985,     0,   768,     0,     0,
       0,     0,  1238,   973,     0,   989,   990,     0,     0,     0,
       0,     0,     0,   986,     0,     0,     0,     0,     0,     0,
     974,     0,     0,     0,     0,   975,   976,   977,     0,     0,
       0,     0,   987,     0,   978,     0,   986,     0,     0,   771,
       0,     0,     0,     0,     0,   764,     0,     0,     0,   994,
       0,     0,     0,     0,     0,   987,   769,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   995,
       0,     0,     0,     0,   996,     0,     0,     0,  1237,   769,
       0,   997,     0,   137,   980,     0,   981,     0,   988,   772,
     767,     0,   982,   983,   984,     0,     0,     0,   985,     0,
     768,     0,     0,     0,     0,  1238,     0,     0,     0,     0,
       0,   988,   975,   976,   977,     0,     0,     0,     0,     0,
       0,   978,  1961,     0,     0,     0,     0,     0,   770,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,   986,
     989,   990,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   770,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,   989,   990,  1237,     0,     0,     0,     0,
       0,   980,     0,   981,   771,     0,     0,   767,     0,   982,
     983,   984,   769,     0,   994,   985,     0,   768,     0,     0,
       0,     0,  1238,     0,     0,     0,     0,   771,     0,     0,
       0,     0,     0,     0,   995,     0,     0,   994,     0,   996,
       0,     0,     0,     0,   988,     0,   997,     0,   137,     0,
       0,     0,     0,     0,   772,     0,   986,   995,     0,     0,
       0,     0,   996,     0,     0,     0,     0,     0,     0,   997,
       0,   137,     0,     0,     0,   987,     0,   772,     0,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   989,   990,     0,   769,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     771,   988,   625,     0,     0,     0,     0,     0,     0,     0,
     994,     0,     0,     0,     0,     0,     0,   626,     0,     0,
     627,   628,   629,   630,   631,   632,   633,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,     0,     0,     0,
       0,   770,   997,     0,   137,     0,     0,     0,     0,     0,
     772,     0,     0,   989,   990,     0,   634,     0,   635,   636,
     637,   638,   639,   640,   641,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   994,     0,     0,
       0,     0,   642,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   995,     0,     0,
       0,     0,   996,     0,     0,     0,     0,     0,     0,   997,
       0,   137,     0,     0,     0,     0,     0,   772,     0,     0,
       0,     0,     0,  1720,     0,     0,  1721,     0,     0,  1722,
     627,   628,   629,   630,   631,   632,  1723,  1724,     0,     0,
       0,   643,   644,   645,   646,   647,     0,     0,   648,   649,
       0,     0,     0,     0,     0,     0,     0,  1725,     0,  1726,
       0,     0,     0,     0,     0,     0,   634,     0,   635,   636,
     637,   638,   639,   640,   641,     0,     0,     0,     0,     0,
       0,   650,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,   651,     0,     0,
       0,     0,     0, -1892,     0,   627,   628,   629,   630,   631,
     632,     0,   642,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     652,   634,     0,   635,   636,   637,   638,   639,   640,   641,
       0,     0,     0,  1727,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     653,   643,   644,   645,   646,   647,     0,     0,   648,   649,
       0,     0,  1728,     0,   654,     0,     0,   642,  1729,     0,
    1730,     0,   655,     0,     0,   656, -1843,     0,     0,     0,
       0,     0,     0,  1731,     0,     0,     0,     0,   657,     0,
       0,   650,     0,     0,     0,     0,     0,     0,     0,     0,
     658,     0,     0,     0,    94,     0,     0,   651,   659,     0,
       0,     0,     0,     0,     0,  1732,     0,     0,     0,     0,
       0,     0,     0,     0,  1733,     0,   643,   644,   645,   646,
     647,     0,   973,   648,   649,     0,     0,     0,  1734,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   974,
     652,     0,   660,     0,   661,   662,   663,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   650,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1735,   664,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1736,   654,     0,     0,     0,     0,     0,
    -360,     0,   655,     0,     0,   656,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -1892,   657,     0,
    1737,     0,     0,     0,     0,   652,   665,   666,   667,     0,
       0,     0,     0,     0,     0,   973,     0,     0,     0,     0,
     668,   975,   976,   977,     0,     0,  1738,   669,     0,     0,
     978,     0,   974,     0,  1739,     0,     0,     0,     0,     0,
       0,   764,     0,     0,     0,     0,     0,     0,     0,   654,
       0,     0,  1740,   973,     0,     0,     0,     0,     0,     0,
     656,     0,   660,     0,   661,   662,   663,     0,     0,     0,
     974,     0,     0,   657,   979,     0,     0,     0,     0,     0,
     980,     0,   981,     0,     0,     0,   767,     0,   982,   983,
     984,     0,     0,     0,   985,     0,   768,     0,     0,     0,
       0,     0,     0,     0,     0,  1741,     0,     0,     0,     0,
    -653,     0,     0,     0,     0,  1742,     0,     0,     0,     0,
       0,     0,     0,     0,   975,   976,   977,     0,     0,     0,
       0,     0,  1743,   978,     0,   986,   665,   666,   667,   661,
     662,   663,     0,     0,   764,     0,     0,     0,     0,     0,
     668,     0,     0,     0,   987,     0,  1744,   669,     0,     0,
       0,     0,   975,   976,   977,     0,     0,     0,     0,     0,
       0,   978,     0,     0,     0,     0,     0,   979,   769,     0,
       0,     0,   764,   980,     0,   981,     0,     0,     0,   767,
       0,   982,   983,   984,     0,     0,     0,   985,     0,   768,
     973,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     988,   665,   666,   667,     0,   979,     0,   974,     0,     0,
       0,   980,     0,   981,     0,     0,     0,   767,     0,   982,
     983,   984,     0,     0,     0,   985,     0,   768,   986,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     770,     0,     0,     0,     0,     0,     0,   987,     0,     0,
       0,     0,   989,   990,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,   769,     0,     0,  1424,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   991,   987,   771,     0,   992,   993,
       0,     0,     0,     0,     0,     0,   994,     0,     0,   975,
     976,   977,     0,   988,     0,     0,     0,     0,   978,   769,
       0,     0,     0,     0,     0,     0,   995,     0,     0,   764,
       0,   996,     0,     0,     0,     0,     0,     0,   997,     0,
     137,   973,     0,     0,     0,     0,   772,     0,     0,     0,
       0,   988,     0,   770,     0,     0,     0,     0,   974,     0,
       0,     0,   979,     0,     0,   989,   990,     0,   980,     0,
     981,     0,     0,     0,   767,     0,   982,   983,   984,   973,
       0,     0,   985,     0,   768,     0,     0,  1442,     0,     0,
       0,   770,     0,     0,     0,     0,   974,   991,     0,   771,
       0,   992,   993,   989,   990,     0,     0,     0,     0,   994,
       0,  1978,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   986,     0,     0,     0,     0,     0,   995,
       0,     0,     0,     0,   996,   991,     0,   771,     0,   992,
     993,   997,   987,   137,     0,     0,     0,   994,     0,   772,
     975,   976,   977,     0,     0,     0,     0,     0,     0,   978,
       0,     0,     0,     0,     0,     0,   769,   995,     0,     0,
     764,     0,   996,     0,     0,     0,     0,     0,     0,   997,
       0,   137,     0,     0,     0,     0,     0,   772,   975,   976,
     977,     0,     0,     0,     0,     0,     0,   978,   988,     0,
       0,     0,     0,   979,     0,     0,     0,     0,   764,   980,
       0,   981,     0,     0,     0,   767,     0,   982,   983,   984,
       0,     0,     0,   985,     0,   768,   973,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   770,     0,
       0,   979,     0,   974,     0,     0,     0,   980,     0,   981,
     989,   990,     0,   767,     0,   982,   983,   984,  1980,     0,
       0,   985,     0,   768,   986,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   991,   987,   771,     0,   992,   993,     0,     0,
       0,     0,     0,     0,   994,     0,     0,     0,     0,     0,
       0,     0,   986,     0,     0,     0,     0,   769,     0,     0,
       0,     0,     0,     0,   995,     0,     0,     0,     0,   996,
       0,   987,     0,     0,     0,     0,   997,     0,   137,     0,
       0,     0,     0,     0,   772,   975,   976,   977,     0,   988,
       0,     0,     0,     0,   978,   769,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   764,     0,     0,     0,     0,
       0,   973,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   988,   974,   770,
       0,     0,     0,     0,     0,     0,     0,     0,   979,     0,
       0,   989,   990,     0,   980,     0,   981,     0,     0,     0,
     767,     0,   982,   983,   984,     0,     0,     0,   985,     0,
     768,     0,     0,  1990,     0,     0,     0,   770,     0,     0,
       0,     0,     0,   991,     0,   771,     0,   992,   993,   989,
     990,     0,     0,     0,     0,   994,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   986,
       0,     0,     0,     0,     0,   995,     0,     0,     0,     0,
     996,   991,     0,   771,     0,   992,   993,   997,   987,   137,
     975,   976,   977,   994,     0,   772,     0,     0,     0,   978,
       0,     0,     0,     0,     0,     0,     0,   973,     0,     0,
     764,     0,   769,   995,     0,     0,     0,     0,   996,     0,
       0,     0,     0,   973,   974,   997,     0,   137,     0,     0,
       0,     0,     0,   772,     0,     0,     0,     0,     0,  2758,
     974,     0,     0,   979,   988,     0,     0,     0,     0,   980,
       0,   981,     0,     0,     0,   767,     0,   982,   983,   984,
       0,     0,     0,   985,     0,   768,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   989,   990,     0,     0,
       0,     0,     0,     0,   986,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   975,   976,   977,     0,
       0,     0,     0,   987,     0,   978,     0,     0,     0,     0,
     771,     0,   975,   976,   977,     0,   764,     0,     0,     0,
     994,   978,     0,     0,     0,     0,     0,   769,     0,     0,
       0,     0,   764,     0,  2759,     0,     0,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,     0,     0,   979,
       0,     0,   997,     0,   137,   980,     0,   981,     0,   988,
     772,   767,     0,   982,   983,   984,     0,     0,     0,   985,
       0,   768,     0,     0,     0,     0,     0,   767,     0,   982,
     983,   984,     0,     0,     0,   985,     0,   768,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     986,   989,   990,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   771,     0,   992,     0,     0,
       0,     0,     0,   769,     0,   994,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,     0,     0,     0,     0,   995,     0,     0,     0,     0,
     996,     0,     0,     0,     0,   988,     0,   997,     0,   137,
       0,     0,     0,     0,     0,   772,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   770,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   989,   990,     0,
       0,   770,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   989,   990,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   771,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   994,     0,     0,     0,     0,     0,   771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   994,     0,     0,
       0,   995,     0,     0,     0,     0,   996,     0,     0,     0,
       0,     0,     0,   997,     0,   137,     0,   995,     0,     0,
       0,   772,   996,     0,     0,     0,     0,     0,     0,   997,
       0,   137,     0,     0,     0,     0,     0,   772
};

static const yytype_int16 yycheck[] =
{
     116,   797,   103,   394,   105,   396,   367,   103,   969,   105,
     111,  1125,   182,   601,   602,   111,  1152,  1235,   728,   856,
     693,  1216,   792,   159,  1604,  1459,  1459,  1174,   802,  1459,
    1459,  1123,  1459,  1610,   135,   426,  1499,  1459,   605,   135,
     210,  1128,   715,  1377,   405,   436,  1387,  2053,   658,  1267,
    1138,  1366,  1548,  1119,  2019,  1849,  1539,     0,    10,    18,
      56,    57,    58,  1130,  1152,  1275,    53,  1779,    64,     0,
     706,  1138,    10,    60,    10,     1,   801,  1481,     1,  1956,
      58,   669,  1193,   756,   185,  1152,    10,    49,    23,   859,
      10,    60,   365,     8,    99,  1386,  1207,     9,  2015,    90,
       1,    10,    10,    99,   100,    32,   102,  2230,  1627,   113,
      60,   107,   108,    32,     1,  1279,    89,  2034,  2035,  1329,
     116,  2038,    28,   162,    60,   132,    38,   117,   127,  1533,
     144,    51,   177,   806,   132,   178,   252,   133,   155,  1473,
      31,    99,   179,    75,   246,   234,   259,   205,  1262,    66,
     239,    10,   205,   227,  1469,   765,   766,    50,     7,   179,
      18,   145,   173,  2031,  2081,   161,   179,    22,  2116,  2086,
     215,   126,  1382,    50,    60,   162,    67,   259,    69,    50,
     296,  2187,   234,  1815,  1250,   191,   259,   168,  1522,   335,
      73,   128,   132,  1955,    22,  1359,   192,  1601,   141,   313,
     370,  2088,   145,   265,   359,   417,   816,   164,   204,   259,
     141,   847,   118,    90,   145,   175,   227,   413,   220,   220,
     413,   127,   243,   259,   235,  2589,  1858,   762,   190,  1169,
     292,    60,   219,   220,    28,    10,  2465,  2731,     1,  1117,
    1307,   413,   174,  2191,   180,  1125,   126,  1125,  1126,    12,
     110,  1318,   368,   198,   250,   333,    33,  1135,  1150,   202,
    1664,   234,   258,   454,  1142,  1143,     0,   992,   196,   259,
     179,   202,  1587,   485,  2151,    10,   259,  1909,  1170,   190,
     471,  2775,  1162,  1161,  1162,  2202,   273,  1375,  1013,   485,
    2654,    73,   485,   233,   214,  1543,   283,   347,    61,   234,
     201,   212,    29,   218,   219,    50,   841,   243,  1375,   311,
     465,   322,  1379,   485,   259,   417,   274,    73,   319,  2548,
    1260,   259,   259,   238,   118,   237,   246,   247,   345,   257,
      50,  1911,  2044,  1965,  1675,  1583,    99,   294,   101,   259,
     103,  1682,    73,   459,   445,  1018,   447,   448,   111,   269,
     265,   447,   448,   454,  1669,   259,   296,  1820,   454,   230,
    1608,   367,   346,   254,  2312,  2233,   512,   513,   364,   979,
     471,   362,   295,   474,   475,   471,   477,   292,   430,   480,
     481,   230,   340,   113,    64,  1868,  1882,    73,  1871,  1481,
     277,   205,    73,  1118,   317,  1891,   392,  1801,   456,   513,
     513,   979,   129,   346,   167,   243,   519,   403,   314,  2171,
     512,    73,    92,    93,    73,   346,   412,   413,   471,   415,
     416,  1299,   461,   375,   513,   421,   128,   359,  2060,    95,
     428,   351,   506,   292,   512,     1,   127,   519,   398,   214,
     513,  1533,   438,   544,   545,   336,   460,  1594,   544,   545,
     512,  1538,  1330,   460,  1973,  1619,   477,  1024,  1025,   455,
    1185,  1186,  1187,  1778,   313,   380,   321,  1140,   513,   362,
     513,  2388,   358,  1198,  1199,  2392,   513,   513,    55,   214,
    1205,   582,   259,   599,   259,   362,   582,   214,   492,   470,
     606,   408,  2369,   513,   269,   354,   513,   260,    64,   423,
     513,  1275,   513,   423,   605,   455,   513,   394,   513,  1601,
    1598,  1389,   474,   512,   513,  1581,   507,   460,  1809,  1860,
     516,  2644,   405,   513,   259,  2237,    92,    93,   506,   460,
     513,  1598,   259,   465,   269,   508,   491,   653,   811,  1117,
     536,   477,   269,   306,   471,   514,  1612,  1125,  1126,   469,
     512,   510,   471,   505,   234,   513,   283,  1135,   659,   460,
    1707,   557,  1140,   559,  1142,  1143,   562,   563,  1146,   565,
     513,  1638,  1664,   460,   457,   513,   351,  1795,   513,  2156,
    1828,  1217,   513,  1161,  1162,  1696,  1901,   513,  2465,  1799,
     513,  1169,   579,   451,   509,   519,     7,   512,   510,   519,
     596,  2518,  2519,  1481,   513,   513,   512,   462,  1382,   513,
    1188,   491,   608,  2245,   507,  1193,   351,   362,   473,  2102,
     469,   512,  1937,   405,   351,    59,   613,  1237,    62,  1207,
     507,  1879,    66,   396,   462,  2522,  2523,   382,   467,   477,
     206,  1519,   362,   472,  2438,   473,   326,   234,   423,   405,
     352,   259,   512,   513,  1532,  1533,  2288,   471,  2290,  1237,
      34,   777,   382,  1241,    59,   259,   782,   244,   234,    33,
    2127,    66,   668,   162,   405,   457,   846,   440,   259,    40,
     259,   254,  1260,   799,   313,  1933,   787,   788,   423,  2321,
      31,  2095,  1570,  2097,   469,   164,   423,   460,    23,   426,
     427,   457,  2708,   804,   370,    60,  1284,   409,   259,  1801,
      59,   980,   981,   709,    27,   460,   712,    66,   987,   405,
     450,  1299,   259,  1601,   405,   455,   457,  2359,  2360,  1876,
     421,  1122,  2136,  1124,   469,  1509,   205,  1804,   513,   246,
     460,  1807,  2707,   405,   519,   156,   405,   259,    35,   113,
     513,    67,  1330,    69,   291,   116,  1147,  2098,  1149,  2146,
     326,   274,   507,  1154,  1642,   236,  1344,  2007,   205,   110,
     461,   457,   335,   202,   125,  1653,   457,  1168,  1656,   445,
     460,  1506,  2505,   334,   519,  2189,  1664,   507,   417,   130,
     273,  2039,   519,   260,    59,   457,   170,   334,   457,   231,
     318,    66,  2117,   214,   422,   467,   295,  2055,   326,   298,
     472,  1389,  2308,   390,   231,     0,  1394,   172,   362,  1907,
     413,   512,   395,   259,   214,   294,    31,  2075,   169,   254,
    1526,  1527,  1528,  1529,  1139,   238,   462,   271,   462,   201,
    1907,  1908,   253,   460,   255,   244,   218,    39,   259,   473,
     191,   334,   968,  2310,  2311,    47,   485,  2105,   269,   313,
    1165,  2109,   265,   274,  1474,   206,   238,   191,  2202,   259,
     225,   277,  1646,   460,  1265,  2455,   271,   401,   239,   269,
    2195,   156,  1996,   265,   510,   198,  1277,    92,  1455,   292,
    1500,    31,   485,   265,   460,   259,   270,  2529,  2530,   238,
    2148,    10,   205,  1481,    13,   513,   460,    16,    17,   234,
     417,   345,    67,   382,    69,   351,   327,   346,  1034,   513,
     292,   472,   271,  1024,  1025,   519,   265,    67,    36,    69,
     274,    39,   513,   404,   513,   472,   460,   510,    46,    47,
     351,  1519,   455,   375,  2331,   382,   564,  1620,  2671,   512,
     345,  2087,  2088,   292,  1532,  1533,   141,   393,   375,  2539,
     145,   351,  1687,   507,  1689,   128,   328,   329,   519,   403,
     395,   425,   461,   173,   408,   442,  1701,  2513,     7,     7,
    2220,   463,    10,   345,   467,  1254,    94,   423,   394,   472,
     314,   390,  1570,  2450,  2242,   513,   345,   284,   285,   286,
    2248,   513,    87,  2095,   345,  2097,   271,     7,   403,   391,
    2258,   174,   423,   408,  1319,  2592,  2103,   202,  1119,   322,
     336,   213,  1123,  1601,   792,  1799,   413,   227,  2276,  1130,
    1131,   513,  1705,   423,   265,   235,   503,  1138,  2574,   401,
    1141,  2259,  1620,   512,  2136,  1146,   513,  1148,   409,  1150,
    1151,  1152,  1153,   245,   403,   163,  1729,    85,   469,   408,
     168,   292,   349,   460,  1642,   460,  1944,  2134,  2155,  1170,
     356,   120,   121,   122,   102,  1653,   268,   462,  1656,   513,
     345,  1361,   246,   519,   192,   429,  1664,   431,   473,  2337,
    1395,   859,  2555,   346,  2342,  2343,  1266,  2189,   485,   254,
    2677,   214,   513,   259,   459,   213,   509,  2355,   519,   512,
     259,   460,   467,   468,   254,  2229,   513,   472,  1696,   141,
    1511,   160,   322,  1711,  1712,   274,  2675,   155,   180,   519,
       7,   323,  1412,   419,   420,   291,   421,   509,   403,  1835,
    2574,  2574,   306,   408,  2574,  2574,   259,  2574,  1318,  1250,
     460,  1729,  2574,  1849,   385,   418,   269,   342,   314,     1,
     268,   346,   162,   214,   513,    27,   194,   195,   196,  1270,
     509,   280,   281,   209,   210,   203,   461,   326,   334,  2427,
    2327,   336,  1792,  2732,  2733,   214,   214,   239,   475,   476,
     242,   240,   384,   480,   233,   460,   336,   306,   307,    41,
      42,    43,    44,    45,   467,   254,  1307,   277,   259,   472,
     490,   401,   248,   249,   214,   323,  1386,  1318,   269,   247,
     549,   455,  2802,   801,   253,   253,   255,   255,   508,  2477,
     259,   259,  2002,   261,   262,   263,    78,    79,   351,   267,
     269,   269,   400,  2491,  2492,   289,   274,   206,   164,   126,
      57,   222,   168,   253,   234,   255,    48,  2700,   297,   259,
      13,  1362,   591,    16,    17,   250,   251,  2145,     7,   269,
     765,   766,   506,    65,  1375,   234,   384,   265,  1379,   259,
     308,   512,   513,   254,  2058,    92,   356,   174,   358,   397,
     482,   340,   621,  2669,  2670,   339,   454,   293,   327,   327,
     351,   265,   109,   352,   292,  2183,  2184,   766,  2751,   467,
     423,   265,   119,   105,   472,  1416,   472,    99,   100,   206,
    1416,   816,   351,   351,  1494,  1686,   259,   327,   292,   325,
    1940,   190,   312,  2709,   314,   174,     9,   214,   292,   181,
     182,   183,   184,   185,   186,   187,   188,   189,  2440,  2074,
    2442,   351,  2728,   212,  1455,   383,   469,   816,   311,   292,
    2555,   357,     9,   519,   513,    38,  1944,   206,  2078,    10,
     519,   265,   423,   361,   482,     9,   253,   190,   255,   259,
    1481,  2218,   259,    13,    14,   356,  2522,  2523,  2061,  2525,
     343,    38,   269,   364,   423,   423,     9,   446,   292,   212,
     513,   979,    32,   460,    38,  2623,   519,   435,   436,  1141,
     363,  1999,  2000,   991,   992,   993,  2294,   109,   469,    60,
      16,  1153,  2798,   423,   513,    38,   455,   119,   464,    10,
     466,     2,  1533,  1603,   462,  1013,     7,    33,   430,   178,
     469,   469,   234,  2116,  2054,   473,    42,   765,   766,   241,
     327,   479,    56,    57,  1224,   460,  2181,  1453,  1228,  2379,
     252,   461,  1458,  1459,  2578,  1461,   460,   180,   519,   469,
     254,   499,   458,   257,   351,   214,   504,   190,   459,    60,
    1581,   467,  1652,   511,   513,   513,   472,   468,    92,   467,
     519,   519,   457,   335,   472,   483,   234,  1598,   816,   212,
    1601,     7,   467,  1639,     7,   109,   348,   472,  1202,  1203,
    1204,  1612,  2659,   513,   253,   119,   255,   458,  2191,   519,
     259,   312,  1913,   314,   512,   401,   467,   280,   281,   242,
     269,   472,   214,   412,  1176,  1177,  1178,  1638,  1419,   180,
    1118,  1422,   412,   256,   558,  1123,   423,  1428,   460,   563,
    1666,  1432,  1130,   306,   307,   304,   305,   475,  1439,   477,
    1138,   460,   480,  1664,   356,   357,  1208,  2145,   356,  2365,
     358,  2367,   460,   214,  1152,   457,   460,   259,   455,   371,
     356,   373,   358,  2461,    60,   467,   254,   269,   327,   257,
     472,  1692,   469,   356,   254,   358,  1692,   257,  1176,  1177,
    1178,   159,   243,   161,   220,  2183,  2184,  1185,  1186,  1187,
    1188,  2758,   351,   176,   491,  1193,  1200,  1201,   259,  1735,
    1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,   269,  1207,
    1208,  1186,  1187,   214,   457,  2782,   513,    71,   513,  2312,
    1756,   191,   519,   193,   467,   513,  2566,  2567,   460,   472,
    1755,   460,  2572,  2531,  1650,   460,   460,  2535,  2536,  1237,
    1765,  1766,   243,   159,  1769,   161,   513,   460,   460,   351,
     345,   513,   494,   495,   496,   497,   259,   259,   259,   494,
     495,   496,   497,    68,   423,    70,   201,   477,   269,  2609,
     451,  2487,  1270,  2613,  2614,   991,  1797,   993,   407,   513,
    1801,   408,   417,  1804,    66,    62,  1807,  2668,   214,   234,
     351,   214,  2525,   259,  1710,   507,  2294,   494,   495,   496,
     497,   333,   326,   460,   408,  1721,   330,   331,    36,  1307,
     469,    39,  1728,   629,   630,   631,   632,   259,    46,    47,
    1318,   423,   513,  1913,   231,    27,  2137,   253,   460,   255,
     253,   110,   255,   259,   460,   460,   259,  1858,   317,   259,
     259,  1757,  1932,   269,   275,   463,   269,   371,    24,  2130,
     351,   105,   460,   512,   513,   446,   191,   125,   463,    18,
     519,   513,   423,    89,   388,   389,    94,   469,  1366,  1688,
     460,  1690,   401,  1963,  1693,  1694,  1695,  1375,   275,   356,
    1699,  1379,  1972,  1702,  1703,   408,  1907,  1908,  1909,  1945,
    1946,  1947,  1948,  1949,  1950,  1951,  1952,   409,    59,   512,
    1816,   327,   430,   265,   327,    40,   239,   460,   469,  2642,
     409,  2644,   513,   426,   336,   515,   477,   519,   321,   513,
    1836,   315,   423,   264,     8,   351,  1842,   401,   351,   460,
     460,   258,   401,   460,   513,   163,   512,   401,   460,   371,
     460,   460,    88,    88,  1965,  2678,  2679,   127,  2681,   439,
     460,   401,   513,    23,  2687,  2688,   395,   314,   519,   311,
     460,   510,   206,  2461,   192,   401,   513,   513,   469,   508,
     510,  1469,   460,   390,  1995,   234,   477,   257,   513,  1995,
     455,   220,   125,  1481,   455,   213,    54,   513,   451,  2010,
     471,    27,  2028,   407,  2015,   418,   311,   423,   519,   456,
     423,   198,   417,   353,   513,   454,   471,   451,  1506,   259,
     382,   406,   513,  2034,  2035,   513,   341,  2038,   519,   460,
     460,   513,   117,   471,   471,   471,   190,   460,   471,   513,
     172,   225,   460,  2531,   471,  1533,   460,  2535,  2536,  2060,
     268,   471,   471,   469,   471,   259,   469,  2137,   314,   455,
     471,  2087,  2088,   471,   513,   513,  2146,   513,    10,   471,
    2081,  1977,   410,   462,    31,  2086,  2087,  2088,   133,   198,
     134,   455,   135,   392,  2095,   136,  2097,   137,   356,   138,
     104,   139,   450,   140,   471,   455,    50,   513,   143,  1587,
     513,   411,   451,   519,   454,   323,   519,  1595,   506,   454,
    1598,   448,  2018,  1601,  2020,   146,   198,   147,  2024,   148,
    2200,   149,   274,  2134,    32,  2136,  2032,   508,   150,    50,
     151,   198,   152,   115,   153,   222,   154,   457,   457,   457,
     117,   457,   417,    85,   457,   457,   457,   112,   455,   457,
    1638,   455,   317,   199,   460,   225,   382,   259,   344,   275,
     102,   205,   299,   380,   303,   493,   384,   168,   131,   510,
     178,   510,   370,   455,   171,   455,  1664,   132,  2189,   397,
      50,  1669,   198,   206,   304,    59,   513,   230,   230,   206,
     254,  2202,   275,   168,   460,  2206,   518,   430,   239,  1687,
    2206,  1689,   279,   517,   304,   205,   386,   455,  1696,   455,
     367,    31,   205,  1701,   205,    18,   451,     3,   233,   131,
     142,    50,   370,  2129,   205,   455,   144,     9,   198,   132,
     430,   510,   510,   205,   455,   460,    10,  2538,     8,   513,
     299,   512,    50,   205,    12,   302,  2744,   512,   300,   335,
     507,  2331,   194,   195,   196,   507,   191,   319,   296,   470,
      46,   203,   318,   116,   482,    48,   445,   205,   418,   205,
     366,   366,   214,   105,   299,   386,   265,  2288,    50,  2290,
     239,    67,    68,    69,    70,   265,   501,    98,   301,  2590,
    1778,     9,    59,    61,    50,   113,   465,   265,   265,   265,
     460,   297,   342,   112,   460,   342,   212,  2318,   490,  1797,
    2321,   345,  2318,  1801,   110,   425,  1804,   259,   223,   261,
     262,   263,   122,   234,   288,   267,   304,   269,    50,   198,
     291,    99,   342,   101,   326,   103,   372,   311,   326,   432,
     326,     7,   318,   111,    46,  1116,  1117,  1118,    92,  2360,
    1121,    26,   127,   202,  1125,  1126,   148,   207,    75,   222,
     239,   150,   178,  2374,  1135,   505,   308,     5,  2374,  1140,
    1858,  1142,  1143,   545,   617,  1146,   521,  2388,   411,  1912,
     539,  2392,    20,   287,   498,   788,   755,   426,  1033,  1459,
    1161,  1162,    30,  2756,  1414,  1905,  1167,  1680,  1169,   167,
    2204,  2006,  2681,  2687,  2230,   806,  1042,   859,  1233,   351,
    2100,  1768,   795,  1901,  1902,  1767,  1852,  1188,  2420,  1907,
    1908,  1909,  1193,  1803,  2098,   211,  2407,  1250,    66,  2440,
    1492,  2442,  1519,  1494,  2286,  1538,  1207,  1541,  1871,  2102,
    2304,   383,  1303,  1591,  1584,  1339,  2125,  2458,  1899,  1937,
    1602,   237,  2358,  2137,  1925,  1344,  2144,  2146,  2331,  2200,
     228,  1632,  2158,  1953,  1373,  1236,  2184,  1375,   254,  1153,
    1241,  1389,  1972,  2363,  1972,  2751,  1679,  1965,  2465,  2368,
    1570,   423,  2495,  2177,  2177,  1362,  2177,  1489,   300,  1260,
    2396,  1262,   260,   435,   436,  2401,  2522,  2523,   700,   152,
    2177,  1940,  1729,   243,   290,   271,   582,  2518,  2519,   996,
     760,  2522,  2523,  1284,  2525,  2600,  2817,   418,  2452,  2722,
      25,    26,   216,   510,   310,   451,  2114,   469,  1299,  1960,
    1904,   719,  2671,    -1,   561,    -1,  1594,   479,   306,    -1,
      -1,   309,    -1,    -1,    -1,    -1,   332,    -1,    -1,    -1,
      -1,    -1,   338,    -1,    -1,    -1,    -1,   499,  2464,  1330,
      -1,    -1,   504,    68,    -1,    70,    -1,    72,    -1,   511,
      -1,   513,  2060,  1344,    -1,    -1,    -1,   519,  2589,    -1,
      -1,    -1,    -1,    -1,   222,    -1,  2074,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2620,  1366,    -1,  2503,  2504,    -1,
    2506,   106,   107,   108,    -1,    -1,   374,  2095,    -1,  2097,
      -1,    -1,    -1,    -1,    -1,  2521,   254,    -1,  1389,    -1,
      -1,  1392,    -1,  1394,    -1,    -1,   412,   265,   396,  2117,
      -1,  2537,    -1,    -1,    -1,   421,    -1,  2125,    -1,    -1,
      -1,  2667,    -1,  2654,    -1,    -1,  2134,    -1,  2136,    -1,
      -1,   156,   438,   158,   422,    -1,   424,    -1,    -1,  2565,
     165,    -1,    -1,   168,  2570,  2571,    -1,    -1,    -1,    -1,
      -1,    -1,   440,    -1,   460,    -1,    -1,  2703,  2704,    85,
      -1,    -1,   320,    -1,    -1,  2591,    -1,   325,    -1,  2700,
      -1,    -1,    -1,  2181,    -1,   481,   102,    -1,  1469,    -1,
      -1,  2189,    -1,    -1,    -1,    -1,    -1,  2195,    -1,    -1,
    1481,    -1,    -1,  2619,   500,    -1,  2622,    -1,   356,  2625,
    2626,   507,   508,    -1,    -1,    -1,   364,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,
    2751,    -1,    -1,    -1,    -1,   513,    -1,    -1,  1519,   254,
      -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1532,  1533,    -1,    -1,    -1,    -1,    -1,    -1,   274,
     408,    -1,    -1,   411,    -1,  2786,    -1,    -1,    -1,  2805,
       7,   419,    -1,    10,    -1,    -1,    -1,    -1,   194,   195,
     196,    -1,   430,    -1,    -1,    -1,    -1,   203,    -1,  1570,
    2288,    -1,  2290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1587,    -1,    -1,    -1,
      -1,    -1,   460,    50,    -1,   463,    -1,    -1,    -1,    -1,
    1601,    -1,    -1,  2321,    -1,    -1,    -1,    -1,    -1,    -1,
    1611,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1620,
      -1,    -1,    -1,   259,    -1,   261,   262,   263,    85,    -1,
    1631,   267,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1642,  2360,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,  1653,    -1,    -1,  1656,  1117,    -1,  1659,    -1,
      -1,    -1,  1123,  1664,  1125,  1126,    -1,    -1,  1669,  1130,
      -1,    -1,   308,    -1,  1135,    -1,    -1,  1138,    -1,    -1,
      -1,  1142,  1143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1152,    -1,    -1,    -1,  1696,    -1,    -1,    -1,    -1,
    1161,  1162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   452,  1719,    -1,
      -1,    -1,  2440,    -1,  2442,    -1,    -1,    -1,  1729,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,
    1741,    -1,    -1,  1744,    -1,    -1,   203,   383,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,     1,
      -1,    -1,     4,    -1,     6,    -1,    -1,  1778,   513,    11,
    1241,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
     247,    -1,    -1,  1794,    -1,    -1,   253,    -1,   255,   435,
     436,    -1,   259,    -1,   261,   262,   263,    -1,    -1,  1270,
     267,    -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,
      52,    53,    -1,  1284,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,  1299,    -1,
      -1,    -1,    74,   479,    -1,    77,  1307,    -1,    -1,    -1,
      -1,   308,    -1,    -1,    -1,    -1,   313,  1318,    -1,    91,
      -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,   504,  1330,
     327,    -1,    -1,    -1,    -1,   511,    -1,   513,    -1,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,   124,    -1,   351,    -1,    -1,    -1,    -1,    -1,
    1901,  1902,    -1,    -1,    -1,   362,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1375,    -1,    -1,    -1,  1379,    -1,
      -1,    -1,    -1,   155,    -1,    -1,   383,    -1,  1389,  1930,
      -1,    -1,    -1,  1394,   166,    -1,  1937,    -1,    -1,   171,
      -1,    -1,    -1,  1944,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2669,  2670,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     417,    -1,    -1,  1964,    -1,   197,   423,    -1,    -1,    -1,
    1971,  1972,   204,    -1,    -1,   207,   208,    -1,   435,   436,
      -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,
      -1,  2709,   224,    -1,   226,  1996,    -1,   229,    -1,    -1,
    2001,    -1,    -1,    -1,    -1,  2006,  2007,    -1,    -1,    -1,
    2728,    -1,   469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1481,    -1,   479,    -1,    -1,    -1,    -1,    -1,   485,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,   499,    -1,   276,    -1,   278,   504,    -1,    -1,
     507,    -1,    -1,    -1,   511,    -1,   513,   289,  1519,    -1,
    2061,    -1,   519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1532,  1533,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2798,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    36,    -1,    -1,    39,    -1,   329,     7,    -1,
      -1,    10,    -1,    47,    -1,    -1,  2107,    -1,    -1,  1570,
      -1,    -1,    -1,    -1,    85,  2116,  2117,    -1,    -1,    -1,
      -1,    -1,   354,   355,  2125,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,   365,    -1,    -1,    -1,  1598,    -1,    -1,
    1601,    -1,    -1,  2144,  2145,    -1,    -1,   379,    -1,   381,
      94,    -1,    -1,    -1,    -1,   387,    -1,    -1,    -1,   391,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,   113,
      -1,    -1,  2173,    -1,    -1,    -1,    85,  1638,   410,    -1,
      -1,  1642,  2183,  2184,    -1,    -1,    -1,   419,    -1,    -1,
    2191,    -1,  1653,   102,  2195,  1656,   428,    -1,    -1,    -1,
      -1,   433,   434,  1664,    -1,   437,   115,   439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,  2220,
      -1,    -1,   193,   194,   195,   196,    -1,    -1,  2229,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   478,    -1,   192,    -1,
      -1,    -1,   484,    -1,    -1,    -1,   200,   489,    -1,    -1,
      -1,    -1,    -1,  2264,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   516,   194,   195,   196,   259,    -1,
     261,   262,   263,  2294,   203,    -1,   267,    -1,    -1,    -1,
      -1,   245,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,  2312,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   230,   266,    -1,   268,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,  1797,   308,   247,    -1,
    1801,    -1,    -1,  1804,   253,    -1,   255,    -1,   292,   293,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2379,   323,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1858,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,   350,    -1,    -1,    -1,
      -1,    -1,   383,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,   193,   194,   195,   196,    -1,    -1,    -1,    -1,  2430,
      -1,   203,   376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     384,    -1,   351,    -1,    -1,    -1,  1907,  1908,  1909,    -1,
      -1,    -1,    -1,   397,    -1,    -1,    -1,    -1,   402,    -1,
    2461,    -1,    -1,    -1,   435,   436,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   383,    -1,    -1,   448,  2479,    -1,
      -1,    -1,    -1,  1944,    -1,  2486,    -1,   259,  2489,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,
     444,    -1,    -1,    -1,  1965,    -1,    -1,    -1,   479,   453,
      -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,   490,
      -1,    -1,    -1,    -1,    -1,    -1,   435,   436,   499,    -1,
    2531,    -1,    -1,   504,  2535,  2536,   308,   508,   482,    -1,
     511,   512,   513,    -1,  2545,    -1,    -1,    -1,   492,    -1,
      -1,    -1,    -1,    -1,   498,    -1,    -1,  2558,    -1,    -1,
     469,    -1,    -1,    -1,    -1,  2566,  2567,    -1,    -1,    -1,
     479,  2572,    -1,    -1,    -1,    -1,    -1,  2578,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,  2060,
      -1,    -1,   511,    -1,   513,    -1,    -1,    -1,  2609,    -1,
     519,   383,  2613,  2614,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2627,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2095,    -1,  2097,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,  2134,     6,  2136,   448,    -1,    -1,    11,
      -1,    -1,    -1,    -1,  2145,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,  2694,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,    -1,
      52,    53,  2183,  2184,    -1,    -1,    -1,   499,  2189,  2730,
    2731,    63,   504,    -1,    -1,    -1,   508,    -1,    -1,   511,
     512,   513,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2759,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2769,  2770,
      -1,    -1,    -1,    -1,  2775,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,  2789,    -1,
     122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,    -1,    -1,  2288,    -1,  2290,
      -1,    -1,    -1,  2294,   166,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2321,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,
      -1,    -1,   204,    -1,    -1,   207,   208,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,   217,     4,    -1,     6,    -1,
      -1,    -1,   224,    11,   226,    -1,    -1,   229,    -1,  2360,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,   276,    63,   278,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,   289,    -1,    77,
      -1,    -1,    -1,    -1,   296,   297,    -1,   299,   300,   301,
     302,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,  2440,
      -1,  2442,    -1,    -1,   316,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,   329,    -1,    -1,
    2461,    -1,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   354,   355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   365,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   166,   381,
      -1,    -1,    -1,   171,    -1,   387,    -1,    -1,    -1,   391,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,
    2531,    -1,    -1,    -1,  2535,  2536,    -1,    -1,   410,   197,
      -1,    -1,    -1,    -1,    -1,    -1,   204,   419,    -1,   207,
     208,    -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,   217,
      -1,   433,   434,    -1,    -1,   437,   224,   439,   226,    -1,
      -1,   229,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   460,     1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,   478,    19,    -1,    -1,
      -1,    -1,   484,    -1,   272,    -1,    -1,   489,   276,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,   510,    -1,
      52,    53,    -1,    -1,   516,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,   365,    -1,    -1,
     122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   379,    -1,   381,    -1,    -1,    -1,    -1,    -1,   387,
      -1,    -1,    -1,   391,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   399,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   410,    -1,   166,    -1,    -1,    -1,    -1,   171,
      -1,   419,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     428,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,   437,
      -1,   439,    -1,    -1,    -1,   197,    -1,    -1,    -1,   447,
      -1,    -1,   204,    -1,    -1,   207,   208,    -1,    -1,    -1,
      -1,    -1,   460,    -1,    -1,   217,    -1,    -1,    -1,    -1,
      -1,    -1,   224,    -1,   226,    -1,    -1,   229,    -1,    -1,
     478,    -1,    -1,    -1,    -1,    -1,   484,    -1,    -1,    -1,
      -1,   489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   516,    -1,
     272,    -1,    -1,    -1,   276,    -1,   278,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      -1,    36,    -1,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,   316,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,   354,   355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,    -1,   381,
      -1,    -1,    -1,    -1,    -1,   387,    -1,   122,    -1,   391,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,    -1,   163,    -1,
      -1,   433,   434,    -1,    -1,   437,    -1,   439,    -1,    -1,
      -1,    -1,    -1,   178,    -1,   447,   181,   182,   183,   184,
     185,    -1,    -1,   188,   189,    -1,    -1,   192,   460,    -1,
      -1,    -1,    -1,   198,    -1,   200,    -1,    -1,    -1,    -1,
      -1,   206,    -1,    -1,    -1,    -1,   478,    -1,   213,    -1,
      -1,    -1,   484,    -1,    -1,    -1,   221,   489,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,   234,
      -1,    -1,   237,    -1,    19,    -1,    -1,    -1,   243,    -1,
     245,    -1,    -1,    -1,   516,    -1,    -1,    -1,    -1,   254,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   310,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,   114,
     335,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,
      -1,    -1,    -1,   348,    -1,   350,   131,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,
      -1,   166,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   402,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,   414,
     415,   416,   197,    -1,    -1,    -1,    -1,    -1,    -1,   204,
      -1,    -1,   207,   208,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    10,   217,    -1,    13,    14,    15,    -1,    -1,   224,
      -1,   226,    21,    -1,   229,    -1,    -1,    -1,    -1,    -1,
     455,    -1,    -1,    -1,    -1,   460,    -1,    -1,    -1,    -1,
     465,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   477,    -1,    -1,    -1,    -1,   482,    -1,    -1,
      -1,   486,   487,   488,    -1,    -1,    -1,   272,    -1,    -1,
      -1,   276,    -1,   278,    -1,   500,    -1,    -1,    -1,    -1,
      -1,   506,   507,    -1,   289,    -1,    85,    -1,   513,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    10,    -1,    -1,   354,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     365,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,   381,    -1,    -1,    -1,
      -1,    -1,   387,    -1,    -1,    -1,   391,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   399,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,   410,    -1,    -1,    -1,    -1,
     209,   210,    -1,    -1,   419,   214,    -1,    -1,    -1,    -1,
      -1,    85,    -1,   428,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,   437,    97,   439,   234,    -1,    -1,   102,    -1,
      -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,   247,   248,
     249,    -1,    -1,    -1,   253,   460,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,   478,    -1,   274,    -1,    -1,    -1,   484,
      -1,    -1,    -1,    -1,   489,    -1,    -1,     7,   287,    -1,
      10,    -1,    -1,    13,    14,    15,   295,    -1,    -1,   298,
      -1,    21,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,
      -1,   516,    -1,    -1,   313,    -1,    -1,    -1,    -1,   318,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,   337,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   247,   383,    -1,    -1,    -1,    -1,   253,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,
     274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,    -1,
      -1,    -1,   162,    -1,   308,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,   457,    -1,
     459,    -1,   461,   327,    -1,   464,    -1,   466,   467,   468,
     469,    -1,   471,   472,   194,   195,   196,    -1,    -1,    -1,
     479,    -1,    -1,   203,    -1,    -1,    -1,   351,    -1,   209,
     210,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,
      -1,    -1,   511,    -1,   513,    -1,    -1,    -1,    -1,   383,
     519,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,   249,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,   423,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,
      -1,   435,   436,    -1,    -1,   295,    -1,    -1,   298,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,   318,    -1,
      -1,    -1,    -1,    -1,    -1,   469,    -1,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   479,    -1,   337,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,   351,    -1,    -1,    -1,   499,    -1,    -1,    -1,     7,
     504,    -1,    10,    -1,    -1,    -1,    -1,   511,    -1,   513,
      22,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   383,    -1,    37,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   423,    76,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,   435,   436,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,   102,    -1,    -1,   457,    -1,   459,
      -1,   461,    -1,    -1,   464,    -1,   466,   467,   468,   469,
     122,   471,   472,    -1,    -1,    -1,    -1,    -1,     7,   479,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,
      -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,
      -1,   511,    -1,   513,    -1,    -1,    -1,    -1,    -1,   519,
      -1,    -1,   174,    -1,    -1,    -1,   178,    -1,    -1,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,   206,   203,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,   221,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,   237,   115,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,     7,    -1,    -1,    10,   274,    -1,   280,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,
     308,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,   324,    -1,   203,    -1,    -1,    -1,    -1,   327,
     332,    -1,    -1,   335,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,
      85,    -1,    -1,   351,    -1,    -1,    -1,    -1,   360,    -1,
      -1,    -1,    97,    -1,    -1,    -1,   368,   102,   247,    -1,
      -1,    -1,    -1,    -1,   253,     7,   255,    -1,    10,    -1,
     259,    -1,   261,   262,   263,   383,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,    -1,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     412,    -1,   414,   415,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,   436,   441,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,   460,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,
     102,   469,   351,    -1,    -1,   477,    85,    -1,    -1,   214,
      -1,   479,    -1,    -1,   486,   487,   488,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,   500,    -1,
      -1,   499,    -1,    -1,   383,   507,   504,    -1,    -1,    -1,
      -1,   513,   247,   511,    -1,   513,    -1,    -1,   253,    -1,
     255,   519,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,     7,   269,    -1,    10,    -1,    -1,   274,
      -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,   168,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    -1,   194,   195,   196,    -1,    -1,
     469,    -1,   327,    -1,   203,    -1,    -1,    -1,    -1,    -1,
     479,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,   247,   351,    -1,    -1,    -1,
     499,   253,    -1,   255,    -1,   504,    -1,   259,   102,   261,
     262,   263,   511,    -1,   513,   267,    -1,   269,   247,    -1,
     519,    -1,   274,    -1,   253,    -1,   255,    -1,   383,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,   308,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   351,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,
     214,    -1,   351,    -1,   479,    85,    -1,    -1,    -1,    -1,
      -1,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,   499,    -1,    -1,    -1,    -1,   504,
      -1,    -1,    -1,   247,   383,    -1,   511,    -1,   513,   253,
      -1,   255,    -1,    -1,   519,   259,    -1,   261,   262,   263,
      -1,   423,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,
     274,    -1,     7,   435,   436,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   455,    -1,     7,   435,   436,    10,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,   469,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,
      -1,    -1,    -1,   327,   194,   195,   196,    -1,   198,    -1,
     469,    -1,    -1,   203,    -1,    -1,    -1,   499,    -1,    -1,
     479,    -1,   504,    -1,   214,    -1,    -1,   351,    -1,   511,
      85,   513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   504,    -1,   102,    -1,    -1,
      -1,    -1,   511,    85,   513,    -1,    -1,   247,    -1,   383,
     519,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,
     102,   261,   262,   263,    -1,    -1,    -1,   267,     7,   269,
      -1,    10,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,   194,
     195,   196,    -1,    -1,    -1,   469,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    -1,    -1,   479,    85,    -1,    -1,   214,
      -1,   351,   194,   195,   196,     7,    -1,    -1,    10,   493,
      -1,   203,    -1,   102,    -1,   499,    -1,    -1,    -1,    -1,
     504,    -1,   214,    -1,    -1,    -1,    -1,   511,    -1,   513,
      -1,    -1,   247,   383,    -1,   519,    -1,    -1,   253,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,   269,   247,    -1,    -1,    -1,   274,
      -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,   423,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,    85,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,   327,    -1,   203,    -1,   308,    -1,    -1,   469,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,   479,
      -1,    -1,    -1,    -1,    -1,   327,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,
      -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,   247,   351,
      -1,   511,    -1,   513,   253,    -1,   255,    -1,   383,   519,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,   383,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,   417,    -1,    -1,    -1,    -1,    -1,   423,    -1,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,   308,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,    -1,   435,   436,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,   255,   469,    -1,    -1,   259,    -1,   261,
     262,   263,   351,    -1,   479,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,    -1,    -1,    -1,    -1,   469,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,    -1,   479,    -1,   504,
      -1,    -1,    -1,    -1,   383,    -1,   511,    -1,   513,    -1,
      -1,    -1,    -1,    -1,   519,    -1,   308,   499,    -1,    -1,
      -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,
      -1,   513,    -1,    -1,    -1,   327,    -1,   519,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,   351,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     469,   383,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     479,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,
      -1,   423,   511,    -1,   513,    -1,    -1,    -1,    -1,    -1,
     519,    -1,    -1,   435,   436,    -1,    76,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,
      -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,
      -1,   513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,   181,   182,   183,   184,   185,    -1,    -1,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   243,    -1,    40,    41,    42,    43,    44,
      45,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     280,    76,    -1,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,   181,   182,   183,   184,   185,    -1,    -1,   188,   189,
      -1,    -1,   192,    -1,   324,    -1,    -1,   122,   198,    -1,
     200,    -1,   332,    -1,    -1,   335,   206,    -1,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,   348,    -1,
      -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     360,    -1,    -1,    -1,   234,    -1,    -1,   237,   368,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   254,    -1,   181,   182,   183,   184,
     185,    -1,    85,   188,   189,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     280,    -1,   412,    -1,   414,   415,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   323,   324,    -1,    -1,    -1,    -1,    -1,
     460,    -1,   332,    -1,    -1,   335,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,   348,    -1,
     350,    -1,    -1,    -1,    -1,   280,   486,   487,   488,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
     500,   194,   195,   196,    -1,    -1,   376,   507,    -1,    -1,
     203,    -1,   102,    -1,   384,    -1,    -1,    -1,    -1,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,   402,    85,    -1,    -1,    -1,    -1,    -1,    -1,
     335,    -1,   412,    -1,   414,   415,   416,    -1,    -1,    -1,
     102,    -1,    -1,   348,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,
     460,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,   482,   203,    -1,   308,   486,   487,   488,   414,
     415,   416,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
     500,    -1,    -1,    -1,   327,    -1,   506,   507,    -1,    -1,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,   247,   351,    -1,
      -1,    -1,   214,   253,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     383,   486,   487,   488,    -1,   247,    -1,   102,    -1,    -1,
      -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     423,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,
      -1,    -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,   351,    -1,    -1,   457,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   467,   327,   469,    -1,   471,   472,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,   194,
     195,   196,    -1,   383,    -1,    -1,    -1,    -1,   203,   351,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,   214,
      -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     513,    85,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,
      -1,   383,    -1,   423,    -1,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   247,    -1,    -1,   435,   436,    -1,   253,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,    85,
      -1,    -1,   267,    -1,   269,    -1,    -1,   457,    -1,    -1,
      -1,   423,    -1,    -1,    -1,    -1,   102,   467,    -1,   469,
      -1,   471,   472,   435,   436,    -1,    -1,    -1,    -1,   479,
      -1,   443,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,   499,
      -1,    -1,    -1,    -1,   504,   467,    -1,   469,    -1,   471,
     472,   511,   327,   513,    -1,    -1,    -1,   479,    -1,   519,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,   351,   499,    -1,    -1,
     214,    -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,
      -1,   513,    -1,    -1,    -1,    -1,    -1,   519,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   383,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   214,   253,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,
      -1,   247,    -1,   102,    -1,    -1,    -1,   253,    -1,   255,
     435,   436,    -1,   259,    -1,   261,   262,   263,   443,    -1,
      -1,   267,    -1,   269,   308,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   467,   327,   469,    -1,   471,   472,    -1,    -1,
      -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,   504,
      -1,   327,    -1,    -1,    -1,    -1,   511,    -1,   513,    -1,
      -1,    -1,    -1,    -1,   519,   194,   195,   196,    -1,   383,
      -1,    -1,    -1,    -1,   203,   351,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   383,   102,   423,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,   435,   436,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,   457,    -1,    -1,    -1,   423,    -1,    -1,
      -1,    -1,    -1,   467,    -1,   469,    -1,   471,   472,   435,
     436,    -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,
     504,   467,    -1,   469,    -1,   471,   472,   511,   327,   513,
     194,   195,   196,   479,    -1,   519,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
     214,    -1,   351,   499,    -1,    -1,    -1,    -1,   504,    -1,
      -1,    -1,    -1,    85,   102,   511,    -1,   513,    -1,    -1,
      -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,    -1,   378,
     102,    -1,    -1,   247,   383,    -1,    -1,    -1,    -1,   253,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,   327,    -1,   203,    -1,    -1,    -1,    -1,
     469,    -1,   194,   195,   196,    -1,   214,    -1,    -1,    -1,
     479,   203,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,   214,    -1,   493,    -1,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,   247,
      -1,    -1,   511,    -1,   513,   253,    -1,   255,    -1,   383,
     519,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   469,    -1,   471,    -1,    -1,
      -1,    -1,    -1,   351,    -1,   479,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
      -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,
     504,    -1,    -1,    -1,    -1,   383,    -1,   511,    -1,   513,
      -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,
      -1,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,
      -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   479,    -1,    -1,    -1,    -1,    -1,   469,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,
      -1,   499,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,
      -1,    -1,    -1,   511,    -1,   513,    -1,   499,    -1,    -1,
      -1,   519,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,
      -1,   513,    -1,    -1,    -1,    -1,    -1,   519
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   522,   523,     0,   202,   346,   524,   525,   526,   527,
     528,   529,   531,   541,   543,   460,   460,   526,   156,   537,
     549,   537,   537,   259,   347,   544,   544,   125,    87,   550,
     530,   532,   541,   141,   535,   536,    27,   545,   545,   460,
     401,   551,   145,   530,   533,   534,   537,   544,   259,   460,
     542,   460,    12,    61,    99,   101,   103,   111,   167,   228,
     260,   306,   309,   374,   396,   422,   424,   440,   513,   552,
     553,   557,   568,   576,   577,   578,   579,   580,   586,   595,
     597,   602,   605,   606,   608,   609,   610,   611,   612,   613,
     614,   544,   532,   460,   234,   546,  1307,   513,  1226,  1226,
     430,   412,  1326,  1307,  1307,  1307,   401,  1226,   412,   460,
     460,  1307,   460,   460,    60,  1296,   581,     1,   460,   579,
     220,   596,   176,   615,   460,   534,   460,    75,   174,   359,
     465,   547,   548,   587,  1307,  1307,  1307,   513,  1221,  1252,
      71,  1221,   460,  1307,  1307,   558,   569,  1221,   554,   513,
     598,   599,   600,  1227,   259,   312,   314,   582,   584,   585,
    1071,  1255,  1307,   460,   513,   460,   617,   548,   345,  1323,
    1307,   214,   259,   269,   351,   423,   469,   519,   603,   604,
    1258,  1221,   259,   220,   311,  1348,   259,   477,    59,    66,
     271,   345,   403,   408,   513,   559,   560,   561,   562,   563,
     564,   565,   567,  1295,  1358,   201,   570,   571,   572,   555,
     567,   599,    23,   234,  1227,  1308,  1071,   234,   430,  1320,
    1307,    99,  1226,   236,   404,   616,   618,    29,   129,   214,
     259,   269,   283,   351,   423,   426,   427,   519,   588,   589,
     590,   593,   604,   451,   512,   607,  1339,  1252,   407,   408,
     417,    66,  1307,   460,   561,   460,   513,   560,    62,  1307,
      10,   375,   505,   573,   575,     1,   460,   572,   556,  1339,
     259,   601,  1256,  1320,   234,  1226,  1226,   583,   584,   460,
       1,   295,   317,  1281,   277,   394,   653,   654,   655,   656,
     658,   590,    18,   451,  1258,   333,  1307,   408,  1255,   460,
    1307,   513,  1222,   231,    27,   574,   231,   375,   460,   460,
     110,  1256,  1226,   460,   317,  1226,   659,   356,   419,   420,
     657,   538,     1,   460,   655,   591,   593,   259,  1255,   260,
     442,   503,   566,  1222,   259,   275,   619,   463,  1299,    24,
    1290,   105,   663,   460,   592,   593,    60,   514,  1352,   620,
     446,  1332,   191,  1300,   125,   463,   664,    18,     5,    20,
      30,    66,   222,   254,   320,   325,   356,   364,   377,   408,
     411,   419,   460,   463,   621,   622,   628,   630,   632,   633,
     634,   635,   636,   639,   640,   641,   642,   643,   648,   649,
     651,  1324,  1341,    89,  1297,   513,  1211,  1212,   460,   401,
     665,   593,   275,  1313,   356,  1340,   455,   506,  1336,   408,
     409,  1307,  1295,   116,   239,  1309,  1309,   292,   650,  1255,
    1339,   430,   265,    40,  1293,  1307,   660,   661,  1212,  1212,
     460,   175,   398,   539,   666,   667,   669,  1307,  1309,   128,
     174,   625,   356,   364,   640,  1307,  1307,  1307,  1307,  1290,
      10,   292,   354,   652,  1307,  1313,   409,   513,   661,   336,
     662,   515,   694,   696,   697,     1,  1212,   128,   352,   409,
     629,  1307,   120,   121,   122,   240,   254,   340,   352,   446,
     623,   624,   259,  1221,  1225,   426,  1221,  1221,   321,  1321,
    1321,   315,  1221,  1307,  1255,   401,   264,   751,   698,   699,
     701,   711,  1273,   460,   668,  1221,   259,   627,  1252,   627,
       8,   627,   627,   259,   626,  1252,   421,   461,   644,    34,
     170,   270,   637,   460,   401,   258,   753,   460,   699,   460,
       1,   178,   513,   702,   703,   513,   670,   127,   512,   644,
    1275,  1357,  1299,  1307,   645,   646,   512,   638,   638,   695,
     460,   401,   371,   755,   460,   460,   700,    88,    48,    65,
     105,   241,   252,   356,   357,   371,   373,   460,   507,   671,
     672,   674,   678,   679,   682,   683,   689,   690,   691,   692,
    1307,   127,   645,   439,   631,   647,  1221,   647,   265,   391,
     696,   752,   460,   401,   395,   812,   713,   704,  1307,  1297,
    1307,   356,   358,  1353,  1353,  1307,  1297,  1307,  1313,  1307,
      23,  1289,   311,   693,  1226,   174,   206,  1275,   510,   314,
     696,   754,   460,   401,   540,    22,    37,    40,    41,    42,
      43,    44,    45,    46,    76,    78,    79,    80,    81,    82,
      83,    84,   122,   181,   182,   183,   184,   185,   188,   189,
     221,   237,   280,   310,   324,   332,   335,   348,   360,   368,
     412,   414,   415,   416,   441,   486,   487,   488,   500,   507,
     714,   715,   716,   718,   719,   720,   721,   722,   723,   724,
     727,   739,   740,   742,   743,   744,   749,   750,  1307,  1328,
      27,   198,   712,  1291,   206,  1255,   513,  1308,  1308,   513,
    1223,  1224,   313,   425,  1349,  1225,  1255,   508,  1307,   177,
     215,   513,   680,  1226,   631,    10,   423,   519,   594,   277,
     356,   358,  1351,   696,   756,   460,   342,   826,   829,   246,
     306,   413,   485,  1327,   485,  1327,   485,  1327,   485,  1327,
     485,  1327,   510,  1337,   390,  1325,   128,  1255,  1249,  1252,
    1252,   234,   244,   390,   741,  1307,  1308,   174,   206,   243,
     477,   513,    10,    51,   214,   246,   247,   259,   269,   351,
     423,   469,   519,   705,  1259,  1260,  1261,   455,   677,  1224,
     257,  1312,   455,  1296,   220,  1302,   513,  1307,  1307,  1259,
    1351,   757,   813,   125,   852,   853,   519,    54,   731,   455,
     728,   471,  1253,  1254,   451,   721,   746,   747,  1259,    27,
     717,   407,  1285,  1285,  1261,   311,  1317,     1,    41,    42,
      43,    44,    45,   181,   182,   183,   184,   185,   186,   187,
     335,   348,   706,   707,   708,   709,   710,   722,   723,  1249,
     706,   456,  1255,    60,   358,   673,   684,  1255,   417,  1329,
     259,   681,  1252,   681,   353,   758,   701,   711,   814,   815,
     816,    58,   506,   830,     1,     4,     6,    11,    19,    52,
      53,    63,    74,    77,    91,   114,   122,   124,   155,   166,
     171,   197,   204,   207,   208,   217,   224,   226,   229,   272,
     276,   278,   289,   316,   329,   354,   355,   365,   379,   381,
     387,   391,   399,   410,   419,   428,   433,   434,   437,   439,
     447,   460,   478,   484,   489,   516,   854,   855,   871,   876,
     880,   885,   900,   903,   907,   911,   912,   913,   918,   932,
     936,   939,   953,   957,   960,   963,   967,   968,   972,   982,
     985,  1002,  1004,  1007,  1011,  1017,  1029,  1044,  1045,  1048,
    1049,  1053,  1059,  1060,  1068,  1083,  1093,  1102,  1107,  1114,
    1118,  1120,  1123,  1126,  1130,  1157,   854,  1302,   198,   729,
    1255,   454,  1334,    85,   102,   194,   195,   196,   203,   247,
     253,   255,   261,   262,   263,   267,   308,   327,   383,   435,
     436,   467,   471,   472,   479,   499,   504,   511,  1199,  1201,
    1202,  1203,  1204,  1205,  1206,  1234,  1248,  1249,  1260,  1262,
    1263,  1264,  1265,   471,  1254,  1252,   745,   747,   451,   259,
    1295,   706,   460,  1261,    49,   474,   685,   686,   687,   688,
    1339,  1296,   198,   676,  1301,   513,  1213,     1,   702,   816,
     460,   832,   831,   382,   838,     4,     6,    11,    19,    52,
      53,    63,    74,    77,    91,   114,   122,   124,   131,   133,
     134,   135,   136,   137,   138,   139,   140,   142,   143,   144,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     166,   171,   197,   204,   207,   208,   217,   224,   226,   229,
     272,   276,   278,   289,   316,   329,   354,   365,   381,   387,
     391,   399,   410,   419,   428,   433,   434,   437,   439,   447,
     460,   478,   484,   489,   516,  1286,   856,   872,   877,   881,
     886,   901,   904,   908,   914,   919,   933,   937,   940,   954,
     958,   961,   964,   205,   382,   895,   956,   969,   973,   983,
     986,  1003,  1005,  1008,   406,  1012,  1018,  1030,  1046,  1050,
    1054,  1061,  1069,  1084,  1094,   259,   351,   393,   423,   519,
    1106,  1108,  1115,   341,  1119,  1121,   841,  1124,  1127,  1131,
    1158,   513,  1255,   728,   117,   730,   471,   471,   471,  1267,
    1249,  1260,  1262,  1348,  1348,   471,   471,   471,   471,  1348,
    1205,  1201,  1205,   471,  1267,    73,   405,   457,  1200,   458,
     467,   472,   459,   468,   172,   471,  1266,   471,   471,  1201,
     510,   748,  1338,  1259,  1225,  1225,   190,   677,  1255,   759,
     460,   817,   460,    50,   833,   834,   835,  1294,   833,   513,
     460,   313,   857,   858,  1248,     7,    97,   247,   274,   873,
    1206,  1230,  1231,  1248,  1259,  1262,   878,  1201,  1248,   259,
     882,   883,  1217,  1218,  1219,  1252,   274,   429,   431,   887,
     888,   259,   902,  1239,  1248,   905,  1212,     7,   909,  1206,
    1207,  1208,  1229,  1250,  1251,  1252,  1260,   463,   915,  1212,
     259,   920,   921,   923,  1230,  1231,  1239,  1248,   934,  1231,
     259,   938,   462,   473,   941,   942,   943,  1189,  1190,  1191,
     201,   328,   329,   345,   401,   955,   959,  1228,  1229,   962,
    1252,   455,   965,  1335,  1231,  1188,  1189,   974,  1228,   984,
    1213,   987,   988,  1248,  1259,  1262,  1085,  1246,  1247,  1252,
      97,  1006,  1231,  1009,  1231,   173,   227,   235,   322,  1013,
    1014,   193,   259,  1019,  1023,  1024,  1025,  1217,  1240,  1248,
    1252,  1262,  1339,  1031,  1212,  1047,  1209,  1252,  1051,  1212,
    1055,  1209,    10,  1062,  1210,  1252,   156,   274,  1070,  1073,
    1074,  1077,  1078,  1079,  1080,  1081,  1082,  1214,  1215,  1228,
    1245,  1247,  1252,  1085,  1095,  1212,  1103,   115,  1109,  1110,
    1111,  1231,    97,  1116,  1230,  1122,  1213,   460,   513,   842,
     843,   846,   847,   852,  1125,  1248,  1128,  1212,   259,  1132,
    1240,  1159,  1209,   225,   732,   314,  1318,   733,   734,  1199,
    1201,  1271,  1199,  1272,   457,  1199,   513,   513,  1201,  1270,
    1270,  1270,  1233,  1248,  1260,  1262,  1269,   513,   457,  1233,
    1268,  1201,   457,  1201,  1202,  1202,  1203,  1203,  1203,  1201,
    1233,  1199,   410,   462,    31,  1292,  1296,     1,   760,   818,
     834,   417,   485,   836,   362,   507,   827,   133,   870,    31,
     860,   861,  1292,   198,  1317,  1248,  1249,  1260,  1262,   134,
     875,   455,   874,  1231,    60,   225,  1276,   883,   455,  1348,
     135,   899,  1240,  1239,  1212,   361,   483,   906,  1339,  1354,
    1317,   136,   910,   162,   461,  1208,  1345,   392,  1282,  1253,
    1254,   916,  1212,   137,   917,  1324,   138,   931,   168,   922,
    1168,  1169,   493,   924,   512,   861,   494,   495,   496,   497,
     139,   935,    50,   230,   506,   889,   140,   952,    18,   510,
     944,   945,   946,   948,    13,    14,    15,    21,   162,   172,
     209,   210,   248,   249,   287,   295,   298,   306,   313,   318,
     337,   457,   459,   461,   464,   466,   467,   468,   471,   472,
    1192,  1193,  1194,  1195,  1196,  1197,  1198,  1231,   104,   956,
    1229,  1216,   450,  1333,   975,  1339,  1213,    95,   370,   445,
     989,   990,   992,   993,  1087,   471,  1253,  1231,   455,   143,
    1010,    50,  1014,   411,  1015,  1024,   144,   460,  1020,  1022,
     490,   508,   451,   454,   448,   146,  1043,   289,   339,  1279,
     198,  1160,   147,  1052,  1324,   148,  1058,  1160,  1210,   149,
    1067,   508,  1063,  1237,  1248,  1260,  1080,  1082,  1228,   455,
    1215,   126,   455,   491,  1072,    32,  1253,   150,  1101,   180,
     239,   242,  1097,   895,  1104,  1339,  1294,   151,  1113,   230,
    1111,  1248,   152,  1117,   198,  1213,   401,   460,   460,   198,
     356,   358,  1129,   153,  1141,   115,  1133,   154,  1164,  1160,
     733,  1221,   222,   736,    28,   118,   735,  1200,   457,  1200,
     457,   457,  1200,   457,   457,   457,  1200,   457,  1200,   457,
     457,   458,   457,   457,   455,  1307,  1225,   117,   675,   460,
      64,    92,    93,   326,   460,   761,   762,   767,  1307,  1366,
      33,    36,    39,    46,    47,    67,    69,   163,   192,   198,
     200,   213,   245,   254,   268,   310,   323,   350,   376,   384,
     402,   455,   465,   482,   506,   719,   720,   724,   739,   742,
     744,   819,   824,   825,  1307,  1342,  1307,   417,   317,   837,
     112,   839,  1237,   199,   864,   254,   336,   862,   863,  1342,
      25,    26,    68,    70,    72,   106,   107,   108,   156,   158,
     165,   168,   254,   257,   452,   502,   513,   859,  1215,  1343,
     155,   345,  1235,  1249,   455,     7,  1206,  1207,  1231,  1252,
    1260,   205,   225,  1277,   382,   879,   344,   884,  1219,   889,
     906,   265,   292,  1300,  1249,  1201,   275,  1283,  1254,  1212,
     380,  1036,  1037,  1038,   849,   850,   923,  1231,   299,  1170,
      99,   340,   513,  1215,   303,   928,    36,    39,    46,    47,
      94,   163,   192,   213,   268,   323,   384,   397,   482,   929,
     930,   493,   925,  1168,  1168,  1168,  1168,  1231,  1207,  1231,
     890,   943,    22,   462,   473,   949,   950,  1190,   510,   946,
     947,   510,   849,  1335,   234,  1193,   117,   966,  1217,   131,
     849,   970,    10,    13,    16,    17,   280,   281,   306,   307,
     976,   980,   178,  1237,    10,    60,   180,   243,   477,   996,
     997,   998,   991,   992,  1089,  1318,  1357,   455,  1228,  1207,
    1231,  1015,  1339,  1211,   849,   171,  1026,  1188,  1027,  1028,
    1248,  1217,     9,    38,  1162,  1324,  1244,  1248,  1259,  1262,
     230,  1032,  1036,   132,  1064,  1248,  1064,   455,   455,  1071,
     155,   462,   473,  1231,    50,    39,    47,   213,   245,   268,
     323,   384,   482,  1075,  1076,  1307,  1096,  1339,  1231,   164,
     294,   417,  1231,  1248,   198,  1207,  1231,   848,  1255,  1237,
    1294,   230,  1136,  1161,  1162,   736,  1294,  1309,   443,  1266,
     443,  1266,  1221,  1266,  1266,  1266,  1233,   243,   477,  1266,
     457,  1201,  1266,  1266,  1259,  1318,  1307,  1308,  1308,   250,
     251,  1311,   777,   206,   179,   763,   764,   765,   766,  1248,
    1307,   254,   395,   159,   161,  1307,  1244,   304,  1315,  1255,
      59,  1248,  1248,   206,  1315,    33,   113,  1255,  1307,   513,
     460,   828,   275,   865,  1315,  1315,   863,   862,  1315,   168,
    1165,  1166,   518,   517,  1237,  1165,   239,   430,   304,   279,
     259,  1236,  1249,  1248,  1317,   418,  1171,  1172,  1253,  1254,
    1207,   455,  1278,   879,  1229,   455,  1217,   894,   895,   386,
     367,  1171,  1307,   193,  1300,   233,  1184,  1185,   851,   849,
    1168,  1307,   254,   395,   159,   161,  1307,   126,   491,   930,
    1168,    99,   100,   926,   865,   205,  1171,   205,   891,   892,
     893,  1294,    18,   451,   951,   321,   949,  1318,   849,   131,
     142,   971,  1335,   370,   977,  1335,   455,    50,   997,   999,
    1237,    10,    60,   243,   477,   994,   995,  1237,  1090,  1341,
     735,   220,   319,  1303,  1228,  1171,   205,  1211,   652,   385,
    1016,  1339,   144,  1021,     9,   198,  1032,  1248,   132,  1177,
    1179,  1056,  1057,  1339,   849,   510,   510,  1065,  1066,  1237,
    1236,  1231,  1071,  1071,  1071,  1071,  1071,  1071,  1071,  1071,
    1076,   295,   298,  1098,  1099,  1100,  1194,  1280,  1184,   246,
     417,  1356,   430,  1331,  1331,  1112,  1339,  1248,  1171,   205,
     460,   455,    10,  1134,  1135,  1274,  1137,  1248,  1112,  1137,
    1036,     8,  1287,   513,   737,   738,  1307,   457,  1221,  1239,
    1308,  1308,   259,   519,   768,   769,  1248,  1257,   701,   778,
     765,   766,   519,  1241,  1245,  1255,  1241,  1307,  1334,  1307,
    1307,    33,  1255,   840,   841,  1307,   512,   866,  1241,  1241,
    1241,   849,   299,  1167,  1165,  1282,  1249,   849,   302,  1173,
    1254,  1171,  1238,  1248,  1259,   168,   470,   897,  1347,     7,
     230,   313,   469,   896,  1306,    35,   284,   285,   286,   349,
     475,   476,   480,  1284,  1201,   849,   300,  1186,   852,  1241,
    1241,  1187,  1243,  1245,  1255,  1187,   512,   927,  1207,  1208,
    1207,  1208,   892,   313,   836,    90,   362,   507,   950,  1189,
     849,  1248,   849,   507,   978,   979,   980,   981,  1333,   507,
    1238,  1237,    50,  1000,   995,   191,  1000,  1086,  1307,  1309,
     319,  1207,  1016,   265,   292,  1028,  1231,     8,   219,  1033,
    1034,  1035,  1037,  1040,  1057,  1339,   849,   296,  1180,  1184,
     265,   292,  1189,  1188,  1065,  1194,  1248,  1195,  1196,  1197,
    1198,  1201,  1105,  1231,  1105,   470,  1174,  1175,   335,  1282,
    1207,   844,  1238,   318,  1237,   116,  1138,   445,  1140,  1056,
     326,  1215,  1241,   738,  1220,  1221,   770,   254,   257,  1350,
     513,   702,   273,   334,   467,   472,   820,   821,   822,  1239,
     820,   821,   823,   841,    48,    33,    36,    39,    47,    94,
     113,   192,   200,   213,   245,   266,   268,   292,   293,   323,
     350,   376,   384,   397,   402,   444,   453,   482,   492,   498,
     867,   868,   869,  1165,   849,  1171,   849,   299,   898,   849,
    1317,  1248,   400,   454,   849,   254,   257,  1355,   929,  1171,
     366,  1171,   366,  1231,   979,   105,  1298,  1335,  1000,  1000,
    1238,     9,    38,  1001,   227,   506,  1091,  1221,  1088,  1171,
     386,    50,  1318,   265,   239,  1041,  1039,  1040,  1339,   218,
     238,   509,   849,   265,   849,   849,   849,   301,  1176,  1307,
    1171,  1171,   501,   845,  1142,  1135,  1302,    98,  1139,  1302,
    1174,   160,   297,  1163,  1181,  1182,  1183,  1184,   254,   257,
    1310,  1221,   180,   190,   212,   242,   256,   771,   772,   773,
     774,   775,   776,   769,   779,  1241,  1241,   132,  1307,  1307,
     869,    59,   126,   491,     9,  1288,   868,   849,  1248,  1208,
    1208,    50,   113,  1000,   465,  1305,  1305,   342,  1211,   205,
     322,  1092,  1252,  1231,   265,  1307,  1042,  1178,  1179,  1180,
    1184,   265,   265,   849,  1248,  1143,   460,  1248,  1302,  1248,
     849,   849,  1183,   109,   119,  1359,  1307,  1307,    57,    92,
    1359,  1360,  1307,  1343,   780,   112,  1241,  1241,  1307,  1187,
    1187,  1242,  1245,  1257,  1171,  1171,  1231,  1231,  1231,  1307,
    1211,   342,   490,  1248,  1180,   130,   169,   206,  1144,  1145,
    1146,  1148,  1152,  1154,  1155,  1156,  1292,  1300,  1248,  1307,
     769,   769,   212,  1307,  1307,   769,     3,   211,   254,   290,
     310,   338,   421,   438,   460,   481,   500,   508,   719,   724,
     725,   739,   742,   744,   781,   782,   786,   788,   791,   792,
     795,   796,   797,   802,   803,   809,   810,   811,  1342,  1343,
    1344,   460,  1239,  1023,  1307,  1188,    38,  1288,   345,   110,
     769,   769,   769,   223,  1304,   304,   800,  1307,  1255,  1307,
    1317,  1307,  1307,  1248,     9,    38,   237,   510,   334,   472,
     798,   799,   801,  1257,  1318,   806,   807,   808,   820,  1257,
     304,   305,  1316,  1023,   372,   425,  1330,   132,   428,  1153,
    1318,   234,   291,   334,   472,   787,  1255,   728,  1234,  1232,
    1234,    56,    92,   326,   330,   331,   371,   388,   389,   783,
    1359,  1360,  1361,  1362,  1363,  1364,  1365,   122,   198,   288,
    1314,  1314,     9,    38,  1188,  1257,  1257,   798,   291,   807,
    1257,    55,   244,   390,   804,   805,  1248,   164,   168,  1346,
      10,  1149,  1150,  1218,  1255,  1255,  1334,  1282,   378,   493,
     789,  1234,   190,   190,   212,   190,   212,   191,   314,  1319,
    1319,  1234,   318,   326,   793,   794,  1248,   793,  1314,  1314,
    1308,   342,  1322,   311,   343,   363,  1151,  1150,   730,  1318,
    1248,   179,   784,  1248,    10,   179,   785,  1248,    50,   793,
     326,   326,  1318,   311,  1252,   432,   726,   179,   790,  1248,
     318,  1234,   173,   227,   235,   322,  1147,  1211,  1255,   326
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   521,   523,   522,   524,   524,   525,   525,   526,   526,
     528,   527,   529,   530,   531,   532,   532,   532,   533,   533,
     534,   535,   535,   536,   538,   539,   540,   537,   542,   541,
     543,   544,   544,   545,   545,   546,   546,   547,   547,   547,
     547,   548,   548,   549,   549,   550,   550,   551,   551,   552,
     552,   552,   552,   552,   554,   553,   555,   555,   556,   556,
     558,   557,   559,   559,   559,   559,   560,   560,   561,   561,
     561,   561,   562,   563,   564,   565,   566,   566,   566,   566,
     567,   567,   569,   568,   570,   570,   570,   571,   571,   572,
     572,   572,   573,   573,   574,   574,   575,   575,   576,   577,
     577,   578,   578,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   581,   580,   582,   582,   582,
     582,   583,   583,   584,   585,   585,   587,   586,   588,   588,
     588,   588,   588,   588,   589,   589,   590,   590,   591,   590,
     592,   592,   593,   593,   593,   593,   593,   593,   594,   594,
     595,   596,   596,   597,   598,   598,   599,   600,   600,   601,
     601,   602,   603,   603,   604,   604,   605,   606,   607,   607,
     608,   609,   610,   611,   612,   613,   614,   614,   615,   615,
     616,   616,   617,   617,   619,   618,   618,   620,   620,   621,
     621,   621,   621,   621,   621,   621,   621,   621,   621,   621,
     621,   621,   622,   622,   622,   622,   622,   623,   623,   623,
     623,   624,   624,   625,   625,   625,   626,   626,   627,   627,
     627,   628,   629,   629,   629,   630,   630,   631,   631,   631,
     632,   633,   634,   634,   634,   636,   635,   637,   637,   637,
     638,   638,   638,   638,   639,   639,   640,   640,   640,   640,
     641,   642,   643,   643,   644,   644,   646,   645,   645,   647,
     648,   649,   650,   650,   651,   652,   652,   652,   653,   653,
     653,   654,   654,   655,   655,   656,   657,   657,   657,   657,
     659,   658,   660,   660,   661,   662,   662,   663,   663,   664,
     664,   665,   665,   666,   668,   667,   667,   669,   669,   670,
     670,   671,   671,   671,   671,   671,   671,   671,   671,   671,
     671,   671,   672,   673,   673,   673,   674,   674,   674,   675,
     675,   676,   676,   677,   677,   678,   679,   679,   680,   680,
     681,   681,   682,   683,   684,   684,   685,   685,   685,   686,
     687,   688,   689,   690,   691,   692,   692,   693,   693,   694,
     695,   694,   696,   697,   696,   698,   698,   698,   699,   700,
     699,   699,   701,   702,   702,   702,   703,   704,   704,   705,
     705,   705,   705,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   706,   706,   706,   706,   707,   707,   708,   708,
     709,   709,   709,   710,   710,   711,   712,   712,   713,   713,
     714,   714,   714,   714,   714,   714,   714,   714,   714,   714,
     714,   714,   714,   714,   715,   716,   717,   717,   718,   719,
     720,   720,   721,   721,   721,   721,   721,   721,   721,   721,
     721,   721,   721,   721,   721,   721,   721,   721,   721,   721,
     721,   721,   721,   721,   721,   721,   721,   721,   721,   721,
     721,   721,   721,   721,   721,   721,   721,   721,   722,   722,
     723,   723,   724,   724,   725,   726,   726,   727,   727,   728,
     728,   729,   729,   730,   730,   731,   731,   732,   732,   733,
     734,   734,   735,   735,   736,   736,   737,   737,   738,   739,
     740,   741,   741,   741,   742,   743,   745,   744,   746,   746,
     747,   747,   748,   748,   749,   749,   750,   750,   751,   752,
     751,   753,   754,   753,   755,   756,   755,   757,   757,   759,
     758,   760,   760,   760,   761,   761,   761,   761,   762,   763,
     763,   763,   764,   765,   765,   766,   767,   768,   768,   768,
     769,   769,   770,   770,   771,   771,   771,   771,   771,   771,
     772,   773,   774,   775,   776,   777,   777,   779,   778,   780,
     780,   781,   781,   781,   781,   781,   781,   781,   781,   781,
     781,   781,   781,   781,   781,   781,   781,   782,   783,   783,
     783,   783,   783,   783,   783,   784,   784,   784,   784,   785,
     785,   785,   785,   786,   787,   787,   787,   787,   788,   789,
     789,   789,   790,   790,   791,   791,   791,   791,   791,   792,
     792,   793,   793,   794,   794,   794,   795,   796,   797,   798,
     798,   799,   799,   799,   799,   800,   800,   800,   801,   802,
     803,   804,   804,   805,   805,   805,   806,   806,   807,   807,
     808,   809,   810,   811,   812,   813,   812,   814,   814,   815,
     815,   816,   817,   816,   816,   818,   818,   819,   819,   819,
     819,   819,   819,   819,   819,   819,   819,   819,   819,   819,
     819,   819,   819,   819,   819,   819,   819,   819,   819,   819,
     819,   819,   819,   819,   819,   819,   819,   819,   819,   819,
     819,   820,   820,   821,   821,   822,   822,   822,   823,   823,
     823,   824,   825,   826,   827,   828,   826,   829,   826,   830,
     831,   830,   832,   830,   833,   833,   834,   835,   835,   835,
     836,   836,   836,   836,   836,   836,   837,   837,   838,   838,
     839,   840,   839,   841,   841,   842,   842,   842,   842,   842,
     844,   843,   845,   845,   846,   847,   848,   848,   850,   851,
     849,   853,   852,   852,   854,   854,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   856,   855,   857,   857,   857,
     857,   857,   857,   857,   857,   857,   857,   857,   857,   857,
     857,   857,   857,   857,   857,   857,   858,   858,   859,   859,
     860,   860,   861,   861,   861,   861,   861,   862,   863,   863,
     864,   864,   865,   865,   866,   866,   867,   867,   868,   868,
     868,   868,   868,   868,   868,   868,   868,   868,   868,   868,
     868,   868,   868,   868,   868,   868,   868,   868,   868,   868,
     868,   868,   868,   868,   869,   869,   870,   870,   872,   871,
     873,   873,   873,   874,   874,   875,   875,   877,   876,   878,
     878,   879,   879,   881,   880,   882,   882,   883,   884,   884,
     886,   885,   887,   888,   888,   888,   888,   889,   890,   889,
     891,   891,   892,   892,   893,   893,   893,   893,   894,   894,
     894,   894,   895,   895,   896,   896,   897,   897,   898,   898,
     899,   899,   901,   900,   902,   902,   904,   903,   905,   905,
     906,   906,   906,   906,   906,   908,   907,   909,   910,   910,
     911,   912,   914,   913,   915,   915,   916,   916,   917,   917,
     919,   918,   920,   920,   920,   920,   920,   920,   920,   921,
     922,   921,   923,   924,   924,   924,   924,   924,   925,   925,
     926,   926,   927,   927,   928,   928,   929,   929,   930,   930,
     930,   930,   930,   930,   930,   930,   930,   930,   930,   930,
     930,   930,   930,   930,   931,   931,   933,   932,   934,   934,
     934,   934,   934,   935,   935,   937,   936,   938,   940,   939,
     941,   942,   942,   943,   943,   943,   944,   944,   945,   945,
     946,   947,   948,   948,   949,   949,   950,   950,   950,   950,
     951,   951,   952,   952,   954,   953,   955,   955,   955,   955,
     955,   955,   955,   956,   956,   958,   957,   959,   961,   960,
     962,   964,   963,   965,   966,   966,   967,   969,   968,   970,
     970,   970,   971,   971,   973,   972,   974,   975,   975,   976,
     976,   976,   977,   977,   978,   978,   979,   980,   980,   980,
     980,   980,   980,   980,   981,   981,   983,   982,   984,   984,
     986,   985,   987,   988,   988,   988,   989,   989,   989,   989,
     991,   990,   992,   993,   994,   994,   995,   995,   995,   995,
     995,   995,   996,   996,   997,   997,   998,   998,   998,   998,
     998,   999,  1000,  1000,  1001,  1001,  1003,  1002,  1005,  1004,
    1006,  1006,  1008,  1007,  1009,  1009,  1010,  1010,  1012,  1011,
    1013,  1013,  1014,  1014,  1014,  1014,  1015,  1015,  1016,  1016,
    1016,  1016,  1018,  1017,  1019,  1020,  1019,  1019,  1021,  1021,
    1022,  1022,  1023,  1023,  1024,  1024,  1024,  1024,  1024,  1025,
    1025,  1026,  1026,  1027,  1027,  1028,  1030,  1029,  1031,  1032,
    1032,  1033,  1033,  1033,  1033,  1034,  1034,  1035,  1035,  1036,
    1036,  1037,  1038,  1038,  1038,  1039,  1039,  1040,  1040,  1040,
    1041,  1041,  1042,  1042,  1043,  1043,  1044,  1046,  1045,  1047,
    1048,  1050,  1049,  1051,  1052,  1052,  1054,  1053,  1055,  1056,
    1056,  1057,  1057,  1058,  1058,  1059,  1061,  1060,  1062,  1062,
    1063,  1063,  1064,  1064,  1065,  1065,  1066,  1067,  1067,  1069,
    1068,  1070,  1070,  1070,  1070,  1070,  1070,  1071,  1071,  1072,
    1072,  1073,  1074,  1075,  1075,  1076,  1076,  1076,  1076,  1076,
    1076,  1076,  1076,  1077,  1077,  1078,  1079,  1079,  1080,  1081,
    1081,  1082,  1082,  1084,  1083,  1086,  1085,  1087,  1087,  1088,
    1088,  1089,  1089,  1090,  1090,  1091,  1091,  1091,  1092,  1092,
    1092,  1094,  1093,  1095,  1096,  1096,  1097,  1097,  1097,  1097,
    1098,  1098,  1098,  1098,  1098,  1098,  1099,  1100,  1100,  1101,
    1101,  1103,  1102,  1102,  1104,  1104,  1104,  1104,  1105,  1105,
    1106,  1106,  1106,  1106,  1108,  1107,  1109,  1110,  1110,  1111,
    1111,  1111,  1112,  1112,  1113,  1113,  1115,  1114,  1116,  1116,
    1116,  1117,  1117,  1118,  1119,  1119,  1121,  1120,  1122,  1122,
    1124,  1123,  1125,  1127,  1126,  1128,  1129,  1129,  1129,  1131,
    1130,  1132,  1133,  1133,  1134,  1134,  1135,  1136,  1136,  1137,
    1138,  1138,  1139,  1139,  1140,  1140,  1141,  1141,  1143,  1142,
    1144,  1144,  1144,  1144,  1144,  1145,  1146,  1146,  1147,  1147,
    1147,  1147,  1147,  1148,  1149,  1149,  1150,  1150,  1150,  1151,
    1151,  1151,  1151,  1152,  1153,  1153,  1154,  1155,  1156,  1156,
    1158,  1157,  1159,  1160,  1160,  1161,  1161,  1161,  1161,  1162,
    1162,  1163,  1163,  1164,  1164,  1165,  1166,  1166,  1167,  1167,
    1168,  1169,  1169,  1170,  1170,  1171,  1172,  1172,  1173,  1173,
    1174,  1175,  1175,  1176,  1176,  1177,  1177,  1178,  1178,  1178,
    1179,  1180,  1181,  1181,  1181,  1182,  1183,  1184,  1185,  1185,
    1186,  1186,  1187,  1187,  1188,  1189,  1191,  1190,  1192,  1192,
    1192,  1193,  1193,  1193,  1193,  1193,  1193,  1193,  1193,  1193,
    1193,  1193,  1193,  1193,  1193,  1193,  1193,  1193,  1193,  1193,
    1193,  1193,  1193,  1193,  1193,  1194,  1194,  1195,  1195,  1196,
    1196,  1197,  1198,  1199,  1199,  1200,  1200,  1200,  1201,  1201,
    1201,  1202,  1202,  1202,  1203,  1203,  1204,  1204,  1204,  1205,
    1205,  1206,  1206,  1206,  1206,  1206,  1206,  1207,  1207,  1208,
    1209,  1210,  1211,  1211,  1212,  1213,  1214,  1214,  1215,  1216,
    1216,  1217,  1218,  1218,  1218,  1219,  1220,  1220,  1221,  1222,
    1223,  1223,  1224,  1225,  1225,  1226,  1227,  1228,  1228,  1229,
    1229,  1229,  1230,  1230,  1231,  1231,  1231,  1231,  1231,  1231,
    1231,  1231,  1231,  1231,  1232,  1232,  1233,  1233,  1233,  1234,
    1234,  1234,  1234,  1234,  1234,  1234,  1235,  1235,  1236,  1236,
    1237,  1237,  1238,  1238,  1239,  1239,  1240,  1240,  1240,  1241,
    1241,  1241,  1242,  1242,  1243,  1243,  1244,  1244,  1244,  1245,
    1246,  1247,  1247,  1248,  1249,  1249,  1249,  1249,  1250,  1250,
    1251,  1251,  1251,  1251,  1252,  1252,  1253,  1254,  1254,  1255,
    1256,  1257,  1257,  1258,  1258,  1258,  1258,  1258,  1258,  1258,
    1259,  1259,  1260,  1260,  1261,  1261,  1261,  1261,  1261,  1261,
    1261,  1262,  1262,  1262,  1262,  1262,  1262,  1262,  1262,  1262,
    1262,  1262,  1262,  1263,  1263,  1264,  1264,  1264,  1265,  1265,
    1265,  1265,  1266,  1266,  1266,  1267,  1267,  1267,  1268,  1268,
    1268,  1269,  1269,  1270,  1270,  1271,  1271,  1272,  1272,  1273,
    1274,  1274,  1275,  1275,  1276,  1276,  1277,  1277,  1278,  1278,
    1279,  1279,  1279,  1280,  1280,  1281,  1281,  1281,  1282,  1282,
    1283,  1283,  1284,  1284,  1284,  1284,  1284,  1284,  1284,  1284,
    1285,  1285,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,
    1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,
    1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,
    1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,
    1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,
    1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,
    1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,  1286,
    1286,  1286,  1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,
    1291,  1291,  1292,  1292,  1293,  1293,  1294,  1294,  1295,  1295,
    1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,  1300,  1300,
    1301,  1301,  1302,  1302,  1303,  1303,  1303,  1304,  1304,  1305,
    1305,  1306,  1306,  1307,  1307,  1308,  1308,  1308,  1309,  1309,
    1310,  1310,  1310,  1311,  1311,  1311,  1312,  1312,  1313,  1313,
    1314,  1314,  1315,  1315,  1316,  1316,  1316,  1317,  1317,  1318,
    1318,  1319,  1319,  1319,  1320,  1320,  1320,  1320,  1321,  1321,
    1322,  1322,  1323,  1323,  1324,  1324,  1325,  1325,  1326,  1326,
    1327,  1327,  1328,  1328,  1328,  1329,  1329,  1330,  1330,  1331,
    1331,  1332,  1332,  1333,  1333,  1334,  1334,  1335,  1335,  1336,
    1336,  1336,  1337,  1337,  1338,  1338,  1339,  1339,  1340,  1340,
    1341,  1341,  1342,  1342,  1343,  1343,  1344,  1344,  1345,  1345,
    1346,  1346,  1347,  1347,  1348,  1348,  1349,  1349,  1350,  1350,
    1351,  1351,  1352,  1352,  1353,  1353,  1354,  1354,  1355,  1355,
    1356,  1356,  1357,  1357,  1358,  1358,  1358,  1359,  1359,  1360,
    1360,  1361,  1361,  1362,  1362,  1363,  1363,  1364,  1364,  1365,
    1365,  1366,  1366
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     1,     1,
       0,     2,     4,     4,     3,     0,     1,     2,     0,     1,
       3,     0,     1,     3,     0,     0,     0,    20,     0,     7,
       5,     1,     1,     0,     2,     0,     3,     1,     2,     1,
       1,     1,     1,     0,     3,     0,     3,     0,     2,     1,
       1,     1,     1,     1,     0,     4,     0,     3,     0,     3,
       0,     4,     0,     2,     3,     2,     1,     2,     1,     1,
       1,     1,     5,     3,     3,     4,     1,     1,     1,     1,
       1,     2,     0,     4,     0,     2,     3,     1,     2,     3,
       3,     3,     1,     1,     0,     2,     1,     2,     2,     2,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     2,     3,     3,
       1,     0,     1,     1,     3,     4,     0,     5,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     0,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     2,     3,     1,     2,     3,     1,     2,     1,
       2,     4,     1,     2,     1,     3,     4,     5,     0,     3,
       3,     5,     3,     4,     3,     3,     0,     3,     0,     2,
       0,     2,     0,     2,     0,     6,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     5,     5,     1,     1,     1,
       1,     0,     3,     0,     1,     1,     1,     1,     0,     1,
       1,     4,     1,     1,     1,     7,     9,     0,     4,     3,
       3,     4,     0,     1,     1,     0,     5,     2,     2,     1,
       0,     4,     5,     2,     3,     1,     1,     3,     1,     2,
       4,     4,     4,     6,     1,     2,     0,     2,     2,     1,
       4,     3,     1,     1,     3,     2,     2,     2,     0,     2,
       3,     1,     2,     1,     1,     5,     0,     1,     1,     1,
       0,     6,     1,     2,     2,     0,     2,     0,     3,     0,
       3,     0,     2,     2,     0,     5,     3,     1,     1,     0,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     0,     1,     1,     4,     6,     9,     0,
       3,     0,     2,     0,     2,     3,     5,     5,     1,     1,
       1,     1,     3,     5,     0,     2,     1,     1,     1,     4,
       2,     2,     4,     3,     2,     2,     2,     1,     2,     0,
       0,     5,     0,     0,     2,     2,     3,     2,     1,     0,
       4,     3,     2,     0,     1,     1,     1,     0,     2,     1,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     2,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     0,     2,     2,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     6,     0,     2,     7,     8,     0,
       2,     0,     2,     0,     3,     0,     3,     0,     1,     1,
       0,     5,     1,     1,     0,     3,     1,     2,     1,     2,
       2,     0,     1,     1,     3,     1,     0,     5,     1,     2,
       1,     3,     0,     4,     2,     4,     2,     2,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     0,     2,     0,
       6,     0,     2,     2,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     1,     2,     1,     4,     1,     2,     4,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     3,
       3,     4,     4,     4,     3,     0,     2,     0,     5,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       3,     3,     1,     1,     1,     0,     1,     3,     1,     0,
       1,     1,     1,     3,     1,     2,     2,     1,     4,     0,
       3,     2,     1,     1,     3,     4,     5,     4,     5,     1,
       1,     0,     2,     1,     1,     1,     6,     2,     2,     0,
       2,     1,     2,     2,     2,     0,     2,     1,     1,     2,
       4,     0,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     4,     2,     3,     0,     0,     5,     0,     1,     2,
       3,     1,     0,     4,     3,     0,     2,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     1,     5,     5,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     0,     1,     1,     0,     1,
       1,     3,     2,     0,     0,     0,     9,     0,     4,     0,
       0,     3,     0,     3,     1,     2,     4,     0,     2,     2,
       0,     3,     3,     4,     4,     3,     0,     1,     0,     2,
       0,     0,     7,     0,     2,     1,     1,     2,     1,     1,
       0,     6,     0,     2,     2,     1,     0,     1,     0,     0,
       3,     0,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     4,     6,     3,     3,
       4,     3,     4,     3,     3,     4,     4,     3,     4,     3,
       4,     5,     3,     4,     3,     3,     1,     1,     1,     2,
       0,     1,     3,     3,     2,     2,     2,     3,     3,     3,
       0,     1,     0,     3,     0,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     1,     1,     1,     2,     1,     1,     3,
       3,     3,     3,     3,     1,     1,     0,     1,     0,     4,
       4,     5,     6,     0,     2,     0,     1,     0,     3,     3,
       4,     0,     2,     0,     3,     1,     2,     4,     0,     2,
       0,     4,     6,     0,     1,     1,     1,     0,     0,     3,
       1,     2,     2,     3,     0,     2,     2,     2,     0,     3,
       2,     4,     1,     1,     1,     1,     0,     2,     0,     2,
       0,     1,     0,     3,     1,     2,     0,     3,     2,     3,
       0,     1,     3,     3,     2,     0,     4,     4,     0,     1,
       1,     1,     0,     4,     4,     2,     1,     2,     0,     1,
       0,     4,     3,     3,     3,     3,     4,     2,     4,     1,
       0,     3,     5,     0,     2,     2,     2,     2,     0,     2,
       1,     1,     0,     2,     0,     1,     1,     2,     1,     2,
       2,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     0,     1,     0,     4,     4,     6,
       6,     8,     8,     0,     1,     0,     3,     2,     0,     4,
       2,     1,     3,     1,     1,     1,     2,     1,     1,     2,
       2,     3,     2,     3,     1,     3,     2,     1,     1,     1,
       0,     2,     0,     1,     0,     3,     0,     2,     1,     2,
       1,     1,     1,     0,     2,     0,     3,     1,     0,     3,
       1,     0,     3,     3,     0,     3,     2,     0,     6,     3,
       2,     1,     0,     1,     0,     3,     5,     0,     2,     0,
       3,     3,     0,     2,     1,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     2,
       0,     3,     2,     1,     1,     1,     2,     1,     1,     1,
       0,     3,     2,     5,     1,     2,     2,     2,     1,     1,
       1,     2,     1,     2,     4,     2,     0,     1,     1,     1,
       1,     4,     0,     2,     3,     3,     0,     3,     0,     3,
       3,     4,     0,     4,     4,     6,     0,     1,     0,     3,
       4,     5,     1,     1,     1,     1,     0,     3,     0,     3,
       2,     1,     0,     3,     2,     0,     4,     2,     0,     1,
       1,     1,     1,     3,     0,     2,     1,     3,     3,     0,
       3,     1,     1,     1,     3,     7,     0,     4,     7,     0,
       2,     0,     1,     2,     1,     2,     3,     3,     1,     0,
       1,     1,     4,     4,     2,     0,     1,     1,     3,     2,
       0,     3,     1,     1,     0,     1,     1,     0,     3,     2,
       1,     0,     4,     4,     0,     1,     0,     4,     5,     0,
       1,     2,     3,     0,     1,     1,     0,     4,     4,     6,
       0,     2,     0,     2,     1,     2,     3,     0,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     3,     4,     1,     2,     3,     1,
       2,     3,     3,     0,     3,     0,     7,     0,     5,     0,
       2,     0,     2,     0,     3,     0,     2,     4,     0,     2,
       4,     0,     4,     4,     0,     3,     0,     4,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     2,     1,     0,
       1,     0,     4,     2,     0,     2,     4,     4,     0,     1,
       1,     1,     1,     1,     0,     4,     5,     1,     2,     1,
       3,     3,     0,     4,     0,     1,     0,     4,     4,     6,
       6,     0,     1,     2,     0,     1,     0,     3,     1,     2,
       0,     3,     5,     0,     3,     2,     0,     1,     1,     0,
       4,     6,     0,     3,     1,     3,     2,     2,     2,     3,
       0,     3,     0,     3,     0,     3,     0,     1,     0,     3,
       1,     1,     1,     1,     1,     7,     0,     1,     1,     1,
       1,     1,     1,     4,     1,     2,     1,     2,     3,     0,
       1,     2,     1,     3,     1,     1,     4,     1,     1,     1,
       0,     4,     6,     0,     2,     0,     4,     3,     3,     1,
       1,     1,     1,     0,     1,     2,     0,     2,     0,     2,
       2,     0,     2,     0,     2,     2,     0,     2,     0,     2,
       2,     0,     2,     0,     2,     2,     1,     2,     1,     1,
       2,     2,     2,     1,     1,     2,     2,     2,     0,     2,
       0,     2,     0,     2,     1,     1,     0,     2,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     2,     2,     1,     3,
       1,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     0,
       2,     1,     1,     1,     3,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     4,     3,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     2,     1,     1,     1,
       3,     2,     2,     1,     1,     3,     3,     4,     5,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     5,     5,     5,     4,     5,     5,     5,     5,
       5,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     5,     0,     3,     2,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     0,
       0,     1,     0,     1,     0,     1,     0,     2,     0,     2,
       0,     1,     1,     0,     1,     0,     1,     2,     0,     2,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     1,     1,     0,     2,     2,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     2,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     1,     0,     1,     0,     3,     0,     1,     0,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     3,     2,     1,     1,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 1352 "parser.y" /* yacc.c:1646  */
    {
	clear_initial_values ();
	current_program = NULL;
	cobc_cs_check = 0;
	prog_end = 0;
	depth = 0;
	main_flag_set = 0;
	current_program = cb_build_program (NULL, 0);
	cb_build_registers ();
  }
#line 6177 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1363 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
	if (depth > 1) {
		cb_error (_("Multiple PROGRAM-ID's without matching END PROGRAM"));
	}
	if (cobc_flag_main && !main_flag_set) {
		cb_error (_("Executable requested but no program found"));
	}
	if (errorcount > 0) {
		YYABORT;
	}
	if (!current_program->entry_list) {
		emit_entry (current_program->program_id, 0, NULL);
	}
  }
#line 6200 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1399 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	current_section = NULL;
	current_paragraph = NULL;
	prog_end = 1;
	if (increment_depth ()) {
		YYABORT;
	}
	l = cb_build_alphanumeric_literal (demangle_name,
					   strlen (demangle_name));
	current_program->program_id = cb_build_program_id (l, NULL, 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = cobc_flag_main;
	}
	check_relaxed_syntax (COBC_HD_PROGRAM_ID);
  }
#line 6224 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 1454 "parser.y" /* yacc.c:1646  */
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[-1]))) {
		s = (char *)(CB_LITERAL ((yyvsp[-1]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[-1])));
	}
	if (depth) {
		depth--;
	}
	if (strcmp (stack_progid[depth], s)) {
		cb_error (_("END PROGRAM '%s' is different to PROGRAM-ID '%s'"),
			s, stack_progid[depth]);
	}
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
  }
#line 6249 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 1483 "parser.y" /* yacc.c:1646  */
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[-1]))) {
		s = (char *)(CB_LITERAL ((yyvsp[-1]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[-1])));
	}
	if (depth) {
		depth--;
	}
	if (strcmp (stack_progid[depth], s)) {
		cb_error (_("END FUNCTION '%s' is different to FUNCTION-ID '%s'"),
			s, stack_progid[depth]);
	}
	if (!current_program->flag_validated) {
		current_program->flag_validated = 1;
		cb_validate_program_body (current_program);
	}
  }
#line 6274 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 1516 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 6282 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1522 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 6290 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1534 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 6298 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1544 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[-1]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[-1]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[-1])));
	}
	if (prog_end) {
		if (!current_program->flag_validated) {
			current_program->flag_validated = 1;
			cb_validate_program_body (current_program);
		}
		clear_initial_values ();
		current_program = cb_build_program (current_program, depth);
		build_nested_special (depth);
		cb_build_registers ();
	} else {
		prog_end = 1;
	}
	if (increment_depth ()) {
		YYABORT;
	}
	current_program->program_id = cb_build_program_id ((yyvsp[-1]), (yyvsp[0]), 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = !!cobc_flag_main;
	}
  }
#line 6333 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1575 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6341 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 1582 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[-2]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[-2]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[-2])));
	}
	if (prog_end) {
		if (!current_program->flag_validated) {
			current_program->flag_validated = 1;
			cb_validate_program_body (current_program);
		}
		clear_initial_values ();
		current_program = cb_build_program (current_program, depth);
		build_nested_special (depth);
		cb_build_registers ();
	} else {
		prog_end = 1;
	}
	if (increment_depth ()) {
		YYABORT;
	}
	current_program->program_id = cb_build_program_id ((yyvsp[-2]), (yyvsp[-1]), 1);
	current_program->prog_type = CB_FUNCTION_TYPE;
	current_program->flag_recursive = 1;
	cobc_cs_check = 0;
  }
#line 6374 "parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 1615 "parser.y" /* yacc.c:1646  */
    {
	cb_trim_program_id ((yyvsp[0]));
  }
#line 6382 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1621 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6388 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1622 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6394 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1631 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6407 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1640 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6420 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1654 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6428 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1658 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6436 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1668 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6444 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1677 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6456 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1702 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6469 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1720 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6481 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1733 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 6491 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1762 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6499 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1769 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6507 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1776 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6515 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1783 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 6527 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1794 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6535 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1798 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6543 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1802 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6551 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1806 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6559 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1820 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 6568 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1825 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 6576 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1833 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 6584 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1845 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 6592 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1849 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	if ((yyvsp[0])) {
		x = (yyvsp[0]);
	} else {
		x = (yyvsp[-1]);
	}
	current_program->user_spec_list =
		cb_list_add (current_program->user_spec_list, x);
  }
#line 6608 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1870 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6616 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1874 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6624 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1881 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6633 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1886 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6642 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1897 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 6656 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1911 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	yyerrok;
  }
#line 6665 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1942 "parser.y" /* yacc.c:1646  */
    {
	char system_name[16];
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	check_duplicate = 0;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		save_tree = NULL;
	} else {
		/* get system name and revert word-combination of scanner.l,
		   if necessary (e.g. SWITCH A <--> SWITCH_A) */
		strncpy(system_name, CB_NAME ((yyvsp[0])), 15);
		if (system_name [6] == '_') {
			system_name [6] = ' ';
		}
		/* lookup system name */
		save_tree = lookup_system_name (system_name);
		if (!save_tree) {
			cb_error_x ((yyvsp[0]), _("Invalid system-name '%s'"), system_name);
		}
	}
  }
#line 6693 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1970 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 6707 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1980 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("Invalid special names clause"));
		} else if (CB_VALID_TREE ((yyvsp[0]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[-2]);
			cb_define ((yyvsp[0]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[0]), save_tree);
		}
	}
  }
#line 6724 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1993 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 6736 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2009 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 6744 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2016 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	
	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 6763 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2031 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 6782 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2051 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		(yyval) = NULL;
	} else {
		/* Returns null on error */
		(yyval) = cb_build_alphabet_name ((yyvsp[0]));
	}
  }
#line 6799 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2064 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 6811 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2075 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 6821 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2081 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6831 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2087 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6841 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2093 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 6851 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2099 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6861 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2105 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 6872 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2115 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 6880 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2119 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6888 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2126 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6896 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2130 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 6904 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2134 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 6912 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2138 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 6920 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2145 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6928 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2149 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 6936 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2155 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6942 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2156 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6948 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2157 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6954 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2158 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 6960 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2159 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 6966 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2160 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 6972 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2164 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6978 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2165 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6984 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2173 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else if ((yyvsp[-1])) {
		CB_CHAIN_PAIR (current_program->symbolic_char_list, (yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 6999 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2187 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7007 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2191 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7015 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2199 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7023 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2206 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7031 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2210 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7043 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2221 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length ((yyvsp[-2])) != cb_list_length ((yyvsp[0]))) {
		cb_error (_("Invalid SYMBOLIC clause"));
		(yyval) = NULL;
	} else {
		l1 = (yyvsp[-2]);
		l2 = (yyvsp[0]);
		for (; l1; l1 = CB_CHAIN (l1), l2 = CB_CHAIN (l2)) {
			CB_PURPOSE (l1) = CB_VALUE (l2);
		}
		(yyval) = (yyvsp[-2]);
	}
  }
#line 7064 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2241 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7076 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2249 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7088 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2259 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7094 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2260 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7100 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2267 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		x = cb_build_class_name ((yyvsp[-2]), (yyvsp[0]));
		if (x) {
			current_program->class_name_list =
				cb_list_add (current_program->class_name_list, x);
		}
	}
  }
#line 7122 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2287 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7128 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2288 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7134 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2293 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7142 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2297 "parser.y" /* yacc.c:1646  */
    {
	if (CB_TREE_CLASS ((yyvsp[-2])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[-2])) && CB_LITERAL ((yyvsp[-2]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (CB_TREE_CLASS ((yyvsp[0])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[0])) && CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (literal_value ((yyvsp[-2])) <= literal_value ((yyvsp[0]))) {
		(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
	} else {
		(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-2]));
	}
  }
#line 7162 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2318 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		l = cb_build_locale_name ((yyvsp[-2]), (yyvsp[0]));
		if (l) {
			current_program->locale_list =
				cb_list_add (current_program->locale_list, l);
		}
	}
  }
#line 7184 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2341 "parser.y" /* yacc.c:1646  */
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[-1]))->data;
	unsigned int	error_ind = 0;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		error_ind = 1;
	}
	check_repeated ("CURRENCY", SYN_CLAUSE_1, &check_duplicate);
	if ((yyvsp[0])) {
		PENDING ("PICTURE SYMBOL");
	}
	if (CB_LITERAL ((yyvsp[-1]))->size != 1) {
		cb_error_x ((yyvsp[-1]), _("Invalid currency sign '%s'"), (char *)s);
		error_ind = 1;
	}
	switch (*s) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'N':
	case 'P':
	case 'R':
	case 'S':
	case 'V':
	case 'X':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'n':
	case 'p':
	case 'r':
	case 's':
	case 'v':
	case 'x':
	case 'z':
	case '+':
	case '-':
	case ',':
	case '.':
	case '*':
	case '/':
	case ';':
	case '(':
	case ')':
	case '=':
	case '\'':
	case '"':
	case ' ':
		cb_error_x ((yyvsp[-1]), _("Invalid currency sign '%s'"), (char *)s);
		break;
	default:
		if (!error_ind) {
			current_program->currency_symbol = s[0];
		}
		break;
	}
  }
#line 7265 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2422 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7273 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2426 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7281 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2435 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("DECIMAL-POINT", SYN_CLAUSE_2, &check_duplicate);
		current_program->decimal_point = ',';
		current_program->numeric_separator = '.';
	}
  }
#line 7298 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2454 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		current_program->flag_trailing_separate = 1;
	}
  }
#line 7313 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2470 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3, &check_duplicate);
		current_program->cursor_pos = (yyvsp[0]);
	}
  }
#line 7329 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2488 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4, &check_duplicate);
		current_program->crt_status = (yyvsp[0]);
	}
  }
#line 7345 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2506 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5, &check_duplicate);
		PENDING ("SCREEN CONTROL");
	}
  }
#line 7361 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2523 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("EVENT STATUS", SYN_CLAUSE_6, &check_duplicate);
		PENDING ("EVENT STATUS");
	}
  }
#line 7377 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2540 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7386 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2548 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7396 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2557 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7406 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2572 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	}

	/* Build new file */
	current_file = build_file ((yyvsp[0]));
	current_file->optional = CB_INTEGER ((yyvsp[-1]))->val;

	/* Add file to current program list */
	CB_ADD_TO_CHAIN (CB_TREE (current_file), current_program->file_list);
  }
#line 7427 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2589 "parser.y" /* yacc.c:1646  */
    {
	validate_file (current_file, (yyvsp[-3]));
  }
#line 7435 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2593 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
#line 7447 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2627 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7457 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2633 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7471 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2643 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdout", (size_t)6);
		current_file->special = COB_SELECT_STDOUT;
	}
  }
#line 7488 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2656 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdin", (size_t)5);
		current_file->special = COB_SELECT_STDIN;
	}
  }
#line 7505 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 2669 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("LPT1", (size_t)4);
	}
  }
#line 7522 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 2692 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7530 "parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 2699 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7538 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 2712 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7546 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2724 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 7555 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2731 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 7561 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2732 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 7567 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2733 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 7573 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2741 "parser.y" /* yacc.c:1646  */
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	p->key = (yyvsp[-2]);
	p->component_list = NULL;
	p->duplicates = CB_INTEGER ((yyvsp[-1]))->val;
	if (CB_INTEGER ((yyvsp[0]))->val == -1) {
		p->tf_suppress = 0;
	} else {
		p->tf_suppress = 1;
		p->char_suppress = CB_INTEGER ((yyvsp[0]))->val;
	}
	p->next = NULL;

	/* Add to the end of list */
	if (current_file->alt_key_list == NULL) {
		current_file->alt_key_list = p;
	} else {
		l = current_file->alt_key_list;
		for (; l->next; l = l->next) {
			;
		}
		l->next = p;
	}
  }
#line 7605 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2770 "parser.y" /* yacc.c:1646  */
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;
	cb_tree composite_key;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	/* generate field (in w-s) for composite-key */
	composite_key = cb_build_field((yyvsp[-4]));
	if (composite_key == cb_error_node) {
		YYERROR;
	} else {
		composite_key->category = CB_CATEGORY_ALPHANUMERIC; 
		((struct cb_field *)composite_key)->count = 1;
		p->key = cb_build_field_reference((struct cb_field *)composite_key, NULL);
		p->component_list = key_component_list;
		p->duplicates = CB_INTEGER ((yyvsp[-1]))->val;
		if (CB_INTEGER ((yyvsp[0]))->val == -1) {
			p->tf_suppress = 0;
		} else {
			p->tf_suppress = 1;
			p->char_suppress = CB_INTEGER ((yyvsp[0]))->val;
 		}
		p->next = NULL;

		/* add to the end of list */
		if (current_file->alt_key_list == NULL) {
			current_file->alt_key_list = p;
		} else {
			l = current_file->alt_key_list;
			for (; l->next; l = l->next);
			l->next = p;
		}
	}
  }
#line 7644 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2807 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (-1); }
#line 7650 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2810 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (literal_value ((yyvsp[0])));
  }
#line 7658 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2815 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (literal_value ((yyvsp[0])));
  }
#line 7666 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2825 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
#line 7675 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 2836 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 7684 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2851 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 7692 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2859 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 7701 "parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2864 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 7710 "parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 2869 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 7719 "parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2878 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 7727 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 2882 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 7736 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2898 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 7745 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2903 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 7754 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2908 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 7763 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2913 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 7772 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2924 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 7781 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2935 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 7789 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2945 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 7798 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2950 "parser.y" /* yacc.c:1646  */
    {
	cb_tree composite_key;

	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[-2]);

	/* generate field (in w-s) for composite-key */
	composite_key = cb_build_field((yyvsp[-2]));
	if (composite_key == cb_error_node) {
		YYERROR;
	} else {
		composite_key->category = CB_CATEGORY_ALPHANUMERIC; 
		((struct cb_field *)composite_key)->count = 1;
		current_file->key = cb_build_field_reference((struct cb_field *)composite_key, NULL);
		current_file->component_list = key_component_list;
	}
  }
#line 7820 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2975 "parser.y" /* yacc.c:1646  */
    {
    key_component_list = NULL;
  }
#line 7828 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2985 "parser.y" /* yacc.c:1646  */
    {
    struct cb_key_component *c;
    struct cb_key_component *comp = cobc_malloc(sizeof(struct cb_key_component));
    comp->next = NULL;
    comp->component = (yyvsp[0]);
    if (key_component_list == NULL) {
       key_component_list = comp;
    } else {
       for (c = key_component_list; c->next != NULL; c = c->next);
       c->next = comp;
    }
  }
#line 7845 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3003 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 7854 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3014 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 7862 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 3028 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 7871 "parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 3035 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7877 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3036 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 7883 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3037 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7889 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 3046 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7897 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3065 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	switch (CB_INTEGER ((yyvsp[-3]))->val) {
	case 0:
		/* SAME AREA */
		break;
	case 1:
		/* SAME RECORD */
		for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l))) {
				CB_FILE (cb_ref (CB_VALUE (l)))->same_clause = samearea;
			}
		}
		samearea++;
		break;
	case 2:
		/* SAME SORT-MERGE */
		break;
	}
  }
#line 7926 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 3092 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 7932 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3093 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 7938 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3094 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7944 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3095 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7950 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3102 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 7959 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 3107 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 7971 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 3134 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 7979 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3143 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 7989 "parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 3157 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE (current_file)) {
		if (CB_VALID_TREE ((yyvsp[0]))) {
			/* Do not keep Record if this is really a report */
			if (!current_file->reports) {
				finalize_file (current_file, CB_FIELD ((yyvsp[0])));
			}
		} else if (!current_file->reports) {
			cb_error (_("RECORD description missing or invalid"));
		}
	}
  }
#line 8006 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 3175 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION,
			       COBC_HD_FILE_SECTION, 0, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[0])) || cb_ref ((yyvsp[0])) == cb_error_node) {
		YYERROR;
	}
	current_file = CB_FILE (cb_ref ((yyvsp[0])));
	if (CB_VALID_TREE (current_file)) {
		if ((yyvsp[-1])) {
			current_file->organization = COB_ORG_SORT;
		}
	}
  }
#line 8026 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3192 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8034 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3199 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8042 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3203 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8050 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3214 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8064 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 3224 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_2, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_external) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		current_file->flag_global = 1;
		current_program->flag_file_global = 1;
	}
  }
#line 8083 "parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 3254 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8092 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3267 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_max = cb_get_int ((yyvsp[-1]));
		if (current_file->record_max < 1)  {
			current_file->record_max = 1;
			cb_error (_("RECORD clause invalid"));
		}
		if (current_file->record_max > MAX_FD_RECORD)  {
			current_file->record_max = MAX_FD_RECORD;
			cb_error (_("RECORD size exceeds maximum allowed (%d)"),
				  MAX_FD_RECORD);
		}
	}
  }
#line 8116 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3287 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_min = cb_get_int ((yyvsp[-3]));
		current_file->record_max = cb_get_int ((yyvsp[-1]));
		if (current_file->record_min < 0)  {
			current_file->record_min = 0;
			error_ind = 1;
		}
		if (current_file->record_max < 1)  {
			current_file->record_max = 1;
			error_ind = 1;
		}
		if (current_file->record_max > MAX_FD_RECORD)  {
			current_file->record_max = MAX_FD_RECORD;
			cb_error (_("RECORD size exceeds maximum allowed (%d)"),
				  MAX_FD_RECORD);
			error_ind = 1;
		}
		if (current_file->record_max <= current_file->record_min)  {
			error_ind = 1;
		}
		if (error_ind) {
			cb_error (_("RECORD clause invalid"));
		}
	}
  }
#line 8154 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3322 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	current_file->record_min = (yyvsp[-3]) ? cb_get_int ((yyvsp[-3])) : 0;
	current_file->record_max = (yyvsp[-2]) ? cb_get_int ((yyvsp[-2])) : 0;
	if ((yyvsp[-3]) && current_file->record_min < 0)  {
		current_file->record_min = 0;
		error_ind = 1;
	}
	if ((yyvsp[-2]) && current_file->record_max < 1)  {
		current_file->record_max = 1;
		error_ind = 1;
	}
	if ((yyvsp[-2]) && current_file->record_max > MAX_FD_RECORD)  {
		current_file->record_max = MAX_FD_RECORD;
		cb_error (_("RECORD size exceeds maximum allowed (%d)"),
			  MAX_FD_RECORD);
		error_ind = 1;
	}
	if (((yyvsp[-3]) || (yyvsp[-2])) && current_file->record_max <= current_file->record_min)  {
		error_ind = 1;
	}
	if (error_ind) {
		cb_error (_("RECORD clause invalid"));
	}
  }
#line 8186 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3353 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8194 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3359 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8200 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3360 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8206 "parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 3364 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8212 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 3365 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8218 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 3373 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8227 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3384 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8236 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3389 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8248 "parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3412 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8257 "parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3424 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8, &check_duplicate);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("LINAGE clause with wrong file type"));
	} else {
		current_file->linage = (yyvsp[-2]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		if (current_linage == 0) {
			linage_file = current_file;
		}
		current_linage++;
	}
  }
#line 8276 "parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3452 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8284 "parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3459 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8292 "parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3466 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8300 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3475 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 8310 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3487 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE SET", SYN_CLAUSE_10, &check_duplicate);
	if (CB_VALID_TREE ((yyvsp[0]))) {
		cb_tree			x;
		struct cb_alphabet_name	*al;

		x = cb_ref ((yyvsp[0]));
		if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
		    current_file->organization != COB_ORG_SEQUENTIAL) {
			cb_error (_("CODE-SET clause invalid for file type"));
		}
		if (!CB_ALPHABET_NAME_P (x)) {
			cb_error_x ((yyvsp[0]), _("Alphabet-name is expected '%s'"), cb_name ((yyvsp[0])));
		} else {
			al = CB_ALPHABET_NAME (x);
			switch (al->alphabet_type) {
#ifdef	COB_EBCDIC_MACHINE
			case CB_ALPHABET_ASCII:
			case CB_ALPHABET_CUSTOM:
				current_file->code_set = al;
				break;
			default:
				if (warningopt) {
					cb_warning_x ((yyvsp[0]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[0])));
				}
				break;
#else
			case CB_ALPHABET_EBCDIC:
			case CB_ALPHABET_CUSTOM:
				current_file->code_set = al;
				break;
			default:
				if (warningopt) {
					cb_warning_x ((yyvsp[0]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[0])));
				}
				break;
#endif
			}
			if (warningopt) {
				PENDING ("CODE-SET");
			}
		}
	}
  }
#line 8361 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3539 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REPORT", SYN_CLAUSE_11, &check_duplicate);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[0]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		current_file->flag_line_adv = 1;
	}
  }
#line 8377 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3559 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	current_program->report_list =
				cb_list_add (current_program->report_list,
					     CB_TREE (current_report));
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8393 "parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3571 "parser.y" /* yacc.c:1646  */
    {
	current_report = build_report ((yyvsp[0]));
	current_report->file = current_file;
	current_program->report_list =
				cb_list_add (current_program->report_list,
					     CB_TREE (current_report));
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
#line 8409 "parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3614 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8419 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3620 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8429 "parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3629 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8437 "parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3632 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8448 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3639 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8461 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3659 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;

	x = cb_build_field_tree ((yyvsp[-1]), (yyvsp[0]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-1]));
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}
  }
#line 8480 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3674 "parser.y" /* yacc.c:1646  */
    {
	if (!qualifier && (current_field->level == 88 ||
	    current_field->level == 66 || current_field->flag_item_78)) {
		cb_error (_("Item requires a data name"));
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (current_field->level == 88) {
		cb_validate_88_item (current_field);
	}
	if (current_field->flag_item_78) {
		/* Reset to last non-78 item */
		current_field = cb_validate_78_item (current_field, 0);
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 8504 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3694 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8518 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3707 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8526 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3714 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8536 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3720 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8546 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3726 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8556 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3735 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8566 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3744 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8574 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3748 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 8587 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3759 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8593 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3760 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8599 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3761 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8605 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3762 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8611 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3767 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8619 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3771 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8627 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3775 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 8635 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3779 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 8643 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3783 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8651 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3787 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 8659 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3791 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 8667 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3795 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 8675 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3799 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 8683 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3803 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 8691 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3807 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8699 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3811 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 8707 "parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3815 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8719 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3847 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[-4]));
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-4]));
	if (level != 1) {
		cb_error (_("CONSTANT item not at 01 level"));
	} else if ((yyvsp[0])) {
		x = cb_build_constant ((yyvsp[-3]), (yyvsp[0]));
		CB_FIELD (x)->flag_item_78 = 1;
		CB_FIELD (x)->level = 1;
		cb_needs_01 = 1;
		if ((yyvsp[-1])) {
			CB_FIELD (x)->flag_is_global = 1;
		}
		/* Ignore return value */
		(void)cb_validate_78_item (CB_FIELD (x), 0);
	}
  }
#line 8746 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3873 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8754 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3877 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 8763 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3885 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 8772 "parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3891 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 8781 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 3919 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REDEFINES", SYN_CLAUSE_1, &check_pic_duplicate);
	if ((yyvsp[-2]) != NULL) {
		if (cb_relaxed_syntax_check) {
			cb_warning_x ((yyvsp[0]), _("REDEFINES clause should follow entry-name"));
		} else {
			cb_error_x ((yyvsp[0]), _("REDEFINES clause must follow entry-name"));
		}
	}

	current_field->redefines = cb_resolve_redefines (current_field, (yyvsp[0]));
	if (current_field->redefines == NULL) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
		YYERROR;
	}
  }
#line 8803 "parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 3943 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_2, &check_pic_duplicate);
	if (current_storage != CB_STORAGE_WORKING) {
		cb_error (_("%s not allowed here"), "EXTERNAL");
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "EXTERNAL");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "EXTERNAL");
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_is_global) {
		cb_error (_("%s and %s are mutually exclusive"), "GLOBAL", "EXTERNAL");
#endif
	} else if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "EXTERNAL");
	} else if (current_field->redefines) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "REDEFINES");
	} else if (current_field->flag_occurs) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	} else {
		current_field->flag_external = 1;
		current_program->flag_has_external = 1;
	}
  }
#line 8831 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3970 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 8839 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3974 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 8847 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 3983 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_3, &check_pic_duplicate);
	if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "GLOBAL");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "GLOBAL");
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "GLOBAL", "EXTERNAL");
#endif
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else if (current_storage == CB_STORAGE_LOCAL) {
		cb_error (_("%s not allowed here"), "GLOBAL");
	} else {
		current_field->flag_is_global = 1;
	}
  }
#line 8870 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4008 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 8879 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4024 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8887 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4028 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8895 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4032 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 8903 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4036 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 8911 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4040 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8919 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4044 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8927 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4048 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 8935 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4052 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 8943 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4056 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 8951 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4060 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 8959 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4064 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 8967 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4068 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8975 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4072 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8984 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4077 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8993 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4082 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9001 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4086 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9009 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4090 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9021 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4098 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9029 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4102 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9037 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4106 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9049 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4114 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9057 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4118 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9065 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4122 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9073 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4126 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9081 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4130 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9089 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4134 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9097 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4138 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9105 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4142 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9113 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4146 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9125 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4154 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9137 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4162 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9145 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4166 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9153 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4170 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9161 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4174 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9169 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4178 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9177 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4182 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
#line 9186 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4202 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9196 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4208 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9206 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4221 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->depending && !((yyvsp[-3]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[-3]) ? cb_get_int ((yyvsp[-4])) : 1;
	current_field->occurs_max = (yyvsp[-3]) ? cb_get_int ((yyvsp[-3])) : cb_get_int ((yyvsp[-4]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	current_field->flag_occurs = 1;
  }
#line 9225 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4239 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9233 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4249 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->depending && !((yyvsp[-4]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[-4]) ? cb_get_int ((yyvsp[-5])) : 1;
	current_field->occurs_max = (yyvsp[-4]) ? cb_get_int ((yyvsp[-4])) : cb_get_int ((yyvsp[-5]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->flag_occurs = 1;
  }
#line 9257 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4270 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	current_field->occurs_min = (yyvsp[-4]) ? cb_get_int ((yyvsp[-4])) : 0;
	PENDING("OCCURS with DYNAMIC capacity");
	current_field->occurs_max = (yyvsp[-3]) ? cb_get_int ((yyvsp[-3])) : 0;
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->flag_occurs = 1;
  }
#line 9279 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4290 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9285 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4291 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9291 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4295 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9297 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4296 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9303 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4301 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9311 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4308 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9320 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4316 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9328 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4323 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		cb_tree		l;
		struct cb_key	*keys;
		int		i;
		int		nkeys;

		l = (yyvsp[0]);
		nkeys = cb_list_length ((yyvsp[0]));
		keys = cobc_parse_malloc (sizeof (struct cb_key) * nkeys);

		for (i = 0; i < nkeys; i++) {
			keys[i].dir = CB_PURPOSE_INT (l);
			keys[i].key = CB_VALUE (l);
			l = CB_CHAIN (l);
		}
		current_field->keys = keys;
		current_field->nkeys = nkeys;
	}
  }
#line 9353 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4346 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9359 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4349 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[-3]);
		if (qualifier && !CB_REFERENCE(CB_VALUE(l))->chain &&
		    strcasecmp (CB_NAME(CB_VALUE(l)), CB_NAME(qualifier))) {
			CB_REFERENCE(CB_VALUE(l))->chain = qualifier;
		}
	}
	(yyval) = cb_list_append ((yyvsp[-4]), (yyvsp[0]));
  }
#line 9376 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4364 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9382 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4365 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9388 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4370 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9396 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4376 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9402 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4378 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9408 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4383 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9417 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4394 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 9426 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4405 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 9435 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4415 "parser.y" /* yacc.c:1646  */
    {
	/* Stay quiet on this
	PENDING ("SYNCHRONIZED RIGHT");
	*/
  }
#line 9445 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4427 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 9454 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4438 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BASED", SYN_CLAUSE_11, &check_pic_duplicate);
	if (current_storage != CB_STORAGE_WORKING &&
	    current_storage != CB_STORAGE_LINKAGE &&
	    current_storage != CB_STORAGE_LOCAL) {
		cb_error (_("%s not allowed here"), "BASED");
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("%s only allowed at 01/77 level"), "BASED");
	} else if (!qualifier) {
		cb_error (_("%s requires a data name"), "BASED");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "EXTERNAL");
	} else if (current_field->redefines) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "REDEFINES");
	} else if (current_field->flag_any_length) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY LENGTH");
	} else if (current_field->flag_occurs) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else {
		current_field->flag_item_based = 1;
	}
  }
#line 9481 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4466 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 9490 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4474 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9496 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4475 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9502 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4479 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9508 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4480 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9514 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4485 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9525 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4498 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RENAMES", SYN_CLAUSE_13, &check_pic_duplicate);
	if (cb_ref ((yyvsp[0])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[0])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[0])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[0])));
			current_field->pic = current_field->redefines->pic;
		}
	}
  }
#line 9542 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4511 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RENAMES", SYN_CLAUSE_13, &check_pic_duplicate);
	if (cb_ref ((yyvsp[-2])) != cb_error_node && cb_ref ((yyvsp[0])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[-2])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[-2])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else if (CB_FIELD (cb_ref ((yyvsp[0])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[0])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[-2])));
			current_field->rename_thru = CB_FIELD (cb_ref ((yyvsp[0])));
		}
	}
  }
#line 9562 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4532 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 9575 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4541 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 9589 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4556 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 9602 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4565 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9612 "parser.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4577 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 9622 "parser.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4583 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9632 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4594 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  }
#line 9644 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4612 "parser.y" /* yacc.c:1646  */
    {
	if (CB_INVALID_TREE ((yyvsp[0]))) {
		YYERROR;
	} else {
		current_field = NULL;
		control_field = NULL;
		description_field = NULL;
		current_report = CB_REPORT (cb_ref ((yyvsp[0])));
	}
	check_duplicate = 0;
  }
#line 9660 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4625 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	current_program->report_storage = description_field;
	current_program->flag_report = 1;
	if(current_report->records == NULL)
		current_report->records = description_field;
	finalize_report (current_report, description_field);
	(yyval) = CB_TREE (description_field);
  }
#line 9678 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 4643 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9686 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4650 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 9696 "parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4656 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 9704 "parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 4667 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 9712 "parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 4680 "parser.y" /* yacc.c:1646  */
    {
      current_report->control_final = 1;
  }
#line 9720 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 4692 "parser.y" /* yacc.c:1646  */
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[0]), current_report->controls);
  }
#line 9729 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 4703 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PAGE", SYN_CLAUSE_4, &check_duplicate);
	if (!current_report->heading) {
		current_report->heading = 1;
	}
	if (!current_report->first_detail) {
		current_report->first_detail = current_report->heading;
	}
	if (!current_report->last_control) {
		if (current_report->last_detail) {
			current_report->last_control = current_report->last_detail;
		} else if (current_report->footing) {
			current_report->last_control = current_report->footing;
		} else {
			current_report->last_control = current_report->lines;
		}
		if (current_report->t_last_detail) {
			current_report->t_last_control = current_report->t_last_detail;
		} else if (current_report->t_footing) {
			current_report->t_last_control = current_report->t_footing;
		} else if(current_report->t_lines) {
			current_report->t_last_control = current_report->t_lines;
		}

	}
	if (!current_report->last_detail && !current_report->footing) {
		current_report->last_detail = current_report->lines;
		current_report->footing = current_report->lines;
	} else if (!current_report->last_detail) {
		current_report->last_detail = current_report->footing;
	} else if (!current_report->footing) {
		current_report->footing = current_report->last_detail;
	}
	/* PAGE LIMIT values checked in finalize_report in typeck.c */
  }
#line 9769 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 4742 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->lines = cb_get_int ((yyvsp[0]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[0]);
	}
  }
#line 9783 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4752 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-1]))) {
		current_report->lines = cb_get_int ((yyvsp[-1]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[-1]);
	}
  }
#line 9797 "parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 4762 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-3]))) {
		current_report->lines = cb_get_int ((yyvsp[-3]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[-3]);
	}
	check_repeated ("LINE LIMIT", SYN_CLAUSE_25, &check_duplicate);
	if (CB_LITERAL_P ((yyvsp[-1]))) {
		current_report->columns = cb_get_int ((yyvsp[-1]));
	} else {
		current_report->t_columns = (yyvsp[-1]);
	}
  }
#line 9817 "parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 4796 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE LIMIT", SYN_CLAUSE_25, &check_duplicate);
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->columns = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_columns = (yyvsp[0]);
	}
  }
#line 9830 "parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 4808 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->heading = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_heading = (yyvsp[0]);
	}
  }
#line 9842 "parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 4819 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->first_detail = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_first_detail = (yyvsp[0]);
	}
  }
#line 9854 "parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 4830 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->last_control = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_last_control = (yyvsp[0]);
	}
  }
#line 9866 "parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 4841 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->last_detail = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_last_detail = (yyvsp[0]);
	}
  }
#line 9878 "parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 4852 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->footing = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_footing = (yyvsp[0]);
	}
  }
#line 9890 "parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 4867 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = cb_build_field_tree ((yyvsp[-1]), (yyvsp[0]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-1]));
	check_pic_duplicate = 0;
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	}

	current_field = CB_FIELD (x);
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 9912 "parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 4912 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 9920 "parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 4919 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
#line 9928 "parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 4923 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
#line 9936 "parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 4929 "parser.y" /* yacc.c:1646  */
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
#line 9947 "parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 4936 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
#line 9955 "parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 4940 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
#line 9963 "parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 4946 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
#line 9971 "parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 4950 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[0]);
  }
#line 9980 "parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 4955 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[-2]);
      current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 9990 "parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 4961 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
#line 9998 "parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 4967 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
#line 10006 "parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 4971 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[0]);
  }
#line 10015 "parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 4976 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
#line 10023 "parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 4980 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_flag |= COB_REPORT_ALL;
  }
#line 10032 "parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 4988 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10040 "parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 4995 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL ((yyvsp[0]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int((yyvsp[0]));
  }
#line 10053 "parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 5004 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[0]));
  }
#line 10062 "parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5009 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[0]));
  }
#line 10071 "parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5014 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
#line 10079 "parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5027 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->report_sum_list = (yyvsp[-1]);
	build_sum_counter( current_report, current_field);
  }
#line 10089 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5037 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_sum_upon = (yyvsp[0]);
  }
#line 10097 "parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5044 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_reset = (yyvsp[0]);
  }
#line 10105 "parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5048 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
#line 10113 "parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5055 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_when = (yyvsp[0]);
  }
#line 10122 "parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5060 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
  }
#line 10132 "parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5066 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10143 "parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5073 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
  }
#line 10153 "parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5079 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10164 "parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5089 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
  }
#line 10172 "parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5093 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_NEGATE;
  }
#line 10181 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5105 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10189 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5109 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_control = (yyvsp[0]);
  }
#line 10197 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5121 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_LINE;
  }
#line 10206 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5137 "parser.y" /* yacc.c:1646  */
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
#line 10216 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5143 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
#line 10224 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5147 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_LINE_PLUS;
	current_field->report_line = cb_get_int((yyvsp[0]));
	if((yyvsp[0]) != cb_int0
	&& (yyvsp[0]) != cb_int1) {
		if (CB_LITERAL ((yyvsp[0]))->sign < 0
		|| current_field->report_line < 0) {
			cb_error (_("Positive Integer value expected"));
		}
	}
	if(current_field->report_line == 0) {
		cb_warning (_("LINE PLUS 0 not implemented"));
	}
  }
#line 10243 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5162 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_LINE_PLUS;
	current_field->report_line = cb_get_int((yyvsp[0]));
	if((yyvsp[0]) != cb_int0
	&& (yyvsp[0]) != cb_int1) {
		if (CB_LITERAL ((yyvsp[0]))->sign < 0
		|| current_field->report_line < 0) {
			cb_error (_("Positive Integer value expected"));
		}
	}
	if(current_field->report_line == 0) {
		cb_warning (_("LINE PLUS 0 not implemented"));
	}
  }
#line 10262 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5185 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_line = cb_get_int((yyvsp[0]));
	if((yyvsp[0]) != cb_int0) {
		if (CB_LITERAL ((yyvsp[0]))->sign > 0) {
			current_field->report_flag |= COB_REPORT_LINE_PLUS;
		} else if (CB_LITERAL ((yyvsp[0]))->sign < 0
		|| current_field->report_line < 0) {
			cb_error (_("Positive Integer value expected"));
			current_field->report_line = 1;
			current_field->report_flag |= COB_REPORT_LINE_PLUS;
		}
	}
  }
#line 10280 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5211 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_18, &check_pic_duplicate);
	if((current_field->report_flag & (COB_REPORT_COLUMN_LEFT|COB_REPORT_COLUMN_RIGHT|COB_REPORT_COLUMN_CENTER))
	&& (current_field->report_flag & COB_REPORT_COLUMN_PLUS)) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("PLUS is not recommended with LEFT, RIGHT or CENTER"));
		} else {
			cb_error (_("PLUS is not allowed with LEFT, RIGHT or CENTER"));
		}
	}
  }
#line 10296 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5235 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_COLUMN_LEFT;
  }
#line 10304 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5239 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_COLUMN_RIGHT;
  }
#line 10312 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5243 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_COLUMN_CENTER;
  }
#line 10320 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5250 "parser.y" /* yacc.c:1646  */
    {
	int colnum;
	colnum = cb_get_int ((yyvsp[0]));
	if (colnum > 0) {
		if(current_field->parent
		&& current_field->parent->children == current_field) {
			cb_warning (_("PLUS is ignored on first field of line"));
			if(current_field->step_count == 0)
				current_field->step_count = colnum;
		} else {
			current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
		}
	} else {
		colnum = 0;
	}
	if(current_field->report_column == 0)
		current_field->report_column = colnum;
	current_field->report_num_col++;
  }
#line 10344 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5279 "parser.y" /* yacc.c:1646  */
    {
	int colnum;
	colnum = cb_get_int ((yyvsp[0]));
	if (CB_LITERAL ((yyvsp[0]))->sign > 0) {
		if(current_field->parent
		&& current_field->parent->children == current_field) {
			cb_warning (_("PLUS is ignored on first field of line"));
		} else {
			current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
		}
	}
	if((yyvsp[0]) != cb_int1
	&& (yyvsp[0]) != cb_int0) {
		if (colnum <= 0
		|| CB_LITERAL ((yyvsp[0]))->sign < 0) {
			cb_error (_("Invalid COLUMN integer; Must be > 0"));
			colnum = 0;
			(yyval) = cb_int0;
		} else if(colnum <= current_field->report_column) {
			cb_warning (_("COLUMN numbers should increase"));
		}
		current_field->report_column_list = 
				cb_list_append (current_field->report_column_list, CB_LIST_INIT ((yyvsp[0])));
	}
	if(current_field->report_column == 0)
		current_field->report_column = colnum;
	current_field->report_num_col++;
  }
#line 10377 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5311 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->report_source = (yyvsp[-1]);
  }
#line 10386 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5319 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
#line 10395 "parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 5327 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10403 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5336 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10414 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5343 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	if (description_field) {
		for (p = description_field; p; p = p->sister) {
			cb_validate_field (p);
		}
		current_program->screen_storage = description_field;
		current_program->flag_screen = 1;
	}
  }
#line 10430 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5369 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;
	int	flags;

	x = cb_build_field_tree ((yyvsp[-1]), (yyvsp[0]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-1]));
	check_pic_duplicate = 0;
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	}

	current_field = CB_FIELD (x);
	if (current_field->parent) {
		flags = current_field->parent->screen_flag;
		flags &= ~COB_SCREEN_BLANK_LINE;
		flags &= ~COB_SCREEN_BLANK_SCREEN;
		flags &= ~COB_SCREEN_ERASE_EOL;
		flags &= ~COB_SCREEN_ERASE_EOS;
		flags &= ~COB_SCREEN_LINE_PLUS;
		flags &= ~COB_SCREEN_LINE_MINUS;
		flags &= ~COB_SCREEN_COLUMN_PLUS;
		flags &= ~COB_SCREEN_COLUMN_MINUS;
		current_field->screen_flag |= flags;
		current_field->screen_foreg = current_field->parent->screen_foreg;
		current_field->screen_backg = current_field->parent->screen_backg;
		current_field->screen_prompt = current_field->parent->screen_prompt;
	}
  }
#line 10465 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5400 "parser.y" /* yacc.c:1646  */
    {
	if (!qualifier && (current_field->level == 88 ||
	    current_field->level == 66 ||
	    current_field->flag_item_78)) {
		cb_error (_("Item requires a data name"));
	}
	if (current_field->screen_flag & COB_SCREEN_INITIAL) {
		if (!(current_field->screen_flag & COB_SCREEN_INPUT)) {
			cb_error (_("INITIAL specified on non-input field"));
		}
	}
	if (!qualifier) {
		current_field->flag_filler = 1;
	}
	if (current_field->level == 88) {
		cb_validate_88_item (current_field);
	}
	if (current_field->flag_item_78) {
		/* Reset to last non-78 item */
		current_field = cb_validate_78_item (current_field, 0);
	}
	if (!description_field) {
		description_field = current_field;
	}
  }
#line 10495 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5426 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
#if	1	/* RXWRXW Screen field */
	if (current_field) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
	}
#endif
	current_field = cb_get_real_field ();
  }
#line 10515 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5449 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10523 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5453 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10531 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5457 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10539 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5461 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10547 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5465 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10555 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5469 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10563 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5473 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10571 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5477 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10579 "parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5481 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10587 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5485 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10595 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5489 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
#line 10603 "parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5493 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
#line 10611 "parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5497 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10619 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5501 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10627 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5505 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10635 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5509 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10643 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5513 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10652 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5518 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10660 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5522 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10668 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5526 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10677 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5531 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10686 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5536 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10695 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5541 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10704 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5554 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10715 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5561 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10724 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5566 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10734 "parser.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5585 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10742 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5589 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10750 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5593 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10758 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5600 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10766 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5604 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10774 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 5608 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10782 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5616 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10794 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5627 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10802 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5636 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10816 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5646 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[-4])) {
		cb_error (_("Executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[-4]));
	current_program->num_proc_params = cb_list_length ((yyvsp[-4]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[-4]));
	}
  }
#line 10832 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5658 "parser.y" /* yacc.c:1646  */
    {
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
  }
#line 10851 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 5673 "parser.y" /* yacc.c:1646  */
    {
	cb_tree label;

	/* No PROCEDURE DIVISION header ! */
	/* Only a statement is allowed as first element */
	/* Thereafter, sections/paragraphs may be used */
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	label = cb_build_reference ("MAIN SECTION");
	current_section = CB_LABEL (cb_build_label (label, NULL));
	current_section->flag_section = 1;
	current_section->flag_dummy_section = 1;
	current_section->flag_skip_label = !!skip_statements;
	current_section->flag_declaratives = !!in_declaratives;
	CB_TREE (current_section)->source_file = cb_source_file;
	CB_TREE (current_section)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_section));
	label = cb_build_reference ("MAIN PARAGRAPH");
	current_paragraph = CB_LABEL (cb_build_label (label, NULL));
	current_paragraph->flag_declaratives = !!in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_dummy_paragraph = 1;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
	cb_set_system_names ();
  }
#line 10884 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5706 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10892 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 5710 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10901 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 5715 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10913 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 5723 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10926 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 5732 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10938 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 5742 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10944 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 5744 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10950 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 5749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[0]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
#line 10959 "parser.c" /* yacc.c:1646  */
    break;

  case 718:
#line 5758 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10967 "parser.c" /* yacc.c:1646  */
    break;

  case 719:
#line 5762 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 10979 "parser.c" /* yacc.c:1646  */
    break;

  case 721:
#line 5774 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 10991 "parser.c" /* yacc.c:1646  */
    break;

  case 722:
#line 5782 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 11003 "parser.c" /* yacc.c:1646  */
    break;

  case 723:
#line 5790 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11015 "parser.c" /* yacc.c:1646  */
    break;

  case 724:
#line 5798 "parser.y" /* yacc.c:1646  */
    {
	unsigned char *s = CB_LITERAL ((yyvsp[0]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error_x ((yyvsp[0]), _("Invalid value for SIZE"));
	} else {
		size_mode = CB_SIZE_UNSIGNED;
		switch (*s) {
		case '1':
			size_mode |= CB_SIZE_1;
			break;
		case '2':
			size_mode |= CB_SIZE_2;
			break;
		case '4':
			size_mode |= CB_SIZE_4;
			break;
		case '8':
			size_mode |= CB_SIZE_8;
			break;
		default:
			cb_error_x ((yyvsp[0]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
#line 11048 "parser.c" /* yacc.c:1646  */
    break;

  case 725:
#line 5827 "parser.y" /* yacc.c:1646  */
    {
	unsigned char *s = CB_LITERAL ((yyvsp[0]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[0]))->size != 1) {
		cb_error_x ((yyvsp[0]), _("Invalid value for SIZE"));
	} else {
		size_mode = 0;
		switch (*s) {
		case '1':
			size_mode = CB_SIZE_1;
			break;
		case '2':
			size_mode = CB_SIZE_2;
			break;
		case '4':
			size_mode = CB_SIZE_4;
			break;
		case '8':
			size_mode = CB_SIZE_8;
			break;
		default:
			cb_error_x ((yyvsp[0]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
#line 11081 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 5860 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
#line 11091 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 5869 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11101 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 5875 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[0])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[0]));
/* RXWRXW
		if (f->storage != CB_STORAGE_LINKAGE) {
			cb_error (_("RETURNING item is not defined in LINKAGE SECTION"));
		} else if (f->level != 1 && f->level != 77) {
*/
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01"));
		} else if(f->flag_occurs) {
			cb_error(_("RETURNING item should not have OCCURS"));
		} else if(f->storage == CB_STORAGE_LOCAL) {
			cb_error (_("RETURNING item should not be in LOCAL-STORAGE"));
		} else {
			if (current_program->prog_type == CB_FUNCTION_TYPE) {
				f->flag_is_returning = 1;
			}
			current_program->returning = (yyvsp[0]);
		}
	}
  }
#line 11130 "parser.c" /* yacc.c:1646  */
    break;

  case 731:
#line 5903 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11139 "parser.c" /* yacc.c:1646  */
    break;

  case 732:
#line 5909 "parser.y" /* yacc.c:1646  */
    {
	if (needs_field_debug) {
		start_debug = 1;
	}
	in_declaratives = 0;
	in_debugging = 0;
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		current_paragraph = NULL;
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		current_section->flag_fatal_check = 1;
		emit_statement (cb_build_perform_exit (current_section));
		current_section = NULL;
	}
	skip_statements = 0;
	emit_statement (cb_build_comment ("END DECLARATIVES"));
	check_unreached = 0;
  }
#line 11169 "parser.c" /* yacc.c:1646  */
    break;

  case 737:
#line 5947 "parser.y" /* yacc.c:1646  */
    {
	if (next_label_list) {
		cb_tree	plabel;
		char	name[32];

		snprintf (name, sizeof(name), "L$%d", next_label_id);
		plabel = cb_build_label (cb_build_reference (name), NULL);
		CB_LABEL (plabel)->flag_next_sentence = 1;
		emit_statement (plabel);
		current_program->label_list =
			cb_list_append (current_program->label_list, next_label_list);
		next_label_list = NULL;
		next_label_id++;
	}
	/* check_unreached = 0; */
  }
#line 11190 "parser.c" /* yacc.c:1646  */
    break;

  case 739:
#line 5965 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11198 "parser.c" /* yacc.c:1646  */
    break;

  case 740:
#line 5975 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[-3]), 0) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph/section */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
	}
	if (current_section) {
		if (current_section->exit_label) {
			emit_statement (current_section->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_section));
	}
	if (current_program->flag_debugging && !in_debugging) {
		if (current_paragraph || current_section) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new section */
	current_section = CB_LABEL (cb_build_label ((yyvsp[-3]), NULL));
	if ((yyvsp[-1])) {
		current_section->segment = cb_get_int ((yyvsp[-1]));
	}
	current_section->flag_section = 1;
	/* Careful here, one negation */
	current_section->flag_real_label = !in_debugging;
	current_section->flag_declaratives = !!in_declaratives;
	current_section->flag_skip_label = !!skip_statements;
	CB_TREE (current_section)->source_file = cb_source_file;
	CB_TREE (current_section)->source_line = cb_source_line;
	current_paragraph = NULL;
  }
#line 11246 "parser.c" /* yacc.c:1646  */
    break;

  case 741:
#line 6019 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11254 "parser.c" /* yacc.c:1646  */
    break;

  case 744:
#line 6030 "parser.y" /* yacc.c:1646  */
    {
	cb_tree label;

	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[-1]), 1) == cb_error_node) {
		YYERROR;
	}

	/* Exit the last paragraph */
	if (current_paragraph) {
		if (current_paragraph->exit_label) {
			emit_statement (current_paragraph->exit_label);
		}
		emit_statement (cb_build_perform_exit (current_paragraph));
		if (current_program->flag_debugging && !in_debugging) {
			emit_statement (cb_build_comment (
					"DEBUGGING - Fall through"));
			emit_statement (cb_build_debug (cb_debug_contents,
					"FALL THROUGH", NULL));
		}
	}

	/* Begin a new paragraph */
	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_declaratives = !!in_declaratives;
		current_section->flag_skip_label = !!skip_statements;
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	current_paragraph = CB_LABEL (cb_build_label ((yyvsp[-1]), current_section));
	current_paragraph->flag_declaratives =!! in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
  }
#line 11303 "parser.c" /* yacc.c:1646  */
    break;

  case 745:
#line 6078 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 11316 "parser.c" /* yacc.c:1646  */
    break;

  case 746:
#line 6090 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11324 "parser.c" /* yacc.c:1646  */
    break;

  case 747:
#line 6094 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives) {
		cb_error (_("SECTION segment invalid within DECLARATIVE"));
	}
	if (cb_verify (cb_section_segments, "SECTION segment")) {
		current_program->flag_segments = 1;
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = NULL;
	}
  }
#line 11340 "parser.c" /* yacc.c:1646  */
    break;

  case 748:
#line 6112 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11350 "parser.c" /* yacc.c:1646  */
    break;

  case 749:
#line 6117 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11359 "parser.c" /* yacc.c:1646  */
    break;

  case 750:
#line 6122 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11369 "parser.c" /* yacc.c:1646  */
    break;

  case 751:
#line 6130 "parser.y" /* yacc.c:1646  */
    {
	cb_tree label;

	if (!current_section) {
		label = cb_build_reference ("MAIN SECTION");
		current_section = CB_LABEL (cb_build_label (label, NULL));
		current_section->flag_section = 1;
		current_section->flag_dummy_section = 1;
		current_section->flag_skip_label = !!skip_statements;
		current_section->flag_declaratives = !!in_declaratives;
		CB_TREE (current_section)->source_file = cb_source_file;
		CB_TREE (current_section)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_section));
	}
	if (!current_paragraph) {
		label = cb_build_reference ("MAIN PARAGRAPH");
		current_paragraph = CB_LABEL (cb_build_label (label, NULL));
		current_paragraph->flag_declaratives = !!in_declaratives;
		current_paragraph->flag_skip_label = !!skip_statements;
		current_paragraph->flag_dummy_paragraph = 1;
		CB_TREE (current_paragraph)->source_file = cb_source_file;
		CB_TREE (current_paragraph)->source_line = cb_source_line;
		emit_statement (CB_TREE (current_paragraph));
	}
	check_headers_present (COBC_HD_PROCEDURE_DIVISION, 0, 0, 0);
  }
#line 11400 "parser.c" /* yacc.c:1646  */
    break;

  case 752:
#line 6157 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11408 "parser.c" /* yacc.c:1646  */
    break;

  case 753:
#line 6161 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11416 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6217 "parser.y" /* yacc.c:1646  */
    {
	if (cb_verify (cb_next_sentence_phrase, "NEXT SENTENCE")) {
		cb_tree label;
		char	name[32];

		begin_statement ("NEXT SENTENCE", 0);
		sprintf (name, "L$%d", next_label_id);
		label = cb_build_reference (name);
		next_label_list = cb_list_add (next_label_list, label);
		emit_statement (cb_build_goto (label, NULL));
	}
	check_unreached = 0;
  }
#line 11434 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6231 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11443 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6242 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}

  }
#line 11458 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6259 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-5]), (yyvsp[-4]), current_statement->attr_ptr);
  }
#line 11467 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6264 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11475 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6268 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11483 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6272 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11492 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6277 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11501 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6282 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11510 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6287 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11519 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6292 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11527 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6296 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11535 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6300 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11543 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6304 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11551 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6308 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11560 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6313 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11568 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6317 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11576 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6321 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11584 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6325 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11592 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6329 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11600 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6333 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11608 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6337 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11616 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6345 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11624 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6356 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11630 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6357 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11636 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6361 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0])); }
#line 11642 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6362 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1])); }
#line 11648 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6363 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), cb_int0); }
#line 11654 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6364 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[0])); }
#line 11660 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6365 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11666 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6369 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11672 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6373 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11678 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6374 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11684 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6383 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11692 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6399 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11700 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6403 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11710 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6409 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11718 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6413 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11726 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6417 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11734 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6421 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11742 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6425 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 11750 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6429 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11758 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6433 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11766 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6437 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 11774 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6441 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11782 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6445 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11790 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6449 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), COB_SCREEN_PROMPT);
  }
#line 11798 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6453 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11806 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6457 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11814 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6461 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11822 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6465 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11830 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6469 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11838 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6473 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11848 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6479 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11856 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6483 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11864 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6487 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11872 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6491 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11880 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6495 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11888 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6499 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11896 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6503 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, 0);
  }
#line 11904 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6515 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11912 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6519 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ACCEPT);
# if 0 /* activate only for debugging purposes for attribs */
	if (current_statement->attr_ptr) {
		printBits (current_statement->attr_ptr->dispattrs);
	} else {
		fprintf(stderr, "No Attribs\n");
	}
#endif
  }
#line 11927 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6536 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11935 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6545 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11943 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6549 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11951 "parser.c" /* yacc.c:1646  */
    break;

  case 882:
#line 6553 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11959 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6560 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11967 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6567 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 11975 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6571 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 11983 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6581 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 11992 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6590 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12000 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6594 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12013 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6605 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12019 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6606 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12025 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6614 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 12034 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6628 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12042 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6640 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
#line 12051 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6655 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-4]))) {
		cb_trim_program_id ((yyvsp[-4]));
	}
	if (CB_LITERAL_P ((yyvsp[-4])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[-4]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[-4]), _("Recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	cb_emit_call ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), (yyvsp[-5]));
  }
#line 12069 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6672 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12078 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6677 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12087 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6682 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12096 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6687 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[0]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x ((yyvsp[0]), _("Invalid mnemonic name"));
			(yyval) = NULL;
		} else {
			(yyval) = CB_SYSTEM_NAME(x)->value;
		}
	} else {
		(yyval) = NULL;
	}
	cobc_cs_check = 0;
  }
#line 12117 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 6707 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12125 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6711 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12134 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 6716 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12147 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6727 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12153 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 6729 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12159 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 6734 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12171 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 6742 "parser.y" /* yacc.c:1646  */
    {
	int	save_mode;

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P ((yyvsp[0])) || (CB_REFERENCE_P ((yyvsp[0])) &&
		    CB_FILE_P (CB_REFERENCE ((yyvsp[0]))->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("Invalid file name reference"));
		} else if (call_mode == CB_CALL_BY_VALUE) {
			if (cb_category_is_alpha ((yyvsp[0]))) {
				cb_warning_x ((yyvsp[0]),
					      _("BY CONTENT assumed for alphanumeric item"));
				save_mode = CB_CALL_BY_CONTENT;
			}
		}
	}
	(yyval) = CB_BUILD_PAIR (cb_int (save_mode), (yyvsp[0]));
	CB_SIZES ((yyval)) = size_mode;
	call_mode = save_mode;
  }
#line 12197 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 6768 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12205 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 6772 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12218 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6781 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12231 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 6793 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12239 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 6797 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12247 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 6801 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12255 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 6805 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[0])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[0]));
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			(yyval) = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item is neither in LINKAGE SECTION nor is it BASED"));
			(yyval) = NULL;
		} else {
			(yyval) = cb_build_address ((yyvsp[0]));
		}
	} else {
		(yyval) = NULL;
	}
  }
#line 12279 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 6838 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12287 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 6843 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12295 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 6850 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12303 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 6855 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12311 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 6862 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12319 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 6866 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12327 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 6876 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 12335 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6884 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12343 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 6888 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12351 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 6898 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12359 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 6906 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12368 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 6911 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12377 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 6918 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12383 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 6919 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12389 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 6920 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12395 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 6921 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12401 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 6922 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12407 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 6930 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12415 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 6939 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12423 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 6946 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12431 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 6950 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12439 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 6960 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12448 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 6971 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 12463 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 6988 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 12471 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 6997 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-3]));
  }
#line 12479 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7005 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12488 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7010 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12497 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7018 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 12505 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7022 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 12513 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7032 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 12522 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7042 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 12530 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7046 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12538 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7050 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12546 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7054 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12554 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7058 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), NULL, NULL);
  }
#line 12562 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7063 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[-3])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
#line 12572 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 7073 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
  }
#line 12580 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7081 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[-4])), cb_null, cb_int1,
			 (yyvsp[-3]), current_statement->attr_ptr);
  }
#line 12589 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7089 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12601 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7097 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12609 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 7101 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_name ((yyvsp[0]));
  }
#line 12617 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7105 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 12625 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7109 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12637 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7131 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12645 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7137 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 12651 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7138 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 12657 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7149 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12665 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7153 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
#line 12673 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7157 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
#line 12681 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7161 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12689 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7165 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12697 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7169 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
#line 12705 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7173 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
#line 12713 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7177 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 12721 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7181 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 12729 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7185 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12737 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7189 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12745 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7193 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12753 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7197 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12761 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7201 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12769 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7205 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12777 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7209 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12785 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7216 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12793 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7220 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12801 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7230 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12809 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7239 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12817 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7243 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12825 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7247 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12833 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7251 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12841 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7255 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12849 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7262 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12857 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7266 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12865 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7276 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12874 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7285 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[-1]))->data), 1U)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[-1]))->data), 1, (yyvsp[0]));
		}
	}
  }
#line 12890 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7303 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EVALUATE", TERM_EVALUATE);
	eval_level++;
	if (eval_level >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_level = 0;
		eval_inc = 0;
		eval_inc2 = 0;
		YYERROR;
	} else {
		for (eval_inc = 0; eval_inc < EVAL_DEPTH; ++eval_inc) {
			eval_check[eval_level][eval_inc] = NULL;
		}
		eval_inc = 0;
		eval_inc2 = 0;
	}
  }
#line 12913 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7327 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 12922 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7334 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12928 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7336 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12934 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7341 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	eval_check[eval_level][eval_inc++] = (yyvsp[0]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 12949 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7352 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 12964 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7363 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_false;
	eval_check[eval_level][eval_inc++] = NULL;
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
#line 12979 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7377 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12987 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7381 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12995 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7387 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13001 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7389 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13007 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7395 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13016 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7404 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13025 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7412 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13034 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7418 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13043 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7425 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13049 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7427 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13055 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7432 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	not0;
	cb_tree	e1;
	cb_tree	e2;
	cb_tree	x;
	cb_tree	parm1;

	not0 = cb_int0;
	e2 = (yyvsp[0]);
	x = NULL;
	parm1 = (yyvsp[-1]);
	if (eval_check[eval_level][eval_inc2]) {
		/* Check if the first token is NOT */
		/* It may belong to the EVALUATE, however see */
		/* below when it may be part of a partial expression */
		if (CB_PURPOSE_INT (parm1) == '!') {
			/* Pop stack if subject not TRUE / FALSE */
			not0 = cb_int1;
			x = parm1;
			parm1 = CB_CHAIN (parm1);
		}
		/* Partial expression handling */
		switch (CB_PURPOSE_INT (parm1)) {
		/* Relational conditions */
		case '<':
		case '>':
		case '[':
		case ']':
		case '~':
		case '=':
		/* Class conditions */
		case '9':
		case 'A':
		case 'L':
		case 'U':
		case 'P':
		case 'N':
		case 'O':
		case 'C':
			if (e2) {
				cb_error_x (e2, _("Invalid THROUGH usage"));
				e2 = NULL;
			}
			not0 = CB_PURPOSE (parm1);
			if (x) {
				/* Rebind the NOT to the partial expression */
				parm1 = cb_build_list (cb_int ('!'), NULL, parm1);
			}
			/* Insert subject at head of list */
			parm1 = cb_build_list (cb_int ('x'),
					    eval_check[eval_level][eval_inc2], parm1);
			break;
		}
	}

	/* Build expr now */
	e1 = cb_build_expr (parm1);

	eval_inc2++;
	(yyval) = CB_BUILD_PAIR (not0, CB_BUILD_PAIR (e1, e2));
  }
#line 13121 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7493 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13127 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7494 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13133 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7495 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13139 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7499 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13145 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7500 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13151 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7505 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13159 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7509 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13167 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7519 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13176 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7524 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13184 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7532 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_PROGRAM_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PROGRAM only allowed within a PROGRAM type"));
	}
	if (current_program->flag_main) {
		check_unreached = 0;
	} else {
		check_unreached = 1;
	}
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  }
#line 13209 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7553 "parser.y" /* yacc.c:1646  */
    {
	if (in_declaratives && use_global_ind) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION is not allowed within a USE GLOBAL procedure"));
	}
	if (current_program->prog_type != CB_FUNCTION_TYPE) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT FUNCTION only allowed within a FUNCTION type"));
	}
	check_unreached = 1;
	current_statement->name = (const char *)"EXIT FUNCTION";
	cb_emit_exit (0);
  }
#line 13227 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7567 "parser.y" /* yacc.c:1646  */
    {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->cycle_label) {
			sprintf (name, "EXIT PERFORM CYCLE %d", cb_id);
			p->cycle_label = cb_build_reference (name);
			plabel = cb_build_label (p->cycle_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM CYCLE";
		cb_emit_goto (CB_LIST_INIT (p->cycle_label), NULL);
	}
  }
#line 13253 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7589 "parser.y" /* yacc.c:1646  */
    {
	struct cb_perform	*p;
	cb_tree			plabel;
	char			name[64];

	if (!perform_stack) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PERFORM is only valid with inline PERFORM"));
	} else if (CB_VALUE (perform_stack) != cb_error_node) {
		p = CB_PERFORM (CB_VALUE (perform_stack));
		if (!p->exit_label) {
			sprintf (name, "EXIT PERFORM %d", cb_id);
			p->exit_label = cb_build_reference (name);
			plabel = cb_build_label (p->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PERFORM";
		cb_emit_goto (CB_LIST_INIT (p->exit_label), NULL);
	}
  }
#line 13279 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7611 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_section) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT SECTION is only valid with an active SECTION"));
	} else {
		if (!current_section->exit_label) {
			sprintf (name, "EXIT SECTION %d", cb_id);
			current_section->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_section->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT SECTION";
		cb_emit_goto (CB_LIST_INIT (current_section->exit_label), NULL);
	}
  }
#line 13303 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7631 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	plabel;
	char	name[64];

	if (!current_paragraph) {
		cb_error_x (CB_TREE (current_statement),
			    _("EXIT PARAGRAPH is only valid with an active PARAGRAPH"));
	} else {
		if (!current_paragraph->exit_label) {
			sprintf (name, "EXIT PARAGRAPH %d", cb_id);
			current_paragraph->exit_label = cb_build_reference (name);
			plabel = cb_build_label (current_paragraph->exit_label, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
		}
		current_statement->name = (const char *)"EXIT PARAGRAPH";
		cb_emit_goto (CB_LIST_INIT (current_paragraph->exit_label), NULL);
	}
  }
#line 13327 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 7653 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13333 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 7654 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13339 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 7662 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13348 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 7671 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13356 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 7681 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
  }
#line 13364 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 7690 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
		cb_emit_generate((yyvsp[0]));
	}
  }
#line 13375 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 7702 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13388 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 7715 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13397 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 7723 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13406 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 7728 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 13415 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 7739 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 13428 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 7754 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 13436 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 7763 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13444 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 7767 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 13452 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 7771 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 13460 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 7778 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 13468 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 7782 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 13476 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 7792 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 13484 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 7801 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13492 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 7807 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13498 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 7808 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13504 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 7812 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13510 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 7813 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13516 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 7814 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 13522 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 7819 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13530 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 7823 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13538 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 7830 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13546 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 7835 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13554 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 7842 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13562 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 7848 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13568 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 7849 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13574 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 7850 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13580 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 7851 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13586 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 7852 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13592 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 7853 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13598 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 7854 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13604 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 7859 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13612 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 7863 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13620 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 7872 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
  }
#line 13628 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 7880 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[0]));
	}
  }
#line 13639 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 7887 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[0]));
	}
  }
#line 13650 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 7899 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13659 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 7912 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13667 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 7916 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13675 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 7920 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13683 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 7936 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13691 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 7940 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13700 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 7950 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13709 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 7960 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13719 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 7968 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13725 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 7969 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13731 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 7973 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13737 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 7974 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13743 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 7975 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13749 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 7976 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13755 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 7977 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13761 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 7978 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13767 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 7982 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13773 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 7983 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13779 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 7988 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13788 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 7993 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13796 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 7999 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13802 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 8000 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13808 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 8001 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13814 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8002 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13820 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8003 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13826 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8008 "parser.y" /* yacc.c:1646  */
    {
	switch (inspect_keyword) {
		case 1:
			(yyval) = cb_build_replacing_all ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		case 2:
			(yyval) = cb_build_replacing_leading ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		case 3:
			(yyval) = cb_build_replacing_first ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		case 4:
			(yyval) = cb_build_replacing_trailing ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
		default:
			cb_error_x (CB_TREE (current_statement),
				    _("INSPECT missing a keyword"));
			(yyval) = cb_build_replacing_all ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
			break;
	}
  }
#line 13852 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8035 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13860 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8039 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13868 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8046 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13876 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8050 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13884 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8059 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13893 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8071 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 13901 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8079 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13909 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8083 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13917 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8093 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 13925 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8102 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 13933 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8106 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 13941 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8113 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 13949 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8117 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 13957 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8127 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 13965 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8135 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[-2]) && (yyvsp[0])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[0])) {
		x = (yyvsp[0]);
	} else {
		x = (yyvsp[-2]);
	}
	for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[-3]), x);
		}
	}
  }
#line 13990 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8156 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[-2]) && (yyvsp[0])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[0])) {
		x = (yyvsp[0]);
	} else {
		x = (yyvsp[-2]);
	}
	for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[-3]), x);
		}
	}
  }
#line 14015 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8179 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14021 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8180 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14027 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8181 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14033 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8182 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14039 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8186 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14045 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8187 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14051 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8191 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14057 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8192 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14063 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8193 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14069 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8195 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14078 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8206 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
	cobc_cs_check = CB_CS_PERFORM;
  }
#line 14090 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8218 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 14100 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8224 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 14111 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8231 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14120 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8236 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
#line 14130 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8245 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14142 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8253 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14150 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8260 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14158 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8264 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14172 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8277 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14183 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8284 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14195 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8295 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14203 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8299 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14212 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8304 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14220 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8308 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14235 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8319 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14243 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8325 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14249 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8326 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14255 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8330 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14261 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8331 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14267 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8334 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14273 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8336 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14279 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8341 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	int		dataTypeOk = 1;

	if (cb_tree_category ((yyvsp[-6])) != CB_CATEGORY_NUMERIC) {
		x = cb_ref ((yyvsp[-6]));
		cb_error_x (CB_TREE (current_statement),
			_("PERFORM VARYING '%s' (Line %d of %s) is not a numeric field"), 
					cb_name (x),x->source_line, x->source_file);
		(yyval) = cb_int1;
		dataTypeOk = 0;
	} 
	if (cb_tree_category ((yyvsp[-4])) != CB_CATEGORY_NUMERIC) {
		x = cb_ref ((yyvsp[-4]));
		cb_error_x (CB_TREE (current_statement),
			_("PERFORM VARYING '%s' (Line %d of %s) is not a numeric field"), 
					cb_name (x),x->source_line, x->source_file);
		(yyval) = cb_int1;
		dataTypeOk = 0;
	} 
	if (cb_tree_category ((yyvsp[-2])) != CB_CATEGORY_NUMERIC) {
		x = cb_ref ((yyvsp[-2]));
		cb_error_x (CB_TREE (current_statement),
			_("PERFORM VARYING '%s' (Line %d of %s) is not a numeric field"), 
					cb_name (x),x->source_line, x->source_file);
		(yyval) = cb_int1;
		dataTypeOk = 0;
	} 
	if(dataTypeOk) {
		(yyval) = cb_build_perform_varying ((yyvsp[-6]), (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));
	}
  }
#line 14316 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8380 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14324 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8389 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	  
	if (CB_VALID_TREE ((yyvsp[-6]))) {
		struct cb_file	*cf;

		cf = CB_FILE(cb_ref ((yyvsp[-6])));
		if ((yyvsp[-2]) && (cf->lock_mode & COB_LOCK_AUTOMATIC)) {
			cb_error_x (CB_TREE (current_statement),
				    _("LOCK clause invalid with file LOCK AUTOMATIC"));
		} else if ((yyvsp[-1]) &&
		      (cf->organization != COB_ORG_RELATIVE &&
		       cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("KEY clause invalid with this file type"));
		} else if (current_statement->handler_id == COB_EC_I_O_INVALID_KEY &&
			   (cf->organization != COB_ORG_RELATIVE &&
			    cf->organization != COB_ORG_INDEXED)) {
			cb_error_x (CB_TREE (current_statement),
				    _("INVALID KEY clause invalid with this file type"));
		} else {
			cb_emit_read ((yyvsp[-6]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[-2]));
		}
	}
  }
#line 14354 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8417 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14360 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8418 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14366 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8423 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14374 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8427 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14382 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8431 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14390 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8435 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14398 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8447 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("ADVANCING ON LOCK");
  }
#line 14406 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8460 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("RETRY");
	cobc_cs_check = 0;
  }
#line 14415 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8480 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14423 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8484 "parser.y" /* yacc.c:1646  */
    {
   (yyval) = cb_int5;
  }
#line 14431 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8488 "parser.y" /* yacc.c:1646  */
    {
	/* TO-DO: Merge with RETRY phrase */
	(yyval) = cb_int4;
  }
#line 14440 "parser.c" /* yacc.c:1646  */
    break;

  case 1210:
#line 8495 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14446 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8496 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14452 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8506 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 14460 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8510 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 14468 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8520 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 14477 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8530 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 14485 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8538 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14493 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8548 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 14502 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8558 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 14510 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 8567 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14518 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 8574 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 14526 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 8578 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 14534 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 8588 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14545 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 8600 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14554 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8608 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14562 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 8616 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14570 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8620 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14578 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 8627 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 14586 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8631 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14594 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 8641 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14603 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8652 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14611 "parser.c" /* yacc.c:1646  */
    break;

  case 1238:
#line 8661 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14619 "parser.c" /* yacc.c:1646  */
    break;

  case 1239:
#line 8666 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14628 "parser.c" /* yacc.c:1646  */
    break;

  case 1240:
#line 8673 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14634 "parser.c" /* yacc.c:1646  */
    break;

  case 1241:
#line 8674 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14640 "parser.c" /* yacc.c:1646  */
    break;

  case 1242:
#line 8679 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14648 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 8684 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14656 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8691 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14664 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 8695 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14672 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 8703 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14680 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 8710 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14688 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 8714 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14696 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 8724 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14707 "parser.c" /* yacc.c:1646  */
    break;

  case 1250:
#line 8731 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14715 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 8746 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14721 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 8747 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14727 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 8751 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14733 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 8752 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14739 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 8759 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14747 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 8768 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14755 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 8780 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14763 "parser.c" /* yacc.c:1646  */
    break;

  case 1266:
#line 8784 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14771 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 8788 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
  }
#line 14779 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 8792 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
  }
#line 14787 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 8796 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14795 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 8800 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14803 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 8804 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14811 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 8808 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14819 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 8817 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14827 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 8821 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14835 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 8830 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14843 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 8844 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14851 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 8858 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14859 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 8862 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14867 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 8872 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14875 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 8880 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[-3]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[-2]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("File sort requires KEY phrase"));
			} else {
				cb_error (_("Table sort without keys not implemented yet"));
			}
			(yyval) = NULL;
		} else {
			cb_emit_sort_init ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
			(yyval)= (yyvsp[-3]);
		}
	} else {
		(yyval) = NULL;
	}
  }
#line 14900 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 8901 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14910 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 8910 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14918 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 8915 "parser.y" /* yacc.c:1646  */
    {
	cb_tree l;
	cb_tree lparm;

	if ((yyvsp[0]) == NULL) {
		l = CB_LIST_INIT (NULL);
	} else {
		l = (yyvsp[0]);
	}
	lparm = l;
	for (; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[-2]);
	}
	(yyval) = cb_list_append ((yyvsp[-4]), lparm);
  }
#line 14938 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 8933 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14944 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 8934 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14950 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 8939 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 14959 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 8946 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 14965 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 8947 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 14971 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 8952 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 14981 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 8958 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 14995 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 8968 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-4])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-4])))) {
			cb_error (_("INPUT PROCEDURE invalid with table SORT"));
		} else if (current_statement->flag_merge) {
			cb_error (_("INPUT PROCEDURE invalid with MERGE"));
		} else {
			cb_emit_sort_input ((yyvsp[0]));
		}
	}
  }
#line 15011 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 8983 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15021 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 8989 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15035 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 8999 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15049 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9015 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15058 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9025 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15071 "parser.c" /* yacc.c:1646  */
    break;

  case 1304:
#line 9037 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15079 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9041 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15087 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9048 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15095 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9052 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15104 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9057 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15113 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9062 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15122 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9069 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15128 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9070 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15134 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9071 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15140 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9072 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15146 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9073 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15152 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9074 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15158 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9079 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 15167 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9092 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15175 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9096 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15183 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9106 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15191 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9110 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15201 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9116 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15214 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9128 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15222 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9132 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15230 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9136 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15242 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9144 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15254 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9155 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15262 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9159 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15270 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9165 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15276 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9166 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15282 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9167 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15288 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9168 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15294 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9175 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 15302 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9184 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15310 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9190 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15316 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9191 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15322 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9195 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15328 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9196 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15334 "parser.c" /* yacc.c:1646  */
    break;

  case 1341:
#line 9197 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15340 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9201 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15346 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 9202 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15352 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9207 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15360 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9211 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15368 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 9221 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15376 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9230 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15384 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9234 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15392 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9238 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15400 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9245 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 15408 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9249 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 15416 "parser.c" /* yacc.c:1646  */
    break;

  case 1353:
#line 9259 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  }
#line 15429 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9277 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
  }
#line 15437 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9285 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[0]));
	}
  }
#line 15449 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9293 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
		cb_emit_terminate((yyvsp[0]));
	}
  }
#line 15460 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9305 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 15468 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9313 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 15479 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9326 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 15487 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9334 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-1]))) {
		if (CB_FILE (cb_ref ((yyvsp[-1])))->organization == COB_ORG_SORT) {
			cb_error_x (CB_TREE (current_statement),
				    _("UNLOCK invalid for SORT files"));
		} else {
			cb_emit_unlock ((yyvsp[-1]));
		}
	}
  }
#line 15502 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9357 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 15510 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9367 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15518 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9373 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15524 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9375 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15530 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9379 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15536 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9381 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15542 "parser.c" /* yacc.c:1646  */
    break;

  case 1376:
#line 9386 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15550 "parser.c" /* yacc.c:1646  */
    break;

  case 1377:
#line 9392 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15556 "parser.c" /* yacc.c:1646  */
    break;

  case 1378:
#line 9394 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15562 "parser.c" /* yacc.c:1646  */
    break;

  case 1379:
#line 9399 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15570 "parser.c" /* yacc.c:1646  */
    break;

  case 1380:
#line 9405 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15576 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9406 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15582 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9410 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15588 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9411 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15594 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 9415 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15600 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 9416 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15606 "parser.c" /* yacc.c:1646  */
    break;

  case 1386:
#line 9421 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15614 "parser.c" /* yacc.c:1646  */
    break;

  case 1387:
#line 9425 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15622 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9435 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 15631 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 9453 "parser.y" /* yacc.c:1646  */
    {
	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (!current_section) {
		cb_error (_("SECTION header missing before USE statement"));
	} else {
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 1;
		current_section->flag_skip_label = 0;
		CB_EXCEPTION_ENABLE (COB_EC_I_O) = 1;
		if (use_global_ind) {
			current_section->flag_global = 1;
			current_program->global_list =
				cb_list_add (current_program->global_list,
					     CB_TREE (current_section));
		}
		emit_statement (cb_build_comment ("USE AFTER ERROR"));
	}
  }
#line 15657 "parser.c" /* yacc.c:1646  */
    break;

  case 1396:
#line 9478 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15665 "parser.c" /* yacc.c:1646  */
    break;

  case 1397:
#line 9482 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15678 "parser.c" /* yacc.c:1646  */
    break;

  case 1398:
#line 9494 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15692 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 9504 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15701 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 9509 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15710 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 9514 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15719 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 9519 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15728 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 9527 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		plabel;
	char		name[64];

	if (!in_declaratives) {
		cb_error (_("USE statement must be within DECLARATIVES"));
	} else if (current_program->nested_level) {
		cb_error (_("USE DEBUGGING not supported in contained program"));
	} else {
		in_debugging = 1;
		current_section->flag_begin = 1;
		current_section->flag_return = 1;
		current_section->flag_declarative_exit = 1;
		current_section->flag_real_label = 0;
		current_section->flag_is_debug_sect = 1;
		if (!needs_debug_item) {
			needs_debug_item = 1;
			cb_build_debug_item ();
		}
		if (!current_program->flag_debugging) {
			skip_statements = 1;
			current_section->flag_skip_label = 1;
		} else {
			current_program->flag_gen_debug = 1;
			sprintf (name, "EXIT SECTION %d", cb_id);
			plabel = cb_build_reference (name);
			plabel = cb_build_label (plabel, NULL);
			CB_LABEL (plabel)->flag_begin = 1;
			CB_LABEL (plabel)->flag_dummy_exit = 1;
			current_section->exit_label = plabel;
			emit_statement (cb_build_comment ("USE FOR DEBUGGING"));
		}
	}
  }
#line 15767 "parser.c" /* yacc.c:1646  */
    break;

  case 1406:
#line 9570 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;
	cb_tree		x;
	cb_tree		z;

	if (current_program->flag_debugging) {
		CB_REFERENCE ((yyvsp[0]))->debug_section = current_section;
		CB_REFERENCE ((yyvsp[0]))->flag_debug_code = 1;
		CB_REFERENCE ((yyvsp[0]))->flag_all_debug = 0;
		z = CB_LIST_INIT ((yyvsp[0]));
		current_program->debug_list =
			cb_list_append (current_program->debug_list, z);
		/* Check backward refs to file/data names */
		/* Label refs will be checked later (forward/backward ref) */
		if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
			l = CB_VALUE(CB_WORD_ITEMS ((yyvsp[0])));
			switch (CB_TREE_TAG (l)) {
			case CB_TAG_FILE:
				CB_FILE (l)->debug_section = current_section;
				CB_FILE (l)->flag_fl_debug = 1;
				break;
			case CB_TAG_FIELD:
				{
					x = cb_ref((yyvsp[0]));
					if(CB_INVALID_TREE(x)) {
						break;
					}
					needs_field_debug = 1;
					CB_FIELD(x)->debug_section = current_section;
					CB_FIELD(x)->flag_field_debug = 1;
					CB_PURPOSE(z) = x;
					break;
				}
			default:
				break;
			}
		}
	}
  }
#line 15811 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 9610 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15825 "parser.c" /* yacc.c:1646  */
    break;

  case 1408:
#line 9620 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	if (current_program->flag_debugging) {
		/* Reference must be a data item */
		x = cb_ref ((yyvsp[0]));
		if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
			cb_error (_("Invalid target for DEBUGGING ALL"));
		} else {
			needs_field_debug = 1;
			CB_FIELD (x)->debug_section = current_section;
			CB_FIELD (x)->flag_field_debug = 1;
			CB_FIELD (x)->flag_all_debug = 1;
			CB_REFERENCE ((yyvsp[0]))->debug_section = current_section;
			CB_REFERENCE ((yyvsp[0]))->flag_debug_code = 1;
			CB_REFERENCE ((yyvsp[0]))->flag_all_debug = 1;
			CB_CHAIN_PAIR (current_program->debug_list, x, (yyvsp[0]));
		}
	}
  }
#line 15850 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 9650 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15860 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 9659 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15870 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 9665 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15880 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 9675 "parser.y" /* yacc.c:1646  */
    {
	char wrk[80];
	cb_tree x;
	struct cb_field		*f;
	struct cb_report	*r;

	x = cb_ref ((yyvsp[0]));
	if (!CB_FIELD_P (x)) {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report group"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	} else {
		control_field = f = CB_FIELD (x);
		f->report_decl_id = current_section->id;
		if((r = f->report) != NULL) {
			r->has_declarative = 1;
		}
	}
	sprintf(wrk,"USE BEFORE REPORTING %s is l_%d",cb_name((yyvsp[0])),current_section->id);
	current_section->flag_real_label = 1;
	current_section->flag_declaratives = 1;
	current_section->flag_begin = 1;
	current_section->flag_return = 1;
	current_section->flag_declarative_exit = 1;
	current_section->flag_real_label = 1;
	current_section->flag_skip_label = 0;
	emit_statement (cb_build_comment (strdup(wrk)));
  }
#line 15912 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 9706 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15922 "parser.c" /* yacc.c:1646  */
    break;

  case 1420:
#line 9722 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15933 "parser.c" /* yacc.c:1646  */
    break;

  case 1422:
#line 9734 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-5]))) {
		cb_emit_write ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15944 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 9743 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15950 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 9744 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15956 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 9749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 15964 "parser.c" /* yacc.c:1646  */
    break;

  case 1426:
#line 9753 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15972 "parser.c" /* yacc.c:1646  */
    break;

  case 1427:
#line 9757 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15980 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 9761 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 15988 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 9767 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15994 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 9768 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16000 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 9778 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16008 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 9782 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16016 "parser.c" /* yacc.c:1646  */
    break;

  case 1437:
#line 9799 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16025 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 9809 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16034 "parser.c" /* yacc.c:1646  */
    break;

  case 1442:
#line 9822 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16043 "parser.c" /* yacc.c:1646  */
    break;

  case 1444:
#line 9832 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16052 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 9847 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16061 "parser.c" /* yacc.c:1646  */
    break;

  case 1449:
#line 9857 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16070 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 9874 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16079 "parser.c" /* yacc.c:1646  */
    break;

  case 1454:
#line 9885 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16088 "parser.c" /* yacc.c:1646  */
    break;

  case 1460:
#line 9908 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16097 "parser.c" /* yacc.c:1646  */
    break;

  case 1461:
#line 9917 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16106 "parser.c" /* yacc.c:1646  */
    break;

  case 1465:
#line 9934 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16115 "parser.c" /* yacc.c:1646  */
    break;

  case 1466:
#line 9943 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16124 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 9960 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16133 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 9970 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16142 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 9980 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 16150 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 9984 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16158 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 9994 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 16166 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 10001 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 16174 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 10007 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 16183 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 10012 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 16191 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 10025 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 16203 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 10033 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 16209 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10034 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 16215 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 10036 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 16221 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 10037 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 16227 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 10038 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 16233 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 10039 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 16239 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 10040 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 16245 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 10042 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 16251 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10043 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 16257 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10044 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 16263 "parser.c" /* yacc.c:1646  */
    break;

  case 1492:
#line 10045 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 16269 "parser.c" /* yacc.c:1646  */
    break;

  case 1493:
#line 10046 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 16275 "parser.c" /* yacc.c:1646  */
    break;

  case 1494:
#line 10047 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 16281 "parser.c" /* yacc.c:1646  */
    break;

  case 1495:
#line 10049 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 16287 "parser.c" /* yacc.c:1646  */
    break;

  case 1496:
#line 10050 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 16293 "parser.c" /* yacc.c:1646  */
    break;

  case 1497:
#line 10051 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 16299 "parser.c" /* yacc.c:1646  */
    break;

  case 1498:
#line 10053 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 16305 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10054 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 16311 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10055 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 16317 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10056 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 16323 "parser.c" /* yacc.c:1646  */
    break;

  case 1502:
#line 10057 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 16329 "parser.c" /* yacc.c:1646  */
    break;

  case 1503:
#line 10060 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 16335 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10061 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 16341 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10091 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16349 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10095 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16357 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 10106 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 16363 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10107 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 16369 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10108 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16375 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10112 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 16381 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10113 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 16387 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10114 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16393 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10119 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 16401 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10122 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16407 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10126 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16413 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10127 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 16419 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10128 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16425 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10131 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16431 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10132 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16437 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 10143 "parser.y" /* yacc.c:1646  */
    {
	if (current_linage > 1) {
		cb_error (_("LINAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (current_linage == 0) {
		cb_error (_("Invalid LINAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = linage_file->linage_ctr;
	}
  }
#line 16453 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10155 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16466 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10164 "parser.y" /* yacc.c:1646  */
    {
	if (report_count > 1
	&& current_report != NULL) {
		(yyval) = current_report->line_counter;
	} else
	if (report_count > 1) {
		cb_error (_("LINE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("Invalid LINE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->line_counter;
	}
  }
#line 16486 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10180 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16499 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10189 "parser.y" /* yacc.c:1646  */
    {
	if (report_count > 1
	&& current_report != NULL) {
		(yyval) = current_report->page_counter;
	} else
	if (report_count > 1) {
		cb_error (_("PAGE-COUNTER must be qualified here"));
		(yyval) = cb_error_node;
	} else if (report_count == 0) {
		cb_error (_("Invalid PAGE-COUNTER usage"));
		(yyval) = cb_error_node;
	} else {
		(yyval) = report_instance->page_counter;
	}
  }
#line 16519 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10205 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16532 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10219 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16538 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10221 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 16544 "parser.c" /* yacc.c:1646  */
    break;

  case 1539:
#line 10226 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 16552 "parser.c" /* yacc.c:1646  */
    break;

  case 1540:
#line 10234 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 16558 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10241 "parser.y" /* yacc.c:1646  */
    {
	cb_tree x;

	x = cb_ref ((yyvsp[0]));
	if (!CB_FIELD_P (x)) {
		(yyval) = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x ((yyvsp[0]), _("'%s' not indexed"), cb_name ((yyvsp[0])));
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16577 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10261 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16585 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10265 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	if (CB_VALID_TREE ((yyvsp[0]))) {
		for (l = (yyvsp[-1]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME ((yyvsp[0])), CB_NAME (CB_VALUE (l)))) {
				cb_error_x ((yyvsp[0]), _("Multiple reference to '%s' "),
					    CB_NAME ((yyvsp[0])));
				break;
			}
		}
		if (!l) {
			(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
		}
	}
  }
#line 16607 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10286 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16620 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10327 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16633 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10340 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16639 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10342 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16645 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10346 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16651 "parser.c" /* yacc.c:1646  */
    break;

  case 1549:
#line 10352 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16657 "parser.c" /* yacc.c:1646  */
    break;

  case 1550:
#line 10354 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16663 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10359 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16676 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10373 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16684 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10380 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16694 "parser.c" /* yacc.c:1646  */
    break;

  case 1556:
#line 10390 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16700 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10391 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16706 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10396 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16715 "parser.c" /* yacc.c:1646  */
    break;

  case 1559:
#line 10404 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16724 "parser.c" /* yacc.c:1646  */
    break;

  case 1560:
#line 10412 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16732 "parser.c" /* yacc.c:1646  */
    break;

  case 1561:
#line 10416 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16740 "parser.c" /* yacc.c:1646  */
    break;

  case 1562:
#line 10423 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16750 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10439 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16763 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10453 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16777 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10470 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16785 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10474 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16793 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10483 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16801 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10490 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16809 "parser.c" /* yacc.c:1646  */
    break;

  case 1573:
#line 10494 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16817 "parser.c" /* yacc.c:1646  */
    break;

  case 1578:
#line 10505 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16825 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10509 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16833 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10513 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16841 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10517 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16849 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10521 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16857 "parser.c" /* yacc.c:1646  */
    break;

  case 1583:
#line 10525 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[0]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME (x)->category != CB_SWITCH_NAME) {
			cb_error_x (x, _("Invalid mnemonic identifier"));
			(yyval) = cb_error_node;
		} else {
			switch_id = cb_int (CB_SYSTEM_NAME (x)->token);
			(yyval) = CB_BUILD_FUNCALL_1 ("cob_switch_value", switch_id);
		}
	} else {
		(yyval) = cb_error_node;
	}
  }
#line 16879 "parser.c" /* yacc.c:1646  */
    break;

  case 1584:
#line 10546 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16887 "parser.c" /* yacc.c:1646  */
    break;

  case 1585:
#line 10550 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16895 "parser.c" /* yacc.c:1646  */
    break;

  case 1593:
#line 10567 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16903 "parser.c" /* yacc.c:1646  */
    break;

  case 1594:
#line 10571 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16911 "parser.c" /* yacc.c:1646  */
    break;

  case 1595:
#line 10575 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16919 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10622 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 16927 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10646 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16933 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 10650 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 16939 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 10654 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16945 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 10655 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16951 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 10659 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16957 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 10664 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16968 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 10671 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16979 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 10678 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16990 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 10685 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17001 "parser.c" /* yacc.c:1646  */
    break;

  case 1628:
#line 10695 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17009 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 10699 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17017 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 10706 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17031 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 10716 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17045 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 10726 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17059 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 10736 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17073 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 10749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17081 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 10753 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17090 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 10761 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 17099 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 10769 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 17107 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 10773 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 17116 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 10783 "parser.y" /* yacc.c:1646  */
    {
	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[0]))->sign < 0 || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17132 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 10798 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[0]))->sign || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[0]));
		if (n < 1 || n > 256) {
			cb_error (_("Invalid SYMBOLIC integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[0]);
		}
	}
  }
#line 17156 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 10821 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[0]))->sign < 0 || CB_LITERAL ((yyvsp[0]))->scale) {
		cb_error (_("Positive Integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[0]));
		if (n < 0) {
			cb_error (_("Invalid integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[0]);
		}
	}
  }
#line 17180 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 10841 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17188 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 10848 "parser.y" /* yacc.c:1646  */
    {
	int	n;

	if (cb_tree_category ((yyvsp[0])) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL ((yyvsp[0]))->sign || CB_LITERAL ((yyvsp[0]))->scale) {
			cb_error (_("Integer value expected"));
		} else {
			n = cb_get_int ((yyvsp[0]));
			if (n < 1 || n > 256) {
				cb_error (_("Invalid CLASS value"));
			}
		}
	}
	(yyval) = (yyvsp[0]);
  }
#line 17208 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 10863 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17214 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 10864 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17220 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 10865 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17226 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 10866 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17232 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 10867 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17238 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 10868 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17244 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 10873 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17252 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 10877 "parser.y" /* yacc.c:1646  */
    {
	struct cb_literal	*l;

	if (CB_LITERAL_P ((yyvsp[0]))) {
		/* We must not alter the original definition */
		l = cobc_parse_malloc (sizeof(struct cb_literal));
		*l = *(CB_LITERAL((yyvsp[0])));
		l->all = 1;
		(yyval) = CB_TREE (l);
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 17270 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 10894 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17278 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 10898 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17286 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 10904 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17292 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 10905 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17298 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 10906 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17304 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 10907 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17310 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 10908 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17316 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 10909 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17322 "parser.c" /* yacc.c:1646  */
    break;

  case 1660:
#line 10910 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17328 "parser.c" /* yacc.c:1646  */
    break;

  case 1661:
#line 10917 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 17336 "parser.c" /* yacc.c:1646  */
    break;

  case 1662:
#line 10921 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 17344 "parser.c" /* yacc.c:1646  */
    break;

  case 1663:
#line 10925 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17352 "parser.c" /* yacc.c:1646  */
    break;

  case 1664:
#line 10929 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17360 "parser.c" /* yacc.c:1646  */
    break;

  case 1665:
#line 10933 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 17368 "parser.c" /* yacc.c:1646  */
    break;

  case 1666:
#line 10937 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17376 "parser.c" /* yacc.c:1646  */
    break;

  case 1667:
#line 10941 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17384 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 10945 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17392 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 10949 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17400 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 10953 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17408 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 10957 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 17416 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 10961 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 17424 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 10986 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17432 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 10990 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 17440 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 10994 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 17448 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11001 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17456 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11005 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17464 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11009 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17472 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11016 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 17483 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11023 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 17494 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11030 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 17505 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11040 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17516 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11047 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 17527 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11057 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17538 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11064 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 17549 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11074 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17557 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11078 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17571 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11091 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17579 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11095 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17593 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11109 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 17601 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11117 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17607 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11118 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17613 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11122 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17619 "parser.c" /* yacc.c:1646  */
    break;

  case 1703:
#line 11123 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17625 "parser.c" /* yacc.c:1646  */
    break;

  case 1704:
#line 11127 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17631 "parser.c" /* yacc.c:1646  */
    break;

  case 1705:
#line 11128 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17637 "parser.c" /* yacc.c:1646  */
    break;

  case 1706:
#line 11133 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17645 "parser.c" /* yacc.c:1646  */
    break;

  case 1707:
#line 11137 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17653 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17661 "parser.c" /* yacc.c:1646  */
    break;

  case 1709:
#line 11148 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17669 "parser.c" /* yacc.c:1646  */
    break;

  case 1710:
#line 11155 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17675 "parser.c" /* yacc.c:1646  */
    break;

  case 1711:
#line 11156 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17681 "parser.c" /* yacc.c:1646  */
    break;

  case 1712:
#line 11157 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 17687 "parser.c" /* yacc.c:1646  */
    break;

  case 1713:
#line 11161 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17693 "parser.c" /* yacc.c:1646  */
    break;

  case 1714:
#line 11162 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17699 "parser.c" /* yacc.c:1646  */
    break;

  case 1715:
#line 11166 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17705 "parser.c" /* yacc.c:1646  */
    break;

  case 1716:
#line 11167 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17711 "parser.c" /* yacc.c:1646  */
    break;

  case 1717:
#line 11168 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17717 "parser.c" /* yacc.c:1646  */
    break;

  case 1718:
#line 11173 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17725 "parser.c" /* yacc.c:1646  */
    break;

  case 1719:
#line 11177 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17738 "parser.c" /* yacc.c:1646  */
    break;

  case 1720:
#line 11189 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17747 "parser.c" /* yacc.c:1646  */
    break;

  case 1721:
#line 11194 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17756 "parser.c" /* yacc.c:1646  */
    break;

  case 1722:
#line 11202 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17764 "parser.c" /* yacc.c:1646  */
    break;

  case 1723:
#line 11206 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17772 "parser.c" /* yacc.c:1646  */
    break;

  case 1724:
#line 11210 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17780 "parser.c" /* yacc.c:1646  */
    break;

  case 1725:
#line 11214 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17788 "parser.c" /* yacc.c:1646  */
    break;

  case 1726:
#line 11218 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17796 "parser.c" /* yacc.c:1646  */
    break;

  case 1727:
#line 11222 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17804 "parser.c" /* yacc.c:1646  */
    break;

  case 1728:
#line 11226 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17812 "parser.c" /* yacc.c:1646  */
    break;

  case 1729:
#line 11230 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17820 "parser.c" /* yacc.c:1646  */
    break;

  case 1730:
#line 11236 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17826 "parser.c" /* yacc.c:1646  */
    break;

  case 1731:
#line 11237 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17832 "parser.c" /* yacc.c:1646  */
    break;


#line 17836 "parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 11410 "parser.y" /* yacc.c:1906  */

