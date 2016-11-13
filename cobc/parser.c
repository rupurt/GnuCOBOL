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
#define YYLAST   8677

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  521
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  846
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1972
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2820

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
    3133,  3138,  3144,  3146,  3148,  3150,  3152,  3153,  3157,  3158,
    3162,  3165,  3167,  3168,  3172,  3175,  3176,  3181,  3184,  3185,
    3187,  3189,  3191,  3193,  3197,  3198,  3201,  3203,  3207,  3211,
    3212,  3216,  3218,  3220,  3222,  3226,  3234,  3235,  3240,  3248,
    3249,  3252,  3253,  3255,  3258,  3260,  3263,  3267,  3271,  3273,
    3274,  3276,  3278,  3283,  3288,  3291,  3292,  3294,  3296,  3300,
    3303,  3304,  3308,  3310,  3312,  3313,  3315,  3317,  3318,  3322,
    3325,  3327,  3328,  3333,  3338,  3339,  3341,  3342,  3347,  3353,
    3354,  3356,  3359,  3363,  3364,  3366,  3368,  3369,  3374,  3379,
    3386,  3387,  3390,  3391,  3394,  3396,  3399,  3403,  3404,  3406,
    3407,  3411,  3413,  3415,  3417,  3419,  3421,  3423,  3425,  3427,
    3429,  3431,  3436,  3440,  3442,  3445,  3448,  3451,  3454,  3457,
    3460,  3463,  3466,  3469,  3474,  3478,  3483,  3485,  3488,  3492,
    3494,  3497,  3501,  3505,  3506,  3510,  3511,  3519,  3520,  3526,
    3527,  3530,  3531,  3534,  3535,  3539,  3540,  3543,  3548,  3549,
    3552,  3557,  3558,  3563,  3568,  3569,  3573,  3574,  3579,  3581,
    3583,  3585,  3588,  3591,  3594,  3597,  3599,  3601,  3604,  3606,
    3607,  3609,  3610,  3615,  3618,  3619,  3622,  3627,  3632,  3633,
    3635,  3637,  3639,  3641,  3643,  3644,  3649,  3655,  3657,  3660,
    3662,  3666,  3670,  3671,  3676,  3677,  3679,  3680,  3685,  3690,
    3697,  3704,  3705,  3707,  3710,  3711,  3713,  3714,  3718,  3720,
    3723,  3724,  3728,  3734,  3735,  3739,  3742,  3743,  3745,  3747,
    3748,  3753,  3760,  3761,  3765,  3767,  3771,  3774,  3777,  3780,
    3784,  3785,  3789,  3790,  3794,  3795,  3799,  3800,  3802,  3803,
    3807,  3809,  3811,  3813,  3815,  3817,  3825,  3826,  3828,  3830,
    3832,  3834,  3836,  3838,  3843,  3845,  3848,  3850,  3853,  3857,
    3858,  3860,  3863,  3865,  3869,  3871,  3873,  3878,  3880,  3882,
    3884,  3885,  3890,  3897,  3898,  3901,  3902,  3907,  3911,  3915,
    3917,  3919,  3921,  3923,  3924,  3926,  3929,  3930,  3933,  3934,
    3937,  3940,  3941,  3944,  3945,  3948,  3951,  3952,  3955,  3956,
    3959,  3962,  3963,  3966,  3967,  3970,  3973,  3975,  3978,  3980,
    3982,  3985,  3988,  3991,  3993,  3995,  3998,  4001,  4004,  4005,
    4008,  4009,  4012,  4013,  4016,  4018,  4020,  4021,  4024,  4026,
    4029,  4032,  4034,  4036,  4038,  4040,  4042,  4044,  4046,  4048,
    4050,  4052,  4054,  4056,  4058,  4060,  4062,  4064,  4066,  4068,
    4070,  4072,  4074,  4076,  4078,  4080,  4082,  4085,  4087,  4089,
    4091,  4093,  4095,  4097,  4099,  4103,  4104,  4106,  4108,  4112,
    4116,  4118,  4122,  4126,  4128,  4132,  4134,  4137,  4140,  4142,
    4146,  4148,  4150,  4154,  4156,  4160,  4162,  4166,  4168,  4171,
    4174,  4176,  4178,  4180,  4183,  4185,  4187,  4189,  4192,  4194,
    4195,  4198,  4200,  4202,  4204,  4208,  4210,  4212,  4215,  4217,
    4219,  4221,  4224,  4226,  4228,  4230,  4232,  4234,  4236,  4239,
    4241,  4243,  4247,  4249,  4252,  4254,  4256,  4258,  4260,  4263,
    4266,  4269,  4274,  4278,  4280,  4282,  4285,  4287,  4289,  4291,
    4293,  4295,  4297,  4299,  4302,  4305,  4308,  4310,  4312,  4314,
    4316,  4318,  4320,  4322,  4324,  4326,  4328,  4330,  4332,  4334,
    4336,  4338,  4340,  4342,  4344,  4346,  4348,  4350,  4352,  4354,
    4356,  4358,  4360,  4363,  4365,  4369,  4372,  4375,  4377,  4379,
    4381,  4385,  4388,  4391,  4393,  4395,  4399,  4403,  4408,  4414,
    4416,  4418,  4420,  4422,  4424,  4426,  4428,  4430,  4432,  4434,
    4436,  4438,  4441,  4443,  4447,  4449,  4451,  4453,  4455,  4457,
    4459,  4461,  4464,  4470,  4476,  4482,  4487,  4493,  4499,  4505,
    4511,  4517,  4520,  4523,  4525,  4527,  4529,  4531,  4533,  4535,
    4537,  4539,  4541,  4542,  4547,  4553,  4554,  4558,  4561,  4563,
    4567,  4571,  4573,  4577,  4579,  4583,  4585,  4589,  4591,  4595,
    4596,  4597,  4599,  4600,  4602,  4603,  4605,  4606,  4609,  4610,
    4613,  4614,  4616,  4618,  4619,  4621,  4622,  4624,  4627,  4628,
    4631,  4632,  4636,  4638,  4640,  4642,  4644,  4646,  4648,  4650,
    4652,  4653,  4656,  4658,  4660,  4662,  4664,  4666,  4668,  4670,
    4672,  4674,  4676,  4678,  4680,  4682,  4684,  4686,  4688,  4690,
    4692,  4694,  4696,  4698,  4700,  4702,  4704,  4706,  4708,  4710,
    4712,  4714,  4716,  4718,  4720,  4722,  4724,  4726,  4728,  4730,
    4732,  4734,  4736,  4738,  4740,  4742,  4744,  4746,  4748,  4750,
    4752,  4754,  4756,  4758,  4760,  4762,  4764,  4766,  4768,  4770,
    4772,  4774,  4776,  4778,  4780,  4782,  4784,  4786,  4788,  4790,
    4792,  4794,  4796,  4797,  4799,  4800,  4802,  4803,  4805,  4806,
    4808,  4809,  4811,  4812,  4814,  4815,  4817,  4818,  4820,  4821,
    4823,  4824,  4826,  4827,  4829,  4830,  4832,  4833,  4835,  4836,
    4838,  4839,  4841,  4842,  4844,  4845,  4847,  4850,  4851,  4853,
    4854,  4856,  4857,  4859,  4860,  4862,  4863,  4865,  4867,  4868,
    4870,  4871,  4873,  4875,  4876,  4879,  4882,  4883,  4885,  4886,
    4888,  4889,  4891,  4892,  4894,  4895,  4897,  4899,  4900,  4902,
    4903,  4905,  4906,  4908,  4910,  4911,  4914,  4916,  4918,  4919,
    4921,  4922,  4924,  4925,  4927,  4928,  4930,  4931,  4933,  4934,
    4936,  4937,  4939,  4940,  4942,  4945,  4946,  4948,  4949,  4951,
    4952,  4954,  4955,  4957,  4958,  4960,  4961,  4963,  4964,  4966,
    4967,  4969,  4971,  4972,  4974,  4975,  4979,  4980,  4982,  4983,
    4985,  4988,  4990,  4992,  4994,  4996,  4998,  5000,  5002,  5004,
    5006,  5008,  5010,  5012,  5014,  5016,  5018,  5020,  5022,  5024,
    5026,  5028,  5030,  5032,  5034,  5037,  5040,  5042,  5044,  5046,
    5048,  5050,  5052,  5055,  5057,  5061,  5064,  5066,  5068,  5070,
    5073,  5075,  5078,  5080,  5083,  5085,  5088,  5090,  5093,  5095,
    5098,  5100,  5103
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
    1012,  1013,    -1,  1014,  1015,  1211,  1016,    -1,  1013,  1014,
    1015,  1211,  1016,    -1,   227,    -1,   322,    -1,   235,    -1,
     173,    -1,    -1,   411,  1339,   652,    -1,    -1,  1339,   292,
     386,    -1,  1339,   265,    -1,   385,    -1,    -1,   329,  1018,
    1019,    -1,  1023,  1024,    -1,    -1,  1024,  1020,   849,  1021,
      -1,  1024,  1022,    -1,    -1,   144,    -1,   144,    -1,   460,
      -1,  1217,    -1,  1217,   451,  1217,    -1,    -1,  1240,   454,
      -1,   193,    -1,  1025,   490,  1026,    -1,  1025,   508,  1027,
      -1,    -1,  1339,   448,  1162,    -1,   171,    -1,  1188,    -1,
    1028,    -1,  1027,     9,  1028,    -1,  1248,   198,  1231,    50,
    1231,   490,  1188,    -1,    -1,   354,  1030,  1031,  1043,    -1,
    1212,  1279,  1324,  1032,  1033,  1041,  1042,    -1,    -1,   230,
    1248,    -1,    -1,  1034,    -1,  1035,  1039,    -1,  1040,    -1,
     219,   265,    -1,  1339,   218,   265,    -1,     8,  1318,   265,
      -1,  1037,    -1,    -1,  1037,    -1,  1038,    -1,   380,  1300,
    1201,   454,    -1,   380,  1300,  1201,   400,    -1,   380,   193,
      -1,    -1,  1040,    -1,  1057,    -1,  1339,   238,   265,    -1,
    1339,   509,    -1,    -1,   239,  1307,  1248,    -1,  1184,    -1,
    1178,    -1,    -1,   146,    -1,   355,    -1,    -1,   365,  1046,
    1047,    -1,  1209,  1160,    -1,   379,    -1,    -1,   381,  1050,
    1051,  1052,    -1,  1212,  1324,  1032,  1177,    -1,    -1,   147,
      -1,    -1,   387,  1054,  1055,  1058,    -1,  1209,  1160,  1036,
    1056,  1184,    -1,    -1,  1057,    -1,  1339,   265,    -1,  1339,
     292,   265,    -1,    -1,   148,    -1,   391,    -1,    -1,   399,
    1061,  1062,  1067,    -1,  1210,  1063,  1064,  1065,    -1,    10,
    1210,  1064,   510,  1189,   849,    -1,    -1,   508,  1248,    -1,
      -1,   132,   849,    -1,  1066,    -1,  1066,  1065,    -1,   510,
    1188,   849,    -1,    -1,   149,    -1,    -1,   410,  1069,  1070,
      -1,  1073,    -1,  1074,    -1,  1077,    -1,  1078,    -1,  1079,
      -1,  1081,    -1,   314,    -1,   312,    -1,   491,    -1,   126,
      -1,   156,  1237,   455,  1237,    -1,  1245,    32,  1075,    -1,
    1076,    -1,  1075,  1076,    -1,    39,  1071,    -1,    47,  1071,
      -1,   213,  1071,    -1,   268,  1071,    -1,   384,  1071,    -1,
     482,  1071,    -1,   245,  1071,    -1,   323,  1071,    -1,  1228,
     455,   155,  1236,    -1,  1228,   455,  1231,    -1,  1228,  1072,
      50,  1231,    -1,  1080,    -1,  1079,  1080,    -1,  1214,   455,
    1071,    -1,  1082,    -1,  1081,  1082,    -1,  1228,   455,   473,
      -1,  1228,   455,   462,    -1,    -1,   419,  1084,  1085,    -1,
      -1,  1246,  1087,  1089,  1090,  1086,  1091,  1092,    -1,    -1,
    1087,  1318,   735,  1309,  1088,    -1,    -1,  1088,  1252,    -1,
      -1,  1357,  1303,    -1,    -1,  1341,  1307,  1221,    -1,    -1,
     506,  1211,    -1,   227,   342,  1307,  1023,    -1,    -1,   205,
    1211,    -1,   322,   342,  1307,  1023,    -1,    -1,   428,  1094,
    1095,  1101,    -1,  1212,  1097,  1096,  1184,    -1,    -1,  1339,
    1356,  1201,    -1,    -1,   239,  1307,  1098,  1248,    -1,   180,
      -1,   242,    -1,  1194,    -1,  1280,  1195,    -1,  1280,  1196,
      -1,  1280,  1197,    -1,  1280,  1198,    -1,  1099,    -1,  1100,
      -1,   295,  1194,    -1,   298,    -1,    -1,   150,    -1,    -1,
     433,   393,  1103,  1104,    -1,   433,  1106,    -1,    -1,   895,
    1231,    -1,  1339,   164,  1331,  1105,    -1,  1339,   294,  1331,
    1105,    -1,    -1,  1231,    -1,   259,    -1,   423,    -1,   519,
      -1,   351,    -1,    -1,   434,  1108,  1109,  1113,    -1,  1110,
     230,  1248,  1112,  1174,    -1,  1111,    -1,  1110,  1111,    -1,
    1231,    -1,   115,  1294,   417,    -1,   115,  1294,  1231,    -1,
      -1,  1339,   335,  1307,  1248,    -1,    -1,   151,    -1,    -1,
     437,  1115,  1116,  1117,    -1,  1230,   198,  1207,  1171,    -1,
    1230,   198,  1231,   205,  1207,  1171,    -1,    97,  1248,   198,
    1248,  1282,  1171,    -1,    -1,   152,    -1,   439,  1119,    -1,
      -1,   341,    -1,    -1,   447,  1121,  1122,    -1,  1213,    -1,
    1122,  1213,    -1,    -1,   478,  1124,  1125,    -1,  1248,   198,
    1237,   455,  1238,    -1,    -1,   484,  1127,  1128,    -1,  1212,
    1129,    -1,    -1,   356,    -1,   358,    -1,    -1,   489,  1131,
    1132,  1141,    -1,  1240,  1133,  1136,  1112,  1140,  1174,    -1,
      -1,   115,  1294,  1134,    -1,  1135,    -1,  1134,   318,  1135,
      -1,  1274,  1237,    -1,   230,  1137,    -1,  1136,  1137,    -1,
    1248,  1138,  1139,    -1,    -1,   116,  1302,  1248,    -1,    -1,
      98,  1302,  1248,    -1,    -1,   445,  1302,  1248,    -1,    -1,
     153,    -1,    -1,   501,  1143,  1144,    -1,  1145,    -1,  1148,
      -1,  1152,    -1,  1154,    -1,  1155,    -1,  1146,  1288,  1330,
    1346,  1322,  1318,  1147,    -1,    -1,   206,    -1,  1211,    -1,
     227,    -1,   322,    -1,   235,    -1,   173,    -1,  1300,   110,
    1318,  1149,    -1,  1150,    -1,  1149,  1150,    -1,  1218,    -1,
      10,   343,    -1,    10,  1151,  1252,    -1,    -1,   363,    -1,
     363,   311,    -1,   311,    -1,  1292,   345,  1153,    -1,   428,
      -1,   132,    -1,  1146,    38,   372,  1248,    -1,  1156,    -1,
     169,    -1,   130,    -1,    -1,   516,  1158,  1159,  1164,    -1,
    1209,  1160,  1161,  1036,  1056,  1163,    -1,    -1,   198,  1244,
      -1,    -1,  1162,  1287,  1241,  1310,    -1,  1162,  1287,  1215,
      -1,  1162,  1287,   326,    -1,    38,    -1,     9,    -1,  1184,
      -1,  1181,    -1,    -1,   154,    -1,  1166,  1167,    -1,    -1,
     168,   849,    -1,    -1,   299,   849,    -1,  1169,  1170,    -1,
      -1,   168,   849,    -1,    -1,   299,   849,    -1,  1172,  1173,
      -1,    -1,   418,   849,    -1,    -1,   302,   849,    -1,  1175,
    1176,    -1,    -1,   470,   849,    -1,    -1,   301,   849,    -1,
    1179,  1180,    -1,  1179,    -1,  1179,  1180,    -1,  1179,    -1,
    1180,    -1,   132,   849,    -1,   296,   849,    -1,  1182,  1183,
      -1,  1182,    -1,  1183,    -1,   160,   849,    -1,   297,   849,
      -1,  1185,  1186,    -1,    -1,   233,   849,    -1,    -1,   300,
     849,    -1,    -1,  1243,  1355,    -1,  1189,    -1,  1190,    -1,
      -1,  1191,  1192,    -1,  1193,    -1,  1192,   234,    -1,  1192,
    1193,    -1,  1231,    -1,   471,    -1,   457,    -1,   472,    -1,
     467,    -1,   468,    -1,   459,    -1,   172,    -1,  1194,    -1,
    1195,    -1,  1196,    -1,  1197,    -1,  1198,    -1,   298,    -1,
     295,    -1,    21,    -1,   318,    -1,   313,    -1,   306,    -1,
      13,    -1,    14,    -1,    15,    -1,   337,    -1,   287,    -1,
     461,    -1,   162,  1335,    -1,   464,    -1,   209,    -1,   466,
      -1,   248,    -1,   210,    -1,   249,    -1,  1201,    -1,  1199,
    1200,  1201,    -1,    -1,    73,    -1,   405,    -1,  1201,   472,
    1202,    -1,  1201,   467,  1202,    -1,  1202,    -1,  1202,   468,
    1203,    -1,  1202,   459,  1203,    -1,  1203,    -1,  1204,   172,
    1203,    -1,  1204,    -1,   472,  1205,    -1,   467,  1205,    -1,
    1205,    -1,   471,  1201,   457,    -1,  1234,    -1,   253,    -1,
     253,  1348,   513,    -1,   255,    -1,   255,  1348,   513,    -1,
     327,    -1,   327,  1348,   513,    -1,  1208,    -1,  1207,  1208,
      -1,  1229,  1282,    -1,  1252,    -1,  1252,    -1,  1212,    -1,
    1211,  1212,    -1,   513,    -1,   513,    -1,  1215,    -1,  1214,
    1215,    -1,   274,    -1,    -1,  1216,  1217,    -1,  1218,    -1,
    1252,    -1,  1219,    -1,  1219,  1348,  1219,    -1,   259,    -1,
    1221,    -1,  1220,  1221,    -1,  1252,    -1,   513,    -1,  1224,
      -1,  1223,  1224,    -1,   513,    -1,  1221,    -1,   259,    -1,
     513,    -1,   513,    -1,  1229,    -1,  1228,  1229,    -1,  1250,
      -1,  1260,    -1,     7,  1317,  1249,    -1,  1231,    -1,  1230,
    1231,    -1,  1248,    -1,  1259,    -1,  1262,    -1,  1206,    -1,
     247,  1249,    -1,   247,  1260,    -1,   247,  1262,    -1,     7,
    1317,  1235,  1236,    -1,     7,  1317,  1249,    -1,   274,    -1,
    1234,    -1,  1232,  1234,    -1,  1248,    -1,  1260,    -1,  1262,
      -1,  1248,    -1,  1260,    -1,  1262,    -1,  1206,    -1,   247,
    1249,    -1,   247,  1260,    -1,   247,  1262,    -1,   345,    -1,
     155,    -1,  1249,    -1,   259,    -1,  1248,    -1,  1260,    -1,
    1248,    -1,  1259,    -1,  1248,    -1,   259,    -1,  1248,    -1,
     259,    -1,  1262,    -1,  1245,    -1,  1255,    -1,   519,    -1,
    1245,    -1,  1257,    -1,  1245,    -1,  1255,    -1,  1248,    -1,
    1259,    -1,  1262,    -1,  1247,    -1,  1247,    -1,  1252,    -1,
    1252,  1253,    -1,  1249,    -1,  1252,  1253,  1254,    -1,  1252,
    1253,    -1,  1252,  1254,    -1,  1252,    -1,  1251,    -1,  1206,
      -1,  1252,  1253,  1254,    -1,  1252,  1253,    -1,  1252,  1254,
      -1,  1252,    -1,   513,    -1,   513,  1348,  1252,    -1,   471,
    1199,   457,    -1,   471,  1201,   458,   457,    -1,   471,  1201,
     458,  1201,   457,    -1,   259,    -1,   259,    -1,   259,    -1,
     519,    -1,   259,    -1,   423,    -1,   519,    -1,   351,    -1,
     214,    -1,   269,    -1,   469,    -1,  1260,    -1,    10,  1261,
      -1,  1261,    -1,  1260,   456,  1261,    -1,   259,    -1,   423,
      -1,   519,    -1,   351,    -1,   214,    -1,   269,    -1,   469,
      -1,  1263,  1266,    -1,  1264,   471,  1233,   457,  1266,    -1,
    1265,   471,  1199,   457,  1266,    -1,   479,   471,  1268,   457,
    1266,    -1,   308,   471,  1269,   457,    -1,   261,   471,  1270,
     457,  1266,    -1,   262,   471,  1270,   457,  1266,    -1,   263,
     471,  1270,   457,  1266,    -1,   195,   471,  1271,   457,  1266,
      -1,   196,   471,  1272,   457,  1266,    -1,   203,  1267,    -1,
     504,  1267,    -1,   102,    -1,   511,    -1,   499,    -1,   267,
      -1,   383,    -1,    85,    -1,   194,    -1,   435,    -1,   436,
      -1,    -1,   471,  1201,   458,   457,    -1,   471,  1201,   458,
    1201,   457,    -1,    -1,   471,  1199,   457,    -1,   471,   457,
      -1,  1233,    -1,  1233,  1200,   243,    -1,  1233,  1200,   477,
      -1,  1233,    -1,  1233,  1200,  1233,    -1,  1201,    -1,  1201,
    1200,  1221,    -1,  1199,    -1,  1199,  1200,   443,    -1,  1199,
      -1,  1199,  1200,   443,    -1,    -1,    -1,    10,    -1,    -1,
    1357,    -1,    -1,   225,    -1,    -1,   225,  1278,    -1,    -1,
     455,  1238,    -1,    -1,   289,    -1,   339,    -1,    -1,   295,
      -1,    -1,   317,    -1,   295,   317,    -1,    -1,   392,  1283,
      -1,    -1,   275,  1307,  1284,    -1,    35,    -1,   284,    -1,
     285,    -1,   286,    -1,   349,    -1,   475,    -1,   476,    -1,
     480,    -1,    -1,   407,  1295,    -1,   460,    -1,     4,    -1,
       6,    -1,    11,    -1,    19,    -1,    52,    -1,    53,    -1,
      63,    -1,    74,    -1,    77,    -1,    91,    -1,   114,    -1,
     122,    -1,   124,    -1,   131,    -1,   155,    -1,   166,    -1,
     171,    -1,   197,    -1,   204,    -1,   207,    -1,   208,    -1,
     217,    -1,   224,    -1,   226,    -1,   229,    -1,   272,    -1,
     276,    -1,   278,    -1,   289,    -1,   316,    -1,   329,    -1,
     354,    -1,   365,    -1,   381,    -1,   387,    -1,   391,    -1,
     399,    -1,   410,    -1,   419,    -1,   428,    -1,   433,    -1,
     434,    -1,   437,    -1,   439,    -1,   447,    -1,   478,    -1,
     484,    -1,   489,    -1,   516,    -1,   133,    -1,   134,    -1,
     135,    -1,   136,    -1,   137,    -1,   138,    -1,   139,    -1,
     140,    -1,   142,    -1,   143,    -1,   144,    -1,   146,    -1,
     147,    -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,
     152,    -1,   153,    -1,   154,    -1,    -1,     8,    -1,    -1,
       9,    -1,    -1,    23,    -1,    -1,    24,    -1,    -1,    27,
      -1,    -1,    31,    -1,    -1,    40,    -1,    -1,    50,    -1,
      -1,    59,    -1,    -1,    60,    -1,    -1,    89,    -1,    -1,
     105,    -1,    -1,   463,    -1,    -1,   191,    -1,    -1,   198,
      -1,    -1,   220,    -1,    -1,   319,    -1,   220,   319,    -1,
      -1,   223,    -1,    -1,   465,    -1,    -1,   230,    -1,    -1,
     234,    -1,    -1,   234,    -1,    23,    -1,    -1,   239,    -1,
      -1,   254,    -1,   257,    -1,    -1,   250,  1308,    -1,   251,
    1308,    -1,    -1,   257,    -1,    -1,   275,    -1,    -1,   288,
      -1,    -1,   304,    -1,    -1,   304,    -1,   305,    -1,    -1,
     311,    -1,    -1,   314,    -1,    -1,   314,    -1,   191,    -1,
      -1,   430,   234,    -1,   430,    -1,   234,    -1,    -1,   321,
      -1,    -1,   342,    -1,    -1,   345,    -1,    -1,   356,    -1,
      -1,   390,    -1,    -1,   412,    -1,    -1,   413,    -1,    -1,
     412,    -1,   412,   234,    -1,    -1,   417,    -1,    -1,   425,
      -1,    -1,   430,    -1,    -1,   446,    -1,    -1,   450,    -1,
      -1,   454,    -1,    -1,   455,    -1,    -1,   455,    -1,   506,
      -1,    -1,   510,    -1,    -1,   510,   410,   455,    -1,    -1,
     512,    -1,    -1,   356,    -1,    66,   408,    -1,   408,    -1,
      69,    -1,    67,    -1,    70,    -1,    68,    -1,  1342,    -1,
    1343,    -1,   461,    -1,   162,    -1,   168,    -1,   164,    -1,
     168,    -1,   470,    -1,   220,    -1,   311,    -1,   425,    -1,
     313,    -1,   254,    -1,   257,    -1,   356,    -1,   358,    -1,
      60,    -1,   514,    -1,   356,  1308,    -1,   358,  1308,    -1,
     361,    -1,   483,    -1,   254,    -1,   257,    -1,   417,    -1,
     246,    -1,   512,   127,    -1,   127,    -1,   345,    66,   408,
      -1,    66,   408,    -1,   408,    -1,   119,    -1,   109,    -1,
      92,   212,    -1,    57,    -1,    92,   190,    -1,    56,    -1,
     326,   212,    -1,   330,    -1,   326,   190,    -1,   331,    -1,
     371,   212,    -1,   389,    -1,   371,   190,    -1,   388,    -1,
      92,  1308,    -1,    93,  1308,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1352,  1352,  1352,  1384,  1385,  1389,  1390,  1394,  1395,
    1399,  1399,  1422,  1429,  1436,  1442,  1443,  1444,  1448,  1449,
    1453,  1478,  1479,  1483,  1517,  1523,  1535,  1509,  1545,  1544,
    1582,  1614,  1615,  1629,  1630,  1633,  1634,  1638,  1647,  1656,
    1657,  1661,  1665,  1674,  1675,  1683,  1684,  1694,  1695,  1699,
    1700,  1701,  1702,  1703,  1710,  1709,  1722,  1723,  1726,  1727,
    1741,  1740,  1750,  1751,  1752,  1753,  1757,  1758,  1762,  1763,
    1764,  1765,  1769,  1776,  1783,  1790,  1801,  1805,  1809,  1813,
    1820,  1821,  1828,  1827,  1838,  1839,  1840,  1847,  1848,  1852,
    1856,  1868,  1872,  1873,  1878,  1881,  1888,  1893,  1904,  1917,
    1918,  1926,  1927,  1931,  1932,  1933,  1934,  1935,  1936,  1937,
    1938,  1939,  1940,  1941,  1942,  1950,  1949,  1977,  1987,  2000,
    2008,  2011,  2012,  2016,  2023,  2038,  2059,  2058,  2082,  2088,
    2094,  2100,  2106,  2112,  2122,  2126,  2133,  2137,  2142,  2141,
    2152,  2156,  2163,  2164,  2165,  2166,  2167,  2168,  2172,  2173,
    2180,  2195,  2198,  2205,  2213,  2217,  2228,  2248,  2256,  2267,
    2268,  2274,  2295,  2296,  2300,  2304,  2325,  2348,  2430,  2433,
    2442,  2461,  2477,  2495,  2513,  2530,  2546,  2547,  2554,  2555,
    2563,  2564,  2574,  2575,  2580,  2579,  2600,  2610,  2611,  2615,
    2616,  2617,  2618,  2619,  2620,  2621,  2622,  2623,  2624,  2625,
    2626,  2627,  2634,  2640,  2650,  2663,  2676,  2692,  2693,  2694,
    2695,  2698,  2699,  2705,  2706,  2710,  2714,  2715,  2720,  2723,
    2724,  2731,  2739,  2740,  2741,  2748,  2777,  2815,  2817,  2822,
    2832,  2843,  2850,  2852,  2853,  2859,  2859,  2866,  2871,  2876,
    2883,  2884,  2885,  2889,  2900,  2901,  2905,  2910,  2915,  2920,
    2931,  2942,  2952,  2957,  2978,  2979,  2983,  2983,  2987,  2992,
    3010,  3021,  3028,  3029,  3035,  3043,  3044,  3045,  3051,  3052,
    3053,  3060,  3061,  3065,  3066,  3072,  3100,  3101,  3102,  3103,
    3110,  3109,  3125,  3126,  3130,  3133,  3134,  3140,  3141,  3149,
    3150,  3158,  3159,  3163,  3183,  3182,  3199,  3206,  3210,  3216,
    3217,  3221,  3231,  3246,  3247,  3248,  3249,  3250,  3251,  3252,
    3253,  3254,  3261,  3268,  3268,  3268,  3274,  3294,  3328,  3359,
    3360,  3367,  3368,  3372,  3373,  3380,  3391,  3396,  3407,  3408,
    3412,  3413,  3419,  3430,  3448,  3449,  3453,  3454,  3455,  3459,
    3466,  3473,  3482,  3494,  3546,  3561,  3562,  3566,  3578,  3620,
    3622,  3621,  3637,  3640,  3640,  3658,  3659,  3661,  3665,  3667,
    3666,  3701,  3714,  3722,  3727,  3733,  3742,  3752,  3755,  3767,
    3768,  3769,  3770,  3774,  3778,  3782,  3786,  3790,  3794,  3798,
    3802,  3806,  3810,  3814,  3818,  3822,  3833,  3834,  3838,  3839,
    3843,  3844,  3845,  3849,  3850,  3854,  3880,  3884,  3893,  3897,
    3906,  3907,  3908,  3909,  3910,  3911,  3912,  3913,  3914,  3915,
    3916,  3917,  3918,  3919,  3926,  3950,  3978,  3981,  3990,  4015,
    4026,  4027,  4031,  4035,  4039,  4043,  4047,  4051,  4055,  4059,
    4063,  4067,  4071,  4075,  4079,  4084,  4089,  4093,  4097,  4105,
    4109,  4113,  4121,  4125,  4129,  4133,  4137,  4141,  4145,  4149,
    4153,  4161,  4169,  4173,  4177,  4181,  4185,  4189,  4197,  4198,
    4202,  4203,  4209,  4215,  4227,  4245,  4246,  4255,  4276,  4298,
    4299,  4303,  4304,  4307,  4308,  4314,  4315,  4322,  4323,  4330,
    4354,  4355,  4372,  4373,  4376,  4377,  4384,  4385,  4390,  4401,
    4412,  4419,  4421,  4422,  4434,  4445,  4474,  4473,  4482,  4483,
    4487,  4488,  4491,  4492,  4505,  4518,  4539,  4548,  4562,  4564,
    4563,  4583,  4585,  4584,  4600,  4602,  4601,  4612,  4613,  4620,
    4619,  4648,  4649,  4650,  4657,  4663,  4667,  4668,  4674,  4681,
    4682,  4683,  4687,  4694,  4695,  4699,  4709,  4749,  4759,  4769,
    4788,  4789,  4792,  4793,  4798,  4799,  4800,  4801,  4802,  4803,
    4815,  4826,  4837,  4848,  4859,  4869,  4870,  4875,  4874,  4895,
    4896,  4900,  4901,  4902,  4903,  4904,  4905,  4906,  4907,  4908,
    4909,  4910,  4911,  4912,  4913,  4914,  4915,  4919,  4926,  4930,
    4934,  4935,  4936,  4943,  4947,  4954,  4957,  4962,  4968,  4975,
    4978,  4983,  4987,  4995,  5002,  5011,  5016,  5021,  5034,  5042,
    5043,  5044,  5051,  5055,  5062,  5067,  5073,  5080,  5086,  5096,
    5100,  5107,  5108,  5112,  5116,  5120,  5124,  5128,  5136,  5139,
    5140,  5144,  5150,  5154,  5169,  5186,  5187,  5188,  5192,  5218,
    5233,  5236,  5238,  5242,  5246,  5250,  5257,  5277,  5281,  5282,
    5286,  5318,  5326,  5334,  5342,  5344,  5343,  5364,  5365,  5369,
    5370,  5375,  5377,  5376,  5433,  5451,  5452,  5456,  5460,  5464,
    5468,  5472,  5476,  5480,  5484,  5488,  5492,  5496,  5500,  5504,
    5508,  5512,  5516,  5520,  5525,  5529,  5533,  5538,  5543,  5548,
    5553,  5554,  5555,  5556,  5557,  5558,  5559,  5560,  5561,  5568,
    5573,  5582,  5583,  5587,  5588,  5593,  5596,  5600,  5608,  5611,
    5615,  5623,  5634,  5642,  5644,  5654,  5643,  5681,  5681,  5714,
    5718,  5717,  5731,  5730,  5750,  5751,  5756,  5763,  5765,  5769,
    5779,  5781,  5789,  5797,  5805,  5834,  5865,  5867,  5877,  5882,
    5909,  5911,  5910,  5947,  5948,  5952,  5953,  5954,  5971,  5972,
    5983,  5982,  6032,  6033,  6037,  6085,  6098,  6101,  6120,  6125,
    6119,  6138,  6138,  6168,  6175,  6176,  6177,  6178,  6179,  6180,
    6181,  6182,  6183,  6184,  6185,  6186,  6187,  6188,  6189,  6190,
    6191,  6192,  6193,  6194,  6195,  6196,  6197,  6198,  6199,  6200,
    6201,  6202,  6203,  6204,  6205,  6206,  6207,  6208,  6209,  6210,
    6211,  6212,  6213,  6214,  6215,  6216,  6217,  6218,  6219,  6220,
    6221,  6222,  6223,  6224,  6238,  6250,  6249,  6265,  6271,  6275,
    6279,  6284,  6289,  6294,  6299,  6303,  6307,  6311,  6315,  6320,
    6324,  6328,  6332,  6336,  6340,  6344,  6351,  6352,  6359,  6360,
    6364,  6365,  6369,  6370,  6371,  6372,  6373,  6377,  6381,  6382,
    6385,  6386,  6389,  6390,  6396,  6397,  6401,  6402,  6406,  6410,
    6416,  6420,  6424,  6428,  6432,  6436,  6440,  6444,  6448,  6452,
    6456,  6460,  6464,  6468,  6472,  6476,  6480,  6486,  6490,  6494,
    6498,  6502,  6506,  6510,  6517,  6518,  6522,  6526,  6544,  6543,
    6552,  6556,  6560,  6566,  6567,  6574,  6578,  6589,  6588,  6597,
    6601,  6613,  6614,  6622,  6621,  6630,  6631,  6635,  6641,  6641,
    6648,  6647,  6657,  6677,  6681,  6686,  6691,  6712,  6716,  6715,
    6732,  6733,  6738,  6746,  6770,  6772,  6776,  6785,  6798,  6801,
    6805,  6809,  6832,  6833,  6837,  6838,  6843,  6846,  6854,  6858,
    6866,  6870,  6881,  6880,  6888,  6892,  6903,  6902,  6910,  6915,
    6923,  6924,  6925,  6926,  6927,  6935,  6934,  6943,  6950,  6954,
    6964,  6975,  6993,  6992,  7001,  7005,  7009,  7014,  7022,  7026,
    7037,  7036,  7046,  7050,  7054,  7058,  7062,  7066,  7067,  7076,
    7078,  7077,  7085,  7094,  7101,  7105,  7109,  7113,  7123,  7125,
    7129,  7130,  7133,  7135,  7142,  7143,  7147,  7148,  7153,  7157,
    7161,  7165,  7169,  7173,  7177,  7181,  7185,  7189,  7193,  7197,
    7201,  7205,  7209,  7213,  7220,  7224,  7235,  7234,  7243,  7247,
    7251,  7255,  7259,  7266,  7270,  7281,  7280,  7289,  7308,  7307,
    7331,  7339,  7340,  7345,  7356,  7367,  7381,  7385,  7392,  7393,
    7398,  7407,  7416,  7421,  7430,  7431,  7436,  7498,  7499,  7500,
    7504,  7505,  7509,  7513,  7524,  7523,  7535,  7536,  7557,  7571,
    7593,  7615,  7635,  7658,  7659,  7667,  7666,  7675,  7686,  7685,
    7694,  7707,  7706,  7719,  7728,  7732,  7743,  7759,  7758,  7767,
    7771,  7775,  7782,  7786,  7797,  7796,  7804,  7812,  7813,  7817,
    7818,  7819,  7824,  7827,  7834,  7838,  7846,  7853,  7854,  7855,
    7856,  7857,  7858,  7859,  7864,  7867,  7877,  7876,  7884,  7891,
    7904,  7903,  7912,  7916,  7920,  7924,  7931,  7932,  7933,  7934,
    7941,  7940,  7954,  7964,  7973,  7974,  7978,  7979,  7980,  7981,
    7982,  7983,  7987,  7988,  7992,  7997,  8004,  8005,  8006,  8007,
    8008,  8012,  8040,  8043,  8050,  8054,  8064,  8063,  8076,  8075,
    8083,  8087,  8098,  8097,  8106,  8110,  8117,  8121,  8132,  8131,
    8139,  8160,  8184,  8185,  8186,  8187,  8191,  8192,  8196,  8197,
    8198,  8199,  8211,  8210,  8222,  8229,  8228,  8240,  8249,  8257,
    8264,  8268,  8281,  8288,  8300,  8303,  8308,  8312,  8323,  8330,
    8331,  8335,  8336,  8339,  8340,  8345,  8385,  8384,  8393,  8422,
    8423,  8427,  8431,  8435,  8439,  8446,  8447,  8451,  8455,  8458,
    8460,  8464,  8473,  8474,  8475,  8478,  8480,  8484,  8488,  8492,
    8500,  8501,  8505,  8506,  8510,  8514,  8524,  8535,  8534,  8542,
    8552,  8563,  8562,  8571,  8578,  8582,  8593,  8592,  8604,  8613,
    8616,  8620,  8624,  8631,  8635,  8645,  8657,  8656,  8665,  8669,
    8678,  8679,  8684,  8687,  8695,  8699,  8706,  8714,  8718,  8729,
    8728,  8742,  8743,  8744,  8745,  8746,  8747,  8751,  8752,  8756,
    8757,  8763,  8772,  8779,  8780,  8784,  8788,  8792,  8796,  8800,
    8804,  8808,  8812,  8821,  8825,  8834,  8843,  8844,  8848,  8857,
    8858,  8862,  8866,  8877,  8876,  8885,  8884,  8915,  8918,  8938,
    8939,  8942,  8943,  8951,  8952,  8957,  8962,  8972,  8988,  8993,
    9003,  9020,  9019,  9029,  9042,  9045,  9053,  9056,  9061,  9066,
    9074,  9075,  9076,  9077,  9078,  9079,  9083,  9091,  9092,  9096,
    9100,  9111,  9110,  9120,  9133,  9136,  9140,  9148,  9160,  9163,
    9170,  9171,  9172,  9173,  9180,  9179,  9188,  9195,  9196,  9200,
    9201,  9202,  9206,  9207,  9211,  9215,  9226,  9225,  9234,  9238,
    9242,  9249,  9253,  9263,  9274,  9275,  9282,  9281,  9289,  9297,
    9310,  9309,  9317,  9331,  9330,  9338,  9351,  9353,  9354,  9362,
    9361,  9370,  9378,  9379,  9384,  9385,  9390,  9397,  9398,  9403,
    9410,  9411,  9415,  9416,  9420,  9421,  9425,  9429,  9440,  9439,
    9448,  9449,  9450,  9451,  9452,  9456,  9483,  9486,  9498,  9508,
    9513,  9518,  9523,  9531,  9569,  9570,  9574,  9614,  9624,  9647,
    9648,  9649,  9650,  9654,  9663,  9669,  9679,  9710,  9719,  9720,
    9727,  9726,  9738,  9748,  9749,  9754,  9757,  9761,  9765,  9772,
    9773,  9777,  9778,  9782,  9786,  9798,  9801,  9802,  9811,  9812,
    9821,  9824,  9825,  9834,  9835,  9846,  9849,  9850,  9859,  9860,
    9872,  9875,  9877,  9887,  9888,  9900,  9901,  9905,  9906,  9907,
    9911,  9920,  9931,  9932,  9933,  9937,  9946,  9957,  9962,  9963,
    9972,  9973,  9984,  9988,  9998, 10005, 10012, 10012, 10023, 10024,
   10025, 10029, 10038, 10039, 10041, 10042, 10043, 10044, 10045, 10047,
   10048, 10049, 10050, 10051, 10052, 10054, 10055, 10056, 10058, 10059,
   10060, 10061, 10062, 10065, 10066, 10070, 10071, 10075, 10076, 10080,
   10081, 10085, 10089, 10095, 10099, 10105, 10106, 10107, 10111, 10112,
   10113, 10117, 10118, 10119, 10123, 10127, 10131, 10132, 10133, 10136,
   10137, 10147, 10159, 10168, 10184, 10193, 10209, 10224, 10225, 10230,
   10239, 10245, 10265, 10269, 10290, 10331, 10345, 10346, 10351, 10357,
   10358, 10363, 10375, 10376, 10377, 10384, 10395, 10396, 10400, 10408,
   10416, 10420, 10427, 10436, 10437, 10443, 10457, 10474, 10478, 10485,
   10486, 10487, 10494, 10498, 10505, 10506, 10507, 10508, 10509, 10513,
   10517, 10521, 10525, 10529, 10550, 10554, 10561, 10562, 10563, 10567,
   10568, 10569, 10570, 10571, 10575, 10579, 10586, 10587, 10591, 10592,
   10596, 10597, 10601, 10602, 10613, 10614, 10618, 10619, 10620, 10624,
   10625, 10626, 10633, 10634, 10638, 10639, 10643, 10644, 10645, 10651,
   10655, 10659, 10660, 10664, 10668, 10675, 10682, 10689, 10699, 10703,
   10710, 10720, 10730, 10740, 10753, 10757, 10765, 10773, 10777, 10787,
   10802, 10825, 10845, 10852, 10868, 10869, 10870, 10871, 10872, 10873,
   10877, 10881, 10898, 10902, 10909, 10910, 10911, 10912, 10913, 10914,
   10915, 10921, 10925, 10929, 10933, 10937, 10941, 10945, 10949, 10953,
   10957, 10961, 10965, 10972, 10973, 10977, 10978, 10979, 10983, 10984,
   10985, 10986, 10990, 10994, 10998, 11005, 11009, 11013, 11020, 11027,
   11034, 11044, 11051, 11061, 11068, 11078, 11082, 11095, 11099, 11114,
   11122, 11123, 11127, 11128, 11132, 11133, 11138, 11141, 11149, 11152,
   11159, 11161, 11162, 11166, 11167, 11171, 11172, 11173, 11178, 11181,
   11194, 11198, 11206, 11210, 11214, 11218, 11222, 11226, 11230, 11234,
   11241, 11242, 11248, 11249, 11250, 11251, 11252, 11253, 11254, 11255,
   11256, 11257, 11258, 11259, 11260, 11261, 11262, 11263, 11264, 11265,
   11266, 11267, 11268, 11269, 11270, 11271, 11272, 11273, 11274, 11275,
   11276, 11277, 11278, 11279, 11280, 11281, 11282, 11283, 11284, 11285,
   11286, 11287, 11288, 11289, 11290, 11291, 11292, 11293, 11294, 11295,
   11296, 11297, 11298, 11299, 11300, 11301, 11302, 11303, 11304, 11305,
   11306, 11307, 11308, 11309, 11310, 11311, 11312, 11313, 11314, 11315,
   11316, 11317, 11324, 11324, 11325, 11325, 11326, 11326, 11327, 11327,
   11328, 11328, 11329, 11329, 11330, 11330, 11331, 11331, 11332, 11332,
   11333, 11333, 11334, 11334, 11335, 11335, 11336, 11336, 11337, 11337,
   11338, 11338, 11339, 11339, 11340, 11340, 11340, 11341, 11341, 11342,
   11342, 11343, 11343, 11344, 11344, 11345, 11345, 11345, 11346, 11346,
   11347, 11347, 11347, 11348, 11348, 11348, 11349, 11349, 11350, 11350,
   11351, 11351, 11352, 11352, 11353, 11353, 11353, 11354, 11354, 11355,
   11355, 11356, 11356, 11356, 11357, 11357, 11357, 11357, 11358, 11358,
   11359, 11359, 11360, 11360, 11361, 11361, 11362, 11362, 11363, 11363,
   11364, 11364, 11365, 11365, 11365, 11366, 11366, 11367, 11367, 11368,
   11368, 11369, 11369, 11370, 11370, 11371, 11371, 11372, 11372, 11373,
   11373, 11373, 11374, 11374, 11375, 11375, 11376, 11376, 11377, 11377,
   11381, 11381, 11382, 11382, 11383, 11383, 11384, 11384, 11385, 11385,
   11386, 11386, 11387, 11387, 11388, 11388, 11389, 11389, 11390, 11390,
   11391, 11391, 11392, 11392, 11393, 11393, 11394, 11394, 11395, 11395,
   11396, 11396, 11397, 11397, 11400, 11401, 11402, 11406, 11406, 11407,
   11407, 11408, 11408, 11409, 11409, 11410, 11410, 11411, 11411, 11412,
   11412, 11413, 11413
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

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2495
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

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1917
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

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2495)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

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
	cb_trim_program_id(s);
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
#line 1484 "parser.y"
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
#line 1517 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 1523 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 1535 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 1545 "parser.y"
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
#line 1576 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 1583 "parser.y"
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
#line 1616 "parser.y"
    {
	char	*s;

	if (CB_LITERAL_P ((yyvsp[(1) - (1)]))) {
		s = (char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data);
		if(strchr(s, ' ')) {
			cb_warning_x ((yyvsp[(1) - (1)]), _("'%s' literal includes leading/trailing spaces which are omitted"), s);
		}
	}
  }
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 1629 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 1630 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 1639 "parser.y"
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
#line 1648 "parser.y"
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
#line 1662 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 1666 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 1676 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 1685 "parser.y"
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
#line 1710 "parser.y"
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
#line 1728 "parser.y"
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
#line 1741 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2, &check_comp_duplicate);
  }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 1770 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 1777 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 1784 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 1791 "parser.y"
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
#line 1802 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 1806 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 1810 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 1814 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 1828 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 1833 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 1841 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 1853 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 1857 "parser.y"
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
#line 1878 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 1882 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 1889 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 1894 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 1905 "parser.y"
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
#line 1919 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 1950 "parser.y"
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
#line 1978 "parser.y"
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
#line 1988 "parser.y"
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
#line 2001 "parser.y"
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
#line 2017 "parser.y"
    {
	  check_on_off_duplicate = 0;
  }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 2024 "parser.y"
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
#line 2039 "parser.y"
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
#line 2059 "parser.y"
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
#line 2072 "parser.y"
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
#line 2083 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 2089 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 2095 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 2101 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 2107 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 2113 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 2123 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 2127 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 2134 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 2138 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 2142 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2146 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2153 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 2157 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 2163 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 2164 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 2165 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 2166 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 2167 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 2168 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 2172 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 2173 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 2181 "parser.y"
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
#line 2195 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 2199 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 2207 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 2214 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 2218 "parser.y"
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
#line 2229 "parser.y"
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
#line 2249 "parser.y"
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
#line 2257 "parser.y"
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
#line 2267 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 2268 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 161:
/* Line 1792 of yacc.c  */
#line 2275 "parser.y"
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
#line 2295 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 2296 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 2301 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 165:
/* Line 1792 of yacc.c  */
#line 2305 "parser.y"
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
#line 2326 "parser.y"
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
#line 2349 "parser.y"
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
#line 2430 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 2434 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 2443 "parser.y"
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
#line 2462 "parser.y"
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
#line 2478 "parser.y"
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
#line 2496 "parser.y"
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
#line 2514 "parser.y"
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
#line 2531 "parser.y"
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
#line 2548 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 179:
/* Line 1792 of yacc.c  */
#line 2556 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 181:
/* Line 1792 of yacc.c  */
#line 2565 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 184:
/* Line 1792 of yacc.c  */
#line 2580 "parser.y"
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
#line 2597 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 186:
/* Line 1792 of yacc.c  */
#line 2601 "parser.y"
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
#line 2635 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1, &check_duplicate);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 2641 "parser.y"
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
#line 2651 "parser.y"
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
#line 2664 "parser.y"
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
#line 2677 "parser.y"
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
#line 2700 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 214:
/* Line 1792 of yacc.c  */
#line 2707 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 218:
/* Line 1792 of yacc.c  */
#line 2720 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 2732 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 2739 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 2740 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 2741 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 225:
/* Line 1792 of yacc.c  */
#line 2749 "parser.y"
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
#line 2778 "parser.y"
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
#line 2815 "parser.y"
    { (yyval) = cb_int (-1); }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 2818 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(4) - (4)])));
  }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 2823 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(3) - (3)])));
  }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 2833 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3, &check_duplicate);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 231:
