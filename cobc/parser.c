/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 27 "parser.y" /* yacc.c:339  */

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
    RETURN = 635,
    RETURNING = 636,
    REVERSE_FUNC = 637,
    REVERSE_VIDEO = 638,
    REVERSED = 639,
    REWIND = 640,
    REWRITE = 641,
    RF = 642,
    RH = 643,
    RIGHT = 644,
    ROLLBACK = 645,
    ROUNDED = 646,
    RUN = 647,
    SAME = 648,
    SCREEN = 649,
    SCREEN_CONTROL = 650,
    SCROLL = 651,
    SD = 652,
    SEARCH = 653,
    SECTION = 654,
    SECURE = 655,
    SEGMENT_LIMIT = 656,
    SELECT = 657,
    SEMI_COLON = 658,
    SENTENCE = 659,
    SEPARATE = 660,
    SEQUENCE = 661,
    SEQUENTIAL = 662,
    SET = 663,
    SHARING = 664,
    SIGN = 665,
    SIGNED = 666,
    SIGNED_INT = 667,
    SIGNED_LONG = 668,
    SIGNED_SHORT = 669,
    SIZE = 670,
    SIZE_ERROR = 671,
    SORT = 672,
    SORT_MERGE = 673,
    SOURCE = 674,
    SOURCE_COMPUTER = 675,
    SPACE = 676,
    SPECIAL_NAMES = 677,
    STANDARD = 678,
    STANDARD_1 = 679,
    STANDARD_2 = 680,
    START = 681,
    STATIC = 682,
    STATUS = 683,
    STDCALL = 684,
    STEP = 685,
    STOP = 686,
    STRING = 687,
    SUBSTITUTE_FUNC = 688,
    SUBSTITUTE_CASE_FUNC = 689,
    SUBTRACT = 690,
    SUM = 691,
    SUPPRESS = 692,
    SYMBOLIC = 693,
    SYNCHRONIZED = 694,
    SYSTEM_DEFAULT = 695,
    SYSTEM_OFFSET = 696,
    TAB = 697,
    TALLYING = 698,
    TAPE = 699,
    TERMINATE = 700,
    TEST = 701,
    THAN = 702,
    THEN = 703,
    THRU = 704,
    TIME = 705,
    TIMEOUT = 706,
    TIMES = 707,
    TO = 708,
    TOK_AMPER = 709,
    TOK_CLOSE_PAREN = 710,
    TOK_COLON = 711,
    TOK_DIV = 712,
    TOK_DOT = 713,
    TOK_EQUAL = 714,
    TOK_FALSE = 715,
    TOK_FILE = 716,
    TOK_GREATER = 717,
    TOK_INITIAL = 718,
    TOK_LESS = 719,
    TOK_MINUS = 720,
    TOK_MUL = 721,
    TOK_NULL = 722,
    TOK_OVERFLOW = 723,
    TOK_OPEN_PAREN = 724,
    TOK_PLUS = 725,
    TOK_TRUE = 726,
    TOP = 727,
    TOWARD_GREATER = 728,
    TOWARD_LESSER = 729,
    TRAILING = 730,
    TRANSFORM = 731,
    TRIM_FUNC = 732,
    TRUNCATION = 733,
    TYPE = 734,
    UNDERLINE = 735,
    UNIT = 736,
    UNLOCK = 737,
    UNSIGNED = 738,
    UNSIGNED_INT = 739,
    UNSIGNED_LONG = 740,
    UNSIGNED_SHORT = 741,
    UNSTRING = 742,
    UNTIL = 743,
    UP = 744,
    UPDATE = 745,
    UPON = 746,
    UPON_ARGUMENT_NUMBER = 747,
    UPON_COMMAND_LINE = 748,
    UPON_ENVIRONMENT_NAME = 749,
    UPON_ENVIRONMENT_VALUE = 750,
    UPPER = 751,
    UPPER_CASE_FUNC = 752,
    USAGE = 753,
    USE = 754,
    USER = 755,
    USER_DEFAULT = 756,
    USER_FUNCTION_NAME = 757,
    USER_REPO_FUNCTION = 758,
    USING = 759,
    VALUE = 760,
    VARYING = 761,
    WAIT = 762,
    WHEN = 763,
    WHEN_COMPILED_FUNC = 764,
    WITH = 765,
    WORD = 766,
    WORDS = 767,
    WORKING_STORAGE = 768,
    WRITE = 769,
    YYYYDDD = 770,
    YYYYMMDD = 771,
    ZERO = 772,
    SHIFT_PREFER = 773
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

#line 1335 "parser.c" /* yacc.c:358  */

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
#define YYLAST   8799

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  519
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  838
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1959
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2800

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   773

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
     515,   516,   517,   518
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1349,  1349,  1349,  1381,  1382,  1386,  1387,  1391,  1392,
    1396,  1396,  1419,  1426,  1433,  1439,  1440,  1441,  1445,  1446,
    1450,  1474,  1475,  1479,  1513,  1519,  1531,  1505,  1541,  1540,
    1578,  1610,  1611,  1615,  1616,  1619,  1620,  1624,  1633,  1642,
    1643,  1647,  1651,  1660,  1661,  1669,  1670,  1680,  1681,  1685,
    1686,  1687,  1688,  1689,  1696,  1695,  1708,  1709,  1712,  1713,
    1727,  1726,  1736,  1737,  1738,  1739,  1743,  1744,  1748,  1749,
    1750,  1751,  1755,  1762,  1769,  1776,  1787,  1791,  1795,  1799,
    1806,  1807,  1814,  1813,  1824,  1825,  1826,  1833,  1834,  1838,
    1842,  1854,  1858,  1859,  1864,  1867,  1874,  1879,  1890,  1903,
    1904,  1912,  1913,  1917,  1918,  1919,  1920,  1921,  1922,  1923,
    1924,  1925,  1926,  1927,  1928,  1936,  1935,  1963,  1973,  1986,
    1994,  1997,  1998,  2002,  2009,  2024,  2045,  2044,  2068,  2074,
    2080,  2086,  2092,  2098,  2108,  2112,  2119,  2123,  2128,  2127,
    2138,  2142,  2149,  2150,  2151,  2152,  2153,  2154,  2158,  2159,
    2166,  2181,  2184,  2191,  2199,  2203,  2214,  2234,  2242,  2253,
    2254,  2260,  2281,  2282,  2286,  2290,  2311,  2334,  2416,  2419,
    2428,  2447,  2463,  2481,  2499,  2516,  2532,  2533,  2540,  2541,
    2549,  2550,  2560,  2561,  2566,  2565,  2586,  2596,  2597,  2601,
    2602,  2603,  2604,  2605,  2606,  2607,  2608,  2609,  2610,  2611,
    2612,  2613,  2620,  2626,  2636,  2649,  2662,  2678,  2679,  2680,
    2681,  2684,  2685,  2691,  2692,  2696,  2700,  2701,  2706,  2709,
    2710,  2717,  2725,  2726,  2727,  2734,  2763,  2801,  2803,  2808,
    2818,  2829,  2836,  2838,  2839,  2845,  2845,  2852,  2857,  2862,
    2869,  2870,  2871,  2875,  2886,  2887,  2891,  2896,  2901,  2906,
    2917,  2928,  2938,  2943,  2964,  2965,  2969,  2969,  2973,  2978,
    2996,  3007,  3014,  3015,  3021,  3029,  3030,  3031,  3037,  3038,
    3039,  3046,  3047,  3051,  3052,  3058,  3086,  3087,  3088,  3089,
    3096,  3095,  3111,  3112,  3116,  3119,  3120,  3126,  3127,  3135,
    3136,  3144,  3145,  3149,  3169,  3168,  3185,  3192,  3196,  3202,
    3203,  3207,  3217,  3232,  3233,  3234,  3235,  3236,  3237,  3238,
    3239,  3240,  3247,  3254,  3254,  3254,  3260,  3280,  3314,  3345,
    3346,  3353,  3354,  3358,  3359,  3366,  3377,  3382,  3393,  3394,
    3398,  3399,  3405,  3416,  3434,  3435,  3439,  3440,  3441,  3445,
    3452,  3459,  3468,  3480,  3532,  3547,  3548,  3552,  3564,  3606,
    3608,  3607,  3623,  3626,  3626,  3644,  3645,  3647,  3651,  3653,
    3652,  3687,  3700,  3708,  3713,  3719,  3728,  3738,  3741,  3753,
    3754,  3755,  3756,  3760,  3764,  3768,  3772,  3776,  3780,  3784,
    3788,  3792,  3796,  3800,  3804,  3808,  3819,  3820,  3824,  3825,
    3829,  3830,  3831,  3835,  3836,  3840,  3866,  3870,  3879,  3883,
    3892,  3893,  3894,  3895,  3896,  3897,  3898,  3899,  3900,  3901,
    3902,  3903,  3904,  3905,  3912,  3936,  3964,  3967,  3976,  4001,
    4012,  4013,  4017,  4021,  4025,  4029,  4033,  4037,  4041,  4045,
    4049,  4053,  4057,  4061,  4065,  4070,  4075,  4079,  4083,  4091,
    4095,  4099,  4107,  4111,  4115,  4119,  4123,  4127,  4131,  4135,
    4139,  4147,  4155,  4159,  4163,  4167,  4171,  4175,  4183,  4184,
    4188,  4189,  4195,  4201,  4213,  4231,  4232,  4241,  4262,  4284,
    4285,  4289,  4290,  4293,  4294,  4300,  4301,  4308,  4309,  4316,
    4340,  4341,  4358,  4359,  4362,  4363,  4370,  4371,  4376,  4387,
    4398,  4405,  4407,  4408,  4420,  4431,  4460,  4459,  4468,  4469,
    4473,  4474,  4477,  4478,  4491,  4504,  4525,  4534,  4548,  4550,
    4549,  4569,  4571,  4570,  4586,  4588,  4587,  4598,  4599,  4606,
    4605,  4634,  4635,  4636,  4643,  4649,  4653,  4654,  4660,  4667,
    4668,  4669,  4673,  4680,  4681,  4685,  4695,  4735,  4745,  4755,
    4774,  4775,  4778,  4779,  4784,  4785,  4786,  4787,  4788,  4789,
    4801,  4812,  4823,  4834,  4845,  4855,  4856,  4861,  4860,  4881,
    4882,  4886,  4887,  4888,  4889,  4890,  4891,  4892,  4893,  4894,
    4895,  4896,  4897,  4898,  4899,  4900,  4901,  4905,  4912,  4916,
    4920,  4921,  4922,  4929,  4933,  4940,  4943,  4948,  4954,  4961,
    4964,  4969,  4973,  4981,  4988,  4997,  5002,  5007,  5020,  5028,
    5029,  5030,  5037,  5041,  5048,  5053,  5059,  5066,  5072,  5082,
    5086,  5093,  5094,  5098,  5102,  5106,  5110,  5114,  5122,  5125,
    5126,  5130,  5136,  5140,  5155,  5172,  5173,  5174,  5178,  5204,
    5219,  5222,  5224,  5228,  5232,  5236,  5243,  5263,  5267,  5268,
    5272,  5304,  5312,  5320,  5328,  5330,  5329,  5350,  5351,  5355,
    5356,  5361,  5363,  5362,  5419,  5437,  5438,  5442,  5446,  5450,
    5454,  5458,  5462,  5466,  5470,  5474,  5478,  5482,  5486,  5490,
    5494,  5498,  5502,  5506,  5511,  5515,  5519,  5524,  5529,  5534,
    5539,  5540,  5541,  5542,  5543,  5544,  5545,  5546,  5547,  5554,
    5559,  5568,  5569,  5573,  5574,  5579,  5582,  5586,  5594,  5597,
    5601,  5609,  5620,  5628,  5630,  5640,  5629,  5667,  5667,  5700,
    5704,  5703,  5717,  5716,  5736,  5737,  5742,  5749,  5751,  5755,
    5765,  5767,  5775,  5783,  5791,  5820,  5851,  5853,  5863,  5868,
    5895,  5897,  5896,  5933,  5934,  5938,  5939,  5940,  5957,  5958,
    5969,  5968,  6018,  6019,  6023,  6071,  6084,  6087,  6106,  6111,
    6105,  6124,  6124,  6154,  6161,  6162,  6163,  6164,  6165,  6166,
    6167,  6168,  6169,  6170,  6171,  6172,  6173,  6174,  6175,  6176,
    6177,  6178,  6179,  6180,  6181,  6182,  6183,  6184,  6185,  6186,
    6187,  6188,  6189,  6190,  6191,  6192,  6193,  6194,  6195,  6196,
    6197,  6198,  6199,  6200,  6201,  6202,  6203,  6204,  6205,  6206,
    6207,  6208,  6209,  6210,  6224,  6236,  6235,  6251,  6257,  6261,
    6265,  6270,  6275,  6280,  6285,  6289,  6293,  6297,  6301,  6306,
    6310,  6314,  6318,  6322,  6326,  6330,  6337,  6338,  6345,  6346,
    6350,  6351,  6355,  6356,  6357,  6358,  6359,  6363,  6367,  6368,
    6371,  6372,  6375,  6376,  6382,  6383,  6387,  6388,  6392,  6396,
    6402,  6406,  6410,  6414,  6418,  6422,  6426,  6430,  6434,  6438,
    6442,  6446,  6450,  6454,  6458,  6462,  6466,  6472,  6476,  6480,
    6484,  6488,  6492,  6496,  6503,  6504,  6508,  6512,  6530,  6529,
    6538,  6542,  6546,  6552,  6553,  6560,  6564,  6575,  6574,  6583,
    6587,  6599,  6600,  6608,  6607,  6616,  6617,  6621,  6627,  6627,
    6634,  6633,  6643,  6663,  6667,  6672,  6677,  6698,  6702,  6701,
    6718,  6719,  6724,  6732,  6756,  6758,  6762,  6771,  6784,  6787,
    6791,  6795,  6818,  6819,  6823,  6824,  6829,  6832,  6840,  6844,
    6852,  6856,  6867,  6866,  6874,  6878,  6889,  6888,  6896,  6901,
    6909,  6910,  6911,  6912,  6913,  6921,  6920,  6929,  6936,  6940,
    6950,  6961,  6979,  6978,  6987,  6991,  6995,  7000,  7008,  7012,
    7023,  7022,  7032,  7036,  7040,  7044,  7048,  7052,  7053,  7062,
    7064,  7063,  7071,  7080,  7087,  7091,  7095,  7099,  7109,  7111,
    7115,  7116,  7119,  7121,  7128,  7129,  7133,  7134,  7139,  7143,
    7147,  7151,  7155,  7159,  7163,  7167,  7171,  7175,  7179,  7183,
    7187,  7191,  7195,  7199,  7206,  7210,  7221,  7220,  7229,  7233,
    7237,  7241,  7245,  7252,  7256,  7267,  7266,  7275,  7294,  7293,
    7317,  7325,  7326,  7331,  7342,  7353,  7367,  7371,  7378,  7379,
    7384,  7393,  7402,  7407,  7416,  7417,  7422,  7484,  7485,  7486,
    7490,  7491,  7495,  7499,  7510,  7509,  7521,  7522,  7543,  7557,
    7579,  7601,  7621,  7644,  7645,  7653,  7652,  7661,  7672,  7671,
    7680,  7693,  7692,  7705,  7714,  7718,  7729,  7745,  7744,  7753,
    7757,  7761,  7768,  7772,  7783,  7782,  7790,  7798,  7799,  7803,
    7804,  7805,  7810,  7813,  7820,  7824,  7832,  7839,  7840,  7841,
    7842,  7843,  7844,  7845,  7850,  7853,  7863,  7862,  7870,  7877,
    7890,  7889,  7898,  7902,  7906,  7910,  7917,  7918,  7919,  7920,
    7927,  7926,  7940,  7950,  7959,  7960,  7964,  7965,  7966,  7967,
    7968,  7969,  7973,  7974,  7978,  7983,  7990,  7991,  7992,  7993,
    7994,  7998,  8026,  8029,  8036,  8040,  8050,  8049,  8062,  8061,
    8069,  8073,  8084,  8083,  8092,  8096,  8103,  8107,  8118,  8117,
    8125,  8146,  8170,  8171,  8172,  8173,  8177,  8178,  8182,  8183,
    8184,  8185,  8197,  8196,  8207,  8213,  8212,  8223,  8231,  8239,
    8246,  8250,  8263,  8270,  8282,  8285,  8290,  8294,  8305,  8312,
    8313,  8317,  8318,  8321,  8322,  8327,  8367,  8366,  8375,  8402,
    8403,  8408,  8411,  8415,  8419,  8423,  8427,  8431,  8438,  8439,
    8443,  8444,  8448,  8452,  8462,  8473,  8472,  8480,  8490,  8501,
    8500,  8509,  8516,  8520,  8531,  8530,  8542,  8551,  8554,  8558,
    8565,  8569,  8579,  8591,  8590,  8599,  8603,  8612,  8613,  8618,
    8621,  8629,  8633,  8640,  8648,  8652,  8663,  8662,  8676,  8677,
    8678,  8679,  8680,  8681,  8685,  8686,  8690,  8691,  8697,  8706,
    8713,  8714,  8718,  8722,  8726,  8730,  8734,  8738,  8742,  8746,
    8755,  8759,  8768,  8777,  8778,  8782,  8791,  8792,  8796,  8800,
    8811,  8810,  8819,  8818,  8849,  8852,  8872,  8873,  8876,  8877,
    8885,  8886,  8891,  8896,  8906,  8922,  8927,  8937,  8954,  8953,
    8963,  8976,  8979,  8987,  8990,  8995,  9000,  9008,  9009,  9010,
    9011,  9012,  9013,  9017,  9025,  9026,  9030,  9034,  9045,  9044,
    9054,  9067,  9070,  9074,  9082,  9094,  9097,  9104,  9105,  9106,
    9107,  9114,  9113,  9122,  9129,  9130,  9134,  9135,  9136,  9140,
    9141,  9145,  9149,  9160,  9159,  9168,  9172,  9176,  9183,  9187,
    9197,  9208,  9209,  9216,  9215,  9223,  9231,  9244,  9243,  9251,
    9265,  9264,  9272,  9285,  9287,  9288,  9296,  9295,  9304,  9312,
    9313,  9318,  9319,  9324,  9331,  9332,  9337,  9344,  9345,  9349,
    9350,  9354,  9355,  9359,  9363,  9374,  9373,  9382,  9383,  9384,
    9385,  9386,  9390,  9417,  9420,  9432,  9442,  9447,  9452,  9457,
    9465,  9503,  9504,  9508,  9548,  9558,  9581,  9582,  9583,  9584,
    9588,  9597,  9603,  9613,  9644,  9653,  9654,  9661,  9660,  9672,
    9682,  9683,  9688,  9691,  9695,  9699,  9706,  9707,  9711,  9712,
    9716,  9720,  9732,  9735,  9736,  9745,  9746,  9755,  9758,  9759,
    9768,  9769,  9780,  9783,  9784,  9793,  9794,  9806,  9809,  9811,
    9821,  9822,  9834,  9835,  9839,  9840,  9841,  9845,  9854,  9865,
    9866,  9867,  9871,  9880,  9891,  9896,  9897,  9906,  9907,  9918,
    9922,  9932,  9939,  9946,  9946,  9957,  9958,  9959,  9963,  9972,
    9973,  9975,  9976,  9977,  9978,  9979,  9981,  9982,  9983,  9984,
    9985,  9986,  9988,  9989,  9990,  9992,  9993,  9994,  9995,  9996,
    9999, 10000, 10004, 10005, 10009, 10010, 10014, 10015, 10019, 10023,
   10029, 10033, 10039, 10040, 10041, 10045, 10046, 10047, 10051, 10052,
   10053, 10057, 10061, 10065, 10066, 10067, 10070, 10071, 10081, 10093,
   10102, 10118, 10127, 10143, 10158, 10159, 10164, 10173, 10179, 10199,
   10203, 10224, 10265, 10279, 10280, 10285, 10291, 10292, 10297, 10309,
   10310, 10311, 10318, 10329, 10330, 10334, 10342, 10350, 10354, 10361,
   10370, 10371, 10377, 10391, 10408, 10412, 10419, 10420, 10421, 10428,
   10432, 10439, 10440, 10441, 10442, 10443, 10447, 10451, 10455, 10459,
   10463, 10484, 10488, 10495, 10496, 10497, 10501, 10502, 10503, 10504,
   10505, 10509, 10513, 10520, 10521, 10525, 10526, 10530, 10531, 10535,
   10536, 10547, 10548, 10552, 10553, 10554, 10558, 10559, 10560, 10567,
   10568, 10572, 10573, 10577, 10578, 10579, 10585, 10589, 10593, 10594,
   10598, 10602, 10609, 10616, 10623, 10633, 10637, 10644, 10654, 10664,
   10674, 10687, 10691, 10699, 10707, 10711, 10721, 10736, 10759, 10779,
   10786, 10802, 10803, 10804, 10805, 10806, 10807, 10811, 10815, 10832,
   10836, 10843, 10844, 10845, 10846, 10847, 10848, 10849, 10855, 10859,
   10863, 10867, 10871, 10875, 10879, 10883, 10887, 10891, 10895, 10899,
   10906, 10907, 10911, 10912, 10913, 10917, 10918, 10919, 10920, 10924,
   10928, 10932, 10939, 10943, 10947, 10954, 10961, 10968, 10978, 10985,
   10995, 11002, 11012, 11016, 11029, 11033, 11048, 11056, 11057, 11061,
   11062, 11066, 11067, 11072, 11075, 11083, 11086, 11093, 11095, 11096,
   11100, 11101, 11105, 11106, 11107, 11112, 11115, 11128, 11132, 11140,
   11144, 11148, 11152, 11156, 11160, 11164, 11168, 11175, 11176, 11182,
   11183, 11184, 11185, 11186, 11187, 11188, 11189, 11190, 11191, 11192,
   11193, 11194, 11195, 11196, 11197, 11198, 11199, 11200, 11201, 11202,
   11203, 11204, 11205, 11206, 11207, 11208, 11209, 11210, 11211, 11212,
   11213, 11214, 11215, 11216, 11217, 11218, 11219, 11220, 11221, 11222,
   11223, 11224, 11225, 11226, 11227, 11228, 11229, 11230, 11231, 11232,
   11233, 11234, 11235, 11236, 11237, 11238, 11239, 11240, 11241, 11242,
   11243, 11244, 11245, 11246, 11247, 11248, 11249, 11250, 11251, 11258,
   11258, 11259, 11259, 11260, 11260, 11261, 11261, 11262, 11262, 11263,
   11263, 11264, 11264, 11265, 11265, 11266, 11266, 11267, 11267, 11268,
   11268, 11269, 11269, 11270, 11270, 11271, 11271, 11272, 11272, 11273,
   11273, 11274, 11274, 11274, 11275, 11275, 11276, 11276, 11277, 11277,
   11278, 11278, 11279, 11279, 11279, 11280, 11280, 11281, 11281, 11281,
   11282, 11282, 11282, 11283, 11283, 11284, 11284, 11285, 11285, 11286,
   11286, 11287, 11287, 11287, 11288, 11288, 11289, 11289, 11290, 11290,
   11290, 11291, 11291, 11291, 11291, 11292, 11292, 11293, 11293, 11294,
   11294, 11295, 11295, 11296, 11296, 11297, 11297, 11298, 11298, 11299,
   11299, 11299, 11300, 11300, 11301, 11301, 11302, 11302, 11303, 11303,
   11304, 11304, 11305, 11305, 11306, 11306, 11307, 11307, 11307, 11308,
   11308, 11309, 11309, 11310, 11310, 11311, 11311, 11315, 11315, 11316,
   11316, 11317, 11317, 11318, 11318, 11319, 11319, 11320, 11320, 11321,
   11321, 11322, 11322, 11323, 11323, 11324, 11324, 11325, 11325, 11326,
   11326, 11327, 11327, 11328, 11328, 11329, 11329, 11330, 11330, 11331,
   11331, 11334, 11335, 11336, 11340, 11340, 11341, 11341, 11342, 11342,
   11343, 11343, 11344, 11344, 11345, 11345, 11346, 11346, 11347, 11347
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
  "REQUIRED", "RESERVE", "RESET", "\"RESET TRACE\"", "RETURN", "RETURNING",
  "\"FUNCTION REVERSE\"", "\"REVERSE-VIDEO\"", "REVERSED", "REWIND",
  "REWRITE", "RF", "RH", "RIGHT", "ROLLBACK", "ROUNDED", "RUN", "SAME",
  "SCREEN", "\"SCREEN-CONTROL\"", "SCROLL", "SD", "SEARCH", "SECTION",
  "SECURE", "\"SEGMENT-LIMIT\"", "SELECT", "\"semi-colon\"", "SENTENCE",
  "SEPARATE", "SEQUENCE", "SEQUENTIAL", "SET", "SHARING", "SIGN", "SIGNED",
  "\"SIGNED-INT\"", "\"SIGNED-LONG\"", "\"SIGNED-SHORT\"", "SIZE",
  "\"SIZE ERROR\"", "SORT", "\"SORT-MERGE\"", "SOURCE",
  "\"SOURCE-COMPUTER\"", "SPACE", "\"SPECIAL-NAMES\"", "STANDARD",
  "\"STANDARD-1\"", "\"STANDARD-2\"", "START", "STATIC", "STATUS",
  "STDCALL", "STEP", "STOP", "STRING", "\"FUNCTION SUBSTITUTE\"",
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
  "read_body", "read_into", "with_lock", "read_key", "read_handler",
  "end_read", "ready_statement", "release_statement", "$@70",
  "release_body", "reset_statement", "return_statement", "$@71",
  "return_body", "end_return", "rewrite_statement", "$@72", "rewrite_body",
  "write_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@73", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "set_statement", "$@74", "set_body",
  "on_or_off", "up_or_down", "set_environment", "set_attr",
  "set_attr_clause", "set_attr_one", "set_to", "set_up_down",
  "set_to_on_off_sequence", "set_to_on_off", "set_to_true_false_sequence",
  "set_to_true_false", "sort_statement", "$@75", "sort_body", "@76",
  "sort_key_list", "opt_key_list", "sort_duplicates", "sort_collating",
  "sort_input", "sort_output", "start_statement", "$@77", "start_body",
  "sizelen_clause", "start_key", "start_op", "disallowed_op",
  "not_equal_op", "end_start", "stop_statement", "$@78", "stop_returning",
  "_opt_status", "stop_literal", "string_statement", "$@79", "string_body",
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
     765,   766,   767,   768,   769,   770,   771,   772,   773
};
# endif

#define YYPACT_NINF -2326

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2326)))

