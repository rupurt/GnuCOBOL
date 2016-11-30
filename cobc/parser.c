/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 28 "parser.y"

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


/* Line 371 of yacc.c  */
#line 766 "parser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 1353 "parser.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8989

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  521
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  846
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1972
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2822

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   775

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    16,    18,
      20,    21,    24,    29,    34,    38,    39,    41,    44,    45,
      47,    51,    52,    54,    58,    59,    60,    61,    82,    83,
      91,    97,    99,   101,   102,   105,   106,   110,   112,   115,
     117,   119,   121,   123,   124,   128,   129,   133,   134,   137,
     139,   141,   143,   145,   147,   148,   153,   154,   158,   159,
     163,   164,   169,   170,   173,   177,   180,   182,   185,   187,
     189,   191,   193,   199,   203,   207,   212,   214,   216,   218,
     220,   222,   225,   226,   231,   232,   235,   239,   241,   244,
     248,   252,   256,   258,   260,   261,   264,   266,   269,   272,
     275,   279,   281,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   308,   309,   313,   316,   320,
     324,   326,   327,   329,   331,   335,   340,   341,   347,   349,
     351,   353,   355,   357,   359,   361,   364,   366,   370,   371,
     376,   378,   382,   384,   386,   388,   390,   392,   394,   396,
     398,   401,   402,   405,   409,   411,   414,   418,   420,   423,
     425,   428,   433,   435,   438,   440,   444,   449,   455,   456,
     460,   464,   470,   474,   479,   483,   487,   488,   492,   493,
     496,   497,   500,   501,   504,   505,   512,   516,   517,   520,
     522,   524,   526,   528,   530,   532,   534,   536,   538,   540,
     542,   544,   546,   552,   558,   564,   570,   576,   578,   580,
     582,   584,   585,   589,   590,   592,   594,   596,   598,   599,
     601,   603,   608,   610,   612,   614,   622,   632,   633,   638,
     642,   646,   651,   652,   654,   656,   657,   663,   666,   669,
     671,   672,   677,   683,   686,   690,   692,   694,   698,   700,
     703,   708,   713,   718,   725,   727,   730,   731,   734,   737,
     739,   744,   748,   750,   752,   756,   759,   762,   765,   766,
     769,   773,   775,   778,   780,   782,   788,   789,   791,   793,
     795,   796,   803,   805,   808,   811,   812,   815,   816,   820,
     821,   825,   826,   829,   832,   833,   839,   843,   845,   847,
     848,   851,   854,   857,   859,   861,   863,   865,   867,   869,
     871,   873,   875,   881,   882,   884,   886,   891,   898,   908,
     909,   913,   914,   917,   918,   921,   925,   931,   937,   939,
     941,   943,   945,   949,   955,   956,   959,   961,   963,   965,
     970,   973,   976,   981,   985,   988,   991,   994,   996,   999,
    1000,  1001,  1007,  1008,  1009,  1012,  1015,  1019,  1022,  1024,
    1025,  1030,  1034,  1037,  1038,  1040,  1042,  1044,  1045,  1048,
    1050,  1053,  1056,  1060,  1062,  1064,  1066,  1068,  1070,  1072,
    1074,  1076,  1078,  1080,  1082,  1084,  1087,  1089,  1091,  1093,
    1095,  1097,  1099,  1101,  1103,  1105,  1111,  1114,  1117,  1118,
    1121,  1123,  1125,  1127,  1129,  1131,  1133,  1135,  1137,  1139,
    1141,  1143,  1145,  1147,  1149,  1152,  1156,  1157,  1160,  1163,
    1165,  1167,  1171,  1173,  1175,  1177,  1179,  1181,  1183,  1185,
    1187,  1189,  1191,  1193,  1195,  1197,  1199,  1201,  1203,  1205,
    1207,  1209,  1211,  1214,  1217,  1220,  1223,  1226,  1229,  1232,
    1235,  1238,  1241,  1243,  1245,  1247,  1249,  1251,  1253,  1255,
    1257,  1259,  1261,  1265,  1269,  1276,  1277,  1280,  1288,  1297,
    1298,  1301,  1302,  1305,  1306,  1310,  1311,  1315,  1316,  1318,
    1320,  1321,  1327,  1329,  1331,  1332,  1336,  1338,  1341,  1343,
    1346,  1349,  1350,  1352,  1354,  1358,  1360,  1361,  1367,  1369,
    1372,  1374,  1378,  1379,  1384,  1387,  1392,  1395,  1398,  1399,
    1400,  1406,  1407,  1408,  1414,  1415,  1416,  1422,  1423,  1426,
    1427,  1434,  1435,  1438,  1441,  1444,  1448,  1450,  1452,  1455,
    1458,  1460,  1462,  1464,  1466,  1469,  1471,  1476,  1478,  1481,
    1486,  1488,  1490,  1491,  1494,  1496,  1498,  1500,  1502,  1504,
    1508,  1512,  1517,  1522,  1527,  1531,  1532,  1535,  1536,  1542,
    1543,  1546,  1548,  1550,  1552,  1554,  1556,  1558,  1560,  1562,
    1564,  1566,  1568,  1570,  1572,  1574,  1576,  1578,  1582,  1584,
    1586,  1590,  1594,  1596,  1598,  1600,  1601,  1603,  1607,  1609,
    1610,  1612,  1614,  1616,  1620,  1622,  1625,  1628,  1630,  1635,
    1636,  1640,  1643,  1645,  1647,  1651,  1656,  1662,  1667,  1673,
    1675,  1677,  1678,  1681,  1683,  1685,  1687,  1694,  1697,  1700,
    1701,  1704,  1706,  1709,  1712,  1715,  1716,  1719,  1721,  1723,
    1726,  1731,  1732,  1734,  1736,  1738,  1740,  1743,  1745,  1747,
    1750,  1752,  1757,  1760,  1764,  1765,  1766,  1772,  1773,  1775,
    1778,  1782,  1784,  1785,  1790,  1794,  1795,  1798,  1801,  1804,
    1806,  1808,  1811,  1814,  1816,  1818,  1820,  1822,  1824,  1826,
    1828,  1830,  1832,  1834,  1839,  1841,  1843,  1849,  1855,  1859,
    1863,  1865,  1867,  1869,  1871,  1873,  1875,  1877,  1879,  1882,
    1885,  1888,  1890,  1892,  1894,  1896,  1897,  1899,  1901,  1902,
    1904,  1906,  1910,  1913,  1914,  1915,  1916,  1926,  1927,  1932,
    1933,  1934,  1938,  1939,  1943,  1945,  1948,  1953,  1954,  1957,
    1960,  1961,  1965,  1969,  1974,  1979,  1983,  1984,  1986,  1987,
    1990,  1991,  1992,  2000,  2001,  2004,  2006,  2008,  2011,  2013,
    2015,  2016,  2023,  2024,  2027,  2030,  2032,  2033,  2035,  2036,
    2037,  2041,  2042,  2045,  2048,  2050,  2052,  2054,  2056,  2058,
    2060,  2062,  2064,  2066,  2068,  2070,  2072,  2074,  2076,  2078,
    2080,  2082,  2084,  2086,  2088,  2090,  2092,  2094,  2096,  2098,
    2100,  2102,  2104,  2106,  2108,  2110,  2112,  2114,  2116,  2118,
    2120,  2122,  2124,  2126,  2128,  2130,  2132,  2134,  2136,  2138,
    2140,  2142,  2144,  2146,  2149,  2152,  2153,  2158,  2165,  2169,
    2173,  2178,  2182,  2187,  2191,  2195,  2200,  2205,  2209,  2214,
    2218,  2223,  2229,  2233,  2238,  2242,  2246,  2248,  2250,  2252,
    2255,  2256,  2258,  2262,  2266,  2269,  2272,  2275,  2279,  2283,
    2287,  2288,  2290,  2291,  2295,  2296,  2299,  2301,  2304,  2306,
    2308,  2310,  2312,  2314,  2316,  2318,  2320,  2322,  2324,  2326,
    2328,  2333,  2335,  2337,  2339,  2341,  2343,  2346,  2348,  2350,
    2354,  2358,  2362,  2366,  2370,  2372,  2374,  2375,  2377,  2378,
    2383,  2388,  2394,  2401,  2402,  2405,  2406,  2408,  2409,  2413,
    2417,  2422,  2423,  2426,  2427,  2431,  2433,  2436,  2441,  2442,
    2445,  2446,  2451,  2458,  2459,  2461,  2463,  2465,  2466,  2467,
    2471,  2473,  2476,  2479,  2483,  2484,  2487,  2490,  2493,  2494,
    2498,  2501,  2506,  2508,  2510,  2512,  2514,  2515,  2518,  2519,
    2522,  2523,  2525,  2526,  2530,  2532,  2535,  2536,  2540,  2543,
    2547,  2548,  2550,  2554,  2558,  2561,  2562,  2567,  2572,  2573,
    2575,  2577,  2579,  2580,  2585,  2590,  2593,  2595,  2598,  2599,
    2601,  2602,  2607,  2611,  2615,  2619,  2623,  2628,  2631,  2636,
    2638,  2639,  2643,  2649,  2650,  2653,  2656,  2659,  2662,  2663,
    2666,  2668,  2670,  2671,  2674,  2675,  2677,  2679,  2682,  2684,
    2687,  2690,  2692,  2694,  2697,  2700,  2702,  2704,  2706,  2708,
    2710,  2714,  2718,  2722,  2726,  2727,  2729,  2730,  2735,  2740,
    2747,  2754,  2763,  2772,  2773,  2775,  2776,  2780,  2783,  2784,
    2789,  2792,  2794,  2798,  2800,  2802,  2804,  2807,  2809,  2811,
    2814,  2817,  2821,  2824,  2828,  2830,  2834,  2837,  2839,  2841,
    2843,  2844,  2847,  2848,  2850,  2851,  2855,  2856,  2859,  2861,
    2864,  2866,  2868,  2870,  2871,  2874,  2875,  2879,  2881,  2882,
    2886,  2888,  2889,  2893,  2897,  2898,  2902,  2905,  2906,  2913,
    2917,  2920,  2922,  2923,  2925,  2926,  2930,  2936,  2937,  2940,
    2941,  2945,  2949,  2950,  2953,  2955,  2958,  2963,  2965,  2967,
    2969,  2971,  2973,  2975,  2977,  2978,  2982,  2983,  2987,  2989,
    2992,  2993,  2997,  3000,  3002,  3004,  3006,  3009,  3011,  3013,
    3015,  3016,  3020,  3023,  3029,  3031,  3034,  3037,  3040,  3042,
    3044,  3046,  3049,  3051,  3054,  3059,  3062,  3063,  3065,  3067,
    3069,  3071,  3076,  3077,  3080,  3084,  3088,  3089,  3093,  3094,
    3098,  3102,  3107,  3108,  3113,  3118,  3125,  3126,  3128,  3129,
    3133,  3139,  3146,  3148,  3150,  3152,  3154,  3155,  3159,  3160,
    3164,  3167,  3169,  3170,  3174,  3177,  3178,  3183,  3186,  3187,
    3189,  3191,  3193,  3195,  3199,  3200,  3203,  3205,  3209,  3213,
    3214,  3218,  3220,  3222,  3224,  3228,  3236,  3237,  3242,  3250,
    3251,  3254,  3255,  3257,  3260,  3262,  3265,  3269,  3273,  3275,
    3276,  3278,  3280,  3285,  3290,  3293,  3294,  3296,  3298,  3302,
    3305,  3306,  3310,  3312,  3314,  3315,  3317,  3319,  3320,  3324,
    3327,  3329,  3330,  3335,  3340,  3341,  3343,  3344,  3349,  3355,
    3356,  3358,  3361,  3365,  3366,  3368,  3370,  3371,  3376,  3381,
    3388,  3389,  3392,  3393,  3396,  3398,  3401,  3405,  3406,  3408,
    3409,  3413,  3415,  3417,  3419,  3421,  3423,  3425,  3427,  3429,
    3431,  3433,  3438,  3442,  3444,  3447,  3450,  3453,  3456,  3459,
    3462,  3465,  3468,  3471,  3476,  3480,  3485,  3487,  3490,  3494,
    3496,  3499,  3503,  3507,  3508,  3512,  3513,  3521,  3522,  3528,
    3529,  3532,  3533,  3536,  3537,  3541,  3542,  3545,  3550,  3551,
    3554,  3559,  3560,  3565,  3570,  3571,  3575,  3576,  3581,  3583,
    3585,  3587,  3590,  3593,  3596,  3599,  3601,  3603,  3606,  3608,
    3609,  3611,  3612,  3617,  3620,  3621,  3624,  3629,  3634,  3635,
    3637,  3639,  3641,  3643,  3645,  3646,  3651,  3657,  3659,  3662,
    3664,  3668,  3672,  3673,  3678,  3679,  3681,  3682,  3687,  3692,
    3699,  3706,  3707,  3709,  3712,  3713,  3715,  3716,  3720,  3722,
    3725,  3726,  3730,  3736,  3737,  3741,  3744,  3745,  3747,  3749,
    3750,  3755,  3762,  3763,  3767,  3769,  3773,  3776,  3779,  3782,
    3786,  3787,  3791,  3792,  3796,  3797,  3801,  3802,  3804,  3805,
    3809,  3811,  3813,  3815,  3817,  3819,  3827,  3828,  3830,  3832,
    3834,  3836,  3838,  3840,  3845,  3847,  3850,  3852,  3855,  3859,
    3860,  3862,  3865,  3867,  3871,  3873,  3875,  3880,  3882,  3884,
    3886,  3887,  3892,  3899,  3900,  3903,  3904,  3909,  3913,  3917,
    3919,  3921,  3923,  3925,  3926,  3928,  3931,  3932,  3935,  3936,
    3939,  3942,  3943,  3946,  3947,  3950,  3953,  3954,  3957,  3958,
    3961,  3964,  3965,  3968,  3969,  3972,  3975,  3977,  3980,  3982,
    3984,  3987,  3990,  3993,  3995,  3997,  4000,  4003,  4006,  4007,
    4010,  4011,  4014,  4015,  4018,  4020,  4022,  4023,  4026,  4028,
    4031,  4034,  4036,  4038,  4040,  4042,  4044,  4046,  4048,  4050,
    4052,  4054,  4056,  4058,  4060,  4062,  4064,  4066,  4068,  4070,
    4072,  4074,  4076,  4078,  4080,  4082,  4084,  4087,  4089,  4091,
    4093,  4095,  4097,  4099,  4101,  4105,  4106,  4108,  4110,  4114,
    4118,  4120,  4124,  4128,  4130,  4134,  4136,  4139,  4142,  4144,
    4148,  4150,  4152,  4156,  4158,  4162,  4164,  4168,  4170,  4173,
    4176,  4178,  4180,  4182,  4185,  4187,  4189,  4191,  4194,  4196,
    4197,  4200,  4202,  4204,  4206,  4210,  4212,  4214,  4217,  4219,
    4221,  4223,  4226,  4228,  4230,  4232,  4234,  4236,  4238,  4241,
    4243,  4245,  4249,  4251,  4254,  4256,  4258,  4260,  4262,  4265,
    4268,  4271,  4276,  4280,  4282,  4284,  4287,  4289,  4291,  4293,
    4295,  4297,  4299,  4301,  4304,  4307,  4310,  4312,  4314,  4316,
    4318,  4320,  4322,  4324,  4326,  4328,  4330,  4332,  4334,  4336,
    4338,  4340,  4342,  4344,  4346,  4348,  4350,  4352,  4354,  4356,
    4358,  4360,  4362,  4365,  4367,  4371,  4374,  4377,  4379,  4381,
    4383,  4387,  4390,  4393,  4395,  4397,  4401,  4405,  4410,  4416,
    4418,  4420,  4422,  4424,  4426,  4428,  4430,  4432,  4434,  4436,
    4438,  4440,  4443,  4445,  4449,  4451,  4453,  4455,  4457,  4459,
    4461,  4463,  4466,  4472,  4478,  4484,  4489,  4495,  4501,  4507,
    4513,  4519,  4522,  4525,  4527,  4529,  4531,  4533,  4535,  4537,
    4539,  4541,  4543,  4544,  4549,  4555,  4556,  4560,  4563,  4565,
    4569,  4573,  4575,  4579,  4581,  4585,  4587,  4591,  4593,  4597,
    4598,  4599,  4601,  4602,  4604,  4605,  4607,  4608,  4611,  4612,
    4615,  4616,  4618,  4620,  4621,  4623,  4624,  4626,  4629,  4630,
    4633,  4634,  4638,  4640,  4642,  4644,  4646,  4648,  4650,  4652,
    4654,  4655,  4658,  4660,  4662,  4664,  4666,  4668,  4670,  4672,
    4674,  4676,  4678,  4680,  4682,  4684,  4686,  4688,  4690,  4692,
    4694,  4696,  4698,  4700,  4702,  4704,  4706,  4708,  4710,  4712,
    4714,  4716,  4718,  4720,  4722,  4724,  4726,  4728,  4730,  4732,
    4734,  4736,  4738,  4740,  4742,  4744,  4746,  4748,  4750,  4752,
    4754,  4756,  4758,  4760,  4762,  4764,  4766,  4768,  4770,  4772,
    4774,  4776,  4778,  4780,  4782,  4784,  4786,  4788,  4790,  4792,
    4794,  4796,  4798,  4799,  4801,  4802,  4804,  4805,  4807,  4808,
    4810,  4811,  4813,  4814,  4816,  4817,  4819,  4820,  4822,  4823,
    4825,  4826,  4828,  4829,  4831,  4832,  4834,  4835,  4837,  4838,
    4840,  4841,  4843,  4844,  4846,  4847,  4849,  4852,  4853,  4855,
    4856,  4858,  4859,  4861,  4862,  4864,  4865,  4867,  4869,  4870,
    4872,  4873,  4875,  4877,  4878,  4881,  4884,  4885,  4887,  4888,
    4890,  4891,  4893,  4894,  4896,  4897,  4899,  4901,  4902,  4904,
    4905,  4907,  4908,  4910,  4912,  4913,  4916,  4918,  4920,  4921,
    4923,  4924,  4926,  4927,  4929,  4930,  4932,  4933,  4935,  4936,
    4938,  4939,  4941,  4942,  4944,  4947,  4948,  4950,  4951,  4953,
    4954,  4956,  4957,  4959,  4960,  4962,  4963,  4965,  4966,  4968,
    4969,  4971,  4973,  4974,  4976,  4977,  4981,  4982,  4984,  4985,
    4987,  4990,  4992,  4994,  4996,  4998,  5000,  5002,  5004,  5006,
    5008,  5010,  5012,  5014,  5016,  5018,  5020,  5022,  5024,  5026,
    5028,  5030,  5032,  5034,  5036,  5039,  5042,  5044,  5046,  5048,
    5050,  5052,  5054,  5057,  5059,  5063,  5066,  5068,  5070,  5072,
    5075,  5077,  5080,  5082,  5085,  5087,  5090,  5092,  5095,  5097,
    5100,  5102,  5105
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     522,     0,    -1,    -1,   523,   524,    -1,   527,    -1,   525,
      -1,   526,    -1,   525,   526,    -1,   529,    -1,   531,    -1,
      -1,   528,   537,    -1,   541,   537,   532,   533,    -1,   541,
     537,   532,   534,    -1,   543,   537,   535,    -1,    -1,   530,
      -1,   532,   530,    -1,    -1,   534,    -1,   145,   544,   460,
      -1,    -1,   536,    -1,   141,   544,   460,    -1,    -1,    -1,
      -1,   549,   550,   551,   614,   615,   617,   616,   653,   538,
     663,   664,   665,   539,   694,   751,   753,   755,   812,   540,
     826,    -1,    -1,   346,   460,   544,   545,   542,   546,   460,
      -1,   202,   460,   544,   545,   460,    -1,   347,    -1,   259,
      -1,    -1,    27,   259,    -1,    -1,  1307,   547,  1323,    -1,
      75,    -1,    75,   548,    -1,   548,    -1,   174,    -1,   465,
      -1,   359,    -1,    -1,   156,   125,   460,    -1,    -1,    87,
     401,   460,    -1,    -1,   551,   552,    -1,   553,    -1,   557,
      -1,   576,    -1,   577,    -1,   568,    -1,    -1,   422,   460,
     554,   555,    -1,    -1,   567,   556,   460,    -1,    -1,  1339,
     110,   275,    -1,    -1,   309,   460,   558,   559,    -1,    -1,
     567,   460,    -1,   567,   560,   460,    -1,   560,   460,    -1,
     561,    -1,   560,   561,    -1,   562,    -1,   563,    -1,   564,
      -1,   565,    -1,   271,   417,  1307,  1255,  1352,    -1,  1358,
    1307,  1222,    -1,   403,  1307,  1255,    -1,  1295,    62,  1307,
     566,    -1,  1222,    -1,   260,    -1,   503,    -1,   442,    -1,
     513,    -1,   567,   513,    -1,    -1,   374,   460,   569,   570,
      -1,    -1,   571,   460,    -1,   571,     1,   460,    -1,   572,
      -1,   571,   572,    -1,   201,    10,   231,    -1,   201,   573,
     574,    -1,   201,   575,   231,    -1,   375,    -1,   505,    -1,
      -1,    27,   259,    -1,   375,    -1,   575,   375,    -1,   424,
     460,    -1,   578,   460,    -1,   578,     1,   460,    -1,   579,
      -1,   578,   579,    -1,   580,    -1,   586,    -1,   595,    -1,
     605,    -1,   602,    -1,   606,    -1,   608,    -1,   609,    -1,
     610,    -1,   611,    -1,   612,    -1,   613,    -1,    -1,   513,
     581,   582,    -1,  1307,    99,    -1,  1255,  1307,  1226,    -1,
    1307,  1226,   583,    -1,   584,    -1,    -1,   584,    -1,   585,
      -1,  1071,  1320,  1226,    -1,   585,  1071,  1320,  1226,    -1,
      -1,    12,  1226,   587,  1307,   588,    -1,   283,    -1,   426,
      -1,   427,    -1,   129,    -1,    29,    -1,   589,    -1,   590,
      -1,   589,   590,    -1,   593,    -1,   593,   451,   593,    -1,
      -1,   593,    18,   591,   592,    -1,   593,    -1,   592,    18,
     593,    -1,   259,    -1,   423,    -1,   519,    -1,   351,    -1,
     214,    -1,   269,    -1,   423,    -1,   519,    -1,   597,   596,
      -1,    -1,   220,   513,    -1,   440,  1296,   598,    -1,   599,
      -1,   598,   599,    -1,   600,  1308,   601,    -1,  1227,    -1,
     600,  1227,    -1,  1256,    -1,   601,  1256,    -1,    61,  1226,
    1307,   603,    -1,   604,    -1,   603,   604,    -1,  1258,    -1,
    1258,   451,  1258,    -1,   260,  1226,  1307,   259,    -1,   101,
    1326,  1307,   259,   607,    -1,    -1,  1339,   333,   259,    -1,
     111,  1307,    71,    -1,   306,   412,  1307,   477,   407,    -1,
     103,  1307,  1221,    -1,    99,   430,  1307,  1221,    -1,   396,
    1307,  1221,    -1,   167,  1307,  1221,    -1,    -1,   228,   401,
     460,    -1,    -1,   176,   460,    -1,    -1,   236,   460,    -1,
      -1,   617,   618,    -1,    -1,   404,  1281,  1226,   619,   620,
     460,    -1,   404,     1,   460,    -1,    -1,   620,   621,    -1,
     622,    -1,   628,    -1,   630,    -1,   632,    -1,   633,    -1,
     635,    -1,   639,    -1,   641,    -1,   642,    -1,   643,    -1,
     648,    -1,   649,    -1,   651,    -1,    30,  1336,   625,   624,
     626,    -1,    30,  1336,   625,   623,   627,    -1,    30,  1336,
     625,   122,   627,    -1,    30,  1336,   625,   240,   627,    -1,
      30,  1336,   625,   340,   627,    -1,   120,    -1,   121,    -1,
     446,    -1,   352,    -1,    -1,   254,     8,  1299,    -1,    -1,
     174,    -1,   128,    -1,   259,    -1,  1252,    -1,    -1,   259,
      -1,  1252,    -1,     5,  1313,  1307,   629,    -1,   409,    -1,
     128,    -1,   352,    -1,    20,  1340,  1309,  1307,  1221,  1275,
     631,    -1,    20,  1340,  1309,  1307,  1221,   644,   645,  1275,
     631,    -1,    -1,   439,   510,    10,  1259,    -1,   439,   510,
     594,    -1,  1341,  1307,   513,    -1,   634,   430,  1307,  1221,
      -1,    -1,   463,    -1,   419,    -1,    -1,   636,   265,  1313,
    1307,   637,    -1,   270,   638,    -1,    34,   638,    -1,   170,
      -1,    -1,   512,   265,   314,  1351,    -1,   512,   265,   314,
     277,  1351,    -1,   512,   391,    -1,   320,  1307,   640,    -1,
     640,    -1,   222,    -1,  1324,  1293,   409,    -1,   364,    -1,
     254,   409,    -1,   325,  1295,  1307,  1225,    -1,   356,   116,
    1307,   426,    -1,   356,  1309,  1307,  1221,    -1,   356,  1309,
    1307,  1221,   644,   645,    -1,   461,    -1,   421,  1307,    -1,
      -1,   646,   647,    -1,   645,   647,    -1,  1221,    -1,   364,
    1309,  1307,  1221,    -1,   377,   650,  1290,    -1,   292,    -1,
    1255,    -1,   411,  1339,   652,    -1,    10,  1321,    -1,   292,
    1321,    -1,   354,   315,    -1,    -1,   654,   460,    -1,   654,
       1,   460,    -1,   655,    -1,   654,   655,    -1,   656,    -1,
     658,    -1,   394,   657,  1290,  1300,  1211,    -1,    -1,   356,
      -1,   419,    -1,   420,    -1,    -1,   277,   659,  1299,  1332,
    1297,   660,    -1,   661,    -1,   660,   661,    -1,  1212,   662,
      -1,    -1,   336,  1255,    -1,    -1,   105,   125,   460,    -1,
      -1,   463,   401,   460,    -1,    -1,   665,   666,    -1,   667,
     696,    -1,    -1,   669,  1212,   668,   670,   460,    -1,   669,
       1,   460,    -1,   175,    -1,   398,    -1,    -1,   670,   671,
      -1,  1307,   174,    -1,  1307,   206,    -1,   672,    -1,   674,
      -1,   678,    -1,   679,    -1,   682,    -1,   683,    -1,   689,
      -1,   690,    -1,   691,    -1,    48,  1297,  1255,   677,   673,
      -1,    -1,   358,    -1,    60,    -1,   356,  1297,  1255,  1296,
      -1,   356,  1297,  1255,   455,  1255,  1296,    -1,   356,  1307,
     508,  1302,  1329,   676,   677,  1296,   675,    -1,    -1,   117,
    1318,  1221,    -1,    -1,  1301,  1255,    -1,    -1,   455,  1255,
      -1,   241,  1353,  1349,    -1,   507,   311,   680,  1307,   681,
      -1,   507,   311,   177,  1307,   681,    -1,   513,    -1,   215,
      -1,   259,    -1,  1252,    -1,   105,  1353,  1223,    -1,   252,
    1307,  1225,  1312,   684,    -1,    -1,   684,   685,    -1,   686,
      -1,   687,    -1,   688,    -1,  1339,   190,  1292,  1225,    -1,
     474,  1225,    -1,    49,  1225,    -1,   357,  1313,  1307,   513,
      -1,    65,  1307,   513,    -1,   692,   693,    -1,   371,  1307,
      -1,   373,  1289,    -1,  1226,    -1,   693,  1226,    -1,    -1,
      -1,   515,   401,   460,   695,   696,    -1,    -1,    -1,   697,
     698,    -1,   699,   460,    -1,   698,   699,   460,    -1,   698,
     460,    -1,   711,    -1,    -1,   701,   702,   700,   713,    -1,
     701,     1,   460,    -1,  1273,   513,    -1,    -1,   178,    -1,
     513,    -1,   513,    -1,    -1,  1307,   206,    -1,  1259,    -1,
     247,   706,    -1,   246,   706,    -1,    51,  1317,   706,    -1,
    1249,    -1,    42,    -1,    45,    -1,    44,    -1,    43,    -1,
      41,    -1,   710,    -1,   722,    -1,   723,    -1,   707,    -1,
     708,    -1,   709,    -1,     1,   460,    -1,   182,    -1,   186,
      -1,   183,    -1,   184,    -1,   181,    -1,   185,    -1,   187,
      -1,   335,    -1,   348,    -1,   701,   703,    88,   704,   712,
      -1,  1291,   705,    -1,   198,   513,    -1,    -1,   713,   714,
      -1,   715,    -1,   716,    -1,   718,    -1,   719,    -1,   720,
      -1,   724,    -1,   727,    -1,   739,    -1,   740,    -1,   742,
      -1,   743,    -1,   744,    -1,   749,    -1,   750,    -1,   360,
    1249,    -1,  1307,   174,   717,    -1,    -1,    27,   259,    -1,
    1307,   206,    -1,   332,    -1,   721,    -1,   500,  1307,   721,
      -1,    40,    -1,    76,    -1,   722,    -1,   723,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,   122,
      -1,   221,    -1,   324,    -1,   335,    -1,   348,    -1,   416,
      -1,   414,    -1,   415,    -1,   488,    -1,   486,    -1,   487,
      -1,    42,  1327,    -1,    42,   485,    -1,    45,  1327,    -1,
      45,   485,    -1,    44,  1327,    -1,    44,   485,    -1,    43,
    1327,    -1,    43,   485,    -1,    41,  1327,    -1,    41,   485,
      -1,   182,    -1,   183,    -1,   181,    -1,   184,    -1,   185,
      -1,   280,    -1,    78,    -1,   189,    -1,    79,    -1,   188,
      -1,  1328,   243,  1285,    -1,  1328,   477,  1285,    -1,   310,
    1255,   728,  1334,   730,   726,    -1,    -1,   432,  1255,    -1,
     310,  1255,   728,  1334,   730,   733,   736,    -1,   310,   128,
     731,   729,   728,   732,   733,   736,    -1,    -1,   455,  1255,
      -1,    -1,   198,  1255,    -1,    -1,   117,  1318,  1221,    -1,
      -1,    54,  1302,   513,    -1,    -1,   225,    -1,   734,    -1,
      -1,   734,   735,  1309,  1307,  1220,    -1,    28,    -1,   118,
      -1,    -1,   222,  1294,   737,    -1,   738,    -1,   737,   738,
      -1,   513,    -1,   237,  1325,    -1,   441,   741,    -1,    -1,
     244,    -1,   390,    -1,    46,  1337,   519,    -1,    37,    -1,
      -1,   507,  1308,   746,   745,   748,    -1,   747,    -1,   746,
     747,    -1,  1259,    -1,  1259,   451,  1259,    -1,    -1,  1338,
     462,  1307,  1259,    -1,   368,  1252,    -1,   368,  1252,   451,
    1252,    -1,    22,   246,    -1,    22,   306,    -1,    -1,    -1,
     264,   401,   460,   752,   696,    -1,    -1,    -1,   258,   401,
     460,   754,   696,    -1,    -1,    -1,   371,   401,   460,   756,
     757,    -1,    -1,   757,   758,    -1,    -1,   353,  1213,   759,
     760,   460,   777,    -1,    -1,   760,   761,    -1,     1,   460,
      -1,  1307,   206,    -1,    64,  1307,  1239,    -1,   762,    -1,
     767,    -1,  1366,   763,    -1,   764,   765,    -1,   764,    -1,
     765,    -1,   179,    -1,   766,    -1,   765,   766,    -1,  1248,
      -1,   326,  1311,   768,   770,    -1,   769,    -1,   769,  1350,
      -1,   769,  1350,   769,  1343,    -1,  1257,    -1,  1248,    -1,
      -1,   770,   771,    -1,   772,    -1,   773,    -1,   774,    -1,
     775,    -1,   776,    -1,   256,  1307,   769,    -1,   212,  1307,
     769,    -1,   180,  1359,  1307,   769,    -1,   242,  1360,  1307,
     769,    -1,   242,  1359,  1307,   769,    -1,   190,  1307,   769,
      -1,    -1,   777,   778,    -1,    -1,   701,   702,   779,   780,
     460,    -1,    -1,   780,   781,    -1,   782,    -1,   786,    -1,
     796,    -1,   719,    -1,   811,    -1,   724,    -1,   739,    -1,
     802,    -1,   742,    -1,   809,    -1,   788,    -1,   744,    -1,
     791,    -1,   810,    -1,   725,    -1,   795,    -1,   481,  1307,
     783,    -1,  1364,    -1,  1362,    -1,  1360,  1319,   784,    -1,
    1361,  1319,   785,    -1,  1359,    -1,  1363,    -1,  1365,    -1,
      -1,  1248,    -1,  1248,   318,   326,    -1,   179,    -1,    -1,
    1248,    -1,   179,    -1,    10,    -1,   290,  1307,   787,    -1,
    1255,    -1,   334,  1255,    -1,   472,  1255,    -1,   291,    -1,
     438,  1317,  1232,   789,    -1,    -1,   378,  1318,   790,    -1,
     493,  1248,    -1,  1248,    -1,   179,    -1,   792,   510,  1188,
      -1,   792,     9,  1314,   793,    -1,   792,   237,     9,  1314,
     326,    -1,   792,    38,  1314,   793,    -1,   792,   237,    38,
    1314,   326,    -1,   338,    -1,     3,    -1,    -1,   794,   793,
      -1,   326,    -1,  1248,    -1,   318,    -1,   508,  1248,   198,
    1234,    50,  1234,    -1,   797,   798,    -1,   254,   800,    -1,
      -1,   799,   798,    -1,   801,    -1,  1318,   291,    -1,   334,
    1257,    -1,   472,  1257,    -1,    -1,   304,   234,    -1,   304,
      -1,  1257,    -1,   803,   806,    -1,  1344,  1316,   804,  1308,
      -1,    -1,   805,    -1,   244,    -1,   390,    -1,    55,    -1,
     820,  1257,    -1,   807,    -1,   808,    -1,   808,   807,    -1,
    1257,    -1,   421,  1307,  1234,  1282,    -1,   211,  1304,    -1,
     500,  1307,   122,    -1,    -1,    -1,   395,   401,   460,   813,
     814,    -1,    -1,   815,    -1,   816,   460,    -1,   815,   816,
     460,    -1,   711,    -1,    -1,   701,   702,   817,   818,    -1,
     701,     1,   460,    -1,    -1,   818,   819,    -1,    46,   254,
      -1,    46,   395,    -1,    39,    -1,    47,    -1,   163,   159,
      -1,   163,   161,    -1,   213,    -1,   268,    -1,   384,    -1,
     482,    -1,   323,    -1,   245,    -1,    33,    -1,   402,    -1,
     376,    -1,   200,    -1,   350,    59,  1307,  1239,    -1,   350,
      -1,   465,    -1,   254,  1315,  1307,   822,  1241,    -1,  1342,
    1315,  1307,   823,  1241,    -1,   192,  1307,  1241,    -1,    36,
    1307,  1241,    -1,   720,    -1,   742,    -1,   825,    -1,   739,
      -1,   724,    -1,   744,    -1,   719,    -1,   824,    -1,   506,
    1248,    -1,   198,  1244,    -1,   455,  1248,    -1,   334,    -1,
     472,    -1,   273,    -1,   467,    -1,    -1,   820,    -1,   821,
      -1,    -1,   820,    -1,   821,    -1,   310,  1255,  1334,    -1,
    1307,   206,    -1,    -1,    -1,    -1,   342,   125,   830,   838,
     460,   827,   839,   828,   841,    -1,    -1,   829,   852,   460,
     841,    -1,    -1,    -1,   506,   831,   833,    -1,    -1,    58,
     832,   833,    -1,   834,    -1,   833,   834,    -1,   835,   836,
     837,   513,    -1,    -1,  1294,   362,    -1,  1294,   507,    -1,
      -1,   417,  1307,    33,    -1,   417,  1307,   113,    -1,   485,
     417,  1307,    33,    -1,   485,   417,  1307,  1255,    -1,   417,
    1307,  1255,    -1,    -1,   317,    -1,    -1,   382,   513,    -1,
      -1,    -1,   112,   460,   840,   841,   132,   112,   460,    -1,
      -1,   841,   842,    -1,   843,    -1,   846,    -1,   852,   460,
      -1,   847,    -1,   460,    -1,    -1,   513,   401,   848,   460,
     844,   845,    -1,    -1,  1142,   460,    -1,   513,   460,    -1,
     513,    -1,    -1,  1255,    -1,    -1,    -1,   850,   851,   852,
      -1,    -1,   853,   854,    -1,   852,   854,    -1,   855,    -1,
     871,    -1,   876,    -1,   880,    -1,   885,    -1,   900,    -1,
     903,    -1,   911,    -1,   907,    -1,   912,    -1,   913,    -1,
     918,    -1,   932,    -1,   936,    -1,   939,    -1,   953,    -1,
     957,    -1,   960,    -1,   963,    -1,   967,    -1,   968,    -1,
     972,    -1,   982,    -1,   985,    -1,  1002,    -1,  1004,    -1,
    1007,    -1,  1011,    -1,  1017,    -1,  1029,    -1,  1044,    -1,
    1045,    -1,  1048,    -1,  1049,    -1,  1053,    -1,  1059,    -1,
    1060,    -1,  1068,    -1,  1083,    -1,  1093,    -1,  1102,    -1,
    1107,    -1,  1114,    -1,  1118,    -1,  1120,    -1,  1123,    -1,
    1126,    -1,  1130,    -1,  1157,    -1,   289,   406,    -1,     1,
    1286,    -1,    -1,     4,   856,   857,   870,    -1,   858,   860,
     864,   865,   866,  1165,    -1,  1248,   198,   859,    -1,  1248,
     198,  1343,    -1,  1248,   198,   106,   518,    -1,  1248,   198,
     106,    -1,  1248,   198,   107,   517,    -1,  1248,   198,   107,
      -1,  1248,   198,   108,    -1,  1248,   198,   165,   239,    -1,
    1248,   198,   168,   430,    -1,  1248,   198,   452,    -1,  1248,
     198,   502,   279,    -1,  1248,   198,    72,    -1,  1248,   198,
     158,  1165,    -1,  1248,   198,   156,  1237,  1165,    -1,  1248,
     198,    25,    -1,  1248,   198,    26,  1165,    -1,  1248,   198,
    1215,    -1,  1248,   198,   513,    -1,  1248,    -1,   313,    -1,
     257,    -1,   254,   304,    -1,    -1,   861,    -1,  1292,   862,
     863,    -1,  1292,   863,   862,    -1,  1292,   862,    -1,  1292,
     863,    -1,    31,  1237,    -1,   254,  1315,  1241,    -1,  1342,
    1315,  1241,    -1,   336,  1315,  1241,    -1,    -1,   199,    -1,
      -1,   275,  1307,    48,    -1,    -1,   512,   867,    -1,   868,
      -1,   867,   868,    -1,    33,    -1,   444,    -1,    39,    -1,
      47,    -1,    94,    -1,   200,    -1,   213,    -1,   245,    -1,
     266,    -1,   268,    -1,   293,    -1,   323,    -1,   350,    59,
    1307,  1239,    -1,   350,    -1,   376,    -1,   384,    -1,   402,
      -1,   482,    -1,   292,   869,    -1,   869,    -1,   498,    -1,
     192,  1307,  1241,    -1,    36,  1307,  1241,    -1,   397,   491,
    1187,    -1,   397,   126,  1187,    -1,   453,  1288,  1242,    -1,
     492,    -1,   113,    -1,    -1,   133,    -1,    -1,     6,   872,
     873,   875,    -1,  1230,   455,  1207,  1171,    -1,  1230,   874,
     205,  1207,  1171,    -1,    97,  1248,   455,  1248,  1282,  1171,
      -1,    -1,   455,  1231,    -1,    -1,   134,    -1,    -1,    11,
     877,   878,    -1,  1248,  1276,   879,    -1,  1201,    60,  1277,
     879,    -1,    -1,   382,  1229,    -1,    -1,    19,   881,   882,
      -1,   883,    -1,   882,   883,    -1,  1217,   455,   884,  1217,
      -1,    -1,   344,   455,    -1,    -1,    52,   886,   887,   899,
      -1,   888,  1240,   889,   894,   897,   898,    -1,    -1,   429,
      -1,   431,    -1,   274,    -1,    -1,    -1,   506,   890,   891,
      -1,   892,    -1,   891,   892,    -1,   893,   313,    -1,   893,
     836,  1231,    -1,    -1,  1294,   362,    -1,  1294,    90,    -1,
    1294,   507,    -1,    -1,   895,  1306,  1248,    -1,   895,   896,
      -1,   895,     7,  1317,  1248,    -1,   382,    -1,   205,    -1,
     469,    -1,   313,    -1,    -1,  1347,   849,    -1,    -1,   299,
     849,    -1,    -1,   135,    -1,    -1,    53,   901,   902,    -1,
    1239,    -1,   902,  1239,    -1,    -1,    63,   904,   905,    -1,
    1212,   906,    -1,   905,  1212,   906,    -1,    -1,  1354,    -1,
    1354,  1300,   367,    -1,  1339,   292,   386,    -1,  1339,   265,
      -1,    -1,    77,   908,   909,   910,    -1,  1207,  1345,  1201,
    1171,    -1,    -1,   136,    -1,    74,    -1,    91,    -1,    -1,
     114,   914,   915,   917,    -1,  1212,  1324,  1036,  1184,    -1,
     463,   916,    -1,  1212,    -1,   916,  1212,    -1,    -1,   137,
      -1,    -1,   122,   919,   920,   931,    -1,  1239,   496,  1168,
      -1,  1239,   497,  1168,    -1,  1239,   494,  1168,    -1,  1239,
     495,  1168,    -1,  1230,   924,   928,  1168,    -1,   921,  1168,
      -1,  1231,   512,   929,  1168,    -1,   923,    -1,    -1,   921,
     922,   923,    -1,  1231,   861,   925,   865,   927,    -1,    -1,
     493,  1215,    -1,   493,   513,    -1,   493,   340,    -1,   493,
      99,    -1,    -1,   493,   926,    -1,    99,    -1,   100,    -1,
      -1,   512,   929,    -1,    -1,   303,    -1,   930,    -1,   929,
     930,    -1,    39,    -1,    46,   254,    -1,    46,   395,    -1,
      47,    -1,    94,    -1,   163,   159,    -1,   163,   161,    -1,
     213,    -1,   268,    -1,   323,    -1,   384,    -1,   482,    -1,
     192,  1307,  1241,    -1,    36,  1307,  1241,    -1,   397,   491,
    1187,    -1,   397,   126,  1187,    -1,    -1,   138,    -1,    -1,
     124,   933,   934,   935,    -1,  1231,   230,  1207,  1171,    -1,
    1231,   230,  1231,   205,  1207,  1171,    -1,  1231,    50,  1231,
     205,  1207,  1171,    -1,  1231,   230,  1231,   205,  1208,   366,
    1208,  1171,    -1,  1231,    50,  1231,   205,  1208,   366,  1208,
    1171,    -1,    -1,   139,    -1,    -1,   155,   937,   938,    -1,
     259,   889,    -1,    -1,   166,   940,   941,   952,    -1,   942,
     944,    -1,   943,    -1,   942,    18,   943,    -1,  1189,    -1,
     473,    -1,   462,    -1,   945,   947,    -1,   945,    -1,   946,
      -1,   945,   946,    -1,   948,   849,    -1,   510,   321,   849,
      -1,   510,   949,    -1,   948,   510,   949,    -1,   950,    -1,
     949,    18,   950,    -1,  1190,   951,    -1,    22,    -1,   473,
      -1,   462,    -1,    -1,   451,  1189,    -1,    -1,   140,    -1,
      -1,   171,   954,   955,    -1,    -1,   345,   956,    -1,   201,
      -1,   329,   104,    -1,   329,    -1,   401,    -1,   328,    -1,
      -1,   895,  1231,    -1,    -1,   197,   958,   959,    -1,  1228,
      -1,    -1,   204,   961,   962,    -1,  1252,    -1,    -1,   207,
     964,   965,    -1,  1335,  1216,   966,    -1,    -1,   117,  1318,
    1248,    -1,   208,   956,    -1,    -1,   217,   969,  1188,  1333,
     970,   971,    -1,   849,   131,   849,    -1,   131,   849,    -1,
     849,    -1,    -1,   142,    -1,    -1,   224,   973,   974,    -1,
    1228,   975,   976,   977,   981,    -1,    -1,  1339,   178,    -1,
      -1,    10,  1335,   507,    -1,   980,  1335,   507,    -1,    -1,
     370,   978,    -1,   979,    -1,   978,   979,    -1,   980,  1298,
      50,  1231,    -1,    13,    -1,    16,    -1,   306,    -1,    17,
      -1,   307,    -1,   280,    -1,   281,    -1,    -1,  1333,  1335,
     113,    -1,    -1,   226,   983,   984,    -1,  1213,    -1,   984,
    1213,    -1,    -1,   229,   986,   987,    -1,   988,   989,    -1,
    1248,    -1,  1259,    -1,  1262,    -1,   990,   992,    -1,   990,
      -1,   992,    -1,   993,    -1,    -1,   445,   991,   994,    -1,
     370,   996,    -1,    95,  1237,   455,  1238,  1000,    -1,   995,
      -1,   994,   995,    -1,  1237,   191,    -1,    60,  1000,    -1,
      10,    -1,   243,    -1,   477,    -1,  1237,  1000,    -1,   997,
      -1,   996,   997,    -1,    60,    50,  1237,  1000,    -1,   998,
     999,    -1,    -1,    10,    -1,   243,    -1,   180,    -1,   477,
      -1,  1237,    50,  1238,  1000,    -1,    -1,  1000,  1001,    -1,
      38,  1305,  1231,    -1,     9,  1305,  1231,    -1,    -1,   272,
    1003,  1085,    -1,    -1,   276,  1005,  1006,    -1,  1231,   455,
    1228,    -1,    97,  1231,   455,  1228,    -1,    -1,   278,  1008,
    1009,  1010,    -1,  1231,    50,  1207,  1171,    -1,  1231,    50,
    1231,   205,  1207,  1171,    -1,    -1,   143,    -1,    -1,   316,
    1012,  1013,    -1,  1014,  1015,  1036,  1211,  1016,    -1,  1013,
    1014,  1015,  1036,  1211,  1016,    -1,   227,    -1,   322,    -1,
     235,    -1,   173,    -1,    -1,   411,  1339,   652,    -1,    -1,
    1339,   292,   386,    -1,  1339,   265,    -1,   385,    -1,    -1,
     329,  1018,  1019,    -1,  1023,  1024,    -1,    -1,  1024,  1020,
     849,  1021,    -1,  1024,  1022,    -1,    -1,   144,    -1,   144,
      -1,   460,    -1,  1217,    -1,  1217,   451,  1217,    -1,    -1,
    1240,   454,    -1,   193,    -1,  1025,   490,  1026,    -1,  1025,
     508,  1027,    -1,    -1,  1339,   448,  1162,    -1,   171,    -1,
    1188,    -1,  1028,    -1,  1027,     9,  1028,    -1,  1248,   198,
    1231,    50,  1231,   490,  1188,    -1,    -1,   354,  1030,  1031,
    1043,    -1,  1212,  1279,  1324,  1032,  1033,  1041,  1042,    -1,
      -1,   230,  1248,    -1,    -1,  1034,    -1,  1035,  1039,    -1,
    1040,    -1,   219,   265,    -1,  1339,   218,   265,    -1,     8,
    1318,   265,    -1,  1037,    -1,    -1,  1037,    -1,  1038,    -1,
     380,  1300,  1201,   454,    -1,   380,  1300,  1201,   400,    -1,
     380,   193,    -1,    -1,  1040,    -1,  1057,    -1,  1339,   238,
     265,    -1,  1339,   509,    -1,    -1,   239,  1307,  1248,    -1,
    1184,    -1,  1178,    -1,    -1,   146,    -1,   355,    -1,    -1,
     365,  1046,  1047,    -1,  1209,  1160,    -1,   379,    -1,    -1,
     381,  1050,  1051,  1052,    -1,  1212,  1324,  1032,  1177,    -1,
      -1,   147,    -1,    -1,   387,  1054,  1055,  1058,    -1,  1209,
    1160,  1036,  1056,  1184,    -1,    -1,  1057,    -1,  1339,   265,
      -1,  1339,   292,   265,    -1,    -1,   148,    -1,   391,    -1,
      -1,   399,  1061,  1062,  1067,    -1,  1210,  1063,  1064,  1065,
      -1,    10,  1210,  1064,   510,  1189,   849,    -1,    -1,   508,
    1248,    -1,    -1,   132,   849,    -1,  1066,    -1,  1066,  1065,
      -1,   510,  1188,   849,    -1,    -1,   149,    -1,    -1,   410,
    1069,  1070,    -1,  1073,    -1,  1074,    -1,  1077,    -1,  1078,
      -1,  1079,    -1,  1081,    -1,   314,    -1,   312,    -1,   491,
      -1,   126,    -1,   156,  1237,   455,  1237,    -1,  1245,    32,
    1075,    -1,  1076,    -1,  1075,  1076,    -1,    39,  1071,    -1,
      47,  1071,    -1,   213,  1071,    -1,   268,  1071,    -1,   384,
    1071,    -1,   482,  1071,    -1,   245,  1071,    -1,   323,  1071,
      -1,  1228,   455,   155,  1236,    -1,  1228,   455,  1231,    -1,
    1228,  1072,    50,  1231,    -1,  1080,    -1,  1079,  1080,    -1,
    1214,   455,  1071,    -1,  1082,    -1,  1081,  1082,    -1,  1228,
     455,   473,    -1,  1228,   455,   462,    -1,    -1,   419,  1084,
    1085,    -1,    -1,  1246,  1087,  1089,  1090,  1086,  1091,  1092,
      -1,    -1,  1087,  1318,   735,  1309,  1088,    -1,    -1,  1088,
    1252,    -1,    -1,  1357,  1303,    -1,    -1,  1341,  1307,  1221,
      -1,    -1,   506,  1211,    -1,   227,   342,  1307,  1023,    -1,
      -1,   205,  1211,    -1,   322,   342,  1307,  1023,    -1,    -1,
     428,  1094,  1095,  1101,    -1,  1212,  1097,  1096,  1184,    -1,
      -1,  1339,  1356,  1201,    -1,    -1,   239,  1307,  1098,  1248,
      -1,   180,    -1,   242,    -1,  1194,    -1,  1280,  1195,    -1,
    1280,  1196,    -1,  1280,  1197,    -1,  1280,  1198,    -1,  1099,
      -1,  1100,    -1,   295,  1194,    -1,   298,    -1,    -1,   150,
      -1,    -1,   433,   393,  1103,  1104,    -1,   433,  1106,    -1,
      -1,   895,  1231,    -1,  1339,   164,  1331,  1105,    -1,  1339,
     294,  1331,  1105,    -1,    -1,  1231,    -1,   259,    -1,   423,
      -1,   519,    -1,   351,    -1,    -1,   434,  1108,  1109,  1113,
      -1,  1110,   230,  1248,  1112,  1174,    -1,  1111,    -1,  1110,
    1111,    -1,  1231,    -1,   115,  1294,   417,    -1,   115,  1294,
    1231,    -1,    -1,  1339,   335,  1307,  1248,    -1,    -1,   151,
      -1,    -1,   437,  1115,  1116,  1117,    -1,  1230,   198,  1207,
    1171,    -1,  1230,   198,  1231,   205,  1207,  1171,    -1,    97,
    1248,   198,  1248,  1282,  1171,    -1,    -1,   152,    -1,   439,
    1119,    -1,    -1,   341,    -1,    -1,   447,  1121,  1122,    -1,
    1213,    -1,  1122,  1213,    -1,    -1,   478,  1124,  1125,    -1,
    1248,   198,  1237,   455,  1238,    -1,    -1,   484,  1127,  1128,
      -1,  1212,  1129,    -1,    -1,   356,    -1,   358,    -1,    -1,
     489,  1131,  1132,  1141,    -1,  1240,  1133,  1136,  1112,  1140,
    1174,    -1,    -1,   115,  1294,  1134,    -1,  1135,    -1,  1134,
     318,  1135,    -1,  1274,  1237,    -1,   230,  1137,    -1,  1136,
    1137,    -1,  1248,  1138,  1139,    -1,    -1,   116,  1302,  1248,
      -1,    -1,    98,  1302,  1248,    -1,    -1,   445,  1302,  1248,
      -1,    -1,   153,    -1,    -1,   501,  1143,  1144,    -1,  1145,
      -1,  1148,    -1,  1152,    -1,  1154,    -1,  1155,    -1,  1146,
    1288,  1330,  1346,  1322,  1318,  1147,    -1,    -1,   206,    -1,
    1211,    -1,   227,    -1,   322,    -1,   235,    -1,   173,    -1,
    1300,   110,  1318,  1149,    -1,  1150,    -1,  1149,  1150,    -1,
    1218,    -1,    10,   343,    -1,    10,  1151,  1252,    -1,    -1,
     363,    -1,   363,   311,    -1,   311,    -1,  1292,   345,  1153,
      -1,   428,    -1,   132,    -1,  1146,    38,   372,  1248,    -1,
    1156,    -1,   169,    -1,   130,    -1,    -1,   516,  1158,  1159,
    1164,    -1,  1209,  1160,  1161,  1036,  1056,  1163,    -1,    -1,
     198,  1244,    -1,    -1,  1162,  1287,  1241,  1310,    -1,  1162,
    1287,  1215,    -1,  1162,  1287,   326,    -1,    38,    -1,     9,
      -1,  1184,    -1,  1181,    -1,    -1,   154,    -1,  1166,  1167,
      -1,    -1,   168,   849,    -1,    -1,   299,   849,    -1,  1169,
    1170,    -1,    -1,   168,   849,    -1,    -1,   299,   849,    -1,
    1172,  1173,    -1,    -1,   418,   849,    -1,    -1,   302,   849,
      -1,  1175,  1176,    -1,    -1,   470,   849,    -1,    -1,   301,
     849,    -1,  1179,  1180,    -1,  1179,    -1,  1179,  1180,    -1,
    1179,    -1,  1180,    -1,   132,   849,    -1,   296,   849,    -1,
    1182,  1183,    -1,  1182,    -1,  1183,    -1,   160,   849,    -1,
     297,   849,    -1,  1185,  1186,    -1,    -1,   233,   849,    -1,
      -1,   300,   849,    -1,    -1,  1243,  1355,    -1,  1189,    -1,
    1190,    -1,    -1,  1191,  1192,    -1,  1193,    -1,  1192,   234,
      -1,  1192,  1193,    -1,  1231,    -1,   471,    -1,   457,    -1,
     472,    -1,   467,    -1,   468,    -1,   459,    -1,   172,    -1,
    1194,    -1,  1195,    -1,  1196,    -1,  1197,    -1,  1198,    -1,
     298,    -1,   295,    -1,    21,    -1,   318,    -1,   313,    -1,
     306,    -1,    13,    -1,    14,    -1,    15,    -1,   337,    -1,
     287,    -1,   461,    -1,   162,  1335,    -1,   464,    -1,   209,
      -1,   466,    -1,   248,    -1,   210,    -1,   249,    -1,  1201,
      -1,  1199,  1200,  1201,    -1,    -1,    73,    -1,   405,    -1,
    1201,   472,  1202,    -1,  1201,   467,  1202,    -1,  1202,    -1,
    1202,   468,  1203,    -1,  1202,   459,  1203,    -1,  1203,    -1,
    1204,   172,  1203,    -1,  1204,    -1,   472,  1205,    -1,   467,
    1205,    -1,  1205,    -1,   471,  1201,   457,    -1,  1234,    -1,
     253,    -1,   253,  1348,   513,    -1,   255,    -1,   255,  1348,
     513,    -1,   327,    -1,   327,  1348,   513,    -1,  1208,    -1,
    1207,  1208,    -1,  1229,  1282,    -1,  1252,    -1,  1252,    -1,
    1212,    -1,  1211,  1212,    -1,   513,    -1,   513,    -1,  1215,
      -1,  1214,  1215,    -1,   274,    -1,    -1,  1216,  1217,    -1,
    1218,    -1,  1252,    -1,  1219,    -1,  1219,  1348,  1219,    -1,
     259,    -1,  1221,    -1,  1220,  1221,    -1,  1252,    -1,   513,
      -1,  1224,    -1,  1223,  1224,    -1,   513,    -1,  1221,    -1,
     259,    -1,   513,    -1,   513,    -1,  1229,    -1,  1228,  1229,
      -1,  1250,    -1,  1260,    -1,     7,  1317,  1249,    -1,  1231,
      -1,  1230,  1231,    -1,  1248,    -1,  1259,    -1,  1262,    -1,
    1206,    -1,   247,  1249,    -1,   247,  1260,    -1,   247,  1262,
      -1,     7,  1317,  1235,  1236,    -1,     7,  1317,  1249,    -1,
     274,    -1,  1234,    -1,  1232,  1234,    -1,  1248,    -1,  1260,
      -1,  1262,    -1,  1248,    -1,  1260,    -1,  1262,    -1,  1206,
      -1,   247,  1249,    -1,   247,  1260,    -1,   247,  1262,    -1,
     345,    -1,   155,    -1,  1249,    -1,   259,    -1,  1248,    -1,
    1260,    -1,  1248,    -1,  1259,    -1,  1248,    -1,   259,    -1,
    1248,    -1,   259,    -1,  1262,    -1,  1245,    -1,  1255,    -1,
     519,    -1,  1245,    -1,  1257,    -1,  1245,    -1,  1255,    -1,
    1248,    -1,  1259,    -1,  1262,    -1,  1247,    -1,  1247,    -1,
    1252,    -1,  1252,  1253,    -1,  1249,    -1,  1252,  1253,  1254,
      -1,  1252,  1253,    -1,  1252,  1254,    -1,  1252,    -1,  1251,
      -1,  1206,    -1,  1252,  1253,  1254,    -1,  1252,  1253,    -1,
    1252,  1254,    -1,  1252,    -1,   513,    -1,   513,  1348,  1252,
      -1,   471,  1199,   457,    -1,   471,  1201,   458,   457,    -1,
     471,  1201,   458,  1201,   457,    -1,   259,    -1,   259,    -1,
     259,    -1,   519,    -1,   259,    -1,   423,    -1,   519,    -1,
     351,    -1,   214,    -1,   269,    -1,   469,    -1,  1260,    -1,
      10,  1261,    -1,  1261,    -1,  1260,   456,  1261,    -1,   259,
      -1,   423,    -1,   519,    -1,   351,    -1,   214,    -1,   269,
      -1,   469,    -1,  1263,  1266,    -1,  1264,   471,  1233,   457,
    1266,    -1,  1265,   471,  1199,   457,  1266,    -1,   479,   471,
    1268,   457,  1266,    -1,   308,   471,  1269,   457,    -1,   261,
     471,  1270,   457,  1266,    -1,   262,   471,  1270,   457,  1266,
      -1,   263,   471,  1270,   457,  1266,    -1,   195,   471,  1271,
     457,  1266,    -1,   196,   471,  1272,   457,  1266,    -1,   203,
    1267,    -1,   504,  1267,    -1,   102,    -1,   511,    -1,   499,
      -1,   267,    -1,   383,    -1,    85,    -1,   194,    -1,   435,
      -1,   436,    -1,    -1,   471,  1201,   458,   457,    -1,   471,
    1201,   458,  1201,   457,    -1,    -1,   471,  1199,   457,    -1,
     471,   457,    -1,  1233,    -1,  1233,  1200,   243,    -1,  1233,
    1200,   477,    -1,  1233,    -1,  1233,  1200,  1233,    -1,  1201,
      -1,  1201,  1200,  1221,    -1,  1199,    -1,  1199,  1200,   443,
      -1,  1199,    -1,  1199,  1200,   443,    -1,    -1,    -1,    10,
      -1,    -1,  1357,    -1,    -1,   225,    -1,    -1,   225,  1278,
      -1,    -1,   455,  1238,    -1,    -1,   289,    -1,   339,    -1,
      -1,   295,    -1,    -1,   317,    -1,   295,   317,    -1,    -1,
     392,  1283,    -1,    -1,   275,  1307,  1284,    -1,    35,    -1,
     284,    -1,   285,    -1,   286,    -1,   349,    -1,   475,    -1,
     476,    -1,   480,    -1,    -1,   407,  1295,    -1,   460,    -1,
       4,    -1,     6,    -1,    11,    -1,    19,    -1,    52,    -1,
      53,    -1,    63,    -1,    74,    -1,    77,    -1,    91,    -1,
     114,    -1,   122,    -1,   124,    -1,   131,    -1,   155,    -1,
     166,    -1,   171,    -1,   197,    -1,   204,    -1,   207,    -1,
     208,    -1,   217,    -1,   224,    -1,   226,    -1,   229,    -1,
     272,    -1,   276,    -1,   278,    -1,   289,    -1,   316,    -1,
     329,    -1,   354,    -1,   365,    -1,   381,    -1,   387,    -1,
     391,    -1,   399,    -1,   410,    -1,   419,    -1,   428,    -1,
     433,    -1,   434,    -1,   437,    -1,   439,    -1,   447,    -1,
     478,    -1,   484,    -1,   489,    -1,   516,    -1,   133,    -1,
     134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,    -1,
     139,    -1,   140,    -1,   142,    -1,   143,    -1,   144,    -1,
     146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,    -1,
     151,    -1,   152,    -1,   153,    -1,   154,    -1,    -1,     8,
      -1,    -1,     9,    -1,    -1,    23,    -1,    -1,    24,    -1,
      -1,    27,    -1,    -1,    31,    -1,    -1,    40,    -1,    -1,
      50,    -1,    -1,    59,    -1,    -1,    60,    -1,    -1,    89,
      -1,    -1,   105,    -1,    -1,   463,    -1,    -1,   191,    -1,
      -1,   198,    -1,    -1,   220,    -1,    -1,   319,    -1,   220,
     319,    -1,    -1,   223,    -1,    -1,   465,    -1,    -1,   230,
      -1,    -1,   234,    -1,    -1,   234,    -1,    23,    -1,    -1,
     239,    -1,    -1,   254,    -1,   257,    -1,    -1,   250,  1308,
      -1,   251,  1308,    -1,    -1,   257,    -1,    -1,   275,    -1,
      -1,   288,    -1,    -1,   304,    -1,    -1,   304,    -1,   305,
      -1,    -1,   311,    -1,    -1,   314,    -1,    -1,   314,    -1,
     191,    -1,    -1,   430,   234,    -1,   430,    -1,   234,    -1,
      -1,   321,    -1,    -1,   342,    -1,    -1,   345,    -1,    -1,
     356,    -1,    -1,   390,    -1,    -1,   412,    -1,    -1,   413,
      -1,    -1,   412,    -1,   412,   234,    -1,    -1,   417,    -1,
      -1,   425,    -1,    -1,   430,    -1,    -1,   446,    -1,    -1,
     450,    -1,    -1,   454,    -1,    -1,   455,    -1,    -1,   455,
      -1,   506,    -1,    -1,   510,    -1,    -1,   510,   410,   455,
      -1,    -1,   512,    -1,    -1,   356,    -1,    66,   408,    -1,
     408,    -1,    69,    -1,    67,    -1,    70,    -1,    68,    -1,
    1342,    -1,  1343,    -1,   461,    -1,   162,    -1,   168,    -1,
     164,    -1,   168,    -1,   470,    -1,   220,    -1,   311,    -1,
     425,    -1,   313,    -1,   254,    -1,   257,    -1,   356,    -1,
     358,    -1,    60,    -1,   514,    -1,   356,  1308,    -1,   358,
    1308,    -1,   361,    -1,   483,    -1,   254,    -1,   257,    -1,
     417,    -1,   246,    -1,   512,   127,    -1,   127,    -1,   345,
      66,   408,    -1,    66,   408,    -1,   408,    -1,   119,    -1,
     109,    -1,    92,   212,    -1,    57,    -1,    92,   190,    -1,
      56,    -1,   326,   212,    -1,   330,    -1,   326,   190,    -1,
     331,    -1,   371,   212,    -1,   389,    -1,   371,   190,    -1,
     388,    -1,    92,  1308,    -1,    93,  1308,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
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
    8134,  8166,  8201,  8202,  8203,  8204,  8208,  8209,  8213,  8214,
    8215,  8216,  8228,  8227,  8239,  8246,  8245,  8257,  8266,  8274,
    8281,  8285,  8298,  8305,  8317,  8320,  8325,  8329,  8340,  8347,
    8348,  8352,  8353,  8356,  8357,  8362,  8402,  8401,  8410,  8439,
    8440,  8444,  8448,  8452,  8456,  8463,  8467,  8474,  8478,  8481,
    8483,  8487,  8495,  8500,  8505,  8512,  8514,  8518,  8522,  8526,
    8533,  8534,  8538,  8539,  8543,  8547,  8557,  8568,  8567,  8575,
    8585,  8596,  8595,  8604,  8611,  8615,  8626,  8625,  8637,  8646,
    8649,  8653,  8657,  8664,  8668,  8678,  8690,  8689,  8698,  8702,
    8711,  8712,  8717,  8720,  8728,  8732,  8739,  8747,  8751,  8762,
    8761,  8775,  8776,  8777,  8778,  8779,  8780,  8784,  8785,  8789,
    8790,  8796,  8805,  8812,  8813,  8817,  8821,  8825,  8829,  8833,
    8837,  8841,  8845,  8854,  8858,  8867,  8876,  8877,  8881,  8890,
    8891,  8895,  8899,  8910,  8909,  8918,  8917,  8948,  8951,  8971,
    8972,  8975,  8976,  8984,  8985,  8990,  8995,  9005,  9021,  9026,
    9036,  9053,  9052,  9062,  9075,  9078,  9086,  9089,  9094,  9099,
    9107,  9108,  9109,  9110,  9111,  9112,  9116,  9124,  9125,  9129,
    9133,  9144,  9143,  9153,  9166,  9169,  9173,  9181,  9193,  9196,
    9203,  9204,  9205,  9206,  9213,  9212,  9221,  9228,  9229,  9233,
    9234,  9235,  9239,  9240,  9244,  9248,  9259,  9258,  9267,  9271,
    9275,  9282,  9286,  9296,  9307,  9308,  9315,  9314,  9322,  9329,
    9342,  9341,  9349,  9363,  9362,  9370,  9383,  9385,  9386,  9394,
    9393,  9402,  9410,  9411,  9416,  9417,  9422,  9429,  9430,  9435,
    9442,  9443,  9447,  9448,  9452,  9453,  9457,  9461,  9472,  9471,
    9480,  9481,  9482,  9483,  9484,  9488,  9515,  9518,  9530,  9540,
    9545,  9550,  9555,  9563,  9601,  9602,  9606,  9646,  9656,  9679,
    9680,  9681,  9682,  9686,  9695,  9701,  9711,  9742,  9751,  9752,
    9759,  9758,  9770,  9780,  9781,  9786,  9789,  9793,  9797,  9804,
    9805,  9809,  9810,  9814,  9818,  9830,  9833,  9834,  9843,  9844,
    9853,  9856,  9857,  9866,  9867,  9878,  9881,  9882,  9891,  9892,
    9904,  9907,  9909,  9919,  9920,  9932,  9933,  9937,  9938,  9939,
    9943,  9952,  9963,  9964,  9965,  9969,  9978,  9989,  9994,  9995,
   10004, 10005, 10016, 10020, 10030, 10037, 10044, 10044, 10055, 10056,
   10057, 10061, 10070, 10071, 10073, 10074, 10075, 10076, 10077, 10079,
   10080, 10081, 10082, 10083, 10084, 10086, 10087, 10088, 10090, 10091,
   10092, 10093, 10094, 10097, 10098, 10102, 10103, 10107, 10108, 10112,
   10113, 10117, 10121, 10127, 10131, 10137, 10138, 10139, 10143, 10144,
   10145, 10149, 10150, 10151, 10155, 10159, 10163, 10164, 10165, 10168,
   10169, 10179, 10191, 10200, 10216, 10225, 10241, 10256, 10257, 10262,
   10271, 10277, 10297, 10301, 10322, 10363, 10377, 10378, 10383, 10389,
   10390, 10395, 10407, 10408, 10409, 10416, 10427, 10428, 10432, 10440,
   10448, 10452, 10459, 10468, 10469, 10475, 10489, 10506, 10510, 10517,
   10518, 10519, 10526, 10530, 10537, 10538, 10539, 10540, 10541, 10545,
   10549, 10553, 10557, 10561, 10582, 10586, 10593, 10594, 10595, 10599,
   10600, 10601, 10602, 10603, 10607, 10611, 10618, 10619, 10623, 10624,
   10628, 10629, 10633, 10634, 10645, 10646, 10650, 10651, 10652, 10656,
   10657, 10658, 10665, 10666, 10670, 10671, 10675, 10676, 10677, 10683,
   10687, 10691, 10692, 10696, 10700, 10707, 10714, 10721, 10731, 10735,
   10742, 10752, 10762, 10772, 10785, 10789, 10797, 10805, 10809, 10819,
   10834, 10857, 10877, 10884, 10900, 10901, 10902, 10903, 10904, 10905,
   10909, 10913, 10930, 10934, 10941, 10942, 10943, 10944, 10945, 10946,
   10947, 10953, 10957, 10961, 10965, 10969, 10973, 10977, 10981, 10985,
   10989, 10993, 10997, 11004, 11005, 11009, 11010, 11011, 11015, 11016,
   11017, 11018, 11022, 11026, 11030, 11037, 11041, 11045, 11052, 11059,
   11066, 11076, 11083, 11093, 11100, 11110, 11114, 11127, 11131, 11146,
   11154, 11155, 11159, 11160, 11164, 11165, 11170, 11173, 11181, 11184,
   11191, 11193, 11194, 11198, 11199, 11203, 11204, 11205, 11210, 11213,
   11226, 11230, 11238, 11242, 11246, 11250, 11254, 11258, 11262, 11266,
   11273, 11274, 11280, 11281, 11282, 11283, 11284, 11285, 11286, 11287,
   11288, 11289, 11290, 11291, 11292, 11293, 11294, 11295, 11296, 11297,
   11298, 11299, 11300, 11301, 11302, 11303, 11304, 11305, 11306, 11307,
   11308, 11309, 11310, 11311, 11312, 11313, 11314, 11315, 11316, 11317,
   11318, 11319, 11320, 11321, 11322, 11323, 11324, 11325, 11326, 11327,
   11328, 11329, 11330, 11331, 11332, 11333, 11334, 11335, 11336, 11337,
   11338, 11339, 11340, 11341, 11342, 11343, 11344, 11345, 11346, 11347,
   11348, 11349, 11356, 11356, 11357, 11357, 11358, 11358, 11359, 11359,
   11360, 11360, 11361, 11361, 11362, 11362, 11363, 11363, 11364, 11364,
   11365, 11365, 11366, 11366, 11367, 11367, 11368, 11368, 11369, 11369,
   11370, 11370, 11371, 11371, 11372, 11372, 11372, 11373, 11373, 11374,
   11374, 11375, 11375, 11376, 11376, 11377, 11377, 11377, 11378, 11378,
   11379, 11379, 11379, 11380, 11380, 11380, 11381, 11381, 11382, 11382,
   11383, 11383, 11384, 11384, 11385, 11385, 11385, 11386, 11386, 11387,
   11387, 11388, 11388, 11388, 11389, 11389, 11389, 11389, 11390, 11390,
   11391, 11391, 11392, 11392, 11393, 11393, 11394, 11394, 11395, 11395,
   11396, 11396, 11397, 11397, 11397, 11398, 11398, 11399, 11399, 11400,
   11400, 11401, 11401, 11402, 11402, 11403, 11403, 11404, 11404, 11405,
   11405, 11405, 11406, 11406, 11407, 11407, 11408, 11408, 11409, 11409,
   11413, 11413, 11414, 11414, 11415, 11415, 11416, 11416, 11417, 11417,
   11418, 11418, 11419, 11419, 11420, 11420, 11421, 11421, 11422, 11422,
   11423, 11423, 11424, 11424, 11425, 11425, 11426, 11426, 11427, 11427,
   11428, 11428, 11429, 11429, 11432, 11433, 11434, 11438, 11438, 11439,
   11439, 11440, 11440, 11441, 11441, 11442, 11442, 11443, 11443, 11444,
   11444, 11445, 11445
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
  "control_keyword", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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
       5,     6,     1,     1,     1,     1,     0,     3,     0,     3,
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

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
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
    1143,     0,  1156,  1916,  1199,  1164,  1170,  1171,   748,  1167,
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
       0,  1199,     0,     0,  1168,  1181,  1177,  1182,  1178,  1183,
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
    1848,     0,  1835,  1292,  1141,  1144,     0,     0,  1157,  1158,
    1169,  1166,     0,     0,  1191,  1190,   748,  1223,  1456,  1468,
    1230,     0,  1243,  1476,  1476,  1238,  1244,  1261,  1273,  1275,
    1265,  1266,  1267,  1271,  1268,  1272,  1269,  1270,  1264,  1714,
    1318,     0,  1315,  1316,  1310,     0,  1303,  1951,  1950,     0,
    1900,  1328,  1328,  1451,     0,  1718,  1348,     0,   740,     0,
    1701,  1373,  1374,     0,  1377,  1380,  1384,  1378,  1229,  1803,
       0,   488,   485,   486,     0,  1684,   320,   525,  1854,  1855,
    1641,  1642,   542,   537,   541,   540,   363,   556,   529,   534,
    1611,   679,  1609,  1610,   678,   695,   701,     0,   698,   723,
     724,   733,   751,     0,     0,  1436,   837,   839,   838,  1437,
     748,  1435,   821,  1446,  1571,  1447,   748,  1445,  1630,   881,
    1709,  1602,  1603,  1932,  1933,   928,   748,  1867,  1842,   925,
     924,   920,     0,  1722,  1723,  1724,  1725,  1726,  1727,  1728,
    1729,  1721,     0,  1469,   748,  1467,     0,  1001,  1000,  1003,
       0,  1614,  1615,  1002,     0,   972,  1446,  1537,  1446,  1537,
     911,   912,     0,   916,   915,   917,  1035,  1041,  1031,  1065,
    1069,  1080,  1083,  1084,  1824,  1076,  1907,  1081,  1132,  1132,
       0,  1117,  1115,  1116,  1121,  1295,     0,  1289,  1836,  1446,
    1158,  1161,  1150,     0,  1184,     0,  1869,     0,  1210,  1192,
    1205,  1198,  1194,  1207,     0,  1460,   748,  1455,  1228,  1231,
       0,   748,   748,  1245,  1317,  1307,  1311,  1312,  1313,  1314,
    1305,  1326,  1329,  1327,   748,  1336,  1453,  1843,  1446,  1446,
     742,  1362,  1700,  1376,  1832,  1382,  1832,  1451,  1468,  1428,
    1427,  1850,   487,   481,  1556,   536,  1938,  1939,   538,   365,
     557,   693,   691,   694,   692,   696,   697,     0,   673,   699,
     700,     0,   751,   843,   848,  1843,   850,   851,   852,   875,
    1843,   853,   854,   855,   856,   857,     0,   858,   859,   861,
     862,   863,     0,   864,   849,  1804,   865,   874,   868,   845,
     846,   867,   807,  1439,   882,  1449,   748,   902,   927,     0,
     919,  1203,  1202,  1471,  1948,  1949,  1473,   983,  1010,     0,
    1009,     0,   913,  1085,  1825,     0,     0,  1113,  1124,  1132,
    1839,  1839,  1133,     0,     0,  1298,  1294,  1288,  1145,  1151,
    1160,     0,     0,     0,  1195,  1843,  1468,  1193,  1206,     0,
       0,     0,  1209,  1461,  1232,  1239,  1246,  1452,   748,  1450,
       0,  1350,  1349,  1388,   741,     0,  1375,     0,  1832,  1379,
       0,  1371,   748,   748,  1422,  1432,  1463,  1464,  1431,  1851,
    1852,  1426,  1557,     0,  1843,  1843,     0,  1843,   543,   544,
     545,   546,   547,   548,     0,   559,   676,   677,     0,     0,
       0,   866,  1843,  1472,  1472,  1805,     0,   847,   929,   921,
    1446,  1446,     0,  1095,  1131,  1840,     0,     0,  1843,  1296,
       0,     0,  1286,  1290,  1159,     0,  1197,     0,  1188,  1213,
    1458,  1459,  1212,  1196,  1208,  1454,  1343,  1396,   743,  1381,
       0,  1385,  1465,  1466,  1462,  1958,  1957,  1843,     0,     0,
    1960,     0,  1843,  1843,     0,   539,  1892,     0,   870,   869,
       0,   872,   871,   873,  1612,  1613,  1012,  1011,  1086,  1135,
    1134,     0,  1299,  1843,  1476,  1211,  1457,  1419,  1418,  1397,
    1389,  1390,  1804,  1391,  1392,  1393,  1394,  1417,     0,     0,
    1383,     0,   554,   550,  1959,     0,     0,   549,   610,  1837,
     625,  1843,     0,   609,  1843,  1867,   558,  1843,  1843,     0,
     564,   566,   575,   567,   569,   572,   560,   561,   562,   571,
     573,     0,   576,   563,   619,   568,     0,   570,   574,   565,
    1926,  1927,  1864,   732,   860,  1297,     0,  1185,     0,  1897,
       0,  1869,   551,   553,   552,  1838,   642,   627,   618,     0,
     469,     0,     0,     0,     0,     0,  1860,  1860,     0,  1476,
       0,     0,   617,   619,   621,   628,     0,   629,   637,   638,
       0,   640,  1865,  1866,   631,  1300,     0,  1898,     0,  1415,
    1414,  1413,     0,   626,   597,     0,     0,   593,   594,  1905,
    1718,   599,  1584,  1962,     0,     0,  1964,  1966,     0,  1970,
    1968,   577,   582,  1871,  1871,   579,   583,   578,   584,   643,
       0,  1861,   611,   611,  1860,  1860,   604,   623,   624,   620,
     622,   639,   636,   635,   633,   634,  1845,   632,  1416,  1931,
    1930,  1880,  1409,  1403,  1404,  1406,   595,   596,   473,   641,
    1869,     0,   598,  1585,  1961,  1965,  1963,  1969,  1967,  1873,
    1872,   585,   589,     0,   615,   613,   605,   611,   614,   607,
       0,     0,   630,  1881,  1869,  1412,  1407,  1410,     0,  1405,
     465,     0,   601,   588,   580,   586,   592,   591,   581,   590,
       0,   612,   606,   608,     0,  1411,  1408,     0,   464,   603,
     600,   602,     0,   616,  1402,  1399,  1401,  1400,  1395,  1398,
     466,   587
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
     676,   677,   678,   679,  2632,  2808,   680,   800,   969,  1175,
     798,  1414,  1417,  1418,  1686,  1683,  2202,  2203,   681,   682,
     754,   683,   684,   685,  1016,   806,   807,  1211,   686,   687,
     497,   591,   526,   621,   553,   724,   791,   855,  1219,  1458,
    1715,  1716,  2005,  2006,  2007,  2008,  1717,  2212,  2213,  2375,
    2508,  2509,  2510,  2511,  2512,  2513,  2002,  2217,  2515,  2576,
    2636,  2637,  2721,  2794,  2798,  2638,  2707,  2639,  2762,  2810,
    2640,  2641,  2776,  2777,  2642,  2643,  2644,  2682,  2683,  2668,
    2684,  2645,  2646,  2746,  2747,  2687,  2688,  2689,  2647,  2648,
    2649,   595,   792,   858,   859,   860,  1221,  1459,  1751,  2385,
    2386,  2387,  2391,  1752,  1753,   727,  1466,  2031,   728,   863,
    1042,  1041,  1224,  1225,  1226,  1463,  1759,  1044,  1761,  2231,
    1166,  1399,  1400,  2360,  2484,  1401,  1402,  1967,  1824,  1825,
    2078,  1403,   795,   916,   917,  1116,  1232,  1233,  1787,  1470,
    1525,  1767,  1768,  1764,  2033,  2235,  2419,  2420,  2421,  1468,
     918,  1117,  1239,  1482,  1480,   919,  1118,  1246,  1805,   920,
    1119,  1250,  1251,  1807,   921,  1120,  1259,  1260,  1535,  1860,
    2098,  2099,  2100,  2067,  1135,  2261,  2255,  2427,  1491,   922,
    1121,  1262,   923,  1122,  1265,  1497,   924,  1123,  1268,  1502,
     925,   926,   927,  1124,  1278,  1511,  1514,   928,  1125,  1281,
    1282,  1519,  1283,  1523,  1852,  2093,  2285,  1835,  1849,  1850,
    1517,   929,  1126,  1288,  1531,   930,  1127,  1291,   931,  1128,
    1294,  1295,  1296,  1540,  1541,  1542,  1870,  1543,  1865,  1866,
    2104,  1537,   932,  1129,  1305,  1136,   933,  1130,  1306,   934,
    1131,  1309,   935,  1132,  1312,  1877,   936,   937,  1137,  1881,
    2111,   938,  1138,  1317,  1584,  1890,  2114,  2302,  2303,  2304,
    2305,   939,  1139,  1319,   940,  1140,  1321,  1322,  1590,  1591,
    1902,  1592,  1593,  2125,  2126,  1899,  1900,  1901,  2119,  2311,
    2452,   941,  1141,   942,  1142,  1331,   943,  1143,  1333,  1600,
     944,  1145,  1339,  1340,  1604,  2322,   945,  1146,  1343,  1608,
    2141,  1609,  1344,  1345,  1346,  1916,  1918,  1919,   946,  1147,
    1353,  1931,  2328,  2329,  2330,  1821,  1822,  1823,  2467,  2332,
    2466,  2548,  1616,   947,   948,  1148,  1355,   949,   950,  1149,
    1358,  1623,   951,  1150,  1360,  2149,  2150,  1626,   952,   953,
    1151,  1363,  1632,  1934,  2155,  2156,  1630,   954,  1152,  1368,
     160,  1644,  1369,  1370,  1953,  1954,  1371,  1372,  1373,  1374,
    1375,  1376,   955,  1153,  1326,  2315,  1594,  2457,  1904,  2128,
    2455,  2542,   956,  1154,  1384,  1956,  1652,  2171,  2172,  2173,
    1648,   957,  1386,  1654,  2351,  1160,   958,  1161,  1388,  1389,
    1390,  2183,  1658,   959,  1162,  1393,  1663,   960,  1164,   961,
    1165,  1395,   962,  1167,  1404,   963,  1168,  1406,  1672,   964,
    1169,  1409,  1676,  2191,  2192,  1972,  2194,  2365,  2489,  2367,
    1674,  2485,  2557,  2600,  2601,  2602,  2818,  2603,  2753,  2754,
    2788,  2604,  2701,  2605,  2606,  2607,   965,  1170,  1411,  1621,
    1973,  1924,  2494,  1678,  2040,  2041,  2241,  1520,  1521,  1829,
    2056,  2057,  2247,  2355,  2356,  2479,  2147,  2549,  2148,  2337,
    2495,  2496,  2497,  2076,  2077,  2275,  2279,  1315,  1316,  1298,
    1299,  1570,  1571,  1572,  1573,  1574,  1575,  1576,   998,  1198,
    1420,  1000,  1001,  1002,  1003,  1004,  1270,  1505,  1356,  1364,
     396,   397,  1036,  1377,  1378,  1581,  1347,  1253,  1254,  2373,
     483,   302,   700,   701,   484,    98,   153,  1307,  1272,  1241,
    1483,  2711,  1432,  1005,  1792,  2051,  2127,  2250,  1263,  1348,
    2221,  2583,  2280,  1926,  2222,  1327,  1381,  1006,  1007,  1273,
    1274,   749,   802,   803,  2223,   272,  2215,   180,  1244,   775,
     776,  1009,  1010,  1011,  1012,  1206,  1179,  1440,  1436,  1429,
    1421,  1423,   502,  2193,   540,  1486,  1803,  2062,  1619,  2175,
     283,  1508,  1817,  2271,   812,  1115,  2200,  2526,   611,   340,
     693,  1472,   424,  1227,   203,   115,   394,  2445,   338,   353,
    1034,   785,  2133,  2666,  2536,  2262,    96,   215,   415,  2501,
    2001,   781,   403,  2732,  2018,  2694,   816,  2686,  2771,   219,
     489,  2784,   169,   391,   745,   102,   733,   689,   849,  2698,
    2181,   351,  1583,   972,  1313,   408,   743,  1212,  1352,   405,
     392,  1769,  1789,  2652,  1506,  2751,  2256,   185,   704,  2378,
     722,   348,   603,  1499,  2436,  2179,   541,   204,  2567,  2573,
    2724,  2725,  2726,  2727,  2728,  1719
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2496
static const yytype_int16 yypact[] =
{
   -2496,   271,   569, -2496,   543,   630, -2496,   569, -2496, -2496,
     940, -2496, -2496,   940,   940,   -44,   -44, -2496,  1068, -2496,
    1027,   867,  1063, -2496, -2496,  1289,  1289,   898,   999, -2496,
   -2496,   638,   940,   -44, -2496, -2496,  1162,   970, -2496, -2496,
     974,  1407,   -44, -2496, -2496, -2496,   867,   988, -2496, -2496,
     -88, -2496,   958,   958,  1048,  1070,  1260,  1260,  1260,  1100,
     958,  1114,  1073,  1082,  1260,  1109,  1119,  1526, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,   461, -2496, -2496, -2496, -2496,
    1405, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
    1472,  1203,   638, -2496, -2496,  1216,   284, -2496, -2496,  1260,
    1260, -2496,  1260,  1157,  1620,  1157,  1245,  1260,  1260, -2496,
   -2496,  1157, -2496, -2496, -2496,  1197,   992,  1267, -2496, -2496,
    1202, -2496,  1275, -2496, -2496, -2496, -2496,  -125, -2496, -2496,
   -2496,  1375, -2496,  1260,   907,  1157,  1493,   -14, -2496, -2496,
   -2496, -2496, -2496,  1505,  1278,   347,  1569, -2496,  1259, -2496,
    1197, -2496,    75, -2496, -2496, -2496, -2496, -2496, -2496,  1280,
     555,  1260,    -3, -2496, -2496, -2496,   419, -2496, -2496, -2496,
    1295, -2496, -2496, -2496, -2496, -2496, -2496, -2496,   907, -2496,
    1322, -2496,   454, -2496, -2496,  1157, -2496,  1370, -2496,  1372,
    1369,  1722,  1260, -2496, -2496, -2496,   369, -2496, -2496, -2496,
   -2496, -2496,   133,  1728,  1260,   120, -2496,    73, -2496, -2496,
      -5, -2496, -2496, -2496, -2496,  1533,   555, -2496,  1559,   958,
     958, -2496,  1280,  1344,    65,   765, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,   -87,
   -2496,    95, -2496,   907, -2496, -2496,  1476, -2496, -2496, -2496,
    1260,  1397,  1551, -2496, -2496, -2496, -2496,   863,  1260,  1299,
    1582,   749, -2496,  1788,   758,  1356, -2496, -2496,  1357,  1708,
   -2496,  1533, -2496,   958, -2496, -2496, -2496, -2496, -2496, -2496,
    1362,  1506, -2496,   958, -2496,   866, -2496,    57, -2496, -2496,
   -2496, -2496, -2496,   -87, -2496,  1571,  1551, -2496, -2496, -2496,
     594, -2496, -2496, -2496,  1573, -2496, -2496, -2496, -2496, -2496,
    1553, -2496, -2496, -2496, -2496, -2496,  1371, -2496, -2496, -2496,
    1809,  1730,  1378, -2496, -2496,   -87, -2496, -2496,    16, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,  1393, -2496,
    1650,  1717,  1381, -2496,  1833, -2496, -2496, -2496, -2496,  1873,
   -2496,  1763, -2496,  1340,  1395,  1459, -2496,   -87,  1587,  1507,
     722,  1457, -2496,  1458,  1260,  1807,   423,    42,  1120, -2496,
    1360, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
    1441, -2496,  1608, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,  1834,  1260, -2496,  1340, -2496,  1340, -2496, -2496,  1416,
     545, -2496, -2496,  1260, -2496,  1640, -2496, -2496,  1279, -2496,
   -2496,   882,  1260,  1260, -2496,  1260,  1260, -2496,  1809, -2496,
     389,  1260,  1587, -2496,  1473,  1373,  1340, -2496,  1547, -2496,
   -2496, -2496, -2496,  1374, -2496,  1383,    55,   286,  1260, -2496,
   -2496,  1008, -2496, -2496, -2496,   -43,  1462,  1157,  1157, -2496,
    1564,  1564,  1576, -2496,  1157,  1260, -2496, -2496, -2496,  1551,
   -2496,  1491,  1638, -2496, -2496,  1444, -2496, -2496, -2496, -2496,
   -2496,  1157, -2496, -2496,   400,   400,  1893,   400, -2496, -2496,
     400,   499, -2496, -2496, -2496, -2496,   759, -2496, -2496, -2496,
   -2496, -2496, -2496,   119, -2496,  1445,  1509,  1648,   775,  1453,
    5645, -2496,  1398, -2496, -2496,   -28, -2496, -2496, -2496, -2496,
    1371, -2496, -2496, -2496, -2496, -2496,  1260, -2496, -2496,  1396,
   -2496,  1396, -2496, -2496,  1455,  1515,  1546, -2496,  1461, -2496,
    1463, -2496,  1830, -2496,  1831, -2496,  1524, -2496,  1795, -2496,
    1485, -2496, -2496, -2496,  1157,  1157,   588, -2496, -2496,  1383,
   -2496,  1465,  1525,  1534, -2496, -2496, -2496,  1135,  1763,  1260,
    -103,  -103,  1260,    43,  1587,  1260,  1905, -2496,  1619, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,   958,
    1261, -2496,   145,  1421, -2496, -2496, -2496, -2496,  1618, -2496,
   -2496,  1383, -2496,  1475,  1535, -2496,  7140,   730,  1732,  1551,
    1427,   603,   603,  1428,  -110,   -43,  1551,  1434,  1260, -2496,
   -2496, -2496,   -59,   958, -2496, -2496, -2496,  1485,    70,   816,
   -2496,  1383, -2496,  1483,   868,   896, -2496, -2496,  -167,   463,
     647,   679,   690,  1437, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,  1554, -2496,   827, -2496, -2496, -2496, -2496,  1157,  1157,
    1714, -2496, -2496, -2496,   -33, -2496, -2496, -2496,  1260,   603,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,  1290,   121,
   -2496,  1436, -2496,   191, -2496,  1495, -2496, -2496, -2496, -2496,
    1428, -2496, -2496, -2496, -2496,  1695,    71,  1733,  1442,  1260,
   -2496, -2496,  1260, -2496, -2496,   641, -2496, -2496, -2496,  1242,
   -2496, -2496, -2496, -2496, -2496, -2496,  1829, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496,  1438, -2496, -2496,  1902,  1503, -2496,  1489,
    1510, -2496, -2496, -2496, -2496,  7619,   641,  1935, -2496,  1556,
    1556, -2496,  1215,  1653, -2496,   752,   752, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,  1511, -2496,  1551,   113, -2496,
   -2496, -2496,  1551, -2496, -2496,  1548, -2496,   510,   510, -2496,
   -2496,  1613,  1456,    86,  3782,  4325, -2496,  1733,  1770,  1551,
    1516,  8168,  1504, -2496,  1157, -2496,   641, -2496,  1523,  1718,
   -2496,  1807, -2496, -2496, -2496, -2496,   752,  1519, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,  1215, -2496, -2496, -2496, -2496,    32,  1526, -2496,   991,
   -2496, -2496, -2496, -2496,  1469, -2496,  4592, -2496, -2496,  1456,
    1528, -2496, -2496,  1607,  4812, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,   495, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,  1584, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496,   482, -2496, -2496,  1651,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496,  1478,  1551,  1503,
   -2496, -2496,  1880, -2496, -2496, -2496,  1527,  1530,  1532,  3146,
     -14,   -14,  1537,  1538,  1539, -2496,  1540,   -14, -2496, -2496,
   -2496,  8447,  8168,  8447,  1543, -2496,  1532, -2496,   225,  1160,
     540, -2496,  1827, -2496, -2496, -2496, -2496, -2496,  1511, -2496,
    1545,  1549,  1550,  8168, -2496, -2496,   621, -2496,   641, -2496,
   -2496, -2496, -2496, -2496,   -43,   -43, -2496, -2496, -2496, -2496,
    1814, -2496, -2496,  1495,  1551, -2496, -2496,  1557, -2496,  1558,
   -2496,    67,    67,  1512,  1566, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496,   331,  5772,  8168,   522,
     694,   526,  1340,   968,  -226,  6582,  6636,  1747,   738,  1000,
     968,  1157,  1568, -2496, -2496,  6636, -2496, -2496,   968,  1469,
    3175,  1157,  5912,  6636, -2496,   989,  4343,  1340,  1157,  1340,
    1157,    60,   546,  1157,  1340, -2496, -2496, -2496, -2496, -2496,
   -2496,  2637,  6019, -2496, -2496,  1469,    78,  1157,  1340,  2052,
    1157, -2496, -2496,  1794,  1713, -2496,  8168,  8168,  7641, -2496,
   -2496,  1511, -2496,  1517,  1521,  8168,  8168,  8168,  3146,  1529,
   -2496,  1136, -2496,  3146, -2496, -2496, -2496, -2496,  8168,  7679,
    8168,  8168,  8168,  8168,  8168,  8168, -2496,  3146,  8168,  1160,
    1622, -2496,  1577, -2496, -2496, -2496,  2007,  1526, -2496,   177,
   -2496, -2496, -2496, -2496,   245, -2496,  -191,   486,   267, -2496,
   -2496, -2496,  1907,   695,  1843,  1653,  1157,  3146, -2496,  1909,
   -2496,  6159, -2496, -2496, -2496, -2496, -2496,   144,   731, -2496,
     522, -2496,  1589, -2496,   -14, -2496, -2496, -2496, -2496,  1911,
    2052, -2496,   526, -2496, -2496,  1340,   830,  1653,  1913, -2496,
     912, -2496,  1655, -2496, -2496,  1489,  1511,  1340,  1920,  1702,
    1243,  1923,  6182, -2496,  6282,   158,  1272,  1288,  1927,   178,
    1561, -2496, -2496, -2496,  1928,    49, -2496, -2496, -2496,  5297,
   -2496, -2496,  1965,   495, -2496, -2496, -2496,   968, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,  1621, -2496, -2496,   717,  1469,
   -2496, -2496,   328, -2496, -2496, -2496, -2496, -2496, -2496,  1601,
    6636, -2496,  1632,  1930,  2024, -2496, -2496, -2496, -2496,   989,
    1677, -2496,  1635, -2496,  6777,   -42,  -245,  1639,  1643, -2496,
    1061, -2496,  1644,  1945,  1079, -2496,  1895, -2496,  1947,  1702,
    1948,  1895,  1157,  1949,  1592, -2496,  1043, -2496, -2496, -2496,
   -2496, -2496, -2496,  1828, -2496,   968, -2496,   -84, -2496,   395,
    2069, -2496,    45, -2496,  1954,  1128,   492,  2055,  1956,  4912,
   -2496, -2496,  1157,  1957,  6305,  1469, -2496, -2496,   876, -2496,
   -2496, -2496, -2496,  4027, -2496,  1912, -2496,  1255, -2496,  1958,
    1997,  1959,  1895, -2496, -2496, -2496,  1157,  1894,   204,   231,
    1118,  1658,   237,  1661, -2496,   260, -2496, -2496,   212,  1662,
    1663,  1664,   268, -2496,  1511, -2496,  1665, -2496, -2496,   294,
    1667,  1118, -2496,  1192,   540,   540, -2496, -2496, -2496,  1210,
    1669,   327,  1673,  1260, -2496,   -43,  2000,  1670,   583,  7361,
   -2496,  1260,  1715,  1817, -2496, -2496,  2019, -2496, -2496,  1043,
    1936, -2496,   737,  1719,    81,  1681, -2496,  1511, -2496, -2496,
   -2496,  6851,  1934, -2496,  1915, -2496,  1759, -2496,  1798,  1884,
   -2496, -2496,  1561, -2496,   830, -2496, -2496, -2496,  1091,   518,
    1157, -2496, -2496, -2496, -2496, -2496,  8168,  1869, -2496,  1504,
   -2496,  1340, -2496, -2496, -2496,  1765, -2496, -2496, -2496,  6636,
   -2496,  1849,    82,  1846,  1966,  1659,  1983,  1983,  1983,  1983,
   -2496, -2496,  6636,  6851, -2496, -2496, -2496, -2496,   738,   142,
   -2496,  1645, -2496,  1646, -2496, -2496, -2496, -2496,  1568, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
    5018, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,   -16, -2496,  2022,  1011,  1979, -2496,  1043,   147, -2496,
   -2496,  1790, -2496, -2496,    87,  8168, -2496,  1706,   968, -2496,
   -2496,  6851,  1677,  1360,  1765, -2496, -2496, -2496, -2496, -2496,
    1991,  1157,   522, -2496,   241, -2496, -2496, -2496, -2496,  1702,
    3175, -2496, -2496, -2496,  1933, -2496, -2496,  1765,  2032, -2496,
   -2496,  1157,  2032,  1710, -2496,  1511, -2496, -2496,   728,  1280,
   -2496, -2496,  2614, -2496,  2116,   812,    58, -2496, -2496, -2496,
    1260, -2496,   465,  6636, -2496,   826,  6495, -2496, -2496,  1157,
   -2496,  1969, -2496, -2496,  6851, -2496,  1551, -2496, -2496,  1043,
   -2496, -2496, -2496, -2496, -2496,  2055,  1938, -2496, -2496,   241,
    1894, -2496,  2055, -2496, -2496, -2496,  1640,  7826,  1545,  7967,
    1545, -2496,  1157,  1545,  1545,  1545,  3146, -2496,   143,  1545,
   -2496,  8106,  1545,  1545, -2496,   641, -2496,  1713, -2496, -2496,
    1260,   603,   603,  1451, -2496, -2496, -2496, -2496,  1964,   -60,
   -2496,  1260, -2496,   447, -2496, -2496, -2496,  1496,  1260,  3175,
   -2496, -2496, -2496,  1868, -2496,  1551, -2496,  2114, -2496, -2496,
   -2496,  1157, -2496, -2496,  1157, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,  1968,  1868,   925,  1260, -2496,  1668,
    1716, -2496, -2496, -2496,  1900,  1868,  1868,    94,  1924,  1868,
   -2496,  2009, -2496, -2496, -2496,  1671,  1666, -2496,  1043,  2009,
    1941,  1752,  1882, -2496, -2496,  1917, -2496, -2496, -2496, -2496,
   -2496, -2496,   549, -2496,  1157,  1653,  1985,   858, -2496,   125,
      12,   968,  1736,  1759,   968, -2496,  1737,   522, -2496,   495,
   -2496, -2496,  1802,  1835, -2496,   797,  1260, -2496, -2496, -2496,
    1518,  1961, -2496, -2496, -2496, -2496, -2496,  2166, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,  1983,  1260, -2496,   -79, -2496,
   -2496,  1565,  1260, -2496, -2496, -2496, -2496,    -2, -2496,  1339,
   -2496,  1642,  1900, -2496, -2496, -2496, -2496,  1995,   858,  1996,
      36, -2496, -2496, -2496, -2496,  2188, -2496,  1756,   140, -2496,
   -2496,   142, -2496, -2496, -2496, -2496,  1713, -2496, -2496, -2496,
    2077,  2067,  1568, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
    1840,  1568, -2496,  1758, -2496,  2161, -2496, -2496, -2496,  1230,
   -2496,  1043,   936, -2496,    44,   204,   663,   968,   968,   858,
    2011,  1765,   389,  1340,  2070, -2496, -2496, -2496,  2208, -2496,
    2021, -2496, -2496, -2496, -2496,  1933, -2496, -2496, -2496, -2496,
    1157,  2090,  -118, -2496,  1720, -2496,  1721,  1043,   859, -2496,
     549, -2496, -2496, -2496,  6636,  1280,  1280,  1280,  1280,  1280,
    1280,  1280,  1280,   812, -2496,   512,  1961,   589, -2496,  1793,
    1793, -2496, -2496,   405,  1157,   858,  2023,  1764, -2496,  1772,
    2223,  1157,   576,  1765,  2227, -2496,  1723,  1260, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,  1193, -2496, -2496, -2496,  1157,   526, -2496, -2496,   603,
     603,   -92,  1456, -2496, -2496, -2496,  1157,  1157, -2496, -2496,
     562, -2496, -2496, -2496, -2496,   562, -2496, -2496,  1260,  1516,
    1260, -2496, -2496, -2496,  1260, -2496, -2496, -2496,   382, -2496,
   -2496, -2496,  1260,  1726,   562,   562, -2496, -2496,   562, -2496,
   -2496,  1940, -2496, -2496,  2009, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496,  1655,    81, -2496, -2496,  1939,   161,  2035,
     858,   475, -2496, -2496, -2496, -2496, -2496,     2,   162, -2496,
   -2496, -2496,   792, -2496,  8168, -2496, -2496,  1942, -2496, -2496,
   -2496,   562, -2496, -2496, -2496, -2496,   562,   553,   553, -2496,
   -2496, -2496, -2496, -2496,  1739,   968, -2496,   968,  5649, -2496,
     865,     7,   142, -2496, -2496, -2496,  2188,  1157, -2496, -2496,
   -2496, -2496,  1738,  1336,    27,  1742,   475,  1043, -2496, -2496,
    2194, -2496, -2496, -2496, -2496,   936, -2496,  2062, -2496,  1260,
    1640,  1943, -2496, -2496,   968, -2496,   968,  1340, -2496,   706,
   -2496, -2496,  1157,  6636,   316, -2496, -2496, -2496,  1963,  1961,
   -2496,  1107, -2496, -2496, -2496, -2496,  1721, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,   -20,
   -2496,  1157, -2496, -2496, -2496,  1089, -2496, -2496, -2496,  8168,
   -2496,  6636,  6636,  1784,  1925,  1655, -2496,   968, -2496,   475,
   -2496,  1946, -2496,  1043, -2496,  2145,  1818, -2496,  -118, -2496,
     933, -2496,  1723, -2496,  1157, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496,  1291, -2496, -2496,   -37, -2496,  1157, -2496,
   -2496, -2496, -2496, -2496, -2496,   969, -2496,   526,   969, -2496,
   -2496, -2496,    88,  2217,  2012,  2009, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496,  1848,  2063, -2496, -2496, -2496,  2064, -2496,
   -2496, -2496, -2496, -2496, -2496,  1971, -2496,  1653, -2496, -2496,
   -2496, -2496,  1157, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,   944, -2496, -2496, -2496,  3327, -2496, -2496, -2496,
    1355, -2496, -2496, -2496,  1966, -2496,   858,  1901,   858,  1908,
   -2496, -2496,  6636, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,  1336, -2496,  2168, -2496,  1568, -2496, -2496, -2496,
     475,   854, -2496, -2496,   854,    59,  1157, -2496, -2496,   858,
     706, -2496, -2496,  1191, -2496,  2221,  1713,  2010,  2037, -2496,
     498, -2496, -2496, -2496,   628, -2496, -2496, -2496, -2496, -2496,
    2014, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
    1118, -2496, -2496, -2496, -2496, -2496,  1981,  1260,  1848,   858,
    1782, -2496,  2223, -2496,  1733,  2187,  1733,  1784,  1010, -2496,
   -2496,  1379, -2496,  1157, -2496,  1359, -2496, -2496,   -92, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496,   562, -2496, -2496,
   -2496,   562,    -4, -2496, -2496,  1260, -2496, -2496, -2496, -2496,
    1260, -2496, -2496, -2496, -2496, -2496,    10, -2496, -2496,  2228,
   -2496, -2496,    33, -2496, -2496,  2279, -2496, -2496, -2496,  2012,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,  1157,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496,  1966, -2496,   968,
   -2496,   968, -2496, -2496, -2496,  2241,  2180,   854,   854, -2496,
    1832,  1832, -2496,  1952,  1340,   841, -2496,  1157, -2496, -2496,
   -2496,  1916,  6636,  2030, -2496,  1260,    66, -2496, -2496,   544,
    2033,  2034, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
    1157, -2496, -2496, -2496, -2496,  1847, -2496,  1157,  1733, -2496,
    1157, -2496, -2496, -2496, -2496, -2496,  2013, -2496, -2496, -2496,
   -2496, -2496, -2496,   148,  1260,  1260,  1265,  1260, -2496, -2496,
   -2496, -2496, -2496, -2496,  1660, -2496, -2496, -2496,  2196,   562,
     562, -2496,  1260,   553,   553, -2496,   -92, -2496, -2496, -2496,
    1848,  1848,  6636, -2496,   854, -2496,  6636,  6636,  1260,  1340,
    1340,  1967, -2496, -2496, -2496,  1816, -2496,  1157, -2496, -2496,
    1963, -2496, -2496, -2496, -2496, -2496, -2496,   761, -2496, -2496,
    1157, -2496, -2496, -2496, -2496, -2496, -2496,  1260,   -92,   -92,
   -2496,  2100,  1260,  1260,   -92, -2496,  1185,  1856, -2496, -2496,
     526, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,   522,  1340,  1260, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,  1460, -2496, -2496, -2496, -2496, -2496,  1972,  2210,
   -2496,   -92, -2496, -2496, -2496,   -92,   -92, -2496, -2496,  2095,
    2017,  1260,  1551, -2496,  1260,  1653, -2496,  1260,  1260,  1157,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,   100, -2496, -2496,  1156, -2496,   408, -2496, -2496, -2496,
   -2496, -2496,  1443, -2496, -2496, -2496,   522, -2496,  1950,  1898,
      11,  1713, -2496, -2496, -2496, -2496, -2496,  2091, -2496,   853,
    1503,  8470,  8470,  1448,  2202,  2128,  2039,  2039,  1484, -2496,
    -109,  -109, -2496,  1156, -2496, -2496,  2038, -2496, -2496,  -109,
    -109, -2496, -2496, -2496,    84, -2496,  1157, -2496,  1229, -2496,
   -2496, -2496,    62, -2496, -2496,  1551,  1551, -2496, -2496,  1516,
    1655,  8307, -2496, -2496,  1324,  1331, -2496, -2496,  1361, -2496,
   -2496, -2496, -2496,   542,   542, -2496, -2496, -2496, -2496, -2496,
    8470, -2496,   586,   586,  2039,  2039, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496,   603, -2496, -2496, -2496,
   -2496,  1986,  1097,    62, -2496, -2496, -2496, -2496,  1880, -2496,
    1713,  1157, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,   -34,    77,  2280, -2496, -2496, -2496,   586, -2496, -2496,
    2005,  2006, -2496, -2496,  1713, -2496, -2496,  2026,  1157, -2496,
    1910,    39, -2496, -2496, -2496,  2016, -2496, -2496, -2496, -2496,
    8470, -2496, -2496, -2496,   643, -2496, -2496,  1551, -2496, -2496,
   -2496, -2496,  2015, -2496, -2496, -2496, -2496, -2496, -2496,  1340,
   -2496, -2496
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2496, -2496, -2496, -2496, -2496,  2332, -2496, -2496, -2496,   199,
   -2496,  2297, -2496,  2252, -2496, -2496,  1563, -2496, -2496, -2496,
    1637, -2496, -2496,  1542,  2319, -2496, -2496,  2220, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,  2146,
    1016, -2496, -2496, -2496, -2496, -2496,  2201, -2496, -2496, -2496,
   -2496,  2144, -2496, -2496, -2496, -2496, -2496, -2496,  2277, -2496,
   -2496, -2496, -2496,  2131, -2496, -2496, -2496, -2496, -2496,  2115,
   -2496, -2496,  1102, -2496, -2496, -2496, -2496, -2496,  2205, -2496,
   -2496, -2496, -2496,  2179, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496,  1181, -2496, -2496, -2496,
    1748, -2496, -2496, -2496, -2496, -2496, -2496,  1838, -2496,  1953,
   -2496, -2496, -2496,  1861,  1836, -2496,  1822, -2496, -2496, -2496,
   -2496,   456, -2496, -2496,  2082, -2496, -2496, -2496, -2496, -2496,
    1944, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496,  1338, -2496, -2496, -2496,
    1585, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,  -325, -2496, -2496,  1874, -2496,
    -768,  -834, -2496, -2496, -2496,   539, -2496, -2496, -2496, -2496,
     167, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -1431,   915,
    1623,   711,   754, -1430, -2496, -2496, -2496,  -958, -2496,  -382,
   -2496, -2496,   963, -2496,   474,   700, -2496,   179, -1428, -2496,
   -2496, -1424, -2496, -1422, -2496, -2496,  1578, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,   376, -1841, -2496, -2496,  -964, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2495, -2496, -2496, -2496, -2496,  -298, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496,  -303, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,  1531, -2496, -2496, -2496, -2133,
     159, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,  1347,  -366, -2496,   291, -2496, -2496, -2496, -2496,
   -1386, -2496, -2496, -2496, -2496, -2496, -2496, -2496,  -795, -2496,
   -2496,  -714, -2496,  1597, -2496, -2496, -2496, -2496, -2496, -2496,
    1161,   625,   631, -2496,   548, -2496, -2496,   -24,    -9, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,   598, -2496,
   -2496, -2496,  1152, -2496, -2496, -2496, -2496, -2496,   911, -2496,
   -2496,   307, -2496, -2496, -1294, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,   917, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,   887, -2496, -2496, -2496, -2496, -2496,   128, -1802,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,   875, -2496, -2496,   874, -2496, -2496,   556,   314,
   -2496, -2496, -2496, -2496, -2496,  1117, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,   115,   837,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,   833, -2496, -2496,   303, -2496,   530, -2496, -2496, -2002,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496,  1092,   828,   112, -2496, -2496, -2496, -2496,
   -2496, -2496, -1483,  1090, -2496, -2496, -2496,   295, -2496, -2496,
   -2496,   508, -2496, -2496, -2496, -1135,   292, -2496, -2496,   108,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,   242, -1965, -2496, -2496, -2496,
   -2496, -2496, -2496,   807,   285, -2496, -2496, -2496, -2496, -2496,
    -151, -2496, -2496, -2496, -2496,   489, -2496, -2496, -2496,  1071,
   -2496,  1072, -2496, -2496,  1292, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,   261, -2496, -2496, -2496, -2496, -2496,
    1060,   478, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,    89, -2496,   480, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,  -307,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,  -112,
   -2496,   774, -2496, -2496, -1690, -2496, -2496,  -565, -2496, -2496,
   -1580, -2496, -2496,    90, -2496, -2496, -2496, -2496,   -12, -1605,
   -2496, -2496,   -41, -1881, -2496, -2496, -1967, -1578, -1092, -1480,
   -2496, -2496,   888, -1772,   287,   293,   296,   298,   352,   202,
    -687,   550,   477, -2496,   740,  -236, -1417, -1078,   288,  1098,
   -1872,  -393,  -341, -2496, -1351, -2496, -1062, -1427,   972, -2496,
     -96,  2159, -2496,  1766,  -559,    40,  2311, -1073, -1067,   131,
    -842, -2496, -1099, -1186, -2496,   527, -1314, -1350, -1108,  -921,
   -1886, -2496, -2496,   741, -1134, -2496,  -892,  1588,  -631, -2496,
   -2496,  -101, -1222,  -779,  -116,  2203,  -927,  2233,  -673,   877,
       6,  -949, -2496, -2496, -2496,   155,  1481, -2496, -2496,   573,
   -2496, -2496, -2496, -2496,  1897, -2496, -2496, -2496, -2496, -2496,
   -2496, -1998, -2496, -2496,  1724, -2496, -2496,  -122, -2496,  2065,
   -2496, -1191, -2496, -1333,  -283,  -637,  1111, -2496,  1975, -1459,
   -2496,  -784, -2496, -2496,    30, -2496,     4,  -596,  -355, -2496,
   -2496, -2496,  -201, -1388,  -231, -2496, -1216, -1158,  -242,  2270,
    2040, -2496, -2496, -1128, -2496, -2496,  1057, -2496, -2496, -2496,
     529, -2496,   378, -1971, -1504, -2496, -2496, -2496,  -161, -2496,
     591, -1421, -1429, -2496, -2496, -2496, -2496,  -649, -2496, -2496,
    1774, -2496,  1937, -2496, -2496, -2496,   902, -2496, -2348,  -176,
   -2496, -2496, -2496, -2496, -2496, -2496
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1917
static const yytype_int16 yytable[] =
{
     161,   428,   139,   429,   139,   697,   698,   138,   216,   141,
     139,  1173,   416,   967,   794,   147,  1416,  1286,  1380,  1474,
     774,   246,  1038,  1014,   856,  1455,  1640,   748,  1745,  1747,
    1182,  1748,  1917,   428,   139,  1749,  1297,  1750,  1755,   181,
    1813,  2139,   789,   466,  1873,  1271,   705,  2089,  2226,   269,
     438,  1500,  1633,  1509,  1656,  2243,   465,  1252,   322,  1867,
     103,   104,   105,  1308,  1797,  1318,   280,  1538,   111,   783,
    1362,  1308,  2752,   756,   265,  2176,   346, -1621,  -708,  1379,
     715,  1024,   412,   808,   247,  1308,  1223,  2796,  -706,  2045,
   -1622,   856,  1653,    99,  1439,  2389,   221,  2293,   212,   537,
     107,  1876,  1606,   134,   135, -1916,   136,  1596,  1450,  2676,
     361,   143,   144,   292,   999, -1869,  1858,  1223,   709,  2004,
     162,  2283,  1788,  2399,  2087,  2314, -1816,   229,  2518,  2224,
     260,   114,   393,   808,   839,   839,   298,   170,  2677,  2743,
   -1903,   531,  1548,  2699,   861,  2793,    94, -1916,  2236,  2237,
    2210,  1515,  2238,   519,  1493,  1762,   710,  1894,  2572,  2523,
    1646,  1725,  1862,  1726,  1862,   220,  2219,  2210,  1245,  2257,
    2253,  1833,   230,   843, -1916,  2082,  1245,  1245,  1457,  2333,
     328,  1830,   231,  2174,  1909,   839,  1245,  2358,  1252,  1469,
    1367,  1325,   188,  1245,  1245,  2277,   252,  1351,  2146,   189,
    2278,   762,   222,   702,  1484, -1869,   183,  1895,   259,   420,
    1031,   752,  1245,  1245,   537,    23,   482, -1650,  2809,  -708,
    1351,   455, -1916,  -708,   590, -1812,  1461, -1812,  1532,  -706,
      43,  1624,  1684,  -706,   129,  2071,  1790,  1277,  2779,  1435,
    1580,  -521,   763,  1249,  1435,  1610,   731,  1965,  1410,  1328,
    1922,  1580,   419,   601,   296,   602,  2797,  2565,  1435,   275,
     276,  1328,   300,  1611,   233,  2320,   620,  2566,  2338,  -521,
    -521,     3,   537,  1893,   205,  1242, -1848,    94,  2096,  1923,
    -708,   414,  2801,  1285,  1289,  1195,  2453,   395,  1478,   520,
    -706,    43,  1245,  1314,  1462,  1223,   723,   184,  1195,  2075,
    1332,  1334,  1638,    24,  1195,  1191,  2447,  2448,  1308,   213,
    1195,  1351,  1580,   312,  2371,   703,  2083,  1223,   732,  1391,
    1242,  1249,  1685,   315,  2326,  2722,  1209,  1896,  2744,  2135,
   -1627,  1183,  1184,  1195,   284,  1245,   234,  2678,  1189,  1492,
     130,  1195,  1970,   494,   139,  1213,   139,   139,  1180,  1976,
    1245,   486,   487,   139,  2242,  1969,  1367,   753,   492,   127,
     281,  2074,  2336,   608,   759,  2333, -1625,  1195,   411,  2294,
     139,  1639,   -35,   508,   508,   505,   508,  2219,  2112,   508,
     515,  1245,   282,  -521,  2060,  2186,  1987,  2115,  1867,   521,
    1897,  1867,  2258,   516,   244,  1351,   425,  2344, -1816,   450,
    1195,  1415,  1267,  1271,   190,   764,   188,   437,  1533, -1818,
    2211,  -521, -1812,   189,   467,  2229,   445,   446,  1607,   447,
     448,   137,  1831,  1587,  -708,   454,  1791,  2211,   188, -1816,
    1766,  1247,   237,   517,  -706,   189,  1905,   765,   766,  2700,
    1245,  1563,   471,   139,   139,  1245,  1297,  2534,   586,   586,
     767,   285,   369,   137,   711,  1271,  1397,  1577,   128,   493,
     768,  2105,   117, -1885,  2044,  1214,  1215,  1324,   841,  1913,
     137,   844,  2254,    52,  2745,  2259,  2379,  1582,   191,   137,
    2249,   139, -1903,   695,   538,   762,   586,  2498,  1597,  2088,
     706,  1925,  1932,   716, -1812,   261,  1510,   137,  1428,  1428,
    1428,  2516,  2417,  -521,   139,  2517,  1025,   244,   256,  1398,
      97,  1441,  1443,  2690,  2295,  2068,   801,   323,  1449,  1878,
     543,  1641,    53,  1271,  2524,  1908,   782,  2101,  1020,  1013,
     347,  1308,  1245,   266, -1916,  2327,   192,   747,  1397,   413,
     580,   193,   769, -1816,   244,  2422,   293,  1391,  1397,  1995,
    1921, -1843,   137,  1267, -1916, -1848,  2581,  2582,   750,  1539,
      54,   598,    55,   600,    56,  2454,   605,   607,   395,   609,
    1245,  1580,    57,   137, -1816,   137,  2342,  2058, -1715,  2054,
    1456, -1916,  2539,  1245,  1245,  2552,  1271,  2120,   149,   717,
     137,  1398,   862,   255,   137,  1832,   801,  1986,   760,   538,
     688,  1398,  1863,  1510,  1863,  1489,  1476, -1816, -1916,   764,
    2679,  1200,   708,  1864,   770,  1864,  1201,  1196,   190,   614,
    1988,  1245,  1867,  2157,  1898,   262,   212,  -713,    58, -1816,
    1196,  2260,  1013,  2578,  2579,  2089,  1196,  -521,   468,  1798,
     190,   154,  1196,   129,  1231,  2232,   256,  1710,   980,  -711,
     981,   762,  1245,   713,   767,   223, -1916,   538,   137,   506,
     771,   842,   414,  2424,   768,  1196,   847,  2210,  2592, -1693,
    1524,  1929,   755,  1196,  1548,  1711,  1712,  1827,  2286,  1200,
    2288,   451,  1197,   970,  1201,  1030,   852,   852, -1695,   764,
    1857,  1859,   191,  1245, -1697,   469,  1820,  1133,  1588,  1196,
    1133,  2011,  1366,  1015,  1245,  -713,  2438,  1245,  2440,   352,
     772, -1916,  2759,   787,   191,  1245,   788,  1691,  2107,  2319,
     431,    60,   987,  1271,  1267, -1691,  1469,  -711,  1577,  1266,
    1818,  1279,  1196,  2769,   767,  1267, -1916,  2064,  2758,  2458,
   -1916,  1155,  2382,   452,   768,  2066,   769,  1435,  1872,   130,
     192, -1688, -1816,   817,  1354,   193,  1359,   690,   513,  1910,
     764,  1385, -1812, -1916, -1812,  2101,  2308,    61,   814,   850,
    2359,     4,   192,  1589, -1816,  1407,  2137,   193,  2481,  2482,
    1929,  1249,  2471,    42,  1703,  1261, -1916, -1916,  1880,   217,
   -1916, -1589,  1454,   818,   819,   820,   821,   822,  1320,   980,
    1943,   981,  2446,  2309,  1725,   767,  1726,  2169,  2050,  2339,
    2170,  1958,   154,  1914,  1962,   768,  2814,    94,   770,  1815,
    1367,   154,  1966,   224,  1396, -1916,   769,  2263,   244,   253,
     635,   636, -1885,  1156,  2134,  2177,  2340,   213,  2198,  2361,
    1308,  1580,  2012,  1793,   137,  2392,  2470,  1023,  1464,  2370,
    1642,  1945,  1172,   588,   329,   764,  2770,    64,  1460,  1946,
     194,  2551,  1460,  2450,   771,  1267,  2471,  1818,  -703,  1814,
    2815, -1828,  1494,   987,  1134,  1157,   731,  1134,  2816,  2363,
    2384,  1240, -1916,  2131,  1512, -1828,  1643,  1269,  2207,  1240,
    1240,  2597,  2451,  2339,  1269, -1916,  1706,   769,   770,  1240,
     767,    67,  1269, -1589,  2774,  1158,  1240,  1240,   137,  1713,
     768, -1916,  2775,   137,   772,     5,  1269,   244,  1218,  1267,
    2340,   118,   188,   139,   139,  1240,  1240,  2211,   691,   189,
    2598,   764,  2819,   823,   824,   825,   826,   827,   828,   829,
     648,   649,   764,   432,   771,  2596,  2121,  1928,   734, -1812,
    2586,  2587,   352,  2281,  2281,   746,  1485,   742,  2025,   857,
    2449,  1853,  1854,  1855,  1856,  2817,   244,  2599,  1256,   770,
     980, -1916,   981,  1563,    68,  1267,   767,   244,  1586,   589,
     -96,   980,  2132,   981,     5,   218,   768,   767,   137,   306,
    1959,  1765,   769,  1465,   772,  1245,  2122,   768, -1916,  1202,
    1441,  1159,  1441,    15,   244,  1240,  2178, -1916,  1203,  -703,
     244,  2297,   137,  -703,  1991,   771,  2657,  2287,  1255,  2289,
    2059,  1882,  1275,   137,  1883,  1947,   857,  1884,  1885,  1275,
    1310, -1812,  1994,  2079,  1269,   137,   330,  1275,  2026,   137,
    1329,  2429,   284,  1714,   987,  1350,  2540,  1357,  1240,  1357,
    1365,  1382,  1329,  2472,  1665,   987,  1928,  1948,  1271,   137,
     731,  2341,   137,  1240,   770,   772,   137,  1580,   769,  1357,
    -703,  1269,   764,  1766,  1503,   137,  2264,  2265,  2266,   769,
    1949,  2220,  1269, -1914,  2108,  2575,   154,   830,   244,   137,
      16,  2321,   731,   719,  1240, -1916,    18,   331,  2609,   137,
     831,  2736,  2159,   731,   362,  1498, -1812,   301,  2655,  1271,
     771,   980,   154,   981,    28,  1997,  1998,   767,  1819,  2388,
    1960,   171, -1916,  1257,   -96,  1258,   764,   768,   472,   473,
     474,  1210,   736,   307,   190,  1950,   363,  2472,  2152,  1269,
     770,  2267,   729,  1269,  2704,  2630,  2631,  2651,  2633,  1255,
     764,   770,  2634,  1240,  2635,  2650,   395,  1585,  1240,   285,
     772,  2052,  1335,  2541,   738,   980,   172,   981,  2463,  1275,
    2492,   767,   720,  2695,   721,   740,   173,   406,  2291,  2123,
     516,   768,   764,  1938,   154,   987,   771,  2705,  2618,  1032,
   -1589,  1495,   154,    27,  1245,   767,  1951,   771, -1589, -1589,
    1292,  1300,   730, -1589,    33,   768,  1275,  1367,   191,   769,
     726,  1293,   254,     5,  -703,  2055,  1336,  1275,   244,   395,
     517,   980,   317,   981,  1337,  1655,    94,   767,   407,   244,
     137,   633,  1245,  1245,  2216,   527,   772,   768,   442,   987,
    1894,   137,  2381,  2075,  2239,  1796,   443,   772,   475,  1627,
   -1830,   154,  1725,  1772,  1726,  1773,  1284,   764,   174,  2369,
    2245,  1365,   476,   769,  1200,   137,   192,  2268,  2269,  1201,
    2080,   193,  2270,   254,  1275,  2755,  2055,  1666,  1275,  2248,
    2273,   770,  1461,  1240,  2090,   318,   319,   769, -1699,  2733,
    1895,  1886,  1887,  1394,  1952,   987,  1240,  1796,  1550,  1551,
    1679,  2325,   767,  2382,   155,   840,   156,  2493,  1649,  2052,
    2298,  1338,   768,  1496,  2300,   139,    36,  1888,  1889,   769,
    1681,  1941,  2570,   299,   227,  2706,  2755,   771,  1301,  1302,
     175,  1977,  1942,  1498,  1240,   770,  1667,  1552,  1553,  2352,
    2352, -1843,   244,  1245,  2431,  1303,  2780,  2781,   477,  1883,
    1462,  2335,  1884,  1885,   139,  1021,  1811,  2571,    39,   770,
     478,  2530,  1269,  2531,  2276,  1796,  2608,  1650,  1617,    94,
    1651,   137,  2339,  1504,  2565,  1836,   176,   772,  1837,   154,
    1799,   771,  2380,  1812,  2566,  1838,  1839,  2272,  2252,  2281,
    2281,   770,  2584,  2749,   769,   326,  2619,  2750,  2432,  2340,
      40,  1304,  1269,  2208,  2209,   771,  1240,   439,  2785,  2672,
    1896,  1200,   417,  2124,  2514,  2210,  1201,  1240,  1618,    52,
    1240,    48,   651,  2244,   228,   137,   177,   345,  1796,   764,
      49,   772,  1799,  1840,    51,   615,  2383,   771,  1361,  2620,
    2786,  2384,  1912,  2252, -1126,  2423,   137, -1869,    93,   137,
    2442,  2425,  2220,   440,   479,   772,  2460,  1705,  1412,   401,
    2787,  2428,  1718,  1754,   757,  1756,   770,   616,    53,  2525,
    1415,    97,  2654,  1897,   767,  2621,   837,   837,   100,  2433,
    1255,   137,   101,  2461,   768,  2710,  2712,   772,  1939, -1126,
    2680,  1957,  2350,  2734,    94,  2622,   758,  1275,  2658, -1126,
    1799,   106,  1841,  2702,  2713,  2570,    54,  1518,    55,   229,
      56,  1255,   771,  1245,  2764, -1627,  2252,   655,    57,   838,
     838,  2765,  2735,  2623,  2024,  2763,   108,   837,  1419,  1422,
    1425,  1842,   801,   109,  2034,  2035,  2614,  1275,  2038,  2503,
    2714,  2473,   110,  2766,  2773,  2376,  2475,  2476,  2377,  2504,
    1968,  2767,  1843,  1564,   230,  1565,   137,  2565,    26,  2477,
    1451,  1269,   772,  1799,   231,  1269,   769,  2566,  1269,   112,
     838,  2505,   558,  2768,    58,    47,    21,    22,   232,   113,
    2487, -1126,  2490,  1245,    91,  1200,   114,  1245,  1245,   559,
    1201,   139,   155,  1438,   156,    46,  1982,   660,   720,  2585,
     721,  2506,  2791,  1200,  2612,  2613,  2624,  1844,  1201,  2434,
    2617,  1670,  2435,  1671,  2813,  2507,  1886,  1887,  1199,  2019,
    2545,  1687,  1269,  2625,  1689,   120,  2804,  1200,  2681,   560,
    1692,  2528,  1201,  2499,  1696,    59,  2500,  2252,   770,    13,
    2027,  1698,  1888,  1889,    13,  2626,   233,  2662,   122,  1700,
    2205,  2663,  2664, -1126,  1955,  2013,   509,  2014,   511,  1200,
    1200,   512,  1845,   124,  1201,  1201,  2627,    60,  1701,   599,
     137,  1269,  1269,  1269,   606,  2211,   126,  1200,  1008,  1446,
    1447,  1448,  1201,  2555,   771,  2628,   735,   737,   739,   741,
    2588,   140,   669,  2629,  2589,  2590,  1275,  2562,  2563, -1126,
    1275,  1999,  2000,  1275,  2560,   142,  1255,  1898,  1240,   352,
     149,  2073,  2709,    61,  1996,   164,    62,  2685,   234,  2691,
     168,   235,   236,  1846,  2084,  2010,  2085,   163,  1772,  1269,
    1773,  1190,  2015,  1192,   772,   165,  1847, -1605, -1605, -1605,
   -1605,  2091,  2092, -1126,  1770,  1771,   429,  2692,  2693, -1126,
    1444,  1445,   182,  2737,  2738,   187,  2685,  1275,    94,  1430,
    1431,  2028,  2691,  2742,   186,   561,  1526,  1527,  1528,  1529,
     205,  2151,   194,   243,  2715,  2317,   562,   248,  2716,  2717,
     249,    63, -1604, -1604, -1604, -1604,   250,  1772,   251,  1773,
     258,  1774,   270,   274,  2160,  2161,  2162,  2163,  2164,  2165,
    2166,  2167,  2184,    64,   279,   297,  1275,  1275,  1275,   295,
     154,  2184,   301,   303,   237,   304,   308,   309,   310,  2718,
    2072,  1848,   313,   314,  1269,  1775,  1776,  1777,   335,    65,
     327,    66,   334,   339,   337,   341,  2719,  2720,   343,   350,
    2081,   352,   354,  1979,   355,  1981,  2086,    67,  1983,  1984,
    1985,   357,   393,   395,  1989,   398,  1181,  1992,  1993,  1269,
     399,  1269,   402,   404,  1275,   409,   188,   410,  1008,  1008,
    1008,   421,   244,   422,   423,  1778,   430,  1779,   358,   414,
     563,   564,   456,   459,  1780,   488,   457,  1781,   485,   461,
    1008,   491,   495,   359,   139,   565,  -353,   566,  1269,  2206,
    1269,   510,   496,   360,   503,   523,   525,  1240,   546,  1329,
     524,   535,  2230,   529,  1329,   550,   551,   552,  -366,   557,
      68,   554,   581,   555,   583,   592,   593,   429,   610,   594,
     612,   618,   619,  1329,  1329,   622,   623,  1329,   694,   361,
     696,   699,   707,   725,   744,  1240,  1240,   742,   751,   761,
     777,  1269,   780,   784,   793,   786,   797,   796,   799,  1275,
     801,   804,   809,   811,   815,   848,   854,   841,   968, -1699,
     971,  2282,  2282,  1782,  1018,  1013,  1783,  1019,  2323,  1022,
    1329,  2204,  1035,  2334,   567,  1329,  1329,  1329,  1040,  1043,
    1144,  1171,  1163,  1367,  1275,  1008,  1275,  1174,  1176,  1204,
    1276,  1177,  1836,  1178,  1216,  1837,  1290,  1276,  1185,  1186,
    1187,  1188,  1838,  1839,  1193,  1276,  1205,  1220,  1222,  1413,
    1207,  1208,  2225,  1311,  2227,  1229,  1230,  1415,  2228,  1276,
    1426,   568,  1452,  1275,  1427,  1275,  2233,  2151,  1454,  1453,
    1467,  1473,  1437,  1479,  1488,  2394,  1490,  1507,  2395,  1501,
    1269,  2396,  1269,  1008,  1008,  1008,  1240,  1513,   442,  2397,
    1840,  1516,  1008,  1008,  1008,  1434,  1530,  1534,  1536,  1578,
    1434,  1582,  1595,  1599,  1601,  1008,  1008,  1008,  1008,  1008,
    1008,  1008,  1008,  1269,  1434,  1008,  1275,  1598,  1603, -1607,
    1612,  1615,  1614,  1620,  1622,   362,  1625,  1613,  1629,  1329,
    1631,  1645,  1367,   139,  1647,  1223,  2398,  1657,  2374,  1662,
    1669,  1673,  1675,  1677,  1477,  1688,  1682,  1707,  1690,  1693,
    1694,  1695,  1697,  1269,  1699,  2399,  1702,   363,  1704,  1841,
    1709,  1760,  1757,  2316,  1758,  1763,  1794,   973,  -235,  1801,
    1802,  1804,  1806,  1249,  1816,  1820,   429,  1276,  1828,  1834,
    2782,  1518,  1851,  1879,   974,  1868,  1871,  1892,  1842,  2323,
    1588,  1907,  1915,  1930,  1933,  1937,  1944,  1964,  1971,  2469,
    2003,  1784,  2017,  2020,  2023,  2032,  2030,  2039,  1765,  1843,
    2046,  2029,  2047,  2043,  1276,  1275,  2048,  1275,  2069,  2042,
   -1577,  2061,  2065,   364,  2075,  1276,  2049,  1469,   365,   429,
    2095,  2097,  2070,  1269,  2400,  1269,  2102,  2103,  2109,  2110,
    2113,  2117,  2401,  2116,  2140,   139,  2136,  2142,  1275,  2143,
    2456,  1785,  2146,  2180,  2188,  2402,  1240,  2189,  2187,   366,
    2153,  2154,  1786,  2190,  1844,  2199,  2201,   367,  2234,  2240,
   -1626,  2246,  2274,  1635,  2310,  2301,   975,   976,   977,  2307,
     368,  2284,  1276,  2313,  2354,   978,  1276,  2403,  1275,  2336,
    2357,  2364,  2318,  2366,  2362,  2393,  2055,  2439, -1582, -1624,
    2426,  2462,   139,  2444,  2441,  2464,  2465,  2502,  2404,  2474,
    2405,   369,  2478,  2483,   370,  2488,  1329,  2522,  2525,  1845,
    1329,  2532,   371,  2533,  2538,  2546,  1240,  2535,  2553,  2554,
    1240,  1240,  2544,  -232,  2406,  2407,  2594,  2558,  2577,  2593,
    2493,  1408,  2614,   982,   983,   984,  2653,  2660,  2665,   985,
    2661,  2667,  2696,  2697,  2729,  2703,  2730,  2731,  2783,  2740,
    2800,  2802,  2803,   372,  2812,  2408,   373,  2805,  1275,    17,
    1275,  2821,  2807,    92,   125,    38,  1635,   167,   257,   210,
    1846,   267,   119,   278,   291,   211,  2543,   242,  1800,   548,
     986,  2480,  2409,  1847,   444,   714,   539,   587,  2138,   324,
     458,  1217,   528,   853,  1746,   582,  2790,  1680,   805,  2130,
    1975,  2372,  2218,  1008,  1017,  2739,  2741,  2390,  2410,  1228,
    1039,  2292,   966,  2037,  1471,  2527,  2411,  2521,  2036,  2519,
    2094,  2063,  1487,  1809,  2520,  2290,  1826,  2282,  2282,  2412,
    1800,  1810,  2437,  1861,  2413,  1869,  2296,  2443,  1329,  1329,
    1579,  1891,  1329,  1329,  1903,  1329,   429,  2106,  2312,  2118,
    1911,  1602,  2459,  2144,  1605,   988,  2331,  2324,  2468,  1936,
    2368,  2343,  2168,  2353,  1636,  1383,  2789,  1637,  1848,  1660,
    2196,  2486,  2197,  1974,  2550,  2564,  2414,  2491,  1875,   333,
    1628,  1808,  2346,   214,  1635,  2415,   779,  2158,  2347,  2547,
    2016,  2348,  1008,  2349,   311,  1276,   294,  1194,  1800,   617,
    2659,  2537,  2772,   449,   813,   542,   273,   989,   990,  2182,
    1255,   490,  2306,   790,  2416,  2129,  1906,  2723,   604,     0,
       0,     0,     0,     0,  2417,     0,  2670,     0,  2568,  2569,
    2418,  2574,     0,     0,     0,  1276,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2580,     0,     0,     0,
       0,   994,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1800,  2591,     0,     0,     0,  1635,     0,     0,     0,
       0,   995,     0,  2708,     0,  1255,   996,     0,     0,     0,
       0,     0,     0,   997,  1008,   137,  1008,     0,     0,     0,
       0,  2611,     0,  1434,     0,     0,  2615,  2616,  1008,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2756,
    2757,     0,     0,     0,     0,     0,     0,  2656,     0,     0,
       0,  1255,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1235,     0,     0,   762,  2669,     0,     0,  2671,     0,
       0,  2673,  2674,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1235,     0,     0,   762,     0,     0,
       0,     0,  1255,     0,     0,  1635,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1276,     0,     0,     0,  1276,     0,
       0,  1276,     0,     0,     0,     0,     0,  2806,     0,     0,
       0,  2820,     0,     0,     0,     0,     0,     0,     0,   973,
       0,     0,     0,     0,  1234,  1243,  1248,     0,     0,  1264,
       0,     0,     0,  1287,  1243,     0,   974,     0,     0,     0,
       0,     0,   973,  1243,     0,     0,     0,     0,  1323,     0,
    1243,  1243,     0,     0,  1349,  1276,     0,     0,     0,   974,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1243,
    1243,     0,  1387,     0,     0,  1405,     0,  1349,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1940,
       0,     0,     0,     0,     0,     0,  1433,     0,  1635,  1635,
       0,  1433,     0,     0,  1276,  1276,  1276,     0,     0,     0,
       0,     0,     0,     0,     0,  1433,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   975,   976,
     977,     0,     0,     0,  1635,     0,     0,   978,     0,     0,
       0,     0,     0,     0,  1475,     0,     0,     0,   764,  1243,
       0,   975,   976,   977,     0,     0,     0,     0,     0,     0,
     978,     0,  1276,     0,     0,     0,     0,     0,  1349,     0,
    1264,   764,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1237,     0,     0,     0,     0,     0,   980,     0,   981,
       0,     0,  1243,   767,     0,   982,   983,   984,     0,     0,
       0,   985,     0,   768,  1237,     0,     0,  1243,  1238,     0,
     980,     0,   981,     0,     0,     0,   767,     0,   982,   983,
     984,     0,     0,     0,   985,     0,   768,     0,     0,     0,
       0,  1238,     0,     0,     0,     0,     0,     0,  1243,     0,
       0,     0,   986,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1349,     0,     0,     0,     0,  1276,     0,     0,
       0,   987,     0,     0,     0,   986,     0,     0,     0,     0,
       0,  1008,     0,     0,  1634,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   987,   769,     0,     0,     0,     0,
       0,     0,  1276,     0,  1276,     0,     0,  1243,     0,     0,
    1661,     0,  1243,     0,     0,     0,     0,     0,   769,     0,
       0,     0,     0,     0,  1635,     0,     0,   988,     0,     0,
       0,     0,  1635,     0,     0,     0,     0,     0,     0,     0,
       0,  1276,     0,  1276,     0,     0,     0,     0,     0,     0,
     988,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   770,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   989,
     990,     0,     0,     0,     0,     0,  1008,  1634,     0,     0,
     770,     0,     0,     0,  1276,     0,     0,     0,     0,  1243,
    1635,     0,   989,   990,     0,     0,  1941,     0,     0,     0,
       0,     0,     0,   771,     0,     0,     0,  1942,     0,     0,
       0,     0,     0,   994,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   771,  1243,     0,     0,
       0,     0,     0,   995,     0,     0,   994,     0,   996,     0,
    1243,  1243,     0,     0,     0,   997,     0,   137,     0,     0,
       0,     0,     0,   772,     0,     0,   995,     0,     0,     0,
       0,   996,     0,     0,     0,     0,     0,     0,   997,     0,
     137,     0,     0,     0,     0,     0,   772,     0,  1243,     0,
       0,     0,     0,  1276,     0,  1276,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1634,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   762,     0,     0,     0,  1243,
       0,     0,     0,     0,     0,     0,  1276,     0,     0,  1920,
       0,     0,     0,     0,     0,     0,     0,     0,  1927,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1935,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1243,   973,     0,     0,     0,     0,  1276,     0,     0,     0,
       0,  1243,     0,     0,  1243,     0,     0,  1963,   974,     0,
       0,     0,  1243,     0,     0,     0,     0,  1634,     0,     0,
     973,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   974,     0,     0,
       0,     0,     0,     0,  1433,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2009,     0,     0,
       0,     0,     0,     0,     0,     0,  1276,  1927,  1276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   864,  2021,
       0,   865,  2022,   866,     0,     0,     0,     0,   867,     0,
     975,   976,   977,     0,     0,     0,   868,     0,     0,   978,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,     0,     0,     0,  1634,     0,     0,   975,
     976,   977,     0,     0,     0,     0,     0,     0,   978,   869,
     870,     0,  2053,     0,     0,     0,     0,     0,     0,   764,
     871,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   872,     0,     0,   873,   767,     0,   982,   983,   984,
       0,     0,     0,   985,     0,   768,     0,     0,   874,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   767,     0,   982,   983,   984,     0,
       0,   875,   985,     0,   768,     0,     0,     0,     0,   876,
       0,   877,     0,     0,   986,     0,     0,     0,  -750,     0,
    -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,     0,  -750,
    -750,  -750,     0,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
    -750,  -750,   878,   986,     0,     0,     0,     0,     0,  1634,
    1634,     0,     0,   879,     0,     0,     0,   769,   880,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2145,     0,
       0,     0,     0,     0,   881,  1634,   769,     0,     0,   988,
       0,   882,  1243,     0,   883,   884,     0,     0,     0,     0,
       0,     0,     0,     0,   885,     0,     0,     0,  1008,  1008,
       0,   886,  2185,   887,     0,     0,   888,     0,   988,  2195,
    2195,     0,     0,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   989,   990,     0,  1264,     0,     0,     0,  1008,  2214,
       0,     0,     0,     0,  2009,  2009,     0,     0,   770,   889,
       0,     0,     0,   890,     0,   891,     0,  1008,     0,     0,
     989,   990,     0,     0,     0,   771,   892,     0,     0,     0,
       0,     0,     0,  -750,  -750,   994,  -750,  -750,  -750,  -750,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   893,   771,   995,     0,     0,     0,  2251,
     996,     0,     0,     0,   994,     0,   894,   997,     0,   137,
       0,     0,     0,     0,     0,   772,     0,     0,     0,     0,
       0,     0,     0,     0,   995,     0,     0,  1008,     0,   996,
       0,   895,   896,     0,     0,     0,   997,     0,   137,     0,
       0,     0,   897,     0,   772,  2299,     0,     0,     0,     0,
       0,     0,     0,     0,  2251,  1634,   898,     0,   899,     0,
       0,     0,     0,  1634,   900,     0,     0,     0,   901,     0,
       0,     0,     0,     0,     0,     0,   902,     0,     0,     0,
    1920,  1243,     0,     0,     0,     0,     0,   903,     0,     0,
       0,     0,     0,     0,     0,     0,   904,     0,     0,     0,
       0,     0,     0,     0,     0,   905,     0,     0,     0,  2345,
     906,   907,     0,     0,   908,     0,   909,     0,     0,  1243,
    1243,     0,     0,     0,   910,     0,     0,  2251,     0,     0,
       0,  1634,     0,   864,     0,     0,   865,  -750,   866,     0,
       0,     0,     0,   867,     0,     0,     0,     0,     0,     0,
       0,   868,     0,     0,     0,   912,  2009,     0,     0,     0,
       0,   913,     0,     0,     0,  1264,   914,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   869,   870,     0,  -750,     0,     0,
       0,     0,     0,   915,     0,   871,     0,     0,     0,     0,
    2430,     0,     0,     0,     0,     0,   872,     0,     0,   873,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   874,     0,     0,     0,     0,     0,     0,
    1243,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   875,     0,  2251,     0,
       0,     0,     0,     0,   876,     0,   877,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   878,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   879,     0,
       0,     0,     0,   880,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2214,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   881,
       0,     0,     0,     0,     0,     0,   882,     0,     0,   883,
     884,     0,     0,     0,     0,     0,     0,     0,     0,   885,
       0,     0,     0,     0,     0,     0,   886,     0,   887,     0,
       0,   888,     0,     0,     0,     0,     0,  2529,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   864,     0,
       0,   865,     0,   866,     0,     0,     0,     0,   867,     0,
       0,     0,     0,     0,     0,     0,   868,     0,     0,     0,
    1243,     0,     0,     0,   889,     0,     0,     0,   890,     0,
     891,     0,     0,     0,     0,     0,     0,     0,  2556,     0,
       0,   892,     0,     0,     0,  2559,     0,     0,  2561,   869,
     870,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     871,     0,     0,     0,     0,     0,     0,     0,   893,     0,
       0,   872,     0,     0,   873,     0,     0,     0,     0,     0,
       0,   894,     0,     0,     0,     0,     0,     0,   874,     0,
    1243,     0,     0,     0,  1243,  1243,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2595,   895,   896,     0,     0,
       0,   875,     0,     0,     0,     0,     0,   897,  2610,   876,
       0,   877,     0,     0,     0,     0,  2214,  2214,     0,     0,
       0,   898,  2214,   899,     0,     0,     0,     0,  1264,   900,
       0,     0,     0,   901,     0,     0,     0,     0,     0,     0,
       0,   902,   878,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   903,   879,     0,     0,     0,     0,   880,  2214,
       0,   904,     0,  2214,  2214,     0,     0,     0,     0,     0,
     905,     0,     0,     0,     0,   906,   907,  2675,     0,   908,
       0,   909,     0,     0,   881,     0,     0,     0,     0,   910,
       0,   882,     0,     0,   883,   884,     0,     0,     0,     0,
       0,     0,   911,     0,   885,     0,     0,     0,     0,     0,
       0,   886,     0,   887,     0,     0,   888,     0,     0,     0,
     912,     0,     0,     0,     0,     0,   913,     0,     0,     0,
       0,   914,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2748,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   915,   889,
       0,     0,     0,   890,     0,   891,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   892,     0,     0,     0,
    2778,  2778,     0,     0,     0,     0,   864,     0,     0,   865,
       0,   866,     0,     0,     0,     0,   867,     0,     0,     0,
       0,     0,     0,   893,   868,     0,     0,     0,     0,  2792,
       0,     0,     0,     0,     0,     0,   894,     0,     0,  2795,
    2799,     0,     0,     0,     0,  2778,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   869,   870,  2811,
       0,   895,   896,     0,     0,     0,     0,     0,   871,     0,
       0,     0,   897,     0,     0,     0,     0,     0,     0,   872,
       0,     0,   873,     0,     0,     0,   898,     0,   899,     0,
       0,     0,     0,     0,   900,     0,   874,     0,   901,     0,
       0,     0,     0,     0,     0,     0,   902,     0,   973,     0,
       0,     0,     0,     0,     0,     0,     0,   903,     0,   875,
       0,     0,     0,     0,     0,   974,   904,   876,     0,   877,
       0,     0,     0,     0,     0,   905,     0,     0,     0,     0,
     906,   907,     0,     0,   908,     0,   909,     0,     0,     0,
       0,     0,     0,     0,   910,     0,     0,     0,     0,     0,
     878,     0,     0,     0,     0,     0,     0,  1668,     0,     0,
       0,   879,     0,     0,     0,     0,   880,     0,     0,     0,
       0,     0,     0,     0,     0,   912,     0,     0,     0,     0,
       0,   913,     0,     0,     0,     0,   914,     0,     0,     0,
       0,     0,   881,     0,     0,     0,     0,     0,     0,   882,
       0,     0,   883,   884,     0,     0,  1341,   975,   976,   977,
       0,     0,   885,   915,     0,     0,   978,     0,     0,   886,
       0,   887,     0,     0,   888,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1037,     0,     0,     0,   889,     0,     0,
       0,   890,  1342,   891,   982,   983,   984,     0,     0,     0,
     985,     0,     0,     0,   892,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -363,     0,     0,  -363,     0,
       0,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
       0,   893,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   986,     0,     0,   894,     0,     0,     0,     0,  -363,
       0,  -363,     0,     0,     0,     0,     0,     0,  -363,     0,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,     0,     0,   895,
     896,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     897,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   898,     0,   899,     0,     0,     0,
       0,     0,   900,     0,  -363,     0,   901,     0,     0,     0,
       0,     0,     0,     0,   902,     0,   988,     0,     0,     0,
       0,     0,     0,     0,     0,   903,     0,     0,     0,     0,
       0,     0,     0,     0,   904,     0,     0,     0,     0,     0,
       0,     0,     0,   905,     0,  -363,     0,     0,   906,   907,
       0,     0,   908,     0,   909,     0,     0,     0,     0,     0,
     531,     0,   910,  -363,  -363,  -363,  -363,  -363,   989,   990,
    -363,  -363,     0,     0,  -363,     0,     0,     0,     0,     0,
    -363, -1916,  -363,     0,     0,     0,     0,     0,  -363,     0,
       0,     0,     0,   912,     0,  -363,     0,     0,     0,   913,
       0,     0,     0,  -363,   914,     0,  1045,     0,  1046,     0,
       0,     0,   994,  1047,     0,     0,  -363,     0,     0,  -363,
       0,  1048,     0, -1179,     0,  -363,     0,  -363,     0,     0,
       0,   915,   995,     0,     0,     0,  -363,   996,     0,     0,
       0, -1179,     0,     0,   997,   244,   137,     0,     0,     0,
    -363,     0,     0,     0,  1049,  1050,     0,     0,     0,     0,
       0,     0,  -363,     0,     0,  1051,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1052,     0,     0,  1053,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -363,  1054,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -363,  -363,     0,     0,  1235,
       0,     0,   762,     0,  -363,     0,  1055,  -363,     0,     0,
       0,     0,     0,     0,  1056,     0,  1057,     0,     0,     0,
    -363,     0,  -363,  1058,     0,  1059,  1060,  1061,  1062,  1063,
    1064,  1065,  1066,     0,  1067,  1068,  1069,     0,  1070,  1071,
    1072,  1073,  1074,  1075,  1076,  1077,  1078,  1079,  -363,     0,
       0,     0,     0,     0,     0,     0,  -363,     0,  1080,     0,
       0,     0,     0,  1081,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -363,     0,     0,   973,     0,     0,
       0,     0,     0,     0,  -363,     0,  -363,  -363,  -363,  1082,
       0,     0,     0,     0,   974,     0,  1083,     0,     0,  1084,
    1085,     0,     0,     0,     0,  1235,     0,  1387,   762,  1086,
       0,  1544,  1545,  1546,     0,     0,  1087,     0,  1088,  1547,
       0,  1089,     0,     0,     0,     0,     0,  -363,     0,     0,
       0,     0,  -363,     0,     0,     0,     0,  -363,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -363,
       0,     0,     0,     0,  -363,     0,     0,     0,  -363,  -363,
    -363,     0,     0,     0,  1090,     0,     0,     0,  1091,     0,
    1092,     0,  -363,     0,     0,     0,     0,     0,  -363,  -363,
       0,  1093,     0,   973,     0,   532,   975,   976,   977,     0,
       0,     0,     0,     0,     0,   978,     0,     0,     0,     0,
     974,     0,     0,     0,     0,     0,   764,     0,  1094,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1095,  1659,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1237,
       0,     0,     0,     0,     0,   980,  1096,   981,     0,     0,
       0,   767,     0,   982,   983,   984,     0,  1097,     0,   985,
    1548,   768,     0,     0,     0,     0,  1238,     0,     0,     0,
    1549,     0,     0,  1098,     0,     0,     0,     0,     0,  1099,
       0,     0,     0,  1100,     0,     0,     0,     0,     0,     0,
       0,  1101,   975,   976,   977,     0,     0,     0,     0,     0,
     986,   978,  1102,     0,     0,     0,     0,  1550,  1551,     0,
       0,  1103,   764,     0,     0,     0,     0,     0,     0,   987,
    1104,     0,     0,     0,     0,  1105,  1106,     0,     0,  1107,
       0,  1108,  1874,     0,     0,     0,     0,     0,     0,  1109,
       0,     0,     0,   769,     0,  1237,  1552,  1553,     0,     0,
       0,   980,  1110,   981,     0,     0,     0,   767,     0,   982,
     983,   984,     0,     0,     0,   985,     0,   768,     0,     0,
    1111,     0,  1238,     0,     0,   988,  1112,     0,     0,     0,
       0,  1113,     0,     0,  1235,  1554,     0,   762,     0,     0,
    1544,  1545,  1546,  1555,     0,     0,  1556,     0,  1547,     0,
       0,     0,     0,     0,  1557,     0,   986,     0,  1114,     0,
       0,  1558,     0,     0,     0,   770,  1559,     0,     0,     0,
       0,     0,     0,     0,     0,   987,     0,   989,   990,     0,
       0,     0,     0,     0,     0,  1560,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   771,   973,     0,     0,     0,     0,     0,     0,     0,
       0,   994,     0,     0,     0,     0,     0,     0,     0,   974,
       0,   988,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   995,     0,     0,     0,     0,   996,     0,     0,     0,
       0,     0,     0,   997,     0,   137,     0,     0,     0,     0,
       0,   772,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   770,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   989,   990,     0,     0,     0,     0,  1548,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1549,
       0,     0,     0,     0,     0,  1561,     0,  1562,     0,  1563,
       0,     0,  1564,     0,  1565,  1566,  1567,   771,     0,  1568,
    1569,   975,   976,   977,     0,     0,     0,   994,     0,     0,
     978,     0,     0,     0,     0,     0,  1550,  1551,     0,     0,
       0,   764,     0,     0,     0,     0,     0,   995,     0,     0,
       0,     0,   996,     0,     0,     0,     0,     0,     0,   997,
       0,   137,     0,     0,     0,     0,     0,   772,     0,     0,
       0,     0,     0,     0,  1237,  1552,  1553,     0,     0,     0,
     980,     0,   981,     0,     0,     0,   767,     0,   982,   983,
     984,     0,     0,     0,   985,     0,   768,     0,     0,     0,
       0,  1238,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1554,     0,     0,     0,     0,     0,
       0,     0,  1555,     0,     0,  1556,     0,     0,     0,     0,
       0,     0,     0,  1557,     0,   986,     0,     0,     0,     0,
    1558,     0,     0,     0,     0,  1559,     0,     0,     0,     0,
       0,     0,     0,     0,   987,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1560,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   530,     0,   769,     0,
       0,     0,     0,     0,     0,     0,  -914,     0,     0,  -914,
       0,     0,     0,     0,     0,     0,     0,  -363,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     988,     0,  -363,     0,     0,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,     0,     0,     0,     0,     0,     0,     0,  1223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     770,  -363,     0,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
       0,     0,   989,   990,  -914,     0,     0,     0,     0, -1816,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -914,     0,     0,  1561,     0,  1562,     0,  1563,     0,
       0,  1564,     0,  1565,  1566,  1567,   771,  -363,  1568,  1569,
       0,     0,     0,     0,     0,     0,   994,     0,     0,  1235,
       0,     0,   762,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   995,     0,     0,     0,
       0,   996,     0,     0,     0,     0,     0,     0,   997,     0,
     137,     0,     0,     0,     0,     0,   772,     0,     0,  -363,
       0,     0,     0,   531,     0,     0,  -363,  -363,  -363,  -363,
    -363,     0,     0,  -363,  -363,     0,     0,     0,     0,     0,
       0,     0,     0,  -914,  -914,  -914,     0,     0,     0,     0,
       0,  -363,  -914,     0,     0,     0,     0,   973,     0,     0,
       0,     0,     0,  -914,     0,     0,  -363,     0,     0,  1236,
       0,     0,     0,     0,   974,     0,     0,     0,     0,  -363,
       0,     0,  -363,     0,     0,     0,     0,     0,  -363,     0,
       0,     0,     0,     0,     0,     0,  -914,     0,     0,     0,
       0,     0,  -914,     0,  -914,     0,     0,     0,  -914,     0,
    -914,  -914,  -914,     0,     0,     0,  -914,     0,  -914,  1235,
       0,     0,   762,  -914,     0,  -363,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -363,     0,  -914,     0,     0,
       0,     0,  -914,     0,     0,     0,   975,   976,   977,  -363,
       0,     0,     0,     0,     0,   978,  -914,  -363,     0,     0,
    -363,     0,     0,     0,     0,     0,   764,     0,     0,     0,
       0,     0,     0,  -363,     0,     0,     0,   973,     0,     0,
    -914,     0,     0,     0,     0,  -363,     0,     0,     0,  1330,
       0, -1816,     0,  -363,   974,     0,     0,     0,     0,  1237,
       0,     0,     0,     0,     0,   980,  1235,   981,     0,   762,
       0,   767,  -914,   982,   983,   984,     0,     0,     0,   985,
       0,   768,     0,     0,     0,     0,  1238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -363,     0,  -363,
    -363,  -363,     0,     0,     0,     0,  -914,     0,     0,     0,
       0,     0,  -914,     0,     0,     0,     0,     0,     0,     0,
     986,     0,     0,     0,  -914,  -914,  -363,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   987,
       0,     0,     0,     0,   973,  -363,   975,   976,   977,     0,
       0,     0,     0,     0,     0,   978,  1392,     0,  -914,     0,
       0,   974,  -363,   769,     0,     0,   764,     0,  -914,     0,
       0,  -363,  -363,  -363,  -914,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -363,     0,     0,  -914,     0,
       0,     0,  -363,  -914,     0,   988, -1816,     0,   532,  1237,
    -914,     0,  -914,     0,     0,   980,  1235,   981,  -914,   762,
       0,   767,     0,   982,   983,   984,     0,     0,     0,   985,
       0,   768,     0,     0,     0,     0,  1238,     0,     0,  -970,
       0,     0,  -970,     0,     0,   770,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   989,   990,     0,
       0,     0,     0,   975,   976,   977,     0,     0,     0,     0,
     986,     0,   978,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   764,     0,     0,     0,     0,     0,   987,
       0,   771,     0,     0,   973,     0,     0,     0,     0,     0,
       0,   994,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   974,     0,   769,     0,     0,  1237,  -970,     0,     0,
       0,   995,   980,     0,   981,     0,   996,     0,   767,     0,
     982,   983,   984,   997,  -970,   137,   985,     0,   768,  1235,
       0,   772,   762,  1238,     0,   988,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1235,     0,     0,   762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   986,     0,     0,
       0,     0,     0,     0,     0,   770,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   987,   989,   990,     0,
    1518,     0,     0,   975,   976,   977,     0,     0,     0,     0,
       0,     0,   978,     0,     0,     0,     0,   973,     0,     0,
     769,     0,     0,   764,     0,     0,  -970,  -970,  -970,     0,
       0,   771,     0,     0,   974,  -970,     0,     0,     0,     0,
     973,   994,     0,     0,     0,     0,  -970,     0,     0,     0,
       0,     0,   988,     0,     0,     0,  1237,   974,     0,     0,
       0,   995,   980,     0,   981,     0,   996,     0,   767,     0,
     982,   983,   984,   997,     0,   137,   985,     0,   768,  -970,
       0,   772,     0,  1238,     0,  -970,     0,  -970,     0,     0,
       0,  -970,   770,  -970,  -970,  -970,     0,     0,     0,  -970,
       0,  -970,     0,     0,   989,   990,  -970,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   986,     0,     0,
       0,     0,     0,     0,     0,     0,   975,   976,   977,     0,
       0,     0,     0,     0,     0,   978,   987,     0,   771,     0,
    -970,     0,     0,     0,     0,     0,   764,     0,   994,   975,
     976,   977,  1235,  1664,     0,   762,     0,     0,   978,  -970,
     769,     0,     0,     0,     0,     0,     0,     0,   995,   764,
       0,     0,     0,   996,     0,     0,     0,     0,     0,  1237,
     997,     0,   137,  -970,     0,   980,     0,   981,   772,     0,
       0,   767,   988,   982,   983,   984,     0,     0,     0,   985,
       0,   768,  1237,     0,     0,     0,  1238,     0,   980,     0,
     981,     0,     0,     0,   767,  -970,   982,   983,   984,     0,
       0,     0,   985,     0,   768,     0,     0,     0,     0,  1238,
     973,     0,   770,     0,     0,     0,     0,     0,     0,  1235,
     986,     0,   762,     0,   989,   990,     0,   974,     0,     0,
       0,     0,     0,     0,     0,  -970,     0,     0,     0,   987,
       0,     0,     0,   986,  1481,     0,     0,  -970,  -970,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   771,     0,
       0,     0,   987,   769,     0,     0,     0,     0,   994,     0,
       0,     0,     0,  1235,     0,     0,   762,     0,     0,     0,
       0,  -970,     0,     0,     0,     0,   769,     0,   995,     0,
       0,  -970,     0,   996,     0,   988,     0,   973,     0,     0,
     997,     0,   137,     0,     0,     0,     0,     0,   772,     0,
       0,  -970,     0,     0,   974,     0,  -970,     0,   988,   975,
     976,   977,     0,  -970,     0,  -970,     0,     0,   978,     0,
       0,  -970,     0,     0,     0,   770,     0,     0,     0,   764,
       0,     0,     0,     0,     0,     0,     0,   989,   990,     0,
       0,   973,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   974,     0,
     989,   990,  1237,     0,     0,     0,     0,     0,   980,     0,
     981,   771,     0,     0,   767,     0,   982,   983,   984,     0,
       0,   994,   985,     0,   768,     0,     0,     0,     0,  1238,
       0,     0,     0,     0,   771,  1522,   975,   976,   977,     0,
       0,   995,     0,     0,   994,   978,   996,     0,     0,     0,
       0,     0,     0,   997,     0,   137,   764,     0,     0,     0,
       0,   772,     0,   986,   995,     0,     0,     0,     0,   996,
       0,     0,     0,     0,     0,     0,   997,     0,   137,     0,
       0,     0,   987,     0,   772,     0,     0,     0,     0,  1237,
     975,   976,   977,     0,     0,   980,     0,   981,     0,   978,
       0,  1280,     0,   982,   983,   984,   769,     0,     0,   985,
     764,   768,     0,     0,     0,     0,  1238,     0,  1795,     0,
       0,   762,   973,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   988,   974,
       0,     0,     0,  1237,     0,     0,     0,     0,     0,   980,
     986,   981,     0,     0,     0,   767,     0,   982,   983,   984,
       0,     0,     0,   985,     0,   768,     0,     0,     0,   987,
    1238,     0,  1961,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     989,   990,     0,   769,     0,     0,   973,     0,     0,     0,
       0,     0,     0,     0,   986,     0,     0,     0,     0,     0,
       0,     0,     0,   974,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   987,   771,   988,     0,     0,     0,     0,
    1341,   975,   976,   977,   994,     0,     0,     0,     0,     0,
     978,     0,     0,     0,     0,     0,     0,   769,     0,     0,
       0,     0,     0,     0,   995,     0,     0,     0,     0,   996,
       0,     0,     0,     0,     0,   770,   997,     0,   137,     0,
       0,     0,     0,     0,   772,     0,     0,   989,   990,   988,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1408,     0,   982,   983,
     984,     0,     0,     0,   985,   975,   976,   977,     0,     0,
       0,   771,     0,     0,   978,     0,     0,     0,     0,   770,
       0,   994,     0,     0,     0,   764,     0,     0,     0,     0,
       0,   989,   990,     0,     0,     0,     0,     0,     0,     0,
       0,   995,     0,     0,     0,   986,   996,     0,     0,     0,
       0,     0,     0,   997,     0,   137,     0,     0,  1237,     0,
       0,   772,     0,     0,   980,   771,   981,     0,     0,     0,
     767,     0,   982,   983,   984,   994,     0,     0,   985,     0,
     768,     0,     0,     0,     0,  1238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   995,     0,     0,     0,     0,
     996,     0,     0,     0,     0,     0,     0,   997,     0,   137,
       0,     0,     0,     0,     0,   772,     0,     0,     0,   986,
     988,     0,   625,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   626,   987,     0,
     627,   628,   629,   630,   631,   632,   633,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   769,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   989,   990,     0,     0,   634,     0,   635,   636,
     637,   638,   639,   640,   641, -1916,     0,     0,     0,     0,
       0,     0,     0,     0,   988,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   994,     0,     0,     0,
       0,     0,   642,     0,     0,     0,     0, -1179,     0,     0,
       0,     0,     0,     0,   770,     0,   995,     0,     0,     0,
       0,   996,     0,     0,     0, -1179,   989,   990,   997,   244,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     771,   643,   644,   645,   646,   647,     0,     0,   648,   649,
     994,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,     0,     0,     0,
       0,   650,   997,     0,   137,     0,     0,     0,     0,     0,
     772,     0,     0,     0,    94,     0,     0,   651,     0,     0,
       0,     0,     0, -1892,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1720,     0,     0,  1721,     0,     0,
    1722,   627,   628,   629,   630,   631,   632,  1723,  1724,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     652,     0,     0,     0,     0,     0,     0,     0,  1725,     0,
    1726,     0,     0,     0,     0,     0,     0,   634,     0,   635,
     636,   637,   638,   639,   640,   641,     0,     0,     0,     0,
     653,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   654,     0,     0,     0,     0,     0,
       0,     0,   655,     0,     0,   656,     0,     0,     0,     0,
       0,     0,     0,   642,     0,     0,     0,     0,   657,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     658,     0,     0,     0,     0,     0,     0,     0,   659,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1727,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   643,   644,   645,   646,   647,     0,     0,   648,
     649,     0,   660,  1728,   661,   662,   663,     0,     0,  1729,
       0,  1730,     0,     0,     0,     0,     0, -1843,     0,     0,
       0,     0,     0,     0,  1731,     0,     0,     0,     0,     0,
       0,   664,   650,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,   651,     0,
    -360,     0,     0,     0,     0,     0,  1732,     0,     0,     0,
       0,     0,     0,     0,     0,  1733,     0, -1892,     0,     0,
       0,     0,     0,     0,     0,     0,   665,   666,   667,  1734,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     668,   652,     0,     0,     0,     0,     0,   669,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   627,
     628,   629,   630,   631,   632,     0,     0,     0,     0,     0,
       0,  1735,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1736,   654,     0,     0,     0,     0,
       0,     0,     0,   655,     0,   634,   656,   635,   636,   637,
     638,   639,   640,   641,     0,     0,     0,     0,     0,   657,
       0,  1737,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   973,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1738,     0,     0,
       0,   642,     0,   974,     0,  1739,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1740,   973,     0,     0,     0,     0,     0,
       0,     0,     0,   660,     0,   661,   662,   663,     0,     0,
       0,   974,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     643,   644,   645,   646,   647,     0,     0,   648,   649,     0,
       0,     0,     0,     0,     0,     0,  1741,     0,     0,     0,
       0,  -653,     0,     0,     0,     0,  1742,     0,     0,     0,
       0,     0,     0,     0,     0,   975,   976,   977,     0,     0,
     650,     0,     0,  1743,   978,     0,     0,   665,   666,   667,
       0,     0,     0,     0,     0,   764,     0,     0,     0,     0,
       0,   668,     0,     0,     0,     0,     0,  1744,   669,     0,
       0,     0,     0,   975,   976,   977,     0,     0,     0,     0,
       0,     0,   978,     0,     0,     0,     0,     0,   979,     0,
       0,     0,     0,   764,   980,     0,   981,     0,     0,   652,
     767,     0,   982,   983,   984,     0,     0,     0,   985,     0,
     768,   973,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,     0,   974,     0,
       0,     0,   980,     0,   981,     0,     0,     0,   767,     0,
     982,   983,   984,   654,     0,     0,   985,     0,   768,   986,
       0,     0,     0,     0,   656,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   657,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   986,     0,     0,
       0,     0,   769,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   987,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     975,   976,   977,     0,   988,     0,     0,     0,     0,   978,
     769,     0,     0,   661,   662,   663,     0,     0,     0,     0,
     764,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   973,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   988,     0,   770,     0,     0,     0,     0,   974,
       0,     0,     0,   979,     0,     0,   989,   990,     0,   980,
       0,   981,     0,     0,     0,   767,     0,   982,   983,   984,
       0,     0,     0,   985,     0,   768,     0,     0,  1424,     0,
       0,     0,   770,     0,     0,   665,   666,   667,   991,     0,
     771,     0,   992,   993,   989,   990,     0,     0,     0,     0,
     994,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   986,     0,  1442,     0,     0,     0,
     995,     0,     0,     0,     0,   996,   991,     0,   771,     0,
     992,   993,   997,   987,   137,     0,     0,     0,   994,     0,
     772,   975,   976,   977,     0,     0,     0,     0,     0,     0,
     978,     0,     0,     0,     0,     0,     0,   769,   995,     0,
       0,   764,     0,   996,     0,     0,     0,     0,     0,     0,
     997,   973,   137,     0,     0,     0,     0,     0,   772,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   974,   988,
       0,     0,     0,     0,   979,     0,     0,     0,     0,     0,
     980,     0,   981,     0,     0,     0,   767,     0,   982,   983,
     984,     0,     0,     0,   985,     0,   768,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,   973,     0,     0,     0,     0,     0,     0,
       0,   989,   990,     0,     0,     0,     0,     0,     0,  1978,
     974,     0,     0,     0,     0,   986,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   991,   987,   771,     0,   992,   993,     0,
     975,   976,   977,     0,     0,   994,     0,     0,     0,   978,
       0,     0,     0,     0,     0,     0,     0,     0,   769,     0,
     764,     0,     0,     0,     0,   995,     0,     0,     0,     0,
     996,     0,     0,     0,     0,     0,     0,   997,     0,   137,
       0,     0,     0,     0,     0,   772,     0,     0,     0,     0,
     988,     0,     0,   979,     0,     0,     0,     0,     0,   980,
       0,   981,   975,   976,   977,   767,     0,   982,   983,   984,
       0,   978,     0,   985,     0,   768,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
     770,     0,   973,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   989,   990,     0,     0,     0,     0,     0,   974,
    1980,     0,     0,     0,   986,   979,     0,     0,     0,     0,
       0,   980,     0,   981,     0,     0,     0,   767,     0,   982,
     983,   984,     0,   987,   991,   985,   771,   768,   992,   993,
       0,     0,     0,     0,     0,     0,   994,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   769,     0,     0,
       0,     0,     0,     0,     0,     0,   995,     0,     0,     0,
       0,   996,     0,     0,     0,     0,   986,     0,   997,     0,
     137,     0,     0,     0,     0,     0,   772,     0,     0,   988,
       0,     0,     0,     0,     0,   987,     0,     0,     0,     0,
       0,   975,   976,   977,     0,     0,     0,     0,     0,     0,
     978,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,   764,     0,     0,     0,     0,     0,     0,     0,   770,
       0,     0,   973,     0,     0,     0,     0,     0,     0,     0,
       0,   989,   990,     0,     0,     0,     0,     0,     0,   974,
       0,   988,     0,     0,   979,   973,     0,     0,     0,     0,
     980,     0,   981,  1990,     0,     0,   767,     0,   982,   983,
     984,     0,   974,   991,   985,   771,   768,   992,   993,     0,
       0,     0,     0,     0,     0,   994,     0,     0,     0,     0,
       0,   770,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   989,   990,   995,     0,     0,     0,     0,
     996,     0,     0,     0,     0,   986,     0,   997,     0,   137,
       0,     0,     0,     0,     0,   772,     0,     0,     0,     0,
       0,     0,     0,     0,   987,   991,     0,   771,     0,   992,
     993,   975,   976,   977,     0,     0,     0,   994,     0,     0,
     978,     0,     0,     0,     0,     0,     0,     0,   769,     0,
       0,   764,     0,     0,   975,   976,   977,   995,     0,     0,
       0,     0,   996,   978,     0,     0,     0,     0,     0,   997,
       0,   137,     0,     0,   764,  2760,     0,   772,     0,     0,
     988,     0,     0,     0,   979,     0,     0,     0,     0,     0,
     980,     0,   981,     0,     0,     0,   767,     0,   982,   983,
     984,     0,     0,     0,   985,     0,   768,   979,     0,     0,
       0,     0,     0,   980,     0,   981,     0,     0,     0,   767,
     770,   982,   983,   984,     0,     0,     0,   985,     0,   768,
       0,     0,   989,   990,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   986,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   987,     0,   771,     0,   986,     0,
       0,     0,     0,     0,     0,     0,   994,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,   769,     0,
    2761,     0,     0,     0,     0,     0,   995,     0,     0,     0,
       0,   996,     0,     0,     0,     0,     0,     0,   997,     0,
     137,   769,     0,     0,     0,     0,   772,     0,     0,     0,
     988,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     770,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   989,   990,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   770,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   989,   990,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   771,     0,   992,     0,
       0,     0,     0,     0,     0,     0,   994,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   771,
       0,     0,     0,     0,     0,     0,   995,     0,     0,   994,
       0,   996,     0,     0,     0,     0,     0,     0,   997,     0,
     137,     0,     0,     0,     0,     0,   772,     0,     0,   995,
       0,     0,     0,     0,   996,     0,     0,     0,     0,     0,
       0,   997,     0,   137,     0,     0,     0,     0,     0,   772
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2496)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     116,   394,   103,   396,   105,   601,   602,   103,   159,   105,
     111,   969,   367,   797,   728,   111,  1174,  1125,  1152,  1235,
     693,   182,   856,   802,   792,  1216,  1377,   658,  1459,  1459,
     979,  1459,  1610,   426,   135,  1459,  1128,  1459,  1459,   135,
    1499,  1913,   715,   436,  1548,  1123,   605,  1849,  2019,   210,
     405,  1267,  1366,  1275,  1387,  2053,     1,  1119,     1,  1539,
      56,    57,    58,  1130,  1481,  1138,     1,    18,    64,   706,
      10,  1138,    10,   669,     1,  1956,    60,    32,     0,  1152,
      10,    49,   365,   756,   185,  1152,    50,    10,     0,  1779,
      32,   859,  1386,    53,  1193,  2228,    99,    90,    23,   127,
      60,   117,   144,    99,   100,   110,   102,  1329,  1207,     9,
      66,   107,   108,    18,   801,    28,  1533,    50,   177,   179,
     116,  2088,  1473,   113,   126,  2127,    90,   214,   132,  2015,
      10,    60,    89,   806,   765,   766,   252,   133,    38,    55,
     113,   178,   162,   132,    58,   179,   234,   265,  2034,  2035,
     259,  1279,  2038,    34,  1262,  1469,   215,    10,  2506,   126,
    1382,    67,    22,    69,    22,   161,  2007,   259,  1117,     7,
     168,  1522,   259,    60,   292,   254,  1125,  1126,     1,  2144,
     296,    99,   269,  1955,  1601,   816,  1135,  2185,  1250,    31,
     274,  1140,    59,  1142,  1143,  2081,   192,  1146,   132,    66,
    2086,    10,   162,   313,    60,   118,   220,    60,   204,   370,
     847,   244,  1161,  1162,   127,   259,   259,   205,   179,   141,
    1169,   422,   190,   145,   549,    67,   417,    69,    50,   141,
      31,  1359,    28,   145,   359,  1815,   155,   463,  2733,  1188,
    1307,    64,    51,   259,  1193,   490,   413,  1664,  1169,  1141,
       9,  1318,   368,   356,   250,   358,   179,   109,  1207,   219,
     220,  1153,   258,   508,   351,  2137,   591,   119,  2149,    92,
      93,     0,   127,  1587,   201,  1117,   234,   234,  1858,    38,
     202,   239,  2777,  1125,  1126,    73,   227,   513,  1237,   170,
     202,    92,  1241,  1135,   485,    50,   621,   311,    73,   233,
    1142,  1143,  1375,   347,    73,   992,  2308,  2309,  1375,   234,
      73,  1260,  1379,   273,  2200,   425,   395,    50,   485,  1161,
    1162,   259,   118,   283,     8,  2673,  1013,   180,   244,  1909,
     205,   980,   981,    73,   277,  1284,   423,   237,   987,  1260,
     465,    73,  1675,   459,   445,  1018,   447,   448,   979,  1682,
    1299,   447,   448,   454,  2044,  1669,   274,   390,   454,    75,
     295,  1820,   296,   564,   243,  2330,   205,    73,   364,   362,
     471,   455,   460,   474,   475,   471,   477,  2218,  1882,   480,
     481,  1330,   317,   206,  1801,  1965,   243,  1891,  1868,   270,
     243,  1871,   230,   421,   512,  1344,   392,  2169,   362,    10,
      73,   314,     7,  1481,   271,   214,    59,   403,   230,    62,
     519,   234,   254,    66,   128,    33,   412,   413,   460,   415,
     416,   513,   340,    95,   346,   421,   345,   519,    59,   362,
     336,  1118,   519,   461,   346,    66,  1594,   246,   247,   428,
    1389,   461,   438,   544,   545,  1394,  1538,  2449,   544,   545,
     259,   394,   408,   513,   513,  1533,   460,  1299,   174,   455,
     269,   321,     1,    40,  1778,  1024,  1025,  1140,   456,  1604,
     513,   358,   470,    12,   390,   313,   513,   450,   345,   513,
    2060,   582,   455,   599,   512,    10,   582,  2368,  1330,   491,
     606,  1619,  1627,   423,   336,   375,  1275,   513,  1185,  1186,
    1187,  2387,   492,   326,   605,  2391,   474,   512,   513,   513,
     513,  1198,  1199,  2646,   507,  1809,   471,   460,  1205,  1581,
     516,   126,    61,  1601,   491,  1598,   455,  1860,   811,   471,
     514,  1598,  1481,   460,   218,   219,   403,   653,   460,   116,
     536,   408,   351,   507,   512,  2235,   451,  1389,   460,  1707,
    1612,   508,   513,     7,   238,   513,  2523,  2524,   659,   510,
      99,   557,   101,   559,   103,   506,   562,   563,   513,   565,
    1519,  1638,   111,   513,   507,   513,  2154,  1799,   513,  1795,
    1217,   265,  2454,  1532,  1533,  2466,  1664,  1901,   513,   519,
     513,   513,   506,   460,   513,   513,   471,  1696,   477,   512,
     596,   513,   462,  1382,   462,  1254,  1237,   362,   292,   214,
     510,   467,   608,   473,   423,   473,   472,   405,   271,   579,
     477,  1570,  2102,  1937,   477,   505,    23,   382,   167,   362,
     405,   469,   471,  2519,  2520,  2437,   405,   460,   352,  1481,
     271,   259,   405,   359,   313,  2031,   513,    64,   253,   382,
     255,    10,  1601,   613,   259,   236,   164,   512,   513,   259,
     469,   777,   239,  2243,   269,   405,   782,   259,  2540,   457,
     512,  1620,   668,   405,   162,    92,    93,  1519,  2095,   467,
    2097,   292,   457,   799,   472,   846,   787,   788,   457,   214,
    1532,  1533,   345,  1642,   457,   409,   380,   205,   370,   405,
     205,   254,   156,   804,  1653,   460,  2286,  1656,  2288,   191,
     519,   246,  2710,   709,   345,  1664,   712,   457,  1876,  2136,
     175,   260,   327,  1801,     7,   457,    31,   460,  1570,  1122,
    1509,  1124,   405,   191,   259,     7,   238,  1804,  2709,  2319,
     335,   259,   334,   354,   269,  1807,   351,  1696,  1543,   465,
     403,   457,   507,     1,  1147,   408,  1149,    27,   259,  1601,
     214,  1154,    67,   265,    69,  2098,  2116,   306,   762,   259,
    2187,   202,   403,   445,   507,  1168,  1911,   408,  2358,  2359,
    1729,   259,   238,   145,   457,   259,   294,   333,  1583,   234,
     292,    60,    31,    41,    42,    43,    44,    45,  1139,   253,
    1642,   255,  2306,  2117,    67,   259,    69,   295,   259,   265,
     298,  1653,   259,  1608,  1656,   269,   173,   234,   423,  1506,
     274,   259,  1664,   404,  1165,   509,   351,    35,   512,   460,
      78,    79,   409,   351,  1907,   246,   292,   234,  1973,  2189,
    1907,  1908,   395,  1474,   513,  2231,   218,   841,   362,  2200,
     455,    39,   968,   265,   260,   214,   314,   396,  1224,    47,
     513,  2466,  1228,     9,   469,     7,   238,  1646,     0,  1500,
     227,   110,  1265,   327,   382,   393,   413,   382,   235,  2193,
     472,  1117,   417,   220,  1277,   367,   491,  1123,  1996,  1125,
    1126,   130,    38,   265,  1130,   178,  1455,   351,   423,  1135,
     259,   440,  1138,   172,   318,   423,  1142,  1143,   513,   326,
     269,   335,   326,   513,   519,   346,  1152,   512,  1034,     7,
     292,   460,    59,  1024,  1025,  1161,  1162,   519,   198,    66,
     169,   214,  2804,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   214,   398,   469,  2550,    10,  1620,   485,   254,
    2530,  2531,   191,  2087,  2088,   128,   225,   510,    33,   792,
    2310,  1526,  1527,  1528,  1529,   322,   512,   206,   274,   423,
     253,   265,   255,   461,   513,     7,   259,   512,  1319,   391,
     231,   253,   319,   255,   346,   430,   269,   259,   513,   231,
     164,   254,   351,   507,   519,  1944,    60,   269,   292,   459,
    1687,   519,  1689,   460,   512,  1241,   417,   509,   468,   141,
     512,  2103,   513,   145,  1701,   469,  2594,  2095,  1119,  2097,
    1799,    10,  1123,   513,    13,   213,   859,    16,    17,  1130,
    1131,   336,  1705,  1828,  1270,   513,   442,  1138,   113,   513,
    1141,  2257,   277,   460,   327,  1146,   205,  1148,  1284,  1150,
    1151,  1152,  1153,   509,  1395,   327,  1729,   245,  2136,   513,
     413,  2153,   513,  1299,   423,   519,   513,  2134,   351,  1170,
     202,  1307,   214,   336,   162,   513,   284,   285,   286,   351,
     268,   519,  1318,   462,  1879,  2514,   259,   335,   512,   513,
     460,   385,   413,   277,  1330,   265,   156,   503,  2557,   513,
     348,  2679,  1944,   413,   222,  1266,   345,   513,  2591,  2187,
     469,   253,   259,   255,    87,  1711,  1712,   259,  1511,  2227,
     294,   214,   292,   429,   375,   431,   214,   269,   120,   121,
     122,   510,   485,   375,   271,   323,   254,   509,  1933,  1375,
     423,   349,   246,  1379,   291,  2576,  2576,  2576,  2576,  1250,
     214,   423,  2576,  1389,  2576,  2576,   513,  1318,  1394,   394,
     519,  1792,   173,   322,   485,   253,   259,   255,  2326,  1270,
     160,   259,   356,  2656,   358,   485,   269,   455,   313,   243,
     421,   269,   214,   455,   259,   327,   469,   334,     3,   198,
     459,   361,   259,   125,  2143,   259,   384,   469,   467,   468,
     462,   201,   306,   472,   141,   269,  1307,   274,   345,   351,
     342,   473,   196,   346,   346,   418,   227,  1318,   512,   513,
     461,   253,   356,   255,   235,  1386,   234,   259,   506,   512,
     513,    46,  2181,  2182,  2002,   460,   519,   269,   356,   327,
      10,   513,   273,   233,  2039,  1481,   364,   519,   240,  1361,
     259,   259,    67,    68,    69,    70,  1125,   214,   351,   326,
    2055,  1362,   254,   351,   467,   513,   403,   475,   476,   472,
    1835,   408,   480,   257,  1375,  2702,   418,   401,  1379,  2058,
    2075,   423,   417,  1519,  1849,   419,   420,   351,   513,  2677,
      60,   280,   281,  1162,   482,   327,  1532,  1533,   209,   210,
    1412,  2143,   259,   334,   312,   766,   314,   297,   180,  1940,
    2105,   322,   269,   483,  2109,  1416,    27,   306,   307,   351,
    1416,   462,    57,   460,    29,   472,  2753,   469,   328,   329,
     423,  1686,   473,  1494,  1570,   423,   460,   248,   249,  2181,
    2182,   206,   512,  2292,   400,   345,  2734,  2735,   340,    13,
     485,  2146,    16,    17,  1455,   816,   265,    92,   460,   423,
     352,  2439,  1598,  2441,  2078,  1601,  2557,   239,   289,   234,
     242,   513,   265,   461,   109,    36,   469,   519,    39,   259,
    1481,   469,  2216,   292,   119,    46,    47,  2074,  2061,  2523,
    2524,   423,  2526,   164,   351,   293,   211,   168,   454,   292,
     401,   401,  1638,  1999,  2000,   469,  1642,   128,   311,  2625,
     180,   467,   292,   477,  2378,   259,   472,  1653,   339,    12,
    1656,   259,   237,  2054,   129,   513,   519,   325,  1664,   214,
     460,   519,  1533,    94,   460,   174,   467,   469,  1150,   254,
     343,   472,  1603,  2116,   214,  2240,   513,   291,   460,   513,
    2292,  2246,   519,   174,   446,   519,   265,  1453,  1170,   357,
     363,  2256,  1458,  1459,   174,  1461,   423,   206,    61,     9,
     314,   513,  2580,   243,   259,   290,   765,   766,   430,  2274,
    1581,   513,   412,   292,   269,  2671,  2672,   519,  1639,   259,
     334,  1652,  2179,     9,   234,   310,   206,  1598,    38,   269,
    1601,   401,   163,  2661,    56,    57,    99,   168,   101,   214,
     103,  1612,   469,  2462,   190,   454,  2189,   332,   111,   765,
     766,   190,    38,   338,  1755,  2711,   412,   816,  1176,  1177,
    1178,   192,   471,   460,  1765,  1766,   212,  1638,  1769,   180,
      92,  2336,   460,   212,  2730,   254,  2341,  2342,   257,   190,
    1666,   190,   213,   464,   259,   466,   513,   109,    16,  2354,
    1208,  1797,   519,  1664,   269,  1801,   351,   119,  1804,   460,
     816,   212,    48,   212,   167,    33,    13,    14,   283,   460,
    2364,   351,  2366,  2532,    42,   467,    60,  2536,  2537,    65,
     472,  1692,   312,   457,   314,    32,  1692,   412,   356,  2526,
     358,   242,  2760,   467,  2568,  2569,   421,   268,   472,   254,
    2574,   356,   257,   358,  2800,   256,   280,   281,   458,  1735,
    2462,  1419,  1858,   438,  1422,   220,  2784,   467,   472,   105,
    1428,  2426,   472,   254,  1432,   228,   257,  2310,   423,     2,
    1756,  1439,   306,   307,     7,   460,   351,  2611,   176,   457,
     457,  2615,  2616,   423,  1650,   159,   475,   161,   477,   467,
     467,   480,   323,   460,   472,   472,   481,   260,   458,   558,
     513,  1907,  1908,  1909,   563,   519,   460,   467,   801,  1202,
    1203,  1204,   472,  2478,   469,   500,   629,   630,   631,   632,
    2532,    71,   507,   508,  2536,  2537,  1797,  2492,  2493,   469,
    1801,   250,   251,  1804,  2488,   460,  1807,   477,  1944,   191,
     513,   193,  2670,   306,  1710,   513,   309,  2644,   423,  2646,
     345,   426,   427,   384,   159,  1721,   161,   460,    68,  1965,
      70,   991,  1728,   993,   519,   460,   397,   494,   495,   496,
     497,    99,   100,   513,    25,    26,  2139,   304,   305,   519,
    1200,  1201,   259,  2680,  2681,   477,  2683,  1858,   234,  1186,
    1187,  1757,  2689,  2690,   259,   241,   494,   495,   496,   497,
     201,  1932,   513,   451,   326,  2130,   252,   407,   330,   331,
     408,   374,   494,   495,   496,   497,   417,    68,    66,    70,
      62,    72,   259,   234,  1945,  1946,  1947,  1948,  1949,  1950,
    1951,  1952,  1963,   396,   460,   408,  1907,  1908,  1909,   333,
     259,  1972,   513,   231,   519,    27,   460,   460,   110,   371,
    1816,   482,   460,   317,  2060,   106,   107,   108,   275,   422,
     259,   424,   259,    24,   463,   105,   388,   389,   460,   446,
    1836,   191,   125,  1688,   463,  1690,  1842,   440,  1693,  1694,
    1695,    18,    89,   513,  1699,   460,   979,  1702,  1703,  2095,
     401,  2097,   275,   356,  1965,   408,    59,   409,   991,   992,
     993,   430,   512,   265,    40,   156,   460,   158,     5,   239,
     356,   357,   409,   336,   165,   321,   513,   168,   426,   515,
    1013,   315,   401,    20,  1995,   371,   513,   373,  2134,  1995,
    2136,     8,   264,    30,   460,   460,   258,  2143,   512,  2010,
     401,   513,  2028,   460,  2015,   460,   401,   371,    88,    88,
     513,   460,   127,   460,   439,   460,   401,  2320,    23,   395,
     311,   510,   314,  2034,  2035,   460,   401,  2038,   206,    66,
     513,   513,   508,   460,   390,  2181,  2182,   510,   234,   513,
     455,  2187,   257,   220,   125,   513,    54,   519,   455,  2060,
     471,   451,    27,   407,   311,   417,   353,   456,   198,   513,
     454,  2087,  2088,   254,   451,   471,   257,   259,  2139,   460,
    2081,  1977,   513,  2144,   460,  2086,  2087,  2088,   460,   382,
     406,   513,   341,   274,  2095,  1118,  2097,   117,   471,   172,
    1123,   471,    36,   471,   190,    39,   259,  1130,   471,   471,
     471,   471,    46,    47,   471,  1138,   471,   460,   460,   225,
     471,   471,  2018,   455,  2020,   513,   460,   314,  2024,  1152,
     513,   507,   410,  2134,   513,  2136,  2032,  2198,    31,   462,
     133,   198,   513,   134,   455,    33,   135,   392,    36,   136,
    2286,    39,  2288,  1176,  1177,  1178,  2292,   137,   356,    47,
      94,   138,  1185,  1186,  1187,  1188,   139,   506,   140,   104,
    1193,   450,   471,   143,    50,  1198,  1199,  1200,  1201,  1202,
    1203,  1204,  1205,  2319,  1207,  1208,  2187,   455,   411,   454,
     451,   146,   448,   198,   147,   222,   148,   454,   149,  2200,
     508,    32,   274,  2204,   150,    50,    94,   151,  2204,   152,
     198,   153,   115,   154,  1237,   457,   222,   117,   457,   457,
     457,   457,   457,  2359,   457,   113,   457,   254,   455,   163,
     460,   112,   417,  2129,   317,   199,   455,    85,   265,   205,
     225,   382,   344,   259,   275,   380,  2539,  1270,   299,   303,
    2746,   168,   493,   131,   102,   510,   510,   178,   192,  2320,
     370,   455,   171,   230,   132,   455,    50,   198,   230,  2330,
     206,   452,   304,    59,   206,   275,   460,   168,   254,   213,
     239,   513,   430,   517,  1307,  2286,   304,  2288,   386,   518,
     205,   455,   455,   320,   233,  1318,   279,    31,   325,  2592,
     205,   205,   367,  2439,   192,  2441,    18,   451,   131,   142,
     370,    50,   200,   455,   144,  2316,   205,     9,  2319,   198,
    2316,   502,   132,   430,   460,   213,  2462,   455,   205,   356,
     510,   510,   513,    10,   268,     8,   513,   364,   512,   299,
     205,   302,   300,  1366,    50,   507,   194,   195,   196,   507,
     377,   512,  1375,   191,   470,   203,  1379,   245,  2359,   296,
     335,   116,   319,   445,   318,    48,   418,   366,   205,   205,
     299,    50,  2373,   105,   366,   265,   239,  2373,   266,   265,
     268,   408,   301,   501,   411,    98,  2387,    59,     9,   323,
    2391,    50,   419,   113,   342,   265,  2532,   465,   265,   265,
    2536,  2537,   386,   430,   292,   293,   490,   460,   112,   342,
     297,   259,   212,   261,   262,   263,   460,   345,   223,   267,
     110,   304,   372,   425,   122,   234,   198,   288,   342,   291,
      50,   326,   326,   460,   318,   323,   463,   311,  2439,     7,
    2441,   326,   432,    46,    92,    26,  1469,   127,   202,   148,
     384,   207,    75,   222,   239,   150,  2457,   178,  1481,   521,
     308,  2357,   350,   397,   411,   617,   505,   545,  1912,   287,
     426,  1033,   498,   788,  1459,   539,  2758,  1414,   755,  1905,
    1680,  2202,  2006,  1506,   806,  2683,  2689,  2228,   376,  1042,
     859,  2100,   795,  1768,  1233,  2419,   384,  2406,  1767,  2395,
    1852,  1803,  1250,  1492,  2400,  2098,  1519,  2523,  2524,   397,
    1533,  1494,  2284,  1538,   402,  1541,  2102,  2302,  2519,  2520,
    1303,  1584,  2523,  2524,  1591,  2526,  2819,  1871,  2125,  1899,
    1602,  1339,  2320,  1925,  1344,   383,  2144,  2142,  2330,  1632,
    2198,  2156,  1953,  2182,  1373,  1153,  2753,  1375,   482,  1389,
    1972,  2362,  1972,  1679,  2466,  2496,   444,  2367,  1570,   300,
    1362,  1489,  2175,   152,  1587,   453,   700,  1940,  2175,  2465,
    1729,  2175,  1595,  2175,   271,  1598,   243,   996,  1601,   582,
    2602,  2451,  2724,   418,   760,   510,   216,   435,   436,  1960,
    2591,   451,  2114,   719,   482,  1904,  1594,  2673,   561,    -1,
      -1,    -1,    -1,    -1,   492,    -1,  2622,    -1,  2504,  2505,
     498,  2507,    -1,    -1,    -1,  1638,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2522,    -1,    -1,    -1,
      -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1664,  2538,    -1,    -1,    -1,  1669,    -1,    -1,    -1,
      -1,   499,    -1,  2669,    -1,  2656,   504,    -1,    -1,    -1,
      -1,    -1,    -1,   511,  1687,   513,  1689,    -1,    -1,    -1,
      -1,  2567,    -1,  1696,    -1,    -1,  2572,  2573,  1701,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2705,
    2706,    -1,    -1,    -1,    -1,    -1,    -1,  2593,    -1,    -1,
      -1,  2702,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,    -1,    -1,    10,  2621,    -1,    -1,  2624,    -1,
      -1,  2627,  2628,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,  2753,    -1,    -1,  1778,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1797,    -1,    -1,    -1,  1801,    -1,
      -1,  1804,    -1,    -1,    -1,    -1,    -1,  2788,    -1,    -1,
      -1,  2807,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,  1116,  1117,  1118,    -1,    -1,  1121,
      -1,    -1,    -1,  1125,  1126,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    85,  1135,    -1,    -1,    -1,    -1,  1140,    -1,
    1142,  1143,    -1,    -1,  1146,  1858,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1161,
    1162,    -1,   115,    -1,    -1,  1167,    -1,  1169,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,  1188,    -1,  1901,  1902,
      -1,  1193,    -1,    -1,  1907,  1908,  1909,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1207,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
     196,    -1,    -1,    -1,  1937,    -1,    -1,   203,    -1,    -1,
      -1,    -1,    -1,    -1,  1236,    -1,    -1,    -1,   214,  1241,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,  1965,    -1,    -1,    -1,    -1,    -1,  1260,    -1,
    1262,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,   255,
      -1,    -1,  1284,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,   247,    -1,    -1,  1299,   274,    -1,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,  1330,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1344,    -1,    -1,    -1,    -1,  2060,    -1,    -1,
      -1,   327,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,  2074,    -1,    -1,  1366,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,   351,    -1,    -1,    -1,    -1,
      -1,    -1,  2095,    -1,  2097,    -1,    -1,  1389,    -1,    -1,
    1392,    -1,  1394,    -1,    -1,    -1,    -1,    -1,   351,    -1,
      -1,    -1,    -1,    -1,  2117,    -1,    -1,   383,    -1,    -1,
      -1,    -1,  2125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2134,    -1,  2136,    -1,    -1,    -1,    -1,    -1,    -1,
     383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,
     436,    -1,    -1,    -1,    -1,    -1,  2179,  1469,    -1,    -1,
     423,    -1,    -1,    -1,  2187,    -1,    -1,    -1,    -1,  1481,
    2193,    -1,   435,   436,    -1,    -1,   462,    -1,    -1,    -1,
      -1,    -1,    -1,   469,    -1,    -1,    -1,   473,    -1,    -1,
      -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   469,  1519,    -1,    -1,
      -1,    -1,    -1,   499,    -1,    -1,   479,    -1,   504,    -1,
    1532,  1533,    -1,    -1,    -1,   511,    -1,   513,    -1,    -1,
      -1,    -1,    -1,   519,    -1,    -1,   499,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     513,    -1,    -1,    -1,    -1,    -1,   519,    -1,  1570,    -1,
      -1,    -1,    -1,  2286,    -1,  2288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1587,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,  1601,
      -1,    -1,    -1,    -1,    -1,    -1,  2319,    -1,    -1,  1611,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1620,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1631,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1642,    85,    -1,    -1,    -1,    -1,  2359,    -1,    -1,    -1,
      -1,  1653,    -1,    -1,  1656,    -1,    -1,  1659,   102,    -1,
      -1,    -1,  1664,    -1,    -1,    -1,    -1,  1669,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,  1696,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1719,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2439,  1729,  2441,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,  1741,
      -1,     4,  1744,     6,    -1,    -1,    -1,    -1,    11,    -1,
     194,   195,   196,    -1,    -1,    -1,    19,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,    -1,  1778,    -1,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    52,
      53,    -1,  1794,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    77,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,   114,   267,    -1,   269,    -1,    -1,    -1,    -1,   122,
      -1,   124,    -1,    -1,   308,    -1,    -1,    -1,   131,    -1,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   308,    -1,    -1,    -1,    -1,    -1,  1901,
    1902,    -1,    -1,   166,    -1,    -1,    -1,   351,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1930,    -1,
      -1,    -1,    -1,    -1,   197,  1937,   351,    -1,    -1,   383,
      -1,   204,  1944,    -1,   207,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,  2671,  2672,
      -1,   224,  1964,   226,    -1,    -1,   229,    -1,   383,  1971,
    1972,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,   436,    -1,  1996,    -1,    -1,    -1,  2711,  2001,
      -1,    -1,    -1,    -1,  2006,  2007,    -1,    -1,   423,   272,
      -1,    -1,    -1,   276,    -1,   278,    -1,  2730,    -1,    -1,
     435,   436,    -1,    -1,    -1,   469,   289,    -1,    -1,    -1,
      -1,    -1,    -1,   296,   297,   479,   299,   300,   301,   302,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,   469,   499,    -1,    -1,    -1,  2061,
     504,    -1,    -1,    -1,   479,    -1,   329,   511,    -1,   513,
      -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,    -1,  2800,    -1,   504,
      -1,   354,   355,    -1,    -1,    -1,   511,    -1,   513,    -1,
      -1,    -1,   365,    -1,   519,  2107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2116,  2117,   379,    -1,   381,    -1,
      -1,    -1,    -1,  2125,   387,    -1,    -1,    -1,   391,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,    -1,
    2142,  2143,    -1,    -1,    -1,    -1,    -1,   410,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,  2171,
     433,   434,    -1,    -1,   437,    -1,   439,    -1,    -1,  2181,
    2182,    -1,    -1,    -1,   447,    -1,    -1,  2189,    -1,    -1,
      -1,  2193,    -1,     1,    -1,    -1,     4,   460,     6,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,   478,  2218,    -1,    -1,    -1,
      -1,   484,    -1,    -1,    -1,  2227,   489,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,   510,    -1,    -1,
      -1,    -1,    -1,   516,    -1,    63,    -1,    -1,    -1,    -1,
    2262,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
    2292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,  2310,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2378,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
      -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,   207,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,   226,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,  2429,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
    2462,    -1,    -1,    -1,   272,    -1,    -1,    -1,   276,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2480,    -1,
      -1,   289,    -1,    -1,    -1,  2487,    -1,    -1,  2490,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
    2532,    -1,    -1,    -1,  2536,  2537,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2547,   354,   355,    -1,    -1,
      -1,   114,    -1,    -1,    -1,    -1,    -1,   365,  2560,   122,
      -1,   124,    -1,    -1,    -1,    -1,  2568,  2569,    -1,    -1,
      -1,   379,  2574,   381,    -1,    -1,    -1,    -1,  2580,   387,
      -1,    -1,    -1,   391,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   399,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   410,   166,    -1,    -1,    -1,    -1,   171,  2611,
      -1,   419,    -1,  2615,  2616,    -1,    -1,    -1,    -1,    -1,
     428,    -1,    -1,    -1,    -1,   433,   434,  2629,    -1,   437,
      -1,   439,    -1,    -1,   197,    -1,    -1,    -1,    -1,   447,
      -1,   204,    -1,    -1,   207,   208,    -1,    -1,    -1,    -1,
      -1,    -1,   460,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,   226,    -1,    -1,   229,    -1,    -1,    -1,
     478,    -1,    -1,    -1,    -1,    -1,   484,    -1,    -1,    -1,
      -1,   489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2696,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   516,   272,
      -1,    -1,    -1,   276,    -1,   278,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,    -1,
    2732,  2733,    -1,    -1,    -1,    -1,     1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    19,    -1,    -1,    -1,    -1,  2761,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,  2771,
    2772,    -1,    -1,    -1,    -1,  2777,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,  2791,
      -1,   354,   355,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    77,    -1,    -1,    -1,   379,    -1,   381,    -1,
      -1,    -1,    -1,    -1,   387,    -1,    91,    -1,   391,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   399,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   410,    -1,   114,
      -1,    -1,    -1,    -1,    -1,   102,   419,   122,    -1,   124,
      -1,    -1,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,   437,    -1,   439,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,    -1,
      -1,   166,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,    -1,
      -1,   484,    -1,    -1,    -1,    -1,   489,    -1,    -1,    -1,
      -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,   204,
      -1,    -1,   207,   208,    -1,    -1,   193,   194,   195,   196,
      -1,    -1,   217,   516,    -1,    -1,   203,    -1,    -1,   224,
      -1,   226,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,   276,   259,   278,   261,   262,   263,    -1,    -1,    -1,
     267,    -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   308,    -1,    -1,   329,    -1,    -1,    -1,    -1,    67,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,   354,
     355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,    -1,
      -1,    -1,   387,    -1,   122,    -1,   391,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   399,    -1,   383,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   410,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   428,    -1,   163,    -1,    -1,   433,   434,
      -1,    -1,   437,    -1,   439,    -1,    -1,    -1,    -1,    -1,
     178,    -1,   447,   181,   182,   183,   184,   185,   435,   436,
     188,   189,    -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,
     198,   448,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,    -1,    -1,   478,    -1,   213,    -1,    -1,    -1,   484,
      -1,    -1,    -1,   221,   489,    -1,     4,    -1,     6,    -1,
      -1,    -1,   479,    11,    -1,    -1,   234,    -1,    -1,   237,
      -1,    19,    -1,   490,    -1,   243,    -1,   245,    -1,    -1,
      -1,   516,   499,    -1,    -1,    -1,   254,   504,    -1,    -1,
      -1,   508,    -1,    -1,   511,   512,   513,    -1,    -1,    -1,
     268,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   280,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   310,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   323,   324,    -1,    -1,     7,
      -1,    -1,    10,    -1,   332,    -1,   114,   335,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,    -1,    -1,    -1,
     348,    -1,   350,   131,    -1,   133,   134,   135,   136,   137,
     138,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   376,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,   166,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   402,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,   412,    -1,   414,   415,   416,   197,
      -1,    -1,    -1,    -1,   102,    -1,   204,    -1,    -1,   207,
     208,    -1,    -1,    -1,    -1,     7,    -1,   115,    10,   217,
      -1,    13,    14,    15,    -1,    -1,   224,    -1,   226,    21,
      -1,   229,    -1,    -1,    -1,    -1,    -1,   455,    -1,    -1,
      -1,    -1,   460,    -1,    -1,    -1,    -1,   465,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,
      -1,    -1,    -1,    -1,   482,    -1,    -1,    -1,   486,   487,
     488,    -1,    -1,    -1,   272,    -1,    -1,    -1,   276,    -1,
     278,    -1,   500,    -1,    -1,    -1,    -1,    -1,   506,   507,
      -1,   289,    -1,    85,    -1,   513,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,   214,    -1,   316,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   329,   230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,   354,   255,    -1,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,   365,    -1,   267,
     162,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
     172,    -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,   387,
      -1,    -1,    -1,   391,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   399,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
     308,   203,   410,    -1,    -1,    -1,    -1,   209,   210,    -1,
      -1,   419,   214,    -1,    -1,    -1,    -1,    -1,    -1,   327,
     428,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,   437,
      -1,   439,   234,    -1,    -1,    -1,    -1,    -1,    -1,   447,
      -1,    -1,    -1,   351,    -1,   247,   248,   249,    -1,    -1,
      -1,   253,   460,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
     478,    -1,   274,    -1,    -1,   383,   484,    -1,    -1,    -1,
      -1,   489,    -1,    -1,     7,   287,    -1,    10,    -1,    -1,
      13,    14,    15,   295,    -1,    -1,   298,    -1,    21,    -1,
      -1,    -1,    -1,    -1,   306,    -1,   308,    -1,   516,    -1,
      -1,   313,    -1,    -1,    -1,   423,   318,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,   435,   436,    -1,
      -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   469,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   499,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,
      -1,    -1,    -1,   511,    -1,   513,    -1,    -1,    -1,    -1,
      -1,   519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,   457,    -1,   459,    -1,   461,
      -1,    -1,   464,    -1,   466,   467,   468,   469,    -1,   471,
     472,   194,   195,   196,    -1,    -1,    -1,   479,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,   209,   210,    -1,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,
      -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,
      -1,   513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,
      -1,    -1,    -1,    -1,   247,   248,   249,    -1,    -1,    -1,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   295,    -1,    -1,   298,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   306,    -1,   308,    -1,    -1,    -1,    -1,
     313,    -1,    -1,    -1,    -1,   318,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,   351,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     383,    -1,    37,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     423,    76,    -1,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,   435,   436,    85,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,   457,    -1,   459,    -1,   461,    -1,
      -1,   464,    -1,   466,   467,   468,   469,   122,   471,   472,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,   174,
      -1,    -1,    -1,   178,    -1,    -1,   181,   182,   183,   184,
     185,    -1,    -1,   188,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,   206,   203,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,   214,    -1,    -1,   221,    -1,    -1,    97,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,   234,
      -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,     7,
      -1,    -1,    10,   274,    -1,   280,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   310,    -1,   308,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,   194,   195,   196,   324,
      -1,    -1,    -1,    -1,    -1,   203,   327,   332,    -1,    -1,
     335,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,    -1,    -1,   348,    -1,    -1,    -1,    85,    -1,    -1,
     351,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    97,
      -1,   362,    -1,   368,   102,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,     7,   255,    -1,    10,
      -1,   259,   383,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,   414,
     415,   416,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,
      -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,   435,   436,   441,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,
      -1,    -1,    -1,    -1,    85,   460,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    97,    -1,   469,    -1,
      -1,   102,   477,   351,    -1,    -1,   214,    -1,   479,    -1,
      -1,   486,   487,   488,   485,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   500,    -1,    -1,   499,    -1,
      -1,    -1,   507,   504,    -1,   383,   507,    -1,   513,   247,
     511,    -1,   513,    -1,    -1,   253,     7,   255,   519,    10,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,   423,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
     308,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,   327,
      -1,   469,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,   351,    -1,    -1,   247,    85,    -1,    -1,
      -1,   499,   253,    -1,   255,    -1,   504,    -1,   259,    -1,
     261,   262,   263,   511,   102,   513,   267,    -1,   269,     7,
      -1,   519,    10,   274,    -1,   383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,   435,   436,    -1,
     168,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    85,    -1,    -1,
     351,    -1,    -1,   214,    -1,    -1,   194,   195,   196,    -1,
      -1,   469,    -1,    -1,   102,   203,    -1,    -1,    -1,    -1,
      85,   479,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,    -1,   383,    -1,    -1,    -1,   247,   102,    -1,    -1,
      -1,   499,   253,    -1,   255,    -1,   504,    -1,   259,    -1,
     261,   262,   263,   511,    -1,   513,   267,    -1,   269,   247,
      -1,   519,    -1,   274,    -1,   253,    -1,   255,    -1,    -1,
      -1,   259,   423,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,   435,   436,   274,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,   327,    -1,   469,    -1,
     308,    -1,    -1,    -1,    -1,    -1,   214,    -1,   479,   194,
     195,   196,     7,   198,    -1,    10,    -1,    -1,   203,   327,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,   214,
      -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,   247,
     511,    -1,   513,   351,    -1,   253,    -1,   255,   519,    -1,
      -1,   259,   383,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,   247,    -1,    -1,    -1,   274,    -1,   253,    -1,
     255,    -1,    -1,    -1,   259,   383,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,
      85,    -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,     7,
     308,    -1,    10,    -1,   435,   436,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,   327,
      -1,    -1,    -1,   308,   455,    -1,    -1,   435,   436,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,
      -1,    -1,   327,   351,    -1,    -1,    -1,    -1,   479,    -1,
      -1,    -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,   469,    -1,    -1,    -1,    -1,   351,    -1,   499,    -1,
      -1,   479,    -1,   504,    -1,   383,    -1,    85,    -1,    -1,
     511,    -1,   513,    -1,    -1,    -1,    -1,    -1,   519,    -1,
      -1,   499,    -1,    -1,   102,    -1,   504,    -1,   383,   194,
     195,   196,    -1,   511,    -1,   513,    -1,    -1,   203,    -1,
      -1,   519,    -1,    -1,    -1,   423,    -1,    -1,    -1,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,
     435,   436,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
     255,   469,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,   479,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,
      -1,    -1,    -1,    -1,   469,   493,   194,   195,   196,    -1,
      -1,   499,    -1,    -1,   479,   203,   504,    -1,    -1,    -1,
      -1,    -1,    -1,   511,    -1,   513,   214,    -1,    -1,    -1,
      -1,   519,    -1,   308,   499,    -1,    -1,    -1,    -1,   504,
      -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,   513,    -1,
      -1,    -1,   327,    -1,   519,    -1,    -1,    -1,    -1,   247,
     194,   195,   196,    -1,    -1,   253,    -1,   255,    -1,   203,
      -1,   259,    -1,   261,   262,   263,   351,    -1,    -1,   267,
     214,   269,    -1,    -1,    -1,    -1,   274,    -1,     7,    -1,
      -1,    10,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   383,   102,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
     308,   255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,   327,
     274,    -1,   417,    -1,    -1,    -1,    -1,    -1,   423,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     435,   436,    -1,   351,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,   469,   383,    -1,    -1,    -1,    -1,
     193,   194,   195,   196,   479,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,   504,
      -1,    -1,    -1,    -1,    -1,   423,   511,    -1,   513,    -1,
      -1,    -1,    -1,    -1,   519,    -1,    -1,   435,   436,   383,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,   194,   195,   196,    -1,    -1,
      -1,   469,    -1,    -1,   203,    -1,    -1,    -1,    -1,   423,
      -1,   479,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   499,    -1,    -1,    -1,   308,   504,    -1,    -1,    -1,
      -1,    -1,    -1,   511,    -1,   513,    -1,    -1,   247,    -1,
      -1,   519,    -1,    -1,   253,   469,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,   479,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,
     504,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,   513,
      -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,   308,
     383,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,   327,    -1,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,   436,    -1,    -1,    76,    -1,    78,    79,
      80,    81,    82,    83,    84,   448,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,   490,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,   499,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,   508,   435,   436,   511,   512,
     513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     469,   181,   182,   183,   184,   185,    -1,    -1,   188,   189,
     479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,
      -1,   221,   511,    -1,   513,    -1,    -1,    -1,    -1,    -1,
     519,    -1,    -1,    -1,   234,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   332,    -1,    -1,   335,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,   348,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   181,   182,   183,   184,   185,    -1,    -1,   188,
     189,    -1,   412,   192,   414,   415,   416,    -1,    -1,   198,
      -1,   200,    -1,    -1,    -1,    -1,    -1,   206,    -1,    -1,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,
      -1,   441,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   237,    -1,
     460,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   254,    -1,   477,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   486,   487,   488,   268,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     500,   280,    -1,    -1,    -1,    -1,    -1,   507,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   323,   324,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   332,    -1,    76,   335,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,   348,
      -1,   350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,
      -1,   122,    -1,   102,    -1,   384,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   402,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   412,    -1,   414,   415,   416,    -1,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     181,   182,   183,   184,   185,    -1,    -1,   188,   189,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   455,    -1,    -1,    -1,
      -1,   460,    -1,    -1,    -1,    -1,   465,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
     221,    -1,    -1,   482,   203,    -1,    -1,   486,   487,   488,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,   500,    -1,    -1,    -1,    -1,    -1,   506,   507,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,   214,   253,    -1,   255,    -1,    -1,   280,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,   102,    -1,
      -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,   324,    -1,    -1,   267,    -1,   269,   308,
      -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,   327,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,   383,    -1,    -1,    -1,    -1,   203,
     351,    -1,    -1,   414,   415,   416,    -1,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   383,    -1,   423,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   247,    -1,    -1,   435,   436,    -1,   253,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,   457,    -1,
      -1,    -1,   423,    -1,    -1,   486,   487,   488,   467,    -1,
     469,    -1,   471,   472,   435,   436,    -1,    -1,    -1,    -1,
     479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,   457,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   504,   467,    -1,   469,    -1,
     471,   472,   511,   327,   513,    -1,    -1,    -1,   479,    -1,
     519,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,   351,   499,    -1,
      -1,   214,    -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,
     511,    85,   513,    -1,    -1,    -1,    -1,    -1,   519,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   383,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,   443,
     102,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   467,   327,   469,    -1,   471,   472,    -1,
     194,   195,   196,    -1,    -1,   479,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,
     214,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,
     504,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,   513,
      -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,
     383,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
      -1,   255,   194,   195,   196,   259,    -1,   261,   262,   263,
      -1,   203,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     423,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,   436,    -1,    -1,    -1,    -1,    -1,   102,
     443,    -1,    -1,    -1,   308,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,   327,   467,   267,   469,   269,   471,   472,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,    -1,   308,    -1,   511,    -1,
     513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,   383,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,   383,    -1,    -1,   247,    85,    -1,    -1,    -1,    -1,
     253,    -1,   255,   457,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,   102,   467,   267,   469,   269,   471,   472,    -1,
      -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,
      -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,   499,    -1,    -1,    -1,    -1,
     504,    -1,    -1,    -1,    -1,   308,    -1,   511,    -1,   513,
      -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,   467,    -1,   469,    -1,   471,
     472,   194,   195,   196,    -1,    -1,    -1,   479,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,
      -1,   214,    -1,    -1,   194,   195,   196,   499,    -1,    -1,
      -1,    -1,   504,   203,    -1,    -1,    -1,    -1,    -1,   511,
      -1,   513,    -1,    -1,   214,   378,    -1,   519,    -1,    -1,
     383,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,
     423,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,    -1,   469,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,   351,    -1,
     493,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     513,   351,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,
     383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,   471,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,   479,
      -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,   499,
      -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,
      -1,   511,    -1,   513,    -1,    -1,    -1,    -1,    -1,   519
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
    1231,  1015,  1339,  1036,   849,   171,  1026,  1188,  1027,  1028,
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
     735,   220,   319,  1303,  1228,  1171,   205,  1036,   652,  1211,
     144,  1021,     9,   198,  1032,  1248,   132,  1177,  1179,  1056,
    1057,  1339,   849,   510,   510,  1065,  1066,  1237,  1236,  1231,
    1071,  1071,  1071,  1071,  1071,  1071,  1071,  1071,  1076,   295,
     298,  1098,  1099,  1100,  1194,  1280,  1184,   246,   417,  1356,
     430,  1331,  1331,  1112,  1339,  1248,  1171,   205,   460,   455,
      10,  1134,  1135,  1274,  1137,  1248,  1112,  1137,  1036,     8,
    1287,   513,   737,   738,  1307,   457,  1221,  1239,  1308,  1308,
     259,   519,   768,   769,  1248,  1257,   701,   778,   765,   766,
     519,  1241,  1245,  1255,  1241,  1307,  1334,  1307,  1307,    33,
    1255,   840,   841,  1307,   512,   866,  1241,  1241,  1241,   849,
     299,  1167,  1165,  1282,  1249,   849,   302,  1173,  1254,  1171,
    1238,  1248,  1259,   168,   470,   897,  1347,     7,   230,   313,
     469,   896,  1306,    35,   284,   285,   286,   349,   475,   476,
     480,  1284,  1201,   849,   300,  1186,   852,  1241,  1241,  1187,
    1243,  1245,  1255,  1187,   512,   927,  1207,  1208,  1207,  1208,
     892,   313,   836,    90,   362,   507,   950,  1189,   849,  1248,
     849,   507,   978,   979,   980,   981,  1333,   507,  1238,  1237,
      50,  1000,   995,   191,  1000,  1086,  1307,  1309,   319,  1207,
    1211,   385,  1016,  1339,  1028,  1231,     8,   219,  1033,  1034,
    1035,  1037,  1040,  1057,  1339,   849,   296,  1180,  1184,   265,
     292,  1189,  1188,  1065,  1194,  1248,  1195,  1196,  1197,  1198,
    1201,  1105,  1231,  1105,   470,  1174,  1175,   335,  1282,  1207,
     844,  1238,   318,  1237,   116,  1138,   445,  1140,  1056,   326,
    1215,  1241,   738,  1220,  1221,   770,   254,   257,  1350,   513,
     702,   273,   334,   467,   472,   820,   821,   822,  1239,   820,
     821,   823,   841,    48,    33,    36,    39,    47,    94,   113,
     192,   200,   213,   245,   266,   268,   292,   293,   323,   350,
     376,   384,   397,   402,   444,   453,   482,   492,   498,   867,
     868,   869,  1165,   849,  1171,   849,   299,   898,   849,  1317,
    1248,   400,   454,   849,   254,   257,  1355,   929,  1171,   366,
    1171,   366,  1231,   979,   105,  1298,  1335,  1000,  1000,  1238,
       9,    38,  1001,   227,   506,  1091,  1221,  1088,  1171,  1016,
     265,   292,    50,  1318,   265,   239,  1041,  1039,  1040,  1339,
     218,   238,   509,   849,   265,   849,   849,   849,   301,  1176,
    1307,  1171,  1171,   501,   845,  1142,  1135,  1302,    98,  1139,
    1302,  1174,   160,   297,  1163,  1181,  1182,  1183,  1184,   254,
     257,  1310,  1221,   180,   190,   212,   242,   256,   771,   772,
     773,   774,   775,   776,   769,   779,  1241,  1241,   132,  1307,
    1307,   869,    59,   126,   491,     9,  1288,   868,   849,  1248,
    1208,  1208,    50,   113,  1000,   465,  1305,  1305,   342,  1211,
     205,   322,  1092,  1252,   386,  1231,   265,  1307,  1042,  1178,
    1179,  1180,  1184,   265,   265,   849,  1248,  1143,   460,  1248,
    1302,  1248,   849,   849,  1183,   109,   119,  1359,  1307,  1307,
      57,    92,  1359,  1360,  1307,  1343,   780,   112,  1241,  1241,
    1307,  1187,  1187,  1242,  1245,  1257,  1171,  1171,  1231,  1231,
    1231,  1307,  1211,   342,   490,  1248,  1180,   130,   169,   206,
    1144,  1145,  1146,  1148,  1152,  1154,  1155,  1156,  1292,  1300,
    1248,  1307,   769,   769,   212,  1307,  1307,   769,     3,   211,
     254,   290,   310,   338,   421,   438,   460,   481,   500,   508,
     719,   724,   725,   739,   742,   744,   781,   782,   786,   788,
     791,   792,   795,   796,   797,   802,   803,   809,   810,   811,
    1342,  1343,  1344,   460,  1239,  1023,  1307,  1188,    38,  1288,
     345,   110,   769,   769,   769,   223,  1304,   304,   800,  1307,
    1255,  1307,  1317,  1307,  1307,  1248,     9,    38,   237,   510,
     334,   472,   798,   799,   801,  1257,  1318,   806,   807,   808,
     820,  1257,   304,   305,  1316,  1023,   372,   425,  1330,   132,
     428,  1153,  1318,   234,   291,   334,   472,   787,  1255,   728,
    1234,  1232,  1234,    56,    92,   326,   330,   331,   371,   388,
     389,   783,  1359,  1360,  1361,  1362,  1363,  1364,  1365,   122,
     198,   288,  1314,  1314,     9,    38,  1188,  1257,  1257,   798,
     291,   807,  1257,    55,   244,   390,   804,   805,  1248,   164,
     168,  1346,    10,  1149,  1150,  1218,  1255,  1255,  1334,  1282,
     378,   493,   789,  1234,   190,   190,   212,   190,   212,   191,
     314,  1319,  1319,  1234,   318,   326,   793,   794,  1248,   793,
    1314,  1314,  1308,   342,  1322,   311,   343,   363,  1151,  1150,
     730,  1318,  1248,   179,   784,  1248,    10,   179,   785,  1248,
      50,   793,   326,   326,  1318,   311,  1252,   432,   726,   179,
     790,  1248,   318,  1234,   173,   227,   235,   322,  1147,  1211,
    1255,   326
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
/* Line 1792 of yacc.c  */
#line 1352 "parser.y"
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
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 1363 "parser.y"
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
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 1399 "parser.y"
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
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 1454 "parser.y"
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[(2) - (3)]))) {
		s = (char *)(CB_LITERAL ((yyvsp[(2) - (3)]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[(2) - (3)])));
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
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 1483 "parser.y"
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[(2) - (3)]))) {
		s = (char *)(CB_LITERAL ((yyvsp[(2) - (3)]))->data);
	} else {
		s = (char *)(CB_NAME ((yyvsp[(2) - (3)])));
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
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 1516 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 1522 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 1534 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 1544 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[(3) - (4)]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[(3) - (4)]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[(3) - (4)])));
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
	current_program->program_id = cb_build_program_id ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]), 0);
	current_program->prog_type = CB_PROGRAM_TYPE;
	if (!main_flag_set) {
		main_flag_set = 1;
		current_program->flag_main = !!cobc_flag_main;
	}
  }
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 1575 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 1582 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	if (CB_LITERAL_P ((yyvsp[(3) - (5)]))) {
		stack_progid[depth] = (char *)(CB_LITERAL ((yyvsp[(3) - (5)]))->data);
	} else {
		stack_progid[depth] = (char *)(CB_NAME ((yyvsp[(3) - (5)])));
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
	current_program->program_id = cb_build_program_id ((yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), 1);
	current_program->prog_type = CB_FUNCTION_TYPE;
	current_program->flag_recursive = 1;
	cobc_cs_check = 0;
  }
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 1615 "parser.y"
    {
	cb_trim_program_id ((yyvsp[(1) - (1)]));
  }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 1621 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 1622 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 1631 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 1640 "parser.y"
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 1654 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 1658 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 1668 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 1677 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 1702 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1, &check_comp_duplicate);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 1720 "parser.y"
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 1733 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 1762 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 1769 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 1776 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 1783 "parser.y"
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 76:
/* Line 1792 of yacc.c  */
#line 1794 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 1798 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 1802 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 1806 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 1820 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 1825 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 1833 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 1845 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 1849 "parser.y"
    {
	cb_tree		x;

	if ((yyvsp[(3) - (3)])) {
		x = (yyvsp[(3) - (3)]);
	} else {
		x = (yyvsp[(2) - (3)]);
	}
	current_program->user_spec_list =
		cb_list_add (current_program->user_spec_list, x);
  }
    break;

  case 94:
/* Line 1792 of yacc.c  */
#line 1870 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 1874 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 1881 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 1886 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 1897 "parser.y"
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 1911 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 1942 "parser.y"
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
		strncpy(system_name, CB_NAME ((yyvsp[(1) - (1)])), 15);
		if (system_name [6] == '_') {
			system_name [6] = ' ';
		}
		/* lookup system name */
		save_tree = lookup_system_name (system_name);
		if (!save_tree) {
			cb_error_x ((yyvsp[(1) - (1)]), _("Invalid system-name '%s'"), system_name);
		}
	}
  }
    break;

  case 117:
/* Line 1792 of yacc.c  */
#line 1970 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
    break;

  case 118:
/* Line 1792 of yacc.c  */
#line 1980 "parser.y"
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_FEATURE_CONVENTION) {
			cb_error_x (save_tree, _("Invalid special names clause"));
		} else if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
			CB_SYSTEM_NAME(save_tree)->value = (yyvsp[(1) - (3)]);
			cb_define ((yyvsp[(3) - (3)]), save_tree);
			CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
					(yyvsp[(3) - (3)]), save_tree);
		}
	}
  }
    break;

  case 119:
/* Line 1792 of yacc.c  */
#line 1993 "parser.y"
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[(2) - (3)]))) {
		cb_define ((yyvsp[(2) - (3)]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[(2) - (3)]), save_tree);
	}
  }
    break;

  case 123:
/* Line 1792 of yacc.c  */
#line 2009 "parser.y"
    {
	  check_on_off_duplicate = 0;
  }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 2016 "parser.y"
    {
	cb_tree		x;
	
	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(3) - (3)]), save_tree, (yyvsp[(1) - (3)]) == cb_int1);
	if (x) {
		if ((yyvsp[(1) - (3)]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(3) - (3)]), x);
	}
  }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 2031 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(4) - (4)]), save_tree, (yyvsp[(2) - (4)]) == cb_int1);
	if (x) {
		if ((yyvsp[(2) - (4)]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1, &check_on_off_duplicate);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2, &check_on_off_duplicate);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(4) - (4)]), x);
	}
  }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 2051 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		(yyval) = NULL;
	} else {
		/* Returns null on error */
		(yyval) = cb_build_alphabet_name ((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 2064 "parser.y"
    {
	if ((yyvsp[(3) - (5)])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[(3) - (5)]));
	}
	cobc_cs_check = 0;
  }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 2075 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 2081 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 2087 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 2093 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 2099 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 2105 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 2115 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 2119 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 2126 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 2130 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 2134 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2138 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2145 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 2149 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 2155 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 2156 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 2157 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 2158 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 2159 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 2160 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 2164 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 2165 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 2173 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else if ((yyvsp[(1) - (2)])) {
		CB_CHAIN_PAIR (current_program->symbolic_char_list, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 2187 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 2191 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 2199 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 2206 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 2210 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	} else {
		(yyval) = (yyvsp[(1) - (2)]);
	}
  }
    break;

  case 156:
/* Line 1792 of yacc.c  */
#line 2221 "parser.y"
    {
	cb_tree		l1;
	cb_tree		l2;

	if (cb_list_length ((yyvsp[(1) - (3)])) != cb_list_length ((yyvsp[(3) - (3)]))) {
		cb_error (_("Invalid SYMBOLIC clause"));
		(yyval) = NULL;
	} else {
		l1 = (yyvsp[(1) - (3)]);
		l2 = (yyvsp[(3) - (3)]);
		for (; l1; l1 = CB_CHAIN (l1), l2 = CB_CHAIN (l2)) {
			CB_PURPOSE (l1) = CB_VALUE (l2);
		}
		(yyval) = (yyvsp[(1) - (3)]);
	}
  }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 2241 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 2249 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) == NULL) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 2259 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 2260 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 2267 "parser.y"
    {
	cb_tree		x;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		x = cb_build_class_name ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
		if (x) {
			current_program->class_name_list =
				cb_list_add (current_program->class_name_list, x);
		}
	}
  }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 2287 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 2288 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 2293 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 2297 "parser.y"
    {
	if (CB_TREE_CLASS ((yyvsp[(1) - (3)])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[(1) - (3)])) && CB_LITERAL ((yyvsp[(1) - (3)]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (CB_TREE_CLASS ((yyvsp[(3) - (3)])) != CB_CLASS_NUMERIC &&
	    CB_LITERAL_P ((yyvsp[(3) - (3)])) && CB_LITERAL ((yyvsp[(3) - (3)]))->size != 1) {
		cb_error (_("CLASS literal with THRU must have size 1"));
	}
	if (literal_value ((yyvsp[(1) - (3)])) <= literal_value ((yyvsp[(3) - (3)]))) {
		(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	} else {
		(yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(1) - (3)]));
	}
  }
    break;

  case 166:
/* Line 1792 of yacc.c  */
#line 2318 "parser.y"
    {
	cb_tree	l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		/* Returns null on error */
		l = cb_build_locale_name ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
		if (l) {
			current_program->locale_list =
				cb_list_add (current_program->locale_list, l);
		}
	}
  }
    break;

  case 167:
/* Line 1792 of yacc.c  */
#line 2341 "parser.y"
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[(4) - (5)]))->data;
	unsigned int	error_ind = 0;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
		error_ind = 1;
	}
	check_repeated ("CURRENCY", SYN_CLAUSE_1, &check_duplicate);
	if ((yyvsp[(5) - (5)])) {
		PENDING ("PICTURE SYMBOL");
	}
	if (CB_LITERAL ((yyvsp[(4) - (5)]))->size != 1) {
		cb_error_x ((yyvsp[(4) - (5)]), _("Invalid currency sign '%s'"), (char *)s);
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
		cb_error_x ((yyvsp[(4) - (5)]), _("Invalid currency sign '%s'"), (char *)s);
		break;
	default:
		if (!error_ind) {
			current_program->currency_symbol = s[0];
		}
		break;
	}
  }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 2422 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 2426 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 2435 "parser.y"
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
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 2454 "parser.y"
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
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 2470 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3, &check_duplicate);
		current_program->cursor_pos = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 2488 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4, &check_duplicate);
		current_program->crt_status = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 2506 "parser.y"
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
    break;

  case 175:
/* Line 1792 of yacc.c  */
#line 2523 "parser.y"
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
    break;

  case 177:
/* Line 1792 of yacc.c  */
#line 2540 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 2548 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 2557 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 2572 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION,
			       COBC_HD_FILE_CONTROL, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[(3) - (3)]))) {
		YYERROR;
	}

	/* Build new file */
	current_file = build_file ((yyvsp[(3) - (3)]));
	current_file->optional = CB_INTEGER ((yyvsp[(2) - (3)]))->val;

	/* Add file to current program list */
	CB_ADD_TO_CHAIN (CB_TREE (current_file), current_program->file_list);
  }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 2589 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 2593 "parser.y"
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 2627 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 2633 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
    break;

  case 204:
/* Line 1792 of yacc.c  */
#line 2643 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdout", (size_t)6);
		current_file->special = COB_SELECT_STDOUT;
	}
  }
    break;

  case 205:
/* Line 1792 of yacc.c  */
#line 2656 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("stdin", (size_t)5);
		current_file->special = COB_SELECT_STDIN;
	}
  }
    break;

  case 206:
/* Line 1792 of yacc.c  */
#line 2669 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_ext_assign = 0;
		current_file->assign =
			cb_build_alphanumeric_literal ("LPT1", (size_t)4);
	}
  }
    break;

  case 212:
/* Line 1792 of yacc.c  */
#line 2692 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 2699 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 2712 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 2724 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 2731 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 2732 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 2733 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 2741 "parser.y"
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	p->key = (yyvsp[(5) - (7)]);
	p->component_list = NULL;
	p->duplicates = CB_INTEGER ((yyvsp[(6) - (7)]))->val;
	if (CB_INTEGER ((yyvsp[(7) - (7)]))->val == -1) {
		p->tf_suppress = 0;
	} else {
		p->tf_suppress = 1;
		p->char_suppress = CB_INTEGER ((yyvsp[(7) - (7)]))->val;
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
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 2770 "parser.y"
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;
	cb_tree composite_key;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	/* generate field (in w-s) for composite-key */
	composite_key = cb_build_field((yyvsp[(5) - (9)]));
	if (composite_key == cb_error_node) {
		YYERROR;
	} else {
		composite_key->category = CB_CATEGORY_ALPHANUMERIC; 
		((struct cb_field *)composite_key)->count = 1;
		p->key = cb_build_field_reference((struct cb_field *)composite_key, NULL);
		p->component_list = key_component_list;
		p->duplicates = CB_INTEGER ((yyvsp[(8) - (9)]))->val;
		if (CB_INTEGER ((yyvsp[(9) - (9)]))->val == -1) {
			p->tf_suppress = 0;
		} else {
			p->tf_suppress = 1;
			p->char_suppress = CB_INTEGER ((yyvsp[(9) - (9)]))->val;
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
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 2807 "parser.y"
    { (yyval) = cb_int (-1); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 2810 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(4) - (4)])));
  }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 2815 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(3) - (3)])));
  }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 2825 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 2836 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 2851 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 2859 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 2864 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 2869 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 2878 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 2882 "parser.y"
    {
	current_file->lock_mode |= (COB_LOCK_ROLLBACK|COB_LOCK_MULTIPLE);
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 2898 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 2903 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 2908 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 2913 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 2924 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 2935 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 2945 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 2950 "parser.y"
    {
	cb_tree composite_key;

	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[(4) - (6)]);

	/* generate field (in w-s) for composite-key */
	composite_key = cb_build_field((yyvsp[(4) - (6)]));
	if (composite_key == cb_error_node) {
		YYERROR;
	} else {
		composite_key->category = CB_CATEGORY_ALPHANUMERIC; 
		((struct cb_field *)composite_key)->count = 1;
		current_file->key = cb_build_field_reference((struct cb_field *)composite_key, NULL);
		current_file->component_list = key_component_list;
	}
  }
    break;

  case 256:
/* Line 1792 of yacc.c  */
#line 2975 "parser.y"
    {
    key_component_list = NULL;
  }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 2985 "parser.y"
    {
    struct cb_key_component *c;
    struct cb_key_component *comp = cobc_malloc(sizeof(struct cb_key_component));
    comp->next = NULL;
    comp->component = (yyvsp[(1) - (1)]);
    if (key_component_list == NULL) {
       key_component_list = comp;
    } else {
       for (c = key_component_list; c->next != NULL; c = c->next);
       c->next = comp;
    }
  }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 3003 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 3014 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 3028 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 3035 "parser.y"
    { (yyval) = cb_int (COB_SHARE_ALL_OTHER); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 3036 "parser.y"
    { (yyval) = cb_int (COB_SHARE_NO_OTHER); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 3037 "parser.y"
    { (yyval) = cb_int (COB_SHARE_READ_ONLY); }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 3046 "parser.y"
    {
	yyerrok;
  }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 3065 "parser.y"
    {
	cb_tree l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	switch (CB_INTEGER ((yyvsp[(2) - (5)]))->val) {
	case 0:
		/* SAME AREA */
		break;
	case 1:
		/* SAME RECORD */
		for (l = (yyvsp[(5) - (5)]); l; l = CB_CHAIN (l)) {
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
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 3092 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 3093 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 3094 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 3095 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 3102 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 3107 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 3134 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 3143 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 3157 "parser.y"
    {
	if (CB_VALID_TREE (current_file)) {
		if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
			/* Do not keep Record if this is really a report */
			if (!current_file->reports) {
				finalize_file (current_file, CB_FIELD ((yyvsp[(2) - (2)])));
			}
		} else if (!current_file->reports) {
			cb_error (_("RECORD description missing or invalid"));
		}
	}
  }
    break;

  case 294:
/* Line 1792 of yacc.c  */
#line 3175 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION,
			       COBC_HD_FILE_SECTION, 0, 0);
	check_duplicate = 0;
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)])) || cb_ref ((yyvsp[(2) - (2)])) == cb_error_node) {
		YYERROR;
	}
	current_file = CB_FILE (cb_ref ((yyvsp[(2) - (2)])));
	if (CB_VALID_TREE (current_file)) {
		if ((yyvsp[(1) - (2)])) {
			current_file->organization = COB_ORG_SORT;
		}
	}
  }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 3192 "parser.y"
    {
	yyerrok;
  }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 3199 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 3203 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 3214 "parser.y"
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1, &check_duplicate);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
    break;

  case 302:
/* Line 1792 of yacc.c  */
#line 3224 "parser.y"
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
    break;

  case 312:
/* Line 1792 of yacc.c  */
#line 3254 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 3267 "parser.y"
    {
	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_max = cb_get_int ((yyvsp[(3) - (4)]));
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
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 3287 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	if (current_file->organization == COB_ORG_LINE_SEQUENTIAL) {
		if (warningopt) {
			cb_warning (_("RECORD clause ignored for LINE SEQUENTIAL"));
		}
	} else {
		current_file->record_min = cb_get_int ((yyvsp[(3) - (6)]));
		current_file->record_max = cb_get_int ((yyvsp[(5) - (6)]));
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
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 3322 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4, &check_duplicate);
	current_file->record_min = (yyvsp[(6) - (9)]) ? cb_get_int ((yyvsp[(6) - (9)])) : 0;
	current_file->record_max = (yyvsp[(7) - (9)]) ? cb_get_int ((yyvsp[(7) - (9)])) : 0;
	if ((yyvsp[(6) - (9)]) && current_file->record_min < 0)  {
		current_file->record_min = 0;
		error_ind = 1;
	}
	if ((yyvsp[(7) - (9)]) && current_file->record_max < 1)  {
		current_file->record_max = 1;
		error_ind = 1;
	}
	if ((yyvsp[(7) - (9)]) && current_file->record_max > MAX_FD_RECORD)  {
		current_file->record_max = MAX_FD_RECORD;
		cb_error (_("RECORD size exceeds maximum allowed (%d)"),
			  MAX_FD_RECORD);
		error_ind = 1;
	}
	if (((yyvsp[(6) - (9)]) || (yyvsp[(7) - (9)])) && current_file->record_max <= current_file->record_min)  {
		error_ind = 1;
	}
	if (error_ind) {
		cb_error (_("RECORD clause invalid"));
	}
  }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 3353 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 3359 "parser.y"
    { (yyval) = NULL; }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 3360 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 3364 "parser.y"
    { (yyval) = NULL; }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 3365 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 3373 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 3384 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 3389 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 3412 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 3424 "parser.y"
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8, &check_duplicate);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("LINAGE clause with wrong file type"));
	} else {
		current_file->linage = (yyvsp[(3) - (5)]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		if (current_linage == 0) {
			linage_file = current_file;
		}
		current_linage++;
	}
  }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 3452 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 3459 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 3466 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 3475 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 3487 "parser.y"
    {
	check_repeated ("CODE SET", SYN_CLAUSE_10, &check_duplicate);
	if (CB_VALID_TREE ((yyvsp[(3) - (3)]))) {
		cb_tree			x;
		struct cb_alphabet_name	*al;

		x = cb_ref ((yyvsp[(3) - (3)]));
		if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
		    current_file->organization != COB_ORG_SEQUENTIAL) {
			cb_error (_("CODE-SET clause invalid for file type"));
		}
		if (!CB_ALPHABET_NAME_P (x)) {
			cb_error_x ((yyvsp[(3) - (3)]), _("Alphabet-name is expected '%s'"), cb_name ((yyvsp[(3) - (3)])));
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
					cb_warning_x ((yyvsp[(3) - (3)]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[(3) - (3)])));
				}
				break;
#else
			case CB_ALPHABET_EBCDIC:
			case CB_ALPHABET_CUSTOM:
				current_file->code_set = al;
				break;
			default:
				if (warningopt) {
					cb_warning_x ((yyvsp[(3) - (3)]), _("Ignoring CODE-SET '%s'"),
						      cb_name ((yyvsp[(3) - (3)])));
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
    break;

  case 344:
/* Line 1792 of yacc.c  */
#line 3539 "parser.y"
    {
	check_repeated ("REPORT", SYN_CLAUSE_11, &check_duplicate);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[(2) - (2)]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		current_file->flag_line_adv = 1;
	}
  }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 3559 "parser.y"
    {
	current_report = build_report ((yyvsp[(1) - (1)]));
	current_report->file = current_file;
	current_program->report_list =
				cb_list_add (current_program->report_list,
					     CB_TREE (current_report));
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 3571 "parser.y"
    {
	current_report = build_report ((yyvsp[(2) - (2)]));
	current_report->file = current_file;
	current_program->report_list =
				cb_list_add (current_program->report_list,
					     CB_TREE (current_report));
	if (report_count == 0) {
		report_instance = current_report;
	}
	report_count++;
  }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 3614 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 3620 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 3629 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 3632 "parser.y"
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 3639 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 3659 "parser.y"
    {
	cb_tree x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}
  }
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 3674 "parser.y"
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
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 3694 "parser.y"
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 3707 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 3714 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 3720 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 3726 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 3735 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 3744 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 3748 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 3759 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 3760 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 3761 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 3762 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 3767 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 3771 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 3775 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 3779 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 3783 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 3787 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 3791 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 3795 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 3799 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 3803 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 3807 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 3811 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 3815 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 395:
/* Line 1792 of yacc.c  */
#line 3847 "parser.y"
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[(1) - (5)]));
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (5)]));
	if (level != 1) {
		cb_error (_("CONSTANT item not at 01 level"));
	} else if ((yyvsp[(5) - (5)])) {
		x = cb_build_constant ((yyvsp[(2) - (5)]), (yyvsp[(5) - (5)]));
		CB_FIELD (x)->flag_item_78 = 1;
		CB_FIELD (x)->level = 1;
		cb_needs_01 = 1;
		if ((yyvsp[(4) - (5)])) {
			CB_FIELD (x)->flag_is_global = 1;
		}
		/* Ignore return value */
		(void)cb_validate_78_item (CB_FIELD (x), 0);
	}
  }
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 3873 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 3877 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 3885 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 3891 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 414:
/* Line 1792 of yacc.c  */
#line 3919 "parser.y"
    {
	check_repeated ("REDEFINES", SYN_CLAUSE_1, &check_pic_duplicate);
	if ((yyvsp[(0) - (2)]) != NULL) {
		if (cb_relaxed_syntax_check) {
			cb_warning_x ((yyvsp[(2) - (2)]), _("REDEFINES clause should follow entry-name"));
		} else {
			cb_error_x ((yyvsp[(2) - (2)]), _("REDEFINES clause must follow entry-name"));
		}
	}

	current_field->redefines = cb_resolve_redefines (current_field, (yyvsp[(2) - (2)]));
	if (current_field->redefines == NULL) {
		current_field->flag_is_verified = 1;
		current_field->flag_invalid = 1;
		YYERROR;
	}
  }
    break;

  case 415:
/* Line 1792 of yacc.c  */
#line 3943 "parser.y"
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
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 3970 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 3974 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 3983 "parser.y"
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
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 4008 "parser.y"
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 4024 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 4028 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 4032 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 4036 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 4040 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 4044 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 4048 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 4052 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 4056 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 4060 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 4064 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 4068 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 4072 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 4077 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 4082 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 4086 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 4090 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 4098 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 4102 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 4106 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 4114 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 4118 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 4122 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4126 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4130 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4134 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 4138 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 4142 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 4146 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 4154 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 4162 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 4166 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 4170 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 4174 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 4178 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 4182 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 4202 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 4208 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 4221 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->depending && !((yyvsp[(3) - (6)]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(2) - (6)])) : 1;
	current_field->occurs_max = (yyvsp[(3) - (6)]) ? cb_get_int ((yyvsp[(3) - (6)])) : cb_get_int ((yyvsp[(2) - (6)]));
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 4239 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 4249 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	if (current_field->depending && !((yyvsp[(3) - (7)]))) {
		cb_verify (cb_odo_without_to, "ODO without TO clause");
	}
	current_field->occurs_min = (yyvsp[(3) - (7)]) ? cb_get_int ((yyvsp[(2) - (7)])) : 1;
	current_field->occurs_max = (yyvsp[(3) - (7)]) ? cb_get_int ((yyvsp[(3) - (7)])) : cb_get_int ((yyvsp[(2) - (7)]));
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
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 4270 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_7, &check_pic_duplicate);
	current_field->occurs_min = (yyvsp[(4) - (8)]) ? cb_get_int ((yyvsp[(4) - (8)])) : 0;
	PENDING("OCCURS with DYNAMIC capacity");
	current_field->occurs_max = (yyvsp[(5) - (8)]) ? cb_get_int ((yyvsp[(5) - (8)])) : 0;
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
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 4290 "parser.y"
    { (yyval) = NULL; }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 4291 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 4295 "parser.y"
    { (yyval) = NULL; }
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 4296 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 4301 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 4308 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 4316 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 4323 "parser.y"
    {
	if ((yyvsp[(1) - (1)])) {
		cb_tree		l;
		struct cb_key	*keys;
		int		i;
		int		nkeys;

		l = (yyvsp[(1) - (1)]);
		nkeys = cb_list_length ((yyvsp[(1) - (1)]));
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
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 4346 "parser.y"
    { (yyval) = NULL; }
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 4349 "parser.y"
    {
	cb_tree l;

	for (l = (yyvsp[(5) - (5)]); l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[(2) - (5)]);
		if (qualifier && !CB_REFERENCE(CB_VALUE(l))->chain &&
		    strcasecmp (CB_NAME(CB_VALUE(l)), CB_NAME(qualifier))) {
			CB_REFERENCE(CB_VALUE(l))->chain = qualifier;
		}
	}
	(yyval) = cb_list_append ((yyvsp[(1) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 4364 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 4365 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 4370 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 4376 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 4378 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 4383 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 4394 "parser.y"
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 4405 "parser.y"
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 4415 "parser.y"
    {
	/* Stay quiet on this
	PENDING ("SYNCHRONIZED RIGHT");
	*/
  }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 4427 "parser.y"
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 4438 "parser.y"
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
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 4466 "parser.y"
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 4474 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 4475 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 4479 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 4480 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 4485 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 4498 "parser.y"
    {
	check_repeated ("RENAMES", SYN_CLAUSE_13, &check_pic_duplicate);
	if (cb_ref ((yyvsp[(2) - (2)])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[(2) - (2)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(2) - (2)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[(2) - (2)])));
			current_field->pic = current_field->redefines->pic;
		}
	}
  }
    break;

  case 505:
/* Line 1792 of yacc.c  */
#line 4511 "parser.y"
    {
	check_repeated ("RENAMES", SYN_CLAUSE_13, &check_pic_duplicate);
	if (cb_ref ((yyvsp[(2) - (4)])) != cb_error_node && cb_ref ((yyvsp[(4) - (4)])) != cb_error_node) {
		if (CB_FIELD (cb_ref ((yyvsp[(2) - (4)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(2) - (4)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else if (CB_FIELD (cb_ref ((yyvsp[(4) - (4)])))->level == 01 ||
		    CB_FIELD (cb_ref ((yyvsp[(4) - (4)])))->level > 50) {
			cb_error (_("RENAMES may not reference a level 01 or > 50"));
		} else {
			current_field->redefines = CB_FIELD (cb_ref ((yyvsp[(2) - (4)])));
			current_field->rename_thru = CB_FIELD (cb_ref ((yyvsp[(4) - (4)])));
		}
	}
  }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 4532 "parser.y"
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 507:
/* Line 1792 of yacc.c  */
#line 4541 "parser.y"
    {
	check_repeated ("ANY", SYN_CLAUSE_14, &check_pic_duplicate);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 4556 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 4565 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 4577 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 4583 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 4594 "parser.y"
    {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  }
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 4612 "parser.y"
    {
	if (CB_INVALID_TREE ((yyvsp[(2) - (2)]))) {
		YYERROR;
	} else {
		current_field = NULL;
		control_field = NULL;
		description_field = NULL;
		current_report = CB_REPORT (cb_ref ((yyvsp[(2) - (2)])));
	}
	check_duplicate = 0;
  }
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 4625 "parser.y"
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
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 4643 "parser.y"
    {
	yyerrok;
  }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 4650 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 4656 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 4667 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 4680 "parser.y"
    {
      current_report->control_final = 1;
  }
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 4692 "parser.y"
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), current_report->controls);
  }
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 4703 "parser.y"
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
    break;

  case 537:
/* Line 1792 of yacc.c  */
#line 4742 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (1)]))) {
		current_report->lines = cb_get_int ((yyvsp[(1) - (1)]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 538:
/* Line 1792 of yacc.c  */
#line 4752 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (2)]))) {
		current_report->lines = cb_get_int ((yyvsp[(1) - (2)]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[(1) - (2)]);
	}
  }
    break;

  case 539:
/* Line 1792 of yacc.c  */
#line 4762 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (4)]))) {
		current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[(1) - (4)]);
	}
	check_repeated ("LINE LIMIT", SYN_CLAUSE_25, &check_duplicate);
	if (CB_LITERAL_P ((yyvsp[(3) - (4)]))) {
		current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
	} else {
		current_report->t_columns = (yyvsp[(3) - (4)]);
	}
  }
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 4796 "parser.y"
    {
	check_repeated ("LINE LIMIT", SYN_CLAUSE_25, &check_duplicate);
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->columns = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_columns = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 4808 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_heading = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 4819 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_first_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 4830 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_control = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 4841 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 554:
/* Line 1792 of yacc.c  */
#line 4852 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_footing = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 557:
/* Line 1792 of yacc.c  */
#line 4867 "parser.y"
    {
	cb_tree	x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
	check_pic_duplicate = 0;
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	}

	current_field = CB_FIELD (x);
	if (!description_field) {
		description_field = current_field;
	}
  }
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 4912 "parser.y"
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 4919 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 4923 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 4929 "parser.y"
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 4936 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 4940 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 4946 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 4950 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 4955 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (3)]);
      current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 4961 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 4967 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 4971 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 4976 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 4980 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_flag |= COB_REPORT_ALL;
  }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 4988 "parser.y"
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 4995 "parser.y"
    {
	if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int((yyvsp[(1) - (1)]));
  }
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 5004 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 5009 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 5014 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
    break;

  case 598:
/* Line 1792 of yacc.c  */
#line 5027 "parser.y"
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->report_sum_list = (yyvsp[(3) - (4)]);
	build_sum_counter( current_report, current_field);
  }
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 5037 "parser.y"
    {
      current_field->report_sum_upon = (yyvsp[(2) - (2)]);
  }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 5044 "parser.y"
    {
      current_field->report_reset = (yyvsp[(1) - (1)]);
  }
    break;

  case 603:
/* Line 1792 of yacc.c  */
#line 5048 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 5055 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_when = (yyvsp[(3) - (3)]);
  }
    break;

  case 605:
/* Line 1792 of yacc.c  */
#line 5060 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
  }
    break;

  case 606:
/* Line 1792 of yacc.c  */
#line 5066 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 607:
/* Line 1792 of yacc.c  */
#line 5073 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
  }
    break;

  case 608:
/* Line 1792 of yacc.c  */
#line 5079 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 609:
/* Line 1792 of yacc.c  */
#line 5089 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
  }
    break;

  case 610:
/* Line 1792 of yacc.c  */
#line 5093 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_NEGATE;
  }
    break;

  case 613:
/* Line 1792 of yacc.c  */
#line 5105 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 614:
/* Line 1792 of yacc.c  */
#line 5109 "parser.y"
    {
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 617:
/* Line 1792 of yacc.c  */
#line 5121 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_LINE;
  }
    break;

  case 621:
/* Line 1792 of yacc.c  */
#line 5137 "parser.y"
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
    break;

  case 622:
/* Line 1792 of yacc.c  */
#line 5143 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 623:
/* Line 1792 of yacc.c  */
#line 5147 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_LINE_PLUS;
	current_field->report_line = cb_get_int((yyvsp[(2) - (2)]));
	if((yyvsp[(2) - (2)]) != cb_int0
	&& (yyvsp[(2) - (2)]) != cb_int1) {
		if (CB_LITERAL ((yyvsp[(2) - (2)]))->sign < 0
		|| current_field->report_line < 0) {
			cb_error (_("Positive Integer value expected"));
		}
	}
	if(current_field->report_line == 0) {
		cb_warning (_("LINE PLUS 0 not implemented"));
	}
  }
    break;

  case 624:
/* Line 1792 of yacc.c  */
#line 5162 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_LINE_PLUS;
	current_field->report_line = cb_get_int((yyvsp[(2) - (2)]));
	if((yyvsp[(2) - (2)]) != cb_int0
	&& (yyvsp[(2) - (2)]) != cb_int1) {
		if (CB_LITERAL ((yyvsp[(2) - (2)]))->sign < 0
		|| current_field->report_line < 0) {
			cb_error (_("Positive Integer value expected"));
		}
	}
	if(current_field->report_line == 0) {
		cb_warning (_("LINE PLUS 0 not implemented"));
	}
  }
    break;

  case 628:
/* Line 1792 of yacc.c  */
#line 5185 "parser.y"
    {
	current_field->report_line = cb_get_int((yyvsp[(1) - (1)]));
	if((yyvsp[(1) - (1)]) != cb_int0) {
		if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
			current_field->report_flag |= COB_REPORT_LINE_PLUS;
		} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0
		|| current_field->report_line < 0) {
			cb_error (_("Positive Integer value expected"));
			current_field->report_line = 1;
			current_field->report_flag |= COB_REPORT_LINE_PLUS;
		}
	}
  }
    break;

  case 629:
/* Line 1792 of yacc.c  */
#line 5211 "parser.y"
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
    break;

  case 633:
/* Line 1792 of yacc.c  */
#line 5235 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_LEFT;
  }
    break;

  case 634:
/* Line 1792 of yacc.c  */
#line 5239 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_RIGHT;
  }
    break;

  case 635:
/* Line 1792 of yacc.c  */
#line 5243 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_CENTER;
  }
    break;

  case 636:
/* Line 1792 of yacc.c  */
#line 5250 "parser.y"
    {
	int colnum;
	colnum = cb_get_int ((yyvsp[(2) - (2)]));
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
    break;

  case 640:
/* Line 1792 of yacc.c  */
#line 5279 "parser.y"
    {
	int colnum;
	colnum = cb_get_int ((yyvsp[(1) - (1)]));
	if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
		if(current_field->parent
		&& current_field->parent->children == current_field) {
			cb_warning (_("PLUS is ignored on first field of line"));
		} else {
			current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
		}
	}
	if((yyvsp[(1) - (1)]) != cb_int1
	&& (yyvsp[(1) - (1)]) != cb_int0) {
		if (colnum <= 0
		|| CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0) {
			cb_error (_("Invalid COLUMN integer; Must be > 0"));
			colnum = 0;
			(yyval) = cb_int0;
		} else if(colnum <= current_field->report_column) {
			cb_warning (_("COLUMN numbers should increase"));
		}
		current_field->report_column_list = 
				cb_list_append (current_field->report_column_list, CB_LIST_INIT ((yyvsp[(1) - (1)])));
	}
	if(current_field->report_column == 0)
		current_field->report_column = colnum;
	current_field->report_num_col++;
  }
    break;

  case 641:
/* Line 1792 of yacc.c  */
#line 5311 "parser.y"
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->report_source = (yyvsp[(3) - (4)]);
  }
    break;

  case 642:
/* Line 1792 of yacc.c  */
#line 5319 "parser.y"
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
    break;

  case 643:
/* Line 1792 of yacc.c  */
#line 5327 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
    break;

  case 645:
/* Line 1792 of yacc.c  */
#line 5336 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 646:
/* Line 1792 of yacc.c  */
#line 5343 "parser.y"
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
    break;

  case 652:
/* Line 1792 of yacc.c  */
#line 5369 "parser.y"
    {
	cb_tree	x;
	int	flags;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
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
    break;

  case 653:
/* Line 1792 of yacc.c  */
#line 5400 "parser.y"
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
    break;

  case 654:
/* Line 1792 of yacc.c  */
#line 5426 "parser.y"
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
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
    break;

  case 657:
/* Line 1792 of yacc.c  */
#line 5449 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 658:
/* Line 1792 of yacc.c  */
#line 5453 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 659:
/* Line 1792 of yacc.c  */
#line 5457 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 660:
/* Line 1792 of yacc.c  */
#line 5461 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 661:
/* Line 1792 of yacc.c  */
#line 5465 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 662:
/* Line 1792 of yacc.c  */
#line 5469 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 663:
/* Line 1792 of yacc.c  */
#line 5473 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 664:
/* Line 1792 of yacc.c  */
#line 5477 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 665:
/* Line 1792 of yacc.c  */
#line 5481 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 666:
/* Line 1792 of yacc.c  */
#line 5485 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 667:
/* Line 1792 of yacc.c  */
#line 5489 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 668:
/* Line 1792 of yacc.c  */
#line 5493 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 669:
/* Line 1792 of yacc.c  */
#line 5497 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 670:
/* Line 1792 of yacc.c  */
#line 5501 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 671:
/* Line 1792 of yacc.c  */
#line 5505 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 672:
/* Line 1792 of yacc.c  */
#line 5509 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 673:
/* Line 1792 of yacc.c  */
#line 5513 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 674:
/* Line 1792 of yacc.c  */
#line 5518 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 675:
/* Line 1792 of yacc.c  */
#line 5522 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 676:
/* Line 1792 of yacc.c  */
#line 5526 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 677:
/* Line 1792 of yacc.c  */
#line 5531 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 678:
/* Line 1792 of yacc.c  */
#line 5536 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 679:
/* Line 1792 of yacc.c  */
#line 5541 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 688:
/* Line 1792 of yacc.c  */
#line 5554 "parser.y"
    {
	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 689:
/* Line 1792 of yacc.c  */
#line 5561 "parser.y"
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 690:
/* Line 1792 of yacc.c  */
#line 5566 "parser.y"
    {
	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 695:
/* Line 1792 of yacc.c  */
#line 5585 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 696:
/* Line 1792 of yacc.c  */
#line 5589 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 697:
/* Line 1792 of yacc.c  */
#line 5593 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 698:
/* Line 1792 of yacc.c  */
#line 5600 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 699:
/* Line 1792 of yacc.c  */
#line 5604 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 700:
/* Line 1792 of yacc.c  */
#line 5608 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 701:
/* Line 1792 of yacc.c  */
#line 5616 "parser.y"
    {
	check_repeated ("OCCURS", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 702:
/* Line 1792 of yacc.c  */
#line 5627 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 704:
/* Line 1792 of yacc.c  */
#line 5636 "parser.y"
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
    break;

  case 705:
/* Line 1792 of yacc.c  */
#line 5646 "parser.y"
    {
	if (current_program->flag_main && !current_program->flag_chained && (yyvsp[(3) - (7)])) {
		cb_error (_("Executable program requested but PROCEDURE/ENTRY has USING clause"));
	}
	/* Main entry point */
	emit_entry (current_program->program_id, 0, (yyvsp[(3) - (7)]));
	current_program->num_proc_params = cb_list_length ((yyvsp[(3) - (7)]));
	if (current_program->source_name) {
		emit_entry (current_program->source_name, 1, (yyvsp[(3) - (7)]));
	}
  }
    break;

  case 706:
/* Line 1792 of yacc.c  */
#line 5658 "parser.y"
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
    break;

  case 707:
/* Line 1792 of yacc.c  */
#line 5673 "parser.y"
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
    break;

  case 709:
/* Line 1792 of yacc.c  */
#line 5706 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 710:
/* Line 1792 of yacc.c  */
#line 5710 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 711:
/* Line 1792 of yacc.c  */
#line 5715 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 712:
/* Line 1792 of yacc.c  */
#line 5723 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 713:
/* Line 1792 of yacc.c  */
#line 5732 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 714:
/* Line 1792 of yacc.c  */
#line 5742 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 715:
/* Line 1792 of yacc.c  */
#line 5744 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 716:
/* Line 1792 of yacc.c  */
#line 5749 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 718:
/* Line 1792 of yacc.c  */
#line 5758 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 719:
/* Line 1792 of yacc.c  */
#line 5762 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 721:
/* Line 1792 of yacc.c  */
#line 5774 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 722:
/* Line 1792 of yacc.c  */
#line 5782 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 723:
/* Line 1792 of yacc.c  */
#line 5790 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 724:
/* Line 1792 of yacc.c  */
#line 5798 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(4) - (4)]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(4) - (4)]))->size != 1) {
		cb_error_x ((yyvsp[(4) - (4)]), _("Invalid value for SIZE"));
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
			cb_error_x ((yyvsp[(4) - (4)]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
    break;

  case 725:
/* Line 1792 of yacc.c  */
#line 5827 "parser.y"
    {
	unsigned char *s = CB_LITERAL ((yyvsp[(3) - (3)]))->data;

	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else if (CB_LITERAL ((yyvsp[(3) - (3)]))->size != 1) {
		cb_error_x ((yyvsp[(3) - (3)]), _("Invalid value for SIZE"));
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
			cb_error_x ((yyvsp[(3) - (3)]), _("Invalid value for SIZE"));
			break;
		}
	}
  }
    break;

  case 727:
/* Line 1792 of yacc.c  */
#line 5860 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 728:
/* Line 1792 of yacc.c  */
#line 5869 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 729:
/* Line 1792 of yacc.c  */
#line 5875 "parser.y"
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[(2) - (2)])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[(2) - (2)]));
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
			current_program->returning = (yyvsp[(2) - (2)]);
		}
	}
  }
    break;

  case 731:
/* Line 1792 of yacc.c  */
#line 5903 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 732:
/* Line 1792 of yacc.c  */
#line 5909 "parser.y"
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
    break;

  case 737:
/* Line 1792 of yacc.c  */
#line 5947 "parser.y"
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
    break;

  case 739:
/* Line 1792 of yacc.c  */
#line 5965 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 740:
/* Line 1792 of yacc.c  */
#line 5975 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (4)]), 0) == cb_error_node) {
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
	current_section = CB_LABEL (cb_build_label ((yyvsp[(1) - (4)]), NULL));
	if ((yyvsp[(3) - (4)])) {
		current_section->segment = cb_get_int ((yyvsp[(3) - (4)]));
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
    break;

  case 741:
/* Line 1792 of yacc.c  */
#line 6019 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 744:
/* Line 1792 of yacc.c  */
#line 6030 "parser.y"
    {
	cb_tree label;

	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (2)]), 1) == cb_error_node) {
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
	current_paragraph = CB_LABEL (cb_build_label ((yyvsp[(1) - (2)]), current_section));
	current_paragraph->flag_declaratives =!! in_declaratives;
	current_paragraph->flag_skip_label = !!skip_statements;
	current_paragraph->flag_real_label = !in_debugging;
	current_paragraph->segment = current_section->segment;
	CB_TREE (current_paragraph)->source_file = cb_source_file;
	CB_TREE (current_paragraph)->source_line = cb_source_line;
	emit_statement (CB_TREE (current_paragraph));
  }
    break;

  case 745:
/* Line 1792 of yacc.c  */
#line 6078 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
	}
	YYERROR;
  }
    break;

  case 746:
/* Line 1792 of yacc.c  */
#line 6090 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 747:
/* Line 1792 of yacc.c  */
#line 6094 "parser.y"
    {
	if (in_declaratives) {
		cb_error (_("SECTION segment invalid within DECLARATIVE"));
	}
	if (cb_verify (cb_section_segments, "SECTION segment")) {
		current_program->flag_segments = 1;
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 748:
/* Line 1792 of yacc.c  */
#line 6112 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 749:
/* Line 1792 of yacc.c  */
#line 6117 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 750:
/* Line 1792 of yacc.c  */
#line 6122 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 751:
/* Line 1792 of yacc.c  */
#line 6130 "parser.y"
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
    break;

  case 752:
/* Line 1792 of yacc.c  */
#line 6157 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 753:
/* Line 1792 of yacc.c  */
#line 6161 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 803:
/* Line 1792 of yacc.c  */
#line 6217 "parser.y"
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
    break;

  case 804:
/* Line 1792 of yacc.c  */
#line 6231 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 805:
/* Line 1792 of yacc.c  */
#line 6242 "parser.y"
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}

  }
    break;

  case 807:
/* Line 1792 of yacc.c  */
#line 6259 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 808:
/* Line 1792 of yacc.c  */
#line 6264 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 809:
/* Line 1792 of yacc.c  */
#line 6268 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 810:
/* Line 1792 of yacc.c  */
#line 6272 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 811:
/* Line 1792 of yacc.c  */
#line 6277 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 812:
/* Line 1792 of yacc.c  */
#line 6282 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 813:
/* Line 1792 of yacc.c  */
#line 6287 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 814:
/* Line 1792 of yacc.c  */
#line 6292 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 815:
/* Line 1792 of yacc.c  */
#line 6296 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 816:
/* Line 1792 of yacc.c  */
#line 6300 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 817:
/* Line 1792 of yacc.c  */
#line 6304 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 818:
/* Line 1792 of yacc.c  */
#line 6308 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 819:
/* Line 1792 of yacc.c  */
#line 6313 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 820:
/* Line 1792 of yacc.c  */
#line 6317 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 821:
/* Line 1792 of yacc.c  */
#line 6321 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 822:
/* Line 1792 of yacc.c  */
#line 6325 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 823:
/* Line 1792 of yacc.c  */
#line 6329 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 824:
/* Line 1792 of yacc.c  */
#line 6333 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 825:
/* Line 1792 of yacc.c  */
#line 6337 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 827:
/* Line 1792 of yacc.c  */
#line 6345 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 830:
/* Line 1792 of yacc.c  */
#line 6356 "parser.y"
    { (yyval) = NULL; }
    break;

  case 831:
/* Line 1792 of yacc.c  */
#line 6357 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 832:
/* Line 1792 of yacc.c  */
#line 6361 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 833:
/* Line 1792 of yacc.c  */
#line 6362 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 834:
/* Line 1792 of yacc.c  */
#line 6363 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 835:
/* Line 1792 of yacc.c  */
#line 6364 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 836:
/* Line 1792 of yacc.c  */
#line 6365 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 837:
/* Line 1792 of yacc.c  */
#line 6369 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 838:
/* Line 1792 of yacc.c  */
#line 6373 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 839:
/* Line 1792 of yacc.c  */
#line 6374 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 843:
/* Line 1792 of yacc.c  */
#line 6383 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 848:
/* Line 1792 of yacc.c  */
#line 6399 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 849:
/* Line 1792 of yacc.c  */
#line 6403 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 850:
/* Line 1792 of yacc.c  */
#line 6409 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 851:
/* Line 1792 of yacc.c  */
#line 6413 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 852:
/* Line 1792 of yacc.c  */
#line 6417 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 853:
/* Line 1792 of yacc.c  */
#line 6421 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 854:
/* Line 1792 of yacc.c  */
#line 6425 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 855:
/* Line 1792 of yacc.c  */
#line 6429 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 856:
/* Line 1792 of yacc.c  */
#line 6433 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 857:
/* Line 1792 of yacc.c  */
#line 6437 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 858:
/* Line 1792 of yacc.c  */
#line 6441 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 859:
/* Line 1792 of yacc.c  */
#line 6445 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 860:
/* Line 1792 of yacc.c  */
#line 6449 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  }
    break;

  case 861:
/* Line 1792 of yacc.c  */
#line 6453 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 862:
/* Line 1792 of yacc.c  */
#line 6457 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 863:
/* Line 1792 of yacc.c  */
#line 6461 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 864:
/* Line 1792 of yacc.c  */
#line 6465 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 865:
/* Line 1792 of yacc.c  */
#line 6469 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 866:
/* Line 1792 of yacc.c  */
#line 6473 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 867:
/* Line 1792 of yacc.c  */
#line 6479 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 868:
/* Line 1792 of yacc.c  */
#line 6483 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 869:
/* Line 1792 of yacc.c  */
#line 6487 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 870:
/* Line 1792 of yacc.c  */
#line 6491 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 871:
/* Line 1792 of yacc.c  */
#line 6495 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 872:
/* Line 1792 of yacc.c  */
#line 6499 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 873:
/* Line 1792 of yacc.c  */
#line 6503 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  }
    break;

  case 876:
/* Line 1792 of yacc.c  */
#line 6515 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 877:
/* Line 1792 of yacc.c  */
#line 6519 "parser.y"
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
    break;

  case 878:
/* Line 1792 of yacc.c  */
#line 6536 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 880:
/* Line 1792 of yacc.c  */
#line 6545 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 881:
/* Line 1792 of yacc.c  */
#line 6549 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 882:
/* Line 1792 of yacc.c  */
#line 6553 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 884:
/* Line 1792 of yacc.c  */
#line 6560 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 885:
/* Line 1792 of yacc.c  */
#line 6567 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 886:
/* Line 1792 of yacc.c  */
#line 6571 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 887:
/* Line 1792 of yacc.c  */
#line 6581 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 889:
/* Line 1792 of yacc.c  */
#line 6590 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 890:
/* Line 1792 of yacc.c  */
#line 6594 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 891:
/* Line 1792 of yacc.c  */
#line 6605 "parser.y"
    { (yyval) = NULL; }
    break;

  case 892:
/* Line 1792 of yacc.c  */
#line 6606 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 893:
/* Line 1792 of yacc.c  */
#line 6614 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 897:
/* Line 1792 of yacc.c  */
#line 6628 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 900:
/* Line 1792 of yacc.c  */
#line 6640 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 902:
/* Line 1792 of yacc.c  */
#line 6655 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(2) - (6)]))) {
		cb_trim_program_id ((yyvsp[(2) - (6)]));
	}
	if (CB_LITERAL_P ((yyvsp[(2) - (6)])) &&
	    current_program->prog_type == CB_PROGRAM_TYPE &&
	    !current_program->flag_recursive &&
	    !strcmp ((const char *)(CB_LITERAL((yyvsp[(2) - (6)]))->data), current_program->orig_program_id)) {
		cb_warning_x ((yyvsp[(2) - (6)]), _("Recursive program call - assuming RECURSIVE attribute"));
		current_program->flag_recursive = 1;
	}
	cb_emit_call ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]), (yyvsp[(1) - (6)]));
  }
    break;

  case 903:
/* Line 1792 of yacc.c  */
#line 6672 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 904:
/* Line 1792 of yacc.c  */
#line 6677 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 905:
/* Line 1792 of yacc.c  */
#line 6682 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 906:
/* Line 1792 of yacc.c  */
#line 6687 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (CB_VALID_TREE (x)) {
		if (CB_SYSTEM_NAME(x)->token != CB_FEATURE_CONVENTION) {
			cb_error_x ((yyvsp[(1) - (1)]), _("Invalid mnemonic name"));
			(yyval) = NULL;
		} else {
			(yyval) = CB_SYSTEM_NAME(x)->value;
		}
	} else {
		(yyval) = NULL;
	}
	cobc_cs_check = 0;
  }
    break;

  case 907:
/* Line 1792 of yacc.c  */
#line 6707 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 908:
/* Line 1792 of yacc.c  */
#line 6711 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 909:
/* Line 1792 of yacc.c  */
#line 6716 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 910:
/* Line 1792 of yacc.c  */
#line 6727 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 911:
/* Line 1792 of yacc.c  */
#line 6729 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 912:
/* Line 1792 of yacc.c  */
#line 6734 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 913:
/* Line 1792 of yacc.c  */
#line 6742 "parser.y"
    {
	int	save_mode;

	save_mode = call_mode;
	if (call_mode != CB_CALL_BY_REFERENCE) {
		if (CB_FILE_P ((yyvsp[(3) - (3)])) || (CB_REFERENCE_P ((yyvsp[(3) - (3)])) &&
		    CB_FILE_P (CB_REFERENCE ((yyvsp[(3) - (3)]))->value))) {
			cb_error_x (CB_TREE (current_statement),
				    _("Invalid file name reference"));
		} else if (call_mode == CB_CALL_BY_VALUE) {
			if (cb_category_is_alpha ((yyvsp[(3) - (3)]))) {
				cb_warning_x ((yyvsp[(3) - (3)]),
					      _("BY CONTENT assumed for alphanumeric item"));
				save_mode = CB_CALL_BY_CONTENT;
			}
		}
	}
	(yyval) = CB_BUILD_PAIR (cb_int (save_mode), (yyvsp[(3) - (3)]));
	CB_SIZES ((yyval)) = size_mode;
	call_mode = save_mode;
  }
    break;

  case 915:
/* Line 1792 of yacc.c  */
#line 6768 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 916:
/* Line 1792 of yacc.c  */
#line 6772 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 917:
/* Line 1792 of yacc.c  */
#line 6781 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 918:
/* Line 1792 of yacc.c  */
#line 6793 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 919:
/* Line 1792 of yacc.c  */
#line 6797 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 6801 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 921:
/* Line 1792 of yacc.c  */
#line 6805 "parser.y"
    {
	struct cb_field	*f;

	if (cb_ref ((yyvsp[(4) - (4)])) != cb_error_node) {
		f = CB_FIELD_PTR ((yyvsp[(4) - (4)]));
		if (f->level != 1 && f->level != 77) {
			cb_error (_("RETURNING item must have level 01 or 77"));
			(yyval) = NULL;
		} else if (f->storage != CB_STORAGE_LINKAGE &&
			   !f->flag_item_based) {
			cb_error (_("RETURNING item is neither in LINKAGE SECTION nor is it BASED"));
			(yyval) = NULL;
		} else {
			(yyval) = cb_build_address ((yyvsp[(4) - (4)]));
		}
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 926:
/* Line 1792 of yacc.c  */
#line 6838 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 927:
/* Line 1792 of yacc.c  */
#line 6843 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 928:
/* Line 1792 of yacc.c  */
#line 6850 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 929:
/* Line 1792 of yacc.c  */
#line 6855 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 930:
/* Line 1792 of yacc.c  */
#line 6862 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 931:
/* Line 1792 of yacc.c  */
#line 6866 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 932:
/* Line 1792 of yacc.c  */
#line 6876 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 934:
/* Line 1792 of yacc.c  */
#line 6884 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 935:
/* Line 1792 of yacc.c  */
#line 6888 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 936:
/* Line 1792 of yacc.c  */
#line 6898 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 938:
/* Line 1792 of yacc.c  */
#line 6906 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 939:
/* Line 1792 of yacc.c  */
#line 6911 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 6918 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 941:
/* Line 1792 of yacc.c  */
#line 6919 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 942:
/* Line 1792 of yacc.c  */
#line 6920 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 6921 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 944:
/* Line 1792 of yacc.c  */
#line 6922 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 945:
/* Line 1792 of yacc.c  */
#line 6930 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 947:
/* Line 1792 of yacc.c  */
#line 6939 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 948:
/* Line 1792 of yacc.c  */
#line 6946 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 949:
/* Line 1792 of yacc.c  */
#line 6950 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 950:
/* Line 1792 of yacc.c  */
#line 6960 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 951:
/* Line 1792 of yacc.c  */
#line 6971 "parser.y"
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
    break;

  case 952:
/* Line 1792 of yacc.c  */
#line 6988 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 954:
/* Line 1792 of yacc.c  */
#line 6997 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (4)]));
  }
    break;

  case 956:
/* Line 1792 of yacc.c  */
#line 7005 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 957:
/* Line 1792 of yacc.c  */
#line 7010 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 958:
/* Line 1792 of yacc.c  */
#line 7018 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 959:
/* Line 1792 of yacc.c  */
#line 7022 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 960:
/* Line 1792 of yacc.c  */
#line 7032 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 962:
/* Line 1792 of yacc.c  */
#line 7042 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 963:
/* Line 1792 of yacc.c  */
#line 7046 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 964:
/* Line 1792 of yacc.c  */
#line 7050 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 965:
/* Line 1792 of yacc.c  */
#line 7054 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 966:
/* Line 1792 of yacc.c  */
#line 7058 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 968:
/* Line 1792 of yacc.c  */
#line 7063 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 970:
/* Line 1792 of yacc.c  */
#line 7073 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 972:
/* Line 1792 of yacc.c  */
#line 7081 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 973:
/* Line 1792 of yacc.c  */
#line 7089 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 974:
/* Line 1792 of yacc.c  */
#line 7097 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 975:
/* Line 1792 of yacc.c  */
#line 7101 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 976:
/* Line 1792 of yacc.c  */
#line 7105 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 977:
/* Line 1792 of yacc.c  */
#line 7109 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 983:
/* Line 1792 of yacc.c  */
#line 7131 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 984:
/* Line 1792 of yacc.c  */
#line 7137 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 985:
/* Line 1792 of yacc.c  */
#line 7138 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7149 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 989:
/* Line 1792 of yacc.c  */
#line 7153 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7157 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 991:
/* Line 1792 of yacc.c  */
#line 7161 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7165 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7169 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 994:
/* Line 1792 of yacc.c  */
#line 7173 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 995:
/* Line 1792 of yacc.c  */
#line 7177 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 996:
/* Line 1792 of yacc.c  */
#line 7181 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 997:
/* Line 1792 of yacc.c  */
#line 7185 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 998:
/* Line 1792 of yacc.c  */
#line 7189 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 999:
/* Line 1792 of yacc.c  */
#line 7193 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 1000:
/* Line 1792 of yacc.c  */
#line 7197 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 1001:
/* Line 1792 of yacc.c  */
#line 7201 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 1002:
/* Line 1792 of yacc.c  */
#line 7205 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 1003:
/* Line 1792 of yacc.c  */
#line 7209 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 1004:
/* Line 1792 of yacc.c  */
#line 7216 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 1005:
/* Line 1792 of yacc.c  */
#line 7220 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 1006:
/* Line 1792 of yacc.c  */
#line 7230 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 1008:
/* Line 1792 of yacc.c  */
#line 7239 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 1009:
/* Line 1792 of yacc.c  */
#line 7243 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 1010:
/* Line 1792 of yacc.c  */
#line 7247 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 1011:
/* Line 1792 of yacc.c  */
#line 7251 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1012:
/* Line 1792 of yacc.c  */
#line 7255 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1013:
/* Line 1792 of yacc.c  */
#line 7262 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 1014:
/* Line 1792 of yacc.c  */
#line 7266 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 1015:
/* Line 1792 of yacc.c  */
#line 7276 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 1017:
/* Line 1792 of yacc.c  */
#line 7285 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "ENTRY");
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "ENTRY");
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1U)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1, (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1018:
/* Line 1792 of yacc.c  */
#line 7303 "parser.y"
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
    break;

  case 1020:
/* Line 1792 of yacc.c  */
#line 7327 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1021:
/* Line 1792 of yacc.c  */
#line 7334 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1022:
/* Line 1792 of yacc.c  */
#line 7336 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1023:
/* Line 1792 of yacc.c  */
#line 7341 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	eval_check[eval_level][eval_inc++] = (yyvsp[(1) - (1)]);
	if (eval_inc >= EVAL_DEPTH) {
		cb_error (_("Maximum evaluate depth exceeded (%d)"),
			  EVAL_DEPTH);
		eval_inc = 0;
		YYERROR;
	}
  }
    break;

  case 1024:
/* Line 1792 of yacc.c  */
#line 7352 "parser.y"
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
    break;

  case 1025:
/* Line 1792 of yacc.c  */
#line 7363 "parser.y"
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
    break;

  case 1026:
/* Line 1792 of yacc.c  */
#line 7377 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1027:
/* Line 1792 of yacc.c  */
#line 7381 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1028:
/* Line 1792 of yacc.c  */
#line 7387 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1029:
/* Line 1792 of yacc.c  */
#line 7389 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1030:
/* Line 1792 of yacc.c  */
#line 7395 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1031:
/* Line 1792 of yacc.c  */
#line 7404 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1032:
/* Line 1792 of yacc.c  */
#line 7412 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1033:
/* Line 1792 of yacc.c  */
#line 7418 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1034:
/* Line 1792 of yacc.c  */
#line 7425 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1035:
/* Line 1792 of yacc.c  */
#line 7427 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1036:
/* Line 1792 of yacc.c  */
#line 7432 "parser.y"
    {
	cb_tree	not0;
	cb_tree	e1;
	cb_tree	e2;
	cb_tree	x;
	cb_tree	parm1;

	not0 = cb_int0;
	e2 = (yyvsp[(2) - (2)]);
	x = NULL;
	parm1 = (yyvsp[(1) - (2)]);
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
    break;

  case 1037:
/* Line 1792 of yacc.c  */
#line 7493 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1038:
/* Line 1792 of yacc.c  */
#line 7494 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1039:
/* Line 1792 of yacc.c  */
#line 7495 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1040:
/* Line 1792 of yacc.c  */
#line 7499 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1041:
/* Line 1792 of yacc.c  */
#line 7500 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1042:
/* Line 1792 of yacc.c  */
#line 7505 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1043:
/* Line 1792 of yacc.c  */
#line 7509 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1044:
/* Line 1792 of yacc.c  */
#line 7519 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1045:
/* Line 1792 of yacc.c  */
#line 7524 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1047:
/* Line 1792 of yacc.c  */
#line 7532 "parser.y"
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
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	current_statement->name = (const char *)"EXIT PROGRAM";
	cb_emit_exit (0);
  }
    break;

  case 1048:
/* Line 1792 of yacc.c  */
#line 7553 "parser.y"
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
    break;

  case 1049:
/* Line 1792 of yacc.c  */
#line 7567 "parser.y"
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
    break;

  case 1050:
/* Line 1792 of yacc.c  */
#line 7589 "parser.y"
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
    break;

  case 1051:
/* Line 1792 of yacc.c  */
#line 7611 "parser.y"
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
    break;

  case 1052:
/* Line 1792 of yacc.c  */
#line 7631 "parser.y"
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
    break;

  case 1053:
/* Line 1792 of yacc.c  */
#line 7653 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1054:
/* Line 1792 of yacc.c  */
#line 7654 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1055:
/* Line 1792 of yacc.c  */
#line 7662 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1057:
/* Line 1792 of yacc.c  */
#line 7671 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1058:
/* Line 1792 of yacc.c  */
#line 7681 "parser.y"
    {
	begin_statement ("GENERATE", 0);
  }
    break;

  case 1060:
/* Line 1792 of yacc.c  */
#line 7690 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
		cb_emit_generate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1061:
/* Line 1792 of yacc.c  */
#line 7702 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1063:
/* Line 1792 of yacc.c  */
#line 7715 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1064:
/* Line 1792 of yacc.c  */
#line 7723 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1065:
/* Line 1792 of yacc.c  */
#line 7728 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1066:
/* Line 1792 of yacc.c  */
#line 7739 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1067:
/* Line 1792 of yacc.c  */
#line 7754 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 7763 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1070:
/* Line 1792 of yacc.c  */
#line 7767 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1071:
/* Line 1792 of yacc.c  */
#line 7771 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1072:
/* Line 1792 of yacc.c  */
#line 7778 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1073:
/* Line 1792 of yacc.c  */
#line 7782 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1074:
/* Line 1792 of yacc.c  */
#line 7792 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1076:
/* Line 1792 of yacc.c  */
#line 7801 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1077:
/* Line 1792 of yacc.c  */
#line 7807 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 7808 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 7812 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 7813 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1081:
/* Line 1792 of yacc.c  */
#line 7814 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1082:
/* Line 1792 of yacc.c  */
#line 7819 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1083:
/* Line 1792 of yacc.c  */
#line 7823 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1084:
/* Line 1792 of yacc.c  */
#line 7830 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1085:
/* Line 1792 of yacc.c  */
#line 7835 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1086:
/* Line 1792 of yacc.c  */
#line 7842 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1087:
/* Line 1792 of yacc.c  */
#line 7848 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1088:
/* Line 1792 of yacc.c  */
#line 7849 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1089:
/* Line 1792 of yacc.c  */
#line 7850 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1090:
/* Line 1792 of yacc.c  */
#line 7851 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1091:
/* Line 1792 of yacc.c  */
#line 7852 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 7853 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1093:
/* Line 1792 of yacc.c  */
#line 7854 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1094:
/* Line 1792 of yacc.c  */
#line 7859 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1095:
/* Line 1792 of yacc.c  */
#line 7863 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1096:
/* Line 1792 of yacc.c  */
#line 7872 "parser.y"
    {
	begin_statement ("INITIATE", 0);
  }
    break;

  case 1098:
/* Line 1792 of yacc.c  */
#line 7880 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1099:
/* Line 1792 of yacc.c  */
#line 7887 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1100:
/* Line 1792 of yacc.c  */
#line 7899 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1103:
/* Line 1792 of yacc.c  */
#line 7912 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1104:
/* Line 1792 of yacc.c  */
#line 7916 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1105:
/* Line 1792 of yacc.c  */
#line 7920 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 7936 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 7940 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1112:
/* Line 1792 of yacc.c  */
#line 7950 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1113:
/* Line 1792 of yacc.c  */
#line 7960 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1114:
/* Line 1792 of yacc.c  */
#line 7968 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 7969 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 7973 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1117:
/* Line 1792 of yacc.c  */
#line 7974 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1118:
/* Line 1792 of yacc.c  */
#line 7975 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1119:
/* Line 1792 of yacc.c  */
#line 7976 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 7977 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1121:
/* Line 1792 of yacc.c  */
#line 7978 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 7982 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1123:
/* Line 1792 of yacc.c  */
#line 7983 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1124:
/* Line 1792 of yacc.c  */
#line 7988 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 7993 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1126:
/* Line 1792 of yacc.c  */
#line 7999 "parser.y"
    { /* Nothing */ }
    break;

  case 1127:
/* Line 1792 of yacc.c  */
#line 8000 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1128:
/* Line 1792 of yacc.c  */
#line 8001 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1129:
/* Line 1792 of yacc.c  */
#line 8002 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1130:
/* Line 1792 of yacc.c  */
#line 8003 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1131:
/* Line 1792 of yacc.c  */
#line 8008 "parser.y"
    {
	switch (inspect_keyword) {
		case 1:
			(yyval) = cb_build_replacing_all ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		case 2:
			(yyval) = cb_build_replacing_leading ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		case 3:
			(yyval) = cb_build_replacing_first ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		case 4:
			(yyval) = cb_build_replacing_trailing ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
		default:
			cb_error_x (CB_TREE (current_statement),
				    _("INSPECT missing a keyword"));
			(yyval) = cb_build_replacing_all ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
			break;
	}
  }
    break;

  case 1132:
/* Line 1792 of yacc.c  */
#line 8035 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1133:
/* Line 1792 of yacc.c  */
#line 8039 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1134:
/* Line 1792 of yacc.c  */
#line 8046 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 8050 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1136:
/* Line 1792 of yacc.c  */
#line 8059 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1138:
/* Line 1792 of yacc.c  */
#line 8071 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1140:
/* Line 1792 of yacc.c  */
#line 8079 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1141:
/* Line 1792 of yacc.c  */
#line 8083 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1142:
/* Line 1792 of yacc.c  */
#line 8093 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8102 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8106 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8113 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1147:
/* Line 1792 of yacc.c  */
#line 8117 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1148:
/* Line 1792 of yacc.c  */
#line 8127 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1150:
/* Line 1792 of yacc.c  */
#line 8135 "parser.y"
    {
	cb_tree l;
	cb_tree x;
	cb_tree retry;
	int	retry_times, retry_seconds, retry_forever;

	if ((yyvsp[(2) - (5)]) && (yyvsp[(5) - (5)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[(5) - (5)])) {
		x = (yyvsp[(5) - (5)]);
	} else {
		x = (yyvsp[(2) - (5)]);
	}
	retry = current_statement->retry;
	retry_times = current_statement->flag_retry_times;
	retry_seconds = current_statement->flag_retry_seconds;
	retry_forever = current_statement->flag_retry_forever;

	for (l = (yyvsp[(4) - (5)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			current_statement->retry = retry;
			current_statement->flag_retry_times = retry_times;
			current_statement->flag_retry_seconds = retry_seconds;
			current_statement->flag_retry_forever = retry_forever;
			cb_emit_open (CB_VALUE (l), (yyvsp[(1) - (5)]), x);
		}
	}
  }
    break;

  case 1151:
/* Line 1792 of yacc.c  */
#line 8167 "parser.y"
    {
	cb_tree l;
	cb_tree x;
	cb_tree retry;
	int	retry_times, retry_seconds, retry_forever;

	if ((yyvsp[(3) - (6)]) && (yyvsp[(6) - (6)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[(6) - (6)])) {
		x = (yyvsp[(6) - (6)]);
	} else {
		x = (yyvsp[(3) - (6)]);
	}
	retry = current_statement->retry;
	retry_times = current_statement->flag_retry_times;
	retry_seconds = current_statement->flag_retry_seconds;
	retry_forever = current_statement->flag_retry_forever;

	for (l = (yyvsp[(5) - (6)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			current_statement->retry = retry;
			current_statement->flag_retry_times = retry_times;
			current_statement->flag_retry_seconds = retry_seconds;
			current_statement->flag_retry_forever = retry_forever;
			cb_emit_open (CB_VALUE (l), (yyvsp[(2) - (6)]), x);
		}
	}
  }
    break;

  case 1152:
/* Line 1792 of yacc.c  */
#line 8201 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1153:
/* Line 1792 of yacc.c  */
#line 8202 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8203 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8204 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1156:
/* Line 1792 of yacc.c  */
#line 8208 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8209 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1158:
/* Line 1792 of yacc.c  */
#line 8213 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8214 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8215 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1161:
/* Line 1792 of yacc.c  */
#line 8217 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1162:
/* Line 1792 of yacc.c  */
#line 8228 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
	cobc_cs_check = CB_CS_PERFORM;
  }
    break;

  case 1164:
/* Line 1792 of yacc.c  */
#line 8240 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8246 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1166:
/* Line 1792 of yacc.c  */
#line 8253 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1167:
/* Line 1792 of yacc.c  */
#line 8258 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1168:
/* Line 1792 of yacc.c  */
#line 8267 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1169:
/* Line 1792 of yacc.c  */
#line 8275 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1170:
/* Line 1792 of yacc.c  */
#line 8282 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1171:
/* Line 1792 of yacc.c  */
#line 8286 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
    break;

  case 1172:
/* Line 1792 of yacc.c  */
#line 8299 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8306 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1174:
/* Line 1792 of yacc.c  */
#line 8317 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1175:
/* Line 1792 of yacc.c  */
#line 8321 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1176:
/* Line 1792 of yacc.c  */
#line 8326 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1177:
/* Line 1792 of yacc.c  */
#line 8330 "parser.y"
    {
	cb_tree varying;

	if (!(yyvsp[(3) - (3)])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[(3) - (3)])));
		(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), varying);
	}
  }
    break;

  case 1178:
/* Line 1792 of yacc.c  */
#line 8341 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1179:
/* Line 1792 of yacc.c  */
#line 8347 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1180:
/* Line 1792 of yacc.c  */
#line 8348 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1181:
/* Line 1792 of yacc.c  */
#line 8352 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1182:
/* Line 1792 of yacc.c  */
#line 8353 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1183:
/* Line 1792 of yacc.c  */
#line 8356 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1184:
/* Line 1792 of yacc.c  */
#line 8358 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1185:
/* Line 1792 of yacc.c  */
#line 8363 "parser.y"
    {
	cb_tree		x;
	int		dataTypeOk = 1;

	if (cb_tree_category ((yyvsp[(1) - (7)])) != CB_CATEGORY_NUMERIC) {
		x = cb_ref ((yyvsp[(1) - (7)]));
		cb_error_x (CB_TREE (current_statement),
			_("PERFORM VARYING '%s' (Line %d of %s) is not a numeric field"), 
					cb_name (x),x->source_line, x->source_file);
		(yyval) = cb_int1;
		dataTypeOk = 0;
	} 
	if (cb_tree_category ((yyvsp[(3) - (7)])) != CB_CATEGORY_NUMERIC) {
		x = cb_ref ((yyvsp[(3) - (7)]));
		cb_error_x (CB_TREE (current_statement),
			_("PERFORM VARYING '%s' (Line %d of %s) is not a numeric field"), 
					cb_name (x),x->source_line, x->source_file);
		(yyval) = cb_int1;
		dataTypeOk = 0;
	} 
	if (cb_tree_category ((yyvsp[(5) - (7)])) != CB_CATEGORY_NUMERIC) {
		x = cb_ref ((yyvsp[(5) - (7)]));
		cb_error_x (CB_TREE (current_statement),
			_("PERFORM VARYING '%s' (Line %d of %s) is not a numeric field"), 
					cb_name (x),x->source_line, x->source_file);
		(yyval) = cb_int1;
		dataTypeOk = 0;
	} 
	if(dataTypeOk) {
		(yyval) = cb_build_perform_varying ((yyvsp[(1) - (7)]), (yyvsp[(3) - (7)]), (yyvsp[(5) - (7)]), (yyvsp[(7) - (7)]));
	}
  }
    break;

  case 1186:
/* Line 1792 of yacc.c  */
#line 8402 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1188:
/* Line 1792 of yacc.c  */
#line 8411 "parser.y"
    {
	cobc_cs_check = 0;
	  
	if (CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		struct cb_file	*cf;

		cf = CB_FILE(cb_ref ((yyvsp[(1) - (7)])));
		if ((yyvsp[(5) - (7)]) && (cf->lock_mode & COB_LOCK_AUTOMATIC)) {
			cb_error_x (CB_TREE (current_statement),
				    _("LOCK clause invalid with file LOCK AUTOMATIC"));
		} else if ((yyvsp[(6) - (7)]) &&
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
			cb_emit_read ((yyvsp[(1) - (7)]), (yyvsp[(2) - (7)]), (yyvsp[(4) - (7)]), (yyvsp[(6) - (7)]), (yyvsp[(5) - (7)]));
		}
	}
  }
    break;

  case 1189:
/* Line 1792 of yacc.c  */
#line 8439 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1190:
/* Line 1792 of yacc.c  */
#line 8440 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1191:
/* Line 1792 of yacc.c  */
#line 8445 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8449 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1193:
/* Line 1792 of yacc.c  */
#line 8453 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8457 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1195:
/* Line 1792 of yacc.c  */
#line 8464 "parser.y"
    {
	current_statement->flag_ignore_lock = 1;
  }
    break;

  case 1196:
/* Line 1792 of yacc.c  */
#line 8468 "parser.y"
    {
	current_statement->flag_ignore_lock = 1;
  }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8475 "parser.y"
    {
	current_statement->flag_advancing_lock = 1;
  }
    break;

  case 1201:
/* Line 1792 of yacc.c  */
#line 8488 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1202:
/* Line 1792 of yacc.c  */
#line 8496 "parser.y"
    {
	current_statement->retry = (yyvsp[(3) - (4)]);
	current_statement->flag_retry_times = 1;
  }
    break;

  case 1203:
/* Line 1792 of yacc.c  */
#line 8501 "parser.y"
    {
	current_statement->retry = (yyvsp[(3) - (4)]);
	current_statement->flag_retry_seconds = 1;
  }
    break;

  case 1204:
/* Line 1792 of yacc.c  */
#line 8506 "parser.y"
    {
	current_statement->retry = NULL;
	current_statement->flag_retry_forever = 1;
  }
    break;

  case 1207:
/* Line 1792 of yacc.c  */
#line 8519 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 8523 "parser.y"
    {
	(yyval) = cb_int5;
  }
    break;

  case 1209:
/* Line 1792 of yacc.c  */
#line 8527 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1210:
/* Line 1792 of yacc.c  */
#line 8533 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 8534 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1214:
/* Line 1792 of yacc.c  */
#line 8544 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1215:
/* Line 1792 of yacc.c  */
#line 8548 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1216:
/* Line 1792 of yacc.c  */
#line 8558 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1217:
/* Line 1792 of yacc.c  */
#line 8568 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1219:
/* Line 1792 of yacc.c  */
#line 8576 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1220:
/* Line 1792 of yacc.c  */
#line 8586 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1221:
/* Line 1792 of yacc.c  */
#line 8596 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1223:
/* Line 1792 of yacc.c  */
#line 8605 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1224:
/* Line 1792 of yacc.c  */
#line 8612 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1225:
/* Line 1792 of yacc.c  */
#line 8616 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1226:
/* Line 1792 of yacc.c  */
#line 8626 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1228:
/* Line 1792 of yacc.c  */
#line 8638 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
	start_debug = save_debug;
  }
    break;

  case 1229:
/* Line 1792 of yacc.c  */
#line 8646 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1231:
/* Line 1792 of yacc.c  */
#line 8654 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1232:
/* Line 1792 of yacc.c  */
#line 8658 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1233:
/* Line 1792 of yacc.c  */
#line 8665 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1234:
/* Line 1792 of yacc.c  */
#line 8669 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1235:
/* Line 1792 of yacc.c  */
#line 8679 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 8690 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1238:
/* Line 1792 of yacc.c  */
#line 8699 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1239:
/* Line 1792 of yacc.c  */
#line 8704 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1240:
/* Line 1792 of yacc.c  */
#line 8711 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1241:
/* Line 1792 of yacc.c  */
#line 8712 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1242:
/* Line 1792 of yacc.c  */
#line 8717 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1243:
/* Line 1792 of yacc.c  */
#line 8722 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1244:
/* Line 1792 of yacc.c  */
#line 8729 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 8733 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1246:
/* Line 1792 of yacc.c  */
#line 8741 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1247:
/* Line 1792 of yacc.c  */
#line 8748 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1248:
/* Line 1792 of yacc.c  */
#line 8752 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1249:
/* Line 1792 of yacc.c  */
#line 8762 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1250:
/* Line 1792 of yacc.c  */
#line 8769 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1257:
/* Line 1792 of yacc.c  */
#line 8784 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1258:
/* Line 1792 of yacc.c  */
#line 8785 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1259:
/* Line 1792 of yacc.c  */
#line 8789 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1260:
/* Line 1792 of yacc.c  */
#line 8790 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 8797 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1262:
/* Line 1792 of yacc.c  */
#line 8806 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1265:
/* Line 1792 of yacc.c  */
#line 8818 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1266:
/* Line 1792 of yacc.c  */
#line 8822 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1267:
/* Line 1792 of yacc.c  */
#line 8826 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1268:
/* Line 1792 of yacc.c  */
#line 8830 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1269:
/* Line 1792 of yacc.c  */
#line 8834 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1270:
/* Line 1792 of yacc.c  */
#line 8838 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1271:
/* Line 1792 of yacc.c  */
#line 8842 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1272:
/* Line 1792 of yacc.c  */
#line 8846 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1273:
/* Line 1792 of yacc.c  */
#line 8855 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1274:
/* Line 1792 of yacc.c  */
#line 8859 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1275:
/* Line 1792 of yacc.c  */
#line 8868 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1278:
/* Line 1792 of yacc.c  */
#line 8882 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1281:
/* Line 1792 of yacc.c  */
#line 8896 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1282:
/* Line 1792 of yacc.c  */
#line 8900 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1283:
/* Line 1792 of yacc.c  */
#line 8910 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1285:
/* Line 1792 of yacc.c  */
#line 8918 "parser.y"
    {
	cb_tree		x;

	x = cb_ref ((yyvsp[(1) - (4)]));
	if (CB_VALID_TREE (x)) {
		if (CB_INVALID_TREE ((yyvsp[(2) - (4)]))) {
			if (CB_FILE_P (x)) {
				cb_error (_("File sort requires KEY phrase"));
			} else {
				cb_error (_("Table sort without keys not implemented yet"));
			}
			(yyval) = NULL;
		} else {
			cb_emit_sort_init ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
			(yyval)= (yyvsp[(1) - (4)]);
		}
	} else {
		(yyval) = NULL;
	}
  }
    break;

  case 1286:
/* Line 1792 of yacc.c  */
#line 8939 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1287:
/* Line 1792 of yacc.c  */
#line 8948 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1288:
/* Line 1792 of yacc.c  */
#line 8953 "parser.y"
    {
	cb_tree l;
	cb_tree lparm;

	if ((yyvsp[(5) - (5)]) == NULL) {
		l = CB_LIST_INIT (NULL);
	} else {
		l = (yyvsp[(5) - (5)]);
	}
	lparm = l;
	for (; l; l = CB_CHAIN (l)) {
		CB_PURPOSE (l) = (yyvsp[(3) - (5)]);
	}
	(yyval) = cb_list_append ((yyvsp[(1) - (5)]), lparm);
  }
    break;

  case 1289:
/* Line 1792 of yacc.c  */
#line 8971 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1290:
/* Line 1792 of yacc.c  */
#line 8972 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1292:
/* Line 1792 of yacc.c  */
#line 8977 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1293:
/* Line 1792 of yacc.c  */
#line 8984 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1294:
/* Line 1792 of yacc.c  */
#line 8985 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 8990 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1296:
/* Line 1792 of yacc.c  */
#line 8996 "parser.y"
    {
	if ((yyvsp[(0) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(0) - (2)])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1297:
/* Line 1792 of yacc.c  */
#line 9006 "parser.y"
    {
	if ((yyvsp[(0) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(0) - (4)])))) {
			cb_error (_("INPUT PROCEDURE invalid with table SORT"));
		} else if (current_statement->flag_merge) {
			cb_error (_("INPUT PROCEDURE invalid with MERGE"));
		} else {
			cb_emit_sort_input ((yyvsp[(4) - (4)]));
		}
	}
  }
    break;

  case 1298:
/* Line 1792 of yacc.c  */
#line 9021 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1299:
/* Line 1792 of yacc.c  */
#line 9027 "parser.y"
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1300:
/* Line 1792 of yacc.c  */
#line 9037 "parser.y"
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[(4) - (4)]));
		}
	}
  }
    break;

  case 1301:
/* Line 1792 of yacc.c  */
#line 9053 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1303:
/* Line 1792 of yacc.c  */
#line 9063 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1304:
/* Line 1792 of yacc.c  */
#line 9075 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1305:
/* Line 1792 of yacc.c  */
#line 9079 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1306:
/* Line 1792 of yacc.c  */
#line 9086 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1307:
/* Line 1792 of yacc.c  */
#line 9090 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1308:
/* Line 1792 of yacc.c  */
#line 9095 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1309:
/* Line 1792 of yacc.c  */
#line 9100 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1310:
/* Line 1792 of yacc.c  */
#line 9107 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1311:
/* Line 1792 of yacc.c  */
#line 9108 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1312:
/* Line 1792 of yacc.c  */
#line 9109 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1313:
/* Line 1792 of yacc.c  */
#line 9110 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1314:
/* Line 1792 of yacc.c  */
#line 9111 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1315:
/* Line 1792 of yacc.c  */
#line 9112 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1316:
/* Line 1792 of yacc.c  */
#line 9117 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1319:
/* Line 1792 of yacc.c  */
#line 9130 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1320:
/* Line 1792 of yacc.c  */
#line 9134 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1321:
/* Line 1792 of yacc.c  */
#line 9144 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1322:
/* Line 1792 of yacc.c  */
#line 9148 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1323:
/* Line 1792 of yacc.c  */
#line 9154 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1324:
/* Line 1792 of yacc.c  */
#line 9166 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1325:
/* Line 1792 of yacc.c  */
#line 9170 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1326:
/* Line 1792 of yacc.c  */
#line 9174 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1327:
/* Line 1792 of yacc.c  */
#line 9182 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1328:
/* Line 1792 of yacc.c  */
#line 9193 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1329:
/* Line 1792 of yacc.c  */
#line 9197 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1330:
/* Line 1792 of yacc.c  */
#line 9203 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1331:
/* Line 1792 of yacc.c  */
#line 9204 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1332:
/* Line 1792 of yacc.c  */
#line 9205 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1333:
/* Line 1792 of yacc.c  */
#line 9206 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1334:
/* Line 1792 of yacc.c  */
#line 9213 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1336:
/* Line 1792 of yacc.c  */
#line 9222 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1337:
/* Line 1792 of yacc.c  */
#line 9228 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9229 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1339:
/* Line 1792 of yacc.c  */
#line 9233 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1340:
/* Line 1792 of yacc.c  */
#line 9234 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1341:
/* Line 1792 of yacc.c  */
#line 9235 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1342:
/* Line 1792 of yacc.c  */
#line 9239 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1343:
/* Line 1792 of yacc.c  */
#line 9240 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1344:
/* Line 1792 of yacc.c  */
#line 9245 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1345:
/* Line 1792 of yacc.c  */
#line 9249 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1346:
/* Line 1792 of yacc.c  */
#line 9259 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1348:
/* Line 1792 of yacc.c  */
#line 9268 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1349:
/* Line 1792 of yacc.c  */
#line 9272 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1350:
/* Line 1792 of yacc.c  */
#line 9276 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1351:
/* Line 1792 of yacc.c  */
#line 9283 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1352:
/* Line 1792 of yacc.c  */
#line 9287 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1353:
/* Line 1792 of yacc.c  */
#line 9297 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  }
    break;

  case 1356:
/* Line 1792 of yacc.c  */
#line 9315 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
  }
    break;

  case 1358:
/* Line 1792 of yacc.c  */
#line 9323 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1359:
/* Line 1792 of yacc.c  */
#line 9330 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
		cb_emit_terminate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1360:
/* Line 1792 of yacc.c  */
#line 9342 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1362:
/* Line 1792 of yacc.c  */
#line 9350 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1363:
/* Line 1792 of yacc.c  */
#line 9363 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1365:
/* Line 1792 of yacc.c  */
#line 9371 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (2)]))) {
		if (CB_FILE (cb_ref ((yyvsp[(1) - (2)])))->organization == COB_ORG_SORT) {
			cb_error_x (CB_TREE (current_statement),
				    _("UNLOCK invalid for SORT files"));
		} else {
			cb_emit_unlock ((yyvsp[(1) - (2)]));
		}
	}
  }
    break;

  case 1369:
/* Line 1792 of yacc.c  */
#line 9394 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1371:
/* Line 1792 of yacc.c  */
#line 9404 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1372:
/* Line 1792 of yacc.c  */
#line 9410 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1373:
/* Line 1792 of yacc.c  */
#line 9412 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1374:
/* Line 1792 of yacc.c  */
#line 9416 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1375:
/* Line 1792 of yacc.c  */
#line 9418 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1376:
/* Line 1792 of yacc.c  */
#line 9423 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1377:
/* Line 1792 of yacc.c  */
#line 9429 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1378:
/* Line 1792 of yacc.c  */
#line 9431 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1379:
/* Line 1792 of yacc.c  */
#line 9436 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1380:
/* Line 1792 of yacc.c  */
#line 9442 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1381:
/* Line 1792 of yacc.c  */
#line 9443 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1382:
/* Line 1792 of yacc.c  */
#line 9447 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1383:
/* Line 1792 of yacc.c  */
#line 9448 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1384:
/* Line 1792 of yacc.c  */
#line 9452 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1385:
/* Line 1792 of yacc.c  */
#line 9453 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1386:
/* Line 1792 of yacc.c  */
#line 9458 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1387:
/* Line 1792 of yacc.c  */
#line 9462 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1388:
/* Line 1792 of yacc.c  */
#line 9472 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1395:
/* Line 1792 of yacc.c  */
#line 9490 "parser.y"
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
    break;

  case 1396:
/* Line 1792 of yacc.c  */
#line 9515 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1397:
/* Line 1792 of yacc.c  */
#line 9519 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1398:
/* Line 1792 of yacc.c  */
#line 9531 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1399:
/* Line 1792 of yacc.c  */
#line 9541 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1400:
/* Line 1792 of yacc.c  */
#line 9546 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1401:
/* Line 1792 of yacc.c  */
#line 9551 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1402:
/* Line 1792 of yacc.c  */
#line 9556 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1403:
/* Line 1792 of yacc.c  */
#line 9564 "parser.y"
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
    break;

  case 1406:
/* Line 1792 of yacc.c  */
#line 9607 "parser.y"
    {
	cb_tree		l;
	cb_tree		x;
	cb_tree		z;

	if (current_program->flag_debugging) {
		CB_REFERENCE ((yyvsp[(1) - (1)]))->debug_section = current_section;
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_debug_code = 1;
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_all_debug = 0;
		z = CB_LIST_INIT ((yyvsp[(1) - (1)]));
		current_program->debug_list =
			cb_list_append (current_program->debug_list, z);
		/* Check backward refs to file/data names */
		/* Label refs will be checked later (forward/backward ref) */
		if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
			l = CB_VALUE(CB_WORD_ITEMS ((yyvsp[(1) - (1)])));
			switch (CB_TREE_TAG (l)) {
			case CB_TAG_FILE:
				CB_FILE (l)->debug_section = current_section;
				CB_FILE (l)->flag_fl_debug = 1;
				break;
			case CB_TAG_FIELD:
				{
					x = cb_ref((yyvsp[(1) - (1)]));
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
    break;

  case 1407:
/* Line 1792 of yacc.c  */
#line 9647 "parser.y"
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
    break;

  case 1408:
/* Line 1792 of yacc.c  */
#line 9657 "parser.y"
    {
	cb_tree		x;

	if (current_program->flag_debugging) {
		/* Reference must be a data item */
		x = cb_ref ((yyvsp[(3) - (3)]));
		if (CB_INVALID_TREE (x) || !CB_FIELD_P (x)) {
			cb_error (_("Invalid target for DEBUGGING ALL"));
		} else {
			needs_field_debug = 1;
			CB_FIELD (x)->debug_section = current_section;
			CB_FIELD (x)->flag_field_debug = 1;
			CB_FIELD (x)->flag_all_debug = 1;
			CB_REFERENCE ((yyvsp[(3) - (3)]))->debug_section = current_section;
			CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_debug_code = 1;
			CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_all_debug = 1;
			CB_CHAIN_PAIR (current_program->debug_list, x, (yyvsp[(3) - (3)]));
		}
	}
  }
    break;

  case 1413:
/* Line 1792 of yacc.c  */
#line 9687 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1414:
/* Line 1792 of yacc.c  */
#line 9696 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1415:
/* Line 1792 of yacc.c  */
#line 9702 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1416:
/* Line 1792 of yacc.c  */
#line 9712 "parser.y"
    {
	char wrk[80];
	cb_tree x;
	struct cb_field		*f;
	struct cb_report	*r;

	x = cb_ref ((yyvsp[(4) - (4)]));
	if (!CB_FIELD_P (x)) {
		cb_error_x ((yyvsp[(4) - (4)]), _("'%s' is not a report group"), CB_NAME ((yyvsp[(4) - (4)])));
		(yyval) = cb_error_node;
	} else {
		control_field = f = CB_FIELD (x);
		f->report_decl_id = current_section->id;
		if((r = f->report) != NULL) {
			r->has_declarative = 1;
		}
	}
	sprintf(wrk,"USE BEFORE REPORTING %s is l_%d",cb_name((yyvsp[(4) - (4)])),current_section->id);
	current_section->flag_real_label = 1;
	current_section->flag_declaratives = 1;
	current_section->flag_begin = 1;
	current_section->flag_return = 1;
	current_section->flag_declarative_exit = 1;
	current_section->flag_real_label = 1;
	current_section->flag_skip_label = 0;
	emit_statement (cb_build_comment (strdup(wrk)));
  }
    break;

  case 1417:
/* Line 1792 of yacc.c  */
#line 9743 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1420:
/* Line 1792 of yacc.c  */
#line 9759 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1422:
/* Line 1792 of yacc.c  */
#line 9771 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (6)]))) {
		cb_emit_write ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1423:
/* Line 1792 of yacc.c  */
#line 9780 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1424:
/* Line 1792 of yacc.c  */
#line 9781 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1425:
/* Line 1792 of yacc.c  */
#line 9786 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1426:
/* Line 1792 of yacc.c  */
#line 9790 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1427:
/* Line 1792 of yacc.c  */
#line 9794 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 9798 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1429:
/* Line 1792 of yacc.c  */
#line 9804 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1430:
/* Line 1792 of yacc.c  */
#line 9805 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1433:
/* Line 1792 of yacc.c  */
#line 9815 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1434:
/* Line 1792 of yacc.c  */
#line 9819 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1437:
/* Line 1792 of yacc.c  */
#line 9836 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1439:
/* Line 1792 of yacc.c  */
#line 9846 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1442:
/* Line 1792 of yacc.c  */
#line 9859 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1444:
/* Line 1792 of yacc.c  */
#line 9869 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1447:
/* Line 1792 of yacc.c  */
#line 9884 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1449:
/* Line 1792 of yacc.c  */
#line 9894 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1452:
/* Line 1792 of yacc.c  */
#line 9911 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1454:
/* Line 1792 of yacc.c  */
#line 9922 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1460:
/* Line 1792 of yacc.c  */
#line 9945 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 9954 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1465:
/* Line 1792 of yacc.c  */
#line 9971 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1466:
/* Line 1792 of yacc.c  */
#line 9980 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1469:
/* Line 1792 of yacc.c  */
#line 9997 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1471:
/* Line 1792 of yacc.c  */
#line 10007 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1472:
/* Line 1792 of yacc.c  */
#line 10017 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1473:
/* Line 1792 of yacc.c  */
#line 10021 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1474:
/* Line 1792 of yacc.c  */
#line 10031 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1475:
/* Line 1792 of yacc.c  */
#line 10038 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1476:
/* Line 1792 of yacc.c  */
#line 10044 "parser.y"
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
    break;

  case 1477:
/* Line 1792 of yacc.c  */
#line 10049 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1481:
/* Line 1792 of yacc.c  */
#line 10062 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1482:
/* Line 1792 of yacc.c  */
#line 10070 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1483:
/* Line 1792 of yacc.c  */
#line 10071 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1484:
/* Line 1792 of yacc.c  */
#line 10073 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1485:
/* Line 1792 of yacc.c  */
#line 10074 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1486:
/* Line 1792 of yacc.c  */
#line 10075 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1487:
/* Line 1792 of yacc.c  */
#line 10076 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1488:
/* Line 1792 of yacc.c  */
#line 10077 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 10079 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1490:
/* Line 1792 of yacc.c  */
#line 10080 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1491:
/* Line 1792 of yacc.c  */
#line 10081 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1492:
/* Line 1792 of yacc.c  */
#line 10082 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1493:
/* Line 1792 of yacc.c  */
#line 10083 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1494:
/* Line 1792 of yacc.c  */
#line 10084 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1495:
/* Line 1792 of yacc.c  */
#line 10086 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1496:
/* Line 1792 of yacc.c  */
#line 10087 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1497:
/* Line 1792 of yacc.c  */
#line 10088 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1498:
/* Line 1792 of yacc.c  */
#line 10090 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1499:
/* Line 1792 of yacc.c  */
#line 10091 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1500:
/* Line 1792 of yacc.c  */
#line 10092 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1501:
/* Line 1792 of yacc.c  */
#line 10093 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1502:
/* Line 1792 of yacc.c  */
#line 10094 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1503:
/* Line 1792 of yacc.c  */
#line 10097 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1504:
/* Line 1792 of yacc.c  */
#line 10098 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1513:
/* Line 1792 of yacc.c  */
#line 10128 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1514:
/* Line 1792 of yacc.c  */
#line 10132 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1518:
/* Line 1792 of yacc.c  */
#line 10143 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1519:
/* Line 1792 of yacc.c  */
#line 10144 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1520:
/* Line 1792 of yacc.c  */
#line 10145 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10149 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1522:
/* Line 1792 of yacc.c  */
#line 10150 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1523:
/* Line 1792 of yacc.c  */
#line 10151 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1524:
/* Line 1792 of yacc.c  */
#line 10156 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1525:
/* Line 1792 of yacc.c  */
#line 10159 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1526:
/* Line 1792 of yacc.c  */
#line 10163 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1527:
/* Line 1792 of yacc.c  */
#line 10164 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1528:
/* Line 1792 of yacc.c  */
#line 10165 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1529:
/* Line 1792 of yacc.c  */
#line 10168 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1530:
/* Line 1792 of yacc.c  */
#line 10169 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1531:
/* Line 1792 of yacc.c  */
#line 10180 "parser.y"
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
    break;

  case 1532:
/* Line 1792 of yacc.c  */
#line 10192 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1533:
/* Line 1792 of yacc.c  */
#line 10201 "parser.y"
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
    break;

  case 1534:
/* Line 1792 of yacc.c  */
#line 10217 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1535:
/* Line 1792 of yacc.c  */
#line 10226 "parser.y"
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
    break;

  case 1536:
/* Line 1792 of yacc.c  */
#line 10242 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1537:
/* Line 1792 of yacc.c  */
#line 10256 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1538:
/* Line 1792 of yacc.c  */
#line 10258 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1539:
/* Line 1792 of yacc.c  */
#line 10263 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1540:
/* Line 1792 of yacc.c  */
#line 10271 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1541:
/* Line 1792 of yacc.c  */
#line 10278 "parser.y"
    {
	cb_tree x;

	x = cb_ref ((yyvsp[(1) - (1)]));
	if (!CB_FIELD_P (x)) {
		(yyval) = cb_error_node;
	} else if (!CB_FIELD (x)->index_list) {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' not indexed"), cb_name ((yyvsp[(1) - (1)])));
		cb_error_x (x, _("'%s' defined here"), cb_name (x));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1542:
/* Line 1792 of yacc.c  */
#line 10298 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1543:
/* Line 1792 of yacc.c  */
#line 10302 "parser.y"
    {
	cb_tree		l;

	if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
		for (l = (yyvsp[(1) - (2)]); l; l = CB_CHAIN (l)) {
			if (CB_VALID_TREE (CB_VALUE (l)) &&
			    !strcasecmp (CB_NAME ((yyvsp[(2) - (2)])), CB_NAME (CB_VALUE (l)))) {
				cb_error_x ((yyvsp[(2) - (2)]), _("Multiple reference to '%s' "),
					    CB_NAME ((yyvsp[(2) - (2)])));
				break;
			}
		}
		if (!l) {
			(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 1544:
/* Line 1792 of yacc.c  */
#line 10323 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1545:
/* Line 1792 of yacc.c  */
#line 10364 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1546:
/* Line 1792 of yacc.c  */
#line 10377 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10379 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1548:
/* Line 1792 of yacc.c  */
#line 10383 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1549:
/* Line 1792 of yacc.c  */
#line 10389 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1550:
/* Line 1792 of yacc.c  */
#line 10391 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1551:
/* Line 1792 of yacc.c  */
#line 10396 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1554:
/* Line 1792 of yacc.c  */
#line 10410 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1555:
/* Line 1792 of yacc.c  */
#line 10417 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1556:
/* Line 1792 of yacc.c  */
#line 10427 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1557:
/* Line 1792 of yacc.c  */
#line 10428 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1558:
/* Line 1792 of yacc.c  */
#line 10433 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1559:
/* Line 1792 of yacc.c  */
#line 10441 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1560:
/* Line 1792 of yacc.c  */
#line 10449 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1561:
/* Line 1792 of yacc.c  */
#line 10453 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1562:
/* Line 1792 of yacc.c  */
#line 10460 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1565:
/* Line 1792 of yacc.c  */
#line 10476 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1566:
/* Line 1792 of yacc.c  */
#line 10490 "parser.y"
    {
	if (CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_duped || CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[(1) - (1)]))++;
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1567:
/* Line 1792 of yacc.c  */
#line 10507 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1568:
/* Line 1792 of yacc.c  */
#line 10511 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1571:
/* Line 1792 of yacc.c  */
#line 10520 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1572:
/* Line 1792 of yacc.c  */
#line 10527 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1573:
/* Line 1792 of yacc.c  */
#line 10531 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1578:
/* Line 1792 of yacc.c  */
#line 10542 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1579:
/* Line 1792 of yacc.c  */
#line 10546 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1580:
/* Line 1792 of yacc.c  */
#line 10550 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1581:
/* Line 1792 of yacc.c  */
#line 10554 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1582:
/* Line 1792 of yacc.c  */
#line 10558 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1583:
/* Line 1792 of yacc.c  */
#line 10562 "parser.y"
    {
	cb_tree		x;
	cb_tree		switch_id;

	x = cb_ref ((yyvsp[(1) - (1)]));
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
    break;

  case 1584:
/* Line 1792 of yacc.c  */
#line 10583 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1585:
/* Line 1792 of yacc.c  */
#line 10587 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1593:
/* Line 1792 of yacc.c  */
#line 10604 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1594:
/* Line 1792 of yacc.c  */
#line 10608 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1595:
/* Line 1792 of yacc.c  */
#line 10612 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1611:
/* Line 1792 of yacc.c  */
#line 10659 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1619:
/* Line 1792 of yacc.c  */
#line 10683 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1620:
/* Line 1792 of yacc.c  */
#line 10687 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1621:
/* Line 1792 of yacc.c  */
#line 10691 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 10692 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1623:
/* Line 1792 of yacc.c  */
#line 10696 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1624:
/* Line 1792 of yacc.c  */
#line 10701 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 10708 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1626:
/* Line 1792 of yacc.c  */
#line 10715 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1627:
/* Line 1792 of yacc.c  */
#line 10722 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1628:
/* Line 1792 of yacc.c  */
#line 10732 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1629:
/* Line 1792 of yacc.c  */
#line 10736 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1630:
/* Line 1792 of yacc.c  */
#line 10743 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (3)]))) {
		CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1631:
/* Line 1792 of yacc.c  */
#line 10753 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (2)]))) {
		CB_REFERENCE ((yyvsp[(1) - (2)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1632:
/* Line 1792 of yacc.c  */
#line 10763 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (2)]))) {
		CB_REFERENCE ((yyvsp[(1) - (2)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1633:
/* Line 1792 of yacc.c  */
#line 10773 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)]))) {
		CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1634:
/* Line 1792 of yacc.c  */
#line 10786 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1635:
/* Line 1792 of yacc.c  */
#line 10790 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1636:
/* Line 1792 of yacc.c  */
#line 10798 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1637:
/* Line 1792 of yacc.c  */
#line 10806 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1638:
/* Line 1792 of yacc.c  */
#line 10810 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1639:
/* Line 1792 of yacc.c  */
#line 10820 "parser.y"
    {
	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0 || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1640:
/* Line 1792 of yacc.c  */
#line 10835 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 1 || n > 256) {
			cb_error (_("Invalid SYMBOLIC integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1641:
/* Line 1792 of yacc.c  */
#line 10858 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) != CB_CATEGORY_NUMERIC) {
		cb_error (_("Integer value expected"));
		(yyval) = cb_int1;
	} else if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0 || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
		cb_error (_("Positive Integer value expected"));
		(yyval) = cb_int1;
	} else {
		n = cb_get_int ((yyvsp[(1) - (1)]));
		if (n < 0) {
			cb_error (_("Invalid integer"));
			(yyval) = cb_int1;
		} else {
			(yyval) = (yyvsp[(1) - (1)]);
		}
	}
  }
    break;

  case 1642:
/* Line 1792 of yacc.c  */
#line 10878 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1643:
/* Line 1792 of yacc.c  */
#line 10885 "parser.y"
    {
	int	n;

	if (cb_tree_category ((yyvsp[(1) - (1)])) == CB_CATEGORY_NUMERIC) {
		if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign || CB_LITERAL ((yyvsp[(1) - (1)]))->scale) {
			cb_error (_("Integer value expected"));
		} else {
			n = cb_get_int ((yyvsp[(1) - (1)]));
			if (n < 1 || n > 256) {
				cb_error (_("Invalid CLASS value"));
			}
		}
	}
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1644:
/* Line 1792 of yacc.c  */
#line 10900 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 10901 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1646:
/* Line 1792 of yacc.c  */
#line 10902 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1647:
/* Line 1792 of yacc.c  */
#line 10903 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1648:
/* Line 1792 of yacc.c  */
#line 10904 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 10905 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1650:
/* Line 1792 of yacc.c  */
#line 10910 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1651:
/* Line 1792 of yacc.c  */
#line 10914 "parser.y"
    {
	struct cb_literal	*l;

	if (CB_LITERAL_P ((yyvsp[(2) - (2)]))) {
		/* We must not alter the original definition */
		l = cobc_parse_malloc (sizeof(struct cb_literal));
		*l = *(CB_LITERAL((yyvsp[(2) - (2)])));
		l->all = 1;
		(yyval) = CB_TREE (l);
	} else {
		(yyval) = (yyvsp[(2) - (2)]);
	}
  }
    break;

  case 1652:
/* Line 1792 of yacc.c  */
#line 10931 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 10935 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1654:
/* Line 1792 of yacc.c  */
#line 10941 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1655:
/* Line 1792 of yacc.c  */
#line 10942 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1656:
/* Line 1792 of yacc.c  */
#line 10943 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1657:
/* Line 1792 of yacc.c  */
#line 10944 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1658:
/* Line 1792 of yacc.c  */
#line 10945 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1659:
/* Line 1792 of yacc.c  */
#line 10946 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1660:
/* Line 1792 of yacc.c  */
#line 10947 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1661:
/* Line 1792 of yacc.c  */
#line 10954 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1662:
/* Line 1792 of yacc.c  */
#line 10958 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1663:
/* Line 1792 of yacc.c  */
#line 10962 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1664:
/* Line 1792 of yacc.c  */
#line 10966 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1665:
/* Line 1792 of yacc.c  */
#line 10970 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1666:
/* Line 1792 of yacc.c  */
#line 10974 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1667:
/* Line 1792 of yacc.c  */
#line 10978 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 10982 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 10986 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 10990 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 10994 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 10998 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1682:
/* Line 1792 of yacc.c  */
#line 11023 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1683:
/* Line 1792 of yacc.c  */
#line 11027 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 11031 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1685:
/* Line 1792 of yacc.c  */
#line 11038 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 11042 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1687:
/* Line 1792 of yacc.c  */
#line 11046 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 11053 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 11060 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1690:
/* Line 1792 of yacc.c  */
#line 11067 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 11077 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 11084 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1693:
/* Line 1792 of yacc.c  */
#line 11094 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 11101 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1695:
/* Line 1792 of yacc.c  */
#line 11111 "parser.y"
    {	  
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1696:
/* Line 1792 of yacc.c  */
#line 11115 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[(1) - (3)]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1697:
/* Line 1792 of yacc.c  */
#line 11128 "parser.y"
    {	  
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1698:
/* Line 1792 of yacc.c  */
#line 11132 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[(1) - (3)]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1699:
/* Line 1792 of yacc.c  */
#line 11146 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1700:
/* Line 1792 of yacc.c  */
#line 11154 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1701:
/* Line 1792 of yacc.c  */
#line 11155 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1702:
/* Line 1792 of yacc.c  */
#line 11159 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1703:
/* Line 1792 of yacc.c  */
#line 11160 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1704:
/* Line 1792 of yacc.c  */
#line 11164 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1705:
/* Line 1792 of yacc.c  */
#line 11165 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1706:
/* Line 1792 of yacc.c  */
#line 11170 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1707:
/* Line 1792 of yacc.c  */
#line 11174 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1708:
/* Line 1792 of yacc.c  */
#line 11181 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1709:
/* Line 1792 of yacc.c  */
#line 11185 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1710:
/* Line 1792 of yacc.c  */
#line 11192 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1711:
/* Line 1792 of yacc.c  */
#line 11193 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1712:
/* Line 1792 of yacc.c  */
#line 11194 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1713:
/* Line 1792 of yacc.c  */
#line 11198 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1714:
/* Line 1792 of yacc.c  */
#line 11199 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1715:
/* Line 1792 of yacc.c  */
#line 11203 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1716:
/* Line 1792 of yacc.c  */
#line 11204 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1717:
/* Line 1792 of yacc.c  */
#line 11205 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1718:
/* Line 1792 of yacc.c  */
#line 11210 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1719:
/* Line 1792 of yacc.c  */
#line 11214 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1720:
/* Line 1792 of yacc.c  */
#line 11226 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1721:
/* Line 1792 of yacc.c  */
#line 11231 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1722:
/* Line 1792 of yacc.c  */
#line 11239 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1723:
/* Line 1792 of yacc.c  */
#line 11243 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1724:
/* Line 1792 of yacc.c  */
#line 11247 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1725:
/* Line 1792 of yacc.c  */
#line 11251 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1726:
/* Line 1792 of yacc.c  */
#line 11255 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1727:
/* Line 1792 of yacc.c  */
#line 11259 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1728:
/* Line 1792 of yacc.c  */
#line 11263 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1729:
/* Line 1792 of yacc.c  */
#line 11267 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1730:
/* Line 1792 of yacc.c  */
#line 11273 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1731:
/* Line 1792 of yacc.c  */
#line 11274 "parser.y"
    { (yyval) = cb_int1; }
    break;


/* Line 1792 of yacc.c  */
#line 18798 "parser.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 11447 "parser.y"

