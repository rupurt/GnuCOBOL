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
check_repeated (const char *clause, const unsigned int bitval)
{
	if (check_duplicate & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		check_duplicate |= bitval;
	}
}

static void
check_pic_repeated (const char *clause, const unsigned int bitval)
{
	if (check_pic_duplicate & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		check_pic_duplicate |= bitval;
	}
}

static void
check_comp_repeated (const char *clause, const unsigned int bitval)
{
	if (check_comp_duplicate & bitval) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("Duplicate %s clause"), clause);
		} else {
			cb_error (_("Duplicate %s clause"), clause);
		}
	} else {
		check_comp_duplicate |= bitval;
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
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
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


#line 791 "parser.c" /* yacc.c:339  */

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

#line 1362 "parser.c" /* yacc.c:358  */

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
#define YYLAST   9256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  519
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  837
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1958
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  2799

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
       0,  1376,  1376,  1376,  1408,  1409,  1413,  1414,  1418,  1419,
    1423,  1423,  1446,  1453,  1460,  1466,  1467,  1468,  1472,  1473,
    1477,  1501,  1502,  1506,  1540,  1546,  1558,  1532,  1568,  1567,
    1605,  1637,  1638,  1642,  1643,  1646,  1647,  1651,  1660,  1669,
    1670,  1674,  1678,  1687,  1688,  1696,  1697,  1707,  1708,  1712,
    1713,  1714,  1715,  1716,  1723,  1722,  1735,  1736,  1739,  1740,
    1754,  1753,  1763,  1764,  1765,  1766,  1770,  1771,  1775,  1776,
    1777,  1778,  1782,  1789,  1796,  1803,  1814,  1818,  1822,  1826,
    1833,  1834,  1841,  1840,  1851,  1852,  1853,  1860,  1861,  1865,
    1869,  1881,  1885,  1886,  1891,  1894,  1901,  1906,  1917,  1930,
    1931,  1939,  1940,  1944,  1945,  1946,  1947,  1948,  1949,  1950,
    1951,  1952,  1953,  1954,  1955,  1963,  1962,  1990,  2000,  2013,
    2021,  2024,  2025,  2029,  2044,  2065,  2064,  2088,  2094,  2100,
    2106,  2112,  2118,  2128,  2132,  2139,  2143,  2148,  2147,  2158,
    2162,  2169,  2170,  2171,  2172,  2173,  2174,  2178,  2179,  2186,
    2201,  2204,  2211,  2219,  2223,  2234,  2254,  2262,  2273,  2274,
    2280,  2301,  2302,  2306,  2310,  2331,  2354,  2436,  2439,  2448,
    2467,  2483,  2501,  2519,  2536,  2552,  2553,  2560,  2561,  2569,
    2570,  2580,  2581,  2586,  2585,  2606,  2616,  2617,  2621,  2622,
    2623,  2624,  2625,  2626,  2627,  2628,  2629,  2630,  2631,  2632,
    2633,  2640,  2646,  2656,  2669,  2682,  2698,  2699,  2700,  2701,
    2704,  2705,  2711,  2712,  2716,  2720,  2721,  2726,  2729,  2730,
    2737,  2745,  2746,  2747,  2754,  2783,  2821,  2823,  2828,  2838,
    2849,  2856,  2858,  2859,  2865,  2865,  2872,  2877,  2882,  2889,
    2890,  2891,  2895,  2906,  2907,  2911,  2916,  2921,  2926,  2937,
    2948,  2958,  2963,  2984,  2985,  2989,  2989,  2993,  2998,  3016,
    3027,  3034,  3035,  3041,  3049,  3050,  3051,  3057,  3058,  3059,
    3066,  3067,  3071,  3072,  3078,  3106,  3107,  3108,  3109,  3116,
    3115,  3131,  3132,  3136,  3139,  3140,  3146,  3147,  3155,  3156,
    3164,  3165,  3169,  3189,  3188,  3205,  3212,  3216,  3222,  3223,
    3227,  3237,  3252,  3253,  3254,  3255,  3256,  3257,  3258,  3259,
    3260,  3267,  3274,  3274,  3274,  3280,  3300,  3334,  3365,  3366,
    3373,  3374,  3378,  3379,  3386,  3397,  3402,  3413,  3414,  3418,
    3419,  3425,  3436,  3454,  3455,  3459,  3460,  3461,  3465,  3472,
    3479,  3488,  3500,  3552,  3567,  3568,  3572,  3584,  3626,  3628,
    3627,  3643,  3646,  3646,  3664,  3665,  3667,  3671,  3673,  3672,
    3707,  3720,  3728,  3733,  3739,  3748,  3758,  3761,  3773,  3774,
    3775,  3776,  3780,  3784,  3788,  3792,  3796,  3800,  3804,  3808,
    3812,  3816,  3820,  3824,  3828,  3839,  3840,  3844,  3845,  3849,
    3850,  3851,  3855,  3856,  3860,  3886,  3890,  3899,  3903,  3912,
    3913,  3914,  3915,  3916,  3917,  3918,  3919,  3920,  3921,  3922,
    3923,  3924,  3925,  3932,  3956,  3984,  3987,  3996,  4021,  4032,
    4033,  4037,  4041,  4045,  4049,  4053,  4057,  4061,  4065,  4069,
    4073,  4077,  4081,  4085,  4090,  4095,  4099,  4103,  4111,  4115,
    4119,  4127,  4131,  4135,  4139,  4143,  4147,  4151,  4155,  4159,
    4167,  4175,  4179,  4183,  4187,  4191,  4195,  4203,  4204,  4208,
    4209,  4215,  4221,  4233,  4251,  4252,  4261,  4282,  4303,  4304,
    4308,  4309,  4312,  4313,  4319,  4320,  4327,  4328,  4335,  4359,
    4360,  4377,  4378,  4381,  4382,  4389,  4390,  4395,  4406,  4417,
    4424,  4426,  4427,  4439,  4450,  4479,  4478,  4487,  4488,  4492,
    4493,  4496,  4497,  4510,  4523,  4544,  4553,  4567,  4569,  4568,
    4588,  4590,  4589,  4605,  4607,  4606,  4617,  4618,  4625,  4624,
    4653,  4654,  4655,  4662,  4668,  4672,  4673,  4679,  4686,  4687,
    4688,  4692,  4699,  4700,  4704,  4714,  4754,  4764,  4774,  4793,
    4794,  4797,  4798,  4803,  4804,  4805,  4806,  4807,  4808,  4820,
    4831,  4842,  4853,  4864,  4874,  4875,  4880,  4879,  4900,  4901,
    4905,  4906,  4907,  4908,  4909,  4910,  4911,  4912,  4913,  4914,
    4915,  4916,  4917,  4918,  4919,  4920,  4924,  4931,  4935,  4939,
    4940,  4941,  4948,  4952,  4959,  4962,  4967,  4973,  4980,  4983,
    4988,  4992,  5000,  5007,  5016,  5021,  5026,  5039,  5047,  5048,
    5049,  5056,  5060,  5067,  5072,  5078,  5085,  5091,  5101,  5105,
    5112,  5113,  5117,  5121,  5125,  5129,  5133,  5141,  5144,  5145,
    5149,  5155,  5159,  5174,  5191,  5192,  5193,  5197,  5223,  5238,
    5241,  5243,  5247,  5251,  5255,  5262,  5282,  5286,  5287,  5291,
    5323,  5331,  5339,  5347,  5349,  5348,  5369,  5370,  5374,  5375,
    5380,  5382,  5381,  5438,  5456,  5457,  5461,  5465,  5469,  5473,
    5477,  5481,  5485,  5489,  5493,  5497,  5501,  5505,  5509,  5513,
    5517,  5521,  5525,  5530,  5534,  5538,  5543,  5548,  5553,  5558,
    5559,  5560,  5561,  5562,  5563,  5564,  5565,  5566,  5573,  5578,
    5587,  5588,  5592,  5593,  5598,  5601,  5605,  5613,  5616,  5620,
    5628,  5639,  5647,  5649,  5659,  5648,  5686,  5686,  5719,  5723,
    5722,  5736,  5735,  5755,  5756,  5761,  5768,  5770,  5774,  5784,
    5786,  5794,  5802,  5810,  5839,  5870,  5872,  5882,  5887,  5914,
    5916,  5915,  5952,  5953,  5957,  5958,  5959,  5976,  5977,  5988,
    5987,  6037,  6038,  6042,  6090,  6103,  6106,  6125,  6130,  6124,
    6143,  6143,  6173,  6180,  6181,  6182,  6183,  6184,  6185,  6186,
    6187,  6188,  6189,  6190,  6191,  6192,  6193,  6194,  6195,  6196,
    6197,  6198,  6199,  6200,  6201,  6202,  6203,  6204,  6205,  6206,
    6207,  6208,  6209,  6210,  6211,  6212,  6213,  6214,  6215,  6216,
    6217,  6218,  6219,  6220,  6221,  6222,  6223,  6224,  6225,  6226,
    6227,  6228,  6229,  6243,  6255,  6254,  6270,  6276,  6280,  6284,
    6289,  6294,  6299,  6304,  6308,  6312,  6316,  6320,  6325,  6329,
    6333,  6337,  6341,  6345,  6349,  6356,  6357,  6364,  6365,  6369,
    6370,  6374,  6375,  6376,  6377,  6378,  6382,  6386,  6387,  6390,
    6391,  6394,  6395,  6401,  6402,  6406,  6407,  6411,  6415,  6421,
    6425,  6429,  6433,  6437,  6441,  6445,  6449,  6453,  6457,  6461,
    6465,  6469,  6473,  6477,  6481,  6485,  6491,  6495,  6499,  6503,
    6507,  6511,  6515,  6522,  6523,  6527,  6531,  6549,  6548,  6557,
    6561,  6565,  6571,  6572,  6579,  6583,  6594,  6593,  6602,  6606,
    6618,  6619,  6627,  6626,  6635,  6636,  6640,  6646,  6646,  6653,
    6652,  6662,  6682,  6686,  6691,  6696,  6717,  6721,  6720,  6737,
    6738,  6743,  6751,  6775,  6777,  6781,  6790,  6803,  6806,  6810,
    6814,  6837,  6838,  6842,  6843,  6848,  6851,  6859,  6863,  6871,
    6875,  6886,  6885,  6893,  6897,  6908,  6907,  6915,  6920,  6928,
    6929,  6930,  6931,  6932,  6940,  6939,  6948,  6955,  6959,  6969,
    6980,  6998,  6997,  7006,  7010,  7014,  7019,  7027,  7031,  7042,
    7041,  7051,  7055,  7059,  7063,  7067,  7071,  7072,  7081,  7083,
    7082,  7090,  7099,  7106,  7110,  7114,  7118,  7128,  7130,  7134,
    7135,  7138,  7140,  7147,  7148,  7152,  7153,  7158,  7162,  7166,
    7170,  7174,  7178,  7182,  7186,  7190,  7194,  7198,  7202,  7206,
    7210,  7214,  7218,  7225,  7229,  7240,  7239,  7248,  7252,  7256,
    7260,  7264,  7271,  7275,  7286,  7285,  7294,  7313,  7312,  7336,
    7344,  7345,  7350,  7361,  7372,  7386,  7390,  7397,  7398,  7403,
    7412,  7421,  7426,  7435,  7436,  7441,  7503,  7504,  7505,  7509,
    7510,  7514,  7518,  7529,  7528,  7540,  7541,  7562,  7576,  7598,
    7620,  7640,  7663,  7664,  7672,  7671,  7680,  7691,  7690,  7699,
    7712,  7711,  7724,  7733,  7737,  7748,  7764,  7763,  7772,  7776,
    7780,  7787,  7791,  7802,  7801,  7809,  7817,  7818,  7822,  7823,
    7824,  7829,  7832,  7839,  7843,  7851,  7858,  7859,  7860,  7861,
    7862,  7863,  7864,  7869,  7872,  7882,  7881,  7889,  7896,  7909,
    7908,  7917,  7921,  7925,  7929,  7936,  7937,  7938,  7939,  7946,
    7945,  7959,  7969,  7978,  7979,  7983,  7984,  7985,  7986,  7987,
    7988,  7992,  7993,  7997,  8002,  8009,  8010,  8011,  8012,  8013,
    8017,  8045,  8048,  8055,  8059,  8069,  8068,  8081,  8080,  8088,
    8092,  8103,  8102,  8111,  8115,  8122,  8126,  8137,  8136,  8144,
    8165,  8189,  8190,  8191,  8192,  8196,  8197,  8201,  8202,  8203,
    8204,  8216,  8215,  8226,  8232,  8231,  8242,  8250,  8258,  8265,
    8269,  8282,  8289,  8301,  8304,  8309,  8313,  8324,  8331,  8332,
    8336,  8337,  8340,  8341,  8346,  8386,  8385,  8394,  8421,  8422,
    8427,  8430,  8434,  8438,  8442,  8446,  8450,  8457,  8458,  8462,
    8463,  8467,  8471,  8481,  8492,  8491,  8499,  8509,  8520,  8519,
    8528,  8535,  8539,  8550,  8549,  8561,  8570,  8573,  8577,  8584,
    8588,  8598,  8610,  8609,  8618,  8622,  8631,  8632,  8637,  8640,
    8648,  8652,  8659,  8667,  8671,  8682,  8681,  8695,  8696,  8697,
    8698,  8699,  8700,  8704,  8705,  8709,  8710,  8716,  8725,  8732,
    8733,  8737,  8741,  8745,  8749,  8753,  8757,  8761,  8765,  8774,
    8778,  8787,  8796,  8797,  8801,  8810,  8811,  8815,  8819,  8830,
    8829,  8838,  8837,  8868,  8871,  8891,  8892,  8895,  8896,  8904,
    8905,  8910,  8915,  8925,  8941,  8946,  8956,  8973,  8972,  8982,
    8995,  8998,  9006,  9009,  9014,  9019,  9027,  9028,  9029,  9030,
    9031,  9032,  9036,  9044,  9045,  9049,  9053,  9064,  9063,  9073,
    9086,  9089,  9093,  9101,  9113,  9116,  9123,  9124,  9125,  9126,
    9133,  9132,  9141,  9148,  9149,  9153,  9154,  9155,  9159,  9160,
    9164,  9168,  9179,  9178,  9187,  9191,  9195,  9202,  9206,  9216,
    9227,  9228,  9235,  9234,  9242,  9250,  9263,  9262,  9270,  9284,
    9283,  9291,  9304,  9306,  9307,  9315,  9314,  9323,  9331,  9332,
    9337,  9338,  9343,  9350,  9351,  9356,  9363,  9364,  9368,  9369,
    9373,  9374,  9378,  9382,  9393,  9392,  9401,  9402,  9403,  9404,
    9405,  9409,  9436,  9439,  9451,  9461,  9466,  9471,  9476,  9484,
    9522,  9523,  9527,  9567,  9577,  9600,  9601,  9602,  9603,  9607,
    9616,  9622,  9632,  9663,  9672,  9673,  9680,  9679,  9691,  9701,
    9702,  9707,  9710,  9714,  9718,  9725,  9726,  9730,  9731,  9735,
    9739,  9751,  9754,  9755,  9764,  9765,  9774,  9777,  9778,  9787,
    9788,  9799,  9802,  9803,  9812,  9813,  9825,  9828,  9830,  9840,
    9841,  9853,  9854,  9858,  9859,  9860,  9864,  9873,  9884,  9885,
    9886,  9890,  9899,  9910,  9915,  9916,  9925,  9926,  9937,  9941,
    9951,  9958,  9965,  9965,  9976,  9977,  9978,  9982,  9991,  9992,
    9994,  9995,  9996,  9997,  9998, 10000, 10001, 10002, 10003, 10004,
   10005, 10007, 10008, 10009, 10011, 10012, 10013, 10014, 10015, 10018,
   10019, 10023, 10024, 10028, 10029, 10033, 10034, 10038, 10042, 10048,
   10052, 10058, 10059, 10060, 10064, 10065, 10066, 10070, 10071, 10072,
   10076, 10080, 10084, 10085, 10086, 10089, 10090, 10100, 10112, 10121,
   10137, 10146, 10162, 10177, 10178, 10183, 10192, 10198, 10218, 10222,
   10243, 10284, 10298, 10299, 10304, 10310, 10311, 10316, 10328, 10329,
   10330, 10337, 10348, 10349, 10353, 10361, 10369, 10373, 10380, 10389,
   10390, 10396, 10410, 10427, 10431, 10438, 10439, 10440, 10447, 10451,
   10458, 10459, 10460, 10461, 10462, 10466, 10470, 10474, 10478, 10482,
   10503, 10507, 10514, 10515, 10516, 10520, 10521, 10522, 10523, 10524,
   10528, 10532, 10539, 10540, 10544, 10545, 10549, 10550, 10554, 10555,
   10566, 10567, 10571, 10572, 10573, 10577, 10578, 10579, 10586, 10587,
   10591, 10592, 10596, 10597, 10598, 10604, 10608, 10612, 10613, 10617,
   10621, 10628, 10635, 10642, 10652, 10656, 10663, 10673, 10683, 10693,
   10706, 10710, 10718, 10726, 10730, 10740, 10755, 10778, 10798, 10805,
   10821, 10822, 10823, 10824, 10825, 10826, 10830, 10834, 10851, 10855,
   10862, 10863, 10864, 10865, 10866, 10867, 10868, 10874, 10878, 10882,
   10886, 10890, 10894, 10898, 10902, 10906, 10910, 10914, 10918, 10925,
   10926, 10930, 10931, 10932, 10936, 10937, 10938, 10939, 10943, 10947,
   10951, 10958, 10962, 10966, 10973, 10980, 10987, 10997, 11004, 11014,
   11021, 11031, 11035, 11048, 11052, 11067, 11075, 11076, 11080, 11081,
   11085, 11086, 11091, 11094, 11102, 11105, 11112, 11114, 11115, 11119,
   11120, 11124, 11125, 11126, 11131, 11134, 11147, 11151, 11159, 11163,
   11167, 11171, 11175, 11179, 11183, 11187, 11194, 11195, 11201, 11202,
   11203, 11204, 11205, 11206, 11207, 11208, 11209, 11210, 11211, 11212,
   11213, 11214, 11215, 11216, 11217, 11218, 11219, 11220, 11221, 11222,
   11223, 11224, 11225, 11226, 11227, 11228, 11229, 11230, 11231, 11232,
   11233, 11234, 11235, 11236, 11237, 11238, 11239, 11240, 11241, 11242,
   11243, 11244, 11245, 11246, 11247, 11248, 11249, 11250, 11251, 11252,
   11253, 11254, 11255, 11256, 11257, 11258, 11259, 11260, 11261, 11262,
   11263, 11264, 11265, 11266, 11267, 11268, 11269, 11270, 11277, 11277,
   11278, 11278, 11279, 11279, 11280, 11280, 11281, 11281, 11282, 11282,
   11283, 11283, 11284, 11284, 11285, 11285, 11286, 11286, 11287, 11287,
   11288, 11288, 11289, 11289, 11290, 11290, 11291, 11291, 11292, 11292,
   11293, 11293, 11293, 11294, 11294, 11295, 11295, 11296, 11296, 11297,
   11297, 11298, 11298, 11298, 11299, 11299, 11300, 11300, 11300, 11301,
   11301, 11301, 11302, 11302, 11303, 11303, 11304, 11304, 11305, 11305,
   11306, 11306, 11306, 11307, 11307, 11308, 11308, 11309, 11309, 11309,
   11310, 11310, 11310, 11310, 11311, 11311, 11312, 11312, 11313, 11313,
   11314, 11314, 11315, 11315, 11316, 11316, 11317, 11317, 11318, 11318,
   11318, 11319, 11319, 11320, 11320, 11321, 11321, 11322, 11322, 11323,
   11323, 11324, 11324, 11325, 11325, 11326, 11326, 11326, 11327, 11327,
   11328, 11328, 11329, 11329, 11330, 11330, 11334, 11334, 11335, 11335,
   11336, 11336, 11337, 11337, 11338, 11338, 11339, 11339, 11340, 11340,
   11341, 11341, 11342, 11342, 11343, 11343, 11344, 11344, 11345, 11345,
   11346, 11346, 11347, 11347, 11348, 11348, 11349, 11349, 11350, 11350,
   11353, 11354, 11355, 11359, 11359, 11360, 11360, 11361, 11361, 11362,
   11362, 11363, 11363, 11364, 11364, 11365, 11365, 11366, 11366
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
  "special_name_mnemonic_on_off", "on_off_clauses", "alphabet_name_clause",
  "@11", "alphabet_definition", "alphabet_literal_list",
  "alphabet_literal", "@12", "alphabet_also_sequence", "alphabet_lits",
  "space_or_zero", "symbolic_characters_clause", "sym_in_word",
  "symbolic_collection", "symbolic_chars_list", "symbolic_chars_phrase",
  "char_list", "integer_list", "class_name_clause", "class_item_list",
  "class_item", "locale_clause", "currency_sign_clause", "with_pic_symbol",
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

#define YYPACT_NINF -2476

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2476)))

#define YYTABLE_NINF -1903

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -2476,   713,   -19, -2476,   330,   342, -2476,   -19, -2476, -2476,
     686, -2476, -2476,   686,   686,   -43,   -43, -2476,   709, -2476,
     967,   574,   930, -2476, -2476,  1052,  1052,   744,   834, -2476,
   -2476,    14,   686,   -43, -2476, -2476,  1062,   846, -2476, -2476,
     908,  1586,   -43, -2476, -2476, -2476,   574,   944, -2476, -2476,
     -91, -2476,   903,   903,  1007,  1074,  1318,  1318,  1318,  1180,
     903,  1179,  1135,  1141,  1318,  1154,  1169,  1571, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476,   680, -2476, -2476, -2476, -2476,
    1415, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
    1470,  1207,    14, -2476, -2476,  1211,   598, -2476, -2476,  1318,
    1318, -2476,  1318,  1160,  1602,  1160,  1218,  1318,  1318, -2476,
   -2476,  1160, -2476, -2476, -2476,  1166,  1081,  1222, -2476, -2476,
    1175, -2476,  1238, -2476, -2476, -2476, -2476,  -163, -2476, -2476,
   -2476,  1343, -2476,  1318,  1070,  1160,  1432,   -10, -2476, -2476,
   -2476, -2476, -2476,  1441,  1226,   771,  1503, -2476,  1196, -2476,
    1166, -2476,    52, -2476, -2476, -2476, -2476, -2476,  1261,   438,
    1318,     2, -2476, -2476, -2476,   524, -2476, -2476, -2476,   424,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1070, -2476,  1262,
   -2476,   443, -2476, -2476,  1160, -2476,  1305, -2476,  1311,  1309,
    1659,  1318, -2476, -2476, -2476,   752, -2476, -2476, -2476, -2476,
   -2476,   751,  1665,  1318,    99, -2476,    79, -2476, -2476,   117,
   -2476, -2476, -2476, -2476,  1475,   438, -2476,  1495,   903,   903,
   -2476,  1261,  1278,    76,   -63, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1005, -2476,
     124, -2476,  1070, -2476, -2476,  1421, -2476, -2476, -2476,  1318,
    1350,  1493, -2476, -2476, -2476, -2476,   862,  1318,  1247,  1529,
     -38, -2476,  1735,   453,  1315, -2476, -2476,  1316,  1666, -2476,
    1475, -2476,   903, -2476, -2476, -2476, -2476,  1261, -2476,  1317,
    1460, -2476,   903, -2476,   758, -2476,    91, -2476, -2476, -2476,
   -2476, -2476,  1005, -2476,  1519,  1493, -2476, -2476, -2476,   458,
   -2476, -2476, -2476,  1520, -2476, -2476, -2476, -2476, -2476,  1505,
   -2476, -2476, -2476, -2476, -2476,  1321, -2476, -2476, -2476,  1760,
    1681,  1338, -2476, -2476,  1005, -2476, -2476,    36, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1351, -2476,  1606,
    1673,  1340, -2476,  1781, -2476, -2476, -2476, -2476,  1220, -2476,
    1714, -2476,  1291,  1349,  1409, -2476,  1005,  1534,  1454,   585,
    1405, -2476,  1406,  1318,  1753,    68,   -32,   -18, -2476,  1307,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1387,
   -2476,  1558, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
    1784,  1318, -2476,  1291, -2476,  1291, -2476, -2476,  1369,    -7,
   -2476, -2476,  1318, -2476,  1589, -2476, -2476,  1016, -2476, -2476,
     999,  1318,  1318, -2476,  1318,  1318, -2476,  1760, -2476,   454,
    1318,  1534, -2476,  1422,  1320,  1291, -2476,  1496, -2476, -2476,
   -2476, -2476,  1323, -2476,  1322,    70,    29,  1318, -2476, -2476,
     859, -2476, -2476, -2476,  -110,  1410,  1160,  1160, -2476,  1517,
    1517,  1525, -2476,  1160,  1318, -2476, -2476, -2476,  1493, -2476,
    1440,  1577, -2476, -2476,  1384, -2476, -2476, -2476, -2476, -2476,
    1160, -2476, -2476,   367,   367,  1837,   367, -2476, -2476,   367,
     374, -2476, -2476, -2476, -2476,   621, -2476, -2476, -2476, -2476,
   -2476, -2476,   761, -2476,  1389,  1450,  1592,   755,  1393,  5476,
   -2476,  1341, -2476, -2476,   380, -2476, -2476, -2476, -2476,  1321,
   -2476, -2476, -2476, -2476, -2476,  1318, -2476, -2476,  1344, -2476,
    1344, -2476, -2476,  1395,  1457,  1484, -2476,  1399, -2476,  1400,
   -2476,  1772, -2476,  1776, -2476,   185, -2476,  1739, -2476,  1430,
   -2476, -2476, -2476,  1160,  1160,   512, -2476, -2476,  1322, -2476,
    1412,  1469,  1480, -2476, -2476, -2476,   983,  1714,  1318,  1071,
    1071,  1318,    62,  1534,  1318,  1852, -2476,  1565, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,   903,  1118,
   -2476,   145,  1371, -2476, -2476, -2476, -2476,  1563, -2476, -2476,
    1322, -2476,  1424,  1485, -2476,  7261,   150,  1679,  1493,  1375,
     729,   729,  1376,  -104,  -110,  1493,  1382,  1318, -2476, -2476,
   -2476,   -51,   903, -2476, -2476, -2476,  1430,    55,  1030, -2476,
    1322, -2476,  1431,  1018,   784, -2476, -2476,   489,   543,   787,
     789,   823,  1383, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
    1501, -2476,    67, -2476, -2476, -2476, -2476,  1160,  1160,  1660,
   -2476, -2476, -2476,   -27, -2476, -2476, -2476,  1318,   729, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1156,   -45, -2476,
    1385, -2476,   927, -2476,  1444, -2476, -2476, -2476, -2476,  1376,
   -2476, -2476, -2476, -2476,  1642,    37,  1680,  1390,  1318, -2476,
   -2476,  1318, -2476, -2476,   392, -2476, -2476, -2476,  1230, -2476,
   -2476, -2476, -2476, -2476, -2476,  1777, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476,  1386, -2476, -2476,  1851,  1453, -2476,  1438,  1461,
   -2476, -2476, -2476, -2476,  7728,   392,  1882, -2476,  1507,  1507,
   -2476,  1102,  1603, -2476,   923,   923, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476,  1462, -2476,  1493,    86, -2476, -2476,
   -2476,  1493, -2476, -2476,  1500, -2476,   377,   377, -2476, -2476,
    1564,  1407,    30,  3722,  4239, -2476,  1680,  1721,  1493,  1472,
    8392,  1452, -2476,  1160, -2476,   392, -2476,  1473,  1668, -2476,
    1753, -2476, -2476, -2476, -2476,   923,  1468, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
    1102, -2476, -2476, -2476, -2476,   104,  1571, -2476,   750, -2476,
   -2476, -2476, -2476,  1417, -2476,  4460, -2476, -2476,  1407,  1471,
   -2476, -2476,  1553,  4744, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476,   564, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476,  1533, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476,   891, -2476, -2476,  1597, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476,  1428,  1493,  1453, -2476,
   -2476,  1823, -2476, -2476, -2476,  1474,  1476,  1477,  4977,   -10,
     -10,  1478,  1479,  1481, -2476,  1482,   -10, -2476, -2476, -2476,
    8494,  8392,  8494,  1483, -2476,  1477, -2476,   236,  1088,  1046,
   -2476,  1769, -2476, -2476, -2476, -2476, -2476,  1462, -2476,  1486,
    1487,  1488,  8392, -2476, -2476,   327, -2476,   392, -2476, -2476,
   -2476, -2476, -2476,  -110,  -110, -2476, -2476, -2476, -2476,  1752,
   -2476, -2476,  1444,  1493, -2476, -2476,  1491, -2476,  1506, -2476,
      45,    45,  1433,  1508, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476,   440,  5618,  8392,   418,   858,
     445,  1291,   887,  -227,  6718,  6817,  1694,   766,  1130,   887,
    1160,  1510, -2476, -2476,  6817, -2476, -2476,   887,  1417,  2236,
    1160,  5761,  6817, -2476,    27,  2993,  1291,  1160,  1291,  1160,
      60,   718,  1160,  1291, -2476, -2476, -2476, -2476, -2476, -2476,
    5895,  6037, -2476, -2476,  1417,    74,  1160,  1291,  2587,  1160,
   -2476, -2476,  1729,  1645, -2476,  8392,  8392,  7731, -2476, -2476,
    1462, -2476,  1464,  1467,  8392,  8392,  8392,  4977,  1489, -2476,
     968, -2476,  4977, -2476, -2476, -2476, -2476,  8392,  7769,  8392,
    8392,  8392,  8392,  8392,  8392, -2476,  4977,  8392,  1088,  1557,
   -2476,  1511, -2476, -2476, -2476,  1930,  1571, -2476,   678, -2476,
   -2476, -2476, -2476,    35, -2476,  -186,   336,    89, -2476, -2476,
   -2476,  1841,   801,  1787,  1603,  1160,  4977, -2476,  1846, -2476,
    6171, -2476, -2476, -2476, -2476, -2476,   153,   831, -2476,   418,
   -2476,  1539, -2476,   -10, -2476, -2476, -2476, -2476,  1860,  2587,
   -2476,   445, -2476, -2476,  1291,   870,  1603,  1850, -2476,   480,
   -2476,  1605, -2476, -2476,  1438,  1462,  1291,  1861,  1643,  1251,
    1863,  6200, -2476,  6392,    85,  1256,  1274,  1864,   776,  1498,
   -2476, -2476, -2476,  1865,    54, -2476, -2476, -2476,  5130, -2476,
   -2476,  1900,   564, -2476, -2476, -2476,   887, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476,  1559, -2476, -2476,   376,  1417, -2476,
   -2476,    18, -2476, -2476, -2476, -2476, -2476, -2476,  1540,  6817,
   -2476,  1561,  1867,  1961, -2476, -2476, -2476, -2476,    27,  1604,
   -2476,  1567, -2476,  7628,   -23,  -239,  1566,  1569, -2476,  -210,
   -2476,  1570,  1871,  1037, -2476,  1825, -2476,  1878,  1643,  1879,
    1825,  1160,  1880,  1522, -2476,  1099, -2476, -2476, -2476, -2476,
   -2476, -2476,  1759, -2476,   887, -2476,   477, -2476,   393,  2003,
   -2476,    97, -2476,  1886,  1143,   581,  1987,  1887,  2955, -2476,
   -2476,  1160,  1888,  6489,  1417, -2476, -2476,   685, -2476, -2476,
   -2476, -2476,  3995, -2476,  1843, -2476,  1253, -2476,  1889,  1929,
    1891,  1825, -2476, -2476, -2476,  1160,  1824,   192,   255,  1060,
    1593,   292,  1594, -2476,   303, -2476, -2476,   535,  1598,  1599,
    1600,   318, -2476,  1462, -2476,  1601, -2476, -2476,   319,  1607,
    1060, -2476,  1043,  1046,  1046, -2476, -2476, -2476,  1115,  1609,
     337,  1608,  1318, -2476,  -110,  1935,  1610,   616,  7470, -2476,
    1318,  1632,  1740, -2476, -2476,  1946, -2476, -2476,  1099,  1866,
   -2476,   662,  1713,   -40,  1613, -2476,  1462, -2476, -2476, -2476,
    6917,  1854, -2476,  1835, -2476,  1688, -2476,  1726,  1812, -2476,
   -2476,  1498, -2476,   870, -2476, -2476, -2476,   -29,   720,  1160,
   -2476, -2476, -2476, -2476, -2476,  8392,  1797, -2476,  1452, -2476,
    1291, -2476, -2476, -2476,  1840, -2476, -2476, -2476,  6817, -2476,
    1775,   148,  1774,  1667,  1584,  1910,  1910,  1910,  1910, -2476,
   -2476,  6817,  6917, -2476, -2476, -2476, -2476,   766,   149, -2476,
    1572, -2476,  1573, -2476, -2476, -2476, -2476,  1510, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,  4841,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
      63, -2476,  1948,  1402,  1904, -2476,  1099,    77, -2476, -2476,
    1716, -2476, -2476,    94,  8392, -2476,  1630,   887, -2476, -2476,
    6917,  1604,  1307,  1291, -2476, -2476, -2476, -2476, -2476,  1913,
    1160,   418, -2476,   231, -2476, -2476, -2476, -2476,  1643,  2236,
   -2476, -2476, -2476,  1858, -2476, -2476,   660,  1957, -2476, -2476,
    1160,  1957,  1637, -2476,  1462, -2476, -2476,   730,  1261, -2476,
   -2476,  5532, -2476,  2041,   455,   144, -2476, -2476, -2476,  1318,
   -2476,   -77,  6817, -2476,   661,  6526, -2476, -2476,  1160, -2476,
    1894, -2476, -2476,  6917, -2476,  1493, -2476, -2476,  1099, -2476,
   -2476, -2476, -2476, -2476,  1987,  1869, -2476, -2476,   231,  1824,
   -2476,  1987, -2476, -2476, -2476,  1589,  8058,  1486,  8081,  1486,
   -2476,  1160,  1486,  1486,  1486,  4977, -2476,   428,  1486, -2476,
    8160,  1486,  1486, -2476,   392, -2476,  1645, -2476, -2476,  1318,
     729,   729,   928, -2476, -2476, -2476, -2476,  1890,   -62, -2476,
    1318, -2476,   400, -2476, -2476, -2476,  1456,  1318,  2236, -2476,
   -2476, -2476,  1789, -2476,  1493, -2476,  2036, -2476, -2476, -2476,
    1160, -2476, -2476,  1160, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476,  1897,  1789,  1082,  1318, -2476,  1595,  1646,
   -2476, -2476, -2476,  1830,  1789,  1789,   736,  1855,  1789, -2476,
    1932, -2476, -2476, -2476,  1596,  1611, -2476,  1099,  1932,  1872,
    1682,  1804, -2476, -2476,  1834, -2476, -2476, -2476, -2476, -2476,
   -2476,   496, -2476,  1160,  1603,  1909,   833, -2476,   -60,   190,
     887,  1663,  1688,   887, -2476,  1664,   418, -2476,   564, -2476,
   -2476,  1733,  1754, -2476,   997,  1318, -2476, -2476, -2476, -2476,
   -2476,  1819, -2476, -2476, -2476,  2089, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476,  1910,  1318, -2476,   -65, -2476, -2476,  1463,
    1318, -2476, -2476, -2476, -2476,   -35, -2476,  1826, -2476,  1365,
    1830, -2476, -2476, -2476, -2476,  1917,   833,  1918,   135, -2476,
   -2476, -2476, -2476,  2106, -2476,  1678,   170, -2476, -2476,   149,
   -2476, -2476, -2476, -2476,  1645, -2476, -2476, -2476,  1997,  1988,
    1510, -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1761,  1510,
   -2476,  1683, -2476,  2082, -2476, -2476, -2476,   794, -2476,  1099,
    1022, -2476,   205,   192,   764,   887,   887,   833,  1933,  1291,
     454,   896,  1991, -2476, -2476, -2476,  2128, -2476,  1941, -2476,
   -2476, -2476, -2476,  1858, -2476, -2476, -2476, -2476,  1160,  2008,
    1840,   -22, -2476,  1633, -2476,  1634,  1099,  1072, -2476,   496,
   -2476, -2476, -2476,  6817,  1261,  1261,  1261,  1261,  1261,  1261,
    1261,  1261,   455, -2476,   566,  1840,   518, -2476,  1718,  1718,
   -2476, -2476,   362,  1160,   833,  1939,  1690, -2476,  1697,  2141,
    1160,  -179,   660,  2145, -2476,  1644,  1318, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
    1049, -2476, -2476, -2476,  1160,   445, -2476, -2476,   729,   729,
     388,  1407, -2476, -2476, -2476,  1160,  1160, -2476, -2476,   465,
   -2476, -2476, -2476, -2476,   465, -2476, -2476,  1318,  1472,  1318,
   -2476, -2476, -2476,  1318, -2476, -2476, -2476,   734, -2476, -2476,
   -2476,  1318,  1648,   465,   465, -2476, -2476,   465, -2476, -2476,
    1857, -2476, -2476,  1932, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476,  1605,   -40, -2476, -2476,  1859,   -17,  1954,   833,
     245, -2476, -2476, -2476, -2476, -2476,   -34,   155, -2476, -2476,
   -2476,   749, -2476, -2476, -2476, -2476, -2476, -2476,   465, -2476,
   -2476, -2476, -2476,   465,   504,   504, -2476, -2476, -2476, -2476,
   -2476,  1650,   887, -2476,   887,  2627, -2476,  -122,   111,   149,
   -2476, -2476, -2476,  2106,  1160, -2476, -2476, -2476, -2476,  1657,
    1235,    19,  1669,   245,  1099, -2476, -2476,  2114, -2476, -2476,
   -2476, -2476,  1022, -2476,  1974, -2476,  1318,  1589,  1853, -2476,
   -2476,   887, -2476,   887,   896, -2476, -2476, -2476,  1044, -2476,
   -2476,  1160,  6817,   963, -2476, -2476, -2476,  1873, -2476, -2476,
    1905, -2476, -2476, -2476, -2476,  1634, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,   -14, -2476,
    1160, -2476, -2476, -2476,  1084, -2476, -2476, -2476,  8392, -2476,
    6817,  6817,  1703,  1838,  1605, -2476,   887, -2476,   245, -2476,
    1862, -2476,  1099, -2476,  2060,  1734, -2476,   622, -2476,   701,
   -2476,  1644, -2476,  1160, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476,     4, -2476, -2476,   -53, -2476,  1160, -2476, -2476,
   -2476, -2476, -2476, -2476,  -106, -2476,   445,  -106, -2476, -2476,
   -2476,    81,  2130,  4074,  1932, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476,  1763,  1979, -2476, -2476, -2476,  1981, -2476, -2476,
   -2476, -2476, -2476, -2476,  1892, -2476,  1603, -2476, -2476, -2476,
   -2476,  1160, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476,  3402, -2476, -2476, -2476,  1252, -2476, -2476, -2476,
    1667, -2476,   833,  1821,   833,  1827, -2476, -2476,  6817, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1235, -2476,
    2084, -2476,  1510, -2476, -2476, -2476,   245,   239, -2476, -2476,
     239,   -72,  1160, -2476, -2476,   833, -2476, -2476,  1805, -2476,
    2142,  1931,  1955,   -68, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1060, -2476, -2476,
   -2476, -2476, -2476,  1898,  1318,  1763,   833,  1696, -2476,  2141,
   -2476,  1680,  2100,  1680,  1703, -2476, -2476, -2476, -2476,  1906,
   -2476, -2476, -2476, -2476,  1297, -2476,  1160, -2476,  1155, -2476,
   -2476,   388, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
     465, -2476, -2476, -2476,   465,   176, -2476, -2476,  1318, -2476,
   -2476, -2476, -2476,  1318, -2476, -2476, -2476, -2476, -2476,   -13,
   -2476, -2476,  2143, -2476, -2476,    46, -2476, -2476,  2192, -2476,
   -2476, -2476,  4074, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476,  1160, -2476, -2476, -2476, -2476,  1667, -2476,   887,
   -2476,   887, -2476, -2476, -2476,  2154,  2092,   239,   239, -2476,
    1743,  1743, -2476,  1868,  1291,   639, -2476,  1160, -2476, -2476,
    6817, -2476,  1318,   884,  1942,  1943, -2476,  1947, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476,  1160, -2476, -2476, -2476, -2476,
    1757, -2476,  1160,  1680, -2476,  1160, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476,  1381,  1318,  1318,  1419,  1318, -2476,
   -2476, -2476, -2476, -2476, -2476,  1560, -2476, -2476, -2476,  2105,
     465,   465, -2476,  1318,   504,   504, -2476,   388, -2476, -2476,
   -2476,  1763,  1763,  6817, -2476,   239, -2476,  6817,  6817,  1318,
    1291,  1291,  1876, -2476, -2476,  1731,  1160, -2476, -2476,  1873,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1039, -2476, -2476,
    1160, -2476, -2476, -2476,  1318,   388,   388, -2476,  2009,  1318,
    1318,   388, -2476,  1425,  1762, -2476, -2476,   445, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,   418,  1291,
    1318, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,  1319,
   -2476, -2476, -2476, -2476, -2476,  1881,  2113, -2476,   388, -2476,
   -2476, -2476,   388,   388, -2476, -2476,  2002,  1923,  1318,  1493,
   -2476,  1318,  1603, -2476,  1318,  1318,  1160, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,    69, -2476,
   -2476,   984, -2476,   677, -2476, -2476, -2476, -2476, -2476,  1346,
   -2476, -2476, -2476,   418, -2476,  1856,  1806,    72,  1645, -2476,
   -2476, -2476, -2476, -2476,  1996, -2476,   933,  1453,  8739,  8739,
    1233,  2109,  2034,  1945,  1945,  1337, -2476,  -119,  -119, -2476,
     984, -2476, -2476,  1944, -2476, -2476,  -119,  -119, -2476, -2476,
   -2476,   545, -2476,  1160, -2476,  1314, -2476, -2476, -2476,    44,
   -2476, -2476,  1493,  1493, -2476, -2476,  1472,  1605,  8471, -2476,
   -2476,  1210,  1227, -2476, -2476,  1276, -2476, -2476, -2476, -2476,
      -1,    -1, -2476, -2476, -2476, -2476, -2476,  8739, -2476,   555,
     555,  1945,  1945, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476,   729, -2476, -2476, -2476, -2476,  1895,  1038,
      44, -2476, -2476, -2476, -2476,  1823, -2476,  1645,  1160, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,   -49,    58,
    2186, -2476, -2476, -2476,   555, -2476, -2476,  1912,  1914, -2476,
   -2476,  1645, -2476, -2476,  1928,  1160, -2476,  1811,   110, -2476,
   -2476, -2476,  1924, -2476, -2476, -2476, -2476,  8739, -2476, -2476,
   -2476,   592, -2476, -2476,  1493, -2476, -2476, -2476, -2476,  1921,
   -2476, -2476, -2476, -2476, -2476, -2476,  1291, -2476, -2476
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
       0,   175,     0,    17,    12,    19,    15,     0,    34,    30,
    1829,    46,     0,     0,     0,  1874,  1829,  1829,  1829,     0,
       0,     0,     0,     0,  1829,     0,     0,  1806,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1830,     0,     0,  1551,   125,  1829,
    1829,  1875,  1829,     0,     0,     0,     0,  1829,  1829,    60,
      82,     0,    54,    98,  1807,     0,  1829,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1868,    39,  1829,     0,     0,     0,  1620,   171,  1544,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1552,
     152,   153,  1831,   156,  1625,  1244,  1243,   116,   120,  1860,
    1829,     0,   100,   151,   178,   179,    38,  1869,    36,     0,
    1633,  1629,  1634,  1632,  1630,  1635,  1631,   160,   161,   163,
     172,   167,  1920,  1921,     0,   165,     0,  1805,     0,     0,
       0,  1829,  1942,    80,    61,  1804,    66,    68,    69,    70,
      71,  1804,     0,  1829,     0,    83,     0,    87,    55,    58,
     154,  1833,  1832,   157,     0,  1860,  1863,  1862,     0,     0,
     117,   121,     0,     0,   267,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1903,   166,     0,  1621,   170,  1941,  1829,
       0,     0,    65,    67,    63,    81,  1804,  1829,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1626,
     155,   158,     0,  1861,   123,   118,   119,   122,   180,     0,
       0,  1702,     0,   279,   275,    24,     0,   270,   272,   273,
     134,   137,     0,   164,     0,     0,  1940,    74,    64,     0,
    1545,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1703,   183,  1812,   276,   277,   278,  1794,
     286,     0,   268,   271,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1813,  1887,  1795,  1814,
       0,   288,   269,   138,   139,  1928,  1929,    72,  1870,  1888,
    1808,  1815,     0,     0,     0,   290,     0,  1844,  1904,  1895,
       0,   245,     0,  1829,  1804,  1834,   247,     0,  1907,  1902,
     233,   184,   232,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   244,   195,   196,   197,   198,   199,   200,
    1800,  1829,  1809,     0,  1530,   274,  1528,   287,     0,    25,
     140,  1845,  1829,  1905,  1834,  1896,  1897,   212,  1906,   248,
    1870,  1829,  1829,  1835,  1829,  1829,   261,  1794,   262,     0,
    1829,  1844,  1801,     0,     0,   280,   281,   284,  1529,   289,
     296,   297,   348,   291,   351,     0,     0,  1829,   214,   213,
     210,  1871,   247,   243,     0,     0,     0,     0,   260,  1864,
    1864,     0,   263,     0,  1829,   246,   229,   282,     0,   283,
       0,   507,   292,  1685,     0,   293,   222,   223,   221,   220,
       0,   206,   207,   217,   217,     0,   217,   209,   208,   217,
       0,  1550,  1549,   249,   250,   251,   259,  1865,   264,   265,
     266,   230,     0,   285,     0,     0,   510,   353,     0,     0,
     357,     0,   295,   298,  1688,   218,   203,   219,   204,  1812,
     205,   202,   215,   201,   216,  1829,   253,   255,   239,   238,
     239,   235,   349,     0,     0,   513,   356,     0,   354,     0,
     363,   364,   358,     0,   361,  1829,  1939,     0,   255,   226,
    1689,   211,   254,   252,     0,     0,   237,   236,   351,   508,
       0,     0,   643,   355,   360,   397,   366,  1808,  1829,     0,
       0,  1829,  1808,  1844,  1829,  1792,   294,     0,   299,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,     0,
    1938,  1688,     0,   224,   257,   258,   256,     0,   242,   350,
     351,   511,     0,     0,    26,  1829,  1796,     0,     0,     0,
    1831,  1831,     0,     0,     0,     0,     0,  1829,   344,  1793,
     345,     0,   343,   346,   300,   301,   226,     0,     0,   509,
     351,   514,     0,   706,     0,   494,   421,  1876,  1876,  1876,
    1876,  1876,  1898,   422,   457,   459,   425,   426,   427,   428,
     429,   430,   453,   451,   452,   454,   455,   460,   458,   431,
    1872,   456,     0,   432,   418,   433,   434,     0,     0,  1879,
     436,   437,   435,   490,   439,   440,   438,  1829,  1831,   398,
     399,   400,   401,   402,   403,   419,   423,   424,   404,   405,
     406,   407,   408,   409,   410,   411,   412,     0,     0,  1797,
       0,   394,     0,   367,   322,   342,  1930,  1931,  1548,   331,
    1546,  1923,  1922,   324,  1842,  1806,  1818,     0,  1829,   328,
     327,  1829,   347,   225,     0,   147,   148,   228,     0,  1926,
    1927,   240,   512,   516,   644,     0,    27,   750,   505,   506,
    1877,   450,   449,   442,   441,   448,   447,   446,   445,   444,
     443,  1899,     0,  1873,   488,   474,   468,   413,  1613,   503,
    1880,   491,   492,   489,     0,     0,   415,   417,  1716,  1716,
     396,     0,  1853,  1644,     0,     0,  1640,  1645,  1643,  1641,
    1646,  1642,   395,   368,  1636,  1638,     0,   312,  1547,  1843,
     333,     0,   315,  1819,  1881,   341,     0,     0,   227,   241,
     515,   646,   708,     0,     0,   493,  1818,   470,     0,  1891,
       0,  1611,  1612,     0,   420,   495,   497,   499,     0,   414,
    1804,   461,   462,  1637,  1854,     0,     0,   377,   373,   376,
     375,   374,   389,   385,   387,   388,   390,   386,   391,   392,
     393,   370,   381,   382,   383,   378,   379,   380,   372,   369,
       0,   323,   314,   313,   311,   332,  1806,  1882,   320,   329,
     326,   330,   325,     0,   517,     0,   650,   645,   647,     0,
     711,   709,   727,     0,   804,   877,   886,   892,   899,   931,
     935,   949,   944,   950,   951,   959,  1005,  1014,  1017,  1043,
    1054,  1057,  1060,  1052,  1066,  1073,  1095,  1099,  1135,  1137,
    1141,     0,  1147,  1161,  1185,  1203,  1204,  1207,  1208,  1213,
    1221,  1222,  1235,  1269,  1287,     0,  1320,  1332,  1340,  1342,
     732,  1346,  1349,  1355,  1406,   752,   753,   754,   755,   756,
     757,   758,   759,   761,   760,   762,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   751,     0,     0,   468,   469,
    1892,   472,  1664,  1659,  1665,     0,     0,  1671,     0,  1517,
    1519,     0,     0,     0,  1662,     0,  1521,  1663,  1666,  1667,
       0,     0,     0,     0,  1661,  1671,  1660,  1501,  1499,  1506,
    1509,  1511,  1514,  1578,  1516,  1575,  1609,  1576,  1577,  1668,
       0,     0,     0,  1610,   504,   501,   498,     0,   416,  1717,
     371,   384,  1639,     0,     0,   334,   335,   336,   337,     0,
     316,  1817,   322,     0,  1531,   518,     0,   651,     0,   648,
     716,   716,     0,     0,  1719,  1720,  1721,  1722,  1723,  1724,
    1725,  1726,  1727,  1728,  1729,  1730,  1731,  1732,  1768,  1769,
    1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,  1779,
    1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,  1733,  1734,
    1735,  1736,  1737,  1738,  1739,  1740,  1741,  1742,  1743,  1744,
    1745,  1746,  1747,  1748,  1749,  1750,  1751,  1752,  1753,  1754,
    1755,  1756,  1757,  1758,  1759,  1760,  1761,  1762,  1763,  1718,
    1764,  1765,  1766,  1767,   803,     0,     0,     0,     0,   902,
       0,     0,     0,     0,     0,     0,     0,  1462,  1045,     0,
       0,  1893,   922,   921,     0,  1065,  1462,     0,     0,     0,
       0,     0,     0,   802,     0,  1173,     0,     0,     0,     0,
       0,     0,     0,     0,  1316,  1319,  1307,  1317,  1318,  1309,
       0,     0,  1341,  1339,     0,   750,     0,     0,     0,     0,
     475,   471,   476,  1855,   479,     0,     0,     0,  1657,  1579,
    1580,  1581,     0,     0,     0,     0,     0,     0,     0,  1513,
       0,  1512,     0,  1658,  1502,  1503,  1622,     0,     0,     0,
       0,     0,     0,     0,     0,  1647,     0,     0,     0,     0,
     496,     0,   500,   340,   339,  1798,  1806,   321,     0,   653,
     654,   649,  1803,   716,   713,   719,     0,   716,   728,   703,
     826,   875,   829,   825,  1853,     0,     0,  1569,   884,  1563,
     882,  1558,  1560,  1561,  1562,   887,     0,  1690,  1541,   893,
     894,     0,  1537,  1539,  1538,   905,   903,   904,   929,     0,
    1591,   932,   933,  1590,   936,   939,  1853,   947,  1615,     0,
    1523,  1704,  1555,  1614,  1619,  1556,     0,   957,  1870,  1640,
    1003,  1427,   968,   972,  1558,     0,  1560,  1012,     0,   906,
    1015,  1024,  1023,  1041,     0,  1020,  1022,  1461,     0,  1047,
    1051,  1049,  1052,  1050,  1044,  1055,  1056,  1553,  1058,  1059,
    1894,  1061,  1535,  1053,  1889,  1460,  1074,  1076,  1096,  1097,
    1100,     0,  1102,  1103,  1104,  1136,  1273,  1606,  1607,     0,
    1138,     0,  1145,     0,  1154,  1151,  1153,  1152,  1148,  1155,
    1175,  1541,  1162,  1173,  1164,     0,  1171,     0,  1592,  1538,
    1594,     0,  1201,  1696,  1205,  1409,  1526,  1211,  1870,  1219,
    1409,     0,  1233,  1226,  1527,     0,  1534,  1236,  1237,  1238,
    1239,  1240,  1241,  1262,  1242,  1265,     0,  1532,     0,     0,
    1605,  1619,  1270,  1305,  1292,  1310,  1802,  1330,     0,  1323,
    1325,     0,  1337,     0,  1343,  1344,   738,   744,   733,   734,
     735,   737,     0,  1347,     0,  1350,  1352,  1593,  1372,  1358,
    1419,  1409,   477,   479,  1856,     0,   483,   478,  1501,  1499,
       0,  1501,     0,  1673,  1501,  1518,  1520,  1501,     0,     0,
       0,  1501,  1572,  1573,  1574,     0,  1522,  1515,  1501,     0,
    1500,  1623,     0,  1505,  1504,  1508,  1507,  1510,     0,     0,
    1501,     0,  1829,  1799,     0,   318,     0,  1829,  1878,   714,
    1829,     0,   725,   717,   718,   729,   876,   805,  1799,   839,
     830,     0,     0,     0,     0,  1564,  1565,  1566,   885,   878,
       0,     0,  1559,  1692,  1691,   890,   895,   897,     0,   930,
     900,   906,   934,   939,  1932,  1933,   937,     0,   940,     0,
     948,   945,  1915,  1914,  1524,     0,  1706,  1525,  1617,  1618,
     954,   955,   958,   952,  1454,  1004,   960,   747,     0,   966,
    1429,     0,   983,     0,   977,  1427,  1427,  1427,  1427,  1013,
    1006,     0,     0,   907,  1016,  1042,  1018,  1462,  1462,  1019,
    1026,  1027,   747,  1486,  1487,  1488,  1482,  1893,  1474,  1494,
    1497,  1496,  1498,  1490,  1481,  1480,  1485,  1484,  1483,  1489,
    1469,  1473,  1491,  1493,  1495,  1471,  1472,  1468,  1470,  1463,
    1464,  1475,  1476,  1477,  1478,  1479,  1467,  1048,  1046,  1554,
    1063,  1890,   747,  1078,     0,  1098,     0,  1125,  1109,  1101,
    1106,  1107,  1108,  1277,     0,  1608,     0,     0,  1146,  1142,
       0,  1155,  1902,     0,  1163,  1169,  1170,   747,  1166,  1462,
       0,     0,  1174,     0,  1202,  1186,  1697,  1698,  1870,     0,
    1206,  1212,  1209,  1188,  1220,  1214,  1216,  1228,  1234,  1223,
       0,  1228,     0,  1586,  1587,  1263,  1266,     0,     0,  1533,
    1246,     0,  1245,     0,     0,  1617,  1306,  1288,  1294,  1829,
    1295,  1290,     0,  1308,     0,     0,  1331,  1321,     0,  1324,
       0,  1338,  1333,     0,  1345,   745,   743,   736,     0,  1353,
    1354,  1351,  1373,  1356,  1802,     0,  1420,  1407,  1411,   483,
     473,  1802,   466,   481,   482,  1834,     0,  1668,     0,  1668,
    1672,     0,  1668,  1668,  1668,     0,  1651,     0,  1668,  1624,
       0,  1668,  1668,  1901,     0,   338,  1855,   317,   522,  1829,
    1831,  1831,  1839,   554,   521,   525,   526,     0,     0,   668,
    1829,   658,  1898,   659,  1909,  1908,     0,  1829,     0,   671,
     662,   667,  1848,   663,     0,   666,   673,   670,   664,   669,
       0,   674,   665,     0,   685,   679,   683,   682,   680,   684,
     655,   686,   681,     0,  1848,     0,  1829,   726,     0,     0,
     704,   835,   840,   841,  1848,  1848,   833,   834,  1848,   821,
    1422,  1911,  1910,   818,   810,   812,   813,     0,  1422,     0,
       0,     0,   827,   816,     0,   824,   807,   823,   808,  1583,
    1582,     0,  1568,     0,  1853,  1615,  1432,   883,  1619,  1556,
       0,  1694,   890,     0,   888,     0,     0,  1540,   917,   938,
     943,     0,     0,  1557,  1432,  1829,  1705,  1616,   956,   747,
     953,  1456,  1428,   748,   970,  1798,   747,  1426,   976,   975,
     974,   973,   984,  1427,  1829,   987,     0,   990,   991,     0,
    1829,   994,   995,   996,   997,     0,   998,  1427,   985,     0,
     841,   963,   964,   961,   962,     0,  1432,     0,   913,  1021,
    1036,  1038,  1037,  1031,  1033,  1039,  1462,  1028,  1025,  1462,
    1029,  1492,  1465,  1466,  1855,  1062,  1536,   747,  1070,  1071,
    1893,  1086,  1087,  1089,  1091,  1092,  1088,  1090,  1081,  1893,
    1077,     0,  1126,     0,  1128,  1127,  1129,  1111,  1121,     0,
       0,  1105,  1279,     0,  1820,     0,  1139,  1432,     0,     0,
       0,  1157,  1167,  1180,  1176,  1181,  1177,  1182,     0,  1172,
    1416,  1415,  1179,  1188,  1410,  1602,  1603,  1604,     0,     0,
    1454,     0,   747,     0,  1227,     0,     0,     0,  1264,     0,
    1268,  1267,  1260,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1248,  1249,  1699,  1454,     0,  1311,  1885,  1885,
    1326,  1327,  1328,     0,  1432,     0,     0,   746,     0,  1686,
       0,  1328,  1216,  1788,   467,     0,  1829,  1682,  1655,  1684,
    1656,  1680,  1652,  1653,  1654,  1678,  1675,  1676,  1650,  1669,
       0,  1648,  1649,   502,     0,     0,  1957,  1958,  1831,  1831,
       0,   519,   523,   531,   527,   529,   530,   532,   534,     0,
     656,   657,   660,   661,     0,   688,  1849,  1829,  1891,  1829,
     689,   687,   701,  1829,   720,   721,   724,     0,   715,   730,
     732,  1829,   843,     0,     0,   831,   832,     0,   747,   822,
    1424,   809,   811,  1422,   819,   814,   815,   828,   817,  1585,
    1567,  1584,  1704,     0,   747,   879,  1434,  1617,  1618,  1432,
       0,  1693,   889,   891,   898,   896,   925,  1827,   942,   941,
     946,     0,  1455,   747,  1453,   750,  1430,   965,     0,   988,
     989,   992,   993,     0,  1458,  1458,   986,   967,   979,   980,
     978,   981,     0,  1007,     0,   908,   909,   719,     0,  1462,
    1462,  1035,   747,  1032,     0,  1069,   747,  1072,  1067,     0,
       0,  1093,     0,     0,     0,  1122,  1124,     0,  1117,  1131,
    1118,  1119,  1110,  1113,  1131,  1271,  1829,  1834,     0,  1821,
    1278,  1140,  1143,     0,  1157,  1156,  1160,  1149,     0,  1168,
    1165,     0,     0,  1190,  1189,   747,  1210,  1442,  1215,  1217,
       0,  1229,  1462,  1462,  1224,  1230,  1247,  1259,  1261,  1251,
    1252,  1253,  1257,  1254,  1258,  1255,  1256,  1250,  1700,  1304,
       0,  1301,  1302,  1296,     0,  1289,  1937,  1936,     0,  1886,
    1314,  1314,  1437,     0,  1704,  1334,     0,   739,     0,  1687,
    1359,  1360,     0,  1363,  1366,  1370,  1364,  1454,  1789,     0,
     487,   484,   485,     0,  1670,   319,   524,  1840,  1841,  1627,
    1628,   541,   536,   540,   539,   362,   555,   528,   533,  1597,
     678,  1595,  1596,   677,   694,   700,     0,   697,   722,   723,
     732,   750,     0,     0,  1422,   836,   838,   837,  1423,   747,
    1421,   820,  1432,  1557,  1433,   747,  1431,  1616,   880,  1695,
    1588,  1589,  1918,  1919,   927,   747,  1853,  1828,   924,   923,
     919,     0,  1708,  1709,  1710,  1711,  1712,  1713,  1714,  1715,
    1707,  1457,     0,  1000,   999,  1002,     0,  1600,  1601,  1001,
       0,   971,  1432,  1523,  1432,  1523,   910,   911,     0,   915,
     914,   916,  1034,  1040,  1030,  1064,  1068,  1079,  1082,  1083,
    1810,  1075,  1893,  1080,  1131,  1131,     0,  1116,  1114,  1115,
    1120,  1281,     0,  1275,  1822,  1432,  1150,  1159,     0,  1183,
       0,     0,  1197,     0,  1446,   747,  1441,  1218,   747,   747,
    1231,  1303,  1293,  1297,  1298,  1299,  1300,  1291,  1312,  1315,
    1313,   747,  1322,  1439,  1829,  1432,  1432,   741,  1348,  1686,
    1362,  1818,  1368,  1818,  1437,   747,   747,  1408,  1418,  1449,
    1450,  1417,  1414,  1413,  1836,   486,   480,  1542,   535,  1924,
    1925,   537,   364,   556,   692,   690,   693,   691,   695,   696,
       0,   672,   698,   699,     0,   750,   842,   847,  1829,   849,
     850,   851,   874,  1829,   852,   853,   854,   855,   856,     0,
     857,   858,   860,   861,   862,     0,   863,   848,  1790,   864,
     873,   867,   844,   845,   866,   806,  1425,   881,  1435,   747,
     901,   926,     0,   918,  1934,  1935,  1459,   982,  1009,     0,
    1008,     0,   912,  1084,  1811,     0,     0,  1112,  1123,  1131,
    1825,  1825,  1132,     0,     0,  1284,  1280,  1274,  1144,  1158,
       0,  1191,  1829,  1454,     0,     0,  1192,     0,  1196,  1447,
    1225,  1232,  1438,   747,  1436,     0,  1336,  1335,  1374,   740,
       0,  1361,     0,  1818,  1365,     0,  1357,  1451,  1452,  1448,
    1837,  1838,  1412,  1543,     0,  1829,  1829,     0,  1829,   542,
     543,   544,   545,   546,   547,     0,   558,   675,   676,     0,
       0,     0,   865,  1829,  1458,  1458,  1791,     0,   846,   928,
     920,  1432,  1432,     0,  1094,  1130,  1826,     0,     0,  1829,
    1282,     0,     0,  1272,  1276,     0,     0,  1187,  1200,  1444,
    1445,  1199,  1195,  1193,  1194,  1440,  1329,  1382,   742,  1367,
       0,  1371,  1944,  1943,  1829,     0,     0,  1946,     0,  1829,
    1829,     0,   538,  1878,     0,   869,   868,     0,   871,   870,
     872,  1598,  1599,  1011,  1010,  1085,  1134,  1133,     0,  1285,
    1829,  1462,  1198,  1443,  1405,  1404,  1383,  1375,  1376,  1790,
    1377,  1378,  1379,  1380,  1403,     0,     0,  1369,     0,   553,
     549,  1945,     0,     0,   548,   609,  1823,   624,  1829,     0,
     608,  1829,  1853,   557,  1829,  1829,     0,   563,   565,   574,
     566,   568,   571,   559,   560,   561,   570,   572,     0,   575,
     562,   618,   567,     0,   569,   573,   564,  1912,  1913,  1850,
     731,   859,  1283,     0,  1184,     0,  1883,     0,  1855,   550,
     552,   551,  1824,   641,   626,   617,     0,   468,     0,     0,
       0,     0,     0,  1846,  1846,     0,  1462,     0,     0,   616,
     618,   620,   627,     0,   628,   636,   637,     0,   639,  1851,
    1852,   630,  1286,     0,  1884,     0,  1401,  1400,  1399,     0,
     625,   596,     0,     0,   592,   593,  1891,  1704,   598,  1570,
    1948,     0,     0,  1950,  1952,     0,  1956,  1954,   576,   581,
    1857,  1857,   578,   582,   577,   583,   642,     0,  1847,   610,
     610,  1846,  1846,   603,   622,   623,   619,   621,   638,   635,
     634,   632,   633,  1831,   631,  1402,  1917,  1916,  1866,  1395,
    1389,  1390,  1392,   594,   595,   472,   640,  1855,     0,   597,
    1571,  1947,  1951,  1949,  1955,  1953,  1859,  1858,   584,   588,
       0,   614,   612,   604,   610,   613,   606,     0,     0,   629,
    1867,  1855,  1398,  1393,  1396,     0,  1391,   464,     0,   600,
     587,   579,   585,   591,   590,   580,   589,     0,   611,   605,
     607,     0,  1397,  1394,     0,   463,   602,   599,   601,     0,
     615,  1388,  1385,  1387,  1386,  1381,  1384,   465,   586
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2476, -2476, -2476, -2476, -2476,  2237, -2476, -2476, -2476,  1063,
   -2476,  2197, -2476,  2156, -2476, -2476,  1045, -2476, -2476, -2476,
    1524, -2476, -2476,  1435,  2223, -2476, -2476,  2124, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,  2051,
    1061, -2476, -2476, -2476, -2476, -2476,  2107, -2476, -2476, -2476,
   -2476,  2047, -2476, -2476, -2476, -2476, -2476, -2476,  2179, -2476,
   -2476, -2476, -2476,  2035, -2476, -2476, -2476, -2476,  2019, -2476,
   -2476,  1003, -2476, -2476, -2476, -2476, -2476,  2108, -2476, -2476,
   -2476, -2476,  2083, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476,  1129, -2476, -2476, -2476,  1647,
   -2476, -2476, -2476, -2476, -2476, -2476,  1741, -2476,  1849, -2476,
   -2476, -2476,  1758,  1728, -2476,  1720, -2476, -2476, -2476, -2476,
     357, -2476, -2476,  1982, -2476, -2476, -2476, -2476, -2476,  1844,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476,  1239, -2476, -2476, -2476,  1490,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476,   656, -2476, -2476,  1778, -2476,  -769,
    -841, -2476, -2476, -2476,   631, -2476, -2476, -2476, -2476,   204,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -1433,   814,  1526,
     625,   672, -1429, -2476, -2476, -2476,  -963, -2476,  -462, -2476,
   -2476,   861, -2476,   373,   599, -2476,    80, -1428, -2476, -2476,
   -1426, -2476, -1425, -2476, -2476,  1492, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476,   277, -1221, -2476, -2476, -1168, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2475, -2476, -2476, -2476, -2476,  -376, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476,  -381, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476,  1429, -2476, -2476, -2476, -2128,    59,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476,  1248,   338, -2476,   191, -2476, -2476, -2476, -2476, -1844,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -1449, -2476, -2476,
    -710, -2476,  1497, -2476, -2476, -2476, -2476, -2476, -2476,  1058,
     525,   528, -2476,   446, -2476, -2476,  -117,  -100, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476,   498, -2476, -2476,
   -2476,  1053, -2476, -2476, -2476, -2476, -2476,   810, -2476, -2476,
     208, -2476, -2476, -1279, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476,   811, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476,   790, -2476, -2476, -2476, -2476, -2476,    31, -1795, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476,   770, -2476, -2476,   769, -2476, -2476,   441,   213, -2476,
   -2476, -2476, -2476, -2476,  1012, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476,    17,   733, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
     727, -2476, -2476,   196, -2476,   422, -2476, -2476, -1993, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476,   982,   721,   189, -2476, -2476, -2476, -2476, -2476,
   -2476, -1504,   981, -2476, -2476, -2476,   184, -2476, -2476, -2476,
     403, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476,   359, -2476, -2476,
   -2476, -2476, -2476, -2476,   698,   177, -2476, -2476, -2476, -2476,
   -2476,  -157, -2476, -2476, -2476, -2476,   381, -2476, -2476, -2476,
     962, -2476,   961, -2476, -2476,  1184, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476,   156, -2476, -2476, -2476, -2476,
   -2476,   951,   369, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476,    -8, -2476,   371, -2476, -2476,
   -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
    -386, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476, -2476,
    -167, -2476,   665, -2476, -2476, -1637, -2476, -2476,  -361, -2476,
   -2476, -1696, -2476, -2476,    -9, -2476, -2476, -2476, -2476,  -105,
   -1705, -2476, -2476,    -5, -1873, -2476, -2476, -1999, -1583, -1087,
   -1482, -2476, -2476,   780, -1285,   181,   193,   195,   197,   491,
     129,  -773,   335,   569, -2476,   648,  1782, -1418,  -999,  -903,
     989, -1575,  -387,  -965, -2476, -1334, -2476, -1068, -1420,   871,
   -2476,   -96,  2059, -2476,  1671,  -558,    13,  2212, -1082, -1053,
    -886,  -843, -2476, -1102, -1035, -2476,   426, -1321, -1910, -1100,
    -174, -1679, -2476, -2476,   638, -1135, -2476,  -896,   457,  -637,
   -2476, -2476,  -101, -1216,  -778,  -116,  2102, -1066,  2139,  -661,
    1176,  -553,  -676, -2476, -2476, -2476,    39,  1391, -2476, -2476,
     508, -2476, -2476, -2476, -2476,  1803, -2476, -2476, -2476, -2476,
   -2476, -2476, -2009, -2476, -2476,  1628, -2476, -2476,  -189, -2476,
    1975, -2476, -1194, -2476, -1341,  -198,  -641,  1021, -2476,  1885,
   -1461, -2476,  -783, -2476, -2476,   -46, -2476,     3,  -589,  -363,
   -2476, -2476, -2476,   295, -1320,  -247, -2476, -1215, -1155,  -304,
    2183,  1951, -2476, -2476,  -955, -2476, -2476,  1091, -2476, -2476,
   -2476,   448, -2476,   291, -1969, -1500, -2476, -2476, -2476,  -146,
   -2476,   503, -1422, -2265, -2476, -2476, -2476, -2476,  -123, -2476,
   -2476,  1692, -2476,  1848, -2476, -2476, -2476,   818, -2476, -1590,
    -237, -2476, -2476, -2476, -2476, -2476, -2476
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    30,
      12,    31,    44,    45,    34,    35,    19,   320,   432,   623,
      32,    50,    14,    25,    37,    95,   131,   132,    20,    29,
      41,    69,    70,   148,   208,   267,    71,   145,   194,   195,
     196,   197,   198,   199,   200,   331,   201,    72,   146,   205,
     206,   207,   262,   304,   263,    73,    74,    75,    76,    77,
     116,   157,   276,   158,    78,   133,   237,   238,   239,   324,
     343,   240,   717,    79,   121,    80,   150,   151,   152,   270,
      81,   177,   178,    82,    83,   244,    84,    85,    86,    87,
      88,    89,    90,   123,   224,   165,   225,   335,   348,   373,
     374,   479,   480,   440,   513,   506,   375,   469,   376,   583,
     377,   378,   379,   380,   381,   521,   546,   382,   383,   384,
     385,   386,   517,   543,   544,   584,   387,   388,   417,   389,
     452,   285,   286,   287,   288,   319,   289,   315,   425,   426,
     459,   341,   355,   399,   433,   434,   503,   435,   535,   568,
     569,   844,   570,  1707,  1032,   777,   571,   572,   711,   850,
     573,   574,   845,  1025,  1026,  1027,  1028,   575,   576,   577,
     578,   612,   461,   548,   462,   463,   497,   498,   555,   499,
     532,   533,   596,   772,   831,   832,   833,   834,   835,   500,
     691,   595,   669,   670,   671,   809,   672,   673,   674,   675,
     676,   677,   678,  2609,  2785,   679,   799,   968,  1174,   797,
    1413,  1416,  1417,  1685,  1682,  2201,  2202,   680,   681,   753,
     682,   683,   684,  1015,   805,   806,  1210,   685,   686,   496,
     590,   525,   620,   552,   723,   790,   854,  1218,  1457,  1714,
    1715,  2004,  2005,  2006,  2007,  1716,  2211,  2212,  2368,  2489,
    2490,  2491,  2492,  2493,  2494,  2001,  2216,  2496,  2553,  2613,
    2614,  2698,  2771,  2775,  2615,  2684,  2616,  2739,  2787,  2617,
    2618,  2753,  2754,  2619,  2620,  2621,  2659,  2660,  2645,  2661,
    2622,  2623,  2723,  2724,  2664,  2665,  2666,  2624,  2625,  2626,
     594,   791,   857,   858,   859,  1220,  1458,  1750,  2378,  2379,
    2380,  2384,  1751,  1752,   726,  1465,  2030,   727,   862,  1041,
    1040,  1223,  1224,  1225,  1462,  1758,  1043,  1760,  2230,  1165,
    1398,  1399,  2347,  2469,  1400,  1401,  1966,  1822,  1823,  2075,
    1402,   794,   915,   916,  1115,  1231,  1232,  1786,  1469,  1524,
    1766,  1767,  1763,  2032,  2234,  2412,  2413,  2414,  1467,   917,
    1116,  1238,  1481,  1479,   918,  1117,  1245,  1804,   919,  1118,
    1249,  1250,  1806,   920,  1119,  1258,  1259,  1534,  1858,  2095,
    2096,  2097,  2066,  1134,  2260,  2254,  2420,  1490,   921,  1120,
    1261,   922,  1121,  1264,  1496,   923,  1122,  1267,  1501,   924,
     925,   926,  1123,  1277,  1510,  1513,   927,  1124,  1280,  1281,
    1518,  1282,  1522,  1850,  2090,  2281,  1833,  1847,  1848,  1516,
     928,  1125,  1287,  1530,   929,  1126,  1290,   930,  1127,  1293,
    1294,  1295,  1539,  1540,  1541,  1868,  1542,  1863,  1864,  2101,
    1536,   931,  1128,  1304,  1135,   932,  1129,  1305,   933,  1130,
    1308,   934,  1131,  1311,  1875,   935,   936,  1136,  1879,  2108,
     937,  1137,  1316,  1583,  1888,  2111,  2298,  2299,  2300,  2301,
     938,  1138,  1318,   939,  1139,  1320,  1321,  1589,  1590,  1900,
    1591,  1592,  2122,  2123,  1897,  1898,  1899,  2116,  2307,  2442,
     940,  1140,   941,  1141,  1330,   942,  1142,  1332,  1599,   943,
    1144,  1338,  1339,  1603,  2137,   944,  1145,  1342,  1607,  2140,
    1608,  1343,  1344,  1345,  1914,  1916,  1917,   945,  1146,  1352,
    1929,  2322,  2453,  2527,  1615,   946,   947,  1147,  1354,   948,
     949,  1148,  1357,  1622,   950,  1149,  1359,  1930,  1625,   951,
     952,  1150,  1362,  1631,  1933,  2154,  2155,  1629,   953,  1151,
    1367,   159,  1643,  1368,  1369,  1952,  1953,  1370,  1371,  1372,
    1373,  1374,  1375,   954,  1152,  1325,  2311,  1593,  2447,  1902,
    2125,  2445,  2523,   955,  1153,  1383,  1955,  1651,  2170,  2171,
    2172,  1647,   956,  1385,  1653,  2338,  1159,   957,  1160,  1387,
    1388,  1389,  2182,  1657,   958,  1161,  1392,  1662,   959,  1163,
     960,  1164,  1394,   961,  1166,  1403,   962,  1167,  1405,  1671,
     963,  1168,  1408,  1675,  2190,  2191,  1971,  2193,  2352,  2474,
    2354,  1673,  2470,  2537,  2577,  2578,  2579,  2795,  2580,  2730,
    2731,  2765,  2581,  2678,  2582,  2583,  2584,   964,  1169,  1410,
    1620,  1972,  1922,  2357,  1677,  2039,  2040,  2240,  1519,  1520,
    1827,  2055,  2056,  2246,  2342,  2343,  2464,  2146,  2528,  2147,
    2326,  2358,  2359,  2360,  1820,  1821,  2074,  2275,  1314,  1315,
    1297,  1298,  1569,  1570,  1571,  1572,  1573,  1574,  1575,   997,
    1197,  1419,   999,  1000,  1001,  1002,  1003,  1269,  1504,  1355,
    1363,   395,   396,  1035,  1376,  1377,  1580,  1346,  1252,  1253,
    2366,   482,   301,   699,   700,   483,    98,   153,  1306,  1271,
    1240,  1482,  2688,  1431,  1004,  1791,  2050,  2124,  2249,  1262,
    1347,  2220,  2560,  2276,  1924,  2221,  1326,  1380,  1242,  1006,
    1272,  1273,   748,   801,   802,  2222,   271,  2214,   179,  1243,
     774,   775,  1244,  1009,  1010,  1011,  1205,  1178,  1439,  1435,
    1428,  1420,  1422,   501,  2192,   539,  1485,  1802,  2061,  1618,
    2174,   282,  1507,  1816,  2270,   811,  1114,  2199,  2507,   610,
     339,   692,  1471,   423,  1226,   202,   115,   393,  2435,   337,
     352,  1033,   784,  2130,  2643,  2517,  2261,    96,   214,   414,
    2482,  2000,   780,   402,  2709,  2017,  2671,   815,  2663,  2748,
     218,   488,  2761,   168,   390,   744,   102,   732,   688,   848,
    2675,  2180,   350,  1582,   971,  1312,   407,   742,  1211,  1351,
     404,   391,  1768,  1788,  2629,  1505,  2728,  2255,   184,   703,
    2371,   721,   347,   602,  1498,  2426,  2178,   540,   203,  2544,
    2550,  2701,  2702,  2703,  2704,  2705,  1718
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     160,   215,   139,   415,   139,  1172,   427,   138,   428,   141,
     139,   696,   697,   966,  1037,   147,  1379,   793,  1415,  1473,
     747,  1454,   855,  1013,  1285,  1744,  1915,   998,  1911,  1746,
    1747,   773,  1748,  1749,   139,   245,  1754,  1812,   427,   180,
    1296,   437,  1639,  2242,  1632,  1655,   704,  1871,   465,  2225,
    1251,  1499,  2086,   788,  2729,  1317,  1865,  2148,  1508,   103,
     104,   105,  1796,   268,   782,   714,    99,   111,  2773,  1378,
    1361,   464,  1537,   107,  -707,   211,  1307,   279,  2653,   755,
     264,  -705,  2175,   246,  1307,  1222,  2279,  1892,   860,   855,
    1438,  2084,   321,  1870,   807,  1222,   345,   114,  1307,  2382,
    2392,   220,   134,   135,  1449,   136,  1652,  2654, -1871,   259,
     143,   144,  1595,  1586,  1856,  1789,  1468,  2003,  2070,   161,
     215,  1605, -1855,  1270,  1008,   530,   708,   838,   838, -1607,
    2770,  2310, -1889,  1878,  2252,   297,   169,  1893,  1787,  1222,
    2209,  2044,   291,    94,   807, -1613,   842,  1761,  1547,   481,
    2454,   392, -1798,  1023, -1798,  2443, -1902,   466,  1912,    42,
    2093,  1492,  2256,   219,   709,  1645,   411,  2374,   430, -1902,
    2455,  1860,  2504,  1319,   221,  2345, -1608,   689,   838,   327,
    1874,  1251,  1907,     4,   412,  1222,  2231,  1831, -1611,  2079,
    2746,  2287,  1860,   -96,   251,   745,   129,  2456,   758,  1395,
    1334,  2289, -1834,  2304,  2676,  1030,   258,   413,   813,   701,
     182,  2132, -1855,  1483,   283,  -707,    23,   751,  1190,  -707,
    1683,   536,  -705,   419,  2457, -1802,  -705, -1902,  2375,  1460,
    2552,   274,   275,   557,  1276,  2756,  1810,  2774,  1283,  1208,
    1920,   154, -1613,  2149,  1327,  1964,  1360,  1828,  2440,  1609,
     558,   418,   295,  1579,  1335,   761,  1327,  1894,  2369,   800,
     299,  2370,  1336,  1811,  1579,  1891,  1411,  1610,  2185,  1921,
    2150,   360,   536,  1241,   416,  1393,  -707,  2441,  2348,  2778,
     204,  1284,  1288,  -705,   394,   311,   212,  1022,  2628,  2786,
     559,  1313,  1637,  1460, -1902,   314,    94,  1461,  1331,  1333,
     130,   183,  1181,  1248,    24,  1790,  2655,   413,  2499,  1194,
    1684,  2437,  2438,  2747,  1008,  1008,  1008,  1390,  1241,   702,
    1895,  1307,  1248,  1514,  2361,  1579,   154,     5,  1194,  2080,
     284,   243,   137,  1969,  2134,  2223,  1008,   -96, -1902, -1798,
    1975,  1179,   493,   139,  1246,   139,   139,  1968,   690,  1337,
     485,   486,   139,  1585,  2235,  2236,  1212,   491,  2237,  2376,
       5,  1461,   752,  2248,  2377,  1194,   410,   -35,   283,   139,
    2072,   280,   507,   507,   504,   507,  1194,  2076,   507,   514,
    2109,   467,  2059,  1266,  1865,  2257,  2385,  1865,  1587,  2112,
     431,  1194,  1194,   281,   424, -1636,  2439, -1802,  2210,  2273,
    1266,   137,   761,  1623,  2274,   436,  2241, -1802,  1414,   800,
    1194,  1427,  1427,  1427,   444,   445,  -712,   446,   447,    94,
    -707, -1798,  1366,   453,  1440,  1442,   560,  -705,  2105,  1664,
     759,  1448,  2444,   243,  2253,  1606,   468,   561,  1903,  2458,
     470,  1008,   139,   139,   843,  1562,  2515,   585,   585,   137,
    1296, -1802,  1012,   226,  2085,  1576,  2043,   492,  2372,   763,
     710,  1588,   137,  1324,   449,  1213,  1214,  1581,  2258,  1350,
    -710,   137, -1889,  2290,   260, -1871,   715,  2410,  1323, -1834,
     139,  1270,   694,  2151,   284,   585,  1596,  1266,  1829,   705,
     781,  2102,  1350,  -712,  1944,  2667,  1509, -1802,  2677,  1008,
    1008,  1008,  1945,   139,   766,  2558,  2559,   536,  1008,  1008,
    1008,  1434,  1876,    97,   767,  1906,  1434,  2098,   542,  1640,
    2364,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  2067,
    1434,  1008,  1396,  1270,   861,  2505,   746,   265,   579,  1396,
   -1802,   562,   563,  1919,  1307,  1390,  2417,  -710,   346,   322,
   -1802,  1994,  1896,   227, -1902,   137,   564,   749,   565,   597,
    1477,   599,  1538,   149,   604,   606,   800,   608, -1829,   137,
    2329,   137,   716,   292,   137,  1455,  1024,  2656,  2117,  2053,
    2531,   394,  2057,  1350,  1579,  1397,  2428, -1701,  2430,  2238,
     763,   613,  1397,  1985, -1802,  1523,   768,  2415,   687,  1475,
    2720,  1270,   261,  1509,   537,  2244,   763,   763,  1194,  1861,
     707,   368,  1019,  1012,   243,  2156,  2291,  1865,  1199,  2448,
    1862,   137,  2259,  1200,  2271,   712,   505,   243,   255,   979,
    1861,   980,  2086,   512,  1396,   766,   849,  1797,   228,  1195,
   -1802,  1862,  1502,   566,   840,   767,   979,  2209,   980,  2466,
    2467,   766,   766,  2294,  2010,   537,   137,  2296,  1195,  1830,
     841,   767,   767,  1923,  1270,   846,   769,  1350,  1946,  2173,
     754,  1986,   216,   127,  2282,  1825,  2284,  1248,  2736,  1456,
    1709,   117,   969,   229,   305,   851,   851,  1397,  1855,  1857,
     567,  1196,    52,   230,   763,  1195,  2324, -1902,  1463,  1029,
    1947,  2497,  1014,   986,  1260,  2498,  1195,   231,  1710,  1711,
   -1681,   786,   770,     3,   787,  2315,   454,  2735,   328,  2104,
     986,  1195,  1195,  1948,   154,  1266,  1576,   768,  1547,  1724,
    1817,  1725,  1814,   979,  1265,   980,  1278,  1266,  2065,   766,
    1195,    53,  -520,   768,   768, -1902,   450, -1683,  2530,   767,
    2063,  1366,   211,  1230,  2098,  2049,   137,  1908,  1690,  1353,
     222,  1358,   771,   154,  2176,  2791,  1384,  2228,  2346,  1132,
    -520,  -520,   128, -1677, -1674,   232, -1902,   587,  1949,    54,
    1406,    55,  2355,    56,  2262,  2218,  1132, -1900,    15,  2721,
    2416,    57,  1702,  2305,  2011,   518,  2418,   769,  1942,   515,
      16,  1270,  2436,  1724,  1892,  1725,  2421,   986,   451,  1957,
     187,   187,  1961,   769,   769,  2563,  2564,   188,   188,  2792,
    1965,  2555,  2556,  2131,  2573,  1958,  1531,  2793,   306,  1008,
     187,   768,  1468, -1804,    27,  1209,  1792,   188,  1950,   516,
    1266,  1464,    18,   770,  2521,   233,  1641,    58,   234,   235,
      94,  1171,  1307,  1579,  1893,  1819,  1182,  1183,   607,   770,
     770,  2168,  1813,  1188,  2169,  2363,   217,  1817, -1798,  2520,
   -1798,  2350,   243,  2751,  1365, -1902,  2459,  1493,   137,  2460,
    2461,  2752,  1642,  2331,  -520,   137,   243,   137,   137,  1511,
     537, -1575,  2462,   771,  1266,  2206,  1705,  2549,   329,   137,
     730,   769,   588,  1987,   137,  2210,  2477,  2478,   741,   771,
     771,   351,  -520,  1440,  2794,  1440,  1764,  1217,  1008,  2356,
       5,   187,   139,   139,   816, -1902,   223,  1990,   188,   137,
    1638,   519,   763,  2177,  2722,  1951,  2209,   761,  1195,  1503,
      60,   236,  1712,  1927,   763,  1133,  2569,   770,  1031,  2277,
    2277,   137, -1902,   243,   730,  1959,   137,   129,  1926,   330,
     154,  2522,  1133,   212,   817,   818,   819,   820,   821,   300,
    2509,   979,   731,   980,  1894,  1366,   137,   766,   762,   471,
     472,   473,  2219,   979,  2128,   980,    61,   767,  2634,   766,
   -1679,   137,  1366,   154,  1409,   856,  2218,   771,  1765,   767,
    1199,   634,   635, -1575,  -520,  1200,  1532,   137, -1125, -1816,
    1008,  2375,  1008,  2293,  2535,   137,  2145,  1254,  -702,  1434,
    2058,  1274,   189,   189,  1008,  1562,   733,  2362,  1274,  1309,
     728,   520,  2118,  2263,  2264,  2265,  1274,  1895,   405,  1328,
     515,  2422,   189,  1993,  1349,   986,  1356,   763,  1356,  1364,
    1381,  1328,  1927, -1125,    28, -1798,  1484,   986,    21,    22,
    2699,   130,   856, -1125,  2632,  2328,   137,  1926,  1356,   768,
    1453,    33,  1765,  2713,  1713,    64,  2586,    46,  1579,    36,
     516,   768,  2119,  2129,  1665,  1491,   979, -1814,   980,   406,
     729,   243,   766,  2283,    43,  2285,   190,   190,  2266,   474,
    2158,   763,   767,   394,   822,   823,   824,   825,   826,   827,
     828,   647,   648,   475,   316,  2024,   190,  1819,    67,  1497,
    2607,  1996,  1997,  1818,  2608,  2610,  2381,  2611,  2612,  2672,
    1488,  2627,  1255,   189,  1270, -1902,  -520, -1798,   118,   769,
     979,   763,   980,  1666,   438, -1125,   766,  2377,  1254, -1814,
    1154,   769,   191,   191,  2051,    43,   767,   192,   192,  -702,
     986, -1902, -1902,  -702,  1851,  1852,  1853,  1854,  1274,  2574,
     243,  1584,   191,   764,   765,   317,   318,   192,  1998,  1999,
    2325, -1902,  2321,  1937,   768,   770,   766,  1270, -1902, -1829,
     439,    68,   154,  1626,  2210,  2025,   767,   770,   730,   476,
     730, -1902,    39,  2495,   589,  1274,  2796,   190,  2575,   254,
     252,   477,   137,   526,   986, -1125,  1274,    94,  2219,   228,
    -702,   361,  2267,  2268,  2681,   357,  1291,  2269, -1902,   137,
     351,  1494,  2215,    40,   730,   771,   763,  1292,   768,  1654,
     358,   137,  1155,  2209,  1678,  2576,   619,   771,  1881,  2054,
     359,  1882,  1883,   362,   769, -1902,   253,  1005,   829,  2732,
    1364, -1125,   255,   191,   229,  2120, -1685,  2682,   192,  1896,
     735,   830,   737,  1274,   230, -1855,   722,  1274,   768,  2247,
    2136,   766,   193,  1156,   170,  1256,   360,  1257, -1575,  2690,
    2547,   767,   614,  1549,  1550,   325, -1575, -1575,  1414,  2320,
     770, -1575,  2051,   478,    49, -1125,   739,   718,   769,  2317,
    2732, -1125,  1157,   763,   139,    94,   763,   253,  2657,  1680,
     298,    48,  1976,  1648,   615,  2691,  1616,   344,  2506,   171,
     756,  1299,  1551,  1552,  2710,  2484,  2318,  2339,  2339,   172,
     154,   154,  2542,  2585,   137,  2485,  2711,  1497,   769,  2762,
     771,  1495,  2543,   139,   770,   441,   232,  2635,   766,   400,
     725,   766,   757,   442,  -702,  2272,    51,  2486,   767,  2277,
    2277,   767,  2561,   768,  2373,  2712,  1617,  2589,  2590,  1798,
     243,  2763,  1649,  2594, -1798,  1650,   719,  2649,   720,   836,
     836,  2757,  2758,   155,   770,   156,   839,  2487,   137,  2251,
    2741,  2764,    93,  2683,   771,  2337,   243,   394,  1158,  2207,
    2208,  2488,  1880,  2054,    97,  1881,  2243,  2742,  1882,  1883,
    2639,   173,  2591,  1437,  2640,  2641,   233,   600,  2595,   601,
    2511,  1798,  2512,  1199,   137,   100,   837,   837,  1200,  2743,
     836,  2562,   361,   769,   771,  2432,  1020,  1005,  1005,  1005,
     768,    26,  2251,   768,  2658,  1704,  1910,  2631,  1300,  1301,
    1717,  1753,  1199,  1755,  2088,  2089,  2744,  1200,    47,  1005,
   -1902,   632,  2077,   243,   362,  1302,  2547,    91,  2726,  1254,
    1931,  1938,  2727,  2679,   101,  -234,  2087,   837,  2745,   770,
    2542,   174,  1724,  1771,  1725,  1772,  1274,  2121,  1699,  1798,
    2543,  2210,  1008,  1201,  2204,  1956,  2424,  2023,  1199,  2425,
    1254,  2548,  1202,  1200,  1199,  1884,  1885,  2033,  2034,  1200,
     769,  2037,   236,   769,   428,  1199,    13,  2251,  2542,  1303,
    1200,    13,  1940,   137,  1443,  1444,  1274,   175,  2543,   771,
     363,  1886,  1887,  1941,  1198,   364,  1563,  1686,  1564,  1967,
    1688,  2480,    94,  1199,  2481,  2662,  1691,  2668,  1200,  2692,
    1695,  1459,  1798,  2693,  2694,  1459,   770,  1697,  2472,   770,
    2475,  1700,  1233,   155,  1247,   156,   365,  1263,   598,   106,
    1199,  1286,  2768,   605,   366,  1200,   719,   176,   720,   108,
     139,  2714,  2715,   109,  2662,  1981,  1322,   367,    52,   110,
    2668,  2719,  1348,   508,  2695,   510,  2781,  2525,   511,  1669,
     137,  1670,   112,  2687,  2689,  2012,   771,  2013,  2018,   771,
    2696,  2697,  2081,  1404,  2082,  1348,   368,   113,  1771,   369,
    1772,   114,  1005,  1005,  1005,   120,  2596,   370,  1189,  2026,
    1191,  1005,  1005,  1005,  1432,  2251,   122,    53,  -231,  1432,
    2669,  2670,  1954,  2740,  1005,  1005,  1005,  1005,  1005,  1005,
    1005,  1005,   650,  1432,  1005,   124,  1418,  1421,  1424,   126,
    2565,   137,  2750,   140,  2566,  2567,   142,   149,   371,  2597,
     162,   372,  1884,  1885,  2686,    54,   163,    55,   167,    56,
    2540,   181,  1474,  1429,  1430,  1274,   164,    57,  1450,  1274,
     185,   186,  1274,  1834,   204,  1254,  1835,   193,  1886,  1887,
     247,   242,  1995,  1836,  1837,  2598,  1348,   248,  1263,   734,
     736,   738,   740,  2009,   249,   250,  1978,   257,  1980,   273,
    2014,  1982,  1983,  1984,   269,  2599,   278,  1988,  1769,  1770,
    1991,  1992,  2790, -1591, -1591, -1591, -1591,   428,  1525,  1526,
    1527,  1528,   154,    58,   294,  1274,   296,   654,   300,  2027,
     302,  1838,   303,  2600,  2313,  2138, -1590, -1590, -1590, -1590,
    1445,  1446,  1447,   307,   308,   312,   309,   313,   326,   333,
     334,  1771,   336,  1772,   338,  1773,   340,  2159,  2160,  2161,
    2162,  2163,  2164,  2165,  2166,   349,   342,   351,   353,   356,
    1348,   354,   394,   392,  1274,  1274,  1274,   397,   398,   401,
     403,   408,   187,   409,    59,   420,  2183,   243,  2071,  1774,
    1775,  1776,  1633,   421,   422,  2183,  1931,   429,   413,   455,
    1839,   456,   458,  -352,   484,   659,   460,  2078,   487,   494,
     490,   495,   502,  2083,  2601,   509,    60,   522,  1660,   523,
     524,   528,   534,   549,   545,   551,   550,   553,   554,  1840,
    -365,  2602,  1834,  1274,   556,  1835,   580,   582,   592,  1777,
     591,  1778,  1836,  1837,   593,   609,   611,   618,  1779,   617,
    1841,  1780,   621,  2603,   622,   693,   695,   698,   706,   724,
     743,   741,    61,   139,   750,    62,   760,   776,  2205,   779,
     783,   785,   792,   795,  2604,   796,   798,   800,  1328,   808,
     803,  2229,   810,  1328,   814,   847,   840,   853, -1685,   967,
    1838,  1012,  1017,  2605,   970,  1633,  1021,  1018,  1034,  1039,
     668,  2606,  1328,  1328,  1042,  1842,  1328,  1143,  1162,  1170,
    1173,  1203,  1215,  1175,  1228,  1176,  1177,  1184,  1185,  1219,
    1186,  1187,  1192,  1289,  1412,  1204,  1206,  1207,  1274,  1414,
      63,  1453,  1005,  1310,  1221,  1451,  1229,  1781,  2278,  2278,
    1782,  1452,  1008,  1008,  1466,  1425,  1007,  1328,  1426,  2203,
    1478,    64,  1328,  1328,  1328,  1472,  1500,  1366,  2138,  1839,
    1843,  1274,  1487,  1274,  1517,  1489,  1506,  2323,  1512,   441,
    1436,  1515,  1533,  1529,  1577,  1535,    65,  1581,    66,  1594,
    1598,  1600,  1008,  1602,  1597,  1611,  1613,  1614,  1840, -1593,
    2224,  1612,  2226,  1619,    67,  1621,  2227,  1624,  1630,  1628,
    1274,  1008,  1274,  1366,  2232,  1644,  1646,  1222,  1656,  1841,
    1661,  1668,  1672,  1633,  1674,  1676,  1681,  1756,  1687,  1689,
    1844,  1005,  1706,  1692,  1693,  1694,  1696,  1757,  1759,  1800,
    1801,  1703,  1698,  1845,  1701,  1762,  1793,  1918,  1708,  1803,
    1805,  1248,  1815,  1819,  1826,  1849,  1925,  1832,  1517,  1877,
    1866,  1869,  1890,  1905,  1913,  1274,  1587,  1934,  1928,  1932,
    1936,  1943,  1963,  2016,  1842,  2019,  2002,    68,  1328,  1970,
    2038,  1008,   139,  2022,  2029,  2031,  2028,  2367,  2047,  1764,
    2046,  2045,  2041,  2048, -1563,  1962,  2060,  2064,  2068,  2073,
    1468,  2069,  2092,  2094,  2099,  1633,  2042,  2100,  2106,  2312,
    2107,  2110,  2114,   428,  2759,  2139,  2113,  2141,  2133,  2142,
    2145,  2152,  2153,  1005,  2186,  1005,  2179,  1846,  2187,  1843,
    2188,  2189,  1432,  2198,  1180,  2200,  2239,  1005,  2233, -1612,
    2280,  2245,  2297,  1783,  2306,  2309,  1007,  1007,  1007,  2325,
    2327,  2341,  2314,  2344,  2303,  2008,  2351,  2353,  2386,  2054,
    2349,  1274,   428,  1274, -1568,  1925, -1610,  2429,  1007,  2434,
    2449,  2419,  2450,  2431,  2452,  2468,  2451,  2020,  2473,  2463,
    2021,  2506,  2503,  2356,  2513,  2514,  2516,  2532,  2533,  1844,
    2519,   139,  2534,  1784,  1274,  2538,  2446,  2554,  2570,  2571,
    2630,  2591,  1845,  2638,  1785,  2642,  2637,  2644,  2673,  2674,
    2680,  2706,  2707,  2708,  1633,  2717,  2777,  2760,  2779,  2782,
    2780,  2784,  2789,    92,    17,  1274,   761,  2798,   125,    38,
    2052,   166,   256,   266,   119,   209,   277,   290,   210,   443,
     241,   547,   538,   713,   586,   139,   581,  2135,   323,   457,
    2483,  1216,  1745,  2767,  1679,   527,  2127,   852,  1974,  1328,
     804,  2365,  2217,  1328,  2716,  2718,  2383,  1038,  2288,  1227,
    1470,   965,  2036,  1007,  2035,  2508,  2091,  1016,  1275,  2502,
    2062,  1808,  1486,  2286,  1809,  1275,  1846,  1859,  1824,  1867,
    2103,  2427,  2292,  1275,  1578,  2433,  1889,  1901,  2308,  2115,
    1601,   972,  1909,  2316,  1604,  2319,  2143,  1275,  1274,  1935,
    1274,  2197,  2330,  2167,  1635,  1636,  1382,  2340,   973,  1659,
    2195,  2471,  2196,  1973,  2766,  2476,  2524,  2465,  2529,  1873,
    1627,  1007,  1007,  1007,  2479,  2333,  1633,  1633,   332,  1807,
    1007,  1007,  1007,  1433,   213,  2157,  2015,  2334,  1433,  2335,
     778,  2336,   310,  1007,  1007,  1007,  1007,  1007,  1007,  1007,
    1007,   293,  1433,  1007,   616,  2144,  1193,   812,  2278,  2278,
    2636,  2500,   448,  1633,   541,  2518,  2501,  2749,   272,  1328,
    1328,   489,  2302,  1328,  1328,  2126,  1328,  2181,   603,   428,
     789,  1904,  1476,  2700,     0,     0,     0,     0,     0,     0,
    2184,     0,     0,     0,     0,     0,     0,  2194,  2194,     0,
     974,   975,   976,     0,     0,     0,     0,     0,     0,   977,
       0,     0,     0,     0,     0,  1275,     0,     0,     0,     0,
     763,     0,  1263,     0,     0,  2526,     0,  2213,     0,     0,
       0,     0,  2008,  2008,     0,     0,     0,  1254,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1275,  2647,     0,     0,     0,     0,  2545,  2546,
       0,  2551,     0,  1275,     0,   766,     0,   981,   982,   983,
       0,     0,     0,   984,     0,   767,  2557,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2250,     0,     0,
       0,     0,  2568,     0,     0,     0,     0,     0,     0,     0,
    2685,     0,  1254,     0,     0,     0,     0,     0,     0,     0,
       0,  1634,     0,     0,   985,     0,     0,  2588,     0,     0,
    1275,     0,  2592,  2593,  1275,     0,     0,     0,     0,     0,
       0,  2295,     0,     0,     0,     0,  2733,  2734,     0,     0,
    2250,  1633,     0,  2633,     0,     0,     0,     0,  1254,  1633,
       0,     0,     0,     0,     0,     0,     0,   768,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1918,     0,
       0,  2646,     0,     0,  2648,     0,     0,  2650,  2651,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,     0,  2332,     0,  1254,
       0,     0,     0,     0,  -913,  1005,     0,  -913,     0,     0,
       0,     0,     0,     0,  1634,  2250,     0,     0,     0,  1633,
       0,     0,     0,     0,     0,     0,  1799,   769,     0,     0,
       0,     0,     0,     0,  2783,     0,     0,     0,  2797,   988,
     989,     0,   972,     0,  2008,     0,     0,  1222,     0,     0,
       0,  1007,     0,  1263,     0,     0,     0,     0,     0,   973,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   770,     0,     0,     0,     0,  1799,     0,
       0,     0,  -913,   993,     0,     0,     0, -1802,  2423,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -913,
       0,     0,     0,   994,     0,     0,     0,     0,   995,     0,
       0,     0,     0,     0,     0,   996,     0,   137,     0,     0,
       0,     0,     0,   771,     0,     0,     0,     0,     0,     0,
       0,     0,  1634,  2250,     0,     0,     0,     0,     0,     0,
    1007,     0,     0,  1275,     0,     0,  1799,     0,     0,     0,
       0,   974,   975,   976,     0,     0,     0,     0,     0,     0,
     977,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1275,     0,     0,     0,     0,     0,     0,
       0,  -913,  -913,  -913,     0,     0,     0,     0,  2213,     0,
    -913,     0,     0,     0,     0,     0,     0,     0,     0,  1799,
       0,  -913,     0,     0,  1634,     0,  1407,     0,   981,   982,
     983,     0,     0,     0,   984,     0,     0,     0,     0,     0,
       0,     0,  1007,     0,  1007,     0,     0,     0,     0,     0,
       0,  1433,     0,     0,  -913,     0,  1007,     0,     0,  2510,
    -913,     0,  -913,     0,     0,     0,  -913,     0,  -913,  -913,
    -913,     0,     0,     0,  -913,   985,  -913,     0,  1239,     0,
       0,  -913,     0,     0,  1268,     0,  1239,  1239,     0,     0,
       0,  1268,     0,     0,     0,     0,  1239,     0,     0,  1268,
       0,     0,  2536,  1239,  1239,     0,     0,     0,     0,  2539,
       0,     0,  2541,  1268,     0,  -913,     0,     0,     0,     0,
    -913,     0,  1239,  1239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1634,  -913,     0,     0,     0,     0,     0,
       0,     0,  1234,     0,     0,   761,     0,     0,     0,   987,
       0,     0,  1275,     0,     0,     0,  1275,     0,  -913,  1275,
       0,     0,     0,  2572,     0,     0,     0,     0,     0, -1802,
       0,     0,     0,     0,     0,     0,     0,  2587,     0,     0,
       0,     0,  2213,  2213,     0,     0,     0,     0,  2213,  -913,
       0,     0,     0,     0,  1263,     0,     0,     0,     0,     0,
     988,   989,  1239,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1275,     0,     0,     0,     0,     0,     0,     0,
     972,     0,  -913,     0,     0,  2213,     0,     0,  -913,  2213,
    2213,  1268,     0,     0,     0,     0,     0,   973,     0,     0,
    -913,  -913,     0,  2652,   993,  1239,     0,     0,     0,     0,
    1386,     0,     0,     0,     0,  1634,  1634,     0,   972,     0,
    1239,  1275,  1275,  1275,   994,     0,     0,     0,  1268,   995,
       0,     0,     0,     0,  -913,   973,   996,     0,   137,  1268,
       0,     0,     0,     0,  -913,  1005,  1005,     0,     0,     0,
    -913,  1239,  1634,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -913,     0,     0,     0,     0,  -913,
    2725,     0, -1802,     0,     0,     0,  -913,     0,  -913,     0,
    1275,     0,     0,     0,  -913,  1005,     0,     0,     0,   974,
     975,   976,     0,     0,     0,     0,  1268,     0,   977,     0,
    1268,     0,     0,     0,  1005,     0,  2755,  2755,     0,   763,
    1239,     0,     0,     0,     0,  1239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1658,  1340,   974,   975,   976,
       0,     0,     0,     0,     0,  2769,   977,     0,     0,     0,
       0,     0,  1236,     0,     0,  2772,  2776,     0,   979,     0,
     980,  2755,     0,     0,   766,     0,   981,   982,   983,     0,
       0,     0,   984,     0,   767,  2788,     0,     0,     0,  1237,
       0,     0,     0,     0,  1005,  1275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1341,     0,   981,   982,   983,     0,     0,     0,
     984,     0,  1795,   985,     0,     0,     0,     0,  1275,     0,
    1275,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   986,     0,     0,     0,     0,     0,     0,     0,
    1634,     0,     0,     0,     0,     0,     0,     0,  1634,     0,
    1239,   985,     0,     0,     0,     0,   768,  1275,     0,  1275,
       0,     0,     0,  1239,  1795,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1239,     0,     0,  1007,     0,     0,     0,     0,     0,
       0,     0,  1275,     0,     0,     0,     0,     0,  1634,     0,
       0,     0,     0,     0,     0,   987,   769,     0,     0,  1268,
       0,     0,  1795,     0,     0,     0,     0,     0,   988,   989,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   863,     0,     0,   864,     0,   865,     0,
       0,     0,     0,   866,     0,     0,     0,     0,     0,  1268,
       0,   867,   770,  1239,     0,     0,   988,   989,     0,     0,
       0,     0,   993,     0,  1239,     0,     0,  1239,     0, -1902,
       0,     0,     0,     0,     0,  1795,     0,     0,     0,     0,
       0,     0,   994,     0,   868,   869,     0,   995,  1275,     0,
    1275,     0,     0,     0,   996,   870,   137,     0,     0,     0,
     993,     0,   771,     0,     0,     0,   871,     0,     0,   872,
       0, -1178,     0,     0,     0,     0,     0,     0,     0,     0,
     994,  1275,     0,   873,     0,   995,     0,     0,     0, -1178,
       0,     0,   996,   243,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   874,     0,     0,     0,
       0,     0,  1275,     0,   875,     0,   876,     0,     0,     0,
       0,     0,     0,  -749,     0,  -749,  -749,  -749,  -749,  -749,
    -749,  -749,  -749,     0,  -749,  -749,  -749,     0,  -749,  -749,
    -749,  -749,  -749,  -749,  -749,  -749,  -749,   877,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   878,     0,
       0,     0,     0,   879,     0,     0,     0,     0,  1268,     0,
       0,     0,  1268,     0,     0,  1268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   880,
       0,     0,     0,     0,     0,  1275,   881,  1275,     0,   882,
     883,     0,     0,     0,     0,     0,     0,     0,     0,   884,
       0,     0,     0,     0,     0,     0,   885,     0,   886,     0,
       0,   887,     0,     0,     0,     0,     0,     0,  1268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   888,     0,     0,     0,   889,     0,
     890,     0,     0,     0,     0,     0,     0,  1268,  1268,  1268,
       0,   891,     0,     0,     0,     0,     0,     0,  -749,  -749,
       0,  -749,  -749,  -749,  -749,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   892,     0,
       0,     0,     0,   863,     0,  1239,   864,     0,   865,     0,
       0,   893,     0,   866,     0,     0,     0,     0,     0,     0,
       0,   867,     0,     0,     0,     0,  1268,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   894,   895,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   896,     0,     0,
       0,     0,     0,     0,   868,   869,     0,     0,     0,     0,
       0,   897,   898,     0,     0,   870,     0,     0,   899,     0,
       0,     0,   900,     0,     0,     0,   871,     0,     0,   872,
     901,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     902,     0,     0,   873,     0,     0,     0,     0,     0,   903,
       0,     0,     0,     0,  1007,  1007,     0,     0,   904,     0,
       0,     0,     0,   905,   906,     0,   874,   907,     0,   908,
       0,  1268,     0,     0,   875,     0,   876,   909,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -749,     0,     0,     0,  1007,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1268,     0,  1268,   877,   911,     0,
       0,     0,     0,  1007,   912,     0,     0,     0,   878,   913,
       0,     0,     0,   879,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -749,     0,     0,  1268,     0,  1268,   914,     0,     0,   880,
       0,     0,     0,     0,  1239,     0,   881,     0,     0,   882,
     883,     0,     0,     0,     0,     0,     0,     0,     0,   884,
       0,     0,     0,     0,     0,     0,   885,     0,   886,     0,
       0,   887,     0,  1007,     0,     0,     0,     0,     0,     0,
       0,     0,  1239,  1239,     0,     0,     0,     0,  1268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   888,     0,   863,     0,   889,   864,
     890,   865,     0,     0,     0,     0,   866,     0,     0,     0,
       0,   891,     0,     0,   867,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   892,     0,
       0,     0,     0,     0,     0,     0,     0,   868,   869,     0,
       0,   893,     0,     0,     0,     0,     0,     0,   870,     0,
       0,     0,     0,     0,  1268,     0,  1268,     0,     0,   871,
    1239,     0,   872,     0,     0,     0,   894,   895,     0,     0,
       0,     0,     0,     0,     0,     0,   873,   896,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1268,     0,     0,
       0,   897,   898,     0,     0,     0,     0,  2387,   899,   874,
    2388,     0,   900,  2389,     0,     0,     0,   875,     0,   876,
     901,  2390,     0,     0,     0,     0,     0,     0,  1268,     0,
     902,     0,     0,     0,     0,     0,     0,     0,     0,   903,
       0,     0,     0,     0,     0,     0,     0,     0,   904,     0,
     877,     0,     0,   905,   906,     0,     0,   907,     0,   908,
       0,   878,     0,     0,     0,     0,   879,   909,  2391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     910,     0,     0,     0,     0,     0,     0,  2392,     0,     0,
       0,     0,   880,     0,     0,     0,     0,     0,   911,   881,
       0,     0,   882,   883,   912,     0,     0,     0,     0,   913,
       0,  1268,   884,  1268,     0,     0,     0,     0,     0,   885,
       0,   886,     0,     0,   887,     0,     0,     0,     0,     0,
       0,     0,  1239,     0,     0,     0,   914,     0,     0,     0,
     863,     0,     0,   864,     0,   865,     0,     0,     0,     0,
     866,     0,     0,     0,     0,     0,     0,     0,   867,     0,
       0,     0,     0,     0,     0,     0,  2393,   888,     0,     0,
       0,   889,     0,   890,  2394,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   891,     0,     0,  2395,     0,     0,
       0,   868,   869,     0,     0,  1239,     0,     0,     0,  1239,
    1239,     0,   870,     0,     0,     0,     0,     0,     0,     0,
       0,   892,     0,   871,     0,     0,   872,     0,     0,  2396,
       0,     0,     0,     0,   893,     0,     0,     0,     0,     0,
     873,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2397,     0,  2398,     0,     0,     0,     0,     0,     0,   894,
     895,     0,     0,   874,     0,     0,     0,     0,     0,     0,
     896,   875,     0,   876,     0,     0,  2399,  2400,     0,     0,
       0,     0,     0,     0,   897,   898,     0,     0,     0,     0,
       0,   899,     0,     0,     0,   900,     0,     0,     0,     0,
       0,     0,     0,   901,   877,     0,     0,  2401,     0,     0,
       0,     0,     0,   902,     0,   878,     0,     0,     0,     0,
     879,     0,   903,     0,     0,     0,     0,     0,     0,     0,
       0,   904,     0,     0,  2402,     0,   905,   906,     0,     0,
     907,     0,   908,     0,     0,     0,   880,     0,     0,     0,
     909,     0,     0,   881,     0,     0,   882,   883,     0,     0,
    2403,     0,     0,  1667,     0,     0,   884,  2404,     0,     0,
       0,  1036,     0,   885,     0,   886,     0,     0,   887,     0,
    2405,   911,     0,     0,  2406,     0,     0,   912,     0,     0,
       0,     0,   913,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -362,     0,     0,  -362,     0,     0,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     0,   914,
       0,   888,     0,     0,     0,   889,  2407,   890,     0,     0,
       0,     0,     0,     0,     0,  2408,     0,  -362,   891,  -362,
       0,     0,     0,     0,     0,     0,  -362,     0,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2409,   892,     0,     0,     0,     0,
       0,     0,     0,     0,  2410,     0,     0,     0,   893,     0,
    2411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   894,   895,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   896,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   897,   898,
       0,     0,     0,  -362,     0,   899,     0,     0,     0,   900,
       0,     0,     0,     0,     0,     0,     0,   901,   530,     0,
       0,  -362,  -362,  -362,  -362,  -362,     0,   902,  -362,  -362,
       0,     0,  -362,     0,     0,     0,   903,     0,  -362,     0,
    -362,     0,     0,     0,     0,   904,  -362,     0,     0,     0,
     905,   906,     0,  -362,   907,     0,   908,     0,     0,     0,
       0,  -362,     0,     0,   909,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -362,     0,     0,  -362,     0,     0,
       0,     0,     0,  -362,     0,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,  -362,   911,     0,     0,     0,     0,
       0,   912,     0,     0,     0,     0,   913,     0,  -362,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,  1044,     0,
    1045,     0,     0,   914,     0,  1046,     0,     0,     0,     0,
       0,     0,     0,  1047,     0,     0,     0,     0,     0,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -362,  -362,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,  -362,  1048,  1049,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1050,  -362,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,  1051,     0,
       0,  1052,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1053,  -362,     0,     0,     0,
       0,     0,     0,  -362,     0,     0,     0,     0,  1234,     0,
       0,   761,     0,     0,  1543,  1544,  1545,     0,  1054,     0,
    -362,     0,  1546,     0,     0,     0,  1055,     0,  1056,     0,
    -362,     0,  -362,  -362,  -362,  1057,     0,  1058,  1059,  1060,
    1061,  1062,  1063,  1064,  1065,     0,  1066,  1067,  1068,     0,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1079,     0,     0,  -362,     0,  1080,     0,     0,  -362,     0,
       0,     0,     0,  -362,     0,     0,   972,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
    -362,  1081,     0,   973,  -362,  -362,  -362,     0,  1082,     0,
       0,  1083,  1084,     0,     0,     0,     0,     0,  -362,     0,
       0,  1085,     0,     0,  -362,  -362,     0,     0,  1086,     0,
    1087,   531,     0,  1088,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1547,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1548,     0,     0,  1089,     0,     0,     0,
    1090,     0,  1091,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1092,     0,   974,   975,   976,     0,     0,
       0,     0,     0,     0,   977,     0,     0,     0,     0,     0,
    1549,  1550,     0,     0,     0,   763,     0,     0,     0,     0,
    1093,     0,   972,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1094,     0,  1872,     0,     0,     0,   973,
       0,     0,     0,     0,     0,     0,     0,     0,  1236,  1551,
    1552,     0,     0,     0,   979,     0,   980,     0,  1095,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,  1096,
     767,     0,     0,     0,     0,  1237,     0,     0,     0,     0,
       0,     0,     0,     0,  1097,     0,     0,     0,  1553,     0,
    1098,     0,     0,     0,  1099,     0,  1554,  1234,     0,  1555,
     761,     0,  1100,  1543,  1544,  1545,     0,  1556,     0,   985,
       0,  1546,  1101,     0,  1557,     0,     0,     0,     0,  1558,
       0,  1102,     0,     0,     0,     0,     0,     0,   986,     0,
    1103,   974,   975,   976,     0,  1104,  1105,     0,  1559,  1106,
     977,  1107,     0,     0,     0,     0,     0,     0,     0,  1108,
       0,   763,   768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   972,     0,     0,     0,     0,
    1110,     0,     0,   987,     0,     0,  1111,     0,     0,     0,
       0,  1112,   973,     0,     0,     0,   766,     0,   981,   982,
     983,     0,     0,     0,   984,     0,   767,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1113,     0,
       0,     0,   769,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   988,   989,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   985,     0,     0,     0,     0,
       0,     0,  1547,     0,     0,     0,  1560,     0,  1561,     0,
    1562,     0,  1548,  1563,     0,  1564,  1565,  1566,   770,     0,
    1567,  1568,     0,     0,     0,     0,     0,     0,   993,     0,
       0,     0,     0,     0,   974,   975,   976,     0,   768,     0,
       0,     0,     0,   977,     0,     0,     0,     0,   994,  1549,
    1550,     0,     0,   995,   763,     0,     0,     0,     0,     0,
     996,     0,   137,     0,     0,     0,     0,     0,   771,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1236,  1551,  1552,
       0,     0,     0,   979,     0,   980,     0,     0,     0,   766,
       0,   981,   982,   983,     0,     0,     0,   984,   769,   767,
       0,     0,     0,     0,  1237,     0,     0,     0,     0,     0,
     988,   989,     0,     0,     0,     0,     0,  1553,     0,     0,
       0,     0,     0,     0,     0,  1554,     0,     0,  1555,     0,
       0,     0,     0,     0,     0,     0,  1556,     0,   985,     0,
       0,     0,     0,  1557,   770,     0,     0,     0,  1558,     0,
       0,     0,     0,     0,   993,     0,     0,   986,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1559,     0,     0,
       0,     0,     0,     0,   994,     0,     0,   529,     0,   995,
       0,   768,     0,     0,     0,     0,   996,     0,   137,     0,
       0,     0,     0,     0,   771,     0,     0,     0,  -362,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,  -362,     0,     0,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1234,
       0,     0,   761,     0,     0,     0,     0,     0,     0,     0,
       0,   769,  -362,     0,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,     0,     0,   988,   989,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1560,     0,  1561,     0,  1562,
       0,     0,  1563,     0,  1564,  1565,  1566,   770,  -362,  1567,
    1568,     0,     0,     0,     0,     0,     0,   993,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   972,     0,     0,
       0,     0,     0,     0,     0,  1234,     0,   994,   761,     0,
       0,     0,   995,     0,   973,     0,     0,     0,     0,   996,
       0,   137,     0,     0,     0,     0,     0,   771,     0,     0,
    -362,     0,     0,     0,   530,     0,     0,  -362,  -362,  -362,
    -362,  -362,     0,     0,  -362,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,  1939,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -362,     0,     0,
       0,     0,     0,   972,     0,     0,     0,     0,     0,     0,
    -362,     0,     0,  -362,     0,  1235,     0,     0,     0,  -362,
     973,     0,     0,     0,     0,     0,   974,   975,   976,     0,
       0,     0,     0,     0,     0,   977,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1234,     0,
       0,   761,     0,     0,     0,     0,     0,     0,     0,  1236,
       0,     0,     0,     0,     0,   979,  -362,   980,     0,     0,
       0,   766,     0,   981,   982,   983,     0,     0,     0,   984,
    -362,   767,     0,     0,     0,     0,  1237,     0,  -362,     0,
       0,  -362,   974,   975,   976,     0,     0,     0,     0,     0,
       0,   977,     0,     0,  -362,     0,     0,     0,     0,     0,
       0,     0,   763,     0,     0,     0,  -362,     0,     0,     0,
     985,     0,     0,     0,  -362,     0,   972,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1329,   986,
       0,     0,     0,   973,     0,  1236,     0,     0,     0,     0,
       0,   979,     0,   980,     0,     0,     0,   766,     0,   981,
     982,   983,     0,   768,     0,   984,  -362,   767,  -362,  -362,
    -362,     0,  1237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1234,     0,     0,   761,     0,     0,     0,     0,
       0,     0,     0,     0,   987,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   985,     0,     0,     0,
       0,     0,     0,     0,  -362,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   986,     0,     0,     0,     0,
       0,  -362,     0,   769,     0,   974,   975,   976,     0,     0,
    -362,  -362,  -362,     0,   977,   988,   989,     0,     0,   768,
       0,     0,     0,     0,  -362,   763,     0,     0,     0,     0,
     972,  -362,     0,     0,     0,     0,     0,   531,     0,     0,
       0,     0,  1940,     0,     0,     0,     0,   973,     0,   770,
     987,     0,     0,  1941,     0,     0,     0,     0,  1236,   993,
    1386,     0,     0,     0,   979,     0,   980,     0,     0,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,   994,
     767,     0,     0,     0,   995,  1237,     0,     0,     0,   769,
       0,   996,     0,   137,  1234,     0,     0,   761,     0,   771,
       0,   988,   989,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   770,     0,     0,   986,   974,
     975,   976,     0,     0,     0,   993,     0,     0,   977,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   763,
       0,     0,   768,     0,     0,   994,     0,     0,     0,     0,
     995,     0,   972,     0,     0,     0,     0,   996,     0,   137,
       0,     0,     0,     0,  1391,   771,     0,     0,     0,   973,
       0,     0,  1236,   987,     0,     0,     0,     0,   979,     0,
     980,     0,     0,     0,   766,     0,   981,   982,   983,     0,
       0,     0,   984,     0,   767,     0,     0,     0,     0,  1237,
       0,     0,     0,     0,     0,     0,     0,     0,  1234,     0,
       0,   761,   769,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   988,   989,     0,     0,     0,     0,
       0,     0,     0,   985,     0,     0,     0,  -969,     0,     0,
    -969,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   986,     0,     0,     0,     0,     0,   770,     0,
       0,   974,   975,   976,     0,     0,     0,     0,   993,     0,
     977,     0,     0,     0,     0,     0,   768,     0,     0,     0,
       0,   763,     0,     0,     0,     0,   972,     0,   994,     0,
       0,     0,     0,   995,     0,     0,     0,     0,     0,     0,
     996,     0,   137,   973,     0,     0,     0,   987,   771,     0,
       0,     0,     0,     0,  1236,  -969,     0,     0,     0,     0,
     979,     0,   980,     0,     0,     0,   766,     0,   981,   982,
     983,     0,  -969,     0,   984,     0,   767,     0,     0,     0,
       0,  1237,     0,     0,     0,     0,   769,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   988,   989,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   985,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   770,     0,   986,   974,   975,   976,  1517,     0,
       0,     0,   993,     0,   977,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   763,     0,     0,   768,     0,
       0,     0,   994,     0,  -969,  -969,  -969,   995,     0,  1234,
       0,     0,   761,  -969,   996,     0,   137,     0,     0,     0,
       0,     0,   771,     0,  -969,     0,     0,     0,  1236,   987,
       0,     0,     0,     0,   979,     0,   980,     0,     0,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,     0,
     767,     0,     0,     0,     0,  1237,     0,  -969,     0,     0,
       0,     0,     0,  -969,     0,  -969,     0,     0,   769,  -969,
       0,  -969,  -969,  -969,     0,     0,     0,  -969,     0,  -969,
     988,   989,     0,     0,  -969,     0,     0,   972,     0,   985,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   973,     0,  1234,     0,   986,   761,
       0,     0,     0,     0,   770,     0,     0,     0,  -969,     0,
       0,     0,     0,     0,   993,     0,     0,     0,     0,     0,
       0,     0,   768,     0,     0,     0,     0,  -969,     0,     0,
       0,     0,     0,  1234,   994,     0,   761,     0,     0,   995,
       0,     0,     0,     0,     0,     0,   996,     0,   137,     0,
       0,  -969,     0,   987,   771,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   972,     0,     0,     0,     0,     0,
       0,     0,  -969,     0,     0,     0,   974,   975,   976,     0,
       0,   973,   769,     0,     0,   977,     0,     0,     0,     0,
       0,     0,     0,     0,   988,   989,   763,     0,     0,     0,
       0,   972,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -969,     0,     0,  1480,     0,     0,     0,   973,     0,
       0,     0,     0,  -969,  -969,     0,     0,     0,   770,  1236,
       0,     0,     0,     0,     0,   979,     0,   980,   993,     0,
       0,   766,     0,   981,   982,   983,     0,     0,     0,   984,
       0,   767,     0,     0,     0,     0,  1237,  -969,   994,     0,
       0,     0,     0,   995,     0,     0,     0,  -969,     0,     0,
     996,     0,   137,   974,   975,   976,     0,  1663,   771,     0,
       0,     0,   977,     0,     0,     0,     0,  -969,     0,     0,
     985,     0,  -969,   763,     0,     0,     0,     0,     0,  -969,
       0,  -969,     0,     0,     0,     0,     0,  -969,     0,   986,
     974,   975,   976,     0,     0,  1234,     0,     0,   761,   977,
       0,     0,     0,     0,     0,     0,  1236,     0,     0,     0,
     763,     0,   979,   768,   980,     0,     0,     0,   766,     0,
     981,   982,   983,     0,     0,     0,   984,     0,   767,     0,
       0,     0,     0,  1237,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1236,   987,     0,     0,     0,     0,   979,
       0,   980,     0,     0,     0,   766,     0,   981,   982,   983,
       0,     0,     0,   984,     0,   767,     0,   985,     0,     0,
    1237,     0,     0,   972,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   769,     0,     0,   986,     0,     0,     0,
     973,     0,     0,     0,  1234,   988,   989,   761,     0,     0,
       0,     0,     0,     0,   985,     0,     0,     0,     0,     0,
     768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   986,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   993,
       0,   987,     0,     0,     0,     0,     0,   768,     0,     0,
       0,     0,     0,  1521,     0,     0,     0,     0,     0,   994,
       0,     0,     0,     0,   995,     0,     0,     0,     0,     0,
       0,   996,   972,   137,     0,     0,     0,     0,   987,   771,
     769,     0,   974,   975,   976,     0,     0,     0,     0,   973,
       0,   977,   988,   989,  1794,     0,     0,   761,     0,     0,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,  1960,     0,     0,     0,     0,     0,   769,     0,     0,
       0,     0,     0,     0,     0,     0,   770,     0,     0,   988,
     989,     0,     0,     0,     0,  1236,   993,     0,     0,     0,
       0,   979,     0,   980,     0,     0,     0,  1279,     0,   981,
     982,   983,     0,     0,     0,   984,   994,   767,     0,     0,
       0,   995,  1237,   770,     0,     0,     0,     0,   996,     0,
     137,     0,   972,   993,     0,     0,   771,     0,     0,     0,
       0,   974,   975,   976,     0,     0,     0,     0,     0,   973,
     977,     0,     0,   994,     0,     0,   985,     0,   995,     0,
       0,   763,     0,     0,     0,   996,     0,   137,     0,     0,
       0,     0,     0,   771,     0,   986,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1236,     0,     0,     0,     0,   768,
     979,     0,   980,     0,     0,     0,   766,     0,   981,   982,
     983,     0,     0,     0,   984,     0,   767,     0,     0,     0,
       0,  1237,     0,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   974,   975,   976,     0,     0,     0,     0,     0,     0,
     977,     0,     0,     0,     0,   985,     0,     0,     0,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,   769,
       0,     0,     0,     0,   986,     0,     0,     0,     0,     0,
       0,   988,   989,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1236,     0,     0,     0,   768,     0,
     979,     0,   980,     0,     0,     0,   766,     0,   981,   982,
     983,     0,     0,     0,   984,   770,   767,     0,     0,     0,
       0,  1237,     0,     0,     0,   993,     0,     0,     0,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   994,     0,     0,     0,     0,
     995,     0,     0,     0,     0,   985,     0,   996,     0,   137,
       0,     0,     0,     0,     0,   771,     0,     0,   769,     0,
       0,     0,     0,     0,   986,     0,     0,     0,     0,     0,
     988,   989,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   768,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   624,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   993,     0,     0,     0,   625,   987,
       0,   626,   627,   628,   629,   630,   631,   632,     0,     0,
       0,     0,     0,     0,   994,     0,     0,     0,     0,   995,
       0,     0,     0,     0,     0,     0,   996,     0,   137,     0,
       0,     0,     0,     0,   771,     0,     0,   633,   769,   634,
     635,   636,   637,   638,   639,   640,     0,     0,     0,     0,
     988,   989,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   641,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   993,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   994,     0,     0,     0,     0,   995,
       0,     0,     0,     0,     0,     0,   996,     0,   137,     0,
       0,     0,     0,     0,   771,     0,     0,     0,     0,     0,
       0,     0,   642,   643,   644,   645,   646,     0,     0,   647,
     648,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   649,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,   650,     0,
       0,     0,     0,  1719, -1878,     0,  1720,     0,     0,  1721,
     626,   627,   628,   629,   630,   631,  1722,  1723,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1724,     0,  1725,
       0,   651,     0,     0,     0,     0,   633,     0,   634,   635,
     636,   637,   638,   639,   640,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   652,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   653,     0,     0,     0,     0,
       0,     0,   641,   654,     0,     0,   655,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   656,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   657,     0,     0,     0,     0,     0,     0,     0,   658,
       0,     0,     0,  1726,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   642,   643,   644,   645,   646,     0,     0,   647,   648,
       0,     0,  1727,     0,     0,     0,     0,     0,  1728,     0,
    1729,   659,     0,   660,   661,   662, -1829,     0,     0,     0,
       0,     0,     0,  1730,     0,     0,     0,     0,     0,     0,
       0,   649,     0,     0,     0,     0,     0,     0,     0,     0,
     663,     0,     0,     0,    94,     0,     0,   650,     0,     0,
       0,     0,     0,   972,     0,  1731,     0,     0,     0,  -359,
       0,     0,     0,     0,  1732,     0,     0,     0,     0,     0,
     973,     0,     0,     0,     0,     0, -1878,     0,  1733,     0,
       0,     0,     0,     0,     0,   664,   665,   666,     0,     0,
     651,     0,     0,     0,     0,     0,     0,     0,     0,   667,
       0,     0,     0,     0,     0,     0,   668,     0,   626,   627,
     628,   629,   630,   631,     0,     0,     0,     0,     0,     0,
    1734,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1735,   653,     0,     0,     0,     0,     0,
       0,     0,   654,     0,   633,   655,   634,   635,   636,   637,
     638,   639,   640,     0,     0,     0,   972,     0,   656,     0,
    1736,  1340,   974,   975,   976,     0,     0,     0,     0,     0,
       0,   977,     0,   973,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1737,     0,     0,     0,
     641,     0,     0,  1738,   972,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1739,   973,     0,     0,     0,     0,     0,     0,     0,     0,
     659,     0,   660,   661,   662,     0,     0,  1407,     0,   981,
     982,   983,     0,     0,     0,   984,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   642,
     643,   644,   645,   646,     0,     0,   647,   648,     0,     0,
       0,     0,     0,  1740,     0,   974,   975,   976,  -652,     0,
       0,     0,     0,  1741,   977,     0,   985,     0,     0,     0,
       0,     0,     0,     0,     0,   763,     0,     0,     0,   649,
    1742,     0,     0,     0,   664,   665,   666,     0,     0,     0,
       0,     0,     0,   974,   975,   976,     0,     0,   667,     0,
       0,     0,   977,     0,  1743,   668,     0,     0,   978,     0,
       0,     0,     0,   763,   979,     0,   980,     0,     0,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,     0,
     767,     0,     0,     0,     0,     0,     0,     0,   651,     0,
     987,     0,     0,     0,     0,     0,   978,     0,     0,     0,
       0,     0,   979,     0,   980,     0,     0,     0,   766,     0,
     981,   982,   983,     0,     0,     0,   984,     0,   767,   985,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   653,     0,     0,     0,     0,     0,   986,     0,
       0,   988,   989,   655,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0, -1902,     0,   656,   985,     0,     0,
       0,     0,   768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,     0,     0,     0,   993,     0,     0,     0,     0,
       0,     0,     0,   987,     0,     0, -1178,     0,     0,     0,
     768,     0,     0,     0,     0,   994,     0,     0,     0,     0,
     995,     0,     0,     0, -1178,     0,     0,   996,   243,   137,
     660,   661,   662,   972,     0,     0,     0,     0,     0,     0,
       0,   987,   769,     0,     0,     0,     0,     0,     0,     0,
     973,     0,     0,     0,   988,   989,   972,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   973,     0,     0,  1423,     0,     0,     0,
     769,     0,     0,     0,     0,     0,   990,     0,   770,     0,
     991,   992,   988,   989,     0,     0,     0,     0,   993,     0,
       0,     0,   664,   665,   666,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1441,     0,     0,     0,   994,     0,
       0,     0,     0,   995,   990,     0,   770,     0,   991,   992,
     996,     0,   137,     0,     0,   972,   993,     0,   771,     0,
       0,     0,   974,   975,   976,     0,     0,     0,     0,     0,
       0,   977,   973,     0,     0,     0,   994,     0,     0,     0,
       0,   995,   763,     0,     0,   974,   975,   976,   996,     0,
     137,     0,     0,     0,   977,     0,   771,     0,     0,     0,
       0,     0,     0,     0,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   978,     0,     0,     0,     0,
       0,   979,     0,   980,     0,     0,     0,   766,     0,   981,
     982,   983,     0,     0,     0,   984,     0,   767,   978,     0,
       0,     0,     0,     0,   979,     0,   980,     0,     0,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,     0,
     767,     0,     0,     0,   974,   975,   976,     0,     0,     0,
       0,     0,     0,   977,     0,     0,   985,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   986,     0,     0,     0,   985,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   978,   986,   768,
       0,     0,     0,   979,     0,   980,     0,     0,     0,   766,
       0,   981,   982,   983,     0,     0,     0,   984,     0,   767,
       0,     0,   768,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   987,     0,     0,     0,     0,   985,     0,
       0,     0,     0,     0,     0,     0,     0,   972,     0,   769,
       0,     0,     0,     0,     0,     0,     0,   986,     0,     0,
       0,   988,   989,     0,   973,     0,     0,     0,     0,  1977,
       0,     0,   769,     0,     0,     0,     0,     0,     0,     0,
       0,   768,     0,     0,   988,   989,     0,     0,     0,     0,
       0,     0,  1979,   990,     0,   770,     0,   991,   992,     0,
       0,     0,     0,     0,     0,   993,     0,     0,     0,     0,
       0,     0,   987,     0,     0,     0,   990,     0,   770,     0,
     991,   992,     0,     0,     0,   994,   972,     0,   993,     0,
     995,     0,     0,     0,     0,     0,     0,   996,     0,   137,
       0,     0,     0,   973,     0,   771,     0,     0,   994,   972,
       0,   769,     0,   995,     0,     0,   974,   975,   976,     0,
     996,     0,   137,   988,   989,   977,   973,     0,   771,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,  1989,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   990,     0,   770,     0,   991,
     992,     0,     0,     0,     0,     0,     0,   993,     0,   978,
       0,     0,     0,     0,     0,   979,     0,   980,     0,     0,
       0,   766,     0,   981,   982,   983,     0,   994,     0,   984,
       0,   767,   995,     0,     0,   974,   975,   976,     0,   996,
       0,   137,     0,     0,   977,     0,     0,   771,     0,     0,
       0,     0,     0,     0,     0,   763,     0,     0,   974,   975,
     976,     0,     0,     0,     0,     0,     0,   977,     0,     0,
     985,     0,     0,     0,     0,     0,     0,     0,   763,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   978,   986,
       0,     0,     0,     0,   979,     0,   980,     0,     0,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,     0,
     767,   978,     0,   768,     0,     0,     0,   979,     0,   980,
       0,     0,     0,   766,     0,   981,   982,   983,     0,     0,
       0,   984,     0,   767,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   987,     0,     0,     0,     0,   985,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   986,     0,
       0,     0,   985,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   769,     0,     0,     0,     0,     0,     0,
       0,   986,   768,     0,   972,   988,   989,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   973,     0,     0,     0,   768,     0,     0,     0,  2737,
       0,     0,     0,   987,     0,     0,     0,   990,     0,   770,
       0,   991,   992,     0,     0,     0,     0,     0,     0,   993,
       0,     0,     0,     0,     0,     0,   987,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   994,
       0,     0,   769,     0,   995,     0,     0,     0,     0,     0,
       0,   996,     0,   137,   988,   989,     0,     0,     0,   771,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   988,   989,     0,
       0,     0,     0,   974,   975,   976,     0,     0,   770,     0,
       0,     0,   977,     0,     0,     0,     0,     0,   993,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,   770,  2738,   991,     0,     0,     0,     0,   994,     0,
       0,   993,     0,   995,     0,     0,     0,     0,     0,     0,
     996,     0,   137,     0,     0,     0,   978,     0,   771,     0,
       0,   994,   979,     0,   980,     0,   995,     0,   766,     0,
     981,   982,   983,   996,     0,   137,   984,     0,   767,     0,
       0,   771,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   985,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   987,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     769,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   988,   989,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   770,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   993,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   994,     0,     0,     0,
       0,   995,     0,     0,     0,     0,     0,     0,   996,     0,
     137,     0,     0,     0,     0,     0,   771
};

static const yytype_int16 yycheck[] =
{
     116,   158,   103,   366,   105,   968,   393,   103,   395,   105,
     111,   600,   601,   796,   855,   111,  1151,   727,  1173,  1234,
     657,  1215,   791,   801,  1124,  1458,  1609,   800,  1603,  1458,
    1458,   692,  1458,  1458,   135,   181,  1458,  1498,   425,   135,
    1127,   404,  1376,  2052,  1365,  1386,   604,  1547,   435,  2018,
    1118,  1266,  1847,   714,    10,  1137,  1538,  1930,  1274,    56,
      57,    58,  1480,   209,   705,    10,    53,    64,    10,  1151,
      10,     1,    18,    60,     0,    23,  1129,     1,     9,   668,
       1,     0,  1955,   184,  1137,    50,  2085,    10,    58,   858,
    1192,   126,     1,  1542,   755,    50,    60,    60,  1151,  2227,
     113,    99,    99,   100,  1206,   102,  1385,    38,    40,    10,
     107,   108,  1328,    95,  1532,   155,    31,   179,  1814,   116,
     277,   144,    28,  1122,   800,   178,   177,   764,   765,    32,
     179,  2124,   113,  1582,   168,   251,   133,    60,  1472,    50,
     259,  1778,    18,   234,   805,   205,    60,  1468,   162,   259,
     218,    89,    67,    49,    69,   227,   335,   128,  1607,   145,
    1856,  1261,     7,   160,   215,  1381,   364,   273,   175,   246,
     238,    22,   126,  1138,   161,  2184,    32,    27,   815,   295,
     117,  1249,  1600,   202,   116,    50,  2030,  1521,   205,   254,
     191,   313,    22,   231,   191,   128,   359,   265,   243,  1164,
     173,    90,   234,  2113,   132,   846,   203,   239,   761,   313,
     220,  1907,   118,    60,   277,   141,   259,   244,   991,   145,
      28,   127,   141,   369,   292,    90,   145,   110,   334,   415,
    2495,   218,   219,    48,   461,  2710,   265,   179,  1124,  1012,
       9,   259,   452,   265,  1140,  1663,  1149,    99,     9,   488,
      65,   367,   249,  1306,   227,    10,  1152,   180,   254,   469,
     257,   257,   235,   292,  1317,  1586,  1169,   506,  1964,    38,
     292,    66,   127,  1116,   292,  1161,   202,    38,  2188,  2754,
     201,  1124,  1125,   202,   511,   272,   234,   840,  2553,   179,
     105,  1134,  1374,   415,   190,   282,   234,   483,  1141,  1142,
     463,   311,   978,   259,   347,   345,   237,   239,   132,    73,
     118,  2304,  2305,   314,   990,   991,   992,  1160,  1161,   423,
     243,  1374,   259,  1278,  2197,  1378,   259,   346,    73,   394,
     393,   510,   511,  1674,  1909,  2014,  1012,   375,   415,   254,
    1681,   978,   458,   444,  1117,   446,   447,  1668,   198,   322,
     446,   447,   453,  1318,  2033,  2034,  1017,   453,  2037,   465,
     346,   483,   389,  2059,   470,    73,   363,   458,   277,   470,
    1819,   295,   473,   474,   470,   476,    73,  1826,   479,   480,
    1880,   352,  1800,     7,  1866,   230,  2230,  1869,   370,  1889,
     397,    73,    73,   317,   391,   205,  2306,   362,   517,  2078,
       7,   511,    10,  1358,  2083,   402,  2043,   362,   314,   469,
      73,  1184,  1185,  1186,   411,   412,   381,   414,   415,   234,
     346,   336,   274,   420,  1197,  1198,   241,   346,  1877,  1394,
     475,  1204,   504,   510,   468,   458,   407,   252,  1593,   507,
     437,  1117,   543,   544,   358,   459,  2439,   543,   544,   511,
    1537,   362,   469,    29,   489,  1298,  1777,   454,   511,   214,
     511,   443,   511,  1139,    10,  1023,  1024,   448,   313,  1145,
     381,   511,   453,   362,   375,   407,   421,   490,  1139,   511,
     581,  1480,   598,  1932,   393,   581,  1329,     7,   340,   605,
     453,   321,  1168,   458,    39,  2623,  1274,   362,   426,  1175,
    1176,  1177,    47,   604,   259,  2504,  2505,   127,  1184,  1185,
    1186,  1187,  1580,   511,   269,  1597,  1192,  1858,   515,   126,
    2199,  1197,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1808,
    1206,  1207,   458,  1532,   504,   489,   652,   458,   535,   458,
     505,   356,   357,  1611,  1597,  1388,  2242,   458,   512,   458,
     505,  1706,   475,   129,   178,   511,   371,   658,   373,   556,
    1236,   558,   508,   511,   561,   562,   469,   564,   506,   511,
    2153,   511,   517,   449,   511,  1216,   472,   508,  1899,  1794,
    2453,   511,  1798,  1259,  1637,   511,  2282,   511,  2284,  2038,
     214,   578,   511,  1695,   505,   510,   351,  2234,   595,  1236,
      55,  1600,   503,  1381,   510,  2054,   214,   214,    73,   460,
     607,   406,   810,   469,   510,  1936,   505,  2099,   465,  2315,
     471,   511,   467,   470,  2073,   612,   259,   510,   511,   253,
     460,   255,  2427,   259,   458,   259,   259,  1480,   214,   403,
     505,   471,   162,   458,   454,   269,   253,   259,   255,  2345,
    2346,   259,   259,  2102,   254,   510,   511,  2106,   403,   511,
     776,   269,   269,  1618,  1663,   781,   421,  1343,   213,  1954,
     667,   243,   234,    75,  2092,  1518,  2094,   259,  2687,     1,
      64,     1,   798,   259,   231,   786,   787,   511,  1531,  1532,
     505,   455,    12,   269,   214,   403,  2145,   335,   362,   845,
     245,  2380,   803,   327,   259,  2384,   403,   283,    92,    93,
     455,   708,   467,     0,   711,  2133,   421,  2686,   260,  1874,
     327,   403,   403,   268,   259,     7,  1569,   351,   162,    67,
    1508,    69,  1505,   253,  1121,   255,  1123,     7,  1806,   259,
     403,    61,    64,   351,   351,   164,   292,   455,  2453,   269,
    1803,   274,    23,   313,  2095,   259,   511,  1600,   455,  1146,
     236,  1148,   517,   259,   246,   173,  1153,    33,  2186,   205,
      92,    93,   174,   455,   455,   351,   333,   265,   323,    99,
    1167,   101,   160,   103,    35,  2006,   205,   460,   458,   244,
    2239,   111,   455,  2114,   394,    34,  2245,   421,  1641,   419,
     458,  1800,  2302,    67,    10,    69,  2255,   327,   354,  1652,
      59,    59,  1655,   421,   421,  2511,  2512,    66,    66,   227,
    1663,  2500,  2501,  1905,  2529,   164,    50,   235,   375,  1505,
      59,   351,    31,    62,   125,   508,  1473,    66,   383,   459,
       7,   505,   156,   467,   205,   421,   453,   167,   424,   425,
     234,   967,  1905,  1906,    60,   233,   979,   980,   563,   467,
     467,   295,  1499,   986,   298,  2199,   428,  1645,    67,  2444,
      69,  2192,   510,   318,   156,   294,  2325,  1264,   511,  2328,
    2329,   326,   489,  2168,   206,   511,   510,   511,   511,  1276,
     510,    60,  2341,   517,     7,  1995,  1454,  2487,   440,   511,
     411,   421,   390,   475,   511,   517,  2355,  2356,   508,   517,
     517,   191,   234,  1686,   322,  1688,   254,  1033,  1594,   297,
     346,    59,  1023,  1024,     1,   265,   402,  1700,    66,   511,
     453,   170,   214,   415,   389,   480,   259,    10,   403,   459,
     260,   517,   326,  1619,   214,   381,  2521,   467,   198,  2084,
    2085,   511,   292,   510,   411,   294,   511,   359,  1619,   501,
     259,   322,   381,   234,    41,    42,    43,    44,    45,   511,
    2419,   253,   483,   255,   180,   274,   511,   259,    51,   120,
     121,   122,   517,   253,   220,   255,   306,   269,  2571,   259,
     455,   511,   274,   259,  1168,   791,  2217,   517,   336,   269,
     465,    78,    79,   172,   326,   470,   230,   511,   214,   259,
    1686,   334,  1688,  2100,  2463,   511,   132,  1118,     0,  1695,
    1798,  1122,   271,   271,  1700,   459,   483,   326,  1129,  1130,
     246,   270,    10,   284,   285,   286,  1137,   243,   453,  1140,
     419,  2256,   271,  1704,  1145,   327,  1147,   214,  1149,  1150,
    1151,  1152,  1728,   259,    87,   254,   225,   327,    13,    14,
    2650,   463,   858,   269,  2568,  2152,   511,  1728,  1169,   351,
      31,   141,   336,  2656,   458,   395,  2537,    32,  2131,    27,
     459,   351,    60,   319,   399,  1259,   253,   367,   255,   504,
     306,   510,   259,  2092,    31,  2094,   345,   345,   349,   240,
    1943,   214,   269,   511,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   254,   356,    33,   345,   233,   438,  1265,
    2553,  1710,  1711,  1510,  2553,  2553,  2226,  2553,  2553,  2633,
    1253,  2553,   274,   271,  2133,   265,   458,   336,   458,   421,
     253,   214,   255,   458,   128,   351,   259,   470,  1249,   110,
     259,   421,   401,   401,  1791,    92,   269,   406,   406,   141,
     327,   265,   292,   145,  1525,  1526,  1527,  1528,  1269,   130,
     510,  1317,   401,   246,   247,   417,   418,   406,   250,   251,
     296,   218,   219,   453,   351,   467,   259,  2186,   292,   206,
     174,   511,   259,  1360,   517,   113,   269,   467,   411,   340,
     411,   238,   458,  2371,   548,  1306,  2781,   345,   169,   458,
     458,   352,   511,   458,   327,   421,  1317,   234,   517,   214,
     202,   222,   473,   474,   291,     5,   460,   478,   265,   511,
     191,   361,  2001,   399,   411,   517,   214,   471,   351,  1385,
      20,   511,   351,   259,  1411,   206,   590,   517,    13,   416,
      30,    16,    17,   254,   421,   292,   195,   800,   335,  2679,
    1361,   467,   511,   401,   259,   243,   511,   334,   406,   475,
     483,   348,   483,  1374,   269,   291,   620,  1378,   351,  2057,
     384,   259,   511,   392,   214,   427,    66,   429,   457,    56,
      57,   269,   174,   209,   210,   292,   465,   466,   314,  2142,
     467,   470,  1939,   444,   458,   511,   483,   277,   421,   265,
    2730,   517,   421,   214,  1415,   234,   214,   256,   334,  1415,
     458,   259,  1685,   180,   206,    92,   289,   324,     9,   259,
     174,   201,   248,   249,  2654,   180,   292,  2180,  2181,   269,
     259,   259,   109,  2537,   511,   190,     9,  1493,   421,   311,
     517,   481,   119,  1454,   467,   356,   351,    38,   259,   356,
     342,   259,   206,   364,   346,  2075,   458,   212,   269,  2504,
    2505,   269,  2507,   351,  2215,    38,   339,  2545,  2546,  1480,
     510,   343,   239,  2551,   345,   242,   356,  2602,   358,   764,
     765,  2711,  2712,   312,   467,   314,   765,   242,   511,  2060,
     190,   363,   458,   470,   517,  2178,   510,   511,   517,  1998,
    1999,   256,    10,   416,   511,    13,  2053,   190,    16,    17,
    2588,   351,   212,   455,  2592,  2593,   421,   356,     3,   358,
    2429,  1532,  2431,   465,   511,   428,   764,   765,   470,   212,
     815,  2507,   222,   421,   517,  2288,   815,   990,   991,   992,
     351,    16,  2113,   351,   470,  1452,  1602,  2557,   328,   329,
    1457,  1458,   465,  1460,    99,   100,   190,   470,    33,  1012,
     507,    46,  1833,   510,   254,   345,    57,    42,   164,  1580,
    1626,  1638,   168,  2638,   410,   265,  1847,   815,   212,   467,
     109,   421,    67,    68,    69,    70,  1597,   475,   455,  1600,
     119,   517,  2178,   457,   455,  1651,   254,  1754,   465,   257,
    1611,    92,   466,   470,   465,   280,   281,  1764,  1765,   470,
     421,  1768,   517,   421,  1911,   465,     2,  2188,   109,   399,
     470,     7,   460,   511,  1199,  1200,  1637,   467,   119,   517,
     320,   306,   307,   471,   456,   325,   462,  1418,   464,  1665,
    1421,   254,   234,   465,   257,  2621,  1427,  2623,   470,   326,
    1431,  1223,  1663,   330,   331,  1227,   467,  1438,  2351,   467,
    2353,   456,  1115,   312,  1117,   314,   356,  1120,   557,   399,
     465,  1124,  2737,   562,   364,   470,   356,   517,   358,   410,
    1691,  2657,  2658,   458,  2660,  1691,  1139,   377,    12,   458,
    2666,  2667,  1145,   474,   371,   476,  2761,  2450,   479,   356,
     511,   358,   458,  2648,  2649,   159,   517,   161,  1734,   517,
     387,   388,   159,  1166,   161,  1168,   406,   458,    68,   409,
      70,    60,  1175,  1176,  1177,   220,   211,   417,   990,  1755,
     992,  1184,  1185,  1186,  1187,  2306,   176,    61,   428,  1192,
     304,   305,  1649,  2688,  1197,  1198,  1199,  1200,  1201,  1202,
    1203,  1204,   237,  1206,  1207,   458,  1175,  1176,  1177,   458,
    2513,   511,  2707,    71,  2517,  2518,   458,   511,   458,   254,
     458,   461,   280,   281,  2647,    99,   511,   101,   345,   103,
    2473,   259,  1235,  1185,  1186,  1796,   458,   111,  1207,  1800,
     259,   475,  1803,    36,   201,  1806,    39,   511,   306,   307,
     405,   449,  1709,    46,    47,   290,  1259,   406,  1261,   628,
     629,   630,   631,  1720,   415,    66,  1687,    62,  1689,   234,
    1727,  1692,  1693,  1694,   259,   310,   458,  1698,    25,    26,
    1701,  1702,  2777,   492,   493,   494,   495,  2134,   492,   493,
     494,   495,   259,   167,   333,  1856,   406,   332,   511,  1756,
     231,    94,    27,   338,  2127,  1911,   492,   493,   494,   495,
    1201,  1202,  1203,   458,   458,   458,   110,   317,   259,   259,
     275,    68,   461,    70,    24,    72,   105,  1944,  1945,  1946,
    1947,  1948,  1949,  1950,  1951,   444,   458,   191,   125,    18,
    1343,   461,   511,    89,  1905,  1906,  1907,   458,   399,   275,
     356,   406,    59,   407,   228,   428,  1962,   510,  1815,   106,
     107,   108,  1365,   265,    40,  1971,  1972,   458,   239,   407,
     163,   511,   336,   511,   424,   410,   513,  1834,   321,   399,
     315,   264,   458,  1840,   419,     8,   260,   458,  1391,   399,
     258,   458,   511,   458,   510,   371,   399,   458,   458,   192,
      88,   436,    36,  1964,    88,    39,   127,   437,   399,   156,
     458,   158,    46,    47,   394,    23,   311,   314,   165,   508,
     213,   168,   458,   458,   399,   206,   511,   511,   506,   458,
     389,   508,   306,  1994,   234,   309,   511,   453,  1994,   257,
     220,   511,   125,   517,   479,    54,   453,   469,  2009,    27,
     449,  2027,   405,  2014,   311,   415,   454,   353,   511,   198,
      94,   469,   449,   498,   452,  1468,   458,   259,   511,   458,
     505,   506,  2033,  2034,   381,   268,  2037,   404,   341,   511,
     117,   172,   190,   469,   511,   469,   469,   469,   469,   458,
     469,   469,   469,   259,   225,   469,   469,   469,  2059,   314,
     374,    31,  1505,   453,   458,   408,   458,   254,  2084,  2085,
     257,   460,  2648,  2649,   133,   511,   800,  2078,   511,  1976,
     134,   395,  2083,  2084,  2085,   198,   136,   274,  2134,   163,
     323,  2092,   453,  2094,   168,   135,   391,  2143,   137,   356,
     511,   138,   504,   139,   104,   140,   420,   448,   422,   469,
     143,    50,  2688,   409,   453,   449,   446,   146,   192,   452,
    2017,   452,  2019,   198,   438,   147,  2023,   148,   506,   149,
    2131,  2707,  2133,   274,  2031,    32,   150,    50,   151,   213,
     152,   198,   153,  1586,   115,   154,   222,   415,   455,   455,
     383,  1594,   117,   455,   455,   455,   455,   317,   112,   205,
     225,   453,   455,   396,   455,   199,   453,  1610,   458,   381,
     344,   259,   275,   233,   299,   491,  1619,   303,   168,   131,
     508,   508,   178,   453,   171,  2186,   370,  1630,   230,   132,
     453,    50,   198,   304,   268,    59,   206,   511,  2199,   230,
     168,  2777,  2203,   206,   458,   275,   511,  2203,   304,   254,
     428,   239,   516,   279,   205,  1658,   453,   453,   385,   300,
      31,   367,   205,   205,    18,  1668,   515,   449,   131,  2126,
     142,   370,    50,  2520,  2723,   144,   453,     9,   205,   198,
     132,   508,   508,  1686,   205,  1688,   428,   480,   458,   323,
     453,    10,  1695,     8,   978,   511,   299,  1700,   510,   205,
     510,   302,   505,   450,    50,   191,   990,   991,   992,   296,
     265,   468,   319,   335,   505,  1718,   116,   443,    48,   416,
     318,  2282,  2569,  2284,   205,  1728,   205,   366,  1012,   105,
     385,   299,    50,   366,   239,   499,   265,  1740,    98,   301,
    1743,     9,    59,   297,    50,   113,   463,   265,   265,   383,
     342,  2312,   265,   500,  2315,   458,  2312,   112,   342,   488,
     458,   212,   396,   110,   511,   223,   345,   304,   372,   423,
     234,   122,   198,   288,  1777,   291,    50,   342,   326,   311,
     326,   430,   318,    46,     7,  2346,    10,   326,    92,    26,
    1793,   127,   201,   206,    75,   148,   221,   238,   150,   410,
     177,   520,   504,   616,   544,  2366,   538,  1910,   286,   425,
    2366,  1032,  1458,  2735,  1413,   497,  1903,   787,  1679,  2380,
     754,  2201,  2005,  2384,  2660,  2666,  2227,   858,  2097,  1041,
    1232,   794,  1767,  1117,  1766,  2412,  1850,   805,  1122,  2399,
    1802,  1491,  1249,  2095,  1493,  1129,   480,  1537,  1518,  1540,
    1869,  2280,  2099,  1137,  1302,  2298,  1583,  1590,  2122,  1897,
    1338,    85,  1601,  2134,  1343,  2141,  1923,  1151,  2429,  1631,
    2431,  1972,  2155,  1952,  1372,  1374,  1152,  2181,   102,  1388,
    1971,  2349,  1971,  1678,  2730,  2354,  2447,  2344,  2453,  1569,
    1361,  1175,  1176,  1177,  2359,  2174,  1899,  1900,   299,  1488,
    1184,  1185,  1186,  1187,   152,  1939,  1728,  2174,  1192,  2174,
     699,  2174,   270,  1197,  1198,  1199,  1200,  1201,  1202,  1203,
    1204,   242,  1206,  1207,   581,  1928,   995,   759,  2504,  2505,
    2579,  2388,   417,  1936,   509,  2441,  2393,  2701,   215,  2500,
    2501,   450,  2111,  2504,  2505,  1902,  2507,  1959,   560,  2796,
     718,  1593,  1236,  2650,    -1,    -1,    -1,    -1,    -1,    -1,
    1963,    -1,    -1,    -1,    -1,    -1,    -1,  1970,  1971,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,    -1,    -1,    -1,    -1,  1269,    -1,    -1,    -1,    -1,
     214,    -1,  1995,    -1,    -1,  2452,    -1,  2000,    -1,    -1,
      -1,    -1,  2005,  2006,    -1,    -1,    -1,  2568,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1306,  2599,    -1,    -1,    -1,    -1,  2485,  2486,
      -1,  2488,    -1,  1317,    -1,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,  2503,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2060,    -1,    -1,
      -1,    -1,  2519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2646,    -1,  2633,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1365,    -1,    -1,   308,    -1,    -1,  2544,    -1,    -1,
    1374,    -1,  2549,  2550,  1378,    -1,    -1,    -1,    -1,    -1,
      -1,  2104,    -1,    -1,    -1,    -1,  2682,  2683,    -1,    -1,
    2113,  2114,    -1,  2570,    -1,    -1,    -1,    -1,  2679,  2122,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2141,    -1,
      -1,  2598,    -1,    -1,  2601,    -1,    -1,  2604,  2605,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2170,    -1,  2730,
      -1,    -1,    -1,    -1,     7,  2178,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,  1468,  2188,    -1,    -1,    -1,  2192,
      -1,    -1,    -1,    -1,    -1,    -1,  1480,   421,    -1,    -1,
      -1,    -1,    -1,    -1,  2765,    -1,    -1,    -1,  2784,   433,
     434,    -1,    85,    -1,  2217,    -1,    -1,    50,    -1,    -1,
      -1,  1505,    -1,  2226,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   467,    -1,    -1,    -1,    -1,  1532,    -1,
      -1,    -1,    85,   477,    -1,    -1,    -1,    90,  2261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,   502,    -1,
      -1,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,    -1,
      -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1586,  2306,    -1,    -1,    -1,    -1,    -1,    -1,
    1594,    -1,    -1,  1597,    -1,    -1,  1600,    -1,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1637,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,  2371,    -1,
     203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1663,
      -1,   214,    -1,    -1,  1668,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1686,    -1,  1688,    -1,    -1,    -1,    -1,    -1,
      -1,  1695,    -1,    -1,   247,    -1,  1700,    -1,    -1,  2422,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,   308,   269,    -1,  1116,    -1,
      -1,   274,    -1,    -1,  1122,    -1,  1124,  1125,    -1,    -1,
      -1,  1129,    -1,    -1,    -1,    -1,  1134,    -1,    -1,  1137,
      -1,    -1,  2465,  1141,  1142,    -1,    -1,    -1,    -1,  2472,
      -1,    -1,  2475,  1151,    -1,   308,    -1,    -1,    -1,    -1,
     313,    -1,  1160,  1161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1777,   327,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,   382,
      -1,    -1,  1796,    -1,    -1,    -1,  1800,    -1,   351,  1803,
      -1,    -1,    -1,  2526,    -1,    -1,    -1,    -1,    -1,   362,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2540,    -1,    -1,
      -1,    -1,  2545,  2546,    -1,    -1,    -1,    -1,  2551,   382,
      -1,    -1,    -1,    -1,  2557,    -1,    -1,    -1,    -1,    -1,
     433,   434,  1240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1856,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,   415,    -1,    -1,  2588,    -1,    -1,   421,  2592,
    2593,  1269,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
     433,   434,    -1,  2606,   477,  1283,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,  1899,  1900,    -1,    85,    -1,
    1298,  1905,  1906,  1907,   497,    -1,    -1,    -1,  1306,   502,
      -1,    -1,    -1,    -1,   467,   102,   509,    -1,   511,  1317,
      -1,    -1,    -1,    -1,   477,  2648,  2649,    -1,    -1,    -1,
     483,  1329,  1936,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,   502,
    2673,    -1,   505,    -1,    -1,    -1,   509,    -1,   511,    -1,
    1964,    -1,    -1,    -1,   517,  2688,    -1,    -1,    -1,   194,
     195,   196,    -1,    -1,    -1,    -1,  1374,    -1,   203,    -1,
    1378,    -1,    -1,    -1,  2707,    -1,  2709,  2710,    -1,   214,
    1388,    -1,    -1,    -1,    -1,  1393,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   230,   193,   194,   195,   196,
      -1,    -1,    -1,    -1,    -1,  2738,   203,    -1,    -1,    -1,
      -1,    -1,   247,    -1,    -1,  2748,  2749,    -1,   253,    -1,
     255,  2754,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,   269,  2768,    -1,    -1,    -1,   274,
      -1,    -1,    -1,    -1,  2777,  2059,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,
     267,    -1,  1480,   308,    -1,    -1,    -1,    -1,  2092,    -1,
    2094,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2122,    -1,
    1518,   308,    -1,    -1,    -1,    -1,   351,  2131,    -1,  2133,
      -1,    -1,    -1,  1531,  1532,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1569,    -1,    -1,  2178,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2186,    -1,    -1,    -1,    -1,    -1,  2192,    -1,
      -1,    -1,    -1,    -1,    -1,   382,   421,    -1,    -1,  1597,
      -1,    -1,  1600,    -1,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    -1,     4,    -1,     6,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,  1637,
      -1,    19,   467,  1641,    -1,    -1,   433,   434,    -1,    -1,
      -1,    -1,   477,    -1,  1652,    -1,    -1,  1655,    -1,   446,
      -1,    -1,    -1,    -1,    -1,  1663,    -1,    -1,    -1,    -1,
      -1,    -1,   497,    -1,    52,    53,    -1,   502,  2282,    -1,
    2284,    -1,    -1,    -1,   509,    63,   511,    -1,    -1,    -1,
     477,    -1,   517,    -1,    -1,    -1,    74,    -1,    -1,    77,
      -1,   488,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     497,  2315,    -1,    91,    -1,   502,    -1,    -1,    -1,   506,
      -1,    -1,   509,   510,   511,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
      -1,    -1,  2346,    -1,   122,    -1,   124,    -1,    -1,    -1,
      -1,    -1,    -1,   131,    -1,   133,   134,   135,   136,   137,
     138,   139,   140,    -1,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   166,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,  1796,    -1,
      -1,    -1,  1800,    -1,    -1,  1803,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   197,
      -1,    -1,    -1,    -1,    -1,  2429,   204,  2431,    -1,   207,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,   226,    -1,
      -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,  1856,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,   276,    -1,
     278,    -1,    -1,    -1,    -1,    -1,    -1,  1905,  1906,  1907,
      -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,   296,   297,
      -1,   299,   300,   301,   302,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    -1,     1,    -1,  1943,     4,    -1,     6,    -1,
      -1,   329,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,  1964,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,   379,   380,    -1,    -1,    63,    -1,    -1,   386,    -1,
      -1,    -1,   390,    -1,    -1,    -1,    74,    -1,    -1,    77,
     398,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     408,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,   417,
      -1,    -1,    -1,    -1,  2648,  2649,    -1,    -1,   426,    -1,
      -1,    -1,    -1,   431,   432,    -1,   114,   435,    -1,   437,
      -1,  2059,    -1,    -1,   122,    -1,   124,   445,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     458,    -1,    -1,    -1,  2688,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2092,    -1,  2094,   155,   476,    -1,
      -1,    -1,    -1,  2707,   482,    -1,    -1,    -1,   166,   487,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     508,    -1,    -1,  2131,    -1,  2133,   514,    -1,    -1,   197,
      -1,    -1,    -1,    -1,  2142,    -1,   204,    -1,    -1,   207,
     208,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,   226,    -1,
      -1,   229,    -1,  2777,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2180,  2181,    -1,    -1,    -1,    -1,  2186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   272,    -1,     1,    -1,   276,     4,
     278,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,   289,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,  2282,    -1,  2284,    -1,    -1,    74,
    2288,    -1,    77,    -1,    -1,    -1,   354,   355,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,   365,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2315,    -1,    -1,
      -1,   379,   380,    -1,    -1,    -1,    -1,    33,   386,   114,
      36,    -1,   390,    39,    -1,    -1,    -1,   122,    -1,   124,
     398,    47,    -1,    -1,    -1,    -1,    -1,    -1,  2346,    -1,
     408,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   426,    -1,
     155,    -1,    -1,   431,   432,    -1,    -1,   435,    -1,   437,
      -1,   166,    -1,    -1,    -1,    -1,   171,   445,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     458,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,   476,   204,
      -1,    -1,   207,   208,   482,    -1,    -1,    -1,    -1,   487,
      -1,  2429,   217,  2431,    -1,    -1,    -1,    -1,    -1,   224,
      -1,   226,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2450,    -1,    -1,    -1,   514,    -1,    -1,    -1,
       1,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   272,    -1,    -1,
      -1,   276,    -1,   278,   200,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   289,    -1,    -1,   213,    -1,    -1,
      -1,    52,    53,    -1,    -1,  2513,    -1,    -1,    -1,  2517,
    2518,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    74,    -1,    -1,    77,    -1,    -1,   245,
      -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     266,    -1,   268,    -1,    -1,    -1,    -1,    -1,    -1,   354,
     355,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
     365,   122,    -1,   124,    -1,    -1,   292,   293,    -1,    -1,
      -1,    -1,    -1,    -1,   379,   380,    -1,    -1,    -1,    -1,
      -1,   386,    -1,    -1,    -1,   390,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   398,   155,    -1,    -1,   323,    -1,    -1,
      -1,    -1,    -1,   408,    -1,   166,    -1,    -1,    -1,    -1,
     171,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   426,    -1,    -1,   350,    -1,   431,   432,    -1,    -1,
     435,    -1,   437,    -1,    -1,    -1,   197,    -1,    -1,    -1,
     445,    -1,    -1,   204,    -1,    -1,   207,   208,    -1,    -1,
     376,    -1,    -1,   458,    -1,    -1,   217,   383,    -1,    -1,
      -1,     1,    -1,   224,    -1,   226,    -1,    -1,   229,    -1,
     396,   476,    -1,    -1,   400,    -1,    -1,   482,    -1,    -1,
      -1,    -1,   487,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,   514,
      -1,   272,    -1,    -1,    -1,   276,   442,   278,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   451,    -1,    67,   289,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   480,   316,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   490,    -1,    -1,    -1,   329,    -1,
     496,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   354,   355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   380,
      -1,    -1,    -1,   163,    -1,   386,    -1,    -1,    -1,   390,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   398,   178,    -1,
      -1,   181,   182,   183,   184,   185,    -1,   408,   188,   189,
      -1,    -1,   192,    -1,    -1,    -1,   417,    -1,   198,    -1,
     200,    -1,    -1,    -1,    -1,   426,   206,    -1,    -1,    -1,
     431,   432,    -1,   213,   435,    -1,   437,    -1,    -1,    -1,
      -1,   221,    -1,    -1,   445,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   234,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,   243,    -1,   245,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   254,   476,    -1,    -1,    -1,    -1,
      -1,   482,    -1,    -1,    -1,    -1,   487,    -1,   268,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,    -1,    -1,   514,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   323,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   332,    -1,    -1,   335,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,   348,    -1,
     350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,   376,    -1,    -1,    -1,
      -1,    -1,    -1,   383,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    10,    -1,    -1,    13,    14,    15,    -1,   114,    -1,
     400,    -1,    21,    -1,    -1,    -1,   122,    -1,   124,    -1,
     410,    -1,   412,   413,   414,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     166,    -1,    -1,   453,    -1,   171,    -1,    -1,   458,    -1,
      -1,    -1,    -1,   463,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,
     480,   197,    -1,   102,   484,   485,   486,    -1,   204,    -1,
      -1,   207,   208,    -1,    -1,    -1,    -1,    -1,   498,    -1,
      -1,   217,    -1,    -1,   504,   505,    -1,    -1,   224,    -1,
     226,   511,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,   272,    -1,    -1,    -1,
     276,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   289,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,
     209,   210,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
     316,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   329,    -1,   234,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,
     249,    -1,    -1,    -1,   253,    -1,   255,    -1,   354,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,   365,
     269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   380,    -1,    -1,    -1,   287,    -1,
     386,    -1,    -1,    -1,   390,    -1,   295,     7,    -1,   298,
      10,    -1,   398,    13,    14,    15,    -1,   306,    -1,   308,
      -1,    21,   408,    -1,   313,    -1,    -1,    -1,    -1,   318,
      -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
     426,   194,   195,   196,    -1,   431,   432,    -1,   337,   435,
     203,   437,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,
      -1,   214,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
     476,    -1,    -1,   382,    -1,    -1,   482,    -1,    -1,    -1,
      -1,   487,   102,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   514,    -1,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,   455,    -1,   457,    -1,
     459,    -1,   172,   462,    -1,   464,   465,   466,   467,    -1,
     469,   470,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,    -1,   351,    -1,
      -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,   497,   209,
     210,    -1,    -1,   502,   214,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,    -1,    -1,    -1,    -1,    -1,   517,   382,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   248,   249,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,   421,   269,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,   298,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,   308,    -1,
      -1,    -1,    -1,   313,   467,    -1,    -1,    -1,   318,    -1,
      -1,    -1,    -1,    -1,   477,    -1,    -1,   327,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,
      -1,    -1,    -1,    -1,   497,    -1,    -1,     1,    -1,   502,
      -1,   351,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,
      -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   382,    37,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   421,    76,    -1,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   455,    -1,   457,    -1,   459,
      -1,    -1,   462,    -1,   464,   465,   466,   467,   122,   469,
     470,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     7,    -1,   497,    10,    -1,
      -1,    -1,   502,    -1,   102,    -1,    -1,    -1,    -1,   509,
      -1,   511,    -1,    -1,    -1,    -1,    -1,   517,    -1,    -1,
     174,    -1,    -1,    -1,   178,    -1,    -1,   181,   182,   183,
     184,   185,    -1,    -1,   188,   189,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   206,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
     234,    -1,    -1,   237,    -1,    97,    -1,    -1,    -1,   243,
     102,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,   310,   255,    -1,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
     324,   269,    -1,    -1,    -1,    -1,   274,    -1,   332,    -1,
      -1,   335,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   214,    -1,    -1,    -1,   360,    -1,    -1,    -1,
     308,    -1,    -1,    -1,   368,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,   327,
      -1,    -1,    -1,   102,    -1,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,   351,    -1,   267,   410,   269,   412,   413,
     414,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   382,   439,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,   475,    -1,   421,    -1,   194,   195,   196,    -1,    -1,
     484,   485,   486,    -1,   203,   433,   434,    -1,    -1,   351,
      -1,    -1,    -1,    -1,   498,   214,    -1,    -1,    -1,    -1,
      85,   505,    -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,
      -1,    -1,   460,    -1,    -1,    -1,    -1,   102,    -1,   467,
     382,    -1,    -1,   471,    -1,    -1,    -1,    -1,   247,   477,
     115,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,   497,
     269,    -1,    -1,    -1,   502,   274,    -1,    -1,    -1,   421,
      -1,   509,    -1,   511,     7,    -1,    -1,    10,    -1,   517,
      -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   467,    -1,    -1,   327,   194,
     195,   196,    -1,    -1,    -1,   477,    -1,    -1,   203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,
      -1,    -1,   351,    -1,    -1,   497,    -1,    -1,    -1,    -1,
     502,    -1,    85,    -1,    -1,    -1,    -1,   509,    -1,   511,
      -1,    -1,    -1,    -1,    97,   517,    -1,    -1,    -1,   102,
      -1,    -1,   247,   382,    -1,    -1,    -1,    -1,   253,    -1,
     255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      -1,    10,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,    -1,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,   467,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,   477,    -1,
     203,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    85,    -1,   497,    -1,
      -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,   102,    -1,    -1,    -1,   382,   517,    -1,
      -1,    -1,    -1,    -1,   247,    85,    -1,    -1,    -1,    -1,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,   102,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   467,    -1,   327,   194,   195,   196,   168,    -1,
      -1,    -1,   477,    -1,   203,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,   351,    -1,
      -1,    -1,   497,    -1,   194,   195,   196,   502,    -1,     7,
      -1,    -1,    10,   203,   509,    -1,   511,    -1,    -1,    -1,
      -1,    -1,   517,    -1,   214,    -1,    -1,    -1,   247,   382,
      -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,   274,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,   421,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
     433,   434,    -1,    -1,   274,    -1,    -1,    85,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,    -1,     7,    -1,   327,    10,
      -1,    -1,    -1,    -1,   467,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,   327,    -1,    -1,
      -1,    -1,    -1,     7,   497,    -1,    10,    -1,    -1,   502,
      -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,
      -1,   351,    -1,   382,   517,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   382,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,   102,   421,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   433,   434,   214,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   421,    -1,    -1,   453,    -1,    -1,    -1,   102,    -1,
      -1,    -1,    -1,   433,   434,    -1,    -1,    -1,   467,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,   255,   477,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,   467,   497,    -1,
      -1,    -1,    -1,   502,    -1,    -1,    -1,   477,    -1,    -1,
     509,    -1,   511,   194,   195,   196,    -1,   198,   517,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,   497,    -1,    -1,
     308,    -1,   502,   214,    -1,    -1,    -1,    -1,    -1,   509,
      -1,   511,    -1,    -1,    -1,    -1,    -1,   517,    -1,   327,
     194,   195,   196,    -1,    -1,     7,    -1,    -1,    10,   203,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     214,    -1,   253,   351,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,
      -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,   382,    -1,    -1,    -1,    -1,   253,
      -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,   308,    -1,    -1,
     274,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,    -1,    -1,   327,    -1,    -1,    -1,
     102,    -1,    -1,    -1,     7,   433,   434,    10,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,   467,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   477,
      -1,   382,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,
      -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,   502,    -1,    -1,    -1,    -1,    -1,
      -1,   509,    85,   511,    -1,    -1,    -1,    -1,   382,   517,
     421,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,   102,
      -1,   203,   433,   434,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   415,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   467,    -1,    -1,   433,
     434,    -1,    -1,    -1,    -1,   247,   477,    -1,    -1,    -1,
      -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,   497,   269,    -1,    -1,
      -1,   502,   274,   467,    -1,    -1,    -1,    -1,   509,    -1,
     511,    -1,    85,   477,    -1,    -1,   517,    -1,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,   102,
     203,    -1,    -1,   497,    -1,    -1,   308,    -1,   502,    -1,
      -1,   214,    -1,    -1,    -1,   509,    -1,   511,    -1,    -1,
      -1,    -1,    -1,   517,    -1,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,   351,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,
     203,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,    -1,
      -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,
      -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,   351,    -1,
     253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,   262,
     263,    -1,    -1,    -1,   267,   467,   269,    -1,    -1,    -1,
      -1,   274,    -1,    -1,    -1,   477,    -1,    -1,    -1,   382,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
     502,    -1,    -1,    -1,    -1,   308,    -1,   509,    -1,   511,
      -1,    -1,    -1,    -1,    -1,   517,    -1,    -1,   421,    -1,
      -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,   467,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    37,   382,
      -1,    40,    41,    42,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,   502,
      -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,
      -1,    -1,    -1,    -1,   517,    -1,    -1,    76,   421,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
     433,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   467,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,   502,
      -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,   511,    -1,
      -1,    -1,    -1,    -1,   517,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   181,   182,   183,   184,   185,    -1,    -1,   188,
     189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,   237,    -1,
      -1,    -1,    -1,    33,   243,    -1,    36,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,
      -1,   280,    -1,    -1,    -1,    -1,    76,    -1,    78,    79,
      80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,
      -1,    -1,   122,   332,    -1,    -1,   335,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   348,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   360,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   368,
      -1,    -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,   182,   183,   184,   185,    -1,    -1,   188,   189,
      -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,   198,    -1,
     200,   410,    -1,   412,   413,   414,   206,    -1,    -1,    -1,
      -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     439,    -1,    -1,    -1,   234,    -1,    -1,   237,    -1,    -1,
      -1,    -1,    -1,    85,    -1,   245,    -1,    -1,    -1,   458,
      -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,   475,    -1,   268,    -1,
      -1,    -1,    -1,    -1,    -1,   484,   485,   486,    -1,    -1,
     280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   498,
      -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   323,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   332,    -1,    76,   335,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    85,    -1,   348,    -1,
     350,   193,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,    -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,    -1,
     122,    -1,    -1,   383,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     400,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     410,    -1,   412,   413,   414,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,    -1,   453,    -1,   194,   195,   196,   458,    -1,
      -1,    -1,    -1,   463,   203,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,   221,
     480,    -1,    -1,    -1,   484,   485,   486,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,   498,    -1,
      -1,    -1,   203,    -1,   504,   505,    -1,    -1,   247,    -1,
      -1,    -1,    -1,   214,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,
     382,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,   433,   434,   335,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   446,    -1,   348,   308,    -1,    -1,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   382,    -1,    -1,   488,    -1,    -1,    -1,
     351,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
     502,    -1,    -1,    -1,   506,    -1,    -1,   509,   510,   511,
     412,   413,   414,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   382,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   433,   434,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,   455,    -1,    -1,    -1,
     421,    -1,    -1,    -1,    -1,    -1,   465,    -1,   467,    -1,
     469,   470,   433,   434,    -1,    -1,    -1,    -1,   477,    -1,
      -1,    -1,   484,   485,   486,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   455,    -1,    -1,    -1,   497,    -1,
      -1,    -1,    -1,   502,   465,    -1,   467,    -1,   469,   470,
     509,    -1,   511,    -1,    -1,    85,   477,    -1,   517,    -1,
      -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,    -1,
      -1,   203,   102,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,   502,   214,    -1,    -1,   194,   195,   196,   509,    -1,
     511,    -1,    -1,    -1,   203,    -1,   517,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,   247,    -1,
      -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   327,   351,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   382,    -1,    -1,    -1,    -1,   308,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,
      -1,   433,   434,    -1,   102,    -1,    -1,    -1,    -1,   441,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   351,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,
      -1,    -1,   441,   465,    -1,   467,    -1,   469,   470,    -1,
      -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,    -1,
      -1,    -1,   382,    -1,    -1,    -1,   465,    -1,   467,    -1,
     469,   470,    -1,    -1,    -1,   497,    85,    -1,   477,    -1,
     502,    -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,   511,
      -1,    -1,    -1,   102,    -1,   517,    -1,    -1,   497,    85,
      -1,   421,    -1,   502,    -1,    -1,   194,   195,   196,    -1,
     509,    -1,   511,   433,   434,   203,   102,    -1,   517,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   465,    -1,   467,    -1,   469,
     470,    -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,   247,
      -1,    -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,   497,    -1,   267,
      -1,   269,   502,    -1,    -1,   194,   195,   196,    -1,   509,
      -1,   511,    -1,    -1,   203,    -1,    -1,   517,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
     308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,   327,
      -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,   247,    -1,   351,    -1,    -1,    -1,   253,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   382,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,   351,    -1,    85,   433,   434,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   351,    -1,    -1,    -1,   378,
      -1,    -1,    -1,   382,    -1,    -1,    -1,   465,    -1,   467,
      -1,   469,   470,    -1,    -1,    -1,    -1,    -1,    -1,   477,
      -1,    -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,
      -1,    -1,   421,    -1,   502,    -1,    -1,    -1,    -1,    -1,
      -1,   509,    -1,   511,   433,   434,    -1,    -1,    -1,   517,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,   467,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,   477,    -1,
      -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   467,   491,   469,    -1,    -1,    -1,    -1,   497,    -1,
      -1,   477,    -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,
     509,    -1,   511,    -1,    -1,    -1,   247,    -1,   517,    -1,
      -1,   497,   253,    -1,   255,    -1,   502,    -1,   259,    -1,
     261,   262,   263,   509,    -1,   511,   267,    -1,   269,    -1,
      -1,   517,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   467,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,   502,    -1,    -1,    -1,    -1,    -1,    -1,   509,    -1,
     511,    -1,    -1,    -1,    -1,    -1,   517
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
     551,   555,   566,   574,   575,   576,   577,   578,   583,   592,
     594,   599,   602,   603,   605,   606,   607,   608,   609,   610,
     611,   542,   530,   458,   234,   544,  1296,   511,  1215,  1215,
     428,   410,  1315,  1296,  1296,  1296,   399,  1215,   410,   458,
     458,  1296,   458,   458,    60,  1285,   579,     1,   458,   577,
     220,   593,   176,   612,   458,   532,   458,    75,   174,   359,
     463,   545,   546,   584,  1296,  1296,  1296,   511,  1210,  1241,
      71,  1210,   458,  1296,  1296,   556,   567,  1210,   552,   511,
     595,   596,   597,  1216,   259,   312,   314,   580,   582,  1060,
    1244,  1296,   458,   511,   458,   614,   546,   345,  1312,  1296,
     214,   259,   269,   351,   421,   467,   517,   600,   601,  1247,
    1210,   259,   220,   311,  1337,   259,   475,    59,    66,   271,
     345,   401,   406,   511,   557,   558,   559,   560,   561,   562,
     563,   565,  1284,  1347,   201,   568,   569,   570,   553,   565,
     596,    23,   234,  1216,  1297,  1060,   234,   428,  1309,  1296,
      99,  1215,   236,   402,   613,   615,    29,   129,   214,   259,
     269,   283,   351,   421,   424,   425,   517,   585,   586,   587,
     590,   601,   449,   510,   604,  1328,  1241,   405,   406,   415,
      66,  1296,   458,   559,   458,   511,   558,    62,  1296,    10,
     375,   503,   571,   573,     1,   458,   570,   554,  1328,   259,
     598,  1245,  1309,   234,  1215,  1215,   581,   582,   458,     1,
     295,   317,  1270,   277,   393,   650,   651,   652,   653,   655,
     587,    18,   449,  1247,   333,  1296,   406,  1244,   458,  1296,
     511,  1211,   231,    27,   572,   231,   375,   458,   458,   110,
    1245,  1215,   458,   317,  1215,   656,   356,   417,   418,   654,
     536,     1,   458,   652,   588,   590,   259,  1244,   260,   440,
     501,   564,  1211,   259,   275,   616,   461,  1288,    24,  1279,
     105,   660,   458,   589,   590,    60,   512,  1341,   617,   444,
    1321,   191,  1289,   125,   461,   661,    18,     5,    20,    30,
      66,   222,   254,   320,   325,   356,   364,   377,   406,   409,
     417,   458,   461,   618,   619,   625,   627,   629,   630,   631,
     632,   633,   636,   637,   638,   639,   640,   645,   646,   648,
    1313,  1330,    89,  1286,   511,  1200,  1201,   458,   399,   662,
     590,   275,  1302,   356,  1329,   453,   504,  1325,   406,   407,
    1296,  1284,   116,   239,  1298,  1298,   292,   647,  1244,  1328,
     428,   265,    40,  1282,  1296,   657,   658,  1201,  1201,   458,
     175,   397,   537,   663,   664,   666,  1296,  1298,   128,   174,
     622,   356,   364,   637,  1296,  1296,  1296,  1296,  1279,    10,
     292,   354,   649,  1296,  1302,   407,   511,   658,   336,   659,
     513,   691,   693,   694,     1,  1201,   128,   352,   407,   626,
    1296,   120,   121,   122,   240,   254,   340,   352,   444,   620,
     621,   259,  1210,  1214,   424,  1210,  1210,   321,  1310,  1310,
     315,  1210,  1296,  1244,   399,   264,   748,   695,   696,   698,
     708,  1262,   458,   665,  1210,   259,   624,  1241,   624,     8,
     624,   624,   259,   623,  1241,   419,   459,   641,    34,   170,
     270,   634,   458,   399,   258,   750,   458,   696,   458,     1,
     178,   511,   699,   700,   511,   667,   127,   510,   641,  1264,
    1346,  1288,  1296,   642,   643,   510,   635,   635,   692,   458,
     399,   371,   752,   458,   458,   697,    88,    48,    65,   105,
     241,   252,   356,   357,   371,   373,   458,   505,   668,   669,
     671,   675,   676,   679,   680,   686,   687,   688,   689,  1296,
     127,   642,   437,   628,   644,  1210,   644,   265,   390,   693,
     749,   458,   399,   394,   809,   710,   701,  1296,  1286,  1296,
     356,   358,  1342,  1342,  1296,  1286,  1296,  1302,  1296,    23,
    1278,   311,   690,  1215,   174,   206,  1264,   508,   314,   693,
     751,   458,   399,   538,    22,    37,    40,    41,    42,    43,
      44,    45,    46,    76,    78,    79,    80,    81,    82,    83,
      84,   122,   181,   182,   183,   184,   185,   188,   189,   221,
     237,   280,   310,   324,   332,   335,   348,   360,   368,   410,
     412,   413,   414,   439,   484,   485,   486,   498,   505,   711,
     712,   713,   715,   716,   717,   718,   719,   720,   721,   724,
     736,   737,   739,   740,   741,   746,   747,  1296,  1317,    27,
     198,   709,  1280,   206,  1244,   511,  1297,  1297,   511,  1212,
    1213,   313,   423,  1338,  1214,  1244,   506,  1296,   177,   215,
     511,   677,  1215,   628,    10,   421,   517,   591,   277,   356,
     358,  1340,   693,   753,   458,   342,   823,   826,   246,   306,
     411,   483,  1316,   483,  1316,   483,  1316,   483,  1316,   483,
    1316,   508,  1326,   389,  1314,   128,  1244,  1238,  1241,  1241,
     234,   244,   389,   738,  1296,  1297,   174,   206,   243,   475,
     511,    10,    51,   214,   246,   247,   259,   269,   351,   421,
     467,   517,   702,  1248,  1249,  1250,   453,   674,  1213,   257,
    1301,   453,  1285,   220,  1291,   511,  1296,  1296,  1248,  1340,
     754,   810,   125,   849,   850,   517,    54,   728,   453,   725,
     469,  1242,  1243,   449,   718,   743,   744,  1248,    27,   714,
     405,  1274,  1274,  1250,   311,  1306,     1,    41,    42,    43,
      44,    45,   181,   182,   183,   184,   185,   186,   187,   335,
     348,   703,   704,   705,   706,   707,   719,   720,  1238,   703,
     454,  1244,    60,   358,   670,   681,  1244,   415,  1318,   259,
     678,  1241,   678,   353,   755,   698,   708,   811,   812,   813,
      58,   504,   827,     1,     4,     6,    11,    19,    52,    53,
      63,    74,    77,    91,   114,   122,   124,   155,   166,   171,
     197,   204,   207,   208,   217,   224,   226,   229,   272,   276,
     278,   289,   316,   329,   354,   355,   365,   379,   380,   386,
     390,   398,   408,   417,   426,   431,   432,   435,   437,   445,
     458,   476,   482,   487,   514,   851,   852,   868,   873,   877,
     882,   897,   900,   904,   908,   909,   910,   915,   929,   933,
     936,   950,   954,   957,   960,   964,   965,   969,   979,   982,
     999,  1001,  1004,  1008,  1014,  1026,  1034,  1035,  1038,  1039,
    1043,  1048,  1049,  1057,  1072,  1082,  1091,  1096,  1103,  1107,
    1109,  1112,  1115,  1119,  1146,   851,  1291,   198,   726,  1244,
     452,  1323,    85,   102,   194,   195,   196,   203,   247,   253,
     255,   261,   262,   263,   267,   308,   327,   382,   433,   434,
     465,   469,   470,   477,   497,   502,   509,  1188,  1190,  1191,
    1192,  1193,  1194,  1195,  1223,  1237,  1238,  1249,  1251,  1252,
    1253,  1254,   469,  1243,  1241,   742,   744,   449,   259,  1284,
     703,   458,  1250,    49,   472,   682,   683,   684,   685,  1328,
    1285,   198,   673,  1290,   511,  1202,     1,   699,   813,   458,
     829,   828,   381,   835,     4,     6,    11,    19,    52,    53,
      63,    74,    77,    91,   114,   122,   124,   131,   133,   134,
     135,   136,   137,   138,   139,   140,   142,   143,   144,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   166,
     171,   197,   204,   207,   208,   217,   224,   226,   229,   272,
     276,   278,   289,   316,   329,   354,   365,   380,   386,   390,
     398,   408,   417,   426,   431,   432,   435,   437,   445,   458,
     476,   482,   487,   514,  1275,   853,   869,   874,   878,   883,
     898,   901,   905,   911,   916,   930,   934,   937,   951,   955,
     958,   961,   205,   381,   892,   953,   966,   970,   980,   983,
    1000,  1002,  1005,   404,  1009,  1015,  1027,  1036,  1040,  1044,
    1050,  1058,  1073,  1083,   259,   351,   392,   421,   517,  1095,
    1097,  1104,   341,  1108,  1110,   838,  1113,  1116,  1120,  1147,
     511,  1244,   725,   117,   727,   469,   469,   469,  1256,  1238,
    1249,  1251,  1337,  1337,   469,   469,   469,   469,  1337,  1194,
    1190,  1194,   469,  1256,    73,   403,   455,  1189,   456,   465,
     470,   457,   466,   172,   469,  1255,   469,   469,  1190,   508,
     745,  1327,  1248,  1214,  1214,   190,   674,  1244,   756,   458,
     814,   458,    50,   830,   831,   832,  1283,   830,   511,   458,
     313,   854,   855,  1237,     7,    97,   247,   274,   870,  1195,
    1219,  1220,  1237,  1248,  1251,   875,  1190,  1237,   259,   879,
     880,  1206,  1207,  1208,  1241,   274,   427,   429,   884,   885,
     259,   899,  1228,  1237,   902,  1201,     7,   906,  1195,  1196,
    1197,  1218,  1239,  1240,  1241,  1249,   461,   912,  1201,   259,
     917,   918,   920,  1219,  1220,  1228,  1237,   931,  1220,   259,
     935,   460,   471,   938,   939,   940,  1178,  1179,  1180,   201,
     328,   329,   345,   399,   952,   956,  1217,  1218,   959,  1241,
     453,   962,  1324,  1220,  1177,  1178,   971,  1217,   981,  1202,
     984,   985,  1237,  1248,  1251,  1074,  1235,  1236,  1241,    97,
    1003,  1220,  1006,  1220,   173,   227,   235,   322,  1010,  1011,
     193,   259,  1016,  1020,  1021,  1022,  1206,  1229,  1237,  1241,
    1251,  1328,  1028,  1201,  1037,  1198,  1241,  1041,  1201,  1045,
    1198,    10,  1051,  1199,  1241,   156,   274,  1059,  1062,  1063,
    1066,  1067,  1068,  1069,  1070,  1071,  1203,  1204,  1217,  1234,
    1236,  1241,  1074,  1084,  1201,  1092,   115,  1098,  1099,  1100,
    1220,    97,  1105,  1219,  1111,  1202,   458,   511,   839,   840,
     843,   844,   849,  1114,  1237,  1117,  1201,   259,  1121,  1229,
    1148,  1198,   225,   729,   314,  1307,   730,   731,  1188,  1190,
    1260,  1188,  1261,   455,  1188,   511,   511,  1190,  1259,  1259,
    1259,  1222,  1237,  1249,  1251,  1258,   511,   455,  1222,  1257,
    1190,   455,  1190,  1191,  1191,  1192,  1192,  1192,  1190,  1222,
    1188,   408,   460,    31,  1281,  1285,     1,   757,   815,   831,
     415,   483,   833,   362,   505,   824,   133,   867,    31,   857,
     858,  1281,   198,  1306,  1237,  1238,  1249,  1251,   134,   872,
     453,   871,  1220,    60,   225,  1265,   880,   453,  1337,   135,
     896,  1229,  1228,  1201,   361,   481,   903,  1328,  1343,  1306,
     136,   907,   162,   459,  1197,  1334,   391,  1271,  1242,  1243,
     913,  1201,   137,   914,  1313,   138,   928,   168,   919,  1157,
    1158,   491,   921,   510,   858,   492,   493,   494,   495,   139,
     932,    50,   230,   504,   886,   140,   949,    18,   508,   941,
     942,   943,   945,    13,    14,    15,    21,   162,   172,   209,
     210,   248,   249,   287,   295,   298,   306,   313,   318,   337,
     455,   457,   459,   462,   464,   465,   466,   469,   470,  1181,
    1182,  1183,  1184,  1185,  1186,  1187,  1220,   104,   953,  1218,
    1205,   448,  1322,   972,  1328,  1202,    95,   370,   443,   986,
     987,   989,   990,  1076,   469,  1242,  1220,   453,   143,  1007,
      50,  1011,   409,  1012,  1021,   144,   458,  1017,  1019,   488,
     506,   449,   452,   446,   146,  1033,   289,   339,  1268,   198,
    1149,   147,  1042,  1313,   148,  1047,  1149,  1199,   149,  1056,
     506,  1052,  1226,  1237,  1249,  1069,  1071,  1217,   453,  1204,
     126,   453,   489,  1061,    32,  1242,   150,  1090,   180,   239,
     242,  1086,   892,  1093,  1328,  1283,   151,  1102,   230,  1100,
    1237,   152,  1106,   198,  1202,   399,   458,   458,   198,   356,
     358,  1118,   153,  1130,   115,  1122,   154,  1153,  1149,   730,
    1210,   222,   733,    28,   118,   732,  1189,   455,  1189,   455,
     455,  1189,   455,   455,   455,  1189,   455,  1189,   455,   455,
     456,   455,   455,   453,  1296,  1214,   117,   672,   458,    64,
      92,    93,   326,   458,   758,   759,   764,  1296,  1355,    33,
      36,    39,    46,    47,    67,    69,   163,   192,   198,   200,
     213,   245,   254,   268,   310,   323,   350,   376,   383,   400,
     453,   463,   480,   504,   716,   717,   721,   736,   739,   741,
     816,   821,   822,  1296,  1331,  1296,   415,   317,   834,   112,
     836,  1226,   199,   861,   254,   336,   859,   860,  1331,    25,
      26,    68,    70,    72,   106,   107,   108,   156,   158,   165,
     168,   254,   257,   450,   500,   511,   856,  1204,  1332,   155,
     345,  1224,  1238,   453,     7,  1195,  1196,  1220,  1241,  1249,
     205,   225,  1266,   381,   876,   344,   881,  1208,   886,   903,
     265,   292,  1289,  1238,  1190,   275,  1272,  1243,  1201,   233,
    1173,  1174,   846,   847,   920,  1220,   299,  1159,    99,   340,
     511,  1204,   303,   925,    36,    39,    46,    47,    94,   163,
     192,   213,   268,   323,   383,   396,   480,   926,   927,   491,
     922,  1157,  1157,  1157,  1157,  1220,  1196,  1220,   887,   940,
      22,   460,   471,   946,   947,  1179,   508,   943,   944,   508,
     846,  1324,   234,  1182,   117,   963,  1206,   131,   846,   967,
      10,    13,    16,    17,   280,   281,   306,   307,   973,   977,
     178,  1226,    10,    60,   180,   243,   475,   993,   994,   995,
     988,   989,  1078,  1307,  1346,   453,  1217,  1196,  1220,  1012,
    1328,  1200,   846,   171,  1023,  1177,  1024,  1025,  1237,  1206,
       9,    38,  1151,  1313,  1233,  1237,  1248,  1251,   230,  1029,
    1046,  1328,   132,  1053,  1237,  1053,   453,   453,  1060,   155,
     460,   471,  1220,    50,    39,    47,   213,   245,   268,   323,
     383,   480,  1064,  1065,  1296,  1085,  1328,  1220,   164,   294,
     415,  1220,  1237,   198,  1196,  1220,   845,  1244,  1226,  1283,
     230,  1125,  1150,  1151,   733,  1283,  1298,   441,  1255,   441,
    1255,  1210,  1255,  1255,  1255,  1222,   243,   475,  1255,   455,
    1190,  1255,  1255,  1248,  1307,  1296,  1297,  1297,   250,   251,
    1300,   774,   206,   179,   760,   761,   762,   763,  1237,  1296,
     254,   394,   159,   161,  1296,  1233,   304,  1304,  1244,    59,
    1237,  1237,   206,  1304,    33,   113,  1244,  1296,   511,   458,
     825,   275,   862,  1304,  1304,   860,   859,  1304,   168,  1154,
    1155,   516,   515,  1226,  1154,   239,   428,   304,   279,   259,
    1225,  1238,  1237,  1306,   416,  1160,  1161,  1242,  1243,  1196,
     453,  1267,   876,  1218,   453,  1206,   891,   892,   385,   367,
    1160,  1296,   846,   300,  1175,   848,   846,  1157,  1296,   254,
     394,   159,   161,  1296,   126,   489,   927,  1157,    99,   100,
     923,   862,   205,  1160,   205,   888,   889,   890,  1283,    18,
     449,   948,   321,   946,  1307,   846,   131,   142,   968,  1324,
     370,   974,  1324,   453,    50,   994,   996,  1226,    10,    60,
     243,   475,   991,   992,  1226,  1079,  1330,   732,   220,   319,
    1292,  1217,  1160,   205,  1200,   649,   384,  1013,  1328,   144,
    1018,     9,   198,  1029,  1237,   132,  1166,  1168,  1173,   265,
     292,   846,   508,   508,  1054,  1055,  1226,  1225,  1220,  1060,
    1060,  1060,  1060,  1060,  1060,  1060,  1060,  1065,   295,   298,
    1087,  1088,  1089,  1183,  1269,  1173,   246,   415,  1345,   428,
    1320,  1320,  1101,  1328,  1237,  1160,   205,   458,   453,    10,
    1123,  1124,  1263,  1126,  1237,  1101,  1126,  1046,     8,  1276,
     511,   734,   735,  1296,   455,  1210,  1228,  1297,  1297,   259,
     517,   765,   766,  1237,  1246,   698,   775,   762,   763,   517,
    1230,  1234,  1244,  1230,  1296,  1323,  1296,  1296,    33,  1244,
     837,   838,  1296,   510,   863,  1230,  1230,  1230,   846,   299,
    1156,  1154,  1271,  1238,   846,   302,  1162,  1243,  1160,  1227,
    1237,  1248,   168,   468,   894,  1336,     7,   230,   313,   467,
     893,  1295,    35,   284,   285,   286,   349,   473,   474,   478,
    1273,   846,   849,  1230,  1230,  1176,  1232,  1234,  1244,  1176,
     510,   924,  1196,  1197,  1196,  1197,   889,   313,   833,    90,
     362,   505,   947,  1178,   846,  1237,   846,   505,   975,   976,
     977,   978,  1322,   505,  1227,  1226,    50,   997,   992,   191,
     997,  1075,  1296,  1298,   319,  1196,  1013,   265,   292,  1025,
    1220,   219,  1030,  1328,   846,   296,  1169,   265,  1178,  1177,
    1054,  1183,  1237,  1184,  1185,  1186,  1187,  1190,  1094,  1220,
    1094,   468,  1163,  1164,   335,  1271,  1196,   841,  1227,   318,
    1226,   116,  1127,   443,  1129,   160,   297,  1152,  1170,  1171,
    1172,  1173,   326,  1204,  1230,   735,  1209,  1210,   767,   254,
     257,  1339,   511,   699,   273,   334,   465,   470,   817,   818,
     819,  1228,   817,   818,   820,   838,    48,    33,    36,    39,
      47,    94,   113,   192,   200,   213,   245,   266,   268,   292,
     293,   323,   350,   376,   383,   396,   400,   442,   451,   480,
     490,   496,   864,   865,   866,  1154,   846,  1160,   846,   299,
     895,   846,  1306,  1237,   254,   257,  1344,   926,  1160,   366,
    1160,   366,  1220,   976,   105,  1287,  1324,   997,   997,  1227,
       9,    38,   998,   227,   504,  1080,  1210,  1077,  1160,   385,
      50,   265,   239,  1031,   218,   238,   265,   292,   507,   846,
     846,   846,   846,   301,  1165,  1296,  1160,  1160,   499,   842,
    1131,  1124,  1291,    98,  1128,  1291,  1163,   846,   846,  1172,
     254,   257,  1299,  1210,   180,   190,   212,   242,   256,   768,
     769,   770,   771,   772,   773,   766,   776,  1230,  1230,   132,
    1296,  1296,   866,    59,   126,   489,     9,  1277,   865,   846,
    1237,  1197,  1197,    50,   113,   997,   463,  1294,  1294,   342,
    1200,   205,   322,  1081,  1241,  1220,  1296,  1032,  1167,  1168,
    1169,  1173,   265,   265,   265,   846,  1237,  1132,   458,  1237,
    1291,  1237,   109,   119,  1348,  1296,  1296,    57,    92,  1348,
    1349,  1296,  1332,   777,   112,  1230,  1230,  1296,  1176,  1176,
    1231,  1234,  1246,  1160,  1160,  1220,  1220,  1220,  1296,  1200,
     342,   488,  1237,  1169,   130,   169,   206,  1133,  1134,  1135,
    1137,  1141,  1143,  1144,  1145,  1281,  1289,  1237,  1296,   766,
     766,   212,  1296,  1296,   766,     3,   211,   254,   290,   310,
     338,   419,   436,   458,   479,   498,   506,   716,   721,   722,
     736,   739,   741,   778,   779,   783,   785,   788,   789,   792,
     793,   794,   799,   800,   806,   807,   808,  1331,  1332,  1333,
     458,  1228,  1020,  1296,  1177,    38,  1277,   345,   110,   766,
     766,   766,   223,  1293,   304,   797,  1296,  1244,  1296,  1306,
    1296,  1296,  1237,     9,    38,   237,   508,   334,   470,   795,
     796,   798,  1246,  1307,   803,   804,   805,   817,  1246,   304,
     305,  1305,  1020,   372,   423,  1319,   132,   426,  1142,  1307,
     234,   291,   334,   470,   784,  1244,   725,  1223,  1221,  1223,
      56,    92,   326,   330,   331,   371,   387,   388,   780,  1348,
    1349,  1350,  1351,  1352,  1353,  1354,   122,   198,   288,  1303,
    1303,     9,    38,  1177,  1246,  1246,   795,   291,   804,  1246,
      55,   244,   389,   801,   802,  1237,   164,   168,  1335,    10,
    1138,  1139,  1207,  1244,  1244,  1323,  1271,   378,   491,   786,
    1223,   190,   190,   212,   190,   212,   191,   314,  1308,  1308,
    1223,   318,   326,   790,   791,  1237,   790,  1303,  1303,  1297,
     342,  1311,   311,   343,   363,  1140,  1139,   727,  1307,  1237,
     179,   781,  1237,    10,   179,   782,  1237,    50,   790,   326,
     326,  1307,   311,  1241,   430,   723,   179,   787,  1237,   318,
    1223,   173,   227,   235,   322,  1136,  1200,  1244,   326
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
     580,   581,   581,   582,   582,   584,   583,   585,   585,   585,
     585,   585,   585,   586,   586,   587,   587,   588,   587,   589,
     589,   590,   590,   590,   590,   590,   590,   591,   591,   592,
     593,   593,   594,   595,   595,   596,   597,   597,   598,   598,
     599,   600,   600,   601,   601,   602,   603,   604,   604,   605,
     606,   607,   608,   609,   610,   611,   611,   612,   612,   613,
     613,   614,   614,   616,   615,   615,   617,   617,   618,   618,
     618,   618,   618,   618,   618,   618,   618,   618,   618,   618,
     618,   619,   619,   619,   619,   619,   620,   620,   620,   620,
     621,   621,   622,   622,   622,   623,   623,   624,   624,   624,
     625,   626,   626,   626,   627,   627,   628,   628,   628,   629,
     630,   631,   631,   631,   633,   632,   634,   634,   634,   635,
     635,   635,   635,   636,   636,   637,   637,   637,   637,   638,
     639,   640,   640,   641,   641,   643,   642,   642,   644,   645,
     646,   647,   647,   648,   649,   649,   649,   650,   650,   650,
     651,   651,   652,   652,   653,   654,   654,   654,   654,   656,
     655,   657,   657,   658,   659,   659,   660,   660,   661,   661,
     662,   662,   663,   665,   664,   664,   666,   666,   667,   667,
     668,   668,   668,   668,   668,   668,   668,   668,   668,   668,
     668,   669,   670,   670,   670,   671,   671,   671,   672,   672,
     673,   673,   674,   674,   675,   676,   676,   677,   677,   678,
     678,   679,   680,   681,   681,   682,   682,   682,   683,   684,
     685,   686,   687,   688,   689,   689,   690,   690,   691,   692,
     691,   693,   694,   693,   695,   695,   695,   696,   697,   696,
     696,   698,   699,   699,   699,   700,   701,   701,   702,   702,
     702,   702,   703,   703,   703,   703,   703,   703,   703,   703,
     703,   703,   703,   703,   703,   704,   704,   705,   705,   706,
     706,   706,   707,   707,   708,   709,   709,   710,   710,   711,
     711,   711,   711,   711,   711,   711,   711,   711,   711,   711,
     711,   711,   711,   712,   713,   714,   714,   715,   716,   717,
     717,   718,   718,   718,   718,   718,   718,   718,   718,   718,
     718,   718,   718,   718,   718,   718,   718,   718,   718,   718,
     718,   718,   718,   718,   718,   718,   718,   718,   718,   718,
     718,   718,   718,   718,   718,   718,   718,   719,   719,   720,
     720,   721,   721,   722,   723,   723,   724,   724,   725,   725,
     726,   726,   727,   727,   728,   728,   729,   729,   730,   731,
     731,   732,   732,   733,   733,   734,   734,   735,   736,   737,
     738,   738,   738,   739,   740,   742,   741,   743,   743,   744,
     744,   745,   745,   746,   746,   747,   747,   748,   749,   748,
     750,   751,   750,   752,   753,   752,   754,   754,   756,   755,
     757,   757,   757,   758,   758,   758,   758,   759,   760,   760,
     760,   761,   762,   762,   763,   764,   765,   765,   765,   766,
     766,   767,   767,   768,   768,   768,   768,   768,   768,   769,
     770,   771,   772,   773,   774,   774,   776,   775,   777,   777,
     778,   778,   778,   778,   778,   778,   778,   778,   778,   778,
     778,   778,   778,   778,   778,   778,   779,   780,   780,   780,
     780,   780,   780,   780,   781,   781,   781,   781,   782,   782,
     782,   782,   783,   784,   784,   784,   784,   785,   786,   786,
     786,   787,   787,   788,   788,   788,   788,   788,   789,   789,
     790,   790,   791,   791,   791,   792,   793,   794,   795,   795,
     796,   796,   796,   796,   797,   797,   797,   798,   799,   800,
     801,   801,   802,   802,   802,   803,   803,   804,   804,   805,
     806,   807,   808,   809,   810,   809,   811,   811,   812,   812,
     813,   814,   813,   813,   815,   815,   816,   816,   816,   816,
     816,   816,   816,   816,   816,   816,   816,   816,   816,   816,
     816,   816,   816,   816,   816,   816,   816,   816,   816,   816,
     816,   816,   816,   816,   816,   816,   816,   816,   816,   816,
     817,   817,   818,   818,   819,   819,   819,   820,   820,   820,
     821,   822,   823,   824,   825,   823,   826,   823,   827,   828,
     827,   829,   827,   830,   830,   831,   832,   832,   832,   833,
     833,   833,   833,   833,   833,   834,   834,   835,   835,   836,
     837,   836,   838,   838,   839,   839,   839,   839,   839,   841,
     840,   842,   842,   843,   844,   845,   845,   847,   848,   846,
     850,   849,   849,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   851,   851,   851,   851,   851,   851,
     851,   851,   851,   851,   853,   852,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   854,   854,   854,   854,   854,
     854,   854,   854,   854,   854,   855,   855,   856,   856,   857,
     857,   858,   858,   858,   858,   858,   859,   860,   860,   861,
     861,   862,   862,   863,   863,   864,   864,   865,   865,   865,
     865,   865,   865,   865,   865,   865,   865,   865,   865,   865,
     865,   865,   865,   865,   865,   865,   865,   865,   865,   865,
     865,   865,   865,   866,   866,   867,   867,   869,   868,   870,
     870,   870,   871,   871,   872,   872,   874,   873,   875,   875,
     876,   876,   878,   877,   879,   879,   880,   881,   881,   883,
     882,   884,   885,   885,   885,   885,   886,   887,   886,   888,
     888,   889,   889,   890,   890,   890,   890,   891,   891,   891,
     891,   892,   892,   893,   893,   894,   894,   895,   895,   896,
     896,   898,   897,   899,   899,   901,   900,   902,   902,   903,
     903,   903,   903,   903,   905,   904,   906,   907,   907,   908,
     909,   911,   910,   912,   912,   913,   913,   914,   914,   916,
     915,   917,   917,   917,   917,   917,   917,   917,   918,   919,
     918,   920,   921,   921,   921,   921,   921,   922,   922,   923,
     923,   924,   924,   925,   925,   926,   926,   927,   927,   927,
     927,   927,   927,   927,   927,   927,   927,   927,   927,   927,
     927,   927,   927,   928,   928,   930,   929,   931,   931,   931,
     931,   931,   932,   932,   934,   933,   935,   937,   936,   938,
     939,   939,   940,   940,   940,   941,   941,   942,   942,   943,
     944,   945,   945,   946,   946,   947,   947,   947,   947,   948,
     948,   949,   949,   951,   950,   952,   952,   952,   952,   952,
     952,   952,   953,   953,   955,   954,   956,   958,   957,   959,
     961,   960,   962,   963,   963,   964,   966,   965,   967,   967,
     967,   968,   968,   970,   969,   971,   972,   972,   973,   973,
     973,   974,   974,   975,   975,   976,   977,   977,   977,   977,
     977,   977,   977,   978,   978,   980,   979,   981,   981,   983,
     982,   984,   985,   985,   985,   986,   986,   986,   986,   988,
     987,   989,   990,   991,   991,   992,   992,   992,   992,   992,
     992,   993,   993,   994,   994,   995,   995,   995,   995,   995,
     996,   997,   997,   998,   998,  1000,   999,  1002,  1001,  1003,
    1003,  1005,  1004,  1006,  1006,  1007,  1007,  1009,  1008,  1010,
    1010,  1011,  1011,  1011,  1011,  1012,  1012,  1013,  1013,  1013,
    1013,  1015,  1014,  1016,  1017,  1016,  1016,  1018,  1018,  1019,
    1019,  1020,  1020,  1021,  1021,  1021,  1021,  1021,  1022,  1022,
    1023,  1023,  1024,  1024,  1025,  1027,  1026,  1028,  1029,  1029,
    1030,  1030,  1030,  1030,  1030,  1030,  1030,  1031,  1031,  1032,
    1032,  1033,  1033,  1034,  1036,  1035,  1037,  1038,  1040,  1039,
    1041,  1042,  1042,  1044,  1043,  1045,  1046,  1046,  1046,  1047,
    1047,  1048,  1050,  1049,  1051,  1051,  1052,  1052,  1053,  1053,
    1054,  1054,  1055,  1056,  1056,  1058,  1057,  1059,  1059,  1059,
    1059,  1059,  1059,  1060,  1060,  1061,  1061,  1062,  1063,  1064,
    1064,  1065,  1065,  1065,  1065,  1065,  1065,  1065,  1065,  1066,
    1066,  1067,  1068,  1068,  1069,  1070,  1070,  1071,  1071,  1073,
    1072,  1075,  1074,  1076,  1076,  1077,  1077,  1078,  1078,  1079,
    1079,  1080,  1080,  1080,  1081,  1081,  1081,  1083,  1082,  1084,
    1085,  1085,  1086,  1086,  1086,  1086,  1087,  1087,  1087,  1087,
    1087,  1087,  1088,  1089,  1089,  1090,  1090,  1092,  1091,  1091,
    1093,  1093,  1093,  1093,  1094,  1094,  1095,  1095,  1095,  1095,
    1097,  1096,  1098,  1099,  1099,  1100,  1100,  1100,  1101,  1101,
    1102,  1102,  1104,  1103,  1105,  1105,  1105,  1106,  1106,  1107,
    1108,  1108,  1110,  1109,  1111,  1111,  1113,  1112,  1114,  1116,
    1115,  1117,  1118,  1118,  1118,  1120,  1119,  1121,  1122,  1122,
    1123,  1123,  1124,  1125,  1125,  1126,  1127,  1127,  1128,  1128,
    1129,  1129,  1130,  1130,  1132,  1131,  1133,  1133,  1133,  1133,
    1133,  1134,  1135,  1135,  1136,  1136,  1136,  1136,  1136,  1137,
    1138,  1138,  1139,  1139,  1139,  1140,  1140,  1140,  1140,  1141,
    1142,  1142,  1143,  1144,  1145,  1145,  1147,  1146,  1148,  1149,
    1149,  1150,  1150,  1150,  1150,  1151,  1151,  1152,  1152,  1153,
    1153,  1154,  1155,  1155,  1156,  1156,  1157,  1158,  1158,  1159,
    1159,  1160,  1161,  1161,  1162,  1162,  1163,  1164,  1164,  1165,
    1165,  1166,  1166,  1167,  1167,  1167,  1168,  1169,  1170,  1170,
    1170,  1171,  1172,  1173,  1174,  1174,  1175,  1175,  1176,  1176,
    1177,  1178,  1180,  1179,  1181,  1181,  1181,  1182,  1182,  1182,
    1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,
    1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,  1182,
    1182,  1183,  1183,  1184,  1184,  1185,  1185,  1186,  1187,  1188,
    1188,  1189,  1189,  1189,  1190,  1190,  1190,  1191,  1191,  1191,
    1192,  1192,  1193,  1193,  1193,  1194,  1194,  1195,  1195,  1195,
    1195,  1195,  1195,  1196,  1196,  1197,  1198,  1199,  1200,  1200,
    1201,  1202,  1203,  1203,  1204,  1205,  1205,  1206,  1207,  1207,
    1207,  1208,  1209,  1209,  1210,  1211,  1212,  1212,  1213,  1214,
    1214,  1215,  1216,  1217,  1217,  1218,  1218,  1218,  1219,  1219,
    1220,  1220,  1220,  1220,  1220,  1220,  1220,  1220,  1220,  1220,
    1221,  1221,  1222,  1222,  1222,  1223,  1223,  1223,  1223,  1223,
    1223,  1223,  1224,  1224,  1225,  1225,  1226,  1226,  1227,  1227,
    1228,  1228,  1229,  1229,  1229,  1230,  1230,  1230,  1231,  1231,
    1232,  1232,  1233,  1233,  1233,  1234,  1235,  1236,  1236,  1237,
    1238,  1238,  1238,  1238,  1239,  1239,  1240,  1240,  1240,  1240,
    1241,  1241,  1242,  1243,  1243,  1244,  1245,  1246,  1246,  1247,
    1247,  1247,  1247,  1247,  1247,  1247,  1248,  1248,  1249,  1249,
    1250,  1250,  1250,  1250,  1250,  1250,  1250,  1251,  1251,  1251,
    1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1251,  1252,
    1252,  1253,  1253,  1253,  1254,  1254,  1254,  1254,  1255,  1255,
    1255,  1256,  1256,  1256,  1257,  1257,  1257,  1258,  1258,  1259,
    1259,  1260,  1260,  1261,  1261,  1262,  1263,  1263,  1264,  1264,
    1265,  1265,  1266,  1266,  1267,  1267,  1268,  1268,  1268,  1269,
    1269,  1270,  1270,  1270,  1271,  1271,  1272,  1272,  1273,  1273,
    1273,  1273,  1273,  1273,  1273,  1273,  1274,  1274,  1275,  1275,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1276,  1276,
    1277,  1277,  1278,  1278,  1279,  1279,  1280,  1280,  1281,  1281,
    1282,  1282,  1283,  1283,  1284,  1284,  1285,  1285,  1286,  1286,
    1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,  1291,  1291,
    1292,  1292,  1292,  1293,  1293,  1294,  1294,  1295,  1295,  1296,
    1296,  1297,  1297,  1297,  1298,  1298,  1299,  1299,  1299,  1300,
    1300,  1300,  1301,  1301,  1302,  1302,  1303,  1303,  1304,  1304,
    1305,  1305,  1305,  1306,  1306,  1307,  1307,  1308,  1308,  1308,
    1309,  1309,  1309,  1309,  1310,  1310,  1311,  1311,  1312,  1312,
    1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,
    1317,  1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,
    1322,  1323,  1323,  1324,  1324,  1325,  1325,  1325,  1326,  1326,
    1327,  1327,  1328,  1328,  1329,  1329,  1330,  1330,  1331,  1331,
    1332,  1332,  1333,  1333,  1334,  1334,  1335,  1335,  1336,  1336,
    1337,  1337,  1338,  1338,  1339,  1339,  1340,  1340,  1341,  1341,
    1342,  1342,  1343,  1343,  1344,  1344,  1345,  1345,  1346,  1346,
    1347,  1347,  1347,  1348,  1348,  1349,  1349,  1350,  1350,  1351,
    1351,  1352,  1352,  1353,  1353,  1354,  1354,  1355,  1355
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
       1,     0,     1,     3,     4,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     0,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     2,     3,     1,     2,     3,     1,     2,     1,     2,
       4,     1,     2,     1,     3,     4,     5,     0,     3,     3,
       5,     3,     4,     3,     3,     0,     3,     0,     2,     0,
       2,     0,     2,     0,     6,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     5,     5,     5,     5,     1,     1,     1,     1,
       0,     3,     0,     1,     1,     1,     1,     0,     1,     1,
       4,     1,     1,     1,     7,     9,     0,     4,     3,     3,
       4,     0,     1,     1,     0,     5,     2,     2,     1,     0,
       4,     5,     2,     3,     1,     1,     3,     1,     2,     4,
       4,     4,     6,     1,     2,     0,     2,     2,     1,     4,
       3,     1,     1,     3,     2,     2,     2,     0,     2,     3,
       1,     2,     1,     1,     5,     0,     1,     1,     1,     0,
       6,     1,     2,     2,     0,     2,     0,     3,     0,     3,
       0,     2,     2,     0,     5,     3,     1,     1,     0,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     0,     1,     1,     4,     6,     9,     0,     3,
       0,     2,     0,     2,     3,     5,     5,     1,     1,     1,
       1,     3,     5,     0,     2,     1,     1,     1,     4,     2,
       2,     4,     3,     2,     2,     2,     1,     2,     0,     0,
       5,     0,     0,     2,     2,     3,     2,     1,     0,     4,
       3,     2,     0,     1,     1,     1,     0,     2,     1,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     2,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     0,     2,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     6,     0,     2,     7,     8,     0,     2,
       0,     2,     0,     3,     0,     3,     0,     1,     1,     0,
       5,     1,     1,     0,     3,     1,     2,     1,     2,     2,
       0,     1,     1,     3,     1,     0,     5,     1,     2,     1,
       3,     0,     4,     2,     4,     2,     2,     0,     0,     5,
       0,     0,     5,     0,     0,     5,     0,     2,     0,     6,
       0,     2,     2,     2,     3,     1,     1,     2,     2,     1,
       1,     1,     1,     2,     1,     4,     1,     2,     4,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     3,     3,
       4,     4,     4,     3,     0,     2,     0,     5,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       3,     1,     1,     1,     0,     1,     3,     1,     0,     1,
       1,     1,     3,     1,     2,     2,     1,     4,     0,     3,
       2,     1,     1,     3,     4,     5,     4,     5,     1,     1,
       0,     2,     1,     1,     1,     6,     2,     2,     0,     2,
       1,     2,     2,     2,     0,     2,     1,     1,     2,     4,
       0,     1,     1,     1,     1,     2,     1,     1,     2,     1,
       4,     2,     3,     0,     0,     5,     0,     1,     2,     3,
       1,     0,     4,     3,     0,     2,     2,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     1,     5,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       3,     2,     0,     0,     0,     9,     0,     4,     0,     0,
       3,     0,     3,     1,     2,     4,     0,     2,     2,     0,
       3,     3,     4,     4,     3,     0,     1,     0,     2,     0,
       0,     7,     0,     2,     1,     1,     2,     1,     1,     0,
       6,     0,     2,     2,     1,     0,     1,     0,     0,     3,
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     0,     4,     6,     3,     3,     4,
       3,     4,     3,     3,     4,     4,     3,     4,     3,     4,
       5,     3,     4,     3,     3,     1,     1,     1,     2,     0,
       1,     3,     3,     2,     2,     2,     3,     3,     3,     0,
       1,     0,     3,     0,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     2,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     0,     1,     0,     4,     4,
       5,     6,     0,     2,     0,     1,     0,     3,     3,     4,
       0,     2,     0,     3,     1,     2,     4,     0,     2,     0,
       4,     6,     0,     1,     1,     1,     0,     0,     3,     1,
       2,     2,     3,     0,     2,     2,     2,     0,     3,     2,
       4,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       1,     0,     3,     1,     2,     0,     3,     2,     3,     0,
       1,     3,     3,     2,     0,     4,     4,     0,     1,     1,
       1,     0,     4,     3,     2,     1,     2,     0,     1,     0,
       4,     3,     3,     3,     3,     4,     2,     4,     1,     0,
       3,     5,     0,     2,     2,     2,     2,     0,     2,     1,
       1,     0,     2,     0,     1,     1,     2,     1,     2,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     0,     1,     0,     4,     4,     6,     6,
       8,     8,     0,     1,     0,     3,     2,     0,     4,     2,
       1,     3,     1,     1,     1,     2,     1,     1,     2,     2,
       3,     2,     3,     1,     3,     2,     1,     1,     1,     0,
       2,     0,     1,     0,     3,     0,     2,     1,     2,     1,
       1,     1,     0,     2,     0,     3,     1,     0,     3,     1,
       0,     3,     3,     0,     3,     2,     0,     6,     3,     2,
       1,     0,     1,     0,     3,     5,     0,     2,     0,     3,
       3,     0,     2,     1,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     1,     2,     0,
       3,     2,     1,     1,     1,     2,     1,     1,     1,     0,
       3,     2,     5,     1,     2,     2,     2,     1,     1,     1,
       2,     1,     2,     4,     2,     0,     1,     1,     1,     1,
       4,     0,     2,     3,     3,     0,     3,     0,     3,     3,
       4,     0,     4,     4,     6,     0,     1,     0,     3,     4,
       5,     1,     1,     1,     1,     0,     3,     0,     3,     2,
       1,     0,     3,     2,     0,     4,     2,     0,     1,     1,
       1,     1,     3,     0,     2,     1,     3,     3,     0,     3,
       1,     1,     1,     3,     7,     0,     4,     7,     0,     2,
       0,     2,     2,     3,     3,     3,     2,     0,     3,     1,
       1,     0,     1,     1,     0,     3,     2,     1,     0,     4,
       4,     0,     1,     0,     4,     4,     0,     2,     3,     0,
       1,     1,     0,     4,     4,     6,     0,     2,     0,     2,
       1,     2,     3,     0,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       3,     4,     1,     2,     3,     1,     2,     3,     3,     0,
       3,     0,     7,     0,     5,     0,     2,     0,     2,     0,
       3,     0,     2,     4,     0,     2,     4,     0,     4,     4,
       0,     3,     0,     4,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     2,     1,     0,     1,     0,     4,     2,
       0,     2,     4,     4,     0,     1,     1,     1,     1,     1,
       0,     4,     5,     1,     2,     1,     3,     3,     0,     4,
       0,     1,     0,     4,     4,     6,     6,     0,     1,     2,
       0,     1,     0,     3,     1,     2,     0,     3,     5,     0,
       3,     2,     0,     1,     1,     0,     4,     6,     0,     3,
       1,     3,     2,     2,     2,     3,     0,     3,     0,     3,
       0,     3,     0,     1,     0,     3,     1,     1,     1,     1,
       1,     7,     0,     1,     1,     1,     1,     1,     1,     4,
       1,     2,     1,     2,     3,     0,     1,     2,     1,     3,
       1,     1,     4,     1,     1,     1,     0,     4,     5,     0,
       2,     0,     4,     3,     3,     1,     1,     1,     1,     0,
       1,     2,     0,     2,     0,     2,     2,     0,     2,     0,
       2,     2,     0,     2,     0,     2,     2,     0,     2,     0,
       2,     2,     1,     2,     1,     1,     2,     2,     2,     1,
       1,     2,     2,     2,     0,     2,     0,     2,     0,     2,
       1,     1,     0,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     0,     1,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     2,     2,     1,     3,     1,     1,     3,     1,
       3,     1,     3,     1,     2,     2,     1,     1,     1,     2,
       1,     1,     1,     2,     1,     0,     2,     1,     1,     1,
       3,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     2,     2,     2,     4,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     2,     1,     1,     1,     3,     2,     2,     1,
       1,     3,     3,     4,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     5,     5,
       5,     4,     5,     5,     5,     5,     5,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       5,     0,     3,     2,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     0,     0,     1,     0,     1,
       0,     1,     0,     2,     0,     2,     0,     1,     1,     0,
       1,     0,     1,     2,     0,     2,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     2,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     1,     0,     1,     0,     1,     1,     0,
       2,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     1,     0,     1,     1,
       0,     2,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     3,     0,     1,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     1,     1,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     2
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
#line 1376 "parser.y" /* yacc.c:1646  */
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
#line 6299 "parser.c" /* yacc.c:1646  */
    break;

  case 3:
#line 1387 "parser.y" /* yacc.c:1646  */
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
#line 6322 "parser.c" /* yacc.c:1646  */
    break;

  case 10:
#line 1423 "parser.y" /* yacc.c:1646  */
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
#line 6346 "parser.c" /* yacc.c:1646  */
    break;

  case 20:
#line 1478 "parser.y" /* yacc.c:1646  */
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
#line 6371 "parser.c" /* yacc.c:1646  */
    break;

  case 23:
#line 1507 "parser.y" /* yacc.c:1646  */
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
#line 6396 "parser.c" /* yacc.c:1646  */
    break;

  case 24:
#line 1540 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_environment (current_program);
  }
#line 6404 "parser.c" /* yacc.c:1646  */
    break;

  case 25:
#line 1546 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_WORKING;
  }
#line 6412 "parser.c" /* yacc.c:1646  */
    break;

  case 26:
#line 1558 "parser.y" /* yacc.c:1646  */
    {
	cb_validate_program_data (current_program);
  }
#line 6420 "parser.c" /* yacc.c:1646  */
    break;

  case 28:
#line 1568 "parser.y" /* yacc.c:1646  */
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
#line 6455 "parser.c" /* yacc.c:1646  */
    break;

  case 29:
#line 1599 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 6463 "parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 1606 "parser.y" /* yacc.c:1646  */
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
#line 6496 "parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 1642 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 6502 "parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 1643 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 6508 "parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 1652 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6521 "parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 1661 "parser.y" /* yacc.c:1646  */
    {
	if (!current_program->nested_level) {
		cb_error (_("COMMON may only be used in a contained program"));
	} else {
		current_program->flag_common = 1;
		cb_add_common_prog (current_program);
	}
  }
#line 6534 "parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 1675 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_initial = 1;
  }
#line 6542 "parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 1679 "parser.y" /* yacc.c:1646  */
    {
	current_program->flag_recursive = 1;
  }
#line 6550 "parser.c" /* yacc.c:1646  */
    break;

  case 44:
#line 1689 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
#line 6558 "parser.c" /* yacc.c:1646  */
    break;

  case 46:
#line 1698 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "CONFIGURATION SECTION");
	}
  }
#line 6570 "parser.c" /* yacc.c:1646  */
    break;

  case 54:
#line 1723 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
#line 6583 "parser.c" /* yacc.c:1646  */
    break;

  case 59:
#line 1741 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_debugging_line, "DEBUGGING MODE");
	current_program->flag_debugging = 1;
	needs_debug_item = 1;
	cobc_cs_check = 0;
	cb_build_debug_item ();
  }
#line 6595 "parser.c" /* yacc.c:1646  */
    break;

  case 60:
#line 1754 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
#line 6605 "parser.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1783 "parser.y" /* yacc.c:1646  */
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
#line 6613 "parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1790 "parser.y" /* yacc.c:1646  */
    {
	current_program->collating_sequence = (yyvsp[0]);
  }
#line 6621 "parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1797 "parser.y" /* yacc.c:1646  */
    {
	/* Ignore */
  }
#line 6629 "parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1804 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->classification) {
		cb_error (_("Duplicate CLASSIFICATION clause"));
	} else {
		current_program->classification = (yyvsp[0]);
	}
  }
#line 6641 "parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1815 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6649 "parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1819 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6657 "parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1823 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6665 "parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1827 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 6673 "parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1841 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
#line 6682 "parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1846 "parser.y" /* yacc.c:1646  */
    {
	cobc_in_repository = 0;
  }
#line 6690 "parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1854 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 6698 "parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1866 "parser.y" /* yacc.c:1646  */
    {
	functions_are_all = 1;
  }
#line 6706 "parser.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1870 "parser.y" /* yacc.c:1646  */
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
#line 6722 "parser.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1891 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 6730 "parser.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1895 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 6738 "parser.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1902 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6747 "parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1907 "parser.y" /* yacc.c:1646  */
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[0]));
  }
#line 6756 "parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1918 "parser.y" /* yacc.c:1646  */
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	}
  }
#line 6770 "parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1932 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	yyerrok;
  }
#line 6779 "parser.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1963 "parser.y" /* yacc.c:1646  */
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
#line 6807 "parser.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1991 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree) {
		if (CB_SYSTEM_NAME(save_tree)->token != CB_DEVICE_CONSOLE) {
			cb_error_x (save_tree, _("Invalid CRT clause"));
		} else {
			current_program->flag_console_is_crt = 1;
		}
	}
  }
#line 6821 "parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 2001 "parser.y" /* yacc.c:1646  */
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
#line 6838 "parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 2014 "parser.y" /* yacc.c:1646  */
    {
	if (save_tree && CB_VALID_TREE ((yyvsp[-1]))) {
		cb_define ((yyvsp[-1]), save_tree);
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list,
				(yyvsp[-1]), save_tree);
	}
  }
#line 6850 "parser.c" /* yacc.c:1646  */
    break;

  case 123:
#line 2030 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 6869 "parser.c" /* yacc.c:1646  */
    break;

  case 124:
#line 2045 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[0]), save_tree, (yyvsp[-2]) == cb_int1);
	if (x) {
		if ((yyvsp[-2]) == cb_int1) {
			check_repeated ("ON", SYN_CLAUSE_1);
		} else {
			check_repeated ("OFF", SYN_CLAUSE_2);
		}
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[0]), x);
	}
  }
#line 6888 "parser.c" /* yacc.c:1646  */
    break;

  case 125:
#line 2065 "parser.y" /* yacc.c:1646  */
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
#line 6905 "parser.c" /* yacc.c:1646  */
    break;

  case 126:
#line 2078 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[-2]));
	}
	cobc_cs_check = 0;
  }
#line 6917 "parser.c" /* yacc.c:1646  */
    break;

  case 127:
#line 2089 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
#line 6927 "parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 2095 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6937 "parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 2101 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6947 "parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 2107 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
#line 6957 "parser.c" /* yacc.c:1646  */
    break;

  case 131:
#line 2113 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
#line 6967 "parser.c" /* yacc.c:1646  */
    break;

  case 132:
#line 2119 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[0]);
	}
  }
#line 6978 "parser.c" /* yacc.c:1646  */
    break;

  case 133:
#line 2129 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 6986 "parser.c" /* yacc.c:1646  */
    break;

  case 134:
#line 2133 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 6994 "parser.c" /* yacc.c:1646  */
    break;

  case 135:
#line 2140 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7002 "parser.c" /* yacc.c:1646  */
    break;

  case 136:
#line 2144 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 7010 "parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 2148 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[-1]));
  }
#line 7018 "parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 2152 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 7026 "parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 2159 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 7034 "parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 2163 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-3]), (yyvsp[0]));
  }
#line 7042 "parser.c" /* yacc.c:1646  */
    break;

  case 141:
#line 2169 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 7048 "parser.c" /* yacc.c:1646  */
    break;

  case 142:
#line 2170 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7054 "parser.c" /* yacc.c:1646  */
    break;

  case 143:
#line 2171 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7060 "parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 2172 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 7066 "parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 2173 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_high; }
#line 7072 "parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 2174 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_norm_low; }
#line 7078 "parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 2178 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 7084 "parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 2179 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 7090 "parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 2187 "parser.y" /* yacc.c:1646  */
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
#line 7105 "parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 2201 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7113 "parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 2205 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7121 "parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 2213 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7129 "parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 2220 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7137 "parser.c" /* yacc.c:1646  */
    break;

  case 154:
#line 2224 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
	} else {
		(yyval) = (yyvsp[-1]);
	}
  }
#line 7149 "parser.c" /* yacc.c:1646  */
    break;

  case 155:
#line 2235 "parser.y" /* yacc.c:1646  */
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
#line 7170 "parser.c" /* yacc.c:1646  */
    break;

  case 156:
#line 2255 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[0]));
	}
  }
#line 7182 "parser.c" /* yacc.c:1646  */
    break;

  case 157:
#line 2263 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		(yyval) = (yyvsp[-1]);
	} else {
		(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
	}
  }
#line 7194 "parser.c" /* yacc.c:1646  */
    break;

  case 158:
#line 2273 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7200 "parser.c" /* yacc.c:1646  */
    break;

  case 159:
#line 2274 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7206 "parser.c" /* yacc.c:1646  */
    break;

  case 160:
#line 2281 "parser.y" /* yacc.c:1646  */
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
#line 7228 "parser.c" /* yacc.c:1646  */
    break;

  case 161:
#line 2301 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 7234 "parser.c" /* yacc.c:1646  */
    break;

  case 162:
#line 2302 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 7240 "parser.c" /* yacc.c:1646  */
    break;

  case 163:
#line 2307 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7248 "parser.c" /* yacc.c:1646  */
    break;

  case 164:
#line 2311 "parser.y" /* yacc.c:1646  */
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
#line 7268 "parser.c" /* yacc.c:1646  */
    break;

  case 165:
#line 2332 "parser.y" /* yacc.c:1646  */
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
#line 7290 "parser.c" /* yacc.c:1646  */
    break;

  case 166:
#line 2355 "parser.y" /* yacc.c:1646  */
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
	check_repeated ("CURRENCY", SYN_CLAUSE_1);
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
#line 7371 "parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 2436 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7379 "parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 2440 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 7387 "parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 2449 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("DECIMAL-POINT", SYN_CLAUSE_2);
		current_program->decimal_point = ',';
		current_program->numeric_separator = '.';
	}
  }
#line 7404 "parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 2468 "parser.y" /* yacc.c:1646  */
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
#line 7419 "parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 2484 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3);
		current_program->cursor_pos = (yyvsp[0]);
	}
  }
#line 7435 "parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 2502 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4);
		current_program->crt_status = (yyvsp[0]);
	}
  }
#line 7451 "parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 2520 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5);
		PENDING ("SCREEN CONTROL");
	}
  }
#line 7467 "parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 2537 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("EVENT STATUS", SYN_CLAUSE_6);
		PENDING ("EVENT STATUS");
	}
  }
#line 7483 "parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 2554 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
#line 7492 "parser.c" /* yacc.c:1646  */
    break;

  case 178:
#line 2562 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
#line 7502 "parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 2571 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
#line 7512 "parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 2586 "parser.y" /* yacc.c:1646  */
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
#line 7533 "parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 2603 "parser.y" /* yacc.c:1646  */
    {
	validate_file (current_file, (yyvsp[-3]));
  }
#line 7541 "parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 2607 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
#line 7553 "parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 2641 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
  }
#line 7563 "parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2647 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[0])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
#line 7577 "parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2657 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
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
#line 7594 "parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2670 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
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
#line 7611 "parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2683 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
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
#line 7628 "parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 2706 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_line_adv = 1;
  }
#line 7636 "parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 2713 "parser.y" /* yacc.c:1646  */
    {
	current_file->flag_ext_assign = 1;
  }
#line 7644 "parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 2726 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 7652 "parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 2738 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
#line 7661 "parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 2745 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
#line 7667 "parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 2746 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
#line 7673 "parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 2747 "parser.y" /* yacc.c:1646  */
    { current_file->access_mode = COB_ACCESS_RANDOM; }
#line 7679 "parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 2755 "parser.y" /* yacc.c:1646  */
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
#line 7711 "parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 2784 "parser.y" /* yacc.c:1646  */
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
#line 7750 "parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 2821 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (-1); }
#line 7756 "parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 2824 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (literal_value ((yyvsp[0])));
  }
#line 7764 "parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 2829 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (literal_value ((yyvsp[0])));
  }
#line 7772 "parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 2839 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
#line 7781 "parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 2850 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[0]);
  }
#line 7790 "parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 2865 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
#line 7798 "parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 2873 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
#line 7807 "parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 2878 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
#line 7816 "parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 2883 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
#line 7825 "parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 2892 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
#line 7833 "parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 2896 "parser.y" /* yacc.c:1646  */
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
#line 7842 "parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 2912 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
#line 7851 "parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 2917 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
#line 7860 "parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 2922 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
#line 7869 "parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 2927 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
#line 7878 "parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 2938 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
#line 7887 "parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 2949 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
#line 7895 "parser.c" /* yacc.c:1646  */
    break;

  case 251:
#line 2959 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[0]);
  }
#line 7904 "parser.c" /* yacc.c:1646  */
    break;

  case 252:
#line 2964 "parser.y" /* yacc.c:1646  */
    {
	cb_tree composite_key;

	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
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
#line 7926 "parser.c" /* yacc.c:1646  */
    break;

  case 255:
#line 2989 "parser.y" /* yacc.c:1646  */
    {
    key_component_list = NULL;
  }
#line 7934 "parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 2999 "parser.y" /* yacc.c:1646  */
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
#line 7951 "parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 3017 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[0]);
  }
#line 7960 "parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 3028 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
#line 7968 "parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 3042 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[0]);
  }
#line 7977 "parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 3049 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7983 "parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 3050 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 7989 "parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 3051 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 7995 "parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 3060 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8003 "parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 3079 "parser.y" /* yacc.c:1646  */
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
#line 8032 "parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 3106 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 8038 "parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 3107 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 8044 "parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 3108 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8050 "parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 3109 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 8056 "parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 3116 "parser.y" /* yacc.c:1646  */
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
#line 8065 "parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 3121 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
#line 8077 "parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 3148 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
#line 8085 "parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 3157 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
#line 8095 "parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 3171 "parser.y" /* yacc.c:1646  */
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
#line 8112 "parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 3189 "parser.y" /* yacc.c:1646  */
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
#line 8132 "parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 3206 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 8140 "parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 3213 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8148 "parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 3217 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8156 "parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 3228 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
#line 8170 "parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 3238 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_2);
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
#line 8189 "parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 3268 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
#line 8198 "parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 3281 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("RECORD", SYN_CLAUSE_4);
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
#line 8222 "parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 3301 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
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
#line 8260 "parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 3336 "parser.y" /* yacc.c:1646  */
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
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
#line 8292 "parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 3367 "parser.y" /* yacc.c:1646  */
    {
	current_file->record_depending = (yyvsp[0]);
  }
#line 8300 "parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 3373 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8306 "parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 3374 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8312 "parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 3378 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 8318 "parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 3379 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8324 "parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 3387 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
#line 8333 "parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 3398 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
#line 8342 "parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 3403 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[0]));
	}
  }
#line 8354 "parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 3426 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
#line 8363 "parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 3438 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8);
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
#line 8382 "parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 3466 "parser.y" /* yacc.c:1646  */
    {
	current_file->latfoot = (yyvsp[0]);
  }
#line 8390 "parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 3473 "parser.y" /* yacc.c:1646  */
    {
	current_file->lattop = (yyvsp[0]);
  }
#line 8398 "parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 3480 "parser.y" /* yacc.c:1646  */
    {
	current_file->latbot = (yyvsp[0]);
  }
#line 8406 "parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 3489 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
#line 8416 "parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 3501 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE SET", SYN_CLAUSE_10);
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
#line 8467 "parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 3553 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("REPORT", SYN_CLAUSE_11);
	if (current_file->organization != COB_ORG_LINE_SEQUENTIAL &&
	    current_file->organization != COB_ORG_SEQUENTIAL) {
		cb_error (_("REPORT clause with wrong file type"));
	} else {
		current_file->reports = (yyvsp[0]);
		current_file->organization = COB_ORG_LINE_SEQUENTIAL;
		current_file->flag_line_adv = 1;
	}
  }
#line 8483 "parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 3573 "parser.y" /* yacc.c:1646  */
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
#line 8499 "parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 3585 "parser.y" /* yacc.c:1646  */
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
#line 8515 "parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 3628 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
#line 8525 "parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 3634 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[0])));
	}
  }
#line 8535 "parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 3643 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 8543 "parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 3646 "parser.y" /* yacc.c:1646  */
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 8554 "parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 3653 "parser.y" /* yacc.c:1646  */
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
#line 8567 "parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 3673 "parser.y" /* yacc.c:1646  */
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
#line 8586 "parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 3688 "parser.y" /* yacc.c:1646  */
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
#line 8610 "parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 3708 "parser.y" /* yacc.c:1646  */
    {
	/* Free tree associated with level number */
	cobc_parse_free ((yyvsp[-2]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8624 "parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 3721 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8632 "parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 3728 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8642 "parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 3734 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
#line 8652 "parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 3740 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8662 "parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 3749 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	qualifier = (yyvsp[0]);
	non_const_word = 0;
  }
#line 8672 "parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 3758 "parser.y" /* yacc.c:1646  */
    {
	(yyval)= NULL;
  }
#line 8680 "parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 3762 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
#line 8693 "parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 3773 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 8699 "parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 3774 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8705 "parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 3775 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8711 "parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 3776 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_const_length ((yyvsp[0])); }
#line 8717 "parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 3781 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8725 "parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 3785 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 8733 "parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 3789 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 8741 "parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 3793 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 8749 "parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 3797 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8757 "parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 3801 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
#line 8765 "parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 3805 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
#line 8773 "parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 3809 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
#line 8781 "parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 3813 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
#line 8789 "parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 3817 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (4);
  }
#line 8797 "parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 3821 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (8);
  }
#line 8805 "parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 3825 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (16);
  }
#line 8813 "parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 3829 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
#line 8825 "parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 3861 "parser.y" /* yacc.c:1646  */
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
#line 8852 "parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 3887 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 8860 "parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 3891 "parser.y" /* yacc.c:1646  */
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
#line 8869 "parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 3899 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
#line 8878 "parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 3905 "parser.y" /* yacc.c:1646  */
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
#line 8887 "parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 3933 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("REDEFINES", SYN_CLAUSE_1);
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
#line 8909 "parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 3957 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("EXTERNAL", SYN_CLAUSE_2);
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
#line 8937 "parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 3984 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
#line 8945 "parser.c" /* yacc.c:1646  */
    break;

  case 416:
#line 3988 "parser.y" /* yacc.c:1646  */
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[0]))->data);
  }
#line 8953 "parser.c" /* yacc.c:1646  */
    break;

  case 417:
#line 3997 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("GLOBAL", SYN_CLAUSE_3);
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
#line 8976 "parser.c" /* yacc.c:1646  */
    break;

  case 418:
#line 4022 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[0]));
  }
#line 8985 "parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 4038 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 8993 "parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 4042 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9001 "parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 4046 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
#line 9009 "parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 4050 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
#line 9017 "parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 4054 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9025 "parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 4058 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_BINARY);
  }
#line 9033 "parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 4062 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
#line 9041 "parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 4066 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
#line 9049 "parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 4070 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
#line 9057 "parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 4074 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
#line 9065 "parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 4078 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_INDEX);
  }
#line 9073 "parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 4082 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PACKED);
  }
#line 9081 "parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 4086 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9090 "parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 4091 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
#line 9099 "parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 4096 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9107 "parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 4100 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9115 "parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 4104 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9127 "parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 4112 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9135 "parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 4116 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9143 "parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 4120 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9155 "parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 4128 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
#line 9163 "parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 4132 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
#line 9171 "parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 4136 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
#line 9179 "parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 4140 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
#line 9187 "parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 4144 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
#line 9195 "parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 4148 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
#line 9203 "parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 4152 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
#line 9211 "parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 4156 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
#line 9219 "parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 4160 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
#line 9231 "parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 4168 "parser.y" /* yacc.c:1646  */
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
#line 9243 "parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 4176 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
#line 9251 "parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 4180 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
#line 9259 "parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 4184 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
#line 9267 "parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 4188 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
#line 9275 "parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 4192 "parser.y" /* yacc.c:1646  */
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
#line 9283 "parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 4196 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
#line 9292 "parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 4216 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
#line 9302 "parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 4222 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[0]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
#line 9312 "parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 4235 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
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
#line 9331 "parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 4253 "parser.y" /* yacc.c:1646  */
    {
	current_field->step_count = cb_get_int ((yyvsp[0]));
  }
#line 9339 "parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 4263 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
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
#line 9363 "parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 4284 "parser.y" /* yacc.c:1646  */
    {
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
#line 9384 "parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 4303 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9390 "parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 4304 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9396 "parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 4308 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9402 "parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 4309 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9408 "parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 4314 "parser.y" /* yacc.c:1646  */
    {
	current_field->depending = (yyvsp[0]);
  }
#line 9416 "parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 4321 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9425 "parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 4329 "parser.y" /* yacc.c:1646  */
    {
	/* current_field->initialized = 1; */
  }
#line 9433 "parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 4336 "parser.y" /* yacc.c:1646  */
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
#line 9458 "parser.c" /* yacc.c:1646  */
    break;

  case 479:
#line 4359 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 9464 "parser.c" /* yacc.c:1646  */
    break;

  case 480:
#line 4362 "parser.y" /* yacc.c:1646  */
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
#line 9481 "parser.c" /* yacc.c:1646  */
    break;

  case 481:
#line 4377 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_ASCENDING); }
#line 9487 "parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 4378 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_DESCENDING); }
#line 9493 "parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 4383 "parser.y" /* yacc.c:1646  */
    {
	current_field->index_list = (yyvsp[0]);
  }
#line 9501 "parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 4389 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9507 "parser.c" /* yacc.c:1646  */
    break;

  case 486:
#line 4391 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9513 "parser.c" /* yacc.c:1646  */
    break;

  case 487:
#line 4396 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_index ((yyvsp[0]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
#line 9522 "parser.c" /* yacc.c:1646  */
    break;

  case 488:
#line 4407 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
#line 9531 "parser.c" /* yacc.c:1646  */
    break;

  case 489:
#line 4418 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
#line 9540 "parser.c" /* yacc.c:1646  */
    break;

  case 492:
#line 4428 "parser.y" /* yacc.c:1646  */
    {
	/* Stay quiet on this
	PENDING ("SYNCHRONIZED RIGHT");
	*/
  }
#line 9550 "parser.c" /* yacc.c:1646  */
    break;

  case 493:
#line 4440 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
#line 9559 "parser.c" /* yacc.c:1646  */
    break;

  case 494:
#line 4451 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BASED", SYN_CLAUSE_11);
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
#line 9586 "parser.c" /* yacc.c:1646  */
    break;

  case 495:
#line 4479 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[0]);
  }
#line 9595 "parser.c" /* yacc.c:1646  */
    break;

  case 497:
#line 4487 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 9601 "parser.c" /* yacc.c:1646  */
    break;

  case 498:
#line 4488 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 9607 "parser.c" /* yacc.c:1646  */
    break;

  case 499:
#line 4492 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 9613 "parser.c" /* yacc.c:1646  */
    break;

  case 500:
#line 4493 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0])); }
#line 9619 "parser.c" /* yacc.c:1646  */
    break;

  case 502:
#line 4498 "parser.y" /* yacc.c:1646  */
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[0]));
  }
#line 9630 "parser.c" /* yacc.c:1646  */
    break;

  case 503:
#line 4511 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
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
#line 9647 "parser.c" /* yacc.c:1646  */
    break;

  case 504:
#line 4524 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
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
#line 9667 "parser.c" /* yacc.c:1646  */
    break;

  case 505:
#line 4545 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
#line 9680 "parser.c" /* yacc.c:1646  */
    break;

  case 506:
#line 4554 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
#line 9694 "parser.c" /* yacc.c:1646  */
    break;

  case 508:
#line 4569 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
#line 9707 "parser.c" /* yacc.c:1646  */
    break;

  case 509:
#line 4578 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->local_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9717 "parser.c" /* yacc.c:1646  */
    break;

  case 511:
#line 4590 "parser.y" /* yacc.c:1646  */
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
#line 9727 "parser.c" /* yacc.c:1646  */
    break;

  case 512:
#line 4596 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[0]));
	}
  }
#line 9737 "parser.c" /* yacc.c:1646  */
    break;

  case 514:
#line 4607 "parser.y" /* yacc.c:1646  */
    {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  }
#line 9749 "parser.c" /* yacc.c:1646  */
    break;

  case 518:
#line 4625 "parser.y" /* yacc.c:1646  */
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
#line 9765 "parser.c" /* yacc.c:1646  */
    break;

  case 519:
#line 4638 "parser.y" /* yacc.c:1646  */
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
#line 9783 "parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 4656 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
  }
#line 9791 "parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 4663 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
#line 9801 "parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 4669 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
#line 9809 "parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 4680 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
#line 9817 "parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 4693 "parser.y" /* yacc.c:1646  */
    {
      current_report->control_final = 1;
  }
#line 9825 "parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 4705 "parser.y" /* yacc.c:1646  */
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[0]), current_report->controls);
  }
#line 9834 "parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 4716 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("PAGE", SYN_CLAUSE_4);
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
#line 9874 "parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 4755 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->lines = cb_get_int ((yyvsp[0]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[0]);
	}
  }
#line 9888 "parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 4765 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-1]))) {
		current_report->lines = cb_get_int ((yyvsp[-1]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[-1]);
	}
  }
#line 9902 "parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 4775 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[-3]))) {
		current_report->lines = cb_get_int ((yyvsp[-3]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[-3]);
	}
	check_repeated ("LINE LIMIT", SYN_CLAUSE_25);
	if (CB_LITERAL_P ((yyvsp[-1]))) {
		current_report->columns = cb_get_int ((yyvsp[-1]));
	} else {
		current_report->t_columns = (yyvsp[-1]);
	}
  }
#line 9922 "parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 4809 "parser.y" /* yacc.c:1646  */
    {
	check_repeated ("LINE LIMIT", SYN_CLAUSE_25);
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->columns = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_columns = (yyvsp[0]);
	}
  }
#line 9935 "parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 4821 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->heading = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_heading = (yyvsp[0]);
	}
  }
#line 9947 "parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 4832 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->first_detail = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_first_detail = (yyvsp[0]);
	}
  }
#line 9959 "parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 4843 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->last_control = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_last_control = (yyvsp[0]);
	}
  }
#line 9971 "parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 4854 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->last_detail = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_last_detail = (yyvsp[0]);
	}
  }
#line 9983 "parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 4865 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL_P ((yyvsp[0]))) {
		current_report->footing = cb_get_int ((yyvsp[0]));
	} else {
		current_report->t_footing = (yyvsp[0]);
	}
  }
#line 9995 "parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 4880 "parser.y" /* yacc.c:1646  */
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
#line 10017 "parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 4925 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
#line 10025 "parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 4932 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
#line 10033 "parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 4936 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
#line 10041 "parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 4942 "parser.y" /* yacc.c:1646  */
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
#line 10052 "parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 4949 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
#line 10060 "parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 4953 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
#line 10068 "parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 4959 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
#line 10076 "parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 4963 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[0]);
  }
#line 10085 "parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 4968 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[-2]);
      current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10095 "parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 4974 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
#line 10103 "parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 4980 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
#line 10111 "parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 4984 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[0]);
  }
#line 10120 "parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 4989 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
#line 10128 "parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 4993 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_flag |= COB_REPORT_ALL;
  }
#line 10137 "parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 5001 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
#line 10145 "parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 5008 "parser.y" /* yacc.c:1646  */
    {
	if (CB_LITERAL ((yyvsp[0]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int((yyvsp[0]));
  }
#line 10158 "parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 5017 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[0]));
  }
#line 10167 "parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 5022 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[0]));
  }
#line 10176 "parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 5027 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
#line 10184 "parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 5040 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
	current_field->report_sum_list = (yyvsp[-1]);
	build_sum_counter( current_report, current_field);
  }
#line 10194 "parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 5050 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_sum_upon = (yyvsp[0]);
  }
#line 10202 "parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 5057 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_reset = (yyvsp[0]);
  }
#line 10210 "parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 5061 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
#line 10218 "parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 5068 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_when = (yyvsp[0]);
  }
#line 10227 "parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 5073 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
  }
#line 10237 "parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 5079 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10248 "parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 5086 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
  }
#line 10258 "parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 5092 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10269 "parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 5102 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
  }
#line 10277 "parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 5106 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_NEGATE;
  }
#line 10286 "parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 5118 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_PAGE;
  }
#line 10294 "parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 5122 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_control = (yyvsp[0]);
  }
#line 10302 "parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 5134 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
	current_field->report_flag |= COB_REPORT_LINE;
  }
#line 10311 "parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 5150 "parser.y" /* yacc.c:1646  */
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
#line 10321 "parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 5156 "parser.y" /* yacc.c:1646  */
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
#line 10329 "parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 5160 "parser.y" /* yacc.c:1646  */
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
#line 10348 "parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 5175 "parser.y" /* yacc.c:1646  */
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
#line 10367 "parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 5198 "parser.y" /* yacc.c:1646  */
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
#line 10385 "parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 5224 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
	if((current_field->report_flag & (COB_REPORT_COLUMN_LEFT|COB_REPORT_COLUMN_RIGHT|COB_REPORT_COLUMN_CENTER))
	&& (current_field->report_flag & COB_REPORT_COLUMN_PLUS)) {
		if (cb_relaxed_syntax_check) {
			cb_warning (_("PLUS is not recommended with LEFT, RIGHT or CENTER"));
		} else {
			cb_error (_("PLUS is not allowed with LEFT, RIGHT or CENTER"));
		}
	}
  }
#line 10401 "parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 5248 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_COLUMN_LEFT;
  }
#line 10409 "parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 5252 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_COLUMN_RIGHT;
  }
#line 10417 "parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 5256 "parser.y" /* yacc.c:1646  */
    {
	current_field->report_flag |= COB_REPORT_COLUMN_CENTER;
  }
#line 10425 "parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 5263 "parser.y" /* yacc.c:1646  */
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
#line 10449 "parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 5292 "parser.y" /* yacc.c:1646  */
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
#line 10482 "parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 5324 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
	current_field->report_source = (yyvsp[-1]);
  }
#line 10491 "parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 5332 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
#line 10500 "parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 5340 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
#line 10508 "parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 5349 "parser.y" /* yacc.c:1646  */
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
#line 10519 "parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 5356 "parser.y" /* yacc.c:1646  */
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
#line 10535 "parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 5382 "parser.y" /* yacc.c:1646  */
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
#line 10570 "parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 5413 "parser.y" /* yacc.c:1646  */
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
#line 10600 "parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 5439 "parser.y" /* yacc.c:1646  */
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
#line 10620 "parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 5462 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
#line 10628 "parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 5466 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
#line 10636 "parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 5470 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
#line 10644 "parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 5474 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
#line 10652 "parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 5478 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
#line 10660 "parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 5482 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
#line 10668 "parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 5486 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
#line 10676 "parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 5490 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
#line 10684 "parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 5494 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
#line 10692 "parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 5498 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
#line 10700 "parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 5502 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
#line 10708 "parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 5506 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
#line 10716 "parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 5510 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
#line 10724 "parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 5514 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
#line 10732 "parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 5518 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
#line 10740 "parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 5522 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
#line 10748 "parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 5526 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[0]);
  }
#line 10757 "parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 5531 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
#line 10765 "parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 5535 "parser.y" /* yacc.c:1646  */
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
#line 10773 "parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 5539 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[0]);
  }
#line 10782 "parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 5544 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[0]);
  }
#line 10791 "parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 5549 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[0]);
  }
#line 10800 "parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 5554 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[0]);
  }
#line 10809 "parser.c" /* yacc.c:1646  */
    break;

  case 687:
#line 5567 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[0]);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10820 "parser.c" /* yacc.c:1646  */
    break;

  case 688:
#line 5574 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[0]);
  }
#line 10829 "parser.c" /* yacc.c:1646  */
    break;

  case 689:
#line 5579 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[0]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
#line 10839 "parser.c" /* yacc.c:1646  */
    break;

  case 694:
#line 5598 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10847 "parser.c" /* yacc.c:1646  */
    break;

  case 695:
#line 5602 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
#line 10855 "parser.c" /* yacc.c:1646  */
    break;

  case 696:
#line 5606 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
#line 10863 "parser.c" /* yacc.c:1646  */
    break;

  case 697:
#line 5613 "parser.y" /* yacc.c:1646  */
    {
	/* Nothing */
  }
#line 10871 "parser.c" /* yacc.c:1646  */
    break;

  case 698:
#line 5617 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
#line 10879 "parser.c" /* yacc.c:1646  */
    break;

  case 699:
#line 5621 "parser.y" /* yacc.c:1646  */
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
#line 10887 "parser.c" /* yacc.c:1646  */
    break;

  case 700:
#line 5629 "parser.y" /* yacc.c:1646  */
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[-1]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
#line 10899 "parser.c" /* yacc.c:1646  */
    break;

  case 701:
#line 5640 "parser.y" /* yacc.c:1646  */
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
#line 10907 "parser.c" /* yacc.c:1646  */
    break;

  case 703:
#line 5649 "parser.y" /* yacc.c:1646  */
    {
	current_section = NULL;
	current_paragraph = NULL;
	check_pic_duplicate = 0;
	check_duplicate = 0;
	cobc_in_procedure = 1U;
	cb_set_system_names ();
	header_check |= COBC_HD_PROCEDURE_DIVISION;
  }
#line 10921 "parser.c" /* yacc.c:1646  */
    break;

  case 704:
#line 5659 "parser.y" /* yacc.c:1646  */
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
#line 10937 "parser.c" /* yacc.c:1646  */
    break;

  case 705:
#line 5671 "parser.y" /* yacc.c:1646  */
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
#line 10956 "parser.c" /* yacc.c:1646  */
    break;

  case 706:
#line 5686 "parser.y" /* yacc.c:1646  */
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
#line 10989 "parser.c" /* yacc.c:1646  */
    break;

  case 708:
#line 5719 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 10997 "parser.c" /* yacc.c:1646  */
    break;

  case 709:
#line 5723 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 11006 "parser.c" /* yacc.c:1646  */
    break;

  case 710:
#line 5728 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11018 "parser.c" /* yacc.c:1646  */
    break;

  case 711:
#line 5736 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
#line 11031 "parser.c" /* yacc.c:1646  */
    break;

  case 712:
#line 5745 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 11043 "parser.c" /* yacc.c:1646  */
    break;

  case 713:
#line 5755 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11049 "parser.c" /* yacc.c:1646  */
    break;

  case 714:
#line 5757 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 11055 "parser.c" /* yacc.c:1646  */
    break;

  case 715:
#line 5762 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[0]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
#line 11064 "parser.c" /* yacc.c:1646  */
    break;

  case 717:
#line 5771 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 11072 "parser.c" /* yacc.c:1646  */
    break;

  case 718:
#line 5775 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 11084 "parser.c" /* yacc.c:1646  */
    break;

  case 720:
#line 5787 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
#line 11096 "parser.c" /* yacc.c:1646  */
    break;

  case 721:
#line 5795 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
#line 11108 "parser.c" /* yacc.c:1646  */
    break;

  case 722:
#line 5803 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
#line 11120 "parser.c" /* yacc.c:1646  */
    break;

  case 723:
#line 5811 "parser.y" /* yacc.c:1646  */
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
#line 11153 "parser.c" /* yacc.c:1646  */
    break;

  case 724:
#line 5840 "parser.y" /* yacc.c:1646  */
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
#line 11186 "parser.c" /* yacc.c:1646  */
    break;

  case 726:
#line 5873 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
#line 11196 "parser.c" /* yacc.c:1646  */
    break;

  case 727:
#line 5882 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
#line 11206 "parser.c" /* yacc.c:1646  */
    break;

  case 728:
#line 5888 "parser.y" /* yacc.c:1646  */
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
#line 11235 "parser.c" /* yacc.c:1646  */
    break;

  case 730:
#line 5916 "parser.y" /* yacc.c:1646  */
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
#line 11244 "parser.c" /* yacc.c:1646  */
    break;

  case 731:
#line 5922 "parser.y" /* yacc.c:1646  */
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
#line 11274 "parser.c" /* yacc.c:1646  */
    break;

  case 736:
#line 5960 "parser.y" /* yacc.c:1646  */
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
#line 11295 "parser.c" /* yacc.c:1646  */
    break;

  case 738:
#line 5978 "parser.y" /* yacc.c:1646  */
    {
	/* check_unreached = 0; */
  }
#line 11303 "parser.c" /* yacc.c:1646  */
    break;

  case 739:
#line 5988 "parser.y" /* yacc.c:1646  */
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
#line 11351 "parser.c" /* yacc.c:1646  */
    break;

  case 740:
#line 6032 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (CB_TREE (current_section));
  }
#line 11359 "parser.c" /* yacc.c:1646  */
    break;

  case 743:
#line 6043 "parser.y" /* yacc.c:1646  */
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
#line 11408 "parser.c" /* yacc.c:1646  */
    break;

  case 744:
#line 6091 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[0]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[0]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[0])));
	}
	YYERROR;
  }
#line 11421 "parser.c" /* yacc.c:1646  */
    break;

  case 745:
#line 6103 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 11429 "parser.c" /* yacc.c:1646  */
    break;

  case 746:
#line 6107 "parser.y" /* yacc.c:1646  */
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
#line 11445 "parser.c" /* yacc.c:1646  */
    break;

  case 747:
#line 6125 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
#line 11455 "parser.c" /* yacc.c:1646  */
    break;

  case 748:
#line 6130 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
#line 11464 "parser.c" /* yacc.c:1646  */
    break;

  case 749:
#line 6135 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[-2]);
	current_statement = CB_STATEMENT ((yyvsp[-1]));
  }
#line 11474 "parser.c" /* yacc.c:1646  */
    break;

  case 750:
#line 6143 "parser.y" /* yacc.c:1646  */
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
#line 11505 "parser.c" /* yacc.c:1646  */
    break;

  case 751:
#line 6170 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11513 "parser.c" /* yacc.c:1646  */
    break;

  case 752:
#line 6174 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11521 "parser.c" /* yacc.c:1646  */
    break;

  case 802:
#line 6230 "parser.y" /* yacc.c:1646  */
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
#line 11539 "parser.c" /* yacc.c:1646  */
    break;

  case 803:
#line 6244 "parser.y" /* yacc.c:1646  */
    {
	yyerrok;
	cobc_cs_check = 0;
  }
#line 11548 "parser.c" /* yacc.c:1646  */
    break;

  case 804:
#line 6255 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ACCEPT", TERM_ACCEPT);
	if (cb_accept_update) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
	}
	if (cb_accept_auto) {
		check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
	}

  }
#line 11563 "parser.c" /* yacc.c:1646  */
    break;

  case 806:
#line 6272 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[-5]), (yyvsp[-4]), current_statement->attr_ptr);
  }
#line 11572 "parser.c" /* yacc.c:1646  */
    break;

  case 807:
#line 6277 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 0);
  }
#line 11580 "parser.c" /* yacc.c:1646  */
    break;

  case 808:
#line 6281 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_line_or_col ((yyvsp[-2]), 1);
  }
#line 11588 "parser.c" /* yacc.c:1646  */
    break;

  case 809:
#line 6285 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[-3]));
  }
#line 11597 "parser.c" /* yacc.c:1646  */
    break;

  case 810:
#line 6290 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[-2]));
  }
#line 11606 "parser.c" /* yacc.c:1646  */
    break;

  case 811:
#line 6295 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[-3]));
  }
#line 11615 "parser.c" /* yacc.c:1646  */
    break;

  case 812:
#line 6300 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[-2]));
  }
#line 11624 "parser.c" /* yacc.c:1646  */
    break;

  case 813:
#line 6305 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_day_of_week ((yyvsp[-2]));
  }
#line 11632 "parser.c" /* yacc.c:1646  */
    break;

  case 814:
#line 6309 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_escape_key ((yyvsp[-3]));
  }
#line 11640 "parser.c" /* yacc.c:1646  */
    break;

  case 815:
#line 6313 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_exception_status ((yyvsp[-3]));
  }
#line 11648 "parser.c" /* yacc.c:1646  */
    break;

  case 816:
#line 6317 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_time ((yyvsp[-2]));
  }
#line 11656 "parser.c" /* yacc.c:1646  */
    break;

  case 817:
#line 6321 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[-3]));
  }
#line 11665 "parser.c" /* yacc.c:1646  */
    break;

  case 818:
#line 6326 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_command_line ((yyvsp[-2]));
  }
#line 11673 "parser.c" /* yacc.c:1646  */
    break;

  case 819:
#line 6330 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_environment ((yyvsp[-3]));
  }
#line 11681 "parser.c" /* yacc.c:1646  */
    break;

  case 820:
#line 6334 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_get_environment ((yyvsp[-1]), (yyvsp[-4]));
  }
#line 11689 "parser.c" /* yacc.c:1646  */
    break;

  case 821:
#line 6338 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_number ((yyvsp[-2]));
  }
#line 11697 "parser.c" /* yacc.c:1646  */
    break;

  case 822:
#line 6342 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_arg_value ((yyvsp[-3]));
  }
#line 11705 "parser.c" /* yacc.c:1646  */
    break;

  case 823:
#line 6346 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11713 "parser.c" /* yacc.c:1646  */
    break;

  case 824:
#line 6350 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_accept_name ((yyvsp[-2]), (yyvsp[0]));
  }
#line 11721 "parser.c" /* yacc.c:1646  */
    break;

  case 826:
#line 6358 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 11729 "parser.c" /* yacc.c:1646  */
    break;

  case 829:
#line 6369 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 11735 "parser.c" /* yacc.c:1646  */
    break;

  case 830:
#line 6370 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11741 "parser.c" /* yacc.c:1646  */
    break;

  case 831:
#line 6374 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[-1]), (yyvsp[0])); }
#line 11747 "parser.c" /* yacc.c:1646  */
    break;

  case 832:
#line 6375 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1])); }
#line 11753 "parser.c" /* yacc.c:1646  */
    break;

  case 833:
#line 6376 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), cb_int0); }
#line 11759 "parser.c" /* yacc.c:1646  */
    break;

  case 834:
#line 6377 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[0])); }
#line 11765 "parser.c" /* yacc.c:1646  */
    break;

  case 835:
#line 6378 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11771 "parser.c" /* yacc.c:1646  */
    break;

  case 836:
#line 6382 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11777 "parser.c" /* yacc.c:1646  */
    break;

  case 837:
#line 6386 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11783 "parser.c" /* yacc.c:1646  */
    break;

  case 838:
#line 6387 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 11789 "parser.c" /* yacc.c:1646  */
    break;

  case 842:
#line 6396 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 11797 "parser.c" /* yacc.c:1646  */
    break;

  case 847:
#line 6412 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
#line 11805 "parser.c" /* yacc.c:1646  */
    break;

  case 848:
#line 6416 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
#line 11815 "parser.c" /* yacc.c:1646  */
    break;

  case 849:
#line 6422 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 11823 "parser.c" /* yacc.c:1646  */
    break;

  case 850:
#line 6426 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 11831 "parser.c" /* yacc.c:1646  */
    break;

  case 851:
#line 6430 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 11839 "parser.c" /* yacc.c:1646  */
    break;

  case 852:
#line 6434 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
#line 11847 "parser.c" /* yacc.c:1646  */
    break;

  case 853:
#line 6438 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 11855 "parser.c" /* yacc.c:1646  */
    break;

  case 854:
#line 6442 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
#line 11863 "parser.c" /* yacc.c:1646  */
    break;

  case 855:
#line 6446 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
#line 11871 "parser.c" /* yacc.c:1646  */
    break;

  case 856:
#line 6450 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 11879 "parser.c" /* yacc.c:1646  */
    break;

  case 857:
#line 6454 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
#line 11887 "parser.c" /* yacc.c:1646  */
    break;

  case 858:
#line 6458 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 11895 "parser.c" /* yacc.c:1646  */
    break;

  case 859:
#line 6462 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[0]), COB_SCREEN_PROMPT);
  }
#line 11903 "parser.c" /* yacc.c:1646  */
    break;

  case 860:
#line 6466 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
#line 11911 "parser.c" /* yacc.c:1646  */
    break;

  case 861:
#line 6470 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
#line 11919 "parser.c" /* yacc.c:1646  */
    break;

  case 862:
#line 6474 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 11927 "parser.c" /* yacc.c:1646  */
    break;

  case 863:
#line 6478 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
#line 11935 "parser.c" /* yacc.c:1646  */
    break;

  case 864:
#line 6482 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 11943 "parser.c" /* yacc.c:1646  */
    break;

  case 865:
#line 6486 "parser.y" /* yacc.c:1646  */
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
#line 11953 "parser.c" /* yacc.c:1646  */
    break;

  case 866:
#line 6492 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
#line 11961 "parser.c" /* yacc.c:1646  */
    break;

  case 867:
#line 6496 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
#line 11969 "parser.c" /* yacc.c:1646  */
    break;

  case 868:
#line 6500 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 11977 "parser.c" /* yacc.c:1646  */
    break;

  case 869:
#line 6504 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 11985 "parser.c" /* yacc.c:1646  */
    break;

  case 870:
#line 6508 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 11993 "parser.c" /* yacc.c:1646  */
    break;

  case 871:
#line 6512 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12001 "parser.c" /* yacc.c:1646  */
    break;

  case 872:
#line 6516 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[0]), NULL, 0);
  }
#line 12009 "parser.c" /* yacc.c:1646  */
    break;

  case 875:
#line 6528 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
#line 12017 "parser.c" /* yacc.c:1646  */
    break;

  case 876:
#line 6532 "parser.y" /* yacc.c:1646  */
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
#line 12032 "parser.c" /* yacc.c:1646  */
    break;

  case 877:
#line 6549 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ADD", TERM_ADD);
  }
#line 12040 "parser.c" /* yacc.c:1646  */
    break;

  case 879:
#line 6558 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '+', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 12048 "parser.c" /* yacc.c:1646  */
    break;

  case 880:
#line 6562 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list ((yyvsp[-4]), '+'));
  }
#line 12056 "parser.c" /* yacc.c:1646  */
    break;

  case 881:
#line 6566 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 12064 "parser.c" /* yacc.c:1646  */
    break;

  case 883:
#line 6573 "parser.y" /* yacc.c:1646  */
    {
	cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 12072 "parser.c" /* yacc.c:1646  */
    break;

  case 884:
#line 6580 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
#line 12080 "parser.c" /* yacc.c:1646  */
    break;

  case 885:
#line 6584 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
#line 12088 "parser.c" /* yacc.c:1646  */
    break;

  case 886:
#line 6594 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
#line 12097 "parser.c" /* yacc.c:1646  */
    break;

  case 888:
#line 6603 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_allocate ((yyvsp[-2]), (yyvsp[0]), NULL, (yyvsp[-1]));
  }
#line 12105 "parser.c" /* yacc.c:1646  */
    break;

  case 889:
#line 6607 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[0]), (yyvsp[-3]), (yyvsp[-1]));
	}
  }
#line 12118 "parser.c" /* yacc.c:1646  */
    break;

  case 890:
#line 6618 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 12124 "parser.c" /* yacc.c:1646  */
    break;

  case 891:
#line 6619 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12130 "parser.c" /* yacc.c:1646  */
    break;

  case 892:
#line 6627 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
#line 12139 "parser.c" /* yacc.c:1646  */
    break;

  case 896:
#line 6641 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_alter ((yyvsp[-3]), (yyvsp[0]));
  }
#line 12147 "parser.c" /* yacc.c:1646  */
    break;

  case 899:
#line 6653 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
#line 12156 "parser.c" /* yacc.c:1646  */
    break;

  case 901:
#line 6668 "parser.y" /* yacc.c:1646  */
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
#line 12171 "parser.c" /* yacc.c:1646  */
    break;

  case 902:
#line 6682 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 12180 "parser.c" /* yacc.c:1646  */
    break;

  case 903:
#line 6687 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
#line 12189 "parser.c" /* yacc.c:1646  */
    break;

  case 904:
#line 6692 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
#line 12198 "parser.c" /* yacc.c:1646  */
    break;

  case 905:
#line 6697 "parser.y" /* yacc.c:1646  */
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
#line 12219 "parser.c" /* yacc.c:1646  */
    break;

  case 906:
#line 6717 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12227 "parser.c" /* yacc.c:1646  */
    break;

  case 907:
#line 6721 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
#line 12236 "parser.c" /* yacc.c:1646  */
    break;

  case 908:
#line 6726 "parser.y" /* yacc.c:1646  */
    {
	if (cb_list_length ((yyvsp[0])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[0]);
  }
#line 12249 "parser.c" /* yacc.c:1646  */
    break;

  case 909:
#line 6737 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 12255 "parser.c" /* yacc.c:1646  */
    break;

  case 910:
#line 6739 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 12261 "parser.c" /* yacc.c:1646  */
    break;

  case 911:
#line 6744 "parser.y" /* yacc.c:1646  */
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
#line 12273 "parser.c" /* yacc.c:1646  */
    break;

  case 912:
#line 6752 "parser.y" /* yacc.c:1646  */
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
#line 12299 "parser.c" /* yacc.c:1646  */
    break;

  case 914:
#line 6778 "parser.y" /* yacc.c:1646  */
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
#line 12307 "parser.c" /* yacc.c:1646  */
    break;

  case 915:
#line 6782 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
#line 12320 "parser.c" /* yacc.c:1646  */
    break;

  case 916:
#line 6791 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
#line 12333 "parser.c" /* yacc.c:1646  */
    break;

  case 917:
#line 6803 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12341 "parser.c" /* yacc.c:1646  */
    break;

  case 918:
#line 6807 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12349 "parser.c" /* yacc.c:1646  */
    break;

  case 919:
#line 6811 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_null;
  }
#line 12357 "parser.c" /* yacc.c:1646  */
    break;

  case 920:
#line 6815 "parser.y" /* yacc.c:1646  */
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
#line 12381 "parser.c" /* yacc.c:1646  */
    break;

  case 925:
#line 6848 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12389 "parser.c" /* yacc.c:1646  */
    break;

  case 926:
#line 6853 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12397 "parser.c" /* yacc.c:1646  */
    break;

  case 927:
#line 6860 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 12405 "parser.c" /* yacc.c:1646  */
    break;

  case 928:
#line 6865 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 12413 "parser.c" /* yacc.c:1646  */
    break;

  case 929:
#line 6872 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
#line 12421 "parser.c" /* yacc.c:1646  */
    break;

  case 930:
#line 6876 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
#line 12429 "parser.c" /* yacc.c:1646  */
    break;

  case 931:
#line 6886 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CANCEL", 0);
  }
#line 12437 "parser.c" /* yacc.c:1646  */
    break;

  case 933:
#line 6894 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12445 "parser.c" /* yacc.c:1646  */
    break;

  case 934:
#line 6898 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_cancel ((yyvsp[0]));
  }
#line 12453 "parser.c" /* yacc.c:1646  */
    break;

  case 935:
#line 6908 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("CLOSE", 0);
  }
#line 12461 "parser.c" /* yacc.c:1646  */
    break;

  case 937:
#line 6916 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12470 "parser.c" /* yacc.c:1646  */
    break;

  case 938:
#line 6921 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[-1]), (yyvsp[0]));
  }
#line 12479 "parser.c" /* yacc.c:1646  */
    break;

  case 939:
#line 6928 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
#line 12485 "parser.c" /* yacc.c:1646  */
    break;

  case 940:
#line 6929 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
#line 12491 "parser.c" /* yacc.c:1646  */
    break;

  case 941:
#line 6930 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
#line 12497 "parser.c" /* yacc.c:1646  */
    break;

  case 942:
#line 6931 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
#line 12503 "parser.c" /* yacc.c:1646  */
    break;

  case 943:
#line 6932 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
#line 12509 "parser.c" /* yacc.c:1646  */
    break;

  case 944:
#line 6940 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
#line 12517 "parser.c" /* yacc.c:1646  */
    break;

  case 946:
#line 6949 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-3]), 0, (yyvsp[-1]));
  }
#line 12525 "parser.c" /* yacc.c:1646  */
    break;

  case 947:
#line 6956 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
#line 12533 "parser.c" /* yacc.c:1646  */
    break;

  case 948:
#line 6960 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
#line 12541 "parser.c" /* yacc.c:1646  */
    break;

  case 949:
#line 6970 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
#line 12550 "parser.c" /* yacc.c:1646  */
    break;

  case 950:
#line 6981 "parser.y" /* yacc.c:1646  */
    {
	size_t	save_unreached;

	/* Do not check unreached for CONTINUE */
	save_unreached = check_unreached;
	check_unreached = 0;
	begin_statement ("CONTINUE", 0);
	cb_emit_continue ();
	check_unreached = (unsigned int) save_unreached;
  }
#line 12565 "parser.c" /* yacc.c:1646  */
    break;

  case 951:
#line 6998 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
#line 12573 "parser.c" /* yacc.c:1646  */
    break;

  case 953:
#line 7007 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_delete ((yyvsp[-2]));
  }
#line 12581 "parser.c" /* yacc.c:1646  */
    break;

  case 955:
#line 7015 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12590 "parser.c" /* yacc.c:1646  */
    break;

  case 956:
#line 7020 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[0]));
  }
#line 12599 "parser.c" /* yacc.c:1646  */
    break;

  case 957:
#line 7028 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
#line 12607 "parser.c" /* yacc.c:1646  */
    break;

  case 958:
#line 7032 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
#line 12615 "parser.c" /* yacc.c:1646  */
    break;

  case 959:
#line 7042 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
#line 12624 "parser.c" /* yacc.c:1646  */
    break;

  case 961:
#line 7052 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_name ((yyvsp[-2]));
  }
#line 12632 "parser.c" /* yacc.c:1646  */
    break;

  case 962:
#line 7056 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_env_value ((yyvsp[-2]));
  }
#line 12640 "parser.c" /* yacc.c:1646  */
    break;

  case 963:
#line 7060 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arg_number ((yyvsp[-2]));
  }
#line 12648 "parser.c" /* yacc.c:1646  */
    break;

  case 964:
#line 7064 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_command_line ((yyvsp[-2]));
  }
#line 12656 "parser.c" /* yacc.c:1646  */
    break;

  case 965:
#line 7068 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), NULL, NULL);
  }
#line 12664 "parser.c" /* yacc.c:1646  */
    break;

  case 967:
#line 7073 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[-3])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
#line 12674 "parser.c" /* yacc.c:1646  */
    break;

  case 969:
#line 7083 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
  }
#line 12682 "parser.c" /* yacc.c:1646  */
    break;

  case 971:
#line 7091 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[-4])), cb_null, cb_int1,
			 (yyvsp[-3]), current_statement->attr_ptr);
  }
#line 12691 "parser.c" /* yacc.c:1646  */
    break;

  case 972:
#line 7099 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12703 "parser.c" /* yacc.c:1646  */
    break;

  case 973:
#line 7107 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[0]));
  }
#line 12711 "parser.c" /* yacc.c:1646  */
    break;

  case 974:
#line 7111 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_display_name ((yyvsp[0]));
  }
#line 12719 "parser.c" /* yacc.c:1646  */
    break;

  case 975:
#line 7115 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 12727 "parser.c" /* yacc.c:1646  */
    break;

  case 976:
#line 7119 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
#line 12739 "parser.c" /* yacc.c:1646  */
    break;

  case 982:
#line 7141 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 12747 "parser.c" /* yacc.c:1646  */
    break;

  case 983:
#line 7147 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 12753 "parser.c" /* yacc.c:1646  */
    break;

  case 984:
#line 7148 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 12759 "parser.c" /* yacc.c:1646  */
    break;

  case 987:
#line 7159 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
#line 12767 "parser.c" /* yacc.c:1646  */
    break;

  case 988:
#line 7163 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
#line 12775 "parser.c" /* yacc.c:1646  */
    break;

  case 989:
#line 7167 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
#line 12783 "parser.c" /* yacc.c:1646  */
    break;

  case 990:
#line 7171 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
#line 12791 "parser.c" /* yacc.c:1646  */
    break;

  case 991:
#line 7175 "parser.y" /* yacc.c:1646  */
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
#line 12799 "parser.c" /* yacc.c:1646  */
    break;

  case 992:
#line 7179 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
#line 12807 "parser.c" /* yacc.c:1646  */
    break;

  case 993:
#line 7183 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
#line 12815 "parser.c" /* yacc.c:1646  */
    break;

  case 994:
#line 7187 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
#line 12823 "parser.c" /* yacc.c:1646  */
    break;

  case 995:
#line 7191 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
#line 12831 "parser.c" /* yacc.c:1646  */
    break;

  case 996:
#line 7195 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
#line 12839 "parser.c" /* yacc.c:1646  */
    break;

  case 997:
#line 7199 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
#line 12847 "parser.c" /* yacc.c:1646  */
    break;

  case 998:
#line 7203 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
#line 12855 "parser.c" /* yacc.c:1646  */
    break;

  case 999:
#line 7207 "parser.y" /* yacc.c:1646  */
    {
	check_attribs ((yyvsp[0]), NULL, NULL, NULL, NULL, 0);
  }
#line 12863 "parser.c" /* yacc.c:1646  */
    break;

  case 1000:
#line 7211 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, (yyvsp[0]), NULL, NULL, NULL, 0);
  }
#line 12871 "parser.c" /* yacc.c:1646  */
    break;

  case 1001:
#line 7215 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, 0);
  }
#line 12879 "parser.c" /* yacc.c:1646  */
    break;

  case 1002:
#line 7219 "parser.y" /* yacc.c:1646  */
    {
	check_attribs (NULL, NULL, (yyvsp[0]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
#line 12887 "parser.c" /* yacc.c:1646  */
    break;

  case 1003:
#line 7226 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
#line 12895 "parser.c" /* yacc.c:1646  */
    break;

  case 1004:
#line 7230 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
#line 12903 "parser.c" /* yacc.c:1646  */
    break;

  case 1005:
#line 7240 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
#line 12911 "parser.c" /* yacc.c:1646  */
    break;

  case 1007:
#line 7249 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '/', (yyvsp[-3]));
  }
#line 12919 "parser.c" /* yacc.c:1646  */
    break;

  case 1008:
#line 7253 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-3]), '/', (yyvsp[-5])));
  }
#line 12927 "parser.c" /* yacc.c:1646  */
    break;

  case 1009:
#line 7257 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '/', (yyvsp[-3])));
  }
#line 12935 "parser.c" /* yacc.c:1646  */
    break;

  case 1010:
#line 7261 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-5]), (yyvsp[-7]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12943 "parser.c" /* yacc.c:1646  */
    break;

  case 1011:
#line 7265 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_divide ((yyvsp[-7]), (yyvsp[-5]), (yyvsp[-3]), (yyvsp[-1]));
  }
#line 12951 "parser.c" /* yacc.c:1646  */
    break;

  case 1012:
#line 7272 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
#line 12959 "parser.c" /* yacc.c:1646  */
    break;

  case 1013:
#line 7276 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
#line 12967 "parser.c" /* yacc.c:1646  */
    break;

  case 1014:
#line 7286 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
#line 12976 "parser.c" /* yacc.c:1646  */
    break;

  case 1016:
#line 7295 "parser.y" /* yacc.c:1646  */
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
#line 12992 "parser.c" /* yacc.c:1646  */
    break;

  case 1017:
#line 7313 "parser.y" /* yacc.c:1646  */
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
#line 13015 "parser.c" /* yacc.c:1646  */
    break;

  case 1019:
#line 7337 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_evaluate ((yyvsp[-1]), (yyvsp[0]));
	eval_level--;
  }
#line 13024 "parser.c" /* yacc.c:1646  */
    break;

  case 1020:
#line 7344 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13030 "parser.c" /* yacc.c:1646  */
    break;

  case 1021:
#line 7346 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13036 "parser.c" /* yacc.c:1646  */
    break;

  case 1022:
#line 7351 "parser.y" /* yacc.c:1646  */
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
#line 13051 "parser.c" /* yacc.c:1646  */
    break;

  case 1023:
#line 7362 "parser.y" /* yacc.c:1646  */
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
#line 13066 "parser.c" /* yacc.c:1646  */
    break;

  case 1024:
#line 7373 "parser.y" /* yacc.c:1646  */
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
#line 13081 "parser.c" /* yacc.c:1646  */
    break;

  case 1025:
#line 7387 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13089 "parser.c" /* yacc.c:1646  */
    break;

  case 1026:
#line 7391 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13097 "parser.c" /* yacc.c:1646  */
    break;

  case 1027:
#line 7397 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13103 "parser.c" /* yacc.c:1646  */
    break;

  case 1028:
#line 7399 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 13109 "parser.c" /* yacc.c:1646  */
    break;

  case 1029:
#line 7405 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), (yyvsp[-1]));
	eval_inc2 = 0;
  }
#line 13118 "parser.c" /* yacc.c:1646  */
    break;

  case 1030:
#line 7414 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[0]), NULL);
	eval_inc2 = 0;
  }
#line 13127 "parser.c" /* yacc.c:1646  */
    break;

  case 1031:
#line 7422 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13136 "parser.c" /* yacc.c:1646  */
    break;

  case 1032:
#line 7428 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
	eval_inc2 = 0;
  }
#line 13145 "parser.c" /* yacc.c:1646  */
    break;

  case 1033:
#line 7435 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 13151 "parser.c" /* yacc.c:1646  */
    break;

  case 1034:
#line 7437 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 13157 "parser.c" /* yacc.c:1646  */
    break;

  case 1035:
#line 7442 "parser.y" /* yacc.c:1646  */
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
#line 13223 "parser.c" /* yacc.c:1646  */
    break;

  case 1036:
#line 7503 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_any; eval_inc2++; }
#line 13229 "parser.c" /* yacc.c:1646  */
    break;

  case 1037:
#line 7504 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; eval_inc2++; }
#line 13235 "parser.c" /* yacc.c:1646  */
    break;

  case 1038:
#line 7505 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_false; eval_inc2++; }
#line 13241 "parser.c" /* yacc.c:1646  */
    break;

  case 1039:
#line 7509 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13247 "parser.c" /* yacc.c:1646  */
    break;

  case 1040:
#line 7510 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13253 "parser.c" /* yacc.c:1646  */
    break;

  case 1041:
#line 7515 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
#line 13261 "parser.c" /* yacc.c:1646  */
    break;

  case 1042:
#line 7519 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
#line 13269 "parser.c" /* yacc.c:1646  */
    break;

  case 1043:
#line 7529 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
#line 13278 "parser.c" /* yacc.c:1646  */
    break;

  case 1044:
#line 7534 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 13286 "parser.c" /* yacc.c:1646  */
    break;

  case 1046:
#line 7542 "parser.y" /* yacc.c:1646  */
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
#line 13311 "parser.c" /* yacc.c:1646  */
    break;

  case 1047:
#line 7563 "parser.y" /* yacc.c:1646  */
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
#line 13329 "parser.c" /* yacc.c:1646  */
    break;

  case 1048:
#line 7577 "parser.y" /* yacc.c:1646  */
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
#line 13355 "parser.c" /* yacc.c:1646  */
    break;

  case 1049:
#line 7599 "parser.y" /* yacc.c:1646  */
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
#line 13381 "parser.c" /* yacc.c:1646  */
    break;

  case 1050:
#line 7621 "parser.y" /* yacc.c:1646  */
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
#line 13405 "parser.c" /* yacc.c:1646  */
    break;

  case 1051:
#line 7641 "parser.y" /* yacc.c:1646  */
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
#line 13429 "parser.c" /* yacc.c:1646  */
    break;

  case 1052:
#line 7663 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13435 "parser.c" /* yacc.c:1646  */
    break;

  case 1053:
#line 7664 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13441 "parser.c" /* yacc.c:1646  */
    break;

  case 1054:
#line 7672 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
#line 13450 "parser.c" /* yacc.c:1646  */
    break;

  case 1056:
#line 7681 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_free ((yyvsp[0]));
  }
#line 13458 "parser.c" /* yacc.c:1646  */
    break;

  case 1057:
#line 7691 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GENERATE", 0);
  }
#line 13466 "parser.c" /* yacc.c:1646  */
    break;

  case 1059:
#line 7700 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
		cb_emit_generate((yyvsp[0]));
	}
  }
#line 13477 "parser.c" /* yacc.c:1646  */
    break;

  case 1060:
#line 7712 "parser.y" /* yacc.c:1646  */
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
#line 13490 "parser.c" /* yacc.c:1646  */
    break;

  case 1062:
#line 7725 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_goto ((yyvsp[-1]), (yyvsp[0]));
	start_debug = save_debug;
  }
#line 13499 "parser.c" /* yacc.c:1646  */
    break;

  case 1063:
#line 7733 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
#line 13508 "parser.c" /* yacc.c:1646  */
    break;

  case 1064:
#line 7738 "parser.y" /* yacc.c:1646  */
    {
	check_unreached = 0;
	(yyval) = (yyvsp[0]);
  }
#line 13517 "parser.c" /* yacc.c:1646  */
    break;

  case 1065:
#line 7749 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[0]) != NULL) {
		cb_emit_move ((yyvsp[0]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
#line 13530 "parser.c" /* yacc.c:1646  */
    break;

  case 1066:
#line 7764 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("IF", TERM_IF);
  }
#line 13538 "parser.c" /* yacc.c:1646  */
    break;

  case 1068:
#line 7773 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 13546 "parser.c" /* yacc.c:1646  */
    break;

  case 1069:
#line 7777 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[0]));
  }
#line 13554 "parser.c" /* yacc.c:1646  */
    break;

  case 1070:
#line 7781 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[0]), NULL);
  }
#line 13562 "parser.c" /* yacc.c:1646  */
    break;

  case 1071:
#line 7788 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
#line 13570 "parser.c" /* yacc.c:1646  */
    break;

  case 1072:
#line 7792 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
#line 13578 "parser.c" /* yacc.c:1646  */
    break;

  case 1073:
#line 7802 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIALIZE", 0);
  }
#line 13586 "parser.c" /* yacc.c:1646  */
    break;

  case 1075:
#line 7811 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_initialize ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 13594 "parser.c" /* yacc.c:1646  */
    break;

  case 1076:
#line 7817 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13600 "parser.c" /* yacc.c:1646  */
    break;

  case 1077:
#line 7818 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13606 "parser.c" /* yacc.c:1646  */
    break;

  case 1078:
#line 7822 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 13612 "parser.c" /* yacc.c:1646  */
    break;

  case 1079:
#line 7823 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 13618 "parser.c" /* yacc.c:1646  */
    break;

  case 1080:
#line 7824 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]); }
#line 13624 "parser.c" /* yacc.c:1646  */
    break;

  case 1081:
#line 7829 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13632 "parser.c" /* yacc.c:1646  */
    break;

  case 1082:
#line 7833 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13640 "parser.c" /* yacc.c:1646  */
    break;

  case 1083:
#line 7840 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13648 "parser.c" /* yacc.c:1646  */
    break;

  case 1084:
#line 7845 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0]));
  }
#line 13656 "parser.c" /* yacc.c:1646  */
    break;

  case 1085:
#line 7852 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[0]));
  }
#line 13664 "parser.c" /* yacc.c:1646  */
    break;

  case 1086:
#line 7858 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
#line 13670 "parser.c" /* yacc.c:1646  */
    break;

  case 1087:
#line 7859 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
#line 13676 "parser.c" /* yacc.c:1646  */
    break;

  case 1088:
#line 7860 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
#line 13682 "parser.c" /* yacc.c:1646  */
    break;

  case 1089:
#line 7861 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
#line 13688 "parser.c" /* yacc.c:1646  */
    break;

  case 1090:
#line 7862 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
#line 13694 "parser.c" /* yacc.c:1646  */
    break;

  case 1091:
#line 7863 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
#line 13700 "parser.c" /* yacc.c:1646  */
    break;

  case 1092:
#line 7864 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
#line 13706 "parser.c" /* yacc.c:1646  */
    break;

  case 1093:
#line 7869 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 13714 "parser.c" /* yacc.c:1646  */
    break;

  case 1094:
#line 7873 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_true;
  }
#line 13722 "parser.c" /* yacc.c:1646  */
    break;

  case 1095:
#line 7882 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INITIATE", 0);
  }
#line 13730 "parser.c" /* yacc.c:1646  */
    break;

  case 1097:
#line 7890 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[0]));
	}
  }
#line 13741 "parser.c" /* yacc.c:1646  */
    break;

  case 1098:
#line 7897 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[0]));
	}
  }
#line 13752 "parser.c" /* yacc.c:1646  */
    break;

  case 1099:
#line 7909 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
#line 13761 "parser.c" /* yacc.c:1646  */
    break;

  case 1102:
#line 7922 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13769 "parser.c" /* yacc.c:1646  */
    break;

  case 1103:
#line 7926 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13777 "parser.c" /* yacc.c:1646  */
    break;

  case 1104:
#line 7930 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13785 "parser.c" /* yacc.c:1646  */
    break;

  case 1109:
#line 7946 "parser.y" /* yacc.c:1646  */
    {
	cb_init_tallying ();
  }
#line 13793 "parser.c" /* yacc.c:1646  */
    break;

  case 1110:
#line 7950 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-3]), (yyvsp[0]), cb_int0, 0);
	(yyval) = (yyvsp[-3]);
  }
#line 13802 "parser.c" /* yacc.c:1646  */
    break;

  case 1111:
#line 7960 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_inspect ((yyvsp[-2]), (yyvsp[0]), cb_int1, 1);
	inspect_keyword = 0;
  }
#line 13811 "parser.c" /* yacc.c:1646  */
    break;

  case 1112:
#line 7970 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
	cb_emit_inspect ((yyvsp[-5]), x, cb_int0, 2);
  }
#line 13821 "parser.c" /* yacc.c:1646  */
    break;

  case 1113:
#line 7978 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13827 "parser.c" /* yacc.c:1646  */
    break;

  case 1114:
#line 7979 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13833 "parser.c" /* yacc.c:1646  */
    break;

  case 1115:
#line 7983 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_data ((yyvsp[-1])); }
#line 13839 "parser.c" /* yacc.c:1646  */
    break;

  case 1116:
#line 7984 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_characters ((yyvsp[0])); }
#line 13845 "parser.c" /* yacc.c:1646  */
    break;

  case 1117:
#line 7985 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_all (); }
#line 13851 "parser.c" /* yacc.c:1646  */
    break;

  case 1118:
#line 7986 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_leading (); }
#line 13857 "parser.c" /* yacc.c:1646  */
    break;

  case 1119:
#line 7987 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_trailing (); }
#line 13863 "parser.c" /* yacc.c:1646  */
    break;

  case 1120:
#line 7988 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_tallying_value ((yyvsp[-1]), (yyvsp[0])); }
#line 13869 "parser.c" /* yacc.c:1646  */
    break;

  case 1121:
#line 7992 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 13875 "parser.c" /* yacc.c:1646  */
    break;

  case 1122:
#line 7993 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 13881 "parser.c" /* yacc.c:1646  */
    break;

  case 1123:
#line 7998 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[-1]), (yyvsp[0]));
	inspect_keyword = 0;
  }
#line 13890 "parser.c" /* yacc.c:1646  */
    break;

  case 1124:
#line 8003 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13898 "parser.c" /* yacc.c:1646  */
    break;

  case 1125:
#line 8009 "parser.y" /* yacc.c:1646  */
    { /* Nothing */ }
#line 13904 "parser.c" /* yacc.c:1646  */
    break;

  case 1126:
#line 8010 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 1; }
#line 13910 "parser.c" /* yacc.c:1646  */
    break;

  case 1127:
#line 8011 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 2; }
#line 13916 "parser.c" /* yacc.c:1646  */
    break;

  case 1128:
#line 8012 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 3; }
#line 13922 "parser.c" /* yacc.c:1646  */
    break;

  case 1129:
#line 8013 "parser.y" /* yacc.c:1646  */
    { inspect_keyword = 4; }
#line 13928 "parser.c" /* yacc.c:1646  */
    break;

  case 1130:
#line 8018 "parser.y" /* yacc.c:1646  */
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
#line 13954 "parser.c" /* yacc.c:1646  */
    break;

  case 1131:
#line 8045 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_inspect_region_start ();
  }
#line 13962 "parser.c" /* yacc.c:1646  */
    break;

  case 1132:
#line 8049 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 13970 "parser.c" /* yacc.c:1646  */
    break;

  case 1133:
#line 8056 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[0])));
  }
#line 13978 "parser.c" /* yacc.c:1646  */
    break;

  case 1134:
#line 8060 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-3]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[0])));
  }
#line 13986 "parser.c" /* yacc.c:1646  */
    break;

  case 1135:
#line 8069 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
#line 13995 "parser.c" /* yacc.c:1646  */
    break;

  case 1137:
#line 8081 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MOVE", 0);
  }
#line 14003 "parser.c" /* yacc.c:1646  */
    break;

  case 1139:
#line 8089 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14011 "parser.c" /* yacc.c:1646  */
    break;

  case 1140:
#line 8093 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_move_corresponding ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14019 "parser.c" /* yacc.c:1646  */
    break;

  case 1141:
#line 8103 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
#line 14027 "parser.c" /* yacc.c:1646  */
    break;

  case 1143:
#line 8112 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '*', (yyvsp[-3]));
  }
#line 14035 "parser.c" /* yacc.c:1646  */
    break;

  case 1144:
#line 8116 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_op ((yyvsp[-5]), '*', (yyvsp[-3])));
  }
#line 14043 "parser.c" /* yacc.c:1646  */
    break;

  case 1145:
#line 8123 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
#line 14051 "parser.c" /* yacc.c:1646  */
    break;

  case 1146:
#line 8127 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
#line 14059 "parser.c" /* yacc.c:1646  */
    break;

  case 1147:
#line 8137 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("OPEN", 0);
  }
#line 14067 "parser.c" /* yacc.c:1646  */
    break;

  case 1149:
#line 8145 "parser.y" /* yacc.c:1646  */
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
#line 14092 "parser.c" /* yacc.c:1646  */
    break;

  case 1150:
#line 8166 "parser.y" /* yacc.c:1646  */
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
#line 14117 "parser.c" /* yacc.c:1646  */
    break;

  case 1151:
#line 8189 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_INPUT); }
#line 14123 "parser.c" /* yacc.c:1646  */
    break;

  case 1152:
#line 8190 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
#line 14129 "parser.c" /* yacc.c:1646  */
    break;

  case 1153:
#line 8191 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_I_O); }
#line 14135 "parser.c" /* yacc.c:1646  */
    break;

  case 1154:
#line 8192 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
#line 14141 "parser.c" /* yacc.c:1646  */
    break;

  case 1155:
#line 8196 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14147 "parser.c" /* yacc.c:1646  */
    break;

  case 1156:
#line 8197 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14153 "parser.c" /* yacc.c:1646  */
    break;

  case 1157:
#line 8201 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14159 "parser.c" /* yacc.c:1646  */
    break;

  case 1158:
#line 8202 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14165 "parser.c" /* yacc.c:1646  */
    break;

  case 1159:
#line 8203 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
#line 14171 "parser.c" /* yacc.c:1646  */
    break;

  case 1160:
#line 8205 "parser.y" /* yacc.c:1646  */
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
#line 14180 "parser.c" /* yacc.c:1646  */
    break;

  case 1161:
#line 8216 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14191 "parser.c" /* yacc.c:1646  */
    break;

  case 1163:
#line 8227 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[0]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14200 "parser.c" /* yacc.c:1646  */
    break;

  case 1164:
#line 8232 "parser.y" /* yacc.c:1646  */
    {
	CB_ADD_TO_CHAIN ((yyvsp[0]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
#line 14210 "parser.c" /* yacc.c:1646  */
    break;

  case 1165:
#line 8238 "parser.y" /* yacc.c:1646  */
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14219 "parser.c" /* yacc.c:1646  */
    break;

  case 1166:
#line 8243 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_perform ((yyvsp[-1]), NULL);
	start_debug = save_debug;
  }
#line 14228 "parser.c" /* yacc.c:1646  */
    break;

  case 1167:
#line 8251 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
#line 14240 "parser.c" /* yacc.c:1646  */
    break;

  case 1168:
#line 8259 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
#line 14248 "parser.c" /* yacc.c:1646  */
    break;

  case 1169:
#line 8266 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
#line 14256 "parser.c" /* yacc.c:1646  */
    break;

  case 1170:
#line 8270 "parser.y" /* yacc.c:1646  */
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-2) - (1)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-2) - (1)]), PERFORM);
	}
	/* Put the dot token back into the stack for reparse */
	cb_unput_dot ();
  }
#line 14270 "parser.c" /* yacc.c:1646  */
    break;

  case 1171:
#line 8283 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[0]));
  }
#line 14281 "parser.c" /* yacc.c:1646  */
    break;

  case 1172:
#line 8290 "parser.y" /* yacc.c:1646  */
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[0]))->length = cb_true;
	CB_REFERENCE ((yyvsp[-2]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[0]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14293 "parser.c" /* yacc.c:1646  */
    break;

  case 1173:
#line 8301 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_once (NULL);
  }
#line 14301 "parser.c" /* yacc.c:1646  */
    break;

  case 1174:
#line 8305 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_times ((yyvsp[-1]));
	current_program->loop_counter++;
  }
#line 14310 "parser.c" /* yacc.c:1646  */
    break;

  case 1175:
#line 8310 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
#line 14318 "parser.c" /* yacc.c:1646  */
    break;

  case 1176:
#line 8314 "parser.y" /* yacc.c:1646  */
    {
	cb_tree varying;

	if (!(yyvsp[0])) {
		(yyval) = cb_build_perform_forever (NULL);
	} else {
		varying = CB_LIST_INIT (cb_build_perform_varying (NULL, NULL, NULL, (yyvsp[0])));
		(yyval) = cb_build_perform_until ((yyvsp[-2]), varying);
	}
  }
#line 14333 "parser.c" /* yacc.c:1646  */
    break;

  case 1177:
#line 8325 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_perform_until ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14341 "parser.c" /* yacc.c:1646  */
    break;

  case 1178:
#line 8331 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 14347 "parser.c" /* yacc.c:1646  */
    break;

  case 1179:
#line 8332 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14353 "parser.c" /* yacc.c:1646  */
    break;

  case 1180:
#line 8336 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14359 "parser.c" /* yacc.c:1646  */
    break;

  case 1181:
#line 8337 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14365 "parser.c" /* yacc.c:1646  */
    break;

  case 1182:
#line 8340 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 14371 "parser.c" /* yacc.c:1646  */
    break;

  case 1183:
#line 8342 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 14377 "parser.c" /* yacc.c:1646  */
    break;

  case 1184:
#line 8347 "parser.y" /* yacc.c:1646  */
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
#line 14414 "parser.c" /* yacc.c:1646  */
    break;

  case 1185:
#line 8386 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READ", TERM_READ);
  }
#line 14422 "parser.c" /* yacc.c:1646  */
    break;

  case 1187:
#line 8395 "parser.y" /* yacc.c:1646  */
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
#line 14450 "parser.c" /* yacc.c:1646  */
    break;

  case 1188:
#line 8421 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14456 "parser.c" /* yacc.c:1646  */
    break;

  case 1189:
#line 8422 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14462 "parser.c" /* yacc.c:1646  */
    break;

  case 1190:
#line 8427 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14470 "parser.c" /* yacc.c:1646  */
    break;

  case 1191:
#line 8431 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14478 "parser.c" /* yacc.c:1646  */
    break;

  case 1192:
#line 8435 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14486 "parser.c" /* yacc.c:1646  */
    break;

  case 1193:
#line 8439 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14494 "parser.c" /* yacc.c:1646  */
    break;

  case 1194:
#line 8443 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14502 "parser.c" /* yacc.c:1646  */
    break;

  case 1195:
#line 8447 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int3;
  }
#line 14510 "parser.c" /* yacc.c:1646  */
    break;

  case 1196:
#line 8451 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int4;
  }
#line 14518 "parser.c" /* yacc.c:1646  */
    break;

  case 1197:
#line 8457 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14524 "parser.c" /* yacc.c:1646  */
    break;

  case 1198:
#line 8458 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14530 "parser.c" /* yacc.c:1646  */
    break;

  case 1201:
#line 8468 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
#line 14538 "parser.c" /* yacc.c:1646  */
    break;

  case 1202:
#line 8472 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
#line 14546 "parser.c" /* yacc.c:1646  */
    break;

  case 1203:
#line 8482 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
#line 14555 "parser.c" /* yacc.c:1646  */
    break;

  case 1204:
#line 8492 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RELEASE", 0);
  }
#line 14563 "parser.c" /* yacc.c:1646  */
    break;

  case 1206:
#line 8500 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_release ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14571 "parser.c" /* yacc.c:1646  */
    break;

  case 1207:
#line 8510 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
#line 14580 "parser.c" /* yacc.c:1646  */
    break;

  case 1208:
#line 8520 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
#line 14588 "parser.c" /* yacc.c:1646  */
    break;

  case 1210:
#line 8529 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_return ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 14596 "parser.c" /* yacc.c:1646  */
    break;

  case 1211:
#line 8536 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
#line 14604 "parser.c" /* yacc.c:1646  */
    break;

  case 1212:
#line 8540 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
#line 14612 "parser.c" /* yacc.c:1646  */
    break;

  case 1213:
#line 8550 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 14623 "parser.c" /* yacc.c:1646  */
    break;

  case 1215:
#line 8562 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_rewrite ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	start_debug = save_debug;
  }
#line 14632 "parser.c" /* yacc.c:1646  */
    break;

  case 1216:
#line 8570 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14640 "parser.c" /* yacc.c:1646  */
    break;

  case 1217:
#line 8574 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int1;
  }
#line 14648 "parser.c" /* yacc.c:1646  */
    break;

  case 1218:
#line 8578 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int2;
  }
#line 14656 "parser.c" /* yacc.c:1646  */
    break;

  case 1219:
#line 8585 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
#line 14664 "parser.c" /* yacc.c:1646  */
    break;

  case 1220:
#line 8589 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
#line 14672 "parser.c" /* yacc.c:1646  */
    break;

  case 1221:
#line 8599 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
#line 14681 "parser.c" /* yacc.c:1646  */
    break;

  case 1222:
#line 8610 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
#line 14689 "parser.c" /* yacc.c:1646  */
    break;

  case 1224:
#line 8619 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_search ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14697 "parser.c" /* yacc.c:1646  */
    break;

  case 1225:
#line 8624 "parser.y" /* yacc.c:1646  */
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 14706 "parser.c" /* yacc.c:1646  */
    break;

  case 1226:
#line 8631 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 14712 "parser.c" /* yacc.c:1646  */
    break;

  case 1227:
#line 8632 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 14718 "parser.c" /* yacc.c:1646  */
    break;

  case 1228:
#line 8637 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14726 "parser.c" /* yacc.c:1646  */
    break;

  case 1229:
#line 8642 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 14734 "parser.c" /* yacc.c:1646  */
    break;

  case 1230:
#line 8649 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 14742 "parser.c" /* yacc.c:1646  */
    break;

  case 1231:
#line 8653 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[0]), (yyvsp[-1]));
  }
#line 14750 "parser.c" /* yacc.c:1646  */
    break;

  case 1232:
#line 8661 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_if_check_break ((yyvsp[-1]), (yyvsp[0]));
  }
#line 14758 "parser.c" /* yacc.c:1646  */
    break;

  case 1233:
#line 8668 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
#line 14766 "parser.c" /* yacc.c:1646  */
    break;

  case 1234:
#line 8672 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
#line 14774 "parser.c" /* yacc.c:1646  */
    break;

  case 1235:
#line 8682 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
#line 14785 "parser.c" /* yacc.c:1646  */
    break;

  case 1236:
#line 8689 "parser.y" /* yacc.c:1646  */
    {
	cobc_cs_check = 0;
  }
#line 14793 "parser.c" /* yacc.c:1646  */
    break;

  case 1243:
#line 8704 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14799 "parser.c" /* yacc.c:1646  */
    break;

  case 1244:
#line 8705 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14805 "parser.c" /* yacc.c:1646  */
    break;

  case 1245:
#line 8709 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 14811 "parser.c" /* yacc.c:1646  */
    break;

  case 1246:
#line 8710 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 14817 "parser.c" /* yacc.c:1646  */
    break;

  case 1247:
#line 8717 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_setenv ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14825 "parser.c" /* yacc.c:1646  */
    break;

  case 1248:
#line 8726 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_attribute ((yyvsp[-2]), setattr_val_on, setattr_val_off);
  }
#line 14833 "parser.c" /* yacc.c:1646  */
    break;

  case 1251:
#line 8738 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BELL);
  }
#line 14841 "parser.c" /* yacc.c:1646  */
    break;

  case 1252:
#line 8742 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_BLINK);
  }
#line 14849 "parser.c" /* yacc.c:1646  */
    break;

  case 1253:
#line 8746 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_HIGHLIGHT);
  }
#line 14857 "parser.c" /* yacc.c:1646  */
    break;

  case 1254:
#line 8750 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LOWLIGHT);
  }
#line 14865 "parser.c" /* yacc.c:1646  */
    break;

  case 1255:
#line 8754 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_REVERSE);
  }
#line 14873 "parser.c" /* yacc.c:1646  */
    break;

  case 1256:
#line 8758 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_UNDERLINE);
  }
#line 14881 "parser.c" /* yacc.c:1646  */
    break;

  case 1257:
#line 8762 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_LEFTLINE);
  }
#line 14889 "parser.c" /* yacc.c:1646  */
    break;

  case 1258:
#line 8766 "parser.y" /* yacc.c:1646  */
    {
	bit_set_attr ((yyvsp[0]), COB_SCREEN_OVERLINE);
  }
#line 14897 "parser.c" /* yacc.c:1646  */
    break;

  case 1259:
#line 8775 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-3]), cb_build_ppointer ((yyvsp[0])));
  }
#line 14905 "parser.c" /* yacc.c:1646  */
    break;

  case 1260:
#line 8779 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_to ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14913 "parser.c" /* yacc.c:1646  */
    break;

  case 1261:
#line 8788 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_up_down ((yyvsp[-3]), (yyvsp[-2]), (yyvsp[0]));
  }
#line 14921 "parser.c" /* yacc.c:1646  */
    break;

  case 1264:
#line 8802 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_on_off ((yyvsp[-2]), (yyvsp[0]));
  }
#line 14929 "parser.c" /* yacc.c:1646  */
    break;

  case 1267:
#line 8816 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_true ((yyvsp[-2]));
  }
#line 14937 "parser.c" /* yacc.c:1646  */
    break;

  case 1268:
#line 8820 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_set_false ((yyvsp[-2]));
  }
#line 14945 "parser.c" /* yacc.c:1646  */
    break;

  case 1269:
#line 8830 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SORT", 0);
  }
#line 14953 "parser.c" /* yacc.c:1646  */
    break;

  case 1271:
#line 8838 "parser.y" /* yacc.c:1646  */
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
#line 14978 "parser.c" /* yacc.c:1646  */
    break;

  case 1272:
#line 8859 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2]) && CB_VALID_TREE ((yyvsp[-6]))) {
		cb_emit_sort_finish ((yyvsp[-6]));
	}
  }
#line 14988 "parser.c" /* yacc.c:1646  */
    break;

  case 1273:
#line 8868 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 14996 "parser.c" /* yacc.c:1646  */
    break;

  case 1274:
#line 8873 "parser.y" /* yacc.c:1646  */
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
#line 15016 "parser.c" /* yacc.c:1646  */
    break;

  case 1275:
#line 8891 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15022 "parser.c" /* yacc.c:1646  */
    break;

  case 1276:
#line 8892 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15028 "parser.c" /* yacc.c:1646  */
    break;

  case 1278:
#line 8897 "parser.y" /* yacc.c:1646  */
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
#line 15037 "parser.c" /* yacc.c:1646  */
    break;

  case 1279:
#line 8904 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 15043 "parser.c" /* yacc.c:1646  */
    break;

  case 1280:
#line 8905 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_ref ((yyvsp[0])); }
#line 15049 "parser.c" /* yacc.c:1646  */
    break;

  case 1281:
#line 8910 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0]) && CB_FILE_P (cb_ref ((yyvsp[0])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
#line 15059 "parser.c" /* yacc.c:1646  */
    break;

  case 1282:
#line 8916 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-2])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[-2])))) {
			cb_error (_("USING invalid with table SORT"));
		} else {
			cb_emit_sort_using ((yyvsp[-2]), (yyvsp[0]));
		}
	}
  }
#line 15073 "parser.c" /* yacc.c:1646  */
    break;

  case 1283:
#line 8926 "parser.y" /* yacc.c:1646  */
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
#line 15089 "parser.c" /* yacc.c:1646  */
    break;

  case 1284:
#line 8941 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
#line 15099 "parser.c" /* yacc.c:1646  */
    break;

  case 1285:
#line 8947 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (2)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (2)])))) {
			cb_error (_("GIVING invalid with table SORT"));
		} else {
			cb_emit_sort_giving ((yyvsp[(-1) - (2)]), (yyvsp[0]));
		}
	}
  }
#line 15113 "parser.c" /* yacc.c:1646  */
    break;

  case 1286:
#line 8957 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[(-1) - (4)])) {
		if (!CB_FILE_P (cb_ref ((yyvsp[(-1) - (4)])))) {
			cb_error (_("OUTPUT PROCEDURE invalid with table SORT"));
		} else {
			cb_emit_sort_output ((yyvsp[0]));
		}
	}
  }
#line 15127 "parser.c" /* yacc.c:1646  */
    break;

  case 1287:
#line 8973 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
#line 15136 "parser.c" /* yacc.c:1646  */
    break;

  case 1289:
#line 8983 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[-1]) && !(yyvsp[-2])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[-3]), start_tree, (yyvsp[-2]), (yyvsp[-1]));
	}
  }
#line 15149 "parser.c" /* yacc.c:1646  */
    break;

  case 1290:
#line 8995 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15157 "parser.c" /* yacc.c:1646  */
    break;

  case 1291:
#line 8999 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15165 "parser.c" /* yacc.c:1646  */
    break;

  case 1292:
#line 9006 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15173 "parser.c" /* yacc.c:1646  */
    break;

  case 1293:
#line 9010 "parser.y" /* yacc.c:1646  */
    {
	start_tree = (yyvsp[-1]);
	(yyval) = (yyvsp[0]);
  }
#line 15182 "parser.c" /* yacc.c:1646  */
    break;

  case 1294:
#line 9015 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
#line 15191 "parser.c" /* yacc.c:1646  */
    break;

  case 1295:
#line 9020 "parser.y" /* yacc.c:1646  */
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
#line 15200 "parser.c" /* yacc.c:1646  */
    break;

  case 1296:
#line 9027 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_EQ); }
#line 15206 "parser.c" /* yacc.c:1646  */
    break;

  case 1297:
#line 9028 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LE : COB_GT); }
#line 15212 "parser.c" /* yacc.c:1646  */
    break;

  case 1298:
#line 9029 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GE : COB_LT); }
#line 15218 "parser.c" /* yacc.c:1646  */
    break;

  case 1299:
#line 9030 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_LT : COB_GE); }
#line 15224 "parser.c" /* yacc.c:1646  */
    break;

  case 1300:
#line 9031 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int ((yyvsp[-1]) ? COB_GT : COB_LE); }
#line 15230 "parser.c" /* yacc.c:1646  */
    break;

  case 1301:
#line 9032 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (COB_NE); }
#line 15236 "parser.c" /* yacc.c:1646  */
    break;

  case 1302:
#line 9037 "parser.y" /* yacc.c:1646  */
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
#line 15245 "parser.c" /* yacc.c:1646  */
    break;

  case 1305:
#line 9050 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
#line 15253 "parser.c" /* yacc.c:1646  */
    break;

  case 1306:
#line 9054 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
#line 15261 "parser.c" /* yacc.c:1646  */
    break;

  case 1307:
#line 9064 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP RUN", 0);
  }
#line 15269 "parser.c" /* yacc.c:1646  */
    break;

  case 1308:
#line 9068 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_stop_run ((yyvsp[0]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
#line 15279 "parser.c" /* yacc.c:1646  */
    break;

  case 1309:
#line 9074 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[0])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
#line 15292 "parser.c" /* yacc.c:1646  */
    break;

  case 1310:
#line 9086 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = current_program->cb_return_code;
  }
#line 15300 "parser.c" /* yacc.c:1646  */
    break;

  case 1311:
#line 9090 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15308 "parser.c" /* yacc.c:1646  */
    break;

  case 1312:
#line 9094 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int1;
	}
  }
#line 15320 "parser.c" /* yacc.c:1646  */
    break;

  case 1313:
#line 9102 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int0;
	}
  }
#line 15332 "parser.c" /* yacc.c:1646  */
    break;

  case 1314:
#line 9113 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 15340 "parser.c" /* yacc.c:1646  */
    break;

  case 1315:
#line 9117 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 15348 "parser.c" /* yacc.c:1646  */
    break;

  case 1316:
#line 9123 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15354 "parser.c" /* yacc.c:1646  */
    break;

  case 1317:
#line 9124 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 15360 "parser.c" /* yacc.c:1646  */
    break;

  case 1318:
#line 9125 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 15366 "parser.c" /* yacc.c:1646  */
    break;

  case 1319:
#line 9126 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 15372 "parser.c" /* yacc.c:1646  */
    break;

  case 1320:
#line 9133 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("STRING", TERM_STRING);
  }
#line 15380 "parser.c" /* yacc.c:1646  */
    break;

  case 1322:
#line 9142 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_string ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15388 "parser.c" /* yacc.c:1646  */
    break;

  case 1323:
#line 9148 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15394 "parser.c" /* yacc.c:1646  */
    break;

  case 1324:
#line 9149 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15400 "parser.c" /* yacc.c:1646  */
    break;

  case 1325:
#line 9153 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15406 "parser.c" /* yacc.c:1646  */
    break;

  case 1326:
#line 9154 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
#line 15412 "parser.c" /* yacc.c:1646  */
    break;

  case 1327:
#line 9155 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BUILD_PAIR ((yyvsp[0]), NULL); }
#line 15418 "parser.c" /* yacc.c:1646  */
    break;

  case 1328:
#line 9159 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15424 "parser.c" /* yacc.c:1646  */
    break;

  case 1329:
#line 9160 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15430 "parser.c" /* yacc.c:1646  */
    break;

  case 1330:
#line 9165 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
#line 15438 "parser.c" /* yacc.c:1646  */
    break;

  case 1331:
#line 9169 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
#line 15446 "parser.c" /* yacc.c:1646  */
    break;

  case 1332:
#line 9179 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
#line 15454 "parser.c" /* yacc.c:1646  */
    break;

  case 1334:
#line 9188 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), '-', cb_build_binary_list ((yyvsp[-3]), '+'));
  }
#line 15462 "parser.c" /* yacc.c:1646  */
    break;

  case 1335:
#line 9192 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_arithmetic ((yyvsp[-1]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[-3]), (yyvsp[-5])), '-'));
  }
#line 15470 "parser.c" /* yacc.c:1646  */
    break;

  case 1336:
#line 9196 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[-2]), (yyvsp[-4]), (yyvsp[-1]));
  }
#line 15478 "parser.c" /* yacc.c:1646  */
    break;

  case 1337:
#line 9203 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
#line 15486 "parser.c" /* yacc.c:1646  */
    break;

  case 1338:
#line 9207 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
#line 15494 "parser.c" /* yacc.c:1646  */
    break;

  case 1339:
#line 9217 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  }
#line 15507 "parser.c" /* yacc.c:1646  */
    break;

  case 1342:
#line 9235 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TERMINATE", 0);
  }
#line 15515 "parser.c" /* yacc.c:1646  */
    break;

  case 1344:
#line 9243 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[0]));
	}
  }
#line 15527 "parser.c" /* yacc.c:1646  */
    break;

  case 1345:
#line 9251 "parser.y" /* yacc.c:1646  */
    {
	begin_implicit_statement ();
	if ((yyvsp[0]) != cb_error_node) {
		cb_emit_terminate((yyvsp[0]));
	}
  }
#line 15538 "parser.c" /* yacc.c:1646  */
    break;

  case 1346:
#line 9263 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("TRANSFORM", 0);
  }
#line 15546 "parser.c" /* yacc.c:1646  */
    break;

  case 1348:
#line 9271 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[-2]), (yyvsp[0]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[-4]), x, cb_int0, 2);
  }
#line 15557 "parser.c" /* yacc.c:1646  */
    break;

  case 1349:
#line 9284 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNLOCK", 0);
  }
#line 15565 "parser.c" /* yacc.c:1646  */
    break;

  case 1351:
#line 9292 "parser.y" /* yacc.c:1646  */
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
#line 15580 "parser.c" /* yacc.c:1646  */
    break;

  case 1355:
#line 9315 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
#line 15588 "parser.c" /* yacc.c:1646  */
    break;

  case 1357:
#line 9325 "parser.y" /* yacc.c:1646  */
    {
	cb_emit_unstring ((yyvsp[-5]), (yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
  }
#line 15596 "parser.c" /* yacc.c:1646  */
    break;

  case 1358:
#line 9331 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15602 "parser.c" /* yacc.c:1646  */
    break;

  case 1359:
#line 9333 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15608 "parser.c" /* yacc.c:1646  */
    break;

  case 1360:
#line 9337 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15614 "parser.c" /* yacc.c:1646  */
    break;

  case 1361:
#line 9339 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0])); }
#line 15620 "parser.c" /* yacc.c:1646  */
    break;

  case 1362:
#line 9344 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[-1]), (yyvsp[0]));
  }
#line 15628 "parser.c" /* yacc.c:1646  */
    break;

  case 1363:
#line 9350 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 15634 "parser.c" /* yacc.c:1646  */
    break;

  case 1364:
#line 9352 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 15640 "parser.c" /* yacc.c:1646  */
    break;

  case 1365:
#line 9357 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_unstring_into ((yyvsp[-2]), (yyvsp[-1]), (yyvsp[0]));
  }
#line 15648 "parser.c" /* yacc.c:1646  */
    break;

  case 1366:
#line 9363 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15654 "parser.c" /* yacc.c:1646  */
    break;

  case 1367:
#line 9364 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15660 "parser.c" /* yacc.c:1646  */
    break;

  case 1368:
#line 9368 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15666 "parser.c" /* yacc.c:1646  */
    break;

  case 1369:
#line 9369 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15672 "parser.c" /* yacc.c:1646  */
    break;

  case 1370:
#line 9373 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 15678 "parser.c" /* yacc.c:1646  */
    break;

  case 1371:
#line 9374 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 15684 "parser.c" /* yacc.c:1646  */
    break;

  case 1372:
#line 9379 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
#line 15692 "parser.c" /* yacc.c:1646  */
    break;

  case 1373:
#line 9383 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
#line 15700 "parser.c" /* yacc.c:1646  */
    break;

  case 1374:
#line 9393 "parser.y" /* yacc.c:1646  */
    {
	skip_statements = 0;
	in_debugging = 0;
  }
#line 15709 "parser.c" /* yacc.c:1646  */
    break;

  case 1381:
#line 9411 "parser.y" /* yacc.c:1646  */
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
#line 15735 "parser.c" /* yacc.c:1646  */
    break;

  case 1382:
#line 9436 "parser.y" /* yacc.c:1646  */
    {
	use_global_ind = 0;
  }
#line 15743 "parser.c" /* yacc.c:1646  */
    break;

  case 1383:
#line 9440 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
#line 15756 "parser.c" /* yacc.c:1646  */
    break;

  case 1384:
#line 9452 "parser.y" /* yacc.c:1646  */
    {
	cb_tree		l;

	for (l = (yyvsp[0]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
#line 15770 "parser.c" /* yacc.c:1646  */
    break;

  case 1385:
#line 9462 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
#line 15779 "parser.c" /* yacc.c:1646  */
    break;

  case 1386:
#line 9467 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
#line 15788 "parser.c" /* yacc.c:1646  */
    break;

  case 1387:
#line 9472 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
#line 15797 "parser.c" /* yacc.c:1646  */
    break;

  case 1388:
#line 9477 "parser.y" /* yacc.c:1646  */
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
#line 15806 "parser.c" /* yacc.c:1646  */
    break;

  case 1389:
#line 9485 "parser.y" /* yacc.c:1646  */
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
#line 15845 "parser.c" /* yacc.c:1646  */
    break;

  case 1392:
#line 9528 "parser.y" /* yacc.c:1646  */
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
#line 15889 "parser.c" /* yacc.c:1646  */
    break;

  case 1393:
#line 9568 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->flag_debugging) {
		if (current_program->all_procedure) {
			cb_error (_("Duplicate USE DEBUGGING ON ALL PROCEDURES"));
		} else {
			current_program->all_procedure = current_section;
		}
	}
  }
#line 15903 "parser.c" /* yacc.c:1646  */
    break;

  case 1394:
#line 9578 "parser.y" /* yacc.c:1646  */
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
#line 15928 "parser.c" /* yacc.c:1646  */
    break;

  case 1399:
#line 9608 "parser.y" /* yacc.c:1646  */
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
#line 15938 "parser.c" /* yacc.c:1646  */
    break;

  case 1400:
#line 9617 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
#line 15948 "parser.c" /* yacc.c:1646  */
    break;

  case 1401:
#line 9623 "parser.y" /* yacc.c:1646  */
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
#line 15958 "parser.c" /* yacc.c:1646  */
    break;

  case 1402:
#line 9633 "parser.y" /* yacc.c:1646  */
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
#line 15990 "parser.c" /* yacc.c:1646  */
    break;

  case 1403:
#line 9664 "parser.y" /* yacc.c:1646  */
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
#line 16000 "parser.c" /* yacc.c:1646  */
    break;

  case 1406:
#line 9680 "parser.y" /* yacc.c:1646  */
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
#line 16011 "parser.c" /* yacc.c:1646  */
    break;

  case 1408:
#line 9692 "parser.y" /* yacc.c:1646  */
    {
	if (CB_VALID_TREE ((yyvsp[-4]))) {
		cb_emit_write ((yyvsp[-4]), (yyvsp[-3]), (yyvsp[-2]), (yyvsp[-1]));
	}
	start_debug = save_debug;
  }
#line 16022 "parser.c" /* yacc.c:1646  */
    break;

  case 1409:
#line 9701 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16028 "parser.c" /* yacc.c:1646  */
    break;

  case 1410:
#line 9702 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16034 "parser.c" /* yacc.c:1646  */
    break;

  case 1411:
#line 9707 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 16042 "parser.c" /* yacc.c:1646  */
    break;

  case 1412:
#line 9711 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 16050 "parser.c" /* yacc.c:1646  */
    break;

  case 1413:
#line 9715 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16058 "parser.c" /* yacc.c:1646  */
    break;

  case 1414:
#line 9719 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[-2]));
  }
#line 16066 "parser.c" /* yacc.c:1646  */
    break;

  case 1415:
#line 9725 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_BEFORE; }
#line 16072 "parser.c" /* yacc.c:1646  */
    break;

  case 1416:
#line 9726 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_AFTER; }
#line 16078 "parser.c" /* yacc.c:1646  */
    break;

  case 1419:
#line 9736 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
#line 16086 "parser.c" /* yacc.c:1646  */
    break;

  case 1420:
#line 9740 "parser.y" /* yacc.c:1646  */
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
#line 16094 "parser.c" /* yacc.c:1646  */
    break;

  case 1423:
#line 9757 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16103 "parser.c" /* yacc.c:1646  */
    break;

  case 1425:
#line 9767 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16112 "parser.c" /* yacc.c:1646  */
    break;

  case 1428:
#line 9780 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16121 "parser.c" /* yacc.c:1646  */
    break;

  case 1430:
#line 9790 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16130 "parser.c" /* yacc.c:1646  */
    break;

  case 1433:
#line 9805 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16139 "parser.c" /* yacc.c:1646  */
    break;

  case 1435:
#line 9815 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16148 "parser.c" /* yacc.c:1646  */
    break;

  case 1438:
#line 9832 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16157 "parser.c" /* yacc.c:1646  */
    break;

  case 1440:
#line 9843 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16166 "parser.c" /* yacc.c:1646  */
    break;

  case 1446:
#line 9866 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16175 "parser.c" /* yacc.c:1646  */
    break;

  case 1447:
#line 9875 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16184 "parser.c" /* yacc.c:1646  */
    break;

  case 1451:
#line 9892 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16193 "parser.c" /* yacc.c:1646  */
    break;

  case 1452:
#line 9901 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16202 "parser.c" /* yacc.c:1646  */
    break;

  case 1455:
#line 9918 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[0]);
  }
#line 16211 "parser.c" /* yacc.c:1646  */
    break;

  case 1457:
#line 9928 "parser.y" /* yacc.c:1646  */
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[0]);
  }
#line 16220 "parser.c" /* yacc.c:1646  */
    break;

  case 1458:
#line 9938 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_one;
  }
#line 16228 "parser.c" /* yacc.c:1646  */
    break;

  case 1459:
#line 9942 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 16236 "parser.c" /* yacc.c:1646  */
    break;

  case 1460:
#line 9952 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_cond ((yyvsp[0]));
  }
#line 16244 "parser.c" /* yacc.c:1646  */
    break;

  case 1461:
#line 9959 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_expr ((yyvsp[0]));
  }
#line 16252 "parser.c" /* yacc.c:1646  */
    break;

  case 1462:
#line 9965 "parser.y" /* yacc.c:1646  */
    {
	current_expr = NULL;
	cb_exp_line = cb_source_line;
  }
#line 16261 "parser.c" /* yacc.c:1646  */
    break;

  case 1463:
#line 9970 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_reverse (current_expr);
  }
#line 16269 "parser.c" /* yacc.c:1646  */
    break;

  case 1467:
#line 9983 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE_P ((yyvsp[0])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[0])))) {
		push_expr ('C', (yyvsp[0]));
	} else {
		push_expr ('x', (yyvsp[0]));
	}
  }
#line 16281 "parser.c" /* yacc.c:1646  */
    break;

  case 1468:
#line 9991 "parser.y" /* yacc.c:1646  */
    { push_expr ('(', NULL); }
#line 16287 "parser.c" /* yacc.c:1646  */
    break;

  case 1469:
#line 9992 "parser.y" /* yacc.c:1646  */
    { push_expr (')', NULL); }
#line 16293 "parser.c" /* yacc.c:1646  */
    break;

  case 1470:
#line 9994 "parser.y" /* yacc.c:1646  */
    { push_expr ('+', NULL); }
#line 16299 "parser.c" /* yacc.c:1646  */
    break;

  case 1471:
#line 9995 "parser.y" /* yacc.c:1646  */
    { push_expr ('-', NULL); }
#line 16305 "parser.c" /* yacc.c:1646  */
    break;

  case 1472:
#line 9996 "parser.y" /* yacc.c:1646  */
    { push_expr ('*', NULL); }
#line 16311 "parser.c" /* yacc.c:1646  */
    break;

  case 1473:
#line 9997 "parser.y" /* yacc.c:1646  */
    { push_expr ('/', NULL); }
#line 16317 "parser.c" /* yacc.c:1646  */
    break;

  case 1474:
#line 9998 "parser.y" /* yacc.c:1646  */
    { push_expr ('^', NULL); }
#line 16323 "parser.c" /* yacc.c:1646  */
    break;

  case 1475:
#line 10000 "parser.y" /* yacc.c:1646  */
    { push_expr ('=', NULL); }
#line 16329 "parser.c" /* yacc.c:1646  */
    break;

  case 1476:
#line 10001 "parser.y" /* yacc.c:1646  */
    { push_expr ('>', NULL); }
#line 16335 "parser.c" /* yacc.c:1646  */
    break;

  case 1477:
#line 10002 "parser.y" /* yacc.c:1646  */
    { push_expr ('<', NULL); }
#line 16341 "parser.c" /* yacc.c:1646  */
    break;

  case 1478:
#line 10003 "parser.y" /* yacc.c:1646  */
    { push_expr (']', NULL); }
#line 16347 "parser.c" /* yacc.c:1646  */
    break;

  case 1479:
#line 10004 "parser.y" /* yacc.c:1646  */
    { push_expr ('[', NULL); }
#line 16353 "parser.c" /* yacc.c:1646  */
    break;

  case 1480:
#line 10005 "parser.y" /* yacc.c:1646  */
    { push_expr ('~', NULL); }
#line 16359 "parser.c" /* yacc.c:1646  */
    break;

  case 1481:
#line 10007 "parser.y" /* yacc.c:1646  */
    { push_expr ('!', NULL); }
#line 16365 "parser.c" /* yacc.c:1646  */
    break;

  case 1482:
#line 10008 "parser.y" /* yacc.c:1646  */
    { push_expr ('&', NULL); }
#line 16371 "parser.c" /* yacc.c:1646  */
    break;

  case 1483:
#line 10009 "parser.y" /* yacc.c:1646  */
    { push_expr ('|', NULL); }
#line 16377 "parser.c" /* yacc.c:1646  */
    break;

  case 1484:
#line 10011 "parser.y" /* yacc.c:1646  */
    { push_expr ('O', NULL); }
#line 16383 "parser.c" /* yacc.c:1646  */
    break;

  case 1485:
#line 10012 "parser.y" /* yacc.c:1646  */
    { push_expr ('9', NULL); }
#line 16389 "parser.c" /* yacc.c:1646  */
    break;

  case 1486:
#line 10013 "parser.y" /* yacc.c:1646  */
    { push_expr ('A', NULL); }
#line 16395 "parser.c" /* yacc.c:1646  */
    break;

  case 1487:
#line 10014 "parser.y" /* yacc.c:1646  */
    { push_expr ('L', NULL); }
#line 16401 "parser.c" /* yacc.c:1646  */
    break;

  case 1488:
#line 10015 "parser.y" /* yacc.c:1646  */
    { push_expr ('U', NULL); }
#line 16407 "parser.c" /* yacc.c:1646  */
    break;

  case 1489:
#line 10018 "parser.y" /* yacc.c:1646  */
    { push_expr ('P', NULL); }
#line 16413 "parser.c" /* yacc.c:1646  */
    break;

  case 1490:
#line 10019 "parser.y" /* yacc.c:1646  */
    { push_expr ('N', NULL); }
#line 16419 "parser.c" /* yacc.c:1646  */
    break;

  case 1499:
#line 10049 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16427 "parser.c" /* yacc.c:1646  */
    break;

  case 1500:
#line 10053 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-2]), (yyvsp[0]));
  }
#line 16435 "parser.c" /* yacc.c:1646  */
    break;

  case 1504:
#line 10064 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '+', (yyvsp[0])); }
#line 16441 "parser.c" /* yacc.c:1646  */
    break;

  case 1505:
#line 10065 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '-', (yyvsp[0])); }
#line 16447 "parser.c" /* yacc.c:1646  */
    break;

  case 1506:
#line 10066 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16453 "parser.c" /* yacc.c:1646  */
    break;

  case 1507:
#line 10070 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '*', (yyvsp[0])); }
#line 16459 "parser.c" /* yacc.c:1646  */
    break;

  case 1508:
#line 10071 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op ((yyvsp[-2]), '/', (yyvsp[0])); }
#line 16465 "parser.c" /* yacc.c:1646  */
    break;

  case 1509:
#line 10072 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16471 "parser.c" /* yacc.c:1646  */
    break;

  case 1510:
#line 10077 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_binary_op ((yyvsp[-2]), '^', (yyvsp[0]));
  }
#line 16479 "parser.c" /* yacc.c:1646  */
    break;

  case 1511:
#line 10080 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16485 "parser.c" /* yacc.c:1646  */
    break;

  case 1512:
#line 10084 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16491 "parser.c" /* yacc.c:1646  */
    break;

  case 1513:
#line 10085 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[0])); }
#line 16497 "parser.c" /* yacc.c:1646  */
    break;

  case 1514:
#line 10086 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16503 "parser.c" /* yacc.c:1646  */
    break;

  case 1515:
#line 10089 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 16509 "parser.c" /* yacc.c:1646  */
    break;

  case 1516:
#line 10090 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16515 "parser.c" /* yacc.c:1646  */
    break;

  case 1517:
#line 10101 "parser.y" /* yacc.c:1646  */
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
#line 16531 "parser.c" /* yacc.c:1646  */
    break;

  case 1518:
#line 10113 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[0])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16544 "parser.c" /* yacc.c:1646  */
    break;

  case 1519:
#line 10122 "parser.y" /* yacc.c:1646  */
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
#line 16564 "parser.c" /* yacc.c:1646  */
    break;

  case 1520:
#line 10138 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->line_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16577 "parser.c" /* yacc.c:1646  */
    break;

  case 1521:
#line 10147 "parser.y" /* yacc.c:1646  */
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
#line 16597 "parser.c" /* yacc.c:1646  */
    break;

  case 1522:
#line 10163 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[0])))->page_counter;
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16610 "parser.c" /* yacc.c:1646  */
    break;

  case 1523:
#line 10177 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16616 "parser.c" /* yacc.c:1646  */
    break;

  case 1524:
#line 10179 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_append ((yyvsp[-1]), (yyvsp[0])); }
#line 16622 "parser.c" /* yacc.c:1646  */
    break;

  case 1525:
#line 10184 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[0]), (yyvsp[-1]));
  }
#line 16630 "parser.c" /* yacc.c:1646  */
    break;

  case 1526:
#line 10192 "parser.y" /* yacc.c:1646  */
    { cb_build_identifier ((yyvsp[0]), 0); }
#line 16636 "parser.c" /* yacc.c:1646  */
    break;

  case 1527:
#line 10199 "parser.y" /* yacc.c:1646  */
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
#line 16655 "parser.c" /* yacc.c:1646  */
    break;

  case 1528:
#line 10219 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16663 "parser.c" /* yacc.c:1646  */
    break;

  case 1529:
#line 10223 "parser.y" /* yacc.c:1646  */
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
#line 16685 "parser.c" /* yacc.c:1646  */
    break;

  case 1530:
#line 10244 "parser.y" /* yacc.c:1646  */
    {
	if (CB_FILE_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error_x ((yyvsp[0]), _("'%s' is not a file name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16698 "parser.c" /* yacc.c:1646  */
    break;

  case 1531:
#line 10285 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[0])))) {
		(yyval) = (yyvsp[0]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[0])));
		(yyval) = cb_error_node;
	}
  }
#line 16711 "parser.c" /* yacc.c:1646  */
    break;

  case 1532:
#line 10298 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16717 "parser.c" /* yacc.c:1646  */
    break;

  case 1533:
#line 10300 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16723 "parser.c" /* yacc.c:1646  */
    break;

  case 1534:
#line 10304 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 16729 "parser.c" /* yacc.c:1646  */
    break;

  case 1535:
#line 10310 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 16735 "parser.c" /* yacc.c:1646  */
    break;

  case 1536:
#line 10312 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16741 "parser.c" /* yacc.c:1646  */
    break;

  case 1537:
#line 10317 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
#line 16754 "parser.c" /* yacc.c:1646  */
    break;

  case 1540:
#line 10331 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 16762 "parser.c" /* yacc.c:1646  */
    break;

  case 1541:
#line 10338 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[0]))->data));
	(yyval)->source_file = (yyvsp[0])->source_file;
	(yyval)->source_line = (yyvsp[0])->source_line;
  }
#line 16772 "parser.c" /* yacc.c:1646  */
    break;

  case 1542:
#line 10348 "parser.y" /* yacc.c:1646  */
    { (yyval) = CB_LIST_INIT ((yyvsp[0])); }
#line 16778 "parser.c" /* yacc.c:1646  */
    break;

  case 1543:
#line 10349 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0])); }
#line 16784 "parser.c" /* yacc.c:1646  */
    break;

  case 1544:
#line 10354 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16793 "parser.c" /* yacc.c:1646  */
    break;

  case 1545:
#line 10362 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16802 "parser.c" /* yacc.c:1646  */
    break;

  case 1546:
#line 10370 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16810 "parser.c" /* yacc.c:1646  */
    break;

  case 1547:
#line 10374 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16818 "parser.c" /* yacc.c:1646  */
    break;

  case 1548:
#line 10381 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
#line 16828 "parser.c" /* yacc.c:1646  */
    break;

  case 1551:
#line 10397 "parser.y" /* yacc.c:1646  */
    {
	if (CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[0]);
	}
  }
#line 16841 "parser.c" /* yacc.c:1646  */
    break;

  case 1552:
#line 10411 "parser.y" /* yacc.c:1646  */
    {
	if (CB_REFERENCE ((yyvsp[0]))->flag_duped || CB_WORD_COUNT ((yyvsp[0])) > 0) {
		redefinition_error ((yyvsp[0]));
		(yyval) = NULL;
	} else {
		CB_WORD_COUNT ((yyvsp[0]))++;
		(yyval) = (yyvsp[0]);
	}
  }
#line 16855 "parser.c" /* yacc.c:1646  */
    break;

  case 1553:
#line 10428 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16863 "parser.c" /* yacc.c:1646  */
    break;

  case 1554:
#line 10432 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16871 "parser.c" /* yacc.c:1646  */
    break;

  case 1557:
#line 10441 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16879 "parser.c" /* yacc.c:1646  */
    break;

  case 1558:
#line 10448 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16887 "parser.c" /* yacc.c:1646  */
    break;

  case 1559:
#line 10452 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16895 "parser.c" /* yacc.c:1646  */
    break;

  case 1564:
#line 10463 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16903 "parser.c" /* yacc.c:1646  */
    break;

  case 1565:
#line 10467 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16911 "parser.c" /* yacc.c:1646  */
    break;

  case 1566:
#line 10471 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16919 "parser.c" /* yacc.c:1646  */
    break;

  case 1567:
#line 10475 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_ppointer ((yyvsp[0]));
  }
#line 16927 "parser.c" /* yacc.c:1646  */
    break;

  case 1568:
#line 10479 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_address ((yyvsp[0]));
  }
#line 16935 "parser.c" /* yacc.c:1646  */
    break;

  case 1569:
#line 10483 "parser.y" /* yacc.c:1646  */
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
#line 16957 "parser.c" /* yacc.c:1646  */
    break;

  case 1570:
#line 10504 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_LIST_INIT ((yyvsp[0]));
  }
#line 16965 "parser.c" /* yacc.c:1646  */
    break;

  case 1571:
#line 10508 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_list_add ((yyvsp[-1]), (yyvsp[0]));
  }
#line 16973 "parser.c" /* yacc.c:1646  */
    break;

  case 1579:
#line 10525 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16981 "parser.c" /* yacc.c:1646  */
    break;

  case 1580:
#line 10529 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16989 "parser.c" /* yacc.c:1646  */
    break;

  case 1581:
#line 10533 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_length ((yyvsp[0]));
  }
#line 16997 "parser.c" /* yacc.c:1646  */
    break;

  case 1597:
#line 10580 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_zero;
  }
#line 17005 "parser.c" /* yacc.c:1646  */
    break;

  case 1605:
#line 10604 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17011 "parser.c" /* yacc.c:1646  */
    break;

  case 1606:
#line 10608 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 1); }
#line 17017 "parser.c" /* yacc.c:1646  */
    break;

  case 1607:
#line 10612 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17023 "parser.c" /* yacc.c:1646  */
    break;

  case 1608:
#line 10613 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]); }
#line 17029 "parser.c" /* yacc.c:1646  */
    break;

  case 1609:
#line 10617 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_build_identifier ((yyvsp[0]), 0); }
#line 17035 "parser.c" /* yacc.c:1646  */
    break;

  case 1610:
#line 10622 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17046 "parser.c" /* yacc.c:1646  */
    break;

  case 1611:
#line 10629 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17057 "parser.c" /* yacc.c:1646  */
    break;

  case 1612:
#line 10636 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17068 "parser.c" /* yacc.c:1646  */
    break;

  case 1613:
#line 10643 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17079 "parser.c" /* yacc.c:1646  */
    break;

  case 1614:
#line 10653 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17087 "parser.c" /* yacc.c:1646  */
    break;

  case 1615:
#line 10657 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_identifier ((yyvsp[0]), 0);
  }
#line 17095 "parser.c" /* yacc.c:1646  */
    break;

  case 1616:
#line 10664 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	if (CB_REFERENCE_P ((yyvsp[-2]))) {
		CB_REFERENCE ((yyvsp[-2]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-2]));
	}
  }
#line 17109 "parser.c" /* yacc.c:1646  */
    break;

  case 1617:
#line 10674 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17123 "parser.c" /* yacc.c:1646  */
    break;

  case 1618:
#line 10684 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
	if (CB_REFERENCE_P ((yyvsp[-1]))) {
		CB_REFERENCE ((yyvsp[-1]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[-1]));
	}
  }
#line 17137 "parser.c" /* yacc.c:1646  */
    break;

  case 1619:
#line 10694 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	if (CB_REFERENCE_P ((yyvsp[0]))) {
		CB_REFERENCE ((yyvsp[0]))->flag_target = 1;
	}
	if (start_debug) {
		cb_check_field_debug ((yyvsp[0]));
	}
  }
#line 17151 "parser.c" /* yacc.c:1646  */
    break;

  case 1620:
#line 10707 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17159 "parser.c" /* yacc.c:1646  */
    break;

  case 1621:
#line 10711 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-2]);
	CB_REFERENCE ((yyvsp[-2]))->chain = (yyvsp[0]);
  }
#line 17168 "parser.c" /* yacc.c:1646  */
    break;

  case 1622:
#line 10719 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-3]))->subs = cb_list_reverse ((yyvsp[-1]));
  }
#line 17177 "parser.c" /* yacc.c:1646  */
    break;

  case 1623:
#line 10727 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-4]))->offset = (yyvsp[-2]);
  }
#line 17185 "parser.c" /* yacc.c:1646  */
    break;

  case 1624:
#line 10731 "parser.y" /* yacc.c:1646  */
    {
	CB_REFERENCE ((yyvsp[-5]))->offset = (yyvsp[-3]);
	CB_REFERENCE ((yyvsp[-5]))->length = (yyvsp[-1]);
  }
#line 17194 "parser.c" /* yacc.c:1646  */
    break;

  case 1625:
#line 10741 "parser.y" /* yacc.c:1646  */
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
#line 17210 "parser.c" /* yacc.c:1646  */
    break;

  case 1626:
#line 10756 "parser.y" /* yacc.c:1646  */
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
#line 17234 "parser.c" /* yacc.c:1646  */
    break;

  case 1627:
#line 10779 "parser.y" /* yacc.c:1646  */
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
#line 17258 "parser.c" /* yacc.c:1646  */
    break;

  case 1628:
#line 10799 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17266 "parser.c" /* yacc.c:1646  */
    break;

  case 1629:
#line 10806 "parser.y" /* yacc.c:1646  */
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
#line 17286 "parser.c" /* yacc.c:1646  */
    break;

  case 1630:
#line 10821 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17292 "parser.c" /* yacc.c:1646  */
    break;

  case 1631:
#line 10822 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17298 "parser.c" /* yacc.c:1646  */
    break;

  case 1632:
#line 10823 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17304 "parser.c" /* yacc.c:1646  */
    break;

  case 1633:
#line 10824 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17310 "parser.c" /* yacc.c:1646  */
    break;

  case 1634:
#line 10825 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17316 "parser.c" /* yacc.c:1646  */
    break;

  case 1635:
#line 10826 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17322 "parser.c" /* yacc.c:1646  */
    break;

  case 1636:
#line 10831 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17330 "parser.c" /* yacc.c:1646  */
    break;

  case 1637:
#line 10835 "parser.y" /* yacc.c:1646  */
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
#line 17348 "parser.c" /* yacc.c:1646  */
    break;

  case 1638:
#line 10852 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17356 "parser.c" /* yacc.c:1646  */
    break;

  case 1639:
#line 10856 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_concat_literals ((yyvsp[-2]), (yyvsp[0]));
  }
#line 17364 "parser.c" /* yacc.c:1646  */
    break;

  case 1640:
#line 10862 "parser.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]); }
#line 17370 "parser.c" /* yacc.c:1646  */
    break;

  case 1641:
#line 10863 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_space; }
#line 17376 "parser.c" /* yacc.c:1646  */
    break;

  case 1642:
#line 10864 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_zero; }
#line 17382 "parser.c" /* yacc.c:1646  */
    break;

  case 1643:
#line 10865 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_quote; }
#line 17388 "parser.c" /* yacc.c:1646  */
    break;

  case 1644:
#line 10866 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_high; }
#line 17394 "parser.c" /* yacc.c:1646  */
    break;

  case 1645:
#line 10867 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_low; }
#line 17400 "parser.c" /* yacc.c:1646  */
    break;

  case 1646:
#line 10868 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_null; }
#line 17406 "parser.c" /* yacc.c:1646  */
    break;

  case 1647:
#line 10875 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), NULL, (yyvsp[0]), 0);
  }
#line 17414 "parser.c" /* yacc.c:1646  */
    break;

  case 1648:
#line 10879 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), CB_LIST_INIT ((yyvsp[-2])), (yyvsp[0]), 0);
  }
#line 17422 "parser.c" /* yacc.c:1646  */
    break;

  case 1649:
#line 10883 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17430 "parser.c" /* yacc.c:1646  */
    break;

  case 1650:
#line 10887 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17438 "parser.c" /* yacc.c:1646  */
    break;

  case 1651:
#line 10891 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-3]), (yyvsp[-1]), NULL, 0);
  }
#line 17446 "parser.c" /* yacc.c:1646  */
    break;

  case 1652:
#line 10895 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17454 "parser.c" /* yacc.c:1646  */
    break;

  case 1653:
#line 10899 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17462 "parser.c" /* yacc.c:1646  */
    break;

  case 1654:
#line 10903 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17470 "parser.c" /* yacc.c:1646  */
    break;

  case 1655:
#line 10907 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17478 "parser.c" /* yacc.c:1646  */
    break;

  case 1656:
#line 10911 "parser.y" /* yacc.c:1646  */
    {
	  (yyval) = cb_build_intrinsic ((yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]), 0);
  }
#line 17486 "parser.c" /* yacc.c:1646  */
    break;

  case 1657:
#line 10915 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 0);
  }
#line 17494 "parser.c" /* yacc.c:1646  */
    break;

  case 1658:
#line 10919 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_build_intrinsic ((yyvsp[-1]), (yyvsp[0]), NULL, 1);
  }
#line 17502 "parser.c" /* yacc.c:1646  */
    break;

  case 1668:
#line 10944 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17510 "parser.c" /* yacc.c:1646  */
    break;

  case 1669:
#line 10948 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-2]), NULL);
  }
#line 17518 "parser.c" /* yacc.c:1646  */
    break;

  case 1670:
#line 10952 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[-3]), (yyvsp[-1]));
  }
#line 17526 "parser.c" /* yacc.c:1646  */
    break;

  case 1671:
#line 10959 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17534 "parser.c" /* yacc.c:1646  */
    break;

  case 1672:
#line 10963 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[-1]);
  }
#line 17542 "parser.c" /* yacc.c:1646  */
    break;

  case 1673:
#line 10967 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17550 "parser.c" /* yacc.c:1646  */
    break;

  case 1674:
#line 10974 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_int0);
  }
#line 17561 "parser.c" /* yacc.c:1646  */
    break;

  case 1675:
#line 10981 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int1);
  }
#line 17572 "parser.c" /* yacc.c:1646  */
    break;

  case 1676:
#line 10988 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_int2);
  }
#line 17583 "parser.c" /* yacc.c:1646  */
    break;

  case 1677:
#line 10998 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17594 "parser.c" /* yacc.c:1646  */
    break;

  case 1678:
#line 11005 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, (yyvsp[0]));
  }
#line 17605 "parser.c" /* yacc.c:1646  */
    break;

  case 1679:
#line 11015 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[0]));
	(yyval) = cb_list_add (x, cb_null);
  }
#line 17616 "parser.c" /* yacc.c:1646  */
    break;

  case 1680:
#line 11022 "parser.y" /* yacc.c:1646  */
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[-2]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[0])));
  }
#line 17627 "parser.c" /* yacc.c:1646  */
    break;

  case 1681:
#line 11032 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17635 "parser.c" /* yacc.c:1646  */
    break;

  case 1682:
#line 11036 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 4) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17649 "parser.c" /* yacc.c:1646  */
    break;

  case 1683:
#line 11049 "parser.y" /* yacc.c:1646  */
    {	  
	(yyval) = cb_list_add ((yyvsp[0]), cb_int0);
  }
#line 17657 "parser.c" /* yacc.c:1646  */
    break;

  case 1684:
#line 11053 "parser.y" /* yacc.c:1646  */
    {
	const int	num_args = cb_list_length ((yyvsp[-2]));

	if (num_args == 3) {
		cb_error_x ((yyvsp[-2]), _("Cannot specify offset and SYSTEM-OFFSET at the same time."));
	}
	  
	(yyval) = cb_list_add ((yyvsp[-2]), cb_int1);
  }
#line 17671 "parser.c" /* yacc.c:1646  */
    break;

  case 1685:
#line 11067 "parser.y" /* yacc.c:1646  */
    {
	non_const_word = 1;
  }
#line 17679 "parser.c" /* yacc.c:1646  */
    break;

  case 1686:
#line 11075 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17685 "parser.c" /* yacc.c:1646  */
    break;

  case 1687:
#line 11076 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17691 "parser.c" /* yacc.c:1646  */
    break;

  case 1688:
#line 11080 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17697 "parser.c" /* yacc.c:1646  */
    break;

  case 1689:
#line 11081 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17703 "parser.c" /* yacc.c:1646  */
    break;

  case 1690:
#line 11085 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17709 "parser.c" /* yacc.c:1646  */
    break;

  case 1691:
#line 11086 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17715 "parser.c" /* yacc.c:1646  */
    break;

  case 1692:
#line 11091 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17723 "parser.c" /* yacc.c:1646  */
    break;

  case 1693:
#line 11095 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17731 "parser.c" /* yacc.c:1646  */
    break;

  case 1694:
#line 11102 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
  }
#line 17739 "parser.c" /* yacc.c:1646  */
    break;

  case 1695:
#line 11106 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
  }
#line 17747 "parser.c" /* yacc.c:1646  */
    break;

  case 1696:
#line 11113 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17753 "parser.c" /* yacc.c:1646  */
    break;

  case 1697:
#line 11114 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17759 "parser.c" /* yacc.c:1646  */
    break;

  case 1698:
#line 11115 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int2; }
#line 17765 "parser.c" /* yacc.c:1646  */
    break;

  case 1699:
#line 11119 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17771 "parser.c" /* yacc.c:1646  */
    break;

  case 1700:
#line 11120 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_true; }
#line 17777 "parser.c" /* yacc.c:1646  */
    break;

  case 1701:
#line 11124 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int (cb_flag_optional_file); }
#line 17783 "parser.c" /* yacc.c:1646  */
    break;

  case 1702:
#line 11125 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17789 "parser.c" /* yacc.c:1646  */
    break;

  case 1703:
#line 11126 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int0; }
#line 17795 "parser.c" /* yacc.c:1646  */
    break;

  case 1704:
#line 11131 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int0;
  }
#line 17803 "parser.c" /* yacc.c:1646  */
    break;

  case 1705:
#line 11135 "parser.y" /* yacc.c:1646  */
    {
	if ((yyvsp[0])) {
		(yyval) = (yyvsp[0]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
#line 17816 "parser.c" /* yacc.c:1646  */
    break;

  case 1706:
#line 11147 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
#line 17825 "parser.c" /* yacc.c:1646  */
    break;

  case 1707:
#line 11152 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = (yyvsp[0]);
	cobc_cs_check = 0;
  }
#line 17834 "parser.c" /* yacc.c:1646  */
    break;

  case 1708:
#line 11160 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
#line 17842 "parser.c" /* yacc.c:1646  */
    break;

  case 1709:
#line 11164 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
#line 17850 "parser.c" /* yacc.c:1646  */
    break;

  case 1710:
#line 11168 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
#line 17858 "parser.c" /* yacc.c:1646  */
    break;

  case 1711:
#line 11172 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
#line 17866 "parser.c" /* yacc.c:1646  */
    break;

  case 1712:
#line 11176 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
#line 17874 "parser.c" /* yacc.c:1646  */
    break;

  case 1713:
#line 11180 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
#line 17882 "parser.c" /* yacc.c:1646  */
    break;

  case 1714:
#line 11184 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
#line 17890 "parser.c" /* yacc.c:1646  */
    break;

  case 1715:
#line 11188 "parser.y" /* yacc.c:1646  */
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
#line 17898 "parser.c" /* yacc.c:1646  */
    break;

  case 1716:
#line 11194 "parser.y" /* yacc.c:1646  */
    { (yyval) = NULL; }
#line 17904 "parser.c" /* yacc.c:1646  */
    break;

  case 1717:
#line 11195 "parser.y" /* yacc.c:1646  */
    { (yyval) = cb_int1; }
#line 17910 "parser.c" /* yacc.c:1646  */
    break;


#line 17914 "parser.c" /* yacc.c:1646  */
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
#line 11368 "parser.y" /* yacc.c:1906  */