#define YYTABLE_NINF -1904

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2326,   273,   629, -2326,   356,   399, -2326,   629, -2326, -2326,
     772, -2326, -2326,   772,   772,   -29,   -29, -2326,  1134, -2326,
    1319,   995,  1282, -2326, -2326,  1413,  1413,  1010,  1106, -2326,
   -2326,     3,   772,   -29, -2326, -2326,  1258,  1080, -2326, -2326,
    1098,  1302,   -29, -2326, -2326, -2326,   995,  1099, -2326, -2326,
     376, -2326,  1031,  1031,  1133,  1157,  1342,  1342,  1342,  1193,
    1031,  1177,  1135,  1144,  1342,  1148,  1151,  1539, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326,   595, -2326, -2326, -2326, -2326,
    1392, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
    1437,  1167,     3, -2326, -2326,  1170,    53, -2326, -2326,  1342,
    1342, -2326,  1342,  1125,  1546,  1125,  1174,  1342,  1342, -2326,
   -2326,  1125, -2326, -2326, -2326,  1126,  1070,  1183, -2326, -2326,
    1136, -2326,  1190, -2326, -2326, -2326, -2326,  -149, -2326, -2326,
   -2326,  1318, -2326,  1342,  1088,  1125,  1407,     6, -2326, -2326,
   -2326, -2326, -2326,  1416,  1197,   608,  1476, -2326,  1169, -2326,
    1126, -2326,    57, -2326, -2326, -2326, -2326, -2326, -2326,  1222,
     -62,  1342,    11, -2326, -2326, -2326,   489, -2326, -2326, -2326,
    1083, -2326, -2326, -2326, -2326, -2326, -2326, -2326,  1088, -2326,
    1229, -2326,   379, -2326, -2326,  1125, -2326,  1276, -2326,  1277,
    1273,  1623,  1342, -2326, -2326, -2326,    68, -2326, -2326, -2326,
   -2326, -2326,   406,  1629,  1342,    95, -2326,    69, -2326, -2326,
      33, -2326, -2326, -2326, -2326,  1433,   -62, -2326,  1460,  1031,
    1031, -2326,  1222,  1237,    77,   -74, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,   509,
   -2326,    70, -2326,  1088, -2326, -2326,  1365, -2326, -2326, -2326,
    1342,  1293,  1442, -2326, -2326, -2326, -2326,   683,  1342,  1194,
    1482,   847, -2326,  1688,   861,  1262, -2326, -2326,  1263,  1608,
   -2326,  1433, -2326,  1031, -2326, -2326, -2326, -2326, -2326, -2326,
    1265,  1414, -2326,  1031, -2326,  -122, -2326,   181, -2326, -2326,
   -2326, -2326, -2326,   509, -2326,  1478,  1442, -2326, -2326, -2326,
     653, -2326, -2326, -2326,  1483, -2326, -2326, -2326, -2326, -2326,
    1471, -2326, -2326, -2326, -2326, -2326,  1288, -2326, -2326, -2326,
    1721,  1645,  1294, -2326, -2326,   509, -2326, -2326,    41, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,  1307, -2326,
    1562,  1630,  1299, -2326,  1744, -2326, -2326, -2326, -2326,  1221,
   -2326,  1674, -2326,  1253,  1308,  1366, -2326,   509,  1493,  1415,
    -215,  1363, -2326,  1367,  1342,  1716,    93,   463,    15, -2326,
    1266, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
    1344, -2326,  1512, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326,  1738,  1342, -2326,  1253, -2326,  1253, -2326, -2326,  1321,
     530, -2326, -2326,  1342, -2326,  1547, -2326, -2326,  1188, -2326,
   -2326,   953,  1342,  1342, -2326,  1342,  1342, -2326,  1721, -2326,
     346,  1342,  1493, -2326,  1388,  1285,  1253, -2326,  1461, -2326,
   -2326, -2326, -2326,  1286, -2326,  1287,    80,    40,  1342, -2326,
   -2326,   856, -2326, -2326, -2326,  -109,  1378,  1125,  1125, -2326,
    1487,  1487,  1489, -2326,  1125,  1342, -2326, -2326, -2326,  1442,
   -2326,  1410,  1548, -2326, -2326,  1357, -2326, -2326, -2326, -2326,
   -2326,  1125, -2326, -2326,   -10,   -10,  1808,   -10, -2326, -2326,
     -10,   358, -2326, -2326, -2326, -2326,  -178, -2326, -2326, -2326,
   -2326, -2326, -2326,   168, -2326,  1359,  1419,  1561,   678,  1364,
    5387, -2326,  1310, -2326, -2326,   240, -2326, -2326, -2326, -2326,
    1288, -2326, -2326, -2326, -2326, -2326,  1342, -2326, -2326,  1315,
   -2326,  1315, -2326, -2326,  1368,  1429,  1458, -2326,  1372, -2326,
    1373, -2326,  1747, -2326,  1748, -2326,  1060, -2326,  1705, -2326,
    1400, -2326, -2326, -2326,  1125,  1125,   800, -2326, -2326,  1287,
   -2326,  1380,  1441,  1448, -2326, -2326, -2326,    45,  1674,  1342,
    1228,  1228,  1342,    29,  1493,  1342,  1818, -2326,  1532, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,  1031,
     617, -2326,   113,  1336, -2326, -2326, -2326, -2326,  1533, -2326,
   -2326,  1287, -2326,  1393,  1453, -2326,  7022,   721,  1640,  1442,
    1343,   695,   695,  1345,  -100,  -109,  1442,  1349,  1342, -2326,
   -2326, -2326,   -24,  1031, -2326, -2326, -2326,  1400,    72,   818,
   -2326,  1287, -2326,  1399,   767,   597, -2326, -2326,  -143,   350,
     389,   424,   439,  1351, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326,  1472, -2326,   657, -2326, -2326, -2326, -2326,  1125,  1125,
    1636, -2326, -2326, -2326,   -55, -2326, -2326, -2326,  1342,   695,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,  1107,   445,
   -2326,  1361, -2326,    47, -2326,  1420, -2326, -2326, -2326, -2326,
    1345, -2326, -2326, -2326, -2326,  1606,    89,  1656,  1369,  1342,
   -2326, -2326,  1342, -2326, -2326,   204, -2326, -2326, -2326,  1260,
   -2326, -2326, -2326, -2326, -2326, -2326,  1753, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326,  1362, -2326, -2326,  1829,  1431, -2326,  1417,
    1436, -2326, -2326, -2326, -2326,  3487,   204,  1860, -2326,  1484,
    1484, -2326,  1122,  1577, -2326,   116,   116, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326,  1439, -2326,  1442,    66, -2326,
   -2326, -2326,  1442, -2326, -2326,  1475, -2326,   433,   433, -2326,
   -2326,  1538,  1384,    61,  3861,  2863, -2326,  1656,  1698,  1442,
    1445,  7820,  1432, -2326,  1125, -2326,   204, -2326,  1449,  1641,
   -2326,  1716, -2326, -2326, -2326, -2326,   116,  1444, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326,  1122, -2326, -2326, -2326, -2326,   143,  1539, -2326,   640,
   -2326, -2326, -2326, -2326,  1394, -2326,  4371, -2326, -2326,  1384,
    1450, -2326, -2326,  1522,  4655, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326,   554, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326,  1502, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326,   929, -2326, -2326,  1566,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326,  1402,  1442,  1431,
   -2326, -2326,  1793, -2326, -2326, -2326,  1446,  1451,  1454,  8107,
       6,     6,  1456,  1463,  1466, -2326,  1467,     6, -2326, -2326,
   -2326,  8003,  7820,  8003,  1469, -2326,  1454, -2326,    73,  1033,
     753, -2326,  1739, -2326, -2326, -2326, -2326, -2326,  1439, -2326,
    1473,  1474,  1477,  7820, -2326, -2326,   815, -2326,   204, -2326,
   -2326, -2326, -2326, -2326,  -109,  -109, -2326, -2326, -2326, -2326,
    1726, -2326, -2326,  1420,  1442, -2326, -2326,  1459, -2326,  1464,
   -2326,    94,    94,  1408,  1481, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326,  -151,  2171,  7820,   506,
     787,   524,  1253,   925,   644,  6493,  6579,  1659,   532,   873,
     925,  1125,  1488, -2326, -2326,  6579, -2326, -2326,   925,  1394,
    4888,  1125,  3190,  6579, -2326,   970,  4203,  1253,  1125,  1253,
    1125,    82,   587,  1125,  1253, -2326, -2326, -2326, -2326, -2326,
   -2326,  5652,  5782, -2326, -2326,  1394,    75,  1125,  1253,  2589,
    1125, -2326, -2326,  1704,  1616, -2326,  7820,  7820,  7204, -2326,
   -2326,  1439, -2326,  1438,  1440,  7820,  7820,  7820,  8107,  1443,
   -2326,  1017, -2326,  8107, -2326, -2326, -2326, -2326,  7820,  7307,
    7820,  7820,  7820,  7820,  7820,  7820, -2326,  8107,  7820,  1033,
    1536, -2326,  1480, -2326, -2326, -2326,  1916,  1539, -2326,   576,
   -2326, -2326, -2326, -2326,    27, -2326,  -203,   395,    49, -2326,
   -2326, -2326,  1815,   778,  1754,  1577,  1125,  8107, -2326,  1819,
   -2326,  5873, -2326, -2326, -2326, -2326, -2326,    48,   681, -2326,
     506, -2326,  1504, -2326,     6, -2326, -2326, -2326, -2326,  1820,
    2589, -2326,   524, -2326, -2326,  1253,   850,  1577,  1824, -2326,
     732, -2326,  1570, -2326, -2326,  1417,  1439,  1253,  1825,  1609,
     999,  1826,  6011, -2326,  6141,   155,  1215,  1234,  1827,   133,
    1468, -2326, -2326, -2326,  1828,    51, -2326, -2326, -2326,  5041,
   -2326, -2326,  1867,   554, -2326, -2326, -2326,   925, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326,  1525, -2326, -2326,   817,  1394,
   -2326, -2326,    35, -2326, -2326, -2326, -2326, -2326, -2326,  1505,
    6579, -2326,  1523,  1832,  1929, -2326, -2326, -2326, -2326,   970,
    1571, -2326,  1530, -2326,  8288,    26,   968,  1537,  1535, -2326,
     935, -2326,  1542,  1844,   956, -2326,  1791, -2326,  1846,  1609,
    1847,  1791,  1125,  1842,  1491, -2326,   779, -2326, -2326, -2326,
   -2326, -2326, -2326,  1724, -2326,   925, -2326,   -63, -2326,   420,
    1967, -2326,   106, -2326,  1850,  1109,   496,  1951,  1851,  1843,
   -2326, -2326,  1125,  1852,  6203,  1394, -2326, -2326,   712, -2326,
   -2326, -2326, -2326,  4106, -2326,  1809, -2326,  1264, -2326,  1853,
    1893,  1855,  1791, -2326, -2326, -2326,  1125,  1788,   195,    96,
     937,  1556,   282,  1557, -2326,   324, -2326, -2326,   254,  1558,
    1559,  1560,   326, -2326,  1439, -2326,  1563, -2326, -2326,   331,
    1564,   937, -2326,  1057,   753,   753, -2326, -2326, -2326,  1084,
    1565,   337,  1568,  1342, -2326,  -109,  1899,  1567,   729,  7079,
   -2326,  1342,  1602,  1709, -2326, -2326,  1915, -2326, -2326,   779,
    1830, -2326,   744,  2089,   -16,  1581, -2326,  1439, -2326, -2326,
   -2326,  6676,  1835, -2326,  1805, -2326,  1654, -2326,  1697,  1783,
   -2326, -2326,  1468, -2326,   850, -2326, -2326, -2326,  1146,   578,
    1125, -2326, -2326, -2326, -2326, -2326,  7820,  1768, -2326,  1432,
   -2326,  1253, -2326, -2326, -2326,  1814, -2326, -2326, -2326,  6579,
   -2326,  1749,    10,  1746,  1764,  1569,  1882,  1882,  1882,  1882,
   -2326, -2326,  6579,  6676, -2326, -2326, -2326, -2326,   532,   224,
   -2326,  1545, -2326,  1550, -2326, -2326, -2326, -2326,  1488, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
    4752, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326,    71, -2326,  1923,  1252,  1877, -2326,   779,   144, -2326,
   -2326,  1686, -2326, -2326,   101,  7820, -2326,  1610,   925, -2326,
   -2326,  6676,  1571,  1266,  1253, -2326, -2326, -2326, -2326, -2326,
    1888,  1125,   506, -2326,   249, -2326, -2326, -2326, -2326,  1609,
    4888, -2326, -2326, -2326,  1831, -2326, -2326,   619,  1930, -2326,
   -2326,  1125,  1930,  1611, -2326,  1439, -2326, -2326,   832,  1222,
   -2326, -2326,  5513, -2326,  2015,   947,   135, -2326, -2326, -2326,
    1342, -2326,   380,  6579, -2326,    42,  6232, -2326, -2326,  1125,
   -2326,  1868, -2326, -2326,  6676, -2326,  1442, -2326, -2326,   779,
   -2326, -2326, -2326, -2326, -2326,  1951,  1837, -2326, -2326,   249,
    1788, -2326,  1951, -2326, -2326, -2326,  1547,  7490,  1473,  7528,
    1473, -2326,  1125,  1473,  1473,  1473,  8107, -2326,   493,  1473,
   -2326,  7607,  1473,  1473, -2326,   204, -2326,  1616, -2326, -2326,
    1342,   695,   695,  1227, -2326, -2326, -2326, -2326,  1863,   -44,
   -2326,  1342, -2326,   481, -2326, -2326, -2326,  1470,  1342,  4888,
   -2326, -2326, -2326,  1766, -2326,  1442, -2326,  2012, -2326, -2326,
   -2326,  1125, -2326, -2326,  1125, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326,  1866,  1766,   142,  1342, -2326,  1572,
    1617, -2326, -2326, -2326,  1799,  1766,  1766,   761,  1822,  1766,
   -2326,  1910, -2326, -2326, -2326,  1573,  1576, -2326,   779,  1910,
    1840,  1652,  1777, -2326, -2326,  1803, -2326, -2326, -2326, -2326,
   -2326, -2326,   566, -2326,  1125,  1577,  1879,   903, -2326,   -15,
     -26,   925,  1632,  1654,   925, -2326,  1639,   506, -2326,   554,
   -2326, -2326,  1710,  1730, -2326,   821,  1342, -2326, -2326, -2326,
   -2326, -2326,  1800, -2326, -2326, -2326,  2070, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326,  1882,  1342, -2326,   827, -2326, -2326,
    1492,  1342, -2326, -2326, -2326, -2326,   -12, -2326,  1347, -2326,
     167,  1799, -2326, -2326, -2326, -2326,  1902,   903,  1904,    52,
   -2326, -2326, -2326, -2326,  2093, -2326,  1664,   220, -2326, -2326,
     224, -2326, -2326, -2326, -2326,  1616, -2326, -2326, -2326,  1987,
    1977,  1488, -2326, -2326, -2326, -2326, -2326, -2326, -2326,  1750,
    1488, -2326,  1668, -2326,  2072, -2326, -2326, -2326,   546, -2326,
     779,   756, -2326,    97,   195,    16,   925,   925,   903,  1919,
    1253,   346,   718,  1981, -2326, -2326, -2326,  2118, -2326,  1931,
   -2326, -2326, -2326, -2326,  1831, -2326, -2326, -2326, -2326,  1125,
    1996,  1814,  1159, -2326,  1627, -2326,  1628,   779,  1030, -2326,
     566, -2326, -2326, -2326,  6579,  1222,  1222,  1222,  1222,  1222,
    1222,  1222,  1222,   947, -2326,   501,  1814,   581, -2326,  1711,
    1711, -2326, -2326,  -162,  1125,   903,  1932,  1682, -2326,  1692,
    2131,  1125,   471,   619,  2140, -2326,  1643,  1342, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326,  1059, -2326, -2326, -2326,  1125,   524, -2326, -2326,   695,
     695,   124,  1384, -2326, -2326, -2326,  1125,  1125, -2326, -2326,
     147, -2326, -2326, -2326, -2326,   147, -2326, -2326,  1342,  1445,
    1342, -2326, -2326, -2326,  1342, -2326, -2326, -2326,   713, -2326,
   -2326, -2326,  1342,  1646,   147,   147, -2326, -2326,   147, -2326,
   -2326,  1856, -2326, -2326,  1910, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326,  1570,   -16, -2326, -2326,  1848,    43,  1957,
     903,   359, -2326, -2326, -2326, -2326, -2326,   -13,    78, -2326,
   -2326, -2326,   488, -2326, -2326, -2326, -2326, -2326, -2326,   147,
   -2326, -2326, -2326, -2326,   147,   577,   577, -2326, -2326, -2326,
   -2326, -2326,  1653,   925, -2326,   925,  5391, -2326,   490,    31,
     224, -2326, -2326, -2326,  2093,  1125, -2326, -2326, -2326, -2326,
    1660,  1405,    18,  1661,   359,   779, -2326, -2326,  2114, -2326,
   -2326, -2326, -2326,   756, -2326,  1976, -2326,  1342,  1547,  1849,
   -2326, -2326,   925, -2326,   925,   718, -2326, -2326, -2326,  1160,
   -2326, -2326,  1125,  6579,   948, -2326, -2326, -2326,  1873, -2326,
   -2326,  1907, -2326, -2326, -2326, -2326,  1628, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,   149,
   -2326,  1125, -2326, -2326, -2326,   731, -2326, -2326, -2326,  7820,
   -2326,  6579,  6579,  1706,  1838,  1570, -2326,   925, -2326,   359,
   -2326,  1857, -2326,   779, -2326,  2061,  1737, -2326,   930, -2326,
     878, -2326,  1643, -2326,  1125, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326,   750, -2326, -2326,   -14, -2326,  1125, -2326,
   -2326, -2326, -2326, -2326, -2326,   875, -2326,   524,   875, -2326,
   -2326, -2326,    76,  2137,  6502,  1910, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326,  1771,  1983, -2326, -2326, -2326,  1984, -2326,
   -2326, -2326, -2326, -2326, -2326,  1891, -2326,  1577, -2326, -2326,
   -2326, -2326,  1125, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326,  3588, -2326, -2326, -2326,   846, -2326, -2326,
   -2326,  1764, -2326,   903,  1836,   903,  1839, -2326, -2326,  6579,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,  1405,
   -2326,  2086, -2326,  1488, -2326, -2326, -2326,   359,  1284, -2326,
   -2326,  1284,   -51,  1125, -2326, -2326,   903, -2326, -2326,  1821,
   -2326,  2143,  1938,  1965,   650, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,   937, -2326,
   -2326, -2326, -2326, -2326,  1906,  1342,  1771,   903,  1714, -2326,
    2131, -2326,  1656,  2110,  1656,  1706, -2326, -2326, -2326, -2326,
    1912, -2326, -2326, -2326, -2326,   928, -2326,  1125, -2326,  1076,
   -2326, -2326,   124, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326,   147, -2326, -2326, -2326,   147,   -17, -2326, -2326,  1342,
   -2326, -2326, -2326, -2326,  1342, -2326, -2326, -2326, -2326, -2326,
      12, -2326, -2326,  2151, -2326, -2326,    21, -2326, -2326,  2205,
   -2326, -2326, -2326,  6502, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326,  1125, -2326, -2326, -2326, -2326,  1764, -2326,
     925, -2326,   925, -2326, -2326, -2326,  2166,  2107,  1284,  1284,
   -2326,  1758,  1758, -2326,  1881,  1253,   559, -2326,  1125, -2326,
   -2326,  6579, -2326,  1342,   688,  1959,  1961, -2326,  1962, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326,  1125, -2326, -2326, -2326,
   -2326,  1770, -2326,  1125,  1656, -2326,  1125, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326,   156,  1342,  1342,  1141,  1342,
   -2326, -2326, -2326, -2326, -2326, -2326,  1599, -2326, -2326, -2326,
    2117,   147,   147, -2326,  1342,   577,   577, -2326,   124, -2326,
   -2326, -2326,  1771,  1771,  6579, -2326,  1284, -2326,  6579,  6579,
    1342,  1253,  1253,  1889, -2326, -2326,  1742,  1125, -2326, -2326,
    1873, -2326, -2326, -2326, -2326, -2326, -2326, -2326,  1051, -2326,
   -2326,  1125, -2326, -2326, -2326,  1342,   124,   124, -2326,  2020,
    1342,  1342,   124, -2326,  1713,  1775, -2326, -2326,   524, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,   506,
    1253,  1342, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
    1370, -2326, -2326, -2326, -2326, -2326,  1892,  2124, -2326,   124,
   -2326, -2326, -2326,   124,   124, -2326, -2326,  2013,  1934,  1342,
    1442, -2326,  1342,  1577, -2326,  1342,  1342,  1125, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,    84,
   -2326, -2326,   765, -2326,   495, -2326, -2326, -2326, -2326, -2326,
    1267, -2326, -2326, -2326,   506, -2326,  1869,  1816,   105,  1616,
   -2326, -2326, -2326, -2326, -2326,  2006, -2326,   592,  1431,  8186,
    8186,  1812,  2120,  2045,  1960,  1960,  1381, -2326,   -88,   -88,
   -2326,   765, -2326, -2326,  1958, -2326, -2326,   -88,   -88, -2326,
   -2326, -2326,   550, -2326,  1125, -2326,  1352, -2326, -2326, -2326,
      86, -2326, -2326,  1442,  1442, -2326, -2326,  1445,  1570,  7917,
   -2326, -2326,  1121,  1247, -2326, -2326,  1254, -2326, -2326, -2326,
   -2326,    14,    14, -2326, -2326, -2326, -2326, -2326,  8186, -2326,
    -133,  -133,  1960,  1960, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326,   695, -2326, -2326, -2326, -2326,  1908,
    1015,    86, -2326, -2326, -2326, -2326,  1793, -2326,  1616,  1125,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,    28,
      90,  2202, -2326, -2326, -2326,  -133, -2326, -2326,  1927,  1933,
   -2326, -2326,  1616, -2326, -2326,  1944,  1125, -2326,  1833,   103,
   -2326, -2326, -2326,  1940, -2326, -2326, -2326, -2326,  8186, -2326,
   -2326, -2326,   549, -2326, -2326,  1442, -2326, -2326, -2326, -2326,
    1935, -2326, -2326, -2326, -2326, -2326, -2326,  1253, -2326, -2326
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
    1830,    46,     0,     0,     0,  1875,  1830,  1830,  1830,     0,
       0,     0,     0,     0,  1830,     0,     0,  1807,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     151,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     178,     0,     0,    23,  1831,     0,     0,  1552,   126,  1830,
    1830,  1876,  1830,     0,     0,     0,     0,  1830,  1830,    60,
      82,     0,    54,    98,  1808,     0,  1830,     0,    99,   102,
       0,   150,     0,   182,    20,    13,    29,    37,    40,    42,
      41,  1869,    39,  1830,     0,     0,     0,  1621,   172,  1545,
     170,   175,   177,     0,     0,    62,    84,   174,    56,  1553,
     153,   154,  1832,   157,  1626,  1245,  1244,   116,   120,   123,
    1861,  1830,     0,   100,   152,   179,   180,    38,  1870,    36,
       0,  1634,  1630,  1635,  1633,  1631,  1636,  1632,   161,   162,
     164,   173,   168,  1921,  1922,     0,   166,     0,  1806,     0,
       0,     0,  1830,  1943,    80,    61,  1805,    66,    68,    69,
      70,    71,  1805,     0,  1830,     0,    83,     0,    87,    55,
      58,   155,  1834,  1833,   158,     0,  1861,  1864,  1863,     0,
       0,   117,   121,     0,     0,   268,   183,   132,   131,   146,
     142,   147,   128,   145,   143,   129,   130,   144,   127,   133,
     134,   136,   163,     0,  1904,   167,     0,  1622,   171,  1942,
    1830,     0,     0,    65,    67,    63,    81,  1805,  1830,     0,
       0,    92,    93,    94,     0,     0,    85,    88,     0,     0,
    1627,   156,   159,     0,  1862,   124,   118,   119,   122,   181,
       0,     0,  1703,     0,   280,   276,    24,     0,   271,   273,
     274,   135,   138,     0,   165,     0,     0,  1941,    74,    64,
       0,  1546,    73,    89,     0,    90,    91,    97,    86,    57,
       0,   160,   125,   186,  1704,   184,  1813,   277,   278,   279,
    1795,   287,     0,   269,   272,     0,   137,   169,     0,    77,
      79,    78,    75,    76,    95,    59,   187,  1814,  1888,  1796,
    1815,     0,   289,   270,   139,   140,  1929,  1930,    72,  1871,
    1889,  1809,  1816,     0,     0,     0,   291,     0,  1845,  1905,
    1896,     0,   246,     0,  1830,  1805,  1835,   248,     0,  1908,
    1903,   234,   185,   233,   188,   189,   190,   191,   192,   193,
       0,   194,     0,   195,   245,   196,   197,   198,   199,   200,
     201,  1801,  1830,  1810,     0,  1531,   275,  1529,   288,     0,
      25,   141,  1846,  1830,  1906,  1835,  1897,  1898,   213,  1907,
     249,  1871,  1830,  1830,  1836,  1830,  1830,   262,  1795,   263,
       0,  1830,  1845,  1802,     0,     0,   281,   282,   285,  1530,
     290,   297,   298,   349,   292,   352,     0,     0,  1830,   215,
     214,   211,  1872,   248,   244,     0,     0,     0,     0,   261,
    1865,  1865,     0,   264,     0,  1830,   247,   230,   283,     0,
     284,     0,   508,   293,  1686,     0,   294,   223,   224,   222,
     221,     0,   207,   208,   218,   218,     0,   218,   210,   209,
     218,     0,  1551,  1550,   250,   251,   252,   260,  1866,   265,
     266,   267,   231,     0,   286,     0,     0,   511,   354,     0,
       0,   358,     0,   296,   299,  1689,   219,   204,   220,   205,
    1813,   206,   203,   216,   202,   217,  1830,   254,   256,   240,
     239,   240,   236,   350,     0,     0,   514,   357,     0,   355,
       0,   364,   365,   359,     0,   362,  1830,  1940,     0,   256,
     227,  1690,   212,   255,   253,     0,     0,   238,   237,   352,
     509,     0,     0,   644,   356,   361,   398,   367,  1809,  1830,
       0,     0,  1830,  1809,  1845,  1830,  1793,   295,     0,   300,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,  1939,  1689,     0,   225,   258,   259,   257,     0,   243,
     351,   352,   512,     0,     0,    26,  1830,  1797,     0,     0,
       0,  1832,  1832,     0,     0,     0,     0,     0,  1830,   345,
    1794,   346,     0,   344,   347,   301,   302,   227,     0,     0,
     510,   352,   515,     0,   707,     0,   495,   422,  1877,  1877,
    1877,  1877,  1877,  1899,   423,   458,   460,   426,   427,   428,
     429,   430,   431,   454,   452,   453,   455,   456,   461,   459,
     432,  1873,   457,     0,   433,   419,   434,   435,     0,     0,
    1880,   437,   438,   436,   491,   440,   441,   439,  1830,  1832,
     399,   400,   401,   402,   403,   404,   420,   424,   425,   405,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
    1798,     0,   395,     0,   368,   323,   343,  1931,  1932,  1549,
     332,  1547,  1924,  1923,   325,  1843,  1807,  1819,     0,  1830,
     329,   328,  1830,   348,   226,     0,   148,   149,   229,     0,
    1927,  1928,   241,   513,   517,   645,     0,    27,   751,   506,
     507,  1878,   451,   450,   443,   442,   449,   448,   447,   446,
     445,   444,  1900,     0,  1874,   489,   475,   469,   414,  1614,
     504,  1881,   492,   493,   490,     0,     0,   416,   418,  1717,
    1717,   397,     0,  1854,  1645,     0,     0,  1641,  1646,  1644,
    1642,  1647,  1643,   396,   369,  1637,  1639,     0,   313,  1548,
    1844,   334,     0,   316,  1820,  1882,   342,     0,     0,   228,
     242,   516,   647,   709,     0,     0,   494,  1819,   471,     0,
    1892,     0,  1612,  1613,     0,   421,   496,   498,   500,     0,
     415,  1805,   462,   463,  1638,  1855,     0,     0,   378,   374,
     377,   376,   375,   390,   386,   388,   389,   391,   387,   392,
     393,   394,   371,   382,   383,   384,   379,   380,   381,   373,
     370,     0,   324,   315,   314,   312,   333,  1807,  1883,   321,
     330,   327,   331,   326,     0,   518,     0,   651,   646,   648,
       0,   712,   710,   728,     0,   805,   878,   887,   893,   900,
     932,   936,   950,   945,   951,   952,   960,  1006,  1015,  1018,
    1044,  1055,  1058,  1061,  1053,  1067,  1074,  1096,  1100,  1136,
    1138,  1142,     0,  1148,  1162,  1186,  1204,  1205,  1208,  1209,
    1214,  1222,  1223,  1236,  1270,  1288,     0,  1321,  1333,  1341,
    1343,   733,  1347,  1350,  1356,  1407,   753,   754,   755,   756,
     757,   758,   759,   760,   762,   761,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   752,     0,     0,   469,
     470,  1893,   473,  1665,  1660,  1666,     0,     0,  1672,     0,
    1518,  1520,     0,     0,     0,  1663,     0,  1522,  1664,  1667,
    1668,     0,     0,     0,     0,  1662,  1672,  1661,  1502,  1500,
    1507,  1510,  1512,  1515,  1579,  1517,  1576,  1610,  1577,  1578,
    1669,     0,     0,     0,  1611,   505,   502,   499,     0,   417,
    1718,   372,   385,  1640,     0,     0,   335,   336,   337,   338,
       0,   317,  1818,   323,     0,  1532,   519,     0,   652,     0,
     649,   717,   717,     0,     0,  1720,  1721,  1722,  1723,  1724,
    1725,  1726,  1727,  1728,  1729,  1730,  1731,  1732,  1733,  1769,
    1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,  1779,
    1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,  1734,
    1735,  1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,  1744,
    1745,  1746,  1747,  1748,  1749,  1750,  1751,  1752,  1753,  1754,
    1755,  1756,  1757,  1758,  1759,  1760,  1761,  1762,  1763,  1764,
    1719,  1765,  1766,  1767,  1768,   804,     0,     0,     0,     0,
     903,     0,     0,     0,     0,     0,     0,     0,  1463,  1046,
       0,     0,  1894,   923,   922,     0,  1066,  1463,     0,     0,
       0,     0,     0,     0,   803,     0,  1174,     0,     0,     0,
       0,     0,     0,     0,     0,  1317,  1320,  1308,  1318,  1319,
    1310,     0,     0,  1342,  1340,     0,   751,     0,     0,     0,
       0,   476,   472,   477,  1856,   480,     0,     0,     0,  1658,
    1580,  1581,  1582,     0,     0,     0,     0,     0,     0,     0,
    1514,     0,  1513,     0,  1659,  1503,  1504,  1623,     0,     0,
       0,     0,     0,     0,     0,     0,  1648,     0,     0,     0,
       0,   497,     0,   501,   341,   340,  1799,  1807,   322,     0,
     654,   655,   650,  1804,   717,   714,   720,     0,   717,   729,
     704,   827,   876,   830,   826,  1854,     0,     0,  1570,   885,
    1564,   883,  1559,  1561,  1562,  1563,   888,     0,  1691,  1542,
     894,   895,     0,  1538,  1540,  1539,   906,   904,   905,   930,
       0,  1592,   933,   934,  1591,   937,   940,  1854,   948,  1616,
       0,  1524,  1705,  1556,  1615,  1620,  1557,     0,   958,  1871,
    1641,  1004,  1428,   969,   973,  1559,     0,  1561,  1013,     0,
     907,  1016,  1025,  1024,  1042,     0,  1021,  1023,  1462,     0,
    1048,  1052,  1050,  1053,  1051,  1045,  1056,  1057,  1554,  1059,
    1060,  1895,  1062,  1536,  1054,  1890,  1461,  1075,  1077,  1097,
    1098,  1101,     0,  1103,  1104,  1105,  1137,  1274,  1607,  1608,
       0,  1139,     0,  1146,     0,  1155,  1152,  1154,  1153,  1149,
    1156,  1176,  1542,  1163,  1174,  1165,     0,  1172,     0,  1593,
    1539,  1595,     0,  1202,  1697,  1206,  1410,  1527,  1212,  1871,
    1220,  1410,     0,  1234,  1227,  1528,     0,  1535,  1237,  1238,
    1239,  1240,  1241,  1242,  1263,  1243,  1266,     0,  1533,     0,
       0,  1606,  1620,  1271,  1306,  1293,  1311,  1803,  1331,     0,
    1324,  1326,     0,  1338,     0,  1344,  1345,   739,   745,   734,
     735,   736,   738,     0,  1348,     0,  1351,  1353,  1594,  1373,
    1359,  1420,  1410,   478,   480,  1857,     0,   484,   479,  1502,
    1500,     0,  1502,     0,  1674,  1502,  1519,  1521,  1502,     0,
       0,     0,  1502,  1573,  1574,  1575,     0,  1523,  1516,  1502,
       0,  1501,  1624,     0,  1506,  1505,  1509,  1508,  1511,     0,
       0,  1502,     0,  1830,  1800,     0,   319,     0,  1830,  1879,
     715,  1830,     0,   726,   718,   719,   730,   877,   806,  1800,
     840,   831,     0,     0,     0,     0,  1565,  1566,  1567,   886,
     879,     0,     0,  1560,  1693,  1692,   891,   896,   898,     0,
     931,   901,   907,   935,   940,  1933,  1934,   938,     0,   941,
       0,   949,   946,  1916,  1915,  1525,     0,  1707,  1526,  1618,
    1619,   955,   956,   959,   953,  1455,  1005,   961,   748,     0,
     967,  1430,     0,   984,     0,   978,  1428,  1428,  1428,  1428,
    1014,  1007,     0,     0,   908,  1017,  1043,  1019,  1463,  1463,
    1020,  1027,  1028,   748,  1487,  1488,  1489,  1483,  1894,  1475,
    1495,  1498,  1497,  1499,  1491,  1482,  1481,  1486,  1485,  1484,
    1490,  1470,  1474,  1492,  1494,  1496,  1472,  1473,  1469,  1471,
    1464,  1465,  1476,  1477,  1478,  1479,  1480,  1468,  1049,  1047,
    1555,  1064,  1891,   748,  1079,     0,  1099,     0,  1126,  1110,
    1102,  1107,  1108,  1109,  1278,     0,  1609,     0,     0,  1147,
    1143,     0,  1156,  1903,     0,  1164,  1170,  1171,   748,  1167,
    1463,     0,     0,  1175,     0,  1203,  1187,  1698,  1699,  1871,
       0,  1207,  1213,  1210,  1189,  1221,  1215,  1217,  1229,  1235,
    1224,     0,  1229,     0,  1587,  1588,  1264,  1267,     0,     0,
    1534,  1247,     0,  1246,     0,     0,  1618,  1307,  1289,  1295,
    1830,  1296,  1291,     0,  1309,     0,     0,  1332,  1322,     0,
    1325,     0,  1339,  1334,     0,  1346,   746,   744,   737,     0,
    1354,  1355,  1352,  1374,  1357,  1803,     0,  1421,  1408,  1412,
     484,   474,  1803,   467,   482,   483,  1835,     0,  1669,     0,
    1669,  1673,     0,  1669,  1669,  1669,     0,  1652,     0,  1669,
    1625,     0,  1669,  1669,  1902,     0,   339,  1856,   318,   523,
    1830,  1832,  1832,  1840,   555,   522,   526,   527,     0,     0,
     669,  1830,   659,  1899,   660,  1910,  1909,     0,  1830,     0,
     672,   663,   668,  1849,   664,     0,   667,   674,   671,   665,
     670,     0,   675,   666,     0,   686,   680,   684,   683,   681,
     685,   656,   687,   682,     0,  1849,     0,  1830,   727,     0,
       0,   705,   836,   841,   842,  1849,  1849,   834,   835,  1849,
     822,  1423,  1912,  1911,   819,   811,   813,   814,     0,  1423,
       0,     0,     0,   828,   817,     0,   825,   808,   824,   809,
    1584,  1583,     0,  1569,     0,  1854,  1616,  1433,   884,  1620,
    1557,     0,  1695,   891,     0,   889,     0,     0,  1541,   918,
     939,   944,     0,     0,  1558,  1433,  1830,  1706,  1617,   957,
     748,   954,  1457,  1429,   749,   971,  1799,   748,  1427,   977,
     976,   975,   974,   985,  1428,  1830,   988,     0,   991,   992,
       0,  1830,   995,   996,   997,   998,     0,   999,  1428,   986,
       0,   842,   964,   965,   962,   963,     0,  1433,     0,   914,
    1022,  1037,  1039,  1038,  1032,  1034,  1040,  1463,  1029,  1026,
    1463,  1030,  1493,  1466,  1467,  1856,  1063,  1537,   748,  1071,
    1072,  1894,  1087,  1088,  1090,  1092,  1093,  1089,  1091,  1082,
    1894,  1078,     0,  1127,     0,  1129,  1128,  1130,  1112,  1122,
       0,     0,  1106,  1280,     0,  1821,     0,  1140,  1433,     0,
       0,     0,  1158,  1168,  1181,  1177,  1182,  1178,  1183,     0,
    1173,  1417,  1416,  1180,  1189,  1411,  1603,  1604,  1605,     0,
       0,  1455,     0,   748,     0,  1228,     0,     0,     0,  1265,
       0,  1269,  1268,  1261,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1249,  1250,  1700,  1455,     0,  1312,  1886,
    1886,  1327,  1328,  1329,     0,  1433,     0,     0,   747,     0,
    1687,     0,  1329,  1217,  1789,   468,     0,  1830,  1683,  1656,
    1685,  1657,  1681,  1653,  1654,  1655,  1679,  1676,  1677,  1651,
    1670,     0,  1649,  1650,   503,     0,     0,  1958,  1959,  1832,
    1832,     0,   520,   524,   532,   528,   530,   531,   533,   535,
       0,   657,   658,   661,   662,     0,   689,  1850,  1830,  1892,
    1830,   690,   688,   702,  1830,   721,   722,   725,     0,   716,
     731,   733,  1830,   844,     0,     0,   832,   833,     0,   748,
     823,  1425,   810,   812,  1423,   820,   815,   816,   829,   818,
    1586,  1568,  1585,  1705,     0,   748,   880,  1435,  1618,  1619,
    1433,     0,  1694,   890,   892,   899,   897,   926,  1828,   943,
     942,   947,     0,  1456,   748,  1454,   751,  1431,   966,     0,
     989,   990,   993,   994,     0,  1459,  1459,   987,   968,   980,
     981,   979,   982,     0,  1008,     0,   909,   910,   720,     0,
    1463,  1463,  1036,   748,  1033,     0,  1070,   748,  1073,  1068,
       0,     0,  1094,     0,     0,     0,  1123,  1125,     0,  1118,
    1132,  1119,  1120,  1111,  1114,  1132,  1272,  1830,  1835,     0,
    1822,  1279,  1141,  1144,     0,  1158,  1157,  1161,  1150,     0,
    1169,  1166,     0,     0,  1191,  1190,   748,  1211,  1443,  1216,
    1218,     0,  1230,  1463,  1463,  1225,  1231,  1248,  1260,  1262,
    1252,  1253,  1254,  1258,  1255,  1259,  1256,  1257,  1251,  1701,
    1305,     0,  1302,  1303,  1297,     0,  1290,  1938,  1937,     0,
    1887,  1315,  1315,  1438,     0,  1705,  1335,     0,   740,     0,
    1688,  1360,  1361,     0,  1364,  1367,  1371,  1365,  1455,  1790,
       0,   488,   485,   486,     0,  1671,   320,   525,  1841,  1842,
    1628,  1629,   542,   537,   541,   540,   363,   556,   529,   534,
    1598,   679,  1596,  1597,   678,   695,   701,     0,   698,   723,
     724,   733,   751,     0,     0,  1423,   837,   839,   838,  1424,
     748,  1422,   821,  1433,  1558,  1434,   748,  1432,  1617,   881,
    1696,  1589,  1590,  1919,  1920,   928,   748,  1854,  1829,   925,
     924,   920,     0,  1709,  1710,  1711,  1712,  1713,  1714,  1715,
    1716,  1708,  1458,     0,  1001,  1000,  1003,     0,  1601,  1602,
    1002,     0,   972,  1433,  1524,  1433,  1524,   911,   912,     0,
     916,   915,   917,  1035,  1041,  1031,  1065,  1069,  1080,  1083,
    1084,  1811,  1076,  1894,  1081,  1132,  1132,     0,  1117,  1115,
    1116,  1121,  1282,     0,  1276,  1823,  1433,  1151,  1160,     0,
    1184,     0,     0,  1198,     0,  1447,   748,  1442,  1219,   748,
     748,  1232,  1304,  1294,  1298,  1299,  1300,  1301,  1292,  1313,
    1316,  1314,   748,  1323,  1440,  1830,  1433,  1433,   742,  1349,
    1687,  1363,  1819,  1369,  1819,  1438,   748,   748,  1409,  1419,
    1450,  1451,  1418,  1415,  1414,  1837,   487,   481,  1543,   536,
    1925,  1926,   538,   365,   557,   693,   691,   694,   692,   696,
     697,     0,   673,   699,   700,     0,   751,   843,   848,  1830,
     850,   851,   852,   875,  1830,   853,   854,   855,   856,   857,
       0,   858,   859,   861,   862,   863,     0,   864,   849,  1791,
     865,   874,   868,   845,   846,   867,   807,  1426,   882,  1436,
     748,   902,   927,     0,   919,  1935,  1936,  1460,   983,  1010,
       0,  1009,     0,   913,  1085,  1812,     0,     0,  1113,  1124,
    1132,  1826,  1826,  1133,     0,     0,  1285,  1281,  1275,  1145,
    1159,     0,  1192,  1830,  1455,     0,     0,  1193,     0,  1197,
    1448,  1226,  1233,  1439,   748,  1437,     0,  1337,  1336,  1375,
     741,     0,  1362,     0,  1819,  1366,     0,  1358,  1452,  1453,
    1449,  1838,  1839,  1413,  1544,     0,  1830,  1830,     0,  1830,
     543,   544,   545,   546,   547,   548,     0,   559,   676,   677,
       0,     0,     0,   866,  1830,  1459,  1459,  1792,     0,   847,
     929,   921,  1433,  1433,     0,  1095,  1131,  1827,     0,     0,
    1830,  1283,     0,     0,  1273,  1277,     0,     0,  1188,  1201,
    1445,  1446,  1200,  1196,  1194,  1195,  1441,  1330,  1383,   743,
    1368,     0,  1372,  1945,  1944,  1830,     0,     0,  1947,     0,
    1830,  1830,     0,   539,  1879,     0,   870,   869,     0,   872,
     871,   873,  1599,  1600,  1012,  1011,  1086,  1135,  1134,     0,
    1286,  1830,  1463,  1199,  1444,  1406,  1405,  1384,  1376,  1377,
    1791,  1378,  1379,  1380,  1381,  1404,     0,     0,  1370,     0,
     554,   550,  1946,     0,     0,   549,   610,  1824,   625,  1830,
       0,   609,  1830,  1854,   558,  1830,  1830,     0,   564,   566,
     575,   567,   569,   572,   560,   561,   562,   571,   573,     0,
     576,   563,   619,   568,     0,   570,   574,   565,  1913,  1914,
    1851,   732,   860,  1284,     0,  1185,     0,  1884,     0,  1856,
     551,   553,   552,  1825,   642,   627,   618,     0,   469,     0,
       0,     0,     0,     0,  1847,  1847,     0,  1463,     0,     0,
     617,   619,   621,   628,     0,   629,   637,   638,     0,   640,
    1852,  1853,   631,  1287,     0,  1885,     0,  1402,  1401,  1400,
       0,   626,   597,     0,     0,   593,   594,  1892,  1705,   599,
    1571,  1949,     0,     0,  1951,  1953,     0,  1957,  1955,   577,
     582,  1858,  1858,   579,   583,   578,   584,   643,     0,  1848,
     611,   611,  1847,  1847,   604,   623,   624,   620,   622,   639,
     636,   635,   633,   634,  1832,   632,  1403,  1918,  1917,  1867,
    1396,  1390,  1391,  1393,   595,   596,   473,   641,  1856,     0,
     598,  1572,  1948,  1952,  1950,  1956,  1954,  1860,  1859,   585,
     589,     0,   615,   613,   605,   611,   614,   607,     0,     0,
     630,  1868,  1856,  1399,  1394,  1397,     0,  1392,   465,     0,
     601,   588,   580,   586,   592,   591,   581,   590,     0,   612,
     606,   608,     0,  1398,  1395,     0,   464,   603,   600,   602,
       0,   616,  1389,  1386,  1388,  1387,  1382,  1385,   466,   587
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2326, -2326, -2326, -2326, -2326,  2253, -2326, -2326, -2326,  1140,
   -2326,  2216, -2326,  2173, -2326, -2326,  1447, -2326, -2326, -2326,
    1428, -2326, -2326,  1412,  2241, -2326, -2326,  2142, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,  2068,
    1048, -2326, -2326, -2326, -2326, -2326,  2126, -2326, -2326, -2326,
   -2326,  2065, -2326, -2326, -2326, -2326, -2326, -2326,  2200, -2326,
   -2326, -2326, -2326,  2056, -2326, -2326, -2326, -2326, -2326,  2040,
   -2326, -2326,   946, -2326, -2326, -2326, -2326, -2326,  2132, -2326,
   -2326, -2326, -2326,  2103, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326,  1089, -2326, -2326, -2326,
    1666, -2326, -2326, -2326, -2326, -2326, -2326,  1765, -2326,  1874,
   -2326, -2326, -2326,  1782,  1751, -2326,  1755, -2326, -2326, -2326,
   -2326,   378, -2326, -2326,  2004, -2326, -2326, -2326, -2326, -2326,
    1872, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326,  1259, -2326, -2326, -2326,
    1507, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326,  -306, -2326, -2326,  1795, -2326,
    -768,  -839, -2326, -2326, -2326,   569, -2326, -2326, -2326, -2326,
      88, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -1431,   840,
    1549,  -494,   599, -1430, -2326, -2326, -2326,  -961, -2326,  -434,
   -2326, -2326,   889, -2326,   401,   627, -2326,   109, -1428, -2326,
   -2326, -1426, -2326, -1422, -2326, -2326,  1506, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326,   302, -1269, -2326, -2326,  -999, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -1857, -2326, -2326, -2326, -2326,  -346, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326,  -351, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326,  1462, -2326, -2326, -2326, -2142,
      91, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326,  1275,   295, -2326,   226, -2326, -2326, -2326, -2326,
   -1854, -2326, -2326, -2326, -2326, -2326, -2326, -2326,  -572, -2326,
   -2326,  -707, -2326,  1527, -2326, -2326, -2326, -2326, -2326, -2326,
    1085,   558,   560, -2326,   477, -2326, -2326,   -83,   -66, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,   533, -2326,
   -2326, -2326,  1087, -2326, -2326, -2326, -2326, -2326,   843, -2326,
   -2326,   242, -2326, -2326, -1279, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326,   845, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326,   822, -2326, -2326, -2326, -2326, -2326,    63, -1792,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326,   804, -2326, -2326,   807, -2326, -2326,   480,   251,
   -2326, -2326, -2326, -2326, -2326,  1050, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,    56,   775,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326,   770, -2326, -2326,   233, -2326,   464, -2326, -2326, -1443,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326,  1025,   766,   234, -2326, -2326, -2326, -2326,
   -2326, -2326, -2325,  1026, -2326, -2326, -2326,   229, -2326, -2326,
   -2326,   448, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,   400, -2326,
   -2326, -2326, -2326, -2326, -2326,   743,   222, -2326, -2326, -2326,
   -2326, -2326,  -158, -2326, -2326, -2326, -2326,   423, -2326, -2326,
   -2326,  1004, -2326,  1005, -2326, -2326,  1226, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326,   199, -2326, -2326, -2326,
   -2326, -2326,   993,   411, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326,    34, -2326,   415, -2326,
   -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326,  -343, -2326, -2326, -2326, -2326, -2326, -2326, -2326, -2326,
   -2326,  -294, -2326,   716, -2326, -2326, -1685, -2326, -2326,  -571,
   -2326, -2326, -1768, -2326, -2326,    36, -2326, -2326, -2326, -2326,
     -58, -2204, -2326, -2326,    32, -1873, -2326, -2326, -1851, -1584,
   -1078, -1467, -2326, -2326,   829, -1244,   227,   228,   235,   236,
     221,   182,  -753,   325,   377, -2326,   680,  1171, -1417, -1093,
     206,  1035, -1579,  -391,  -261, -2326, -1341, -2326, -1052, -1372,
     919, -2326,   -96,  2109, -2326,  1715,  -563,    37,  2261, -1087,
   -1089,   213,  -637, -2326, -1120, -1425, -2326,   474, -1328, -1936,
   -1111,  -367, -1653, -2326, -2326,   687, -1134, -2326,  -877,   457,
    -642, -2326, -2326,  -101, -1216,  -779,  -116,  2146,  -920,  2176,
    -661,  1524,  -529,  -556, -2326, -2326, -2326,   172,  1424, -2326,
   -2326,   365, -2326, -2326, -2326, -2326,  1841, -2326, -2326, -2326,
   -2326, -2326, -2326, -1998, -2326, -2326,  1662, -2326, -2326,  -155,
   -2326,  2009, -2326, -1194, -2326, -1321,  -209,  -632,   913, -2326,
    1921, -1472, -2326,  -784, -2326, -2326,    -7, -2326,     4,  -590,
    -361, -2326, -2326, -2326,  -222, -1345,  -270, -2326, -1215, -1155,
    -266,  2221,  1988, -2326, -2326, -1127, -2326, -2326,  1104, -2326,
   -2326, -2326,   482, -2326,   332, -1973, -1495, -2326, -2326, -2326,
    -139, -2326,   540, -1419, -2271, -2326, -2326, -2326, -2326,  -183,
   -2326, -2326,  1727, -2326,  1886, -2326, -2326, -2326,   854, -2326,
   -2287,  -202, -2326, -2326, -2326, -2326, -2326, -2326
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
     676,   677,   678,   679,  2610,  2786,   680,   800,   969,  1175,
     798,  1414,  1417,  1418,  1686,  1683,  2202,  2203,   681,   682,
     754,   683,   684,   685,  1016,   806,   807,  1211,   686,   687,
     497,   591,   526,   621,   553,   724,   791,   855,  1219,  1458,
    1715,  1716,  2005,  2006,  2007,  2008,  1717,  2212,  2213,  2369,
    2490,  2491,  2492,  2493,  2494,  2495,  2002,  2217,  2497,  2554,
    2614,  2615,  2699,  2772,  2776,  2616,  2685,  2617,  2740,  2788,
    2618,  2619,  2754,  2755,  2620,  2621,  2622,  2660,  2661,  2646,
    2662,  2623,  2624,  2724,  2725,  2665,  2666,  2667,  2625,  2626,
    2627,   595,   792,   858,   859,   860,  1221,  1459,  1751,  2379,
    2380,  2381,  2385,  1752,  1753,   727,  1466,  2031,   728,   863,
    1042,  1041,  1224,  1225,  1226,  1463,  1759,  1044,  1761,  2231,
    1166,  1399,  1400,  2348,  2470,  1401,  1402,  1967,  1823,  1824,
    2076,  1403,   795,   916,   917,  1116,  1232,  1233,  1787,  1470,
    1525,  1767,  1768,  1764,  2033,  2235,  2413,  2414,  2415,  1468,
     918,  1117,  1239,  1482,  1480,   919,  1118,  1246,  1805,   920,
    1119,  1250,  1251,  1807,   921,  1120,  1259,  1260,  1535,  1859,
    2096,  2097,  2098,  2067,  1135,  2261,  2255,  2421,  1491,   922,
    1121,  1262,   923,  1122,  1265,  1497,   924,  1123,  1268,  1502,
     925,   926,   927,  1124,  1278,  1511,  1514,   928,  1125,  1281,
    1282,  1519,  1283,  1523,  1851,  2091,  2282,  1834,  1848,  1849,
    1517,   929,  1126,  1288,  1531,   930,  1127,  1291,   931,  1128,
    1294,  1295,  1296,  1540,  1541,  1542,  1869,  1543,  1864,  1865,
    2102,  1537,   932,  1129,  1305,  1136,   933,  1130,  1306,   934,
    1131,  1309,   935,  1132,  1312,  1876,   936,   937,  1137,  1880,
    2109,   938,  1138,  1317,  1584,  1889,  2112,  2299,  2300,  2301,
    2302,   939,  1139,  1319,   940,  1140,  1321,  1322,  1590,  1591,
    1901,  1592,  1593,  2123,  2124,  1898,  1899,  1900,  2117,  2308,
    2443,   941,  1141,   942,  1142,  1331,   943,  1143,  1333,  1600,
     944,  1145,  1339,  1340,  1604,  2138,   945,  1146,  1343,  1608,
    2141,  1609,  1344,  1345,  1346,  1915,  1917,  1918,   946,  1147,
    1353,  1930,  2323,  2454,  2528,  1616,   947,   948,  1148,  1355,
     949,   950,  1149,  1358,  1623,   951,  1150,  1360,  1931,  1626,
     952,   953,  1151,  1363,  1632,  1934,  2155,  2156,  1630,   954,
    1152,  1368,   160,  1644,  1369,  1370,  1953,  1954,  1371,  1372,
    1373,  1374,  1375,  1376,   955,  1153,  1326,  2312,  1594,  2448,
    1903,  2126,  2446,  2524,   956,  1154,  1384,  1956,  1652,  2171,
    2172,  2173,  1648,   957,  1386,  1654,  2339,  1160,   958,  1161,
    1388,  1389,  1390,  2183,  1658,   959,  1162,  1393,  1663,   960,
    1164,   961,  1165,  1395,   962,  1167,  1404,   963,  1168,  1406,
    1672,   964,  1169,  1409,  1676,  2191,  2192,  1972,  2194,  2353,
    2475,  2355,  1674,  2471,  2538,  2578,  2579,  2580,  2796,  2581,
    2731,  2732,  2766,  2582,  2679,  2583,  2584,  2585,   965,  1170,
    1411,  1621,  1973,  1923,  2358,  1678,  2040,  2041,  2241,  1520,
    1521,  1828,  2056,  2057,  2247,  2343,  2344,  2465,  2147,  2529,
    2148,  2327,  2359,  2360,  2361,  1821,  1822,  2075,  2276,  1315,
    1316,  1298,  1299,  1570,  1571,  1572,  1573,  1574,  1575,  1576,
     998,  1198,  1420,  1000,  1001,  1002,  1003,  1004,  1270,  1505,
    1356,  1364,   396,   397,  1036,  1377,  1378,  1581,  1347,  1253,
    1254,  2367,   483,   302,   700,   701,   484,    98,   153,  1307,
    1272,  1241,  1483,  2689,  1432,  1005,  1792,  2051,  2125,  2250,
    1263,  1348,  2221,  2561,  2277,  1925,  2222,  1327,  1381,  1243,
    1007,  1273,  1274,   749,   802,   803,  2223,   272,  2215,   180,
    1244,   775,   776,  1245,  1010,  1011,  1012,  1206,  1179,  1440,
    1436,  1429,  1421,  1423,   502,  2193,   540,  1486,  1803,  2062,
    1619,  2175,   283,  1508,  1817,  2271,   812,  1115,  2200,  2508,
     611,   340,   693,  1472,   424,  1227,   203,   115,   394,  2436,
     338,   353,  1034,   785,  2131,  2644,  2518,  2262,    96,   215,
     415,  2483,  2001,   781,   403,  2710,  2018,  2672,   816,  2664,
    2749,   219,   489,  2762,   169,   391,   745,   102,   733,   689,
     849,  2676,  2181,   351,  1583,   972,  1313,   408,   743,  1212,
    1352,   405,   392,  1769,  1789,  2630,  1506,  2729,  2256,   185,
     704,  2372,   722,   348,   603,  1499,  2427,  2179,   541,   204,
    2545,  2551,  2702,  2703,  2704,  2705,  2706,  1719
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     161,   216,   139,   428,   139,   429,   416,   138,  1173,   141,
     139,   697,   698,   967,  1286,   147,   748,  1038,  1380,  1416,
    1474,   794,  1455,  1014,   856,  1912,  1916,  1813,  1745,  1747,
    1271,  1748,   774,  1749,   139,   428,  1640,  1750,  1633,   181,
    1755,  1308,   705,   246,   438,   466,  2226,  2071,   999,  1308,
    1297,  1318,  1500,  1872,   789,  2243,  2087,   762,  2149,  1509,
     103,   104,   105,  1308,  1797,  1379,  1656,  1252,   111,  1538,
     265,   269,  1866,  1439,   783,  -708,  -706,  1223,   280,   756,
     212,   465,   715,  2176,   247,  2257,  2383,  1450,   292,  2094,
      99,   856,  1362,  2654,  2045,   808,  2730,   107,   763,  1223,
    2774,   346,  1223,   134,   135,   260,   136,  1653,  1484,  1829,
     221,   143,   144,  1596,  2085,  2500,  1857,   817,   393,   861,
     162,  2290,  2655,   839,   839,  2393,   843,   188,   127, -1856,
    1587, -1890,  1788, -1872,   189,  2004,   298,   170, -1608,  1790,
    2133,  1762, -1803, -1903,  1223,   808,  1195,  2505,    42,   114,
     482,  1493,  1515,   709,  1893,  2253,   412,   818,   819,   820,
     821,   822,  1231,   361,   531,   220,  1646, -1609,   467,  1195,
    1606,  2210,   217, -1903,   839,  2025,  2444,  2232,  2305, -1637,
     328,  1832,   322,  1532,  1908,  2752,  1469,  2346,  1875,   752,
   -1614,   710,  1024,  2753,   635,   636,   252,  2186,  1252,   222,
     455,  2550,   519,   284,  1894,  2747,  1959,  2771,   259,   413,
     129,  1367,  1461,   702,   762,  1031,  -708,  -706,  1580, -1856,
    -708,  -706, -1799,  1684, -1799,  2553,   183,   128,   537,  1580,
      23,   420,  1624,   814,   317,  2280,  2129,  2677,   406,  1191,
     537,   516,  1861,   590,  2633,  1009,  1861,  1965, -1612,   506,
    2531, -1830,   419,  2349,   296,  2026,   275,   276,  1921,  1892,
    1209,   764,   300,    94,  1328,  2543,  2089,  2090,   731,  2775,
     205,   837,   837,     3,   154,  2544,  1328,  -708,  -706,    94,
    1462,   517,  2787,  2629,  1367,   620,  1308,  1922,  1638,   407,
    1580,   213,  2249,   765,   766,   318,   319,   823,   824,   825,
     826,   827,   828,   829,   648,   649,   767,   417,  2258,  2673,
     312,  1548,  1023,  1685,   130,   723,   768,   184,    24,   285,
     315,  2656,   837,   703,  1895,  2362,  2574,  1195,  2748,  1791,
    1249,  2135,   414, -1903,   753,  2130,  1960,  1180,   520,   190,
     732,  1969,   608,   494,   139,  1249,   139,   139,   244,     5,
    1830,   486,   487,   139,  1970,  1195,   450,  1213,   492,  2242,
     137,  1976,  2224,  1533,  2700,  1247,   218,   537,   411,   762,
     139,  2440,   281,   508,   508,   505,   508,  2386,   137,   508,
     515,  2236,  2237,  2210,  2060,  2238,  2110,  1896,  1271, -1803,
    1639,  2259,   468,  2291,   282,  2113,   425,  1195,   769,  1195,
    1866,   154,   137,  1866,  1195,  1588,   154,   437,  -713, -1799,
    1195, -1803,   129,   191, -1803,  1415,   445,   446,   764,   447,
     448,  -708,  -706,  1182,   844,   454,  2274,  1267,   841,  2211,
    -711,  2275,  1428,  1428,  1428,  1009,  1009,  1009,   521,  1904,
    1271,  1397,   471,   139,   139,  1441,  1443,   469,   586,   586,
    2044,   830,  1449,  2445,   801,  2254, -1803,  1009,   284,   493,
    1297,  1214,  1215,   767,   831,   188,  1582,   137,   770,   192,
     261, -1890,   189,   768,   193,  2418,  1196,  2086,  1589,  1324,
    1242,   139,  2668,   695,  1607,  -713,   586,   711,  1285,  1289,
     706, -1799,  1924,   716,  1398,   137,  1510,  2373,  1314,  1196,
   -1872,   137,  2411,   369,   139,  1332,  1334,  -711,  1271,  1308,
    2506,  1907,  1013,  1200,   771,  2429,   130,  2431,  1201,   293,
     543,  1831,    97,  2263,  1391,  1242,   253,   266,  1197,  1877,
    2068,  2678, -1803,  1397,  1397, -1830,  2292,   747,  2099,   137,
     580,  2103,   782,   244,   256,  2260,  1641,  2365,  2449,  1580,
    2416, -1682,  1995,   347, -1803,   769,  1893, -1803,   750,  1539,
    1920,   598,  1009,   600,   772,   862,   605,   607,   149,   609,
    2330,  1271,  2118,   764,   285,   801,  1986,  1457,  2467,  2468,
    2054,  2532,   137,  2058,  1325,  1456,  1398,  1398, -1702,   717,
    1351,   395,  2657,   137,  1267,  1476,   117,   137,   262, -1803,
     688,   137,  1020,  1510,  1013,  2721,  1894,    52,  1563,  2157,
      94,   538,   708,  1351,   137,  1025,   614,   513,   767,  1897,
    1009,  1009,  1009,   538,   137,   770, -1903,   137,   768,  1009,
    1009,  1009,  1435,  1866,   764,   137,  2087,  1435,   451,   323,
    -521,  2211,  1009,  1009,  1009,  1009,  1009,  1009,  1009,  1009,
     713,  1435,  1009,   244,  2559,  2560,    53,  1196,   137,   516,
   -1903,   842,  1577,  1548,  2220,  1524,   847,   188,  -521,  -521,
   -1805,   771,   755,   980,   189,   981,  2283,   190,  2285,   767,
    1862,  1478,  2311,   970,  1862,  1196,   852,   852,   759,   768,
    2737,  1863,   850,  1597,    54,  1863,    55, -1835,    56,   517,
     452,  1133,   414,  1015,  1351,   431,    57,  1030,  1271, -1680,
     769,  2174, -1903,   787,  2736,  2064,   788,  2316,   212,  1200,
    2105,   772,  2792,   229,  1201,   223,  1895,  1196,  2498,  1196,
    1818,  1266,  2499,  1279,  1196,  2011,  1987, -1684,  2219,  1267,
    1196, -1576,   188,  1366,  2564,  2565,  2229,   987,   690,   189,
     538,   191,  1391,  1815,  2210,  2066,  1354,  1464,  1359,  1133,
   -1126,   731,    58,  1385,  2522,  1249,  2119,  -703,   230,   352,
    2347,   769,  2264,  2265,  2266,  2099,  2793,  1407,   231,  1691,
     770, -1678,  -521,  1261,  2794,   746, -1675,  2306,  1351,  1896,
   -1903,   615,  1703,  1710,  2722, -1903,  2169,  1183,  1184,  2170,
     731,   764,  1410,  2288,  1189, -1126, -1903,   192,  2437,  1469,
    -521,  1725,   193,  1726,    15, -1126,  2120,  1308,  1580,  2132,
    2146,  1711,  1712,   616,  1267,  2050,   771,  2177,  1725,  2376,
    1726,     4,  1793,   734,   -35,   731,   154,  2267,  1032,  1267,
     980,   770,   981,   729,  1798, -1799,   767, -1799,  2556,  2557,
     731,   154,  1172, -1576,  2757,    60,   768,    16,  1814,  2364,
     233,  1367,  2438,  2439,   255,  2351,  2521,  1818,  2455,   137,
     137,  2795,   736,  1642,  1494,  2012,   772,  1134,  1320,   190,
     857,  2523,  1826,  2682, -1903,  2207,  1512,   771,  2456,   244,
     244,   224,  1706,  1492,  1503,  1856,  1858, -1126,  2779, -1817,
    1465,    61,  -521,   730,  1396,  1461,  1485,   738,  -703,  1643,
    1267, -1903,  -703,   329,   987,  2457,   154,   256,  1218,   691,
     760,  1820,   740,   139,   139,  2332,  2683,   432,    18,   213,
     234,   137,  1267,  1577,  1441,  1134,  1441,   772,   769,  2723,
    1550,  1551,  2458,  2570,   137, -1815,   764,   857,  1991,  2219,
    1009,  2278,  2278,   191,   190,  1852,  1853,  1854,  1855,  1927,
    1563,  2268,  2269,    94,  1909,  2378,  2270, -1126,  1988,  -703,
     764,  1871,   154,  1462, -1835,     5,   472,   473,   474,  1552,
    1553,   244,   137, -1903,  2326,   980,  1945,   981,  2635,   742,
      64,   767,  1292,   764,  1946, -1903,  2178,  2516,  1765,  2121,
    2284,   768,  2286,  1293,  2370,  1943,   244,  2371,   770,   192,
   -1903,  1879,  2211, -1126,   193,   767,  1958,   137,  1255,  1962,
    2059,  1897,  1275,  2294,  2210,   768,   237,  1966,   191,  1275,
    1310,   764, -1799,    67,  -521,   137,  1913,  1275,   767,  1009,
    1329,  1271,  2423,  1580,  1994,  1350,   764,  1357,   768,  1357,
    1365,  1382,  1329,   118,   771,  1713, -1856, -1126,  1586,   987,
     395,  1256,  2684, -1126,  1928,   588,  2587,  1627,  1927,  1357,
     980,  1489,   981,  2714,  1300,  2329,   767,   137,   -96,  1415,
    1766,  2080,  1454,   769,   192,   980,   768,   981,   137,   193,
    2356,   767,   306,   330,  1271,   719,   475,  1766,   137,  2658,
    2425,   768,  2137,  2426,   772,  1277,    68,   769,   558,   726,
     476,  1666,   227,  -703, -1799, -1903,  2382,   764,  1679,   194,
    1819,  1997,  1998,  2608,  2609,   559,  2611,  1498,  2612,   244,
     769,  1009,  2613,  1009,  1665,  2628,   527,   154, -1576,   764,
    1435,   299, -1903,  1335,   987,  1009, -1576, -1576,  2375,  1255,
    2052, -1576,  1367,   770,   331,   395,   980,  2459,   981,   987,
    1947, -1815,   767,  1820,   301,   560, -1903,  2322,   769,  1275,
    1667,    43,   768,  1928,   720,   362,   721,   770,   980,  1585,
     981,  2575,  2481,   769,   767,  2482, -1903,  1714,  1155, -1686,
     589,  1504,  1948,  1564,   768,  1565,   477,  1336,  2548,   771,
     770,  1301,  1302,  2797,  2363,  1337,  1275,   363,   478,  2376,
    1202,  1495,   228, -1903,  1257,  1949,  1258,  1275,  1303,  1203,
    2576,  2081,   -96,   771,  2688,  2690,   358,  2357,   244,   395,
     987,  2122,    43,  2549,  2216,  2659,   307,  2055,   770,   326,
   -1903,   359,   352,   137,   254,  1617,   771,  1655,  2073,   772,
    2543,   360,   987,   770,   769,  2077,  2485,  2577,  1006,    27,
    2544,  1365,  1881,  2078,  2741,  1882,  2486,   137,  1883,  1884,
    1950,   345,  1304,   772,  1275, -1901,   769,  2088,  1275,  2248,
    1156,   757,  2211,  2751,   771,  1938,  1200,   361,  2487,  1649,
     137,  1201,  1338,  2441,    94,  1618,   772,   229,  2052,   771,
     479,   561,   171,   401,    94,   254,  2106,  2159,  2733,   442,
    2711,  2742,   562,   758,    52,   139,   439,   443,  2488,  2055,
    1681,  1157,  2442,  1210,   770,  1977,  2763,   244,   137,   154,
    1951,  1496,  2489,  2592,   772,   840,   764,  2512,  1284,  2513,
    2377,     5,   230,   137,  2586,  2378,   770,   172,  1650,   772,
    1158,  1651,   231,  2791,   139,  1498,  1361,   173,  2764,  2733,
     244,  2152,   440,    53,   838,   838,   232,  2758,  2759,  2273,
     771,  2278,  2278,  2496,  2562,  1394,  1412,  2374,  2765,  2507,
    1799,   767,   155,  1835,   156,  1021,  1836, -1614,  2650,   137,
    2712,   768,   771,  1837,  1838,  2220, -1799,  1419,  1422,  1425,
    2252,    54,  1200,    55,   801,    56,    28,  1201,  2636,  2208,
    2209,  1811,  2244,    57,   137,   838,   563,   564,  1882,  2713,
     772,  1883,  1884,    33,  2150,  2318,  2338,  1952,    26,  1451,
      13,   565,  1799,   566,   233,    13,   137,  2743,  1812,   174,
      36,  1839,   772,   362,  2745,    47,  1159,  2632,  1006,  1006,
    1006,  2151,  2319,  2252,    91, -1903,  1610,  1705,   244,  2744,
      21,    22,  1718,  1754,  1911,  1756,  2746,  2239,    39,    58,
    1006,   599,  1438,   769,  1611,   363,   606,  1999,  2000,    46,
    1255,  1939,  1200,  2245,  2680,  2024,  -235,  1201,  1932,  1199,
    1941, -1592, -1592, -1592, -1592,  2034,  2035,  1275,  1200,  2038,
    1799,  1942,  2272,  1201,   234,    40,  2321,   235,   236,   175,
    1840,  1255,  1700,  1957,  2205,  1518,  2727,    48,   567,  1460,
    2728,   429,  1200,  1460,  1200,  1444,  1445,  1201,  2252,  1201,
      59,  2295,  1885,  1886,   155,  2297,   156,  1275,    49,  1841,
    1701,   364,    97,   770,  2340,  2340,   365,  2590,  2591,  1200,
    1968,  1430,  1431,  2595,  1201,   176,    51,    93,  1887,  1888,
    1842,   100,    60,  1799,   509,   568,   511,   101,  2473,   512,
    2476,  2670,  2671,  1234,  2325,  1248,    94,   366,  1264,  1446,
    1447,  1448,  1287,  2769,   601,   367,   602,   108,  2563,   771,
    2640,   139,   106,   109,  2641,  2642,  1982,  1323,   368,   114,
     237,  1687,   110,  1349,  1689,   177,   112,  2782,    61,   113,
    1692,    62,   120,   122,  1696,  1843,   720,   140,   721,  2019,
    1670,  1698,  1671,  1009,  1405,   124,  1349,   369,   126,  2013,
     370,  2014,   142,  1006,  1006,  1006,   137,   149,   371,   772,
    2027,   163,  1006,  1006,  1006,  1433,  2252,   164,   165,  -232,
    1433,  2082,  2433,  2083,  1955,  1006,  1006,  1006,  1006,  1006,
    1006,  1006,  1006,   168,  1433,  1006,   182,  1772,  2417,  1773,
    1844,  1190,   187,  1192,  2419,   186,    63,   205,   243,   372,
     194,   248,   373,   249,  2422,  1885,  1886,  2687,   250,   251,
    2541,   258,   270,  1475,   274,   279,  1275,    64,   295,   297,
    1275,   154,  2663,  1275,  2669,   301,  1255,  1526,  1527,  1528,
    1529,  1887,  1888,   303,  1996,   304,  2596,  1349,   310,  1264,
     308,   309,    65,   313,    66,  2010, -1591, -1591, -1591, -1591,
    1845,   314,  2015,   735,   737,   739,   741,   327,  2715,  2716,
      67,  2663,   334,  1846,   429,   339,   335,  2669,  2720,   337,
     341,   350,   343,   352,  2460,   354,  1275,  2461,  2462,   633,
     355,  2028,   357,   393,   395,   399,   398,  2314,   402,   409,
    2463,   404,   421,  2139,   410,   188,   244,   422,   423,   430,
    1725,  1772,  1726,  1773,  2478,  2479,   414,  2160,  2161,  2162,
    2163,  2164,  2165,  2166,  2167,   456,   457,   459,  -353,   461,
    1835,  1349,   485,  1836,   491,  1275,  1275,  1275,   488,   495,
    1837,  1838,   496,    68,  2526,   503,   510,   523,   524,   525,
    2072,   535,   529,  1634,  2184,   546,   550,  1847,   551,   552,
     554,   555,   581,  2184,  1932,  -366,   557,   583,   592,  2079,
     593,   610,   594,   612,   618,  2084,   694,   619,  2510,  1661,
    1235,   622,   623,   762,   696,   707,   699,   725,  1839,   742,
    1979,   744,  1981,   780,  1275,  1983,  1984,  1985,  2691,  2548,
     751,  1989,   761,   777,  1992,  1993,   784,  2566,   793,   796,
     786,  2567,  2568,   797,   799,   804,   801,   809,   815,   811,
     848,   854,  2536,   841,   139, -1686,   968,   971,  1018,  2206,
    1019,  1013,  1022,  1043,  2692,  1035,  1144,  1163,  1040,  1329,
    1174,  1204,  2230,  1171,  1329,  1176,  1216,  1220,  1290,  1229,
    1177,  2543,  1222,  1178,  2597,  1185,  1634,  1840,   973,  1413,
    1415,  2544,  1186,  1329,  1329,  1187,  1188,  1329,  1193,  1230,
    1453,  1311,  1205,  1207,  1452,   974,  1208,  1454,  1467,  1426,
     651,  1427,  1473,  1479,  1437,  1490,  1841,  1488,  1387,  1275,
    1501,  1507,  1513,  1006,  1516,   442,  1530,  2598,  1536,  2279,
    2279,  1578,  1534,  1582,  1595,  1599,  1598,  1842,  1329,  1601,
    1603,  2204, -1594,  1329,  1329,  1329,  1612,  1613,  1614,  1620,
    1615,  1629,  1275,  1622,  1275,  1625,  2139,  1631,  1367,  1645,
    1647,  1223,  1657,  2599,  1662,  2324,  1673,  1669,  1675,  1677,
    1682,  1688,  1690,  1693,  1694,  1695,  1707,  1757,  1697,  1699,
    1702,  1704,  2225,  2600,  2227,  1709,  1758,  1760,  2228,  1763,
    1802,  1275,  1843,  1275,  1794,  1804,  2233,   975,   976,   977,
    1801,  1806,  1249,  1816,  1634,   655,   978,  1820,  1827,  1833,
    1518,  2601,  1006,  1867,  1878,  1891,  1588,   764,  1870,  1914,
    1850,  1929,  1933,  1906,  1937,  1944,  1964,  1971,  1919,  2003,
    2017,  2020,  2023,  1659,  2032,  2030,  1765,  1926,  2039,  2046,
    2047,  2048,  2049,  2029, -1564,  2061,  1275,  1844,  1935,  2042,
    1237,  2043,  2065,  1009,  1009,  2069,   980,  2070,   981,  1329,
    2074,  1469,   767,   139,   982,   983,   984,  2093,  2368,  2095,
     985,  2100,   768,  2101,  1770,  1771,  1963,  1238,  2107,  2108,
    2111,  2114,  2115,   660,  2134,  2140,  1634,  2142,  2146,  2143,
     429,  2313,  2602,  1009,  2760,  2153,  2154,  2187,  2693,  2180,
    2188,  2190,  2694,  2695,  1006,  2189,  1006,  1845,  2199,  2603,
    2246,   986,  1009,  1433,  2201,  2240,  2234,  1772,  1006,  1773,
    1846,  1774, -1613,  2281,  2307,  2298,  2304,  2310,  2315,  2326,
     987,  2604,  2328,  2345,  2342,  2350,  2009,  2352,  1235,   429,
    2354,   762,  1275,  2696,  1275,  2387,  1926,  2055, -1569, -1611,
    2420,  2435,  2605,  2451,   769,  1775,  1776,  1777,  2021,  2697,
    2698,  2022,  2430,  2452,  2453,  2432,  2450,  2464,  2474,  2357,
    2504,  2606,   139,  2469,  2507,  1275,  2514,  2447,   669,  2607,
    2515,  2517,  1009,  2520,  2533,   988,  2534,  2535,  2539,  2555,
    2572,  2571,  2592,  2631,  2639,  1634,  2643,  2638,  2645,  2675,
    2681,  2674,  2707,  2708,  1847,  1778,  1275,  1779,  2709,  2718,
    2761,  2053,  2778,  2780,  1780,  2783,   973,  1781,  2790,  2781,
      17,  2799,    92,  2785,   770,   125,   139,    38,  1236,   167,
     257,  2484,   267,   974,   210,   119,   989,   990,   278,   291,
    1329,   242,   211,   714,  1329,   444,   548,   539,  1240,  2136,
     582,   324,  1217,   528,  1269,   853,  1240,  1240,   458,  1746,
     587,  1269,  2768,  1680,   805,  2128,  1240,  1975,  2218,  1269,
     771,  2366,  1017,  1240,  1240,  2717,  2719,  1228,  1471,  2384,
     994,  1039,   966,  1269,  2289,  1008,  2037,  2036,  2092,  1275,
    2509,  1275,  1240,  1240,  2503,  1809,  2063,  1487,  2287,  1810,
     995,  1825,  1860,  1782,  2428,   996,  1783,  2525,  1868,  2466,
    2104,  2293,   997,  1579,   137,  2434,  2309,  1634,  1634,  1890,
     772,  1902,  2116,  1367,  1602,   975,   976,   977,  1910,  2317,
    1605,  2320,  2144,  2198,   978,  1936,  2168,  1636,  2331,  1383,
    1637,  2341,  1660,  2196,  2472,   764,  2145,  2197,  2767,  2279,
    2279,  2477,  2480,  2501,  1634,  1974,  2530,  1628,  2502,  1874,
    1329,  1329,  2334,  2335,  1329,  1329,   429,  1329,  1808,   333,
    2336,  2337,  1240,   214,  2158,   779,  2016,   311,  1237,   294,
    1194,  2185,   813,   617,   980,  2637,   981,   449,  2195,  2195,
     767,   542,   982,   983,   984,  2519,  2750,   273,   985,   490,
     768,  1269,  2182,  2127,  2303,  1238,   790,   604,  1905,  2701,
       0,     0,     0,  1264,     0,  1240,     0,  2527,  2214,     0,
       0,     0,     0,  2009,  2009,     0,     0,     0,  1255,     0,
    1240,     0,     0,     0,     0,     0,     0,     0,  1269,   986,
       0,     0,     0,     0,  2648,     0,     0,     0,     0,  1269,
    2546,  2547,     0,  2552,     0,     0,     0,     0,   987,     0,
       0,  1240,     0,  1181,     0,     0,     0,     0,  2558,     0,
       0,     0,     0,     0,     0,  1008,  1008,  1008,  2251,     0,
       0,     0,   769,     0,  2569,     0,     0,     0,     0,     0,
       0,  2686,     0,  1255,     0,     0,     0,  1008,     0,  1784,
       0,     0,     0,     0,     0,     0,  1269,     0,     0,  2589,
    1269,     0,     0,   988,  2593,  2594,     0,     0,     0,     0,
    1240,     0,  2296,     0,     0,  1240,     0,  2734,  2735,     0,
       0,  2251,  1634,     0,     0,  2634,     0,     0,     0,  1255,
    1634,     0,     0,     0,     0,     0,     0,     0,     0,  1785,
       0,     0,   770,     0,     0,     0,     0,     0,     0,  1919,
    1786,     0,     0,  2647,   989,   990,  2649,     0,     0,  2651,
    2652,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2333,     0,
    1255,     0,     0,     0,     0,     0,  1006,     0,   771,     0,
       0,     0,  1008,     0,     0,     0,  2251,  1276,   994,     0,
    1634,     0,  1796,     0,  1276,     0,     0,     0,     0,     0,
       0,     0,  1276,     0,     0,  2784,     0,     0,   995,  2798,
       0,     0,     0,   996,   973,  2009,  1276,     0,     0,     0,
     997,     0,   137,     0,  1264,     0,     0,     0,   772,     0,
    1240,   974,     0,     0,     0,     0,     0,     0,     0,     0,
    1008,  1008,  1008,  1240,  1796,     0,     0,     0,     0,  1008,
    1008,  1008,  1434,     0,     0,     0,     0,  1434,     0,  2424,
       0,     0,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,
       0,  1434,  1008,     0,     0,     0,     0,     0,     0,     0,
       0,  1240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1477,     0,     0,  2251,     0,     0,     0,     0,  1269,
       0,     0,  1796,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   975,   976,   977,     0,     0,     0,     0,
       0,     0,   978,     0,  1276,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1269,
       0,     0,     0,  1240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1240,     0,     0,  1240,     0,  2214,
       0,  1276,     0,     0,     0,  1796,     0,     0,     0,     0,
       0,     0,  1276,     0,     0,     0,     0,     0,  1408,     0,
     982,   983,   984,     0,     0,     0,   985,     0,     0,     0,
       0,     0,     0,     0,   864,     0,     0,   865,     0,   866,
       0,     0,     0,     0,   867,     0,     0,     0,     0,     0,
    2511,     0,   868,     0,     0,     0,     0,     0,     0,     0,
    1635,     0,     0,     0,     0,     0,     0,   986,     0,  1276,
       0,     0,     0,  1276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   869,   870,     0,     0,     0,
       0,     0,     0,  2537,     0,     0,   871,     0,     0,     0,
    2540,     0,     0,  2542,     0,     0,     0,   872,     0,     0,
     873,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   874,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1269,     0,
       0,   988,  1269,     0,     0,  1269,     0,   875,     0,     0,
       0,     0,     0,     0,  2573,   876,     0,   877,     0,     0,
       0,     0,     0,  1635,     0,     0,     0,     0,  2588,     0,
       0,     0,     0,  2214,  2214,  1800,     0,     0,     0,  2214,
       0,     0,     0,     0,     0,  1264,     0,     0,   878,     0,
       0,     0,   989,   990,     0,     0,     0,     0,  1269,   879,
    1008,     0,     0,     0,   880,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2214,     0,     0,     0,
    2214,  2214,     0,     0,     0,     0,     0,  1800,     0,     0,
     881,     0,     0,     0,  2653,     0,   994,   882,     0,     0,
     883,   884,     0,     0,     0,     0,     0,  1269,  1269,  1269,
     885,     0,     0,     0,     0,     0,   995,   886,     0,   887,
       0,   996,   888,     0,     0,     0,     0,     0,   997,     0,
     137,     0,     0,     0,     0,     0,  1006,  1006,     0,     0,
       0,  1635,     0,     0,     0,  1240,     0,     0,     0,  1008,
       0,     0,  1276,     0,     0,  1800,     0,     0,     0,     0,
       0,  2726,     0,     0,     0,   889,  1269,     0,     0,   890,
       0,   891,     0,     0,     0,     0,  1006,     0,     0,     0,
       0,     0,   892,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1276,     0,     0,  1006,     0,  2756,  2756,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   893,
       0,     0,     0,     0,     0,     0,     0,     0,  1800,     0,
       0,     0,   894,  1635,     0,     0,  2770,  1235,     0,     0,
     762,     0,     0,     0,     0,     0,  2773,  2777,     0,     0,
       0,  1008,  2756,  1008,     0,     0,     0,   895,   896,     0,
    1434,     0,     0,     0,     0,  1008,  2789,     0,   897,     0,
       0,  1269,     0,     0,     0,  1006,     0,     0,     0,     0,
       0,     0,   898,   899,     0,     0,     0,     0,     0,   900,
       0,     0,     0,   901,     0,     0,     0,     0,     0,     0,
       0,   902,     0,     0,  1269,     0,  1269,     0,     0,     0,
       0,   903,     0,     0,     0,   973,     0,     0,     0,     0,
     904,     0,     0,     0,     0,     0,     0,  1330,     0,   905,
       0,     0,   974,     0,   906,   907,     0,     0,   908,     0,
     909,     0,  1635,  1269,     0,  1269,     0,     0,   910,     0,
       0,     0,     0,     0,  1240,     0,     0,     0,     0,     0,
       0,  1276,     0,     0,     0,  1276,     0,     0,  1276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   912,
       0,     0,     0,     0,     0,   913,     0,     0,     0,     0,
     914,     0,  1240,  1240,     0,     0,     0,     0,  1269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   915,     0,     0,
       0,  1276,     0,     0,   975,   976,   977,     0,     0,     0,
       0,     0,     0,   978,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   764,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1635,  1635,     0,     0,     0,     0,
    1276,  1276,  1276,     0,     0,     0,     0,  1237,     0,     0,
       0,     0,     0,   980,     0,   981,     0,     0,     0,   767,
       0,   982,   983,   984,  1269,     0,  1269,   985,     0,   768,
    1240,  1635,     0,     0,  1238,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1269,     0,  1276,
       0,     0,     0,     0,     0,     0,     0,     0,   986,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,  1269,     0,
       0,     0,     0,     0,     0,     0,     0,   627,   628,   629,
     630,   631,   632,     0,     0,     0,     0,     0,     0,     0,
       0,   769,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   634,     0,   635,   636,   637,   638,   639,
     640,   641,   988,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1276,     0,     0,     0,     0,   864,
       0,     0,   865,     0,   866,     0,     0,     0,     0,   867,
       0,  1269,     0,  1269,     0,     0,     0,   868,     0,   642,
       0,   770,     0,     0,     0,     0,     0,  1276,     0,  1276,
       0,     0,  1240,   989,   990,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1635,
     869,   870,     0,     0,     0,     0,     0,  1635,     0,     0,
       0,   871,     0,     0,     0,     0,  1276,   771,  1276,     0,
       0,     0,   872,     0,     0,   873,     0,   994,   643,   644,
     645,   646,   647,     0,     0,   648,   649,     0,     0,   874,
       0,     0,     0,     0,     0,  1240,     0,   995,     0,  1240,
    1240,     0,   996,     0,     0,     0,     0,     0,     0,   997,
       0,   137,   875,  1008,     0,     0,     0,   772,   650,     0,
     876,  1276,   877,     0,     0,     0,     0,  1635,     0,  -750,
       0,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,     0,
    -750,  -750,  -750,     0,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,  -750,   878,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   879,     0,     0,     0,     0,   880,
       0,     0,     0,     0,     0,     0,     0,   652,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   881,     0,     0,     0,     0,
       0,     0,   882,     0,     0,   883,   884,     0,     0,     0,
       0,     0,     0,     0,     0,   885,     0,  1276,     0,  1276,
       0,   654,   886,     0,   887,     0,     0,   888,     0,     0,
       0,     0,   656,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   657,     0,     0,     0,     0,
    1276,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     889,     0,   864,     0,   890,   865,   891,   866,     0,     0,
       0,  1276,   867,     0,     0,     0,     0,   892,     0,     0,
     868,     0,     0,     0,  -750,  -750,     0,  -750,  -750,  -750,
    -750,     0,     0,     0,     0,     0,     0,     0,     0,   661,
     662,   663,     0,     0,   893,     0,     0,     0,     0,     0,
       0,     0,     0,   869,   870,     0,     0,   894,     0,     0,
       0,     0,     0,     0,   871,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   872,     0,     0,   873,     0,
       0,     0,   895,   896,     0,     0,     0,     0,     0,     0,
       0,     0,   874,   897,  1276,     0,  1276,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   898,   899,     0,
       0,   665,   666,   667,   900,   875,     0,     0,   901,     0,
       0,     0,     0,   876,     0,   877,   902,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   903,     0,     0,     0,
       0,     0,     0,     0,     0,   904,     0,     0,     0,     0,
       0,     0,     0,     0,   905,     0,   878,     0,     0,   906,
     907,     0,     0,   908,     0,   909,     0,   879,     0,     0,
       0,     0,   880,   910,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -750,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   881,     0,
       0,     0,     0,     0,   912,   882,     0,     0,   883,   884,
     913,     0,     0,     0,     0,   914,     0,     0,   885,     0,
       0,     0,     0,     0,     0,   886,     0,   887,     0,     0,
     888,     0,     0,     0,     0,     0,  -750,     0,     0,     0,
       0,     0,   915,     0,     0,     0,     0,   864,     0,     0,
     865,     0,   866,     0,     0,     0,     0,   867,     0,     0,
       0,     0,     0,     0,     0,   868,     0,     0,     0,     0,
       0,     0,     0,   889,     0,     0,     0,   890,     0,   891,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     892,     0,     0,     0,     0,     0,     0,     0,   869,   870,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   871,
       0,     0,     0,  1008,  1008,     0,     0,   893,     0,     0,
     872,     0,     0,   873,     0,     0,     0,     0,     0,     0,
     894,     0,     0,     0,     0,     0,     0,   874,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1008,     0,   895,   896,     0,     0,     0,
     875,     0,     0,     0,     0,     0,   897,     0,   876,     0,
     877,     0,  1008,     0,     0,     0,     0,     0,     0,     0,
     898,   899,     0,     0,     0,     0,     0,   900,     0,     0,
       0,   901,     0,     0,     0,     0,     0,     0,     0,   902,
       0,   878,     0,     0,     0,     0,     0,     0,     0,   903,
       0,     0,   879,     0,     0,     0,     0,   880,   904,     0,
       0,     0,     0,     0,     0,     0,     0,   905,   973,     0,
       0,     0,   906,   907,     0,     0,   908,     0,   909,     0,
       0,     0,  1008,   881,     0,   974,   910,     0,     0,     0,
     882,     0,     0,   883,   884,     0,     0,     0,     0,   911,
       0,     0,     0,   885,     0,     0,     0,     0,     0,     0,
     886,     0,   887,     0,     0,   888,     0,   912,     0,     0,
       0,     0,     0,   913,     0,     0,     0,     0,   914,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1037,     0,     0,   915,     0,     0,   889,     0,
       0,     0,   890,     0,   891,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   892,  1341,   975,   976,   977,
       0,     0,     0,     0,  -363,     0,   978,  -363,     0,     0,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,     0,
       0,     0,   893,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   894,     0,     0,  -363,     0,
    -363,     0,     0,     0,     0,     0,     0,  -363,     0,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,     0,     0,     0,     0,
     895,   896,  1342,     0,   982,   983,   984,     0,     0,     0,
     985,   897,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   898,   899,     0,     0,     0,
       0,     0,   900,  -363,     0,     0,   901,     0,     0,     0,
       0,     0,     0,     0,   902,     0,     0,     0,     0,     0,
       0,   986,     0,     0,   903,     0,     0,     0,     0,     0,
       0,     0,     0,   904,     0,     0,     0,     0,     0,     0,
       0,     0,   905,     0,  -363,     0,     0,   906,   907,     0,
       0,   908,     0,   909,     0,     0,     0,     0,     0,   531,
       0,   910,  -363,  -363,  -363,  -363,  -363,     0,     0,  -363,
    -363,     0,     0,  -363,  1668,     0,     0,     0,     0,  -363,
       0,  -363,     0,     0,     0,     0,     0,  -363,     0,     0,
       0,     0,   912,     0,  -363,   988,     0,     0,   913,     0,
       0,     0,  -363,   914,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -363,     0,     0,  -363,     0,
       0,     0,     0,     0,  -363,     0,  -363,     0,     0,     0,
     915,     0,     0,     0,     0,  -363,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   989,   990,     0,  -363,
       0,     0,     0,     0,     0,     0,     0,     0,     0, -1903,
       0,  -363,     0,     0,     0,     0,     0,     0,     0,  1045,
       0,  1046,     0,     0,     0,     0,  1047,     0,     0,     0,
       0,     0,     0,     0,  1048,     0,     0,     0,     0,     0,
     994,  -363,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1179,     0,     0,  -363,  -363,     0,     0,     0,     0,
     995,     0,     0,  -363,     0,   996,  -363,  1049,  1050, -1179,
       0,     0,   997,   244,   137,     0,     0,     0,  1051,  -363,
       0,  -363,     0,     0,     0,     0,     0,     0,     0,  1052,
       0,     0,  1053,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1054,  -363,     0,     0,
       0,     0,     0,     0,  -363,     0,     0,     0,     0,  1235,
       0,     0,   762,     0,     0,  1544,  1545,  1546,     0,  1055,
       0,  -363,     0,  1547,     0,     0,     0,  1056,     0,  1057,
       0,  -363,     0,  -363,  -363,  -363,  1058,     0,  1059,  1060,
    1061,  1062,  1063,  1064,  1065,  1066,     0,  1067,  1068,  1069,
       0,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    1079,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1080,     0,     0,  -363,     0,  1081,     0,     0,  -363,
       0,     0,     0,     0,  -363,     0,     0,   973,     0,     0,
       0,     0,     0,     0,     0,     0,  -363,     0,     0,     0,
       0,  -363,  1082,     0,   974,  -363,  -363,  -363,     0,  1083,
       0,     0,  1084,  1085,     0,     0,     0,     0,     0,  -363,
       0,     0,  1086,     0,     0,  -363,  -363,     0,     0,  1087,
       0,  1088,   532,     0,  1089,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   762,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1548,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1549,     0,     0,  1090,     0,     0,
       0,  1091,     0,  1092,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1093,     0,   975,   976,   977,     0,
       0,     0,     0,     0,     0,   978,     0,     0,     0,     0,
       0,  1550,  1551,     0,     0,     0,   764,     0,     0,     0,
       0,  1094,     0,   973,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1095,     0,  1873,     0,     0,     0,
     974,     0,     0,     0,     0,     0,     0,     0,     0,  1237,
    1552,  1553,     0,     0,     0,   980,     0,   981,     0,  1096,
       0,   767,     0,   982,   983,   984,     0,     0,     0,   985,
    1097,   768,     0,     0,     0,     0,  1238,     0,     0,     0,
       0,     0,     0,     0,     0,  1098,     0,     0,     0,  1554,
       0,  1099,     0,     0,     0,  1100,     0,  1555,  1235,     0,
    1556,   762,     0,  1101,  1544,  1545,  1546,     0,  1557,     0,
     986,     0,  1547,  1102,     0,  1558,     0,     0,     0,     0,
    1559,     0,  1103,     0,     0,     0,     0,     0,     0,   987,
       0,  1104,   975,   976,   977,     0,  1105,  1106,     0,  1560,
    1107,   978,  1108,     0,     0,     0,     0,     0,     0,     0,
    1109,     0,   764,   769,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   973,     0,     0,     0,
       0,  1111,     0,     0,   988,     0,     0,  1112,     0,     0,
       0,     0,  1113,   974,     0,     0,     0,   767,     0,   982,
     983,   984,     0,     0,     0,   985,     0,   768,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1114,
       0,     0,     0,   770,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   989,   990,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,     0,  1548,     0,     0,     0,  1561,     0,  1562,
       0,  1563,     0,  1549,  1564,     0,  1565,  1566,  1567,   771,
       0,  1568,  1569,     0,     0,     0,     0,     0,     0,   994,
       0,     0,     0,     0,     0,   975,   976,   977,     0,   769,
       0,     0,     0,     0,   978,     0,     0,     0,     0,   995,
    1550,  1551,     0,     0,   996,   764,     0,     0,     0,     0,
       0,   997,     0,   137,     0,     0,     0,     0,     0,   772,
     988,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1237,  1552,
    1553,     0,     0,     0,   980,     0,   981,     0,     0,     0,
     767,     0,   982,   983,   984,     0,     0,     0,   985,   770,
     768,     0,     0,     0,     0,  1238,     0,     0,     0,     0,
       0,   989,   990,     0,     0,     0,     0,     0,  1554,     0,
       0,     0,     0,     0,     0,     0,  1555,     0,     0,  1556,
       0,     0,     0,     0,     0,     0,     0,  1557,     0,   986,
       0,     0,     0,     0,  1558,   771,     0,     0,     0,  1559,
       0,     0,     0,     0,     0,   994,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1560,     0,
       0,     0,     0,     0,     0,   995,     0,     0,   530,     0,
     996,     0,   769,     0,     0,     0,     0,   997,  -914,   137,
       0,  -914,     0,     0,     0,   772,     0,     0,     0,  -363,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,  -363,     0,     0,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,     0,     0,     0,     0,     0,     0,
       0,  1223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   770,  -363,     0,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,     0,     0,   989,   990,  -914,     0,     0,     0,
       0, -1803,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -914,     0,     0,  1561,     0,  1562,     0,
    1563,     0,     0,  1564,     0,  1565,  1566,  1567,   771,  -363,
    1568,  1569,     0,     0,     0,     0,     0,     0,   994,     0,
    1235,     0,     0,   762,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   995,     0,
       0,     0,     0,   996,     0,     0,     0,     0,     0,     0,
     997,     0,   137,     0,     0,     0,     0,     0,   772,     0,
       0,  -363,     0,     0,     0,   531,     0,     0,  -363,  -363,
    -363,  -363,  -363,     0,     0,  -363,  -363,     0,     0,     0,
       0,     0,     0,     0,     0,  -914,  -914,  -914,     0,     0,
       0,     0,     0,  -363,  -914,     0,     0,     0,   973,     0,
       0,     0,     0,     0,     0,  -914,     0,     0,  -363,     0,
       0,     0,     0,     0,     0,   974,     0,     0,     0,     0,
       0,  -363,     0,     0,  -363,     0,     0,     0,     0,     0,
    -363,     0,     0,     0,     0,     0,     0,     0,  -914,     0,
       0,     0,     0,     0,  -914,     0,  -914,     0,     0,     0,
    -914,     0,  -914,  -914,  -914,     0,     0,     0,  -914,  1235,
    -914,     0,   762,     0,     0,  -914,     0,  -363,  1940,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -363,     0,  -914,
       0,     0,     0,     0,  -914,     0,     0,   975,   976,   977,
       0,  -363,     0,     0,     0,     0,   978,     0,  -914,  -363,
       0,     0,  -363,     0,     0,     0,     0,   764,     0,     0,
       0,     0,     0,     0,     0,  -363,     0,   973,     0,     0,
       0,     0,  -914,     0,     0,     0,     0,  -363,     0,     0,
       0,     0,     0, -1803,   974,  -363,     0,     0,     0,     0,
    1237,     0,     0,     0,     0,     0,   980,  1387,   981,     0,
       0,     0,   767,  -914,   982,   983,   984,     0,     0,     0,
     985,     0,   768,     0,     0,     0,     0,  1238,     0,  1235,
       0,     0,   762,     0,     0,     0,     0,  -363,     0,  -363,
    -363,  -363,     0,     0,     0,     0,  -914,     0,     0,     0,
       0,     0,  -914,     0,     0,     0,     0,     0,     0,     0,
       0,   986,     0,     0,  -914,  -914,  -363,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,  -363,   975,   976,   977,     0,
       0,     0,     0,     0,     0,   978,     0,     0,  -914,     0,
       0,     0,  -363,     0,   769,     0,   764,   973,  -914,     0,
       0,  -363,  -363,  -363,  -914,     0,     0,     0,     0,  1392,
    1235,     0,     0,   762,   974,  -363,     0,     0,  -914,     0,
       0,     0,  -363,  -914,     0,   988, -1803,     0,   532,  1237,
    -914,     0,  -914,     0,     0,   980,     0,   981,  -914,     0,
       0,   767,     0,   982,   983,   984,     0,     0,     0,   985,
       0,   768,     0,     0,     0,     0,  1238,     0,     0,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   989,   990,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   973,     0,
     986,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1941,     0,   974,   975,   976,   977,   987,
     771,     0,     0,     0,  1942,   978,     0,     0,     0,     0,
     994,     0,     0,     0,     0,     0,   764,     0,     0,     0,
       0,     0,     0,   769,     0,     0,     0,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,     0,  -970,     0,
       0,  -970,   997,     0,   137,     0,     0,     0,     0,  1237,
     772,     0,     0,     0,   988,   980,     0,   981,     0,     0,
       0,   767,     0,   982,   983,   984,     0,     0,     0,   985,
       0,   768,     0,     0,     0,     0,  1238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   975,   976,   977,
       0,     0,     0,   770,     0,     0,   978,     0,     0,     0,
       0,     0,     0,     0,     0,   989,   990,   764,     0,     0,
     986,     0,     0,     0,     0,     0,  -970,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   987,
       0,     0,     0,  -970,     0,     0,     0,     0,     0,   771,
    1237,     0,     0,     0,     0,     0,   980,     0,   981,   994,
       0,     0,   767,   769,   982,   983,   984,     0,     0,     0,
     985,     0,   768,     0,     0,     0,     0,  1238,  1235,   995,
       0,   762,     0,     0,   996,     0,     0,     0,     0,     0,
       0,   997,     0,   137,   988,     0,     0,     0,     0,   772,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1518,
       0,   986,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,   770,     0,  -970,  -970,  -970,     0,     0,
    1235,     0,     0,   762,  -970,   989,   990,     0,     0,     0,
       0,     0,     0,     0,   769,  -970,   973,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1235,
       0,     0,   762,   974,     0,     0,     0,     0,     0,   771,
       0,     0,     0,     0,     0,   988,     0,     0,  -970,   994,
       0,     0,     0,     0,  -970,     0,  -970,     0,     0,     0,
    -970,     0,  -970,  -970,  -970,     0,     0,     0,  -970,   995,
    -970,     0,     0,     0,   996,  -970,     0,     0,   973,     0,
       0,   997,     0,   137,   770,     0,     0,     0,     0,   772,
       0,     0,     0,     0,     0,   974,   989,   990,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   973,     0,  -970,
       0,     0,     0,     0,     0,     0,  1481,     0,     0,     0,
       0,     0,     0,     0,   974,   975,   976,   977,  -970,     0,
     771,     0,     0,     0,   978,     0,     0,     0,     0,     0,
     994,     0,     0,     0,     0,   764,     0,     0,     0,     0,
       0,     0,  -970,     0,     0,     0,     0,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,     0,     0,     0,
       0,     0,   997,     0,   137,     0,     0,     0,  1237,     0,
     772,     0,     0,  -970,   980,     0,   981,   975,   976,   977,
     767,  1664,   982,   983,   984,     0,   978,     0,   985,     0,
     768,     0,     0,     0,     0,  1238,     0,   764,     0,     0,
       0,     0,     0,     0,     0,     0,   975,   976,   977,     0,
       0,     0,  -970,     0,     0,   978,     0,     0,     0,     0,
       0,     0,     0,     0,  -970,  -970,   764,     0,     0,   986,
    1237,     0,     0,     0,     0,     0,   980,     0,   981,     0,
       0,     0,   767,     0,   982,   983,   984,     0,   987,     0,
     985,     0,   768,     0,     0,     0,     0,  1238,  -970,  1237,
       0,     0,     0,     0,     0,   980,     0,   981,  -970,     0,
       0,   767,   769,   982,   983,   984,     0,     0,     0,   985,
    1235,   768,     0,   762,     0,     0,  1238,     0,  -970,     0,
       0,   986,     0,  -970,     0,     0,     0,     0,     0,     0,
    -970,     0,  -970,   988,     0,     0,     0,     0,  -970,     0,
     987,     0,     0,     0,     0,  2388,     0,     0,  2389,     0,
     986,  2390,     0,     0,     0,     0,     0,     0,     0,  2391,
       0,     0,     0,     0,   769,     0,     0,     0,     0,   987,
       0,     0,   770,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   989,   990,     0,     0,   973,     0,
       0,     0,     0,   769,     0,   988,  1235,     0,     0,   762,
       0,     0,     0,     0,     0,   974,  2392,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   771,     0,
       0,     0,     0,     0,   988,  2393,     0,     0,   994,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,  1522,     0,     0,     0,   989,   990,   995,     0,
       0,     0,     0,   996,     0,     0,     0,  1961,     0,     0,
     997,     0,   137,   770,     0,     0,     0,     0,   772,     0,
       0,     0,     0,     0,   973,   989,   990,     0,     0,     0,
     771,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     994,   974,     0,  1795,     0,     0,   762,   975,   976,   977,
       0,     0,     0,     0,  2394,     0,   978,     0,     0,   771,
     995,     0,  2395,     0,     0,   996,     0,   764,     0,   994,
       0,     0,   997,     0,   137,  2396,     0,     0,     0,     0,
     772,     0,     0,     0,     0,     0,     0,     0,     0,   995,
       0,     0,     0,     0,   996,     0,     0,     0,     0,     0,
    1237,   997,     0,   137,     0,     0,   980,  2397,   981,   772,
       0,     0,  1280,     0,   982,   983,   984,     0,     0,     0,
     985,   973,   768,     0,     0,     0,     0,  1238,  2398,     0,
    2399,     0,     0,   975,   976,   977,     0,     0,   974,     0,
       0,     0,   978,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,  2400,  2401,     0,     0,     0,     0,
       0,   986,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,  2402,  1237,     0,     0,     0,
       0,     0,   980,     0,   981,     0,     0,     0,   767,     0,
     982,   983,   984,     0,   769,     0,   985,     0,   768,     0,
       0,     0,  2403,  1238,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     975,   976,   977,     0,     0,   988,     0,     0,  2404,   978,
       0,     0,     0,     0,     0,  2405,     0,   986,     0,     0,
     764,     0,     0,     0,     0,     0,     0,     0,  2406,     0,
       0,     0,  2407,     0,     0,     0,   987,     0,     0,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,     0,  1237,     0,     0,   989,   990,     0,   980,
     769,   981,     0,     0,     0,   767,     0,   982,   983,   984,
       0,     0,     0,   985,  2408,   768,     0,     0,     0,     0,
    1238,     0,     0,  2409,     0,     0,     0,     0,     0,     0,
     771,   988,     0,     0,     0,     0,     0,     0,     0,     0,
     994,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2410,     0,   986,     0,     0,     0,     0,     0,
     995,     0,  2411,     0,     0,   996,     0,     0,  2412,     0,
     770,     0,   997,   987,   137,     0,     0,     0,     0,     0,
     772,     0,   989,   990,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   769,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   625,     0,   771,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   994,     0,   988,   626,
       0,     0,   627,   628,   629,   630,   631,   632,   633,     0,
       0,     0,     0,     0,     0,     0,   995,     0,     0,     0,
       0,   996,     0,     0,     0,     0,     0,     0,   997,     0,
     137,     0,     0,     0,     0,     0,   772,   770,   634,     0,
     635,   636,   637,   638,   639,   640,   641,     0,     0,   989,
     990,     0,  1720,     0,     0,  1721,     0,     0,  1722,   627,
     628,   629,   630,   631,   632,  1723,  1724,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   771,   642,     0,  1725,     0,  1726,     0,
       0,     0,     0,   994,     0,   634,     0,   635,   636,   637,
     638,   639,   640,   641,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   995,     0,     0,     0,     0,   996,     0,
       0,     0,     0,     0,     0,   997,     0,   137,     0,     0,
       0,     0,     0,   772,     0,     0,     0,     0,     0,     0,
       0,   642,     0,   643,   644,   645,   646,   647,     0,     0,
     648,   649,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1727,   650,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,   651,
     643,   644,   645,   646,   647, -1879,     0,   648,   649,     0,
       0,  1728,     0,     0,     0,     0,     0,  1729,     0,  1730,
       0,     0,     0,     0,     0, -1830,     0,     0,     0,   973,
       0,     0,  1731,     0,     0,     0,     0,     0,     0,     0,
     650,     0,   652,     0,     0,     0,   974,     0,     0,     0,
       0,     0,     0,    94,     0,     0,   651,     0,     0,     0,
       0,     0,     0,     0,  1732,     0,     0,     0,     0,     0,
       0,     0,   653,  1733,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   654,  1734,     0,     0,
       0,     0,     0,     0,   655,     0,     0,   656,     0,   652,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     657,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   658,     0,     0,     0,     0,     0,     0,  1735,
     659,     0,   973,     0,     0,     0,     0,     0,   975,   976,
     977,     0,  1736,   654,     0,     0,     0,   978,     0,   974,
       0,   655,     0,     0,   656,     0,     0,     0,   764,     0,
       0,     0,     0,     0,     0,     0,     0,   657,     0,  1737,
       0,     0,   660,     0,   661,   662,   663,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   979,     0,     0,     0,  1738,     0,   980,     0,   981,
       0,   664,  1739,   767,     0,   982,   983,   984,     0,     0,
       0,   985,     0,   768,     0,     0,     0,     0,     0,  1740,
    -360,     0,     0,     0,     0,     0,     0,     0,     0,   660,
       0,   661,   662,   663,     0,     0,     0, -1879,     0,     0,
       0,   975,   976,   977,     0,     0,   665,   666,   667,     0,
     978,     0,   986,     0,     0,     0,     0,     0,     0,     0,
     668,   764,     0,     0,     0,     0,     0,   669,     0,     0,
       0,   987,  1741,     0,     0,     0,     0,  -653,     0,     0,
       0,     0,  1742,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,   769,     0,     0,     0,  1743,
     980,     0,   981,   665,   666,   667,   767,     0,   982,   983,
     984,     0,     0,     0,   985,   973,   768,   668,     0,     0,
       0,     0,     0,  1744,   669,     0,   988,     0,     0,     0,
       0,     0,   974,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   973,     0,   986,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   770,     0,     0,     0,     0,
     974,     0,     0,     0,   987,     0,     0,   989,   990,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   769,  1424,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   991,
       0,   771,     0,   992,   993,     0,     0,     0,     0,     0,
       0,   994,     0,     0,   975,   976,   977,     0,     0,   988,
       0,     0,   973,   978,     0,     0,     0,     0,     0,     0,
       0,   995,     0,     0,   764,     0,   996,     0,     0,   974,
       0,     0,     0,   997,     0,   137,     0,     0,     0,     0,
       0,   772,   975,   976,   977,     0,     0,     0,   770,     0,
       0,   978,     0,     0,     0,     0,     0,   979,     0,     0,
     989,   990,   764,   980,     0,   981,     0,     0,     0,   767,
       0,   982,   983,   984,     0,     0,     0,   985,     0,   768,
       0,     0,  1442,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   991,     0,   771,   979,   992,   993,     0,     0,
       0,   980,     0,   981,   994,     0,     0,   767,     0,   982,
     983,   984,     0,     0,     0,   985,     0,   768,   986,     0,
       0,   975,   976,   977,   995,     0,     0,     0,     0,   996,
     978,     0,     0,     0,     0,     0,   997,   987,   137,     0,
       0,   764,     0,     0,   772,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,   769,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,   987,     0,     0,     0,     0,
     980,     0,   981,     0,     0,     0,   767,     0,   982,   983,
     984,     0,   988,     0,   985,     0,   768,     0,     0,   769,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   973,     0,     0,     0,     0,
     988,   770,     0,     0,     0,   986,     0,     0,     0,     0,
       0,     0,   974,   989,   990,     0,     0,     0,     0,     0,
       0,  1978,     0,     0,   987,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,   991,     0,   771,   769,   992,
     993,   989,   990,     0,     0,     0,     0,   994,     0,  1980,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   995,     0,   988,
       0,     0,   996,   991,     0,   771,     0,   992,   993,   997,
       0,   137,   973,     0,     0,   994,     0,   772,     0,     0,
       0,     0,     0,     0,   975,   976,   977,     0,     0,   974,
       0,     0,     0,   978,     0,   995,     0,     0,   770,     0,
     996,     0,     0,     0,   764,     0,     0,   997,     0,   137,
     989,   990,     0,     0,     0,   772,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1990,     0,     0,     0,     0,   979,     0,     0,
       0,     0,   991,   980,   771,   981,   992,   993,     0,   767,
       0,   982,   983,   984,   994,     0,     0,   985,   973,   768,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   995,   974,     0,     0,     0,   996,
       0,   975,   976,   977,     0,     0,   997,     0,   137,     0,
     978,     0,     0,     0,   772,     0,     0,     0,   986,     0,
       0,   764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,     0,     0,     0,     0,     0,
     980,   769,   981,     0,     0,     0,   767,     0,   982,   983,
     984,     0,     0,     0,   985,     0,   768,     0,     0,     0,
       0,     0,   973,     0,     0,     0,     0,   975,   976,   977,
       0,     0,   988,     0,     0,     0,   978,     0,     0,   974,
       0,     0,     0,     0,     0,     0,     0,   764,     0,     0,
       0,     0,     0,     0,     0,   986,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   770,     0,     0,   987,     0,     0,     0,     0,     0,
     979,     0,     0,   989,   990,     0,   980,     0,   981,     0,
       0,     0,   767,     0,   982,   983,   984,     0,   769,     0,
     985,   973,   768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   991,     0,   771,   974,   992,
     993,     0,     0,     0,     0,  2738,     0,   994,     0,   988,
       0,   975,   976,   977,     0,     0,     0,     0,     0,     0,
     978,   986,     0,     0,     0,     0,     0,   995,     0,     0,
       0,   764,   996,     0,     0,     0,     0,     0,     0,   997,
     987,   137,     0,     0,     0,     0,     0,   772,   770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     989,   990,     0,     0,   769,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   767,     0,   982,   983,
     984,     0,     0,   973,   985,     0,   768,     0,     0,     0,
     975,   976,   977,     0,   771,   988,     0,     0,     0,   978,
     974,     0,     0,     0,   994,     0,     0,     0,     0,     0,
     764,     0,     0,     0,     0,     0,     0,     0,  2739,     0,
       0,     0,     0,     0,   995,   986,     0,     0,     0,   996,
       0,     0,     0,     0,   770,     0,   997,     0,   137,     0,
       0,     0,     0,   979,   772,     0,   989,   990,     0,   980,
       0,   981,     0,     0,     0,   767,     0,   982,   983,   984,
       0,     0,     0,   985,     0,   768,     0,     0,   769,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     771,     0,   992,     0,     0,     0,     0,     0,     0,     0,
     994,  1341,   975,   976,   977,     0,     0,     0,     0,   988,
       0,   978,     0,     0,   986,     0,     0,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,     0,     0,     0,
       0,     0,   997,   987,   137,     0,     0,     0,     0,     0,
     772,     0,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,     0,     0,   769,     0,     0,
     989,   990,     0,     0,     0,     0,     0,  1408,     0,   982,
     983,   984,     0,     0,     0,   985,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   988,     0,
       0,     0,     0,     0,   771,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   994,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,     0,     0,   995,     0,     0,   770,     0,   996,
       0,     0,     0,     0,     0,     0,   997,     0,   137,   989,
     990,     0,     0,     0,   772,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   771,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   994,     0,     0,     0,     0,     0,     0,
     988,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   995,     0,     0,     0,     0,   996,     0,
       0,     0,     0,     0,     0,   997,     0,   137,     0,     0,
       0,     0,     0,   772,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   989,   990,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1903,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   994,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0, -1179,     0,     0,     0,
       0,     0,     0,     0,     0,   995,     0,     0,     0,     0,
     996,     0,     0,     0, -1179,     0,     0,   997,   244,   137
};

