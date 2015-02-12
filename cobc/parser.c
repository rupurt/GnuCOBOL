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
#define yyerror			cb_error

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
		// print last bit and shift left.
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
	/* Free tree assocated with terminator */
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
	/* Free tree assocated with terminator */
	cobc_parse_free (stmt);
}

static void
terminator_clear (cb_tree stmt, const unsigned int termid)
{
	check_unreached = 0;
	if (term_array[termid]) {
		term_array[termid]--;
	}
	/* Free tree assocated with terminator */
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


/* Line 371 of yacc.c  */
#line 791 "parser.c"

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
     ACCEPT = 258,
     ACCESS = 259,
     ADD = 260,
     ADDRESS = 261,
     ADVANCING = 262,
     AFTER = 263,
     ALL = 264,
     ALLOCATE = 265,
     ALPHABET = 266,
     ALPHABETIC = 267,
     ALPHABETIC_LOWER = 268,
     ALPHABETIC_UPPER = 269,
     ALPHANUMERIC = 270,
     ALPHANUMERIC_EDITED = 271,
     ALSO = 272,
     ALTER = 273,
     ALTERNATE = 274,
     AND = 275,
     ANY = 276,
     ARE = 277,
     AREA = 278,
     ARGUMENT_NUMBER = 279,
     ARGUMENT_VALUE = 280,
     AS = 281,
     ASCENDING = 282,
     ASCII = 283,
     ASSIGN = 284,
     AT = 285,
     ATTRIBUTE = 286,
     AUTO = 287,
     AUTOMATIC = 288,
     AWAY_FROM_ZERO = 289,
     BACKGROUND_COLOR = 290,
     BASED = 291,
     BEFORE = 292,
     BELL = 293,
     BINARY = 294,
     BINARY_C_LONG = 295,
     BINARY_CHAR = 296,
     BINARY_DOUBLE = 297,
     BINARY_LONG = 298,
     BINARY_SHORT = 299,
     BLANK = 300,
     BLINK = 301,
     BLOCK = 302,
     BOTTOM = 303,
     BY = 304,
     BYTE_LENGTH = 305,
     CALL = 306,
     CANCEL = 307,
     CAPACITY = 308,
     CF = 309,
     CH = 310,
     CHAINING = 311,
     CHARACTER = 312,
     CHARACTERS = 313,
     CLASS = 314,
     CLASSIFICATION = 315,
     CLOSE = 316,
     CODE = 317,
     CODE_SET = 318,
     COLLATING = 319,
     COL = 320,
     COLS = 321,
     COLUMN = 322,
     COLUMNS = 323,
     COMMA = 324,
     COMMAND_LINE = 325,
     COMMA_DELIM = 326,
     COMMIT = 327,
     COMMON = 328,
     COMP = 329,
     COMPUTE = 330,
     COMP_1 = 331,
     COMP_2 = 332,
     COMP_3 = 333,
     COMP_4 = 334,
     COMP_5 = 335,
     COMP_6 = 336,
     COMP_X = 337,
     CONCATENATE_FUNC = 338,
     CONDITION = 339,
     CONFIGURATION = 340,
     CONSTANT = 341,
     CONTAINS = 342,
     CONTENT = 343,
     CONTINUE = 344,
     CONTROL = 345,
     CONTROLS = 346,
     CONVERSION = 347,
     CONVERTING = 348,
     COPY = 349,
     CORRESPONDING = 350,
     COUNT = 351,
     CRT = 352,
     CRT_UNDER = 353,
     CURRENCY = 354,
     CURRENT_DATE_FUNC = 355,
     CURSOR = 356,
     CYCLE = 357,
     DATA = 358,
     DATE = 359,
     DAY = 360,
     DAY_OF_WEEK = 361,
     DE = 362,
     DEBUGGING = 363,
     DECIMAL_POINT = 364,
     DECLARATIVES = 365,
     DEFAULT = 366,
     DELETE = 367,
     DELIMITED = 368,
     DELIMITER = 369,
     DEPENDING = 370,
     DESCENDING = 371,
     DETAIL = 372,
     DISC = 373,
     DISK = 374,
     DISPLAY = 375,
     DISPLAY_OF_FUNC = 376,
     DIVIDE = 377,
     DIVISION = 378,
     DOWN = 379,
     DUPLICATES = 380,
     DYNAMIC = 381,
     EBCDIC = 382,
     EC = 383,
     ELSE = 384,
     END = 385,
     END_ACCEPT = 386,
     END_ADD = 387,
     END_CALL = 388,
     END_COMPUTE = 389,
     END_DELETE = 390,
     END_DISPLAY = 391,
     END_DIVIDE = 392,
     END_EVALUATE = 393,
     END_FUNCTION = 394,
     END_IF = 395,
     END_MULTIPLY = 396,
     END_PERFORM = 397,
     END_PROGRAM = 398,
     END_READ = 399,
     END_RETURN = 400,
     END_REWRITE = 401,
     END_SEARCH = 402,
     END_START = 403,
     END_STRING = 404,
     END_SUBTRACT = 405,
     END_UNSTRING = 406,
     END_WRITE = 407,
     ENTRY = 408,
     ENVIRONMENT = 409,
     ENVIRONMENT_NAME = 410,
     ENVIRONMENT_VALUE = 411,
     EOL = 412,
     EOP = 413,
     EOS = 414,
     EQUAL = 415,
     ERASE = 416,
     ERROR = 417,
     ESCAPE = 418,
     EVALUATE = 419,
     EVENT_STATUS = 420,
     EXCEPTION = 421,
     EXCEPTION_CONDITION = 422,
     EXCLUSIVE = 423,
     EXIT = 424,
     EXPONENTIATION = 425,
     EXTEND = 426,
     EXTERNAL = 427,
     FD = 428,
     FILE_CONTROL = 429,
     FILE_ID = 430,
     FILLER = 431,
     FINAL = 432,
     FIRST = 433,
     FLOAT_BINARY_128 = 434,
     FLOAT_BINARY_32 = 435,
     FLOAT_BINARY_64 = 436,
     FLOAT_DECIMAL_16 = 437,
     FLOAT_DECIMAL_34 = 438,
     FLOAT_DECIMAL_7 = 439,
     FLOAT_EXTENDED = 440,
     FLOAT_LONG = 441,
     FLOAT_SHORT = 442,
     FOOTING = 443,
     FOR = 444,
     FOREGROUND_COLOR = 445,
     FOREVER = 446,
     FORMATTED_DATE_FUNC = 447,
     FORMATTED_DATETIME_FUNC = 448,
     FORMATTED_TIME_FUNC = 449,
     FREE = 450,
     FROM = 451,
     FROM_CRT = 452,
     FULL = 453,
     FUNCTION = 454,
     FUNCTION_ID = 455,
     FUNCTION_NAME = 456,
     GENERATE = 457,
     GIVING = 458,
     GLOBAL = 459,
     GO = 460,
     GOBACK = 461,
     GREATER = 462,
     GREATER_OR_EQUAL = 463,
     GROUP = 464,
     HEADING = 465,
     HIGHLIGHT = 466,
     HIGH_VALUE = 467,
     ID = 468,
     IDENTIFICATION = 469,
     IF = 470,
     IGNORE = 471,
     IGNORING = 472,
     IN = 473,
     INDEX = 474,
     INDEXED = 475,
     INDICATE = 476,
     INITIALIZE = 477,
     INITIALIZED = 478,
     INITIATE = 479,
     INPUT = 480,
     INPUT_OUTPUT = 481,
     INSPECT = 482,
     INTO = 483,
     INTRINSIC = 484,
     INVALID = 485,
     INVALID_KEY = 486,
     IS = 487,
     I_O = 488,
     I_O_CONTROL = 489,
     JUSTIFIED = 490,
     KEPT = 491,
     KEY = 492,
     KEYBOARD = 493,
     LABEL = 494,
     LAST = 495,
     LEADING = 496,
     LEFT = 497,
     LEFTLINE = 498,
     LENGTH = 499,
     LENGTH_OF = 500,
     LESS = 501,
     LESS_OR_EQUAL = 502,
     LIMIT = 503,
     LIMITS = 504,
     LINAGE = 505,
     LINAGE_COUNTER = 506,
     LINE = 507,
     LINE_COUNTER = 508,
     LINES = 509,
     LINKAGE = 510,
     LITERAL = 511,
     LOCALE = 512,
     LOCALE_DATE_FUNC = 513,
     LOCALE_TIME_FUNC = 514,
     LOCALE_TIME_FROM_FUNC = 515,
     LOCAL_STORAGE = 516,
     LOCK = 517,
     LOWER = 518,
     LOWER_CASE_FUNC = 519,
     LOWLIGHT = 520,
     LOW_VALUE = 521,
     MANUAL = 522,
     MEMORY = 523,
     MERGE = 524,
     MINUS = 525,
     MNEMONIC_NAME = 526,
     MODE = 527,
     MOVE = 528,
     MULTIPLE = 529,
     MULTIPLY = 530,
     NAME = 531,
     NATIONAL = 532,
     NATIONAL_EDITED = 533,
     NATIONAL_OF_FUNC = 534,
     NATIVE = 535,
     NEAREST_AWAY_FROM_ZERO = 536,
     NEAREST_EVEN = 537,
     NEAREST_TOWARD_ZERO = 538,
     NEGATIVE = 539,
     NEXT = 540,
     NEXT_PAGE = 541,
     NO = 542,
     NO_ECHO = 543,
     NORMAL = 544,
     NOT = 545,
     NOT_END = 546,
     NOT_EOP = 547,
     NOT_EQUAL = 548,
     NOT_EXCEPTION = 549,
     NOT_INVALID_KEY = 550,
     NOT_OVERFLOW = 551,
     NOT_SIZE_ERROR = 552,
     NO_ADVANCING = 553,
     NUMBER = 554,
     NUMBERS = 555,
     NUMERIC = 556,
     NUMERIC_EDITED = 557,
     NUMVALC_FUNC = 558,
     OBJECT_COMPUTER = 559,
     OCCURS = 560,
     OF = 561,
     OFF = 562,
     OMITTED = 563,
     ON = 564,
     ONLY = 565,
     OPEN = 566,
     OPTIONAL = 567,
     OR = 568,
     ORDER = 569,
     ORGANIZATION = 570,
     OTHER = 571,
     OUTPUT = 572,
     OVERLINE = 573,
     PACKED_DECIMAL = 574,
     PADDING = 575,
     PAGE = 576,
     PAGE_COUNTER = 577,
     PARAGRAPH = 578,
     PERFORM = 579,
     PH = 580,
     PF = 581,
     PICTURE = 582,
     PICTURE_SYMBOL = 583,
     PLUS = 584,
     POINTER = 585,
     POSITION = 586,
     POSITIVE = 587,
     PRESENT = 588,
     PREVIOUS = 589,
     PRINTER = 590,
     PRINTING = 591,
     PROCEDURE = 592,
     PROCEDURES = 593,
     PROCEED = 594,
     PROGRAM = 595,
     PROGRAM_ID = 596,
     PROGRAM_NAME = 597,
     PROGRAM_POINTER = 598,
     PROHIBITED = 599,
     PROMPT = 600,
     QUOTE = 601,
     RANDOM = 602,
     RD = 603,
     READ = 604,
     READY_TRACE = 605,
     RECORD = 606,
     RECORDING = 607,
     RECORDS = 608,
     RECURSIVE = 609,
     REDEFINES = 610,
     REEL = 611,
     REFERENCE = 612,
     REFERENCES = 613,
     RELATIVE = 614,
     RELEASE = 615,
     REMAINDER = 616,
     REMOVAL = 617,
     RENAMES = 618,
     REPLACE = 619,
     REPLACING = 620,
     REPORT = 621,
     REPORTING = 622,
     REPORTS = 623,
     REPOSITORY = 624,
     REPO_FUNCTION = 625,
     REQUIRED = 626,
     RESERVE = 627,
     RESET = 628,
     RESET_TRACE = 629,
     RETURN = 630,
     RETURNING = 631,
     REVERSE_FUNC = 632,
     REVERSE_VIDEO = 633,
     REVERSED = 634,
     REWIND = 635,
     REWRITE = 636,
     RF = 637,
     RH = 638,
     RIGHT = 639,
     ROLLBACK = 640,
     ROUNDED = 641,
     RUN = 642,
     SAME = 643,
     SCREEN = 644,
     SCREEN_CONTROL = 645,
     SCROLL = 646,
     SD = 647,
     SEARCH = 648,
     SECTION = 649,
     SECURE = 650,
     SEGMENT_LIMIT = 651,
     SELECT = 652,
     SEMI_COLON = 653,
     SENTENCE = 654,
     SEPARATE = 655,
     SEQUENCE = 656,
     SEQUENTIAL = 657,
     SET = 658,
     SHARING = 659,
     SIGN = 660,
     SIGNED = 661,
     SIGNED_INT = 662,
     SIGNED_LONG = 663,
     SIGNED_SHORT = 664,
     SIZE = 665,
     SIZE_ERROR = 666,
     SORT = 667,
     SORT_MERGE = 668,
     SOURCE = 669,
     SOURCE_COMPUTER = 670,
     SPACE = 671,
     SPECIAL_NAMES = 672,
     STANDARD = 673,
     STANDARD_1 = 674,
     STANDARD_2 = 675,
     START = 676,
     STATIC = 677,
     STATUS = 678,
     STDCALL = 679,
     STEP = 680,
     STOP = 681,
     STRING = 682,
     SUBSTITUTE_FUNC = 683,
     SUBSTITUTE_CASE_FUNC = 684,
     SUBTRACT = 685,
     SUM = 686,
     SUPPRESS = 687,
     SYMBOLIC = 688,
     SYNCHRONIZED = 689,
     SYSTEM_DEFAULT = 690,
     TAB = 691,
     TALLYING = 692,
     TAPE = 693,
     TERMINATE = 694,
     TEST = 695,
     THAN = 696,
     THEN = 697,
     THRU = 698,
     TIME = 699,
     TIMEOUT = 700,
     TIMES = 701,
     TO = 702,
     TOK_AMPER = 703,
     TOK_CLOSE_PAREN = 704,
     TOK_COLON = 705,
     TOK_DIV = 706,
     TOK_DOT = 707,
     TOK_EQUAL = 708,
     TOK_FALSE = 709,
     TOK_FILE = 710,
     TOK_GREATER = 711,
     TOK_INITIAL = 712,
     TOK_LESS = 713,
     TOK_MINUS = 714,
     TOK_MUL = 715,
     TOK_NULL = 716,
     TOK_OVERFLOW = 717,
     TOK_OPEN_PAREN = 718,
     TOK_PLUS = 719,
     TOK_TRUE = 720,
     TOP = 721,
     TOWARD_GREATER = 722,
     TOWARD_LESSER = 723,
     TRAILING = 724,
     TRANSFORM = 725,
     TRIM_FUNC = 726,
     TRUNCATION = 727,
     TYPE = 728,
     UNDERLINE = 729,
     UNIT = 730,
     UNLOCK = 731,
     UNSIGNED = 732,
     UNSIGNED_INT = 733,
     UNSIGNED_LONG = 734,
     UNSIGNED_SHORT = 735,
     UNSTRING = 736,
     UNTIL = 737,
     UP = 738,
     UPDATE = 739,
     UPON = 740,
     UPON_ARGUMENT_NUMBER = 741,
     UPON_COMMAND_LINE = 742,
     UPON_ENVIRONMENT_NAME = 743,
     UPON_ENVIRONMENT_VALUE = 744,
     UPPER = 745,
     UPPER_CASE_FUNC = 746,
     USAGE = 747,
     USE = 748,
     USER = 749,
     USER_DEFAULT = 750,
     USER_FUNCTION_NAME = 751,
     USER_REPO_FUNCTION = 752,
     USING = 753,
     VALUE = 754,
     VARYING = 755,
     WAIT = 756,
     WHEN = 757,
     WHEN_COMPILED_FUNC = 758,
     WITH = 759,
     WORD = 760,
     WORDS = 761,
     WORKING_STORAGE = 762,
     WRITE = 763,
     YYYYDDD = 764,
     YYYYMMDD = 765,
     ZERO = 766,
     SHIFT_PREFER = 767
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
#line 1370 "parser.c"

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
#define YYLAST   8555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  513
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  822
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1924
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2746

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   767

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
     505,   506,   507,   508,   509,   510,   511,   512
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
     324,   326,   327,   329,   333,   338,   339,   345,   347,   349,
     351,   353,   355,   357,   359,   362,   364,   368,   369,   374,
     376,   380,   382,   384,   386,   388,   390,   392,   394,   396,
     399,   400,   403,   407,   409,   412,   416,   418,   421,   423,
     426,   431,   433,   436,   438,   442,   447,   453,   454,   458,
     462,   468,   472,   477,   481,   485,   486,   490,   491,   494,
     495,   498,   499,   502,   503,   510,   514,   515,   518,   520,
     522,   524,   526,   528,   530,   532,   534,   536,   538,   540,
     542,   544,   550,   556,   562,   568,   574,   576,   578,   580,
     582,   583,   587,   588,   590,   592,   594,   596,   597,   599,
     601,   606,   608,   610,   612,   620,   621,   626,   630,   634,
     639,   640,   642,   644,   645,   651,   654,   657,   659,   660,
     665,   671,   674,   678,   680,   682,   686,   688,   691,   696,
     701,   706,   708,   712,   717,   722,   726,   728,   730,   734,
     737,   740,   743,   744,   747,   751,   753,   756,   758,   760,
     766,   767,   769,   771,   773,   774,   781,   783,   786,   789,
     790,   793,   794,   798,   799,   803,   804,   807,   810,   811,
     817,   821,   823,   825,   826,   829,   832,   835,   837,   839,
     841,   843,   845,   847,   849,   851,   853,   859,   860,   862,
     864,   869,   876,   886,   887,   891,   892,   895,   896,   899,
     903,   909,   915,   917,   919,   921,   923,   927,   933,   934,
     937,   939,   941,   943,   948,   951,   954,   959,   963,   966,
     969,   972,   974,   977,   978,   979,   985,   986,   987,   990,
     993,   997,  1000,  1002,  1003,  1008,  1012,  1015,  1016,  1018,
    1020,  1022,  1023,  1026,  1028,  1031,  1034,  1038,  1040,  1042,
    1044,  1046,  1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,
    1089,  1092,  1095,  1096,  1099,  1101,  1103,  1105,  1107,  1109,
    1111,  1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,  1130,
    1134,  1135,  1138,  1141,  1143,  1145,  1149,  1151,  1153,  1155,
    1157,  1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,  1175,
    1177,  1179,  1181,  1183,  1185,  1187,  1189,  1192,  1195,  1198,
    1201,  1204,  1207,  1210,  1213,  1216,  1219,  1221,  1223,  1225,
    1227,  1229,  1231,  1233,  1235,  1237,  1239,  1243,  1247,  1254,
    1255,  1258,  1266,  1275,  1276,  1279,  1280,  1283,  1284,  1288,
    1289,  1293,  1294,  1296,  1298,  1299,  1305,  1307,  1309,  1310,
    1314,  1316,  1319,  1321,  1324,  1327,  1331,  1333,  1334,  1340,
    1342,  1345,  1347,  1351,  1352,  1357,  1360,  1365,  1368,  1371,
    1372,  1373,  1379,  1380,  1381,  1387,  1388,  1389,  1395,  1396,
    1399,  1400,  1407,  1408,  1411,  1414,  1417,  1421,  1423,  1425,
    1428,  1431,  1433,  1435,  1437,  1439,  1442,  1444,  1449,  1451,
    1454,  1459,  1461,  1463,  1464,  1467,  1469,  1471,  1473,  1475,
    1477,  1481,  1486,  1491,  1496,  1500,  1501,  1504,  1505,  1511,
    1512,  1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,  1531,
    1533,  1535,  1537,  1539,  1541,  1543,  1545,  1547,  1549,  1553,
    1555,  1557,  1560,  1563,  1565,  1567,  1569,  1570,  1572,  1574,
    1575,  1577,  1579,  1584,  1586,  1589,  1592,  1594,  1597,  1599,
    1601,  1603,  1608,  1609,  1613,  1616,  1618,  1620,  1624,  1631,
    1634,  1637,  1639,  1642,  1645,  1646,  1649,  1651,  1653,  1656,
    1660,  1663,  1667,  1670,  1673,  1676,  1678,  1683,  1686,  1690,
    1691,  1692,  1698,  1699,  1701,  1704,  1708,  1710,  1711,  1716,
    1720,  1721,  1724,  1727,  1730,  1732,  1734,  1737,  1740,  1742,
    1744,  1746,  1748,  1750,  1752,  1754,  1756,  1758,  1760,  1765,
    1767,  1769,  1775,  1781,  1785,  1789,  1791,  1793,  1795,  1797,
    1799,  1801,  1803,  1805,  1808,  1811,  1814,  1816,  1818,  1820,
    1822,  1823,  1825,  1827,  1828,  1830,  1832,  1836,  1839,  1840,
    1841,  1842,  1852,  1853,  1858,  1859,  1860,  1864,  1865,  1869,
    1871,  1874,  1879,  1880,  1883,  1886,  1887,  1891,  1895,  1900,
    1905,  1909,  1910,  1912,  1913,  1916,  1917,  1918,  1926,  1927,
    1930,  1932,  1934,  1937,  1939,  1941,  1942,  1949,  1950,  1953,
    1956,  1958,  1959,  1961,  1962,  1963,  1967,  1968,  1971,  1974,
    1976,  1978,  1980,  1982,  1984,  1986,  1988,  1990,  1992,  1994,
    1996,  1998,  2000,  2002,  2004,  2006,  2008,  2010,  2012,  2014,
    2016,  2018,  2020,  2022,  2024,  2026,  2028,  2030,  2032,  2034,
    2036,  2038,  2040,  2042,  2044,  2046,  2048,  2050,  2052,  2054,
    2056,  2058,  2060,  2062,  2064,  2066,  2068,  2070,  2072,  2075,
    2078,  2079,  2084,  2091,  2095,  2099,  2104,  2108,  2113,  2117,
    2121,  2126,  2131,  2135,  2140,  2144,  2149,  2155,  2159,  2164,
    2168,  2172,  2174,  2176,  2178,  2181,  2182,  2184,  2188,  2192,
    2195,  2198,  2201,  2205,  2209,  2213,  2214,  2216,  2217,  2221,
    2222,  2225,  2227,  2230,  2232,  2234,  2236,  2238,  2240,  2242,
    2244,  2246,  2248,  2250,  2252,  2254,  2259,  2261,  2263,  2265,
    2267,  2269,  2272,  2274,  2276,  2280,  2284,  2288,  2292,  2296,
    2298,  2300,  2301,  2303,  2304,  2309,  2314,  2320,  2327,  2328,
    2331,  2332,  2334,  2335,  2339,  2343,  2348,  2349,  2352,  2353,
    2357,  2359,  2362,  2367,  2368,  2371,  2372,  2377,  2384,  2385,
    2387,  2389,  2391,  2392,  2393,  2397,  2399,  2402,  2405,  2409,
    2410,  2413,  2416,  2419,  2420,  2424,  2427,  2432,  2434,  2436,
    2438,  2440,  2441,  2444,  2445,  2448,  2449,  2451,  2452,  2456,
    2458,  2461,  2462,  2466,  2469,  2473,  2474,  2476,  2480,  2484,
    2487,  2488,  2493,  2498,  2499,  2501,  2503,  2505,  2506,  2511,
    2515,  2518,  2520,  2523,  2524,  2526,  2527,  2532,  2536,  2540,
    2544,  2548,  2553,  2556,  2561,  2563,  2564,  2568,  2574,  2575,
    2578,  2581,  2584,  2587,  2588,  2591,  2593,  2595,  2596,  2599,
    2600,  2602,  2604,  2607,  2609,  2612,  2615,  2617,  2619,  2622,
    2625,  2627,  2629,  2631,  2633,  2635,  2639,  2643,  2647,  2651,
    2652,  2654,  2655,  2660,  2665,  2672,  2679,  2688,  2697,  2698,
    2700,  2701,  2705,  2708,  2709,  2714,  2717,  2719,  2723,  2725,
    2727,  2729,  2732,  2734,  2736,  2739,  2742,  2746,  2749,  2753,
    2755,  2759,  2762,  2764,  2766,  2768,  2769,  2772,  2773,  2775,
    2776,  2780,  2781,  2784,  2786,  2789,  2791,  2793,  2795,  2796,
    2799,  2800,  2804,  2806,  2807,  2811,  2813,  2814,  2818,  2822,
    2823,  2827,  2830,  2831,  2838,  2842,  2845,  2847,  2848,  2850,
    2851,  2855,  2861,  2862,  2865,  2866,  2870,  2874,  2875,  2878,
    2880,  2883,  2888,  2890,  2892,  2894,  2896,  2898,  2900,  2902,
    2903,  2907,  2908,  2912,  2914,  2917,  2918,  2922,  2925,  2927,
    2929,  2931,  2934,  2936,  2938,  2940,  2941,  2945,  2948,  2954,
    2956,  2959,  2962,  2965,  2967,  2969,  2971,  2974,  2976,  2979,
    2984,  2987,  2988,  2990,  2992,  2994,  2996,  3001,  3002,  3005,
    3009,  3013,  3014,  3018,  3019,  3023,  3027,  3032,  3033,  3038,
    3043,  3050,  3051,  3053,  3054,  3058,  3063,  3069,  3071,  3073,
    3075,  3077,  3078,  3082,  3083,  3087,  3090,  3092,  3093,  3097,
    3100,  3101,  3106,  3109,  3110,  3112,  3114,  3116,  3118,  3122,
    3123,  3126,  3128,  3132,  3136,  3137,  3141,  3143,  3145,  3147,
    3151,  3159,  3160,  3165,  3173,  3174,  3177,  3178,  3181,  3184,
    3188,  3192,  3196,  3199,  3200,  3204,  3206,  3208,  3209,  3211,
    3213,  3214,  3218,  3221,  3223,  3224,  3229,  3234,  3235,  3237,
    3238,  3243,  3248,  3249,  3252,  3256,  3257,  3259,  3261,  3262,
    3267,  3272,  3279,  3280,  3283,  3284,  3287,  3289,  3292,  3296,
    3297,  3299,  3300,  3304,  3306,  3308,  3310,  3312,  3314,  3316,
    3318,  3320,  3322,  3324,  3329,  3333,  3335,  3338,  3341,  3344,
    3347,  3350,  3353,  3356,  3359,  3362,  3367,  3371,  3376,  3378,
    3381,  3385,  3387,  3390,  3394,  3398,  3399,  3403,  3404,  3412,
    3413,  3419,  3420,  3423,  3424,  3427,  3428,  3432,  3433,  3436,
    3441,  3442,  3445,  3450,  3451,  3456,  3461,  3462,  3466,  3467,
    3472,  3474,  3476,  3478,  3481,  3484,  3487,  3490,  3492,  3494,
    3497,  3499,  3500,  3502,  3503,  3508,  3511,  3512,  3515,  3520,
    3525,  3526,  3528,  3530,  3532,  3534,  3536,  3537,  3542,  3548,
    3550,  3553,  3555,  3559,  3563,  3564,  3569,  3570,  3572,  3573,
    3578,  3583,  3590,  3597,  3598,  3600,  3603,  3604,  3606,  3607,
    3611,  3613,  3616,  3617,  3621,  3627,  3628,  3632,  3635,  3636,
    3638,  3640,  3641,  3646,  3653,  3654,  3658,  3660,  3664,  3667,
    3670,  3673,  3677,  3678,  3682,  3683,  3687,  3688,  3692,  3693,
    3695,  3696,  3700,  3702,  3704,  3706,  3708,  3710,  3718,  3719,
    3721,  3723,  3725,  3727,  3729,  3731,  3736,  3738,  3741,  3743,
    3746,  3750,  3751,  3753,  3756,  3758,  3762,  3764,  3766,  3771,
    3773,  3775,  3777,  3778,  3783,  3789,  3790,  3793,  3794,  3799,
    3803,  3807,  3809,  3811,  3813,  3815,  3816,  3818,  3821,  3822,
    3825,  3826,  3829,  3832,  3833,  3836,  3837,  3840,  3843,  3844,
    3847,  3848,  3851,  3854,  3855,  3858,  3859,  3862,  3865,  3867,
    3870,  3872,  3874,  3877,  3880,  3883,  3885,  3887,  3890,  3893,
    3896,  3897,  3900,  3901,  3904,  3905,  3908,  3910,  3912,  3913,
    3916,  3918,  3921,  3924,  3926,  3928,  3930,  3932,  3934,  3936,
    3938,  3940,  3942,  3944,  3946,  3948,  3950,  3952,  3954,  3956,
    3958,  3960,  3962,  3964,  3966,  3968,  3970,  3972,  3974,  3977,
    3979,  3981,  3983,  3985,  3987,  3989,  3991,  3995,  3996,  3998,
    4000,  4004,  4008,  4010,  4014,  4018,  4020,  4024,  4026,  4029,
    4032,  4034,  4038,  4040,  4042,  4046,  4048,  4052,  4054,  4058,
    4060,  4063,  4066,  4068,  4070,  4072,  4075,  4077,  4079,  4081,
    4084,  4086,  4087,  4090,  4092,  4094,  4096,  4100,  4102,  4104,
    4107,  4109,  4111,  4113,  4116,  4118,  4120,  4122,  4124,  4126,
    4128,  4131,  4133,  4135,  4139,  4141,  4144,  4146,  4148,  4150,
    4152,  4155,  4158,  4161,  4166,  4170,  4172,  4174,  4177,  4179,
    4181,  4183,  4185,  4187,  4189,  4191,  4194,  4197,  4200,  4202,
    4204,  4206,  4208,  4210,  4212,  4214,  4216,  4218,  4220,  4222,
    4224,  4226,  4228,  4230,  4232,  4234,  4236,  4238,  4240,  4242,
    4244,  4246,  4248,  4250,  4252,  4255,  4257,  4261,  4264,  4267,
    4269,  4271,  4273,  4277,  4280,  4283,  4285,  4287,  4291,  4295,
    4300,  4306,  4308,  4310,  4312,  4314,  4316,  4318,  4320,  4322,
    4324,  4326,  4328,  4330,  4333,  4335,  4339,  4341,  4343,  4345,
    4347,  4349,  4351,  4353,  4356,  4362,  4368,  4374,  4379,  4385,
    4391,  4397,  4400,  4403,  4405,  4407,  4409,  4411,  4413,  4415,
    4417,  4419,  4421,  4423,  4425,  4426,  4431,  4437,  4438,  4442,
    4445,  4447,  4451,  4455,  4457,  4461,  4463,  4467,  4468,  4469,
    4471,  4472,  4474,  4475,  4477,  4478,  4481,  4482,  4485,  4486,
    4488,  4490,  4491,  4493,  4494,  4496,  4499,  4500,  4503,  4504,
    4508,  4510,  4512,  4514,  4516,  4518,  4520,  4522,  4524,  4525,
    4528,  4530,  4532,  4534,  4536,  4538,  4540,  4542,  4544,  4546,
    4548,  4550,  4552,  4554,  4556,  4558,  4560,  4562,  4564,  4566,
    4568,  4570,  4572,  4574,  4576,  4578,  4580,  4582,  4584,  4586,
    4588,  4590,  4592,  4594,  4596,  4598,  4600,  4602,  4604,  4606,
    4608,  4610,  4612,  4614,  4616,  4618,  4620,  4622,  4624,  4626,
    4628,  4630,  4632,  4634,  4636,  4638,  4640,  4642,  4644,  4646,
    4648,  4650,  4652,  4654,  4656,  4658,  4660,  4662,  4664,  4666,
    4668,  4669,  4671,  4672,  4674,  4675,  4677,  4678,  4680,  4681,
    4683,  4684,  4686,  4687,  4689,  4690,  4692,  4693,  4695,  4696,
    4698,  4699,  4701,  4702,  4704,  4705,  4707,  4708,  4710,  4711,
    4713,  4714,  4716,  4717,  4719,  4722,  4723,  4725,  4726,  4728,
    4729,  4731,  4732,  4734,  4735,  4737,  4739,  4740,  4742,  4743,
    4745,  4747,  4748,  4750,  4752,  4753,  4756,  4759,  4760,  4762,
    4763,  4765,  4766,  4768,  4769,  4771,  4773,  4774,  4776,  4777,
    4779,  4780,  4783,  4785,  4787,  4788,  4790,  4791,  4793,  4794,
    4796,  4797,  4799,  4800,  4802,  4803,  4805,  4806,  4808,  4809,
    4811,  4814,  4815,  4817,  4818,  4820,  4821,  4823,  4824,  4826,
    4827,  4829,  4830,  4832,  4833,  4835,  4836,  4838,  4840,  4841,
    4843,  4844,  4848,  4849,  4851,  4854,  4856,  4858,  4860,  4862,
    4864,  4866,  4868,  4870,  4872,  4874,  4876,  4878,  4880,  4882,
    4884,  4886,  4888,  4890,  4892,  4894,  4896,  4899,  4902,  4904,
    4906,  4908,  4910,  4912,  4914,  4917,  4919,  4923,  4926,  4928,
    4930,  4932,  4935,  4937,  4940,  4942,  4945,  4947,  4950,  4952,
    4955,  4957,  4960,  4962,  4965
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     514,     0,    -1,    -1,   515,   516,    -1,   519,    -1,   517,
      -1,   518,    -1,   517,   518,    -1,   521,    -1,   523,    -1,
      -1,   520,   529,    -1,   533,   529,   524,   525,    -1,   533,
     529,   524,   526,    -1,   535,   529,   527,    -1,    -1,   522,
      -1,   524,   522,    -1,    -1,   526,    -1,   143,   536,   452,
      -1,    -1,   528,    -1,   139,   536,   452,    -1,    -1,    -1,
      -1,   541,   542,   543,   605,   606,   608,   607,   641,   530,
     651,   652,   653,   531,   682,   738,   740,   742,   793,   532,
     807,    -1,    -1,   341,   452,   536,   537,   534,   538,   452,
      -1,   200,   452,   536,   537,   452,    -1,   342,    -1,   256,
      -1,    -1,    26,   256,    -1,    -1,  1278,   539,  1293,    -1,
      73,    -1,    73,   540,    -1,   540,    -1,   172,    -1,   457,
      -1,   354,    -1,    -1,   154,   123,   452,    -1,    -1,    85,
     394,   452,    -1,    -1,   543,   544,    -1,   545,    -1,   549,
      -1,   568,    -1,   569,    -1,   560,    -1,    -1,   415,   452,
     546,   547,    -1,    -1,   559,   548,   452,    -1,    -1,  1309,
     108,   272,    -1,    -1,   304,   452,   550,   551,    -1,    -1,
     559,   452,    -1,   559,   552,   452,    -1,   552,   452,    -1,
     553,    -1,   552,   553,    -1,   554,    -1,   555,    -1,   556,
      -1,   557,    -1,   268,   410,  1278,  1228,  1320,    -1,  1326,
    1278,  1195,    -1,   396,  1278,  1228,    -1,  1266,    60,  1278,
     558,    -1,  1195,    -1,   257,    -1,   495,    -1,   435,    -1,
     505,    -1,   559,   505,    -1,    -1,   369,   452,   561,   562,
      -1,    -1,   563,   452,    -1,   563,     1,   452,    -1,   564,
      -1,   563,   564,    -1,   199,     9,   229,    -1,   199,   565,
     566,    -1,   199,   567,   229,    -1,   370,    -1,   497,    -1,
      -1,    26,   256,    -1,   370,    -1,   567,   370,    -1,   417,
     452,    -1,   570,   452,    -1,   570,     1,   452,    -1,   571,
      -1,   570,   571,    -1,   572,    -1,   577,    -1,   586,    -1,
     596,    -1,   593,    -1,   597,    -1,   599,    -1,   600,    -1,
     601,    -1,   602,    -1,   603,    -1,   604,    -1,    -1,   505,
     573,   574,    -1,  1278,    97,    -1,  1228,  1278,  1199,    -1,
    1278,  1199,   575,    -1,   576,    -1,    -1,   576,    -1,  1044,
    1290,  1199,    -1,   576,  1044,  1290,  1199,    -1,    -1,    11,
    1199,   578,  1278,   579,    -1,   280,    -1,   419,    -1,   420,
      -1,   127,    -1,    28,    -1,   580,    -1,   581,    -1,   580,
     581,    -1,   584,    -1,   584,   443,   584,    -1,    -1,   584,
      17,   582,   583,    -1,   584,    -1,   583,    17,   584,    -1,
     256,    -1,   416,    -1,   511,    -1,   346,    -1,   212,    -1,
     266,    -1,   416,    -1,   511,    -1,   588,   587,    -1,    -1,
     218,   505,    -1,   433,  1267,   589,    -1,   590,    -1,   589,
     590,    -1,   591,  1279,   592,    -1,  1200,    -1,   591,  1200,
      -1,  1229,    -1,   592,  1229,    -1,    59,  1199,  1278,   594,
      -1,   595,    -1,   594,   595,    -1,  1231,    -1,  1231,   443,
    1231,    -1,   257,  1199,  1278,   256,    -1,    99,  1296,  1278,
     256,   598,    -1,    -1,  1309,   328,   256,    -1,   109,  1278,
      69,    -1,   301,   405,  1278,   469,   400,    -1,   101,  1278,
    1194,    -1,    97,   423,  1278,  1194,    -1,   390,  1278,  1194,
      -1,   165,  1278,  1194,    -1,    -1,   226,   394,   452,    -1,
      -1,   174,   452,    -1,    -1,   234,   452,    -1,    -1,   608,
     609,    -1,    -1,   397,  1252,  1199,   610,   611,   452,    -1,
     397,     1,   452,    -1,    -1,   611,   612,    -1,   613,    -1,
     619,    -1,   621,    -1,   623,    -1,   624,    -1,   626,    -1,
     630,    -1,   632,    -1,   633,    -1,   634,    -1,   636,    -1,
     637,    -1,   639,    -1,    29,  1306,   616,   615,   617,    -1,
      29,  1306,   616,   614,   618,    -1,    29,  1306,   616,   120,
     618,    -1,    29,  1306,   616,   238,   618,    -1,    29,  1306,
     616,   335,   618,    -1,   118,    -1,   119,    -1,   438,    -1,
     347,    -1,    -1,   252,     7,  1270,    -1,    -1,   172,    -1,
     126,    -1,   256,    -1,  1225,    -1,    -1,   256,    -1,  1225,
      -1,     4,  1285,  1278,   620,    -1,   402,    -1,   126,    -1,
     347,    -1,    19,  1294,  1280,  1278,   635,  1246,   622,    -1,
      -1,   432,   502,     9,  1234,    -1,   432,   502,   585,    -1,
    1310,  1278,   505,    -1,   625,   423,  1278,  1194,    -1,    -1,
     455,    -1,   412,    -1,    -1,   627,   262,  1285,  1278,   628,
      -1,   267,   629,    -1,    33,   629,    -1,   168,    -1,    -1,
     504,   262,   309,  1319,    -1,   504,   262,   309,   274,  1319,
      -1,   504,   385,    -1,   315,  1278,   631,    -1,   631,    -1,
     220,    -1,  1294,  1264,   402,    -1,   359,    -1,   252,   402,
      -1,   320,  1266,  1278,  1198,    -1,   351,   114,  1278,   419,
      -1,   351,  1280,  1278,   635,    -1,  1194,    -1,  1194,   453,
    1193,    -1,  1194,   414,  1278,  1193,    -1,   359,  1280,  1278,
    1194,    -1,   372,   638,  1261,    -1,   287,    -1,  1228,    -1,
     404,  1309,   640,    -1,     9,  1291,    -1,   287,  1291,    -1,
     349,   310,    -1,    -1,   642,   452,    -1,   642,     1,   452,
      -1,   643,    -1,   642,   643,    -1,   644,    -1,   646,    -1,
     388,   645,  1261,  1271,  1184,    -1,    -1,   351,    -1,   412,
      -1,   413,    -1,    -1,   274,   647,  1270,  1302,  1268,   648,
      -1,   649,    -1,   648,   649,    -1,  1185,   650,    -1,    -1,
     331,  1228,    -1,    -1,   103,   123,   452,    -1,    -1,   455,
     394,   452,    -1,    -1,   653,   654,    -1,   655,   684,    -1,
      -1,   657,  1185,   656,   658,   452,    -1,   657,     1,   452,
      -1,   173,    -1,   392,    -1,    -1,   658,   659,    -1,  1278,
     172,    -1,  1278,   204,    -1,   660,    -1,   662,    -1,   666,
      -1,   667,    -1,   670,    -1,   671,    -1,   677,    -1,   678,
      -1,   679,    -1,    47,  1268,  1228,   665,   661,    -1,    -1,
     353,    -1,    58,    -1,   351,  1268,  1228,  1267,    -1,   351,
    1268,  1228,   447,  1228,  1267,    -1,   351,  1278,   500,  1273,
    1299,   664,   665,  1267,   663,    -1,    -1,   115,  1289,  1194,
      -1,    -1,  1272,  1228,    -1,    -1,   447,  1228,    -1,   239,
    1321,  1317,    -1,   499,   306,   668,  1278,   669,    -1,   499,
     306,   175,  1278,   669,    -1,   505,    -1,   213,    -1,   256,
      -1,  1225,    -1,   103,  1321,  1196,    -1,   250,  1278,  1198,
    1284,   672,    -1,    -1,   672,   673,    -1,   674,    -1,   675,
      -1,   676,    -1,  1309,   188,  1263,  1198,    -1,   466,  1198,
      -1,    48,  1198,    -1,   352,  1285,  1278,   505,    -1,    63,
    1278,   505,    -1,   680,   681,    -1,   366,  1278,    -1,   368,
    1260,    -1,  1199,    -1,   681,  1199,    -1,    -1,    -1,   507,
     394,   452,   683,   684,    -1,    -1,    -1,   685,   686,    -1,
     687,   452,    -1,   686,   687,   452,    -1,   686,   452,    -1,
     699,    -1,    -1,   689,   690,   688,   701,    -1,   689,     1,
     452,    -1,  1244,   505,    -1,    -1,   176,    -1,   505,    -1,
     505,    -1,    -1,  1278,   204,    -1,  1232,    -1,   245,   694,
      -1,   244,   694,    -1,    50,  1288,   694,    -1,  1222,    -1,
      41,    -1,    44,    -1,    43,    -1,    42,    -1,    40,    -1,
     698,    -1,   710,    -1,   711,    -1,   695,    -1,   696,    -1,
     697,    -1,     1,   452,    -1,   180,    -1,   184,    -1,   181,
      -1,   182,    -1,   179,    -1,   183,    -1,   185,    -1,   330,
      -1,   343,    -1,   689,   691,    86,   692,   700,    -1,  1262,
     693,    -1,   196,   505,    -1,    -1,   701,   702,    -1,   703,
      -1,   704,    -1,   706,    -1,   707,    -1,   708,    -1,   712,
      -1,   715,    -1,   727,    -1,   728,    -1,   729,    -1,   730,
      -1,   731,    -1,   736,    -1,   737,    -1,   355,  1222,    -1,
    1278,   172,   705,    -1,    -1,    26,   256,    -1,  1278,   204,
      -1,   327,    -1,   709,    -1,   492,  1278,   709,    -1,    39,
      -1,    74,    -1,   710,    -1,   711,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,   120,    -1,   219,
      -1,   319,    -1,   330,    -1,   343,    -1,   409,    -1,   407,
      -1,   408,    -1,   480,    -1,   478,    -1,   479,    -1,    41,
    1297,    -1,    41,   477,    -1,    44,  1297,    -1,    44,   477,
      -1,    43,  1297,    -1,    43,   477,    -1,    42,  1297,    -1,
      42,   477,    -1,    40,  1297,    -1,    40,   477,    -1,   180,
      -1,   181,    -1,   179,    -1,   182,    -1,   183,    -1,   277,
      -1,    76,    -1,   187,    -1,    77,    -1,   186,    -1,  1298,
     241,  1256,    -1,  1298,   469,  1256,    -1,   305,  1228,   716,
    1304,   718,   714,    -1,    -1,   425,  1228,    -1,   305,  1228,
     716,  1304,   718,   721,   724,    -1,   305,   126,   719,   717,
     716,   720,   721,   724,    -1,    -1,   447,  1228,    -1,    -1,
     196,  1228,    -1,    -1,   115,  1289,  1194,    -1,    -1,    53,
    1273,   505,    -1,    -1,   223,    -1,   722,    -1,    -1,   722,
     723,  1280,  1278,  1193,    -1,    27,    -1,   116,    -1,    -1,
     220,  1265,   725,    -1,   726,    -1,   725,   726,    -1,   505,
      -1,   235,  1295,    -1,   434,  1281,    -1,    45,  1307,   511,
      -1,    36,    -1,    -1,   499,  1279,   733,   732,   735,    -1,
     734,    -1,   733,   734,    -1,  1232,    -1,  1232,   443,  1232,
      -1,    -1,  1308,   454,  1278,  1232,    -1,   363,  1225,    -1,
     363,  1225,   443,  1225,    -1,    21,   244,    -1,    21,   301,
      -1,    -1,    -1,   261,   394,   452,   739,   684,    -1,    -1,
      -1,   255,   394,   452,   741,   684,    -1,    -1,    -1,   366,
     394,   452,   743,   744,    -1,    -1,   744,   745,    -1,    -1,
     348,  1186,   746,   747,   452,   764,    -1,    -1,   747,   748,
      -1,     1,   452,    -1,  1278,   204,    -1,    62,  1278,  1212,
      -1,   749,    -1,   754,    -1,  1334,   750,    -1,   751,   752,
      -1,   751,    -1,   752,    -1,   177,    -1,   753,    -1,   752,
     753,    -1,  1221,    -1,   321,  1283,   755,   757,    -1,   756,
      -1,   756,  1318,    -1,   756,  1318,   756,  1312,    -1,  1230,
      -1,  1221,    -1,    -1,   757,   758,    -1,   759,    -1,   760,
      -1,   761,    -1,   762,    -1,   763,    -1,   210,  1278,   756,
      -1,   178,  1327,  1278,   756,    -1,   240,  1328,  1278,   756,
      -1,   240,  1327,  1278,   756,    -1,   188,  1278,   756,    -1,
      -1,   764,   765,    -1,    -1,   689,   690,   766,   767,   452,
      -1,    -1,   767,   768,    -1,   769,    -1,   773,    -1,   781,
      -1,   786,    -1,   707,    -1,   792,    -1,   712,    -1,   727,
      -1,   787,    -1,   729,    -1,   790,    -1,   776,    -1,   731,
      -1,   779,    -1,   791,    -1,   713,    -1,   780,    -1,   473,
    1278,   770,    -1,  1332,    -1,  1330,    -1,  1328,   771,    -1,
    1329,   772,    -1,  1327,    -1,  1331,    -1,  1333,    -1,    -1,
    1221,    -1,   177,    -1,    -1,  1221,    -1,   177,    -1,   285,
     209,  1278,   774,    -1,  1228,    -1,   329,  1228,    -1,   464,
    1228,    -1,   775,    -1,   285,   321,    -1,   286,    -1,   321,
      -1,   285,    -1,   431,  1288,  1205,   777,    -1,    -1,   373,
    1289,   778,    -1,   485,  1221,    -1,  1221,    -1,   177,    -1,
     333,   502,  1161,    -1,   500,  1221,   196,  1207,    49,  1207,
      -1,   782,   783,    -1,   252,   784,    -1,   785,    -1,   329,
    1230,    -1,   464,  1230,    -1,    -1,   299,   232,    -1,   299,
      -1,  1230,    -1,   285,   321,    -1,   309,   285,   321,    -1,
     788,   789,    -1,  1311,  1287,  1279,    -1,  1312,  1260,    -1,
     329,  1230,    -1,   464,  1230,    -1,  1230,    -1,   414,  1278,
    1207,  1253,    -1,   209,  1275,    -1,   492,  1278,   120,    -1,
      -1,    -1,   389,   394,   452,   794,   795,    -1,    -1,   796,
      -1,   797,   452,    -1,   796,   797,   452,    -1,   699,    -1,
      -1,   689,   690,   798,   799,    -1,   689,     1,   452,    -1,
      -1,   799,   800,    -1,    45,   252,    -1,    45,   389,    -1,
      38,    -1,    46,    -1,   161,   157,    -1,   161,   159,    -1,
     211,    -1,   265,    -1,   378,    -1,   474,    -1,   318,    -1,
     243,    -1,    32,    -1,   395,    -1,   371,    -1,   198,    -1,
     345,    57,  1278,  1212,    -1,   345,    -1,   457,    -1,   252,
    1286,  1278,   803,  1214,    -1,  1311,  1286,  1278,   804,  1214,
      -1,   190,  1278,  1214,    -1,    35,  1278,  1214,    -1,   708,
      -1,   729,    -1,   806,    -1,   727,    -1,   712,    -1,   731,
      -1,   707,    -1,   805,    -1,   498,  1221,    -1,   196,  1217,
      -1,   447,  1221,    -1,   329,    -1,   464,    -1,   270,    -1,
     459,    -1,    -1,   801,    -1,   802,    -1,    -1,   801,    -1,
     802,    -1,   305,  1228,  1304,    -1,  1278,   204,    -1,    -1,
      -1,    -1,   337,   123,   811,   819,   452,   808,   820,   809,
     822,    -1,    -1,   810,   833,   452,   822,    -1,    -1,    -1,
     498,   812,   814,    -1,    -1,    56,   813,   814,    -1,   815,
      -1,   814,   815,    -1,   816,   817,   818,   505,    -1,    -1,
    1265,   357,    -1,  1265,   499,    -1,    -1,   410,  1278,    32,
      -1,   410,  1278,   111,    -1,   477,   410,  1278,    32,    -1,
     477,   410,  1278,  1228,    -1,   410,  1278,  1228,    -1,    -1,
     312,    -1,    -1,   376,   505,    -1,    -1,    -1,   110,   452,
     821,   822,   130,   110,   452,    -1,    -1,   822,   823,    -1,
     824,    -1,   827,    -1,   833,   452,    -1,   828,    -1,   452,
      -1,    -1,   505,   394,   829,   452,   825,   826,    -1,    -1,
    1115,   452,    -1,   505,   452,    -1,   505,    -1,    -1,  1228,
      -1,    -1,    -1,   831,   832,   833,    -1,    -1,   834,   835,
      -1,   833,   835,    -1,   836,    -1,   852,    -1,   857,    -1,
     861,    -1,   866,    -1,   881,    -1,   884,    -1,   892,    -1,
     888,    -1,   893,    -1,   894,    -1,   899,    -1,   913,    -1,
     917,    -1,   920,    -1,   934,    -1,   938,    -1,   941,    -1,
     944,    -1,   948,    -1,   949,    -1,   953,    -1,   963,    -1,
     966,    -1,   983,    -1,   985,    -1,   988,    -1,   992,    -1,
     998,    -1,  1010,    -1,  1018,    -1,  1019,    -1,  1022,    -1,
    1023,    -1,  1027,    -1,  1032,    -1,  1033,    -1,  1041,    -1,
    1056,    -1,  1066,    -1,  1075,    -1,  1080,    -1,  1087,    -1,
    1091,    -1,  1093,    -1,  1096,    -1,  1099,    -1,  1103,    -1,
    1130,    -1,   285,   399,    -1,     1,  1257,    -1,    -1,     3,
     837,   838,   851,    -1,   839,   841,   845,   846,   847,  1138,
      -1,  1221,   196,   840,    -1,  1221,   196,  1312,    -1,  1221,
     196,   104,   510,    -1,  1221,   196,   104,    -1,  1221,   196,
     105,   509,    -1,  1221,   196,   105,    -1,  1221,   196,   106,
      -1,  1221,   196,   163,   237,    -1,  1221,   196,   166,   423,
      -1,  1221,   196,   444,    -1,  1221,   196,   494,   276,    -1,
    1221,   196,    70,    -1,  1221,   196,   156,  1138,    -1,  1221,
     196,   154,  1210,  1138,    -1,  1221,   196,    24,    -1,  1221,
     196,    25,  1138,    -1,  1221,   196,  1188,    -1,  1221,   196,
     505,    -1,  1221,    -1,   308,    -1,   254,    -1,   252,   299,
      -1,    -1,   842,    -1,  1263,   843,   844,    -1,  1263,   844,
     843,    -1,  1263,   843,    -1,  1263,   844,    -1,    30,  1210,
      -1,   252,  1286,  1214,    -1,  1311,  1286,  1214,    -1,   331,
    1286,  1214,    -1,    -1,   197,    -1,    -1,   272,  1278,    47,
      -1,    -1,   504,   848,    -1,   849,    -1,   848,   849,    -1,
      32,    -1,   436,    -1,    38,    -1,    46,    -1,    92,    -1,
     198,    -1,   211,    -1,   243,    -1,   263,    -1,   265,    -1,
     288,    -1,   318,    -1,   345,    57,  1278,  1212,    -1,   345,
      -1,   371,    -1,   378,    -1,   395,    -1,   474,    -1,   287,
     850,    -1,   850,    -1,   490,    -1,   190,  1278,  1214,    -1,
      35,  1278,  1214,    -1,   391,   483,  1160,    -1,   391,   124,
    1160,    -1,   445,  1259,  1215,    -1,   484,    -1,   111,    -1,
      -1,   131,    -1,    -1,     5,   853,   854,   856,    -1,  1203,
     447,  1180,  1144,    -1,  1203,   855,   203,  1180,  1144,    -1,
      95,  1221,   447,  1221,  1253,  1144,    -1,    -1,   447,  1204,
      -1,    -1,   132,    -1,    -1,    10,   858,   859,    -1,  1221,
    1247,   860,    -1,  1174,    58,  1248,   860,    -1,    -1,   376,
    1202,    -1,    -1,    18,   862,   863,    -1,   864,    -1,   863,
     864,    -1,  1190,   447,   865,  1190,    -1,    -1,   339,   447,
      -1,    -1,    51,   867,   868,   880,    -1,   869,  1213,   870,
     875,   878,   879,    -1,    -1,   422,    -1,   424,    -1,   271,
      -1,    -1,    -1,   498,   871,   872,    -1,   873,    -1,   872,
     873,    -1,   874,   308,    -1,   874,   817,  1204,    -1,    -1,
    1265,   357,    -1,  1265,    88,    -1,  1265,   499,    -1,    -1,
     876,  1277,  1221,    -1,   876,   877,    -1,   876,     6,  1288,
    1221,    -1,   376,    -1,   203,    -1,   461,    -1,   308,    -1,
      -1,  1315,   830,    -1,    -1,   294,   830,    -1,    -1,   133,
      -1,    -1,    52,   882,   883,    -1,  1212,    -1,   883,  1212,
      -1,    -1,    61,   885,   886,    -1,  1185,   887,    -1,   886,
    1185,   887,    -1,    -1,  1322,    -1,  1322,  1271,   362,    -1,
    1309,   287,   380,    -1,  1309,   262,    -1,    -1,    75,   889,
     890,   891,    -1,  1180,  1313,  1174,  1144,    -1,    -1,   134,
      -1,    72,    -1,    89,    -1,    -1,   112,   895,   896,   898,
      -1,  1185,  1294,  1157,    -1,   455,   897,    -1,  1185,    -1,
     897,  1185,    -1,    -1,   135,    -1,    -1,   120,   900,   901,
     912,    -1,  1212,   488,  1141,    -1,  1212,   489,  1141,    -1,
    1212,   486,  1141,    -1,  1212,   487,  1141,    -1,  1203,   905,
     909,  1141,    -1,   902,  1141,    -1,  1204,   504,   910,  1141,
      -1,   904,    -1,    -1,   902,   903,   904,    -1,  1204,   842,
     906,   846,   908,    -1,    -1,   485,  1188,    -1,   485,   505,
      -1,   485,   335,    -1,   485,    97,    -1,    -1,   485,   907,
      -1,    97,    -1,    98,    -1,    -1,   504,   910,    -1,    -1,
     298,    -1,   911,    -1,   910,   911,    -1,    38,    -1,    45,
     252,    -1,    45,   389,    -1,    46,    -1,    92,    -1,   161,
     157,    -1,   161,   159,    -1,   211,    -1,   265,    -1,   318,
      -1,   378,    -1,   474,    -1,   190,  1278,  1214,    -1,    35,
    1278,  1214,    -1,   391,   483,  1160,    -1,   391,   124,  1160,
      -1,    -1,   136,    -1,    -1,   122,   914,   915,   916,    -1,
    1204,   228,  1180,  1144,    -1,  1204,   228,  1204,   203,  1180,
    1144,    -1,  1204,    49,  1204,   203,  1180,  1144,    -1,  1204,
     228,  1204,   203,  1181,   361,  1181,  1144,    -1,  1204,    49,
    1204,   203,  1181,   361,  1181,  1144,    -1,    -1,   137,    -1,
      -1,   153,   918,   919,    -1,   256,   870,    -1,    -1,   164,
     921,   922,   933,    -1,   923,   925,    -1,   924,    -1,   923,
      17,   924,    -1,  1162,    -1,   465,    -1,   454,    -1,   926,
     928,    -1,   926,    -1,   927,    -1,   926,   927,    -1,   929,
     830,    -1,   502,   316,   830,    -1,   502,   930,    -1,   929,
     502,   930,    -1,   931,    -1,   930,    17,   931,    -1,  1163,
     932,    -1,    21,    -1,   465,    -1,   454,    -1,    -1,   443,
    1162,    -1,    -1,   138,    -1,    -1,   169,   935,   936,    -1,
      -1,   340,   937,    -1,   199,    -1,   324,   102,    -1,   324,
      -1,   394,    -1,   323,    -1,    -1,   876,  1204,    -1,    -1,
     195,   939,   940,    -1,  1201,    -1,    -1,   202,   942,   943,
      -1,  1225,    -1,    -1,   205,   945,   946,    -1,  1305,  1189,
     947,    -1,    -1,   115,  1289,  1221,    -1,   206,   937,    -1,
      -1,   215,   950,  1161,  1303,   951,   952,    -1,   830,   129,
     830,    -1,   129,   830,    -1,   830,    -1,    -1,   140,    -1,
      -1,   222,   954,   955,    -1,  1201,   956,   957,   958,   962,
      -1,    -1,  1309,   176,    -1,    -1,     9,  1305,   499,    -1,
     961,  1305,   499,    -1,    -1,   365,   959,    -1,   960,    -1,
     959,   960,    -1,   961,  1269,    49,  1204,    -1,    12,    -1,
      15,    -1,   301,    -1,    16,    -1,   302,    -1,   277,    -1,
     278,    -1,    -1,  1303,  1305,   111,    -1,    -1,   224,   964,
     965,    -1,  1186,    -1,   965,  1186,    -1,    -1,   227,   967,
     968,    -1,   969,   970,    -1,  1221,    -1,  1232,    -1,  1235,
      -1,   971,   973,    -1,   971,    -1,   973,    -1,   974,    -1,
      -1,   437,   972,   975,    -1,   365,   977,    -1,    93,  1210,
     447,  1211,   981,    -1,   976,    -1,   975,   976,    -1,  1210,
     189,    -1,    58,   981,    -1,     9,    -1,   241,    -1,   469,
      -1,  1210,   981,    -1,   978,    -1,   977,   978,    -1,    58,
      49,  1210,   981,    -1,   979,   980,    -1,    -1,     9,    -1,
     241,    -1,   178,    -1,   469,    -1,  1210,    49,  1211,   981,
      -1,    -1,   981,   982,    -1,    37,  1276,  1204,    -1,     8,
    1276,  1204,    -1,    -1,   269,   984,  1058,    -1,    -1,   273,
     986,   987,    -1,  1204,   447,  1201,    -1,    95,  1204,   447,
    1201,    -1,    -1,   275,   989,   990,   991,    -1,  1204,    49,
    1180,  1144,    -1,  1204,    49,  1204,   203,  1180,  1144,    -1,
      -1,   141,    -1,    -1,   311,   993,   994,    -1,   995,   996,
    1184,   997,    -1,   994,   995,   996,  1184,   997,    -1,   225,
      -1,   317,    -1,   233,    -1,   171,    -1,    -1,   404,  1309,
     640,    -1,    -1,  1309,   287,   380,    -1,  1309,   262,    -1,
     379,    -1,    -1,   324,   999,  1000,    -1,  1004,  1005,    -1,
      -1,  1005,  1001,   830,  1002,    -1,  1005,  1003,    -1,    -1,
     142,    -1,   142,    -1,   452,    -1,  1190,    -1,  1190,   443,
    1190,    -1,    -1,  1213,   446,    -1,   191,    -1,  1006,   482,
    1007,    -1,  1006,   500,  1008,    -1,    -1,  1309,   440,  1135,
      -1,   169,    -1,  1161,    -1,  1009,    -1,  1008,     8,  1009,
      -1,  1221,   196,  1204,    49,  1204,   482,  1161,    -1,    -1,
     349,  1011,  1012,  1017,    -1,  1185,  1250,  1294,  1013,  1014,
    1015,  1016,    -1,    -1,   228,  1221,    -1,    -1,   217,   262,
      -1,  1309,   262,    -1,  1309,   236,   262,    -1,  1309,   287,
     262,    -1,  1309,   216,   262,    -1,  1309,   501,    -1,    -1,
     237,  1278,  1221,    -1,  1157,    -1,  1151,    -1,    -1,   144,
      -1,   350,    -1,    -1,   360,  1020,  1021,    -1,  1182,  1133,
      -1,   374,    -1,    -1,   375,  1024,  1025,  1026,    -1,  1185,
    1294,  1013,  1150,    -1,    -1,   145,    -1,    -1,   381,  1028,
    1029,  1031,    -1,  1182,  1133,  1030,  1157,    -1,    -1,  1309,
     262,    -1,  1309,   287,   262,    -1,    -1,   146,    -1,   385,
      -1,    -1,   393,  1034,  1035,  1040,    -1,  1183,  1036,  1037,
    1038,    -1,     9,  1183,  1037,   502,  1162,   830,    -1,    -1,
     500,  1221,    -1,    -1,   130,   830,    -1,  1039,    -1,  1039,
    1038,    -1,   502,  1161,   830,    -1,    -1,   147,    -1,    -1,
     403,  1042,  1043,    -1,  1046,    -1,  1047,    -1,  1050,    -1,
    1051,    -1,  1052,    -1,  1054,    -1,   309,    -1,   307,    -1,
     483,    -1,   124,    -1,   154,  1210,   447,  1210,    -1,  1218,
      31,  1048,    -1,  1049,    -1,  1048,  1049,    -1,    38,  1044,
      -1,    46,  1044,    -1,   211,  1044,    -1,   265,  1044,    -1,
     378,  1044,    -1,   474,  1044,    -1,   243,  1044,    -1,   318,
    1044,    -1,  1201,   447,   153,  1209,    -1,  1201,   447,  1204,
      -1,  1201,  1045,    49,  1204,    -1,  1053,    -1,  1052,  1053,
      -1,  1187,   447,  1044,    -1,  1055,    -1,  1054,  1055,    -1,
    1201,   447,   465,    -1,  1201,   447,   454,    -1,    -1,   412,
    1057,  1058,    -1,    -1,  1219,  1060,  1062,  1063,  1059,  1064,
    1065,    -1,    -1,  1060,  1289,   723,  1280,  1061,    -1,    -1,
    1061,  1225,    -1,    -1,  1325,  1274,    -1,    -1,  1310,  1278,
    1194,    -1,    -1,   498,  1184,    -1,   225,   337,  1278,  1004,
      -1,    -1,   203,  1184,    -1,   317,   337,  1278,  1004,    -1,
      -1,   421,  1067,  1068,  1074,    -1,  1185,  1070,  1069,  1157,
      -1,    -1,  1309,  1324,  1174,    -1,    -1,   237,  1278,  1071,
    1221,    -1,   178,    -1,   240,    -1,  1167,    -1,  1251,  1168,
      -1,  1251,  1169,    -1,  1251,  1170,    -1,  1251,  1171,    -1,
    1072,    -1,  1073,    -1,   290,  1167,    -1,   293,    -1,    -1,
     148,    -1,    -1,   426,   387,  1076,  1077,    -1,   426,  1079,
      -1,    -1,   876,  1204,    -1,  1309,   162,  1301,  1078,    -1,
    1309,   289,  1301,  1078,    -1,    -1,  1204,    -1,   256,    -1,
     416,    -1,   511,    -1,   346,    -1,    -1,   427,  1081,  1082,
    1086,    -1,  1083,   228,  1221,  1085,  1147,    -1,  1084,    -1,
    1083,  1084,    -1,  1204,    -1,   113,  1265,   410,    -1,   113,
    1265,  1204,    -1,    -1,  1309,   330,  1278,  1221,    -1,    -1,
     149,    -1,    -1,   430,  1088,  1089,  1090,    -1,  1203,   196,
    1180,  1144,    -1,  1203,   196,  1204,   203,  1180,  1144,    -1,
      95,  1221,   196,  1221,  1253,  1144,    -1,    -1,   150,    -1,
     432,  1092,    -1,    -1,   336,    -1,    -1,   439,  1094,  1095,
      -1,  1186,    -1,  1095,  1186,    -1,    -1,   470,  1097,  1098,
      -1,  1221,   196,  1210,   447,  1211,    -1,    -1,   476,  1100,
    1101,    -1,  1185,  1102,    -1,    -1,   351,    -1,   353,    -1,
      -1,   481,  1104,  1105,  1114,    -1,  1221,  1106,  1109,  1085,
    1113,  1147,    -1,    -1,   113,  1265,  1107,    -1,  1108,    -1,
    1107,   313,  1108,    -1,  1245,  1210,    -1,   228,  1110,    -1,
    1109,  1110,    -1,  1221,  1111,  1112,    -1,    -1,   114,  1273,
    1221,    -1,    -1,    96,  1273,  1221,    -1,    -1,   437,  1273,
    1221,    -1,    -1,   151,    -1,    -1,   493,  1116,  1117,    -1,
    1118,    -1,  1121,    -1,  1125,    -1,  1127,    -1,  1128,    -1,
    1119,  1259,  1300,  1314,  1292,  1289,  1120,    -1,    -1,   204,
      -1,  1184,    -1,   225,    -1,   317,    -1,   233,    -1,   171,
      -1,  1271,   108,  1289,  1122,    -1,  1123,    -1,  1122,  1123,
      -1,  1191,    -1,     9,   338,    -1,     9,  1124,  1225,    -1,
      -1,   358,    -1,   358,   306,    -1,   306,    -1,  1263,   340,
    1126,    -1,   421,    -1,   130,    -1,  1119,    37,   367,  1221,
      -1,  1129,    -1,   167,    -1,   128,    -1,    -1,   508,  1131,
    1132,  1137,    -1,  1182,  1133,  1134,  1030,  1136,    -1,    -1,
     196,  1217,    -1,    -1,  1135,  1258,  1214,  1282,    -1,  1135,
    1258,  1188,    -1,  1135,  1258,   321,    -1,    37,    -1,     8,
      -1,  1157,    -1,  1154,    -1,    -1,   152,    -1,  1139,  1140,
      -1,    -1,   166,   830,    -1,    -1,   294,   830,    -1,  1142,
    1143,    -1,    -1,   166,   830,    -1,    -1,   294,   830,    -1,
    1145,  1146,    -1,    -1,   411,   830,    -1,    -1,   297,   830,
      -1,  1148,  1149,    -1,    -1,   462,   830,    -1,    -1,   296,
     830,    -1,  1152,  1153,    -1,  1152,    -1,  1152,  1153,    -1,
    1152,    -1,  1153,    -1,   130,   830,    -1,   291,   830,    -1,
    1155,  1156,    -1,  1155,    -1,  1156,    -1,   158,   830,    -1,
     292,   830,    -1,  1158,  1159,    -1,    -1,   231,   830,    -1,
      -1,   295,   830,    -1,    -1,  1216,  1323,    -1,  1162,    -1,
    1163,    -1,    -1,  1164,  1165,    -1,  1166,    -1,  1165,   232,
      -1,  1165,  1166,    -1,  1204,    -1,   463,    -1,   449,    -1,
     464,    -1,   459,    -1,   460,    -1,   451,    -1,   170,    -1,
    1167,    -1,  1168,    -1,  1169,    -1,  1170,    -1,  1171,    -1,
     293,    -1,   290,    -1,    20,    -1,   313,    -1,   308,    -1,
     301,    -1,    12,    -1,    13,    -1,    14,    -1,   332,    -1,
     284,    -1,   453,    -1,   160,  1305,    -1,   456,    -1,   207,
      -1,   458,    -1,   246,    -1,   208,    -1,   247,    -1,  1174,
      -1,  1172,  1173,  1174,    -1,    -1,    71,    -1,   398,    -1,
    1174,   464,  1175,    -1,  1174,   459,  1175,    -1,  1175,    -1,
    1175,   460,  1176,    -1,  1175,   451,  1176,    -1,  1176,    -1,
    1177,   170,  1176,    -1,  1177,    -1,   464,  1178,    -1,   459,
    1178,    -1,  1178,    -1,   463,  1174,   449,    -1,  1207,    -1,
     251,    -1,   251,  1316,   505,    -1,   253,    -1,   253,  1316,
     505,    -1,   322,    -1,   322,  1316,   505,    -1,  1181,    -1,
    1180,  1181,    -1,  1202,  1253,    -1,  1225,    -1,  1225,    -1,
    1185,    -1,  1184,  1185,    -1,   505,    -1,   505,    -1,  1188,
      -1,  1187,  1188,    -1,   271,    -1,    -1,  1189,  1190,    -1,
    1191,    -1,  1225,    -1,  1192,    -1,  1192,  1316,  1192,    -1,
     256,    -1,  1194,    -1,  1193,  1194,    -1,  1225,    -1,   505,
      -1,  1197,    -1,  1196,  1197,    -1,   505,    -1,  1194,    -1,
     256,    -1,   505,    -1,   505,    -1,  1202,    -1,  1201,  1202,
      -1,  1223,    -1,  1233,    -1,     6,  1288,  1222,    -1,  1204,
      -1,  1203,  1204,    -1,  1221,    -1,  1232,    -1,  1235,    -1,
    1179,    -1,   245,  1222,    -1,   245,  1233,    -1,   245,  1235,
      -1,     6,  1288,  1208,  1209,    -1,     6,  1288,  1222,    -1,
     271,    -1,  1207,    -1,  1205,  1207,    -1,  1221,    -1,  1233,
      -1,  1235,    -1,  1221,    -1,  1233,    -1,  1235,    -1,  1179,
      -1,   245,  1222,    -1,   245,  1233,    -1,   245,  1235,    -1,
     340,    -1,   153,    -1,  1222,    -1,   256,    -1,  1221,    -1,
    1233,    -1,  1221,    -1,  1232,    -1,  1221,    -1,   256,    -1,
    1221,    -1,   256,    -1,  1235,    -1,  1218,    -1,  1228,    -1,
     511,    -1,  1218,    -1,  1230,    -1,  1218,    -1,  1228,    -1,
    1221,    -1,  1232,    -1,  1235,    -1,  1220,    -1,  1220,    -1,
    1225,    -1,  1225,  1226,    -1,  1222,    -1,  1225,  1226,  1227,
      -1,  1225,  1226,    -1,  1225,  1227,    -1,  1225,    -1,  1224,
      -1,  1179,    -1,  1225,  1226,  1227,    -1,  1225,  1226,    -1,
    1225,  1227,    -1,  1225,    -1,   505,    -1,   505,  1316,  1225,
      -1,   463,  1172,   449,    -1,   463,  1174,   450,   449,    -1,
     463,  1174,   450,  1174,   449,    -1,   256,    -1,   256,    -1,
     256,    -1,   511,    -1,   256,    -1,   416,    -1,   511,    -1,
     346,    -1,   212,    -1,   266,    -1,   461,    -1,  1233,    -1,
       9,  1234,    -1,  1234,    -1,  1233,   448,  1234,    -1,   256,
      -1,   416,    -1,   511,    -1,   346,    -1,   212,    -1,   266,
      -1,   461,    -1,  1236,  1239,    -1,  1237,   463,  1206,   449,
    1239,    -1,  1238,   463,  1172,   449,  1239,    -1,   471,   463,
    1241,   449,  1239,    -1,   303,   463,  1242,   449,    -1,   258,
     463,  1243,   449,  1239,    -1,   259,   463,  1243,   449,  1239,
      -1,   260,   463,  1243,   449,  1239,    -1,   201,  1240,    -1,
     496,  1240,    -1,   100,    -1,   503,    -1,   491,    -1,   264,
      -1,   377,    -1,    83,    -1,   192,    -1,   193,    -1,   194,
      -1,   428,    -1,   429,    -1,    -1,   463,  1174,   450,   449,
      -1,   463,  1174,   450,  1174,   449,    -1,    -1,   463,  1172,
     449,    -1,   463,   449,    -1,  1206,    -1,  1206,  1173,   241,
      -1,  1206,  1173,   469,    -1,  1206,    -1,  1206,  1173,  1206,
      -1,  1174,    -1,  1174,  1173,  1194,    -1,    -1,    -1,     9,
      -1,    -1,  1325,    -1,    -1,   223,    -1,    -1,   223,  1249,
      -1,    -1,   447,  1211,    -1,    -1,   285,    -1,   334,    -1,
      -1,   290,    -1,    -1,   312,    -1,   290,   312,    -1,    -1,
     386,  1254,    -1,    -1,   272,  1278,  1255,    -1,    34,    -1,
     281,    -1,   282,    -1,   283,    -1,   344,    -1,   467,    -1,
     468,    -1,   472,    -1,    -1,   400,  1266,    -1,   452,    -1,
       3,    -1,     5,    -1,    10,    -1,    18,    -1,    51,    -1,
      52,    -1,    61,    -1,    72,    -1,    75,    -1,    89,    -1,
     112,    -1,   120,    -1,   122,    -1,   129,    -1,   153,    -1,
     164,    -1,   169,    -1,   195,    -1,   202,    -1,   205,    -1,
     206,    -1,   215,    -1,   222,    -1,   224,    -1,   227,    -1,
     269,    -1,   273,    -1,   275,    -1,   285,    -1,   311,    -1,
     324,    -1,   349,    -1,   360,    -1,   375,    -1,   381,    -1,
     385,    -1,   393,    -1,   403,    -1,   412,    -1,   421,    -1,
     426,    -1,   427,    -1,   430,    -1,   432,    -1,   439,    -1,
     470,    -1,   476,    -1,   481,    -1,   508,    -1,   131,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,   138,    -1,   140,    -1,   141,    -1,   142,    -1,
     144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,
     149,    -1,   150,    -1,   151,    -1,   152,    -1,    -1,     7,
      -1,    -1,     8,    -1,    -1,    22,    -1,    -1,    23,    -1,
      -1,    26,    -1,    -1,    30,    -1,    -1,    39,    -1,    -1,
      49,    -1,    -1,    57,    -1,    -1,    58,    -1,    -1,    87,
      -1,    -1,   103,    -1,    -1,   455,    -1,    -1,   189,    -1,
      -1,   196,    -1,    -1,   218,    -1,    -1,   314,    -1,   218,
     314,    -1,    -1,   221,    -1,    -1,   457,    -1,    -1,   228,
      -1,    -1,   232,    -1,    -1,   232,    -1,    22,    -1,    -1,
     237,    -1,    -1,   242,    -1,   384,    -1,    -1,   252,    -1,
     254,    -1,    -1,   248,  1278,    -1,   249,  1260,    -1,    -1,
     254,    -1,    -1,   272,    -1,    -1,   299,    -1,    -1,   299,
      -1,   300,    -1,    -1,   306,    -1,    -1,   309,    -1,    -1,
     423,   232,    -1,   423,    -1,   232,    -1,    -1,   316,    -1,
      -1,   337,    -1,    -1,   340,    -1,    -1,   351,    -1,    -1,
     384,    -1,    -1,   405,    -1,    -1,   406,    -1,    -1,   405,
      -1,   405,   232,    -1,    -1,   410,    -1,    -1,   418,    -1,
      -1,   423,    -1,    -1,   438,    -1,    -1,   442,    -1,    -1,
     446,    -1,    -1,   447,    -1,    -1,   447,    -1,   498,    -1,
      -1,   502,    -1,    -1,   502,   403,   447,    -1,    -1,   504,
      -1,    64,   401,    -1,   401,    -1,    67,    -1,    65,    -1,
      68,    -1,    66,    -1,   453,    -1,   160,    -1,   166,    -1,
     162,    -1,   166,    -1,   462,    -1,   218,    -1,   306,    -1,
     418,    -1,   308,    -1,   252,    -1,   254,    -1,   351,    -1,
     353,    -1,    58,    -1,   506,    -1,   351,  1278,    -1,   353,
    1260,    -1,   356,    -1,   475,    -1,   252,    -1,   254,    -1,
     410,    -1,   244,    -1,   504,   125,    -1,   125,    -1,   340,
      64,   401,    -1,    64,   401,    -1,   401,    -1,   117,    -1,
     107,    -1,    90,   210,    -1,    55,    -1,    90,   188,    -1,
      54,    -1,   321,   210,    -1,   325,    -1,   321,   188,    -1,
     326,    -1,   366,   210,    -1,   383,    -1,   366,   188,    -1,
     382,    -1,    90,  1278,    -1,    91,  1260,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1369,  1369,  1369,  1401,  1402,  1406,  1407,  1411,  1412,
    1416,  1416,  1439,  1446,  1453,  1459,  1460,  1461,  1465,  1466,
    1470,  1494,  1495,  1499,  1533,  1539,  1551,  1525,  1561,  1560,
    1598,  1633,  1634,  1638,  1639,  1642,  1643,  1647,  1656,  1665,
    1666,  1670,  1674,  1683,  1684,  1692,  1693,  1703,  1704,  1708,
    1709,  1710,  1711,  1712,  1719,  1718,  1731,  1732,  1735,  1736,
    1750,  1749,  1759,  1760,  1761,  1762,  1766,  1767,  1771,  1772,
    1773,  1774,  1778,  1785,  1792,  1799,  1810,  1814,  1818,  1822,
    1829,  1830,  1837,  1836,  1847,  1848,  1849,  1856,  1857,  1861,
    1865,  1877,  1881,  1882,  1887,  1890,  1897,  1902,  1913,  1926,
    1927,  1935,  1936,  1940,  1941,  1942,  1943,  1944,  1945,  1946,
    1947,  1948,  1949,  1950,  1951,  1959,  1958,  1977,  1987,  2000,
    2008,  2011,  2012,  2016,  2026,  2042,  2041,  2065,  2071,  2077,
    2083,  2089,  2095,  2105,  2109,  2116,  2120,  2125,  2124,  2135,
    2139,  2146,  2147,  2148,  2149,  2150,  2151,  2155,  2156,  2163,
    2178,  2181,  2188,  2196,  2200,  2211,  2231,  2239,  2250,  2251,
    2257,  2278,  2279,  2283,  2287,  2308,  2331,  2413,  2416,  2425,
    2444,  2460,  2478,  2496,  2513,  2529,  2530,  2537,  2538,  2546,
    2547,  2557,  2558,  2563,  2562,  2583,  2593,  2594,  2598,  2599,
    2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,  2608,  2609,
    2610,  2617,  2623,  2633,  2646,  2659,  2675,  2676,  2677,  2678,
    2681,  2682,  2688,  2689,  2693,  2697,  2698,  2703,  2706,  2707,
    2714,  2722,  2723,  2724,  2731,  2755,  2757,  2762,  2772,  2783,
    2790,  2792,  2793,  2799,  2799,  2806,  2811,  2816,  2823,  2824,
    2825,  2829,  2840,  2841,  2845,  2850,  2855,  2860,  2871,  2882,
    2892,  2900,  2901,  2902,  2908,  2919,  2926,  2927,  2933,  2941,
    2942,  2943,  2949,  2950,  2951,  2958,  2959,  2963,  2964,  2970,
    2998,  2999,  3000,  3001,  3008,  3007,  3023,  3024,  3028,  3031,
    3032,  3038,  3039,  3047,  3048,  3056,  3057,  3061,  3082,  3081,
    3098,  3105,  3109,  3115,  3116,  3120,  3130,  3145,  3146,  3147,
    3148,  3149,  3150,  3151,  3152,  3153,  3160,  3167,  3167,  3167,
    3173,  3193,  3227,  3258,  3259,  3266,  3267,  3271,  3272,  3279,
    3290,  3295,  3306,  3307,  3311,  3312,  3318,  3329,  3347,  3348,
    3352,  3353,  3354,  3358,  3365,  3372,  3381,  3393,  3445,  3460,
    3461,  3465,  3477,  3519,  3521,  3520,  3536,  3539,  3539,  3557,
    3558,  3560,  3564,  3566,  3565,  3600,  3613,  3621,  3626,  3632,
    3641,  3651,  3654,  3666,  3667,  3668,  3669,  3673,  3677,  3681,
    3685,  3689,  3693,  3697,  3701,  3705,  3709,  3713,  3717,  3721,
    3732,  3733,  3737,  3738,  3742,  3743,  3744,  3748,  3749,  3753,
    3779,  3783,  3792,  3796,  3805,  3806,  3807,  3808,  3809,  3810,
    3811,  3812,  3813,  3814,  3815,  3816,  3817,  3818,  3825,  3849,
    3877,  3880,  3889,  3914,  3925,  3926,  3930,  3934,  3938,  3942,
    3946,  3950,  3954,  3958,  3962,  3966,  3970,  3974,  3978,  3983,
    3988,  3992,  3996,  4004,  4008,  4012,  4020,  4024,  4028,  4032,
    4036,  4040,  4044,  4048,  4052,  4060,  4068,  4072,  4076,  4080,
    4084,  4088,  4096,  4097,  4101,  4102,  4108,  4114,  4126,  4144,
    4145,  4154,  4175,  4196,  4197,  4201,  4202,  4205,  4206,  4212,
    4213,  4220,  4221,  4228,  4252,  4253,  4270,  4271,  4274,  4275,
    4282,  4283,  4288,  4299,  4310,  4321,  4332,  4361,  4360,  4369,
    4370,  4374,  4375,  4378,  4379,  4392,  4405,  4426,  4435,  4449,
    4451,  4450,  4470,  4472,  4471,  4487,  4489,  4488,  4499,  4500,
    4507,  4506,  4535,  4536,  4537,  4544,  4550,  4554,  4555,  4561,
    4568,  4569,  4570,  4574,  4581,  4582,  4586,  4596,  4636,  4646,
    4656,  4674,  4675,  4678,  4679,  4684,  4685,  4686,  4687,  4688,
    4692,  4703,  4714,  4725,  4736,  4746,  4747,  4752,  4751,  4772,
    4773,  4777,  4778,  4779,  4780,  4781,  4782,  4783,  4784,  4785,
    4786,  4787,  4788,  4789,  4790,  4791,  4792,  4793,  4797,  4804,
    4808,  4812,  4813,  4814,  4821,  4825,  4832,  4835,  4840,  4847,
    4850,  4855,  4862,  4869,  4878,  4883,  4888,  4895,  4896,  4897,
    4898,  4902,  4910,  4911,  4912,  4919,  4923,  4930,  4938,  4942,
    4950,  4954,  4960,  4975,  4992,  4993,  4994,  4998,  5015,  5019,
    5026,  5033,  5034,  5038,  5046,  5054,  5073,  5081,  5089,  5097,
    5099,  5098,  5119,  5120,  5124,  5125,  5130,  5132,  5131,  5188,
    5206,  5207,  5211,  5215,  5219,  5223,  5227,  5231,  5235,  5239,
    5243,  5247,  5251,  5255,  5259,  5263,  5267,  5271,  5275,  5280,
    5284,  5288,  5293,  5298,  5303,  5308,  5309,  5310,  5311,  5312,
    5313,  5314,  5315,  5316,  5323,  5328,  5337,  5338,  5342,  5343,
    5348,  5351,  5355,  5363,  5366,  5370,  5378,  5389,  5397,  5399,
    5409,  5398,  5436,  5436,  5469,  5473,  5472,  5486,  5485,  5505,
    5506,  5511,  5518,  5520,  5524,  5534,  5536,  5544,  5552,  5560,
    5589,  5620,  5622,  5632,  5637,  5664,  5666,  5665,  5702,  5703,
    5707,  5708,  5709,  5726,  5727,  5738,  5737,  5787,  5788,  5792,
    5840,  5853,  5856,  5875,  5880,  5874,  5893,  5893,  5923,  5930,
    5931,  5932,  5933,  5934,  5935,  5936,  5937,  5938,  5939,  5940,
    5941,  5942,  5943,  5944,  5945,  5946,  5947,  5948,  5949,  5950,
    5951,  5952,  5953,  5954,  5955,  5956,  5957,  5958,  5959,  5960,
    5961,  5962,  5963,  5964,  5965,  5966,  5967,  5968,  5969,  5970,
    5971,  5972,  5973,  5974,  5975,  5976,  5977,  5978,  5979,  5993,
    6005,  6004,  6020,  6026,  6030,  6034,  6039,  6044,  6049,  6054,
    6058,  6062,  6066,  6070,  6075,  6079,  6083,  6087,  6091,  6095,
    6099,  6106,  6107,  6114,  6115,  6119,  6120,  6124,  6125,  6126,
    6127,  6128,  6132,  6136,  6137,  6140,  6141,  6144,  6145,  6151,
    6152,  6156,  6157,  6161,  6165,  6171,  6175,  6179,  6183,  6187,
    6191,  6195,  6199,  6203,  6207,  6211,  6215,  6219,  6223,  6227,
    6231,  6235,  6241,  6245,  6249,  6253,  6257,  6261,  6265,  6272,
    6273,  6277,  6281,  6299,  6298,  6307,  6311,  6315,  6321,  6322,
    6329,  6333,  6344,  6343,  6352,  6356,  6368,  6369,  6377,  6376,
    6385,  6386,  6390,  6396,  6396,  6403,  6402,  6412,  6432,  6436,
    6441,  6446,  6467,  6471,  6470,  6487,  6488,  6493,  6501,  6525,
    6527,  6531,  6540,  6553,  6556,  6560,  6564,  6587,  6588,  6592,
    6593,  6598,  6601,  6609,  6613,  6621,  6625,  6636,  6635,  6643,
    6647,  6658,  6657,  6665,  6670,  6678,  6679,  6680,  6681,  6682,
    6690,  6689,  6698,  6705,  6709,  6719,  6730,  6748,  6747,  6756,
    6760,  6764,  6769,  6777,  6781,  6792,  6791,  6801,  6805,  6809,
    6813,  6817,  6821,  6822,  6831,  6833,  6832,  6840,  6849,  6856,
    6860,  6864,  6868,  6878,  6880,  6884,  6885,  6888,  6890,  6897,
    6898,  6902,  6903,  6908,  6912,  6916,  6920,  6924,  6928,  6932,
    6936,  6940,  6944,  6948,  6952,  6956,  6960,  6964,  6968,  6975,
    6979,  6990,  6989,  6998,  7002,  7006,  7010,  7014,  7021,  7025,
    7036,  7035,  7044,  7063,  7062,  7086,  7094,  7095,  7100,  7111,
    7122,  7136,  7140,  7147,  7148,  7153,  7162,  7171,  7176,  7185,
    7186,  7191,  7253,  7254,  7255,  7259,  7260,  7264,  7268,  7279,
    7278,  7290,  7291,  7312,  7326,  7348,  7370,  7390,  7413,  7414,
    7422,  7421,  7430,  7441,  7440,  7449,  7462,  7461,  7474,  7483,
    7487,  7498,  7514,  7513,  7522,  7526,  7530,  7537,  7541,  7552,
    7551,  7559,  7567,  7568,  7572,  7573,  7574,  7579,  7582,  7589,
    7593,  7601,  7608,  7609,  7610,  7611,  7612,  7613,  7614,  7619,
    7622,  7632,  7631,  7639,  7646,  7659,  7658,  7667,  7671,  7675,
    7679,  7686,  7687,  7688,  7689,  7696,  7695,  7709,  7719,  7728,
    7729,  7733,  7734,  7735,  7736,  7737,  7738,  7742,  7743,  7747,
    7752,  7759,  7760,  7761,  7762,  7763,  7767,  7795,  7798,  7805,
    7809,  7819,  7818,  7831,  7830,  7838,  7842,  7853,  7852,  7861,
    7865,  7872,  7876,  7887,  7886,  7894,  7915,  7939,  7940,  7941,
    7942,  7946,  7947,  7951,  7952,  7953,  7954,  7966,  7965,  7976,
    7982,  7981,  7992,  8000,  8008,  8015,  8019,  8032,  8039,  8051,
    8054,  8059,  8063,  8074,  8081,  8082,  8086,  8087,  8090,  8091,
    8096,  8136,  8135,  8144,  8171,  8172,  8177,  8180,  8184,  8188,
    8192,  8196,  8200,  8207,  8208,  8212,  8213,  8217,  8221,  8231,
    8242,  8241,  8249,  8259,  8270,  8269,  8278,  8285,  8289,  8300,
    8299,  8311,  8320,  8323,  8327,  8334,  8338,  8348,  8360,  8359,
    8368,  8372,  8381,  8382,  8387,  8390,  8398,  8402,  8409,  8417,
    8421,  8432,  8431,  8445,  8446,  8447,  8448,  8449,  8450,  8454,
    8455,  8459,  8460,  8466,  8475,  8482,  8483,  8487,  8491,  8495,
    8499,  8503,  8507,  8511,  8515,  8524,  8528,  8537,  8546,  8547,
    8551,  8560,  8561,  8565,  8569,  8580,  8579,  8588,  8587,  8618,
    8621,  8641,  8642,  8645,  8646,  8654,  8655,  8660,  8665,  8675,
    8691,  8696,  8706,  8723,  8722,  8732,  8745,  8748,  8756,  8759,
    8764,  8769,  8777,  8778,  8779,  8780,  8781,  8782,  8786,  8794,
    8795,  8799,  8803,  8814,  8813,  8823,  8836,  8839,  8843,  8851,
    8863,  8866,  8873,  8874,  8875,  8876,  8883,  8882,  8891,  8898,
    8899,  8903,  8904,  8905,  8909,  8910,  8914,  8918,  8929,  8928,
    8937,  8941,  8945,  8952,  8956,  8966,  8977,  8978,  8985,  8984,
    8992,  9000,  9013,  9012,  9020,  9034,  9033,  9041,  9054,  9056,
    9057,  9065,  9064,  9073,  9081,  9082,  9087,  9088,  9093,  9100,
    9101,  9106,  9113,  9114,  9118,  9119,  9123,  9124,  9128,  9132,
    9143,  9142,  9151,  9152,  9153,  9154,  9155,  9159,  9186,  9189,
    9201,  9211,  9216,  9221,  9226,  9234,  9272,  9273,  9277,  9317,
    9327,  9350,  9351,  9352,  9353,  9357,  9366,  9372,  9382,  9413,
    9422,  9423,  9430,  9429,  9441,  9451,  9452,  9457,  9460,  9464,
    9468,  9475,  9476,  9480,  9481,  9485,  9489,  9501,  9504,  9505,
    9514,  9515,  9524,  9527,  9528,  9537,  9538,  9549,  9552,  9553,
    9562,  9563,  9575,  9578,  9580,  9590,  9591,  9603,  9604,  9608,
    9609,  9610,  9614,  9623,  9634,  9635,  9636,  9640,  9649,  9660,
    9665,  9666,  9675,  9676,  9687,  9691,  9701,  9708,  9715,  9715,
    9725,  9726,  9727,  9731,  9740,  9741,  9743,  9744,  9745,  9746,
    9747,  9749,  9750,  9751,  9752,  9753,  9754,  9756,  9757,  9758,
    9760,  9761,  9762,  9763,  9764,  9767,  9768,  9772,  9773,  9777,
    9778,  9782,  9783,  9787,  9791,  9797,  9801,  9807,  9808,  9809,
    9813,  9814,  9815,  9819,  9820,  9821,  9825,  9829,  9833,  9834,
    9835,  9838,  9839,  9849,  9861,  9870,  9886,  9895,  9911,  9926,
    9927,  9932,  9941,  9947,  9967,  9971,  9992, 10033, 10047, 10048,
   10053, 10059, 10060, 10065, 10077, 10078, 10079, 10086, 10097, 10098,
   10102, 10110, 10118, 10122, 10129, 10138, 10139, 10145, 10159, 10176,
   10180, 10187, 10188, 10189, 10196, 10200, 10207, 10208, 10209, 10210,
   10211, 10215, 10219, 10223, 10227, 10231, 10252, 10256, 10263, 10264,
   10265, 10269, 10270, 10271, 10272, 10273, 10277, 10281, 10288, 10289,
   10293, 10294, 10298, 10299, 10303, 10304, 10315, 10316, 10320, 10321,
   10322, 10326, 10327, 10328, 10335, 10336, 10340, 10341, 10345, 10346,
   10347, 10353, 10357, 10361, 10362, 10366, 10370, 10377, 10384, 10391,
   10401, 10405, 10412, 10422, 10432, 10442, 10455, 10459, 10467, 10475,
   10479, 10489, 10504, 10527, 10547, 10554, 10570, 10571, 10572, 10573,
   10574, 10575, 10579, 10583, 10600, 10604, 10611, 10612, 10613, 10614,
   10615, 10616, 10617, 10623, 10627, 10631, 10635, 10639, 10643, 10647,
   10651, 10655, 10659, 10666, 10667, 10671, 10672, 10673, 10677, 10678,
   10679, 10680, 10681, 10682, 10686, 10690, 10694, 10701, 10705, 10709,
   10716, 10723, 10730, 10740, 10747, 10757, 10764, 10776, 10784, 10785,
   10789, 10790, 10794, 10795, 10800, 10803, 10811, 10814, 10821, 10823,
   10824, 10828, 10829, 10833, 10834, 10835, 10840, 10843, 10856, 10860,
   10868, 10872, 10876, 10880, 10884, 10888, 10892, 10896, 10903, 10904,
   10910, 10911, 10912, 10913, 10914, 10915, 10916, 10917, 10918, 10919,
   10920, 10921, 10922, 10923, 10924, 10925, 10926, 10927, 10928, 10929,
   10930, 10931, 10932, 10933, 10934, 10935, 10936, 10937, 10938, 10939,
   10940, 10941, 10942, 10943, 10944, 10945, 10946, 10947, 10948, 10949,
   10950, 10951, 10952, 10953, 10954, 10955, 10956, 10957, 10958, 10959,
   10960, 10961, 10962, 10963, 10964, 10965, 10966, 10967, 10968, 10969,
   10970, 10971, 10972, 10973, 10974, 10975, 10976, 10977, 10978, 10979,
   10986, 10986, 10987, 10987, 10988, 10988, 10989, 10989, 10990, 10990,
   10991, 10991, 10992, 10992, 10993, 10993, 10994, 10994, 10995, 10995,
   10996, 10996, 10997, 10997, 10998, 10998, 11000, 11000, 11001, 11001,
   11002, 11002, 11003, 11003, 11003, 11004, 11004, 11005, 11005, 11006,
   11006, 11007, 11007, 11008, 11008, 11008, 11009, 11009, 11010, 11010,
   11010, 11011, 11011, 11011, 11012, 11012, 11012, 11013, 11013, 11014,
   11014, 11015, 11015, 11016, 11016, 11016, 11017, 11017, 11018, 11018,
   11019, 11019, 11019, 11019, 11020, 11020, 11021, 11021, 11022, 11022,
   11023, 11023, 11024, 11024, 11025, 11025, 11026, 11026, 11027, 11027,
   11027, 11028, 11028, 11029, 11029, 11030, 11030, 11031, 11031, 11032,
   11032, 11033, 11033, 11034, 11034, 11035, 11035, 11035, 11036, 11036,
   11037, 11037, 11038, 11038, 11042, 11042, 11043, 11043, 11044, 11044,
   11045, 11045, 11046, 11046, 11047, 11047, 11048, 11048, 11049, 11049,
   11050, 11050, 11051, 11051, 11052, 11052, 11053, 11053, 11054, 11054,
   11055, 11055, 11056, 11056, 11057, 11057, 11060, 11061, 11062, 11066,
   11066, 11067, 11067, 11068, 11068, 11069, 11069, 11070, 11070, 11071,
   11071, 11072, 11072, 11073, 11073
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "ACCEPT", "ACCESS", "ADD",
  "ADDRESS", "ADVANCING", "AFTER", "ALL", "ALLOCATE", "ALPHABET",
  "ALPHABETIC", "\"ALPHABETIC-LOWER\"", "\"ALPHABETIC-UPPER\"",
  "ALPHANUMERIC", "\"ALPHANUMERIC-EDITED\"", "ALSO", "ALTER", "ALTERNATE",
  "AND", "ANY", "ARE", "AREA", "\"ARGUMENT-NUMBER\"", "\"ARGUMENT-VALUE\"",
  "AS", "ASCENDING", "ASCII", "ASSIGN", "AT", "ATTRIBUTE", "AUTO",
  "AUTOMATIC", "\"AWAY-FROM-ZERO\"", "\"BACKGROUND-COLOR\"", "BASED",
  "BEFORE", "BELL", "BINARY", "\"BINARY-C-LONG\"", "\"BINARY-CHAR\"",
  "\"BINARY-DOUBLE\"", "\"BINARY-LONG\"", "\"BINARY-SHORT\"", "BLANK",
  "BLINK", "BLOCK", "BOTTOM", "BY", "\"BYTE-LENGTH\"", "CALL", "CANCEL",
  "CAPACITY", "CF", "CH", "CHAINING", "CHARACTER", "CHARACTERS", "CLASS",
  "CLASSIFICATION", "CLOSE", "CODE", "\"CODE-SET\"", "COLLATING", "COL",
  "COLS", "COLUMN", "COLUMNS", "COMMA", "\"COMMAND-LINE\"",
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
  "LINE", "\"LINE-COUNTER\"", "LINES", "LINKAGE", "\"Literal\"", "LOCALE",
  "\"FUNCTION LOCALE-DATE\"", "\"FUNCTION LOCALE-TIME\"",
  "\"FUNCTION LOCALE-TIME-FROM-SECONDS\"", "\"LOCAL-STORAGE\"", "LOCK",
  "LOWER", "\"FUNCTION LOWER-CASE\"", "LOWLIGHT", "\"LOW-VALUE\"",
  "MANUAL", "MEMORY", "MERGE", "MINUS", "\"MNEMONIC NAME\"", "MODE",
  "MOVE", "MULTIPLE", "MULTIPLY", "NAME", "NATIONAL",
  "\"NATIONAL-EDITED\"", "\"FUNCTION NATIONAL-OF\"", "NATIVE",
  "\"NEAREST-AWAY-FROM-ZERO\"", "\"NEAREST-EVEN\"",
  "\"NEAREST-TOWARD-ZERO\"", "NEGATIVE", "NEXT", "\"NEXT PAGE\"", "NO",
  "\"NO-ECHO\"", "NORMAL", "NOT", "\"NOT END\"", "\"NOT EOP\"",
  "\"NOT EQUAL\"", "\"NOT EXCEPTION\"", "\"NOT INVALID KEY\"",
  "\"NOT OVERFLOW\"", "\"NOT SIZE ERROR\"", "\"NO ADVANCING\"", "NUMBER",
  "NUMBERS", "NUMERIC", "\"NUMERIC-EDITED\"", "\"FUNCTION NUMVAL-C\"",
  "\"OBJECT-COMPUTER\"", "OCCURS", "OF", "OFF", "OMITTED", "ON", "ONLY",
  "OPEN", "OPTIONAL", "OR", "ORDER", "ORGANIZATION", "OTHER", "OUTPUT",
  "OVERLINE", "\"PACKED-DECIMAL\"", "PADDING", "PAGE", "\"PAGE-COUNTER\"",
  "PARAGRAPH", "PERFORM", "PH", "PF", "PICTURE", "\"PICTURE SYMBOL\"",
  "PLUS", "POINTER", "POSITION", "POSITIVE", "PRESENT", "PREVIOUS",
  "PRINTER", "PRINTING", "PROCEDURE", "PROCEDURES", "PROCEED", "PROGRAM",
  "\"PROGRAM-ID\"", "\"Program name\"", "\"PROGRAM-POINTER\"",
  "PROHIBITED", "PROMPT", "QUOTE", "RANDOM", "RD", "READ",
  "\"READY TRACE\"", "RECORD", "RECORDING", "RECORDS", "RECURSIVE",
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
  "SYMBOLIC", "SYNCHRONIZED", "\"SYSTEM-DEFAULT\"", "TAB", "TALLYING",
  "TAPE", "TERMINATE", "TEST", "THAN", "THEN", "THRU", "TIME", "TIMEOUT",
  "TIMES", "TO", "\"&\"", "\")\"", "\":\"", "\"/\"", "\".\"", "\"=\"",
  "\"FALSE\"", "\"FILE\"", "\">\"", "\"INITIAL\"", "\"<\"", "\"-\"",
  "\"*\"", "\"NULL\"", "\"OVERFLOW\"", "\"(\"", "\"+\"", "\"TRUE\"", "TOP",
  "\"TOWARD-GREATER\"", "\"TOWARD-LESSER\"", "TRAILING", "TRANSFORM",
  "\"FUNCTION TRIM\"", "TRUNCATION", "TYPE", "UNDERLINE", "UNIT", "UNLOCK",
  "UNSIGNED", "\"UNSIGNED-INT\"", "\"UNSIGNED-LONG\"",
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
  "record_delimiter_clause", "record_key_clause", "opt_splitk",
  "relative_key_clause", "reserve_clause", "no_or_integer",
  "sharing_clause", "sharing_option", "opt_i_o_control",
  "i_o_control_list", "i_o_control_clause", "same_clause", "same_option",
  "multiple_file_tape_clause", "$@15", "multiple_file_list",
  "multiple_file", "multiple_file_position", "data_division_header",
  "file_section_header", "file_description_sequence", "file_description",
  "file_description_entry", "$@16", "file_type",
  "file_description_clause_sequence", "file_description_clause",
  "block_contains_clause", "_records_or_characters", "record_clause",
  "record_depending", "opt_from_integer", "opt_to_integer",
  "label_records_clause", "value_of_clause", "file_id", "valueof_name",
  "data_records_clause", "linage_clause", "linage_sequence",
  "linage_lines", "linage_footing", "linage_top", "linage_bottom",
  "recording_mode_clause", "code_set_clause", "report_clause",
  "report_keyword", "rep_name_list", "working_storage_section", "$@17",
  "record_description_list", "$@18", "record_description_list_2",
  "data_description", "$@19", "level_number", "entry_name", "const_name",
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
  "blank_clause", "based_clause", "value_clause", "$@20",
  "value_item_list", "value_item", "false_is", "renames_clause",
  "any_length_clause", "local_storage_section", "$@21", "linkage_section",
  "$@22", "report_section", "$@23", "report_description_sequence",
  "report_description", "$@24", "report_description_options",
  "report_description_option", "control_clause", "control_field_list",
  "control_final_tag", "identifier_list", "control_identifier",
  "page_limit_clause", "page_line_column", "report_int_ident",
  "page_heading_list", "page_detail", "heading_clause", "first_detail",
  "last_heading", "last_detail", "footing_clause",
  "report_group_description_list", "report_group_description_entry",
  "$@25", "report_group_options", "report_group_option", "type_clause",
  "type_option", "control_heading_final", "control_footing_final",
  "next_group_clause", "next_group_plus", "next_page", "sum_clause_list",
  "reset_clause", "data_or_final", "present_when_condition",
  "varying_clause", "line_clause", "line_keyword_clause",
  "line_clause_options", "number_is", "line_clause_integer",
  "line_clause_next_page", "column_clause", "col_keyword_clause",
  "col_or_plus", "source_clause", "group_indicate_clause",
  "report_usage_clause", "screen_section", "$@26",
  "opt_screen_description_list", "screen_description_list",
  "screen_description", "$@27", "screen_options", "screen_option",
  "plus_plus", "minus_minus", "screen_line_plus_minus",
  "screen_col_plus_minus", "screen_occurs_clause", "global_screen_opt",
  "procedure_division", "$@28", "$@29", "$@30", "procedure_using_chaining",
  "$@31", "$@32", "procedure_param_list", "procedure_param",
  "procedure_type", "size_optional", "procedure_optional",
  "procedure_returning", "procedure_declaratives", "$@33",
  "procedure_list", "procedure", "section_header", "$@34",
  "opt_use_statement", "paragraph_header", "invalid_statement",
  "opt_segment", "statement_list", "@35", "@36", "statements", "$@37",
  "statement", "accept_statement", "$@38", "accept_body",
  "accp_identifier", "lines_or_number", "opt_at_line_column",
  "at_line_column", "line_number", "column_number", "opt_at_from",
  "opt_at_block", "opt_accp_attr", "accp_attrs", "accp_attr",
  "update_default", "end_accept", "add_statement", "$@39", "add_body",
  "add_to", "end_add", "allocate_statement", "$@40", "allocate_body",
  "allocate_returning", "alter_statement", "$@41", "alter_body",
  "alter_entry", "_proceed_to", "call_statement", "$@42", "call_body",
  "mnemonic_conv", "call_using", "$@43", "call_param_list", "call_param",
  "call_type", "call_returning", "return_give", "null_or_omitted",
  "call_on_exception", "call_not_on_exception", "end_call",
  "cancel_statement", "$@44", "cancel_body", "close_statement", "$@45",
  "close_body", "close_option", "compute_statement", "$@46",
  "compute_body", "end_compute", "commit_statement", "continue_statement",
  "delete_statement", "$@47", "delete_body", "delete_file_list",
  "end_delete", "display_statement", "$@48", "display_body",
  "display_list", "$@49", "display_atom", "display_upon",
  "display_upon_crt", "crt_under", "with_clause", "with_no_adv_clause",
  "disp_attrs", "disp_attr", "end_display", "divide_statement", "$@50",
  "divide_body", "end_divide", "entry_statement", "$@51", "entry_body",
  "evaluate_statement", "$@52", "evaluate_body", "evaluate_subject_list",
  "evaluate_subject", "evaluate_condition_list", "evaluate_case_list",
  "evaluate_case", "evaluate_other", "evaluate_when_list",
  "evaluate_object_list", "evaluate_object", "opt_evaluate_thru_expr",
  "end_evaluate", "exit_statement", "$@53", "exit_body",
  "exit_program_returning", "free_statement", "$@54", "free_body",
  "generate_statement", "$@55", "generate_body", "goto_statement", "$@56",
  "go_body", "goto_depending", "goback_statement", "if_statement", "$@57",
  "if_else_statements", "end_if", "initialize_statement", "$@58",
  "initialize_body", "initialize_filler", "initialize_value",
  "initialize_replacing", "initialize_replacing_list",
  "initialize_replacing_item", "initialize_category", "initialize_default",
  "initiate_statement", "$@59", "initiate_body", "inspect_statement",
  "$@60", "inspect_body", "send_identifier", "inspect_list",
  "inspect_tallying", "$@61", "inspect_replacing", "inspect_converting",
  "tallying_list", "tallying_item", "replacing_list", "replacing_item",
  "rep_keyword", "replacing_region", "inspect_region",
  "inspect_before_after", "merge_statement", "$@62", "move_statement",
  "$@63", "move_body", "multiply_statement", "$@64", "multiply_body",
  "end_multiply", "open_statement", "$@65", "open_body", "open_mode",
  "open_sharing", "open_option", "perform_statement", "$@66",
  "perform_body", "$@67", "end_perform", "term_or_dot",
  "perform_procedure", "perform_option", "perform_test", "cond_or_exit",
  "perform_varying_list", "perform_varying", "read_statement", "$@68",
  "read_body", "read_into", "with_lock", "read_key", "read_handler",
  "end_read", "ready_statement", "release_statement", "$@69",
  "release_body", "reset_statement", "return_statement", "$@70",
  "return_body", "end_return", "rewrite_statement", "$@71", "rewrite_body",
  "write_lock", "end_rewrite", "rollback_statement", "search_statement",
  "$@72", "search_body", "search_varying", "search_at_end", "search_whens",
  "search_when", "end_search", "set_statement", "$@73", "set_body",
  "on_or_off", "up_or_down", "set_environment", "set_attr",
  "set_attr_clause", "set_attr_one", "set_to", "set_up_down",
  "set_to_on_off_sequence", "set_to_on_off", "set_to_true_false_sequence",
  "set_to_true_false", "sort_statement", "$@74", "sort_body", "@75",
  "sort_key_list", "opt_key_list", "sort_duplicates", "sort_collating",
  "sort_input", "sort_output", "start_statement", "$@76", "start_body",
  "sizelen_clause", "start_key", "start_op", "disallowed_op",
  "not_equal_op", "end_start", "stop_statement", "$@77", "stop_returning",
  "_opt_status", "stop_literal", "string_statement", "$@78", "string_body",
  "string_item_list", "string_item", "opt_with_pointer", "end_string",
  "subtract_statement", "$@79", "subtract_body", "end_subtract",
  "suppress_statement", "_printing", "terminate_statement", "$@80",
  "terminate_body", "transform_statement", "$@81", "transform_body",
  "unlock_statement", "$@82", "unlock_body", "opt_record",
  "unstring_statement", "$@83", "unstring_body", "unstring_delimited",
  "unstring_delimited_list", "unstring_delimited_item", "unstring_into",
  "unstring_into_item", "unstring_into_delimiter", "unstring_into_count",
  "unstring_tallying", "end_unstring", "use_statement", "$@84",
  "use_phrase", "use_file_exception", "use_global",
  "use_file_exception_target", "use_debugging", "debugging_list",
  "debugging_target", "all_refs", "use_start_end", "program_start_end",
  "use_reporting", "use_exception", "use_ex_keyw", "write_statement",
  "$@85", "write_body", "from_option", "write_option", "before_or_after",
  "write_handler", "end_write", "on_accp_exception",
  "opt_on_accp_exception", "opt_not_on_accp_exception",
  "on_disp_exception", "opt_on_disp_exception",
  "opt_not_on_disp_exception", "on_size_error", "opt_on_size_error",
  "opt_not_on_size_error", "on_overflow", "opt_on_overflow",
  "opt_not_on_overflow", "return_at_end", "at_end", "at_end_clause",
  "not_at_end_clause", "at_eop", "at_eop_clause", "not_at_eop_clause",
  "invalid_key", "opt_invalid_key_sentence",
  "opt_not_invalid_key_sentence", "_opt_scroll_lines", "condition", "expr",
  "partial_expr", "$@86", "expr_tokens", "expr_token", "eq", "gt", "lt",
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
  "numvalc_args", "locale_dt_args", "not_const_word", "flag_all",
  "flag_duplicates", "flag_initialized", "flag_initialized_to",
  "to_init_val", "flag_next", "flag_not", "flag_optional", "flag_rounded",
  "round_mode", "round_choice", "flag_separate", "error_stmt_recover",
  "_advancing", "_after", "_are", "_area", "_as", "_at", "_binary", "_by",
  "_character", "_characters", "_contains", "_data", "_file", "_for",
  "_from", "_in", "_in_order", "_indicate", "_initial", "_into", "_is",
  "_is_are", "_key", "_left_or_right", "_line_or_lines", "_limits",
  "_lines", "_mode", "_number", "_numbers", "_of", "_on", "_onoff_status",
  "_other", "_procedure", "_program", "_record", "_right", "_sign",
  "_signed", "_sign_is", "_size", "_standard", "_status", "_tape", "_then",
  "_times", "_to", "_to_using", "_when", "_when_set_to", "_with",
  "coll_sequence", "column_or_col", "columns_or_cols", "comp_equal",
  "exception_or_error", "exception_or_overflow", "in_of", "label_option",
  "line_or_lines", "lock_records", "object_char_or_word", "records",
  "reel_or_unit", "scroll_line_or_lines", "size_or_length", "with_dups",
  "prog_coll_sequence", "detail_keyword", "ch_keyword", "cf_keyword",
  "ph_keyword", "pf_keyword", "rh_keyword", "rf_keyword",
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
     765,   766,   767
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   513,   515,   514,   516,   516,   517,   517,   518,   518,
     520,   519,   521,   522,   523,   524,   524,   524,   525,   525,
     526,   527,   527,   528,   530,   531,   532,   529,   534,   533,
     535,   536,   536,   537,   537,   538,   538,   539,   539,   539,
     539,   540,   540,   541,   541,   542,   542,   543,   543,   544,
     544,   544,   544,   544,   546,   545,   547,   547,   548,   548,
     550,   549,   551,   551,   551,   551,   552,   552,   553,   553,
     553,   553,   554,   555,   556,   557,   558,   558,   558,   558,
     559,   559,   561,   560,   562,   562,   562,   563,   563,   564,
     564,   564,   565,   565,   566,   566,   567,   567,   568,   569,
     569,   570,   570,   571,   571,   571,   571,   571,   571,   571,
     571,   571,   571,   571,   571,   573,   572,   574,   574,   574,
     574,   575,   575,   576,   576,   578,   577,   579,   579,   579,
     579,   579,   579,   580,   580,   581,   581,   582,   581,   583,
     583,   584,   584,   584,   584,   584,   584,   585,   585,   586,
     587,   587,   588,   589,   589,   590,   591,   591,   592,   592,
     593,   594,   594,   595,   595,   596,   597,   598,   598,   599,
     600,   601,   602,   603,   604,   605,   605,   606,   606,   607,
     607,   608,   608,   610,   609,   609,   611,   611,   612,   612,
     612,   612,   612,   612,   612,   612,   612,   612,   612,   612,
     612,   613,   613,   613,   613,   613,   614,   614,   614,   614,
     615,   615,   616,   616,   616,   617,   617,   618,   618,   618,
     619,   620,   620,   620,   621,   622,   622,   622,   623,   624,
     625,   625,   625,   627,   626,   628,   628,   628,   629,   629,
     629,   629,   630,   630,   631,   631,   631,   631,   632,   633,
     634,   635,   635,   635,   636,   637,   638,   638,   639,   640,
     640,   640,   641,   641,   641,   642,   642,   643,   643,   644,
     645,   645,   645,   645,   647,   646,   648,   648,   649,   650,
     650,   651,   651,   652,   652,   653,   653,   654,   656,   655,
     655,   657,   657,   658,   658,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,   660,   661,   661,   661,
     662,   662,   662,   663,   663,   664,   664,   665,   665,   666,
     667,   667,   668,   668,   669,   669,   670,   671,   672,   672,
     673,   673,   673,   674,   675,   676,   677,   678,   679,   680,
     680,   681,   681,   682,   683,   682,   684,   685,   684,   686,
     686,   686,   687,   688,   687,   687,   689,   690,   690,   690,
     691,   692,   692,   693,   693,   693,   693,   694,   694,   694,
     694,   694,   694,   694,   694,   694,   694,   694,   694,   694,
     695,   695,   696,   696,   697,   697,   697,   698,   698,   699,
     700,   700,   701,   701,   702,   702,   702,   702,   702,   702,
     702,   702,   702,   702,   702,   702,   702,   702,   703,   704,
     705,   705,   706,   707,   708,   708,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   709,   709,   709,   709,   709,   709,   709,   709,
     709,   709,   710,   710,   711,   711,   712,   712,   713,   714,
     714,   715,   715,   716,   716,   717,   717,   718,   718,   719,
     719,   720,   720,   721,   722,   722,   723,   723,   724,   724,
     725,   725,   726,   727,   728,   729,   730,   732,   731,   733,
     733,   734,   734,   735,   735,   736,   736,   737,   737,   738,
     739,   738,   740,   741,   740,   742,   743,   742,   744,   744,
     746,   745,   747,   747,   747,   748,   748,   748,   748,   749,
     750,   750,   750,   751,   752,   752,   753,   754,   755,   755,
     755,   756,   756,   757,   757,   758,   758,   758,   758,   758,
     759,   760,   761,   762,   763,   764,   764,   766,   765,   767,
     767,   768,   768,   768,   768,   768,   768,   768,   768,   768,
     768,   768,   768,   768,   768,   768,   768,   768,   769,   770,
     770,   770,   770,   770,   770,   770,   771,   771,   771,   772,
     772,   772,   773,   774,   774,   774,   774,   775,   775,   775,
     775,   776,   777,   777,   777,   778,   778,   779,   780,   781,
     782,   783,   783,   783,   784,   784,   784,   785,   786,   786,
     787,   788,   788,   789,   789,   789,   790,   791,   792,   793,
     794,   793,   795,   795,   796,   796,   797,   798,   797,   797,
     799,   799,   800,   800,   800,   800,   800,   800,   800,   800,
     800,   800,   800,   800,   800,   800,   800,   800,   800,   800,
     800,   800,   800,   800,   800,   800,   800,   800,   800,   800,
     800,   800,   800,   800,   800,   800,   801,   801,   802,   802,
     803,   803,   803,   804,   804,   804,   805,   806,   807,   808,
     809,   807,   810,   807,   811,   812,   811,   813,   811,   814,
     814,   815,   816,   816,   816,   817,   817,   817,   817,   817,
     817,   818,   818,   819,   819,   820,   821,   820,   822,   822,
     823,   823,   823,   823,   823,   825,   824,   826,   826,   827,
     828,   829,   829,   831,   832,   830,   834,   833,   833,   835,
     835,   835,   835,   835,   835,   835,   835,   835,   835,   835,
     835,   835,   835,   835,   835,   835,   835,   835,   835,   835,
     835,   835,   835,   835,   835,   835,   835,   835,   835,   835,
     835,   835,   835,   835,   835,   835,   835,   835,   835,   835,
     835,   835,   835,   835,   835,   835,   835,   835,   835,   835,
     837,   836,   838,   838,   838,   838,   838,   838,   838,   838,
     838,   838,   838,   838,   838,   838,   838,   838,   838,   838,
     838,   839,   839,   840,   840,   841,   841,   842,   842,   842,
     842,   842,   843,   844,   844,   845,   845,   846,   846,   847,
     847,   848,   848,   849,   849,   849,   849,   849,   849,   849,
     849,   849,   849,   849,   849,   849,   849,   849,   849,   849,
     849,   849,   849,   849,   849,   849,   849,   849,   849,   850,
     850,   851,   851,   853,   852,   854,   854,   854,   855,   855,
     856,   856,   858,   857,   859,   859,   860,   860,   862,   861,
     863,   863,   864,   865,   865,   867,   866,   868,   869,   869,
     869,   869,   870,   871,   870,   872,   872,   873,   873,   874,
     874,   874,   874,   875,   875,   875,   875,   876,   876,   877,
     877,   878,   878,   879,   879,   880,   880,   882,   881,   883,
     883,   885,   884,   886,   886,   887,   887,   887,   887,   887,
     889,   888,   890,   891,   891,   892,   893,   895,   894,   896,
     896,   897,   897,   898,   898,   900,   899,   901,   901,   901,
     901,   901,   901,   901,   902,   903,   902,   904,   905,   905,
     905,   905,   905,   906,   906,   907,   907,   908,   908,   909,
     909,   910,   910,   911,   911,   911,   911,   911,   911,   911,
     911,   911,   911,   911,   911,   911,   911,   911,   911,   912,
     912,   914,   913,   915,   915,   915,   915,   915,   916,   916,
     918,   917,   919,   921,   920,   922,   923,   923,   924,   924,
     924,   925,   925,   926,   926,   927,   928,   929,   929,   930,
     930,   931,   931,   931,   931,   932,   932,   933,   933,   935,
     934,   936,   936,   936,   936,   936,   936,   936,   937,   937,
     939,   938,   940,   942,   941,   943,   945,   944,   946,   947,
     947,   948,   950,   949,   951,   951,   951,   952,   952,   954,
     953,   955,   956,   956,   957,   957,   957,   958,   958,   959,
     959,   960,   961,   961,   961,   961,   961,   961,   961,   962,
     962,   964,   963,   965,   965,   967,   966,   968,   969,   969,
     969,   970,   970,   970,   970,   972,   971,   973,   974,   975,
     975,   976,   976,   976,   976,   976,   976,   977,   977,   978,
     978,   979,   979,   979,   979,   979,   980,   981,   981,   982,
     982,   984,   983,   986,   985,   987,   987,   989,   988,   990,
     990,   991,   991,   993,   992,   994,   994,   995,   995,   995,
     995,   996,   996,   997,   997,   997,   997,   999,   998,  1000,
    1001,  1000,  1000,  1002,  1002,  1003,  1003,  1004,  1004,  1005,
    1005,  1005,  1005,  1005,  1006,  1006,  1007,  1007,  1008,  1008,
    1009,  1011,  1010,  1012,  1013,  1013,  1014,  1014,  1014,  1014,
    1014,  1014,  1014,  1015,  1015,  1016,  1016,  1017,  1017,  1018,
    1020,  1019,  1021,  1022,  1024,  1023,  1025,  1026,  1026,  1028,
    1027,  1029,  1030,  1030,  1030,  1031,  1031,  1032,  1034,  1033,
    1035,  1035,  1036,  1036,  1037,  1037,  1038,  1038,  1039,  1040,
    1040,  1042,  1041,  1043,  1043,  1043,  1043,  1043,  1043,  1044,
    1044,  1045,  1045,  1046,  1047,  1048,  1048,  1049,  1049,  1049,
    1049,  1049,  1049,  1049,  1049,  1050,  1050,  1051,  1052,  1052,
    1053,  1054,  1054,  1055,  1055,  1057,  1056,  1059,  1058,  1060,
    1060,  1061,  1061,  1062,  1062,  1063,  1063,  1064,  1064,  1064,
    1065,  1065,  1065,  1067,  1066,  1068,  1069,  1069,  1070,  1070,
    1070,  1070,  1071,  1071,  1071,  1071,  1071,  1071,  1072,  1073,
    1073,  1074,  1074,  1076,  1075,  1075,  1077,  1077,  1077,  1077,
    1078,  1078,  1079,  1079,  1079,  1079,  1081,  1080,  1082,  1083,
    1083,  1084,  1084,  1084,  1085,  1085,  1086,  1086,  1088,  1087,
    1089,  1089,  1089,  1090,  1090,  1091,  1092,  1092,  1094,  1093,
    1095,  1095,  1097,  1096,  1098,  1100,  1099,  1101,  1102,  1102,
    1102,  1104,  1103,  1105,  1106,  1106,  1107,  1107,  1108,  1109,
    1109,  1110,  1111,  1111,  1112,  1112,  1113,  1113,  1114,  1114,
    1116,  1115,  1117,  1117,  1117,  1117,  1117,  1118,  1119,  1119,
    1120,  1120,  1120,  1120,  1120,  1121,  1122,  1122,  1123,  1123,
    1123,  1124,  1124,  1124,  1124,  1125,  1126,  1126,  1127,  1128,
    1129,  1129,  1131,  1130,  1132,  1133,  1133,  1134,  1134,  1134,
    1134,  1135,  1135,  1136,  1136,  1137,  1137,  1138,  1139,  1139,
    1140,  1140,  1141,  1142,  1142,  1143,  1143,  1144,  1145,  1145,
    1146,  1146,  1147,  1148,  1148,  1149,  1149,  1150,  1150,  1151,
    1151,  1151,  1152,  1153,  1154,  1154,  1154,  1155,  1156,  1157,
    1158,  1158,  1159,  1159,  1160,  1160,  1161,  1162,  1164,  1163,
    1165,  1165,  1165,  1166,  1166,  1166,  1166,  1166,  1166,  1166,
    1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,  1166,
    1166,  1166,  1166,  1166,  1166,  1166,  1166,  1167,  1167,  1168,
    1168,  1169,  1169,  1170,  1171,  1172,  1172,  1173,  1173,  1173,
    1174,  1174,  1174,  1175,  1175,  1175,  1176,  1176,  1177,  1177,
    1177,  1178,  1178,  1179,  1179,  1179,  1179,  1179,  1179,  1180,
    1180,  1181,  1182,  1183,  1184,  1184,  1185,  1186,  1187,  1187,
    1188,  1189,  1189,  1190,  1191,  1191,  1191,  1192,  1193,  1193,
    1194,  1195,  1196,  1196,  1197,  1198,  1198,  1199,  1200,  1201,
    1201,  1202,  1202,  1202,  1203,  1203,  1204,  1204,  1204,  1204,
    1204,  1204,  1204,  1204,  1204,  1204,  1205,  1205,  1206,  1206,
    1206,  1207,  1207,  1207,  1207,  1207,  1207,  1207,  1208,  1208,
    1209,  1209,  1210,  1210,  1211,  1211,  1212,  1212,  1213,  1213,
    1213,  1214,  1214,  1214,  1215,  1215,  1216,  1216,  1217,  1217,
    1217,  1218,  1219,  1220,  1220,  1221,  1222,  1222,  1222,  1222,
    1223,  1223,  1224,  1224,  1224,  1224,  1225,  1225,  1226,  1227,
    1227,  1228,  1229,  1230,  1230,  1231,  1231,  1231,  1231,  1231,
    1231,  1231,  1232,  1232,  1233,  1233,  1234,  1234,  1234,  1234,
    1234,  1234,  1234,  1235,  1235,  1235,  1235,  1235,  1235,  1235,
    1235,  1235,  1235,  1236,  1236,  1237,  1237,  1237,  1238,  1238,
    1238,  1238,  1238,  1238,  1239,  1239,  1239,  1240,  1240,  1240,
    1241,  1241,  1241,  1242,  1242,  1243,  1243,  1244,  1245,  1245,
    1246,  1246,  1247,  1247,  1248,  1248,  1249,  1249,  1250,  1250,
    1250,  1251,  1251,  1252,  1252,  1252,  1253,  1253,  1254,  1254,
    1255,  1255,  1255,  1255,  1255,  1255,  1255,  1255,  1256,  1256,
    1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,  1257,
    1258,  1258,  1259,  1259,  1260,  1260,  1261,  1261,  1262,  1262,
    1263,  1263,  1264,  1264,  1265,  1265,  1266,  1266,  1267,  1267,
    1268,  1268,  1269,  1269,  1270,  1270,  1271,  1271,  1272,  1272,
    1273,  1273,  1274,  1274,  1274,  1275,  1275,  1276,  1276,  1277,
    1277,  1278,  1278,  1279,  1279,  1279,  1280,  1280,  1281,  1281,
    1281,  1282,  1282,  1282,  1283,  1283,  1283,  1284,  1284,  1285,
    1285,  1286,  1286,  1287,  1287,  1287,  1288,  1288,  1289,  1289,
    1290,  1290,  1290,  1290,  1291,  1291,  1292,  1292,  1293,  1293,
    1294,  1294,  1295,  1295,  1296,  1296,  1297,  1297,  1298,  1298,
    1298,  1299,  1299,  1300,  1300,  1301,  1301,  1302,  1302,  1303,
    1303,  1304,  1304,  1305,  1305,  1306,  1306,  1306,  1307,  1307,
    1308,  1308,  1309,  1309,  1310,  1310,  1311,  1311,  1312,  1312,
    1313,  1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,
    1318,  1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,  1322,
    1323,  1323,  1324,  1324,  1325,  1325,  1326,  1326,  1326,  1327,
    1327,  1328,  1328,  1329,  1329,  1330,  1330,  1331,  1331,  1332,
    1332,  1333,  1333,  1334,  1334
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
       4,     1,     1,     1,     7,     0,     4,     3,     3,     4,
       0,     1,     1,     0,     5,     2,     2,     1,     0,     4,
       5,     2,     3,     1,     1,     3,     1,     2,     4,     4,
       4,     1,     3,     4,     4,     3,     1,     1,     3,     2,
       2,     2,     0,     2,     3,     1,     2,     1,     1,     5,
       0,     1,     1,     1,     0,     6,     1,     2,     2,     0,
       2,     0,     3,     0,     3,     0,     2,     2,     0,     5,
       3,     1,     1,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     1,
       4,     6,     9,     0,     3,     0,     2,     0,     2,     3,
       5,     5,     1,     1,     1,     1,     3,     5,     0,     2,
       1,     1,     1,     4,     2,     2,     4,     3,     2,     2,
       2,     1,     2,     0,     0,     5,     0,     0,     2,     2,
       3,     2,     1,     0,     4,     3,     2,     0,     1,     1,
       1,     0,     2,     1,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       2,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       0,     2,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     6,     0,
       2,     7,     8,     0,     2,     0,     2,     0,     3,     0,
       3,     0,     1,     1,     0,     5,     1,     1,     0,     3,
       1,     2,     1,     2,     2,     3,     1,     0,     5,     1,
       2,     1,     3,     0,     4,     2,     4,     2,     2,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     0,     2,
       0,     6,     0,     2,     2,     2,     3,     1,     1,     2,
       2,     1,     1,     1,     1,     2,     1,     4,     1,     2,
       4,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       3,     4,     4,     4,     3,     0,     2,     0,     5,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     2,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     4,     1,     2,     2,     1,     2,     1,     1,
       1,     4,     0,     3,     2,     1,     1,     3,     6,     2,
       2,     1,     2,     2,     0,     2,     1,     1,     2,     3,
       2,     3,     2,     2,     2,     1,     4,     2,     3,     0,
       0,     5,     0,     1,     2,     3,     1,     0,     4,     3,
       0,     2,     2,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       1,     5,     5,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     3,     2,     0,     0,
       0,     9,     0,     4,     0,     0,     3,     0,     3,     1,
       2,     4,     0,     2,     2,     0,     3,     3,     4,     4,
       3,     0,     1,     0,     2,     0,     0,     7,     0,     2,
       1,     1,     2,     1,     1,     0,     6,     0,     2,     2,
       1,     0,     1,     0,     0,     3,     0,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       0,     4,     6,     3,     3,     4,     3,     4,     3,     3,
       4,     4,     3,     4,     3,     4,     5,     3,     4,     3,
       3,     1,     1,     1,     2,     0,     1,     3,     3,     2,
       2,     2,     3,     3,     3,     0,     1,     0,     3,     0,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     0,     1,     0,     4,     4,     5,     6,     0,     2,
       0,     1,     0,     3,     3,     4,     0,     2,     0,     3,
       1,     2,     4,     0,     2,     0,     4,     6,     0,     1,
       1,     1,     0,     0,     3,     1,     2,     2,     3,     0,
       2,     2,     2,     0,     3,     2,     4,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     1,     0,     3,     1,
       2,     0,     3,     2,     3,     0,     1,     3,     3,     2,
       0,     4,     4,     0,     1,     1,     1,     0,     4,     3,
       2,     1,     2,     0,     1,     0,     4,     3,     3,     3,
       3,     4,     2,     4,     1,     0,     3,     5,     0,     2,
       2,     2,     2,     0,     2,     1,     1,     0,     2,     0,
       1,     1,     2,     1,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     0,
       1,     0,     4,     4,     6,     6,     8,     8,     0,     1,
       0,     3,     2,     0,     4,     2,     1,     3,     1,     1,
       1,     2,     1,     1,     2,     2,     3,     2,     3,     1,
       3,     2,     1,     1,     1,     0,     2,     0,     1,     0,
       3,     0,     2,     1,     2,     1,     1,     1,     0,     2,
       0,     3,     1,     0,     3,     1,     0,     3,     3,     0,
       3,     2,     0,     6,     3,     2,     1,     0,     1,     0,
       3,     5,     0,     2,     0,     3,     3,     0,     2,     1,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     0,     3,     1,     2,     0,     3,     2,     1,     1,
       1,     2,     1,     1,     1,     0,     3,     2,     5,     1,
       2,     2,     2,     1,     1,     1,     2,     1,     2,     4,
       2,     0,     1,     1,     1,     1,     4,     0,     2,     3,
       3,     0,     3,     0,     3,     3,     4,     0,     4,     4,
       6,     0,     1,     0,     3,     4,     5,     1,     1,     1,
       1,     0,     3,     0,     3,     2,     1,     0,     3,     2,
       0,     4,     2,     0,     1,     1,     1,     1,     3,     0,
       2,     1,     3,     3,     0,     3,     1,     1,     1,     3,
       7,     0,     4,     7,     0,     2,     0,     2,     2,     3,
       3,     3,     2,     0,     3,     1,     1,     0,     1,     1,
       0,     3,     2,     1,     0,     4,     4,     0,     1,     0,
       4,     4,     0,     2,     3,     0,     1,     1,     0,     4,
       4,     6,     0,     2,     0,     2,     1,     2,     3,     0,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     4,     3,     4,     1,     2,
       3,     1,     2,     3,     3,     0,     3,     0,     7,     0,
       5,     0,     2,     0,     2,     0,     3,     0,     2,     4,
       0,     2,     4,     0,     4,     4,     0,     3,     0,     4,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     2,
       1,     0,     1,     0,     4,     2,     0,     2,     4,     4,
       0,     1,     1,     1,     1,     1,     0,     4,     5,     1,
       2,     1,     3,     3,     0,     4,     0,     1,     0,     4,
       4,     6,     6,     0,     1,     2,     0,     1,     0,     3,
       1,     2,     0,     3,     5,     0,     3,     2,     0,     1,
       1,     0,     4,     6,     0,     3,     1,     3,     2,     2,
       2,     3,     0,     3,     0,     3,     0,     3,     0,     1,
       0,     3,     1,     1,     1,     1,     1,     7,     0,     1,
       1,     1,     1,     1,     1,     4,     1,     2,     1,     2,
       3,     0,     1,     2,     1,     3,     1,     1,     4,     1,
       1,     1,     0,     4,     5,     0,     2,     0,     4,     3,
       3,     1,     1,     1,     1,     0,     1,     2,     0,     2,
       0,     2,     2,     0,     2,     0,     2,     2,     0,     2,
       0,     2,     2,     0,     2,     0,     2,     2,     1,     2,
       1,     1,     2,     2,     2,     1,     1,     2,     2,     2,
       0,     2,     0,     2,     0,     2,     1,     1,     0,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     2,     2,
       1,     3,     1,     1,     3,     1,     3,     1,     3,     1,
       2,     2,     1,     1,     1,     2,     1,     1,     1,     2,
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
       5,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     5,     0,     3,     2,
       1,     3,     3,     1,     3,     1,     3,     0,     0,     1,
       0,     1,     0,     1,     0,     2,     0,     2,     0,     1,
       1,     0,     1,     0,     1,     2,     0,     2,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     2,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     1,     0,     1,
       1,     0,     1,     1,     0,     2,     2,     0,     1,     0,
       1,     0,     1,     0,     1,     1,     0,     1,     0,     1,
       0,     2,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       2,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     1,     0,     1,
       0,     3,     0,     1,     2,     1,     1,     1,     1,     1,
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
       0,   175,     0,    17,    12,    19,    15,     0,    34,    30,
    1801,    46,     0,     0,     0,  1844,  1801,  1801,  1801,     0,
       0,     0,     0,     0,  1801,     0,     0,  1778,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1802,     0,     0,  1527,   125,  1801,
    1801,  1845,  1801,     0,     0,     0,     0,  1801,  1801,    60,
      82,     0,    54,    98,  1779,     0,  1801,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1838,    39,  1801,     0,     0,     0,  1596,   171,  1520,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1528,
     152,   153,  1803,   156,  1601,  1220,  1219,   116,   120,  1830,
    1801,     0,   100,   151,   178,   179,    38,  1839,    36,     0,
    1609,  1605,  1610,  1608,  1606,  1611,  1607,   160,   161,   163,
     172,   167,  1886,  1887,     0,   165,     0,  1777,     0,     0,
       0,  1801,  1908,    80,    61,  1776,    66,    68,    69,    70,
      71,  1776,     0,  1801,     0,    83,     0,    87,    55,    58,
     154,  1805,  1804,   157,     0,  1830,  1833,  1832,     0,     0,
     117,   121,     0,     0,   262,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1873,   166,     0,  1597,   170,  1907,  1801,
       0,     0,    65,    67,    63,    81,  1776,  1801,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1602,
     155,   158,     0,  1831,   123,   118,   119,   122,   180,     0,
       0,  1674,     0,   274,   270,    24,     0,   265,   267,   268,
     134,   137,     0,   164,     0,     0,  1906,    74,    64,     0,
    1521,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1675,   183,  1784,   271,   272,   273,  1766,
     281,     0,   263,   266,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1785,  1857,  1767,  1786,
       0,   283,   264,   138,   139,  1894,  1895,    72,  1840,  1858,
    1780,  1787,     0,     0,     0,   285,     0,  1819,  1840,  1865,
       0,   244,     0,  1801,  1776,  1806,   246,     0,  1875,  1872,
     232,   184,   231,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   243,   195,   196,   197,   198,   199,   200,
    1772,  1801,  1781,     0,  1506,   269,  1504,   282,     0,    25,
     140,  1820,  1801,  1841,  1806,  1866,  1867,   212,  1874,   247,
    1840,  1801,  1801,  1807,  1801,  1801,   256,  1766,   257,     0,
    1801,  1819,  1773,     0,     0,   275,   276,   279,  1505,   284,
     291,   292,   343,   286,   346,     0,     0,  1801,   214,   213,
     210,   246,   242,     0,     0,     0,     0,   255,  1834,  1834,
       0,   258,     0,  1801,   245,   228,   277,     0,   278,     0,
     499,   287,  1657,     0,   288,   222,   223,   221,   220,     0,
     206,   207,   217,   217,     0,   217,   209,   208,   217,     0,
    1526,  1525,   248,   249,   250,   251,   254,  1835,   259,   260,
     261,   229,     0,   280,     0,     0,   502,   348,     0,     0,
     352,     0,   290,   293,  1660,   218,   203,   219,   204,  1784,
     205,   202,   215,   201,   216,  1801,     0,   238,   237,   238,
     234,   344,     0,     0,   505,   351,     0,   349,     0,   358,
     359,   353,     0,   356,  1801,  1905,     0,   225,  1661,   211,
       0,   252,  1518,     0,   236,   235,   346,   500,     0,     0,
     619,   350,   355,   392,   361,  1780,  1801,     0,     0,  1801,
    1780,  1819,  1801,  1764,   289,     0,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   305,     0,     0,  1904,     0,
     224,   253,  1519,     0,   241,   345,   346,   503,     0,     0,
      26,  1801,  1768,     0,     0,     0,  1801,  1764,     0,     0,
       0,     0,     0,  1801,   339,  1765,   340,     0,   338,   341,
     295,   296,     0,     0,   501,   346,   506,     0,   682,     0,
     486,   416,  1846,  1846,  1846,  1846,  1846,  1868,   417,   452,
     454,   420,   421,   422,   423,   424,   425,   448,   446,   447,
     449,   450,   455,   453,   426,  1842,   451,     0,   427,   413,
     428,   429,     0,     0,  1849,   431,   432,   430,  1808,   434,
     435,   433,  1801,  1803,   393,   394,   395,   396,   397,   398,
     414,   418,   419,   399,   400,   401,   402,   403,   404,   405,
     406,   407,     0,     0,  1769,     0,   389,     0,   362,   317,
     337,  1896,  1897,  1524,   326,  1522,  1889,  1888,   319,  1817,
    1778,  1790,     0,  1801,   323,   322,  1801,   342,     0,   147,
     148,   227,     0,  1892,  1893,   239,   504,   508,   620,     0,
      27,   726,   497,   498,  1847,   445,   444,   437,   436,   443,
     442,   441,   440,   439,   438,  1869,     0,  1843,   483,   469,
     463,   408,  1589,   495,  1850,  1809,  1810,   484,     0,     0,
     410,   412,  1688,  1688,   391,     0,  1826,  1620,     0,     0,
    1616,  1621,  1619,  1617,  1622,  1618,   390,   363,  1612,  1614,
       0,   307,  1523,  1818,   328,     0,   310,  1791,  1851,   336,
       0,     0,   226,   240,   507,   622,   684,     0,     0,   485,
    1790,   465,     0,  1861,     0,  1587,  1588,     0,   415,   487,
     489,   491,     0,   409,  1776,   456,   457,  1613,  1827,     0,
       0,   372,   368,   371,   370,   369,   384,   380,   382,   383,
     385,   381,   386,   387,   388,   365,   376,   377,   378,   373,
     374,   375,   367,   364,     0,   318,   309,   308,   306,   327,
    1778,  1852,   315,   324,   321,   325,   320,     0,   509,     0,
     626,   621,   623,     0,   687,   685,   703,     0,   780,   853,
     862,   868,   875,   907,   911,   925,   920,   926,   927,   935,
     981,   990,   993,  1019,  1030,  1033,  1036,  1028,  1042,  1049,
    1071,  1075,  1111,  1113,  1117,     0,  1123,  1137,  1161,  1179,
    1180,  1183,  1184,  1189,  1197,  1198,  1211,  1245,  1263,     0,
    1296,  1308,  1316,  1318,   708,  1322,  1325,  1331,  1382,   728,
     729,   730,   731,   732,   733,   734,   735,   737,   736,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   750,   751,   752,   753,   754,   755,   756,   757,   758,
     759,   760,   761,   762,   763,   764,   765,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,   776,   777,   727,
       0,     0,   463,   464,  1862,   467,  1638,  1633,  1639,  1640,
    1641,  1647,     0,  1493,  1495,     0,     0,     0,  1636,     0,
    1497,  1637,  1642,  1643,     0,     0,     0,     0,  1635,  1647,
    1634,  1477,  1475,  1482,  1485,  1487,  1490,  1554,  1492,  1551,
    1585,  1552,  1553,  1644,     0,     0,     0,  1586,   496,   493,
     490,     0,   411,  1689,   366,   379,  1615,     0,     0,   329,
     330,   331,   332,     0,   311,  1789,   317,     0,  1507,   510,
       0,   627,     0,   624,   692,   692,     0,     0,  1691,  1692,
    1693,  1694,  1695,  1696,  1697,  1698,  1699,  1700,  1701,  1702,
    1703,  1704,  1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,
    1748,  1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,  1757,
    1758,  1759,  1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,
    1713,  1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,  1722,
    1723,  1724,  1725,  1726,  1727,  1728,  1729,  1730,  1731,  1732,
    1733,  1734,  1735,  1690,  1736,  1737,  1738,  1739,   779,     0,
       0,     0,     0,   878,     0,     0,     0,     0,     0,     0,
       0,  1438,  1021,     0,     0,  1863,   898,   897,     0,  1041,
    1438,     0,     0,     0,     0,     0,     0,   778,     0,  1149,
       0,     0,     0,     0,     0,     0,     0,     0,  1292,  1295,
    1283,  1293,  1294,  1285,     0,     0,  1317,  1315,     0,   726,
       0,     0,     0,     0,   470,   466,   471,  1828,   474,     0,
    1631,  1555,  1556,  1557,     0,     0,     0,     0,     0,     0,
       0,  1489,     0,  1488,     0,  1632,  1478,  1479,  1598,     0,
       0,     0,     0,     0,     0,     0,     0,  1623,     0,     0,
       0,     0,   488,     0,   492,   335,   334,  1770,  1778,   316,
       0,   629,   630,   625,  1775,   692,   689,   695,     0,   692,
     704,   679,   802,   851,   805,   801,  1826,     0,     0,  1545,
     860,  1539,   858,  1534,  1536,  1537,  1538,   863,     0,  1662,
    1517,   869,   870,     0,  1513,  1515,  1514,   881,   879,   880,
     905,     0,  1567,   908,   909,  1566,   912,   915,  1826,   923,
    1591,     0,  1499,  1676,  1531,  1590,  1595,  1532,     0,   933,
    1840,  1616,   979,  1403,   944,   948,  1534,     0,  1536,   988,
       0,   882,   991,  1000,   999,  1017,     0,   996,   998,  1437,
       0,  1023,  1027,  1025,  1028,  1026,  1020,  1031,  1032,  1529,
    1034,  1035,  1864,  1037,  1511,  1029,  1859,  1436,  1050,  1052,
    1072,  1073,  1076,     0,  1078,  1079,  1080,  1112,  1249,  1582,
    1583,     0,  1114,     0,  1121,     0,  1130,  1127,  1129,  1128,
    1124,  1131,  1151,  1517,  1138,  1149,  1140,     0,  1147,     0,
    1568,  1514,  1570,     0,  1177,  1668,  1181,  1385,  1502,  1187,
    1840,  1195,  1385,     0,  1209,  1202,  1503,     0,  1510,  1212,
    1213,  1214,  1215,  1216,  1217,  1238,  1218,  1241,     0,  1508,
       0,     0,  1581,  1595,  1246,  1281,  1268,  1286,  1774,  1306,
       0,  1299,  1301,     0,  1313,     0,  1319,  1320,   714,   720,
     709,   710,   711,   713,     0,  1323,     0,  1326,  1328,  1348,
    1334,  1395,  1385,   472,   474,  1829,     0,   478,   473,  1649,
    1477,  1475,  1494,  1496,  1477,     0,     0,     0,  1477,  1548,
    1549,  1550,     0,  1498,  1491,  1477,     0,  1476,  1599,     0,
    1481,  1480,  1484,  1483,  1486,     0,     0,  1477,     0,  1801,
    1771,     0,   313,     0,  1801,  1848,   690,  1801,     0,   701,
     693,   694,   705,   852,   781,  1771,   815,   806,     0,     0,
       0,     0,  1540,  1541,  1542,   861,   854,     0,     0,  1535,
    1664,  1663,   866,   871,   873,     0,   906,   876,  1569,   882,
     910,   915,  1898,  1899,   913,     0,   916,     0,   924,   921,
    1881,  1880,  1500,     0,  1678,  1501,  1593,  1594,   930,   931,
     934,   928,  1430,   980,   936,   723,     0,   942,  1405,     0,
     959,     0,   953,  1403,  1403,  1403,  1403,   989,   982,     0,
       0,   883,   992,  1018,   994,  1438,  1438,   995,  1002,  1003,
     723,  1462,  1463,  1464,  1458,  1863,  1450,  1470,  1473,  1472,
    1474,  1466,  1457,  1456,  1461,  1460,  1459,  1465,  1445,  1449,
    1467,  1469,  1471,  1447,  1448,  1444,  1446,  1439,  1440,  1451,
    1452,  1453,  1454,  1455,  1443,  1024,  1022,  1530,  1039,  1860,
     723,  1054,     0,  1074,     0,  1101,  1085,  1077,  1082,  1083,
    1084,  1253,     0,  1584,     0,     0,  1122,  1118,     0,  1131,
    1872,     0,  1139,  1145,  1146,   723,  1142,  1438,     0,     0,
    1150,     0,  1178,  1162,  1669,  1670,  1840,     0,  1182,  1188,
    1185,  1164,  1196,  1190,  1192,  1204,  1210,  1199,     0,  1204,
       0,  1562,  1563,  1239,  1242,     0,     0,  1509,  1222,     0,
    1221,     0,     0,  1593,  1282,  1264,  1270,  1801,  1271,  1266,
       0,  1284,     0,     0,  1307,  1297,     0,  1300,     0,  1314,
    1309,     0,  1321,   721,   719,   712,     0,  1329,  1330,  1327,
    1349,  1332,  1774,     0,  1396,  1383,  1387,   478,   468,  1774,
     461,   476,   477,  1806,  1648,     0,  1644,  1644,  1644,     0,
    1627,     0,  1644,  1600,     0,  1644,  1644,  1871,     0,   333,
    1828,   312,   514,  1801,  1801,  1764,  1814,   545,   513,   517,
     518,     0,     0,   644,  1801,   634,  1868,   635,  1877,  1876,
       0,  1801,     0,   647,   638,   643,  1821,   639,     0,   642,
     649,   646,   640,   645,     0,   650,   641,     0,   661,   655,
     659,   658,   656,   660,   631,   662,   657,     0,  1821,     0,
    1801,   702,     0,     0,   680,   811,   816,   817,  1821,  1821,
     809,   810,  1821,   797,  1398,  1879,  1878,   794,   786,   788,
     789,     0,  1398,     0,     0,     0,   803,   792,     0,   800,
     783,   799,   784,  1559,  1558,     0,  1544,     0,  1826,  1591,
    1408,   859,  1595,  1532,     0,  1666,   866,     0,   864,     0,
       0,  1516,   893,   914,   919,     0,     0,  1533,  1408,  1801,
    1677,  1592,   932,   723,   929,  1432,  1404,   724,   946,  1770,
     723,  1402,   952,   951,   950,   949,   960,  1403,  1801,   963,
       0,   966,   967,     0,  1801,   970,   971,   972,   973,     0,
     974,  1403,   961,     0,   817,   939,   940,   937,   938,     0,
    1408,     0,   889,   997,  1012,  1014,  1013,  1007,  1009,  1015,
    1438,  1004,  1001,  1438,  1005,  1468,  1441,  1442,  1828,  1038,
    1512,   723,  1046,  1047,  1863,  1062,  1063,  1065,  1067,  1068,
    1064,  1066,  1057,  1863,  1053,     0,  1102,     0,  1104,  1103,
    1105,  1087,  1097,     0,     0,  1081,  1255,     0,  1792,     0,
    1115,  1408,     0,     0,     0,  1133,  1143,  1156,  1152,  1157,
    1153,  1158,     0,  1148,  1392,  1391,  1155,  1164,  1386,  1578,
    1579,  1580,     0,     0,  1430,     0,   723,     0,  1203,     0,
       0,     0,  1240,     0,  1244,  1243,  1236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1224,  1225,  1671,  1430,
       0,  1287,  1855,  1855,  1302,  1303,  1304,     0,  1408,     0,
       0,   722,     0,  1658,     0,  1304,  1192,  1760,   462,     0,
    1801,  1656,  1628,  1629,  1630,  1654,  1651,  1652,  1626,  1645,
       0,  1624,  1625,   494,     0,     0,  1923,  1924,  1801,  1764,
       0,   511,   515,   523,   519,   521,   522,   524,   526,     0,
     632,   633,   636,   637,     0,   664,  1822,  1801,  1861,  1801,
     665,   663,   677,  1801,   696,   697,   700,     0,   691,   706,
     708,  1801,   819,     0,     0,   807,   808,     0,   723,   798,
    1400,   785,   787,  1398,   795,   790,   791,   804,   793,  1561,
    1543,  1560,  1676,     0,   723,   855,  1410,  1593,  1594,  1408,
       0,  1665,   865,   867,   874,   872,   901,  1799,   918,   917,
     922,     0,  1431,   723,  1429,   726,  1406,   941,     0,   964,
     965,   968,   969,     0,  1434,  1434,   962,   943,   955,   956,
     954,   957,     0,   983,     0,   884,   885,   695,     0,  1438,
    1438,  1011,   723,  1008,     0,  1045,   723,  1048,  1043,     0,
       0,  1069,     0,     0,     0,  1098,  1100,     0,  1093,  1107,
    1094,  1095,  1086,  1089,  1107,  1247,  1801,  1806,     0,  1793,
    1254,  1116,  1119,     0,  1133,  1132,  1136,  1125,     0,  1144,
    1141,     0,     0,  1166,  1165,   723,  1186,  1418,  1191,  1193,
       0,  1205,  1438,  1438,  1200,  1206,  1223,  1235,  1237,  1227,
    1228,  1229,  1233,  1230,  1234,  1231,  1232,  1226,  1672,  1280,
       0,  1277,  1278,  1272,     0,  1265,  1903,  1902,     0,  1856,
    1290,  1290,  1413,     0,  1676,  1310,     0,   715,     0,  1659,
    1335,  1336,     0,  1339,  1342,  1346,  1340,  1430,  1761,     0,
     482,   479,   480,     0,  1646,   314,   516,  1815,  1816,  1603,
    1604,   533,   528,   532,   531,   357,   546,   520,   525,  1573,
     654,  1571,  1572,   653,   670,   676,     0,   673,   698,   699,
     708,   726,     0,     0,  1398,   812,   814,   813,  1399,   723,
    1397,   796,  1408,  1533,  1409,   723,  1407,  1592,   856,  1667,
    1564,  1565,  1884,  1885,   903,   723,  1826,  1800,   900,   899,
     895,     0,  1680,  1681,  1682,  1683,  1684,  1685,  1686,  1687,
    1679,  1433,     0,   976,   975,   978,     0,  1576,  1577,   977,
       0,   947,  1408,  1499,  1408,  1499,   886,   887,     0,   891,
     890,   892,  1010,  1016,  1006,  1040,  1044,  1055,  1058,  1059,
    1782,  1051,  1863,  1056,  1107,  1107,     0,  1092,  1090,  1091,
    1096,  1257,     0,  1251,  1794,  1408,  1126,  1135,     0,  1159,
       0,     0,  1173,     0,  1422,   723,  1417,  1194,   723,   723,
    1207,  1279,  1269,  1273,  1274,  1275,  1276,  1267,  1288,  1291,
    1289,   723,  1298,  1415,  1801,  1408,  1408,   717,  1324,  1658,
    1338,  1790,  1344,  1790,  1413,   723,   723,  1384,  1394,  1425,
    1426,  1393,  1390,  1389,  1811,   481,   475,   527,  1890,  1891,
     529,   359,   547,   668,   666,   669,   667,   671,   672,     0,
     648,   674,   675,     0,   726,   818,   823,  1801,   825,   826,
     827,   850,  1801,   828,   829,   830,   831,   832,     0,   833,
     834,   836,   837,   838,     0,   839,   824,  1762,   840,   849,
     843,   820,   821,   842,   782,  1401,   857,  1411,   723,   877,
     902,     0,   894,  1900,  1901,  1435,   958,   985,     0,   984,
       0,   888,  1060,  1783,     0,     0,  1088,  1099,  1107,  1797,
    1797,  1108,     0,     0,  1260,  1256,  1250,  1120,  1134,     0,
    1167,  1801,  1430,     0,     0,  1168,     0,  1172,  1423,  1201,
    1208,  1414,   723,  1412,     0,  1312,  1311,  1350,   716,     0,
    1337,     0,  1790,  1341,     0,  1333,  1427,  1428,  1424,  1812,
    1813,  1388,     0,  1801,  1801,     0,   534,   535,   536,   537,
     538,   539,     0,   549,   651,   652,     0,     0,     0,   841,
    1801,  1434,  1434,  1763,     0,   822,   904,   896,  1408,  1408,
       0,  1070,  1106,  1798,     0,     0,  1801,  1258,     0,     0,
    1248,  1252,     0,     0,  1163,  1176,  1420,  1421,  1175,  1171,
    1169,  1170,  1416,  1305,  1358,   718,  1343,     0,  1347,  1910,
    1909,  1801,     0,     0,  1912,     0,  1801,  1801,   530,  1848,
       0,   845,   844,     0,   847,   846,   848,  1574,  1575,   987,
     986,  1061,  1110,  1109,     0,  1261,  1801,  1438,  1174,  1419,
    1381,  1380,  1359,  1351,  1352,  1762,  1353,  1354,  1355,  1356,
    1379,     0,     0,  1345,     0,   544,   540,  1911,     0,     0,
    1795,   604,     0,     0,     0,     0,  1801,  1826,   548,  1801,
    1801,     0,   555,   557,   566,   558,   560,   563,   550,   551,
     552,   562,   564,   567,   553,     0,   554,   559,     0,   561,
     565,   556,  1823,  1764,   707,   835,  1259,     0,  1160,     0,
    1853,     0,  1828,   541,   543,   542,  1796,   617,   606,   600,
    1801,   608,   463,     0,  1438,     0,     0,     0,     0,     0,
       0,     0,   599,   601,   607,     0,     0,   610,   615,  1824,
    1825,  1803,   612,  1262,     0,  1854,     0,  1377,  1376,  1375,
       0,   605,     0,  1861,   609,   597,  1676,   592,  1546,  1914,
       0,     0,  1916,  1918,     0,  1922,  1920,   568,   573,   576,
     579,   570,   574,   569,   575,   618,     0,   602,   603,   613,
     614,   611,  1378,  1883,  1882,  1836,  1371,  1365,  1366,  1368,
     590,   588,   589,     0,     0,   582,   586,   583,   467,   616,
    1828,     0,   591,  1547,  1913,  1917,  1915,  1921,  1919,   578,
     571,   577,   581,   572,   580,     0,  1837,  1828,  1374,  1369,
    1372,     0,  1367,   587,   584,   585,   459,     0,   594,     0,
       0,  1373,  1370,     0,   458,   596,   593,   595,   598,  1364,
    1361,  1363,  1362,  1357,  1360,   460
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     7,     8,     9,    10,    11,    30,
      12,    31,    44,    45,    34,    35,    19,   320,   432,   618,
      32,    50,    14,    25,    37,    95,   131,   132,    20,    29,
      41,    69,    70,   148,   208,   267,    71,   145,   194,   195,
     196,   197,   198,   199,   200,   331,   201,    72,   146,   205,
     206,   207,   262,   304,   263,    73,    74,    75,    76,    77,
     116,   157,   276,   158,    78,   133,   237,   238,   239,   324,
     343,   240,   711,    79,   121,    80,   150,   151,   152,   270,
      81,   177,   178,    82,    83,   244,    84,    85,    86,    87,
      88,    89,    90,   123,   224,   165,   225,   335,   348,   373,
     374,   478,   479,   440,   513,   506,   375,   468,   376,   580,
     377,   378,   379,   380,   381,   520,   544,   382,   383,   384,
     385,   386,   484,   387,   388,   417,   389,   451,   285,   286,
     287,   288,   319,   289,   315,   425,   426,   458,   341,   355,
     399,   433,   434,   503,   435,   534,   566,   567,   838,   568,
    1691,  1026,   771,   569,   570,   706,   844,   571,   572,   839,
    1019,  1020,  1021,  1022,   573,   574,   575,   576,   608,   460,
     546,   461,   462,   497,   498,   553,   499,   531,   532,   592,
     766,   825,   826,   827,   828,   829,   500,   686,   591,   664,
     665,   666,   803,   667,   668,   669,   670,   671,   672,   673,
    2584,  2734,   674,   793,   962,  1168,   791,  1404,  1407,  1408,
    1673,  1670,  2181,  2182,   675,   676,   677,   678,   679,  1009,
     799,   800,  1202,   680,   681,   496,   586,   524,   615,   550,
     717,   784,   848,  1210,  1444,  1698,  1699,  1984,  1985,  1986,
    1987,  1700,  2191,  2192,  2347,  2466,  2467,  2468,  2469,  2470,
    2471,  1981,  2196,  2473,  2529,  2588,  2589,  2667,  2710,  2713,
    2590,  2695,  2696,  2591,  2702,  2736,  2592,  2593,  2594,  2595,
    2632,  2619,  2633,  2596,  2597,  2598,  2637,  2599,  2600,  2601,
     590,   785,   851,   852,   853,  1212,  1445,  1734,  2357,  2358,
    2359,  2363,  1735,  1736,   720,  1452,  2010,   721,   856,  1035,
    1034,  1215,  1216,  1217,  1449,  1742,  1037,  1744,  2210,  1159,
    1390,  1391,  2327,  2448,  1392,  1393,  1950,  1806,  1807,  2055,
    1394,   788,   909,   910,  1109,  1223,  1224,  1770,  1456,  1512,
    1750,  1751,  1747,  2012,  2214,  2391,  2392,  2393,  1454,   911,
    1110,  1230,  1468,  1466,   912,  1111,  1237,  1788,   913,  1112,
    1241,  1242,  1790,   914,  1113,  1250,  1251,  1522,  1842,  2075,
    2076,  2077,  2046,  1128,  2240,  2234,  2399,  1477,   915,  1114,
    1253,   916,  1115,  1256,  1484,   917,  1116,  1259,  1489,   918,
     919,   920,  1117,  1269,  1498,  1501,   921,  1118,  1272,  1273,
    1506,  1274,  1510,  1834,  2070,  2261,  1817,  1831,  1832,  1504,
     922,  1119,  1279,  1518,   923,  1120,  1282,   924,  1121,  1285,
    1286,  1287,  1527,  1528,  1529,  1852,  1530,  1847,  1848,  2081,
    1524,   925,  1122,  1296,  1129,   926,  1123,  1297,   927,  1124,
    1300,   928,  1125,  1303,  1859,   929,   930,  1130,  1863,  2088,
     931,  1131,  1308,  1571,  1872,  2091,  2278,  2279,  2280,  2281,
     932,  1132,  1310,   933,  1133,  1312,  1313,  1577,  1578,  1884,
    1579,  1580,  2102,  2103,  1881,  1882,  1883,  2096,  2287,  2421,
     934,  1134,   935,  1135,  1322,   936,  1136,  1324,  1587,   937,
    1138,  1330,  1331,  1591,  2117,   938,  1139,  1334,  1595,  2120,
    1596,  1335,  1336,  1337,  1898,  1900,  1901,   939,  1140,  1344,
    1913,  2302,  2432,  2504,  1603,   940,   941,  1141,  1346,   942,
     943,  1142,  1349,  1610,   944,  1143,  1351,  1914,  1613,   945,
     946,  1144,  1354,  1619,  1917,  2134,  2135,  1617,   947,  1145,
    1359,   159,  1631,  1360,  1361,  1936,  1937,  1362,  1363,  1364,
    1365,  1366,  1367,   948,  1146,  1317,  2291,  1581,  2426,  1886,
    2105,  2424,  2500,   949,  1147,  1375,  1939,  1639,  2150,  2151,
    2152,  1635,   950,  1377,  1641,  2318,  1153,   951,  1154,  1379,
    1380,  1381,  2162,  1645,   952,  1155,  1384,  1650,   953,  1157,
     954,  1158,  1386,   955,  1160,  1395,   956,  1161,  1397,  1659,
     957,  1162,  1399,  1663,  2170,  2171,  1955,  2173,  2332,  2453,
    2334,  1661,  2449,  2514,  2553,  2554,  2555,  2743,  2556,  2687,
    2688,  2721,  2557,  2649,  2558,  2559,  2560,   958,  1163,  1401,
    1608,  1956,  1906,  2337,  1665,  2019,  2020,  2220,  1507,  1508,
    1811,  2035,  2036,  2226,  2322,  2323,  2443,  2126,  2505,  2127,
    2306,  2338,  2339,  2340,  1804,  1805,  2054,  2255,  1306,  1307,
    1289,  1290,  1557,  1558,  1559,  1560,  1561,  1562,  1563,   991,
    1189,  1411,   993,   994,   995,   996,  1260,  1261,  1492,  1347,
    1355,   395,   396,  1029,  1368,  1369,  1568,  1338,  1244,  1245,
     541,   481,   301,   694,   695,   482,    98,   153,  1298,  1263,
    1232,  1469,  2657,  1418,   998,  1775,  2030,  2104,  2229,  1254,
    1339,  2200,  2536,  2256,  1908,  2201,  1318,  1372,  1234,  1000,
    1264,  1265,   742,   795,   796,  2202,   271,  2194,   179,  1235,
     768,   769,  1236,  1003,  1004,  1005,  1197,  1170,  1426,  1422,
    1415,   501,  2172,   537,  1472,  1786,  2041,  1606,  2154,   282,
    1495,  1800,  2250,   805,  1108,  2179,  2484,   606,   339,   687,
    1458,   423,  1218,   202,   115,   393,  2414,   337,   352,  1027,
     778,  2110,  2617,  2494,  2241,    96,   214,   414,   747,  2461,
    1980,   774,   402,  1997,  2641,   809,  1406,   218,   488,  2717,
     168,   390,   738,   102,   726,   683,   842,  2646,  2160,   350,
    1570,   965,  1304,   407,   736,  1203,  1343,   391,  1752,  1772,
    1493,  2685,  2235,   184,   698,  2350,   715,   347,   598,  1486,
    2405,  2158,   538,   203,  2521,  2527,  2670,  2671,  2672,  2673,
    2674,  1702
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2393
static const yytype_int16 yypact[] =
{
   -2393,   280,   524, -2393,   230,   266, -2393,   524, -2393, -2393,
     666, -2393, -2393,   666,   666,   -27,   -27, -2393,   687, -2393,
     742,   568,   803, -2393, -2393,   942,   942,   555,   664, -2393,
   -2393,    95,   666,   -27, -2393, -2393,   814,   762, -2393, -2393,
     802,  1323,   -27, -2393, -2393, -2393,   568,   805, -2393, -2393,
     -79, -2393,   759,   759,   864,   885,  1098,  1098,  1098,   945,
     759,   948,   907,   913,  1098,   939,   963,  1345, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,  1183, -2393, -2393, -2393, -2393,
    1211, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
    1259,  1019,    95, -2393, -2393,  1025,    62, -2393, -2393,  1098,
    1098, -2393,  1098,   933,  1377,   933,  1037,  1098,  1098, -2393,
   -2393,   933, -2393, -2393, -2393,   947,   807,  1040, -2393, -2393,
     992, -2393,  1049, -2393, -2393, -2393, -2393,   566, -2393, -2393,
   -2393,  1164, -2393,  1098,   852,   933,  1251,    12, -2393, -2393,
   -2393, -2393, -2393,  1265,  1055,   675,  1319, -2393,  1022, -2393,
     947, -2393,    53, -2393, -2393, -2393, -2393, -2393,  1146,   -31,
    1098,    13, -2393, -2393, -2393,   469, -2393, -2393, -2393,   713,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,   852, -2393,  1089,
   -2393,   299, -2393, -2393,   933, -2393,  1137, -2393,  1145,  1153,
    1548,  1098, -2393, -2393, -2393,   364, -2393, -2393, -2393, -2393,
   -2393,   842,  1557,  1098,    79, -2393,   105, -2393, -2393,     7,
   -2393, -2393, -2393, -2393,  1362,   -31, -2393,  1391,   759,   759,
   -2393,  1146,  1174,   118,   -50, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,   825, -2393,
      97, -2393,   852, -2393, -2393,  1302, -2393, -2393, -2393,  1098,
    1230,  1385, -2393, -2393, -2393, -2393,   991,  1098,  1138,  1416,
     -44, -2393,  1620,   530,  1196, -2393, -2393,  1197,  1542, -2393,
    1362, -2393,   759, -2393, -2393, -2393, -2393,  1146, -2393,  1200,
    1342, -2393,   759, -2393,   751, -2393,   157, -2393, -2393, -2393,
   -2393, -2393,   825, -2393,  1400,  1385, -2393, -2393, -2393,   577,
   -2393, -2393, -2393,  1401, -2393, -2393, -2393, -2393, -2393,  1386,
   -2393, -2393, -2393, -2393, -2393,  1205, -2393, -2393, -2393,  1638,
    1561,  1213, -2393, -2393,   825, -2393, -2393,    58, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,  1235, -2393,  1477,
    1546,  1219, -2393,  1658, -2393, -2393, -2393, -2393,  1773, -2393,
    1589, -2393,  1173,  1227,  1286, -2393,   825,  1410,  1338,   388,
    1289, -2393,  1292,  1098,  1634,   213,   -41,   892, -2393,  1189,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,  1274,
   -2393,  1436, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
    1660,  1098, -2393,  1173, -2393,  1173, -2393, -2393,  1250,    30,
   -2393, -2393,  1098, -2393,  1478, -2393, -2393,  1000, -2393, -2393,
    1017,  1098,  1098, -2393,  1098,  1098, -2393,  1638, -2393,   108,
    1098,  1410, -2393,  1314,  1215,  1173, -2393,  1390, -2393, -2393,
   -2393, -2393,  1217, -2393,  1220,    64,   226,  1098, -2393, -2393,
     778, -2393, -2393,   -37,  1307,   933,   933, -2393,  1411,  1411,
    1420, -2393,   933,  1098, -2393, -2393, -2393,  1385, -2393,  1339,
    1474, -2393, -2393,  1287, -2393, -2393, -2393, -2393, -2393,   933,
   -2393, -2393,   -36,   -36,  1727,   -36, -2393, -2393,   -36,   449,
   -2393, -2393, -2393, -2393, -2393,   786, -2393, -2393, -2393, -2393,
   -2393, -2393,   744, -2393,  1293,  1347,  1488,  -209,  1295,  7027,
   -2393,  1244, -2393, -2393,    19, -2393, -2393, -2393, -2393,  1205,
   -2393, -2393, -2393, -2393, -2393,  1098,   933,  1246, -2393,  1246,
   -2393, -2393,  1299,  1358,  1388, -2393,  1303, -2393,  1305, -2393,
    1672, -2393,  1674, -2393,  1163, -2393,  1636,  1330, -2393, -2393,
     933,   933, -2393,   -52, -2393, -2393,  1220, -2393,  1311,  1370,
    1376, -2393, -2393, -2393,    60,  1589,  1098,  1123,  1123,  1098,
      22,  1410,  1098,  1744, -2393,  1461, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393,   759,    94, -2393,  1266,
   -2393,   933, -2393,  1460, -2393, -2393,  1220, -2393,  1318,  1379,
   -2393,  7198,   643,  1567,  1385,  1280,  1098,  1744,  1284,   -96,
     -37,  1385,  1279,  1098, -2393, -2393, -2393,    42,   759, -2393,
   -2393, -2393,    54,   799, -2393,  1220, -2393,  1353,   780,   703,
   -2393, -2393,  -169,  -158,  -141,   340,   376,  1288, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,  1419, -2393,   591, -2393, -2393,
   -2393, -2393,   933,   933,  1574, -2393, -2393, -2393,   -19, -2393,
   -2393, -2393,  1098,   626, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393,   988,   -95, -2393,  1304, -2393,   463, -2393,  1360,
   -2393, -2393, -2393, -2393,  1284, -2393, -2393, -2393, -2393,  1554,
      68,  1595,  1309,  1098, -2393, -2393,  1098, -2393,  1077, -2393,
   -2393, -2393,  1177, -2393, -2393, -2393, -2393, -2393, -2393,  1692,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393,  1306, -2393, -2393,  1765,
    1372, -2393,  1357,  1378, -2393, -2393, -2393, -2393,  7579,   651,
    1796, -2393,  1423,  1423, -2393,  1077,  1518, -2393,  1525,  1525,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,  1381, -2393,
    1385,   107, -2393, -2393, -2393,  1385, -2393, -2393,  1415, -2393,
     454,   454, -2393, -2393,  1479,  1321,    34,  2837,  3944, -2393,
    1595,  1635,  1385,  1387,  7780,  1371, -2393,   933, -2393,   651,
   -2393,  1392,  1580, -2393,  1634, -2393, -2393, -2393, -2393,  1525,
    1389, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393,  1077, -2393, -2393, -2393, -2393,    93,
    1345, -2393,   611, -2393, -2393, -2393, -2393,  1333, -2393,  6687,
   -2393, -2393,  1321,  1394, -2393, -2393,  1464,  4255, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,   575, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,  1444, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,   410,
   -2393, -2393,  1508, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
    1343,  1385,  1372, -2393, -2393,  1732, -2393, -2393, -2393, -2393,
   -2393,  1396,  2987,    12,    12,  1403,  1404,  1406, -2393,  1407,
      12, -2393, -2393, -2393,  7877,  7780,  7877,  1409, -2393,  1396,
   -2393,    57,  1004,   730, -2393,  1679, -2393, -2393, -2393, -2393,
   -2393,  1381, -2393,  1412,  1413,  1414,  7780, -2393, -2393,   732,
   -2393,   651, -2393, -2393, -2393, -2393, -2393,   -37,   -37, -2393,
   -2393, -2393, -2393,  1662, -2393, -2393,  1360,  1385, -2393, -2393,
    1399, -2393,  1405, -2393,   114,   114,  1348,  1421, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,  -119,
    5147,  7780,   457,   -62,   466,  1173,   839,   579,  6096,  6201,
    1596,   929,   709,   839,   933,  1417, -2393, -2393,  6201, -2393,
   -2393,   839,  1333,  2462,   933,  5175,  6201, -2393,  1052,  3809,
    1173,   933,  1173,   933,    65,   399,   933,  1173, -2393, -2393,
   -2393, -2393, -2393, -2393,  5366,  5462, -2393, -2393,  1333,   134,
     933,  1173,   933,   933, -2393, -2393,  1631,  1547, -2393,  7105,
   -2393, -2393,  1381, -2393,  1369,  1373,  7780,  7780,  7780,  2987,
    1374, -2393,   941, -2393,  2987, -2393, -2393, -2393, -2393,  7780,
    7613,  7780,  7780,  7780,  7780,  7780,  7780, -2393,  2987,  7780,
    1004,  1462, -2393,  1426, -2393, -2393, -2393,  1833,  1345, -2393,
     210, -2393, -2393, -2393, -2393,   122, -2393,  -175,  -115,   248,
   -2393, -2393, -2393,  1750,   125,  1687,  1518,   933,  2987, -2393,
    1752, -2393,  5489, -2393, -2393, -2393, -2393, -2393,   174,   212,
   -2393,   457, -2393,  1440, -2393,    12, -2393, -2393, -2393, -2393,
    1755,  2490, -2393,   466, -2393, -2393,  1173,   721,  1518,  1756,
   -2393,   678, -2393,  1503, -2393, -2393,  1357,  1381,  1173,  1757,
    1338,  1068,  1758,  5710, -2393,  5809,   102,  1095,  1103,  1760,
     123,  1395, -2393, -2393, -2393,  1761,    59, -2393, -2393, -2393,
    4738, -2393, -2393,  1793,   575, -2393, -2393, -2393,   839, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393,  1456, -2393, -2393,   188,
    1333, -2393, -2393,   251, -2393, -2393, -2393, -2393, -2393, -2393,
    1437,  6201, -2393,  1454,  1762,  1853, -2393, -2393, -2393, -2393,
    1052,  1500, -2393,  1459, -2393,  4343,    -4,   837,  1463,  1466,
   -2393,  -177, -2393,  1475,  1769,   693, -2393,  1720, -2393,  1772,
    1338,  1774,  1720,   933,  1775,  1424, -2393,   955, -2393, -2393,
   -2393, -2393, -2393, -2393,  1648, -2393,   839, -2393,   214, -2393,
     390,  1890, -2393,    67, -2393,  1777,   640,   216,  1874,  1782,
    5044, -2393, -2393,   933,  1776,  5832,  1333, -2393, -2393,  -132,
   -2393, -2393, -2393, -2393,  3702, -2393,  1737, -2393,  1188,  1783,
    1822,  1785,  1720, -2393, -2393, -2393,   933,  1723,   198, -2393,
      76,   925, -2393, -2393,   372,  1495,  1496,  1497,   145, -2393,
    1381, -2393,  1499, -2393, -2393,   253,  1501,   925, -2393,   962,
     730,   730, -2393, -2393, -2393,  1014,  1509,   288,  1502,  1098,
   -2393,   -37,  1842,  1507,   766,  7505, -2393,  1098,  1553,  1652,
   -2393, -2393,  1855, -2393, -2393,   955,  1770, -2393,   580,  1676,
     -24,  1519, -2393,  1381, -2393, -2393, -2393,  6344,  1771, -2393,
    1745, -2393,  1597, -2393,  1633,  1719, -2393, -2393, -2393,  1395,
   -2393,   721, -2393, -2393, -2393,   868,   468,   933, -2393, -2393,
   -2393, -2393, -2393,  7780,  1704, -2393,  1371, -2393,  1173, -2393,
   -2393, -2393,  1747, -2393, -2393, -2393,  6201, -2393,  1685,   153,
    1682,  2101,  1498,  1815,  1815,  1815,  1815, -2393, -2393,  6201,
    6344, -2393, -2393, -2393, -2393,   929,   166, -2393,  1482, -2393,
    1484, -2393, -2393, -2393, -2393,  1417, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,  4509, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,    -3, -2393,
    1859,   951,  1816, -2393,   955,    69, -2393, -2393,  1632, -2393,
   -2393,    52,  7780, -2393,  1549,   839, -2393, -2393,  6344,  1500,
    1189,  1173, -2393, -2393, -2393, -2393, -2393,  1829,   933,   457,
   -2393,  1236, -2393, -2393, -2393, -2393,  1338,  2462, -2393, -2393,
   -2393,  1778, -2393, -2393,   481,  1869, -2393, -2393,   933,  1869,
    1555, -2393,  1381, -2393, -2393,   636,  1146, -2393, -2393,  4823,
   -2393,  1951,   729,    70, -2393, -2393, -2393,  1098, -2393,   409,
    6201, -2393,   506,  5929, -2393, -2393,   933, -2393,  1805, -2393,
   -2393,  6344, -2393,  1385, -2393, -2393,   955, -2393, -2393, -2393,
   -2393, -2393,  1874,  1779, -2393, -2393,  1236,  1723, -2393,  1874,
   -2393, -2393, -2393,  1478, -2393,   933,  1412,  1412,  1412,  2987,
   -2393,   -82,  1412, -2393,  7757,  1412,  1412, -2393,   651, -2393,
    1547, -2393, -2393,  1098,  1098,  1744,   634, -2393, -2393, -2393,
   -2393,  1800,   -11, -2393,  1098, -2393,   559, -2393, -2393, -2393,
    1402,  1098,  2462, -2393, -2393, -2393,  1706, -2393,  1385, -2393,
    1954, -2393, -2393, -2393,   933, -2393, -2393,   933, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,  1809,  1706,   647,
    1098, -2393,  1511,  1562, -2393, -2393, -2393,  1746,  1706,  1706,
      89,  1767,  1706, -2393,  1851, -2393, -2393, -2393,  1510,  1512,
   -2393,   955,  1851,  1786,  1599,  1725, -2393, -2393,  1751, -2393,
   -2393, -2393, -2393, -2393, -2393,   470, -2393,   933,  1518,  1823,
     964, -2393,    -5,   164,   839,  1581,  1597,   839, -2393,  1582,
     457, -2393,   575, -2393, -2393,  1657,  1670, -2393,   615,  1098,
   -2393, -2393, -2393, -2393, -2393,  1748, -2393, -2393, -2393,  2009,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,  1815,  1098, -2393,
     435, -2393, -2393,  1428,  1098, -2393, -2393, -2393, -2393,     6,
   -2393,  1766, -2393,  1473,  1746, -2393, -2393, -2393, -2393,  1837,
     964,  1841,   127, -2393, -2393, -2393, -2393,  2029, -2393,  1604,
     160, -2393, -2393,   166, -2393, -2393, -2393, -2393,  1547, -2393,
   -2393, -2393,  1919,  1909,  1417, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393,  1691,  1417, -2393,  1603, -2393,  2008, -2393, -2393,
   -2393,   740, -2393,   955,  1267, -2393,    81,   198,   515,   839,
     839,   964,  1858,  1173,   108,   994,  1920, -2393, -2393, -2393,
    2056, -2393,  1877, -2393, -2393, -2393, -2393,  1778, -2393, -2393,
   -2393, -2393,   933,  1949,  1747,   904, -2393,  1579, -2393,  1583,
     955,  1041, -2393,   470, -2393, -2393, -2393,  6201,  1146,  1146,
    1146,  1146,  1146,  1146,  1146,  1146,   729, -2393,   712,  1747,
     392, -2393,  1663,  1663, -2393, -2393,  -151,   933,   964,  1880,
    1637, -2393,  1640,  2081,   933,   300,   481,  2084, -2393,  1590,
    1098, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
     986, -2393, -2393, -2393,   933,   466, -2393, -2393,  1098,  1744,
     129,  1321, -2393, -2393, -2393,   933,   933, -2393, -2393,   344,
   -2393, -2393, -2393, -2393,   344, -2393, -2393,  1098,  1387,  1098,
   -2393, -2393, -2393,  1098, -2393, -2393, -2393,   146, -2393, -2393,
   -2393,  1098,  1592,   344,   344, -2393, -2393,   344, -2393, -2393,
    1803, -2393, -2393,  1851, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393,  1503,   -24, -2393, -2393,  1807,    36,  1899,   964,
     417, -2393, -2393, -2393, -2393, -2393,   -15,   101, -2393, -2393,
   -2393,   706, -2393, -2393, -2393, -2393, -2393, -2393,   344, -2393,
   -2393, -2393, -2393,   344,   471,   471, -2393, -2393, -2393, -2393,
   -2393,  1602,   839, -2393,   839,  1148, -2393,   736,   120,   166,
   -2393, -2393, -2393,  2029,   933, -2393, -2393, -2393, -2393,  1608,
    1084,    49,  1610,   417,   955, -2393, -2393,  2061, -2393, -2393,
   -2393, -2393,  1267, -2393,  1922, -2393,  1098,  1478,  1812, -2393,
   -2393,   839, -2393,   839,   994, -2393, -2393, -2393,  1034, -2393,
   -2393,   933,  6201,  1110, -2393, -2393, -2393,  1830, -2393, -2393,
    1861, -2393, -2393, -2393, -2393,  1583, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,   131, -2393,
     933, -2393, -2393, -2393,  1273, -2393, -2393, -2393,  7780, -2393,
    6201,  6201,  1666,  1801,  1503, -2393,   839, -2393,   417, -2393,
    1817, -2393,   955, -2393,  2019,  1697, -2393,   726, -2393,   445,
   -2393,  1590, -2393,   933, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393,  1351, -2393, -2393,   -40, -2393,   933, -2393, -2393,
   -2393, -2393, -2393, -2393,   685, -2393,   466,   685, -2393, -2393,
   -2393,   139,  2088,  2864,  1851, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393,  1726,  1935, -2393, -2393, -2393,  1937, -2393, -2393,
   -2393, -2393, -2393, -2393,  1847, -2393,  1518, -2393, -2393, -2393,
   -2393,   933, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393,  3509, -2393, -2393, -2393,  1352, -2393, -2393, -2393,
    2101, -2393,   964,  1781,   964,  1787, -2393, -2393,  6201, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,  1084, -2393,
    2040, -2393,  1417, -2393, -2393, -2393,   417,  1241, -2393, -2393,
    1241,   -75,   933, -2393, -2393,   964, -2393, -2393,  1780, -2393,
    2100,  1888,  1914,   971, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,   925, -2393, -2393,
   -2393, -2393, -2393,  1856,  1098,  1726,   964,  1661, -2393,  2081,
   -2393,  1595,  2060,  1595,  1666, -2393, -2393, -2393, -2393,  1870,
   -2393, -2393, -2393, -2393,  1356, -2393,   933,    83, -2393, -2393,
     129, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,   344,
   -2393, -2393, -2393,   344,   -12, -2393, -2393,  1098, -2393, -2393,
   -2393, -2393,  1098, -2393, -2393, -2393, -2393, -2393,    20, -2393,
   -2393,  2106, -2393, -2393,    56, -2393, -2393,  2156, -2393, -2393,
   -2393,  2864, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393,   933, -2393, -2393, -2393, -2393,  2101, -2393,   839, -2393,
     839, -2393, -2393, -2393,  2116,  2055,  1241,  1241, -2393,  1710,
    1710, -2393,  1831,  1173,   554, -2393,   933, -2393, -2393,  6201,
   -2393,  1098,   662,  1907,  1910, -2393,  1911, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393,   933, -2393, -2393, -2393, -2393,  1724,
   -2393,   933,  1595, -2393,   933, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393,   167,  1098,  1098,  1228, -2393, -2393, -2393, -2393,
   -2393, -2393,  1568, -2393, -2393, -2393,  2065,   344,   344, -2393,
    1098,   471,   471, -2393,   129, -2393, -2393, -2393,  1726,  1726,
    6201, -2393,  1241, -2393,  6201,  6201,  1098,  1173,  1173,  1834,
   -2393, -2393,  1698,   933, -2393, -2393,  1830, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393,  1104, -2393, -2393,   933, -2393, -2393,
   -2393,  1098,   129,   129, -2393,  1969,  1098,  1098, -2393,  1873,
    1731, -2393, -2393,   466, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393,   457,  1173,  1098, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,  1262, -2393, -2393, -2393, -2393,
   -2393,  1844,  2078, -2393,   129, -2393, -2393, -2393,   129,   129,
    1966,  1889,     4,  1385,  1905,  1689,  1098,  1518, -2393,  1098,
    1098,   933, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,   424, -2393, -2393,   598, -2393,
   -2393, -2393,  1275,  1744, -2393, -2393, -2393,   457, -2393,  1827,
    1784,    32,  1547, -2393, -2393, -2393, -2393, -2393,  1963, -2393,
    1098, -2393,  1372,  1876, -2393,  8044,  8044,  1393,  2079,  2005,
     -86,   -86, -2393, -2393, -2393,   -86,   -86, -2393, -2393, -2393,
   -2393,   626, -2393, -2393,   933, -2393,   117, -2393, -2393, -2393,
      61, -2393,  1231,  1387, -2393, -2393,  1503,  6550, -2393, -2393,
     612,  1118, -2393, -2393,  1141, -2393, -2393, -2393, -2393,    -2,
      37, -2393, -2393, -2393, -2393, -2393,  8044, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,  1867,   902,    61, -2393, -2393,
    1884, -2393, -2393,  1385,  1385, -2393, -2393, -2393,  1732, -2393,
    1547,   933, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,  2158, -2393,  1547, -2393, -2393,
    1902,   933, -2393, -2393, -2393, -2393,  1789,    82, -2393,  8044,
      11, -2393, -2393,  1385, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393,  1173, -2393
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2393, -2393, -2393, -2393, -2393,  2202, -2393, -2393, -2393,   229,
   -2393,  2164, -2393,  2120, -2393, -2393,  1291, -2393, -2393, -2393,
    1186, -2393, -2393,  1282,  2189, -2393, -2393,  2089, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,  2016,
     606, -2393, -2393, -2393, -2393, -2393,  2070, -2393, -2393, -2393,
   -2393,  2013, -2393, -2393, -2393, -2393, -2393, -2393,  2147, -2393,
   -2393, -2393, -2393,  2003, -2393, -2393, -2393, -2393,  1988, -2393,
   -2393,   452, -2393, -2393, -2393, -2393, -2393,  2077, -2393, -2393,
   -2393, -2393,  2052, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,  1072, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393,  1711, -2393,  1821, -2393,
   -2393, -2393,  1763, -2393, -2393, -2393, -2393,   341, -2393, -2393,
    1948, -2393, -2393, -2393, -2393, -2393,  1811, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393,  1212, -2393, -2393, -2393,  1458, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393,   589, -2393, -2393,  1740, -2393,  -759,  -829, -2393, -2393,
   -2393,   334, -2393, -2393, -2393, -2393,  -522, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -1414,   796,  1494,   488,   503, -1410,
   -2393, -2393, -2393,  -951, -2393,  -453, -2393, -2393,   843, -2393,
     359,   581, -2393,    72, -1409, -2393, -1407, -2393, -1406, -2393,
   -2393,  1450, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,   265,
   -1782, -2393, -2393,  -901, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393,  1418, -2393, -2393, -2393,    44,    47,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393,  1223,   137, -2393,   178, -2393, -2393, -2393, -2393, -1792,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -1344, -2393, -2393,
    -697, -2393,  1476, -2393, -2393, -2393, -2393, -2393, -2393,  1039,
     510,   516, -2393,   431, -2393, -2393,  -123,  -109, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,   486, -2393, -2393,
   -2393,  1026, -2393, -2393, -2393, -2393, -2393,   794, -2393, -2393,
     199, -2393, -2393, -1272, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393,   795, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393,   769, -2393, -2393, -2393, -2393, -2393,    17, -1769, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393,   754, -2393, -2393,   752, -2393, -2393,   428,   203, -2393,
   -2393, -2393, -2393, -2393,   989, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,     8,   714, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
     710, -2393, -2393,   182, -2393,   408, -2393, -2393, -1352, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393,   960,   704,   180, -2393, -2393, -2393, -2393, -2393,
   -2393, -2304,   957, -2393, -2393, -2393,   175, -2393, -2393, -2393,
     391, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393,   339, -2393, -2393,
   -2393, -2393, -2393, -2393,   680,   162, -2393, -2393, -2393, -2393,
   -2393,  -135, -2393, -2393, -2393, -2393,   365, -2393, -2393, -2393,
     936, -2393,   940, -2393, -2393,  1156, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,   148, -2393, -2393, -2393, -2393,
   -2393,   930,   358, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393,   -14, -2393,   362, -2393, -2393,
   -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
    -373, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
    -183, -2393,   652, -2393, -2393, -1673, -2393, -2393,  -672, -2393,
   -2393, -1727, -2393, -2393,   -13, -2393, -2393, -2393, -2393,  -113,
   -2201, -2393, -2393,   -17, -1842, -2393, -2393, -1954, -1544, -1079,
   -1462, -2393, -2393,   763, -1777,   172,   173,   176,   179,  -124,
      16,  -779,   387,   318, -2393,   656,   923, -1383, -1088,  -876,
     975, -1562,  -392,  -159, -2393, -1310, -2393, -1039, -2392,   854,
    -528,   -89,  2033, -2393,  1641,  -556,    27,  2182, -1077, -1076,
     147, -1033, -2393, -1102, -1167, -2393,   413, -1298, -1893, -1105,
    1086, -1068, -2393, -2393,   627, -1127, -2393,   -78,   876,  -635,
   -2393, -2393,  -103, -1200,  -765,  -111,  2068,  -998,  2098,  -666,
    1517,   302,  -405, -2393, -2393, -2393,  -142,  1354, -2393, -2393,
     421, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393, -2393,
   -1971, -2393, -2393,  1588, -2393, -2393,  -213,  -591,  1927, -2393,
   -1182, -2393, -1321,  -260,  -633,   756, -2393,  1836, -1445, -2393,
    -780, -2393, -2393,   -73, -2393,    -8,  -659,  -359, -2393, -2393,
   -2393, -2393,  -193,  -371, -2393, -1207, -1547,  2133,  1900, -2393,
   -2393,  -331, -2393, -2393,   970, -2393, -2393, -2393,   407, -2393,
     260, -1938, -1483, -2393, -2393, -2393,  -172,   467, -1405, -1330,
   -2393, -2393, -2393,  -667, -2393, -2393,  1642, -2393,  1797, -2393,
   -2393, -2393,   775, -2393, -1768,  -270, -2393, -2393, -2393, -2393,
   -2393, -2393
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1873
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   749,   160,   692,   415,   139,   245,
     960,  1166,   581,  1277,   138,   992,   141,   741,  1371,  1460,
    1031,   767,   147,   215,   787,  1441,   849,   404,  1262,  1895,
    1007,  1728,   139,   427,  1887,  1730,  1731,   268,  1732,  1733,
    1738,  1796,  1288,   464,   699,   437,   180,  1299,   103,   104,
     105,  1487,  1855,  1899,  1309,  1299,   111,  1643,  1627,  1620,
    2205,  2222,  2066,   708,  1849,   463,  1496,   776,  1370,  1299,
    2686,  2050,  2128,  1243,  1353,   211,  1525,  1233,  1876, -1828,
      99,   246,  1425,   801,  1780,  1276,  1280,   107,   259,  2024,
     854,   134,   135,   849,   136,  1305,  1436,  2155, -1583,   143,
     144, -1584,  1323,  1325,   411,  1640,   264,  2236,   161,   392,
     220,  2259,  1858,  2073,   291, -1872,   345,   448,  2476,   279,
    1583,  1382,  1233,   832,   832,   169,   114,  1877,  1186,  1773,
    2064,  2371,  1455,   801,  -683,   127,   529,  1840,  1593,  -681,
     297,  1017,   215,  1974,   535,   360,   752,  1186,  1480,  1771,
    2422,  2232,   219,    94,  1708,  1455,  1709,  1745,   321,  1966,
   -1859,  2153,  2647,  1214,  2112,   836,  1983, -1770, -1828, -1770,
    2189,  1214,  1519,  1633,   832,  2709,  1214,   535,  2208, -1872,
    2481,  1844,  2739,   251,   327,   -96,  1854,  1844,   221,  1222,
   -1770, -1806, -1770,  2325,  1258,   258,   413,   419, -1589,  1815,
    2284,   216,  1243,   430,  2198,  1891,  1182,  1024,  2269,  1247,
     583,  1443,   696,  2620,  2712, -1774,  1186,   703,  2211,   480,
     505,  2165,  1567,   745,   283,  1671,  1862,  1200,   453,    23,
     182,  2507,  1470,  1567,   128,  1447,  2740,   724,    42, -1587,
    2606,   295,  1450,   525,  2741,   274,   275,  1878,   724,   299,
    1812,  1896, -1841,  1240,    94,   704,   418,  1564,  2689,  2735,
      43,  2462,  1653,   850, -1801,   724,   610,  1352,  1948, -1589,
   -1551,  2463,  -512,  -683,  2519,  2328,  1875,  -683,  -681,  2683,
       3, -1872,  -681,  2684,  2520,   212,   794,  1402,  1584,  1625,
    1299,  1535,    94,  2464,  1567,  2689, -1657,  1214,   611,   311,
    -512,  -512,  1448,  2643,   204,  2549,  1174,  1175,   725,   314,
    1879,  2084,  2228,  1180,  1672,    24,  1774,  1240,   183,   727,
    1654,    43,   697,  2465,  1186,  2621,   -96,   412,  2742,  2237,
     850,  2114,  1238,   584,  -683,  2341,   729,  1171,   284,  -681,
     139,  1953,   139,   139,  1574,  1204,   493,  1382,  1959,   139,
    2221,  1520,   465,   243, -1770,   410,   485,   486,  1952,  1186,
    1248,  1405,  1249,   491, -1872,   746,   139, -1612,   603,   507,
     507,  2311,   507,   -35,   753,   507,   514, -1770, -1872,  1262,
     485,  2089, -1551,   424,  1451,  2189,   137,  1967,  1849,  1002,
    2092,  1849,   217,  2418,   436,   449,  1258,  1414,  1414,  1414,
     757,  2039,   154,   443,   444,  1258,   445,   446,   280,  2238,
    1427,  1429,   452,   139,  -512,  2198,   129,  1435,  2364,  1126,
    1749,   187,   431,  2423,  1358,  2190,   755,   542,   188,   469,
     281,   283,  1262, -1770,  1781,  1471,     5,   139,   139,   973,
    1388,   974,  -512,  1186,   760,   492,  1288,  2233,  1594,   260,
     413,   542,   582,  2648,   761,  1187, -1770,   450,   794,  2052,
     837,  1205,  1206,  2023, -1806,  2351,  2056,  1315,   137,   137,
     709, -1774,   755,  1809,  1187,  -683,  2082,  2270,   139, -1774,
    -681,   137,   368,   689, -1774,  1358,  1839,  1841,  1813,  2065,
     700,  1569,   582,  1389,   137,  2396, -1859,   139,  -688,  1006,
    1262,  1497,   137,   137,  2389, -1872,  1188,   540,  1890,  1299,
     980,   243,   255,   756,  1628,   775,   394,  2085,    97,   130,
    2047,  2078, -1801,   536,  1564,  1674,   577,  2534,  2535,  1860,
     794,  -512,   855,  1006,   762,  2407,   740,  2409,  1880,  2482,
     292,  2394,   137,  1187,  1013,   284,   593,   705,   595,  1567,
     743,   600,   602,  1357,   604,  1892,   536,   265,   149,  1018,
    1903,  1526,  2239,  1262,   346,   710,   137,  1173,  2427,   394,
     137,  2033,  2131,   466,  -688,  1442,   261,  1965,  1475,  1002,
    1002,  1002,  2037,   682,  1550,  2097,  1388,   137,   691,  2309,
    2508,  1388,  1127,  1462, -1653,   702,  1926,   243,  2445,  2446,
     154,  1002,   757,   609,   763, -1774,  1511,  1941,  1497,   322,
    1945,   757,   834, -1774,  1845, -1841,  1575,  1849,  1949,  2271,
    1845, -1774,  2136, -1673,  -686,  1846, -1774, -1872,   467,   757,
   -1872,  1846,   189,  1191,   137,   707,  2156,  2066,  1192,  1389,
    2190,   973,  1258,   974,  1389,  1708,   760,  1709,   211,   764,
     973,  1187,   974, -1872,   748,   760,   761,   351,  1814,   835,
     755,  1626,  -512, -1551,   840,   761,  1148,  1023,  1942,   684,
    1358, -1551, -1551,   760,  2218,   757, -1551,   845,   845,  2004,
    2189,   963,    15,   761,  1258,  2699,  1187,  2059,  1576,  2262,
    2224,  2264,   243,   137,  1008,   780,  1262,  2526,   781,   765,
    -686,   154, -1650,   222,   190,   512,  1002,   758,   759,  2251,
     843,  2043,   980,  1240,  1798,  2698,  1358,   739,    16,   760,
     243,   980,  1252,  1257,     4,  1270,  2029,   154,  1316,   761,
    2295,  1801,   187,  2108,  1342, -1776,   762,  1686,  2274,   188,
    2242,   226,  2276, -1872,   325,   762,   724, -1774,  1345,  1876,
    1350,  2045,  2290,  2630,  2078,  1376,  1149,  2498,  2005,   305,
     191,  2539,  2540,   762,  1002,   192,  2342,  1928, -1872,  1398,
    1187,  1002,  1002,  1002,  1421,  1929,   344,   517,  1126,  1421,
    -678,  2304,   724,  2326,  1002,  1002,  1002,  1002,  1002,  1002,
    1002,  1002,  2125,  1421,  1002,  1943,  2285,  1150,  1877,  2415,
    2704,   253,  2157,   243,   243,   137,   763,  1025,   400,   762,
      27,  1990,  2111,  1299,  1567,   763,   252,   731,  1636, -1872,
      18, -1655,  2567,  1464,  2060,  1776,  1151,    28,  1693,  2109,
   -1786,  1191,  1748,   763,   328,   405,  1192,  1629,  1490,   685,
     227,  1835,  1836,  1837,  1838,  1258,  1342,   154,   757,   137,
    1165,   764,  1797,   733,  2189,  2199,  1694,  1695,   212,  2668,
     764,  2497,   253,   757,  1481,     5,   223, -1788,  1801,  2343,
    2186,  2499,  1535,  1630,  2330,  2395,  1499,  1637,   764,   763,
    1638,  2397,  1978,  1979,  2335,  1689,   406,   973,  2631,   974,
     757,  2400,   760,  1803,  2138,   137,   470,   471,   472,   187,
     306,   765,   761,   154,   137,  1970,   188,   760,  1291,     5,
     765,  1749,   518,   243,   139,   139,  1209,   761,  1878,  -678,
     129,  1152,   137,  -678,   764,   228,  2203,  2635,   765,   973,
    1342,   974,  2416,  2417,   760,  2190,  2545,  2257,  2257,  1502,
    1930,  1910,    33,   189,   761,  2215,  2216,   722,  1991,  2217,
     137,  1127, -1101,  2305,   137,  2353,  2199,  1803,   980,   137,
    1864,  2438,   137,  1865,  2439,  2440,  1866,  1867,    36,   229,
    1258,   137,  1931,  1311,   765,   137,   137,  2441,  1604,   230,
    -678,  1879,   762, -1872,  2263,   243,  2265,  2243,  2244,  2245,
    2253,  2456,  2457,   231,  1932,  2254, -1101,   762,    94,  1387,
     980,  2273,  2148,  2608,   723,  2149, -1101,    39, -1872,  1246,
     782,   519,   329,  1266,  2354,   190,   473,  2038,  2336,  1611,
    1266,  1301,  1973,   130,   762,  1262,  2034,  1605,  1266,  2401,
     474,  1320,  1292,  1293,  1268,  1567,  1341,   228,  1348,    94,
    1348,  1356,  1373,  1320,  2267,  1410,  1910,  1933,   187,  1294,
    2246,   757,   763,  2308,  2486,   188,  1319,   807,    40,   232,
    1348,   735,  2636,   154,   170,  2650,  2492,   763,  1319,  2562,
      48,   191,   330,   712,  1191,  1437,   192,  1482,  1262,  1192,
    2655,   229,   300,  1921,   394,  1485, -1101,  1696,  1002,  2300,
     973,   230,   974,   833,   763,   760,  1865,   764,  2512,  1866,
    1867,  2360,   316,  1295,  1977,   761,  1802,  1934,   171,  2190,
     189,  2344,   764,   475,   155,  2582,   156,   719,   172,  2583,
    2585,  -678,  2586,  2587,  2602,   476,   438,  2319,  2319,   233,
    1794,  1491,   234,   235,  1440,   585,  1016,  1572,  1246,   764,
    2031,   137,  2528,  1014,  2355,  2057,  1447,   765,   154,  2356,
     713,  1573,   714,  2727,  -889,  1795, -1101,  -889,  1266,  2067,
     750,   980,   765,   317,   318,  1550,  2129,   757,  2744,  1614,
    2730,   232,   439,  2247,  2248,   614,   757,  1002,  2249,   416,
     193,  1193,   190,   137,   117,   762, -1870,  2433,    13,   765,
    1194,  2130,   751,    13,    52,  1266,  1483,  1214,   173,  2603,
     515, -1101,  1911,  1935,   716,  1642,  1266,  2434,  2718,  1880,
     555,   760, -1786,  1448,    49,   973,   477,   974,  1697,  1666,
     760,   761,  2195,  1326,   236,   243,   556,  1652,  1868,  1869,
     761,  -889,  2550,  2435,  1201,  2411, -1774,   361,   191,   516,
    2719,   233,    53,   192,  1904, -1101,   830,   830,  -889,  2419,
    1356, -1101,  1870,  1871,    51,   763, -1872,    93,  2436,   189,
    2720,   831,   831,  1266,    97,  1275,   557,  1266,   174,   362,
    2483,  2551,  2227,  1905,  1421,  1907,  2098,  1327,  2420,  1002,
      54, -1872,    55,  2524,    56,  1328,   980,   100,  2031,   757,
     101,  2474,    57,   351,   254,  2475,  2297,   830,    26,  2609,
     764,   762,  1385,   139,    21,    22,  2705,  1911,  2552,  1485,
     762,   594,   831,   175,  1960,    47,   601,  1668,  2525,  1597,
    2488,  2298,  2489,    46,    91,  2099, -1872,  2301,  2706,  2707,
      94,   190,  2561,   760,    52,  2519,   236,  1598,   139,   106,
    -889,  -889,  -889,   761,   137,  2520, -1872,   255,    58,  -889,
     765,  2708,  1446,   108,  2257,  2257,  1446,  2537,  2252,   109,
    -889,  1868,  1869,   176,  1782,   110,  2352,  2003,   403,  1329,
    2626,   763, -1872,  2116,  2231,  2034,   441,  2013,  2014,  2317,
     763,  2017,    53,  1283,  1191,  1870,  1871,   191,  2188,  1192,
    1424,   112,   192,  -889,  1284,    94,  2502, -1872,  2223,  -889,
    1191,  -889,   558,   114,  -889,  1192,  -889,  -889,  -889,  2531,
    2532,  1683,  -889,   559,  -889,   113,   764,  1782,  1894,  -889,
      54,  1191,    55,   762,    56,   764,  1192,  2231,  2605,   120,
    1675,  1688,    57,   122,  1679,  2184,  1701,  1737,   137,  1739,
      60,  1681,  1915,   298, -1770,  1191,   140,  2659,  2524,  2472,
    1192,  -889,   149,   155,  1190,   156,  -889,  2541,  2656,  2658,
     137,  2542,  2543,  1191,  1684,  1246,   765,  1940,  1192,   137,
    -889,   124,  2437,  1191,   596,   765,   597,   126,  1192,   757,
    1537,  1538,  1266,  2660,    61,  1782,  2538,   154,    58,   142,
    2703,  1922,   162,   763,  -889,  1924,  1246,   163,   243,   394,
    2519,   164,  2231,   428,   167, -1774,  1925,   181,  2100,  2715,
    2520,  1432,  1433,  1434,   560,   561,  2690,  2691,   204,  1539,
    1540,   185,  1266,   760,   186,  -889,   810,   193,   713,   562,
     714,   563,   242,   761,  1962,  1963,  1964,   247,   764,  1657,
    1968,  1658,  1951,  1971,  1972,   508,   248,   510,  1782,    59,
     511,  2451,  2692,  2454, -1567, -1567, -1567, -1567,  -889,  1992,
    2693,  1993,  2738,   249,  -889,   811,   812,   813,   814,   815,
    2068,  2069,   139,    64,  2639,  2640,  -889,  -889,  1430,  1431,
      60,  1513,  1514,  1515,  1516,  2061,  1961,  2062,   765, -1566,
   -1566, -1566, -1566,   728,   730,   732,   734,  2634,  1416,  1417,
    2638,   629,   630,  2348,  2403,  2349,  2404,  1998,  2459,  -889,
    2460, -1872,   250,   762,   243,   564,    67,   257,   269,  -889,
    2231,  2565,  2566,   273,    61,  -889,   278,    62,  2006,  1938,
     294,   296,  2677,  2678,  1755,   118,  1756,  2679,  2680,  -889,
    1181,   154,  1183,   300,  -889,   302,   303, -1774,   307,   308,
     309,  -889,   312,  -889,   313,  2346,   326,   333,   334,  -889,
     336,   338,   565,  2613,   340,   342,   351,  2614,  2615,   353,
     999,  2653,  2517,   349,   354,   356,   392,  1266,   394,   397,
     398,  1266,   401,   763,  1266,  1975,  1976,  1246,    68,   403,
     408,   187,    63,   243,   409,  2694,  1989,   420,   421,   422,
    1753,  1754,   429,  1994,   816,   817,   818,   819,   820,   821,
     822,   642,   643,    64,  2661,   413,   454,   997,  2662,  2663,
     455,   457,   428,  2118,   459,  -347,   483,   487,   764,  1551,
     490,  1552,  2007,   494,   509,   495,  2101,  1266,    65,   502,
      66,   522,  1755,   523,  1756,   521,  1757,   527,  2293,   533,
     543,   547,   548,  1002,   549,   551,    67,   552,  -360,  2664,
     554,   578,   579,   587,   588,   589,   605,   607,   612,   613,
     616,   688,   137,   617,  2163,  2665,  2666,   357,   765,   701,
    1758,  1759,  1760,  2163,  1915,   690,  1266,  1266,  1266,   693,
     735,  2051,   358,  2139,  2140,  2141,  2142,  2143,  2144,  2145,
    2146,  1818,   359,   737,  1819,   718,   744,   770,   773,   754,
    2058,  1820,  1821,   777,   779,   786,  2063,   789,   790,   792,
     794,   797,   802,   804,   808,   841, -1657,   847,    68,   834,
    1761,   961,  1762,   964,  1006,  1011,  1012,   360,  1028,  1763,
    1036,  1015,  1764,  1137,  1156,  1266,  1033,  1167,  1164,  1195,
    1207,  1211,  1281,  1220,  1403,   823,  1405,  1213,  1822,  1169,
     999,   999,   999,  1440,  1302,  1438,  1176,  1177,   824,  1178,
    1179,   139,  1184,  1221,  1412,  1196,  1198,  1199,  1413,  1423,
    1439,  1453,   999,  1459,  1465,  2185,  1320,  1474,  1476,  1494,
    1488,  1320,  1500,  1521,  1503,  1565,  2209,  1517,  1569,  1523,
    1582,  1585,  1588,  1586,  1590, -1569,  1599,   997,   997,   997,
    1320,  1320,  1600,  1602,  1320,  1601,  1607,  1609,   627,  1358,
    1612,  1632,  1616,  1214,  1618,  1634,  1649,  1823,  1765,   997,
    1766,  1644,  1505,  1656,  1660,  1662,  1266,  1664,  1708,  1755,
    1709,  1756,  2118,  1669,  1676,  1677,  1678,  1358,  1680,  1687,
    1682,  2303,  2183,  2258,  2258,  1320,  1824,  1690,  1685,  1692,
    1320,  1320,  1320,  1740,  1741,  1743,  1777,  1746,  1785,  1266,
    2187,  1266,  1789,  1787,  1784,  1240,  1799,  1825,  1803,  1810,
    1816,  1505,  2681,  1833,  1850,  1225,  1853,  1239,  1861,  2204,
    1255,  2206,  1874,   361,  1278,  2207,  1889,  1575,  1897,  1916,
    1927,  1947,  1920,  2212,  1982,  1996,  1912,  1954,  1266,  1314,
    1266,  1999,  2642,  2002,  2009,  1340,  2008,  2018,  2011,  1748,
    2021,  2022,  2026,  2025,  2027,   362, -1539,  2028,  2040,  2044,
     137,  1826,  2049,  1231,   997,  -233,  1396,  2048,  1400,  1455,
    2072,  1231,  1231,  2053,  2074,   999,  2079,  2080,  2086,  2087,
    2093,  1231,   999,   999,   999,  1419,  2090,  2094,  1231,  1231,
    1419,  2113,  2119,  1266,  2121,   999,   999,   999,   999,   999,
     999,   999,   999,  2122,  1419,   999,  1320,  1231,  1231,  2125,
     139,  2132,  2570,  2166,  1827,  2133,  2159,  2168,   363,  2167,
    2169,  2178,   997,   364,   542,  2180,  2213,  2219,  2292,   997,
     997,   997, -1588,  1461,  2225,   428,  2260,  2277,   645,  2283,
    2286,  2289,   997,   997,   997,   997,   997,   997,   997,   997,
    1767,  2305,   997,  2307,   365,  2571,  2294,  1340,  2321,  1255,
    2329,  2324,   366,  2331,  2333,  2365,  1818,  2034, -1544,  1819,
   -1586,  2398,  2408,  2413,  1828,   367,  1820,  1821,  2410,  2429,
    2430,  2431,  2442,   428,  2447,  1231,  2452,  1829,  2572,  1266,
    2428,  1266,  2336,  2480,  2483,  2490,  2491,  2493,  2496,  2509,
    1768,  2546,  2510,  2511,   368,  2530,  2515,   369,  2573,  2567,
    2547,  1769,  2574,  2604,  2611,   370,  2612,  2616,  2618,   139,
    2623,  2624,  1266,  1822,  2644,  2651,  -230,  2654,  1231,  2675,
     649,  2676,  2645,  2425,  2716,  2723,  2575,  2729,  2731,    17,
      92,  1340,   125,  1231,  2733,    38,   166,   256,   209,   266,
    1002,  1002,   119,  1266,   277,   371,   290,   210,   372,   241,
     545,   442,   504,  1621,   323,  2115,   456,   526,  1208,   846,
    1830,  1729,   798,   139,  1231,  2726,  2107,  1667,  1958,  1010,
    2197,  2361,  1002,  2345,  2362,  2268,  1320,   582,  1219,  1648,
    1320,  2016,  1823,  1457,   959,  2071,  2015,  1473,  2485,  2479,
    1032,  1002,  2042,  1792,  2266,  1808,  1793,  2406,   654,  1843,
    1851,  2083,  2272,  1566,  2288,  1873,  2412,  2576,  1885,  2095,
    1589,  1824,  1592,  1893,  2296,  2177,  2299,  2310,  2123,  1919,
    1623,  2147,  1374,  1231,  2577,  1266,  1624,  1266,  1231,  2320,
    1647,  1001,  1825,  2175,  2722,  2450,  2444,  2176,  1957,  2506,
    1857,  2455,  2458,  2501,  1002,  2578,  2313,  2314,  1615,  1791,
    2315,  1621,   332,  2316,   213,   772,  2137,  1479,   310,  1995,
     293,   806,  2610,  1185,   447,   539,  2579,  2495,   272,   489,
    2161,  2282,   428,  2106,   783,   599,  1888,  2669,     0,  2477,
       0,     0,     0,     0,  2478,  2580,  1826,     0,     0,   999,
    2258,  2258,   663,  2581,  1320,  1320,     0,     0,  1320,  1320,
       0,  1320,     0,     0,     0,     0,     0,     0,     0,     0,
    1779,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   997,     0,     0,  1827,
       0,     0,     0,  2503,     0,     0,     0,     0,     0,  1231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1246,  1231,  1779,     0,     0,     0,     0,     0,     0,
    1621,     0,     0,     0,     0,  2522,  2523,     0,   999,     0,
       0,     0,  2622,     0,     0,     0,     0,     0,     0,     0,
       0,   755,  2533,     0,  1902,     0,     0,     0,     0,  1828,
    1231,     0,     0,  1909,     0,     0,     0,     0,  2544,  1172,
       0,     0,  1829,     0,  1918,     0,     0,     0,     0,     0,
       0,  1001,  1001,  1001,  1246,   997,     0,     0,     0,     0,
       0,  1779,     0,  2564,     0,     0,     0,     0,  2568,  2569,
       0,     0,  1946,  1001,     0,     0,     0,     0,     0,     0,
       0,     0,  1621,     0,     0,     0,     0,     0,  2607,     0,
       0,  2697,     0,     0,     0,   966,     0,  1246,     0,     0,
       0,     0,  1231,     0,     0,  1419,     0,     0,     0,     0,
     999,     0,   967,  1231,     0,     0,  1231,     0,  2625,     0,
       0,  2627,  2628,   966,  1779,  1830,     0,     0,  1988,     0,
       0,     0,  2724,  2725,  1246,     0,     0,     0,  1909,     0,
     967,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2000,     0,     0,  2001,     0,     0,     0,   997,     0,     0,
       0,     0,  2652,     0,     0,     0,     0,     0,  2732,     0,
       0,     0,  2745,     0,     0,     0,     0,     0,  1001,     0,
       0,     0,     0,  1267,     0,     0,     0,  1621,     0,     0,
    1267,     0,     0,     0,     0,     0,     0,     0,  1267,     0,
       0,     0,     0,  2032,   968,   969,   970,     0,     0,     0,
       0,     0,  1267,   971,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   757,     0,     0,     0,     0,     0,
       0,     0,   968,   969,   970,     0,  1001,     0,     0,     0,
       0,   971,     0,  1001,  1001,  1001,  1420,     0,     0,     0,
       0,  1420,     0,     0,     0,     0,  1001,  1001,  1001,  1001,
    1001,  1001,  1001,  1001,     0,  1420,  1001,     0,   760,     0,
     975,   976,   977,     0,     0,     0,   978,     0,   761,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1463,  1478,     0,   975,   976,
     977,     0,     0,     0,   978,     0,     0,     0,     0,  1621,
    1621,     0,     0,     0,     0,   979,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2124,     0,
       0,     0,     0,   979,     0,     0,  1621,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   762,     0,
       0,     0,     0,     0,     0,  1267,     0,     0,     0,     0,
       0,     0,     0,  2164,     0,     0,  1267,     0,     0,     0,
    2174,  2174,     0,     0,     0,     0,     0,     0,   857,   981,
     858,     0,   859,     0,     0,     0,     0,   860,     0,     0,
    1231,  1255,     0,     0,     0,   861,  2193,     0,     0,     0,
       0,  1988,  1988,     0,     0,     0,     0,   981,     0,     0,
       0,     0,     0,     0,  1622,     0,     0,     0,   763,     0,
       0,     0,     0,  1267,     0,     0,     0,  1267,   862,   863,
     982,   983,     0,     0,     0,     0,  2366,     0,   864,  2367,
       0,     0,  2368,     0,     0,     0,     0,     0,     0,   865,
    2369,     0,   866,     0,     0,     0,  2230,     0,   982,   983,
       0,     0,     0,   764,     0,     0,   867,     0,     0,     0,
       0,     0,     0,   987,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   868,
       0,     0,     0,   988,     0,     0,  2370,   869,   989,   870,
    2275,   987,     0,     0,     0,   990,     0,   137,     0,  2230,
    1621,     0,  1622,   765,     0,  2371,     0,     0,  1621,     0,
       0,   988,     0,     0,  1783,     0,   989,     0,     0,     0,
     871,     0,     0,   990,     0,   137,     0,  1902,     0,     0,
       0,   872,     0,     0,     0,     0,   873,     0,     0,     0,
    1001,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2312,     0,     0,     0,
       0,     0,   874,     0,   999,     0,     0,  1783,     0,   875,
       0,     0,   876,   877,  2230,  1231,     0,     0,  1621,     0,
       0,     0,   878,     0,  2372,     0,     0,     0,     0,   879,
       0,   880,  2373,     0,   881,     0,     0,     0,     0,     0,
     966,     0,     0,  1988,     0,  2374,     0,     0,     0,     0,
       0,   997,  1255,  1231,  1231,     0,     0,   967,     0,     0,
       0,  1622,     0,     0,     0,     0,     0,     0,     0,  1001,
       0,     0,  1267,     0,     0,  1783,   882,  2375,     0,     0,
     883,     0,   884,     0,     0,     0,     0,  2402,     0,     0,
       0,     0,   885,     0,     0,     0,     0,  2376,     0,  2377,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1267,     0,     0,     0,     0,     0,   886,     0,
       0,  2378,  2379,     0,     0,     0,     0,     0,     0,     0,
       0,   887,  2230,     0,     0,     0,     0,     0,  1783,     0,
       0,     0,     0,  1622,     0,     0,     0,     0,     0,   968,
     969,   970,  2380,     0,     0,     0,   888,   889,   971,     0,
       0,  1231,     0,     0,     0,     0,  1420,   890,     0,   757,
       0,  1001,     0,     0,     0,     0,     0,     0,     0,  2381,
       0,   891,   892,     0,     0,     0,     0,     0,   893,     0,
       0,     0,   894,     0,     0,     0,  2193,     0,     0,     0,
     895,     0,     0,     0,     0,  2382,     0,     0,     0,     0,
     896,     0,  2383,   760,     0,   975,   976,   977,     0,   897,
       0,   978,     0,   761,     0,  2384,     0,     0,   898,  2385,
       0,     0,     0,   899,   900,     0,     0,   901,     0,   902,
       0,     0,     0,     0,     0,     0,   903,  2487,  1622,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   904,
     979,     0,     0,     0,     0,     0,     0,  1267,     0,     0,
    2386,  1267,     0,     0,  1267,     0,     0,   905,     0,  2387,
       0,     0,     0,   906,     0,     0,     0,     0,   907,     0,
    2513,     0,     0,     0,     0,     0,     0,  2516,     0,     0,
    2518,     0,     0,   762,     0,     0,     0,     0,  2388,     0,
       0,     0,     0,     0,     0,   908,     0,     0,  2389,     0,
       0,     0,  1231,     0,  2390,     0,     0,  1267,     0,     0,
       0,     0,     0,     0,   981,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2548,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2563,     0,     0,     0,     0,  2193,  2193,
    1622,  1622,     0,   763,     0,     0,  1267,  1267,  1267,  1255,
       0,     0,     0,  1231,     0,   982,   983,  1231,  1231,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1622,     0,     0,
    2193,     0,     0,     0,  2193,  2193,     0,     0,   764,     0,
       0,     0,     0,     0,     0,     0,     0,  2629,   987,     0,
       0,     0,     0,     0,     0,  1267,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   988,     0,
       0,     0,     0,   989,     0,     0,     0,     0,     0,     0,
     990,     0,   137,     0,     0,     0,     0,     0,   765,     0,
       0,   999,   999,     0,     0,     0,     0,     0,     0,     0,
     857,     0,   858,     0,   859,     0,     0,     0,     0,   860,
    2682,     0,     0,     0,     0,     0,     0,   861,     0,     0,
       0,     0,     0,   999,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2711,  2714,     0,   997,   997,
       0,     0,   999,     0,     0,     0,  1267,     0,     0,     0,
     862,   863,     0,     0,     0,     0,     0,     0,     0,     0,
     864,     0,     0,     0,     0,     0,     0,  2728,     0,     0,
     997,   865,     0,     0,   866,     0,     0,     0,     0,  1267,
       0,  1267,     0,     0,     0,     0,     0,     0,   867,   997,
       0,     0,     0,  2737,     0,   999,     0,     0,     0,     0,
       0,  1622,     0,     0,     0,     0,     0,     0,     0,  1622,
       0,   868,     0,     0,     0,     0,     0,     0,  1267,   869,
    1267,   870,     0,     0,     0,     0,     0,     0,  -725,     0,
    -725,  -725,  -725,  -725,  -725,  -725,  -725,  -725,     0,  -725,
    -725,  -725,   997,  -725,  -725,  -725,  -725,  -725,  -725,  -725,
    -725,  -725,   871,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   872,     0,  1001,     0,     0,   873,     0,
       0,     0,     0,  1267,     0,     0,     0,     0,     0,  1622,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   857,   874,   858,     0,   859,     0,     0,
       0,   875,   860,     0,   876,   877,     0,     0,     0,     0,
     861,     0,     0,     0,   878,     0,     0,     0,     0,     0,
       0,   879,     0,   880,     0,     0,   881,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   862,   863,     0,     0,     0,     0,     0,
       0,     0,     0,   864,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   865,     0,     0,   866,   882,  1267,
       0,  1267,   883,     0,   884,     0,     0,     0,     0,     0,
       0,   867,     0,     0,   885,     0,     0,     0,     0,     0,
    -725,  -725,     0,  -725,  -725,  -725,  -725,     0,     0,     0,
       0,     0,  1267,     0,   868,     0,     0,     0,     0,     0,
     886,     0,   869,     0,   870,     0,     0,     0,     0,     0,
       0,     0,     0,   887,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   871,     0,     0,   888,   889,
       0,     0,     0,     0,     0,     0,   872,     0,     0,   890,
       0,   873,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   891,   892,     0,     0,     0,     0,     0,
     893,     0,   966,     0,   894,     0,     0,   874,     0,     0,
       0,     0,   895,     0,   875,     0,     0,   876,   877,   967,
       0,     0,   896,     0,     0,     0,     0,   878,     0,     0,
       0,   897,     0,     0,   879,  1267,   880,  1267,     0,   881,
     898,     0,     0,     0,     0,   899,   900,     0,     0,   901,
       0,   902,     0,     0,     0,   857,     0,   858,   903,   859,
       0,     0,     0,     0,   860,     0,     0,     0,     0,     0,
       0,  -725,   861,     0,     0,     0,     0,     0,     0,     0,
       0,   882,     0,     0,     0,   883,     0,   884,     0,   905,
       0,     0,     0,     0,     0,   906,     0,   885,     0,     0,
     907,     0,     0,     0,     0,   862,   863,     0,     0,     0,
    1332,   968,   969,   970,     0,   864,     0,     0,     0,     0,
     971,  -725,     0,   886,     0,     0,   865,   908,     0,   866,
       0,     0,     0,     0,     0,     0,   887,     0,     0,     0,
       0,     0,     0,   867,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   888,   889,     0,     0,     0,   868,     0,     0,     0,
       0,     0,   890,     0,   869,  1333,   870,   975,   976,   977,
       0,     0,     0,   978,     0,     0,   891,   892,     0,     0,
       0,     0,     0,   893,     0,     0,     0,   894,     0,     0,
       0,     0,     0,     0,     0,   895,     0,   871,     0,     0,
       0,     0,     0,     0,     0,   896,     0,     0,   872,     0,
       0,     0,   979,   873,   897,     0,     0,     0,     0,     0,
       0,     0,     0,   898,     0,     0,     0,     0,   899,   900,
       0,     0,   901,     0,   902,     0,     0,     0,     0,   874,
       0,   903,  1001,  1001,     0,     0,   875,     0,     0,   876,
     877,     0,     0,     0,  1655,     0,     0,     0,     0,   878,
       0,     0,     0,     0,     0,     0,   879,     0,   880,     0,
       0,   881,   905,     0,  1001,     0,     0,     0,   906,     0,
       0,     0,     0,   907,     0,     0,   981,     0,     0,     0,
       0,     0,     0,  1001,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     908,     0,     0,   882,     0,     0,     0,   883,     0,   884,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   885,
       0,     0,     0,     0,     0,     0,     0,   982,   983,     0,
       0,     0,     0,     0,     0,     0,  1001,     0,     0, -1872,
       0,     0,     0,     0,     0,   886,     0,     0,  1038,     0,
    1039,     0,     0,     0,     0,  1040,     0,     0,   887,     0,
       0,     0,     0,  1041,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0, -1154,     0,   888,   889,     0,     0,     0,     0,     0,
     988,     0,     0,     0,   890,   989,  1042,  1043,     0, -1154,
       0,     0,   990,   243,   137,     0,  1044,     0,   891,   892,
       0,     0,     0,     0,     0,   893,     0,  1045,     0,   894,
    1046,     0,     0,     0,     0,     0,     0,   895,     0,     0,
       0,     0,     0,     0,  1047,     0,     0,   896,     0,     0,
       0,     0,     0,     0,     0,     0,   897,     0,     0,     0,
       0,     0,     0,     0,     0,   898,     0,  1048,     0,     0,
     899,   900,     0,     0,   901,  1049,   902,  1050,     0,     0,
       0,     0,     0,   903,  1051,     0,  1052,  1053,  1054,  1055,
    1056,  1057,  1058,  1059,     0,  1060,  1061,  1062,     0,  1063,
    1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,     0,
       0,     0,     0,     0,   905,     0,     0,     0,     0,  1073,
     906,     0,     0,     0,  1074,   907,   966,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   967,     0,     0,     0,     0,     0,     0,
    1075,     0,   908,     0,     0,     0,     0,  1076,     0,     0,
    1077,  1078,     0,     0,     0,     0,     0,     0,     0,     0,
    1079,     0,     0,     0,     0,     0,     0,  1080,     0,  1081,
       0,     0,  1082,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1226,     0,     0,   755,     0,
       0,  1531,  1532,  1533,  1083,     0,     0,     0,  1084,  1534,
    1085,     0,     0,     0,  1332,   968,   969,   970,     0,     0,
    1086,     0,     0,     0,   971,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1087,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1088,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   966,     0,     0,     0,     0,     0,     0,  1478,
       0,   975,   976,   977,  1089,     0,     0,   978,     0,   967,
       0,     0,     0,     0,     0,  1090,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1091,     0,     0,     0,     0,     0,  1092,     0,     0,     0,
    1093,     0,     0,     0,     0,     0,   979,     0,  1094,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1095,     0,
       0,     0,     0,     0,     0,     0,     0,  1096,     0,  1535,
       0,     0,     0,     0,     0,     0,  1097,     0,     0,  1536,
       0,  1098,  1099,     0,     0,  1100,     0,  1101,     0,     0,
       0,     0,     0,     0,  1102,     0,     0,     0,     0,     0,
       0,   968,   969,   970,     0,     0,     0,  1103,     0,     0,
     971,     0,     0,     0,     0,     0,  1537,  1538,     0,     0,
     981,   757,     0,     0,     0,  1104,     0,     0,     0,     0,
       0,  1105,     0,     0,     0,     0,  1106,     0,     0,     0,
       0,  1856,     0,     0,  1226,     0,     0,   755,     0,     0,
    1531,  1532,  1533,     0,  1228,  1539,  1540,     0,  1534,     0,
     973,     0,   974,  1107,     0,   760,     0,   975,   976,   977,
       0,   982,   983,   978,     0,   761,     0,     0,     0,     0,
    1229,     0,     0, -1872,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1541,     0,     0,     0,     0,     0,  1542,
       0,     0,  1543,     0,     0,     0,     0,     0,     0,     0,
    1544,     0,   979,     0,   987,     0,     0,  1545,     0,     0,
       0,   966,  1546,     0,     0, -1154,     0,     0,     0,  1226,
       0,   980,   755,     0,   988,     0,     0,     0,   967,   989,
       0,  1547,     0, -1154,     0,     0,   990,   243,   137,     0,
       0,     0,     0,     0,     0,   762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   981,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1535,     0,
       0,     0,     0,     0,     0,     0,   966,     0,  1536,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   967,     0,   763,     0,     0,     0,     0,
     968,   969,   970,     0,     0,     0,     0,   982,   983,   971,
       0,     0,     0,     0,     0,  1537,  1538,     0,     0,     0,
     757,     0,     0,     0,     0,     0,     0,     0,  1548,     0,
    1549,     0,  1550,     0,     0,  1551,     0,  1552,  1553,  1554,
     764,     0,  1555,  1556,     0,     0,  1923,     0,     0,     0,
     987,     0,     0,  1228,  1539,  1540,     0,     0,     0,   973,
       0,   974,     0,     0,   760,     0,   975,   976,   977,     0,
     988,     0,   978,     0,   761,   989,     0,     0,     0,  1229,
       0,     0,   990,     0,   137,   968,   969,   970,     0,     0,
     765,     0,  1541,     0,   971,     0,     0,     0,  1542,     0,
       0,  1543,     0,     0,     0,   757,     0,     0,     0,  1544,
       0,   979,     0,     0,     0,     0,  1545,     0,     0,     0,
    1226,  1546,     0,   755,     0,     0,     0,     0,     0,     0,
     980,     0,     0,     0,     0,     0,     0,     0,  1228,     0,
    1547,     0,     0,     0,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,   762,     0,     0,   978,     0,   761,
       0,     0,     0,     0,  1229,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   981,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   979,   966,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   967,   980,     0,     0,     0,     0,
       0,     0,     0,  1226,   763,     0,   755,  1378,     0,     0,
       0,     0,     0,     0,     0,     0,   982,   983,     0,   762,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1226,     0,     0,   755,     0,     0,  1548,     0,  1549,
       0,  1550,     0,     0,  1551,     0,  1552,  1553,  1554,   764,
     981,  1555,  1556,     0,     0,     0,     0,     0,     0,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   988,
     966,     0,     0,     0,   989,     0,   968,   969,   970,   763,
       0,   990,  1227,   137,     0,   971,     0,   967,     0,   765,
       0,   982,   983,     0,     0,     0,   757,     0,   966,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1321,     0,  1646,     0,     0,   967,     0,  1924,     0,     0,
       0,     0,     0,     0,   764,     0,     0,     0,  1925,  1228,
       0,     0,     0,     0,   987,   973,     0,   974,     0,     0,
     760,     0,   975,   976,   977,     0,     0,     0,   978,     0,
     761,     0,     0,     0,   988,  1229,     0,     0,     0,   989,
       0,     0,     0,     0,     0,     0,   990,     0,   137,     0,
       0,     0,     0,     0,   765,     0,     0,     0,     0,   968,
     969,   970,     0,     0,     0,     0,     0,   979,   971,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   757,
       0,     0,     0,     0,     0,     0,   980,   968,   969,   970,
       0,     0,  1226,     0,     0,   755,   971,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   757,     0,     0,
     762,     0,  1228,     0,     0,     0,     0,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,     0,
       0,   978,     0,   761,     0,     0,     0,     0,  1229,     0,
    1228,   981,     0,     0,     0,     0,   973,     0,   974,     0,
       0,   760,     0,   975,   976,   977,     0,     0,     0,   978,
       0,   761,     0,     0,     0,     0,  1229,     0,     0,   966,
     979,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,     0,     0,     0,   967,     0,  1226,   980,
       0,   755,   982,   983,     0,     0,     0,     0,   979,  1378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   762,     0,  1226,     0,   980,   755,     0,
       0,     0,     0,     0,     0,   764,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   987,     0,     0,     0,     0,
       0,   762,     0,     0,   981,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   988,     0,     0,     0,     0,
     989,     0,     0,     0,     0,   966,     0,   990,     0,   137,
       0,     0,   981,     0,     0,   765,     0,  1383,   968,   969,
     970,     0,   967,   763,     0,     0,     0,   971,     0,     0,
       0,     0,   966,     0,     0,   982,   983,     0,   757,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   967,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   982,   983,     0,     0,     0,   764,     0,
       0,  1228,     0,     0,     0,     0,     0,   973,   987,   974,
       0,     0,   760,     0,   975,   976,   977,     0,     0,     0,
     978,     0,   761,     0,     0,     0,   764,  1229,   988,     0,
       0,     0,     0,   989,     0,     0,   987,     0,     0,     0,
     990,     0,   137,     0,   968,   969,   970,     0,   765,     0,
       0,     0,     0,   971,     0,     0,   988,     0,     0,   979,
       0,   989,     0,     0,   757,     0,     0,     0,   990,     0,
     137,   968,   969,   970,     0,     0,   765,     0,   980,     0,
     971,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   757,     0,     0,     0,     0,     0,  1228,     0,     0,
       0,     0,   762,   973,     0,   974,  -945,     0,   760,  -945,
     975,   976,   977,     0,     0,     0,   978,     0,   761,     0,
       0,     0,     0,  1229,  1228,     0,     0,     0,     0,     0,
     973,     0,   974,   981,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,     0,     0,     0,
    1229,     0,     0,     0,     0,   979,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   763,     0,   980,     0,     0,     0,     0,     0,
       0,     0,   979,  -945,   982,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   762,     0,
    -945,   980,     0,     0,     0,  1226,     0,     0,   755,     0,
       0,     0,     0,     0,     0,     0,     0,   764,     0,     0,
       0,     0,     0,     0,     0,   762,     0,   987,  1226,   981,
       0,   755,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   988,     0,     0,
       0,     0,   989,     0,     0,     0,   981,     0,     0,   990,
       0,   137,     0,     0,     0,     0,  1505,   765,   763,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     982,   983,   966,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -945,  -945,  -945,   763,     0,     0,     0,   967,
       0,  -945,     0,     0,     0,   966,     0,   982,   983,     0,
       0,     0,  -945,   764,     0,     0,     0,     0,     0,     0,
       0,     0,   967,   987,     0,  1226,  1467,     0,   755,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,   988,     0,  -945,     0,     0,   989,     0,
     987,  -945,     0,  -945,     0,   990,  -945,   137,  -945,  -945,
    -945,     0,     0,   765,  -945,     0,  -945,     0,     0,     0,
     988,  -945,     0,     0,     0,   989,     0,     0,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,   968,   969,   970,     0,     0,     0,     0,     0,     0,
     971,     0,   966,  -945,     0,     0,     0,     0,     0,     0,
       0,   757,     0,     0,   968,   969,   970,     0,  1651,   967,
       0,     0,  -945,   971,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   757,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1228,     0,  -945,     0,     0,     0,
     973,     0,   974,     0,     0,   760,     0,   975,   976,   977,
       0,     0,     0,   978,     0,   761,     0,  1228,     0,     0,
    1229,     0,     0,   973,     0,   974,     0,  -945,   760,     0,
     975,   976,   977,     0,     0,     0,   978,     0,   761,     0,
       0,     0,  1226,  1229,     0,   755,     0,     0,     0,     0,
       0,     0,   979,     0,     0,     0,     0,     0,     0,     0,
       0,   968,   969,   970,     0,     0,  -945,     0,     0,     0,
     971,   980,     0,     0,     0,   979,     0,     0,  -945,  -945,
       0,   757,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   980,   762,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -945,     0,     0,  1228,     0,     0,     0,   762,   966,
     973,  -945,   974,     0,     0,   760,   981,   975,   976,   977,
       0,     0,     0,   978,     0,   761,   967,     0,     0,     0,
    1229,  -945,     0,     0,     0,     0,  -945,  1226,     0,   981,
     755,     0,     0,  -945,     0,  -945,     0,     0,     0,     0,
       0,  -945,     0,     0,     0,   763,     0,     0,     0,     0,
       0,     0,   979,     0,     0,     0,     0,   982,   983,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   763,     0,
       0,   980,     0,     0,     0,     0,     0,     0,     0,     0,
     982,   983,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,     0,     0,   762,     0,     0,     0,     0,
     987,     0,     0,     0,   966,     0,     0,     0,   968,   969,
     970,     0,     0,   764,  1509,     0,     0,   971,     0,     0,
     988,   967,     0,   987,     0,   989,   981,     0,   757,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,     0,     0,   988,     0,     0,     0,     0,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   137,     0,  1944,
       0,  1228,     0,   765,     0,   763,     0,   973,     0,   974,
    1778,     0,  1271,   755,   975,   976,   977,   982,   983,     0,
     978,     0,   761,     0,     0,     0,     0,  1229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     764,     0,     0,   968,   969,   970,     0,     0,     0,   979,
     987,     0,   971,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   757,     0,     0,     0,     0,   980,     0,
     988,     0,     0,     0,     0,   989,     0,   966,     0,     0,
       0,     0,   990,     0,   137,     0,     0,     0,     0,     0,
     765,     0,   762,     0,   967,     0,  1228,     0,     0,     0,
       0,     0,   973,     0,   974,     0,     0,   760,     0,   975,
     976,   977,     0,     0,     0,   978,     0,   761,     0,     0,
       0,     0,  1229,   981,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   979,     0,     0,     0,     0,     0,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   980,   982,   983,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   968,   969,   970,     0,
       0,     0,     0,     0,     0,   971,     0,   762,     0,     0,
       0,     0,     0,     0,     0,     0,   757,   764,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   981,     0,
       0,     0,     0,     0,     0,     0,     0,   988,     0,  1228,
       0,     0,   989,     0,     0,   973,     0,   974,     0,   990,
     760,   137,   975,   976,   977,     0,     0,   765,   978,     0,
     761,     0,     0,     0,     0,  1229,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   982,
     983,     0,     0,   966,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   979,     0,     0,
     967,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   764,     0,     0,     0,   980,     0,     0,     0,
       0,     0,   987,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1030,     0,
     762,     0,   988,     0,     0,     0,     0,   989,     0,     0,
       0,     0,     0,     0,   990,     0,   137,     0,     0,     0,
       0,     0,   765,     0,     0,     0,     0,     0,     0,  -357,
       0,   981,  -357,     0,     0,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,  -357,     0,     0,     0,     0,     0,     0,
       0,     0,   968,   969,   970,     0,     0,     0,     0,     0,
       0,   971,  -357,     0,  -357,     0,     0,     0,     0,     0,
     763,  -357,   757,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
       0,     0,   982,   983,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   972,     0,     0,     0,     0,
       0,   973,     0,   974,     0,   764,   760,  -357,   975,   976,
     977,     0,     0,     0,   978,   987,   761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   988,     0,     0,     0,     0,
     989,     0,     0,     0,     0,     0,     0,   990,  -357,   137,
       0,     0,     0,   979,     0,   765,     0,     0,     0,     0,
       0,     0,     0,   529,     0,     0,  -357,  -357,  -357,  -357,
    -357,     0,   980,  -357,  -357,     0,     0,  -357,     0,     0,
       0,     0,     0,  -357,     0,  -357,     0,     0,     0,     0,
       0,  -357,     0,     0,     0,     0,   762,     0,  -357,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,  -357,  2700,     0,     0,     0,   981,  -357,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,   763,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   982,   983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -357,  -357,     0,     0,     0,
       0,   764,     0,     0,  -357,     0,     0,  -357,     0,     0,
       0,   987,     0,     0,     0,     0,     0,     0,   528,     0,
    -357,     0,  -357,     0,     0,  2701,     0,     0,     0,     0,
       0,   988,     0,     0,     0,     0,   989,     0,  -357,     0,
       0,     0,     0,   990,     0,   137,     0,     0,  -357,     0,
       0,   765,     0,  -357,     0,  -357,  -357,  -357,  -357,  -357,
    -357,  -357,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,  -357,  -357,  -357,     0,     0,     0,
       0,  -357,     0,  -357,  -357,  -357,  -357,  -357,  -357,  -357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -357,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,  -357,     0,     0,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,  -357,     0,     0,     0,  -357,  -357,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,     0,     0,  -357,  -357,     0,   966,     0,
       0,     0,   530,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,     0,   529,     0,   967,  -357,  -357,  -357,  -357,
    -357,     0,     0,  -357,  -357,     0,     0,     0,     0,   619,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -357,     0,     0,   620,     0,     0,   621,   622,   623,
     624,   625,   626,   627,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -357,
       0,     0,  -357,     0,     0,     0,     0,     0,  -357,     0,
       0,     0,   628,     0,   629,   630,   631,   632,   633,   634,
     635,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   968,   969,   970,
       0,     0,     0,     0,  -357,     0,   971,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   757,   636,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
     972,     0,     0,     0,  -357,     0,   973,  -357,   974,     0,
       0,   760,     0,   975,   976,   977,     0,     0,     0,   978,
    -357,   761,     0,     0,     0,     0,     0,   637,   638,   639,
     640,   641,  -357,     0,   642,   643,     0,     0,     0,     0,
    -357,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   979,     0,
       0,     0,     0,     0,     0,     0,     0,   644,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   980,     0,     0,
      94,     0,  -357,   645,  -357,  -357,  -357,     0,     0, -1848,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   762,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -357,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   646,     0,     0,     0,  -357,
       0,     0,   981,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -357,     0,     0,     0,
       0,     0,     0,   647,     0,  -357,  -357,  -357,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   648,     0,  -357,
       0,   763,     0,     0,     0,   649,  -357,     0,   650,     0,
       0,     0,   530,   982,   983,     0,     0,  1703,     0,     0,
    1704,   651,     0,  1705,   621,   622,   623,   624,   625,   626,
    1706,  1707,     0,   652,  1409,     0,     0,     0,     0,     0,
       0,   653,     0,     0,   984,     0,   764,     0,   985,   986,
    1708,     0,  1709,     0,     0,     0,   987,     0,     0,   628,
       0,   629,   630,   631,   632,   633,   634,   635,     0,     0,
       0,     0,     0,     0,     0,     0,   988,     0,     0,     0,
       0,   989,     0,   654,     0,   655,   656,   657,   990,     0,
     137,     0,     0,     0,     0,     0,   765,     0,   621,   622,
     623,   624,   625,   626,     0,   636,     0,     0,     0,     0,
       0,     0,   658,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -354,     0,     0,   628,     0,   629,   630,   631,   632,   633,
     634,   635,     0,     0,     0,     0,  1710, -1848,     0,     0,
       0,     0,     0,     0,     0,     0,   659,   660,   661,     0,
       0,     0,     0,     0,   637,   638,   639,   640,   641,     0,
     662,   642,   643,     0,     0,  1711,   966,   663,     0,   636,
       0,  1712,     0,  1713,     0,     0,     0,     0,     0, -1801,
       0,     0,     0,   967,     0,     0,  1714,     0,     0,     0,
       0,     0,     0,     0,   644,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
     645,     0,     0,     0,     0,     0,     0,     0,  1715,     0,
       0,     0,     0,     0,     0,     0,     0,  1716,   637,   638,
     639,   640,   641,     0,     0,   642,   643,     0,     0,     0,
    1717,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   644,     0,
       0,     0,     0,     0,     0,   968,   969,   970,     0,     0,
    1718,     0,     0,     0,   971,     0,     0,     0,     0,     0,
       0,     0,     0,  1719,   648,   757,     0,     0,     0,     0,
       0,     0,   649,     0,     0,   650,     0,     0,     0,     0,
     966,     0,     0,     0,     0,     0,     0,     0,   651,     0,
    1720,     0,     0,     0,     0,     0,   646,   967,   972,     0,
       0,     0,     0,   966,   973,     0,   974,     0,     0,   760,
       0,   975,   976,   977,     0,     0,  1721,   978,     0,   761,
     967,     0,     0,  1722,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   648,     0,
    1723,     0,     0,     0,     0,     0,     0,     0,     0,   650,
     654,     0,   655,   656,   657,     0,   979,     0,     0,     0,
       0,     0,   651,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   980,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   968,
     969,   970,  1724,     0,     0,     0,     0,  -628,   971,   762,
     966,     0,  1725,     0,     0,     0,     0,     0,     0,   757,
       0,     0,   968,   969,   970,     0,     0,   967,     0,  1726,
       0,   971,     0,   659,   660,   661,   655,   656,   657,     0,
     981,     0,   757,     0,     0,     0,     0,   662,     0,     0,
       0,     0,   972,  1727,   663,     0,     0,     0,   973,     0,
     974,     0,     0,   760,     0,   975,   976,   977,     0,     0,
       0,   978,     0,   761,     0,   972,     0,     0,     0,   763,
       0,   973,     0,   974,     0,     0,   760,     0,   975,   976,
     977,   982,   983,     0,   978,     0,   761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   659,   660,   661,
     979,     0,  1428,     0,     0,     0,     0,     0,     0,   968,
     969,   970,   984,     0,   764,     0,   985,   986,   971,   980,
       0,     0,     0,   979,   987,     0,     0,     0,     0,   757,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   980,   762,   988,     0,     0,     0,     0,   989,
       0,     0,     0,     0,     0,     0,   990,     0,   137,     0,
       0,     0,   972,     0,   765,     0,   762,   966,   973,     0,
     974,     0,     0,   760,   981,   975,   976,   977,     0,     0,
       0,   978,     0,   761,   967,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   981,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
     979,     0,     0,     0,     0,   982,   983,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,   980,
       0,     0,     0,     0,     0,     0,  1969,     0,   982,   983,
       0,     0,     0,     0,     0,     0,   984,     0,   764,     0,
     985,   986,     0,   762,     0,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,   968,   969,   970,   984,
       0,   764,     0,   985,   986,   971,     0,     0,   988,     0,
       0,   987,     0,   989,   981,     0,   757,     0,     0,     0,
     990,     0,   137,     0,     0,     0,     0,     0,   765,     0,
       0,   988,     0,     0,     0,     0,   989,     0,     0,     0,
       0,     0,     0,   990,     0,   137,     0,     0,     0,   972,
       0,   765,     0,   763,     0,   973,     0,   974,     0,     0,
     760,     0,   975,   976,   977,   982,   983,     0,   978,     0,
     761,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   764,     0,
     985,     0,     0,     0,     0,     0,     0,   979,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   980,     0,   988,     0,
       0,     0,     0,   989,     0,     0,     0,     0,     0,     0,
     990,     0,   137,     0,     0,     0,     0,     0,   765,     0,
     762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   981,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   982,   983,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   764,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   987,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   988,     0,     0,     0,     0,
     989,     0,     0,     0,     0,     0,     0,   990,     0,   137,
       0,     0,     0,     0,     0,   765
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2393)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   663,   116,   597,   366,   111,   181,
     790,   962,   540,  1118,   103,   794,   105,   652,  1145,  1226,
     849,   687,   111,   158,   721,  1207,   785,   358,  1116,  1591,
     795,  1445,   135,   425,  1581,  1445,  1445,   209,  1445,  1445,
    1445,  1486,  1121,   435,   600,   404,   135,  1123,    56,    57,
      58,  1258,  1535,  1597,  1131,  1131,    64,  1378,  1368,  1357,
    1998,  2032,  1831,     9,  1526,     1,  1266,   700,  1145,  1145,
       9,  1798,  1914,  1112,     9,    22,    17,  1110,     9,    27,
      53,   184,  1184,   749,  1467,  1118,  1119,    60,     9,  1762,
      56,    99,   100,   852,   102,  1128,  1198,  1939,    31,   107,
     108,    31,  1135,  1136,   364,  1377,     1,     6,   116,    87,
      97,  2065,   115,  1840,    17,   108,    58,     9,   130,     1,
    1320,  1154,  1155,   758,   759,   133,    58,    58,    71,   153,
     124,   111,    30,   799,     0,    73,   176,  1520,   142,     0,
     251,    48,   277,  1690,   125,    64,   241,    71,  1253,  1459,
     225,   166,   160,   232,    65,    30,    67,  1455,     1,   241,
     111,  1938,   130,    49,  1891,    58,   177,    65,   116,    67,
     256,    49,    49,  1373,   809,   177,    49,   125,    32,   330,
     124,    21,   171,   191,   295,   229,  1530,    21,   161,   308,
      65,   232,    67,  2164,     6,   203,   237,   369,   203,  1509,
    2093,   232,  1241,   173,  1986,  1588,   985,   840,    88,   271,
     262,     1,   308,   209,   177,    88,    71,   175,  2010,   256,
     256,  1948,  1298,   242,   274,    27,  1570,  1006,   421,   256,
     218,  2432,    58,  1309,   172,   410,   225,   406,   143,   203,
    2544,   249,   357,   452,   233,   218,   219,   178,   406,   257,
      97,  1595,    39,   256,   232,   213,   367,  1290,  2650,   177,
      31,   178,   394,   785,   204,   406,   172,  1143,  1651,   446,
      58,   188,    62,   139,   107,  2168,  1574,   143,   139,   162,
       0,   188,   143,   166,   117,   232,   463,  1163,  1321,  1366,
    1366,   160,   232,   210,  1370,  2687,   505,    49,   204,   272,
      90,    91,   477,  2607,   199,  2506,   973,   974,   477,   282,
     241,  1858,  2039,   980,   116,   342,   340,   256,   306,   477,
     452,    92,   418,   240,    71,   321,   370,   114,   317,   228,
     852,  1893,  1111,   385,   200,  2177,   477,   972,   388,   200,
     443,  1662,   445,   446,    93,  1011,   457,  1380,  1669,   452,
    2023,   228,   126,   504,   252,   363,   445,   446,  1656,    71,
     422,   309,   424,   452,   176,   384,   469,   203,   561,   472,
     473,  2148,   475,   452,   469,   478,   479,   252,   162,  1467,
     469,  1864,   170,   391,   499,   256,   505,   469,  1850,   794,
    1873,  1853,   423,  2286,   402,   287,     6,  1176,  1177,  1178,
     212,  1784,   256,   411,   412,     6,   414,   415,   290,   308,
    1189,  1190,   420,   516,   204,  2197,   354,  1196,  2210,   203,
     331,    57,   392,   498,   271,   511,     9,   516,    64,   437,
     312,   274,  1520,   331,  1467,   223,   341,   540,   541,   251,
     452,   253,   232,    71,   256,   453,  1525,   462,   452,   370,
     237,   540,   541,   421,   266,   398,   331,   349,   463,  1803,
     353,  1017,  1018,  1761,   505,   505,  1810,  1133,   505,   505,
     416,   357,     9,  1506,   398,   341,   316,   357,   581,   357,
     341,   505,   401,   594,   357,   271,  1519,  1520,   335,   483,
     601,   442,   581,   505,   505,  2222,   447,   600,   376,   463,
    1588,  1266,   505,   505,   484,   289,   449,   515,  1585,  1585,
     322,   504,   505,    50,   124,   447,   505,  1861,   505,   457,
    1792,  1842,   500,   504,  1557,   449,   534,  2481,  2482,  1568,
     463,   321,   498,   463,   346,  2262,   647,  2264,   469,   483,
     443,  2214,   505,   398,   804,   388,   554,   505,   556,  1625,
     653,   559,   560,   154,   562,  1588,   504,   452,   505,   466,
    1599,   502,   461,  1651,   506,   511,   505,   972,  2295,   505,
     505,  1778,  1916,   347,   452,  1208,   497,  1679,  1245,   984,
     985,   986,  1782,   591,   453,  1883,   452,   505,   596,  2133,
    2432,   452,   376,  1228,   449,   603,  1629,   504,  2325,  2326,
     256,  1006,   212,   576,   416,   357,   504,  1640,  1373,   452,
    1643,   212,   448,   499,   454,   402,   365,  2079,  1651,   499,
     454,   499,  1920,   505,   376,   465,   499,   328,   402,   212,
     330,   465,   268,   459,   505,   608,   244,  2406,   464,   505,
     511,   251,     6,   253,   505,    65,   256,    67,    22,   461,
     251,   398,   253,   244,   662,   256,   266,   189,   505,   770,
       9,   447,   452,   451,   775,   266,   256,   839,   162,    26,
     271,   459,   460,   256,  2018,   212,   464,   780,   781,    32,
     256,   792,   452,   266,     6,  2656,   398,   252,   437,  2072,
    2034,  2074,   504,   505,   797,   703,  1784,  2465,   706,   511,
     452,   256,   449,   234,   340,   256,  1111,   244,   245,  2053,
     256,  1787,   322,   256,  1493,  2653,   271,   126,   452,   256,
     504,   322,   256,  1115,   200,  1117,   256,   256,  1133,   266,
    2113,  1496,    57,   218,  1139,    60,   346,   449,  2082,    64,
      34,    28,  2086,   262,   292,   346,   406,   499,  1140,     9,
    1142,  1790,  2104,   329,  2075,  1147,   346,   203,   111,   229,
     396,  2488,  2489,   346,  1169,   401,   321,    38,   287,  1161,
     398,  1176,  1177,  1178,  1179,    46,   324,    33,   203,  1184,
       0,  2125,   406,  2166,  1189,  1190,  1191,  1192,  1193,  1194,
    1195,  1196,   130,  1198,  1199,   289,  2094,   387,    58,  2282,
     188,   195,   410,   504,   504,   505,   416,   196,   356,   346,
     123,   252,  1889,  1889,  1890,   416,   452,   477,   178,   410,
     154,   449,   210,  1228,   389,  1460,   416,    85,    62,   314,
     362,   459,   252,   416,   257,   447,   464,   447,   160,   196,
     127,  1513,  1514,  1515,  1516,     6,  1251,   256,   212,   505,
     961,   461,  1487,   477,   256,   511,    90,    91,   232,  2627,
     461,  2423,   256,   212,  1256,   341,   397,   256,  1633,  2179,
    1975,   317,   160,   483,  2172,  2219,  1268,   237,   461,   416,
     240,  2225,   248,   249,   158,  1441,   498,   251,   464,   253,
     212,  2235,   256,   231,  1927,   505,   118,   119,   120,    57,
     370,   511,   266,   256,   505,  1684,    64,   256,   199,   341,
     511,   331,   168,   504,  1017,  1018,  1027,   266,   178,   139,
     354,   511,   505,   143,   461,   212,  1994,   329,   511,   251,
    1335,   253,  2284,  2285,   256,   511,  2498,  2064,  2065,  1270,
     211,  1607,   139,   268,   266,  2013,  2014,   244,   389,  2017,
     505,   376,   212,   291,   505,   270,   511,   231,   322,   505,
       9,  2305,   505,    12,  2308,  2309,    15,    16,    26,   256,
       6,   505,   243,  1132,   511,   505,   505,  2321,   285,   266,
     200,   241,   346,   262,  2072,   504,  2074,   281,   282,   283,
    2058,  2335,  2336,   280,   265,  2063,   256,   346,   232,  1158,
     322,  2080,   290,  2547,   301,   293,   266,   452,   287,  1112,
     708,   267,   435,  1116,   329,   340,   238,  1782,   292,  1350,
    1123,  1124,  1688,   457,   346,  2113,   411,   334,  1131,  2236,
     252,  1134,   323,   324,   455,  2111,  1139,   212,  1141,   232,
    1143,  1144,  1145,  1146,   308,  1169,  1712,   318,    57,   340,
     344,   212,   416,  2132,  2398,    64,  1134,   755,   394,   346,
    1163,   502,   464,   256,   212,  2612,  2418,   416,  1146,  2514,
     256,   396,   495,   274,   459,  1199,   401,   356,  2166,   464,
    2624,   256,   505,   447,   505,  1257,   346,   321,  1493,  2122,
     251,   266,   253,   759,   416,   256,    12,   461,  2442,    15,
      16,  2206,   351,   394,  1695,   266,  1498,   378,   256,   511,
     268,  2179,   461,   335,   307,  2529,   309,   337,   266,  2529,
    2529,   341,  2529,  2529,  2529,   347,   126,  2160,  2161,   416,
     262,   453,   419,   420,    30,   546,   834,  1309,  1241,   461,
    1775,   505,  2472,   809,   459,  1817,   410,   511,   256,   464,
     351,  1310,   353,  2700,     6,   287,   416,     9,  1261,  1831,
     172,   322,   511,   412,   413,   453,   262,   212,  2730,  1352,
    2717,   346,   172,   467,   468,   586,   212,  1582,   472,   287,
     505,   451,   340,   505,     1,   346,   454,   216,     2,   511,
     460,   287,   204,     7,    11,  1298,   475,    49,   346,  2529,
     414,   461,  1607,   474,   615,  1377,  1309,   236,   306,   469,
      47,   256,   108,   477,   452,   251,   438,   253,   452,  1402,
     256,   266,  1981,   171,   511,   504,    63,  1386,   277,   278,
     266,    83,   128,   262,   502,  2268,    88,   220,   396,   453,
     338,   416,    59,   401,     8,   505,   758,   759,   100,     8,
    1353,   511,   301,   302,   452,   416,   262,   452,   287,   268,
     358,   758,   759,  1366,   505,  1118,   103,  1370,   416,   252,
       8,   167,  2037,    37,  1679,  1606,     9,   225,    37,  1684,
      97,   287,    99,    55,   101,   233,   322,   423,  1923,   212,
     405,  2359,   109,   189,   452,  2363,   262,   809,    16,    37,
     461,   346,  1155,  1406,    13,    14,   188,  1712,   204,  1481,
     346,   555,   809,   461,  1673,    33,   560,  1406,    90,   482,
    2408,   287,  2410,    32,    42,    58,   216,   217,   210,   188,
     232,   340,  2514,   256,    11,   107,   511,   500,  1441,   394,
     192,   193,   194,   266,   505,   117,   236,   505,   165,   201,
     511,   210,  1215,   405,  2481,  2482,  1219,  2484,  2055,   452,
     212,   277,   278,   511,  1467,   452,  2195,  1738,   351,   317,
    2577,   416,   262,   379,  2040,   411,   359,  1748,  1749,  2158,
     416,  1752,    59,   454,   459,   301,   302,   396,  1979,   464,
     449,   452,   401,   245,   465,   232,  2429,   287,  2033,   251,
     459,   253,   239,    58,   256,   464,   258,   259,   260,  2477,
    2478,   449,   264,   250,   266,   452,   461,  1520,  1590,   271,
      97,   459,    99,   346,   101,   461,   464,  2093,  2533,   218,
    1414,  1439,   109,   174,  1418,   449,  1444,  1445,   505,  1447,
     257,  1425,  1614,   452,   340,   459,    69,    54,    55,  2350,
     464,   303,   505,   307,   450,   309,   308,  2490,  2625,  2626,
     505,  2494,  2495,   459,   450,  1568,   511,  1639,   464,   505,
     322,   452,   501,   459,   351,   511,   353,   452,   464,   212,
     207,   208,  1585,    90,   301,  1588,  2484,   256,   165,   452,
    2657,  1626,   452,   416,   346,   454,  1599,   505,   504,   505,
     107,   452,  2168,  1895,   340,   357,   465,   256,   241,  2676,
     117,  1193,  1194,  1195,   351,   352,   285,   286,   199,   246,
     247,   256,  1625,   256,   469,   377,     1,   505,   351,   366,
     353,   368,   443,   266,  1676,  1677,  1678,   400,   461,   351,
    1682,   353,  1653,  1685,  1686,   473,   401,   475,  1651,   226,
     478,  2331,   321,  2333,   486,   487,   488,   489,   410,   157,
     329,   159,  2729,   410,   416,    40,    41,    42,    43,    44,
      97,    98,  1675,   390,   299,   300,   428,   429,  1191,  1192,
     257,   486,   487,   488,   489,   157,  1675,   159,   511,   486,
     487,   488,   489,   623,   624,   625,   626,  2595,  1177,  1178,
    2598,    76,    77,   252,   252,   254,   254,  1718,   252,   461,
     254,   501,    64,   346,   504,   452,   433,    60,   256,   471,
    2286,  2522,  2523,   232,   301,   477,   452,   304,  1739,  1637,
     328,   401,  2630,  2631,    66,   452,    68,  2635,  2636,   491,
     984,   256,   986,   505,   496,   229,    26,   499,   452,   452,
     108,   503,   452,   505,   312,  2183,   256,   256,   272,   511,
     455,    23,   499,  2564,   103,   452,   189,  2568,  2569,   123,
     794,  2622,  2452,   438,   455,    17,    87,  1780,   505,   452,
     394,  1784,   272,   416,  1787,  1693,  1694,  1790,   505,   351,
     401,    57,   369,   504,   402,   464,  1704,   423,   262,    39,
      24,    25,   452,  1711,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   390,   321,   237,   402,   794,   325,   326,
     505,   331,  2114,  1895,   507,   505,   419,   316,   461,   456,
     310,   458,  1740,   394,     7,   261,   469,  1840,   415,   452,
     417,   394,    66,   255,    68,   452,    70,   452,  2107,   505,
     504,   452,   394,  2158,   366,   452,   433,   452,    86,   366,
      86,   125,   432,   452,   394,   389,    22,   306,   502,   309,
     452,   204,   505,   394,  1946,   382,   383,     4,   511,   500,
     104,   105,   106,  1955,  1956,   505,  1889,  1890,  1891,   505,
     502,  1799,    19,  1928,  1929,  1930,  1931,  1932,  1933,  1934,
    1935,    35,    29,   384,    38,   452,   232,   447,   254,   505,
    1818,    45,    46,   218,   505,   123,  1824,   511,    53,   447,
     463,   443,    26,   400,   306,   410,   505,   348,   505,   448,
     154,   196,   156,   446,   463,   443,   256,    64,   505,   163,
     376,   452,   166,   399,   336,  1948,   452,   115,   505,   170,
     188,   452,   256,   505,   223,   330,   309,   452,    92,   463,
     984,   985,   986,    30,   447,   403,   463,   463,   343,   463,
     463,  1974,   463,   452,   505,   463,   463,   463,   505,   505,
     454,   131,  1006,   196,   132,  1974,  1989,   447,   133,   386,
     134,  1994,   135,   498,   136,   102,  2007,   137,   442,   138,
     463,   447,    49,   141,   404,   446,   443,   984,   985,   986,
    2013,  2014,   446,   144,  2017,   440,   196,   145,    45,   271,
     146,    31,   147,    49,   500,   148,   150,   161,   252,  1006,
     254,   149,   166,   196,   151,   113,  2039,   152,    65,    66,
      67,    68,  2114,   220,   449,   449,   449,   271,   449,   447,
     449,  2123,  1960,  2064,  2065,  2058,   190,   115,   449,   452,
    2063,  2064,  2065,   410,   312,   110,   447,   197,   223,  2072,
    1978,  2074,   339,   376,   203,   256,   272,   211,   231,   294,
     298,   166,  2641,   485,   502,  1109,   502,  1111,   129,  1997,
    1114,  1999,   176,   220,  1118,  2003,   447,   365,   169,   130,
      49,   196,   447,  2011,   204,   299,   228,   228,  2111,  1133,
    2113,    57,  2603,   204,   452,  1139,   505,   166,   272,   252,
     510,   509,   423,   237,   299,   252,   203,   276,   447,   447,
     505,   265,   362,  1110,  1111,   262,  1160,   380,  1162,    30,
     203,  1118,  1119,   295,   203,  1169,    17,   443,   129,   140,
     447,  1128,  1176,  1177,  1178,  1179,   365,    49,  1135,  1136,
    1184,   203,   142,  2166,     8,  1189,  1190,  1191,  1192,  1193,
    1194,  1195,  1196,   196,  1198,  1199,  2179,  1154,  1155,   130,
    2183,   502,   209,   203,   318,   502,   423,   447,   315,   452,
       9,     7,  1169,   320,  2183,   505,   504,   294,  2106,  1176,
    1177,  1178,   203,  1227,   297,  2497,   504,   499,   235,   499,
      49,   189,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,
     444,   291,  1199,   262,   351,   252,   314,  1251,   462,  1253,
     313,   330,   359,   114,   437,    47,    35,   411,   203,    38,
     203,   294,   361,   103,   378,   372,    45,    46,   361,    49,
     262,   237,   296,  2545,   493,  1232,    96,   391,   285,  2262,
     380,  2264,   292,    57,     8,    49,   111,   457,   337,   262,
     494,   337,   262,   262,   401,   110,   452,   404,   305,   210,
     482,   505,   309,   452,   340,   412,   108,   221,   299,  2292,
     285,   502,  2295,    92,   367,   232,   423,   321,  1275,   120,
     327,   196,   418,  2292,   337,   321,   333,    49,   306,     7,
      46,  1335,    92,  1290,   425,    26,   127,   201,   148,   206,
    2625,  2626,    75,  2326,   221,   452,   238,   150,   455,   177,
     519,   410,   469,  1357,   286,  1894,   425,   497,  1026,   781,
     474,  1445,   748,  2346,  1321,  2698,  1887,  1404,  1667,   799,
    1985,  2207,  2657,  2181,  2207,  2077,  2359,  2346,  1035,  1383,
    2363,  1751,   161,  1224,   788,  1834,  1750,  1241,  2391,  2378,
     852,  2676,  1786,  1479,  2075,  1506,  1481,  2260,   405,  1525,
    1528,  1853,  2079,  1294,  2102,  1571,  2278,   414,  1578,  1881,
    1330,   190,  1335,  1589,  2114,  1956,  2121,  2135,  1907,  1619,
    1364,  1936,  1146,  1380,   431,  2408,  1366,  2410,  1385,  2161,
    1380,   794,   211,  1955,  2687,  2329,  2324,  1955,  1666,  2432,
    1557,  2334,  2339,  2426,  2729,   452,  2154,  2154,  1353,  1475,
    2154,  1455,   299,  2154,   152,   694,  1923,  1251,   270,  1712,
     242,   753,  2555,   989,   417,   509,   473,  2420,   215,   449,
    1943,  2091,  2744,  1886,   712,   558,  1581,  2627,    -1,  2367,
      -1,    -1,    -1,    -1,  2372,   492,   265,    -1,    -1,  1493,
    2481,  2482,   499,   500,  2477,  2478,    -1,    -1,  2481,  2482,
      -1,  2484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1493,    -1,    -1,   318,
      -1,    -1,    -1,  2431,    -1,    -1,    -1,    -1,    -1,  1506,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2544,  1519,  1520,    -1,    -1,    -1,    -1,    -1,    -1,
    1574,    -1,    -1,    -1,    -1,  2463,  2464,    -1,  1582,    -1,
      -1,    -1,  2573,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,  2480,    -1,  1598,    -1,    -1,    -1,    -1,   378,
    1557,    -1,    -1,  1607,    -1,    -1,    -1,    -1,  2496,   972,
      -1,    -1,   391,    -1,  1618,    -1,    -1,    -1,    -1,    -1,
      -1,   984,   985,   986,  2607,  1582,    -1,    -1,    -1,    -1,
      -1,  1588,    -1,  2521,    -1,    -1,    -1,    -1,  2526,  2527,
      -1,    -1,  1646,  1006,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1656,    -1,    -1,    -1,    -1,    -1,  2546,    -1,
      -1,  2652,    -1,    -1,    -1,    83,    -1,  2650,    -1,    -1,
      -1,    -1,  1629,    -1,    -1,  1679,    -1,    -1,    -1,    -1,
    1684,    -1,   100,  1640,    -1,    -1,  1643,    -1,  2576,    -1,
      -1,  2579,  2580,    83,  1651,   474,    -1,    -1,  1702,    -1,
      -1,    -1,  2693,  2694,  2687,    -1,    -1,    -1,  1712,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1724,    -1,    -1,  1727,    -1,    -1,    -1,  1684,    -1,    -1,
      -1,    -1,  2620,    -1,    -1,    -1,    -1,    -1,  2721,    -1,
      -1,    -1,  2733,    -1,    -1,    -1,    -1,    -1,  1111,    -1,
      -1,    -1,    -1,  1116,    -1,    -1,    -1,  1761,    -1,    -1,
    1123,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1131,    -1,
      -1,    -1,    -1,  1777,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,  1145,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,  1169,    -1,    -1,    -1,
      -1,   201,    -1,  1176,  1177,  1178,  1179,    -1,    -1,    -1,
      -1,  1184,    -1,    -1,    -1,    -1,  1189,  1190,  1191,  1192,
    1193,  1194,  1195,  1196,    -1,  1198,  1199,    -1,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1228,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,  1883,
    1884,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1912,    -1,
      -1,    -1,    -1,   303,    -1,    -1,  1920,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,
      -1,    -1,    -1,    -1,    -1,  1298,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1947,    -1,    -1,  1309,    -1,    -1,    -1,
    1954,  1955,    -1,    -1,    -1,    -1,    -1,    -1,     1,   377,
       3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,
    1927,  1975,    -1,    -1,    -1,    18,  1980,    -1,    -1,    -1,
      -1,  1985,  1986,    -1,    -1,    -1,    -1,   377,    -1,    -1,
      -1,    -1,    -1,    -1,  1357,    -1,    -1,    -1,   416,    -1,
      -1,    -1,    -1,  1366,    -1,    -1,    -1,  1370,    51,    52,
     428,   429,    -1,    -1,    -1,    -1,    32,    -1,    61,    35,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      46,    -1,    75,    -1,    -1,    -1,  2040,    -1,   428,   429,
      -1,    -1,    -1,   461,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,   471,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,   491,    -1,    -1,    92,   120,   496,   122,
    2084,   471,    -1,    -1,    -1,   503,    -1,   505,    -1,  2093,
    2094,    -1,  1455,   511,    -1,   111,    -1,    -1,  2102,    -1,
      -1,   491,    -1,    -1,  1467,    -1,   496,    -1,    -1,    -1,
     153,    -1,    -1,   503,    -1,   505,    -1,  2121,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
    1493,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2150,    -1,    -1,    -1,
      -1,    -1,   195,    -1,  2158,    -1,    -1,  1520,    -1,   202,
      -1,    -1,   205,   206,  2168,  2122,    -1,    -1,  2172,    -1,
      -1,    -1,   215,    -1,   190,    -1,    -1,    -1,    -1,   222,
      -1,   224,   198,    -1,   227,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,  2197,    -1,   211,    -1,    -1,    -1,    -1,
      -1,  2158,  2206,  2160,  2161,    -1,    -1,   100,    -1,    -1,
      -1,  1574,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1582,
      -1,    -1,  1585,    -1,    -1,  1588,   269,   243,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,    -1,  2241,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    -1,   263,    -1,   265,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1625,    -1,    -1,    -1,    -1,    -1,   311,    -1,
      -1,   287,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   324,  2286,    -1,    -1,    -1,    -1,    -1,  1651,    -1,
      -1,    -1,    -1,  1656,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,   318,    -1,    -1,    -1,   349,   350,   201,    -1,
      -1,  2268,    -1,    -1,    -1,    -1,  1679,   360,    -1,   212,
      -1,  1684,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,
      -1,   374,   375,    -1,    -1,    -1,    -1,    -1,   381,    -1,
      -1,    -1,   385,    -1,    -1,    -1,  2350,    -1,    -1,    -1,
     393,    -1,    -1,    -1,    -1,   371,    -1,    -1,    -1,    -1,
     403,    -1,   378,   256,    -1,   258,   259,   260,    -1,   412,
      -1,   264,    -1,   266,    -1,   391,    -1,    -1,   421,   395,
      -1,    -1,    -1,   426,   427,    -1,    -1,   430,    -1,   432,
      -1,    -1,    -1,    -1,    -1,    -1,   439,  2401,  1761,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   452,
     303,    -1,    -1,    -1,    -1,    -1,    -1,  1780,    -1,    -1,
     436,  1784,    -1,    -1,  1787,    -1,    -1,   470,    -1,   445,
      -1,    -1,    -1,   476,    -1,    -1,    -1,    -1,   481,    -1,
    2444,    -1,    -1,    -1,    -1,    -1,    -1,  2451,    -1,    -1,
    2454,    -1,    -1,   346,    -1,    -1,    -1,    -1,   474,    -1,
      -1,    -1,    -1,    -1,    -1,   508,    -1,    -1,   484,    -1,
      -1,    -1,  2429,    -1,   490,    -1,    -1,  1840,    -1,    -1,
      -1,    -1,    -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2503,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2517,    -1,    -1,    -1,    -1,  2522,  2523,
    1883,  1884,    -1,   416,    -1,    -1,  1889,  1890,  1891,  2533,
      -1,    -1,    -1,  2490,    -1,   428,   429,  2494,  2495,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1920,    -1,    -1,
    2564,    -1,    -1,    -1,  2568,  2569,    -1,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2581,   471,    -1,
      -1,    -1,    -1,    -1,    -1,  1948,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,
      -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,
     503,    -1,   505,    -1,    -1,    -1,    -1,    -1,   511,    -1,
      -1,  2625,  2626,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,
    2644,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,  2657,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2669,  2670,    -1,  2625,  2626,
      -1,    -1,  2676,    -1,    -1,    -1,  2039,    -1,    -1,    -1,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,  2701,    -1,    -1,
    2657,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,  2072,
      -1,  2074,    -1,    -1,    -1,    -1,    -1,    -1,    89,  2676,
      -1,    -1,    -1,  2727,    -1,  2729,    -1,    -1,    -1,    -1,
      -1,  2094,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2102,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,  2111,   120,
    2113,   122,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,  2729,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   164,    -1,  2158,    -1,    -1,   169,    -1,
      -1,    -1,    -1,  2166,    -1,    -1,    -1,    -1,    -1,  2172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,   195,     3,    -1,     5,    -1,    -1,
      -1,   202,    10,    -1,   205,   206,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,
      -1,   222,    -1,   224,    -1,    -1,   227,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,   269,  2262,
      -1,  2264,   273,    -1,   275,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,
     291,   292,    -1,   294,   295,   296,   297,    -1,    -1,    -1,
      -1,    -1,  2295,    -1,   112,    -1,    -1,    -1,    -1,    -1,
     311,    -1,   120,    -1,   122,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2326,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,   349,   350,
      -1,    -1,    -1,    -1,    -1,    -1,   164,    -1,    -1,   360,
      -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   374,   375,    -1,    -1,    -1,    -1,    -1,
     381,    -1,    83,    -1,   385,    -1,    -1,   195,    -1,    -1,
      -1,    -1,   393,    -1,   202,    -1,    -1,   205,   206,   100,
      -1,    -1,   403,    -1,    -1,    -1,    -1,   215,    -1,    -1,
      -1,   412,    -1,    -1,   222,  2408,   224,  2410,    -1,   227,
     421,    -1,    -1,    -1,    -1,   426,   427,    -1,    -1,   430,
      -1,   432,    -1,    -1,    -1,     1,    -1,     3,   439,     5,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,   452,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   269,    -1,    -1,    -1,   273,    -1,   275,    -1,   470,
      -1,    -1,    -1,    -1,    -1,   476,    -1,   285,    -1,    -1,
     481,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
     191,   192,   193,   194,    -1,    61,    -1,    -1,    -1,    -1,
     201,   502,    -1,   311,    -1,    -1,    72,   508,    -1,    75,
      -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   349,   350,    -1,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,   360,    -1,   120,   256,   122,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,    -1,   374,   375,    -1,    -1,
      -1,    -1,    -1,   381,    -1,    -1,    -1,   385,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   393,    -1,   153,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   403,    -1,    -1,   164,    -1,
      -1,    -1,   303,   169,   412,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,   426,   427,
      -1,    -1,   430,    -1,   432,    -1,    -1,    -1,    -1,   195,
      -1,   439,  2625,  2626,    -1,    -1,   202,    -1,    -1,   205,
     206,    -1,    -1,    -1,   452,    -1,    -1,    -1,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,   224,    -1,
      -1,   227,   470,    -1,  2657,    -1,    -1,    -1,   476,    -1,
      -1,    -1,    -1,   481,    -1,    -1,   377,    -1,    -1,    -1,
      -1,    -1,    -1,  2676,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     508,    -1,    -1,   269,    -1,    -1,    -1,   273,    -1,   275,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,   429,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2729,    -1,    -1,   440,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    10,    -1,    -1,   324,    -1,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
     471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   482,    -1,   349,   350,    -1,    -1,    -1,    -1,    -1,
     491,    -1,    -1,    -1,   360,   496,    51,    52,    -1,   500,
      -1,    -1,   503,   504,   505,    -1,    61,    -1,   374,   375,
      -1,    -1,    -1,    -1,    -1,   381,    -1,    72,    -1,   385,
      75,    -1,    -1,    -1,    -1,    -1,    -1,   393,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,   403,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,    -1,   112,    -1,    -1,
     426,   427,    -1,    -1,   430,   120,   432,   122,    -1,    -1,
      -1,    -1,    -1,   439,   129,    -1,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
      -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,   164,
     476,    -1,    -1,    -1,   169,   481,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,   508,    -1,    -1,    -1,    -1,   202,    -1,    -1,
     205,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     215,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,   224,
      -1,    -1,   227,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,   269,    -1,    -1,    -1,   273,    20,
     275,    -1,    -1,    -1,   191,   192,   193,   194,    -1,    -1,
     285,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,   256,
      -1,   258,   259,   260,   349,    -1,    -1,   264,    -1,   100,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     375,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,    -1,
     385,    -1,    -1,    -1,    -1,    -1,   303,    -1,   393,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   403,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,   160,
      -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,   170,
      -1,   426,   427,    -1,    -1,   430,    -1,   432,    -1,    -1,
      -1,    -1,    -1,    -1,   439,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,    -1,   452,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    -1,   207,   208,    -1,    -1,
     377,   212,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,
      -1,   476,    -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,
      -1,   232,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
      12,    13,    14,    -1,   245,   246,   247,    -1,    20,    -1,
     251,    -1,   253,   508,    -1,   256,    -1,   258,   259,   260,
      -1,   428,   429,   264,    -1,   266,    -1,    -1,    -1,    -1,
     271,    -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,   290,
      -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     301,    -1,   303,    -1,   471,    -1,    -1,   308,    -1,    -1,
      -1,    83,   313,    -1,    -1,   482,    -1,    -1,    -1,     6,
      -1,   322,     9,    -1,   491,    -1,    -1,    -1,   100,   496,
      -1,   332,    -1,   500,    -1,    -1,   503,   504,   505,    -1,
      -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,    -1,   416,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,   428,   429,   201,
      -1,    -1,    -1,    -1,    -1,   207,   208,    -1,    -1,    -1,
     212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   449,    -1,
     451,    -1,   453,    -1,    -1,   456,    -1,   458,   459,   460,
     461,    -1,   463,   464,    -1,    -1,   153,    -1,    -1,    -1,
     471,    -1,    -1,   245,   246,   247,    -1,    -1,    -1,   251,
      -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
     491,    -1,   264,    -1,   266,   496,    -1,    -1,    -1,   271,
      -1,    -1,   503,    -1,   505,   192,   193,   194,    -1,    -1,
     511,    -1,   284,    -1,   201,    -1,    -1,    -1,   290,    -1,
      -1,   293,    -1,    -1,    -1,   212,    -1,    -1,    -1,   301,
      -1,   303,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
       6,   313,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
     332,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,   346,    -1,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   377,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   303,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   322,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     6,   416,    -1,     9,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,   429,    -1,   346,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,   449,    -1,   451,
      -1,   453,    -1,    -1,   456,    -1,   458,   459,   460,   461,
     377,   463,   464,    -1,    -1,    -1,    -1,    -1,    -1,   471,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,
      83,    -1,    -1,    -1,   496,    -1,   192,   193,   194,   416,
      -1,   503,    95,   505,    -1,   201,    -1,   100,    -1,   511,
      -1,   428,   429,    -1,    -1,    -1,   212,    -1,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,   228,    -1,    -1,   100,    -1,   454,    -1,    -1,
      -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,   465,   245,
      -1,    -1,    -1,    -1,   471,   251,    -1,   253,    -1,    -1,
     256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
     266,    -1,    -1,    -1,   491,   271,    -1,    -1,    -1,   496,
      -1,    -1,    -1,    -1,    -1,    -1,   503,    -1,   505,    -1,
      -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,   303,   201,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,    -1,   322,   192,   193,   194,
      -1,    -1,     6,    -1,    -1,     9,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,
     346,    -1,   245,    -1,    -1,    -1,    -1,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,    -1,    -1,    -1,    -1,   271,    -1,
     245,   377,    -1,    -1,    -1,    -1,   251,    -1,   253,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,   266,    -1,    -1,    -1,    -1,   271,    -1,    -1,    83,
     303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     416,    -1,    -1,    -1,    -1,    -1,   100,    -1,     6,   322,
      -1,     9,   428,   429,    -1,    -1,    -1,    -1,   303,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   346,    -1,     6,    -1,   322,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   471,    -1,    -1,    -1,    -1,
      -1,   346,    -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,
     496,    -1,    -1,    -1,    -1,    83,    -1,   503,    -1,   505,
      -1,    -1,   377,    -1,    -1,   511,    -1,    95,   192,   193,
     194,    -1,   100,   416,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    83,    -1,    -1,   428,   429,    -1,   212,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   428,   429,    -1,    -1,    -1,   461,    -1,
      -1,   245,    -1,    -1,    -1,    -1,    -1,   251,   471,   253,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,
     264,    -1,   266,    -1,    -1,    -1,   461,   271,   491,    -1,
      -1,    -1,    -1,   496,    -1,    -1,   471,    -1,    -1,    -1,
     503,    -1,   505,    -1,   192,   193,   194,    -1,   511,    -1,
      -1,    -1,    -1,   201,    -1,    -1,   491,    -1,    -1,   303,
      -1,   496,    -1,    -1,   212,    -1,    -1,    -1,   503,    -1,
     505,   192,   193,   194,    -1,    -1,   511,    -1,   322,    -1,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,
      -1,    -1,   346,   251,    -1,   253,     6,    -1,   256,     9,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,
      -1,    -1,    -1,   271,   245,    -1,    -1,    -1,    -1,    -1,
     251,    -1,   253,   377,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,
     271,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   416,    -1,   322,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   303,    83,   428,   429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,
     100,   322,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   346,    -1,   471,     6,   377,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,
      -1,    -1,   496,    -1,    -1,    -1,   377,    -1,    -1,   503,
      -1,   505,    -1,    -1,    -1,    -1,   166,   511,   416,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     428,   429,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,   416,    -1,    -1,    -1,   100,
      -1,   201,    -1,    -1,    -1,    83,    -1,   428,   429,    -1,
      -1,    -1,   212,   461,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   471,    -1,     6,   447,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     461,    -1,    -1,   491,    -1,   245,    -1,    -1,   496,    -1,
     471,   251,    -1,   253,    -1,   503,   256,   505,   258,   259,
     260,    -1,    -1,   511,   264,    -1,   266,    -1,    -1,    -1,
     491,   271,    -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,
      -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,    -1,
     511,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,    -1,
     201,    -1,    83,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   212,    -1,    -1,   192,   193,   194,    -1,   196,   100,
      -1,    -1,   322,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   245,    -1,   346,    -1,    -1,    -1,
     251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,   245,    -1,    -1,
     271,    -1,    -1,   251,    -1,   253,    -1,   377,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,
      -1,    -1,     6,   271,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,   416,    -1,    -1,    -1,
     201,   322,    -1,    -1,    -1,   303,    -1,    -1,   428,   429,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   322,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   461,    -1,    -1,   245,    -1,    -1,    -1,   346,    83,
     251,   471,   253,    -1,    -1,   256,   377,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,   100,    -1,    -1,    -1,
     271,   491,    -1,    -1,    -1,    -1,   496,     6,    -1,   377,
       9,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,
      -1,   511,    -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,   303,    -1,    -1,    -1,    -1,   428,   429,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,
      -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     428,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     461,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,
     471,    -1,    -1,    -1,    83,    -1,    -1,    -1,   192,   193,
     194,    -1,    -1,   461,   485,    -1,    -1,   201,    -1,    -1,
     491,   100,    -1,   471,    -1,   496,   377,    -1,   212,    -1,
      -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,    -1,
     511,    -1,    -1,   491,    -1,    -1,    -1,    -1,   496,    -1,
      -1,    -1,    -1,    -1,    -1,   503,    -1,   505,    -1,   410,
      -1,   245,    -1,   511,    -1,   416,    -1,   251,    -1,   253,
       6,    -1,   256,     9,   258,   259,   260,   428,   429,    -1,
     264,    -1,   266,    -1,    -1,    -1,    -1,   271,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     461,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,   303,
     471,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,   322,    -1,
     491,    -1,    -1,    -1,    -1,   496,    -1,    83,    -1,    -1,
      -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,    -1,
     511,    -1,   346,    -1,   100,    -1,   245,    -1,    -1,    -1,
      -1,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,
      -1,    -1,   271,   377,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   322,   428,   429,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,    -1,    -1,    -1,   201,    -1,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,   461,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   471,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,   245,
      -1,    -1,   496,    -1,    -1,   251,    -1,   253,    -1,   503,
     256,   505,   258,   259,   260,    -1,    -1,   511,   264,    -1,
     266,    -1,    -1,    -1,    -1,   271,    -1,   416,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
     429,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   461,    -1,    -1,    -1,   322,    -1,    -1,    -1,
      -1,    -1,   471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
     346,    -1,   491,    -1,    -1,    -1,    -1,   496,    -1,    -1,
      -1,    -1,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,
      -1,    -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,   377,    35,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
      -1,   201,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,
     416,    74,   212,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   251,    -1,   253,    -1,   461,   256,   120,   258,   259,
     260,    -1,    -1,    -1,   264,   471,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,
     496,    -1,    -1,    -1,    -1,    -1,    -1,   503,   161,   505,
      -1,    -1,    -1,   303,    -1,   511,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,   179,   180,   181,   182,
     183,    -1,   322,   186,   187,    -1,    -1,   190,    -1,    -1,
      -1,    -1,    -1,   196,    -1,   198,    -1,    -1,    -1,    -1,
      -1,   204,    -1,    -1,    -1,    -1,   346,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,
      -1,    -1,   235,   373,    -1,    -1,    -1,   377,   241,    -1,
     243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   277,    -1,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,   429,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   318,   319,    -1,    -1,    -1,
      -1,   461,    -1,    -1,   327,    -1,    -1,   330,    -1,    -1,
      -1,   471,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
     343,    -1,   345,    -1,    -1,   485,    -1,    -1,    -1,    -1,
      -1,   491,    -1,    -1,    -1,    -1,   496,    -1,    21,    -1,
      -1,    -1,    -1,   503,    -1,   505,    -1,    -1,   371,    -1,
      -1,   511,    -1,    36,    -1,   378,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   405,    -1,   407,   408,   409,    -1,    -1,    -1,
      -1,    74,    -1,    76,    77,    78,    79,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   447,    -1,    -1,    -1,    -1,   452,
      -1,    -1,    -1,    -1,   457,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,    -1,    -1,
      -1,   474,    -1,    -1,    -1,   478,   479,   480,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,
      -1,    -1,    -1,    -1,    -1,   498,   499,    -1,    83,    -1,
      -1,    -1,   505,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,   176,    -1,   100,   179,   180,   181,   182,
     183,    -1,    -1,   186,   187,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   204,    -1,    -1,    36,    -1,    -1,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,
      -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
      -1,    -1,    -1,    -1,   277,    -1,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,   120,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,    -1,    -1,
     245,    -1,    -1,    -1,   327,    -1,   251,   330,   253,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
     343,   266,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,
     182,   183,   355,    -1,   186,   187,    -1,    -1,    -1,    -1,
     363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,
     232,    -1,   405,   235,   407,   408,   409,    -1,    -1,   241,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,   452,
      -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   469,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,   478,   479,   480,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,   492,
      -1,   416,    -1,    -1,    -1,   327,   499,    -1,   330,    -1,
      -1,    -1,   505,   428,   429,    -1,    -1,    32,    -1,    -1,
      35,   343,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,   355,   449,    -1,    -1,    -1,    -1,    -1,
      -1,   363,    -1,    -1,   459,    -1,   461,    -1,   463,   464,
      65,    -1,    67,    -1,    -1,    -1,   471,    -1,    -1,    74,
      -1,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,
      -1,   496,    -1,   405,    -1,   407,   408,   409,   503,    -1,
     505,    -1,    -1,    -1,    -1,    -1,   511,    -1,    39,    40,
      41,    42,    43,    44,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,   434,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     452,    -1,    -1,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    -1,    -1,    -1,    -1,   161,   469,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   478,   479,   480,    -1,
      -1,    -1,    -1,    -1,   179,   180,   181,   182,   183,    -1,
     492,   186,   187,    -1,    -1,   190,    83,   499,    -1,   120,
      -1,   196,    -1,   198,    -1,    -1,    -1,    -1,    -1,   204,
      -1,    -1,    -1,   100,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,
     235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,   179,   180,
     181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,    -1,
     265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
     305,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,   319,   212,    -1,    -1,    -1,    -1,
      -1,    -1,   327,    -1,    -1,   330,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,
     345,    -1,    -1,    -1,    -1,    -1,   277,   100,   245,    -1,
      -1,    -1,    -1,    83,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,    -1,    -1,   371,   264,    -1,   266,
     100,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,    -1,
     395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
     405,    -1,   407,   408,   409,    -1,   303,    -1,    -1,    -1,
      -1,    -1,   343,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,   447,    -1,    -1,    -1,    -1,   452,   201,   346,
      83,    -1,   457,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,   192,   193,   194,    -1,    -1,   100,    -1,   474,
      -1,   201,    -1,   478,   479,   480,   407,   408,   409,    -1,
     377,    -1,   212,    -1,    -1,    -1,    -1,   492,    -1,    -1,
      -1,    -1,   245,   498,   499,    -1,    -1,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,    -1,   245,    -1,    -1,    -1,   416,
      -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,
     260,   428,   429,    -1,   264,    -1,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   478,   479,   480,
     303,    -1,   449,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,   459,    -1,   461,    -1,   463,   464,   201,   322,
      -1,    -1,    -1,   303,   471,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   322,   346,   491,    -1,    -1,    -1,    -1,   496,
      -1,    -1,    -1,    -1,    -1,    -1,   503,    -1,   505,    -1,
      -1,    -1,   245,    -1,   511,    -1,   346,    83,   251,    -1,
     253,    -1,    -1,   256,   377,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,    -1,   449,    -1,   428,   429,
      -1,    -1,    -1,    -1,    -1,    -1,   459,    -1,   461,    -1,
     463,   464,    -1,   346,    -1,    -1,    -1,    -1,   471,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,   459,
      -1,   461,    -1,   463,   464,   201,    -1,    -1,   491,    -1,
      -1,   471,    -1,   496,   377,    -1,   212,    -1,    -1,    -1,
     503,    -1,   505,    -1,    -1,    -1,    -1,    -1,   511,    -1,
      -1,   491,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,
      -1,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,   245,
      -1,   511,    -1,   416,    -1,   251,    -1,   253,    -1,    -1,
     256,    -1,   258,   259,   260,   428,   429,    -1,   264,    -1,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,
     463,    -1,    -1,    -1,    -1,    -1,    -1,   303,   471,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,   491,    -1,
      -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,
     503,    -1,   505,    -1,    -1,    -1,    -1,    -1,   511,    -1,
     346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   471,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,
     496,    -1,    -1,    -1,    -1,    -1,    -1,   503,    -1,   505,
      -1,    -1,    -1,    -1,    -1,   511
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   514,   515,     0,   200,   341,   516,   517,   518,   519,
     520,   521,   523,   533,   535,   452,   452,   518,   154,   529,
     541,   529,   529,   256,   342,   536,   536,   123,    85,   542,
     522,   524,   533,   139,   527,   528,    26,   537,   537,   452,
     394,   543,   143,   522,   525,   526,   529,   536,   256,   452,
     534,   452,    11,    59,    97,    99,   101,   109,   165,   226,
     257,   301,   304,   369,   390,   415,   417,   433,   505,   544,
     545,   549,   560,   568,   569,   570,   571,   572,   577,   586,
     588,   593,   596,   597,   599,   600,   601,   602,   603,   604,
     605,   536,   524,   452,   232,   538,  1278,   505,  1199,  1199,
     423,   405,  1296,  1278,  1278,  1278,   394,  1199,   405,   452,
     452,  1278,   452,   452,    58,  1267,   573,     1,   452,   571,
     218,   587,   174,   606,   452,   526,   452,    73,   172,   354,
     457,   539,   540,   578,  1278,  1278,  1278,   505,  1194,  1225,
      69,  1194,   452,  1278,  1278,   550,   561,  1194,   546,   505,
     589,   590,   591,  1200,   256,   307,   309,   574,   576,  1044,
    1228,  1278,   452,   505,   452,   608,   540,   340,  1293,  1278,
     212,   256,   266,   346,   416,   461,   511,   594,   595,  1231,
    1194,   256,   218,   306,  1316,   256,   469,    57,    64,   268,
     340,   396,   401,   505,   551,   552,   553,   554,   555,   556,
     557,   559,  1266,  1326,   199,   562,   563,   564,   547,   559,
     590,    22,   232,  1200,  1279,  1044,   232,   423,  1290,  1278,
      97,  1199,   234,   397,   607,   609,    28,   127,   212,   256,
     266,   280,   346,   416,   419,   420,   511,   579,   580,   581,
     584,   595,   443,   504,   598,  1309,  1225,   400,   401,   410,
      64,  1278,   452,   553,   452,   505,   552,    60,  1278,     9,
     370,   497,   565,   567,     1,   452,   564,   548,  1309,   256,
     592,  1229,  1290,   232,  1199,  1199,   575,   576,   452,     1,
     290,   312,  1252,   274,   388,   641,   642,   643,   644,   646,
     581,    17,   443,  1231,   328,  1278,   401,  1228,   452,  1278,
     505,  1195,   229,    26,   566,   229,   370,   452,   452,   108,
    1229,  1199,   452,   312,  1199,   647,   351,   412,   413,   645,
     530,     1,   452,   643,   582,   584,   256,  1228,   257,   435,
     495,   558,  1195,   256,   272,   610,   455,  1270,    23,  1261,
     103,   651,   452,   583,   584,    58,   506,  1320,   611,   438,
    1302,   189,  1271,   123,   455,   652,    17,     4,    19,    29,
      64,   220,   252,   315,   320,   351,   359,   372,   401,   404,
     412,   452,   455,   612,   613,   619,   621,   623,   624,   625,
     626,   627,   630,   631,   632,   633,   634,   636,   637,   639,
    1294,  1310,    87,  1268,   505,  1184,  1185,   452,   394,   653,
     584,   272,  1285,   351,  1294,   447,   498,  1306,   401,   402,
    1278,  1266,   114,   237,  1280,  1280,   287,   638,  1228,  1309,
     423,   262,    39,  1264,  1278,   648,   649,  1185,  1185,   452,
     173,   392,   531,   654,   655,   657,  1278,  1280,   126,   172,
     616,   359,   631,  1278,  1278,  1278,  1278,  1261,     9,   287,
     349,   640,  1278,  1285,   402,   505,   649,   331,   650,   507,
     682,   684,   685,     1,  1185,   126,   347,   402,   620,  1278,
     118,   119,   120,   238,   252,   335,   347,   438,   614,   615,
     256,  1194,  1198,   419,   635,  1194,  1194,   316,  1291,  1291,
     310,  1194,  1278,  1228,   394,   261,   738,   686,   687,   689,
     699,  1244,   452,   656,   635,   256,   618,  1225,   618,     7,
     618,   618,   256,   617,  1225,   414,   453,    33,   168,   267,
     628,   452,   394,   255,   740,   452,   687,   452,     1,   176,
     505,   690,   691,   505,   658,   125,   504,  1246,  1325,  1270,
    1278,  1193,  1194,   504,   629,   629,   683,   452,   394,   366,
     742,   452,   452,   688,    86,    47,    63,   103,   239,   250,
     351,   352,   366,   368,   452,   499,   659,   660,   662,   666,
     667,   670,   671,   677,   678,   679,   680,  1278,   125,   432,
     622,  1193,  1194,   262,   385,   684,   739,   452,   394,   389,
     793,   701,   692,  1278,  1268,  1278,   351,   353,  1321,  1321,
    1278,  1268,  1278,  1285,  1278,    22,  1260,   306,   681,  1199,
     172,   204,   502,   309,   684,   741,   452,   394,   532,    21,
      36,    39,    40,    41,    42,    43,    44,    45,    74,    76,
      77,    78,    79,    80,    81,    82,   120,   179,   180,   181,
     182,   183,   186,   187,   219,   235,   277,   305,   319,   327,
     330,   343,   355,   363,   405,   407,   408,   409,   434,   478,
     479,   480,   492,   499,   702,   703,   704,   706,   707,   708,
     709,   710,   711,   712,   715,   727,   728,   729,   730,   731,
     736,   737,  1278,  1298,    26,   196,   700,  1262,   204,  1228,
     505,  1278,  1260,   505,  1196,  1197,   308,   418,  1317,  1198,
    1228,   500,  1278,   175,   213,   505,   668,  1199,     9,   416,
     511,   585,   274,   351,   353,  1319,   684,   743,   452,   337,
     807,   810,   244,   301,   406,   477,  1297,   477,  1297,   477,
    1297,   477,  1297,   477,  1297,   502,  1307,   384,  1295,   126,
    1228,  1222,  1225,  1225,   232,   242,   384,  1281,  1278,  1279,
     172,   204,   241,   469,   505,     9,    50,   212,   244,   245,
     256,   266,   346,   416,   461,   511,   693,  1232,  1233,  1234,
     447,   665,  1197,   254,  1284,   447,  1267,   218,  1273,   505,
    1278,  1278,  1234,  1319,   744,   794,   123,   833,   834,   511,
      53,   719,   447,   716,   463,  1226,  1227,   443,   709,   733,
     734,  1232,    26,   705,   400,  1256,  1256,  1234,   306,  1288,
       1,    40,    41,    42,    43,    44,   179,   180,   181,   182,
     183,   184,   185,   330,   343,   694,   695,   696,   697,   698,
     710,   711,  1222,   694,   448,  1228,    58,   353,   661,   672,
    1228,   410,  1299,   256,   669,  1225,   669,   348,   745,   689,
     699,   795,   796,   797,    56,   498,   811,     1,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   153,   164,   169,   195,   202,   205,   206,   215,   222,
     224,   227,   269,   273,   275,   285,   311,   324,   349,   350,
     360,   374,   375,   381,   385,   393,   403,   412,   421,   426,
     427,   430,   432,   439,   452,   470,   476,   481,   508,   835,
     836,   852,   857,   861,   866,   881,   884,   888,   892,   893,
     894,   899,   913,   917,   920,   934,   938,   941,   944,   948,
     949,   953,   963,   966,   983,   985,   988,   992,   998,  1010,
    1018,  1019,  1022,  1023,  1027,  1032,  1033,  1041,  1056,  1066,
    1075,  1080,  1087,  1091,  1093,  1096,  1099,  1103,  1130,   835,
    1273,   196,   717,  1228,   446,  1304,    83,   100,   192,   193,
     194,   201,   245,   251,   253,   258,   259,   260,   264,   303,
     322,   377,   428,   429,   459,   463,   464,   471,   491,   496,
     503,  1172,  1174,  1175,  1176,  1177,  1178,  1179,  1207,  1221,
    1222,  1233,  1235,  1236,  1237,  1238,   463,  1227,  1225,   732,
     734,   443,   256,  1266,   694,   452,  1234,    48,   466,   673,
     674,   675,   676,  1309,  1267,   196,   664,  1272,   505,  1186,
       1,   690,   797,   452,   813,   812,   376,   819,     3,     5,
      10,    18,    51,    52,    61,    72,    75,    89,   112,   120,
     122,   129,   131,   132,   133,   134,   135,   136,   137,   138,
     140,   141,   142,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   164,   169,   195,   202,   205,   206,   215,
     222,   224,   227,   269,   273,   275,   285,   311,   324,   349,
     360,   375,   381,   385,   393,   403,   412,   421,   426,   427,
     430,   432,   439,   452,   470,   476,   481,   508,  1257,   837,
     853,   858,   862,   867,   882,   885,   889,   895,   900,   914,
     918,   921,   935,   939,   942,   945,   203,   376,   876,   937,
     950,   954,   964,   967,   984,   986,   989,   399,   993,   999,
    1011,  1020,  1024,  1028,  1034,  1042,  1057,  1067,   256,   346,
     387,   416,   511,  1079,  1081,  1088,   336,  1092,  1094,   822,
    1097,  1100,  1104,  1131,   505,  1228,   716,   115,   718,   463,
    1240,  1222,  1233,  1235,  1316,  1316,   463,   463,   463,   463,
    1316,  1178,  1174,  1178,   463,  1240,    71,   398,   449,  1173,
     450,   459,   464,   451,   460,   170,   463,  1239,   463,   463,
    1174,   502,   735,  1308,  1232,  1198,  1198,   188,   665,  1228,
     746,   452,   798,   452,    49,   814,   815,   816,  1265,   814,
     505,   452,   308,   838,   839,  1221,     6,    95,   245,   271,
     854,  1179,  1203,  1204,  1221,  1232,  1235,   859,  1174,  1221,
     256,   863,   864,  1190,  1191,  1192,  1225,   271,   422,   424,
     868,   869,   256,   883,  1212,  1221,   886,  1185,     6,   890,
    1179,  1180,  1181,  1202,  1223,  1224,  1225,  1233,   455,   896,
    1185,   256,   901,   902,   904,  1203,  1204,  1212,  1221,   915,
    1204,   256,   919,   454,   465,   922,   923,   924,  1162,  1163,
    1164,   199,   323,   324,   340,   394,   936,   940,  1201,  1202,
     943,  1225,   447,   946,  1305,  1204,  1161,  1162,   955,  1201,
     965,  1186,   968,   969,  1221,  1232,  1235,  1058,  1219,  1220,
    1225,    95,   987,  1204,   990,  1204,   171,   225,   233,   317,
     994,   995,   191,   256,  1000,  1004,  1005,  1006,  1190,  1213,
    1221,  1225,  1235,  1309,  1012,  1185,  1021,  1182,  1225,  1025,
    1185,  1029,  1182,     9,  1035,  1183,  1225,   154,   271,  1043,
    1046,  1047,  1050,  1051,  1052,  1053,  1054,  1055,  1187,  1188,
    1201,  1218,  1220,  1225,  1058,  1068,  1185,  1076,   113,  1082,
    1083,  1084,  1204,    95,  1089,  1203,  1095,  1186,   452,   505,
     823,   824,   827,   828,   833,  1098,  1221,  1101,  1185,  1105,
    1221,  1132,  1182,   223,   720,   309,  1289,   721,   722,   449,
    1172,  1174,   505,   505,  1174,  1243,  1243,  1243,  1206,  1221,
    1233,  1235,  1242,   505,   449,  1206,  1241,  1174,   449,  1174,
    1175,  1175,  1176,  1176,  1176,  1174,  1206,  1172,   403,   454,
      30,  1263,  1267,     1,   747,   799,   815,   410,   477,   817,
     357,   499,   808,   131,   851,    30,   841,   842,  1263,   196,
    1288,  1221,  1222,  1233,  1235,   132,   856,   447,   855,  1204,
      58,   223,  1247,   864,   447,  1316,   133,   880,   256,  1213,
    1212,  1185,   356,   475,   887,  1309,  1322,  1288,   134,   891,
     160,   453,  1181,  1313,   386,  1253,  1226,  1227,   897,  1185,
     135,   898,  1294,   136,   912,   166,   903,  1141,  1142,   485,
     905,   504,   842,   486,   487,   488,   489,   137,   916,    49,
     228,   498,   870,   138,   933,    17,   502,   925,   926,   927,
     929,    12,    13,    14,    20,   160,   170,   207,   208,   246,
     247,   284,   290,   293,   301,   308,   313,   332,   449,   451,
     453,   456,   458,   459,   460,   463,   464,  1165,  1166,  1167,
    1168,  1169,  1170,  1171,  1204,   102,   937,  1202,  1189,   442,
    1303,   956,  1309,  1186,    93,   365,   437,   970,   971,   973,
     974,  1060,   463,  1226,  1204,   447,   141,   991,    49,   995,
     404,   996,  1005,   142,   452,  1001,  1003,   482,   500,   443,
     446,   440,   144,  1017,   285,   334,  1250,   196,  1133,   145,
    1026,  1294,   146,  1031,  1133,  1183,   147,  1040,   500,  1036,
    1210,  1221,  1233,  1053,  1055,  1201,   447,  1188,   124,   447,
     483,  1045,    31,  1226,   148,  1074,   178,   237,   240,  1070,
     876,  1077,  1309,  1265,   149,  1086,   228,  1084,  1221,   150,
    1090,   196,  1186,   394,   452,   452,   196,   351,   353,  1102,
     151,  1114,   113,  1106,   152,  1137,  1133,   721,  1194,   220,
     724,    27,   116,   723,   449,  1173,   449,   449,   449,  1173,
     449,  1173,   449,   449,   450,   449,   449,   447,  1278,  1198,
     115,   663,   452,    62,    90,    91,   321,   452,   748,   749,
     754,  1278,  1334,    32,    35,    38,    45,    46,    65,    67,
     161,   190,   196,   198,   211,   243,   252,   265,   305,   318,
     345,   371,   378,   395,   447,   457,   474,   498,   707,   708,
     712,   727,   729,   731,   800,   805,   806,  1278,  1311,  1278,
     410,   312,   818,   110,   820,  1210,   197,   845,   252,   331,
     843,   844,  1311,    24,    25,    66,    68,    70,   104,   105,
     106,   154,   156,   163,   166,   252,   254,   444,   494,   505,
     840,  1188,  1312,   153,   340,  1208,  1222,   447,     6,  1179,
    1180,  1204,  1225,  1233,   203,   223,  1248,   376,   860,   339,
     865,  1192,   870,   887,   262,   287,  1271,  1222,  1174,   272,
    1254,  1227,  1185,   231,  1157,  1158,   830,   831,   904,  1204,
     294,  1143,    97,   335,   505,  1188,   298,   909,    35,    38,
      45,    46,    92,   161,   190,   211,   265,   318,   378,   391,
     474,   910,   911,   485,   906,  1141,  1141,  1141,  1141,  1204,
    1180,  1204,   871,   924,    21,   454,   465,   930,   931,  1163,
     502,   927,   928,   502,   830,  1305,   232,  1166,   115,   947,
    1190,   129,   830,   951,     9,    12,    15,    16,   277,   278,
     301,   302,   957,   961,   176,  1210,     9,    58,   178,   241,
     469,   977,   978,   979,   972,   973,  1062,  1289,  1325,   447,
    1201,  1180,  1204,   996,  1309,  1184,   830,   169,  1007,  1161,
    1008,  1009,  1221,  1190,     8,    37,  1135,  1294,  1217,  1221,
    1232,  1235,   228,  1013,  1030,  1309,   130,  1037,  1221,  1037,
     447,   447,  1044,   153,   454,   465,  1204,    49,    38,    46,
     211,   243,   265,   318,   378,   474,  1048,  1049,  1278,  1069,
    1309,  1204,   162,   289,   410,  1204,  1221,   196,  1180,  1204,
     829,  1228,  1210,  1265,   228,  1109,  1134,  1135,   724,  1265,
    1280,  1194,  1239,  1239,  1239,  1206,   241,   469,  1239,   449,
    1174,  1239,  1239,  1232,  1289,  1278,  1278,  1260,   248,   249,
    1283,   764,   204,   177,   750,   751,   752,   753,  1221,  1278,
     252,   389,   157,   159,  1278,  1217,   299,  1286,  1228,    57,
    1221,  1221,   204,  1286,    32,   111,  1228,  1278,   505,   452,
     809,   272,   846,  1286,  1286,   844,   843,  1286,   166,  1138,
    1139,   510,   509,  1210,  1138,   237,   423,   299,   276,   256,
    1209,  1222,  1221,  1288,   411,  1144,  1145,  1226,  1227,  1180,
     447,  1249,   860,  1202,   447,  1190,   875,   876,   380,   362,
    1144,  1278,   830,   295,  1159,   832,   830,  1141,  1278,   252,
     389,   157,   159,  1278,   124,   483,   911,  1141,    97,    98,
     907,   846,   203,  1144,   203,   872,   873,   874,  1265,    17,
     443,   932,   316,   930,  1289,   830,   129,   140,   952,  1305,
     365,   958,  1305,   447,    49,   978,   980,  1210,     9,    58,
     241,   469,   975,   976,  1210,  1063,  1310,   723,   218,   314,
    1274,  1201,  1144,   203,  1184,   640,   379,   997,  1309,   142,
    1002,     8,   196,  1013,  1221,   130,  1150,  1152,  1157,   262,
     287,   830,   502,   502,  1038,  1039,  1210,  1209,  1204,  1044,
    1044,  1044,  1044,  1044,  1044,  1044,  1044,  1049,   290,   293,
    1071,  1072,  1073,  1167,  1251,  1157,   244,   410,  1324,   423,
    1301,  1301,  1085,  1309,  1221,  1144,   203,   452,   447,     9,
    1107,  1108,  1245,  1110,  1221,  1085,  1110,  1030,     7,  1258,
     505,   725,   726,  1278,   449,  1194,  1212,  1278,  1260,   256,
     511,   755,   756,  1221,  1230,   689,   765,   752,   753,   511,
    1214,  1218,  1228,  1214,  1278,  1304,  1278,  1278,    32,  1228,
     821,   822,  1278,   504,   847,  1214,  1214,  1214,   830,   294,
    1140,  1138,  1253,  1222,   830,   297,  1146,  1227,  1144,  1211,
    1221,  1232,   166,   462,   878,  1315,     6,   228,   308,   461,
     877,  1277,    34,   281,   282,   283,   344,   467,   468,   472,
    1255,   830,   833,  1214,  1214,  1160,  1216,  1218,  1228,  1160,
     504,   908,  1180,  1181,  1180,  1181,   873,   308,   817,    88,
     357,   499,   931,  1162,   830,  1221,   830,   499,   959,   960,
     961,   962,  1303,   499,  1211,  1210,    49,   981,   976,   189,
     981,  1059,  1278,  1280,   314,  1180,   997,   262,   287,  1009,
    1204,   217,  1014,  1309,   830,   291,  1153,   262,  1162,  1161,
    1038,  1167,  1221,  1168,  1169,  1170,  1171,  1174,  1078,  1204,
    1078,   462,  1147,  1148,   330,  1253,  1180,   825,  1211,   313,
    1210,   114,  1111,   437,  1113,   158,   292,  1136,  1154,  1155,
    1156,  1157,   321,  1188,  1214,   726,  1193,   757,   252,   254,
    1318,   505,   690,   270,   329,   459,   464,   801,   802,   803,
    1212,   801,   802,   804,   822,    47,    32,    35,    38,    46,
      92,   111,   190,   198,   211,   243,   263,   265,   287,   288,
     318,   345,   371,   378,   391,   395,   436,   445,   474,   484,
     490,   848,   849,   850,  1138,   830,  1144,   830,   294,   879,
     830,  1288,  1221,   252,   254,  1323,   910,  1144,   361,  1144,
     361,  1204,   960,   103,  1269,  1305,   981,   981,  1211,     8,
      37,   982,   225,   498,  1064,  1194,  1061,  1144,   380,    49,
     262,   237,  1015,   216,   236,   262,   287,   501,   830,   830,
     830,   830,   296,  1149,  1278,  1144,  1144,   493,   826,  1115,
    1108,  1273,    96,  1112,  1273,  1147,   830,   830,  1156,   252,
     254,  1282,   178,   188,   210,   240,   758,   759,   760,   761,
     762,   763,   756,   766,  1214,  1214,   130,  1278,  1278,   850,
      57,   124,   483,     8,  1259,   849,   830,  1221,  1181,  1181,
      49,   111,   981,   457,  1276,  1276,   337,  1184,   203,   317,
    1065,  1225,  1204,  1278,  1016,  1151,  1152,  1153,  1157,   262,
     262,   262,   830,  1221,  1116,   452,  1221,  1273,  1221,   107,
     117,  1327,  1278,  1278,    55,    90,  1327,  1328,  1312,   767,
     110,  1214,  1214,  1278,  1160,  1160,  1215,  1218,  1230,  1144,
    1144,  1204,  1204,  1204,  1278,  1184,   337,   482,  1221,  1153,
     128,   167,   204,  1117,  1118,  1119,  1121,  1125,  1127,  1128,
    1129,  1263,  1271,  1221,  1278,   756,   756,   210,  1278,  1278,
     209,   252,   285,   305,   309,   333,   414,   431,   452,   473,
     492,   500,   707,   712,   713,   727,   729,   731,   768,   769,
     773,   776,   779,   780,   781,   782,   786,   787,   788,   790,
     791,   792,  1311,  1312,   452,  1212,  1004,  1278,  1161,    37,
    1259,   340,   108,   756,   756,   756,   221,  1275,   299,   784,
     209,   321,  1228,   285,   502,  1278,  1288,  1278,  1278,  1221,
     329,   464,   783,   785,  1230,   329,   464,   789,  1230,   299,
     300,  1287,  1260,  1004,   367,   418,  1300,   130,   421,  1126,
    1289,   232,  1278,   716,   321,  1161,  1207,  1205,  1207,    54,
      90,   321,   325,   326,   366,   382,   383,   770,  1327,  1328,
    1329,  1330,  1331,  1332,  1333,   120,   196,  1230,  1230,  1230,
    1230,  1279,  1221,   162,   166,  1314,     9,  1122,  1123,  1191,
     285,   286,   321,   329,   464,   774,   775,  1228,  1304,  1253,
     373,   485,   777,  1207,   188,   188,   210,   188,   210,   177,
     771,  1221,   177,   772,  1221,  1207,   337,  1292,   306,   338,
     358,  1124,  1123,   321,  1228,  1228,   718,  1289,  1221,    49,
    1289,   306,  1225,   425,   714,   177,   778,  1221,  1207,   171,
     225,   233,   317,  1120,  1184,  1228
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
#line 1369 "parser.y"
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
#line 1380 "parser.y"
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
#line 1416 "parser.y"
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
#line 1471 "parser.y"
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
#line 1500 "parser.y"
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
#line 1533 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 1539 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 1551 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 1561 "parser.y"
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
#line 1592 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 1599 "parser.y"
    {
#if	0	/* RXWRXW - FUNCTION-ID */
	cb_error (_("FUNCTION-ID is not yet implemented"));
#endif
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

  case 33:
/* Line 1792 of yacc.c  */
#line 1638 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 1639 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:
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

  case 38:
/* Line 1792 of yacc.c  */
#line 1657 "parser.y"
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
#line 1671 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 1675 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 1685 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 1694 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_CONFIGURATION_SECTION;
	if (current_program->nested_level) {
		cb_error (_("CONFIGURATION SECTION not allowed in nested programs"));
	}
  }
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 1719 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("SOURCE-COMPUTER", SYN_CLAUSE_1);
	if (warningopt && (check_comp_duplicate & SYN_CLAUSE_2)) {
		cb_warning (_("Phrases in non-standard order"));
	}
  }
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 1737 "parser.y"
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
#line 1750 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 1779 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 1786 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 1793 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 1800 "parser.y"
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
#line 1811 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 1815 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 1819 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 1823 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 1837 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 1842 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 1850 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 1862 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 1866 "parser.y"
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
#line 1887 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 1891 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 1898 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 1903 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 1914 "parser.y"
    {
	check_duplicate = 0;
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	header_check |= COBC_HD_SPECIAL_NAMES;
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	}
  }
    break;

  case 100:
/* Line 1792 of yacc.c  */
#line 1928 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 1959 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
		save_tree = NULL;
	} else {
		save_tree = lookup_system_name (CB_NAME ((yyvsp[(1) - (1)])));
		if (!save_tree) {
			cb_error_x ((yyvsp[(1) - (1)]), _("Invalid system-name '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
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
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(3) - (3)]), save_tree, (yyvsp[(1) - (3)]) == cb_int1);
	if (x) {
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(3) - (3)]), x);
	}
  }
    break;

  case 124:
/* Line 1792 of yacc.c  */
#line 2027 "parser.y"
    {
	cb_tree		x;

	/* cb_define_switch_name checks param validity */
	x = cb_define_switch_name ((yyvsp[(4) - (4)]), save_tree, (yyvsp[(2) - (4)]) == cb_int1);
	if (x) {
		CB_CHAIN_PAIR (current_program->mnemonic_spec_list, (yyvsp[(4) - (4)]), x);
	}
  }
    break;

  case 125:
/* Line 1792 of yacc.c  */
#line 2042 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
		(yyval) = NULL;
	} else {
		/* Returns null on error */
		(yyval) = cb_build_alphabet_name ((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 126:
/* Line 1792 of yacc.c  */
#line 2055 "parser.y"
    {
	if ((yyvsp[(3) - (5)])) {
		current_program->alphabet_name_list =
			cb_list_add (current_program->alphabet_name_list, (yyvsp[(3) - (5)]));
	}
	cobc_cs_check = 0;
  }
    break;

  case 127:
/* Line 1792 of yacc.c  */
#line 2066 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 2072 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 2078 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 2084 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 2090 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 2096 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 2106 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 2110 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 2117 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 2121 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 2125 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 2129 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2136 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2140 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 2146 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 2147 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 2148 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 2149 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 2150 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 2151 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 2155 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 2156 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 2164 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else if ((yyvsp[(1) - (2)])) {
		CB_CHAIN_PAIR (current_program->symbolic_char_list, (yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 150:
/* Line 1792 of yacc.c  */
#line 2178 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 2182 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 2190 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 2197 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 2201 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	} else {
		(yyval) = (yyvsp[(1) - (2)]);
	}
  }
    break;

  case 155:
/* Line 1792 of yacc.c  */
#line 2212 "parser.y"
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

  case 156:
/* Line 1792 of yacc.c  */
#line 2232 "parser.y"
    {
	if ((yyvsp[(1) - (1)]) == NULL) {
		(yyval) = NULL;
	} else {
		(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 157:
/* Line 1792 of yacc.c  */
#line 2240 "parser.y"
    {
	if ((yyvsp[(2) - (2)]) == NULL) {
		(yyval) = (yyvsp[(1) - (2)]);
	} else {
		(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	}
  }
    break;

  case 158:
/* Line 1792 of yacc.c  */
#line 2250 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 2251 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 2258 "parser.y"
    {
	cb_tree		x;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
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

  case 161:
/* Line 1792 of yacc.c  */
#line 2278 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 2279 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 2284 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 2288 "parser.y"
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

  case 165:
/* Line 1792 of yacc.c  */
#line 2309 "parser.y"
    {
	cb_tree	l;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
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

  case 166:
/* Line 1792 of yacc.c  */
#line 2332 "parser.y"
    {
	unsigned char	*s = CB_LITERAL ((yyvsp[(4) - (5)]))->data;
	unsigned int	error_ind = 0;

	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
		error_ind = 1;
	}
	check_repeated ("CURRENCY", SYN_CLAUSE_1);
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

  case 167:
/* Line 1792 of yacc.c  */
#line 2413 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 2417 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 2426 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("DECIMAL-POINT", SYN_CLAUSE_2);
		current_program->decimal_point = ',';
		current_program->numeric_separator = '.';
	}
  }
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 2445 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		current_program->flag_trailing_separate = 1;
	}
  }
    break;

  case 171:
/* Line 1792 of yacc.c  */
#line 2461 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3);
		current_program->cursor_pos = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 172:
/* Line 1792 of yacc.c  */
#line 2479 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("CRT STATUS", SYN_CLAUSE_4);
		current_program->crt_status = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 173:
/* Line 1792 of yacc.c  */
#line 2497 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5);
		PENDING ("SCREEN CONTROL");
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
		cb_error (_("SPECIAL-NAMES not allowed in nested programs"));
	} else {
		check_repeated ("EVENT STATUS", SYN_CLAUSE_6);
		PENDING ("EVENT STATUS");
	}
  }
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 2531 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 2539 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 2548 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 2563 "parser.y"
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

  case 184:
/* Line 1792 of yacc.c  */
#line 2580 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 2584 "parser.y"
    {
	yyerrok;
	current_file = NULL;
	if (current_program->file_list) {
		current_program->file_list = CB_CHAIN (current_program->file_list);
	}
  }
    break;

  case 201:
/* Line 1792 of yacc.c  */
#line 2618 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 2624 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	if ((yyvsp[(5) - (5)])) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	} else {
		current_file->flag_fileid = 1;
	}
  }
    break;

  case 203:
/* Line 1792 of yacc.c  */
#line 2634 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
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

  case 204:
/* Line 1792 of yacc.c  */
#line 2647 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
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

  case 205:
/* Line 1792 of yacc.c  */
#line 2660 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
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

  case 211:
/* Line 1792 of yacc.c  */
#line 2683 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 2690 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 2703 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 2715 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 2722 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 2723 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 2724 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 2732 "parser.y"
    {
	struct cb_alt_key *p;
	struct cb_alt_key *l;

	p = cobc_parse_malloc (sizeof (struct cb_alt_key));
	p->key = (yyvsp[(5) - (7)]);
	p->duplicates = CB_INTEGER ((yyvsp[(6) - (7)]))->val;
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

  case 225:
/* Line 1792 of yacc.c  */
#line 2755 "parser.y"
    { }
    break;

  case 226:
/* Line 1792 of yacc.c  */
#line 2758 "parser.y"
    {
	PENDING ("SUPPRESS WHEN ALL");
  }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 2763 "parser.y"
    {
	PENDING ("SUPPRESS WHEN SPACE/ZERO");
  }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 2773 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 2784 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 233:
/* Line 1792 of yacc.c  */
#line 2799 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
    break;

  case 235:
/* Line 1792 of yacc.c  */
#line 2807 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 2812 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 2817 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 240:
/* Line 1792 of yacc.c  */
#line 2826 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 2830 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 244:
/* Line 1792 of yacc.c  */
#line 2846 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 2851 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 2856 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 2861 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 2872 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 2883 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 2893 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 2900 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 2901 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 253:
/* Line 1792 of yacc.c  */
#line 2902 "parser.y"
    { PENDING ("SPLIT KEYS"); }
    break;

  case 254:
/* Line 1792 of yacc.c  */
#line 2909 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 255:
/* Line 1792 of yacc.c  */
#line 2920 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 2934 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 259:
/* Line 1792 of yacc.c  */
#line 2941 "parser.y"
    { (yyval) = NULL; }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 2942 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 261:
/* Line 1792 of yacc.c  */
#line 2943 "parser.y"
    { (yyval) = NULL; }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 2952 "parser.y"
    {
	yyerrok;
  }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 2971 "parser.y"
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

  case 270:
/* Line 1792 of yacc.c  */
#line 2998 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 271:
/* Line 1792 of yacc.c  */
#line 2999 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 272:
/* Line 1792 of yacc.c  */
#line 3000 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 273:
/* Line 1792 of yacc.c  */
#line 3001 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 3008 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 275:
/* Line 1792 of yacc.c  */
#line 3013 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
    break;

  case 282:
/* Line 1792 of yacc.c  */
#line 3040 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 284:
/* Line 1792 of yacc.c  */
#line 3049 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 3063 "parser.y"
    {
	if (CB_VALID_TREE (current_file)) {
		if (CB_VALID_TREE ((yyvsp[(2) - (2)]))) {
			if (current_file->reports) {
				cb_error (_("RECORD description invalid with REPORT"));
			} else {
				finalize_file (current_file, CB_FIELD ((yyvsp[(2) - (2)])));
			}
		} else if (!current_file->reports) {
			cb_error (_("RECORD description missing or invalid"));
		}
	}
  }
    break;

  case 288:
/* Line 1792 of yacc.c  */
#line 3082 "parser.y"
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

  case 290:
/* Line 1792 of yacc.c  */
#line 3099 "parser.y"
    {
	yyerrok;
  }
    break;

  case 291:
/* Line 1792 of yacc.c  */
#line 3106 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 3110 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 295:
/* Line 1792 of yacc.c  */
#line 3121 "parser.y"
    {
	check_repeated ("EXTERNAL", SYN_CLAUSE_1);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_global) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	current_file->flag_external = 1;
  }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 3131 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_2);
#if	0	/* RXWRXW - Global/External */
	if (current_file->flag_external) {
		cb_error (_("File cannot have both EXTERNAL and GLOBAL clauses"));
	}
#endif
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
	} else {
		current_file->flag_global = 1;
		current_program->flag_file_global = 1;
	}
  }
    break;

  case 306:
/* Line 1792 of yacc.c  */
#line 3161 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
    break;

  case 310:
/* Line 1792 of yacc.c  */
#line 3174 "parser.y"
    {
	check_repeated ("RECORD", SYN_CLAUSE_4);
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

  case 311:
/* Line 1792 of yacc.c  */
#line 3194 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
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

  case 312:
/* Line 1792 of yacc.c  */
#line 3229 "parser.y"
    {
	int	error_ind = 0;

	check_repeated ("RECORD", SYN_CLAUSE_4);
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

  case 314:
/* Line 1792 of yacc.c  */
#line 3260 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 3266 "parser.y"
    { (yyval) = NULL; }
    break;

  case 316:
/* Line 1792 of yacc.c  */
#line 3267 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 317:
/* Line 1792 of yacc.c  */
#line 3271 "parser.y"
    { (yyval) = NULL; }
    break;

  case 318:
/* Line 1792 of yacc.c  */
#line 3272 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 319:
/* Line 1792 of yacc.c  */
#line 3280 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 3291 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 3296 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 3319 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 327:
/* Line 1792 of yacc.c  */
#line 3331 "parser.y"
    {
	check_repeated ("LINAGE", SYN_CLAUSE_8);
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

  case 333:
/* Line 1792 of yacc.c  */
#line 3359 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 334:
/* Line 1792 of yacc.c  */
#line 3366 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 335:
/* Line 1792 of yacc.c  */
#line 3373 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 336:
/* Line 1792 of yacc.c  */
#line 3382 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
    break;

  case 337:
/* Line 1792 of yacc.c  */
#line 3394 "parser.y"
    {
	check_repeated ("CODE SET", SYN_CLAUSE_10);
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

  case 338:
/* Line 1792 of yacc.c  */
#line 3446 "parser.y"
    {
	check_repeated ("REPORT", SYN_CLAUSE_11);
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

  case 341:
/* Line 1792 of yacc.c  */
#line 3466 "parser.y"
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

  case 342:
/* Line 1792 of yacc.c  */
#line 3478 "parser.y"
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

  case 344:
/* Line 1792 of yacc.c  */
#line 3521 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 345:
/* Line 1792 of yacc.c  */
#line 3527 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 346:
/* Line 1792 of yacc.c  */
#line 3536 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 347:
/* Line 1792 of yacc.c  */
#line 3539 "parser.y"
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 348:
/* Line 1792 of yacc.c  */
#line 3546 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 3566 "parser.y"
    {
	cb_tree x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (2)]));
	if (CB_INVALID_TREE (x)) {
		YYERROR;
	} else {
		current_field = CB_FIELD (x);
		check_pic_duplicate = 0;
	}
  }
    break;

  case 354:
/* Line 1792 of yacc.c  */
#line 3581 "parser.y"
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

  case 355:
/* Line 1792 of yacc.c  */
#line 3601 "parser.y"
    {
	/* Free tree assocated with level number */
	cobc_parse_free ((yyvsp[(1) - (3)]));
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 356:
/* Line 1792 of yacc.c  */
#line 3614 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 357:
/* Line 1792 of yacc.c  */
#line 3621 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 3627 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 359:
/* Line 1792 of yacc.c  */
#line 3633 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 360:
/* Line 1792 of yacc.c  */
#line 3642 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 361:
/* Line 1792 of yacc.c  */
#line 3651 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 3655 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 3666 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 3667 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 3668 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 3669 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 3674 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 3678 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 3682 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 3686 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 3690 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 3694 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 3698 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 3702 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 3706 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 3710 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 3714 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 3718 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 3722 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 389:
/* Line 1792 of yacc.c  */
#line 3754 "parser.y"
    {
	cb_tree x;
	int	level;

	cobc_cs_check = 0;
	level = cb_get_level ((yyvsp[(1) - (5)]));
	/* Free tree assocated with level number */
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

  case 390:
/* Line 1792 of yacc.c  */
#line 3780 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 391:
/* Line 1792 of yacc.c  */
#line 3784 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 392:
/* Line 1792 of yacc.c  */
#line 3792 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 393:
/* Line 1792 of yacc.c  */
#line 3798 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 408:
/* Line 1792 of yacc.c  */
#line 3826 "parser.y"
    {
	check_pic_repeated ("REDEFINES", SYN_CLAUSE_1);
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

  case 409:
/* Line 1792 of yacc.c  */
#line 3850 "parser.y"
    {
	check_pic_repeated ("EXTERNAL", SYN_CLAUSE_2);
	if (current_storage != CB_STORAGE_WORKING) {
		cb_error (_("EXTERNAL not allowed here"));
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("EXTERNAL only allowed at 01/77 level"));
	} else if (!qualifier) {
		cb_error (_("EXTERNAL requires a data name"));
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_is_global) {
		cb_error (_("GLOBAL and EXTERNAL are mutually exclusive"));
#endif
	} else if (current_field->flag_item_based) {
		cb_error (_("BASED and EXTERNAL are mutually exclusive"));
	} else if (current_field->redefines) {
		cb_error (_("EXTERNAL and REDEFINES are mutually exclusive"));
	} else if (current_field->flag_occurs) {
		cb_error (_("EXTERNAL and OCCURS are mutually exclusive"));
	} else {
		current_field->flag_external = 1;
		current_program->flag_has_external = 1;
	}
  }
    break;

  case 410:
/* Line 1792 of yacc.c  */
#line 3877 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 411:
/* Line 1792 of yacc.c  */
#line 3881 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 412:
/* Line 1792 of yacc.c  */
#line 3890 "parser.y"
    {
	check_pic_repeated ("GLOBAL", SYN_CLAUSE_3);
	if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("GLOBAL only allowed at 01/77 level"));
	} else if (!qualifier) {
		cb_error (_("GLOBAL requires a data name"));
#if	0	/* RXWRXW - Global/External */
	} else if (current_field->flag_external) {
		cb_error (_("GLOBAL and EXTERNAL are mutually exclusive"));
#endif
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
	} else if (current_storage == CB_STORAGE_LOCAL) {
		cb_error (_("GLOBAL not allowed here"));
	} else {
		current_field->flag_is_global = 1;
	}
  }
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 3915 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 3931 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 3935 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 3939 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 419:
/* Line 1792 of yacc.c  */
#line 3943 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 420:
/* Line 1792 of yacc.c  */
#line 3947 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 3951 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 3955 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 3959 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 3963 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 3967 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 3971 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 3975 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 3979 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 3984 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 3989 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 3993 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 3997 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 4005 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 4009 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 4013 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 4021 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 4025 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 4029 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 4033 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 4037 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 4041 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 4045 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 4049 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 4053 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4061 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4069 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4073 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 4077 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 4081 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 4085 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 4089 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 4109 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 457:
/* Line 1792 of yacc.c  */
#line 4115 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 458:
/* Line 1792 of yacc.c  */
#line 4128 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
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

  case 460:
/* Line 1792 of yacc.c  */
#line 4146 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 4156 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_7);
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
		cb_error (_("BASED and OCCURS are mutually exclusive"));
	} else if (current_field->flag_external) {
		cb_error (_("EXTERNAL and OCCURS are mutually exclusive"));
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 4177 "parser.y"
    {
	current_field->occurs_min = (yyvsp[(4) - (8)]) ? cb_get_int ((yyvsp[(4) - (8)])) : 0;
	PENDING("OCCURS with DYNAMIC capacity");
	current_field->occurs_max = (yyvsp[(5) - (8)]) ? cb_get_int ((yyvsp[(5) - (8)])) : 0;
	current_field->indexes++;
	if (current_field->indexes > COB_MAX_SUBSCRIPTS) {
		cb_error (_("Maximum OCCURS depth exceeded (%d)"),
			  COB_MAX_SUBSCRIPTS);
	}
	if (current_field->flag_item_based) {
		cb_error (_("BASED and OCCURS are mutually exclusive"));
	} else if (current_field->flag_external) {
		cb_error (_("EXTERNAL and OCCURS are mutually exclusive"));
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 4196 "parser.y"
    { (yyval) = NULL; }
    break;

  case 464:
/* Line 1792 of yacc.c  */
#line 4197 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 465:
/* Line 1792 of yacc.c  */
#line 4201 "parser.y"
    { (yyval) = NULL; }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 4202 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 4207 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 4214 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 472:
/* Line 1792 of yacc.c  */
#line 4222 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 4229 "parser.y"
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

  case 474:
/* Line 1792 of yacc.c  */
#line 4252 "parser.y"
    { (yyval) = NULL; }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 4255 "parser.y"
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

  case 476:
/* Line 1792 of yacc.c  */
#line 4270 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 4271 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 479:
/* Line 1792 of yacc.c  */
#line 4276 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 4282 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 481:
/* Line 1792 of yacc.c  */
#line 4284 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 4289 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 483:
/* Line 1792 of yacc.c  */
#line 4300 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 4311 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 4322 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 4333 "parser.y"
    {
	check_pic_repeated ("BASED", SYN_CLAUSE_11);
	if (current_storage != CB_STORAGE_WORKING &&
	    current_storage != CB_STORAGE_LINKAGE &&
	    current_storage != CB_STORAGE_LOCAL) {
		cb_error (_("BASED not allowed here"));
	} else if (current_field->level != 1 && current_field->level != 77) {
		cb_error (_("BASED only allowed at 01/77 level"));
	} else if (!qualifier) {
		cb_error (_("BASED requires a data name"));
	} else if (current_field->flag_external) {
		cb_error (_("BASED and EXTERNAL are mutually exclusive"));
	} else if (current_field->redefines) {
		cb_error (_("BASED and REDEFINES are mutually exclusive"));
	} else if (current_field->flag_any_length) {
		cb_error (_("BASED and ANY LENGTH are mutually exclusive"));
	} else if (current_field->flag_occurs) {
		cb_error (_("BASED and OCCURS are mutually exclusive"));
	} else {
		current_field->flag_item_based = 1;
	}
  }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 4361 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 4369 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 4370 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 4374 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 4375 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 4380 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 4393 "parser.y"
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
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

  case 496:
/* Line 1792 of yacc.c  */
#line 4406 "parser.y"
    {
	check_pic_repeated ("RENAMES", SYN_CLAUSE_13);
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

  case 497:
/* Line 1792 of yacc.c  */
#line 4427 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("BASED and ANY clause are mutually exclusive"));
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 4436 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("BASED and ANY clause are mutually exclusive"));
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 4451 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("LOCAL-STORAGE not allowed in nested programs"));
	}
  }
    break;

  case 501:
/* Line 1792 of yacc.c  */
#line 4460 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 4472 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 504:
/* Line 1792 of yacc.c  */
#line 4478 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 4489 "parser.y"
    {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  }
    break;

  case 510:
/* Line 1792 of yacc.c  */
#line 4507 "parser.y"
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

  case 511:
/* Line 1792 of yacc.c  */
#line 4520 "parser.y"
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

  case 514:
/* Line 1792 of yacc.c  */
#line 4538 "parser.y"
    {
	yyerrok;
  }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 4545 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 516:
/* Line 1792 of yacc.c  */
#line 4551 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
    break;

  case 519:
/* Line 1792 of yacc.c  */
#line 4562 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 4575 "parser.y"
    {
      current_report->control_final = 1;
  }
    break;

  case 526:
/* Line 1792 of yacc.c  */
#line 4587 "parser.y"
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), current_report->controls);
  }
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 4598 "parser.y"
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
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 4637 "parser.y"
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

  case 529:
/* Line 1792 of yacc.c  */
#line 4647 "parser.y"
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

  case 530:
/* Line 1792 of yacc.c  */
#line 4657 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (4)]))) {
		current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[(1) - (4)]);
	}
	if (CB_LITERAL_P ((yyvsp[(3) - (4)]))) {
		current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
	} else {
		current_report->t_columns = (yyvsp[(3) - (4)]);
	}
  }
    break;

  case 540:
/* Line 1792 of yacc.c  */
#line 4693 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_heading = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 541:
/* Line 1792 of yacc.c  */
#line 4704 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_first_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 542:
/* Line 1792 of yacc.c  */
#line 4715 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_control = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 543:
/* Line 1792 of yacc.c  */
#line 4726 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 544:
/* Line 1792 of yacc.c  */
#line 4737 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_footing = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 4752 "parser.y"
    {
	cb_tree	x;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
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

  case 568:
/* Line 1792 of yacc.c  */
#line 4798 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
    break;

  case 569:
/* Line 1792 of yacc.c  */
#line 4805 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
    break;

  case 570:
/* Line 1792 of yacc.c  */
#line 4809 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
    break;

  case 573:
/* Line 1792 of yacc.c  */
#line 4815 "parser.y"
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 4822 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 4826 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
    break;

  case 576:
/* Line 1792 of yacc.c  */
#line 4832 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 4836 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 4841 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 4847 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 4851 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 4856 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 4863 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 4870 "parser.y"
    {
	if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int((yyvsp[(1) - (1)]));
  }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 4879 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 4884 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 4889 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 4903 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
	current_field->report_sum_list = (yyvsp[(3) - (4)]);
	build_sum_counter( current_report, current_field);
  }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 4913 "parser.y"
    {
      current_field->report_sum_upon = (yyvsp[(2) - (2)]);
  }
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 4920 "parser.y"
    {
      current_field->report_reset = (yyvsp[(1) - (1)]);
  }
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 4924 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 4931 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_when = (yyvsp[(3) - (3)]);
  }
    break;

  case 599:
/* Line 1792 of yacc.c  */
#line 4943 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
	current_field->report_flag |= COB_REPORT_LINE;
  }
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 4955 "parser.y"
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 4961 "parser.y"
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

  case 603:
/* Line 1792 of yacc.c  */
#line 4976 "parser.y"
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

  case 607:
/* Line 1792 of yacc.c  */
#line 4999 "parser.y"
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

  case 608:
/* Line 1792 of yacc.c  */
#line 5016 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 609:
/* Line 1792 of yacc.c  */
#line 5020 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 610:
/* Line 1792 of yacc.c  */
#line 5027 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
    break;

  case 613:
/* Line 1792 of yacc.c  */
#line 5039 "parser.y"
    {
	current_field->report_column = cb_get_int ((yyvsp[(2) - (2)]));
	if(current_field->report_column > 0)
		current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
	else
		current_field->report_column = 0;
  }
    break;

  case 614:
/* Line 1792 of yacc.c  */
#line 5047 "parser.y"
    {
	current_field->report_column = cb_get_int ((yyvsp[(2) - (2)]));
	if(current_field->report_column > 0)
		current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
	else
		current_field->report_column = 0;
  }
    break;

  case 615:
/* Line 1792 of yacc.c  */
#line 5055 "parser.y"
    {
	current_field->report_column = cb_get_int ((yyvsp[(1) - (1)]));
	if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
	}
	if((yyvsp[(1) - (1)]) != cb_int1
	&& (yyvsp[(1) - (1)]) != cb_int0) {
		if (current_field->report_column <= 0
		|| CB_LITERAL ((yyvsp[(1) - (1)]))->sign < 0) {
			cb_error (_("Invalid COLUMN integer; Must be > 0"));
			current_field->report_column = 0;
			(yyval) = cb_int0;
		}
	}
  }
    break;

  case 616:
/* Line 1792 of yacc.c  */
#line 5074 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
	current_field->report_source = (yyvsp[(3) - (4)]);
  }
    break;

  case 617:
/* Line 1792 of yacc.c  */
#line 5082 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
    break;

  case 618:
/* Line 1792 of yacc.c  */
#line 5090 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
    break;

  case 620:
/* Line 1792 of yacc.c  */
#line 5099 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 621:
/* Line 1792 of yacc.c  */
#line 5106 "parser.y"
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

  case 627:
/* Line 1792 of yacc.c  */
#line 5132 "parser.y"
    {
	cb_tree	x;
	int	flags;

	x = cb_build_field_tree ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), current_field, current_storage,
				 current_file, 0);
	/* Free tree assocated with level number */
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

  case 628:
/* Line 1792 of yacc.c  */
#line 5163 "parser.y"
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

  case 629:
/* Line 1792 of yacc.c  */
#line 5189 "parser.y"
    {
	/* Free tree assocated with level number */
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

  case 632:
/* Line 1792 of yacc.c  */
#line 5212 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 633:
/* Line 1792 of yacc.c  */
#line 5216 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 634:
/* Line 1792 of yacc.c  */
#line 5220 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 635:
/* Line 1792 of yacc.c  */
#line 5224 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 636:
/* Line 1792 of yacc.c  */
#line 5228 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 637:
/* Line 1792 of yacc.c  */
#line 5232 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 638:
/* Line 1792 of yacc.c  */
#line 5236 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 639:
/* Line 1792 of yacc.c  */
#line 5240 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 640:
/* Line 1792 of yacc.c  */
#line 5244 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 641:
/* Line 1792 of yacc.c  */
#line 5248 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 642:
/* Line 1792 of yacc.c  */
#line 5252 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 643:
/* Line 1792 of yacc.c  */
#line 5256 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 644:
/* Line 1792 of yacc.c  */
#line 5260 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 645:
/* Line 1792 of yacc.c  */
#line 5264 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 646:
/* Line 1792 of yacc.c  */
#line 5268 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 647:
/* Line 1792 of yacc.c  */
#line 5272 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 648:
/* Line 1792 of yacc.c  */
#line 5276 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 649:
/* Line 1792 of yacc.c  */
#line 5281 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 650:
/* Line 1792 of yacc.c  */
#line 5285 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 651:
/* Line 1792 of yacc.c  */
#line 5289 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 652:
/* Line 1792 of yacc.c  */
#line 5294 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 653:
/* Line 1792 of yacc.c  */
#line 5299 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 654:
/* Line 1792 of yacc.c  */
#line 5304 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 663:
/* Line 1792 of yacc.c  */
#line 5317 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 664:
/* Line 1792 of yacc.c  */
#line 5324 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 665:
/* Line 1792 of yacc.c  */
#line 5329 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 670:
/* Line 1792 of yacc.c  */
#line 5348 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 671:
/* Line 1792 of yacc.c  */
#line 5352 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 672:
/* Line 1792 of yacc.c  */
#line 5356 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 673:
/* Line 1792 of yacc.c  */
#line 5363 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 674:
/* Line 1792 of yacc.c  */
#line 5367 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 675:
/* Line 1792 of yacc.c  */
#line 5371 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 676:
/* Line 1792 of yacc.c  */
#line 5379 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 677:
/* Line 1792 of yacc.c  */
#line 5390 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 679:
/* Line 1792 of yacc.c  */
#line 5399 "parser.y"
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

  case 680:
/* Line 1792 of yacc.c  */
#line 5409 "parser.y"
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

  case 681:
/* Line 1792 of yacc.c  */
#line 5421 "parser.y"
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

  case 682:
/* Line 1792 of yacc.c  */
#line 5436 "parser.y"
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

  case 684:
/* Line 1792 of yacc.c  */
#line 5469 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 685:
/* Line 1792 of yacc.c  */
#line 5473 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 686:
/* Line 1792 of yacc.c  */
#line 5478 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 687:
/* Line 1792 of yacc.c  */
#line 5486 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 688:
/* Line 1792 of yacc.c  */
#line 5495 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 689:
/* Line 1792 of yacc.c  */
#line 5505 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 690:
/* Line 1792 of yacc.c  */
#line 5507 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 691:
/* Line 1792 of yacc.c  */
#line 5512 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 693:
/* Line 1792 of yacc.c  */
#line 5521 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 694:
/* Line 1792 of yacc.c  */
#line 5525 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("BY VALUE not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 696:
/* Line 1792 of yacc.c  */
#line 5537 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 697:
/* Line 1792 of yacc.c  */
#line 5545 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 698:
/* Line 1792 of yacc.c  */
#line 5553 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 699:
/* Line 1792 of yacc.c  */
#line 5561 "parser.y"
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

  case 700:
/* Line 1792 of yacc.c  */
#line 5590 "parser.y"
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

  case 702:
/* Line 1792 of yacc.c  */
#line 5623 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 703:
/* Line 1792 of yacc.c  */
#line 5632 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 704:
/* Line 1792 of yacc.c  */
#line 5638 "parser.y"
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

  case 706:
/* Line 1792 of yacc.c  */
#line 5666 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 707:
/* Line 1792 of yacc.c  */
#line 5672 "parser.y"
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

  case 712:
/* Line 1792 of yacc.c  */
#line 5710 "parser.y"
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

  case 714:
/* Line 1792 of yacc.c  */
#line 5728 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 715:
/* Line 1792 of yacc.c  */
#line 5738 "parser.y"
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

  case 716:
/* Line 1792 of yacc.c  */
#line 5782 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 719:
/* Line 1792 of yacc.c  */
#line 5793 "parser.y"
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

  case 720:
/* Line 1792 of yacc.c  */
#line 5841 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
	}
	YYERROR;
  }
    break;

  case 721:
/* Line 1792 of yacc.c  */
#line 5853 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 722:
/* Line 1792 of yacc.c  */
#line 5857 "parser.y"
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

  case 723:
/* Line 1792 of yacc.c  */
#line 5875 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 724:
/* Line 1792 of yacc.c  */
#line 5880 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 725:
/* Line 1792 of yacc.c  */
#line 5885 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 726:
/* Line 1792 of yacc.c  */
#line 5893 "parser.y"
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

  case 727:
/* Line 1792 of yacc.c  */
#line 5920 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 728:
/* Line 1792 of yacc.c  */
#line 5924 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 778:
/* Line 1792 of yacc.c  */
#line 5980 "parser.y"
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

  case 779:
/* Line 1792 of yacc.c  */
#line 5994 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 780:
/* Line 1792 of yacc.c  */
#line 6005 "parser.y"
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

  case 782:
/* Line 1792 of yacc.c  */
#line 6022 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 783:
/* Line 1792 of yacc.c  */
#line 6027 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 784:
/* Line 1792 of yacc.c  */
#line 6031 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 785:
/* Line 1792 of yacc.c  */
#line 6035 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 786:
/* Line 1792 of yacc.c  */
#line 6040 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 787:
/* Line 1792 of yacc.c  */
#line 6045 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 788:
/* Line 1792 of yacc.c  */
#line 6050 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 789:
/* Line 1792 of yacc.c  */
#line 6055 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 790:
/* Line 1792 of yacc.c  */
#line 6059 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 791:
/* Line 1792 of yacc.c  */
#line 6063 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 792:
/* Line 1792 of yacc.c  */
#line 6067 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 793:
/* Line 1792 of yacc.c  */
#line 6071 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 794:
/* Line 1792 of yacc.c  */
#line 6076 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 795:
/* Line 1792 of yacc.c  */
#line 6080 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 796:
/* Line 1792 of yacc.c  */
#line 6084 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 797:
/* Line 1792 of yacc.c  */
#line 6088 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 798:
/* Line 1792 of yacc.c  */
#line 6092 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 799:
/* Line 1792 of yacc.c  */
#line 6096 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 800:
/* Line 1792 of yacc.c  */
#line 6100 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 802:
/* Line 1792 of yacc.c  */
#line 6108 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 805:
/* Line 1792 of yacc.c  */
#line 6119 "parser.y"
    { (yyval) = NULL; }
    break;

  case 806:
/* Line 1792 of yacc.c  */
#line 6120 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 807:
/* Line 1792 of yacc.c  */
#line 6124 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 808:
/* Line 1792 of yacc.c  */
#line 6125 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 809:
/* Line 1792 of yacc.c  */
#line 6126 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 810:
/* Line 1792 of yacc.c  */
#line 6127 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 811:
/* Line 1792 of yacc.c  */
#line 6128 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 812:
/* Line 1792 of yacc.c  */
#line 6132 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 813:
/* Line 1792 of yacc.c  */
#line 6136 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 814:
/* Line 1792 of yacc.c  */
#line 6137 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 818:
/* Line 1792 of yacc.c  */
#line 6146 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 823:
/* Line 1792 of yacc.c  */
#line 6162 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 824:
/* Line 1792 of yacc.c  */
#line 6166 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 825:
/* Line 1792 of yacc.c  */
#line 6172 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 826:
/* Line 1792 of yacc.c  */
#line 6176 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 827:
/* Line 1792 of yacc.c  */
#line 6180 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 828:
/* Line 1792 of yacc.c  */
#line 6184 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 829:
/* Line 1792 of yacc.c  */
#line 6188 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 830:
/* Line 1792 of yacc.c  */
#line 6192 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 831:
/* Line 1792 of yacc.c  */
#line 6196 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 832:
/* Line 1792 of yacc.c  */
#line 6200 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 833:
/* Line 1792 of yacc.c  */
#line 6204 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 834:
/* Line 1792 of yacc.c  */
#line 6208 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 835:
/* Line 1792 of yacc.c  */
#line 6212 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  }
    break;

  case 836:
/* Line 1792 of yacc.c  */
#line 6216 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 837:
/* Line 1792 of yacc.c  */
#line 6220 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 838:
/* Line 1792 of yacc.c  */
#line 6224 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 839:
/* Line 1792 of yacc.c  */
#line 6228 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 840:
/* Line 1792 of yacc.c  */
#line 6232 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 841:
/* Line 1792 of yacc.c  */
#line 6236 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 842:
/* Line 1792 of yacc.c  */
#line 6242 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 843:
/* Line 1792 of yacc.c  */
#line 6246 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 844:
/* Line 1792 of yacc.c  */
#line 6250 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 845:
/* Line 1792 of yacc.c  */
#line 6254 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 846:
/* Line 1792 of yacc.c  */
#line 6258 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 847:
/* Line 1792 of yacc.c  */
#line 6262 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 848:
/* Line 1792 of yacc.c  */
#line 6266 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  }
    break;

  case 851:
/* Line 1792 of yacc.c  */
#line 6278 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 852:
/* Line 1792 of yacc.c  */
#line 6282 "parser.y"
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

  case 853:
/* Line 1792 of yacc.c  */
#line 6299 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 855:
/* Line 1792 of yacc.c  */
#line 6308 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 856:
/* Line 1792 of yacc.c  */
#line 6312 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 857:
/* Line 1792 of yacc.c  */
#line 6316 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 859:
/* Line 1792 of yacc.c  */
#line 6323 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 860:
/* Line 1792 of yacc.c  */
#line 6330 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 861:
/* Line 1792 of yacc.c  */
#line 6334 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 862:
/* Line 1792 of yacc.c  */
#line 6344 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 864:
/* Line 1792 of yacc.c  */
#line 6353 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 865:
/* Line 1792 of yacc.c  */
#line 6357 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 866:
/* Line 1792 of yacc.c  */
#line 6368 "parser.y"
    { (yyval) = NULL; }
    break;

  case 867:
/* Line 1792 of yacc.c  */
#line 6369 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 868:
/* Line 1792 of yacc.c  */
#line 6377 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 872:
/* Line 1792 of yacc.c  */
#line 6391 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 875:
/* Line 1792 of yacc.c  */
#line 6403 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 877:
/* Line 1792 of yacc.c  */
#line 6418 "parser.y"
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

  case 878:
/* Line 1792 of yacc.c  */
#line 6432 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 879:
/* Line 1792 of yacc.c  */
#line 6437 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 880:
/* Line 1792 of yacc.c  */
#line 6442 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 881:
/* Line 1792 of yacc.c  */
#line 6447 "parser.y"
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

  case 882:
/* Line 1792 of yacc.c  */
#line 6467 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 883:
/* Line 1792 of yacc.c  */
#line 6471 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 884:
/* Line 1792 of yacc.c  */
#line 6476 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 885:
/* Line 1792 of yacc.c  */
#line 6487 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 886:
/* Line 1792 of yacc.c  */
#line 6489 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 887:
/* Line 1792 of yacc.c  */
#line 6494 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 888:
/* Line 1792 of yacc.c  */
#line 6502 "parser.y"
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

  case 890:
/* Line 1792 of yacc.c  */
#line 6528 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 891:
/* Line 1792 of yacc.c  */
#line 6532 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("BY CONTENT not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 892:
/* Line 1792 of yacc.c  */
#line 6541 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("BY VALUE not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 893:
/* Line 1792 of yacc.c  */
#line 6553 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 894:
/* Line 1792 of yacc.c  */
#line 6557 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 895:
/* Line 1792 of yacc.c  */
#line 6561 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 896:
/* Line 1792 of yacc.c  */
#line 6565 "parser.y"
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

  case 901:
/* Line 1792 of yacc.c  */
#line 6598 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 902:
/* Line 1792 of yacc.c  */
#line 6603 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 903:
/* Line 1792 of yacc.c  */
#line 6610 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 904:
/* Line 1792 of yacc.c  */
#line 6615 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 905:
/* Line 1792 of yacc.c  */
#line 6622 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 906:
/* Line 1792 of yacc.c  */
#line 6626 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 907:
/* Line 1792 of yacc.c  */
#line 6636 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 909:
/* Line 1792 of yacc.c  */
#line 6644 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 910:
/* Line 1792 of yacc.c  */
#line 6648 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 911:
/* Line 1792 of yacc.c  */
#line 6658 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 913:
/* Line 1792 of yacc.c  */
#line 6666 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 914:
/* Line 1792 of yacc.c  */
#line 6671 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 915:
/* Line 1792 of yacc.c  */
#line 6678 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 916:
/* Line 1792 of yacc.c  */
#line 6679 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 917:
/* Line 1792 of yacc.c  */
#line 6680 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 918:
/* Line 1792 of yacc.c  */
#line 6681 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 919:
/* Line 1792 of yacc.c  */
#line 6682 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 6690 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 922:
/* Line 1792 of yacc.c  */
#line 6699 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 923:
/* Line 1792 of yacc.c  */
#line 6706 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 924:
/* Line 1792 of yacc.c  */
#line 6710 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 925:
/* Line 1792 of yacc.c  */
#line 6720 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 926:
/* Line 1792 of yacc.c  */
#line 6731 "parser.y"
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

  case 927:
/* Line 1792 of yacc.c  */
#line 6748 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 929:
/* Line 1792 of yacc.c  */
#line 6757 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 931:
/* Line 1792 of yacc.c  */
#line 6765 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 932:
/* Line 1792 of yacc.c  */
#line 6770 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 933:
/* Line 1792 of yacc.c  */
#line 6778 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 934:
/* Line 1792 of yacc.c  */
#line 6782 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 935:
/* Line 1792 of yacc.c  */
#line 6792 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 937:
/* Line 1792 of yacc.c  */
#line 6802 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 938:
/* Line 1792 of yacc.c  */
#line 6806 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 939:
/* Line 1792 of yacc.c  */
#line 6810 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 6814 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 941:
/* Line 1792 of yacc.c  */
#line 6818 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 6823 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 945:
/* Line 1792 of yacc.c  */
#line 6833 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 947:
/* Line 1792 of yacc.c  */
#line 6841 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 948:
/* Line 1792 of yacc.c  */
#line 6849 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 949:
/* Line 1792 of yacc.c  */
#line 6857 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 950:
/* Line 1792 of yacc.c  */
#line 6861 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 951:
/* Line 1792 of yacc.c  */
#line 6865 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 952:
/* Line 1792 of yacc.c  */
#line 6869 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 958:
/* Line 1792 of yacc.c  */
#line 6891 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 959:
/* Line 1792 of yacc.c  */
#line 6897 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 960:
/* Line 1792 of yacc.c  */
#line 6898 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 963:
/* Line 1792 of yacc.c  */
#line 6909 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 964:
/* Line 1792 of yacc.c  */
#line 6913 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 965:
/* Line 1792 of yacc.c  */
#line 6917 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 966:
/* Line 1792 of yacc.c  */
#line 6921 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 967:
/* Line 1792 of yacc.c  */
#line 6925 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 968:
/* Line 1792 of yacc.c  */
#line 6929 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 969:
/* Line 1792 of yacc.c  */
#line 6933 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 970:
/* Line 1792 of yacc.c  */
#line 6937 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 971:
/* Line 1792 of yacc.c  */
#line 6941 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 972:
/* Line 1792 of yacc.c  */
#line 6945 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 973:
/* Line 1792 of yacc.c  */
#line 6949 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 974:
/* Line 1792 of yacc.c  */
#line 6953 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 975:
/* Line 1792 of yacc.c  */
#line 6957 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 976:
/* Line 1792 of yacc.c  */
#line 6961 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 977:
/* Line 1792 of yacc.c  */
#line 6965 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 978:
/* Line 1792 of yacc.c  */
#line 6969 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 979:
/* Line 1792 of yacc.c  */
#line 6976 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 980:
/* Line 1792 of yacc.c  */
#line 6980 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 981:
/* Line 1792 of yacc.c  */
#line 6990 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 983:
/* Line 1792 of yacc.c  */
#line 6999 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 984:
/* Line 1792 of yacc.c  */
#line 7003 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 985:
/* Line 1792 of yacc.c  */
#line 7007 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 986:
/* Line 1792 of yacc.c  */
#line 7011 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 987:
/* Line 1792 of yacc.c  */
#line 7015 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7022 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 989:
/* Line 1792 of yacc.c  */
#line 7026 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7036 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7045 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("ENTRY is invalid in nested program"));
	} else if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("ENTRY is invalid in a user FUNCTION"));
	} else if (cb_verify (cb_entry_statement, "ENTRY")) {
		if (!cobc_check_valid_name ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1U)) {
			emit_entry ((char *)(CB_LITERAL ((yyvsp[(1) - (2)]))->data), 1, (yyvsp[(2) - (2)]));
		}
	}
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7063 "parser.y"
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

  case 995:
/* Line 1792 of yacc.c  */
#line 7087 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 996:
/* Line 1792 of yacc.c  */
#line 7094 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 997:
/* Line 1792 of yacc.c  */
#line 7096 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 998:
/* Line 1792 of yacc.c  */
#line 7101 "parser.y"
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

  case 999:
/* Line 1792 of yacc.c  */
#line 7112 "parser.y"
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

  case 1000:
/* Line 1792 of yacc.c  */
#line 7123 "parser.y"
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

  case 1001:
/* Line 1792 of yacc.c  */
#line 7137 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1002:
/* Line 1792 of yacc.c  */
#line 7141 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1003:
/* Line 1792 of yacc.c  */
#line 7147 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1004:
/* Line 1792 of yacc.c  */
#line 7149 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1005:
/* Line 1792 of yacc.c  */
#line 7155 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1006:
/* Line 1792 of yacc.c  */
#line 7164 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1007:
/* Line 1792 of yacc.c  */
#line 7172 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1008:
/* Line 1792 of yacc.c  */
#line 7178 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1009:
/* Line 1792 of yacc.c  */
#line 7185 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1010:
/* Line 1792 of yacc.c  */
#line 7187 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1011:
/* Line 1792 of yacc.c  */
#line 7192 "parser.y"
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

  case 1012:
/* Line 1792 of yacc.c  */
#line 7253 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1013:
/* Line 1792 of yacc.c  */
#line 7254 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1014:
/* Line 1792 of yacc.c  */
#line 7255 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1015:
/* Line 1792 of yacc.c  */
#line 7259 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1016:
/* Line 1792 of yacc.c  */
#line 7260 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1017:
/* Line 1792 of yacc.c  */
#line 7265 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1018:
/* Line 1792 of yacc.c  */
#line 7269 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1019:
/* Line 1792 of yacc.c  */
#line 7279 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1020:
/* Line 1792 of yacc.c  */
#line 7284 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1022:
/* Line 1792 of yacc.c  */
#line 7292 "parser.y"
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

  case 1023:
/* Line 1792 of yacc.c  */
#line 7313 "parser.y"
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

  case 1024:
/* Line 1792 of yacc.c  */
#line 7327 "parser.y"
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

  case 1025:
/* Line 1792 of yacc.c  */
#line 7349 "parser.y"
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

  case 1026:
/* Line 1792 of yacc.c  */
#line 7371 "parser.y"
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

  case 1027:
/* Line 1792 of yacc.c  */
#line 7391 "parser.y"
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

  case 1028:
/* Line 1792 of yacc.c  */
#line 7413 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1029:
/* Line 1792 of yacc.c  */
#line 7414 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1030:
/* Line 1792 of yacc.c  */
#line 7422 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1032:
/* Line 1792 of yacc.c  */
#line 7431 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1033:
/* Line 1792 of yacc.c  */
#line 7441 "parser.y"
    {
	begin_statement ("GENERATE", 0);
  }
    break;

  case 1035:
/* Line 1792 of yacc.c  */
#line 7450 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
		cb_emit_generate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1036:
/* Line 1792 of yacc.c  */
#line 7462 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1038:
/* Line 1792 of yacc.c  */
#line 7475 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1039:
/* Line 1792 of yacc.c  */
#line 7483 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1040:
/* Line 1792 of yacc.c  */
#line 7488 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1041:
/* Line 1792 of yacc.c  */
#line 7499 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1042:
/* Line 1792 of yacc.c  */
#line 7514 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1044:
/* Line 1792 of yacc.c  */
#line 7523 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1045:
/* Line 1792 of yacc.c  */
#line 7527 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1046:
/* Line 1792 of yacc.c  */
#line 7531 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1047:
/* Line 1792 of yacc.c  */
#line 7538 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1048:
/* Line 1792 of yacc.c  */
#line 7542 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1049:
/* Line 1792 of yacc.c  */
#line 7552 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1051:
/* Line 1792 of yacc.c  */
#line 7561 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1052:
/* Line 1792 of yacc.c  */
#line 7567 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1053:
/* Line 1792 of yacc.c  */
#line 7568 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1054:
/* Line 1792 of yacc.c  */
#line 7572 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1055:
/* Line 1792 of yacc.c  */
#line 7573 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1056:
/* Line 1792 of yacc.c  */
#line 7574 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1057:
/* Line 1792 of yacc.c  */
#line 7579 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1058:
/* Line 1792 of yacc.c  */
#line 7583 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1059:
/* Line 1792 of yacc.c  */
#line 7590 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1060:
/* Line 1792 of yacc.c  */
#line 7595 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1061:
/* Line 1792 of yacc.c  */
#line 7602 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1062:
/* Line 1792 of yacc.c  */
#line 7608 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1063:
/* Line 1792 of yacc.c  */
#line 7609 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1064:
/* Line 1792 of yacc.c  */
#line 7610 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1065:
/* Line 1792 of yacc.c  */
#line 7611 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1066:
/* Line 1792 of yacc.c  */
#line 7612 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1067:
/* Line 1792 of yacc.c  */
#line 7613 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1068:
/* Line 1792 of yacc.c  */
#line 7614 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 7619 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1070:
/* Line 1792 of yacc.c  */
#line 7623 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1071:
/* Line 1792 of yacc.c  */
#line 7632 "parser.y"
    {
	begin_statement ("INITIATE", 0);
  }
    break;

  case 1073:
/* Line 1792 of yacc.c  */
#line 7640 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1074:
/* Line 1792 of yacc.c  */
#line 7647 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1075:
/* Line 1792 of yacc.c  */
#line 7659 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 7672 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 7676 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 7680 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1085:
/* Line 1792 of yacc.c  */
#line 7696 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1086:
/* Line 1792 of yacc.c  */
#line 7700 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1087:
/* Line 1792 of yacc.c  */
#line 7710 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1088:
/* Line 1792 of yacc.c  */
#line 7720 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1089:
/* Line 1792 of yacc.c  */
#line 7728 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1090:
/* Line 1792 of yacc.c  */
#line 7729 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1091:
/* Line 1792 of yacc.c  */
#line 7733 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 7734 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1093:
/* Line 1792 of yacc.c  */
#line 7735 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1094:
/* Line 1792 of yacc.c  */
#line 7736 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1095:
/* Line 1792 of yacc.c  */
#line 7737 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1096:
/* Line 1792 of yacc.c  */
#line 7738 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1097:
/* Line 1792 of yacc.c  */
#line 7742 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1098:
/* Line 1792 of yacc.c  */
#line 7743 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1099:
/* Line 1792 of yacc.c  */
#line 7748 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1100:
/* Line 1792 of yacc.c  */
#line 7753 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1101:
/* Line 1792 of yacc.c  */
#line 7759 "parser.y"
    { /* Nothing */ }
    break;

  case 1102:
/* Line 1792 of yacc.c  */
#line 7760 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1103:
/* Line 1792 of yacc.c  */
#line 7761 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1104:
/* Line 1792 of yacc.c  */
#line 7762 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1105:
/* Line 1792 of yacc.c  */
#line 7763 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1106:
/* Line 1792 of yacc.c  */
#line 7768 "parser.y"
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

  case 1107:
/* Line 1792 of yacc.c  */
#line 7795 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1108:
/* Line 1792 of yacc.c  */
#line 7799 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1109:
/* Line 1792 of yacc.c  */
#line 7806 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 7810 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 7819 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1113:
/* Line 1792 of yacc.c  */
#line 7831 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 7839 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 7843 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1117:
/* Line 1792 of yacc.c  */
#line 7853 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1119:
/* Line 1792 of yacc.c  */
#line 7862 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 7866 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1121:
/* Line 1792 of yacc.c  */
#line 7873 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 7877 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1123:
/* Line 1792 of yacc.c  */
#line 7887 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 7895 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(2) - (4)]) && (yyvsp[(4) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SHARING and LOCK clauses are mutually exclusive"));
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

  case 1126:
/* Line 1792 of yacc.c  */
#line 7916 "parser.y"
    {
	cb_tree l;
	cb_tree x;

	if ((yyvsp[(3) - (5)]) && (yyvsp[(5) - (5)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SHARING and LOCK clauses are mutually exclusive"));
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

  case 1127:
/* Line 1792 of yacc.c  */
#line 7939 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1128:
/* Line 1792 of yacc.c  */
#line 7940 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1129:
/* Line 1792 of yacc.c  */
#line 7941 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1130:
/* Line 1792 of yacc.c  */
#line 7942 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1131:
/* Line 1792 of yacc.c  */
#line 7946 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1132:
/* Line 1792 of yacc.c  */
#line 7947 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1133:
/* Line 1792 of yacc.c  */
#line 7951 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1134:
/* Line 1792 of yacc.c  */
#line 7952 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 7953 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1136:
/* Line 1792 of yacc.c  */
#line 7955 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1137:
/* Line 1792 of yacc.c  */
#line 7966 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1139:
/* Line 1792 of yacc.c  */
#line 7977 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1140:
/* Line 1792 of yacc.c  */
#line 7982 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1141:
/* Line 1792 of yacc.c  */
#line 7988 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1142:
/* Line 1792 of yacc.c  */
#line 7993 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1143:
/* Line 1792 of yacc.c  */
#line 8001 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8009 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8016 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8020 "parser.y"
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

  case 1147:
/* Line 1792 of yacc.c  */
#line 8033 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1148:
/* Line 1792 of yacc.c  */
#line 8040 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1149:
/* Line 1792 of yacc.c  */
#line 8051 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1150:
/* Line 1792 of yacc.c  */
#line 8055 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1151:
/* Line 1792 of yacc.c  */
#line 8060 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1152:
/* Line 1792 of yacc.c  */
#line 8064 "parser.y"
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

  case 1153:
/* Line 1792 of yacc.c  */
#line 8075 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8081 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8082 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1156:
/* Line 1792 of yacc.c  */
#line 8086 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8087 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1158:
/* Line 1792 of yacc.c  */
#line 8090 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8092 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8097 "parser.y"
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

  case 1161:
/* Line 1792 of yacc.c  */
#line 8136 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1163:
/* Line 1792 of yacc.c  */
#line 8145 "parser.y"
    {
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

  case 1164:
/* Line 1792 of yacc.c  */
#line 8171 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8172 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1166:
/* Line 1792 of yacc.c  */
#line 8177 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1167:
/* Line 1792 of yacc.c  */
#line 8181 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1168:
/* Line 1792 of yacc.c  */
#line 8185 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1169:
/* Line 1792 of yacc.c  */
#line 8189 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1170:
/* Line 1792 of yacc.c  */
#line 8193 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1171:
/* Line 1792 of yacc.c  */
#line 8197 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1172:
/* Line 1792 of yacc.c  */
#line 8201 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8207 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1174:
/* Line 1792 of yacc.c  */
#line 8208 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1177:
/* Line 1792 of yacc.c  */
#line 8218 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1178:
/* Line 1792 of yacc.c  */
#line 8222 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1179:
/* Line 1792 of yacc.c  */
#line 8232 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1180:
/* Line 1792 of yacc.c  */
#line 8242 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1182:
/* Line 1792 of yacc.c  */
#line 8250 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1183:
/* Line 1792 of yacc.c  */
#line 8260 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1184:
/* Line 1792 of yacc.c  */
#line 8270 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1186:
/* Line 1792 of yacc.c  */
#line 8279 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1187:
/* Line 1792 of yacc.c  */
#line 8286 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1188:
/* Line 1792 of yacc.c  */
#line 8290 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1189:
/* Line 1792 of yacc.c  */
#line 8300 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1191:
/* Line 1792 of yacc.c  */
#line 8312 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8320 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1193:
/* Line 1792 of yacc.c  */
#line 8324 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8328 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1195:
/* Line 1792 of yacc.c  */
#line 8335 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1196:
/* Line 1792 of yacc.c  */
#line 8339 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8349 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1198:
/* Line 1792 of yacc.c  */
#line 8360 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1200:
/* Line 1792 of yacc.c  */
#line 8369 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1201:
/* Line 1792 of yacc.c  */
#line 8374 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1202:
/* Line 1792 of yacc.c  */
#line 8381 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1203:
/* Line 1792 of yacc.c  */
#line 8382 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1204:
/* Line 1792 of yacc.c  */
#line 8387 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1205:
/* Line 1792 of yacc.c  */
#line 8392 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1206:
/* Line 1792 of yacc.c  */
#line 8399 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1207:
/* Line 1792 of yacc.c  */
#line 8403 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 8411 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1209:
/* Line 1792 of yacc.c  */
#line 8418 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1210:
/* Line 1792 of yacc.c  */
#line 8422 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 8432 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1212:
/* Line 1792 of yacc.c  */
#line 8439 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1219:
/* Line 1792 of yacc.c  */
#line 8454 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1220:
/* Line 1792 of yacc.c  */
#line 8455 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1221:
/* Line 1792 of yacc.c  */
#line 8459 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1222:
/* Line 1792 of yacc.c  */
#line 8460 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1223:
/* Line 1792 of yacc.c  */
#line 8467 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1224:
/* Line 1792 of yacc.c  */
#line 8476 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1227:
/* Line 1792 of yacc.c  */
#line 8488 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1228:
/* Line 1792 of yacc.c  */
#line 8492 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1229:
/* Line 1792 of yacc.c  */
#line 8496 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1230:
/* Line 1792 of yacc.c  */
#line 8500 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1231:
/* Line 1792 of yacc.c  */
#line 8504 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1232:
/* Line 1792 of yacc.c  */
#line 8508 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1233:
/* Line 1792 of yacc.c  */
#line 8512 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1234:
/* Line 1792 of yacc.c  */
#line 8516 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1235:
/* Line 1792 of yacc.c  */
#line 8525 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 8529 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1237:
/* Line 1792 of yacc.c  */
#line 8538 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1240:
/* Line 1792 of yacc.c  */
#line 8552 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1243:
/* Line 1792 of yacc.c  */
#line 8566 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1244:
/* Line 1792 of yacc.c  */
#line 8570 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 8580 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1247:
/* Line 1792 of yacc.c  */
#line 8588 "parser.y"
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

  case 1248:
/* Line 1792 of yacc.c  */
#line 8609 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1249:
/* Line 1792 of yacc.c  */
#line 8618 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1250:
/* Line 1792 of yacc.c  */
#line 8623 "parser.y"
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

  case 1251:
/* Line 1792 of yacc.c  */
#line 8641 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1252:
/* Line 1792 of yacc.c  */
#line 8642 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1254:
/* Line 1792 of yacc.c  */
#line 8647 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1255:
/* Line 1792 of yacc.c  */
#line 8654 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1256:
/* Line 1792 of yacc.c  */
#line 8655 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1257:
/* Line 1792 of yacc.c  */
#line 8660 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1258:
/* Line 1792 of yacc.c  */
#line 8666 "parser.y"
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

  case 1259:
/* Line 1792 of yacc.c  */
#line 8676 "parser.y"
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

  case 1260:
/* Line 1792 of yacc.c  */
#line 8691 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 8697 "parser.y"
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

  case 1262:
/* Line 1792 of yacc.c  */
#line 8707 "parser.y"
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

  case 1263:
/* Line 1792 of yacc.c  */
#line 8723 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1265:
/* Line 1792 of yacc.c  */
#line 8733 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1266:
/* Line 1792 of yacc.c  */
#line 8745 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1267:
/* Line 1792 of yacc.c  */
#line 8749 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1268:
/* Line 1792 of yacc.c  */
#line 8756 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1269:
/* Line 1792 of yacc.c  */
#line 8760 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1270:
/* Line 1792 of yacc.c  */
#line 8765 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1271:
/* Line 1792 of yacc.c  */
#line 8770 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1272:
/* Line 1792 of yacc.c  */
#line 8777 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1273:
/* Line 1792 of yacc.c  */
#line 8778 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1274:
/* Line 1792 of yacc.c  */
#line 8779 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1275:
/* Line 1792 of yacc.c  */
#line 8780 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1276:
/* Line 1792 of yacc.c  */
#line 8781 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1277:
/* Line 1792 of yacc.c  */
#line 8782 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1278:
/* Line 1792 of yacc.c  */
#line 8787 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1281:
/* Line 1792 of yacc.c  */
#line 8800 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1282:
/* Line 1792 of yacc.c  */
#line 8804 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1283:
/* Line 1792 of yacc.c  */
#line 8814 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1284:
/* Line 1792 of yacc.c  */
#line 8818 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1285:
/* Line 1792 of yacc.c  */
#line 8824 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1286:
/* Line 1792 of yacc.c  */
#line 8836 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1287:
/* Line 1792 of yacc.c  */
#line 8840 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1288:
/* Line 1792 of yacc.c  */
#line 8844 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1289:
/* Line 1792 of yacc.c  */
#line 8852 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1290:
/* Line 1792 of yacc.c  */
#line 8863 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1291:
/* Line 1792 of yacc.c  */
#line 8867 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1292:
/* Line 1792 of yacc.c  */
#line 8873 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1293:
/* Line 1792 of yacc.c  */
#line 8874 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1294:
/* Line 1792 of yacc.c  */
#line 8875 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 8876 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1296:
/* Line 1792 of yacc.c  */
#line 8883 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1298:
/* Line 1792 of yacc.c  */
#line 8892 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1299:
/* Line 1792 of yacc.c  */
#line 8898 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1300:
/* Line 1792 of yacc.c  */
#line 8899 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1301:
/* Line 1792 of yacc.c  */
#line 8903 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1302:
/* Line 1792 of yacc.c  */
#line 8904 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1303:
/* Line 1792 of yacc.c  */
#line 8905 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1304:
/* Line 1792 of yacc.c  */
#line 8909 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1305:
/* Line 1792 of yacc.c  */
#line 8910 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1306:
/* Line 1792 of yacc.c  */
#line 8915 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1307:
/* Line 1792 of yacc.c  */
#line 8919 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1308:
/* Line 1792 of yacc.c  */
#line 8929 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1310:
/* Line 1792 of yacc.c  */
#line 8938 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1311:
/* Line 1792 of yacc.c  */
#line 8942 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1312:
/* Line 1792 of yacc.c  */
#line 8946 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1313:
/* Line 1792 of yacc.c  */
#line 8953 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1314:
/* Line 1792 of yacc.c  */
#line 8957 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1315:
/* Line 1792 of yacc.c  */
#line 8967 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  }
    break;

  case 1318:
/* Line 1792 of yacc.c  */
#line 8985 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
  }
    break;

  case 1320:
/* Line 1792 of yacc.c  */
#line 8993 "parser.y"
    {
	begin_implicit_statement ();
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1321:
/* Line 1792 of yacc.c  */
#line 9001 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
		cb_emit_terminate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1322:
/* Line 1792 of yacc.c  */
#line 9013 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1324:
/* Line 1792 of yacc.c  */
#line 9021 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1325:
/* Line 1792 of yacc.c  */
#line 9034 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1327:
/* Line 1792 of yacc.c  */
#line 9042 "parser.y"
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

  case 1331:
/* Line 1792 of yacc.c  */
#line 9065 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1333:
/* Line 1792 of yacc.c  */
#line 9075 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1334:
/* Line 1792 of yacc.c  */
#line 9081 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1335:
/* Line 1792 of yacc.c  */
#line 9083 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1336:
/* Line 1792 of yacc.c  */
#line 9087 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1337:
/* Line 1792 of yacc.c  */
#line 9089 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9094 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1339:
/* Line 1792 of yacc.c  */
#line 9100 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1340:
/* Line 1792 of yacc.c  */
#line 9102 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1341:
/* Line 1792 of yacc.c  */
#line 9107 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1342:
/* Line 1792 of yacc.c  */
#line 9113 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1343:
/* Line 1792 of yacc.c  */
#line 9114 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1344:
/* Line 1792 of yacc.c  */
#line 9118 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1345:
/* Line 1792 of yacc.c  */
#line 9119 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1346:
/* Line 1792 of yacc.c  */
#line 9123 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1347:
/* Line 1792 of yacc.c  */
#line 9124 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1348:
/* Line 1792 of yacc.c  */
#line 9129 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1349:
/* Line 1792 of yacc.c  */
#line 9133 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1350:
/* Line 1792 of yacc.c  */
#line 9143 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1357:
/* Line 1792 of yacc.c  */
#line 9161 "parser.y"
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

  case 1358:
/* Line 1792 of yacc.c  */
#line 9186 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1359:
/* Line 1792 of yacc.c  */
#line 9190 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1360:
/* Line 1792 of yacc.c  */
#line 9202 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1361:
/* Line 1792 of yacc.c  */
#line 9212 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1362:
/* Line 1792 of yacc.c  */
#line 9217 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1363:
/* Line 1792 of yacc.c  */
#line 9222 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1364:
/* Line 1792 of yacc.c  */
#line 9227 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1365:
/* Line 1792 of yacc.c  */
#line 9235 "parser.y"
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

  case 1368:
/* Line 1792 of yacc.c  */
#line 9278 "parser.y"
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

  case 1369:
/* Line 1792 of yacc.c  */
#line 9318 "parser.y"
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

  case 1370:
/* Line 1792 of yacc.c  */
#line 9328 "parser.y"
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

  case 1375:
/* Line 1792 of yacc.c  */
#line 9358 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("USE AT is invalid in nested program"));
	}
  }
    break;

  case 1376:
/* Line 1792 of yacc.c  */
#line 9367 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1377:
/* Line 1792 of yacc.c  */
#line 9373 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1378:
/* Line 1792 of yacc.c  */
#line 9383 "parser.y"
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

  case 1379:
/* Line 1792 of yacc.c  */
#line 9414 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1382:
/* Line 1792 of yacc.c  */
#line 9430 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1384:
/* Line 1792 of yacc.c  */
#line 9442 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1385:
/* Line 1792 of yacc.c  */
#line 9451 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1386:
/* Line 1792 of yacc.c  */
#line 9452 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1387:
/* Line 1792 of yacc.c  */
#line 9457 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1388:
/* Line 1792 of yacc.c  */
#line 9461 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1389:
/* Line 1792 of yacc.c  */
#line 9465 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1390:
/* Line 1792 of yacc.c  */
#line 9469 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1391:
/* Line 1792 of yacc.c  */
#line 9475 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1392:
/* Line 1792 of yacc.c  */
#line 9476 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1395:
/* Line 1792 of yacc.c  */
#line 9486 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1396:
/* Line 1792 of yacc.c  */
#line 9490 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1399:
/* Line 1792 of yacc.c  */
#line 9507 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1401:
/* Line 1792 of yacc.c  */
#line 9517 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1404:
/* Line 1792 of yacc.c  */
#line 9530 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1406:
/* Line 1792 of yacc.c  */
#line 9540 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1409:
/* Line 1792 of yacc.c  */
#line 9555 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1411:
/* Line 1792 of yacc.c  */
#line 9565 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1414:
/* Line 1792 of yacc.c  */
#line 9582 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1416:
/* Line 1792 of yacc.c  */
#line 9593 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1422:
/* Line 1792 of yacc.c  */
#line 9616 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1423:
/* Line 1792 of yacc.c  */
#line 9625 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1427:
/* Line 1792 of yacc.c  */
#line 9642 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 9651 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1431:
/* Line 1792 of yacc.c  */
#line 9668 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1433:
/* Line 1792 of yacc.c  */
#line 9678 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1434:
/* Line 1792 of yacc.c  */
#line 9688 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1435:
/* Line 1792 of yacc.c  */
#line 9692 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1436:
/* Line 1792 of yacc.c  */
#line 9702 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1437:
/* Line 1792 of yacc.c  */
#line 9709 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1438:
/* Line 1792 of yacc.c  */
#line 9715 "parser.y"
    {
	current_expr = NULL;
  }
    break;

  case 1439:
/* Line 1792 of yacc.c  */
#line 9719 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1443:
/* Line 1792 of yacc.c  */
#line 9732 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1444:
/* Line 1792 of yacc.c  */
#line 9740 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1445:
/* Line 1792 of yacc.c  */
#line 9741 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1446:
/* Line 1792 of yacc.c  */
#line 9743 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1447:
/* Line 1792 of yacc.c  */
#line 9744 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1448:
/* Line 1792 of yacc.c  */
#line 9745 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1449:
/* Line 1792 of yacc.c  */
#line 9746 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1450:
/* Line 1792 of yacc.c  */
#line 9747 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1451:
/* Line 1792 of yacc.c  */
#line 9749 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1452:
/* Line 1792 of yacc.c  */
#line 9750 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1453:
/* Line 1792 of yacc.c  */
#line 9751 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1454:
/* Line 1792 of yacc.c  */
#line 9752 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1455:
/* Line 1792 of yacc.c  */
#line 9753 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1456:
/* Line 1792 of yacc.c  */
#line 9754 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1457:
/* Line 1792 of yacc.c  */
#line 9756 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1458:
/* Line 1792 of yacc.c  */
#line 9757 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1459:
/* Line 1792 of yacc.c  */
#line 9758 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1460:
/* Line 1792 of yacc.c  */
#line 9760 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 9761 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1462:
/* Line 1792 of yacc.c  */
#line 9762 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1463:
/* Line 1792 of yacc.c  */
#line 9763 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1464:
/* Line 1792 of yacc.c  */
#line 9764 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1465:
/* Line 1792 of yacc.c  */
#line 9767 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1466:
/* Line 1792 of yacc.c  */
#line 9768 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1475:
/* Line 1792 of yacc.c  */
#line 9798 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1476:
/* Line 1792 of yacc.c  */
#line 9802 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1480:
/* Line 1792 of yacc.c  */
#line 9813 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1481:
/* Line 1792 of yacc.c  */
#line 9814 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1482:
/* Line 1792 of yacc.c  */
#line 9815 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1483:
/* Line 1792 of yacc.c  */
#line 9819 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1484:
/* Line 1792 of yacc.c  */
#line 9820 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1485:
/* Line 1792 of yacc.c  */
#line 9821 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1486:
/* Line 1792 of yacc.c  */
#line 9826 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1487:
/* Line 1792 of yacc.c  */
#line 9829 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1488:
/* Line 1792 of yacc.c  */
#line 9833 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 9834 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1490:
/* Line 1792 of yacc.c  */
#line 9835 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1491:
/* Line 1792 of yacc.c  */
#line 9838 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1492:
/* Line 1792 of yacc.c  */
#line 9839 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1493:
/* Line 1792 of yacc.c  */
#line 9850 "parser.y"
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

  case 1494:
/* Line 1792 of yacc.c  */
#line 9862 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1495:
/* Line 1792 of yacc.c  */
#line 9871 "parser.y"
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

  case 1496:
/* Line 1792 of yacc.c  */
#line 9887 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1497:
/* Line 1792 of yacc.c  */
#line 9896 "parser.y"
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

  case 1498:
/* Line 1792 of yacc.c  */
#line 9912 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1499:
/* Line 1792 of yacc.c  */
#line 9926 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1500:
/* Line 1792 of yacc.c  */
#line 9928 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1501:
/* Line 1792 of yacc.c  */
#line 9933 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1502:
/* Line 1792 of yacc.c  */
#line 9941 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1503:
/* Line 1792 of yacc.c  */
#line 9948 "parser.y"
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

  case 1504:
/* Line 1792 of yacc.c  */
#line 9968 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1505:
/* Line 1792 of yacc.c  */
#line 9972 "parser.y"
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

  case 1506:
/* Line 1792 of yacc.c  */
#line 9993 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1507:
/* Line 1792 of yacc.c  */
#line 10034 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1508:
/* Line 1792 of yacc.c  */
#line 10047 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1509:
/* Line 1792 of yacc.c  */
#line 10049 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1510:
/* Line 1792 of yacc.c  */
#line 10053 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1511:
/* Line 1792 of yacc.c  */
#line 10059 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1512:
/* Line 1792 of yacc.c  */
#line 10061 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1513:
/* Line 1792 of yacc.c  */
#line 10066 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1516:
/* Line 1792 of yacc.c  */
#line 10080 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1517:
/* Line 1792 of yacc.c  */
#line 10087 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1518:
/* Line 1792 of yacc.c  */
#line 10097 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1519:
/* Line 1792 of yacc.c  */
#line 10098 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1520:
/* Line 1792 of yacc.c  */
#line 10103 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10111 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1522:
/* Line 1792 of yacc.c  */
#line 10119 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1523:
/* Line 1792 of yacc.c  */
#line 10123 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1524:
/* Line 1792 of yacc.c  */
#line 10130 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1527:
/* Line 1792 of yacc.c  */
#line 10146 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1528:
/* Line 1792 of yacc.c  */
#line 10160 "parser.y"
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

  case 1529:
/* Line 1792 of yacc.c  */
#line 10177 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1530:
/* Line 1792 of yacc.c  */
#line 10181 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1533:
/* Line 1792 of yacc.c  */
#line 10190 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1534:
/* Line 1792 of yacc.c  */
#line 10197 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1535:
/* Line 1792 of yacc.c  */
#line 10201 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1540:
/* Line 1792 of yacc.c  */
#line 10212 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1541:
/* Line 1792 of yacc.c  */
#line 10216 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1542:
/* Line 1792 of yacc.c  */
#line 10220 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1543:
/* Line 1792 of yacc.c  */
#line 10224 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1544:
/* Line 1792 of yacc.c  */
#line 10228 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1545:
/* Line 1792 of yacc.c  */
#line 10232 "parser.y"
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

  case 1546:
/* Line 1792 of yacc.c  */
#line 10253 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10257 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1555:
/* Line 1792 of yacc.c  */
#line 10274 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1556:
/* Line 1792 of yacc.c  */
#line 10278 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1557:
/* Line 1792 of yacc.c  */
#line 10282 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1573:
/* Line 1792 of yacc.c  */
#line 10329 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1581:
/* Line 1792 of yacc.c  */
#line 10353 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1582:
/* Line 1792 of yacc.c  */
#line 10357 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1583:
/* Line 1792 of yacc.c  */
#line 10361 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1584:
/* Line 1792 of yacc.c  */
#line 10362 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1585:
/* Line 1792 of yacc.c  */
#line 10366 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1586:
/* Line 1792 of yacc.c  */
#line 10371 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1587:
/* Line 1792 of yacc.c  */
#line 10378 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1588:
/* Line 1792 of yacc.c  */
#line 10385 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1589:
/* Line 1792 of yacc.c  */
#line 10392 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1590:
/* Line 1792 of yacc.c  */
#line 10402 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1591:
/* Line 1792 of yacc.c  */
#line 10406 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1592:
/* Line 1792 of yacc.c  */
#line 10413 "parser.y"
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

  case 1593:
/* Line 1792 of yacc.c  */
#line 10423 "parser.y"
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

  case 1594:
/* Line 1792 of yacc.c  */
#line 10433 "parser.y"
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

  case 1595:
/* Line 1792 of yacc.c  */
#line 10443 "parser.y"
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

  case 1596:
/* Line 1792 of yacc.c  */
#line 10456 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1597:
/* Line 1792 of yacc.c  */
#line 10460 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1598:
/* Line 1792 of yacc.c  */
#line 10468 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1599:
/* Line 1792 of yacc.c  */
#line 10476 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1600:
/* Line 1792 of yacc.c  */
#line 10480 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1601:
/* Line 1792 of yacc.c  */
#line 10490 "parser.y"
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

  case 1602:
/* Line 1792 of yacc.c  */
#line 10505 "parser.y"
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

  case 1603:
/* Line 1792 of yacc.c  */
#line 10528 "parser.y"
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

  case 1604:
/* Line 1792 of yacc.c  */
#line 10548 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1605:
/* Line 1792 of yacc.c  */
#line 10555 "parser.y"
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

  case 1606:
/* Line 1792 of yacc.c  */
#line 10570 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1607:
/* Line 1792 of yacc.c  */
#line 10571 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1608:
/* Line 1792 of yacc.c  */
#line 10572 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1609:
/* Line 1792 of yacc.c  */
#line 10573 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1610:
/* Line 1792 of yacc.c  */
#line 10574 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1611:
/* Line 1792 of yacc.c  */
#line 10575 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1612:
/* Line 1792 of yacc.c  */
#line 10580 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1613:
/* Line 1792 of yacc.c  */
#line 10584 "parser.y"
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

  case 1614:
/* Line 1792 of yacc.c  */
#line 10601 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1615:
/* Line 1792 of yacc.c  */
#line 10605 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1616:
/* Line 1792 of yacc.c  */
#line 10611 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1617:
/* Line 1792 of yacc.c  */
#line 10612 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1618:
/* Line 1792 of yacc.c  */
#line 10613 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1619:
/* Line 1792 of yacc.c  */
#line 10614 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1620:
/* Line 1792 of yacc.c  */
#line 10615 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1621:
/* Line 1792 of yacc.c  */
#line 10616 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 10617 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1623:
/* Line 1792 of yacc.c  */
#line 10624 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1624:
/* Line 1792 of yacc.c  */
#line 10628 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 10632 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1626:
/* Line 1792 of yacc.c  */
#line 10636 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1627:
/* Line 1792 of yacc.c  */
#line 10640 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1628:
/* Line 1792 of yacc.c  */
#line 10644 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1629:
/* Line 1792 of yacc.c  */
#line 10648 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1630:
/* Line 1792 of yacc.c  */
#line 10652 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1631:
/* Line 1792 of yacc.c  */
#line 10656 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1632:
/* Line 1792 of yacc.c  */
#line 10660 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1644:
/* Line 1792 of yacc.c  */
#line 10687 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 10691 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1646:
/* Line 1792 of yacc.c  */
#line 10695 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1647:
/* Line 1792 of yacc.c  */
#line 10702 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1648:
/* Line 1792 of yacc.c  */
#line 10706 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 10710 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1650:
/* Line 1792 of yacc.c  */
#line 10717 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1651:
/* Line 1792 of yacc.c  */
#line 10724 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1652:
/* Line 1792 of yacc.c  */
#line 10731 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 10741 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1654:
/* Line 1792 of yacc.c  */
#line 10748 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1655:
/* Line 1792 of yacc.c  */
#line 10758 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1656:
/* Line 1792 of yacc.c  */
#line 10765 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1657:
/* Line 1792 of yacc.c  */
#line 10776 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1658:
/* Line 1792 of yacc.c  */
#line 10784 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1659:
/* Line 1792 of yacc.c  */
#line 10785 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1660:
/* Line 1792 of yacc.c  */
#line 10789 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1661:
/* Line 1792 of yacc.c  */
#line 10790 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1662:
/* Line 1792 of yacc.c  */
#line 10794 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1663:
/* Line 1792 of yacc.c  */
#line 10795 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1664:
/* Line 1792 of yacc.c  */
#line 10800 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1665:
/* Line 1792 of yacc.c  */
#line 10804 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1666:
/* Line 1792 of yacc.c  */
#line 10811 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1667:
/* Line 1792 of yacc.c  */
#line 10815 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 10822 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 10823 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 10824 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 10828 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 10829 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1673:
/* Line 1792 of yacc.c  */
#line 10833 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1674:
/* Line 1792 of yacc.c  */
#line 10834 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1675:
/* Line 1792 of yacc.c  */
#line 10835 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1676:
/* Line 1792 of yacc.c  */
#line 10840 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1677:
/* Line 1792 of yacc.c  */
#line 10844 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1678:
/* Line 1792 of yacc.c  */
#line 10856 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1679:
/* Line 1792 of yacc.c  */
#line 10861 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1680:
/* Line 1792 of yacc.c  */
#line 10869 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1681:
/* Line 1792 of yacc.c  */
#line 10873 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1682:
/* Line 1792 of yacc.c  */
#line 10877 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1683:
/* Line 1792 of yacc.c  */
#line 10881 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 10885 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1685:
/* Line 1792 of yacc.c  */
#line 10889 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 10893 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1687:
/* Line 1792 of yacc.c  */
#line 10897 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 10903 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 10904 "parser.y"
    { (yyval) = cb_int1; }
    break;


/* Line 1792 of yacc.c  */
#line 18245 "parser.c"
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
#line 11075 "parser.y"

