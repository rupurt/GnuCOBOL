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
#define YYLAST   8916

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  521
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  847
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1974
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2825

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
    4176,  4178,  4180,  4183,  4185,  4187,  4190,  4192,  4194,  4196,
    4199,  4201,  4202,  4205,  4207,  4209,  4211,  4215,  4217,  4219,
    4222,  4224,  4226,  4228,  4231,  4233,  4235,  4237,  4239,  4241,
    4243,  4246,  4248,  4250,  4254,  4256,  4259,  4261,  4263,  4265,
    4267,  4270,  4273,  4276,  4281,  4285,  4287,  4289,  4292,  4294,
    4296,  4298,  4300,  4302,  4304,  4306,  4309,  4312,  4315,  4317,
    4319,  4321,  4323,  4325,  4327,  4329,  4331,  4333,  4335,  4337,
    4339,  4341,  4343,  4345,  4347,  4349,  4351,  4353,  4355,  4357,
    4359,  4361,  4363,  4365,  4367,  4370,  4372,  4376,  4379,  4382,
    4384,  4386,  4388,  4392,  4395,  4398,  4400,  4402,  4406,  4410,
    4415,  4421,  4423,  4425,  4427,  4429,  4431,  4433,  4435,  4437,
    4439,  4441,  4443,  4445,  4448,  4450,  4454,  4456,  4458,  4460,
    4462,  4464,  4466,  4468,  4471,  4477,  4483,  4489,  4494,  4500,
    4506,  4512,  4518,  4524,  4527,  4530,  4532,  4534,  4536,  4538,
    4540,  4542,  4544,  4546,  4548,  4549,  4554,  4560,  4561,  4565,
    4568,  4570,  4574,  4578,  4580,  4584,  4586,  4590,  4592,  4596,
    4598,  4602,  4603,  4604,  4606,  4607,  4609,  4610,  4612,  4613,
    4616,  4617,  4620,  4621,  4623,  4625,  4626,  4628,  4629,  4631,
    4634,  4635,  4638,  4639,  4643,  4645,  4647,  4649,  4651,  4653,
    4655,  4657,  4659,  4660,  4663,  4665,  4667,  4669,  4671,  4673,
    4675,  4677,  4679,  4681,  4683,  4685,  4687,  4689,  4691,  4693,
    4695,  4697,  4699,  4701,  4703,  4705,  4707,  4709,  4711,  4713,
    4715,  4717,  4719,  4721,  4723,  4725,  4727,  4729,  4731,  4733,
    4735,  4737,  4739,  4741,  4743,  4745,  4747,  4749,  4751,  4753,
    4755,  4757,  4759,  4761,  4763,  4765,  4767,  4769,  4771,  4773,
    4775,  4777,  4779,  4781,  4783,  4785,  4787,  4789,  4791,  4793,
    4795,  4797,  4799,  4801,  4803,  4804,  4806,  4807,  4809,  4810,
    4812,  4813,  4815,  4816,  4818,  4819,  4821,  4822,  4824,  4825,
    4827,  4828,  4830,  4831,  4833,  4834,  4836,  4837,  4839,  4840,
    4842,  4843,  4845,  4846,  4848,  4849,  4851,  4852,  4854,  4857,
    4858,  4860,  4861,  4863,  4864,  4866,  4867,  4869,  4870,  4872,
    4874,  4875,  4877,  4878,  4880,  4882,  4883,  4886,  4889,  4890,
    4892,  4893,  4895,  4896,  4898,  4899,  4901,  4902,  4904,  4906,
    4907,  4909,  4910,  4912,  4913,  4915,  4917,  4918,  4921,  4923,
    4925,  4926,  4928,  4929,  4931,  4932,  4934,  4935,  4937,  4938,
    4940,  4941,  4943,  4944,  4946,  4947,  4949,  4952,  4953,  4955,
    4956,  4958,  4959,  4961,  4962,  4964,  4965,  4967,  4968,  4970,
    4971,  4973,  4974,  4976,  4978,  4979,  4981,  4982,  4986,  4987,
    4989,  4990,  4992,  4995,  4997,  4999,  5001,  5003,  5005,  5007,
    5009,  5011,  5013,  5015,  5017,  5019,  5021,  5023,  5025,  5027,
    5029,  5031,  5033,  5035,  5037,  5039,  5041,  5044,  5047,  5049,
    5051,  5053,  5055,  5057,  5059,  5062,  5064,  5068,  5071,  5073,
    5075,  5077,  5080,  5082,  5085,  5087,  5090,  5092,  5095,  5097,
    5100,  5102,  5105,  5107,  5110
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
      -1,    -1,    27,   259,    -1,    -1,  1308,   547,  1324,    -1,
      75,    -1,    75,   548,    -1,   548,    -1,   174,    -1,   465,
      -1,   359,    -1,    -1,   156,   125,   460,    -1,    -1,    87,
     401,   460,    -1,    -1,   551,   552,    -1,   553,    -1,   557,
      -1,   576,    -1,   577,    -1,   568,    -1,    -1,   422,   460,
     554,   555,    -1,    -1,   567,   556,   460,    -1,    -1,  1340,
     110,   275,    -1,    -1,   309,   460,   558,   559,    -1,    -1,
     567,   460,    -1,   567,   560,   460,    -1,   560,   460,    -1,
     561,    -1,   560,   561,    -1,   562,    -1,   563,    -1,   564,
      -1,   565,    -1,   271,   417,  1308,  1256,  1353,    -1,  1359,
    1308,  1223,    -1,   403,  1308,  1256,    -1,  1296,    62,  1308,
     566,    -1,  1223,    -1,   260,    -1,   503,    -1,   442,    -1,
     513,    -1,   567,   513,    -1,    -1,   374,   460,   569,   570,
      -1,    -1,   571,   460,    -1,   571,     1,   460,    -1,   572,
      -1,   571,   572,    -1,   201,    10,   231,    -1,   201,   573,
     574,    -1,   201,   575,   231,    -1,   375,    -1,   505,    -1,
      -1,    27,   259,    -1,   375,    -1,   575,   375,    -1,   424,
     460,    -1,   578,   460,    -1,   578,     1,   460,    -1,   579,
      -1,   578,   579,    -1,   580,    -1,   586,    -1,   595,    -1,
     605,    -1,   602,    -1,   606,    -1,   608,    -1,   609,    -1,
     610,    -1,   611,    -1,   612,    -1,   613,    -1,    -1,   513,
     581,   582,    -1,  1308,    99,    -1,  1256,  1308,  1227,    -1,
    1308,  1227,   583,    -1,   584,    -1,    -1,   584,    -1,   585,
      -1,  1071,  1321,  1227,    -1,   585,  1071,  1321,  1227,    -1,
      -1,    12,  1227,   587,  1308,   588,    -1,   283,    -1,   426,
      -1,   427,    -1,   129,    -1,    29,    -1,   589,    -1,   590,
      -1,   589,   590,    -1,   593,    -1,   593,   451,   593,    -1,
      -1,   593,    18,   591,   592,    -1,   593,    -1,   592,    18,
     593,    -1,   259,    -1,   423,    -1,   519,    -1,   351,    -1,
     214,    -1,   269,    -1,   423,    -1,   519,    -1,   597,   596,
      -1,    -1,   220,   513,    -1,   440,  1297,   598,    -1,   599,
      -1,   598,   599,    -1,   600,  1309,   601,    -1,  1228,    -1,
     600,  1228,    -1,  1257,    -1,   601,  1257,    -1,    61,  1227,
    1308,   603,    -1,   604,    -1,   603,   604,    -1,  1259,    -1,
    1259,   451,  1259,    -1,   260,  1227,  1308,   259,    -1,   101,
    1327,  1308,   259,   607,    -1,    -1,  1340,   333,   259,    -1,
     111,  1308,    71,    -1,   306,   412,  1308,   477,   407,    -1,
     103,  1308,  1222,    -1,    99,   430,  1308,  1222,    -1,   396,
    1308,  1222,    -1,   167,  1308,  1222,    -1,    -1,   228,   401,
     460,    -1,    -1,   176,   460,    -1,    -1,   236,   460,    -1,
      -1,   617,   618,    -1,    -1,   404,  1282,  1227,   619,   620,
     460,    -1,   404,     1,   460,    -1,    -1,   620,   621,    -1,
     622,    -1,   628,    -1,   630,    -1,   632,    -1,   633,    -1,
     635,    -1,   639,    -1,   641,    -1,   642,    -1,   643,    -1,
     648,    -1,   649,    -1,   651,    -1,    30,  1337,   625,   624,
     626,    -1,    30,  1337,   625,   623,   627,    -1,    30,  1337,
     625,   122,   627,    -1,    30,  1337,   625,   240,   627,    -1,
      30,  1337,   625,   340,   627,    -1,   120,    -1,   121,    -1,
     446,    -1,   352,    -1,    -1,   254,     8,  1300,    -1,    -1,
     174,    -1,   128,    -1,   259,    -1,  1253,    -1,    -1,   259,
      -1,  1253,    -1,     5,  1314,  1308,   629,    -1,   409,    -1,
     128,    -1,   352,    -1,    20,  1341,  1310,  1308,  1222,  1276,
     631,    -1,    20,  1341,  1310,  1308,  1222,   644,   645,  1276,
     631,    -1,    -1,   439,   510,    10,  1260,    -1,   439,   510,
     594,    -1,  1342,  1308,   513,    -1,   634,   430,  1308,  1222,
      -1,    -1,   463,    -1,   419,    -1,    -1,   636,   265,  1314,
    1308,   637,    -1,   270,   638,    -1,    34,   638,    -1,   170,
      -1,    -1,   512,   265,   314,  1352,    -1,   512,   265,   314,
     277,  1352,    -1,   512,   391,    -1,   320,  1308,   640,    -1,
     640,    -1,   222,    -1,  1325,  1294,   409,    -1,   364,    -1,
     254,   409,    -1,   325,  1296,  1308,  1226,    -1,   356,   116,
    1308,   426,    -1,   356,  1310,  1308,  1222,    -1,   356,  1310,
    1308,  1222,   644,   645,    -1,   461,    -1,   421,  1308,    -1,
      -1,   646,   647,    -1,   645,   647,    -1,  1222,    -1,   364,
    1310,  1308,  1222,    -1,   377,   650,  1291,    -1,   292,    -1,
    1256,    -1,   411,  1340,   652,    -1,    10,  1322,    -1,   292,
    1322,    -1,   354,   315,    -1,    -1,   654,   460,    -1,   654,
       1,   460,    -1,   655,    -1,   654,   655,    -1,   656,    -1,
     658,    -1,   394,   657,  1291,  1301,  1212,    -1,    -1,   356,
      -1,   419,    -1,   420,    -1,    -1,   277,   659,  1300,  1333,
    1298,   660,    -1,   661,    -1,   660,   661,    -1,  1213,   662,
      -1,    -1,   336,  1256,    -1,    -1,   105,   125,   460,    -1,
      -1,   463,   401,   460,    -1,    -1,   665,   666,    -1,   667,
     696,    -1,    -1,   669,  1213,   668,   670,   460,    -1,   669,
       1,   460,    -1,   175,    -1,   398,    -1,    -1,   670,   671,
      -1,  1308,   174,    -1,  1308,   206,    -1,   672,    -1,   674,
      -1,   678,    -1,   679,    -1,   682,    -1,   683,    -1,   689,
      -1,   690,    -1,   691,    -1,    48,  1298,  1256,   677,   673,
      -1,    -1,   358,    -1,    60,    -1,   356,  1298,  1256,  1297,
      -1,   356,  1298,  1256,   455,  1256,  1297,    -1,   356,  1308,
     508,  1303,  1330,   676,   677,  1297,   675,    -1,    -1,   117,
    1319,  1222,    -1,    -1,  1302,  1256,    -1,    -1,   455,  1256,
      -1,   241,  1354,  1350,    -1,   507,   311,   680,  1308,   681,
      -1,   507,   311,   177,  1308,   681,    -1,   513,    -1,   215,
      -1,   259,    -1,  1253,    -1,   105,  1354,  1224,    -1,   252,
    1308,  1226,  1313,   684,    -1,    -1,   684,   685,    -1,   686,
      -1,   687,    -1,   688,    -1,  1340,   190,  1293,  1226,    -1,
     474,  1226,    -1,    49,  1226,    -1,   357,  1314,  1308,   513,
      -1,    65,  1308,   513,    -1,   692,   693,    -1,   371,  1308,
      -1,   373,  1290,    -1,  1227,    -1,   693,  1227,    -1,    -1,
      -1,   515,   401,   460,   695,   696,    -1,    -1,    -1,   697,
     698,    -1,   699,   460,    -1,   698,   699,   460,    -1,   698,
     460,    -1,   711,    -1,    -1,   701,   702,   700,   713,    -1,
     701,     1,   460,    -1,  1274,   513,    -1,    -1,   178,    -1,
     513,    -1,   513,    -1,    -1,  1308,   206,    -1,  1260,    -1,
     247,   706,    -1,   246,   706,    -1,    51,  1318,   706,    -1,
    1250,    -1,    42,    -1,    45,    -1,    44,    -1,    43,    -1,
      41,    -1,   710,    -1,   722,    -1,   723,    -1,   707,    -1,
     708,    -1,   709,    -1,     1,   460,    -1,   182,    -1,   186,
      -1,   183,    -1,   184,    -1,   181,    -1,   185,    -1,   187,
      -1,   335,    -1,   348,    -1,   701,   703,    88,   704,   712,
      -1,  1292,   705,    -1,   198,   513,    -1,    -1,   713,   714,
      -1,   715,    -1,   716,    -1,   718,    -1,   719,    -1,   720,
      -1,   724,    -1,   727,    -1,   739,    -1,   740,    -1,   742,
      -1,   743,    -1,   744,    -1,   749,    -1,   750,    -1,   360,
    1250,    -1,  1308,   174,   717,    -1,    -1,    27,   259,    -1,
    1308,   206,    -1,   332,    -1,   721,    -1,   500,  1308,   721,
      -1,    40,    -1,    76,    -1,   722,    -1,   723,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,   122,
      -1,   221,    -1,   324,    -1,   335,    -1,   348,    -1,   416,
      -1,   414,    -1,   415,    -1,   488,    -1,   486,    -1,   487,
      -1,    42,  1328,    -1,    42,   485,    -1,    45,  1328,    -1,
      45,   485,    -1,    44,  1328,    -1,    44,   485,    -1,    43,
    1328,    -1,    43,   485,    -1,    41,  1328,    -1,    41,   485,
      -1,   182,    -1,   183,    -1,   181,    -1,   184,    -1,   185,
      -1,   280,    -1,    78,    -1,   189,    -1,    79,    -1,   188,
      -1,  1329,   243,  1286,    -1,  1329,   477,  1286,    -1,   310,
    1256,   728,  1335,   730,   726,    -1,    -1,   432,  1256,    -1,
     310,  1256,   728,  1335,   730,   733,   736,    -1,   310,   128,
     731,   729,   728,   732,   733,   736,    -1,    -1,   455,  1256,
      -1,    -1,   198,  1256,    -1,    -1,   117,  1319,  1222,    -1,
      -1,    54,  1303,   513,    -1,    -1,   225,    -1,   734,    -1,
      -1,   734,   735,  1310,  1308,  1221,    -1,    28,    -1,   118,
      -1,    -1,   222,  1295,   737,    -1,   738,    -1,   737,   738,
      -1,   513,    -1,   237,  1326,    -1,   441,   741,    -1,    -1,
     244,    -1,   390,    -1,    46,  1338,   519,    -1,    37,    -1,
      -1,   507,  1309,   746,   745,   748,    -1,   747,    -1,   746,
     747,    -1,  1260,    -1,  1260,   451,  1260,    -1,    -1,  1339,
     462,  1308,  1260,    -1,   368,  1253,    -1,   368,  1253,   451,
    1253,    -1,    22,   246,    -1,    22,   306,    -1,    -1,    -1,
     264,   401,   460,   752,   696,    -1,    -1,    -1,   258,   401,
     460,   754,   696,    -1,    -1,    -1,   371,   401,   460,   756,
     757,    -1,    -1,   757,   758,    -1,    -1,   353,  1214,   759,
     760,   460,   777,    -1,    -1,   760,   761,    -1,     1,   460,
      -1,  1308,   206,    -1,    64,  1308,  1240,    -1,   762,    -1,
     767,    -1,  1367,   763,    -1,   764,   765,    -1,   764,    -1,
     765,    -1,   179,    -1,   766,    -1,   765,   766,    -1,  1249,
      -1,   326,  1312,   768,   770,    -1,   769,    -1,   769,  1351,
      -1,   769,  1351,   769,  1344,    -1,  1258,    -1,  1249,    -1,
      -1,   770,   771,    -1,   772,    -1,   773,    -1,   774,    -1,
     775,    -1,   776,    -1,   256,  1308,   769,    -1,   212,  1308,
     769,    -1,   180,  1360,  1308,   769,    -1,   242,  1361,  1308,
     769,    -1,   242,  1360,  1308,   769,    -1,   190,  1308,   769,
      -1,    -1,   777,   778,    -1,    -1,   701,   702,   779,   780,
     460,    -1,    -1,   780,   781,    -1,   782,    -1,   786,    -1,
     796,    -1,   719,    -1,   811,    -1,   724,    -1,   739,    -1,
     802,    -1,   742,    -1,   809,    -1,   788,    -1,   744,    -1,
     791,    -1,   810,    -1,   725,    -1,   795,    -1,   481,  1308,
     783,    -1,  1365,    -1,  1363,    -1,  1361,  1320,   784,    -1,
    1362,  1320,   785,    -1,  1360,    -1,  1364,    -1,  1366,    -1,
      -1,  1249,    -1,  1249,   318,   326,    -1,   179,    -1,    -1,
    1249,    -1,   179,    -1,    10,    -1,   290,  1308,   787,    -1,
    1256,    -1,   334,  1256,    -1,   472,  1256,    -1,   291,    -1,
     438,  1318,  1233,   789,    -1,    -1,   378,  1319,   790,    -1,
     493,  1249,    -1,  1249,    -1,   179,    -1,   792,   510,  1188,
      -1,   792,     9,  1315,   793,    -1,   792,   237,     9,  1315,
     326,    -1,   792,    38,  1315,   793,    -1,   792,   237,    38,
    1315,   326,    -1,   338,    -1,     3,    -1,    -1,   794,   793,
      -1,   326,    -1,  1249,    -1,   318,    -1,   508,  1249,   198,
    1235,    50,  1235,    -1,   797,   798,    -1,   254,   800,    -1,
      -1,   799,   798,    -1,   801,    -1,  1319,   291,    -1,   334,
    1258,    -1,   472,  1258,    -1,    -1,   304,   234,    -1,   304,
      -1,  1258,    -1,   803,   806,    -1,  1345,  1317,   804,  1309,
      -1,    -1,   805,    -1,   244,    -1,   390,    -1,    55,    -1,
     820,  1258,    -1,   807,    -1,   808,    -1,   808,   807,    -1,
    1258,    -1,   421,  1308,  1235,  1283,    -1,   211,  1305,    -1,
     500,  1308,   122,    -1,    -1,    -1,   395,   401,   460,   813,
     814,    -1,    -1,   815,    -1,   816,   460,    -1,   815,   816,
     460,    -1,   711,    -1,    -1,   701,   702,   817,   818,    -1,
     701,     1,   460,    -1,    -1,   818,   819,    -1,    46,   254,
      -1,    46,   395,    -1,    39,    -1,    47,    -1,   163,   159,
      -1,   163,   161,    -1,   213,    -1,   268,    -1,   384,    -1,
     482,    -1,   323,    -1,   245,    -1,    33,    -1,   402,    -1,
     376,    -1,   200,    -1,   350,    59,  1308,  1240,    -1,   350,
      -1,   465,    -1,   254,  1316,  1308,   822,  1242,    -1,  1343,
    1316,  1308,   823,  1242,    -1,   192,  1308,  1242,    -1,    36,
    1308,  1242,    -1,   720,    -1,   742,    -1,   825,    -1,   739,
      -1,   724,    -1,   744,    -1,   719,    -1,   824,    -1,   506,
    1249,    -1,   198,  1245,    -1,   455,  1249,    -1,   334,    -1,
     472,    -1,   273,    -1,   467,    -1,    -1,   820,    -1,   821,
      -1,    -1,   820,    -1,   821,    -1,   310,  1256,  1335,    -1,
    1308,   206,    -1,    -1,    -1,    -1,   342,   125,   830,   838,
     460,   827,   839,   828,   841,    -1,    -1,   829,   852,   460,
     841,    -1,    -1,    -1,   506,   831,   833,    -1,    -1,    58,
     832,   833,    -1,   834,    -1,   833,   834,    -1,   835,   836,
     837,   513,    -1,    -1,  1295,   362,    -1,  1295,   507,    -1,
      -1,   417,  1308,    33,    -1,   417,  1308,   113,    -1,   485,
     417,  1308,    33,    -1,   485,   417,  1308,  1256,    -1,   417,
    1308,  1256,    -1,    -1,   317,    -1,    -1,   382,   513,    -1,
      -1,    -1,   112,   460,   840,   841,   132,   112,   460,    -1,
      -1,   841,   842,    -1,   843,    -1,   846,    -1,   852,   460,
      -1,   847,    -1,   460,    -1,    -1,   513,   401,   848,   460,
     844,   845,    -1,    -1,  1142,   460,    -1,   513,   460,    -1,
     513,    -1,    -1,  1256,    -1,    -1,    -1,   850,   851,   852,
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
    1287,    -1,    -1,     4,   856,   857,   870,    -1,   858,   860,
     864,   865,   866,  1165,    -1,  1249,   198,   859,    -1,  1249,
     198,  1344,    -1,  1249,   198,   106,   518,    -1,  1249,   198,
     106,    -1,  1249,   198,   107,   517,    -1,  1249,   198,   107,
      -1,  1249,   198,   108,    -1,  1249,   198,   165,   239,    -1,
    1249,   198,   168,   430,    -1,  1249,   198,   452,    -1,  1249,
     198,   502,   279,    -1,  1249,   198,    72,    -1,  1249,   198,
     158,  1165,    -1,  1249,   198,   156,  1238,  1165,    -1,  1249,
     198,    25,    -1,  1249,   198,    26,  1165,    -1,  1249,   198,
    1216,    -1,  1249,   198,   513,    -1,  1249,    -1,   313,    -1,
     257,    -1,   254,   304,    -1,    -1,   861,    -1,  1293,   862,
     863,    -1,  1293,   863,   862,    -1,  1293,   862,    -1,  1293,
     863,    -1,    31,  1238,    -1,   254,  1316,  1242,    -1,  1343,
    1316,  1242,    -1,   336,  1316,  1242,    -1,    -1,   199,    -1,
      -1,   275,  1308,    48,    -1,    -1,   512,   867,    -1,   868,
      -1,   867,   868,    -1,    33,    -1,   444,    -1,    39,    -1,
      47,    -1,    94,    -1,   200,    -1,   213,    -1,   245,    -1,
     266,    -1,   268,    -1,   293,    -1,   323,    -1,   350,    59,
    1308,  1240,    -1,   350,    -1,   376,    -1,   384,    -1,   402,
      -1,   482,    -1,   292,   869,    -1,   869,    -1,   498,    -1,
     192,  1308,  1242,    -1,    36,  1308,  1242,    -1,   397,   491,
    1187,    -1,   397,   126,  1187,    -1,   453,  1289,  1243,    -1,
     492,    -1,   113,    -1,    -1,   133,    -1,    -1,     6,   872,
     873,   875,    -1,  1231,   455,  1207,  1171,    -1,  1231,   874,
     205,  1207,  1171,    -1,    97,  1249,   455,  1249,  1283,  1171,
      -1,    -1,   455,  1232,    -1,    -1,   134,    -1,    -1,    11,
     877,   878,    -1,  1249,  1277,   879,    -1,  1201,    60,  1278,
     879,    -1,    -1,   382,  1230,    -1,    -1,    19,   881,   882,
      -1,   883,    -1,   882,   883,    -1,  1218,   455,   884,  1218,
      -1,    -1,   344,   455,    -1,    -1,    52,   886,   887,   899,
      -1,   888,  1241,   889,   894,   897,   898,    -1,    -1,   429,
      -1,   431,    -1,   274,    -1,    -1,    -1,   506,   890,   891,
      -1,   892,    -1,   891,   892,    -1,   893,   313,    -1,   893,
     836,  1232,    -1,    -1,  1295,   362,    -1,  1295,    90,    -1,
    1295,   507,    -1,    -1,   895,  1307,  1249,    -1,   895,   896,
      -1,   895,     7,  1318,  1249,    -1,   382,    -1,   205,    -1,
     469,    -1,   313,    -1,    -1,  1348,   849,    -1,    -1,   299,
     849,    -1,    -1,   135,    -1,    -1,    53,   901,   902,    -1,
    1240,    -1,   902,  1240,    -1,    -1,    63,   904,   905,    -1,
    1213,   906,    -1,   905,  1213,   906,    -1,    -1,  1355,    -1,
    1355,  1301,   367,    -1,  1340,   292,   386,    -1,  1340,   265,
      -1,    -1,    77,   908,   909,   910,    -1,  1207,  1346,  1201,
    1171,    -1,    -1,   136,    -1,    74,    -1,    91,    -1,    -1,
     114,   914,   915,   917,    -1,  1213,  1325,  1036,  1184,    -1,
     463,   916,    -1,  1213,    -1,   916,  1213,    -1,    -1,   137,
      -1,    -1,   122,   919,   920,   931,    -1,  1240,   496,  1168,
      -1,  1240,   497,  1168,    -1,  1240,   494,  1168,    -1,  1240,
     495,  1168,    -1,  1231,   924,   928,  1168,    -1,   921,  1168,
      -1,  1232,   512,   929,  1168,    -1,   923,    -1,    -1,   921,
     922,   923,    -1,  1232,   861,   925,   865,   927,    -1,    -1,
     493,  1216,    -1,   493,   513,    -1,   493,   340,    -1,   493,
      99,    -1,    -1,   493,   926,    -1,    99,    -1,   100,    -1,
      -1,   512,   929,    -1,    -1,   303,    -1,   930,    -1,   929,
     930,    -1,    39,    -1,    46,   254,    -1,    46,   395,    -1,
      47,    -1,    94,    -1,   163,   159,    -1,   163,   161,    -1,
     213,    -1,   268,    -1,   323,    -1,   384,    -1,   482,    -1,
     192,  1308,  1242,    -1,    36,  1308,  1242,    -1,   397,   491,
    1187,    -1,   397,   126,  1187,    -1,    -1,   138,    -1,    -1,
     124,   933,   934,   935,    -1,  1232,   230,  1207,  1171,    -1,
    1232,   230,  1232,   205,  1207,  1171,    -1,  1232,    50,  1232,
     205,  1207,  1171,    -1,  1232,   230,  1232,   205,  1208,   366,
    1208,  1171,    -1,  1232,    50,  1232,   205,  1208,   366,  1208,
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
      -1,   895,  1232,    -1,    -1,   197,   958,   959,    -1,  1229,
      -1,    -1,   204,   961,   962,    -1,  1253,    -1,    -1,   207,
     964,   965,    -1,  1336,  1217,   966,    -1,    -1,   117,  1319,
    1249,    -1,   208,   956,    -1,    -1,   217,   969,  1188,  1334,
     970,   971,    -1,   849,   131,   849,    -1,   131,   849,    -1,
     849,    -1,    -1,   142,    -1,    -1,   224,   973,   974,    -1,
    1229,   975,   976,   977,   981,    -1,    -1,  1340,   178,    -1,
      -1,    10,  1336,   507,    -1,   980,  1336,   507,    -1,    -1,
     370,   978,    -1,   979,    -1,   978,   979,    -1,   980,  1299,
      50,  1232,    -1,    13,    -1,    16,    -1,   306,    -1,    17,
      -1,   307,    -1,   280,    -1,   281,    -1,    -1,  1334,  1336,
     113,    -1,    -1,   226,   983,   984,    -1,  1214,    -1,   984,
    1214,    -1,    -1,   229,   986,   987,    -1,   988,   989,    -1,
    1249,    -1,  1260,    -1,  1263,    -1,   990,   992,    -1,   990,
      -1,   992,    -1,   993,    -1,    -1,   445,   991,   994,    -1,
     370,   996,    -1,    95,  1238,   455,  1239,  1000,    -1,   995,
      -1,   994,   995,    -1,  1238,   191,    -1,    60,  1000,    -1,
      10,    -1,   243,    -1,   477,    -1,  1238,  1000,    -1,   997,
      -1,   996,   997,    -1,    60,    50,  1238,  1000,    -1,   998,
     999,    -1,    -1,    10,    -1,   243,    -1,   180,    -1,   477,
      -1,  1238,    50,  1239,  1000,    -1,    -1,  1000,  1001,    -1,
      38,  1306,  1232,    -1,     9,  1306,  1232,    -1,    -1,   272,
    1003,  1085,    -1,    -1,   276,  1005,  1006,    -1,  1232,   455,
    1229,    -1,    97,  1232,   455,  1229,    -1,    -1,   278,  1008,
    1009,  1010,    -1,  1232,    50,  1207,  1171,    -1,  1232,    50,
    1232,   205,  1207,  1171,    -1,    -1,   143,    -1,    -1,   316,
    1012,  1013,    -1,  1014,  1015,  1036,  1212,  1016,    -1,  1013,
    1014,  1015,  1036,  1212,  1016,    -1,   227,    -1,   322,    -1,
     235,    -1,   173,    -1,    -1,   411,  1340,   652,    -1,    -1,
    1340,   292,   386,    -1,  1340,   265,    -1,   385,    -1,    -1,
     329,  1018,  1019,    -1,  1023,  1024,    -1,    -1,  1024,  1020,
     849,  1021,    -1,  1024,  1022,    -1,    -1,   144,    -1,   144,
      -1,   460,    -1,  1218,    -1,  1218,   451,  1218,    -1,    -1,
    1241,   454,    -1,   193,    -1,  1025,   490,  1026,    -1,  1025,
     508,  1027,    -1,    -1,  1340,   448,  1162,    -1,   171,    -1,
    1188,    -1,  1028,    -1,  1027,     9,  1028,    -1,  1249,   198,
    1232,    50,  1232,   490,  1188,    -1,    -1,   354,  1030,  1031,
    1043,    -1,  1213,  1280,  1325,  1032,  1033,  1041,  1042,    -1,
      -1,   230,  1249,    -1,    -1,  1034,    -1,  1035,  1039,    -1,
    1040,    -1,   219,   265,    -1,  1340,   218,   265,    -1,     8,
    1319,   265,    -1,  1037,    -1,    -1,  1037,    -1,  1038,    -1,
     380,  1301,  1201,   454,    -1,   380,  1301,  1201,   400,    -1,
     380,   193,    -1,    -1,  1040,    -1,  1057,    -1,  1340,   238,
     265,    -1,  1340,   509,    -1,    -1,   239,  1308,  1249,    -1,
    1184,    -1,  1178,    -1,    -1,   146,    -1,   355,    -1,    -1,
     365,  1046,  1047,    -1,  1209,  1160,    -1,   379,    -1,    -1,
     381,  1050,  1051,  1052,    -1,  1213,  1325,  1032,  1177,    -1,
      -1,   147,    -1,    -1,   387,  1054,  1055,  1058,    -1,  1210,
    1160,  1036,  1056,  1184,    -1,    -1,  1057,    -1,  1340,   265,
      -1,  1340,   292,   265,    -1,    -1,   148,    -1,   391,    -1,
      -1,   399,  1061,  1062,  1067,    -1,  1211,  1063,  1064,  1065,
      -1,    10,  1211,  1064,   510,  1189,   849,    -1,    -1,   508,
    1249,    -1,    -1,   132,   849,    -1,  1066,    -1,  1066,  1065,
      -1,   510,  1188,   849,    -1,    -1,   149,    -1,    -1,   410,
    1069,  1070,    -1,  1073,    -1,  1074,    -1,  1077,    -1,  1078,
      -1,  1079,    -1,  1081,    -1,   314,    -1,   312,    -1,   491,
      -1,   126,    -1,   156,  1238,   455,  1238,    -1,  1246,    32,
    1075,    -1,  1076,    -1,  1075,  1076,    -1,    39,  1071,    -1,
      47,  1071,    -1,   213,  1071,    -1,   268,  1071,    -1,   384,
    1071,    -1,   482,  1071,    -1,   245,  1071,    -1,   323,  1071,
      -1,  1229,   455,   155,  1237,    -1,  1229,   455,  1232,    -1,
    1229,  1072,    50,  1232,    -1,  1080,    -1,  1079,  1080,    -1,
    1215,   455,  1071,    -1,  1082,    -1,  1081,  1082,    -1,  1229,
     455,   473,    -1,  1229,   455,   462,    -1,    -1,   419,  1084,
    1085,    -1,    -1,  1247,  1087,  1089,  1090,  1086,  1091,  1092,
      -1,    -1,  1087,  1319,   735,  1310,  1088,    -1,    -1,  1088,
    1253,    -1,    -1,  1358,  1304,    -1,    -1,  1342,  1308,  1222,
      -1,    -1,   506,  1212,    -1,   227,   342,  1308,  1023,    -1,
      -1,   205,  1212,    -1,   322,   342,  1308,  1023,    -1,    -1,
     428,  1094,  1095,  1101,    -1,  1213,  1097,  1096,  1184,    -1,
      -1,  1340,  1357,  1201,    -1,    -1,   239,  1308,  1098,  1249,
      -1,   180,    -1,   242,    -1,  1194,    -1,  1281,  1195,    -1,
    1281,  1196,    -1,  1281,  1197,    -1,  1281,  1198,    -1,  1099,
      -1,  1100,    -1,   295,  1194,    -1,   298,    -1,    -1,   150,
      -1,    -1,   433,   393,  1103,  1104,    -1,   433,  1106,    -1,
      -1,   895,  1232,    -1,  1340,   164,  1332,  1105,    -1,  1340,
     294,  1332,  1105,    -1,    -1,  1232,    -1,   259,    -1,   423,
      -1,   519,    -1,   351,    -1,    -1,   434,  1108,  1109,  1113,
      -1,  1110,   230,  1249,  1112,  1174,    -1,  1111,    -1,  1110,
    1111,    -1,  1232,    -1,   115,  1295,   417,    -1,   115,  1295,
    1232,    -1,    -1,  1340,   335,  1308,  1249,    -1,    -1,   151,
      -1,    -1,   437,  1115,  1116,  1117,    -1,  1231,   198,  1207,
    1171,    -1,  1231,   198,  1232,   205,  1207,  1171,    -1,    97,
    1249,   198,  1249,  1283,  1171,    -1,    -1,   152,    -1,   439,
    1119,    -1,    -1,   341,    -1,    -1,   447,  1121,  1122,    -1,
    1214,    -1,  1122,  1214,    -1,    -1,   478,  1124,  1125,    -1,
    1249,   198,  1238,   455,  1239,    -1,    -1,   484,  1127,  1128,
      -1,  1213,  1129,    -1,    -1,   356,    -1,   358,    -1,    -1,
     489,  1131,  1132,  1141,    -1,  1241,  1133,  1136,  1112,  1140,
    1174,    -1,    -1,   115,  1295,  1134,    -1,  1135,    -1,  1134,
     318,  1135,    -1,  1275,  1238,    -1,   230,  1137,    -1,  1136,
    1137,    -1,  1249,  1138,  1139,    -1,    -1,   116,  1303,  1249,
      -1,    -1,    98,  1303,  1249,    -1,    -1,   445,  1303,  1249,
      -1,    -1,   153,    -1,    -1,   501,  1143,  1144,    -1,  1145,
      -1,  1148,    -1,  1152,    -1,  1154,    -1,  1155,    -1,  1146,
    1289,  1331,  1347,  1323,  1319,  1147,    -1,    -1,   206,    -1,
    1212,    -1,   227,    -1,   322,    -1,   235,    -1,   173,    -1,
    1301,   110,  1319,  1149,    -1,  1150,    -1,  1149,  1150,    -1,
    1219,    -1,    10,   343,    -1,    10,  1151,  1253,    -1,    -1,
     363,    -1,   363,   311,    -1,   311,    -1,  1293,   345,  1153,
      -1,   428,    -1,   132,    -1,  1146,    38,   372,  1249,    -1,
    1156,    -1,   169,    -1,   130,    -1,    -1,   516,  1158,  1159,
    1164,    -1,  1210,  1160,  1161,  1036,  1056,  1163,    -1,    -1,
     198,  1245,    -1,    -1,  1162,  1288,  1242,  1311,    -1,  1162,
    1288,  1216,    -1,  1162,  1288,   326,    -1,    38,    -1,     9,
      -1,  1184,    -1,  1181,    -1,    -1,   154,    -1,  1166,  1167,
      -1,    -1,   168,   849,    -1,    -1,   299,   849,    -1,  1169,
    1170,    -1,    -1,   168,   849,    -1,    -1,   299,   849,    -1,
    1172,  1173,    -1,    -1,   418,   849,    -1,    -1,   302,   849,
      -1,  1175,  1176,    -1,    -1,   470,   849,    -1,    -1,   301,
     849,    -1,  1179,  1180,    -1,  1179,    -1,  1179,  1180,    -1,
    1179,    -1,  1180,    -1,   132,   849,    -1,   296,   849,    -1,
    1182,  1183,    -1,  1182,    -1,  1183,    -1,   160,   849,    -1,
     297,   849,    -1,  1185,  1186,    -1,    -1,   233,   849,    -1,
      -1,   300,   849,    -1,    -1,  1244,  1356,    -1,  1189,    -1,
    1190,    -1,    -1,  1191,  1192,    -1,  1193,    -1,  1192,   234,
      -1,  1192,  1193,    -1,  1232,    -1,   471,    -1,   457,    -1,
     472,    -1,   467,    -1,   468,    -1,   459,    -1,   172,    -1,
    1194,    -1,  1195,    -1,  1196,    -1,  1197,    -1,  1198,    -1,
     298,    -1,   295,    -1,    21,    -1,   318,    -1,   313,    -1,
     306,    -1,    13,    -1,    14,    -1,    15,    -1,   337,    -1,
     287,    -1,   461,    -1,   162,  1336,    -1,   464,    -1,   209,
      -1,   466,    -1,   248,    -1,   210,    -1,   249,    -1,  1201,
      -1,  1199,  1200,  1201,    -1,    -1,    73,    -1,   405,    -1,
    1201,   472,  1202,    -1,  1201,   467,  1202,    -1,  1202,    -1,
    1202,   468,  1203,    -1,  1202,   459,  1203,    -1,  1203,    -1,
    1204,   172,  1203,    -1,  1204,    -1,   472,  1205,    -1,   467,
    1205,    -1,  1205,    -1,   471,  1201,   457,    -1,  1235,    -1,
     253,    -1,   253,  1349,   513,    -1,   255,    -1,   255,  1349,
     513,    -1,   327,    -1,   327,  1349,   513,    -1,  1208,    -1,
    1207,  1208,    -1,  1230,  1283,    -1,  1253,    -1,  1209,    -1,
     463,   513,    -1,  1253,    -1,  1213,    -1,  1212,  1213,    -1,
     513,    -1,   513,    -1,  1216,    -1,  1215,  1216,    -1,   274,
      -1,    -1,  1217,  1218,    -1,  1219,    -1,  1253,    -1,  1220,
      -1,  1220,  1349,  1220,    -1,   259,    -1,  1222,    -1,  1221,
    1222,    -1,  1253,    -1,   513,    -1,  1225,    -1,  1224,  1225,
      -1,   513,    -1,  1222,    -1,   259,    -1,   513,    -1,   513,
      -1,  1230,    -1,  1229,  1230,    -1,  1251,    -1,  1261,    -1,
       7,  1318,  1250,    -1,  1232,    -1,  1231,  1232,    -1,  1249,
      -1,  1260,    -1,  1263,    -1,  1206,    -1,   247,  1250,    -1,
     247,  1261,    -1,   247,  1263,    -1,     7,  1318,  1236,  1237,
      -1,     7,  1318,  1250,    -1,   274,    -1,  1235,    -1,  1233,
    1235,    -1,  1249,    -1,  1261,    -1,  1263,    -1,  1249,    -1,
    1261,    -1,  1263,    -1,  1206,    -1,   247,  1250,    -1,   247,
    1261,    -1,   247,  1263,    -1,   345,    -1,   155,    -1,  1250,
      -1,   259,    -1,  1249,    -1,  1261,    -1,  1249,    -1,  1260,
      -1,  1249,    -1,   259,    -1,  1249,    -1,   259,    -1,  1263,
      -1,  1246,    -1,  1256,    -1,   519,    -1,  1246,    -1,  1258,
      -1,  1246,    -1,  1256,    -1,  1249,    -1,  1260,    -1,  1263,
      -1,  1248,    -1,  1248,    -1,  1253,    -1,  1253,  1254,    -1,
    1250,    -1,  1253,  1254,  1255,    -1,  1253,  1254,    -1,  1253,
    1255,    -1,  1253,    -1,  1252,    -1,  1206,    -1,  1253,  1254,
    1255,    -1,  1253,  1254,    -1,  1253,  1255,    -1,  1253,    -1,
     513,    -1,   513,  1349,  1253,    -1,   471,  1199,   457,    -1,
     471,  1201,   458,   457,    -1,   471,  1201,   458,  1201,   457,
      -1,   259,    -1,   259,    -1,   259,    -1,   519,    -1,   259,
      -1,   423,    -1,   519,    -1,   351,    -1,   214,    -1,   269,
      -1,   469,    -1,  1261,    -1,    10,  1262,    -1,  1262,    -1,
    1261,   456,  1262,    -1,   259,    -1,   423,    -1,   519,    -1,
     351,    -1,   214,    -1,   269,    -1,   469,    -1,  1264,  1267,
      -1,  1265,   471,  1234,   457,  1267,    -1,  1266,   471,  1199,
     457,  1267,    -1,   479,   471,  1269,   457,  1267,    -1,   308,
     471,  1270,   457,    -1,   261,   471,  1271,   457,  1267,    -1,
     262,   471,  1271,   457,  1267,    -1,   263,   471,  1271,   457,
    1267,    -1,   195,   471,  1272,   457,  1267,    -1,   196,   471,
    1273,   457,  1267,    -1,   203,  1268,    -1,   504,  1268,    -1,
     102,    -1,   511,    -1,   499,    -1,   267,    -1,   383,    -1,
      85,    -1,   194,    -1,   435,    -1,   436,    -1,    -1,   471,
    1201,   458,   457,    -1,   471,  1201,   458,  1201,   457,    -1,
      -1,   471,  1199,   457,    -1,   471,   457,    -1,  1234,    -1,
    1234,  1200,   243,    -1,  1234,  1200,   477,    -1,  1234,    -1,
    1234,  1200,  1234,    -1,  1201,    -1,  1201,  1200,  1222,    -1,
    1199,    -1,  1199,  1200,   443,    -1,  1199,    -1,  1199,  1200,
     443,    -1,    -1,    -1,    10,    -1,    -1,  1358,    -1,    -1,
     225,    -1,    -1,   225,  1279,    -1,    -1,   455,  1239,    -1,
      -1,   289,    -1,   339,    -1,    -1,   295,    -1,    -1,   317,
      -1,   295,   317,    -1,    -1,   392,  1284,    -1,    -1,   275,
    1308,  1285,    -1,    35,    -1,   284,    -1,   285,    -1,   286,
      -1,   349,    -1,   475,    -1,   476,    -1,   480,    -1,    -1,
     407,  1296,    -1,   460,    -1,     4,    -1,     6,    -1,    11,
      -1,    19,    -1,    52,    -1,    53,    -1,    63,    -1,    74,
      -1,    77,    -1,    91,    -1,   114,    -1,   122,    -1,   124,
      -1,   131,    -1,   155,    -1,   166,    -1,   171,    -1,   197,
      -1,   204,    -1,   207,    -1,   208,    -1,   217,    -1,   224,
      -1,   226,    -1,   229,    -1,   272,    -1,   276,    -1,   278,
      -1,   289,    -1,   316,    -1,   329,    -1,   354,    -1,   365,
      -1,   381,    -1,   387,    -1,   391,    -1,   399,    -1,   410,
      -1,   419,    -1,   428,    -1,   433,    -1,   434,    -1,   437,
      -1,   439,    -1,   447,    -1,   478,    -1,   484,    -1,   489,
      -1,   516,    -1,   133,    -1,   134,    -1,   135,    -1,   136,
      -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,   142,
      -1,   143,    -1,   144,    -1,   146,    -1,   147,    -1,   148,
      -1,   149,    -1,   150,    -1,   151,    -1,   152,    -1,   153,
      -1,   154,    -1,    -1,     8,    -1,    -1,     9,    -1,    -1,
      23,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,    31,
      -1,    -1,    40,    -1,    -1,    50,    -1,    -1,    59,    -1,
      -1,    60,    -1,    -1,    89,    -1,    -1,   105,    -1,    -1,
     463,    -1,    -1,   191,    -1,    -1,   198,    -1,    -1,   220,
      -1,    -1,   319,    -1,   220,   319,    -1,    -1,   223,    -1,
      -1,   465,    -1,    -1,   230,    -1,    -1,   234,    -1,    -1,
     234,    -1,    23,    -1,    -1,   239,    -1,    -1,   254,    -1,
     257,    -1,    -1,   250,  1309,    -1,   251,  1309,    -1,    -1,
     257,    -1,    -1,   275,    -1,    -1,   288,    -1,    -1,   304,
      -1,    -1,   304,    -1,   305,    -1,    -1,   311,    -1,    -1,
     314,    -1,    -1,   314,    -1,   191,    -1,    -1,   430,   234,
      -1,   430,    -1,   234,    -1,    -1,   321,    -1,    -1,   342,
      -1,    -1,   345,    -1,    -1,   356,    -1,    -1,   390,    -1,
      -1,   412,    -1,    -1,   413,    -1,    -1,   412,    -1,   412,
     234,    -1,    -1,   417,    -1,    -1,   425,    -1,    -1,   430,
      -1,    -1,   446,    -1,    -1,   450,    -1,    -1,   454,    -1,
      -1,   455,    -1,    -1,   455,    -1,   506,    -1,    -1,   510,
      -1,    -1,   510,   410,   455,    -1,    -1,   512,    -1,    -1,
     356,    -1,    66,   408,    -1,   408,    -1,    69,    -1,    67,
      -1,    70,    -1,    68,    -1,  1343,    -1,  1344,    -1,   461,
      -1,   162,    -1,   168,    -1,   164,    -1,   168,    -1,   470,
      -1,   220,    -1,   311,    -1,   425,    -1,   313,    -1,   254,
      -1,   257,    -1,   356,    -1,   358,    -1,    60,    -1,   514,
      -1,   356,  1309,    -1,   358,  1309,    -1,   361,    -1,   483,
      -1,   254,    -1,   257,    -1,   417,    -1,   246,    -1,   512,
     127,    -1,   127,    -1,   345,    66,   408,    -1,    66,   408,
      -1,   408,    -1,   119,    -1,   109,    -1,    92,   212,    -1,
      57,    -1,    92,   190,    -1,    56,    -1,   326,   212,    -1,
     330,    -1,   326,   190,    -1,   331,    -1,   371,   212,    -1,
     389,    -1,   371,   190,    -1,   388,    -1,    92,  1309,    -1,
      93,  1309,    -1
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
   10271, 10277, 10278, 10292, 10312, 10316, 10337, 10378, 10392, 10393,
   10398, 10404, 10405, 10410, 10422, 10423, 10424, 10431, 10442, 10443,
   10447, 10455, 10463, 10467, 10474, 10483, 10484, 10490, 10504, 10521,
   10525, 10532, 10533, 10534, 10541, 10545, 10552, 10553, 10554, 10555,
   10556, 10560, 10564, 10568, 10572, 10576, 10597, 10601, 10608, 10609,
   10610, 10614, 10615, 10616, 10617, 10618, 10622, 10626, 10633, 10634,
   10638, 10639, 10643, 10644, 10648, 10649, 10660, 10661, 10665, 10666,
   10667, 10671, 10672, 10673, 10680, 10681, 10685, 10686, 10690, 10691,
   10692, 10698, 10702, 10706, 10707, 10711, 10715, 10722, 10729, 10736,
   10746, 10750, 10757, 10767, 10777, 10787, 10800, 10804, 10812, 10820,
   10824, 10834, 10849, 10872, 10892, 10899, 10915, 10916, 10917, 10918,
   10919, 10920, 10924, 10928, 10945, 10949, 10956, 10957, 10958, 10959,
   10960, 10961, 10962, 10968, 10972, 10976, 10980, 10984, 10988, 10992,
   10996, 11000, 11004, 11008, 11012, 11019, 11020, 11024, 11025, 11026,
   11030, 11031, 11032, 11033, 11037, 11041, 11045, 11052, 11056, 11060,
   11067, 11074, 11081, 11091, 11098, 11108, 11115, 11125, 11129, 11142,
   11146, 11161, 11169, 11170, 11174, 11175, 11179, 11180, 11185, 11188,
   11196, 11199, 11206, 11208, 11209, 11213, 11214, 11218, 11219, 11220,
   11225, 11228, 11241, 11245, 11253, 11257, 11261, 11265, 11269, 11273,
   11277, 11281, 11288, 11289, 11295, 11296, 11297, 11298, 11299, 11300,
   11301, 11302, 11303, 11304, 11305, 11306, 11307, 11308, 11309, 11310,
   11311, 11312, 11313, 11314, 11315, 11316, 11317, 11318, 11319, 11320,
   11321, 11322, 11323, 11324, 11325, 11326, 11327, 11328, 11329, 11330,
   11331, 11332, 11333, 11334, 11335, 11336, 11337, 11338, 11339, 11340,
   11341, 11342, 11343, 11344, 11345, 11346, 11347, 11348, 11349, 11350,
   11351, 11352, 11353, 11354, 11355, 11356, 11357, 11358, 11359, 11360,
   11361, 11362, 11363, 11364, 11371, 11371, 11372, 11372, 11373, 11373,
   11374, 11374, 11375, 11375, 11376, 11376, 11377, 11377, 11378, 11378,
   11379, 11379, 11380, 11380, 11381, 11381, 11382, 11382, 11383, 11383,
   11384, 11384, 11385, 11385, 11386, 11386, 11387, 11387, 11387, 11388,
   11388, 11389, 11389, 11390, 11390, 11391, 11391, 11392, 11392, 11392,
   11393, 11393, 11394, 11394, 11394, 11395, 11395, 11395, 11396, 11396,
   11397, 11397, 11398, 11398, 11399, 11399, 11400, 11400, 11400, 11401,
   11401, 11402, 11402, 11403, 11403, 11403, 11404, 11404, 11404, 11404,
   11405, 11405, 11406, 11406, 11407, 11407, 11408, 11408, 11409, 11409,
   11410, 11410, 11411, 11411, 11412, 11412, 11412, 11413, 11413, 11414,
   11414, 11415, 11415, 11416, 11416, 11417, 11417, 11418, 11418, 11419,
   11419, 11420, 11420, 11420, 11421, 11421, 11422, 11422, 11423, 11423,
   11424, 11424, 11428, 11428, 11429, 11429, 11430, 11430, 11431, 11431,
   11432, 11432, 11433, 11433, 11434, 11434, 11435, 11435, 11436, 11436,
   11437, 11437, 11438, 11438, 11439, 11439, 11440, 11440, 11441, 11441,
   11442, 11442, 11443, 11443, 11444, 11444, 11447, 11448, 11449, 11453,
   11453, 11454, 11454, 11455, 11455, 11456, 11456, 11457, 11457, 11458,
   11458, 11459, 11459, 11460, 11460
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
  "arithmetic_x", "record_name", "file_or_record_name", "table_name",
  "file_name_list", "file_name", "report_name", "mnemonic_name_list",
  "mnemonic_name", "procedure_name_list", "procedure_name", "label",
  "integer_label", "reference_list", "reference", "single_reference",
  "opt_reference_list", "opt_reference", "reference_or_literal",
  "undefined_word", "unique_word", "target_x_list", "target_x", "x_list",
  "x", "report_x_list", "expr_x", "arith_x", "prog_or_entry",
  "alnum_or_id", "simple_value", "simple_all_value", "id_or_lit",
  "id_or_lit_or_func", "num_id_or_lit", "positive_id_or_lit",
  "pos_num_id_or_lit", "from_parameter", "sub_identifier",
  "sort_identifier", "sub_identifier_1", "identifier", "identifier_1",
  "target_identifier", "target_identifier_1", "qualified_word", "subref",
  "refmod", "integer", "symbolic_integer", "report_integer", "class_value",
  "literal", "basic_literal", "basic_value", "function", "func_no_parm",
  "func_one_parm", "func_multi_parm", "func_refmod", "func_args",
  "trim_args", "numvalc_args", "locale_dt_args", "formatted_datetime_args",
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
    1209,  1210,  1210,  1211,  1212,  1212,  1213,  1214,  1215,  1215,
    1216,  1217,  1217,  1218,  1219,  1219,  1219,  1220,  1221,  1221,
    1222,  1223,  1224,  1224,  1225,  1226,  1226,  1227,  1228,  1229,
    1229,  1230,  1230,  1230,  1231,  1231,  1232,  1232,  1232,  1232,
    1232,  1232,  1232,  1232,  1232,  1232,  1233,  1233,  1234,  1234,
    1234,  1235,  1235,  1235,  1235,  1235,  1235,  1235,  1236,  1236,
    1237,  1237,  1238,  1238,  1239,  1239,  1240,  1240,  1241,  1241,
    1241,  1242,  1242,  1242,  1243,  1243,  1244,  1244,  1245,  1245,
    1245,  1246,  1247,  1248,  1248,  1249,  1250,  1250,  1250,  1250,
    1251,  1251,  1252,  1252,  1252,  1252,  1253,  1253,  1254,  1255,
    1255,  1256,  1257,  1258,  1258,  1259,  1259,  1259,  1259,  1259,
    1259,  1259,  1260,  1260,  1261,  1261,  1262,  1262,  1262,  1262,
    1262,  1262,  1262,  1263,  1263,  1263,  1263,  1263,  1263,  1263,
    1263,  1263,  1263,  1263,  1263,  1264,  1264,  1265,  1265,  1265,
    1266,  1266,  1266,  1266,  1267,  1267,  1267,  1268,  1268,  1268,
    1269,  1269,  1269,  1270,  1270,  1271,  1271,  1272,  1272,  1273,
    1273,  1274,  1275,  1275,  1276,  1276,  1277,  1277,  1278,  1278,
    1279,  1279,  1280,  1280,  1280,  1281,  1281,  1282,  1282,  1282,
    1283,  1283,  1284,  1284,  1285,  1285,  1285,  1285,  1285,  1285,
    1285,  1285,  1286,  1286,  1287,  1287,  1287,  1287,  1287,  1287,
    1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,
    1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,
    1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,
    1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,
    1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,
    1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,  1287,
    1287,  1287,  1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,
    1291,  1291,  1292,  1292,  1293,  1293,  1294,  1294,  1295,  1295,
    1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,  1300,  1300,
    1301,  1301,  1302,  1302,  1303,  1303,  1304,  1304,  1304,  1305,
    1305,  1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,  1309,
    1310,  1310,  1311,  1311,  1311,  1312,  1312,  1312,  1313,  1313,
    1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,  1317,  1318,
    1318,  1319,  1319,  1320,  1320,  1320,  1321,  1321,  1321,  1321,
    1322,  1322,  1323,  1323,  1324,  1324,  1325,  1325,  1326,  1326,
    1327,  1327,  1328,  1328,  1329,  1329,  1329,  1330,  1330,  1331,
    1331,  1332,  1332,  1333,  1333,  1334,  1334,  1335,  1335,  1336,
    1336,  1337,  1337,  1337,  1338,  1338,  1339,  1339,  1340,  1340,
    1341,  1341,  1342,  1342,  1343,  1343,  1344,  1344,  1345,  1345,
    1346,  1346,  1347,  1347,  1348,  1348,  1349,  1349,  1350,  1350,
    1351,  1351,  1352,  1352,  1353,  1353,  1354,  1354,  1355,  1355,
    1356,  1356,  1357,  1357,  1358,  1358,  1359,  1359,  1359,  1360,
    1360,  1361,  1361,  1362,  1362,  1363,  1363,  1364,  1364,  1365,
    1365,  1366,  1366,  1367,  1367
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
       1,     1,     2,     1,     1,     2,     1,     1,     1,     2,
       1,     0,     2,     1,     1,     1,     3,     1,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     2,     1,     1,     1,     1,
       2,     2,     2,     4,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     2,     2,     1,
       1,     1,     3,     2,     2,     1,     1,     3,     3,     4,
       5,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     5,     5,     5,     4,     5,     5,
       5,     5,     5,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     5,     0,     3,     2,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     0,     0,     1,     0,     1,     0,     1,     0,     2,
       0,     2,     0,     1,     1,     0,     1,     0,     1,     2,
       0,     2,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     1,     0,     1,     1,     0,     2,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     2,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     3,     0,     1,
       0,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     2,     1,     1,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     2
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
    1845,    46,     0,     0,     0,  1890,  1845,  1845,  1845,     0,
       0,     0,     0,     0,  1845,     0,     0,  1822,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     151,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     178,     0,     0,    23,  1846,     0,     0,  1567,   126,  1845,
    1845,  1891,  1845,     0,     0,     0,     0,  1845,  1845,    60,
      82,     0,    54,    98,  1823,     0,  1845,     0,    99,   102,
       0,   150,     0,   182,    20,    13,    29,    37,    40,    42,
      41,  1884,    39,  1845,     0,     0,     0,  1636,   172,  1560,
     170,   175,   177,     0,     0,    62,    84,   174,    56,  1568,
     153,   154,  1847,   157,  1641,  1258,  1257,   116,   120,   123,
    1876,  1845,     0,   100,   152,   179,   180,    38,  1885,    36,
       0,  1649,  1645,  1650,  1648,  1646,  1651,  1647,   161,   162,
     164,   173,   168,  1936,  1937,     0,   166,     0,  1821,     0,
       0,     0,  1845,  1958,    80,    61,  1820,    66,    68,    69,
      70,    71,  1820,     0,  1845,     0,    83,     0,    87,    55,
      58,   155,  1849,  1848,   158,     0,  1876,  1879,  1878,     0,
       0,   117,   121,     0,     0,   268,   183,   132,   131,   146,
     142,   147,   128,   145,   143,   129,   130,   144,   127,   133,
     134,   136,   163,     0,  1919,   167,     0,  1637,   171,  1957,
    1845,     0,     0,    65,    67,    63,    81,  1820,  1845,     0,
       0,    92,    93,    94,     0,     0,    85,    88,     0,     0,
    1642,   156,   159,     0,  1877,   124,   118,   119,   122,   181,
       0,     0,  1718,     0,   280,   276,    24,     0,   271,   273,
     274,   135,   138,     0,   165,     0,     0,  1956,    74,    64,
       0,  1561,    73,    89,     0,    90,    91,    97,    86,    57,
       0,   160,   125,   186,  1719,   184,  1828,   277,   278,   279,
    1810,   287,     0,   269,   272,     0,   137,   169,     0,    77,
      79,    78,    75,    76,    95,    59,   187,  1829,  1903,  1811,
    1830,     0,   289,   270,   139,   140,  1944,  1945,    72,  1886,
    1904,  1824,  1831,     0,     0,     0,   291,     0,  1860,  1920,
    1911,     0,   246,     0,  1845,  1820,  1850,   248,     0,  1923,
    1918,   234,   185,   233,   188,   189,   190,   191,   192,   193,
       0,   194,     0,   195,   245,   196,   197,   198,   199,   200,
     201,  1816,  1845,  1825,     0,  1546,   275,  1544,   288,     0,
      25,   141,  1861,  1845,  1921,  1850,  1912,  1913,   213,  1922,
     249,  1886,  1845,  1845,  1851,  1845,  1845,   262,  1810,   263,
       0,  1845,  1860,  1817,     0,     0,   281,   282,   285,  1545,
     290,   297,   298,   349,   292,   352,     0,     0,  1845,   215,
     214,   211,  1887,   248,   244,     0,     0,     0,     0,   261,
    1880,  1880,     0,   264,     0,  1845,   247,   230,   283,     0,
     284,     0,   508,   293,  1701,     0,   294,   223,   224,   222,
     221,     0,   207,   208,   218,   218,     0,   218,   210,   209,
     218,     0,  1566,  1565,   250,   251,   252,   260,  1881,   265,
     266,   267,   231,     0,   286,     0,     0,   511,   354,     0,
       0,   358,     0,   296,   299,  1704,   219,   204,   220,   205,
    1828,   206,   203,   216,   202,   217,  1845,   254,   256,   240,
     239,   240,   236,   350,     0,     0,   514,   357,     0,   355,
       0,   364,   365,   359,     0,   362,  1845,  1955,     0,   256,
     227,  1705,   212,   255,   253,     0,     0,   238,   237,   352,
     509,     0,     0,   644,   356,   361,   398,   367,  1824,  1845,
       0,     0,  1845,  1824,  1860,  1845,  1808,   295,     0,   300,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     0,
       0,  1954,  1704,     0,   225,   258,   259,   257,     0,   243,
     351,   352,   512,     0,     0,    26,  1845,  1812,     0,     0,
       0,  1847,  1847,     0,     0,     0,     0,     0,  1845,   345,
    1809,   346,     0,   344,   347,   301,   302,   227,     0,     0,
     510,   352,   515,     0,   707,     0,   495,   422,  1892,  1892,
    1892,  1892,  1892,  1914,   423,   458,   460,   426,   427,   428,
     429,   430,   431,   454,   452,   453,   455,   456,   461,   459,
     432,  1888,   457,     0,   433,   419,   434,   435,     0,     0,
    1895,   437,   438,   436,   491,   440,   441,   439,  1845,  1847,
     399,   400,   401,   402,   403,   404,   420,   424,   425,   405,
     406,   407,   408,   409,   410,   411,   412,   413,     0,     0,
    1813,     0,   395,     0,   368,   323,   343,  1946,  1947,  1564,
     332,  1562,  1939,  1938,   325,  1858,  1822,  1834,     0,  1845,
     329,   328,  1845,   348,   226,     0,   148,   149,   229,     0,
    1942,  1943,   241,   513,   517,   645,     0,    27,   751,   506,
     507,  1893,   451,   450,   443,   442,   449,   448,   447,   446,
     445,   444,  1915,     0,  1889,   489,   475,   469,   414,  1629,
     504,  1896,   492,   493,   490,     0,     0,   416,   418,  1732,
    1732,   397,     0,  1869,  1660,     0,     0,  1656,  1661,  1659,
    1657,  1662,  1658,   396,   369,  1652,  1654,     0,   313,  1563,
    1859,   334,     0,   316,  1835,  1897,   342,     0,     0,   228,
     242,   516,   647,   709,     0,     0,   494,  1834,   471,     0,
    1907,     0,  1627,  1628,     0,   421,   496,   498,   500,     0,
     415,  1820,   462,   463,  1653,  1870,     0,     0,   378,   374,
     377,   376,   375,   390,   386,   388,   389,   391,   387,   392,
     393,   394,   371,   382,   383,   384,   379,   380,   381,   373,
     370,     0,   324,   315,   314,   312,   333,  1822,  1898,   321,
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
     470,  1908,   473,  1680,  1675,  1681,     0,     0,  1687,     0,
    1531,  1533,     0,     0,     0,  1678,     0,  1535,  1679,  1682,
    1683,     0,     0,     0,     0,  1677,  1687,  1676,  1515,  1513,
    1520,  1523,  1525,  1528,  1594,  1530,  1591,  1625,  1592,  1593,
    1684,     0,     0,     0,  1626,   505,   502,   499,     0,   417,
    1733,   372,   385,  1655,     0,     0,   335,   336,   337,   338,
       0,   317,  1833,   323,     0,  1547,   519,     0,   652,     0,
     649,   717,   717,     0,     0,  1735,  1736,  1737,  1738,  1739,
    1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,  1784,
    1785,  1786,  1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,
    1795,  1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,  1749,
    1750,  1751,  1752,  1753,  1754,  1755,  1756,  1757,  1758,  1759,
    1760,  1761,  1762,  1763,  1764,  1765,  1766,  1767,  1768,  1769,
    1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,  1779,
    1734,  1780,  1781,  1782,  1783,   804,     0,     0,     0,     0,
     903,     0,     0,     0,     0,     0,     0,     0,  1476,  1046,
       0,     0,  1909,   923,   922,     0,  1066,  1476,     0,     0,
       0,     0,     0,     0,   803,     0,  1174,     0,     0,     0,
       0,     0,     0,     0,     0,  1330,  1333,  1321,  1331,  1332,
    1323,     0,     0,  1355,  1353,     0,   751,     0,     0,     0,
       0,   476,   472,   477,  1871,   480,     0,     0,     0,  1673,
    1595,  1596,  1597,     0,     0,     0,     0,     0,     0,     0,
    1527,     0,  1526,     0,  1674,  1516,  1517,  1638,     0,     0,
       0,     0,     0,     0,     0,     0,  1663,     0,     0,     0,
       0,   497,     0,   501,   341,   340,  1814,  1822,   322,     0,
     654,   655,   650,  1819,   717,   714,   720,     0,   717,   729,
     704,   827,   876,   830,   826,  1869,     0,     0,  1585,   885,
    1579,   883,  1574,  1576,  1577,  1578,   888,     0,  1706,  1557,
     894,   895,     0,  1553,  1555,  1554,   906,   904,   905,   930,
       0,  1607,   933,   934,  1606,   937,   940,  1869,   948,  1631,
       0,  1537,  1720,  1571,  1630,  1635,  1572,     0,   958,  1886,
    1656,  1004,  1441,   969,   973,  1574,     0,  1576,  1013,     0,
     907,  1016,  1025,  1024,  1042,     0,  1021,  1023,  1475,     0,
    1048,  1052,  1050,  1053,  1051,  1045,  1056,  1057,  1569,  1059,
    1060,  1910,  1062,  1551,  1054,  1905,  1474,  1075,  1077,  1097,
    1098,  1101,     0,  1103,  1104,  1105,  1137,  1287,  1622,  1623,
       0,  1139,     0,  1146,     0,  1155,  1152,  1154,  1153,  1149,
    1156,  1176,  1557,  1163,  1174,  1165,     0,  1172,     0,  1608,
    1554,  1610,     0,  1214,  1712,  1218,  1423,  1540,  1224,  1886,
       0,  1233,  1541,  1423,     0,  1247,  1240,  1543,     0,  1550,
    1250,  1251,  1252,  1253,  1254,  1255,  1276,  1256,  1279,     0,
    1548,     0,     0,  1621,  1635,  1284,  1319,  1306,  1324,  1818,
    1344,     0,  1337,  1339,     0,  1351,     0,  1357,  1358,   739,
     745,   734,   735,   736,   738,     0,  1361,     0,  1364,  1366,
    1609,  1386,  1372,  1433,  1423,   478,   480,  1872,     0,   484,
     479,  1515,  1513,     0,  1515,     0,  1689,  1515,  1532,  1534,
    1515,     0,     0,     0,  1515,  1588,  1589,  1590,     0,  1536,
    1529,  1515,     0,  1514,  1639,     0,  1519,  1518,  1522,  1521,
    1524,     0,     0,  1515,     0,  1845,  1815,     0,   319,     0,
    1845,  1894,   715,  1845,     0,   726,   718,   719,   730,   877,
     806,  1815,   840,   831,     0,     0,     0,     0,  1580,  1581,
    1582,   886,   879,     0,     0,  1575,  1708,  1707,   891,   896,
     898,     0,   931,   901,   907,   935,   940,  1948,  1949,   938,
       0,   941,     0,   949,   946,  1931,  1930,  1538,     0,  1722,
    1539,  1633,  1634,   955,   956,   959,   953,  1199,  1005,   961,
     748,     0,   967,  1443,     0,   984,     0,   978,  1441,  1441,
    1441,  1441,  1014,  1007,     0,     0,   908,  1017,  1043,  1019,
    1476,  1476,  1020,  1027,  1028,   748,  1500,  1501,  1502,  1496,
    1909,  1488,  1508,  1511,  1510,  1512,  1504,  1495,  1494,  1499,
    1498,  1497,  1503,  1483,  1487,  1505,  1507,  1509,  1485,  1486,
    1482,  1484,  1477,  1478,  1489,  1490,  1491,  1492,  1493,  1481,
    1049,  1047,  1570,  1064,  1906,   748,  1079,     0,  1099,     0,
    1126,  1110,  1102,  1107,  1108,  1109,  1291,     0,  1624,     0,
       0,  1147,  1143,     0,  1156,  1918,  1199,  1164,  1170,  1171,
     748,  1167,  1476,     0,     0,  1175,     0,  1215,  1187,  1713,
    1714,  1886,     0,  1219,  1225,  1222,  1189,  1542,  1234,  1227,
    1199,  1242,  1248,  1237,     0,  1242,     0,  1602,  1603,  1277,
    1280,     0,     0,  1549,  1260,     0,  1259,     0,     0,  1633,
    1320,  1302,  1308,  1845,  1309,  1304,     0,  1322,     0,     0,
    1345,  1335,     0,  1338,     0,  1352,  1347,     0,  1359,   746,
     744,   737,     0,  1367,  1368,  1365,  1387,  1370,  1818,     0,
    1434,  1421,  1425,   484,   474,  1818,   467,   482,   483,  1850,
       0,  1684,     0,  1684,  1688,     0,  1684,  1684,  1684,     0,
    1667,     0,  1684,  1640,     0,  1684,  1684,  1917,     0,   339,
    1871,   318,   523,  1845,  1847,  1847,  1855,   555,   522,   526,
     527,     0,     0,   669,  1845,   659,  1914,   660,  1925,  1924,
       0,  1845,     0,   672,   663,   668,  1864,   664,     0,   667,
     674,   671,   665,   670,     0,   675,   666,     0,   686,   680,
     684,   683,   681,   685,   656,   687,   682,     0,  1864,     0,
    1845,   727,     0,     0,   705,   836,   841,   842,  1864,  1864,
     834,   835,  1864,   822,  1436,  1927,  1926,   819,   811,   813,
     814,     0,  1436,     0,     0,     0,   828,   817,     0,   825,
     808,   824,   809,  1599,  1598,     0,  1584,     0,  1869,  1631,
    1446,   884,  1635,  1572,     0,  1710,   891,     0,   889,     0,
       0,  1556,   918,   939,   944,     0,     0,  1573,  1446,  1845,
    1721,  1632,   957,  1830,  1468,  1200,  1201,  1442,   749,   971,
    1814,   748,  1440,   977,   976,   975,   974,   985,  1441,  1845,
     988,     0,   991,   992,     0,  1845,   995,   996,   997,   998,
       0,   999,  1441,   986,     0,   842,   964,   965,   962,   963,
       0,  1446,     0,   914,  1022,  1037,  1039,  1038,  1032,  1034,
    1040,  1476,  1029,  1026,  1476,  1030,  1506,  1479,  1480,  1871,
    1063,  1552,   748,  1071,  1072,  1909,  1087,  1088,  1090,  1092,
    1093,  1089,  1091,  1082,  1909,  1078,     0,  1127,     0,  1129,
    1128,  1130,  1112,  1122,     0,     0,  1106,  1293,     0,  1836,
       0,  1140,  1446,     0,  1199,     0,     0,  1168,  1181,  1177,
    1182,  1178,  1183,     0,  1173,  1430,  1429,  1180,  1189,  1424,
    1618,  1619,  1620,     0,     0,  1229,   748,     0,  1241,     0,
       0,     0,  1278,     0,  1282,  1281,  1274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1262,  1263,  1715,  1468,
       0,  1325,  1901,  1901,  1340,  1341,  1342,     0,  1446,     0,
       0,   747,     0,  1702,     0,  1342,  1199,  1804,   468,     0,
    1845,  1698,  1671,  1700,  1672,  1696,  1668,  1669,  1670,  1694,
    1691,  1692,  1666,  1685,     0,  1664,  1665,   503,     0,     0,
    1973,  1974,  1847,  1847,     0,   520,   524,   532,   528,   530,
     531,   533,   535,     0,   657,   658,   661,   662,     0,   689,
    1865,  1845,  1907,  1845,   690,   688,   702,  1845,   721,   722,
     725,     0,   716,   731,   733,  1845,   844,     0,     0,   832,
     833,     0,   748,   823,  1438,   810,   812,  1436,   820,   815,
     816,   829,   818,  1601,  1583,  1600,  1720,     0,   748,   880,
    1448,  1633,  1634,  1446,     0,  1709,   890,   892,   899,   897,
     926,  1843,   943,   942,   947,     0,  1204,     0,   748,   954,
    1470,   751,  1444,   966,     0,   989,   990,   993,   994,     0,
    1472,  1472,   987,   968,   980,   981,   979,   982,     0,  1008,
       0,   909,   910,   720,     0,  1476,  1476,  1036,   748,  1033,
       0,  1070,   748,  1073,  1068,     0,     0,  1094,     0,     0,
       0,  1123,  1125,     0,  1118,  1132,  1119,  1120,  1111,  1114,
    1132,  1285,  1845,  1850,     0,  1837,  1292,  1141,  1144,     0,
       0,  1157,  1158,  1169,  1166,     0,     0,  1191,  1190,   748,
    1223,  1456,  1468,  1230,     0,  1243,  1476,  1476,  1238,  1244,
    1261,  1273,  1275,  1265,  1266,  1267,  1271,  1268,  1272,  1269,
    1270,  1264,  1716,  1318,     0,  1315,  1316,  1310,     0,  1303,
    1953,  1952,     0,  1902,  1328,  1328,  1451,     0,  1720,  1348,
       0,   740,     0,  1703,  1373,  1374,     0,  1377,  1380,  1384,
    1378,  1229,  1805,     0,   488,   485,   486,     0,  1686,   320,
     525,  1856,  1857,  1643,  1644,   542,   537,   541,   540,   363,
     556,   529,   534,  1613,   679,  1611,  1612,   678,   695,   701,
       0,   698,   723,   724,   733,   751,     0,     0,  1436,   837,
     839,   838,  1437,   748,  1435,   821,  1446,  1573,  1447,   748,
    1445,  1632,   881,  1711,  1604,  1605,  1934,  1935,   928,   748,
    1869,  1844,   925,   924,   920,     0,  1724,  1725,  1726,  1727,
    1728,  1729,  1730,  1731,  1723,     0,  1469,   748,  1467,     0,
    1001,  1000,  1003,     0,  1616,  1617,  1002,     0,   972,  1446,
    1537,  1446,  1537,   911,   912,     0,   916,   915,   917,  1035,
    1041,  1031,  1065,  1069,  1080,  1083,  1084,  1826,  1076,  1909,
    1081,  1132,  1132,     0,  1117,  1115,  1116,  1121,  1295,     0,
    1289,  1838,  1446,  1158,  1161,  1150,     0,  1184,     0,  1871,
       0,  1210,  1192,  1205,  1198,  1194,  1207,     0,  1460,   748,
    1455,  1228,  1231,     0,   748,   748,  1245,  1317,  1307,  1311,
    1312,  1313,  1314,  1305,  1326,  1329,  1327,   748,  1336,  1453,
    1845,  1446,  1446,   742,  1362,  1702,  1376,  1834,  1382,  1834,
    1451,  1468,  1428,  1427,  1852,   487,   481,  1558,   536,  1940,
    1941,   538,   365,   557,   693,   691,   694,   692,   696,   697,
       0,   673,   699,   700,     0,   751,   843,   848,  1845,   850,
     851,   852,   875,  1845,   853,   854,   855,   856,   857,     0,
     858,   859,   861,   862,   863,     0,   864,   849,  1806,   865,
     874,   868,   845,   846,   867,   807,  1439,   882,  1449,   748,
     902,   927,     0,   919,  1203,  1202,  1471,  1950,  1951,  1473,
     983,  1010,     0,  1009,     0,   913,  1085,  1827,     0,     0,
    1113,  1124,  1132,  1841,  1841,  1133,     0,     0,  1298,  1294,
    1288,  1145,  1151,  1160,     0,     0,     0,  1195,  1845,  1468,
    1193,  1206,     0,     0,     0,  1209,  1461,  1232,  1239,  1246,
    1452,   748,  1450,     0,  1350,  1349,  1388,   741,     0,  1375,
       0,  1834,  1379,     0,  1371,   748,   748,  1422,  1432,  1463,
    1464,  1431,  1853,  1854,  1426,  1559,     0,  1845,  1845,     0,
    1845,   543,   544,   545,   546,   547,   548,     0,   559,   676,
     677,     0,     0,     0,   866,  1845,  1472,  1472,  1807,     0,
     847,   929,   921,  1446,  1446,     0,  1095,  1131,  1842,     0,
       0,  1845,  1296,     0,     0,  1286,  1290,  1159,     0,  1197,
       0,  1188,  1213,  1458,  1459,  1212,  1196,  1208,  1454,  1343,
    1396,   743,  1381,     0,  1385,  1465,  1466,  1462,  1960,  1959,
    1845,     0,     0,  1962,     0,  1845,  1845,     0,   539,  1894,
       0,   870,   869,     0,   872,   871,   873,  1614,  1615,  1012,
    1011,  1086,  1135,  1134,     0,  1299,  1845,  1476,  1211,  1457,
    1419,  1418,  1397,  1389,  1390,  1806,  1391,  1392,  1393,  1394,
    1417,     0,     0,  1383,     0,   554,   550,  1961,     0,     0,
     549,   610,  1839,   625,  1845,     0,   609,  1845,  1869,   558,
    1845,  1845,     0,   564,   566,   575,   567,   569,   572,   560,
     561,   562,   571,   573,     0,   576,   563,   619,   568,     0,
     570,   574,   565,  1928,  1929,  1866,   732,   860,  1297,     0,
    1185,     0,  1899,     0,  1871,   551,   553,   552,  1840,   642,
     627,   618,     0,   469,     0,     0,     0,     0,     0,  1862,
    1862,     0,  1476,     0,     0,   617,   619,   621,   628,     0,
     629,   637,   638,     0,   640,  1867,  1868,   631,  1300,     0,
    1900,     0,  1415,  1414,  1413,     0,   626,   597,     0,     0,
     593,   594,  1907,  1720,   599,  1586,  1964,     0,     0,  1966,
    1968,     0,  1972,  1970,   577,   582,  1873,  1873,   579,   583,
     578,   584,   643,     0,  1863,   611,   611,  1862,  1862,   604,
     623,   624,   620,   622,   639,   636,   635,   633,   634,  1847,
     632,  1416,  1933,  1932,  1882,  1409,  1403,  1404,  1406,   595,
     596,   473,   641,  1871,     0,   598,  1587,  1963,  1967,  1965,
    1971,  1969,  1875,  1874,   585,   589,     0,   615,   613,   605,
     611,   614,   607,     0,     0,   630,  1883,  1871,  1412,  1407,
    1410,     0,  1405,   465,     0,   601,   588,   580,   586,   592,
     591,   581,   590,     0,   612,   606,   608,     0,  1411,  1408,
       0,   464,   603,   600,   602,     0,   616,  1402,  1399,  1401,
    1400,  1395,  1398,   466,   587
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
     569,   570,   845,   571,  1711,  1033,   778,   572,   573,   712,
     851,   574,   575,   846,  1026,  1027,  1028,  1029,   576,   577,
     578,   579,   613,   462,   549,   463,   464,   498,   499,   556,
     500,   533,   534,   597,   773,   832,   833,   834,   835,   836,
     501,   692,   596,   670,   671,   672,   810,   673,   674,   675,
     676,   677,   678,   679,  2635,  2811,   680,   800,   969,  1175,
     798,  1416,  1419,  1420,  1689,  1686,  2205,  2206,   681,   682,
     754,   683,   684,   685,  1016,   806,   807,  1211,   686,   687,
     497,   591,   526,   621,   553,   724,   791,   855,  1219,  1460,
    1718,  1719,  2008,  2009,  2010,  2011,  1720,  2215,  2216,  2378,
    2511,  2512,  2513,  2514,  2515,  2516,  2005,  2220,  2518,  2579,
    2639,  2640,  2724,  2797,  2801,  2641,  2710,  2642,  2765,  2813,
    2643,  2644,  2779,  2780,  2645,  2646,  2647,  2685,  2686,  2671,
    2687,  2648,  2649,  2749,  2750,  2690,  2691,  2692,  2650,  2651,
    2652,   595,   792,   858,   859,   860,  1221,  1461,  1754,  2388,
    2389,  2390,  2394,  1755,  1756,   727,  1468,  2034,   728,   863,
    1042,  1041,  1224,  1225,  1226,  1465,  1762,  1044,  1764,  2234,
    1166,  1401,  1402,  2363,  2487,  1403,  1404,  1970,  1827,  1828,
    2081,  1405,   795,   916,   917,  1116,  1232,  1233,  1790,  1472,
    1527,  1770,  1771,  1767,  2036,  2238,  2422,  2423,  2424,  1470,
     918,  1117,  1239,  1484,  1482,   919,  1118,  1246,  1808,   920,
    1119,  1250,  1251,  1810,   921,  1120,  1259,  1260,  1537,  1863,
    2101,  2102,  2103,  2070,  1135,  2264,  2258,  2430,  1493,   922,
    1121,  1262,   923,  1122,  1265,  1499,   924,  1123,  1268,  1504,
     925,   926,   927,  1124,  1278,  1513,  1516,   928,  1125,  1281,
    1282,  1521,  1283,  1525,  1855,  2096,  2288,  1838,  1852,  1853,
    1519,   929,  1126,  1288,  1533,   930,  1127,  1291,   931,  1128,
    1294,  1295,  1296,  1542,  1543,  1544,  1873,  1545,  1868,  1869,
    2107,  1539,   932,  1129,  1305,  1136,   933,  1130,  1306,   934,
    1131,  1309,   935,  1132,  1312,  1880,   936,   937,  1137,  1884,
    2114,   938,  1138,  1317,  1586,  1893,  2117,  2305,  2306,  2307,
    2308,   939,  1139,  1319,   940,  1140,  1321,  1322,  1592,  1593,
    1905,  1594,  1595,  2128,  2129,  1902,  1903,  1904,  2122,  2314,
    2455,   941,  1141,   942,  1142,  1331,   943,  1143,  1333,  1602,
     944,  1145,  1339,  1340,  1606,  2325,   945,  1146,  1343,  1610,
    2144,  1611,  1344,  1345,  1346,  1919,  1921,  1922,   946,  1147,
    1353,  1934,  2331,  2332,  2333,  1824,  1825,  1826,  2470,  2335,
    2469,  2551,  1618,   947,   948,  1148,  1355,   949,   950,  1149,
    1358,  1625,   951,  1150,  1361,  2152,  2153,  1629,   952,   953,
    1151,  1365,  1635,  1937,  2158,  2159,  1633,   954,  1152,  1370,
     160,  1647,  1371,  1372,  1956,  1957,  1373,  1374,  1375,  1376,
    1377,  1378,   955,  1153,  1326,  2318,  1596,  2460,  1907,  2131,
    2458,  2545,   956,  1154,  1386,  1959,  1655,  2174,  2175,  2176,
    1651,   957,  1388,  1657,  2354,  1160,   958,  1161,  1390,  1391,
    1392,  2186,  1661,   959,  1162,  1395,  1666,   960,  1164,   961,
    1165,  1397,   962,  1167,  1406,   963,  1168,  1408,  1675,   964,
    1169,  1411,  1679,  2194,  2195,  1975,  2197,  2368,  2492,  2370,
    1677,  2488,  2560,  2603,  2604,  2605,  2821,  2606,  2756,  2757,
    2791,  2607,  2704,  2608,  2609,  2610,   965,  1170,  1413,  1623,
    1976,  1927,  2497,  1681,  2043,  2044,  2244,  1522,  1523,  1832,
    2059,  2060,  2250,  2358,  2359,  2482,  2150,  2552,  2151,  2340,
    2498,  2499,  2500,  2079,  2080,  2278,  2282,  1315,  1316,  1298,
    1299,  1572,  1573,  1574,  1575,  1576,  1577,  1578,   998,  1198,
    1422,  1000,  1001,  1002,  1003,  1004,  1270,  1507,  1362,  1363,
    1366,   396,   397,  1036,  1379,  1380,  1583,  1347,  1253,  1254,
    2376,   483,   302,   700,   701,   484,    98,   153,  1307,  1272,
    1241,  1485,  2714,  1434,  1005,  1795,  2054,  2130,  2253,  1263,
    1348,  2224,  2586,  2283,  1929,  2225,  1327,  1383,  1006,  1007,
    1273,  1274,   749,   802,   803,  2226,   272,  2218,   180,  1244,
     775,   776,  1009,  1010,  1011,  1012,  1206,  1179,  1442,  1438,
    1431,  1423,  1425,   502,  2196,   540,  1488,  1806,  2065,  1621,
    2178,   283,  1510,  1820,  2274,   812,  1115,  2203,  2529,   611,
     340,   693,  1474,   424,  1227,   203,   115,   394,  2448,   338,
     353,  1034,   785,  2136,  2669,  2539,  2265,    96,   215,   415,
    2504,  2004,   781,   403,  2735,  2021,  2697,   816,  2689,  2774,
     219,   489,  2787,   169,   391,   745,   102,   733,   689,   849,
    2701,  2184,   351,  1585,   972,  1313,   408,   743,  1212,  1352,
     405,   392,  1772,  1792,  2655,  1508,  2754,  2259,   185,   704,
    2381,   722,   348,   603,  1501,  2439,  2182,   541,   204,  2570,
    2576,  2727,  2728,  2729,  2730,  2731,  1722
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2487
static const yytype_int16 yypact[] =
{
   -2487,   271,   530, -2487,   327,   353, -2487,   530, -2487, -2487,
     739, -2487, -2487,   739,   739,   743,   743, -2487,   849, -2487,
     902,   669,   931, -2487, -2487,  1058,  1058,   632,   766, -2487,
   -2487,   621,   739,   743, -2487, -2487,   957,   836, -2487, -2487,
     855,  1736,   743, -2487, -2487, -2487,   669,   892, -2487, -2487,
     -19, -2487,   895,   895,   990,  1021,  1212,  1212,  1212,  1107,
     895,  1092,  1060,  1067,  1212,  1097,  1119,  1537, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,   544, -2487, -2487, -2487, -2487,
    1368, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
    1432,  1155,   621, -2487, -2487,  1168,   126, -2487, -2487,  1212,
    1212, -2487,  1212,  1152,  1577,  1152,  1214,  1212,  1212, -2487,
   -2487,  1152, -2487, -2487, -2487,  1176,   948,  1237, -2487, -2487,
    1188, -2487,  1251, -2487, -2487, -2487, -2487,   521, -2487, -2487,
   -2487,  1373, -2487,  1212,   944,  1152,  1467,    38, -2487, -2487,
   -2487, -2487, -2487,  1474,  1269,   356,  1550, -2487,  1242, -2487,
    1176, -2487,    69, -2487, -2487, -2487, -2487, -2487, -2487,  1302,
     496,  1212,     6, -2487, -2487, -2487,   564, -2487, -2487, -2487,
    1030, -2487, -2487, -2487, -2487, -2487, -2487, -2487,   944, -2487,
    1303, -2487,  -123, -2487, -2487,  1152, -2487,  1349, -2487,  1350,
    1342,  1691,  1212, -2487, -2487, -2487,   850, -2487, -2487, -2487,
   -2487, -2487,   725,  1699,  1212,    89, -2487,    82, -2487, -2487,
      17, -2487, -2487, -2487, -2487,  1503,   496, -2487,  1529,   895,
     895, -2487,  1302,  1305,    76,   -44, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,   972,
   -2487,    72, -2487,   944, -2487, -2487,  1433, -2487, -2487, -2487,
    1212,  1359,  1509, -2487, -2487, -2487, -2487,   851,  1212,  1256,
    1539,   631, -2487,  1744,   837,  1312, -2487, -2487,  1317,  1669,
   -2487,  1503, -2487,   895, -2487, -2487, -2487, -2487, -2487, -2487,
    1320,  1464, -2487,   895, -2487,  1018, -2487,   100, -2487, -2487,
   -2487, -2487, -2487,   972, -2487,  1523,  1509, -2487, -2487, -2487,
     928, -2487, -2487, -2487,  1526, -2487, -2487, -2487, -2487, -2487,
    1511, -2487, -2487, -2487, -2487, -2487,  1324, -2487, -2487, -2487,
    1764,  1688,  1338, -2487, -2487,   972, -2487, -2487,    22, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,  1353, -2487,
    1611,  1681,  1344, -2487,  1790, -2487, -2487, -2487, -2487,  2176,
   -2487,  1724, -2487,  1313,  1364,  1424, -2487,   972,  1553,  1471,
    -225,  1425, -2487,  1421,  1212,  1773,   103,   199,  1120, -2487,
    1329, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
    1404, -2487,  1573, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487,  1796,  1212, -2487,  1313, -2487,  1313, -2487, -2487,  1380,
     585, -2487, -2487,  1212, -2487,  1603, -2487, -2487,  1164, -2487,
   -2487,   919,  1212,  1212, -2487,  1212,  1212, -2487,  1764, -2487,
     137,  1212,  1553, -2487,  1436,  1333,  1313, -2487,  1512, -2487,
   -2487, -2487, -2487,  1335, -2487,  1339,    55,   338,  1212, -2487,
   -2487,   954, -2487, -2487, -2487,  -113,  1427,  1152,  1152, -2487,
    1533,  1533,  1540, -2487,  1152,  1212, -2487, -2487, -2487,  1509,
   -2487,  1455,  1593, -2487, -2487,  1398, -2487, -2487, -2487, -2487,
   -2487,  1152, -2487, -2487,   -53,   -53,  1851,   -53, -2487, -2487,
     -53,   -36, -2487, -2487, -2487, -2487,   396, -2487, -2487, -2487,
   -2487, -2487, -2487,   658, -2487,  1401,  1461,  1605,  -203,  1405,
    5418, -2487,  1355, -2487, -2487,   212, -2487, -2487, -2487, -2487,
    1324, -2487, -2487, -2487, -2487, -2487,  1212, -2487, -2487,  1354,
   -2487,  1354, -2487, -2487,  1409,  1469,  1500, -2487,  1412, -2487,
    1413, -2487,  1786, -2487,  1787, -2487,   988, -2487,  1749, -2487,
    1438, -2487, -2487, -2487,  1152,  1152,   747, -2487, -2487,  1339,
   -2487,  1420,  1477,  1492, -2487, -2487, -2487,  1193,  1724,  1212,
    1283,  1283,  1212,    19,  1553,  1212,  1865, -2487,  1578, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,   895,
     584, -2487,     1,  1381, -2487, -2487, -2487, -2487,  1580, -2487,
   -2487,  1339, -2487,  1435,  1491, -2487,  7322,   758,  1692,  1509,
    1383,   165,   165,  1386,  -102,  -113,  1509,  1397,  1212, -2487,
   -2487, -2487,   163,   895, -2487, -2487, -2487,  1438,    56,   -63,
   -2487,  1339, -2487,  1441,   675,  1033, -2487, -2487,   714,   764,
     817,   844,   877,  1396, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487,  1518, -2487,   107, -2487, -2487, -2487, -2487,  1152,  1152,
    1675, -2487, -2487, -2487,   -68, -2487, -2487, -2487,  1212,   165,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,  1299,   -43,
   -2487,  1400, -2487,    59, -2487,  1456, -2487, -2487, -2487, -2487,
    1386, -2487, -2487, -2487, -2487,  1653,    84,  1694,  1406,  1212,
   -2487, -2487,  1212, -2487, -2487,   275, -2487, -2487, -2487,  1340,
   -2487, -2487, -2487, -2487, -2487, -2487,  1791, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487,  1399, -2487, -2487,  1866,  1466, -2487,  1451,
    1472, -2487, -2487, -2487, -2487,  7670,   275,  1898, -2487,  1519,
    1519, -2487,   952,  1616, -2487,   149,   149, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,  1475, -2487,  1509,   112, -2487,
   -2487, -2487,  1509, -2487, -2487,  1515, -2487,   -20,   -20, -2487,
   -2487,  1581,  1415,    37,  2812,  4380, -2487,  1694,  1735,  1509,
    1481,  8259,  1468, -2487,  1152, -2487,   275, -2487,  1487,  1682,
   -2487,  1773, -2487, -2487, -2487, -2487,   149,  1482, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487,   952, -2487, -2487, -2487, -2487,    26,  1537, -2487,    65,
   -2487, -2487, -2487, -2487,  1430, -2487,  4647, -2487, -2487,  1415,
    1484, -2487, -2487,  1563,  3217, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487,     2, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487,  1541, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487,   832, -2487, -2487,  1607,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487,  1442,  1509,  1466,
   -2487, -2487,  1829, -2487, -2487, -2487,  1485,  1490,  1494,  3115,
      38,    38,  1496,  1497,  1498, -2487,  1499,    38, -2487, -2487,
   -2487,  8297,  8259,  8297,  1501, -2487,  1494, -2487,    41,  -193,
    1121, -2487,  1799, -2487, -2487, -2487, -2487, -2487,  1475, -2487,
    1502,  1505,  1506,  8259, -2487, -2487,   740, -2487,   275, -2487,
   -2487, -2487, -2487, -2487,  -113,  -113, -2487, -2487, -2487, -2487,
    1768, -2487, -2487,  1456,  1509, -2487, -2487,  1522, -2487,  1525,
   -2487,    50,    50,  1450,  1527, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487,   -87,  3535,  8259,   -12,
     673,   400,  1313,   812,   697,  6685,  6948,  1719,   309,   506,
     812,  1152,  1524, -2487, -2487,  6948, -2487, -2487,   812,  1430,
    1690,  1152,  5845,  6948, -2487,  1113,  2566,  1313,  1152,  1313,
     760,    77,   395,  1152,  1313, -2487, -2487, -2487, -2487, -2487,
   -2487,  5948,  6035, -2487, -2487,  1430,    57,  1152,  1313,  2685,
     760, -2487, -2487,  1767,  1680, -2487,  8259,  8259,  7631, -2487,
   -2487,  1475, -2487,  1493,  1504,  8259,  8259,  8259,  3115,  1507,
   -2487,  1103, -2487,  3115, -2487, -2487, -2487, -2487,  8259,  7730,
    8259,  8259,  8259,  8259,  8259,  8259, -2487,  3115,  8259,  -193,
    1585, -2487,  1538, -2487, -2487, -2487,  1970,  1537, -2487,   177,
   -2487, -2487, -2487, -2487,    39, -2487,  -174,  -138,    46, -2487,
   -2487, -2487,  1870,   684,  1806,  1616,  1152,  3115, -2487,  1873,
   -2487,  6138, -2487, -2487, -2487, -2487, -2487,   144,   640, -2487,
     -12, -2487,  1555, -2487,    38, -2487, -2487, -2487, -2487,  1874,
    2685, -2487,   400, -2487, -2487,  1313,   969,  1616,  1875, -2487,
     480, -2487,  1620, -2487, -2487,  1451,  1475,  1313,  1876,  1658,
    1183,  1877,  6296, -2487,  6415,    91,  1198,  1235,  1880,   652,
    1510, -2487, -2487, -2487,  1881,    54, -2487, -2487, -2487,  5070,
   -2487, -2487,  1918,     2, -2487, -2487, -2487,   812, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,  1574, -2487, -2487,   755,  1430,
   -2487, -2487,    35, -2487, -2487, -2487, -2487, -2487, -2487,  1557,
    6948, -2487,  1568,  1883,  1979, -2487, -2487, -2487, -2487,  1113,
    1619, -2487,  1579, -2487,  3620,     5,  1042,  1583,  1589, -2487,
     524, -2487,  1584,  1889,   980, -2487,  1839, -2487,  1897,  1658,
    1534,  1900, -2487,  1839,  1152,  1901,  1543, -2487,   729, -2487,
   -2487, -2487, -2487, -2487, -2487,  1772, -2487,   812, -2487,   -57,
   -2487,   451,  2017, -2487,    62, -2487,  1902,   951,   625,  2003,
    1903,  5758, -2487, -2487,  1152,  1904,  6559,  1430, -2487, -2487,
    -164, -2487, -2487, -2487, -2487,  4166, -2487,  1857, -2487,  1346,
   -2487,  1905,  1942,  1907,  1839, -2487, -2487, -2487,  1152,  1837,
     923,    90,  1056,  1606,   231,  1608, -2487,   234, -2487, -2487,
     217,  1609,  1610,  1612,   239, -2487,  1475, -2487,  1613, -2487,
   -2487,   248,  1614,  1056, -2487,  1138,  1121,  1121, -2487, -2487,
   -2487,  1153,  1617,   288,  1621,  1212, -2487,  -113,  1945,  1604,
     559,  7455, -2487,  1212,  1651,  1758, -2487, -2487,  1965, -2487,
   -2487,   729,  1879, -2487,   612,  1377,   147,  1624, -2487,  1475,
   -2487, -2487, -2487,  6974,  1882, -2487,  1856, -2487,  1702, -2487,
    1741,  1831, -2487, -2487,  1510, -2487,   969, -2487, -2487, -2487,
    1178,   577,  1152, -2487, -2487, -2487, -2487, -2487,  8259,  1813,
   -2487,  1468, -2487,  1313, -2487, -2487, -2487,  1712, -2487, -2487,
   -2487,  6948, -2487,  1794,    83,  1792,  1737,  1601,  1928,  1928,
    1928,  1928, -2487, -2487,  6948,  6974, -2487, -2487, -2487, -2487,
     309,   157, -2487,  1587, -2487,  1588, -2487, -2487, -2487, -2487,
    1524, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487,  4791, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487,    42, -2487,  1968,  1311,  1922, -2487,   729,
     111, -2487, -2487,  1731, -2487, -2487,    95,  8259, -2487,  1648,
     812, -2487, -2487,  6974,  1619,  1329,  1712, -2487, -2487, -2487,
   -2487, -2487,  1933,  1152,   -12, -2487,  1075, -2487, -2487, -2487,
   -2487,  1658,  1690, -2487, -2487, -2487,  1884, -2487, -2487, -2487,
    1712,  1973, -2487, -2487,  1152,  1973,  1652, -2487,  1475, -2487,
   -2487,   481,  1302, -2487, -2487,  5545, -2487,  2059,   916,   116,
   -2487, -2487, -2487,  1212, -2487,   -62,  6948, -2487,    33,  6662,
   -2487, -2487,  1152, -2487,  1914, -2487, -2487,  6974, -2487,  1509,
   -2487, -2487,   729, -2487, -2487, -2487, -2487, -2487,  2003,  1885,
   -2487, -2487,  1075,  1837, -2487,  2003, -2487, -2487, -2487,  1603,
    7923,  1502,  7977,  1502, -2487,  1152,  1502,  1502,  1502,  3115,
   -2487,    -1,  1502, -2487,  8118,  1502,  1502, -2487,   275, -2487,
    1680, -2487, -2487,  1212,   165,   165,   929, -2487, -2487, -2487,
   -2487,  1910,   -11, -2487,  1212, -2487,   501, -2487, -2487, -2487,
    1554,  1212,  1690, -2487, -2487, -2487,  1814, -2487,  1509, -2487,
    2058, -2487, -2487, -2487,  1152, -2487, -2487,  1152, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487,  1913,  1814,   136,
    1212, -2487,  1618,  1660, -2487, -2487, -2487,  1847,  1814,  1814,
     363,  1869,  1814, -2487,  1959, -2487, -2487, -2487,  1622,  1625,
   -2487,   729,  1959,  1890,  1698,  1833, -2487, -2487,  1854, -2487,
   -2487, -2487, -2487, -2487, -2487,   412, -2487,  1152,  1616,  1930,
     707, -2487,   -32,   226,   812,  1683,  1702,   812, -2487,  1684,
     -12, -2487,     2, -2487, -2487,  1755,  1776, -2487,   891,  1212,
   -2487, -2487, -2487,  1528,  1911, -2487, -2487, -2487, -2487, -2487,
    2114, -2487, -2487, -2487, -2487, -2487, -2487, -2487,  1928,  1212,
   -2487,   527, -2487, -2487,  1575,  1212, -2487, -2487, -2487, -2487,
     122, -2487,  1330, -2487,  1105,  1847, -2487, -2487, -2487, -2487,
    1941,   707,  1943,    52, -2487, -2487, -2487, -2487,  2129, -2487,
    1701,   148, -2487, -2487,   157, -2487, -2487, -2487, -2487,  1680,
   -2487, -2487, -2487,  2023,  2014,  1524, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487,  1795,  1524, -2487,  1706, -2487,  2107, -2487,
   -2487, -2487,   732, -2487,   729,   795, -2487,   209,   923,     0,
     812,   812,   707,  1961,  1712,   137,  1313,  2020, -2487, -2487,
   -2487,  2158, -2487,  1976, -2487, -2487, -2487, -2487,  1884, -2487,
   -2487, -2487, -2487,  1152,  2036,   -60, -2487,  1661, -2487,  1673,
     729,   843, -2487,   412, -2487, -2487, -2487,  6948,  1302,  1302,
    1302,  1302,  1302,  1302,  1302,  1302,   916, -2487,   894,  1911,
     575, -2487,  1750,  1750, -2487, -2487,   422,  1152,   707,  1974,
    1725, -2487,  1729,  2181,  1152,   566,  1712,  2178, -2487,  1679,
    1212, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487,  1170, -2487, -2487, -2487,  1152,   400,
   -2487, -2487,   165,   165,   466,  1415, -2487, -2487, -2487,  1152,
    1152, -2487, -2487,   468, -2487, -2487, -2487, -2487,   468, -2487,
   -2487,  1212,  1481,  1212, -2487, -2487, -2487,  1212, -2487, -2487,
   -2487,   599, -2487, -2487, -2487,  1212,  1685,   468,   468, -2487,
   -2487,   468, -2487, -2487,  1894, -2487, -2487,  1959, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487,  1620,   147, -2487, -2487,
    1893,     7,  1993,   707,   257, -2487, -2487, -2487, -2487, -2487,
     -23,    79, -2487, -2487, -2487,   802, -2487,  8259, -2487, -2487,
    1899, -2487, -2487, -2487,   468, -2487, -2487, -2487, -2487,   468,
     419,   419, -2487, -2487, -2487, -2487, -2487,  1693,   812, -2487,
     812,  5422, -2487,   887,    28,   157, -2487, -2487, -2487,  2129,
    1152, -2487, -2487, -2487, -2487,  1697,  1230,   273,  1700,   257,
     729, -2487, -2487,  2150, -2487, -2487, -2487, -2487,   795, -2487,
    2019, -2487,  1212,  1603,  1892, -2487, -2487,   812, -2487,   812,
    1313, -2487,   880, -2487, -2487,  1152,  6948,   591, -2487, -2487,
   -2487,  1912,  1911, -2487,  1215, -2487, -2487, -2487, -2487,  1673,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487,   202, -2487,  1152, -2487, -2487, -2487,  1174, -2487,
   -2487, -2487,  8259, -2487,  6948,  6948,  1742,  1878,  1620, -2487,
     812, -2487,   257, -2487,  1896, -2487,   729, -2487,  2099,  1771,
   -2487,   -60, -2487,   604, -2487,  1679, -2487,  1152, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487,  1393, -2487, -2487,     8,
   -2487,  1152, -2487, -2487, -2487, -2487, -2487, -2487,   918, -2487,
     400,   918, -2487, -2487, -2487,    58,  2169,  2273,  1959, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487,  1802,  2021, -2487, -2487,
   -2487,  2022, -2487, -2487, -2487, -2487, -2487, -2487,  1923, -2487,
    1616, -2487, -2487, -2487, -2487,  1152, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,   942, -2487, -2487, -2487,  3845,
   -2487, -2487, -2487,  1410, -2487, -2487, -2487,  1737, -2487,   707,
    1858,   707,  1859, -2487, -2487,  6948, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,  1230, -2487,  2123, -2487,  1524,
   -2487, -2487, -2487,   257,  1423, -2487, -2487,  1423,   -70,  1152,
   -2487, -2487,   707,   880, -2487, -2487,  1252, -2487,  2179,  1680,
    1966,  1991, -2487,   623, -2487, -2487, -2487,   635, -2487, -2487,
   -2487, -2487, -2487,  1967, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487,  1056, -2487, -2487, -2487, -2487, -2487,  1934,
    1212,  1802,   707,  1733, -2487,  2181, -2487,  1694,  2138,  1694,
    1742,   917, -2487, -2487,  1418, -2487,  1152, -2487,  1076, -2487,
   -2487,   466, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
     468, -2487, -2487, -2487,   468,   155, -2487, -2487,  1212, -2487,
   -2487, -2487, -2487,  1212, -2487, -2487, -2487, -2487, -2487,    40,
   -2487, -2487,  2180, -2487, -2487,   150, -2487, -2487,  2231, -2487,
   -2487, -2487,  2273, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487,  1152, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
    1737, -2487,   812, -2487,   812, -2487, -2487, -2487,  2191,  2130,
    1423,  1423, -2487,  1779,  1779, -2487,  1906,  1313,   820, -2487,
    1152, -2487, -2487, -2487,  1860,  6948,  1980, -2487,  1212,   901,
   -2487, -2487,   589,  1982,  1985, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487,  1152, -2487, -2487, -2487, -2487,  1793, -2487,
    1152,  1694, -2487,  1152, -2487, -2487, -2487, -2487, -2487,  1954,
   -2487, -2487, -2487, -2487, -2487, -2487,  1217,  1212,  1212,  1422,
    1212, -2487, -2487, -2487, -2487, -2487, -2487,  1677, -2487, -2487,
   -2487,  2140,   468,   468, -2487,  1212,   419,   419, -2487,   466,
   -2487, -2487, -2487,  1802,  1802,  6948, -2487,  1423, -2487,  6948,
    6948,  1212,  1313,  1313,  1915, -2487, -2487, -2487,  1765, -2487,
    1152, -2487, -2487,  1912, -2487, -2487, -2487, -2487, -2487, -2487,
     108, -2487, -2487,  1152, -2487, -2487, -2487, -2487, -2487, -2487,
    1212,   466,   466, -2487,  2042,  1212,  1212,   466, -2487,  1670,
    1798, -2487, -2487,   400, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487,   -12,  1313,  1212, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,  1480, -2487, -2487, -2487, -2487,
   -2487,  1917,  2146, -2487,   466, -2487, -2487, -2487,   466,   466,
   -2487, -2487,  2037,  1955,  1212,  1509, -2487,  1212,  1616, -2487,
    1212,  1212,  1152, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487,    88, -2487, -2487,   508, -2487,   643,
   -2487, -2487, -2487, -2487, -2487,  1403, -2487, -2487, -2487,   -12,
   -2487,  1891,  1840,    23,  1680, -2487, -2487, -2487, -2487, -2487,
    2032, -2487,   638,  1466,  8397,  8397,  1241,  2145,  2070,  1981,
    1981,  1488, -2487,   -95,   -95, -2487,   508, -2487, -2487,  1983,
   -2487, -2487,   -95,   -95, -2487, -2487, -2487,   390, -2487,  1152,
   -2487,   104, -2487, -2487, -2487,    70, -2487, -2487,  1509,  1509,
   -2487, -2487,  1481,  1620,  3999, -2487, -2487,  1322,  1326, -2487,
   -2487,  1334, -2487, -2487, -2487, -2487,   561,   561, -2487, -2487,
   -2487, -2487, -2487,  8397, -2487,   477,   477,  1981,  1981, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,   165,
   -2487, -2487, -2487, -2487,  1929,  1062,    70, -2487, -2487, -2487,
   -2487,  1829, -2487,  1680,  1152, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487,   105,    61,  2220, -2487, -2487, -2487,
     477, -2487, -2487,  1946,  1947, -2487, -2487,  1680, -2487, -2487,
    1971,  1152, -2487,  1844,   206, -2487, -2487, -2487,  1960, -2487,
   -2487, -2487, -2487,  8397, -2487, -2487, -2487,    -6, -2487, -2487,
    1509, -2487, -2487, -2487, -2487,  1951, -2487, -2487, -2487, -2487,
   -2487, -2487,  1313, -2487, -2487
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2487, -2487, -2487, -2487, -2487,  2272, -2487, -2487, -2487,   734,
   -2487,  2235, -2487,  2192, -2487, -2487,  1571, -2487, -2487, -2487,
    1552, -2487, -2487,  1536,  2259, -2487, -2487,  2159, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,  2086,
     930, -2487, -2487, -2487, -2487, -2487,  2143, -2487, -2487, -2487,
   -2487,  2085, -2487, -2487, -2487, -2487, -2487, -2487,  2219, -2487,
   -2487, -2487, -2487,  2073, -2487, -2487, -2487, -2487, -2487,  2057,
   -2487, -2487,  1135, -2487, -2487, -2487, -2487, -2487,  2147, -2487,
   -2487, -2487, -2487,  2120, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487,  1169, -2487, -2487, -2487,
    1686, -2487, -2487, -2487, -2487, -2487, -2487,  1778, -2487,  1908,
   -2487, -2487, -2487,  1797,  1761, -2487,  1756, -2487, -2487, -2487,
   -2487,   389, -2487, -2487,  2018, -2487, -2487, -2487, -2487, -2487,
    1887, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487,  1274, -2487, -2487, -2487,
    1520, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,   845, -2487, -2487,  1812, -2487,
    -768,  -839, -2487, -2487, -2487,   602, -2487, -2487, -2487, -2487,
    -546, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -1439,   853,
    1556,   674,   735, -1436, -2487, -2487, -2487,  -961, -2487,  -446,
   -2487, -2487,   900, -2487,   409,   639, -2487,   113, -1432, -2487,
   -2487, -1431, -2487, -1426, -2487, -2487,  1517, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487,   312, -1267, -2487, -2487,  -995, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2486, -2487, -2487, -2487, -2487,  -362, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487,  -367, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,  1470, -2487, -2487, -2487, -2118,
      96, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487,  1284,   230, -2487,   225, -2487, -2487, -2487, -2487,
   -1364, -2487, -2487, -2487, -2487, -2487, -2487, -2487,  -771, -2487,
   -2487,  -710, -2487,  1535, -2487, -2487, -2487, -2487, -2487, -2487,
    1098,   562,   565, -2487,   479, -2487, -2487,   -90,   -73, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,   531, -2487,
   -2487, -2487,  1088, -2487, -2487, -2487, -2487, -2487,   846, -2487,
   -2487,   238, -2487, -2487, -1290, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,   852, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487,   821, -2487, -2487, -2487, -2487, -2487,    60, -1800,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487,   805, -2487, -2487,   803, -2487, -2487,   475,   245,
   -2487, -2487, -2487, -2487, -2487,  1048, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,    47,   767,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487,   761, -2487, -2487,   227, -2487,   454, -2487, -2487, -1413,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487,  1019,   753,    43, -2487, -2487, -2487, -2487,
   -2487, -2487, -1423,  1016, -2487, -2487, -2487,   216, -2487, -2487,
   -2487,   434, -2487, -2487, -2487, -1193,   218, -2487, -2487,    30,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487,   167, -1966, -2487, -2487, -2487,
   -2487, -2487, -2487,   736,   210, -2487, -2487, -2487, -2487, -2487,
    -133, -2487, -2487, -2487, -2487,   414, -2487, -2487, -2487,   997,
   -2487,   996, -2487, -2487,  1221, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487,   190, -2487, -2487, -2487, -2487, -2487,
     985,   402, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487,    13, -2487,   404, -2487, -2487, -2487,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,  -376,
   -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487, -2487,   -10,
   -2487,   699, -2487, -2487, -1641, -2487, -2487,  -682, -2487, -2487,
   -1737, -2487, -2487,    12, -2487, -2487, -2487, -2487,   -86, -1456,
   -2487, -2487,  -115, -1896, -2487, -2487, -1925, -1581, -1083, -1477,
   -2487, -2487,   813, -1329,   211,   213,   214,   219,   385,   166,
    -731,   432,   452, -2487,   759,  1615, -1442, -1095,  1248,  1220,
    1035, -1876,  -393,  -104, -2487, -1335, -2487, -1073, -1288,   909,
   -2487,   -96,  2101, -2487,  1703,  -563,    25,  2252, -1085, -1021,
    -874, -1010, -2487, -1119, -1264, -2487,   462, -1309, -1356, -1106,
    -368,  -975, -2487, -2487,   676, -1138, -2487,  -875,  1328,  -631,
   -2487, -2487,  -101, -1210,  -770,  -116,  2135, -1128,  2166,  -677,
     483,  -526,  -302, -2487, -2487, -2487,    98,  1416, -2487, -2487,
     536, -2487, -2487, -2487, -2487,  1832, -2487, -2487, -2487, -2487,
   -2487, -2487, -2005, -2487, -2487,  1655, -2487, -2487,  -192, -2487,
    1998, -2487, -1196, -2487, -1313,  -227,  -652,  1046, -2487,  1909,
   -1464, -2487,  -786, -2487, -2487,   -37, -2487,     4,  -596,  -355,
   -2487, -2487, -2487,   347, -1251,  -106, -2487, -1212, -1161,  -309,
    2204,  1984, -2487, -2487, -1125, -2487, -2487,  1112, -2487, -2487,
   -2487,   461, -2487,   310, -1974, -1503, -2487, -2487, -2487,  -161,
   -2487,   525, -1425, -2262, -2487, -2487, -2487, -2487,  -208, -2487,
   -2487,  1714, -2487,  1886, -2487, -2487, -2487,   835, -2487, -1711,
    -242, -2487, -2487, -2487, -2487, -2487, -2487
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1919
static const yytype_int16 yytable[] =
{
     161,   428,   139,   429,   139,   697,   698,   138,  1173,   141,
     139,   967,   416,  1418,  1382,   147,   774,  1038,   794,  1286,
    1457,   246,  1748,  1476,   856,  1750,   216,   748,  1271,  1751,
    1752,  1920,  1014,   428,   139,  1753,  1758,  1816,   789,   181,
    2142,  1800,   705,   466,  1643,  1297,  1252,  1876,  2229,   269,
     438,  2246,  2092,  1318,   783,  1502,   465,  -708,  -706,  1636,
     103,   104,   105,  2179,  1870,  1511,   715,  1381,   111,   762,
     999,  2799,  1540,   756,  1441,  1024,  1659,   280,    99,   808,
    2755,  2074,   346,   265,   247,   107,  2260,  1364,  1452,  1223,
     292,   856,   212,  1861, -1623,   861,  1223,  2679,  1656,   260,
    1223,   322,  1223,   134,   135,   221,   136,  1242,   393,  1308,
     763,   143,   144,  2392,  1195,  1285,  1289,  1308,  2296,  1598,
     162,  1897,  1471, -1871,  2099,  1314,  2680, -1918,   537,   808,
    1589,  1308,  1332,  1334,   839,   839,   298,   170,   412,  1456,
    1791,  2048, -1818, -1887,   114,  2256,   482,   450, -1624,  1608,
     817,  1393,  1242,  2402,  1517,  2702,  1495,  2456, -1814,  1879,
   -1814,  1912,  1765,  1195,  2213,   220,  2286,  2817,  2007,  2028,
    1865,  1898,   843, -1629,  1649,  2138,   752,  1252,  1459,  1865,
     328,  2336,  1833,  2361, -1918,   839,   531,   222,   212,  1836,
     818,   819,   820,   821,   822,  1031,   252,  1962,  -708,  -706,
     759,   127,  -708,  -706,  1486, -1918,   506,  1133,   259,   420,
   -1918,   702, -1627, -1871,   719,    94, -1918,  1369, -1830,   413,
    2134,  2818,   537,   513,  1466,  1968,  1231,   635,   636,  2819,
     406,  2189, -1918,   284,  1626,   746,   814,  1669,  2600,   850,
    2800,  -521,  1990,  1463,   275,   276,   857,  1249,  2090,  2029,
    2782,  1284,   419,    94,   296,  2578,  2341,   527,   183,  -708,
    -706,  1191,   300,  1032,  2323,  1199,  1328,   762,  2752,  -521,
    -521,     3,  2753,   764,  1200,   361,  2526,  2601,  1328,  1201,
    1896,   407,  1209,   205,  2796,   762,  1582,  2521,  1396,  1579,
    1195,  1899,  1641,   720,  2804,   721,  1670,  1582,   312,   352,
     128,  1249,  1793,   213,  1195,   765,   766,  1195,   315,  2261,
   -1701,  1464,  1195,   857,  2602,  1023,  2820,  2654,   767,  2135,
    1599,  1195,   753,   703, -1832,  2681,  2252,  1963,   768,  1249,
     823,   824,   825,   826,   827,   828,   829,   648,   649,   537,
     709,  1213,   414,   494,   139, -1814,   139,   139,  1180,   184,
     285,   486,   487,   139,  1900, -1918,  1308,  1369,   492,  2077,
    1582,  1195,  2063,  1972,  1550,  1973,   154,  2336,   411,  1467,
     139,   281,  1979,   508,   508,   505,   508,   284,   710,   508,
     515,  1393,  2115,  -521,  1134,  2812, -1905,  1247,  1271,   244,
    2297,  2118,  2262,   282,  1870,   154,   425,  1870,  1642,   213,
     137, -1818,  1267,  -708,  -706,  1590,  2245,   437, -1818,  1417,
     769,  -521, -1818,  1916, -1818,   188,   445,   446, -1820,   447,
     448,  -713,   189,  1834,  2214,   454,   137, -1814,  -711,   451,
    1728, -1652,  1729, -1850,   760,  1908,  2457,  1935,   414,   801,
    1271,   -35,   471,   139,   139,  2746,  1196,  2257,   586,   586,
     244,  2703,   244, -1814,  1430,  1430,  1430,  1297,  1267,   493,
     137,  1214,  1215,  1324,   261,  1609,   467,  1443,  1445,  2108,
     844,   764,  2047,  1801,  1451,  2501,  1991,   137,  1013,   716,
    1591,   139,   770,   695,   830,   129,   586,  1267,  1267,   764,
     706,   452,  1794,   137,   285,  1196,  1928,   831,  1197,  -713,
    1025,   137,   137,  -521,   139,  1512,  -711,   395,  1271,  2427,
    1881,  1830, -1887,   538,   137,  1911,   767,  1399,  1399,    97,
     543,  2382,  2071,   293,  1860,  1862,   768, -1845,   771,   244,
     256,  2693,  2420,   801,   767,  2298,   347,   747,   244,   782,
     580,  1924,   266,   862,   768,   117, -1818, -1697,  2263,  1998,
    2104,  1368,  2441, -1818,  2443,   137,    52, -1818,   750, -1818,
     323,   598,  1579,   600,  1541,  1458,   605,   607,   395,   609,
    1400,  1400,  1271,  2555,   137,   717,  2345,  1644,   772,  1308,
    1989,  2542,   149,   137,  1020,  2461,  2057,  1013,  1901, -1717,
     137,   130,  2061,  1913,   262,  2123,  1835,  2425,  2682,  2329,
     688,  2584,  2585,  1526,   614,    53,  1478,   538,   769,   764,
    1866,  1200,   708,  2091,  1512,  1399,  1201,   369,   137,  1866,
    1582,  1867,  1196,  1713,  2484,  2485,   769,   190,  1870,  2177,
    1867,  2160,  2232,   516,  2747,  1946,  1196,  -521,   713,  1196,
    2092,  2527,  1505,    54,  1196,    55,  1961,    56,   980,  1965,
     981,  1714,  1715,  1196,   767,    57,  2289,  1969,  2291,  1261,
     137,   842,   137,  1565,   768,   764,   847,  2595,  1400,  1369,
    2235,  2053,   755,   517, -1695,  -703,   711,  1182,   154,  1728,
     770,  1729,   841,   970,  1200,  1030,   852,   852, -1699,  1201,
     468,  1694,   519,  1196,   764,   764, -1693,  2322,   770,  1769,
   -1591,   191,  1534,  1015,   980, -1690,   981,  1300,  2762,  1271,
     767,    58, -1850,   787,  1267,  1471,   788,  2317,  2110,   137,
     768,  2140,   987,  1584,   538,  2213,   771,   154, -1905,  1266,
     217,  1279,     4,   980,   980,   981,   981,  2069,  2761,   767,
     767,  1821,  1897,  2222,   771,  1706,   769,   469,  2362,   768,
     768, -1814,  2772, -1814,  1354,  2014,  1359, -1918,   615,   192,
     431,  1387,  1267,  2311,   193,    43,    42,  2213,   352,   455,
     137,  1292,  1183,  1184,  1875,  1409,   772,  1818,   987,  1189,
    2748,  2085,  1293,  2201,   188,   690,  2067,    15,  2104, -1918,
     616,   189,  1898,    94,   772,  2777,  2589,  2590,  2575, -1871,
     223,  1412,   769,  2778,    60,  2124,  2449,   987,   987, -1918,
    2330,  2312, -1591,    16,  1883,  1245,  -703,   516,   770,  1267,
    -703,  2180,  1417,  1245,  1245,  2137,    43,  2474,   520, -1918,
    1133,   769,   769,  1245,  1301,  1302,  2364,  2266,  1325,  1917,
    1245,  1245,  2683,  2347,  1351,  1796,  1856,  1857,  1858,  1859,
      61,  1303,  1172,  2473,  2342,  2125, -1918,   517,   154,  1245,
    1245, -1918,   -96,   154,   771,  1487,  1768,  1351,  2373,   194,
    2395,  1817,  1496,  2474,   770,  2773,     5,  -703,  1369,  1821,
     129,  2343,  1535, -1918,  1514,  1716,  1437,  2366, -1918,  1308,
    1582,  1437,  1494,  2210,  1709,    18,  2015,   154,  2450,  2451,
    2342, -1918,  2213,   770,   770,  1437,  1645,  1304,   137,   188,
     188,   608,  1899,   137,   772, -1918,   189,   189,  1218, -1918,
     771,   764,  2086,   139,   139,   137,   218,  2343,   521,  2707,
    2372,  2822,   137, -1918,   244,  1480,  1941,  2162, -1814,  1245,
      64,  1506,  1646,   764, -1830,  1931, -1126,  1256,  1769,   771,
     771,  1687,  2284,  2284,  2222,  1948,   691,  2452,  1351,  1443,
     980,  1443,   981,  1949,   137,  2725,   767,     5,   224,   764,
     772,  1823,  2708,  1994,    27,  1900,   768,  2385, -1629,   137,
    2684,   137,  1245,   432,    67,  2214,   130,  2223,   767,    28,
     137, -1126,  2181,   137,   137,   801,   190,  1245,   768,   772,
     772, -1126,    23,  2290,   118,  2292,   -96,  1134,   980,   764,
     981,   742,   588,  2554,   767,     5,  2660,   726,  1255,  1717,
   -1814,  -703,  1275,  2300,   768,  2543,   764,  2214,  1245,  1275,
    1310,  1997,  2062,  2149,   987,  1320,   558,  1275,  2126,  2537,
    1329,  1688,  1351,  2227,  1271,  1350,  1491,  1357,  2432,  1357,
    1367,  1384,  1329,   559,   767,  1931,  1550,    68,   769,   227,
    2082,  1398,  2239,  2240,   768,   980,  2241,   981,   306,  1357,
     191,   767,    33,  2344,   472,   473,   474,  2495,   244,   137,
     769,   768,   987, -1126,  1925,    36,  2267,  2268,  2269,  1245,
      24,  1155,    39,   560,  1245,  1271,  2612,  2599,  2475, -1591,
   -1918,  2739,  1257,   244,  1258,  1500,   769, -1591, -1591,  2280,
    2709,  2111, -1591,  1926,  2281,  2387,  1582,   137,  2000,  2001,
    1822,   190,   190,  2223,  2391,  2058,   254,   731,   192,  1950,
     770,  1652, -1918,   193,  2078,   244,  2328,   244,   589,   987,
    2633,   362,  2544,  2634,  2475, -1918,   769,  2636,  2637,  1255,
    2078,  2270,   770,  2638,  2653, -1126,  2083,  1587,   171,   228,
    1277,  1951,  2214,   769,  2055,  2155,   764,    40,  2466,  1275,
    2093,  2658, -1918,   363,  2355,  2355,   771,   731,   770,  2002,
    2003,  1245,    94,  1156,  1952,   255,   229,   254,   329,  2172,
    1653,  2384,  2173,  1654,   475,   191,   191,  2339,   771,   732,
    2294, -1126, -1916,   172,  2094,  2095,  1275,   154,   476,  1901,
     395,   767,   307,   173,  2496,  1588,    48,  1275,   770,  1245,
     137,   768,    94,  1360,   771,  1157,   772,  1658,  2374,   561,
     731,   230,  1245,  1245, -1918,   770,  2698,  2219,   256,  1953,
     562,   231,   137,  1886,   229, -1126,  1887,  1888,   772,   734,
    1210, -1126,  2385,   192,   192,  1158,  2506,   731,   193,   193,
     155, -1918,   156,  1367,   771,  2324,  2507,   244,   137,  1619,
    1245,  2242,  2127,   137,   772,   442,  1275,  2271,  2272,   729,
    1275,   771,  2273,   443,  1008,  2445,  1335,  2248,  2508,   230,
     731,  2251,   439,  1668,   477,   174,    49,  2716,  2573,   231,
    1954,  1245,   736,   769,  1463,  1944,   478,  2276,   137,  2058,
     253,   299,  2055,   232,   772,    51,  1945,   139,  2509,  1620,
    1932,  1885,  1684,   233,  1886,   137,  2568,  1887,  1888,   738,
    1497,   772,  2510,  2717,  1980,  1500,  2569,  2301,   440,   730,
    1336,  2303,  2434,  1245,   563,   564,  2275,  2533,  1337,  2534,
    2568,  1159,    93,  1630,  1245,  1565,   139,  1245,  1200,   565,
    2569,   566,   740,  1201,  2611,  1245,  1839,   175,   840,  1840,
     330,  2279,  1464,  2788,   317,   770,  1841,  1842,  2338,   154,
    2383,   233,  1802,  1552,  1553,  2386,  2517,  2255,  2284,  2284,
    2387,  2587,   244,   395,   590,   234,  2435,  1437,  1955, -1845,
     479,  2588,  1773,  1774,  1682,  2789,  2211,  2212,    97,  1200,
    2713,  2715,   417,   176,  1201,  2519,  2675,  2758,  1021,  2520,
     100,   771,  1554,  1555,  1843,  2790,  2247,    94,   326,  2736,
    1932,   331,  2453,   101,  1802,  1338,   620,   318,   319,   837,
     837,   301,  2255,  1814,  1915,  1775,    94,  1776,   567,  1777,
    2766,  2353,  1498,   234,  1462,  2548,   235,   236,  1462,  1708,
     345,  2454,  1181,   177,  1721,  1757,   723,  1759,  2758,  2776,
    1815,   772,  2426,   757,  1008,  1008,  1008,  2657,  2428,  2573,
    2342,   244,  1255,  1778,  1779,  1780,  2783,  2784,  2431,  2528,
     837,   237,   401,  1844,  1960,   568,  1008,  2737,  1520,  1275,
     838,   838,  1802,  2705,   108,   758,  2436,  2343,   106,  1942,
    1889,  1890,  2767,  1255,  2574,  2255,  2768,  2463,  2661,  2688,
     109,  2694,  1845,  1200,  2770,  2591,  2738,   110,  1201,  2592,
    2593,  2568,  1612,  1781,  2617,  1782,  1891,  1892,  2769,  2816,
    1275,  2569,  1783,  1846,  2464,  1784,  2771,  2581,  2582,   237,
    1613,   838,    26,  1971,    13,  2740,  2741,   112,  2688,    13,
    1440,  1421,  1424,  1427,  2694,  2745,  1802,  2718,  2476,    47,
    1200,  2719,  2720,  2478,  2479,  1201,  2615,  2616,    91,   113,
    1202,  2490,  2620,  2493,    21,    22,  2480,  1690,   120,  1203,
    1692,  1889,  1890,  1453,   139,  1703,  1695,   114,  1847,  1985,
    1699,  1008,  2794,    46,   599,  1200,  1276,  1701,   122,   606,
    1201,  1704,  2721,  1276,   155,   124,   156,  1891,  1892,  2665,
    1200,  1276,  2022,  2666,  2667,  1201,  2807,  2208,   126,  2722,
    2723,  1785,  1446,  1447,  1786,  1276,  2255,  1200,  1566,   601,
    1567,   602,  1201,  2030,   509,  1245,   511,  2379,   140,   512,
    2380,  1369,  2027,  1848,  1448,  1449,  1450,  1958,  2531,  1008,
    1008,  1008,  2037,  2038,  2437,   137,  2041,  2438,  1008,  1008,
    1008,  1436,  2502,  2621,   142,  2503,  1436, -1607, -1607, -1607,
   -1607,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,   149,
    1436,  1008,  1528,  1529,  1530,  1531,   720,   163,   721,  1275,
     762,   164,  1673,  1275,  1674,  2563,  1275,  2695,  2696,  1255,
    2558,   165,  2712,  2016,  1849,  2017,   633,  1999,   168,   352,
    1479,  2076,  1432,  1433,  2565,  2566,   182,  1850,  2013, -1606,
   -1606, -1606, -1606,   186,  2087,  2018,  2088,  1728,  1775,  1729,
    1776,   735,   737,   739,   741,  1775,   187,  1776,    52,   429,
    1190,   205,  1192,  1276,   243,   194,   248,   251,   249,   250,
    1275,   258,   270,   274,  2031,   279,   295,   297,   154,   301,
     303,   304,   308,  1839,  2154,   973,  1840,   309,  2320,   310,
     313,   314,   327,  1841,  1842,   334,   335,   337,   339,  1982,
    1276,  1984,   974,   341,  1986,  1987,  1988,    53,   343,   350,
    1992,  1276,   352,  1995,  1996,  2187,   354,   355,   357,  1275,
    1275,  1275,  1851,   393,  2187,  2163,  2164,  2165,  2166,  2167,
    2168,  2169,  2170,  2075,   398,   399,   395,   404,   402,  1787,
     410,  1843,   188,   409,   421,    54,   423,    55,   422,    56,
     430,   244,   414,  2084,  1245,   456,   457,    57,   459,  2089,
     461,  1638,  -353,   485,   488,   491,   495,   496,   503,   510,
    1276,   523,   524,   525,  1276,   529,   546,  1275,   535,   550,
     551,   552,   554,   555,  -366,   557,   581,   583,   593,  1788,
     592,  2622,  1245,  1245,   975,   976,   977,   594,   610,   612,
    1789,   618,   623,   978,   619,   622,   696,   139,   694,   699,
    1844,   725,  2209,    58,   764,   707,   742,   651,   744,   751,
     780,   777,  1329,   761,   784,  2233,   793,  1329,   796,   786,
     797,   799,   801,   804,  2623,   809,   811,   815, -1701,  1845,
     429,   841,   848,   968,   854,   971,  1329,  1329,  1018,  1013,
    1329,  1019,  1022,  1035,  1040,  1043,  1174,  1144,  1163,   767,
    1846,   982,   983,   984,  1638,  1171,  1176,   985,  1216,   768,
    2624,  1177,  1275,  1229,    59,  1178,  1803,  1185,  1186,  1187,
    1188,  1204,  1193,  1205,  2285,  2285,  1207,  1208,  1290,  1311,
    2625,  2326,  1220,  1329,  2207,  1222,  2337,  1230,  1329,  1329,
    1329,  1008,  1415,  1245,  1417,  1454,    60,  1275,   986,  1275,
    1455,  1456,   655,  1469,  1475,  1847,  1428,  1481,  2626,  1492,
    1490,  1503,  1509,  1515,   442,  1518,  1536,  1429,  1803,  1532,
    1439,  1538,  1580,  1600,  1584,  2228,  1601,  2230,  1597,  1603,
    1605,  2231,  1616, -1609,  1614,  1617,  1275,  1622,  1275,  2236,
    2154,   769,    61,  1615,  1624,    62,  1369,  1627,  1628,  1648,
    1632,  1634,  1650,  1223,  1660,  1672,  1665,  1678,  1676,  1685,
    1848,  1680,  1710,  1691,  1712,  1693,  1696,  1697,  1760,  1698,
    1700,  1702,  1638,   988,  1705,  1761,  1707,  1763,  1766,  1797,
    1008,  1805,   660,  1276,  1807,  1809,  1803,  1804,  1819,  1275,
    1249,  2627,  1823,  1831,  1854,  1837,  1520,  1871,  1874,  1882,
    1895,  1590,  1329,  1910,  1918,  1936,   139,  1940,  2628,  1947,
      63,  2377,  1967,   770,  1933,  1974,  2006,  2023,  2020,  2026,
    2033,  1849,  2035,  1768,  1276,   989,   990,  2042,  2050,  2049,
    2629,  2032,    64,  2052,  1850, -1579,  2319,  2051,  2064,  2068,
    2045,  2072,  2046,  2073,  2078,  1471,  2098,  2105,  2100,   429,
    1803,  2630,  2106,  2785,  2112,  1638,  2113,  2120,    65,   771,
      66,  2119,  2326,  1245,  2143,  2116,  2139,  2145,  2149,   994,
    2631,  2156,  2472,  1008,  2146,  1008,    67,   669,  2632,  2190,
    2183,   358,  1436,  2157,  2192,  2191,  2202,  1008,  1275,   995,
    1275,  2193,  2204,  2243,   996,  2249,   359,  2237, -1628,  2277,
    2313,   997,   429,   137,  2304,  2287,   360,  2310,  2339,   772,
    2316,  2321,  2357,  2360,  2365,  2367,  2369,  2396,   139,  1851,
    2058,  1275,  2429,  2459,  2442,  2444, -1584, -1626,  2447,  2465,
    2468,  2467,  2477,  1245,  2486,  2481,  2491,  1245,  1245,  2525,
    2528,  2535,   361,  2536,  2538,  2549,  2547,  2556,  2541,    68,
    2557,  2496,  2580,  2561,  2617,  2597,  2664,  2596,  2656,  2670,
    2668,  1275,  2663,  2699,  1638,  2700,  2706,  2732,  2733,  2734,
    2803,  2786,  2805,  2806,  2743,   139,  2810,  2824,  2815,    17,
    2505,    92,  2808,  1276,   125,    38,   167,  1276,   257,  1329,
    1276,   210,   267,  1329,   119,   278,   291,   211,   242,   548,
     582,   587,   539,   714,  2141,   324,  2397,  1217,   853,  2398,
     528,   805,  2399,   458,  1749,  2793,  1683,  2133,  2375,   444,
    2400,  2221,  1978,  1017,  2742,  2744,  1228,  2393,  2295,  1039,
     966,  1473,  2530,  2040,  2097,  2039,  2524,  2066,  1489,  2293,
    1812,  1275,  1829,  1275,  1276,  1864,  1872,  2440,  1813,  2109,
    2299,  1581,  2446,  1894,  1906,  2315,  2121,  1914,  1604,  2546,
    1607,  2327,  2147,  2471,  2483,  2334,  2462,  2401,  2371,  2346,
    2171,  1939,  1639,  1640,  1385,  2356,  1663,  2199,  2489,  2200,
    2792,  1977,  2494,  2553,  2567,  1878,  2402,  1638,  1638,  2349,
    1414,  2350,  2351,  1276,  1276,  1276,  1356,  2352,   362,  1631,
    1811,   333,  2522,   779,   214,  2161,   311,  2523,  2019,   294,
    2285,  2285,  1194,  2662,   617,   813,   449,  2540,  2775,   542,
     273,  1329,  1329,  1638,  2185,  1329,  1329,  2309,  1329,   429,
     363,  1909,  2132,   790,  2726,   490,     0,     0,     0,     0,
       0,  -235,     0,     0,  1234,  1243,  1248,   604,     0,  1264,
       0,  1276,     0,  1287,  1243,     0,     0,     0,     0,     0,
       0,     0,     0,  1243,     0,  2403,     0,     0,  1323,     0,
    1243,  1243,  2550,  2404,  1349,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2405,     0,     0,  1243,
    1243,     0,     0,  1255,     0,  1407,   364,  1349,     0,     0,
       0,   365,     0,     0,     0,     0,     0,     0,     0,  2673,
       0,  2571,  2572,     0,  2577,     0,  1435,     0,  2406,     0,
       0,  1435,     0,     0,     0,     0,     0,     0,     0,  2583,
       0,     0,   366,     0,     0,  1435,     0,     0,     0,  2407,
     367,  2408,     0,     0,     0,  2594,  1276,     0,     0,     0,
       0,     0,     0,   368,     0,     0,  2711,     0,  1255,     0,
    1008,     0,     0,     0,  1477,  2409,  2410,     0,     0,  1243,
       0,     0,     0,     0,  2614,     0,     0,     0,     0,  2618,
    2619,  1276,     0,  1276,   369,     0,     0,   370,  1349,     0,
    1264,     0,  2759,  2760,     0,   371,  2411,     0,     0,     0,
    2659,     0,     0,  1638,  1255,     0,  -232,     0,     0,     0,
       0,  1638,  1243,     0,     0,     0,     0,     0,     0,     0,
    1276,     0,  1276,  2412,     0,     0,     0,  1243,  2672,     0,
       0,  2674,     0,     0,  2676,  2677,   372,     0,     0,   373,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2413,
       0,   973,     0,     0,     0,  1255,     0,  2414,  1243,     0,
       0,     0,     0,     0,     0,  1008,     0,     0,   974,     0,
    2415,     0,  1349,  1276,     0,  2416,     0,     0,     0,  1638,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2809,     0,     0,     0,  2823,     0,  1637,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2417,     0,  1243,
       0,     0,  1664,     0,  1243,     0,  2418,     0,     0,     0,
       0,     0,  1240,     0,     0,     0,     0,     0,  1269,     0,
    1240,  1240,     0,     0,     0,  1269,     0,     0,     0,     0,
    1240,     0,     0,  1269,     0,  2419,     0,  1240,  1240,  1341,
     975,   976,   977,     0,     0,  2420,     0,  1269,     0,   978,
     973,  2421,  1276,     0,  1276,     0,  1240,  1240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   974,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1637,
       0,     0,     0,     0,     0,  1276,     0,     0,     0,     0,
       0,  1243,     0,   864,     0,     0,   865,     0,   866,     0,
       0,     0,     0,   867,     0,  1342,     0,   982,   983,   984,
       0,   868,     0,   985,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1276,     0,     0,     0,  1243,
       0,     0,     0,     0,     0,     0,  1240,     0,     0,     0,
       0,     0,  1243,  1243,   869,   870,     0,     0,     0,     0,
       0,     0,     0,     0,   986,   871,     0,     0,     0,   975,
     976,   977,     0,     0,     0,  1269,   872,     0,   978,   873,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1240,
    1243,     0,     0,   874,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1240,     0,     0,  1637,     0,     0,
       0,     0,  1269,     0,     0,  1276,   875,  1276,     0,     0,
       0,  1243,     0,  1269,   876,     0,   877,     0,     0,     0,
       0,  1923,     0,     0,  1410,  1240,   982,   983,   984,   988,
    1930,     0,   985,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1938,     0,     0,     0,     0,   878,     0,     0,
       0,     0,     0,  1243,     0,     0,     0,     0,   879,     0,
       0,     0,     0,   880,  1243,     0,     0,  1243,     0,     0,
    1966,     0,  1269,   986,     0,  1243,  1269,     0,     0,     0,
    1637,   989,   990,     0,     0,     0,  1240,     0,     0,   881,
       0,  1240,     0,     0, -1918,     0,   882,     0,     0,   883,
     884,     0,     0,     0,     0,     0,     0,  1435,     0,   885,
       0,     0,     0,     0,     0,     0,   886,     0,   887,     0,
       0,   888,     0,     0,     0,   994,     0,     0,     0,     0,
    2012,     0,     0,     0,     0,     0, -1179,     0,     0,     0,
    1930,     0,     0,     0,     0,   995,     0,     0,   988,     0,
     996,     0,  2024,     0, -1179,  2025,     0,   997,   244,   137,
       0,     0,     0,     0,   889,     0,     0,     0,   890,     0,
     891,     0,     0,     0,     0,     0,     0,     0,  1799,     0,
       0,   892,     0,     0,     0,     0,     0,     0,     0,  1637,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     989,   990,     0,     0,     0,  2056,     0,     0,   893,     0,
       0,     0,     0,     0,     0,     0,  1240,     0,     0,     0,
       0,   894,     0,     0,     0,     0,     0,     0,     0,  1240,
    1799,     0,     0,     0,     0,     0,     0,  1008,  1008,     0,
       0,     0,     0,     0,   994,     0,   895,   896,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   897,     0,     0,
       0,     0,     0,     0,   995,     0,     0,  1240,     0,   996,
       0,   898,     0,   899,     0,     0,   997,  1008,   137,   900,
     973,     0,     0,   901,     0,     0,     0,     0,     0,     0,
       0,   902,     0,     0,     0,  1269,  1008,   974,  1799,     0,
       0,  1045,   903,  1046,     0,     0,     0,     0,  1047,     0,
       0,   904,  1637,  1637,     0,     0,  1048,     0,     0,     0,
     905,     0,     0,     0,     0,   906,   907,     0,     0,   908,
       0,   909,     0,     0,     0,     0,  1269,     0,     0,   910,
    1240,  2148,     0,     0,     0,     0,     0,     0,  1637,  1049,
    1050,  1240,   911,     0,  1240,  1243,     0,     0,     0,     0,
    1051,     0,  1799,     0,     0,     0,  1008,     0,     0,     0,
     912,  1052,     0,     0,  1053,  2188,   913,     0,     0,     0,
       0,   914,  2198,  2198,     0,     0,     0,     0,  1054,   975,
     976,   977,     0,     0,     0,     0,     0,     0,   978,     0,
       0,     0,     0,     0,     0,     0,     0,  1264,   915,   764,
       0,  1055,  2217,     0,     0,     0,     0,  2012,  2012,  1056,
       0,  1057,     0,     0,     0,     0,     0,     0,  1058,     0,
    1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,     0,  1067,
    1068,  1069,     0,  1070,  1071,  1072,  1073,  1074,  1075,  1076,
    1077,  1078,  1079,     0,   767,     0,   982,   983,   984,     0,
       0,     0,   985,  1080,   768,     0,     0,     0,  1081,     0,
       0,     0,  2254,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1082,  1269,     0,     0,     0,  1269,
       0,  1083,  1269,   986,  1084,  1085,     0,     0,     0,     0,
       0,     0,     0,     0,  1086,     0,     0,     0,  2302,     0,
       0,  1087,     0,  1088,     0,     0,  1089,  2254,  1637,     0,
       0,     0,     0,     0,     0,     0,  1637,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   769,     0,     0,     0,
       0,     0,     0,  1923,  1243,     0,  1269,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1090,
       0,     0,     0,  1091,     0,  1092,     0,     0,   988,     0,
       0,     0,  2348,     0,     0,     0,  1093,     0,     0,     0,
       0,     0,  1243,  1243,     0,     0,     0,     0,     0,     0,
    2254,     0,     0,     0,  1637,  1269,  1269,  1269,     0,     0,
       0,     0,     0,  1094,     0,     0,     0,     0,   770,     0,
       0,     0,  1235,     0,     0,   762,  1095,     0,     0,  2012,
     989,   990,     0,     0,     0,     0,     0,     0,  1264,     0,
       0,     0,  1240,     0,     0,     0,     0,     0,     0,     0,
       0,  1096,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1097,  1269,   771,     0,     0,     0,     0,     0,
       0,     0,     0,  2433,   994,     0,     0,     0,  1098,     0,
       0,     0,     0,     0,  1099,     0,     0,     0,  1100,     0,
       0,     0,     0,     0,   995,     0,  1101,     0,     0,   996,
     973,     0,     0,  1243,     0,     0,   997,  1102,   137,     0,
       0,     0,  1236,     0,   772,     0,  1103,   974,     0,     0,
       0,  2254,     0,     0,     0,  1104,     0,     0,     0,     0,
    1105,  1106,     0,     0,  1107,     0,  1108,     0,     0,     0,
       0,     0,     0,     0,  1109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1110,  1269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1111,     0,     0,     0,     0,
       0,  1112,     0,     0,     0,   973,  1113,     0,     0,  2217,
       0,     0,     0,  1269,     0,  1269,     0,     0,     0,     0,
       0,     0,   974,     0,     0,     0,     0,     0,     0,   975,
     976,   977,     0,  1114,     0,     0,     0,     0,   978,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   764,
       0,     0,  1269,     0,  1269,     0,     0,     0,     0,     0,
    2532,  1240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1237,     0,     0,     0,     0,     0,   980,     0,
     981,     0,     0,  1243,   767,     0,   982,   983,   984,  1240,
    1240,     0,   985,     0,   768,  1269,     0,     0,     0,  1238,
       0,  2559,     0,  1341,   975,   976,   977,     0,  2562,     0,
       0,  2564,     0,   978,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   986,     0,     0,   864,     0,     0,   865,
       0,   866,     0,     0,     0,     0,   867,     0,     0,     0,
       0,     0,   987,  1243,   868,     0,     0,  1243,  1243,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2598,  1410,
       0,   982,   983,   984,     0,     0,   769,   985,     0,     0,
       0,  2613,     0,     0,     0,     0,     0,   869,   870,  2217,
    2217,     0,     0,     0,  1269,  2217,  1269,     0,   871,     0,
    1240,  1264,     0,     0,     0,     0,     0,     0,   988,   872,
       0,     0,   873,     0,     0,     0,     0,     0,   986,     0,
       0,     0,     0,     0,     0,     0,   874,  1269,     0,     0,
       0,     0,  2217,     0,     0,     0,  2217,  2217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   770,   875,
    2678,     0,     0,     0,     0,     0,     0,   876,     0,   877,
     989,   990,     0,     0,     0,     0,  -750,  1269,  -750,  -750,
    -750,  -750,  -750,  -750,  -750,  -750,     0,  -750,  -750,  -750,
       0,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,  -750,
     878,     0,     0,   988,   771,     0,     0,     0,     0,     0,
       0,   879,     0,     0,   994,     0,   880,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2751,     0,     0,
       0,     0,     0,     0,   995,     0,     0,     0,     0,   996,
       0,     0,   881,     0,     0,     0,   997,     0,   137,   882,
       0,     0,   883,   884,   772,   989,   990,  1269,     0,  1269,
       0,     0,   885,  2781,  2781,     0,     0,     0, -1918,   886,
       0,   887,     0,     0,   888,     0,     0,     0,     0,     0,
    1240,     0,     0,     0,   973,     0,     0,     0,     0,     0,
       0,     0,  2795,     0,     0,     0,     0,     0,     0,   994,
       0,   974,  2798,  2802,     0,     0,     0,     0,  2781,     0,
   -1179,     0,     0,     0,     0,     0,     0,   889,     0,   995,
       0,   890,  2814,   891,   996,     0,     0,     0, -1179,     0,
       0,   997,   244,   137,   892,     0,     0,     0,     0,     0,
       0,  -750,  -750,     0,  -750,  -750,  -750,  -750,     0,     0,
    1240,     0,     0,     0,  1240,  1240,     0,     0,     0,     0,
       0,   893,     0,     0,     0,     0,     0,   864,     0,     0,
     865,     0,   866,     0,   894,     0,     0,   867,     0,     0,
       0,     0,     0,     0,     0,   868,     0,     0,     0,     0,
       0,     0,     0,   975,   976,   977,     0,     0,     0,   895,
     896,     0,   978,     0,     0,     0,     0,     0,     0,     0,
     897,     0,     0,   764,     0,     0,     0,     0,   869,   870,
       0,     0,     0,     0,   898,     0,   899,     0,     0,   871,
       0,     0,   900,     0,     0,     0,   901,     0,     0,     0,
     872,     0,     0,   873,   902,     0,   979,     0,     0,     0,
       0,     0,   980,     0,   981,   903,     0,   874,   767,     0,
     982,   983,   984,     0,   904,     0,   985,     0,   768,     0,
       0,     0,     0,   905,     0,     0,     0,     0,   906,   907,
     875,     0,   908,     0,   909,     0,     0,     0,   876,     0,
     877,     0,   910,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -750,     0,   986,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   878,     0,   912,     0,     0,   987,     0,     0,   913,
       0,     0,   879,     0,   914,     0,     0,   880,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     769,     0,     0,     0,     0,  -750,     0,     0,     0,     0,
       0,   915,     0,   881,     0,     0,     0,     0,     0,     0,
     882,     0,     0,   883,   884,     0,     0,  2763,     0,     0,
       0,   864,   988,   885,   865,     0,   866,     0,     0,     0,
     886,   867,   887,     0,     0,   888,     0,     0,     0,   868,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   770,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   869,   870,   989,   990,     0,     0,   889,     0,
       0,     0,   890,   871,   891,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   872,   892,     0,   873,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   771,     0,
       0,   874,     0,     0,     0,     0,     0,     0,   994,     0,
       0,     0,   893,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2764,     0,   875,   894,     0,     0,   995,     0,
       0,     0,   876,   996,   877,     0,     0,     0,     0,     0,
     997,     0,   137,     0,     0,     0,     0,     0,   772,     0,
     895,   896,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   897,     0,     0,     0,   878,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   898,   879,   899,     0,     0,
       0,   880,     0,   900,     0,     0,     0,   901,     0,     0,
       0,     0,     0,     0,     0,   902,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   903,   881,     0,     0,
       0,     0,     0,     0,   882,   904,     0,   883,   884,     0,
       0,     0,     0,     0,   905,     0,     0,   885,     0,   906,
     907,     0,     0,   908,   886,   909,   887,     0,     0,   888,
       0,     0,     0,   910,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1671,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   912,     0,     0,     0,  1037,     0,
     913,     0,   889,     0,     0,   914,   890,     0,   891,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   892,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -363,     0,   915,  -363,     0,     0,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,     0,   893,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   894,
       0,     0,     0,     0,  -363,     0,  -363,     0,     0,     0,
       0,     0,     0,  -363,     0,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,     0,     0,   895,   896,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   897,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   898,
       0,   899,     0,     0,     0,     0,     0,   900,     0,  -363,
       0,   901,     0,     0,     0,     0,     0,     0,     0,   902,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     903,     0,     0,     0,     0,     0,     0,     0,  1235,   904,
       0,   762,     0,     0,  1546,  1547,  1548,     0,   905,     0,
    -363,     0,  1549,   906,   907,     0,     0,   908,     0,   909,
       0,     0,     0,     0,     0,   531,     0,   910,  -363,  -363,
    -363,  -363,  -363,     0,     0,  -363,  -363,     0,     0,  -363,
       0,     0,     0,     0,     0,  -363,     0,  -363,     0,     0,
       0,     0,     0,  -363,     0,     0,     0,     0,   912,     0,
    -363,     0,     0,     0,   913,     0,     0,     0,  -363,   914,
       0,     0,     0,     0,     0,     0,   973,     0,     0,     0,
       0,  -363,     0,     0,  -363,     0,     0,     0,     0,     0,
    -363,     0,  -363,   974,     0,     0,   915,     0,     0,     0,
       0,  -363,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -363,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -363,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1550,     0,     0,     0,  -363,     0,     0,
       0,     0,     0,  1551,     0,     0,     0,     0,     0,     0,
    -363,  -363,     0,     0,     0,     0,     0,     0,     0,  -363,
       0,     0,  -363,     0,     0,   975,   976,   977,     0,     0,
       0,     0,     0,     0,   978,  -363,     0,  -363,     0,     0,
    1552,  1553,     0,     0,     0,   764,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -363,     0,  1877,     0,     0,     0,     0,
       0,  -363,     0,     0,     0,     0,     0,     0,  1237,  1554,
    1555,     0,     0,     0,   980,     0,   981,     0,     0,  -363,
     767,     0,   982,   983,   984,     0,     0,     0,   985,  -363,
     768,  -363,  -363,  -363,     0,  1238,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1235,  1556,     0,
     762,     0,     0,  1546,  1547,  1548,  1557,     0,     0,  1558,
       0,  1549,     0,     0,     0,     0,     0,  1559,     0,   986,
       0,     0,  -363,     0,  1560,     0,     0,  -363,     0,  1561,
       0,     0,  -363,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,     0,  -363,     0,     0,     0,  1562,  -363,
       0,     0,     0,  -363,  -363,  -363,     0,     0,     0,     0,
       0,     0,   769,     0,     0,     0,     0,  -363,     0,     0,
       0,     0,     0,  -363,  -363,   973,     0,     0,     0,     0,
     532,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   974,     0,   988,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   989,   990,     0,     0,
       0,     0,  1550,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1551,     0,     0,     0,     0,     0,  1563,     0,
    1564,     0,  1565,     0,     0,  1566,     0,  1567,  1568,  1569,
     771,     0,  1570,  1571,   975,   976,   977,     0,     0,     0,
     994,     0,     0,   978,     0,     0,     0,     0,     0,  1552,
    1553,     0,     0,     0,   764,     0,     0,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,     0,     0,     0,
       0,     0,   997,     0,   137,     0,     0,     0,     0,     0,
     772,     0,     0,     0,     0,     0,     0,  1237,  1554,  1555,
       0,     0,     0,   980,     0,   981,     0,     0,     0,   767,
       0,   982,   983,   984,     0,     0,     0,   985,     0,   768,
       0,     0,     0,     0,  1238,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1556,     0,     0,
       0,     0,     0,     0,     0,  1557,     0,     0,  1558,     0,
       0,     0,     0,     0,     0,     0,  1559,     0,   986,     0,
       0,     0,     0,  1560,     0,     0,     0,     0,  1561,     0,
       0,     0,     0,     0,     0,     0,     0,   987,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1562,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   530,
       0,   769,     0,     0,     0,     0,     0,     0,     0,  -914,
       0,     0,  -914,     0,     0,     0,     0,     0,     0,     0,
    -363,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,     0,  -363,     0,     0,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,     0,     0,     0,     0,     0,
       0,     0,  1223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   770,  -363,     0,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,     0,     0,   989,   990,  -914,     0,     0,
       0,     0, -1818,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -914,     0,     0,  1563,     0,  1564,
       0,  1565,     0,     0,  1566,     0,  1567,  1568,  1569,   771,
    -363,  1570,  1571,     0,     0,     0,     0,     0,     0,   994,
       0,     0,  1235,     0,     0,   762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   995,
       0,     0,     0,     0,   996,     0,     0,     0,     0,     0,
       0,   997,     0,   137,     0,     0,     0,     0,     0,   772,
       0,     0,  -363,     0,     0,     0,   531,     0,     0,  -363,
    -363,  -363,  -363,  -363,     0,     0,  -363,  -363,     0,     0,
       0,     0,     0,     0,     0,     0,  -914,  -914,  -914,     0,
       0,     0,     0,     0,  -363,  -914,     0,     0,     0,     0,
     973,     0,     0,     0,     0,     0,  -914,     0,     0,  -363,
       0,     0,     0,     0,     0,     0,     0,   974,     0,     0,
       0,     0,  -363,     0,     0,  -363,     0,     0,     0,     0,
       0,  -363,     0,     0,     0,     0,     0,     0,     0,  -914,
       0,     0,     0,     0,     0,  -914,     0,  -914,     0,     0,
       0,  -914,     0,  -914,  -914,  -914,     0,     0,     0,  -914,
       0,  -914,     0,     0,     0,     0,  -914,     0,  -363,     0,
    1943,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -363,     0,
    -914,     0,     0,     0,     0,  -914,     0,     0,     0,   975,
     976,   977,  -363,     0,     0,     0,     0,     0,   978,  -914,
    -363,     0,     0,  -363,     0,     0,     0,     0,     0,   764,
       0,     0,     0,     0,     0,  1235,  -363,     0,   762,     0,
       0,     0,     0,  -914,     0,     0,     0,     0,  -363,     0,
       0,     0,     0,     0, -1818,     0,  -363,     0,     0,     0,
       0,     0,  1237,     0,     0,     0,     0,     0,   980,     0,
     981,     0,     0,     0,   767,  -914,   982,   983,   984,     0,
       0,     0,   985,     0,   768,     0,     0,     0,     0,  1238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -363,     0,  -363,  -363,  -363,     0,     0,     0,     0,  -914,
       0,     0,     0,   973,     0,  -914,     0,     0,     0,     0,
       0,     0,  1235,   986,     0,   762,     0,  -914,  -914,  -363,
     974,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,  1389,     0,     0,     0,     0,  -363,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -914,     0,     0,     0,  -363,   769,     0,     0,     0,
       0,  -914,     0,     0,  -363,  -363,  -363,  -914,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -363,     0,
       0,  -914,     0,     0,     0,  -363,  -914,     0,   988, -1818,
     973,   532,     0,  -914,     0,  -914,     0,     0,     0,     0,
       0,  -914,  1330,     0,     0,     0,     0,   974,     0,     0,
       0,     0,   975,   976,   977,  1235,     0,     0,   762,     0,
       0,   978,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
     989,   990,     0,     0,     0,     0,     0,     0,  1662,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1237,     0,  1944,     0,     0,
       0,   980,     0,   981,   771,     0,     0,   767,  1945,   982,
     983,   984,     0,     0,   994,   985,     0,   768,     0,     0,
       0,     0,  1238,   973,     0,     0,     0,     0,     0,   975,
     976,   977,  1235,     0,   995,   762,     0,     0,   978,   996,
     974,     0,     0,     0,     0,     0,   997,     0,   137,   764,
       0,     0,     0,  1389,   772,     0,   986,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   987,     0,     0,     0,     0,
       0,     0,  1237,     0,     0,     0,     0,     0,   980,     0,
     981,     0,     0,     0,   767,     0,   982,   983,   984,   769,
       0,     0,   985,     0,   768,     0,     0,     0,     0,  1238,
     973,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1394,     0,     0,     0,     0,   974,     0,     0,
       0,   988,   975,   976,   977,  1235,     0,     0,   762,     0,
       0,   978,     0,   986,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,     0,     0,     0,     0,     0,     0,     0,
       0,   770,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   989,   990,  1237,   769,     0,     0,     0,
       0,   980,     0,   981,     0,     0,     0,   767,     0,   982,
     983,   984,     0,     0,     0,   985,     0,   768,     0,     0,
       0,     0,  1238,   973,     0,     0,     0,   771,   988,   975,
     976,   977,     0,     0,     0,     0,     0,   994,   978,     0,
     974,     0,     0,     0,     0,     0,     0,     0,     0,   764,
       0,     0,     0,     0,     0,     0,   986,   995,     0,     0,
       0,     0,   996,     0,     0,     0,     0,     0,   770,   997,
       0,   137,     0,     0,     0,   987,     0,   772,     0,     0,
     989,   990,  1237,     0,     0,     0,     0,     0,   980,     0,
     981,     0,     0,     0,   767,     0,   982,   983,   984,   769,
       0,     0,   985,  -970,   768,     0,  -970,     0,     0,  1238,
       0,     0,     0,     0,   771,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   994,     0,     0,     0,     0,     0,
       0,   988,   975,   976,   977,     0,     0,     0,     0,     0,
       0,   978,     0,   986,   995,     0,     0,     0,     0,   996,
       0,     0,   764,     0,     0,     0,   997,     0,   137,     0,
       0,     0,   987,     0,   772,     0,     0,     0,     0,     0,
       0,   770,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -970,     0,   989,   990,  1237,   769,     0,     0,     0,
       0,   980,     0,   981,     0,     0,     0,   767,  -970,   982,
     983,   984,     0,     0,     0,   985,     0,   768,     0,     0,
       0,     0,  1238,     0,     0,     0,     0,   771,   988,     0,
       0,     0,  1235,     0,     0,   762,     0,   994,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,   995,     0,     0,
       0,     0,   996,     0,     0,     0,     0,     0,   770,   997,
       0,   137,     0,     0,  1520,   987,     0,   772,     0,     0,
     989,   990,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
    -970,  -970,  -970,     0,     0,     0,     0,     0,     0,  -970,
     973,     0,     0,     0,   771,     0,     0,     0,     0,     0,
    -970,     0,     0,     0,   994,     0,     0,   974,     0,     0,
       0,   988,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   995,     0,     0,     0,     0,   996,
       0,     0,     0,  -970,     0,     0,   997,     0,   137,  -970,
       0,  -970,     0,     0,   772,  -970,     0,  -970,  -970,  -970,
       0,   770,     0,  -970,     0,  -970,  1235,     0,     0,   762,
    -970,     0,     0,   989,   990,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1483,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -970,     0,     0,   771,     0,   975,
     976,   977,     0,     0,     0,     0,     0,   994,   978,     0,
       0,     0,     0,  -970,     0,     0,     0,     0,     0,   764,
       0,     0,     0,     0,     0,     0,     0,   995,     0,     0,
       0,     0,   996,     0,   973,     0,     0,  -970,     0,   997,
       0,   137,     0,     0,     0,     0,     0,   772,     0,     0,
       0,   974,  1237,     0,     0,     0,     0,     0,   980,  1235,
     981,     0,   762,     0,   767,     0,   982,   983,   984,  -970,
       0,     0,   985,     0,   768,     0,     0,     0,     0,  1238,
       0,     0,  1235,     0,     0,   762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -970,
       0,     0,     0,   986,     0,     0,     0,     0,     0,     0,
       0,  -970,  -970,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,     0,     0,     0,     0,   973,     0,     0,
       0,     0,     0,   975,   976,   977,     0,  1667,     0,     0,
       0,     0,   978,     0,   974,  -970,   769,     0,     0,     0,
     973,     0,     0,   764,     0,  -970,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   974,     0,     0,
       0,     0,     0,     0,     0,  -970,     0,     0,   988,     0,
    -970,     0,     0,     0,     0,     0,  1237,  -970,     0,  -970,
       0,     0,   980,     0,   981,  -970,     0,     0,   767,     0,
     982,   983,   984,     0,     0,     0,   985,     0,   768,     0,
       0,     0,     0,  1238,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     989,   990,     0,     0,     0,     0,   975,   976,   977,     0,
       0,     0,     0,     0,     0,   978,     0,   986,     0,     0,
       0,     0,     0,     0,     0,     0,   764,     0,     0,   975,
     976,   977,     0,     0,   771,     0,   987,     0,   978,     0,
       0,     0,     0,     0,   994,     0,     0,     0,     0,   764,
       0,     0,     0,     0,     0,     0,     0,     0,  1524,  1237,
     769,     0,     0,     0,   995,   980,     0,   981,     0,   996,
       0,   767,     0,   982,   983,   984,   997,     0,   137,   985,
       0,   768,  1237,     0,   772,     0,  1238,     0,   980,     0,
     981,     0,   988,     0,  1280,     0,   982,   983,   984,     0,
       0,     0,   985,     0,   768,  1235,     0,     0,   762,  1238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     986,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1798,   770,     0,   762,     0,     0,     0,     0,   987,
       0,     0,     0,   986,   989,   990,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,   769,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   771,     0,
       0,     0,     0,   973,     0,     0,   769,     0,   994,     0,
       0,     0,     0,     0,     0,   988,     0,     0,     0,     0,
     974,     0,     0,     0,     0,     0,     0,     0,   995,   973,
       0,     0,     0,   996,     0,     0,     0,     0,   988,     0,
     997,     0,   137,     0,     0,     0,   974,     0,   772,  1964,
       0,     0,     0,     0,     0,   770,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   989,   990,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     989,   990,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   771,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   994,   975,   976,   977,     0,     0,     0,     0,     0,
       0,   978,     0,     0,   771,     0,     0,     0,     0,     0,
       0,   995,   764,     0,   994,     0,   996,     0,   975,   976,
     977,     0,     0,   997,     0,   137,     0,   978,     0,     0,
       0,   772,     0,     0,   995,     0,     0,     0,   764,   996,
       0,     0,     0,     0,     0,  1237,   997,     0,   137,     0,
       0,   980,     0,   981,   772,     0,     0,   767,     0,   982,
     983,   984,     0,     0,     0,   985,     0,   768,     0,     0,
       0,  1237,  1238,     0,     0,     0,     0,   980,     0,   981,
       0,     0,     0,   767,     0,   982,   983,   984,     0,     0,
       0,   985,     0,   768,     0,     0,     0,     0,  1238,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   987,     0,     0,     0,     0,
       0,     0,   986,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,   987,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   625,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   988,     0,   626,
       0,     0,   627,   628,   629,   630,   631,   632,   633,     0,
       0,   770,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   989,   990,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   770,   634,     0,
     635,   636,   637,   638,   639,   640,   641,     0,     0,   989,
     990,     0,     0,     0,     0,     0,     0,   771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   994,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   771,   642,     0,     0,   995,     0,     0,
       0,     0,   996,   994,     0,     0,     0,     0,     0,   997,
       0,   137,     0,     0,     0,     0,     0,   772,     0,     0,
       0,     0,     0,   995,     0,     0,     0,     0,   996,     0,
       0,     0,     0,     0,     0,   997,     0,   137,  1723,     0,
       0,  1724,     0,   772,  1725,   627,   628,   629,   630,   631,
     632,  1726,  1727,   643,   644,   645,   646,   647,     0,     0,
     648,   649,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1728,     0,  1729,     0,     0,     0,     0,     0,
       0,   634,     0,   635,   636,   637,   638,   639,   640,   641,
       0,     0,     0,   650,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,   651,
       0,     0,     0,     0,     0, -1894,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   642,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   652,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1730,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   653,     0,     0,     0,   643,   644,   645,   646,
     647,     0,     0,   648,   649,     0,   654,  1731,     0,     0,
       0,     0,     0,  1732,   655,  1733,     0,   656,     0,     0,
       0, -1845,     0,     0,     0,     0,     0,     0,  1734,     0,
     657,     0,     0,     0,     0,     0,   650,     0,     0,     0,
       0,     0,   658,     0,     0,     0,     0,     0,     0,    94,
     659,     0,   651,     0,     0,     0,     0,     0,     0,     0,
    1735,     0,     0,     0,     0,     0,     0,     0,     0,  1736,
     627,   628,   629,   630,   631,   632,   973,     0,     0,     0,
       0,     0,     0,  1737,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   974,   660,   652,   661,   662,   663,     0,
       0,     0,     0,     0,     0,     0,   634,     0,   635,   636,
     637,   638,   639,   640,   641,     0,     0,     0,     0,     0,
       0,     0,     0,   664,     0,  1738,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1739,   654,
       0,     0,  -360,     0,     0,     0,     0,   655,     0,     0,
     656,     0,   642,     0,     0,     0,     0,     0,     0, -1894,
       0,     0,     0,   657,     0,  1740,     0,     0,   665,   666,
     667,     0,     0,     0,     0,   973,     0,     0,     0,     0,
       0,     0,   668,     0,     0,   975,   976,   977,     0,   669,
       0,  1741,   974,     0,   978,     0,     0,     0,     0,  1742,
       0,     0,     0,     0,     0,   764,     0,     0,     0,     0,
       0,   643,   644,   645,   646,   647,     0,  1743,   648,   649,
       0,     0,     0,     0,     0,     0,     0,   660,     0,   661,
     662,   663,     0,     0,     0,     0,     0,     0,   979,     0,
       0,     0,     0,     0,   980,     0,   981,     0,     0,     0,
     767,   650,   982,   983,   984,     0,     0,     0,   985,     0,
     768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1744,     0,     0,     0,     0,  -653,     0,     0,     0,     0,
    1745,     0,     0,     0,   975,   976,   977,     0,     0,     0,
       0,     0,     0,   978,     0,     0,     0,  1746,     0,   986,
       0,   665,   666,   667,   764,     0,     0,     0,     0,     0,
     652,     0,     0,     0,     0,   668,     0,     0,   987,     0,
       0,  1747,   669,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   979,     0,     0,
       0,     0,   769,   980,     0,   981,     0,     0,     0,   767,
       0,   982,   983,   984,   654,     0,     0,   985,     0,   768,
       0,     0,     0,     0,     0,   656,     0,     0,   973,     0,
       0,     0,     0,     0,   988,     0,     0,     0,   657,     0,
       0,     0,     0,     0,     0,   974,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   986,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   770,     0,     0,   987,     0,     0,
       0,     0,   973,     0,     0,     0,   989,   990,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   974,
       0,   769,     0,     0,   661,   662,   663,     0,  1426,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   991,     0,
     771,     0,   992,   993,     0,     0,     0,     0,     0,     0,
     994,     0,     0,   988,     0,     0,     0,   975,   976,   977,
       0,     0,     0,     0,     0,     0,   978,     0,     0,     0,
     995,     0,     0,     0,     0,   996,     0,   764,     0,     0,
       0,     0,   997,     0,   137,     0,     0,     0,     0,     0,
     772,     0,     0,   770,     0,     0,   665,   666,   667,     0,
       0,     0,     0,     0,     0,   989,   990,     0,     0,     0,
     979,   975,   976,   977,     0,     0,   980,     0,   981,     0,
     978,     0,   767,     0,   982,   983,   984,  1444,     0,     0,
     985,   764,   768,     0,     0,     0,     0,   991,     0,   771,
       0,   992,   993,   973,     0,     0,     0,     0,     0,   994,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     974,     0,     0,     0,   979,     0,     0,     0,     0,   995,
     980,   986,   981,     0,   996,     0,   767,     0,   982,   983,
     984,   997,     0,   137,   985,     0,   768,     0,     0,   772,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   769,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   986,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   987,     0,   988,     0,     0,     0,
       0,     0,   975,   976,   977,     0,     0,     0,     0,     0,
       0,   978,     0,     0,     0,     0,     0,     0,   769,     0,
       0,     0,   764,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   973,     0,   770,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   989,   990,
     988,   974,     0,     0,     0,   979,  1981,     0,     0,     0,
       0,   980,     0,   981,     0,     0,     0,   767,     0,   982,
     983,   984,   973,     0,     0,   985,     0,   768,     0,     0,
     991,     0,   771,     0,   992,   993,     0,     0,     0,   974,
     770,     0,   994,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   989,   990,     0,     0,     0,     0,     0,     0,
    1983,     0,   995,     0,     0,     0,   986,   996,     0,     0,
       0,     0,     0,     0,   997,     0,   137,     0,     0,     0,
       0,     0,   772,     0,   991,   987,   771,     0,   992,   993,
       0,     0,     0,   975,   976,   977,   994,     0,     0,     0,
       0,     0,   978,     0,     0,     0,     0,     0,     0,   769,
       0,     0,     0,   764,     0,     0,   995,     0,     0,     0,
       0,   996,   973,     0,     0,     0,     0,     0,   997,     0,
     137,   975,   976,   977,     0,     0,   772,     0,     0,   974,
     978,   988,     0,     0,     0,     0,   979,     0,     0,     0,
       0,   764,   980,     0,   981,     0,     0,     0,   767,     0,
     982,   983,   984,     0,     0,     0,   985,     0,   768,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   770,     0,     0,   979,     0,     0,     0,     0,     0,
     980,     0,   981,   989,   990,     0,   767,     0,   982,   983,
     984,     0,     0,     0,   985,     0,   768,   986,     0,     0,
       0,     0,     0,     0,     0,  1993,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   991,   987,   771,     0,   992,
     993,   975,   976,   977,     0,     0,     0,   994,     0,     0,
     978,     0,     0,     0,     0,   986,     0,     0,     0,     0,
     769,   764,     0,     0,     0,     0,     0,   995,     0,     0,
       0,     0,   996,     0,   987,     0,     0,     0,     0,   997,
       0,   137,     0,     0,     0,     0,     0,   772,     0,     0,
       0,     0,   988,     0,   979,     0,     0,     0,   769,     0,
     980,     0,   981,     0,     0,     0,   767,     0,   982,   983,
     984,     0,     0,     0,   985,     0,   768,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     988,     0,   770,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   989,   990,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   986,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     770,     0,     0,     0,   987,     0,   991,     0,   771,     0,
     992,   993,   989,   990,     0,     0,     0,     0,   994,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   769,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   995,     0,
       0,     0,     0,   996,     0,     0,   771,     0,   992,     0,
     997,     0,   137,     0,     0,     0,   994,     0,   772,     0,
     988,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   995,     0,     0,     0,
       0,   996,     0,     0,     0,     0,     0,     0,   997,     0,
     137,     0,     0,     0,     0,     0,   772,     0,     0,     0,
     770,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   989,   990,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   771,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   994,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   995,     0,     0,     0,
       0,   996,     0,     0,     0,     0,     0,     0,   997,     0,
     137,     0,     0,     0,     0,     0,   772
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2487)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     116,   394,   103,   396,   105,   601,   602,   103,   969,   105,
     111,   797,   367,  1174,  1152,   111,   693,   856,   728,  1125,
    1216,   182,  1461,  1235,   792,  1461,   159,   658,  1123,  1461,
    1461,  1612,   802,   426,   135,  1461,  1461,  1501,   715,   135,
    1916,  1483,   605,   436,  1379,  1128,  1119,  1550,  2022,   210,
     405,  2056,  1852,  1138,   706,  1267,     1,     0,     0,  1368,
      56,    57,    58,  1959,  1541,  1275,    10,  1152,    64,    10,
     801,    10,    18,   669,  1193,    49,  1389,     1,    53,   756,
      10,  1818,    60,     1,   185,    60,     7,    10,  1207,    50,
      18,   859,    23,  1535,    32,    58,    50,     9,  1388,    10,
      50,     1,    50,    99,   100,    99,   102,  1117,    89,  1130,
      51,   107,   108,  2231,    73,  1125,  1126,  1138,    90,  1329,
     116,    10,    31,    28,  1861,  1135,    38,   110,   127,   806,
      95,  1152,  1142,  1143,   765,   766,   252,   133,   365,    31,
    1475,  1782,    90,    40,    60,   168,   259,    10,    32,   144,
       1,  1161,  1162,   113,  1279,   132,  1262,   227,    67,   117,
      69,  1603,  1471,    73,   259,   161,  2091,   173,   179,    33,
      22,    60,    60,   205,  1384,  1912,   244,  1250,     1,    22,
     296,  2147,    99,  2188,   246,   816,   178,   162,    23,  1524,
      41,    42,    43,    44,    45,   847,   192,   164,   141,   141,
     243,    75,   145,   145,    60,   265,   259,   205,   204,   370,
     333,   313,   205,   118,   277,   234,   190,   274,   110,   116,
     220,   227,   127,   259,   362,  1667,   313,    78,    79,   235,
     455,  1968,   292,   277,  1359,   128,   762,   401,   130,   259,
     179,    64,   243,   417,   219,   220,   792,   259,   126,   113,
    2736,  1125,   368,   234,   250,  2517,  2152,   460,   220,   202,
     202,   992,   258,   198,  2140,   458,  1141,    10,   164,    92,
      93,     0,   168,   214,   467,    66,   126,   169,  1153,   472,
    1589,   506,  1013,   201,   179,    10,  1307,   132,  1162,  1299,
      73,   180,  1377,   356,  2780,   358,   460,  1318,   273,   191,
     174,   259,   155,   234,    73,   246,   247,    73,   283,   230,
     513,   485,    73,   859,   206,   841,   322,  2579,   259,   319,
    1330,    73,   390,   425,   259,   237,  2063,   294,   269,   259,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   127,
     177,  1018,   239,   459,   445,   254,   447,   448,   979,   311,
     394,   447,   448,   454,   243,   417,  1377,   274,   454,  1823,
    1381,    73,  1804,  1672,   162,  1678,   259,  2333,   364,   507,
     471,   295,  1685,   474,   475,   471,   477,   277,   215,   480,
     481,  1391,  1885,   206,   382,   179,   113,  1118,  1483,   512,
     362,  1894,   313,   317,  1871,   259,   392,  1874,   455,   234,
     513,   362,     7,   346,   346,   370,  2047,   403,   362,   314,
     351,   234,   362,  1606,   362,    59,   412,   413,    62,   415,
     416,   382,    66,   340,   519,   421,   513,   336,   382,   292,
      67,   205,    69,   234,   477,  1596,   506,  1630,   239,   471,
    1535,   460,   438,   544,   545,    55,   405,   470,   544,   545,
     512,   428,   512,   345,  1185,  1186,  1187,  1540,     7,   455,
     513,  1024,  1025,  1140,   375,   460,   128,  1198,  1199,   321,
     358,   214,  1781,  1483,  1205,  2371,   477,   513,   471,   423,
     445,   582,   423,   599,   335,   359,   582,     7,     7,   214,
     606,   354,   345,   513,   394,   405,  1621,   348,   457,   460,
     474,   513,   513,   326,   605,  1275,   460,   513,  1603,  2246,
    1583,  1521,   409,   512,   513,  1600,   259,   460,   460,   513,
     516,   513,  1812,   451,  1534,  1535,   269,   508,   469,   512,
     513,  2649,   492,   471,   259,   507,   514,   653,   512,   455,
     536,  1614,   460,   506,   269,     1,   507,   457,   469,  1710,
    1863,   156,  2289,   507,  2291,   513,    12,   507,   659,   507,
     460,   557,  1572,   559,   510,  1217,   562,   563,   513,   565,
     513,   513,  1667,  2469,   513,   519,  2157,   126,   519,  1600,
    1699,  2457,   513,   513,   811,  2322,  1798,   471,   477,   513,
     513,   465,  1802,  1603,   505,  1904,   513,  2238,   510,     8,
     596,  2526,  2527,   512,   579,    61,  1237,   512,   351,   214,
     462,   467,   608,   491,  1384,   460,   472,   408,   513,   462,
    1641,   473,   405,    64,  2361,  2362,   351,   271,  2105,  1958,
     473,  1940,    33,   421,   244,  1645,   405,   460,   613,   405,
    2440,   491,   162,    99,   405,   101,  1656,   103,   253,  1659,
     255,    92,    93,   405,   259,   111,  2098,  1667,  2100,   259,
     513,   777,   513,   461,   269,   214,   782,  2543,   513,   274,
    2034,   259,   668,   461,   457,     0,   513,   979,   259,    67,
     423,    69,   456,   799,   467,   846,   787,   788,   457,   472,
     352,   457,    34,   405,   214,   214,   457,  2139,   423,   336,
      60,   345,    50,   804,   253,   457,   255,   201,  2713,  1804,
     259,   167,   513,   709,     7,    31,   712,  2130,  1879,   513,
     269,  1914,   327,   450,   512,   259,   469,   259,   455,  1122,
     234,  1124,   202,   253,   253,   255,   255,  1810,  2712,   259,
     259,  1511,    10,  2010,   469,   457,   351,   409,  2190,   269,
     269,    67,   191,    69,  1147,   254,  1149,   335,   174,   403,
     175,  1154,     7,  2119,   408,    31,   145,   259,   191,   422,
     513,   462,   980,   981,  1545,  1168,   519,  1508,   327,   987,
     390,   254,   473,  1976,    59,    27,  1807,   460,  2101,   164,
     206,    66,    60,   234,   519,   318,  2533,  2534,  2509,   291,
     236,  1169,   351,   326,   260,    10,  2309,   327,   327,   218,
     219,  2120,   172,   460,  1585,  1117,   141,   421,   423,     7,
     145,   246,   314,  1125,  1126,  1910,    92,   238,   170,   238,
     205,   351,   351,  1135,   328,   329,  2192,    35,  1140,  1610,
    1142,  1143,   334,  2172,  1146,  1476,  1528,  1529,  1530,  1531,
     306,   345,   968,   218,   265,    60,   265,   461,   259,  1161,
    1162,   238,   231,   259,   469,   225,   254,  1169,  2203,   513,
    2234,  1502,  1265,   238,   423,   314,   346,   202,   274,  1649,
     359,   292,   230,   292,  1277,   326,  1188,  2196,   265,  1910,
    1911,  1193,  1260,  1999,  1457,   156,   395,   259,  2311,  2312,
     265,   335,   259,   423,   423,  1207,   455,   401,   513,    59,
      59,   564,   180,   513,   519,   292,    66,    66,  1034,   294,
     469,   214,   395,  1024,  1025,   513,   430,   292,   270,   291,
     326,  2807,   513,   178,   512,  1237,   455,  1947,   254,  1241,
     396,   461,   491,   214,   367,  1622,   214,   274,   336,   469,
     469,    28,  2090,  2091,  2221,    39,   198,  2313,  1260,  1690,
     253,  1692,   255,    47,   513,  2676,   259,   346,   404,   214,
     519,   380,   334,  1704,   125,   243,   269,   334,   454,   513,
     472,   513,  1284,   398,   440,   519,   465,   519,   259,    87,
     513,   259,   417,   513,   513,   471,   271,  1299,   269,   519,
     519,   269,   259,  2098,   460,  2100,   375,   382,   253,   214,
     255,   510,   265,  2469,   259,   346,  2597,   342,  1119,   460,
     336,   346,  1123,  2106,   269,   205,   214,   519,  1330,  1130,
    1131,  1708,  1802,   132,   327,  1139,    48,  1138,   243,  2452,
    1141,   118,  1344,  2018,  2139,  1146,  1254,  1148,  2260,  1150,
    1151,  1152,  1153,    65,   259,  1732,   162,   513,   351,    29,
    1831,  1165,  2037,  2038,   269,   253,  2041,   255,   231,  1170,
     345,   259,   141,  2156,   120,   121,   122,   160,   512,   513,
     351,   269,   327,   351,     9,    27,   284,   285,   286,  1391,
     347,   259,   460,   105,  1396,  2190,  2560,  2553,   509,   459,
     509,  2682,   429,   512,   431,  1266,   351,   467,   468,  2084,
     472,  1882,   472,    38,  2089,   472,  2137,   513,  1714,  1715,
    1513,   271,   271,   519,  2230,   418,   196,   413,   403,   213,
     423,   180,   509,   408,   233,   512,  2146,   512,   391,   327,
    2579,   222,   322,  2579,   509,   265,   351,  2579,  2579,  1250,
     233,   349,   423,  2579,  2579,   423,  1838,  1318,   214,   129,
     463,   245,   519,   351,  1795,  1936,   214,   401,  2329,  1270,
    1852,  2594,   292,   254,  2184,  2185,   469,   413,   423,   250,
     251,  1483,   234,   351,   268,   460,   214,   257,   260,   295,
     239,   273,   298,   242,   240,   345,   345,   296,   469,   485,
     313,   469,   462,   259,    99,   100,  1307,   259,   254,   477,
     513,   259,   375,   269,   297,  1319,   259,  1318,   423,  1521,
     513,   269,   234,   463,   469,   393,   519,  1388,  2203,   241,
     413,   259,  1534,  1535,   265,   423,  2659,  2005,   513,   323,
     252,   269,   513,    13,   214,   513,    16,    17,   519,   485,
     510,   519,   334,   403,   403,   423,   180,   413,   408,   408,
     312,   292,   314,  1364,   469,   385,   190,   512,   513,   289,
    1572,  2042,   477,   513,   519,   356,  1377,   475,   476,   246,
    1381,   469,   480,   364,   801,  2295,   173,  2058,   212,   259,
     413,  2061,   128,  1397,   340,   351,   460,    56,    57,   269,
     384,  1603,   485,   351,   417,   462,   352,  2078,   513,   418,
     460,   460,  1943,   283,   519,   460,   473,  1418,   242,   339,
    1622,    10,  1418,   351,    13,   513,   109,    16,    17,   485,
     361,   519,   256,    92,  1689,  1496,   119,  2108,   174,   306,
     227,  2112,   400,  1645,   356,   357,  2077,  2442,   235,  2444,
     109,   519,   460,  1363,  1656,   461,  1457,  1659,   467,   371,
     119,   373,   485,   472,  2560,  1667,    36,   423,   766,    39,
     442,  2081,   485,   311,   356,   423,    46,    47,  2149,   259,
    2219,   351,  1483,   209,   210,   467,  2381,  2064,  2526,  2527,
     472,  2529,   512,   513,   549,   423,   454,  1699,   482,   206,
     446,  2529,    25,    26,  1414,   343,  2002,  2003,   513,   467,
    2674,  2675,   292,   469,   472,  2390,  2628,  2705,   816,  2394,
     430,   469,   248,   249,    94,   363,  2057,   234,   293,  2680,
    1732,   503,     9,   412,  1535,   322,   591,   419,   420,   765,
     766,   513,  2119,   265,  1605,    68,   234,    70,   460,    72,
    2714,  2182,   483,   423,  1224,  2465,   426,   427,  1228,  1455,
     325,    38,   979,   519,  1460,  1461,   621,  1463,  2756,  2733,
     292,   519,  2243,   174,   991,   992,   993,  2583,  2249,    57,
     265,   512,  1583,   106,   107,   108,  2737,  2738,  2259,     9,
     816,   519,   357,   163,  1655,   507,  1013,     9,   168,  1600,
     765,   766,  1603,  2664,   412,   206,  2277,   292,   401,  1642,
     280,   281,   190,  1614,    92,  2192,   190,   265,    38,  2647,
     460,  2649,   192,   467,   190,  2535,    38,   460,   472,  2539,
    2540,   109,   490,   156,   212,   158,   306,   307,   212,  2803,
    1641,   119,   165,   213,   292,   168,   212,  2522,  2523,   519,
     508,   816,    16,  1669,     2,  2683,  2684,   460,  2686,     7,
     457,  1176,  1177,  1178,  2692,  2693,  1667,   326,  2339,    33,
     467,   330,   331,  2344,  2345,   472,  2571,  2572,    42,   460,
     459,  2367,  2577,  2369,    13,    14,  2357,  1421,   220,   468,
    1424,   280,   281,  1208,  1695,   457,  1430,    60,   268,  1695,
    1434,  1118,  2763,    32,   558,   467,  1123,  1441,   176,   563,
     472,   458,   371,  1130,   312,   460,   314,   306,   307,  2614,
     467,  1138,  1738,  2618,  2619,   472,  2787,   457,   460,   388,
     389,   254,  1200,  1201,   257,  1152,  2313,   467,   464,   356,
     466,   358,   472,  1759,   475,  1947,   477,   254,    71,   480,
     257,   274,  1758,   323,  1202,  1203,  1204,  1653,  2429,  1176,
    1177,  1178,  1768,  1769,   254,   513,  1772,   257,  1185,  1186,
    1187,  1188,   254,     3,   460,   257,  1193,   494,   495,   496,
     497,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,   513,
    1207,  1208,   494,   495,   496,   497,   356,   460,   358,  1800,
      10,   513,   356,  1804,   358,  2491,  1807,   304,   305,  1810,
    2481,   460,  2673,   159,   384,   161,    46,  1713,   345,   191,
    1237,   193,  1186,  1187,  2495,  2496,   259,   397,  1724,   494,
     495,   496,   497,   259,   159,  1731,   161,    67,    68,    69,
      70,   629,   630,   631,   632,    68,   477,    70,    12,  2142,
     991,   201,   993,  1270,   451,   513,   407,    66,   408,   417,
    1861,    62,   259,   234,  1760,   460,   333,   408,   259,   513,
     231,    27,   460,    36,  1935,    85,    39,   460,  2133,   110,
     460,   317,   259,    46,    47,   259,   275,   463,    24,  1691,
    1307,  1693,   102,   105,  1696,  1697,  1698,    61,   460,   446,
    1702,  1318,   191,  1705,  1706,  1966,   125,   463,    18,  1910,
    1911,  1912,   482,    89,  1975,  1948,  1949,  1950,  1951,  1952,
    1953,  1954,  1955,  1819,   460,   401,   513,   356,   275,   452,
     409,    94,    59,   408,   430,    99,    40,   101,   265,   103,
     460,   512,   239,  1839,  2146,   409,   513,   111,   336,  1845,
     515,  1368,   513,   426,   321,   315,   401,   264,   460,     8,
    1377,   460,   401,   258,  1381,   460,   512,  1968,   513,   460,
     401,   371,   460,   460,    88,    88,   127,   439,   401,   502,
     460,   211,  2184,  2185,   194,   195,   196,   395,    23,   311,
     513,   510,   401,   203,   314,   460,   513,  1998,   206,   513,
     163,   460,  1998,   167,   214,   508,   510,   237,   390,   234,
     257,   455,  2013,   513,   220,  2031,   125,  2018,   519,   513,
      54,   455,   471,   451,   254,    27,   407,   311,   513,   192,
    2323,   456,   417,   198,   353,   454,  2037,  2038,   451,   471,
    2041,   259,   460,   513,   460,   382,   117,   406,   341,   259,
     213,   261,   262,   263,  1471,   513,   471,   267,   190,   269,
     290,   471,  2063,   513,   228,   471,  1483,   471,   471,   471,
     471,   172,   471,   471,  2090,  2091,   471,   471,   259,   455,
     310,  2142,   460,  2084,  1980,   460,  2147,   460,  2089,  2090,
    2091,  1508,   225,  2295,   314,   410,   260,  2098,   308,  2100,
     462,    31,   332,   133,   198,   268,   513,   134,   338,   135,
     455,   136,   392,   137,   356,   138,   506,   513,  1535,   139,
     513,   140,   104,   455,   450,  2021,   143,  2023,   471,    50,
     411,  2027,   448,   454,   451,   146,  2137,   198,  2139,  2035,
    2201,   351,   306,   454,   147,   309,   274,   513,   148,    32,
     149,   508,   150,    50,   151,   198,   152,   115,   153,   222,
     323,   154,   117,   457,   460,   457,   457,   457,   417,   457,
     457,   457,  1589,   383,   457,   317,   455,   112,   199,   455,
    1597,   225,   412,  1600,   382,   344,  1603,   205,   275,  2190,
     259,   421,   380,   299,   493,   303,   168,   510,   510,   131,
     178,   370,  2203,   455,   171,   132,  2207,   455,   438,    50,
     374,  2207,   198,   423,   230,   230,   206,    59,   304,   206,
     460,   384,   275,   254,  1641,   435,   436,   168,   430,   239,
     460,   513,   396,   279,   397,   205,  2132,   304,   455,   455,
     518,   386,   517,   367,   233,    31,   205,    18,   205,  2542,
    1667,   481,   451,  2749,   131,  1672,   142,    50,   422,   469,
     424,   455,  2323,  2465,   144,   370,   205,     9,   132,   479,
     500,   510,  2333,  1690,   198,  1692,   440,   507,   508,   205,
     430,     5,  1699,   510,   455,   460,     8,  1704,  2289,   499,
    2291,    10,   513,   299,   504,   302,    20,   512,   205,   300,
      50,   511,  2595,   513,   507,   512,    30,   507,   296,   519,
     191,   319,   470,   335,   318,   116,   445,    48,  2319,   482,
     418,  2322,   299,  2319,   366,   366,   205,   205,   105,    50,
     239,   265,   265,  2535,   501,   301,    98,  2539,  2540,    59,
       9,    50,    66,   113,   465,   265,   386,   265,   342,   513,
     265,   297,   112,   460,   212,   490,   110,   342,   460,   304,
     223,  2362,   345,   372,  1781,   425,   234,   122,   198,   288,
      50,   342,   326,   326,   291,  2376,   432,   326,   318,     7,
    2376,    46,   311,  1800,    92,    26,   127,  1804,   202,  2390,
    1807,   148,   207,  2394,    75,   222,   239,   150,   178,   521,
     539,   545,   505,   617,  1915,   287,    33,  1033,   788,    36,
     498,   755,    39,   426,  1461,  2761,  1416,  1908,  2205,   411,
      47,  2009,  1683,   806,  2686,  2692,  1042,  2231,  2103,   859,
     795,  1233,  2422,  1771,  1855,  1770,  2409,  1806,  1250,  2101,
    1494,  2442,  1521,  2444,  1861,  1540,  1543,  2287,  1496,  1874,
    2105,  1303,  2305,  1586,  1593,  2128,  1902,  1604,  1339,  2460,
    1344,  2145,  1928,  2333,  2360,  2147,  2323,    94,  2201,  2159,
    1956,  1635,  1375,  1377,  1153,  2185,  1391,  1975,  2365,  1975,
    2756,  1682,  2370,  2469,  2499,  1572,   113,  1904,  1905,  2178,
    1170,  2178,  2178,  1910,  1911,  1912,  1148,  2178,   222,  1364,
    1491,   300,  2398,   700,   152,  1943,   271,  2403,  1732,   243,
    2526,  2527,   996,  2605,   582,   760,   418,  2454,  2727,   510,
     216,  2522,  2523,  1940,  1963,  2526,  2527,  2117,  2529,  2822,
     254,  1596,  1907,   719,  2676,   451,    -1,    -1,    -1,    -1,
      -1,   265,    -1,    -1,  1116,  1117,  1118,   561,    -1,  1121,
      -1,  1968,    -1,  1125,  1126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1135,    -1,   192,    -1,    -1,  1140,    -1,
    1142,  1143,  2468,   200,  1146,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,  1161,
    1162,    -1,    -1,  2594,    -1,  1167,   320,  1169,    -1,    -1,
      -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2625,
      -1,  2507,  2508,    -1,  2510,    -1,  1188,    -1,   245,    -1,
      -1,  1193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2525,
      -1,    -1,   356,    -1,    -1,  1207,    -1,    -1,    -1,   266,
     364,   268,    -1,    -1,    -1,  2541,  2063,    -1,    -1,    -1,
      -1,    -1,    -1,   377,    -1,    -1,  2672,    -1,  2659,    -1,
    2077,    -1,    -1,    -1,  1236,   292,   293,    -1,    -1,  1241,
      -1,    -1,    -1,    -1,  2570,    -1,    -1,    -1,    -1,  2575,
    2576,  2098,    -1,  2100,   408,    -1,    -1,   411,  1260,    -1,
    1262,    -1,  2708,  2709,    -1,   419,   323,    -1,    -1,    -1,
    2596,    -1,    -1,  2120,  2705,    -1,   430,    -1,    -1,    -1,
      -1,  2128,  1284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2137,    -1,  2139,   350,    -1,    -1,    -1,  1299,  2624,    -1,
      -1,  2627,    -1,    -1,  2630,  2631,   460,    -1,    -1,   463,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   376,
      -1,    85,    -1,    -1,    -1,  2756,    -1,   384,  1330,    -1,
      -1,    -1,    -1,    -1,    -1,  2182,    -1,    -1,   102,    -1,
     397,    -1,  1344,  2190,    -1,   402,    -1,    -1,    -1,  2196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2791,    -1,    -1,    -1,  2810,    -1,  1368,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,  1391,
      -1,    -1,  1394,    -1,  1396,    -1,   453,    -1,    -1,    -1,
      -1,    -1,  1117,    -1,    -1,    -1,    -1,    -1,  1123,    -1,
    1125,  1126,    -1,    -1,    -1,  1130,    -1,    -1,    -1,    -1,
    1135,    -1,    -1,  1138,    -1,   482,    -1,  1142,  1143,   193,
     194,   195,   196,    -1,    -1,   492,    -1,  1152,    -1,   203,
      85,   498,  2289,    -1,  2291,    -1,  1161,  1162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1471,
      -1,    -1,    -1,    -1,    -1,  2322,    -1,    -1,    -1,    -1,
      -1,  1483,    -1,     1,    -1,    -1,     4,    -1,     6,    -1,
      -1,    -1,    -1,    11,    -1,   259,    -1,   261,   262,   263,
      -1,    19,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2362,    -1,    -1,    -1,  1521,
      -1,    -1,    -1,    -1,    -1,    -1,  1241,    -1,    -1,    -1,
      -1,    -1,  1534,  1535,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    63,    -1,    -1,    -1,   194,
     195,   196,    -1,    -1,    -1,  1270,    74,    -1,   203,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1284,
    1572,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1299,    -1,    -1,  1589,    -1,    -1,
      -1,    -1,  1307,    -1,    -1,  2442,   114,  2444,    -1,    -1,
      -1,  1603,    -1,  1318,   122,    -1,   124,    -1,    -1,    -1,
      -1,  1613,    -1,    -1,   259,  1330,   261,   262,   263,   383,
    1622,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1634,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,  1645,    -1,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,   171,  1656,    -1,    -1,  1659,    -1,    -1,
    1662,    -1,  1377,   308,    -1,  1667,  1381,    -1,    -1,    -1,
    1672,   435,   436,    -1,    -1,    -1,  1391,    -1,    -1,   197,
      -1,  1396,    -1,    -1,   448,    -1,   204,    -1,    -1,   207,
     208,    -1,    -1,    -1,    -1,    -1,    -1,  1699,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,   226,    -1,
      -1,   229,    -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,
    1722,    -1,    -1,    -1,    -1,    -1,   490,    -1,    -1,    -1,
    1732,    -1,    -1,    -1,    -1,   499,    -1,    -1,   383,    -1,
     504,    -1,  1744,    -1,   508,  1747,    -1,   511,   512,   513,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,   276,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1483,    -1,
      -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1781,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     435,   436,    -1,    -1,    -1,  1797,    -1,    -1,   316,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1521,    -1,    -1,    -1,
      -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1534,
    1535,    -1,    -1,    -1,    -1,    -1,    -1,  2674,  2675,    -1,
      -1,    -1,    -1,    -1,   479,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,    -1,  1572,    -1,   504,
      -1,   379,    -1,   381,    -1,    -1,   511,  2714,   513,   387,
      85,    -1,    -1,   391,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   399,    -1,    -1,    -1,  1600,  2733,   102,  1603,    -1,
      -1,     4,   410,     6,    -1,    -1,    -1,    -1,    11,    -1,
      -1,   419,  1904,  1905,    -1,    -1,    19,    -1,    -1,    -1,
     428,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,   437,
      -1,   439,    -1,    -1,    -1,    -1,  1641,    -1,    -1,   447,
    1645,  1933,    -1,    -1,    -1,    -1,    -1,    -1,  1940,    52,
      53,  1656,   460,    -1,  1659,  1947,    -1,    -1,    -1,    -1,
      63,    -1,  1667,    -1,    -1,    -1,  2803,    -1,    -1,    -1,
     478,    74,    -1,    -1,    77,  1967,   484,    -1,    -1,    -1,
      -1,   489,  1974,  1975,    -1,    -1,    -1,    -1,    91,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1999,   516,   214,
      -1,   114,  2004,    -1,    -1,    -1,    -1,  2009,  2010,   122,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,   131,    -1,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,   166,   269,    -1,    -1,    -1,   171,    -1,
      -1,    -1,  2064,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,  1800,    -1,    -1,    -1,  1804,
      -1,   204,  1807,   308,   207,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,  2110,    -1,
      -1,   224,    -1,   226,    -1,    -1,   229,  2119,  2120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,
      -1,    -1,    -1,  2145,  2146,    -1,  1861,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,   276,    -1,   278,    -1,    -1,   383,    -1,
      -1,    -1,  2174,    -1,    -1,    -1,   289,    -1,    -1,    -1,
      -1,    -1,  2184,  2185,    -1,    -1,    -1,    -1,    -1,    -1,
    2192,    -1,    -1,    -1,  2196,  1910,  1911,  1912,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,   423,    -1,
      -1,    -1,     7,    -1,    -1,    10,   329,    -1,    -1,  2221,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,  2230,    -1,
      -1,    -1,  1947,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   365,  1968,   469,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2265,   479,    -1,    -1,    -1,   381,    -1,
      -1,    -1,    -1,    -1,   387,    -1,    -1,    -1,   391,    -1,
      -1,    -1,    -1,    -1,   499,    -1,   399,    -1,    -1,   504,
      85,    -1,    -1,  2295,    -1,    -1,   511,   410,   513,    -1,
      -1,    -1,    97,    -1,   519,    -1,   419,   102,    -1,    -1,
      -1,  2313,    -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,   437,    -1,   439,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   460,  2063,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,    -1,
      -1,   484,    -1,    -1,    -1,    85,   489,    -1,    -1,  2381,
      -1,    -1,    -1,  2098,    -1,  2100,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,   194,
     195,   196,    -1,   516,    -1,    -1,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      -1,    -1,  2137,    -1,  2139,    -1,    -1,    -1,    -1,    -1,
    2432,  2146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
     255,    -1,    -1,  2465,   259,    -1,   261,   262,   263,  2184,
    2185,    -1,   267,    -1,   269,  2190,    -1,    -1,    -1,   274,
      -1,  2483,    -1,   193,   194,   195,   196,    -1,  2490,    -1,
      -1,  2493,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,     1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,   327,  2535,    19,    -1,    -1,  2539,  2540,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2550,   259,
      -1,   261,   262,   263,    -1,    -1,   351,   267,    -1,    -1,
      -1,  2563,    -1,    -1,    -1,    -1,    -1,    52,    53,  2571,
    2572,    -1,    -1,    -1,  2289,  2577,  2291,    -1,    63,    -1,
    2295,  2583,    -1,    -1,    -1,    -1,    -1,    -1,   383,    74,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,  2322,    -1,    -1,
      -1,    -1,  2614,    -1,    -1,    -1,  2618,  2619,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,   114,
    2632,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,
     435,   436,    -1,    -1,    -1,    -1,   131,  2362,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,   383,   469,    -1,    -1,    -1,    -1,    -1,
      -1,   166,    -1,    -1,   479,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2699,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,   504,
      -1,    -1,   197,    -1,    -1,    -1,   511,    -1,   513,   204,
      -1,    -1,   207,   208,   519,   435,   436,  2442,    -1,  2444,
      -1,    -1,   217,  2735,  2736,    -1,    -1,    -1,   448,   224,
      -1,   226,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
    2465,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2764,    -1,    -1,    -1,    -1,    -1,    -1,   479,
      -1,   102,  2774,  2775,    -1,    -1,    -1,    -1,  2780,    -1,
     490,    -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,   499,
      -1,   276,  2794,   278,   504,    -1,    -1,    -1,   508,    -1,
      -1,   511,   512,   513,   289,    -1,    -1,    -1,    -1,    -1,
      -1,   296,   297,    -1,   299,   300,   301,   302,    -1,    -1,
    2535,    -1,    -1,    -1,  2539,  2540,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,
       4,    -1,     6,    -1,   329,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,   354,
     355,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     365,    -1,    -1,   214,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    -1,   379,    -1,   381,    -1,    -1,    63,
      -1,    -1,   387,    -1,    -1,    -1,   391,    -1,    -1,    -1,
      74,    -1,    -1,    77,   399,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,   255,   410,    -1,    91,   259,    -1,
     261,   262,   263,    -1,   419,    -1,   267,    -1,   269,    -1,
      -1,    -1,    -1,   428,    -1,    -1,    -1,    -1,   433,   434,
     114,    -1,   437,    -1,   439,    -1,    -1,    -1,   122,    -1,
     124,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   460,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,   478,    -1,    -1,   327,    -1,    -1,   484,
      -1,    -1,   166,    -1,   489,    -1,    -1,   171,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     351,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,    -1,
      -1,   516,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,   207,   208,    -1,    -1,   378,    -1,    -1,
      -1,     1,   383,   217,     4,    -1,     6,    -1,    -1,    -1,
     224,    11,   226,    -1,    -1,   229,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,   435,   436,    -1,    -1,   272,    -1,
      -1,    -1,   276,    63,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,   289,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,
      -1,    -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   493,    -1,   114,   329,    -1,    -1,   499,    -1,
      -1,    -1,   122,   504,   124,    -1,    -1,    -1,    -1,    -1,
     511,    -1,   513,    -1,    -1,    -1,    -1,    -1,   519,    -1,
     354,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   365,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   379,   166,   381,    -1,    -1,
      -1,   171,    -1,   387,    -1,    -1,    -1,   391,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   399,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   410,   197,    -1,    -1,
      -1,    -1,    -1,    -1,   204,   419,    -1,   207,   208,    -1,
      -1,    -1,    -1,    -1,   428,    -1,    -1,   217,    -1,   433,
     434,    -1,    -1,   437,   224,   439,   226,    -1,    -1,   229,
      -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   478,    -1,    -1,    -1,     1,    -1,
     484,    -1,   272,    -1,    -1,   489,   276,    -1,   278,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,   516,    36,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,   316,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,
      -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,   354,   355,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,
      -1,   381,    -1,    -1,    -1,    -1,    -1,   387,    -1,   122,
      -1,   391,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   399,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     410,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,   419,
      -1,    10,    -1,    -1,    13,    14,    15,    -1,   428,    -1,
     163,    -1,    21,   433,   434,    -1,    -1,   437,    -1,   439,
      -1,    -1,    -1,    -1,    -1,   178,    -1,   447,   181,   182,
     183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,   198,    -1,   200,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,   478,    -1,
     213,    -1,    -1,    -1,   484,    -1,    -1,    -1,   221,   489,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,   234,    -1,    -1,   237,    -1,    -1,    -1,    -1,    -1,
     243,    -1,   245,   102,    -1,    -1,   516,    -1,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,   310,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
     323,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   332,
      -1,    -1,   335,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,   348,    -1,   350,    -1,    -1,
     209,   210,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   376,    -1,   234,    -1,    -1,    -1,    -1,
      -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
     249,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,   402,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,   412,
     269,   414,   415,   416,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,   287,    -1,
      10,    -1,    -1,    13,    14,    15,   295,    -1,    -1,   298,
      -1,    21,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,
      -1,    -1,   455,    -1,   313,    -1,    -1,   460,    -1,   318,
      -1,    -1,   465,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,   337,   482,
      -1,    -1,    -1,   486,   487,   488,    -1,    -1,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,   500,    -1,    -1,
      -1,    -1,    -1,   506,   507,    85,    -1,    -1,    -1,    -1,
     513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,    -1,   383,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,   457,    -1,
     459,    -1,   461,    -1,    -1,   464,    -1,   466,   467,   468,
     469,    -1,   471,   472,   194,   195,   196,    -1,    -1,    -1,
     479,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,   209,
     210,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,
      -1,    -1,   511,    -1,   513,    -1,    -1,    -1,    -1,    -1,
     519,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,   249,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,   298,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,    -1,
      -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,   318,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   383,    -1,    37,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   423,    76,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,   435,   436,    85,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,   457,    -1,   459,
      -1,   461,    -1,    -1,   464,    -1,   466,   467,   468,   469,
     122,   471,   472,    -1,    -1,    -1,    -1,    -1,    -1,   479,
      -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,
      -1,    -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,
      -1,   511,    -1,   513,    -1,    -1,    -1,    -1,    -1,   519,
      -1,    -1,   174,    -1,    -1,    -1,   178,    -1,    -1,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,   206,   203,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,   221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,   234,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,    -1,   280,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,
     308,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,   194,
     195,   196,   324,    -1,    -1,    -1,    -1,    -1,   203,   327,
     332,    -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,   214,
      -1,    -1,    -1,    -1,    -1,     7,   348,    -1,    10,    -1,
      -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,   360,    -1,
      -1,    -1,    -1,    -1,   362,    -1,   368,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
     255,    -1,    -1,    -1,   259,   383,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     412,    -1,   414,   415,   416,    -1,    -1,    -1,    -1,   417,
      -1,    -1,    -1,    85,    -1,   423,    -1,    -1,    -1,    -1,
      -1,    -1,     7,   308,    -1,    10,    -1,   435,   436,   441,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   115,    -1,    -1,    -1,    -1,   460,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   469,    -1,    -1,    -1,   477,   351,    -1,    -1,    -1,
      -1,   479,    -1,    -1,   486,   487,   488,   485,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,    -1,
      -1,   499,    -1,    -1,    -1,   507,   504,    -1,   383,   507,
      85,   513,    -1,   511,    -1,   513,    -1,    -1,    -1,    -1,
      -1,   519,    97,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,   194,   195,   196,     7,    -1,    -1,    10,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,   230,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,   462,    -1,    -1,
      -1,   253,    -1,   255,   469,    -1,    -1,   259,   473,   261,
     262,   263,    -1,    -1,   479,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,    85,    -1,    -1,    -1,    -1,    -1,   194,
     195,   196,     7,    -1,   499,    10,    -1,    -1,   203,   504,
     102,    -1,    -1,    -1,    -1,    -1,   511,    -1,   513,   214,
      -1,    -1,    -1,   115,   519,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,   351,
      -1,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    97,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   383,   194,   195,   196,     7,    -1,    -1,    10,    -1,
      -1,   203,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,   247,   351,    -1,    -1,    -1,
      -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,    85,    -1,    -1,    -1,   469,   383,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,   479,   203,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      -1,    -1,    -1,    -1,    -1,    -1,   308,   499,    -1,    -1,
      -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,   423,   511,
      -1,   513,    -1,    -1,    -1,   327,    -1,   519,    -1,    -1,
     435,   436,   247,    -1,    -1,    -1,    -1,    -1,   253,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,   351,
      -1,    -1,   267,     7,   269,    -1,    10,    -1,    -1,   274,
      -1,    -1,    -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,    -1,
      -1,   383,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,   308,   499,    -1,    -1,    -1,    -1,   504,
      -1,    -1,   214,    -1,    -1,    -1,   511,    -1,   513,    -1,
      -1,    -1,   327,    -1,   519,    -1,    -1,    -1,    -1,    -1,
      -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,   435,   436,   247,   351,    -1,    -1,    -1,
      -1,   253,    -1,   255,    -1,    -1,    -1,   259,   102,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,    -1,    -1,    -1,    -1,   469,   383,    -1,
      -1,    -1,     7,    -1,    -1,    10,    -1,   479,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,   499,    -1,    -1,
      -1,    -1,   504,    -1,    -1,    -1,    -1,    -1,   423,   511,
      -1,   513,    -1,    -1,   168,   327,    -1,   519,    -1,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      85,    -1,    -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,
     214,    -1,    -1,    -1,   479,    -1,    -1,   102,    -1,    -1,
      -1,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,   504,
      -1,    -1,    -1,   247,    -1,    -1,   511,    -1,   513,   253,
      -1,   255,    -1,    -1,   519,   259,    -1,   261,   262,   263,
      -1,   423,    -1,   267,    -1,   269,     7,    -1,    -1,    10,
     274,    -1,    -1,   435,   436,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,   469,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,    -1,   479,   203,    -1,
      -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,
      -1,    -1,   504,    -1,    85,    -1,    -1,   351,    -1,   511,
      -1,   513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,
      -1,   102,   247,    -1,    -1,    -1,    -1,    -1,   253,     7,
     255,    -1,    10,    -1,   259,    -1,   261,   262,   263,   383,
      -1,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,
      -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,
      -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,   198,    -1,    -1,
      -1,    -1,   203,    -1,   102,   469,   351,    -1,    -1,    -1,
      85,    -1,    -1,   214,    -1,   479,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,   383,    -1,
     504,    -1,    -1,    -1,    -1,    -1,   247,   511,    -1,   513,
      -1,    -1,   253,    -1,   255,   519,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,
      -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,   423,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     435,   436,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,   194,
     195,   196,    -1,    -1,   469,    -1,   327,    -1,   203,    -1,
      -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,    -1,   214,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   493,   247,
     351,    -1,    -1,    -1,   499,   253,    -1,   255,    -1,   504,
      -1,   259,    -1,   261,   262,   263,   511,    -1,   513,   267,
      -1,   269,   247,    -1,   519,    -1,   274,    -1,   253,    -1,
     255,    -1,   383,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,   269,     7,    -1,    -1,    10,   274,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,   423,    -1,    10,    -1,    -1,    -1,    -1,   327,
      -1,    -1,    -1,   308,   435,   436,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,   351,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,
      -1,    -1,    -1,    85,    -1,    -1,   351,    -1,   479,    -1,
      -1,    -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,    85,
      -1,    -1,    -1,   504,    -1,    -1,    -1,    -1,   383,    -1,
     511,    -1,   513,    -1,    -1,    -1,   102,    -1,   519,   417,
      -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,   436,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     435,   436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   479,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,   469,    -1,    -1,    -1,    -1,    -1,
      -1,   499,   214,    -1,   479,    -1,   504,    -1,   194,   195,
     196,    -1,    -1,   511,    -1,   513,    -1,   203,    -1,    -1,
      -1,   519,    -1,    -1,   499,    -1,    -1,    -1,   214,   504,
      -1,    -1,    -1,    -1,    -1,   247,   511,    -1,   513,    -1,
      -1,   253,    -1,   255,   519,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,   247,   274,    -1,    -1,    -1,    -1,   253,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,
      -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,
      -1,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   383,    -1,    37,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    -1,
      -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   435,   436,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,    76,    -1,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,   435,
     436,    -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   469,   122,    -1,    -1,   499,    -1,    -1,
      -1,    -1,   504,   479,    -1,    -1,    -1,    -1,    -1,   511,
      -1,   513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,
      -1,    -1,    -1,   499,    -1,    -1,    -1,    -1,   504,    -1,
      -1,    -1,    -1,    -1,    -1,   511,    -1,   513,    33,    -1,
      -1,    36,    -1,   519,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   181,   182,   183,   184,   185,    -1,    -1,
     188,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   237,
      -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   310,    -1,    -1,    -1,   181,   182,   183,   184,
     185,    -1,    -1,   188,   189,    -1,   324,   192,    -1,    -1,
      -1,    -1,    -1,   198,   332,   200,    -1,   335,    -1,    -1,
      -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,
     348,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,
      -1,    -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,   234,
     368,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,
      40,    41,    42,    43,    44,    45,    85,    -1,    -1,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   412,   280,   414,   415,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   441,    -1,   310,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,   324,
      -1,    -1,   460,    -1,    -1,    -1,    -1,   332,    -1,    -1,
     335,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,   477,
      -1,    -1,    -1,   348,    -1,   350,    -1,    -1,   486,   487,
     488,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,   500,    -1,    -1,   194,   195,   196,    -1,   507,
      -1,   376,   102,    -1,   203,    -1,    -1,    -1,    -1,   384,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,   181,   182,   183,   184,   185,    -1,   402,   188,   189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,   414,
     415,   416,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,   221,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     455,    -1,    -1,    -1,    -1,   460,    -1,    -1,    -1,    -1,
     465,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,    -1,   482,    -1,   308,
      -1,   486,   487,   488,   214,    -1,    -1,    -1,    -1,    -1,
     280,    -1,    -1,    -1,    -1,   500,    -1,    -1,   327,    -1,
      -1,   506,   507,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,   351,   253,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   262,   263,   324,    -1,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,    -1,   335,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,   383,    -1,    -1,    -1,   348,    -1,
      -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   423,    -1,    -1,   327,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,   435,   436,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,   351,    -1,    -1,   414,   415,   416,    -1,   457,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   467,    -1,
     469,    -1,   471,   472,    -1,    -1,    -1,    -1,    -1,    -1,
     479,    -1,    -1,   383,    -1,    -1,    -1,   194,   195,   196,
      -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,
     499,    -1,    -1,    -1,    -1,   504,    -1,   214,    -1,    -1,
      -1,    -1,   511,    -1,   513,    -1,    -1,    -1,    -1,    -1,
     519,    -1,    -1,   423,    -1,    -1,   486,   487,   488,    -1,
      -1,    -1,    -1,    -1,    -1,   435,   436,    -1,    -1,    -1,
     247,   194,   195,   196,    -1,    -1,   253,    -1,   255,    -1,
     203,    -1,   259,    -1,   261,   262,   263,   457,    -1,    -1,
     267,   214,   269,    -1,    -1,    -1,    -1,   467,    -1,   469,
      -1,   471,   472,    85,    -1,    -1,    -1,    -1,    -1,   479,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   499,
     253,   308,   255,    -1,   504,    -1,   259,    -1,   261,   262,
     263,   511,    -1,   513,   267,    -1,   269,    -1,    -1,   519,
     327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   327,    -1,   383,    -1,    -1,    -1,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,   423,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   435,   436,
     383,   102,    -1,    -1,    -1,   247,   443,    -1,    -1,    -1,
      -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    85,    -1,    -1,   267,    -1,   269,    -1,    -1,
     467,    -1,   469,    -1,   471,   472,    -1,    -1,    -1,   102,
     423,    -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,
     443,    -1,   499,    -1,    -1,    -1,   308,   504,    -1,    -1,
      -1,    -1,    -1,    -1,   511,    -1,   513,    -1,    -1,    -1,
      -1,    -1,   519,    -1,   467,   327,   469,    -1,   471,   472,
      -1,    -1,    -1,   194,   195,   196,   479,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,   351,
      -1,    -1,    -1,   214,    -1,    -1,   499,    -1,    -1,    -1,
      -1,   504,    85,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     513,   194,   195,   196,    -1,    -1,   519,    -1,    -1,   102,
     203,   383,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,   214,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   423,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
     253,    -1,   255,   435,   436,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   457,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   467,   327,   469,    -1,   471,
     472,   194,   195,   196,    -1,    -1,    -1,   479,    -1,    -1,
     203,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
     351,   214,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,
      -1,    -1,   504,    -1,   327,    -1,    -1,    -1,    -1,   511,
      -1,   513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,
      -1,    -1,   383,    -1,   247,    -1,    -1,    -1,   351,    -1,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     383,    -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   435,   436,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     423,    -1,    -1,    -1,   327,    -1,   467,    -1,   469,    -1,
     471,   472,   435,   436,    -1,    -1,    -1,    -1,   479,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,
      -1,    -1,    -1,   504,    -1,    -1,   469,    -1,   471,    -1,
     511,    -1,   513,    -1,    -1,    -1,   479,    -1,   519,    -1,
     383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     513,    -1,    -1,    -1,    -1,    -1,   519,    -1,    -1,    -1,
     423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   435,   436,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     513,    -1,    -1,    -1,    -1,    -1,   519
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
     614,   544,   532,   460,   234,   546,  1308,   513,  1227,  1227,
     430,   412,  1327,  1308,  1308,  1308,   401,  1227,   412,   460,
     460,  1308,   460,   460,    60,  1297,   581,     1,   460,   579,
     220,   596,   176,   615,   460,   534,   460,    75,   174,   359,
     465,   547,   548,   587,  1308,  1308,  1308,   513,  1222,  1253,
      71,  1222,   460,  1308,  1308,   558,   569,  1222,   554,   513,
     598,   599,   600,  1228,   259,   312,   314,   582,   584,   585,
    1071,  1256,  1308,   460,   513,   460,   617,   548,   345,  1324,
    1308,   214,   259,   269,   351,   423,   469,   519,   603,   604,
    1259,  1222,   259,   220,   311,  1349,   259,   477,    59,    66,
     271,   345,   403,   408,   513,   559,   560,   561,   562,   563,
     564,   565,   567,  1296,  1359,   201,   570,   571,   572,   555,
     567,   599,    23,   234,  1228,  1309,  1071,   234,   430,  1321,
    1308,    99,  1227,   236,   404,   616,   618,    29,   129,   214,
     259,   269,   283,   351,   423,   426,   427,   519,   588,   589,
     590,   593,   604,   451,   512,   607,  1340,  1253,   407,   408,
     417,    66,  1308,   460,   561,   460,   513,   560,    62,  1308,
      10,   375,   505,   573,   575,     1,   460,   572,   556,  1340,
     259,   601,  1257,  1321,   234,  1227,  1227,   583,   584,   460,
       1,   295,   317,  1282,   277,   394,   653,   654,   655,   656,
     658,   590,    18,   451,  1259,   333,  1308,   408,  1256,   460,
    1308,   513,  1223,   231,    27,   574,   231,   375,   460,   460,
     110,  1257,  1227,   460,   317,  1227,   659,   356,   419,   420,
     657,   538,     1,   460,   655,   591,   593,   259,  1256,   260,
     442,   503,   566,  1223,   259,   275,   619,   463,  1300,    24,
    1291,   105,   663,   460,   592,   593,    60,   514,  1353,   620,
     446,  1333,   191,  1301,   125,   463,   664,    18,     5,    20,
      30,    66,   222,   254,   320,   325,   356,   364,   377,   408,
     411,   419,   460,   463,   621,   622,   628,   630,   632,   633,
     634,   635,   636,   639,   640,   641,   642,   643,   648,   649,
     651,  1325,  1342,    89,  1298,   513,  1212,  1213,   460,   401,
     665,   593,   275,  1314,   356,  1341,   455,   506,  1337,   408,
     409,  1308,  1296,   116,   239,  1310,  1310,   292,   650,  1256,
    1340,   430,   265,    40,  1294,  1308,   660,   661,  1213,  1213,
     460,   175,   398,   539,   666,   667,   669,  1308,  1310,   128,
     174,   625,   356,   364,   640,  1308,  1308,  1308,  1308,  1291,
      10,   292,   354,   652,  1308,  1314,   409,   513,   661,   336,
     662,   515,   694,   696,   697,     1,  1213,   128,   352,   409,
     629,  1308,   120,   121,   122,   240,   254,   340,   352,   446,
     623,   624,   259,  1222,  1226,   426,  1222,  1222,   321,  1322,
    1322,   315,  1222,  1308,  1256,   401,   264,   751,   698,   699,
     701,   711,  1274,   460,   668,  1222,   259,   627,  1253,   627,
       8,   627,   627,   259,   626,  1253,   421,   461,   644,    34,
     170,   270,   637,   460,   401,   258,   753,   460,   699,   460,
       1,   178,   513,   702,   703,   513,   670,   127,   512,   644,
    1276,  1358,  1300,  1308,   645,   646,   512,   638,   638,   695,
     460,   401,   371,   755,   460,   460,   700,    88,    48,    65,
     105,   241,   252,   356,   357,   371,   373,   460,   507,   671,
     672,   674,   678,   679,   682,   683,   689,   690,   691,   692,
    1308,   127,   645,   439,   631,   647,  1222,   647,   265,   391,
     696,   752,   460,   401,   395,   812,   713,   704,  1308,  1298,
    1308,   356,   358,  1354,  1354,  1308,  1298,  1308,  1314,  1308,
      23,  1290,   311,   693,  1227,   174,   206,  1276,   510,   314,
     696,   754,   460,   401,   540,    22,    37,    40,    41,    42,
      43,    44,    45,    46,    76,    78,    79,    80,    81,    82,
      83,    84,   122,   181,   182,   183,   184,   185,   188,   189,
     221,   237,   280,   310,   324,   332,   335,   348,   360,   368,
     412,   414,   415,   416,   441,   486,   487,   488,   500,   507,
     714,   715,   716,   718,   719,   720,   721,   722,   723,   724,
     727,   739,   740,   742,   743,   744,   749,   750,  1308,  1329,
      27,   198,   712,  1292,   206,  1256,   513,  1309,  1309,   513,
    1224,  1225,   313,   425,  1350,  1226,  1256,   508,  1308,   177,
     215,   513,   680,  1227,   631,    10,   423,   519,   594,   277,
     356,   358,  1352,   696,   756,   460,   342,   826,   829,   246,
     306,   413,   485,  1328,   485,  1328,   485,  1328,   485,  1328,
     485,  1328,   510,  1338,   390,  1326,   128,  1256,  1250,  1253,
    1253,   234,   244,   390,   741,  1308,  1309,   174,   206,   243,
     477,   513,    10,    51,   214,   246,   247,   259,   269,   351,
     423,   469,   519,   705,  1260,  1261,  1262,   455,   677,  1225,
     257,  1313,   455,  1297,   220,  1303,   513,  1308,  1308,  1260,
    1352,   757,   813,   125,   852,   853,   519,    54,   731,   455,
     728,   471,  1254,  1255,   451,   721,   746,   747,  1260,    27,
     717,   407,  1286,  1286,  1262,   311,  1318,     1,    41,    42,
      43,    44,    45,   181,   182,   183,   184,   185,   186,   187,
     335,   348,   706,   707,   708,   709,   710,   722,   723,  1250,
     706,   456,  1256,    60,   358,   673,   684,  1256,   417,  1330,
     259,   681,  1253,   681,   353,   758,   701,   711,   814,   815,
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
    1118,  1120,  1123,  1126,  1130,  1157,   854,  1303,   198,   729,
    1256,   454,  1335,    85,   102,   194,   195,   196,   203,   247,
     253,   255,   261,   262,   263,   267,   308,   327,   383,   435,
     436,   467,   471,   472,   479,   499,   504,   511,  1199,  1201,
    1202,  1203,  1204,  1205,  1206,  1235,  1249,  1250,  1261,  1263,
    1264,  1265,  1266,   471,  1255,  1253,   745,   747,   451,   259,
    1296,   706,   460,  1262,    49,   474,   685,   686,   687,   688,
    1340,  1297,   198,   676,  1302,   513,  1214,     1,   702,   816,
     460,   832,   831,   382,   838,     4,     6,    11,    19,    52,
      53,    63,    74,    77,    91,   114,   122,   124,   131,   133,
     134,   135,   136,   137,   138,   139,   140,   142,   143,   144,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     166,   171,   197,   204,   207,   208,   217,   224,   226,   229,
     272,   276,   278,   289,   316,   329,   354,   365,   381,   387,
     391,   399,   410,   419,   428,   433,   434,   437,   439,   447,
     460,   478,   484,   489,   516,  1287,   856,   872,   877,   881,
     886,   901,   904,   908,   914,   919,   933,   937,   940,   954,
     958,   961,   964,   205,   382,   895,   956,   969,   973,   983,
     986,  1003,  1005,  1008,   406,  1012,  1018,  1030,  1046,  1050,
    1054,  1061,  1069,  1084,  1094,   259,   351,   393,   423,   519,
    1106,  1108,  1115,   341,  1119,  1121,   841,  1124,  1127,  1131,
    1158,   513,  1256,   728,   117,   730,   471,   471,   471,  1268,
    1250,  1261,  1263,  1349,  1349,   471,   471,   471,   471,  1349,
    1205,  1201,  1205,   471,  1268,    73,   405,   457,  1200,   458,
     467,   472,   459,   468,   172,   471,  1267,   471,   471,  1201,
     510,   748,  1339,  1260,  1226,  1226,   190,   677,  1256,   759,
     460,   817,   460,    50,   833,   834,   835,  1295,   833,   513,
     460,   313,   857,   858,  1249,     7,    97,   247,   274,   873,
    1206,  1231,  1232,  1249,  1260,  1263,   878,  1201,  1249,   259,
     882,   883,  1218,  1219,  1220,  1253,   274,   429,   431,   887,
     888,   259,   902,  1240,  1249,   905,  1213,     7,   909,  1206,
    1207,  1208,  1230,  1251,  1252,  1253,  1261,   463,   915,  1213,
     259,   920,   921,   923,  1231,  1232,  1240,  1249,   934,  1232,
     259,   938,   462,   473,   941,   942,   943,  1189,  1190,  1191,
     201,   328,   329,   345,   401,   955,   959,  1229,  1230,   962,
    1253,   455,   965,  1336,  1232,  1188,  1189,   974,  1229,   984,
    1214,   987,   988,  1249,  1260,  1263,  1085,  1247,  1248,  1253,
      97,  1006,  1232,  1009,  1232,   173,   227,   235,   322,  1013,
    1014,   193,   259,  1019,  1023,  1024,  1025,  1218,  1241,  1249,
    1253,  1263,  1340,  1031,  1213,  1047,  1209,  1253,  1051,  1213,
     463,  1055,  1209,  1210,    10,  1062,  1211,  1253,   156,   274,
    1070,  1073,  1074,  1077,  1078,  1079,  1080,  1081,  1082,  1215,
    1216,  1229,  1246,  1248,  1253,  1085,  1095,  1213,  1103,   115,
    1109,  1110,  1111,  1232,    97,  1116,  1231,  1122,  1214,   460,
     513,   842,   843,   846,   847,   852,  1125,  1249,  1128,  1213,
     259,  1132,  1241,  1159,  1210,   225,   732,   314,  1319,   733,
     734,  1199,  1201,  1272,  1199,  1273,   457,  1199,   513,   513,
    1201,  1271,  1271,  1271,  1234,  1249,  1261,  1263,  1270,   513,
     457,  1234,  1269,  1201,   457,  1201,  1202,  1202,  1203,  1203,
    1203,  1201,  1234,  1199,   410,   462,    31,  1293,  1297,     1,
     760,   818,   834,   417,   485,   836,   362,   507,   827,   133,
     870,    31,   860,   861,  1293,   198,  1318,  1249,  1250,  1261,
    1263,   134,   875,   455,   874,  1232,    60,   225,  1277,   883,
     455,  1349,   135,   899,  1241,  1240,  1213,   361,   483,   906,
    1340,  1355,  1318,   136,   910,   162,   461,  1208,  1346,   392,
    1283,  1254,  1255,   916,  1213,   137,   917,  1325,   138,   931,
     168,   922,  1168,  1169,   493,   924,   512,   861,   494,   495,
     496,   497,   139,   935,    50,   230,   506,   889,   140,   952,
      18,   510,   944,   945,   946,   948,    13,    14,    15,    21,
     162,   172,   209,   210,   248,   249,   287,   295,   298,   306,
     313,   318,   337,   457,   459,   461,   464,   466,   467,   468,
     471,   472,  1192,  1193,  1194,  1195,  1196,  1197,  1198,  1232,
     104,   956,  1230,  1217,   450,  1334,   975,  1340,  1214,    95,
     370,   445,   989,   990,   992,   993,  1087,   471,  1254,  1232,
     455,   143,  1010,    50,  1014,   411,  1015,  1024,   144,   460,
    1020,  1022,   490,   508,   451,   454,   448,   146,  1043,   289,
     339,  1280,   198,  1160,   147,  1052,  1325,   513,   148,  1058,
    1160,  1211,   149,  1067,   508,  1063,  1238,  1249,  1261,  1080,
    1082,  1229,   455,  1216,   126,   455,   491,  1072,    32,  1254,
     150,  1101,   180,   239,   242,  1097,   895,  1104,  1340,  1295,
     151,  1113,   230,  1111,  1249,   152,  1117,   198,  1214,   401,
     460,   460,   198,   356,   358,  1129,   153,  1141,   115,  1133,
     154,  1164,  1160,   733,  1222,   222,   736,    28,   118,   735,
    1200,   457,  1200,   457,   457,  1200,   457,   457,   457,  1200,
     457,  1200,   457,   457,   458,   457,   457,   455,  1308,  1226,
     117,   675,   460,    64,    92,    93,   326,   460,   761,   762,
     767,  1308,  1367,    33,    36,    39,    46,    47,    67,    69,
     163,   192,   198,   200,   213,   245,   254,   268,   310,   323,
     350,   376,   384,   402,   455,   465,   482,   506,   719,   720,
     724,   739,   742,   744,   819,   824,   825,  1308,  1343,  1308,
     417,   317,   837,   112,   839,  1238,   199,   864,   254,   336,
     862,   863,  1343,    25,    26,    68,    70,    72,   106,   107,
     108,   156,   158,   165,   168,   254,   257,   452,   502,   513,
     859,  1216,  1344,   155,   345,  1236,  1250,   455,     7,  1206,
    1207,  1232,  1253,  1261,   205,   225,  1278,   382,   879,   344,
     884,  1220,   889,   906,   265,   292,  1301,  1250,  1201,   275,
    1284,  1255,  1213,   380,  1036,  1037,  1038,   849,   850,   923,
    1232,   299,  1170,    99,   340,   513,  1216,   303,   928,    36,
      39,    46,    47,    94,   163,   192,   213,   268,   323,   384,
     397,   482,   929,   930,   493,   925,  1168,  1168,  1168,  1168,
    1232,  1207,  1232,   890,   943,    22,   462,   473,   949,   950,
    1190,   510,   946,   947,   510,   849,  1336,   234,  1193,   117,
     966,  1218,   131,   849,   970,    10,    13,    16,    17,   280,
     281,   306,   307,   976,   980,   178,  1238,    10,    60,   180,
     243,   477,   996,   997,   998,   991,   992,  1089,  1319,  1358,
     455,  1229,  1207,  1232,  1015,  1340,  1036,   849,   171,  1026,
    1188,  1027,  1028,  1249,  1218,     9,    38,  1162,  1325,  1245,
    1249,  1260,  1263,   230,  1032,  1036,   132,  1064,  1249,  1064,
     455,   455,  1071,   155,   462,   473,  1232,    50,    39,    47,
     213,   245,   268,   323,   384,   482,  1075,  1076,  1308,  1096,
    1340,  1232,   164,   294,   417,  1232,  1249,   198,  1207,  1232,
     848,  1256,  1238,  1295,   230,  1136,  1161,  1162,   736,  1295,
    1310,   443,  1267,   443,  1267,  1222,  1267,  1267,  1267,  1234,
     243,   477,  1267,   457,  1201,  1267,  1267,  1260,  1319,  1308,
    1309,  1309,   250,   251,  1312,   777,   206,   179,   763,   764,
     765,   766,  1249,  1308,   254,   395,   159,   161,  1308,  1245,
     304,  1316,  1256,    59,  1249,  1249,   206,  1316,    33,   113,
    1256,  1308,   513,   460,   828,   275,   865,  1316,  1316,   863,
     862,  1316,   168,  1165,  1166,   518,   517,  1238,  1165,   239,
     430,   304,   279,   259,  1237,  1250,  1249,  1318,   418,  1171,
    1172,  1254,  1255,  1207,   455,  1279,   879,  1230,   455,  1218,
     894,   895,   386,   367,  1171,  1308,   193,  1301,   233,  1184,
    1185,   851,   849,  1168,  1308,   254,   395,   159,   161,  1308,
     126,   491,   930,  1168,    99,   100,   926,   865,   205,  1171,
     205,   891,   892,   893,  1295,    18,   451,   951,   321,   949,
    1319,   849,   131,   142,   971,  1336,   370,   977,  1336,   455,
      50,   997,   999,  1238,    10,    60,   243,   477,   994,   995,
    1238,  1090,  1342,   735,   220,   319,  1304,  1229,  1171,   205,
    1036,   652,  1212,   144,  1021,     9,   198,  1032,  1249,   132,
    1177,  1179,  1056,  1057,  1340,   849,   510,   510,  1065,  1066,
    1238,  1237,  1232,  1071,  1071,  1071,  1071,  1071,  1071,  1071,
    1071,  1076,   295,   298,  1098,  1099,  1100,  1194,  1281,  1184,
     246,   417,  1357,   430,  1332,  1332,  1112,  1340,  1249,  1171,
     205,   460,   455,    10,  1134,  1135,  1275,  1137,  1249,  1112,
    1137,  1036,     8,  1288,   513,   737,   738,  1308,   457,  1222,
    1240,  1309,  1309,   259,   519,   768,   769,  1249,  1258,   701,
     778,   765,   766,   519,  1242,  1246,  1256,  1242,  1308,  1335,
    1308,  1308,    33,  1256,   840,   841,  1308,   512,   866,  1242,
    1242,  1242,   849,   299,  1167,  1165,  1283,  1250,   849,   302,
    1173,  1255,  1171,  1239,  1249,  1260,   168,   470,   897,  1348,
       7,   230,   313,   469,   896,  1307,    35,   284,   285,   286,
     349,   475,   476,   480,  1285,  1201,   849,   300,  1186,   852,
    1242,  1242,  1187,  1244,  1246,  1256,  1187,   512,   927,  1207,
    1208,  1207,  1208,   892,   313,   836,    90,   362,   507,   950,
    1189,   849,  1249,   849,   507,   978,   979,   980,   981,  1334,
     507,  1239,  1238,    50,  1000,   995,   191,  1000,  1086,  1308,
    1310,   319,  1207,  1212,   385,  1016,  1340,  1028,  1232,     8,
     219,  1033,  1034,  1035,  1037,  1040,  1057,  1340,   849,   296,
    1180,  1184,   265,   292,  1189,  1188,  1065,  1194,  1249,  1195,
    1196,  1197,  1198,  1201,  1105,  1232,  1105,   470,  1174,  1175,
     335,  1283,  1207,   844,  1239,   318,  1238,   116,  1138,   445,
    1140,  1056,   326,  1216,  1242,   738,  1221,  1222,   770,   254,
     257,  1351,   513,   702,   273,   334,   467,   472,   820,   821,
     822,  1240,   820,   821,   823,   841,    48,    33,    36,    39,
      47,    94,   113,   192,   200,   213,   245,   266,   268,   292,
     293,   323,   350,   376,   384,   397,   402,   444,   453,   482,
     492,   498,   867,   868,   869,  1165,   849,  1171,   849,   299,
     898,   849,  1318,  1249,   400,   454,   849,   254,   257,  1356,
     929,  1171,   366,  1171,   366,  1232,   979,   105,  1299,  1336,
    1000,  1000,  1239,     9,    38,  1001,   227,   506,  1091,  1222,
    1088,  1171,  1016,   265,   292,    50,  1319,   265,   239,  1041,
    1039,  1040,  1340,   218,   238,   509,   849,   265,   849,   849,
     849,   301,  1176,  1308,  1171,  1171,   501,   845,  1142,  1135,
    1303,    98,  1139,  1303,  1174,   160,   297,  1163,  1181,  1182,
    1183,  1184,   254,   257,  1311,  1222,   180,   190,   212,   242,
     256,   771,   772,   773,   774,   775,   776,   769,   779,  1242,
    1242,   132,  1308,  1308,   869,    59,   126,   491,     9,  1289,
     868,   849,  1249,  1208,  1208,    50,   113,  1000,   465,  1306,
    1306,   342,  1212,   205,   322,  1092,  1253,   386,  1232,   265,
    1308,  1042,  1178,  1179,  1180,  1184,   265,   265,   849,  1249,
    1143,   460,  1249,  1303,  1249,   849,   849,  1183,   109,   119,
    1360,  1308,  1308,    57,    92,  1360,  1361,  1308,  1344,   780,
     112,  1242,  1242,  1308,  1187,  1187,  1243,  1246,  1258,  1171,
    1171,  1232,  1232,  1232,  1308,  1212,   342,   490,  1249,  1180,
     130,   169,   206,  1144,  1145,  1146,  1148,  1152,  1154,  1155,
    1156,  1293,  1301,  1249,  1308,   769,   769,   212,  1308,  1308,
     769,     3,   211,   254,   290,   310,   338,   421,   438,   460,
     481,   500,   508,   719,   724,   725,   739,   742,   744,   781,
     782,   786,   788,   791,   792,   795,   796,   797,   802,   803,
     809,   810,   811,  1343,  1344,  1345,   460,  1240,  1023,  1308,
    1188,    38,  1289,   345,   110,   769,   769,   769,   223,  1305,
     304,   800,  1308,  1256,  1308,  1318,  1308,  1308,  1249,     9,
      38,   237,   510,   334,   472,   798,   799,   801,  1258,  1319,
     806,   807,   808,   820,  1258,   304,   305,  1317,  1023,   372,
     425,  1331,   132,   428,  1153,  1319,   234,   291,   334,   472,
     787,  1256,   728,  1235,  1233,  1235,    56,    92,   326,   330,
     331,   371,   388,   389,   783,  1360,  1361,  1362,  1363,  1364,
    1365,  1366,   122,   198,   288,  1315,  1315,     9,    38,  1188,
    1258,  1258,   798,   291,   807,  1258,    55,   244,   390,   804,
     805,  1249,   164,   168,  1347,    10,  1149,  1150,  1219,  1256,
    1256,  1335,  1283,   378,   493,   789,  1235,   190,   190,   212,
     190,   212,   191,   314,  1320,  1320,  1235,   318,   326,   793,
     794,  1249,   793,  1315,  1315,  1309,   342,  1323,   311,   343,
     363,  1151,  1150,   730,  1319,  1249,   179,   784,  1249,    10,
     179,   785,  1249,    50,   793,   326,   326,  1319,   311,  1253,
     432,   726,   179,   790,  1249,   318,  1235,   173,   227,   235,
     322,  1147,  1212,  1256,   326
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

  case 1542:
/* Line 1792 of yacc.c  */
#line 10279 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(2) - (2)])))) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		cb_error_x ((yyvsp[(2) - (2)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(2) - (2)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1543:
/* Line 1792 of yacc.c  */
#line 10293 "parser.y"
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

  case 1544:
/* Line 1792 of yacc.c  */
#line 10313 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1545:
/* Line 1792 of yacc.c  */
#line 10317 "parser.y"
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

  case 1546:
/* Line 1792 of yacc.c  */
#line 10338 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10379 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1548:
/* Line 1792 of yacc.c  */
#line 10392 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1549:
/* Line 1792 of yacc.c  */
#line 10394 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1550:
/* Line 1792 of yacc.c  */
#line 10398 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1551:
/* Line 1792 of yacc.c  */
#line 10404 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1552:
/* Line 1792 of yacc.c  */
#line 10406 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1553:
/* Line 1792 of yacc.c  */
#line 10411 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1556:
/* Line 1792 of yacc.c  */
#line 10425 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1557:
/* Line 1792 of yacc.c  */
#line 10432 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1558:
/* Line 1792 of yacc.c  */
#line 10442 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1559:
/* Line 1792 of yacc.c  */
#line 10443 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1560:
/* Line 1792 of yacc.c  */
#line 10448 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1561:
/* Line 1792 of yacc.c  */
#line 10456 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1562:
/* Line 1792 of yacc.c  */
#line 10464 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1563:
/* Line 1792 of yacc.c  */
#line 10468 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1564:
/* Line 1792 of yacc.c  */
#line 10475 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1567:
/* Line 1792 of yacc.c  */
#line 10491 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1568:
/* Line 1792 of yacc.c  */
#line 10505 "parser.y"
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

  case 1569:
/* Line 1792 of yacc.c  */
#line 10522 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1570:
/* Line 1792 of yacc.c  */
#line 10526 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1573:
/* Line 1792 of yacc.c  */
#line 10535 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1574:
/* Line 1792 of yacc.c  */
#line 10542 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1575:
/* Line 1792 of yacc.c  */
#line 10546 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1580:
/* Line 1792 of yacc.c  */
#line 10557 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1581:
/* Line 1792 of yacc.c  */
#line 10561 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1582:
/* Line 1792 of yacc.c  */
#line 10565 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1583:
/* Line 1792 of yacc.c  */
#line 10569 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1584:
/* Line 1792 of yacc.c  */
#line 10573 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1585:
/* Line 1792 of yacc.c  */
#line 10577 "parser.y"
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

  case 1586:
/* Line 1792 of yacc.c  */
#line 10598 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1587:
/* Line 1792 of yacc.c  */
#line 10602 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1595:
/* Line 1792 of yacc.c  */
#line 10619 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1596:
/* Line 1792 of yacc.c  */
#line 10623 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1597:
/* Line 1792 of yacc.c  */
#line 10627 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1613:
/* Line 1792 of yacc.c  */
#line 10674 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1621:
/* Line 1792 of yacc.c  */
#line 10698 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 10702 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1623:
/* Line 1792 of yacc.c  */
#line 10706 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1624:
/* Line 1792 of yacc.c  */
#line 10707 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 10711 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1626:
/* Line 1792 of yacc.c  */
#line 10716 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1627:
/* Line 1792 of yacc.c  */
#line 10723 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1628:
/* Line 1792 of yacc.c  */
#line 10730 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1629:
/* Line 1792 of yacc.c  */
#line 10737 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1630:
/* Line 1792 of yacc.c  */
#line 10747 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1631:
/* Line 1792 of yacc.c  */
#line 10751 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1632:
/* Line 1792 of yacc.c  */
#line 10758 "parser.y"
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

  case 1633:
/* Line 1792 of yacc.c  */
#line 10768 "parser.y"
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

  case 1634:
/* Line 1792 of yacc.c  */
#line 10778 "parser.y"
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

  case 1635:
/* Line 1792 of yacc.c  */
#line 10788 "parser.y"
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

  case 1636:
/* Line 1792 of yacc.c  */
#line 10801 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1637:
/* Line 1792 of yacc.c  */
#line 10805 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1638:
/* Line 1792 of yacc.c  */
#line 10813 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1639:
/* Line 1792 of yacc.c  */
#line 10821 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1640:
/* Line 1792 of yacc.c  */
#line 10825 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1641:
/* Line 1792 of yacc.c  */
#line 10835 "parser.y"
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

  case 1642:
/* Line 1792 of yacc.c  */
#line 10850 "parser.y"
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

  case 1643:
/* Line 1792 of yacc.c  */
#line 10873 "parser.y"
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

  case 1644:
/* Line 1792 of yacc.c  */
#line 10893 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 10900 "parser.y"
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

  case 1646:
/* Line 1792 of yacc.c  */
#line 10915 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1647:
/* Line 1792 of yacc.c  */
#line 10916 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1648:
/* Line 1792 of yacc.c  */
#line 10917 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 10918 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1650:
/* Line 1792 of yacc.c  */
#line 10919 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1651:
/* Line 1792 of yacc.c  */
#line 10920 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1652:
/* Line 1792 of yacc.c  */
#line 10925 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 10929 "parser.y"
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

  case 1654:
/* Line 1792 of yacc.c  */
#line 10946 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1655:
/* Line 1792 of yacc.c  */
#line 10950 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1656:
/* Line 1792 of yacc.c  */
#line 10956 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1657:
/* Line 1792 of yacc.c  */
#line 10957 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1658:
/* Line 1792 of yacc.c  */
#line 10958 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1659:
/* Line 1792 of yacc.c  */
#line 10959 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1660:
/* Line 1792 of yacc.c  */
#line 10960 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1661:
/* Line 1792 of yacc.c  */
#line 10961 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1662:
/* Line 1792 of yacc.c  */
#line 10962 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1663:
/* Line 1792 of yacc.c  */
#line 10969 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1664:
/* Line 1792 of yacc.c  */
#line 10973 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1665:
/* Line 1792 of yacc.c  */
#line 10977 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1666:
/* Line 1792 of yacc.c  */
#line 10981 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1667:
/* Line 1792 of yacc.c  */
#line 10985 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 10989 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 10993 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 10997 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 11001 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 11005 "parser.y"
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1673:
/* Line 1792 of yacc.c  */
#line 11009 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1674:
/* Line 1792 of yacc.c  */
#line 11013 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 11038 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1685:
/* Line 1792 of yacc.c  */
#line 11042 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 11046 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1687:
/* Line 1792 of yacc.c  */
#line 11053 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 11057 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 11061 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1690:
/* Line 1792 of yacc.c  */
#line 11068 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 11075 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 11082 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1693:
/* Line 1792 of yacc.c  */
#line 11092 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 11099 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1695:
/* Line 1792 of yacc.c  */
#line 11109 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1696:
/* Line 1792 of yacc.c  */
#line 11116 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1697:
/* Line 1792 of yacc.c  */
#line 11126 "parser.y"
    {	  
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1698:
/* Line 1792 of yacc.c  */
#line 11130 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[(1) - (3)]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1699:
/* Line 1792 of yacc.c  */
#line 11143 "parser.y"
    {	  
	(yyval) = cb_list_add ((yyvsp[(1) - (1)]), cb_int0);
  }
    break;

  case 1700:
/* Line 1792 of yacc.c  */
#line 11147 "parser.y"
    {
	const int	num_args = cb_list_length ((yyvsp[(1) - (3)]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[(1) - (3)]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), cb_int1);
  }
    break;

  case 1701:
/* Line 1792 of yacc.c  */
#line 11161 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1702:
/* Line 1792 of yacc.c  */
#line 11169 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1703:
/* Line 1792 of yacc.c  */
#line 11170 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1704:
/* Line 1792 of yacc.c  */
#line 11174 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1705:
/* Line 1792 of yacc.c  */
#line 11175 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1706:
/* Line 1792 of yacc.c  */
#line 11179 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1707:
/* Line 1792 of yacc.c  */
#line 11180 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1708:
/* Line 1792 of yacc.c  */
#line 11185 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1709:
/* Line 1792 of yacc.c  */
#line 11189 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1710:
/* Line 1792 of yacc.c  */
#line 11196 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1711:
/* Line 1792 of yacc.c  */
#line 11200 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1712:
/* Line 1792 of yacc.c  */
#line 11207 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1713:
/* Line 1792 of yacc.c  */
#line 11208 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1714:
/* Line 1792 of yacc.c  */
#line 11209 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1715:
/* Line 1792 of yacc.c  */
#line 11213 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1716:
/* Line 1792 of yacc.c  */
#line 11214 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1717:
/* Line 1792 of yacc.c  */
#line 11218 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1718:
/* Line 1792 of yacc.c  */
#line 11219 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1719:
/* Line 1792 of yacc.c  */
#line 11220 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1720:
/* Line 1792 of yacc.c  */
#line 11225 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1721:
/* Line 1792 of yacc.c  */
#line 11229 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1722:
/* Line 1792 of yacc.c  */
#line 11241 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1723:
/* Line 1792 of yacc.c  */
#line 11246 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1724:
/* Line 1792 of yacc.c  */
#line 11254 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1725:
/* Line 1792 of yacc.c  */
#line 11258 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1726:
/* Line 1792 of yacc.c  */
#line 11262 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1727:
/* Line 1792 of yacc.c  */
#line 11266 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1728:
/* Line 1792 of yacc.c  */
#line 11270 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1729:
/* Line 1792 of yacc.c  */
#line 11274 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1730:
/* Line 1792 of yacc.c  */
#line 11278 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1731:
/* Line 1792 of yacc.c  */
#line 11282 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1732:
/* Line 1792 of yacc.c  */
#line 11288 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1733:
/* Line 1792 of yacc.c  */
#line 11289 "parser.y"
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
#line 11462 "parser.y"