static const yytype_int16 yycheck[] =
{
     116,   159,   103,   394,   105,   396,   367,   103,   969,   105,
     111,   601,   602,   797,  1125,   111,   658,   856,  1152,  1174,
    1235,   728,  1216,   802,   792,  1604,  1610,  1499,  1459,  1459,
    1123,  1459,   693,  1459,   135,   426,  1377,  1459,  1366,   135,
    1459,  1130,   605,   182,   405,   436,  2019,  1815,   801,  1138,
    1128,  1138,  1267,  1548,   715,  2053,  1848,    10,  1931,  1275,
      56,    57,    58,  1152,  1481,  1152,  1387,  1119,    64,    18,
       1,   210,  1539,  1193,   706,     0,     0,    50,     1,   669,
      23,     1,    10,  1956,   185,     7,  2228,  1207,    18,  1857,
      53,   859,    10,     9,  1779,   756,    10,    60,    51,    50,
      10,    60,    50,    99,   100,    10,   102,  1386,    60,    99,
      99,   107,   108,  1329,   126,   132,  1533,     1,    89,    58,
     116,    90,    38,   765,   766,   113,    60,    59,    75,    28,
      95,   113,  1473,    40,    66,   179,   252,   133,    32,   155,
    1908,  1469,    90,   110,    50,   806,    73,   126,   145,    60,
     259,  1262,  1279,   177,    10,   168,   365,    41,    42,    43,
      44,    45,   313,    66,   178,   161,  1382,    32,   128,    73,
     144,   259,   234,   335,   816,    33,   227,  2031,  2114,   205,
     296,  1522,     1,    50,  1601,   318,    31,  2185,   117,   244,
     205,   215,    49,   326,    78,    79,   192,  1965,  1250,   162,
     422,  2488,    34,   277,    60,   191,   164,   179,   204,   116,
     359,   274,   415,   313,    10,   847,   141,   141,  1307,   118,
     145,   145,    67,    28,    69,  2496,   220,   174,   127,  1318,
     259,   370,  1359,   762,   356,  2086,   220,   132,   453,   992,
     127,   419,    22,   549,  2569,   801,    22,  1664,   205,   259,
    2454,   206,   368,  2189,   250,   113,   219,   220,     9,  1587,
    1013,   214,   258,   234,  1141,   109,    99,   100,   411,   179,
     201,   765,   766,     0,   259,   119,  1153,   202,   202,   234,
     483,   459,   179,  2554,   274,   591,  1375,    38,  1375,   504,
    1379,   234,  2060,   246,   247,   417,   418,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   259,   292,   230,  2634,
     273,   162,   841,   118,   463,   621,   269,   311,   347,   393,
     283,   237,   816,   423,   180,  2198,  2530,    73,   314,   345,
     259,  1910,   239,   190,   389,   319,   294,   979,   170,   271,
     483,  1669,   564,   459,   445,   259,   447,   448,   510,   346,
     340,   447,   448,   454,  1675,    73,    10,  1018,   454,  2044,
     511,  1682,  2015,   230,  2651,  1118,   428,   127,   364,    10,
     471,  2307,   295,   474,   475,   471,   477,  2231,   511,   480,
     481,  2034,  2035,   259,  1801,  2038,  1881,   243,  1481,   362,
     453,   313,   352,   362,   317,  1890,   392,    73,   351,    73,
    1867,   259,   511,  1870,    73,   370,   259,   403,   381,   254,
      73,   362,   359,   345,   362,   314,   412,   413,   214,   415,
     416,   346,   346,   979,   358,   421,  2079,     7,   454,   517,
     381,  2084,  1185,  1186,  1187,   991,   992,   993,   270,  1594,
    1533,   458,   438,   544,   545,  1198,  1199,   407,   544,   545,
    1778,   335,  1205,   504,   469,   468,   362,  1013,   277,   455,
    1538,  1024,  1025,   259,   348,    59,   448,   511,   421,   401,
     375,   453,    66,   269,   406,  2243,   403,   489,   443,  1140,
    1117,   582,  2624,   599,   458,   458,   582,   511,  1125,  1126,
     606,   336,  1619,   421,   511,   511,  1275,   511,  1135,   403,
     407,   511,   490,   406,   605,  1142,  1143,   458,  1601,  1598,
     489,  1598,   469,   465,   467,  2283,   463,  2285,   470,   449,
     516,   511,   511,    35,  1161,  1162,   458,   458,   455,  1581,
    1809,   426,   505,   458,   458,   506,   505,   653,  1859,   511,
     536,   321,   453,   510,   511,   467,   126,  2200,  2316,  1638,
    2235,   455,  1707,   512,   505,   351,    10,   505,   659,   508,
    1612,   557,  1118,   559,   517,   504,   562,   563,   511,   565,
    2154,  1664,  1900,   214,   393,   469,  1696,     1,  2346,  2347,
    1795,  2454,   511,  1799,  1140,  1217,   511,   511,   511,   517,
    1146,   511,   508,   511,     7,  1237,     1,   511,   503,   505,
     596,   511,   811,  1382,   469,    55,    60,    12,   459,  1937,
     234,   510,   608,  1169,   511,   472,   579,   259,   259,   475,
    1176,  1177,  1178,   510,   511,   421,   246,   511,   269,  1185,
    1186,  1187,  1188,  2100,   214,   511,  2428,  1193,   292,   458,
      64,   517,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,
     613,  1207,  1208,   510,  2505,  2506,    61,   403,   511,   419,
     164,   777,  1299,   162,   517,   510,   782,    59,    92,    93,
      62,   467,   668,   253,    66,   255,  2093,   271,  2095,   259,
     460,  1237,  2125,   799,   460,   403,   787,   788,   243,   269,
    2688,   471,   259,  1330,    99,   471,   101,   234,   103,   459,
     354,   205,   239,   804,  1260,   175,   111,   846,  1801,   455,
     351,  1955,   333,   709,  2687,  1804,   712,  2134,    23,   465,
    1875,   517,   173,   214,   470,   236,   180,   403,  2381,   403,
    1509,  1122,  2385,  1124,   403,   254,   243,   455,  2007,     7,
     403,    60,    59,   156,  2512,  2513,    33,   327,    27,    66,
     510,   345,  1389,  1506,   259,  1807,  1147,   362,  1149,   205,
     214,   411,   167,  1154,   205,   259,    10,     0,   259,   191,
    2187,   351,   284,   285,   286,  2096,   227,  1168,   269,   455,
     421,   455,   206,   259,   235,   128,   455,  2115,  1344,   243,
     294,   174,   455,    64,   244,   415,   295,   980,   981,   298,
     411,   214,  1169,   313,   987,   259,   335,   401,  2303,    31,
     234,    67,   406,    69,   458,   269,    60,  1906,  1907,  1906,
     132,    92,    93,   206,     7,   259,   467,   246,    67,   334,
      69,   202,  1474,   483,   458,   411,   259,   349,   198,     7,
     253,   421,   255,   246,  1481,    67,   259,    69,  2501,  2502,
     411,   259,   968,   172,  2711,   260,   269,   458,  1500,  2200,
     351,   274,  2305,  2306,   458,  2193,  2445,  1646,   218,   511,
     511,   322,   483,   453,  1265,   394,   517,   381,  1139,   271,
     792,   322,  1519,   291,   265,  1996,  1277,   467,   238,   510,
     510,   402,  1455,  1260,   162,  1532,  1533,   351,  2755,   259,
     505,   306,   326,   306,  1165,   415,   225,   483,   141,   489,
       7,   292,   145,   260,   327,   265,   259,   511,  1034,   198,
     475,   233,   483,  1024,  1025,  2169,   334,   397,   156,   234,
     421,   511,     7,  1570,  1687,   381,  1689,   517,   351,   389,
     209,   210,   292,  2522,   511,   367,   214,   859,  1701,  2218,
    1506,  2085,  2086,   345,   271,  1526,  1527,  1528,  1529,  1620,
     459,   473,   474,   234,  1601,   470,   478,   421,   475,   202,
     214,  1543,   259,   483,   511,   346,   120,   121,   122,   248,
     249,   510,   511,   265,   296,   253,    39,   255,  2572,   508,
     395,   259,   460,   214,    47,   178,   415,  2440,   254,   243,
    2093,   269,  2095,   471,   254,  1642,   510,   257,   421,   401,
     292,  1583,   517,   467,   406,   259,  1653,   511,  1119,  1656,
    1799,   475,  1123,  2101,   259,   269,   517,  1664,   345,  1130,
    1131,   214,   254,   438,   458,   511,  1608,  1138,   259,  1595,
    1141,  2134,  2257,  2132,  1705,  1146,   214,  1148,   269,  1150,
    1151,  1152,  1153,   458,   467,   326,   291,   511,  1319,   327,
     511,   274,   470,   517,  1620,   265,  2538,  1361,  1729,  1170,
     253,  1254,   255,  2657,   201,  2153,   259,   511,   231,   314,
     336,   254,    31,   351,   401,   253,   269,   255,   511,   406,
     160,   259,   231,   440,  2187,   277,   240,   336,   511,   334,
     254,   269,   384,   257,   517,   461,   511,   351,    48,   342,
     254,   399,    29,   346,   336,   265,  2227,   214,  1412,   511,
    1511,  1711,  1712,  2554,  2554,    65,  2554,  1266,  2554,   510,
     351,  1687,  2554,  1689,  1395,  2554,   458,   259,   457,   214,
    1696,   458,   292,   173,   327,  1701,   465,   466,   273,  1250,
    1792,   470,   274,   421,   501,   511,   253,   507,   255,   327,
     213,   110,   259,   233,   511,   105,   218,   219,   351,  1270,
     458,    31,   269,  1729,   356,   222,   358,   421,   253,  1318,
     255,   130,   254,   351,   259,   257,   238,   458,   259,   511,
     390,   459,   245,   462,   269,   464,   340,   227,    57,   467,
     421,   328,   329,  2782,   326,   235,  1307,   254,   352,   334,
     457,   361,   129,   265,   427,   268,   429,  1318,   345,   466,
     169,   394,   375,   467,  2649,  2650,     5,   297,   510,   511,
     327,   475,    92,    92,  2002,   470,   375,   416,   421,   293,
     292,    20,   191,   511,   196,   289,   467,  1386,  1820,   517,
     109,    30,   327,   421,   351,  1827,   180,   206,   801,   125,
     119,  1362,    10,  1834,  2689,    13,   190,   511,    16,    17,
     323,   325,   399,   517,  1375,   460,   351,  1848,  1379,  2058,
     351,   174,   517,  2708,   467,   453,   465,    66,   212,   180,
     511,   470,   322,     9,   234,   339,   517,   214,  1940,   467,
     444,   241,   214,   357,   234,   257,  1878,  1944,  2680,   356,
    2655,   190,   252,   206,    12,  1416,   128,   364,   242,   416,
    1416,   392,    38,   508,   421,  1686,   311,   510,   511,   259,
     383,   481,   256,   212,   517,   766,   214,  2430,  1125,  2432,
     465,   346,   259,   511,  2538,   470,   421,   259,   239,   517,
     421,   242,   269,  2778,  1455,  1494,  1150,   269,   343,  2731,
     510,  1933,   174,    61,   765,   766,   283,  2712,  2713,  2076,
     467,  2505,  2506,  2372,  2508,  1162,  1170,  2216,   363,     9,
    1481,   259,   312,    36,   314,   816,    39,   452,  2603,   511,
       9,   269,   467,    46,    47,   517,   345,  1176,  1177,  1178,
    2061,    99,   465,   101,   469,   103,    87,   470,    38,  1999,
    2000,   265,  2054,   111,   511,   816,   356,   357,    13,    38,
     517,    16,    17,   141,   265,   265,  2179,   480,    16,  1208,
       2,   371,  1533,   373,   351,     7,   511,   190,   292,   351,
      27,    94,   517,   222,   190,    33,   517,  2558,   991,   992,
     993,   292,   292,  2114,    42,   507,   488,  1453,   510,   212,
      13,    14,  1458,  1459,  1603,  1461,   212,  2039,   458,   167,
    1013,   558,   455,   351,   506,   254,   563,   250,   251,    32,
    1581,  1639,   465,  2055,  2639,  1755,   265,   470,  1627,   456,
     460,   492,   493,   494,   495,  1765,  1766,  1598,   465,  1769,
    1601,   471,  2074,   470,   421,   399,  2143,   424,   425,   421,
     163,  1612,   455,  1652,   455,   168,   164,   259,   458,  1224,
     168,  1912,   465,  1228,   465,  1200,  1201,   470,  2189,   470,
     228,  2103,   280,   281,   312,  2107,   314,  1638,   458,   192,
     456,   320,   511,   421,  2181,  2182,   325,  2546,  2547,   465,
    1666,  1186,  1187,  2552,   470,   467,   458,   458,   306,   307,
     213,   428,   260,  1664,   475,   505,   477,   410,  2352,   480,
    2354,   304,   305,  1116,  2146,  1118,   234,   356,  1121,  1202,
    1203,  1204,  1125,  2738,   356,   364,   358,   410,  2508,   467,
    2589,  1692,   399,   458,  2593,  2594,  1692,  1140,   377,    60,
     517,  1419,   458,  1146,  1422,   517,   458,  2762,   306,   458,
    1428,   309,   220,   176,  1432,   268,   356,    71,   358,  1735,
     356,  1439,   358,  2179,  1167,   458,  1169,   406,   458,   159,
     409,   161,   458,  1176,  1177,  1178,   511,   511,   417,   517,
    1756,   458,  1185,  1186,  1187,  1188,  2307,   511,   458,   428,
    1193,   159,  2289,   161,  1650,  1198,  1199,  1200,  1201,  1202,
    1203,  1204,  1205,   345,  1207,  1208,   259,    68,  2240,    70,
     323,   991,   475,   993,  2246,   259,   374,   201,   449,   458,
     511,   405,   461,   406,  2256,   280,   281,  2648,   415,    66,
    2474,    62,   259,  1236,   234,   458,  1797,   395,   333,   406,
    1801,   259,  2622,  1804,  2624,   511,  1807,   492,   493,   494,
     495,   306,   307,   231,  1710,    27,     3,  1260,   110,  1262,
     458,   458,   420,   458,   422,  1721,   492,   493,   494,   495,
     383,   317,  1728,   629,   630,   631,   632,   259,  2658,  2659,
     438,  2661,   259,   396,  2135,    24,   275,  2667,  2668,   461,
     105,   444,   458,   191,  2326,   125,  1857,  2329,  2330,    46,
     461,  1757,    18,    89,   511,   399,   458,  2128,   275,   406,
    2342,   356,   428,  1912,   407,    59,   510,   265,    40,   458,
      67,    68,    69,    70,  2356,  2357,   239,  1945,  1946,  1947,
    1948,  1949,  1950,  1951,  1952,   407,   511,   336,   511,   513,
      36,  1344,   424,    39,   315,  1906,  1907,  1908,   321,   399,
      46,    47,   264,   511,  2451,   458,     8,   458,   399,   258,
    1816,   511,   458,  1366,  1963,   510,   458,   480,   399,   371,
     458,   458,   127,  1972,  1973,    88,    88,   437,   458,  1835,
     399,    23,   394,   311,   508,  1841,   206,   314,  2420,  1392,
       7,   458,   399,    10,   511,   506,   511,   458,    94,   508,
    1688,   389,  1690,   257,  1965,  1693,  1694,  1695,    56,    57,
     234,  1699,   511,   453,  1702,  1703,   220,  2514,   125,   517,
     511,  2518,  2519,    54,   453,   449,   469,    27,   311,   405,
     415,   353,  2464,   454,  1995,   511,   198,   452,   449,  1995,
     259,   469,   458,   381,    92,   511,   404,   341,   458,  2010,
     117,   172,  2028,   511,  2015,   469,   190,   458,   259,   511,
     469,   109,   458,   469,   211,   469,  1469,   163,    85,   225,
     314,   119,   469,  2034,  2035,   469,   469,  2038,   469,   458,
     460,   453,   469,   469,   408,   102,   469,    31,   133,   511,
     237,   511,   198,   134,   511,   135,   192,   453,   115,  2060,
     136,   391,   137,  1506,   138,   356,   139,   254,   140,  2085,
    2086,   104,   504,   448,   469,   143,   453,   213,  2079,    50,
     409,  1977,   452,  2084,  2085,  2086,   449,   452,   446,   198,
     146,   149,  2093,   147,  2095,   148,  2135,   506,   274,    32,
     150,    50,   151,   290,   152,  2144,   153,   198,   115,   154,
     222,   455,   455,   455,   455,   455,   117,   415,   455,   455,
     455,   453,  2018,   310,  2020,   458,   317,   112,  2024,   199,
     225,  2132,   268,  2134,   453,   381,  2032,   194,   195,   196,
     205,   344,   259,   275,  1587,   332,   203,   233,   299,   303,
     168,   338,  1595,   508,   131,   178,   370,   214,   508,   171,
     491,   230,   132,   453,   453,    50,   198,   230,  1611,   206,
     304,    59,   206,   230,   275,   458,   254,  1620,   168,   239,
     428,   304,   279,   511,   205,   453,  2187,   323,  1631,   516,
     247,   515,   453,  2649,  2650,   385,   253,   367,   255,  2200,
     300,    31,   259,  2204,   261,   262,   263,   205,  2204,   205,
     267,    18,   269,   449,    25,    26,  1659,   274,   131,   142,
     370,   453,    50,   410,   205,   144,  1669,     9,   132,   198,
    2521,  2127,   419,  2689,  2724,   508,   508,   205,   326,   428,
     458,    10,   330,   331,  1687,   453,  1689,   383,     8,   436,
     302,   308,  2708,  1696,   511,   299,   510,    68,  1701,    70,
     396,    72,   205,   510,    50,   505,   505,   191,   319,   296,
     327,   458,   265,   335,   468,   318,  1719,   116,     7,  2570,
     443,    10,  2283,   371,  2285,    48,  1729,   416,   205,   205,
     299,   105,   479,    50,   351,   106,   107,   108,  1741,   387,
     388,  1744,   366,   265,   239,   366,   385,   301,    98,   297,
      59,   498,  2313,   499,     9,  2316,    50,  2313,   505,   506,
     113,   463,  2778,   342,   265,   382,   265,   265,   458,   112,
     488,   342,   212,   458,   110,  1778,   223,   345,   304,   423,
     234,   372,   122,   198,   480,   156,  2347,   158,   288,   291,
     342,  1794,    50,   326,   165,   311,    85,   168,   318,   326,
       7,   326,    46,   430,   421,    92,  2367,    26,    97,   127,
     202,  2367,   207,   102,   148,    75,   433,   434,   222,   239,
    2381,   178,   150,   617,  2385,   411,   521,   505,  1117,  1911,
     539,   287,  1033,   498,  1123,   788,  1125,  1126,   426,  1459,
     545,  1130,  2736,  1414,   755,  1904,  1135,  1680,  2006,  1138,
     467,  2202,   806,  1142,  1143,  2661,  2667,  1042,  1233,  2228,
     477,   859,   795,  1152,  2098,   801,  1768,  1767,  1851,  2430,
    2413,  2432,  1161,  1162,  2400,  1492,  1803,  1250,  2096,  1494,
     497,  1519,  1538,   254,  2281,   502,   257,  2448,  1541,  2345,
    1870,  2100,   509,  1303,   511,  2299,  2123,  1900,  1901,  1584,
     517,  1591,  1898,   274,  1339,   194,   195,   196,  1602,  2135,
    1344,  2142,  1924,  1973,   203,  1632,  1953,  1373,  2156,  1153,
    1375,  2182,  1389,  1972,  2350,   214,  1929,  1972,  2731,  2505,
    2506,  2355,  2360,  2389,  1937,  1679,  2454,  1362,  2394,  1570,
    2501,  2502,  2175,  2175,  2505,  2506,  2797,  2508,  1489,   300,
    2175,  2175,  1241,   152,  1940,   700,  1729,   271,   247,   243,
     996,  1964,   760,   582,   253,  2580,   255,   418,  1971,  1972,
     259,   510,   261,   262,   263,  2442,  2702,   216,   267,   451,
     269,  1270,  1960,  1903,  2112,   274,   719,   561,  1594,  2651,
      -1,    -1,    -1,  1996,    -1,  1284,    -1,  2453,  2001,    -1,
      -1,    -1,    -1,  2006,  2007,    -1,    -1,    -1,  2569,    -1,
    1299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1307,   308,
      -1,    -1,    -1,    -1,  2600,    -1,    -1,    -1,    -1,  1318,
    2486,  2487,    -1,  2489,    -1,    -1,    -1,    -1,   327,    -1,
      -1,  1330,    -1,   979,    -1,    -1,    -1,    -1,  2504,    -1,
      -1,    -1,    -1,    -1,    -1,   991,   992,   993,  2061,    -1,
      -1,    -1,   351,    -1,  2520,    -1,    -1,    -1,    -1,    -1,
      -1,  2647,    -1,  2634,    -1,    -1,    -1,  1013,    -1,   450,
      -1,    -1,    -1,    -1,    -1,    -1,  1375,    -1,    -1,  2545,
    1379,    -1,    -1,   382,  2550,  2551,    -1,    -1,    -1,    -1,
    1389,    -1,  2105,    -1,    -1,  1394,    -1,  2683,  2684,    -1,
      -1,  2114,  2115,    -1,    -1,  2571,    -1,    -1,    -1,  2680,
    2123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,  2142,
     511,    -1,    -1,  2599,   433,   434,  2602,    -1,    -1,  2605,
    2606,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2171,    -1,
    2731,    -1,    -1,    -1,    -1,    -1,  2179,    -1,   467,    -1,
      -1,    -1,  1118,    -1,    -1,    -1,  2189,  1123,   477,    -1,
    2193,    -1,  1481,    -1,  1130,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1138,    -1,    -1,  2766,    -1,    -1,   497,  2785,
      -1,    -1,    -1,   502,    85,  2218,  1152,    -1,    -1,    -1,
     509,    -1,   511,    -1,  2227,    -1,    -1,    -1,   517,    -1,
    1519,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1176,  1177,  1178,  1532,  1533,    -1,    -1,    -1,    -1,  1185,
    1186,  1187,  1188,    -1,    -1,    -1,    -1,  1193,    -1,  2262,
      -1,    -1,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,
      -1,  1207,  1208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1570,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1237,    -1,    -1,  2307,    -1,    -1,    -1,    -1,  1598,
      -1,    -1,  1601,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,  1270,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1638,
      -1,    -1,    -1,  1642,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1653,    -1,    -1,  1656,    -1,  2372,
      -1,  1307,    -1,    -1,    -1,  1664,    -1,    -1,    -1,    -1,
      -1,    -1,  1318,    -1,    -1,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,     4,    -1,     6,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
    2423,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1366,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,  1375,
      -1,    -1,    -1,  1379,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,  2466,    -1,    -1,    63,    -1,    -1,    -1,
    2473,    -1,    -1,  2476,    -1,    -1,    -1,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1797,    -1,
      -1,   382,  1801,    -1,    -1,  1804,    -1,   114,    -1,    -1,
      -1,    -1,    -1,    -1,  2527,   122,    -1,   124,    -1,    -1,
      -1,    -1,    -1,  1469,    -1,    -1,    -1,    -1,  2541,    -1,
      -1,    -1,    -1,  2546,  2547,  1481,    -1,    -1,    -1,  2552,
      -1,    -1,    -1,    -1,    -1,  2558,    -1,    -1,   155,    -1,
      -1,    -1,   433,   434,    -1,    -1,    -1,    -1,  1857,   166,
    1506,    -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2589,    -1,    -1,    -1,
    2593,  2594,    -1,    -1,    -1,    -1,    -1,  1533,    -1,    -1,
     197,    -1,    -1,    -1,  2607,    -1,   477,   204,    -1,    -1,
     207,   208,    -1,    -1,    -1,    -1,    -1,  1906,  1907,  1908,
     217,    -1,    -1,    -1,    -1,    -1,   497,   224,    -1,   226,
      -1,   502,   229,    -1,    -1,    -1,    -1,    -1,   509,    -1,
     511,    -1,    -1,    -1,    -1,    -1,  2649,  2650,    -1,    -1,
      -1,  1587,    -1,    -1,    -1,  1944,    -1,    -1,    -1,  1595,
      -1,    -1,  1598,    -1,    -1,  1601,    -1,    -1,    -1,    -1,
      -1,  2674,    -1,    -1,    -1,   272,  1965,    -1,    -1,   276,
      -1,   278,    -1,    -1,    -1,    -1,  2689,    -1,    -1,    -1,
      -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1638,    -1,    -1,  2708,    -1,  2710,  2711,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1664,    -1,
      -1,    -1,   329,  1669,    -1,    -1,  2739,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,  2749,  2750,    -1,    -1,
      -1,  1687,  2755,  1689,    -1,    -1,    -1,   354,   355,    -1,
    1696,    -1,    -1,    -1,    -1,  1701,  2769,    -1,   365,    -1,
      -1,  2060,    -1,    -1,    -1,  2778,    -1,    -1,    -1,    -1,
      -1,    -1,   379,   380,    -1,    -1,    -1,    -1,    -1,   386,
      -1,    -1,    -1,   390,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   398,    -1,    -1,  2093,    -1,  2095,    -1,    -1,    -1,
      -1,   408,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
     417,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,   426,
      -1,    -1,   102,    -1,   431,   432,    -1,    -1,   435,    -1,
     437,    -1,  1778,  2132,    -1,  2134,    -1,    -1,   445,    -1,
      -1,    -1,    -1,    -1,  2143,    -1,    -1,    -1,    -1,    -1,
      -1,  1797,    -1,    -1,    -1,  1801,    -1,    -1,  1804,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   476,
      -1,    -1,    -1,    -1,    -1,   482,    -1,    -1,    -1,    -1,
     487,    -1,  2181,  2182,    -1,    -1,    -1,    -1,  2187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,    -1,
      -1,  1857,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1900,  1901,    -1,    -1,    -1,    -1,
    1906,  1907,  1908,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   262,   263,  2283,    -1,  2285,   267,    -1,   269,
    2289,  1937,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2316,    -1,  1965,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,  2347,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    79,    80,    81,    82,
      83,    84,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2060,    -1,    -1,    -1,    -1,     1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,
      -1,  2430,    -1,  2432,    -1,    -1,    -1,    19,    -1,   122,
      -1,   421,    -1,    -1,    -1,    -1,    -1,  2093,    -1,  2095,
      -1,    -1,  2451,   433,   434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2115,
      52,    53,    -1,    -1,    -1,    -1,    -1,  2123,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,  2132,   467,  2134,    -1,
      -1,    -1,    74,    -1,    -1,    77,    -1,   477,   181,   182,
     183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,    91,
      -1,    -1,    -1,    -1,    -1,  2514,    -1,   497,    -1,  2518,
    2519,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,
      -1,   511,   114,  2179,    -1,    -1,    -1,   517,   221,    -1,
     122,  2187,   124,    -1,    -1,    -1,    -1,  2193,    -1,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,
      -1,    -1,   204,    -1,    -1,   207,   208,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,    -1,  2283,    -1,  2285,
      -1,   324,   224,    -1,   226,    -1,    -1,   229,    -1,    -1,
      -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,
    2316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     272,    -1,     1,    -1,   276,     4,   278,     6,    -1,    -1,
      -1,  2347,    11,    -1,    -1,    -1,    -1,   289,    -1,    -1,
      19,    -1,    -1,    -1,   296,   297,    -1,   299,   300,   301,
     302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,
     413,   414,    -1,    -1,   316,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,   329,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,    -1,
      -1,    -1,   354,   355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,   365,  2430,    -1,  2432,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   380,    -1,
      -1,   484,   485,   486,   386,   114,    -1,    -1,   390,    -1,
      -1,    -1,    -1,   122,    -1,   124,   398,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   426,    -1,   155,    -1,    -1,   431,
     432,    -1,    -1,   435,    -1,   437,    -1,   166,    -1,    -1,
      -1,    -1,   171,   445,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,
      -1,    -1,    -1,    -1,   476,   204,    -1,    -1,   207,   208,
     482,    -1,    -1,    -1,    -1,   487,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,   224,    -1,   226,    -1,    -1,
     229,    -1,    -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,
      -1,    -1,   514,    -1,    -1,    -1,    -1,     1,    -1,    -1,
       4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,   276,    -1,   278,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,  2649,  2650,    -1,    -1,   316,    -1,    -1,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2689,    -1,   354,   355,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,   365,    -1,   122,    -1,
     124,    -1,  2708,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     379,   380,    -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,
      -1,   390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   398,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,
      -1,    -1,   166,    -1,    -1,    -1,    -1,   171,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,    85,    -1,
      -1,    -1,   431,   432,    -1,    -1,   435,    -1,   437,    -1,
      -1,    -1,  2778,   197,    -1,   102,   445,    -1,    -1,    -1,
     204,    -1,    -1,   207,   208,    -1,    -1,    -1,    -1,   458,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
     224,    -1,   226,    -1,    -1,   229,    -1,   476,    -1,    -1,
      -1,    -1,    -1,   482,    -1,    -1,    -1,    -1,   487,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,   514,    -1,    -1,   272,    -1,
      -1,    -1,   276,    -1,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   289,   193,   194,   195,   196,
      -1,    -1,    -1,    -1,    33,    -1,   203,    36,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    67,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
     354,   355,   259,    -1,   261,   262,   263,    -1,    -1,    -1,
     267,   365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   379,   380,    -1,    -1,    -1,
      -1,    -1,   386,   122,    -1,    -1,   390,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    -1,   408,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,    -1,   163,    -1,    -1,   431,   432,    -1,
      -1,   435,    -1,   437,    -1,    -1,    -1,    -1,    -1,   178,
      -1,   445,   181,   182,   183,   184,   185,    -1,    -1,   188,
     189,    -1,    -1,   192,   458,    -1,    -1,    -1,    -1,   198,
      -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
      -1,    -1,   476,    -1,   213,   382,    -1,    -1,   482,    -1,
      -1,    -1,   221,   487,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    -1,   243,    -1,   245,    -1,    -1,    -1,
     514,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,   268,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   446,
      -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
     477,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   488,    -1,    -1,   323,   324,    -1,    -1,    -1,    -1,
     497,    -1,    -1,   332,    -1,   502,   335,    52,    53,   506,
      -1,    -1,   509,   510,   511,    -1,    -1,    -1,    63,   348,
      -1,   350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,   376,    -1,    -1,
      -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    -1,   114,
      -1,   400,    -1,    21,    -1,    -1,    -1,   122,    -1,   124,
      -1,   410,    -1,   412,   413,   414,   131,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,   453,    -1,   171,    -1,    -1,   458,
      -1,    -1,    -1,    -1,   463,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,
      -1,   480,   197,    -1,   102,   484,   485,   486,    -1,   204,
      -1,    -1,   207,   208,    -1,    -1,    -1,    -1,    -1,   498,
      -1,    -1,   217,    -1,    -1,   504,   505,    -1,    -1,   224,
      -1,   226,   511,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,   272,    -1,    -1,
      -1,   276,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   289,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,   209,   210,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,   316,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,    -1,   234,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
     248,   249,    -1,    -1,    -1,   253,    -1,   255,    -1,   354,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
     365,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,   287,
      -1,   386,    -1,    -1,    -1,   390,    -1,   295,     7,    -1,
     298,    10,    -1,   398,    13,    14,    15,    -1,   306,    -1,
     308,    -1,    21,   408,    -1,   313,    -1,    -1,    -1,    -1,
     318,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,   426,   194,   195,   196,    -1,   431,   432,    -1,   337,
     435,   203,   437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     445,    -1,   214,   351,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,   476,    -1,    -1,   382,    -1,    -1,   482,    -1,    -1,
      -1,    -1,   487,   102,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,
      -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,   455,    -1,   457,
      -1,   459,    -1,   172,   462,    -1,   464,   465,   466,   467,
      -1,   469,   470,    -1,    -1,    -1,    -1,    -1,    -1,   477,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,   351,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,   497,
     209,   210,    -1,    -1,   502,   214,    -1,    -1,    -1,    -1,
      -1,   509,    -1,   511,    -1,    -1,    -1,    -1,    -1,   517,
     382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
     249,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,   421,
     269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,   433,   434,    -1,    -1,    -1,    -1,    -1,   287,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,   298,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,
      -1,    -1,    -1,    -1,   313,   467,    -1,    -1,    -1,   318,
      -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,   327,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,
      -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,     1,    -1,
     502,    -1,   351,    -1,    -1,    -1,    -1,   509,     7,   511,
      -1,    10,    -1,    -1,    -1,   517,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   382,    37,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   421,    76,    -1,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,   433,   434,    85,    -1,    -1,    -1,
      -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,   455,    -1,   457,    -1,
     459,    -1,    -1,   462,    -1,   464,   465,   466,   467,   122,
     469,   470,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,
      -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,    -1,    -1,    -1,    -1,    -1,   517,    -1,
      -1,   174,    -1,    -1,    -1,   178,    -1,    -1,   181,   182,
     183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,   206,   203,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,   221,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,   234,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
     243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,     7,
     269,    -1,    10,    -1,    -1,   274,    -1,   280,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,   308,
      -1,    -1,    -1,    -1,   313,    -1,    -1,   194,   195,   196,
      -1,   324,    -1,    -1,    -1,    -1,   203,    -1,   327,   332,
      -1,    -1,   335,    -1,    -1,    -1,    -1,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   348,    -1,    85,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,   360,    -1,    -1,
      -1,    -1,    -1,   362,   102,   368,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,   253,   115,   255,    -1,
      -1,    -1,   259,   382,   261,   262,   263,    -1,    -1,    -1,
     267,    -1,   269,    -1,    -1,    -1,    -1,   274,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,   410,    -1,   412,
     413,   414,    -1,    -1,    -1,    -1,   415,    -1,    -1,    -1,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    -1,   433,   434,   439,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,    -1,    -1,    -1,    -1,   458,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,   467,    -1,
      -1,    -1,   475,    -1,   351,    -1,   214,    85,   477,    -1,
      -1,   484,   485,   486,   483,    -1,    -1,    -1,    -1,    97,
       7,    -1,    -1,    10,   102,   498,    -1,    -1,   497,    -1,
      -1,    -1,   505,   502,    -1,   382,   505,    -1,   511,   247,
     509,    -1,   511,    -1,    -1,   253,    -1,   255,   517,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   460,    -1,   102,   194,   195,   196,   327,
     467,    -1,    -1,    -1,   471,   203,    -1,    -1,    -1,    -1,
     477,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,
     497,    -1,    -1,    -1,    -1,   502,    -1,    -1,     7,    -1,
      -1,    10,   509,    -1,   511,    -1,    -1,    -1,    -1,   247,
     517,    -1,    -1,    -1,   382,   253,    -1,   255,    -1,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,
      -1,    -1,    -1,   421,    -1,    -1,   203,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   433,   434,   214,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,   467,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,   255,   477,
      -1,    -1,   259,   351,   261,   262,   263,    -1,    -1,    -1,
     267,    -1,   269,    -1,    -1,    -1,    -1,   274,     7,   497,
      -1,    10,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,
      -1,   509,    -1,   511,   382,    -1,    -1,    -1,    -1,   517,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,
      -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,    -1,    -1,   421,    -1,   194,   195,   196,    -1,    -1,
       7,    -1,    -1,    10,   203,   433,   434,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,   214,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    10,   102,    -1,    -1,    -1,    -1,    -1,   467,
      -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,   247,   477,
      -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,   497,
     269,    -1,    -1,    -1,   502,   274,    -1,    -1,    85,    -1,
      -1,   509,    -1,   511,   421,    -1,    -1,    -1,    -1,   517,
      -1,    -1,    -1,    -1,    -1,   102,   433,   434,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,   453,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   194,   195,   196,   327,    -1,
     467,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
     477,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     497,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,
      -1,    -1,   509,    -1,   511,    -1,    -1,    -1,   247,    -1,
     517,    -1,    -1,   382,   253,    -1,   255,   194,   195,   196,
     259,   198,   261,   262,   263,    -1,   203,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,    -1,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,   421,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   433,   434,   214,    -1,    -1,   308,
     247,    -1,    -1,    -1,    -1,    -1,   253,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   262,   263,    -1,   327,    -1,
     267,    -1,   269,    -1,    -1,    -1,    -1,   274,   467,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,   255,   477,    -1,
      -1,   259,   351,   261,   262,   263,    -1,    -1,    -1,   267,
       7,   269,    -1,    10,    -1,    -1,   274,    -1,   497,    -1,
      -1,   308,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,   382,    -1,    -1,    -1,    -1,   517,    -1,
     327,    -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,
     308,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,   327,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   433,   434,    -1,    -1,    85,    -1,
      -1,    -1,    -1,   351,    -1,   382,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,   102,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   467,    -1,
      -1,    -1,    -1,    -1,   382,   113,    -1,    -1,   477,    -1,
      -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    -1,    -1,    -1,   433,   434,   497,    -1,
      -1,    -1,    -1,   502,    -1,    -1,    -1,   415,    -1,    -1,
     509,    -1,   511,   421,    -1,    -1,    -1,    -1,   517,    -1,
      -1,    -1,    -1,    -1,    85,   433,   434,    -1,    -1,    -1,
     467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     477,   102,    -1,     7,    -1,    -1,    10,   194,   195,   196,
      -1,    -1,    -1,    -1,   192,    -1,   203,    -1,    -1,   467,
     497,    -1,   200,    -1,    -1,   502,    -1,   214,    -1,   477,
      -1,    -1,   509,    -1,   511,   213,    -1,    -1,    -1,    -1,
     517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,
     247,   509,    -1,   511,    -1,    -1,   253,   245,   255,   517,
      -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,
     267,    85,   269,    -1,    -1,    -1,    -1,   274,   266,    -1,
     268,    -1,    -1,   194,   195,   196,    -1,    -1,   102,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   214,   292,   293,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,    -1,    -1,    -1,    -1,   323,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,   351,    -1,   267,    -1,   269,    -1,
      -1,    -1,   350,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,   382,    -1,    -1,   376,   203,
      -1,    -1,    -1,    -1,    -1,   383,    -1,   308,    -1,    -1,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   396,    -1,
      -1,    -1,   400,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,   433,   434,    -1,   253,
     351,   255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,   442,   269,    -1,    -1,    -1,    -1,
     274,    -1,    -1,   451,    -1,    -1,    -1,    -1,    -1,    -1,
     467,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     477,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   480,    -1,   308,    -1,    -1,    -1,    -1,    -1,
     497,    -1,   490,    -1,    -1,   502,    -1,    -1,   496,    -1,
     421,    -1,   509,   327,   511,    -1,    -1,    -1,    -1,    -1,
     517,    -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,   467,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,   382,    37,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,
     511,    -1,    -1,    -1,    -1,    -1,   517,   421,    76,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,   433,
     434,    -1,    33,    -1,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   467,   122,    -1,    67,    -1,    69,    -1,
      -1,    -1,    -1,   477,    -1,    76,    -1,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,   502,    -1,
      -1,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,    -1,
      -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,   181,   182,   183,   184,   185,    -1,    -1,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   163,   221,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   237,
     181,   182,   183,   184,   185,   243,    -1,   188,   189,    -1,
      -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    -1,   200,
      -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    85,
      -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,    -1,   280,    -1,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,   234,    -1,    -1,   237,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   310,   254,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   324,   268,    -1,    -1,
      -1,    -1,    -1,    -1,   332,    -1,    -1,   335,    -1,   280,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,   310,
     368,    -1,    85,    -1,    -1,    -1,    -1,    -1,   194,   195,
     196,    -1,   323,   324,    -1,    -1,    -1,   203,    -1,   102,
      -1,   332,    -1,    -1,   335,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,   350,
      -1,    -1,   410,    -1,   412,   413,   414,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,   376,    -1,   253,    -1,   255,
      -1,   439,   383,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,    -1,    -1,    -1,    -1,    -1,   400,
     458,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,
      -1,   412,   413,   414,    -1,    -1,    -1,   475,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,   484,   485,   486,    -1,
     203,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     498,   214,    -1,    -1,    -1,    -1,    -1,   505,    -1,    -1,
      -1,   327,   453,    -1,    -1,    -1,    -1,   458,    -1,    -1,
      -1,    -1,   463,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   351,    -1,    -1,    -1,   480,
     253,    -1,   255,   484,   485,   486,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    85,   269,   498,    -1,    -1,
      -1,    -1,    -1,   504,   505,    -1,   382,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   327,    -1,    -1,   433,   434,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,   455,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   465,
      -1,   467,    -1,   469,   470,    -1,    -1,    -1,    -1,    -1,
      -1,   477,    -1,    -1,   194,   195,   196,    -1,    -1,   382,
      -1,    -1,    85,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   497,    -1,    -1,   214,    -1,   502,    -1,    -1,   102,
      -1,    -1,    -1,   509,    -1,   511,    -1,    -1,    -1,    -1,
      -1,   517,   194,   195,   196,    -1,    -1,    -1,   421,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
     433,   434,   214,   253,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   465,    -1,   467,   247,   469,   470,    -1,    -1,
      -1,   253,    -1,   255,   477,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,   308,    -1,
      -1,   194,   195,   196,   497,    -1,    -1,    -1,    -1,   502,
     203,    -1,    -1,    -1,    -1,    -1,   509,   327,   511,    -1,
      -1,   214,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   327,    -1,    -1,    -1,    -1,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,   382,    -1,   267,    -1,   269,    -1,    -1,   351,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
     382,   421,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   433,   434,    -1,    -1,    -1,    -1,    -1,
      -1,   441,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,   465,    -1,   467,   351,   469,
     470,   433,   434,    -1,    -1,    -1,    -1,   477,    -1,   441,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,   382,
      -1,    -1,   502,   465,    -1,   467,    -1,   469,   470,   509,
      -1,   511,    85,    -1,    -1,   477,    -1,   517,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,   102,
      -1,    -1,    -1,   203,    -1,   497,    -1,    -1,   421,    -1,
     502,    -1,    -1,    -1,   214,    -1,    -1,   509,    -1,   511,
     433,   434,    -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   455,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,   465,   253,   467,   255,   469,   470,    -1,   259,
      -1,   261,   262,   263,   477,    -1,    -1,   267,    85,   269,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   497,   102,    -1,    -1,    -1,   502,
      -1,   194,   195,   196,    -1,    -1,   509,    -1,   511,    -1,
     203,    -1,    -1,    -1,   517,    -1,    -1,    -1,   308,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,   351,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,   194,   195,   196,
      -1,    -1,   382,    -1,    -1,    -1,   203,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   421,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,   433,   434,    -1,   253,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   262,   263,    -1,   351,    -1,
     267,    85,   269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   465,    -1,   467,   102,   469,
     470,    -1,    -1,    -1,    -1,   378,    -1,   477,    -1,   382,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     203,   308,    -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,
      -1,   214,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,
     327,   511,    -1,    -1,    -1,    -1,    -1,   517,   421,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    85,   267,    -1,   269,    -1,    -1,    -1,
     194,   195,   196,    -1,   467,   382,    -1,    -1,    -1,   203,
     102,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,
      -1,    -1,    -1,    -1,   497,   308,    -1,    -1,    -1,   502,
      -1,    -1,    -1,    -1,   421,    -1,   509,    -1,   511,    -1,
      -1,    -1,    -1,   247,   517,    -1,   433,   434,    -1,   253,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,   351,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     467,    -1,   469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     477,   193,   194,   195,   196,    -1,    -1,    -1,    -1,   382,
      -1,   203,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,
     497,    -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,
      -1,    -1,   509,   327,   511,    -1,    -1,    -1,    -1,    -1,
     517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,
     433,   434,    -1,    -1,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,
      -1,    -1,    -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   497,    -1,    -1,   421,    -1,   502,
      -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,   511,   433,
     434,    -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,    -1,
     382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,   502,    -1,
      -1,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,    -1,
      -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   446,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   488,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
     502,    -1,    -1,    -1,   506,    -1,    -1,   509,   510,   511
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   520,   521,     0,   202,   346,   522,   523,   524,   525,
     526,   527,   529,   539,   541,   458,   458,   524,   156,   535,
     547,   535,   535,   259,   347,   542,   542,   125,    87,   548,
     528,   530,   539,   141,   533,   534,    27,   543,   543,   458,
     399,   549,   145,   528,   531,   532,   535,   542,   259,   458,
     540,   458,    12,    61,    99,   101,   103,   111,   167,   228,
     260,   306,   309,   374,   395,   420,   422,   438,   511,   550,
     551,   555,   566,   574,   575,   576,   577,   578,   584,   593,
     595,   600,   603,   604,   606,   607,   608,   609,   610,   611,
     612,   542,   530,   458,   234,   544,  1297,   511,  1216,  1216,
     428,   410,  1316,  1297,  1297,  1297,   399,  1216,   410,   458,
     458,  1297,   458,   458,    60,  1286,   579,     1,   458,   577,
     220,   594,   176,   613,   458,   532,   458,    75,   174,   359,
     463,   545,   546,   585,  1297,  1297,  1297,   511,  1211,  1242,
      71,  1211,   458,  1297,  1297,   556,   567,  1211,   552,   511,
     596,   597,   598,  1217,   259,   312,   314,   580,   582,   583,
    1061,  1245,  1297,   458,   511,   458,   615,   546,   345,  1313,
    1297,   214,   259,   269,   351,   421,   467,   517,   601,   602,
    1248,  1211,   259,   220,   311,  1338,   259,   475,    59,    66,
     271,   345,   401,   406,   511,   557,   558,   559,   560,   561,
     562,   563,   565,  1285,  1348,   201,   568,   569,   570,   553,
     565,   597,    23,   234,  1217,  1298,  1061,   234,   428,  1310,
    1297,    99,  1216,   236,   402,   614,   616,    29,   129,   214,
     259,   269,   283,   351,   421,   424,   425,   517,   586,   587,
     588,   591,   602,   449,   510,   605,  1329,  1242,   405,   406,
     415,    66,  1297,   458,   559,   458,   511,   558,    62,  1297,
      10,   375,   503,   571,   573,     1,   458,   570,   554,  1329,
     259,   599,  1246,  1310,   234,  1216,  1216,   581,   582,   458,
       1,   295,   317,  1271,   277,   393,   651,   652,   653,   654,
     656,   588,    18,   449,  1248,   333,  1297,   406,  1245,   458,
    1297,   511,  1212,   231,    27,   572,   231,   375,   458,   458,
     110,  1246,  1216,   458,   317,  1216,   657,   356,   417,   418,
     655,   536,     1,   458,   653,   589,   591,   259,  1245,   260,
     440,   501,   564,  1212,   259,   275,   617,   461,  1289,    24,
    1280,   105,   661,   458,   590,   591,    60,   512,  1342,   618,
     444,  1322,   191,  1290,   125,   461,   662,    18,     5,    20,
      30,    66,   222,   254,   320,   325,   356,   364,   377,   406,
     409,   417,   458,   461,   619,   620,   626,   628,   630,   631,
     632,   633,   634,   637,   638,   639,   640,   641,   646,   647,
     649,  1314,  1331,    89,  1287,   511,  1201,  1202,   458,   399,
     663,   591,   275,  1303,   356,  1330,   453,   504,  1326,   406,
     407,  1297,  1285,   116,   239,  1299,  1299,   292,   648,  1245,
    1329,   428,   265,    40,  1283,  1297,   658,   659,  1202,  1202,
     458,   175,   397,   537,   664,   665,   667,  1297,  1299,   128,
     174,   623,   356,   364,   638,  1297,  1297,  1297,  1297,  1280,
      10,   292,   354,   650,  1297,  1303,   407,   511,   659,   336,
     660,   513,   692,   694,   695,     1,  1202,   128,   352,   407,
     627,  1297,   120,   121,   122,   240,   254,   340,   352,   444,
     621,   622,   259,  1211,  1215,   424,  1211,  1211,   321,  1311,
    1311,   315,  1211,  1297,  1245,   399,   264,   749,   696,   697,
     699,   709,  1263,   458,   666,  1211,   259,   625,  1242,   625,
       8,   625,   625,   259,   624,  1242,   419,   459,   642,    34,
     170,   270,   635,   458,   399,   258,   751,   458,   697,   458,
       1,   178,   511,   700,   701,   511,   668,   127,   510,   642,
    1265,  1347,  1289,  1297,   643,   644,   510,   636,   636,   693,
     458,   399,   371,   753,   458,   458,   698,    88,    48,    65,
     105,   241,   252,   356,   357,   371,   373,   458,   505,   669,
     670,   672,   676,   677,   680,   681,   687,   688,   689,   690,
    1297,   127,   643,   437,   629,   645,  1211,   645,   265,   390,
     694,   750,   458,   399,   394,   810,   711,   702,  1297,  1287,
    1297,   356,   358,  1343,  1343,  1297,  1287,  1297,  1303,  1297,
      23,  1279,   311,   691,  1216,   174,   206,  1265,   508,   314,
     694,   752,   458,   399,   538,    22,    37,    40,    41,    42,
      43,    44,    45,    46,    76,    78,    79,    80,    81,    82,
      83,    84,   122,   181,   182,   183,   184,   185,   188,   189,
     221,   237,   280,   310,   324,   332,   335,   348,   360,   368,
     410,   412,   413,   414,   439,   484,   485,   486,   498,   505,
     712,   713,   714,   716,   717,   718,   719,   720,   721,   722,
     725,   737,   738,   740,   741,   742,   747,   748,  1297,  1318,
      27,   198,   710,  1281,   206,  1245,   511,  1298,  1298,   511,
    1213,  1214,   313,   423,  1339,  1215,  1245,   506,  1297,   177,
     215,   511,   678,  1216,   629,    10,   421,   517,   592,   277,
     356,   358,  1341,   694,   754,   458,   342,   824,   827,   246,
     306,   411,   483,  1317,   483,  1317,   483,  1317,   483,  1317,
     483,  1317,   508,  1327,   389,  1315,   128,  1245,  1239,  1242,
    1242,   234,   244,   389,   739,  1297,  1298,   174,   206,   243,
     475,   511,    10,    51,   214,   246,   247,   259,   269,   351,
     421,   467,   517,   703,  1249,  1250,  1251,   453,   675,  1214,
     257,  1302,   453,  1286,   220,  1292,   511,  1297,  1297,  1249,
    1341,   755,   811,   125,   850,   851,   517,    54,   729,   453,
     726,   469,  1243,  1244,   449,   719,   744,   745,  1249,    27,
     715,   405,  1275,  1275,  1251,   311,  1307,     1,    41,    42,
      43,    44,    45,   181,   182,   183,   184,   185,   186,   187,
     335,   348,   704,   705,   706,   707,   708,   720,   721,  1239,
     704,   454,  1245,    60,   358,   671,   682,  1245,   415,  1319,
     259,   679,  1242,   679,   353,   756,   699,   709,   812,   813,
     814,    58,   504,   828,     1,     4,     6,    11,    19,    52,
      53,    63,    74,    77,    91,   114,   122,   124,   155,   166,
     171,   197,   204,   207,   208,   217,   224,   226,   229,   272,
     276,   278,   289,   316,   329,   354,   355,   365,   379,   380,
     386,   390,   398,   408,   417,   426,   431,   432,   435,   437,
     445,   458,   476,   482,   487,   514,   852,   853,   869,   874,
     878,   883,   898,   901,   905,   909,   910,   911,   916,   930,
     934,   937,   951,   955,   958,   961,   965,   966,   970,   980,
     983,  1000,  1002,  1005,  1009,  1015,  1027,  1035,  1036,  1039,
    1040,  1044,  1049,  1050,  1058,  1073,  1083,  1092,  1097,  1104,
    1108,  1110,  1113,  1116,  1120,  1147,   852,  1292,   198,   727,
    1245,   452,  1324,    85,   102,   194,   195,   196,   203,   247,
     253,   255,   261,   262,   263,   267,   308,   327,   382,   433,
     434,   465,   469,   470,   477,   497,   502,   509,  1189,  1191,
    1192,  1193,  1194,  1195,  1196,  1224,  1238,  1239,  1250,  1252,
    1253,  1254,  1255,   469,  1244,  1242,   743,   745,   449,   259,
    1285,   704,   458,  1251,    49,   472,   683,   684,   685,   686,
    1329,  1286,   198,   674,  1291,   511,  1203,     1,   700,   814,
     458,   830,   829,   381,   836,     4,     6,    11,    19,    52,
      53,    63,    74,    77,    91,   114,   122,   124,   131,   133,
     134,   135,   136,   137,   138,   139,   140,   142,   143,   144,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     166,   171,   197,   204,   207,   208,   217,   224,   226,   229,
     272,   276,   278,   289,   316,   329,   354,   365,   380,   386,
     390,   398,   408,   417,   426,   431,   432,   435,   437,   445,
     458,   476,   482,   487,   514,  1276,   854,   870,   875,   879,
     884,   899,   902,   906,   912,   917,   931,   935,   938,   952,
     956,   959,   962,   205,   381,   893,   954,   967,   971,   981,
     984,  1001,  1003,  1006,   404,  1010,  1016,  1028,  1037,  1041,
    1045,  1051,  1059,  1074,  1084,   259,   351,   392,   421,   517,
    1096,  1098,  1105,   341,  1109,  1111,   839,  1114,  1117,  1121,
    1148,   511,  1245,   726,   117,   728,   469,   469,   469,  1257,
    1239,  1250,  1252,  1338,  1338,   469,   469,   469,   469,  1338,
    1195,  1191,  1195,   469,  1257,    73,   403,   455,  1190,   456,
     465,   470,   457,   466,   172,   469,  1256,   469,   469,  1191,
     508,   746,  1328,  1249,  1215,  1215,   190,   675,  1245,   757,
     458,   815,   458,    50,   831,   832,   833,  1284,   831,   511,
     458,   313,   855,   856,  1238,     7,    97,   247,   274,   871,
    1196,  1220,  1221,  1238,  1249,  1252,   876,  1191,  1238,   259,
     880,   881,  1207,  1208,  1209,  1242,   274,   427,   429,   885,
     886,   259,   900,  1229,  1238,   903,  1202,     7,   907,  1196,
    1197,  1198,  1219,  1240,  1241,  1242,  1250,   461,   913,  1202,
     259,   918,   919,   921,  1220,  1221,  1229,  1238,   932,  1221,
     259,   936,   460,   471,   939,   940,   941,  1179,  1180,  1181,
     201,   328,   329,   345,   399,   953,   957,  1218,  1219,   960,
    1242,   453,   963,  1325,  1221,  1178,  1179,   972,  1218,   982,
    1203,   985,   986,  1238,  1249,  1252,  1075,  1236,  1237,  1242,
      97,  1004,  1221,  1007,  1221,   173,   227,   235,   322,  1011,
    1012,   193,   259,  1017,  1021,  1022,  1023,  1207,  1230,  1238,
    1242,  1252,  1329,  1029,  1202,  1038,  1199,  1242,  1042,  1202,
    1046,  1199,    10,  1052,  1200,  1242,   156,   274,  1060,  1063,
    1064,  1067,  1068,  1069,  1070,  1071,  1072,  1204,  1205,  1218,
    1235,  1237,  1242,  1075,  1085,  1202,  1093,   115,  1099,  1100,
    1101,  1221,    97,  1106,  1220,  1112,  1203,   458,   511,   840,
     841,   844,   845,   850,  1115,  1238,  1118,  1202,   259,  1122,
    1230,  1149,  1199,   225,   730,   314,  1308,   731,   732,  1189,
    1191,  1261,  1189,  1262,   455,  1189,   511,   511,  1191,  1260,
    1260,  1260,  1223,  1238,  1250,  1252,  1259,   511,   455,  1223,
    1258,  1191,   455,  1191,  1192,  1192,  1193,  1193,  1193,  1191,
    1223,  1189,   408,   460,    31,  1282,  1286,     1,   758,   816,
     832,   415,   483,   834,   362,   505,   825,   133,   868,    31,
     858,   859,  1282,   198,  1307,  1238,  1239,  1250,  1252,   134,
     873,   453,   872,  1221,    60,   225,  1266,   881,   453,  1338,
     135,   897,  1230,  1229,  1202,   361,   481,   904,  1329,  1344,
    1307,   136,   908,   162,   459,  1198,  1335,   391,  1272,  1243,
    1244,   914,  1202,   137,   915,  1314,   138,   929,   168,   920,
    1158,  1159,   491,   922,   510,   859,   492,   493,   494,   495,
     139,   933,    50,   230,   504,   887,   140,   950,    18,   508,
     942,   943,   944,   946,    13,    14,    15,    21,   162,   172,
     209,   210,   248,   249,   287,   295,   298,   306,   313,   318,
     337,   455,   457,   459,   462,   464,   465,   466,   469,   470,
    1182,  1183,  1184,  1185,  1186,  1187,  1188,  1221,   104,   954,
    1219,  1206,   448,  1323,   973,  1329,  1203,    95,   370,   443,
     987,   988,   990,   991,  1077,   469,  1243,  1221,   453,   143,
    1008,    50,  1012,   409,  1013,  1022,   144,   458,  1018,  1020,
     488,   506,   449,   452,   446,   146,  1034,   289,   339,  1269,
     198,  1150,   147,  1043,  1314,   148,  1048,  1150,  1200,   149,
    1057,   506,  1053,  1227,  1238,  1250,  1070,  1072,  1218,   453,
    1205,   126,   453,   489,  1062,    32,  1243,   150,  1091,   180,
     239,   242,  1087,   893,  1094,  1329,  1284,   151,  1103,   230,
    1101,  1238,   152,  1107,   198,  1203,   399,   458,   458,   198,
     356,   358,  1119,   153,  1131,   115,  1123,   154,  1154,  1150,
     731,  1211,   222,   734,    28,   118,   733,  1190,   455,  1190,
     455,   455,  1190,   455,   455,   455,  1190,   455,  1190,   455,
     455,   456,   455,   455,   453,  1297,  1215,   117,   673,   458,
      64,    92,    93,   326,   458,   759,   760,   765,  1297,  1356,
      33,    36,    39,    46,    47,    67,    69,   163,   192,   198,
     200,   213,   245,   254,   268,   310,   323,   350,   376,   383,
     400,   453,   463,   480,   504,   717,   718,   722,   737,   740,
     742,   817,   822,   823,  1297,  1332,  1297,   415,   317,   835,
     112,   837,  1227,   199,   862,   254,   336,   860,   861,  1332,
      25,    26,    68,    70,    72,   106,   107,   108,   156,   158,
     165,   168,   254,   257,   450,   500,   511,   857,  1205,  1333,
     155,   345,  1225,  1239,   453,     7,  1196,  1197,  1221,  1242,
    1250,   205,   225,  1267,   381,   877,   344,   882,  1209,   887,
     904,   265,   292,  1290,  1239,  1191,   275,  1273,  1244,  1202,
     233,  1174,  1175,   847,   848,   921,  1221,   299,  1160,    99,
     340,   511,  1205,   303,   926,    36,    39,    46,    47,    94,
     163,   192,   213,   268,   323,   383,   396,   480,   927,   928,
     491,   923,  1158,  1158,  1158,  1158,  1221,  1197,  1221,   888,
     941,    22,   460,   471,   947,   948,  1180,   508,   944,   945,
     508,   847,  1325,   234,  1183,   117,   964,  1207,   131,   847,
     968,    10,    13,    16,    17,   280,   281,   306,   307,   974,
     978,   178,  1227,    10,    60,   180,   243,   475,   994,   995,
     996,   989,   990,  1079,  1308,  1347,   453,  1218,  1197,  1221,
    1013,  1329,  1201,   847,   171,  1024,  1178,  1025,  1026,  1238,
    1207,     9,    38,  1152,  1314,  1234,  1238,  1249,  1252,   230,
    1030,  1047,  1329,   132,  1054,  1238,  1054,   453,   453,  1061,
     155,   460,   471,  1221,    50,    39,    47,   213,   245,   268,
     323,   383,   480,  1065,  1066,  1297,  1086,  1329,  1221,   164,
     294,   415,  1221,  1238,   198,  1197,  1221,   846,  1245,  1227,
    1284,   230,  1126,  1151,  1152,   734,  1284,  1299,   441,  1256,
     441,  1256,  1211,  1256,  1256,  1256,  1223,   243,   475,  1256,
     455,  1191,  1256,  1256,  1249,  1308,  1297,  1298,  1298,   250,
     251,  1301,   775,   206,   179,   761,   762,   763,   764,  1238,
    1297,   254,   394,   159,   161,  1297,  1234,   304,  1305,  1245,
      59,  1238,  1238,   206,  1305,    33,   113,  1245,  1297,   511,
     458,   826,   275,   863,  1305,  1305,   861,   860,  1305,   168,
    1155,  1156,   516,   515,  1227,  1155,   239,   428,   304,   279,
     259,  1226,  1239,  1238,  1307,   416,  1161,  1162,  1243,  1244,
    1197,   453,  1268,   877,  1219,   453,  1207,   892,   893,   385,
     367,  1161,  1297,   847,   300,  1176,   849,   847,  1158,  1297,
     254,   394,   159,   161,  1297,   126,   489,   928,  1158,    99,
     100,   924,   863,   205,  1161,   205,   889,   890,   891,  1284,
      18,   449,   949,   321,   947,  1308,   847,   131,   142,   969,
    1325,   370,   975,  1325,   453,    50,   995,   997,  1227,    10,
      60,   243,   475,   992,   993,  1227,  1080,  1331,   733,   220,
     319,  1293,  1218,  1161,   205,  1201,   650,   384,  1014,  1329,
     144,  1019,     9,   198,  1030,  1238,   132,  1167,  1169,  1174,
     265,   292,   847,   508,   508,  1055,  1056,  1227,  1226,  1221,
    1061,  1061,  1061,  1061,  1061,  1061,  1061,  1061,  1066,   295,
     298,  1088,  1089,  1090,  1184,  1270,  1174,   246,   415,  1346,
     428,  1321,  1321,  1102,  1329,  1238,  1161,   205,   458,   453,
      10,  1124,  1125,  1264,  1127,  1238,  1102,  1127,  1047,     8,
    1277,   511,   735,   736,  1297,   455,  1211,  1229,  1298,  1298,
     259,   517,   766,   767,  1238,  1247,   699,   776,   763,   764,
     517,  1231,  1235,  1245,  1231,  1297,  1324,  1297,  1297,    33,
    1245,   838,   839,  1297,   510,   864,  1231,  1231,  1231,   847,
     299,  1157,  1155,  1272,  1239,   847,   302,  1163,  1244,  1161,
    1228,  1238,  1249,   168,   468,   895,  1337,     7,   230,   313,
     467,   894,  1296,    35,   284,   285,   286,   349,   473,   474,
     478,  1274,   847,   850,  1231,  1231,  1177,  1233,  1235,  1245,
    1177,   510,   925,  1197,  1198,  1197,  1198,   890,   313,   834,
      90,   362,   505,   948,  1179,   847,  1238,   847,   505,   976,
     977,   978,   979,  1323,   505,  1228,  1227,    50,   998,   993,
     191,   998,  1076,  1297,  1299,   319,  1197,  1014,   265,   292,
    1026,  1221,   219,  1031,  1329,   847,   296,  1170,   265,  1179,
    1178,  1055,  1184,  1238,  1185,  1186,  1187,  1188,  1191,  1095,
    1221,  1095,   468,  1164,  1165,   335,  1272,  1197,   842,  1228,
     318,  1227,   116,  1128,   443,  1130,   160,   297,  1153,  1171,
    1172,  1173,  1174,   326,  1205,  1231,   736,  1210,  1211,   768,
     254,   257,  1340,   511,   700,   273,   334,   465,   470,   818,
     819,   820,  1229,   818,   819,   821,   839,    48,    33,    36,
      39,    47,    94,   113,   192,   200,   213,   245,   266,   268,
     292,   293,   323,   350,   376,   383,   396,   400,   442,   451,
     480,   490,   496,   865,   866,   867,  1155,   847,  1161,   847,
     299,   896,   847,  1307,  1238,   254,   257,  1345,   927,  1161,
     366,  1161,   366,  1221,   977,   105,  1288,  1325,   998,   998,
    1228,     9,    38,   999,   227,   504,  1081,  1211,  1078,  1161,
     385,    50,   265,   239,  1032,   218,   238,   265,   292,   507,
     847,   847,   847,   847,   301,  1166,  1297,  1161,  1161,   499,
     843,  1132,  1125,  1292,    98,  1129,  1292,  1164,   847,   847,
    1173,   254,   257,  1300,  1211,   180,   190,   212,   242,   256,
     769,   770,   771,   772,   773,   774,   767,   777,  1231,  1231,
     132,  1297,  1297,   867,    59,   126,   489,     9,  1278,   866,
     847,  1238,  1198,  1198,    50,   113,   998,   463,  1295,  1295,
     342,  1201,   205,   322,  1082,  1242,  1221,  1297,  1033,  1168,
    1169,  1170,  1174,   265,   265,   265,   847,  1238,  1133,   458,
    1238,  1292,  1238,   109,   119,  1349,  1297,  1297,    57,    92,
    1349,  1350,  1297,  1333,   778,   112,  1231,  1231,  1297,  1177,
    1177,  1232,  1235,  1247,  1161,  1161,  1221,  1221,  1221,  1297,
    1201,   342,   488,  1238,  1170,   130,   169,   206,  1134,  1135,
    1136,  1138,  1142,  1144,  1145,  1146,  1282,  1290,  1238,  1297,
     767,   767,   212,  1297,  1297,   767,     3,   211,   254,   290,
     310,   338,   419,   436,   458,   479,   498,   506,   717,   722,
     723,   737,   740,   742,   779,   780,   784,   786,   789,   790,
     793,   794,   795,   800,   801,   807,   808,   809,  1332,  1333,
    1334,   458,  1229,  1021,  1297,  1178,    38,  1278,   345,   110,
     767,   767,   767,   223,  1294,   304,   798,  1297,  1245,  1297,
    1307,  1297,  1297,  1238,     9,    38,   237,   508,   334,   470,
     796,   797,   799,  1247,  1308,   804,   805,   806,   818,  1247,
     304,   305,  1306,  1021,   372,   423,  1320,   132,   426,  1143,
    1308,   234,   291,   334,   470,   785,  1245,   726,  1224,  1222,
    1224,    56,    92,   326,   330,   331,   371,   387,   388,   781,
    1349,  1350,  1351,  1352,  1353,  1354,  1355,   122,   198,   288,
    1304,  1304,     9,    38,  1178,  1247,  1247,   796,   291,   805,
    1247,    55,   244,   389,   802,   803,  1238,   164,   168,  1336,
      10,  1139,  1140,  1208,  1245,  1245,  1324,  1272,   378,   491,
     787,  1224,   190,   190,   212,   190,   212,   191,   314,  1309,
    1309,  1224,   318,   326,   791,   792,  1238,   791,  1304,  1304,
    1298,   342,  1312,   311,   343,   363,  1141,  1140,   728,  1308,
    1238,   179,   782,  1238,    10,   179,   783,  1238,    50,   791,
     326,   326,  1308,   311,  1242,   430,   724,   179,   788,  1238,
     318,  1224,   173,   227,   235,   322,  1137,  1201,  1245,   326
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   519,   521,   520,   522,   522,   523,   523,   524,   524,
     526,   525,   527,   528,   529,   530,   530,   530,   531,   531,
     532,   533,   533,   534,   536,   537,   538,   535,   540,   539,
     541,   542,   542,   543,   543,   544,   544,   545,   545,   545,
     545,   546,   546,   547,   547,   548,   548,   549,   549,   550,
     550,   550,   550,   550,   552,   551,   553,   553,   554,   554,
     556,   555,   557,   557,   557,   557,   558,   558,   559,   559,
     559,   559,   560,   561,   562,   563,   564,   564,   564,   564,
     565,   565,   567,   566,   568,   568,   568,   569,   569,   570,
     570,   570,   571,   571,   572,   572,   573,   573,   574,   575,
     575,   576,   576,   577,   577,   577,   577,   577,   577,   577,
     577,   577,   577,   577,   577,   579,   578,   580,   580,   580,
     580,   581,   581,   582,   583,   583,   585,   584,   586,   586,
     586,   586,   586,   586,   587,   587,   588,   588,   589,   588,
     590,   590,   591,   591,   591,   591,   591,   591,   592,   592,
     593,   594,   594,   595,   596,   596,   597,   598,   598,   599,
     599,   600,   601,   601,   602,   602,   603,   604,   605,   605,
     606,   607,   608,   609,   610,   611,   612,   612,   613,   613,
     614,   614,   615,   615,   617,   616,   616,   618,   618,   619,
     619,   619,   619,   619,   619,   619,   619,   619,   619,   619,
     619,   619,   620,   620,   620,   620,   620,   621,   621,   621,
     621,   622,   622,   623,   623,   623,   624,   624,   625,   625,
     625,   626,   627,   627,   627,   628,   628,   629,   629,   629,
     630,   631,   632,   632,   632,   634,   633,   635,   635,   635,
     636,   636,   636,   636,   637,   637,   638,   638,   638,   638,
     639,   640,   641,   641,   642,   642,   644,   643,   643,   645,
     646,   647,   648,   648,   649,   650,   650,   650,   651,   651,
     651,   652,   652,   653,   653,   654,   655,   655,   655,   655,
     657,   656,   658,   658,   659,   660,   660,   661,   661,   662,
     662,   663,   663,   664,   666,   665,   665,   667,   667,   668,
     668,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   670,   671,   671,   671,   672,   672,   672,   673,
     673,   674,   674,   675,   675,   676,   677,   677,   678,   678,
     679,   679,   680,   681,   682,   682,   683,   683,   683,   684,
     685,   686,   687,   688,   689,   690,   690,   691,   691,   692,
     693,   692,   694,   695,   694,   696,   696,   696,   697,   698,
     697,   697,   699,   700,   700,   700,   701,   702,   702,   703,
     703,   703,   703,   704,   704,   704,   704,   704,   704,   704,
     704,   704,   704,   704,   704,   704,   705,   705,   706,   706,
     707,   707,   707,   708,   708,   709,   710,   710,   711,   711,
     712,   712,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   712,   712,   713,   714,   715,   715,   716,   717,
     718,   718,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   719,   719,
     719,   719,   719,   719,   719,   719,   719,   719,   720,   720,
     721,   721,   722,   722,   723,   724,   724,   725,   725,   726,
     726,   727,   727,   728,   728,   729,   729,   730,   730,   731,
     732,   732,   733,   733,   734,   734,   735,   735,   736,   737,
     738,   739,   739,   739,   740,   741,   743,   742,   744,   744,
     745,   745,   746,   746,   747,   747,   748,   748,   749,   750,
     749,   751,   752,   751,   753,   754,   753,   755,   755,   757,
     756,   758,   758,   758,   759,   759,   759,   759,   760,   761,
     761,   761,   762,   763,   763,   764,   765,   766,   766,   766,
     767,   767,   768,   768,   769,   769,   769,   769,   769,   769,
     770,   771,   772,   773,   774,   775,   775,   777,   776,   778,
     778,   779,   779,   779,   779,   779,   779,   779,   779,   779,
     779,   779,   779,   779,   779,   779,   779,   780,   781,   781,
     781,   781,   781,   781,   781,   782,   782,   782,   782,   783,
     783,   783,   783,   784,   785,   785,   785,   785,   786,   787,
     787,   787,   788,   788,   789,   789,   789,   789,   789,   790,
     790,   791,   791,   792,   792,   792,   793,   794,   795,   796,
     796,   797,   797,   797,   797,   798,   798,   798,   799,   800,
     801,   802,   802,   803,   803,   803,   804,   804,   805,   805,
     806,   807,   808,   809,   810,   811,   810,   812,   812,   813,
     813,   814,   815,   814,   814,   816,   816,   817,   817,   817,
     817,   817,   817,   817,   817,   817,   817,   817,   817,   817,
     817,   817,   817,   817,   817,   817,   817,   817,   817,   817,
     817,   817,   817,   817,   817,   817,   817,   817,   817,   817,
     817,   818,   818,   819,   819,   820,   820,   820,   821,   821,
     821,   822,   823,   824,   825,   826,   824,   827,   824,   828,
     829,   828,   830,   828,   831,   831,   832,   833,   833,   833,
     834,   834,   834,   834,   834,   834,   835,   835,   836,   836,
     837,   838,   837,   839,   839,   840,   840,   840,   840,   840,
     842,   841,   843,   843,   844,   845,   846,   846,   848,   849,
     847,   851,   850,   850,   852,   852,   852,   852,   852,   852,
     852,   852,   852,   852,   852,   852,   852,   852,   852,   852,
     852,   852,   852,   852,   852,   852,   852,   852,   852,   852,
     852,   852,   852,   852,   852,   852,   852,   852,   852,   852,
     852,   852,   852,   852,   852,   852,   852,   852,   852,   852,
     852,   852,   852,   852,   852,   854,   853,   855,   855,   855,
     855,   855,   855,   855,   855,   855,   855,   855,   855,   855,
     855,   855,   855,   855,   855,   855,   856,   856,   857,   857,
     858,   858,   859,   859,   859,   859,   859,   860,   861,   861,
     862,   862,   863,   863,   864,   864,   865,   865,   866,   866,
     866,   866,   866,   866,   866,   866,   866,   866,   866,   866,
     866,   866,   866,   866,   866,   866,   866,   866,   866,   866,
     866,   866,   866,   866,   867,   867,   868,   868,   870,   869,
     871,   871,   871,   872,   872,   873,   873,   875,   874,   876,
     876,   877,   877,   879,   878,   880,   880,   881,   882,   882,
     884,   883,   885,   886,   886,   886,   886,   887,   888,   887,
     889,   889,   890,   890,   891,   891,   891,   891,   892,   892,
     892,   892,   893,   893,   894,   894,   895,   895,   896,   896,
     897,   897,   899,   898,   900,   900,   902,   901,   903,   903,
     904,   904,   904,   904,   904,   906,   905,   907,   908,   908,
     909,   910,   912,   911,   913,   913,   914,   914,   915,   915,
     917,   916,   918,   918,   918,   918,   918,   918,   918,   919,
     920,   919,   921,   922,   922,   922,   922,   922,   923,   923,
     924,   924,   925,   925,   926,   926,   927,   927,   928,   928,
     928,   928,   928,   928,   928,   928,   928,   928,   928,   928,
     928,   928,   928,   928,   929,   929,   931,   930,   932,   932,
     932,   932,   932,   933,   933,   935,   934,   936,   938,   937,
     939,   940,   940,   941,   941,   941,   942,   942,   943,   943,
     944,   945,   946,   946,   947,   947,   948,   948,   948,   948,
     949,   949,   950,   950,   952,   951,   953,   953,   953,   953,
     953,   953,   953,   954,   954,   956,   955,   957,   959,   958,
     960,   962,   961,   963,   964,   964,   965,   967,   966,   968,
     968,   968,   969,   969,   971,   970,   972,   973,   973,   974,
     974,   974,   975,   975,   976,   976,   977,   978,   978,   978,
     978,   978,   978,   978,   979,   979,   981,   980,   982,   982,
     984,   983,   985,   986,   986,   986,   987,   987,   987,   987,
     989,   988,   990,   991,   992,   992,   993,   993,   993,   993,
     993,   993,   994,   994,   995,   995,   996,   996,   996,   996,
     996,   997,   998,   998,   999,   999,  1001,  1000,  1003,  1002,
    1004,  1004,  1006,  1005,  1007,  1007,  1008,  1008,  1010,  1009,
    1011,  1011,  1012,  1012,  1012,  1012,  1013,  1013,  1014,  1014,
    1014,  1014,  1016,  1015,  1017,  1018,  1017,  1017,  1019,  1019,
    1020,  1020,  1021,  1021,  1022,  1022,  1022,  1022,  1022,  1023,
    1023,  1024,  1024,  1025,  1025,  1026,  1028,  1027,  1029,  1030,
    1030,  1031,  1031,  1031,  1031,  1031,  1031,  1031,  1032,  1032,
    1033,  1033,  1034,  1034,  1035,  1037,  1036,  1038,  1039,  1041,
    1040,  1042,  1043,  1043,  1045,  1044,  1046,  1047,  1047,  1047,
    1048,  1048,  1049,  1051,  1050,  1052,  1052,  1053,  1053,  1054,
    1054,  1055,  1055,  1056,  1057,  1057,  1059,  1058,  1060,  1060,
    1060,  1060,  1060,  1060,  1061,  1061,  1062,  1062,  1063,  1064,
    1065,  1065,  1066,  1066,  1066,  1066,  1066,  1066,  1066,  1066,
    1067,  1067,  1068,  1069,  1069,  1070,  1071,  1071,  1072,  1072,
    1074,  1073,  1076,  1075,  1077,  1077,  1078,  1078,  1079,  1079,
    1080,  1080,  1081,  1081,  1081,  1082,  1082,  1082,  1084,  1083,
    1085,  1086,  1086,  1087,  1087,  1087,  1087,  1088,  1088,  1088,
    1088,  1088,  1088,  1089,  1090,  1090,  1091,  1091,  1093,  1092,
    1092,  1094,  1094,  1094,  1094,  1095,  1095,  1096,  1096,  1096,
    1096,  1098,  1097,  1099,  1100,  1100,  1101,  1101,  1101,  1102,
    1102,  1103,  1103,  1105,  1104,  1106,  1106,  1106,  1107,  1107,
    1108,  1109,  1109,  1111,  1110,  1112,  1112,  1114,  1113,  1115,
    1117,  1116,  1118,  1119,  1119,  1119,  1121,  1120,  1122,  1123,
    1123,  1124,  1124,  1125,  1126,  1126,  1127,  1128,  1128,  1129,
    1129,  1130,  1130,  1131,  1131,  1133,  1132,  1134,  1134,  1134,
    1134,  1134,  1135,  1136,  1136,  1137,  1137,  1137,  1137,  1137,
    1138,  1139,  1139,  1140,  1140,  1140,  1141,  1141,  1141,  1141,
    1142,  1143,  1143,  1144,  1145,  1146,  1146,  1148,  1147,  1149,
    1150,  1150,  1151,  1151,  1151,  1151,  1152,  1152,  1153,  1153,
    1154,  1154,  1155,  1156,  1156,  1157,  1157,  1158,  1159,  1159,
    1160,  1160,  1161,  1162,  1162,  1163,  1163,  1164,  1165,  1165,
    1166,  1166,  1167,  1167,  1168,  1168,  1168,  1169,  1170,  1171,
    1171,  1171,  1172,  1173,  1174,  1175,  1175,  1176,  1176,  1177,
    1177,  1178,  1179,  1181,  1180,  1182,  1182,  1182,  1183,  1183,
    1183,  1183,  1183,  1183,  1183,  1183,  1183,  1183,  1183,  1183,
    1183,  1183,  1183,  1183,  1183,  1183,  1183,  1183,  1183,  1183,
    1183,  1183,  1184,  1184,  1185,  1185,  1186,  1186,  1187,  1188,
    1189,  1189,  1190,  1190,  1190,  1191,  1191,  1191,  1192,  1192,
    1192,  1193,  1193,  1194,  1194,  1194,  1195,  1195,  1196,  1196,
    1196,  1196,  1196,  1196,  1197,  1197,  1198,  1199,  1200,  1201,
    1201,  1202,  1203,  1204,  1204,  1205,  1206,  1206,  1207,  1208,
    1208,  1208,  1209,  1210,  1210,  1211,  1212,  1213,  1213,  1214,
    1215,  1215,  1216,  1217,  1218,  1218,  1219,  1219,  1219,  1220,
    1220,  1221,  1221,  1221,  1221,  1221,  1221,  1221,  1221,  1221,
    1221,  1222,  1222,  1223,  1223,  1223,  1224,  1224,  1224,  1224,
    1224,  1224,  1224,  1225,  1225,  1226,  1226,  1227,  1227,  1228,
    1228,  1229,  1229,  1230,  1230,  1230,  1231,  1231,  1231,  1232,
    1232,  1233,  1233,  1234,  1234,  1234,  1235,  1236,  1237,  1237,
    1238,  1239,  1239,  1239,  1239,  1240,  1240,  1241,  1241,  1241,
    1241,  1242,  1242,  1243,  1244,  1244,  1245,  1246,  1247,  1247,
    1248,  1248,  1248,  1248,  1248,  1248,  1248,  1249,  1249,  1250,
    1250,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1252,  1252,
    1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,  1252,
    1253,  1253,  1254,  1254,  1254,  1255,  1255,  1255,  1255,  1256,
    1256,  1256,  1257,  1257,  1257,  1258,  1258,  1258,  1259,  1259,
    1260,  1260,  1261,  1261,  1262,  1262,  1263,  1264,  1264,  1265,
    1265,  1266,  1266,  1267,  1267,  1268,  1268,  1269,  1269,  1269,
    1270,  1270,  1271,  1271,  1271,  1272,  1272,  1273,  1273,  1274,
    1274,  1274,  1274,  1274,  1274,  1274,  1274,  1275,  1275,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,
    1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1276,  1277,
    1277,  1278,  1278,  1279,  1279,  1280,  1280,  1281,  1281,  1282,
    1282,  1283,  1283,  1284,  1284,  1285,  1285,  1286,  1286,  1287,
    1287,  1288,  1288,  1289,  1289,  1290,  1290,  1291,  1291,  1292,
    1292,  1293,  1293,  1293,  1294,  1294,  1295,  1295,  1296,  1296,
    1297,  1297,  1298,  1298,  1298,  1299,  1299,  1300,  1300,  1300,
    1301,  1301,  1301,  1302,  1302,  1303,  1303,  1304,  1304,  1305,
    1305,  1306,  1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,
    1309,  1310,  1310,  1310,  1310,  1311,  1311,  1312,  1312,  1313,
    1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,  1318,
    1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,  1322,
    1323,  1323,  1324,  1324,  1325,  1325,  1326,  1326,  1326,  1327,
    1327,  1328,  1328,  1329,  1329,  1330,  1330,  1331,  1331,  1332,
    1332,  1333,  1333,  1334,  1334,  1335,  1335,  1336,  1336,  1337,
    1337,  1338,  1338,  1339,  1339,  1340,  1340,  1341,  1341,  1342,
    1342,  1343,  1343,  1344,  1344,  1345,  1345,  1346,  1346,  1347,
    1347,  1348,  1348,  1348,  1349,  1349,  1350,  1350,  1351,  1351,
    1352,  1352,  1353,  1353,  1354,  1354,  1355,  1355,  1356,  1356
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
       1,     1,     0,     4,     3,     2,     1,     2,     0,     1,
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
       2,     0,     2,     2,     3,     3,     3,     2,     0,     3,
       1,     1,     0,     1,     1,     0,     3,     2,     1,     0,
       4,     4,     0,     1,     0,     4,     4,     0,     2,     3,
       0,     1,     1,     0,     4,     4,     6,     0,     2,     0,
       2,     1,     2,     3,     0,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     3,     4,     1,     2,     3,     1,     2,     3,     3,
       0,     3,     0,     7,     0,     5,     0,     2,     0,     2,
       0,     3,     0,     2,     4,     0,     2,     4,     0,     4,
       4,     0,     3,     0,     4,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     2,     1,     0,     1,     0,     4,
       2,     0,     2,     4,     4,     0,     1,     1,     1,     1,
       1,     0,     4,     5,     1,     2,     1,     3,     3,     0,
       4,     0,     1,     0,     4,     4,     6,     6,     0,     1,
       2,     0,     1,     0,     3,     1,     2,     0,     3,     5,
       0,     3,     2,     0,     1,     1,     0,     4,     6,     0,
       3,     1,     3,     2,     2,     2,     3,     0,     3,     0,
       3,     0,     3,     0,     1,     0,     3,     1,     1,     1,
       1,     1,     7,     0,     1,     1,     1,     1,     1,     1,
       4,     1,     2,     1,     2,     3,     0,     1,     2,     1,
       3,     1,     1,     4,     1,     1,     1,     0,     4,     5,
       0,     2,     0,     4,     3,     3,     1,     1,     1,     1,
       0,     1,     2,     0,     2,     0,     2,     2,     0,     2,
       0,     2,     2,     0,     2,     0,     2,     2,     0,     2,
       0,     2,     2,     1,     2,     1,     1,     2,     2,     2,
       1,     1,     2,     2,     2,     0,     2,     0,     2,     0,
       2,     1,     1,     0,     2,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     1,     1,     3,     3,     1,     3,     3,
       1,     3,     1,     2,     2,     1,     3,     1,     1,     3,
       1,     3,     1,     3,     1,     2,     2,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     0,     2,     1,     1,
       1,     3,     1,     1,     2,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     3,     1,
       2,     1,     1,     1,     1,     2,     2,     2,     4,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     2,     2,     1,     1,     1,     3,     2,     2,
       1,     1,     3,     3,     4,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     5,
       5,     5,     4,     5,     5,     5,     5,     5,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     5,     0,     3,     2,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     0,     0,     1,     0,
       1,     0,     1,     0,     2,     0,     2,     0,     1,     1,
       0,     1,     0,     1,     2,     0,     2,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     1,     0,     1,     0,     1,     1,
       0,     2,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     2,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     3,     0,     1,     0,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     2,     1,     1,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     2
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
#line 1349 "parser.y" /* yacc.c:1646  */
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
#line 6181 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1360 "parser.y" /* yacc.c:1646  */
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
#line 6204 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1396 "parser.y" /* yacc.c:1646  */
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
#line 6228 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 1451 "parser.y" /* yacc.c:1646  */
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
#line 6253 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 1480 "parser.y" /* yacc.c:1646  */
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
#line 6278 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 1513 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 6286 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1519 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 6294 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1531 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 6302 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1541 "parser.y" /* yacc.c:1646  */
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
#line 6337 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1572 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6345 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 1579 "parser.y" /* yacc.c:1646  */
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
#line 6378 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1615 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6384 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1616 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6390 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1625 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6403 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1634 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6416 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1648 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6424 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1652 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6432 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1662 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6440 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1671 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6452 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1696 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6465 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1714 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6477 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1727 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
#line 6487 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1756 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6495 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1763 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6503 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1770 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6511 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1777 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 6523 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1788 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6531 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1792 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6539 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1796 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6547 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1800 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6555 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1814 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 6564 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1819 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 6572 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1827 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 6580 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1839 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 6588 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1843 "parser.y" /* yacc.c:1646  */
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
#line 6604 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1864 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6612 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6620 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1875 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6629 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1880 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6638 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1891 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 6652 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1905 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	yyerrok;
  }