/* Line 1792 of yacc.c  */
#line 2844 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4, &check_duplicate);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 2859 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5, &check_duplicate);
  }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 2867 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 2872 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 239:
/* Line 1792 of yacc.c  */
#line 2877 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 2886 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 243:
/* Line 1792 of yacc.c  */
#line 2890 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 2906 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 2911 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 2916 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 2921 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6, &check_duplicate);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 2932 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 2943 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8, &check_duplicate);
  }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 2953 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 2958 "parser.y"
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
#line 2983 "parser.y"
    {
    key_component_list = NULL;
  }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 2993 "parser.y"
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
#line 3011 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10, &check_duplicate);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 3022 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11, &check_duplicate);
  }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 3036 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12, &check_duplicate);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 3043 "parser.y"
    { (yyval) = NULL; }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 3044 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 267:
/* Line 1792 of yacc.c  */
#line 3045 "parser.y"
    { (yyval) = NULL; }
    break;

  case 270:
/* Line 1792 of yacc.c  */
#line 3054 "parser.y"
    {
	yyerrok;
  }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 3073 "parser.y"
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
#line 3100 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 3101 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 3102 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 3103 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 3110 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 281:
/* Line 1792 of yacc.c  */
#line 3115 "parser.y"
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
#line 3142 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 290:
/* Line 1792 of yacc.c  */
#line 3151 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 293:
/* Line 1792 of yacc.c  */
#line 3165 "parser.y"
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
#line 3183 "parser.y"
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
#line 3200 "parser.y"
    {
	yyerrok;
  }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 3207 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 298:
/* Line 1792 of yacc.c  */
#line 3211 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 301:
/* Line 1792 of yacc.c  */
#line 3222 "parser.y"
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
#line 3232 "parser.y"
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
#line 3262 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3, &check_duplicate);
	/* ignore */
  }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 3275 "parser.y"
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
#line 3295 "parser.y"
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
#line 3330 "parser.y"
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
#line 3361 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 3367 "parser.y"
    { (yyval) = NULL; }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 3368 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 3372 "parser.y"
    { (yyval) = NULL; }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 3373 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 3381 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5, &check_duplicate);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 3392 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6, &check_duplicate);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 3397 "parser.y"
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
#line 3420 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7, &check_duplicate);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 333:
/* Line 1792 of yacc.c  */
#line 3432 "parser.y"
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
#line 3460 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 3467 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 3474 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 3483 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9, &check_duplicate);
	/* ignore */
  }
    break;

  case 343:
/* Line 1792 of yacc.c  */
#line 3495 "parser.y"
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
#line 3547 "parser.y"
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
#line 3567 "parser.y"
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
#line 3579 "parser.y"
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
#line 3622 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 3628 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 3637 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 3640 "parser.y"
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 3647 "parser.y"
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
#line 3667 "parser.y"
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
#line 3682 "parser.y"
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
#line 3702 "parser.y"
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
#line 3715 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 3722 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 3728 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 3734 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 3743 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 3752 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 3756 "parser.y"
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
#line 3767 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 3768 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 3769 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 3770 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 3775 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 3779 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 3783 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 3787 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 3791 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 3795 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 3799 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 3803 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 3807 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 3811 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 3815 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 3819 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 385:
/* Line 1792 of yacc.c  */
#line 3823 "parser.y"
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
#line 3855 "parser.y"
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
#line 3881 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 3885 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 3893 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 399:
/* Line 1792 of yacc.c  */
#line 3899 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 414:
/* Line 1792 of yacc.c  */
#line 3927 "parser.y"
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
#line 3951 "parser.y"
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
#line 3978 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 3982 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 3991 "parser.y"
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
#line 4016 "parser.y"
    {
	check_repeated ("PICTURE", SYN_CLAUSE_4, &check_pic_duplicate);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 4032 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 4036 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 4040 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 4044 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 4048 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 4052 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 4056 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 4060 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 4064 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 4068 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 4072 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 4076 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 4080 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 4085 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 4090 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 4094 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 4098 "parser.y"
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
#line 4106 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 4110 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 4114 "parser.y"
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
#line 4122 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 4126 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 4130 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4134 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4138 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4142 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 4146 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 4150 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 4154 "parser.y"
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
#line 4162 "parser.y"
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
#line 4170 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 4174 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 4178 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 4182 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 4186 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 4190 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_5, &check_pic_duplicate);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 4210 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 4216 "parser.y"
    {
	check_repeated ("SIGN", SYN_CLAUSE_6, &check_pic_duplicate);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 4229 "parser.y"
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
#line 4247 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 4257 "parser.y"
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
#line 4278 "parser.y"
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
#line 4298 "parser.y"
    { (yyval) = NULL; }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 4299 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 4303 "parser.y"
    { (yyval) = NULL; }
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 4304 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 474:
/* Line 1792 of yacc.c  */
#line 4309 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 476:
/* Line 1792 of yacc.c  */
#line 4316 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 4324 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 4331 "parser.y"
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
#line 4354 "parser.y"
    { (yyval) = NULL; }
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 4357 "parser.y"
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
#line 4372 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 4373 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 4378 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 4384 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 4386 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 4391 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 4402 "parser.y"
    {
	check_repeated ("JUSTIFIED", SYN_CLAUSE_8, &check_pic_duplicate);
	current_field->flag_justified = 1;
  }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 4413 "parser.y"
    {
	check_repeated ("SYNCHRONIZED", SYN_CLAUSE_9, &check_pic_duplicate);
	current_field->flag_synchronized = 1;
  }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 4423 "parser.y"
    {
	/* Stay quiet on this
	PENDING ("SYNCHRONIZED RIGHT");
	*/
  }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 4435 "parser.y"
    {
	check_repeated ("BLANK", SYN_CLAUSE_10, &check_pic_duplicate);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 4446 "parser.y"
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
#line 4474 "parser.y"
    {
	check_repeated ("VALUE", SYN_CLAUSE_12, &check_pic_duplicate);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 4482 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 4483 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 4487 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 4488 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 4493 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 4506 "parser.y"
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
#line 4519 "parser.y"
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
#line 4540 "parser.y"
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
#line 4549 "parser.y"
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
#line 4564 "parser.y"
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
#line 4573 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 4585 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 513:
/* Line 1792 of yacc.c  */
#line 4591 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 4602 "parser.y"
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
#line 4620 "parser.y"
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
#line 4633 "parser.y"
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
#line 4651 "parser.y"
    {
	yyerrok;
  }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 4658 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1, &check_duplicate);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 525:
/* Line 1792 of yacc.c  */
#line 4664 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2, &check_duplicate);
  }
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 4675 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3, &check_duplicate);
  }
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 4688 "parser.y"
    {
      current_report->control_final = 1;
  }
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 4700 "parser.y"
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), current_report->controls);
  }
    break;

  case 536:
/* Line 1792 of yacc.c  */
#line 4711 "parser.y"
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
#line 4750 "parser.y"
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
#line 4760 "parser.y"
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
#line 4770 "parser.y"
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
#line 4804 "parser.y"
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
#line 4816 "parser.y"
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
#line 4827 "parser.y"
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
#line 4838 "parser.y"
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
#line 4849 "parser.y"
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
#line 4860 "parser.y"
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
#line 4875 "parser.y"
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
#line 4920 "parser.y"
    {
	check_repeated ("TYPE", SYN_CLAUSE_16, &check_pic_duplicate);
  }
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 4927 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 4931 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 4937 "parser.y"
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 4944 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 4948 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 4954 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 4958 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 4963 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (3)]);
      current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 4969 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 4975 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 4979 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 4984 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 4988 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_flag |= COB_REPORT_ALL;
  }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 4996 "parser.y"
    {
	check_repeated ("NEXT GROUP", SYN_CLAUSE_17, &check_pic_duplicate);
  }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 5003 "parser.y"
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
#line 5012 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 5017 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 5022 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
    break;

  case 598:
/* Line 1792 of yacc.c  */
#line 5035 "parser.y"
    {
	check_repeated ("SUM", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->report_sum_list = (yyvsp[(3) - (4)]);
	build_sum_counter( current_report, current_field);
  }
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 5045 "parser.y"
    {
      current_field->report_sum_upon = (yyvsp[(2) - (2)]);
  }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 5052 "parser.y"
    {
      current_field->report_reset = (yyvsp[(1) - (1)]);
  }
    break;

  case 603:
/* Line 1792 of yacc.c  */
#line 5056 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 5063 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_when = (yyvsp[(3) - (3)]);
  }
    break;

  case 605:
/* Line 1792 of yacc.c  */
#line 5068 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
  }
    break;

  case 606:
/* Line 1792 of yacc.c  */
#line 5074 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 607:
/* Line 1792 of yacc.c  */
#line 5081 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
  }
    break;

  case 608:
/* Line 1792 of yacc.c  */
#line 5087 "parser.y"
    {
	check_repeated ("PRESENT", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 609:
/* Line 1792 of yacc.c  */
#line 5097 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
  }
    break;

  case 610:
/* Line 1792 of yacc.c  */
#line 5101 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_NEGATE;
  }
    break;

  case 613:
/* Line 1792 of yacc.c  */
#line 5113 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 614:
/* Line 1792 of yacc.c  */
#line 5117 "parser.y"
    {
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 617:
/* Line 1792 of yacc.c  */
#line 5129 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_LINE;
  }
    break;

  case 621:
/* Line 1792 of yacc.c  */
#line 5145 "parser.y"
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
    break;

  case 622:
/* Line 1792 of yacc.c  */
#line 5151 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 623:
/* Line 1792 of yacc.c  */
#line 5155 "parser.y"
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
#line 5170 "parser.y"
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
#line 5193 "parser.y"
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
#line 5219 "parser.y"
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
#line 5243 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_LEFT;
  }
    break;

  case 634:
/* Line 1792 of yacc.c  */
#line 5247 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_RIGHT;
  }
    break;

  case 635:
/* Line 1792 of yacc.c  */
#line 5251 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_CENTER;
  }
    break;

  case 636:
/* Line 1792 of yacc.c  */
#line 5258 "parser.y"
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
#line 5287 "parser.y"
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
#line 5319 "parser.y"
    {
	check_repeated ("SOURCE", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->report_source = (yyvsp[(3) - (4)]);
  }
    break;

  case 642:
/* Line 1792 of yacc.c  */
#line 5327 "parser.y"
    {
	check_repeated ("GROUP", SYN_CLAUSE_23, &check_pic_duplicate);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
    break;

  case 643:
/* Line 1792 of yacc.c  */
#line 5335 "parser.y"
    {
	check_repeated ("USAGE", SYN_CLAUSE_24, &check_pic_duplicate);
  }
    break;

  case 645:
/* Line 1792 of yacc.c  */
#line 5344 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 646:
/* Line 1792 of yacc.c  */
#line 5351 "parser.y"
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
#line 5377 "parser.y"
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
#line 5408 "parser.y"
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
#line 5434 "parser.y"
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
#line 5457 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 658:
/* Line 1792 of yacc.c  */
#line 5461 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 659:
/* Line 1792 of yacc.c  */
#line 5465 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 660:
/* Line 1792 of yacc.c  */
#line 5469 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 661:
/* Line 1792 of yacc.c  */
#line 5473 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 662:
/* Line 1792 of yacc.c  */
#line 5477 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 663:
/* Line 1792 of yacc.c  */
#line 5481 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 664:
/* Line 1792 of yacc.c  */
#line 5485 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 665:
/* Line 1792 of yacc.c  */
#line 5489 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 666:
/* Line 1792 of yacc.c  */
#line 5493 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 667:
/* Line 1792 of yacc.c  */
#line 5497 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 668:
/* Line 1792 of yacc.c  */
#line 5501 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 669:
/* Line 1792 of yacc.c  */
#line 5505 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 670:
/* Line 1792 of yacc.c  */
#line 5509 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 671:
/* Line 1792 of yacc.c  */
#line 5513 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 672:
/* Line 1792 of yacc.c  */
#line 5517 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 673:
/* Line 1792 of yacc.c  */
#line 5521 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 674:
/* Line 1792 of yacc.c  */
#line 5526 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 675:
/* Line 1792 of yacc.c  */
#line 5530 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 676:
/* Line 1792 of yacc.c  */
#line 5534 "parser.y"
    {
	check_repeated ("LINE", SYN_CLAUSE_16, &check_pic_duplicate);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 677:
/* Line 1792 of yacc.c  */
#line 5539 "parser.y"
    {
	check_repeated ("COLUMN", SYN_CLAUSE_17, &check_pic_duplicate);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 678:
/* Line 1792 of yacc.c  */
#line 5544 "parser.y"
    {
	check_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18, &check_pic_duplicate);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 679:
/* Line 1792 of yacc.c  */
#line 5549 "parser.y"
    {
	check_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19, &check_pic_duplicate);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 688:
/* Line 1792 of yacc.c  */
#line 5562 "parser.y"
    {
	check_repeated ("USING", SYN_CLAUSE_20, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 689:
/* Line 1792 of yacc.c  */
#line 5569 "parser.y"
    {
	check_repeated ("FROM", SYN_CLAUSE_21, &check_pic_duplicate);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 690:
/* Line 1792 of yacc.c  */
#line 5574 "parser.y"
    {
	check_repeated ("TO", SYN_CLAUSE_22, &check_pic_duplicate);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 695:
/* Line 1792 of yacc.c  */
#line 5593 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 696:
/* Line 1792 of yacc.c  */
#line 5597 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 697:
/* Line 1792 of yacc.c  */
#line 5601 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 698:
/* Line 1792 of yacc.c  */
#line 5608 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 699:
/* Line 1792 of yacc.c  */
#line 5612 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 700:
/* Line 1792 of yacc.c  */
#line 5616 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 701:
/* Line 1792 of yacc.c  */
#line 5624 "parser.y"
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
#line 5635 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 704:
/* Line 1792 of yacc.c  */
#line 5644 "parser.y"
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
#line 5654 "parser.y"
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
#line 5666 "parser.y"
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
#line 5681 "parser.y"
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
#line 5714 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 710:
/* Line 1792 of yacc.c  */
#line 5718 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 711:
/* Line 1792 of yacc.c  */
#line 5723 "parser.y"
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
#line 5731 "parser.y"
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
#line 5740 "parser.y"
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
#line 5750 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 715:
/* Line 1792 of yacc.c  */
#line 5752 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 716:
/* Line 1792 of yacc.c  */
#line 5757 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 718:
/* Line 1792 of yacc.c  */
#line 5766 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 719:
/* Line 1792 of yacc.c  */
#line 5770 "parser.y"
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
#line 5782 "parser.y"
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
#line 5790 "parser.y"
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
#line 5798 "parser.y"
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
#line 5806 "parser.y"
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
#line 5835 "parser.y"
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
#line 5868 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 728:
/* Line 1792 of yacc.c  */
#line 5877 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 729:
/* Line 1792 of yacc.c  */
#line 5883 "parser.y"
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
#line 5911 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 732:
/* Line 1792 of yacc.c  */
#line 5917 "parser.y"
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
#line 5955 "parser.y"
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
#line 5973 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 740:
/* Line 1792 of yacc.c  */
#line 5983 "parser.y"
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
#line 6027 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 744:
/* Line 1792 of yacc.c  */
#line 6038 "parser.y"
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
#line 6086 "parser.y"
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
#line 6098 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 747:
/* Line 1792 of yacc.c  */
#line 6102 "parser.y"
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
#line 6120 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 749:
/* Line 1792 of yacc.c  */
#line 6125 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 750:
/* Line 1792 of yacc.c  */
#line 6130 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 751:
/* Line 1792 of yacc.c  */
#line 6138 "parser.y"
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
#line 6165 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 753:
/* Line 1792 of yacc.c  */
#line 6169 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 803:
/* Line 1792 of yacc.c  */
#line 6225 "parser.y"
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
#line 6239 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 805:
/* Line 1792 of yacc.c  */
#line 6250 "parser.y"
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
#line 6267 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 808:
/* Line 1792 of yacc.c  */
#line 6272 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 809:
/* Line 1792 of yacc.c  */
#line 6276 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 810:
/* Line 1792 of yacc.c  */
#line 6280 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 811:
/* Line 1792 of yacc.c  */
#line 6285 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 812:
/* Line 1792 of yacc.c  */
#line 6290 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 813:
/* Line 1792 of yacc.c  */
#line 6295 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 814:
/* Line 1792 of yacc.c  */
#line 6300 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 815:
/* Line 1792 of yacc.c  */
#line 6304 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 816:
/* Line 1792 of yacc.c  */
#line 6308 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 817:
/* Line 1792 of yacc.c  */
#line 6312 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 818:
/* Line 1792 of yacc.c  */
#line 6316 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 819:
/* Line 1792 of yacc.c  */
#line 6321 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 820:
/* Line 1792 of yacc.c  */
#line 6325 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 821:
/* Line 1792 of yacc.c  */
#line 6329 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 822:
/* Line 1792 of yacc.c  */
#line 6333 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 823:
/* Line 1792 of yacc.c  */
#line 6337 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 824:
/* Line 1792 of yacc.c  */
#line 6341 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 825:
/* Line 1792 of yacc.c  */
#line 6345 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 827:
/* Line 1792 of yacc.c  */
#line 6353 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 830:
/* Line 1792 of yacc.c  */
#line 6364 "parser.y"
    { (yyval) = NULL; }
    break;

  case 831:
/* Line 1792 of yacc.c  */
#line 6365 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 832:
/* Line 1792 of yacc.c  */
#line 6369 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 833:
/* Line 1792 of yacc.c  */
#line 6370 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 834:
/* Line 1792 of yacc.c  */
#line 6371 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 835:
/* Line 1792 of yacc.c  */
#line 6372 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 836:
/* Line 1792 of yacc.c  */
#line 6373 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 837:
/* Line 1792 of yacc.c  */
#line 6377 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 838:
/* Line 1792 of yacc.c  */
#line 6381 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 839:
/* Line 1792 of yacc.c  */
#line 6382 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 843:
/* Line 1792 of yacc.c  */
#line 6391 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 848:
/* Line 1792 of yacc.c  */
#line 6407 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 849:
/* Line 1792 of yacc.c  */
#line 6411 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 850:
/* Line 1792 of yacc.c  */
#line 6417 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 851:
/* Line 1792 of yacc.c  */
#line 6421 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 852:
/* Line 1792 of yacc.c  */
#line 6425 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 853:
/* Line 1792 of yacc.c  */
#line 6429 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 854:
/* Line 1792 of yacc.c  */
#line 6433 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 855:
/* Line 1792 of yacc.c  */
#line 6437 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 856:
/* Line 1792 of yacc.c  */
#line 6441 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 857:
/* Line 1792 of yacc.c  */
#line 6445 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 858:
/* Line 1792 of yacc.c  */
#line 6449 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 859:
/* Line 1792 of yacc.c  */
#line 6453 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 860:
/* Line 1792 of yacc.c  */
#line 6457 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  }
    break;

  case 861:
/* Line 1792 of yacc.c  */
#line 6461 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 862:
/* Line 1792 of yacc.c  */
#line 6465 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 863:
/* Line 1792 of yacc.c  */
#line 6469 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 864:
/* Line 1792 of yacc.c  */
#line 6473 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 865:
/* Line 1792 of yacc.c  */
#line 6477 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 866:
/* Line 1792 of yacc.c  */
#line 6481 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 867:
/* Line 1792 of yacc.c  */
#line 6487 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 868:
/* Line 1792 of yacc.c  */
#line 6491 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 869:
/* Line 1792 of yacc.c  */
#line 6495 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 870:
/* Line 1792 of yacc.c  */
#line 6499 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 871:
/* Line 1792 of yacc.c  */
#line 6503 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 872:
/* Line 1792 of yacc.c  */
#line 6507 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 873:
/* Line 1792 of yacc.c  */
#line 6511 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  }
    break;

  case 876:
/* Line 1792 of yacc.c  */
#line 6523 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 877:
/* Line 1792 of yacc.c  */
#line 6527 "parser.y"
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
#line 6544 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 880:
/* Line 1792 of yacc.c  */
#line 6553 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 881:
/* Line 1792 of yacc.c  */
#line 6557 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 882:
/* Line 1792 of yacc.c  */
#line 6561 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 884:
/* Line 1792 of yacc.c  */
#line 6568 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 885:
/* Line 1792 of yacc.c  */
#line 6575 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 886:
/* Line 1792 of yacc.c  */
#line 6579 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 887:
/* Line 1792 of yacc.c  */
#line 6589 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 889:
/* Line 1792 of yacc.c  */
#line 6598 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 890:
/* Line 1792 of yacc.c  */
#line 6602 "parser.y"
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
#line 6613 "parser.y"
    { (yyval) = NULL; }
    break;

  case 892:
/* Line 1792 of yacc.c  */
#line 6614 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 893:
/* Line 1792 of yacc.c  */
#line 6622 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 897:
/* Line 1792 of yacc.c  */
#line 6636 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 900:
/* Line 1792 of yacc.c  */
#line 6648 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 902:
/* Line 1792 of yacc.c  */
#line 6663 "parser.y"
    {
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
#line 6677 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 904:
/* Line 1792 of yacc.c  */
#line 6682 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 905:
/* Line 1792 of yacc.c  */
#line 6687 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 906:
/* Line 1792 of yacc.c  */
#line 6692 "parser.y"
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
#line 6712 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 908:
/* Line 1792 of yacc.c  */
#line 6716 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 909:
/* Line 1792 of yacc.c  */
#line 6721 "parser.y"
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
#line 6732 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 911:
/* Line 1792 of yacc.c  */
#line 6734 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 912:
/* Line 1792 of yacc.c  */
#line 6739 "parser.y"
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
#line 6747 "parser.y"
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
#line 6773 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 916:
/* Line 1792 of yacc.c  */
#line 6777 "parser.y"
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
#line 6786 "parser.y"
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
#line 6798 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 919:
/* Line 1792 of yacc.c  */
#line 6802 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 6806 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 921:
/* Line 1792 of yacc.c  */
#line 6810 "parser.y"
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
#line 6843 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 927:
/* Line 1792 of yacc.c  */
#line 6848 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 928:
/* Line 1792 of yacc.c  */
#line 6855 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 929:
/* Line 1792 of yacc.c  */
#line 6860 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 930:
/* Line 1792 of yacc.c  */
#line 6867 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 931:
/* Line 1792 of yacc.c  */
#line 6871 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 932:
/* Line 1792 of yacc.c  */
#line 6881 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 934:
/* Line 1792 of yacc.c  */
#line 6889 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 935:
/* Line 1792 of yacc.c  */
#line 6893 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 936:
/* Line 1792 of yacc.c  */
#line 6903 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 938:
/* Line 1792 of yacc.c  */
#line 6911 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 939:
/* Line 1792 of yacc.c  */
#line 6916 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 6923 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 941:
/* Line 1792 of yacc.c  */
#line 6924 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 942:
/* Line 1792 of yacc.c  */
#line 6925 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 6926 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 944:
/* Line 1792 of yacc.c  */
#line 6927 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 945:
/* Line 1792 of yacc.c  */
#line 6935 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 947:
/* Line 1792 of yacc.c  */
#line 6944 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 948:
/* Line 1792 of yacc.c  */
#line 6951 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 949:
/* Line 1792 of yacc.c  */
#line 6955 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 950:
/* Line 1792 of yacc.c  */
#line 6965 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 951:
/* Line 1792 of yacc.c  */
#line 6976 "parser.y"
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
#line 6993 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 954:
/* Line 1792 of yacc.c  */
#line 7002 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (4)]));
  }
    break;

  case 956:
/* Line 1792 of yacc.c  */
#line 7010 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 957:
/* Line 1792 of yacc.c  */
#line 7015 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 958:
/* Line 1792 of yacc.c  */
#line 7023 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 959:
/* Line 1792 of yacc.c  */
#line 7027 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 960:
/* Line 1792 of yacc.c  */
#line 7037 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 962:
/* Line 1792 of yacc.c  */
#line 7047 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 963:
/* Line 1792 of yacc.c  */
#line 7051 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 964:
/* Line 1792 of yacc.c  */
#line 7055 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 965:
/* Line 1792 of yacc.c  */
#line 7059 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 966:
/* Line 1792 of yacc.c  */
#line 7063 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 968:
/* Line 1792 of yacc.c  */
#line 7068 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 970:
/* Line 1792 of yacc.c  */
#line 7078 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 972:
/* Line 1792 of yacc.c  */
#line 7086 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 973:
/* Line 1792 of yacc.c  */
#line 7094 "parser.y"
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
#line 7102 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 975:
/* Line 1792 of yacc.c  */
#line 7106 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 976:
/* Line 1792 of yacc.c  */
#line 7110 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 977:
/* Line 1792 of yacc.c  */
#line 7114 "parser.y"
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
#line 7136 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 984:
/* Line 1792 of yacc.c  */
#line 7142 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 985:
/* Line 1792 of yacc.c  */
#line 7143 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7154 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 989:
/* Line 1792 of yacc.c  */
#line 7158 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7162 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 991:
/* Line 1792 of yacc.c  */
#line 7166 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7170 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7174 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 994:
/* Line 1792 of yacc.c  */
#line 7178 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 995:
/* Line 1792 of yacc.c  */
#line 7182 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 996:
/* Line 1792 of yacc.c  */
#line 7186 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 997:
/* Line 1792 of yacc.c  */
#line 7190 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 998:
/* Line 1792 of yacc.c  */
#line 7194 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 999:
/* Line 1792 of yacc.c  */
#line 7198 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 1000:
/* Line 1792 of yacc.c  */
#line 7202 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 1001:
/* Line 1792 of yacc.c  */
#line 7206 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 1002:
/* Line 1792 of yacc.c  */
#line 7210 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 1003:
/* Line 1792 of yacc.c  */
#line 7214 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 1004:
/* Line 1792 of yacc.c  */
#line 7221 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 1005:
/* Line 1792 of yacc.c  */
#line 7225 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 1006:
/* Line 1792 of yacc.c  */
#line 7235 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 1008:
/* Line 1792 of yacc.c  */
#line 7244 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 1009:
/* Line 1792 of yacc.c  */
#line 7248 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 1010:
/* Line 1792 of yacc.c  */
#line 7252 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 1011:
/* Line 1792 of yacc.c  */
#line 7256 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1012:
/* Line 1792 of yacc.c  */
#line 7260 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1013:
/* Line 1792 of yacc.c  */
#line 7267 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 1014:
/* Line 1792 of yacc.c  */
#line 7271 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 1015:
/* Line 1792 of yacc.c  */
#line 7281 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 1017:
/* Line 1792 of yacc.c  */
#line 7290 "parser.y"
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
#line 7308 "parser.y"
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
#line 7332 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1021:
/* Line 1792 of yacc.c  */
#line 7339 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1022:
/* Line 1792 of yacc.c  */
#line 7341 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1023:
/* Line 1792 of yacc.c  */
#line 7346 "parser.y"
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
#line 7357 "parser.y"
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
#line 7368 "parser.y"
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
#line 7382 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1027:
/* Line 1792 of yacc.c  */
#line 7386 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1028:
/* Line 1792 of yacc.c  */
#line 7392 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1029:
/* Line 1792 of yacc.c  */
#line 7394 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1030:
/* Line 1792 of yacc.c  */
#line 7400 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1031:
/* Line 1792 of yacc.c  */
#line 7409 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1032:
/* Line 1792 of yacc.c  */
#line 7417 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1033:
/* Line 1792 of yacc.c  */
#line 7423 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1034:
/* Line 1792 of yacc.c  */
#line 7430 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1035:
/* Line 1792 of yacc.c  */
#line 7432 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1036:
/* Line 1792 of yacc.c  */
#line 7437 "parser.y"
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
#line 7498 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1038:
/* Line 1792 of yacc.c  */
#line 7499 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1039:
/* Line 1792 of yacc.c  */
#line 7500 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1040:
/* Line 1792 of yacc.c  */
#line 7504 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1041:
/* Line 1792 of yacc.c  */
#line 7505 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1042:
/* Line 1792 of yacc.c  */
#line 7510 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1043:
/* Line 1792 of yacc.c  */
#line 7514 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1044:
/* Line 1792 of yacc.c  */
#line 7524 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1045:
/* Line 1792 of yacc.c  */
#line 7529 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1047:
/* Line 1792 of yacc.c  */
#line 7537 "parser.y"
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
#line 7558 "parser.y"
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
#line 7572 "parser.y"
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
#line 7594 "parser.y"
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
#line 7616 "parser.y"
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
#line 7636 "parser.y"
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
#line 7658 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1054:
/* Line 1792 of yacc.c  */
#line 7659 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1055:
/* Line 1792 of yacc.c  */
#line 7667 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1057:
/* Line 1792 of yacc.c  */
#line 7676 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1058:
/* Line 1792 of yacc.c  */
#line 7686 "parser.y"
    {
	begin_statement ("GENERATE", 0);
  }
    break;

  case 1060:
/* Line 1792 of yacc.c  */
#line 7695 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
		cb_emit_generate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1061:
/* Line 1792 of yacc.c  */
#line 7707 "parser.y"
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
#line 7720 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1064:
/* Line 1792 of yacc.c  */
#line 7728 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1065:
/* Line 1792 of yacc.c  */
#line 7733 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1066:
/* Line 1792 of yacc.c  */
#line 7744 "parser.y"
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
#line 7759 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 7768 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1070:
/* Line 1792 of yacc.c  */
#line 7772 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1071:
/* Line 1792 of yacc.c  */
#line 7776 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1072:
/* Line 1792 of yacc.c  */
#line 7783 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1073:
/* Line 1792 of yacc.c  */
#line 7787 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1074:
/* Line 1792 of yacc.c  */
#line 7797 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1076:
/* Line 1792 of yacc.c  */
#line 7806 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1077:
/* Line 1792 of yacc.c  */
#line 7812 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 7813 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 7817 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 7818 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1081:
/* Line 1792 of yacc.c  */
#line 7819 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1082:
/* Line 1792 of yacc.c  */
#line 7824 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1083:
/* Line 1792 of yacc.c  */
#line 7828 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1084:
/* Line 1792 of yacc.c  */
#line 7835 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1085:
/* Line 1792 of yacc.c  */
#line 7840 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1086:
/* Line 1792 of yacc.c  */
#line 7847 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1087:
/* Line 1792 of yacc.c  */
#line 7853 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1088:
/* Line 1792 of yacc.c  */
#line 7854 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1089:
/* Line 1792 of yacc.c  */
#line 7855 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1090:
/* Line 1792 of yacc.c  */
#line 7856 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1091:
/* Line 1792 of yacc.c  */
#line 7857 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 7858 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1093:
/* Line 1792 of yacc.c  */
#line 7859 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1094:
/* Line 1792 of yacc.c  */
#line 7864 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1095:
/* Line 1792 of yacc.c  */
#line 7868 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1096:
/* Line 1792 of yacc.c  */
#line 7877 "parser.y"
    {
	begin_statement ("INITIATE", 0);
  }
    break;

  case 1098:
/* Line 1792 of yacc.c  */
#line 7885 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1099:
/* Line 1792 of yacc.c  */
#line 7892 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1100:
/* Line 1792 of yacc.c  */
#line 7904 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1103:
/* Line 1792 of yacc.c  */
#line 7917 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1104:
/* Line 1792 of yacc.c  */
#line 7921 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1105:
/* Line 1792 of yacc.c  */
#line 7925 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 7941 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 7945 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1112:
/* Line 1792 of yacc.c  */
#line 7955 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1113:
/* Line 1792 of yacc.c  */
#line 7965 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1114:
/* Line 1792 of yacc.c  */
#line 7973 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 7974 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 7978 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1117:
/* Line 1792 of yacc.c  */
#line 7979 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1118:
/* Line 1792 of yacc.c  */
#line 7980 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1119:
/* Line 1792 of yacc.c  */
#line 7981 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 7982 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1121:
/* Line 1792 of yacc.c  */
#line 7983 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 7987 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1123:
/* Line 1792 of yacc.c  */
#line 7988 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1124:
/* Line 1792 of yacc.c  */
#line 7993 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 7998 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1126:
/* Line 1792 of yacc.c  */
#line 8004 "parser.y"
    { /* Nothing */ }
    break;

  case 1127:
/* Line 1792 of yacc.c  */
#line 8005 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1128:
/* Line 1792 of yacc.c  */
#line 8006 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1129:
/* Line 1792 of yacc.c  */
#line 8007 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1130:
/* Line 1792 of yacc.c  */
#line 8008 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1131:
/* Line 1792 of yacc.c  */
#line 8013 "parser.y"
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
#line 8040 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1133:
/* Line 1792 of yacc.c  */
#line 8044 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1134:
/* Line 1792 of yacc.c  */
#line 8051 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 8055 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1136:
/* Line 1792 of yacc.c  */
#line 8064 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1138:
/* Line 1792 of yacc.c  */
#line 8076 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1140:
/* Line 1792 of yacc.c  */
#line 8084 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1141:
/* Line 1792 of yacc.c  */
#line 8088 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1142:
/* Line 1792 of yacc.c  */
#line 8098 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8107 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8111 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8118 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1147:
/* Line 1792 of yacc.c  */
#line 8122 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1148:
/* Line 1792 of yacc.c  */
#line 8132 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1150:
/* Line 1792 of yacc.c  */
#line 8140 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(2) - (4)]) && (yyvsp[(4) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[(4) - (4)])) {
		x = (yyvsp[(4) - (4)]);
	} else {
		x = (yyvsp[(2) - (4)]);
	}
	for (l = (yyvsp[(3) - (4)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[(1) - (4)]), x);
		}
	}
  }
    break;

  case 1151:
/* Line 1792 of yacc.c  */
#line 8161 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(3) - (5)]) && (yyvsp[(5) - (5)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s and %s are mutually exclusive"), "SHARING", "LOCK clauses");
	}
	if ((yyvsp[(5) - (5)])) {
		x = (yyvsp[(5) - (5)]);
	} else {
		x = (yyvsp[(3) - (5)]);
	}
	for (l = (yyvsp[(4) - (5)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			begin_implicit_statement ();
			cb_emit_open (CB_VALUE (l), (yyvsp[(2) - (5)]), x);
		}
	}
  }
    break;

  case 1152:
/* Line 1792 of yacc.c  */
#line 8184 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1153:
/* Line 1792 of yacc.c  */
#line 8185 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8186 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8187 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1156:
/* Line 1792 of yacc.c  */
#line 8191 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8192 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1158:
/* Line 1792 of yacc.c  */
#line 8196 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8197 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8198 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1161:
/* Line 1792 of yacc.c  */
#line 8200 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1162:
/* Line 1792 of yacc.c  */
#line 8211 "parser.y"
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
#line 8223 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8229 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1166:
/* Line 1792 of yacc.c  */
#line 8236 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1167:
/* Line 1792 of yacc.c  */
#line 8241 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
	cobc_cs_check = 0;
  }
    break;

  case 1168:
/* Line 1792 of yacc.c  */
#line 8250 "parser.y"
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
#line 8258 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1170:
/* Line 1792 of yacc.c  */
#line 8265 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1171:
/* Line 1792 of yacc.c  */
#line 8269 "parser.y"
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
#line 8282 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8289 "parser.y"
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
#line 8300 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1175:
/* Line 1792 of yacc.c  */
#line 8304 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1176:
/* Line 1792 of yacc.c  */
#line 8309 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1177:
/* Line 1792 of yacc.c  */
#line 8313 "parser.y"
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
#line 8324 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1179:
/* Line 1792 of yacc.c  */
#line 8330 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1180:
/* Line 1792 of yacc.c  */
#line 8331 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1181:
/* Line 1792 of yacc.c  */
#line 8335 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1182:
/* Line 1792 of yacc.c  */
#line 8336 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1183:
/* Line 1792 of yacc.c  */
#line 8339 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1184:
/* Line 1792 of yacc.c  */
#line 8341 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1185:
/* Line 1792 of yacc.c  */
#line 8346 "parser.y"
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
#line 8385 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1188:
/* Line 1792 of yacc.c  */
#line 8394 "parser.y"
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
#line 8422 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1190:
/* Line 1792 of yacc.c  */
#line 8423 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1191:
/* Line 1792 of yacc.c  */
#line 8428 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8432 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1193:
/* Line 1792 of yacc.c  */
#line 8436 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8440 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8452 "parser.y"
    {
	PENDING ("ADVANCING ON LOCK");
  }
    break;

  case 1201:
/* Line 1792 of yacc.c  */
#line 8465 "parser.y"
    {
	PENDING ("RETRY");
	cobc_cs_check = 0;
  }
    break;

  case 1207:
/* Line 1792 of yacc.c  */
#line 8485 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 8489 "parser.y"
    {
   (yyval) = cb_int5;
  }
    break;

  case 1209:
/* Line 1792 of yacc.c  */
#line 8493 "parser.y"
    {
	/* TO-DO: Merge with RETRY phrase */
	(yyval) = cb_int4;
  }
    break;

  case 1210:
/* Line 1792 of yacc.c  */
#line 8500 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 8501 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1214:
/* Line 1792 of yacc.c  */
#line 8511 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1215:
/* Line 1792 of yacc.c  */
#line 8515 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1216:
/* Line 1792 of yacc.c  */
#line 8525 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1217:
/* Line 1792 of yacc.c  */
#line 8535 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1219:
/* Line 1792 of yacc.c  */
#line 8543 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1220:
/* Line 1792 of yacc.c  */
#line 8553 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1221:
/* Line 1792 of yacc.c  */
#line 8563 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1223:
/* Line 1792 of yacc.c  */
#line 8572 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1224:
/* Line 1792 of yacc.c  */
#line 8579 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1225:
/* Line 1792 of yacc.c  */
#line 8583 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1226:
/* Line 1792 of yacc.c  */
#line 8593 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1228:
/* Line 1792 of yacc.c  */
#line 8605 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
	start_debug = save_debug;
  }
    break;

  case 1229:
/* Line 1792 of yacc.c  */
#line 8613 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1231:
/* Line 1792 of yacc.c  */
#line 8621 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1232:
/* Line 1792 of yacc.c  */
#line 8625 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1233:
/* Line 1792 of yacc.c  */
#line 8632 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1234:
/* Line 1792 of yacc.c  */
#line 8636 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1235:
/* Line 1792 of yacc.c  */
#line 8646 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 8657 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1238:
/* Line 1792 of yacc.c  */
#line 8666 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1239:
/* Line 1792 of yacc.c  */
#line 8671 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1240:
/* Line 1792 of yacc.c  */
#line 8678 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1241:
/* Line 1792 of yacc.c  */
#line 8679 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1242:
/* Line 1792 of yacc.c  */
#line 8684 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1243:
/* Line 1792 of yacc.c  */
#line 8689 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1244:
/* Line 1792 of yacc.c  */
#line 8696 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 8700 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1246:
/* Line 1792 of yacc.c  */
#line 8708 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1247:
/* Line 1792 of yacc.c  */
#line 8715 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1248:
/* Line 1792 of yacc.c  */
#line 8719 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1249:
/* Line 1792 of yacc.c  */
#line 8729 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1250:
/* Line 1792 of yacc.c  */
#line 8736 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1257:
/* Line 1792 of yacc.c  */
#line 8751 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1258:
/* Line 1792 of yacc.c  */
#line 8752 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1259:
/* Line 1792 of yacc.c  */
#line 8756 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1260:
/* Line 1792 of yacc.c  */
#line 8757 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 8764 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1262:
/* Line 1792 of yacc.c  */
#line 8773 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1265:
/* Line 1792 of yacc.c  */
#line 8785 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1266:
/* Line 1792 of yacc.c  */
#line 8789 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1267:
/* Line 1792 of yacc.c  */
#line 8793 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1268:
/* Line 1792 of yacc.c  */
#line 8797 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1269:
/* Line 1792 of yacc.c  */
#line 8801 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1270:
/* Line 1792 of yacc.c  */
#line 8805 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1271:
/* Line 1792 of yacc.c  */
#line 8809 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1272:
/* Line 1792 of yacc.c  */
#line 8813 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1273:
/* Line 1792 of yacc.c  */
#line 8822 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1274:
/* Line 1792 of yacc.c  */
#line 8826 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1275:
/* Line 1792 of yacc.c  */
#line 8835 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1278:
/* Line 1792 of yacc.c  */
#line 8849 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1281:
/* Line 1792 of yacc.c  */
#line 8863 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1282:
/* Line 1792 of yacc.c  */
#line 8867 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1283:
/* Line 1792 of yacc.c  */
#line 8877 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1285:
/* Line 1792 of yacc.c  */
#line 8885 "parser.y"
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
#line 8906 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1287:
/* Line 1792 of yacc.c  */
#line 8915 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1288:
/* Line 1792 of yacc.c  */
#line 8920 "parser.y"
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
#line 8938 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1290:
/* Line 1792 of yacc.c  */
#line 8939 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1292:
/* Line 1792 of yacc.c  */
#line 8944 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1293:
/* Line 1792 of yacc.c  */
#line 8951 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1294:
/* Line 1792 of yacc.c  */
#line 8952 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 8957 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1296:
/* Line 1792 of yacc.c  */
#line 8963 "parser.y"
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
#line 8973 "parser.y"
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
#line 8988 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1299:
/* Line 1792 of yacc.c  */
#line 8994 "parser.y"
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
#line 9004 "parser.y"
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
#line 9020 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1303:
/* Line 1792 of yacc.c  */
#line 9030 "parser.y"
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
#line 9042 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1305:
/* Line 1792 of yacc.c  */
#line 9046 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1306:
/* Line 1792 of yacc.c  */
#line 9053 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1307:
/* Line 1792 of yacc.c  */
#line 9057 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1308:
/* Line 1792 of yacc.c  */
#line 9062 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1309:
/* Line 1792 of yacc.c  */
#line 9067 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1310:
/* Line 1792 of yacc.c  */
#line 9074 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1311:
/* Line 1792 of yacc.c  */
#line 9075 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1312:
/* Line 1792 of yacc.c  */
#line 9076 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1313:
/* Line 1792 of yacc.c  */
#line 9077 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1314:
/* Line 1792 of yacc.c  */
#line 9078 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1315:
/* Line 1792 of yacc.c  */
#line 9079 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1316:
/* Line 1792 of yacc.c  */
#line 9084 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1319:
/* Line 1792 of yacc.c  */
#line 9097 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1320:
/* Line 1792 of yacc.c  */
#line 9101 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1321:
/* Line 1792 of yacc.c  */
#line 9111 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1322:
/* Line 1792 of yacc.c  */
#line 9115 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1323:
/* Line 1792 of yacc.c  */
#line 9121 "parser.y"
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
#line 9133 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1325:
/* Line 1792 of yacc.c  */
#line 9137 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1326:
/* Line 1792 of yacc.c  */
#line 9141 "parser.y"
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
#line 9149 "parser.y"
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
#line 9160 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1329:
/* Line 1792 of yacc.c  */
#line 9164 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1330:
/* Line 1792 of yacc.c  */
#line 9170 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1331:
/* Line 1792 of yacc.c  */
#line 9171 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1332:
/* Line 1792 of yacc.c  */
#line 9172 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1333:
/* Line 1792 of yacc.c  */
#line 9173 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1334:
/* Line 1792 of yacc.c  */
#line 9180 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1336:
/* Line 1792 of yacc.c  */
#line 9189 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1337:
/* Line 1792 of yacc.c  */
#line 9195 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9196 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1339:
/* Line 1792 of yacc.c  */
#line 9200 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1340:
/* Line 1792 of yacc.c  */
#line 9201 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1341:
/* Line 1792 of yacc.c  */
#line 9202 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1342:
/* Line 1792 of yacc.c  */
#line 9206 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1343:
/* Line 1792 of yacc.c  */
#line 9207 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1344:
/* Line 1792 of yacc.c  */
#line 9212 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1345:
/* Line 1792 of yacc.c  */
#line 9216 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1346:
/* Line 1792 of yacc.c  */
#line 9226 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1348:
/* Line 1792 of yacc.c  */
#line 9235 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1349:
/* Line 1792 of yacc.c  */
#line 9239 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1350:
/* Line 1792 of yacc.c  */
#line 9243 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1351:
/* Line 1792 of yacc.c  */
#line 9250 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1352:
/* Line 1792 of yacc.c  */
#line 9254 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1353:
/* Line 1792 of yacc.c  */
#line 9264 "parser.y"
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
#line 9282 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
  }
    break;

  case 1358:
/* Line 1792 of yacc.c  */
#line 9290 "parser.y"
    {
	begin_implicit_statement ();
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1359:
/* Line 1792 of yacc.c  */
#line 9298 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
		cb_emit_terminate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1360:
/* Line 1792 of yacc.c  */
#line 9310 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1362:
/* Line 1792 of yacc.c  */
#line 9318 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1363:
/* Line 1792 of yacc.c  */
#line 9331 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1365:
/* Line 1792 of yacc.c  */
#line 9339 "parser.y"
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
#line 9362 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1371:
/* Line 1792 of yacc.c  */
#line 9372 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1372:
/* Line 1792 of yacc.c  */
#line 9378 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1373:
/* Line 1792 of yacc.c  */
#line 9380 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1374:
/* Line 1792 of yacc.c  */
#line 9384 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1375:
/* Line 1792 of yacc.c  */
#line 9386 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1376:
/* Line 1792 of yacc.c  */
#line 9391 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1377:
/* Line 1792 of yacc.c  */
#line 9397 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1378:
/* Line 1792 of yacc.c  */
#line 9399 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1379:
/* Line 1792 of yacc.c  */
#line 9404 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1380:
/* Line 1792 of yacc.c  */
#line 9410 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1381:
/* Line 1792 of yacc.c  */
#line 9411 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1382:
/* Line 1792 of yacc.c  */
#line 9415 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1383:
/* Line 1792 of yacc.c  */
#line 9416 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1384:
/* Line 1792 of yacc.c  */
#line 9420 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1385:
/* Line 1792 of yacc.c  */
#line 9421 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1386:
/* Line 1792 of yacc.c  */
#line 9426 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1387:
/* Line 1792 of yacc.c  */
#line 9430 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1388:
/* Line 1792 of yacc.c  */
#line 9440 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1395:
/* Line 1792 of yacc.c  */
#line 9458 "parser.y"
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
#line 9483 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1397:
/* Line 1792 of yacc.c  */
#line 9487 "parser.y"
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
#line 9499 "parser.y"
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
#line 9509 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1400:
/* Line 1792 of yacc.c  */
#line 9514 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1401:
/* Line 1792 of yacc.c  */
#line 9519 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1402:
/* Line 1792 of yacc.c  */
#line 9524 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1403:
/* Line 1792 of yacc.c  */
#line 9532 "parser.y"
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
#line 9575 "parser.y"
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
#line 9615 "parser.y"
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
#line 9625 "parser.y"
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
#line 9655 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1414:
/* Line 1792 of yacc.c  */
#line 9664 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1415:
/* Line 1792 of yacc.c  */
#line 9670 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1416:
/* Line 1792 of yacc.c  */
#line 9680 "parser.y"
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
#line 9711 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1420:
/* Line 1792 of yacc.c  */
#line 9727 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1422:
/* Line 1792 of yacc.c  */
#line 9739 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (6)]))) {
		cb_emit_write ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1423:
/* Line 1792 of yacc.c  */
#line 9748 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1424:
/* Line 1792 of yacc.c  */
#line 9749 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1425:
/* Line 1792 of yacc.c  */
#line 9754 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1426:
/* Line 1792 of yacc.c  */
#line 9758 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1427:
/* Line 1792 of yacc.c  */
#line 9762 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 9766 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1429:
/* Line 1792 of yacc.c  */
#line 9772 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1430:
/* Line 1792 of yacc.c  */
#line 9773 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1433:
/* Line 1792 of yacc.c  */
#line 9783 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1434:
/* Line 1792 of yacc.c  */
#line 9787 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1437:
/* Line 1792 of yacc.c  */
#line 9804 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1439:
/* Line 1792 of yacc.c  */
#line 9814 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1442:
/* Line 1792 of yacc.c  */
#line 9827 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1444:
/* Line 1792 of yacc.c  */
#line 9837 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1447:
/* Line 1792 of yacc.c  */
#line 9852 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1449:
/* Line 1792 of yacc.c  */
#line 9862 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1452:
/* Line 1792 of yacc.c  */
#line 9879 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1454:
/* Line 1792 of yacc.c  */
#line 9890 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1460:
/* Line 1792 of yacc.c  */
#line 9913 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 9922 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1465:
/* Line 1792 of yacc.c  */
#line 9939 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1466:
/* Line 1792 of yacc.c  */
#line 9948 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1469:
/* Line 1792 of yacc.c  */
#line 9965 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1471:
/* Line 1792 of yacc.c  */
#line 9975 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1472:
/* Line 1792 of yacc.c  */
#line 9985 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1473:
/* Line 1792 of yacc.c  */
#line 9989 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1474:
/* Line 1792 of yacc.c  */
#line 9999 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1475:
/* Line 1792 of yacc.c  */
#line 10006 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1476:
/* Line 1792 of yacc.c  */
#line 10012 "parser.y"
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
    break;

  case 1477:
/* Line 1792 of yacc.c  */
#line 10017 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1481:
/* Line 1792 of yacc.c  */
#line 10030 "parser.y"
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
#line 10038 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1483:
/* Line 1792 of yacc.c  */
#line 10039 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1484:
/* Line 1792 of yacc.c  */
#line 10041 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1485:
/* Line 1792 of yacc.c  */
#line 10042 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1486:
/* Line 1792 of yacc.c  */
#line 10043 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1487:
/* Line 1792 of yacc.c  */
#line 10044 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1488:
/* Line 1792 of yacc.c  */
#line 10045 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 10047 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1490:
/* Line 1792 of yacc.c  */
#line 10048 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1491:
/* Line 1792 of yacc.c  */
#line 10049 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1492:
/* Line 1792 of yacc.c  */
#line 10050 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1493:
/* Line 1792 of yacc.c  */
#line 10051 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1494:
/* Line 1792 of yacc.c  */
#line 10052 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1495:
/* Line 1792 of yacc.c  */
#line 10054 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1496:
/* Line 1792 of yacc.c  */
#line 10055 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1497:
/* Line 1792 of yacc.c  */
#line 10056 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1498:
/* Line 1792 of yacc.c  */
#line 10058 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1499:
/* Line 1792 of yacc.c  */
#line 10059 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1500:
/* Line 1792 of yacc.c  */
#line 10060 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1501:
/* Line 1792 of yacc.c  */
#line 10061 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1502:
/* Line 1792 of yacc.c  */
#line 10062 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1503:
/* Line 1792 of yacc.c  */
#line 10065 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1504:
/* Line 1792 of yacc.c  */
#line 10066 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1513:
/* Line 1792 of yacc.c  */
#line 10096 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1514:
/* Line 1792 of yacc.c  */
#line 10100 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1518:
/* Line 1792 of yacc.c  */
#line 10111 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1519:
/* Line 1792 of yacc.c  */
#line 10112 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1520:
/* Line 1792 of yacc.c  */
#line 10113 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10117 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1522:
/* Line 1792 of yacc.c  */
#line 10118 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1523:
/* Line 1792 of yacc.c  */
#line 10119 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1524:
/* Line 1792 of yacc.c  */
#line 10124 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1525:
/* Line 1792 of yacc.c  */
#line 10127 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1526:
/* Line 1792 of yacc.c  */
#line 10131 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1527:
/* Line 1792 of yacc.c  */
#line 10132 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1528:
/* Line 1792 of yacc.c  */
#line 10133 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1529:
/* Line 1792 of yacc.c  */
#line 10136 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1530:
/* Line 1792 of yacc.c  */
#line 10137 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1531:
/* Line 1792 of yacc.c  */
#line 10148 "parser.y"
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
#line 10160 "parser.y"
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
#line 10169 "parser.y"
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
#line 10185 "parser.y"
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
#line 10194 "parser.y"
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
#line 10210 "parser.y"
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
#line 10224 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1538:
/* Line 1792 of yacc.c  */
#line 10226 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1539:
/* Line 1792 of yacc.c  */
#line 10231 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1540:
/* Line 1792 of yacc.c  */
#line 10239 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1541:
/* Line 1792 of yacc.c  */
#line 10246 "parser.y"
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
#line 10266 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1543:
/* Line 1792 of yacc.c  */
#line 10270 "parser.y"
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
#line 10291 "parser.y"
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
#line 10332 "parser.y"
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
#line 10345 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10347 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1548:
/* Line 1792 of yacc.c  */
#line 10351 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1549:
/* Line 1792 of yacc.c  */
#line 10357 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1550:
/* Line 1792 of yacc.c  */
#line 10359 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1551:
/* Line 1792 of yacc.c  */
#line 10364 "parser.y"
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
#line 10378 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1555:
/* Line 1792 of yacc.c  */
#line 10385 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1556:
/* Line 1792 of yacc.c  */
#line 10395 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1557:
/* Line 1792 of yacc.c  */
#line 10396 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1558:
/* Line 1792 of yacc.c  */
#line 10401 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1559:
/* Line 1792 of yacc.c  */
#line 10409 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1560:
/* Line 1792 of yacc.c  */
#line 10417 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1561:
/* Line 1792 of yacc.c  */
#line 10421 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1562:
/* Line 1792 of yacc.c  */
#line 10428 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1565:
/* Line 1792 of yacc.c  */
#line 10444 "parser.y"
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
#line 10458 "parser.y"
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
#line 10475 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1568:
/* Line 1792 of yacc.c  */
#line 10479 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1571:
/* Line 1792 of yacc.c  */
#line 10488 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1572:
/* Line 1792 of yacc.c  */
#line 10495 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1573:
/* Line 1792 of yacc.c  */
#line 10499 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1578:
/* Line 1792 of yacc.c  */
#line 10510 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1579:
/* Line 1792 of yacc.c  */
#line 10514 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1580:
/* Line 1792 of yacc.c  */
#line 10518 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1581:
/* Line 1792 of yacc.c  */
#line 10522 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1582:
/* Line 1792 of yacc.c  */
#line 10526 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1583:
/* Line 1792 of yacc.c  */
#line 10530 "parser.y"
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
#line 10551 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1585:
/* Line 1792 of yacc.c  */
#line 10555 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1593:
/* Line 1792 of yacc.c  */
#line 10572 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1594:
/* Line 1792 of yacc.c  */
#line 10576 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1595:
/* Line 1792 of yacc.c  */
#line 10580 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1611:
/* Line 1792 of yacc.c  */
#line 10627 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1619:
/* Line 1792 of yacc.c  */
#line 10651 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1620:
/* Line 1792 of yacc.c  */
#line 10655 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1621:
/* Line 1792 of yacc.c  */
#line 10659 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 10660 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1623:
/* Line 1792 of yacc.c  */
#line 10664 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1624:
/* Line 1792 of yacc.c  */
#line 10669 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 10676 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1626:
/* Line 1792 of yacc.c  */
#line 10683 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1627:
/* Line 1792 of yacc.c  */
#line 10690 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1628:
/* Line 1792 of yacc.c  */
#line 10700 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1629:
/* Line 1792 of yacc.c  */
#line 10704 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1630:
/* Line 1792 of yacc.c  */
#line 10711 "parser.y"
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
#line 10721 "parser.y"
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
#line 10731 "parser.y"
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
#line 10741 "parser.y"
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
#line 10754 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1635:
/* Line 1792 of yacc.c  */
#line 10758 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1636:
/* Line 1792 of yacc.c  */
#line 10766 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1637:
/* Line 1792 of yacc.c  */
#line 10774 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1638:
/* Line 1792 of yacc.c  */
#line 10778 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1639:
/* Line 1792 of yacc.c  */
#line 10788 "parser.y"
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
#line 10803 "parser.y"
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
#line 10826 "parser.y"
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
#line 10846 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1643:
/* Line 1792 of yacc.c  */
#line 10853 "parser.y"
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
#line 10868 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 10869 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1646:
/* Line 1792 of yacc.c  */
#line 10870 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1647:
/* Line 1792 of yacc.c  */
#line 10871 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1648:
/* Line 1792 of yacc.c  */
#line 10872 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 10873 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1650:
/* Line 1792 of yacc.c  */
#line 10878 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1651:
/* Line 1792 of yacc.c  */
#line 10882 "parser.y"
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
#line 10899 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 10903 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1654:
/* Line 1792 of yacc.c  */
#line 10909 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1655:
/* Line 1792 of yacc.c  */
#line 10910 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1656:
/* Line 1792 of yacc.c  */
#line 10911 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1657:
/* Line 1792 of yacc.c  */
#line 10912 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1658:
/* Line 1792 of yacc.c  */
#line 10913 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1659:
/* Line 1792 of yacc.c  */
#line 10914 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1660:
/* Line 1792 of yacc.c  */
#line 10915 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1661:
/* Line 1792 of yacc.c  */
#line 10922 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1662:
/* Line 1792 of yacc.c  */
#line 10926 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1663:
/* Line 1792 of yacc.c  */
#line 10930 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1664:
/* Line 1792 of yacc.c  */
#line 10934 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1665:
/* Line 1792 of yacc.c  */
#line 10938 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1666:
/* Line 1792 of yacc.c  */
#line 10942 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1667:
/* Line 1792 of yacc.c  */
#line 10946 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 10950 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 10954 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 10958 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 10962 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 10966 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1682:
/* Line 1792 of yacc.c  */
#line 10991 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1683:
/* Line 1792 of yacc.c  */
#line 10995 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 10999 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1685:
/* Line 1792 of yacc.c  */
#line 11006 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 11010 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1687:
/* Line 1792 of yacc.c  */
#line 11014 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 11021 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 11028 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1690:
/* Line 1792 of yacc.c  */
#line 11035 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 11045 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 11052 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1693:
/* Line 1792 of yacc.c  */
#line 11062 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 11069 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1695:
/* Line 1792 of yacc.c  */
#line 11079 "parser.y"
    {	  
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1696:
/* Line 1792 of yacc.c  */
#line 11083 "parser.y"
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
#line 11096 "parser.y"
    {	  
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1698:
/* Line 1792 of yacc.c  */
#line 11100 "parser.y"
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
#line 11114 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1700:
/* Line 1792 of yacc.c  */
#line 11122 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1701:
/* Line 1792 of yacc.c  */
#line 11123 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1702:
/* Line 1792 of yacc.c  */
#line 11127 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1703:
/* Line 1792 of yacc.c  */
#line 11128 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1704:
/* Line 1792 of yacc.c  */
#line 11132 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1705:
/* Line 1792 of yacc.c  */
#line 11133 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1706:
/* Line 1792 of yacc.c  */
#line 11138 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1707:
/* Line 1792 of yacc.c  */
#line 11142 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1708:
/* Line 1792 of yacc.c  */
#line 11149 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1709:
/* Line 1792 of yacc.c  */
#line 11153 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1710:
/* Line 1792 of yacc.c  */
#line 11160 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1711:
/* Line 1792 of yacc.c  */
#line 11161 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1712:
/* Line 1792 of yacc.c  */
#line 11162 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1713:
/* Line 1792 of yacc.c  */
#line 11166 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1714:
/* Line 1792 of yacc.c  */
#line 11167 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1715:
/* Line 1792 of yacc.c  */
#line 11171 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1716:
/* Line 1792 of yacc.c  */
#line 11172 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1717:
/* Line 1792 of yacc.c  */
#line 11173 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1718:
/* Line 1792 of yacc.c  */
#line 11178 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1719:
/* Line 1792 of yacc.c  */
#line 11182 "parser.y"
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
#line 11194 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1721:
/* Line 1792 of yacc.c  */
#line 11199 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1722:
/* Line 1792 of yacc.c  */
#line 11207 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1723:
/* Line 1792 of yacc.c  */
#line 11211 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1724:
/* Line 1792 of yacc.c  */
#line 11215 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1725:
/* Line 1792 of yacc.c  */
#line 11219 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1726:
/* Line 1792 of yacc.c  */
#line 11223 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1727:
/* Line 1792 of yacc.c  */
#line 11227 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1728:
/* Line 1792 of yacc.c  */
#line 11231 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1729:
/* Line 1792 of yacc.c  */
#line 11235 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1730:
/* Line 1792 of yacc.c  */
#line 11241 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1731:
/* Line 1792 of yacc.c  */
#line 11242 "parser.y"
    { (yyval) = cb_int1; }
    break;


/* Line 1792 of yacc.c  */
#line 18676 "parser.c"
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
#line 11415 "parser.y"