#line 6661 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1936 "parser.y" /* yacc.c:1646  */
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
#line 6689 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1964 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 6703 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1974 "parser.y" /* yacc.c:1646  */
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
#line 6720 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1987 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 6732 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2003 "parser.y" /* yacc.c:1646  */
    {
	  check_on_off_duplicate = 0;
  }
#line 6740 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2010 "parser.y" /* yacc.c:1646  */
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
#line 6759 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2025 "parser.y" /* yacc.c:1646  */
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
#line 6778 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2045 "parser.y" /* yacc.c:1646  */
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
#line 6795 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2058 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 6807 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2069 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 6817 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2075 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6827 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2081 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6837 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2087 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 6847 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2093 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6857 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2099 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 6868 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2109 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 6876 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2113 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6884 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2120 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6892 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2124 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 6900 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2128 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 6908 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2132 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 6916 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2139 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6924 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2143 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 6932 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2149 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6938 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2150 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6944 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2151 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6950 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2152 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 6956 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2153 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 6962 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2154 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 6968 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2158 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 6974 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2159 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 6980 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2167 "parser.y" /* yacc.c:1646  */
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
#line 6995 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2181 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7003 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2185 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7011 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2193 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7019 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2200 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7027 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2204 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7039 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2215 "parser.y" /* yacc.c:1646  */
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
#line 7060 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2235 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7072 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2243 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7084 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2253 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7090 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2254 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7096 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2261 "parser.y" /* yacc.c:1646  */
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
#line 7118 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2281 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7124 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2282 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7130 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2287 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7138 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2291 "parser.y" /* yacc.c:1646  */
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
#line 7158 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2312 "parser.y" /* yacc.c:1646  */
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
#line 7180 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2335 "parser.y" /* yacc.c:1646  */
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
#line 7261 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2416 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7269 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2420 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7277 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2429 "parser.y" /* yacc.c:1646  */
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
#line 7294 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2448 "parser.y" /* yacc.c:1646  */
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
#line 7309 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2464 "parser.y" /* yacc.c:1646  */
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
#line 7325 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2482 "parser.y" /* yacc.c:1646  */
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
#line 7341 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2500 "parser.y" /* yacc.c:1646  */
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
#line 7357 "parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 2517 "parser.y" /* yacc.c:1646  */
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
#line 7373 "parser.c" /* yacc.c:1646  */
    break;

  case 177:
#line 2534 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7382 "parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 2542 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7392 "parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 2551 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7402 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2566 "parser.y" /* yacc.c:1646  */
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
#line 7423 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2583 "parser.y" /* yacc.c:1646  */
    {
	validate_file (current_file, (yyvsp[-3]));
  }
#line 7431 "parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 2587 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
#line 7443 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2621 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7453 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2627 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7467 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2637 "parser.y" /* yacc.c:1646  */
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
#line 7484 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2650 "parser.y" /* yacc.c:1646  */
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
#line 7501 "parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 2663 "parser.y" /* yacc.c:1646  */
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
#line 7518 "parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 2686 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7526 "parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 2693 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7534 "parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 2706 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7542 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2718 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
#line 7551 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2725 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 7557 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2726 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 7563 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2727 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 7569 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2735 "parser.y" /* yacc.c:1646  */
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
#line 7601 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2764 "parser.y" /* yacc.c:1646  */
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
#line 7640 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2801 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (-1); }
#line 7646 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2804 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (literal_value ((yyvsp[0])));
  }
#line 7654 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2809 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (literal_value ((yyvsp[0])));
  }
#line 7662 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2819 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
#line 7671 "parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 2830 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[0]);
  }
#line 7680 "parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 2845 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
#line 7688 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2853 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 7697 "parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2858 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 7706 "parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 2863 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 7715 "parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2872 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 7723 "parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 2876 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 7732 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2892 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 7741 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2897 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 7750 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2902 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 7759 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2907 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 7768 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2918 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 7777 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2929 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
#line 7785 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2939 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 7794 "parser.c" /* yacc.c:1646  */
    break;

  case 253:
#line 2944 "parser.y" /* yacc.c:1646  */
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
#line 7816 "parser.c" /* yacc.c:1646  */
    break;

  case 256:
#line 2969 "parser.y" /* yacc.c:1646  */
    {
    key_component_list = NULL;
  }
#line 7824 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 2979 "parser.y" /* yacc.c:1646  */
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
#line 7841 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 2997 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[0]);
  }
#line 7850 "parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 3008 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
#line 7858 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 3022 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[0]);
  }
#line 7867 "parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 3029 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7873 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3030 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 7879 "parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 3031 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7885 "parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 3040 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 7893 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3059 "parser.y" /* yacc.c:1646  */
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
#line 7922 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 3086 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 7928 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3087 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 7934 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3088 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7940 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3089 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 7946 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3096 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 7955 "parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 3101 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 7967 "parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 3128 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 7975 "parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 3137 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 7985 "parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 3151 "parser.y" /* yacc.c:1646  */
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
#line 8002 "parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 3169 "parser.y" /* yacc.c:1646  */
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
#line 8022 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3186 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8030 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3193 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8038 "parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 3197 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8046 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3208 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8060 "parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 3218 "parser.y" /* yacc.c:1646  */
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
#line 8079 "parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 3248 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
#line 8088 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3261 "parser.y" /* yacc.c:1646  */
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
#line 8112 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3281 "parser.y" /* yacc.c:1646  */
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
#line 8150 "parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 3316 "parser.y" /* yacc.c:1646  */
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
#line 8182 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3347 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8190 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3353 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8196 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3354 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8202 "parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 3358 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8208 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 3359 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8214 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 3367 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8223 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3378 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8232 "parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 3383 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8244 "parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3406 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8253 "parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 3418 "parser.y" /* yacc.c:1646  */
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
#line 8272 "parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3446 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8280 "parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3453 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8288 "parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3460 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8296 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3469 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
#line 8306 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3481 "parser.y" /* yacc.c:1646  */
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
#line 8357 "parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 3533 "parser.y" /* yacc.c:1646  */
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
#line 8373 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3553 "parser.y" /* yacc.c:1646  */
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
#line 8389 "parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 3565 "parser.y" /* yacc.c:1646  */
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
#line 8405 "parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3608 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8415 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3614 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8425 "parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3623 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8433 "parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3626 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8444 "parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 3633 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8457 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3653 "parser.y" /* yacc.c:1646  */
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
#line 8476 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3668 "parser.y" /* yacc.c:1646  */
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
#line 8500 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3688 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8514 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3701 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8522 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3708 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8532 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3714 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8542 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3720 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8552 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3729 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8562 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3738 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8570 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3742 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 8583 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3753 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8589 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3754 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8595 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3755 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8601 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3756 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8607 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3761 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8615 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3765 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8623 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3769 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 8631 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3773 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 8639 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3777 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8647 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3781 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 8655 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3785 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 8663 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3789 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 8671 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3793 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 8679 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3797 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 8687 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3801 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8695 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3805 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 8703 "parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 3809 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8715 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3841 "parser.y" /* yacc.c:1646  */
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
#line 8742 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3867 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8750 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3871 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 8759 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3879 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 8768 "parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 3885 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 8777 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 3913 "parser.y" /* yacc.c:1646  */
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
#line 8799 "parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 3937 "parser.y" /* yacc.c:1646  */
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
#line 8827 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3964 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 8835 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3968 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 8843 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 3977 "parser.y" /* yacc.c:1646  */
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
#line 8866 "parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 4002 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 8875 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4018 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8883 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4022 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8891 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4026 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 8899 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4030 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 8907 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4034 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8915 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4038 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8923 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4042 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 8931 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4046 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 8939 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4050 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 8947 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4054 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 8955 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4058 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 8963 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4062 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 8971 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4066 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8980 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4071 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 8989 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4076 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 8997 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4080 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9005 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4084 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9017 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4092 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9025 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4096 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9033 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4100 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9045 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4108 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9053 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4112 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9061 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4116 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9069 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4120 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9077 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4124 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9085 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4128 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9093 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4132 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9101 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4136 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9109 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4140 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9121 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4148 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9133 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4156 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9141 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4160 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9149 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4164 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9157 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4168 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9165 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4172 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9173 "parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 4176 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
#line 9182 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4196 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9192 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4202 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9202 "parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 4215 "parser.y" /* yacc.c:1646  */
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
#line 9221 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4233 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9229 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4243 "parser.y" /* yacc.c:1646  */
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
#line 9253 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4264 "parser.y" /* yacc.c:1646  */
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
#line 9275 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4284 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9281 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4285 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9287 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4289 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9293 "parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 4290 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9299 "parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 4295 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9307 "parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 4302 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9316 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4310 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9324 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4317 "parser.y" /* yacc.c:1646  */
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
#line 9349 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4340 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9355 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4343 "parser.y" /* yacc.c:1646  */
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
#line 9372 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4358 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9378 "parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 4359 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9384 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4364 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9392 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4370 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9398 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4372 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9404 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4377 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9413 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4388 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
#line 9422 "parser.c" /* yacc.c:1646  */
    break;

  case 490:
#line 4399 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
#line 9431 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4409 "parser.y" /* yacc.c:1646  */
    {
	/* Stay quiet on this
	PENDING ("SYNCHRONIZED RIGHT");
	*/
  }
#line 9441 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4421 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
#line 9450 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4432 "parser.y" /* yacc.c:1646  */
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
#line 9477 "parser.c" /* yacc.c:1646  */
    break;

  case 496:
#line 4460 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[0]);
  }
#line 9486 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4468 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9492 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4469 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9498 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4473 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9504 "parser.c" /* yacc.c:1646  */
    break;

  case 501:
#line 4474 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9510 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4479 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9521 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4492 "parser.y" /* yacc.c:1646  */
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
#line 9538 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4505 "parser.y" /* yacc.c:1646  */
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
#line 9558 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4526 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 9571 "parser.c" /* yacc.c:1646  */
    break;

  case 507:
#line 4535 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 9585 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4550 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 9598 "parser.c" /* yacc.c:1646  */
    break;

  case 510:
#line 4559 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9608 "parser.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4571 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 9618 "parser.c" /* yacc.c:1646  */
    break;

  case 513:
#line 4577 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9628 "parser.c" /* yacc.c:1646  */
    break;

  case 515:
#line 4588 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  }
#line 9640 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4606 "parser.y" /* yacc.c:1646  */
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
#line 9656 "parser.c" /* yacc.c:1646  */
    break;

  case 520:
#line 4619 "parser.y" /* yacc.c:1646  */
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
#line 9674 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 4637 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9682 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4644 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 9692 "parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 4650 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
#line 9700 "parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 4661 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
#line 9708 "parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 4674 "parser.y" /* yacc.c:1646  */
    {
      current_report->control_final = 1;
  }
#line 9716 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 4686 "parser.y" /* yacc.c:1646  */
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[0]), current_report->controls);
  }
#line 9725 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 4697 "parser.y" /* yacc.c:1646  */
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
#line 9765 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 4736 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->lines = cb_get_int ((yyvsp[0]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[0]);
	}
  }
#line 9779 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4746 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-1]))) {
		current_report->lines = cb_get_int ((yyvsp[-1]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[-1]);
	}
  }
#line 9793 "parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 4756 "parser.y" /* yacc.c:1646  */
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
#line 9813 "parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 4790 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE LIMIT", SYN_CLAUSE_25, &check_duplicate);
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->columns = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_columns = (yyvsp[0]);
	}
  }
#line 9826 "parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 4802 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->heading = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_heading = (yyvsp[0]);
	}
  }
#line 9838 "parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 4813 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->first_detail = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_first_detail = (yyvsp[0]);
	}
  }
#line 9850 "parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 4824 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->last_control = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_last_control = (yyvsp[0]);
	}
  }
#line 9862 "parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 4835 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->last_detail = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_last_detail = (yyvsp[0]);
	}
  }
#line 9874 "parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 4846 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->footing = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_footing = (yyvsp[0]);
	}
  }
#line 9886 "parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 4861 "parser.y" /* yacc.c:1646  */
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
#line 9908 "parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 4906 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
#line 9916 "parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 4913 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
#line 9924 "parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 4917 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
#line 9932 "parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 4923 "parser.y" /* yacc.c:1646  */
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
#line 9943 "parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 4930 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
#line 9951 "parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 4934 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
#line 9959 "parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 4940 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
#line 9967 "parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 4944 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[0]);
  }
#line 9976 "parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 4949 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[-2]);
      current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 9986 "parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 4955 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
#line 9994 "parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 4961 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
#line 10002 "parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 4965 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[0]);
  }
#line 10011 "parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 4970 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
#line 10019 "parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 4974 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_flag |= COB_REPORT_ALL;
  }
#line 10028 "parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 4982 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
#line 10036 "parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 4989 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL ((yyvsp[0]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int((yyvsp[0]));
  }
#line 10049 "parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 4998 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[0]));
  }
#line 10058 "parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5003 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[0]));
  }
#line 10067 "parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5008 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
#line 10075 "parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 5021 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->report_sum_list = (yyvsp[-1]);
	build_sum_counter( current_report, current_field);
  }
#line 10085 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5031 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_sum_upon = (yyvsp[0]);
  }
#line 10093 "parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5038 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_reset = (yyvsp[0]);
  }
#line 10101 "parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5042 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
#line 10109 "parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5049 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_when = (yyvsp[0]);
  }
#line 10118 "parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5054 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
  }
#line 10128 "parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5060 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10139 "parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5067 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
  }
#line 10149 "parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5073 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10160 "parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5083 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
  }
#line 10168 "parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 5087 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_NEGATE;
  }
#line 10177 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5099 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10185 "parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 5103 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_control = (yyvsp[0]);
  }
#line 10193 "parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 5115 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_LINE;
  }
#line 10202 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5131 "parser.y" /* yacc.c:1646  */
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
#line 10212 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5137 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
#line 10220 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5141 "parser.y" /* yacc.c:1646  */
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
#line 10239 "parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 5156 "parser.y" /* yacc.c:1646  */
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
#line 10258 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5179 "parser.y" /* yacc.c:1646  */
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
#line 10276 "parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 5205 "parser.y" /* yacc.c:1646  */
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
#line 10292 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5229 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_COLUMN_LEFT;
  }
#line 10300 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5233 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_COLUMN_RIGHT;
  }
#line 10308 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5237 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_COLUMN_CENTER;
  }
#line 10316 "parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 5244 "parser.y" /* yacc.c:1646  */
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
#line 10340 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5273 "parser.y" /* yacc.c:1646  */
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
#line 10373 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5305 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->report_source = (yyvsp[-1]);
  }
#line 10382 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5313 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
#line 10391 "parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 5321 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
#line 10399 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5330 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10410 "parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 5337 "parser.y" /* yacc.c:1646  */
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
#line 10426 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5363 "parser.y" /* yacc.c:1646  */
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
#line 10461 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5394 "parser.y" /* yacc.c:1646  */
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
#line 10491 "parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 5420 "parser.y" /* yacc.c:1646  */
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
#line 10511 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5443 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10519 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5447 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10527 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5451 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10535 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5455 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10543 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5459 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10551 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5463 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10559 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5467 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10567 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5471 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10575 "parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5475 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10583 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5479 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10591 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5483 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
#line 10599 "parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5487 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
#line 10607 "parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5491 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10615 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5495 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10623 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5499 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10631 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5503 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10639 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5507 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10648 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5512 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10656 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5516 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10664 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5520 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10673 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5525 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10682 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5530 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10691 "parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 5535 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10700 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5548 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10711 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5555 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10720 "parser.c" /* yacc.c:1646  */
    break;

  case 690:
#line 5560 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10730 "parser.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5579 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10738 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5583 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10746 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5587 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10754 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5594 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10762 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5598 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10770 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 5602 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10778 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5610 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10790 "parser.c" /* yacc.c:1646  */
    break;

  case 702:
#line 5621 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10798 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5630 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10812 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5640 "parser.y" /* yacc.c:1646  */
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
#line 10828 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5652 "parser.y" /* yacc.c:1646  */
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
#line 10847 "parser.c" /* yacc.c:1646  */
    break;

  case 707:
#line 5667 "parser.y" /* yacc.c:1646  */
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
#line 10880 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5700 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10888 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 5704 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 10897 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 5709 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10909 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 5717 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 10922 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 5726 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 10934 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 5736 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 10940 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 5738 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 10946 "parser.c" /* yacc.c:1646  */
    break;

  case 716:
#line 5743 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[0]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
#line 10955 "parser.c" /* yacc.c:1646  */
    break;

  case 718:
#line 5752 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 10963 "parser.c" /* yacc.c:1646  */
    break;

  case 719:
#line 5756 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 10975 "parser.c" /* yacc.c:1646  */
    break;

  case 721:
#line 5768 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 10987 "parser.c" /* yacc.c:1646  */
    break;

  case 722:
#line 5776 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 10999 "parser.c" /* yacc.c:1646  */
    break;

  case 723:
#line 5784 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11011 "parser.c" /* yacc.c:1646  */
    break;

  case 724:
#line 5792 "parser.y" /* yacc.c:1646  */
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
#line 11044 "parser.c" /* yacc.c:1646  */
    break;

  case 725:
#line 5821 "parser.y" /* yacc.c:1646  */
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
#line 11077 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 5854 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
#line 11087 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 5863 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11097 "parser.c" /* yacc.c:1646  */
    break;

  case 729:
#line 5869 "parser.y" /* yacc.c:1646  */
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
#line 11126 "parser.c" /* yacc.c:1646  */
    break;

  case 731:
#line 5897 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11135 "parser.c" /* yacc.c:1646  */
    break;

  case 732:
#line 5903 "parser.y" /* yacc.c:1646  */
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
#line 11165 "parser.c" /* yacc.c:1646  */
    break;

  case 737:
#line 5941 "parser.y" /* yacc.c:1646  */
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
#line 11186 "parser.c" /* yacc.c:1646  */
    break;

  case 739:
#line 5959 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11194 "parser.c" /* yacc.c:1646  */
    break;

  case 740:
#line 5969 "parser.y" /* yacc.c:1646  */
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
#line 11242 "parser.c" /* yacc.c:1646  */
    break;

  case 741:
#line 6013 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11250 "parser.c" /* yacc.c:1646  */
    break;

  case 744:
#line 6024 "parser.y" /* yacc.c:1646  */
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
#line 11299 "parser.c" /* yacc.c:1646  */
    break;

  case 745:
#line 6072 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 11312 "parser.c" /* yacc.c:1646  */
    break;

  case 746:
#line 6084 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11320 "parser.c" /* yacc.c:1646  */
    break;

  case 747:
#line 6088 "parser.y" /* yacc.c:1646  */
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
#line 11336 "parser.c" /* yacc.c:1646  */
    break;

  case 748:
#line 6106 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11346 "parser.c" /* yacc.c:1646  */
    break;

  case 749:
#line 6111 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11355 "parser.c" /* yacc.c:1646  */
    break;

  case 750:
#line 6116 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11365 "parser.c" /* yacc.c:1646  */
    break;

  case 751:
#line 6124 "parser.y" /* yacc.c:1646  */
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
#line 11396 "parser.c" /* yacc.c:1646  */
    break;

  case 752:
#line 6151 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11404 "parser.c" /* yacc.c:1646  */
    break;

  case 753:
#line 6155 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11412 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6211 "parser.y" /* yacc.c:1646  */
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
#line 11430 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6225 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11439 "parser.c" /* yacc.c:1646  */
    break;

  case 805:
#line 6236 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}

  }
#line 11454 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6253 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-5]), (yyvsp[-4]), current_statement->attr_ptr);
  }
#line 11463 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6258 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11471 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6262 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11479 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6266 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11488 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6271 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11497 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6276 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11506 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6281 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11515 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6286 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11523 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6290 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11531 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6294 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11539 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6298 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11547 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6302 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11556 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6307 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11564 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6311 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11572 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6315 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11580 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6319 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11588 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6323 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11596 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6327 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11604 "parser.c" /* yacc.c:1646  */
    break;

  case 825:
#line 6331 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11612 "parser.c" /* yacc.c:1646  */
    break;

  case 827:
#line 6339 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11620 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6350 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11626 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6351 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11632 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6355 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0])); }
#line 11638 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6356 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1])); }
#line 11644 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6357 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), cb_int0); }
#line 11650 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6358 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[0])); }
#line 11656 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6359 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11662 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6363 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11668 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6367 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11674 "parser.c" /* yacc.c:1646  */
    break;

  case 839:
#line 6368 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11680 "parser.c" /* yacc.c:1646  */
    break;

  case 843:
#line 6377 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11688 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6393 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11696 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6397 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11706 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6403 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11714 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6407 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11722 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6411 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11730 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6415 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11738 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6419 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 11746 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6423 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11754 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6427 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11762 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6431 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 11770 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6435 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11778 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6439 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11786 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6443 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), COB_SCREEN_PROMPT);
  }
#line 11794 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6447 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11802 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6451 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11810 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6455 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11818 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6459 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11826 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6463 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11834 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6467 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11844 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6473 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11852 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6477 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11860 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6481 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11868 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6485 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11876 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6489 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11884 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6493 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 11892 "parser.c" /* yacc.c:1646  */
    break;

  case 873:
#line 6497 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, 0);
  }
#line 11900 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6509 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 11908 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6513 "parser.y" /* yacc.c:1646  */
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
#line 11923 "parser.c" /* yacc.c:1646  */
    break;

  case 878:
#line 6530 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 11931 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6539 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 11939 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6543 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 11947 "parser.c" /* yacc.c:1646  */
    break;

  case 882:
#line 6547 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 11955 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6554 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11963 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6561 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 11971 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6565 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 11979 "parser.c" /* yacc.c:1646  */
    break;

  case 887:
#line 6575 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 11988 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6584 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 11996 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6588 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12009 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6599 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12015 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6600 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12021 "parser.c" /* yacc.c:1646  */
    break;

  case 893:
#line 6608 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 12030 "parser.c" /* yacc.c:1646  */
    break;

  case 897:
#line 6622 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12038 "parser.c" /* yacc.c:1646  */
    break;

  case 900:
#line 6634 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
#line 12047 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6649 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-4])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[-4]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[-4]), _("Recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	cb_emit_call ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]), (yyvsp[-5]));
  }
#line 12062 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6663 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12071 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6668 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12080 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6673 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12089 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6678 "parser.y" /* yacc.c:1646  */
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
#line 12110 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 6698 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12118 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6702 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12127 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 6707 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12140 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6718 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12146 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 6720 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12152 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 6725 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12164 "parser.c" /* yacc.c:1646  */
    break;

  case 913:
#line 6733 "parser.y" /* yacc.c:1646  */
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
#line 12190 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 6759 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12198 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 6763 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12211 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6772 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12224 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 6784 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12232 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 6788 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12240 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 6792 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12248 "parser.c" /* yacc.c:1646  */
    break;

  case 921:
#line 6796 "parser.y" /* yacc.c:1646  */
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
#line 12272 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 6829 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12280 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 6834 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12288 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 6841 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12296 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 6846 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12304 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 6853 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12312 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 6857 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12320 "parser.c" /* yacc.c:1646  */
    break;

  case 932:
#line 6867 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 12328 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6875 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12336 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 6879 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12344 "parser.c" /* yacc.c:1646  */
    break;

  case 936:
#line 6889 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12352 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 6897 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12361 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 6902 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12370 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 6909 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12376 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 6910 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12382 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 6911 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12388 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 6912 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12394 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 6913 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12400 "parser.c" /* yacc.c:1646  */
    break;

  case 945:
#line 6921 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12408 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 6930 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12416 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 6937 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12424 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 6941 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12432 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 6951 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12441 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 6962 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 12456 "parser.c" /* yacc.c:1646  */
    break;

  case 952:
#line 6979 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 12464 "parser.c" /* yacc.c:1646  */
    break;

  case 954:
#line 6988 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 12472 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 6996 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12481 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7001 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12490 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7009 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 12498 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7013 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 12506 "parser.c" /* yacc.c:1646  */
    break;

  case 960:
#line 7023 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 12515 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7033 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 12523 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7037 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12531 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7041 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12539 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7045 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12547 "parser.c" /* yacc.c:1646  */
    break;

  case 966:
#line 7049 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), NULL, NULL);
  }
#line 12555 "parser.c" /* yacc.c:1646  */
    break;

  case 968:
#line 7054 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[-3])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
#line 12565 "parser.c" /* yacc.c:1646  */
    break;

  case 970:
#line 7064 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
  }
#line 12573 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7072 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[-4])), cb_null, cb_int1,
			 (yyvsp[-3]), current_statement->attr_ptr);
  }
#line 12582 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7080 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12594 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7088 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12602 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 7092 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_name ((yyvsp[0]));
  }
#line 12610 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7096 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 12618 "parser.c" /* yacc.c:1646  */
    break;

  case 977:
#line 7100 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12630 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7122 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12638 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7128 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 12644 "parser.c" /* yacc.c:1646  */
    break;

  case 985:
#line 7129 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 12650 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7140 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12658 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7144 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
#line 12666 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7148 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
#line 12674 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7152 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12682 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7156 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12690 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7160 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
#line 12698 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7164 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
#line 12706 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7168 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 12714 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7172 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 12722 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7176 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12730 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7180 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12738 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7184 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12746 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7188 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12754 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7192 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12762 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7196 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12770 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7200 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12778 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7207 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12786 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7211 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12794 "parser.c" /* yacc.c:1646  */
    break;

  case 1006:
#line 7221 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12802 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7230 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12810 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7234 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12818 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7238 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12826 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7242 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12834 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7246 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12842 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7253 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12850 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7257 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12858 "parser.c" /* yacc.c:1646  */
    break;

  case 1015:
#line 7267 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12867 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7276 "parser.y" /* yacc.c:1646  */
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
#line 12883 "parser.c" /* yacc.c:1646  */
    break;

  case 1018:
#line 7294 "parser.y" /* yacc.c:1646  */
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
#line 12906 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7318 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 12915 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7325 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12921 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7327 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 12927 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7332 "parser.y" /* yacc.c:1646  */
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
#line 12942 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7343 "parser.y" /* yacc.c:1646  */
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
#line 12957 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7354 "parser.y" /* yacc.c:1646  */
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
#line 12972 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7368 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12980 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7372 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12988 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7378 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 12994 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7380 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13000 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7386 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13009 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7395 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13018 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7403 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13027 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7409 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13036 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7416 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13042 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7418 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13048 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7423 "parser.y" /* yacc.c:1646  */
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
#line 13114 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7484 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13120 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7485 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13126 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7486 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13132 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7490 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13138 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7491 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13144 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7496 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13152 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7500 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13160 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7510 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13169 "parser.c" /* yacc.c:1646  */
    break;

  case 1045:
#line 7515 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13177 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7523 "parser.y" /* yacc.c:1646  */
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
#line 13202 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7544 "parser.y" /* yacc.c:1646  */
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
#line 13220 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7558 "parser.y" /* yacc.c:1646  */
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
#line 13246 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7580 "parser.y" /* yacc.c:1646  */
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
#line 13272 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7602 "parser.y" /* yacc.c:1646  */
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
#line 13296 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7622 "parser.y" /* yacc.c:1646  */
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
#line 13320 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 7644 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13326 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 7645 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13332 "parser.c" /* yacc.c:1646  */
    break;

  case 1055:
#line 7653 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13341 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 7662 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13349 "parser.c" /* yacc.c:1646  */
    break;

  case 1058:
#line 7672 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
  }
#line 13357 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 7681 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
		cb_emit_generate((yyvsp[0]));
	}
  }
#line 13368 "parser.c" /* yacc.c:1646  */
    break;

  case 1061:
#line 7693 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13381 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 7706 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13390 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 7714 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13399 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 7719 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 13408 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 7730 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 13421 "parser.c" /* yacc.c:1646  */
    break;

  case 1067:
#line 7745 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 13429 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 7754 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13437 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 7758 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 13445 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 7762 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 13453 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 7769 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 13461 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 7773 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 13469 "parser.c" /* yacc.c:1646  */
    break;

  case 1074:
#line 7783 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 13477 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 7792 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13485 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 7798 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13491 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 7799 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13497 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 7803 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13503 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 7804 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13509 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 7805 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 13515 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 7810 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13523 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 7814 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13531 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 7821 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13539 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 7826 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13547 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 7833 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13555 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 7839 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13561 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 7840 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13567 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 7841 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13573 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 7842 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13579 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 7843 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13585 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 7844 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13591 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 7845 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13597 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 7850 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13605 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 7854 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13613 "parser.c" /* yacc.c:1646  */
    break;

  case 1096:
#line 7863 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
  }
#line 13621 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 7871 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[0]));
	}
  }
#line 13632 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 7878 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[0]));
	}
  }
#line 13643 "parser.c" /* yacc.c:1646  */
    break;

  case 1100:
#line 7890 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13652 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 7903 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13660 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 7907 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13668 "parser.c" /* yacc.c:1646  */
    break;

  case 1105:
#line 7911 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13676 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 7927 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13684 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 7931 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13693 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 7941 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13702 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 7951 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13712 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 7959 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13718 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 7960 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13724 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 7964 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13730 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 7965 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13736 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 7966 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13742 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 7967 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13748 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 7968 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13754 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 7969 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13760 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 7973 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13766 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 7974 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13772 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 7979 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13781 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 7984 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13789 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 7990 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13795 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 7991 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13801 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 7992 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13807 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 7993 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13813 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 7994 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13819 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 7999 "parser.y" /* yacc.c:1646  */
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
#line 13845 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8026 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13853 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8030 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13861 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8037 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13869 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8041 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13877 "parser.c" /* yacc.c:1646  */
    break;

  case 1136:
#line 8050 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13886 "parser.c" /* yacc.c:1646  */
    break;

  case 1138:
#line 8062 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 13894 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8070 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13902 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8074 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 13910 "parser.c" /* yacc.c:1646  */
    break;

  case 1142:
#line 8084 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 13918 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8093 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 13926 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8097 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 13934 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8104 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 13942 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8108 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 13950 "parser.c" /* yacc.c:1646  */
    break;

  case 1148:
#line 8118 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 13958 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8126 "parser.y" /* yacc.c:1646  */
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
#line 13983 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8147 "parser.y" /* yacc.c:1646  */
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
#line 14008 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8170 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14014 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8171 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14020 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8172 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14026 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8173 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14032 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8177 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14038 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8178 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14044 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8182 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14050 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8183 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14056 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8184 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14062 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8186 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14071 "parser.c" /* yacc.c:1646  */
    break;

  case 1162:
#line 8197 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14082 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8208 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14091 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8213 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 14101 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8219 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14110 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8224 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 14119 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8232 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14131 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8240 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14139 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8247 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14147 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8251 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14161 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8264 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14172 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8271 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14184 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8282 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14192 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8286 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14201 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8291 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14209 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8295 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14224 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8306 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14232 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8312 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14238 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8313 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14244 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8317 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14250 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8318 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14256 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8321 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14262 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8323 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14268 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8328 "parser.y" /* yacc.c:1646  */
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
#line 14305 "parser.c" /* yacc.c:1646  */
    break;

  case 1186:
#line 8367 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14313 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8376 "parser.y" /* yacc.c:1646  */
    {
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
#line 14341 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8402 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14347 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8403 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14353 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8408 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14361 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8412 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14369 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8416 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14377 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8420 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14385 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8424 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14393 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8428 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14401 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8432 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 14409 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8438 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14415 "parser.c" /* yacc.c:1646  */
    break;

  case 1199:
#line 8439 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14421 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 8449 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 14429 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8453 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 14437 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 8463 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 14446 "parser.c" /* yacc.c:1646  */
    break;

  case 1205:
#line 8473 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 14454 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8481 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14462 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8491 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 14471 "parser.c" /* yacc.c:1646  */
    break;

  case 1209:
#line 8501 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 14479 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8510 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14487 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8517 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 14495 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8521 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 14503 "parser.c" /* yacc.c:1646  */
    break;

  case 1214:
#line 8531 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14514 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8543 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14523 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8551 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14531 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 8555 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14539 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8559 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14547 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8566 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 14555 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8570 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14563 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 8580 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14572 "parser.c" /* yacc.c:1646  */
    break;

  case 1223:
#line 8591 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14580 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 8600 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14588 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 8605 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14597 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 8612 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14603 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 8613 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14609 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8618 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14617 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 8623 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14625 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 8630 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14633 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8634 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14641 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 8642 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14649 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8649 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14657 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 8653 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14665 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8663 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14676 "parser.c" /* yacc.c:1646  */
    break;

  case 1237:
#line 8670 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14684 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8685 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14690 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 8686 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14696 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 8690 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14702 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 8691 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14708 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 8698 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14716 "parser.c" /* yacc.c:1646  */
    break;

  case 1249:
#line 8707 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14724 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 8719 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14732 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 8723 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14740 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 8727 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
  }
#line 14748 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 8731 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
  }
#line 14756 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 8735 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14764 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 8739 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14772 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 8743 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14780 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 8747 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14788 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 8756 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14796 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 8760 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14804 "parser.c" /* yacc.c:1646  */
    break;

  case 1262:
#line 8769 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14812 "parser.c" /* yacc.c:1646  */
    break;

  case 1265:
#line 8783 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14820 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 8797 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14828 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 8801 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14836 "parser.c" /* yacc.c:1646  */
    break;

  case 1270:
#line 8811 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14844 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 8819 "parser.y" /* yacc.c:1646  */
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
#line 14869 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 8840 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14879 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 8849 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14887 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 8854 "parser.y" /* yacc.c:1646  */
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
#line 14907 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 8872 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14913 "parser.c" /* yacc.c:1646  */
    break;

  case 1277:
#line 8873 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 14919 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 8878 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 14928 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 8885 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 14934 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 8886 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 14940 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 8891 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 14950 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 8897 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 14964 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 8907 "parser.y" /* yacc.c:1646  */
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
#line 14980 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 8922 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 14990 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 8928 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15004 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 8938 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15018 "parser.c" /* yacc.c:1646  */
    break;

  case 1288:
#line 8954 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15027 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 8964 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15040 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 8976 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15048 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 8980 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15056 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 8987 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15064 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 8991 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15073 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 8996 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15082 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9001 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15091 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9008 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15097 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9009 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15103 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9010 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15109 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9011 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15115 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9012 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15121 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9013 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15127 "parser.c" /* yacc.c:1646  */
    break;

  case 1303:
#line 9018 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 15136 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9031 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15144 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9035 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15152 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9045 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15160 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9049 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15170 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9055 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15183 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9067 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15191 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9071 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15199 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9075 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15211 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9083 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15223 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9094 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15231 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9098 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15239 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9104 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15245 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9105 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15251 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9106 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15257 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9107 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15263 "parser.c" /* yacc.c:1646  */
    break;

  case 1321:
#line 9114 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 15271 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9123 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15279 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9129 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15285 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9130 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15291 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9134 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15297 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9135 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15303 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9136 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15309 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9140 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15315 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9141 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15321 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9146 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15329 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9150 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15337 "parser.c" /* yacc.c:1646  */
    break;

  case 1333:
#line 9160 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15345 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9169 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15353 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9173 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15361 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9177 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15369 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9184 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 15377 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9188 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 15385 "parser.c" /* yacc.c:1646  */
    break;

  case 1340:
#line 9198 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  }
#line 15398 "parser.c" /* yacc.c:1646  */
    break;

  case 1343:
#line 9216 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
  }
#line 15406 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9224 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[0]));
	}
  }
#line 15418 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 9232 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
		cb_emit_terminate((yyvsp[0]));
	}
  }
#line 15429 "parser.c" /* yacc.c:1646  */
    break;

  case 1347:
#line 9244 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 15437 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9252 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 15448 "parser.c" /* yacc.c:1646  */
    break;

  case 1350:
#line 9265 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 15456 "parser.c" /* yacc.c:1646  */
    break;

  case 1352:
#line 9273 "parser.y" /* yacc.c:1646  */
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
#line 15471 "parser.c" /* yacc.c:1646  */
    break;

  case 1356:
#line 9296 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 15479 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9306 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15487 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9312 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15493 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9314 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15499 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9318 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15505 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9320 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15511 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9325 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15519 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9331 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15525 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9333 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15531 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9338 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15539 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9344 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15545 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9345 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15551 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9349 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15557 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9350 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15563 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9354 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15569 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9355 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15575 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9360 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15583 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9364 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15591 "parser.c" /* yacc.c:1646  */
    break;

  case 1375:
#line 9374 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 15600 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9392 "parser.y" /* yacc.c:1646  */
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
#line 15626 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9417 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15634 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 9421 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15647 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 9433 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15661 "parser.c" /* yacc.c:1646  */
    break;

  case 1386:
#line 9443 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15670 "parser.c" /* yacc.c:1646  */
    break;

  case 1387:
#line 9448 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15679 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9453 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15688 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 9458 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15697 "parser.c" /* yacc.c:1646  */
    break;

  case 1390:
#line 9466 "parser.y" /* yacc.c:1646  */
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
#line 15736 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 9509 "parser.y" /* yacc.c:1646  */
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
#line 15780 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 9549 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15794 "parser.c" /* yacc.c:1646  */
    break;

  case 1395:
#line 9559 "parser.y" /* yacc.c:1646  */
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
#line 15819 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 9589 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15829 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 9598 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15839 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 9604 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15849 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 9614 "parser.y" /* yacc.c:1646  */
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
#line 15881 "parser.c" /* yacc.c:1646  */
    break;

  case 1404:
#line 9645 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 15891 "parser.c" /* yacc.c:1646  */
    break;

  case 1407:
#line 9661 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 15902 "parser.c" /* yacc.c:1646  */
    break;

  case 1409:
#line 9673 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 15913 "parser.c" /* yacc.c:1646  */
    break;

  case 1410:
#line 9682 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15919 "parser.c" /* yacc.c:1646  */
    break;

  case 1411:
#line 9683 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15925 "parser.c" /* yacc.c:1646  */
    break;

  case 1412:
#line 9688 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 15933 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 9692 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 15941 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 9696 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 15949 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 9700 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 15957 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 9706 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 15963 "parser.c" /* yacc.c:1646  */
    break;

  case 1417:
#line 9707 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 15969 "parser.c" /* yacc.c:1646  */
    break;

  case 1420:
#line 9717 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 15977 "parser.c" /* yacc.c:1646  */
    break;

  case 1421:
#line 9721 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 15985 "parser.c" /* yacc.c:1646  */
    break;

  case 1424:
#line 9738 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 15994 "parser.c" /* yacc.c:1646  */
    break;

  case 1426:
#line 9748 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16003 "parser.c" /* yacc.c:1646  */
    break;

  case 1429:
#line 9761 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16012 "parser.c" /* yacc.c:1646  */
    break;

  case 1431:
#line 9771 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16021 "parser.c" /* yacc.c:1646  */
    break;

  case 1434:
#line 9786 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16030 "parser.c" /* yacc.c:1646  */
    break;

  case 1436:
#line 9796 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16039 "parser.c" /* yacc.c:1646  */
    break;

  case 1439:
#line 9813 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16048 "parser.c" /* yacc.c:1646  */
    break;

  case 1441:
#line 9824 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16057 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 9847 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16066 "parser.c" /* yacc.c:1646  */
    break;

  case 1448:
#line 9856 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16075 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 9873 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16084 "parser.c" /* yacc.c:1646  */
    break;

  case 1453:
#line 9882 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16093 "parser.c" /* yacc.c:1646  */
    break;

  case 1456:
#line 9899 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16102 "parser.c" /* yacc.c:1646  */
    break;

  case 1458:
#line 9909 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16111 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 9919 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 16119 "parser.c" /* yacc.c:1646  */
    break;

  case 1460:
#line 9923 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16127 "parser.c" /* yacc.c:1646  */
    break;

  case 1461:
#line 9933 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 16135 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 9940 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 16143 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 9946 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 16152 "parser.c" /* yacc.c:1646  */
    break;

  case 1464:
#line 9951 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 16160 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 9964 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 16172 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 9972 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 16178 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 9973 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 16184 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 9975 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 16190 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 9976 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 16196 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 9977 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 16202 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 9978 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 16208 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 9979 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 16214 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 9981 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 16220 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 9982 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 16226 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 9983 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 16232 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 9984 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 16238 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 9985 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 16244 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 9986 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 16250 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 9988 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 16256 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 9989 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 16262 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 9990 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 16268 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 9992 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 16274 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 9993 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 16280 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 9994 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 16286 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 9995 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 16292 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 9996 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 16298 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 9999 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 16304 "parser.c" /* yacc.c:1646  */
    break;

  case 1491:
#line 10000 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 16310 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10030 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16318 "parser.c" /* yacc.c:1646  */
    break;

  case 1501:
#line 10034 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16326 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10045 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 16332 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10046 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 16338 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10047 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16344 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10051 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 16350 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10052 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 16356 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10053 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16362 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10058 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 16370 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 10061 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16376 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10065 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16382 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10066 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 16388 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10067 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16394 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10070 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16400 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10071 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16406 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 10082 "parser.y" /* yacc.c:1646  */
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
#line 16422 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10094 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16435 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10103 "parser.y" /* yacc.c:1646  */
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
#line 16455 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10119 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16468 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10128 "parser.y" /* yacc.c:1646  */
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
#line 16488 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10144 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16501 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10158 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16507 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10160 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 16513 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10165 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 16521 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10173 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 16527 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10180 "parser.y" /* yacc.c:1646  */
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
#line 16546 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10200 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16554 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10204 "parser.y" /* yacc.c:1646  */
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
#line 16576 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 10225 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16589 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10266 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16602 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10279 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16608 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10281 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16614 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10285 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16620 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10291 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16626 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10293 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16632 "parser.c" /* yacc.c:1646  */
    break;

  case 1538:
#line 10298 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16645 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10312 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16653 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10319 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16663 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10329 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16669 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10330 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16675 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10335 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16684 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10343 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16693 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10351 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16701 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10355 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16709 "parser.c" /* yacc.c:1646  */
    break;

  case 1549:
#line 10362 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16719 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10378 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16732 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10392 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16746 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10409 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16754 "parser.c" /* yacc.c:1646  */
    break;

  case 1555:
#line 10413 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16762 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10422 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16770 "parser.c" /* yacc.c:1646  */
    break;

  case 1559:
#line 10429 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16778 "parser.c" /* yacc.c:1646  */
    break;

  case 1560:
#line 10433 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16786 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10444 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16794 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10448 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16802 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10452 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16810 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10456 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16818 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10460 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16826 "parser.c" /* yacc.c:1646  */
    break;

  case 1570:
#line 10464 "parser.y" /* yacc.c:1646  */
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
#line 16848 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10485 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16856 "parser.c" /* yacc.c:1646  */
    break;

  case 1572:
#line 10489 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16864 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10506 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16872 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10510 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16880 "parser.c" /* yacc.c:1646  */
    break;

  case 1582:
#line 10514 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16888 "parser.c" /* yacc.c:1646  */
    break;

  case 1598:
#line 10561 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 16896 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10585 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16902 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10589 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 16908 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10593 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16914 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10594 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16920 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10598 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 16926 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10603 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 16937 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10610 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16948 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10617 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 16959 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10624 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 16970 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 10634 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 16978 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10638 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 16986 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 10645 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17000 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 10655 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17014 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10665 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17028 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 10675 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17042 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 10688 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17050 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 10692 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17059 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 10700 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 17068 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 10708 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 17076 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 10712 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 17085 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 10722 "parser.y" /* yacc.c:1646  */
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
#line 17101 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 10737 "parser.y" /* yacc.c:1646  */
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
#line 17125 "parser.c" /* yacc.c:1646  */
    break;

  case 1628:
#line 10760 "parser.y" /* yacc.c:1646  */
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
#line 17149 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 10780 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17157 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 10787 "parser.y" /* yacc.c:1646  */
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
#line 17177 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 10802 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17183 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 10803 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17189 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 10804 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17195 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 10805 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17201 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 10806 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17207 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 10807 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17213 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 10812 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17221 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 10816 "parser.y" /* yacc.c:1646  */
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
#line 17239 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 10833 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17247 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 10837 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17255 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 10843 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17261 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 10844 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17267 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 10845 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17273 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 10846 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17279 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 10847 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17285 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 10848 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17291 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 10849 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17297 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 10856 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 17305 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 10860 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 17313 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 10864 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17321 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 10868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17329 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 10872 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 17337 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 10876 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17345 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 10880 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17353 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 10884 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17361 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 10888 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17369 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 10892 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17377 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 10896 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 17385 "parser.c" /* yacc.c:1646  */
    break;

  case 1659:
#line 10900 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 17393 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 10925 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17401 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 10929 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 17409 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 10933 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 17417 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 10940 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17425 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 10944 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17433 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 10948 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17441 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 10955 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 17452 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 10962 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 17463 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 10969 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 17474 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 10979 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17485 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 10986 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 17496 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 10996 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17507 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11003 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 17518 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11013 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17526 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11017 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17540 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11030 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17548 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11034 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17562 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11048 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 17570 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11056 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17576 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11057 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17582 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11061 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17588 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11062 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17594 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11066 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17600 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11067 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17606 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11072 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17614 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11076 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17622 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11083 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17630 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11087 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17638 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11094 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17644 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11095 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17650 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11096 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 17656 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11100 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17662 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11101 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17668 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11105 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17674 "parser.c" /* yacc.c:1646  */
    break;

  case 1703:
#line 11106 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17680 "parser.c" /* yacc.c:1646  */
    break;

  case 1704:
#line 11107 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17686 "parser.c" /* yacc.c:1646  */
    break;

  case 1705:
#line 11112 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17694 "parser.c" /* yacc.c:1646  */
    break;

  case 1706:
#line 11116 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17707 "parser.c" /* yacc.c:1646  */
    break;

  case 1707:
#line 11128 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17716 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11133 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17725 "parser.c" /* yacc.c:1646  */
    break;

  case 1709:
#line 11141 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17733 "parser.c" /* yacc.c:1646  */
    break;

  case 1710:
#line 11145 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17741 "parser.c" /* yacc.c:1646  */
    break;

  case 1711:
#line 11149 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17749 "parser.c" /* yacc.c:1646  */
    break;

  case 1712:
#line 11153 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17757 "parser.c" /* yacc.c:1646  */
    break;

  case 1713:
#line 11157 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17765 "parser.c" /* yacc.c:1646  */
    break;

  case 1714:
#line 11161 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17773 "parser.c" /* yacc.c:1646  */
    break;

  case 1715:
#line 11165 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17781 "parser.c" /* yacc.c:1646  */
    break;

  case 1716:
#line 11169 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17789 "parser.c" /* yacc.c:1646  */
    break;

  case 1717:
#line 11175 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17795 "parser.c" /* yacc.c:1646  */
    break;

  case 1718:
#line 11176 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17801 "parser.c" /* yacc.c:1646  */
    break;


#line 17805 "parser.c" /* yacc.c:1646  */
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
#line 11349 "parser.y" /* yacc.c:1906  */

