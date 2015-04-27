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


/* Line 371 of yacc.c  */
#line 792 "parser.c"

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
     CENTER = 309,
     CF = 310,
     CH = 311,
     CHAINING = 312,
     CHARACTER = 313,
     CHARACTERS = 314,
     CLASS = 315,
     CLASSIFICATION = 316,
     CLOSE = 317,
     CODE = 318,
     CODE_SET = 319,
     COLLATING = 320,
     COL = 321,
     COLS = 322,
     COLUMN = 323,
     COLUMNS = 324,
     COMMA = 325,
     COMMAND_LINE = 326,
     COMMA_DELIM = 327,
     COMMIT = 328,
     COMMON = 329,
     COMP = 330,
     COMPUTE = 331,
     COMP_1 = 332,
     COMP_2 = 333,
     COMP_3 = 334,
     COMP_4 = 335,
     COMP_5 = 336,
     COMP_6 = 337,
     COMP_X = 338,
     CONCATENATE_FUNC = 339,
     CONDITION = 340,
     CONFIGURATION = 341,
     CONSTANT = 342,
     CONTAINS = 343,
     CONTENT = 344,
     CONTINUE = 345,
     CONTROL = 346,
     CONTROLS = 347,
     CONVERSION = 348,
     CONVERTING = 349,
     COPY = 350,
     CORRESPONDING = 351,
     COUNT = 352,
     CRT = 353,
     CRT_UNDER = 354,
     CURRENCY = 355,
     CURRENT_DATE_FUNC = 356,
     CURSOR = 357,
     CYCLE = 358,
     DATA = 359,
     DATE = 360,
     DAY = 361,
     DAY_OF_WEEK = 362,
     DE = 363,
     DEBUGGING = 364,
     DECIMAL_POINT = 365,
     DECLARATIVES = 366,
     DEFAULT = 367,
     DELETE = 368,
     DELIMITED = 369,
     DELIMITER = 370,
     DEPENDING = 371,
     DESCENDING = 372,
     DETAIL = 373,
     DISC = 374,
     DISK = 375,
     DISPLAY = 376,
     DISPLAY_OF_FUNC = 377,
     DIVIDE = 378,
     DIVISION = 379,
     DOWN = 380,
     DUPLICATES = 381,
     DYNAMIC = 382,
     EBCDIC = 383,
     EC = 384,
     ELSE = 385,
     END = 386,
     END_ACCEPT = 387,
     END_ADD = 388,
     END_CALL = 389,
     END_COMPUTE = 390,
     END_DELETE = 391,
     END_DISPLAY = 392,
     END_DIVIDE = 393,
     END_EVALUATE = 394,
     END_FUNCTION = 395,
     END_IF = 396,
     END_MULTIPLY = 397,
     END_PERFORM = 398,
     END_PROGRAM = 399,
     END_READ = 400,
     END_RETURN = 401,
     END_REWRITE = 402,
     END_SEARCH = 403,
     END_START = 404,
     END_STRING = 405,
     END_SUBTRACT = 406,
     END_UNSTRING = 407,
     END_WRITE = 408,
     ENTRY = 409,
     ENVIRONMENT = 410,
     ENVIRONMENT_NAME = 411,
     ENVIRONMENT_VALUE = 412,
     EOL = 413,
     EOP = 414,
     EOS = 415,
     EQUAL = 416,
     ERASE = 417,
     ERROR = 418,
     ESCAPE = 419,
     EVALUATE = 420,
     EVENT_STATUS = 421,
     EXCEPTION = 422,
     EXCEPTION_CONDITION = 423,
     EXCLUSIVE = 424,
     EXIT = 425,
     EXPONENTIATION = 426,
     EXTEND = 427,
     EXTERNAL = 428,
     FD = 429,
     FILE_CONTROL = 430,
     FILE_ID = 431,
     FILLER = 432,
     FINAL = 433,
     FIRST = 434,
     FLOAT_BINARY_128 = 435,
     FLOAT_BINARY_32 = 436,
     FLOAT_BINARY_64 = 437,
     FLOAT_DECIMAL_16 = 438,
     FLOAT_DECIMAL_34 = 439,
     FLOAT_DECIMAL_7 = 440,
     FLOAT_EXTENDED = 441,
     FLOAT_LONG = 442,
     FLOAT_SHORT = 443,
     FOOTING = 444,
     FOR = 445,
     FOREGROUND_COLOR = 446,
     FOREVER = 447,
     FORMATTED_DATE_FUNC = 448,
     FORMATTED_DATETIME_FUNC = 449,
     FORMATTED_TIME_FUNC = 450,
     FREE = 451,
     FROM = 452,
     FROM_CRT = 453,
     FULL = 454,
     FUNCTION = 455,
     FUNCTION_ID = 456,
     FUNCTION_NAME = 457,
     GENERATE = 458,
     GIVING = 459,
     GLOBAL = 460,
     GO = 461,
     GOBACK = 462,
     GREATER = 463,
     GREATER_OR_EQUAL = 464,
     GROUP = 465,
     HEADING = 466,
     HIGHLIGHT = 467,
     HIGH_VALUE = 468,
     ID = 469,
     IDENTIFICATION = 470,
     IF = 471,
     IGNORE = 472,
     IGNORING = 473,
     IN = 474,
     INDEX = 475,
     INDEXED = 476,
     INDICATE = 477,
     INITIALIZE = 478,
     INITIALIZED = 479,
     INITIATE = 480,
     INPUT = 481,
     INPUT_OUTPUT = 482,
     INSPECT = 483,
     INTO = 484,
     INTRINSIC = 485,
     INVALID = 486,
     INVALID_KEY = 487,
     IS = 488,
     I_O = 489,
     I_O_CONTROL = 490,
     JUSTIFIED = 491,
     KEPT = 492,
     KEY = 493,
     KEYBOARD = 494,
     LABEL = 495,
     LAST = 496,
     LEADING = 497,
     LEFT = 498,
     LEFTLINE = 499,
     LENGTH = 500,
     LENGTH_OF = 501,
     LESS = 502,
     LESS_OR_EQUAL = 503,
     LIMIT = 504,
     LIMITS = 505,
     LINAGE = 506,
     LINAGE_COUNTER = 507,
     LINE = 508,
     LINE_COUNTER = 509,
     LINES = 510,
     LINKAGE = 511,
     LITERAL = 512,
     LOCALE = 513,
     LOCALE_DATE_FUNC = 514,
     LOCALE_TIME_FUNC = 515,
     LOCALE_TIME_FROM_FUNC = 516,
     LOCAL_STORAGE = 517,
     LOCK = 518,
     LOWER = 519,
     LOWER_CASE_FUNC = 520,
     LOWLIGHT = 521,
     LOW_VALUE = 522,
     MANUAL = 523,
     MEMORY = 524,
     MERGE = 525,
     MINUS = 526,
     MNEMONIC_NAME = 527,
     MODE = 528,
     MOVE = 529,
     MULTIPLE = 530,
     MULTIPLY = 531,
     NAME = 532,
     NATIONAL = 533,
     NATIONAL_EDITED = 534,
     NATIONAL_OF_FUNC = 535,
     NATIVE = 536,
     NEAREST_AWAY_FROM_ZERO = 537,
     NEAREST_EVEN = 538,
     NEAREST_TOWARD_ZERO = 539,
     NEGATIVE = 540,
     NEXT = 541,
     NEXT_PAGE = 542,
     NO = 543,
     NO_ECHO = 544,
     NORMAL = 545,
     NOT = 546,
     NOT_END = 547,
     NOT_EOP = 548,
     NOT_EQUAL = 549,
     NOT_EXCEPTION = 550,
     NOT_INVALID_KEY = 551,
     NOT_OVERFLOW = 552,
     NOT_SIZE_ERROR = 553,
     NO_ADVANCING = 554,
     NUMBER = 555,
     NUMBERS = 556,
     NUMERIC = 557,
     NUMERIC_EDITED = 558,
     NUMVALC_FUNC = 559,
     OBJECT_COMPUTER = 560,
     OCCURS = 561,
     OF = 562,
     OFF = 563,
     OMITTED = 564,
     ON = 565,
     ONLY = 566,
     OPEN = 567,
     OPTIONAL = 568,
     OR = 569,
     ORDER = 570,
     ORGANIZATION = 571,
     OTHER = 572,
     OUTPUT = 573,
     OVERLINE = 574,
     PACKED_DECIMAL = 575,
     PADDING = 576,
     PAGE = 577,
     PAGE_COUNTER = 578,
     PARAGRAPH = 579,
     PERFORM = 580,
     PH = 581,
     PF = 582,
     PICTURE = 583,
     PICTURE_SYMBOL = 584,
     PLUS = 585,
     POINTER = 586,
     POSITION = 587,
     POSITIVE = 588,
     PRESENT = 589,
     PREVIOUS = 590,
     PRINTER = 591,
     PRINTING = 592,
     PROCEDURE = 593,
     PROCEDURES = 594,
     PROCEED = 595,
     PROGRAM = 596,
     PROGRAM_ID = 597,
     PROGRAM_NAME = 598,
     PROGRAM_POINTER = 599,
     PROHIBITED = 600,
     PROMPT = 601,
     QUOTE = 602,
     RANDOM = 603,
     RD = 604,
     READ = 605,
     READY_TRACE = 606,
     RECORD = 607,
     RECORDING = 608,
     RECORDS = 609,
     RECURSIVE = 610,
     REDEFINES = 611,
     REEL = 612,
     REFERENCE = 613,
     REFERENCES = 614,
     RELATIVE = 615,
     RELEASE = 616,
     REMAINDER = 617,
     REMOVAL = 618,
     RENAMES = 619,
     REPLACE = 620,
     REPLACING = 621,
     REPORT = 622,
     REPORTING = 623,
     REPORTS = 624,
     REPOSITORY = 625,
     REPO_FUNCTION = 626,
     REQUIRED = 627,
     RESERVE = 628,
     RESET = 629,
     RESET_TRACE = 630,
     RETURN = 631,
     RETURNING = 632,
     REVERSE_FUNC = 633,
     REVERSE_VIDEO = 634,
     REVERSED = 635,
     REWIND = 636,
     REWRITE = 637,
     RF = 638,
     RH = 639,
     RIGHT = 640,
     ROLLBACK = 641,
     ROUNDED = 642,
     RUN = 643,
     SAME = 644,
     SCREEN = 645,
     SCREEN_CONTROL = 646,
     SCROLL = 647,
     SD = 648,
     SEARCH = 649,
     SECTION = 650,
     SECURE = 651,
     SEGMENT_LIMIT = 652,
     SELECT = 653,
     SEMI_COLON = 654,
     SENTENCE = 655,
     SEPARATE = 656,
     SEQUENCE = 657,
     SEQUENTIAL = 658,
     SET = 659,
     SHARING = 660,
     SIGN = 661,
     SIGNED = 662,
     SIGNED_INT = 663,
     SIGNED_LONG = 664,
     SIGNED_SHORT = 665,
     SIZE = 666,
     SIZE_ERROR = 667,
     SORT = 668,
     SORT_MERGE = 669,
     SOURCE = 670,
     SOURCE_COMPUTER = 671,
     SPACE = 672,
     SPECIAL_NAMES = 673,
     STANDARD = 674,
     STANDARD_1 = 675,
     STANDARD_2 = 676,
     START = 677,
     STATIC = 678,
     STATUS = 679,
     STDCALL = 680,
     STEP = 681,
     STOP = 682,
     STRING = 683,
     SUBSTITUTE_FUNC = 684,
     SUBSTITUTE_CASE_FUNC = 685,
     SUBTRACT = 686,
     SUM = 687,
     SUPPRESS = 688,
     SYMBOLIC = 689,
     SYNCHRONIZED = 690,
     SYSTEM_DEFAULT = 691,
     TAB = 692,
     TALLYING = 693,
     TAPE = 694,
     TERMINATE = 695,
     TEST = 696,
     THAN = 697,
     THEN = 698,
     THRU = 699,
     TIME = 700,
     TIMEOUT = 701,
     TIMES = 702,
     TO = 703,
     TOK_AMPER = 704,
     TOK_CLOSE_PAREN = 705,
     TOK_COLON = 706,
     TOK_DIV = 707,
     TOK_DOT = 708,
     TOK_EQUAL = 709,
     TOK_FALSE = 710,
     TOK_FILE = 711,
     TOK_GREATER = 712,
     TOK_INITIAL = 713,
     TOK_LESS = 714,
     TOK_MINUS = 715,
     TOK_MUL = 716,
     TOK_NULL = 717,
     TOK_OVERFLOW = 718,
     TOK_OPEN_PAREN = 719,
     TOK_PLUS = 720,
     TOK_TRUE = 721,
     TOP = 722,
     TOWARD_GREATER = 723,
     TOWARD_LESSER = 724,
     TRAILING = 725,
     TRANSFORM = 726,
     TRIM_FUNC = 727,
     TRUNCATION = 728,
     TYPE = 729,
     UNDERLINE = 730,
     UNIT = 731,
     UNLOCK = 732,
     UNSIGNED = 733,
     UNSIGNED_INT = 734,
     UNSIGNED_LONG = 735,
     UNSIGNED_SHORT = 736,
     UNSTRING = 737,
     UNTIL = 738,
     UP = 739,
     UPDATE = 740,
     UPON = 741,
     UPON_ARGUMENT_NUMBER = 742,
     UPON_COMMAND_LINE = 743,
     UPON_ENVIRONMENT_NAME = 744,
     UPON_ENVIRONMENT_VALUE = 745,
     UPPER = 746,
     UPPER_CASE_FUNC = 747,
     USAGE = 748,
     USE = 749,
     USER = 750,
     USER_DEFAULT = 751,
     USER_FUNCTION_NAME = 752,
     USER_REPO_FUNCTION = 753,
     USING = 754,
     VALUE = 755,
     VARYING = 756,
     WAIT = 757,
     WHEN = 758,
     WHEN_COMPILED_FUNC = 759,
     WITH = 760,
     WORD = 761,
     WORDS = 762,
     WORKING_STORAGE = 763,
     WRITE = 764,
     YYYYDDD = 765,
     YYYYMMDD = 766,
     ZERO = 767,
     SHIFT_PREFER = 768
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
#line 1372 "parser.c"

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
#define YYLAST   8453

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  514
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  831
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1939
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2760

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   768

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
     505,   506,   507,   508,   509,   510,   511,   512,   513
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
     601,   606,   608,   610,   612,   620,   630,   631,   636,   640,
     644,   649,   650,   652,   654,   655,   661,   664,   667,   669,
     670,   675,   681,   684,   688,   690,   692,   696,   698,   701,
     706,   711,   716,   723,   725,   728,   729,   732,   735,   737,
     742,   746,   748,   750,   754,   757,   760,   763,   764,   767,
     771,   773,   776,   778,   780,   786,   787,   789,   791,   793,
     794,   801,   803,   806,   809,   810,   813,   814,   818,   819,
     823,   824,   827,   830,   831,   837,   841,   843,   845,   846,
     849,   852,   855,   857,   859,   861,   863,   865,   867,   869,
     871,   873,   879,   880,   882,   884,   889,   896,   906,   907,
     911,   912,   915,   916,   919,   923,   929,   935,   937,   939,
     941,   943,   947,   953,   954,   957,   959,   961,   963,   968,
     971,   974,   979,   983,   986,   989,   992,   994,   997,   998,
     999,  1005,  1006,  1007,  1010,  1013,  1017,  1020,  1022,  1023,
    1028,  1032,  1035,  1036,  1038,  1040,  1042,  1043,  1046,  1048,
    1051,  1054,  1058,  1060,  1062,  1064,  1066,  1068,  1070,  1072,
    1074,  1076,  1078,  1080,  1082,  1085,  1087,  1089,  1091,  1093,
    1095,  1097,  1099,  1101,  1103,  1109,  1112,  1115,  1116,  1119,
    1121,  1123,  1125,  1127,  1129,  1131,  1133,  1135,  1137,  1139,
    1141,  1143,  1145,  1147,  1150,  1154,  1155,  1158,  1161,  1163,
    1165,  1169,  1171,  1173,  1175,  1177,  1179,  1181,  1183,  1185,
    1187,  1189,  1191,  1193,  1195,  1197,  1199,  1201,  1203,  1205,
    1207,  1209,  1212,  1215,  1218,  1221,  1224,  1227,  1230,  1233,
    1236,  1239,  1241,  1243,  1245,  1247,  1249,  1251,  1253,  1255,
    1257,  1259,  1263,  1267,  1274,  1275,  1278,  1286,  1295,  1296,
    1299,  1300,  1303,  1304,  1308,  1309,  1313,  1314,  1316,  1318,
    1319,  1325,  1327,  1329,  1330,  1334,  1336,  1339,  1341,  1344,
    1347,  1348,  1350,  1352,  1356,  1358,  1359,  1365,  1367,  1370,
    1372,  1376,  1377,  1382,  1385,  1390,  1393,  1396,  1397,  1398,
    1404,  1405,  1406,  1412,  1413,  1414,  1420,  1421,  1424,  1425,
    1432,  1433,  1436,  1439,  1442,  1446,  1448,  1450,  1453,  1456,
    1458,  1460,  1462,  1464,  1467,  1469,  1474,  1476,  1479,  1484,
    1486,  1488,  1489,  1492,  1494,  1496,  1498,  1500,  1502,  1506,
    1511,  1516,  1521,  1525,  1526,  1529,  1530,  1536,  1537,  1540,
    1542,  1544,  1546,  1548,  1550,  1552,  1554,  1556,  1558,  1560,
    1562,  1564,  1566,  1568,  1570,  1572,  1574,  1578,  1580,  1582,
    1585,  1588,  1590,  1592,  1594,  1595,  1597,  1599,  1600,  1602,
    1604,  1609,  1611,  1614,  1617,  1619,  1622,  1624,  1626,  1628,
    1633,  1634,  1638,  1641,  1643,  1645,  1649,  1656,  1659,  1662,
    1664,  1667,  1670,  1671,  1674,  1676,  1678,  1681,  1685,  1688,
    1693,  1694,  1696,  1698,  1700,  1702,  1705,  1707,  1709,  1712,
    1714,  1719,  1722,  1726,  1727,  1728,  1734,  1735,  1737,  1740,
    1744,  1746,  1747,  1752,  1756,  1757,  1760,  1763,  1766,  1768,
    1770,  1773,  1776,  1778,  1780,  1782,  1784,  1786,  1788,  1790,
    1792,  1794,  1796,  1801,  1803,  1805,  1811,  1817,  1821,  1825,
    1827,  1829,  1831,  1833,  1835,  1837,  1839,  1841,  1844,  1847,
    1850,  1852,  1854,  1856,  1858,  1859,  1861,  1863,  1864,  1866,
    1868,  1872,  1875,  1876,  1877,  1878,  1888,  1889,  1894,  1895,
    1896,  1900,  1901,  1905,  1907,  1910,  1915,  1916,  1919,  1922,
    1923,  1927,  1931,  1936,  1941,  1945,  1946,  1948,  1949,  1952,
    1953,  1954,  1962,  1963,  1966,  1968,  1970,  1973,  1975,  1977,
    1978,  1985,  1986,  1989,  1992,  1994,  1995,  1997,  1998,  1999,
    2003,  2004,  2007,  2010,  2012,  2014,  2016,  2018,  2020,  2022,
    2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,
    2044,  2046,  2048,  2050,  2052,  2054,  2056,  2058,  2060,  2062,
    2064,  2066,  2068,  2070,  2072,  2074,  2076,  2078,  2080,  2082,
    2084,  2086,  2088,  2090,  2092,  2094,  2096,  2098,  2100,  2102,
    2104,  2106,  2108,  2111,  2114,  2115,  2120,  2127,  2131,  2135,
    2140,  2144,  2149,  2153,  2157,  2162,  2167,  2171,  2176,  2180,
    2185,  2191,  2195,  2200,  2204,  2208,  2210,  2212,  2214,  2217,
    2218,  2220,  2224,  2228,  2231,  2234,  2237,  2241,  2245,  2249,
    2250,  2252,  2253,  2257,  2258,  2261,  2263,  2266,  2268,  2270,
    2272,  2274,  2276,  2278,  2280,  2282,  2284,  2286,  2288,  2290,
    2295,  2297,  2299,  2301,  2303,  2305,  2308,  2310,  2312,  2316,
    2320,  2324,  2328,  2332,  2334,  2336,  2337,  2339,  2340,  2345,
    2350,  2356,  2363,  2364,  2367,  2368,  2370,  2371,  2375,  2379,
    2384,  2385,  2388,  2389,  2393,  2395,  2398,  2403,  2404,  2407,
    2408,  2413,  2420,  2421,  2423,  2425,  2427,  2428,  2429,  2433,
    2435,  2438,  2441,  2445,  2446,  2449,  2452,  2455,  2456,  2460,
    2463,  2468,  2470,  2472,  2474,  2476,  2477,  2480,  2481,  2484,
    2485,  2487,  2488,  2492,  2494,  2497,  2498,  2502,  2505,  2509,
    2510,  2512,  2516,  2520,  2523,  2524,  2529,  2534,  2535,  2537,
    2539,  2541,  2542,  2547,  2551,  2554,  2556,  2559,  2560,  2562,
    2563,  2568,  2572,  2576,  2580,  2584,  2589,  2592,  2597,  2599,
    2600,  2604,  2610,  2611,  2614,  2617,  2620,  2623,  2624,  2627,
    2629,  2631,  2632,  2635,  2636,  2638,  2640,  2643,  2645,  2648,
    2651,  2653,  2655,  2658,  2661,  2663,  2665,  2667,  2669,  2671,
    2675,  2679,  2683,  2687,  2688,  2690,  2691,  2696,  2701,  2708,
    2715,  2724,  2733,  2734,  2736,  2737,  2741,  2744,  2745,  2750,
    2753,  2755,  2759,  2761,  2763,  2765,  2768,  2770,  2772,  2775,
    2778,  2782,  2785,  2789,  2791,  2795,  2798,  2800,  2802,  2804,
    2805,  2808,  2809,  2811,  2812,  2816,  2817,  2820,  2822,  2825,
    2827,  2829,  2831,  2832,  2835,  2836,  2840,  2842,  2843,  2847,
    2849,  2850,  2854,  2858,  2859,  2863,  2866,  2867,  2874,  2878,
    2881,  2883,  2884,  2886,  2887,  2891,  2897,  2898,  2901,  2902,
    2906,  2910,  2911,  2914,  2916,  2919,  2924,  2926,  2928,  2930,
    2932,  2934,  2936,  2938,  2939,  2943,  2944,  2948,  2950,  2953,
    2954,  2958,  2961,  2963,  2965,  2967,  2970,  2972,  2974,  2976,
    2977,  2981,  2984,  2990,  2992,  2995,  2998,  3001,  3003,  3005,
    3007,  3010,  3012,  3015,  3020,  3023,  3024,  3026,  3028,  3030,
    3032,  3037,  3038,  3041,  3045,  3049,  3050,  3054,  3055,  3059,
    3063,  3068,  3069,  3074,  3079,  3086,  3087,  3089,  3090,  3094,
    3099,  3105,  3107,  3109,  3111,  3113,  3114,  3118,  3119,  3123,
    3126,  3128,  3129,  3133,  3136,  3137,  3142,  3145,  3146,  3148,
    3150,  3152,  3154,  3158,  3159,  3162,  3164,  3168,  3172,  3173,
    3177,  3179,  3181,  3183,  3187,  3195,  3196,  3201,  3209,  3210,
    3213,  3214,  3217,  3220,  3224,  3228,  3232,  3235,  3236,  3240,
    3242,  3244,  3245,  3247,  3249,  3250,  3254,  3257,  3259,  3260,
    3265,  3270,  3271,  3273,  3274,  3279,  3284,  3285,  3288,  3292,
    3293,  3295,  3297,  3298,  3303,  3308,  3315,  3316,  3319,  3320,
    3323,  3325,  3328,  3332,  3333,  3335,  3336,  3340,  3342,  3344,
    3346,  3348,  3350,  3352,  3354,  3356,  3358,  3360,  3365,  3369,
    3371,  3374,  3377,  3380,  3383,  3386,  3389,  3392,  3395,  3398,
    3403,  3407,  3412,  3414,  3417,  3421,  3423,  3426,  3430,  3434,
    3435,  3439,  3440,  3448,  3449,  3455,  3456,  3459,  3460,  3463,
    3464,  3468,  3469,  3472,  3477,  3478,  3481,  3486,  3487,  3492,
    3497,  3498,  3502,  3503,  3508,  3510,  3512,  3514,  3517,  3520,
    3523,  3526,  3528,  3530,  3533,  3535,  3536,  3538,  3539,  3544,
    3547,  3548,  3551,  3556,  3561,  3562,  3564,  3566,  3568,  3570,
    3572,  3573,  3578,  3584,  3586,  3589,  3591,  3595,  3599,  3600,
    3605,  3606,  3608,  3609,  3614,  3619,  3626,  3633,  3634,  3636,
    3639,  3640,  3642,  3643,  3647,  3649,  3652,  3653,  3657,  3663,
    3664,  3668,  3671,  3672,  3674,  3676,  3677,  3682,  3689,  3690,
    3694,  3696,  3700,  3703,  3706,  3709,  3713,  3714,  3718,  3719,
    3723,  3724,  3728,  3729,  3731,  3732,  3736,  3738,  3740,  3742,
    3744,  3746,  3754,  3755,  3757,  3759,  3761,  3763,  3765,  3767,
    3772,  3774,  3777,  3779,  3782,  3786,  3787,  3789,  3792,  3794,
    3798,  3800,  3802,  3807,  3809,  3811,  3813,  3814,  3819,  3825,
    3826,  3829,  3830,  3835,  3839,  3843,  3845,  3847,  3849,  3851,
    3852,  3854,  3857,  3858,  3861,  3862,  3865,  3868,  3869,  3872,
    3873,  3876,  3879,  3880,  3883,  3884,  3887,  3890,  3891,  3894,
    3895,  3898,  3901,  3903,  3906,  3908,  3910,  3913,  3916,  3919,
    3921,  3923,  3926,  3929,  3932,  3933,  3936,  3937,  3940,  3941,
    3944,  3946,  3948,  3949,  3952,  3954,  3957,  3960,  3962,  3964,
    3966,  3968,  3970,  3972,  3974,  3976,  3978,  3980,  3982,  3984,
    3986,  3988,  3990,  3992,  3994,  3996,  3998,  4000,  4002,  4004,
    4006,  4008,  4010,  4013,  4015,  4017,  4019,  4021,  4023,  4025,
    4027,  4031,  4032,  4034,  4036,  4040,  4044,  4046,  4050,  4054,
    4056,  4060,  4062,  4065,  4068,  4070,  4074,  4076,  4078,  4082,
    4084,  4088,  4090,  4094,  4096,  4099,  4102,  4104,  4106,  4108,
    4111,  4113,  4115,  4117,  4120,  4122,  4123,  4126,  4128,  4130,
    4132,  4136,  4138,  4140,  4143,  4145,  4147,  4149,  4152,  4154,
    4156,  4158,  4160,  4162,  4164,  4167,  4169,  4171,  4175,  4177,
    4180,  4182,  4184,  4186,  4188,  4191,  4194,  4197,  4202,  4206,
    4208,  4210,  4213,  4215,  4217,  4219,  4221,  4223,  4225,  4227,
    4230,  4233,  4236,  4238,  4240,  4242,  4244,  4246,  4248,  4250,
    4252,  4254,  4256,  4258,  4260,  4262,  4264,  4266,  4268,  4270,
    4272,  4274,  4276,  4278,  4280,  4282,  4284,  4286,  4288,  4291,
    4293,  4297,  4300,  4303,  4305,  4307,  4309,  4313,  4316,  4319,
    4321,  4323,  4327,  4331,  4336,  4342,  4344,  4346,  4348,  4350,
    4352,  4354,  4356,  4358,  4360,  4362,  4364,  4366,  4369,  4371,
    4375,  4377,  4379,  4381,  4383,  4385,  4387,  4389,  4392,  4398,
    4404,  4410,  4415,  4421,  4427,  4433,  4436,  4439,  4441,  4443,
    4445,  4447,  4449,  4451,  4453,  4455,  4457,  4459,  4461,  4462,
    4467,  4473,  4474,  4478,  4481,  4483,  4487,  4491,  4493,  4497,
    4499,  4503,  4504,  4505,  4507,  4508,  4510,  4511,  4513,  4514,
    4517,  4518,  4521,  4522,  4524,  4526,  4527,  4529,  4530,  4532,
    4535,  4536,  4539,  4540,  4544,  4546,  4548,  4550,  4552,  4554,
    4556,  4558,  4560,  4561,  4564,  4566,  4568,  4570,  4572,  4574,
    4576,  4578,  4580,  4582,  4584,  4586,  4588,  4590,  4592,  4594,
    4596,  4598,  4600,  4602,  4604,  4606,  4608,  4610,  4612,  4614,
    4616,  4618,  4620,  4622,  4624,  4626,  4628,  4630,  4632,  4634,
    4636,  4638,  4640,  4642,  4644,  4646,  4648,  4650,  4652,  4654,
    4656,  4658,  4660,  4662,  4664,  4666,  4668,  4670,  4672,  4674,
    4676,  4678,  4680,  4682,  4684,  4686,  4688,  4690,  4692,  4694,
    4696,  4698,  4700,  4702,  4704,  4705,  4707,  4708,  4710,  4711,
    4713,  4714,  4716,  4717,  4719,  4720,  4722,  4723,  4725,  4726,
    4728,  4729,  4731,  4732,  4734,  4735,  4737,  4738,  4740,  4741,
    4743,  4744,  4746,  4747,  4749,  4750,  4752,  4753,  4755,  4758,
    4759,  4761,  4762,  4764,  4765,  4767,  4768,  4770,  4771,  4773,
    4775,  4776,  4778,  4779,  4781,  4783,  4784,  4787,  4790,  4791,
    4793,  4794,  4796,  4797,  4799,  4800,  4802,  4804,  4805,  4807,
    4808,  4810,  4811,  4814,  4816,  4818,  4819,  4821,  4822,  4824,
    4825,  4827,  4828,  4830,  4831,  4833,  4834,  4836,  4837,  4839,
    4840,  4842,  4845,  4846,  4848,  4849,  4851,  4852,  4854,  4855,
    4857,  4858,  4860,  4861,  4863,  4864,  4866,  4867,  4869,  4871,
    4872,  4874,  4875,  4879,  4880,  4882,  4883,  4885,  4888,  4890,
    4892,  4894,  4896,  4898,  4900,  4902,  4904,  4906,  4908,  4910,
    4912,  4914,  4916,  4918,  4920,  4922,  4924,  4926,  4928,  4930,
    4932,  4934,  4937,  4940,  4942,  4944,  4946,  4948,  4950,  4952,
    4955,  4957,  4961,  4964,  4966,  4968,  4970,  4973,  4975,  4978,
    4980,  4983,  4985,  4988,  4990,  4993,  4995,  4998,  5000,  5003
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     515,     0,    -1,    -1,   516,   517,    -1,   520,    -1,   518,
      -1,   519,    -1,   518,   519,    -1,   522,    -1,   524,    -1,
      -1,   521,   530,    -1,   534,   530,   525,   526,    -1,   534,
     530,   525,   527,    -1,   536,   530,   528,    -1,    -1,   523,
      -1,   525,   523,    -1,    -1,   527,    -1,   144,   537,   453,
      -1,    -1,   529,    -1,   140,   537,   453,    -1,    -1,    -1,
      -1,   542,   543,   544,   606,   607,   609,   608,   645,   531,
     655,   656,   657,   532,   686,   743,   745,   747,   802,   533,
     816,    -1,    -1,   342,   453,   537,   538,   535,   539,   453,
      -1,   201,   453,   537,   538,   453,    -1,   343,    -1,   257,
      -1,    -1,    26,   257,    -1,    -1,  1287,   540,  1301,    -1,
      74,    -1,    74,   541,    -1,   541,    -1,   173,    -1,   458,
      -1,   355,    -1,    -1,   155,   124,   453,    -1,    -1,    86,
     395,   453,    -1,    -1,   544,   545,    -1,   546,    -1,   550,
      -1,   569,    -1,   570,    -1,   561,    -1,    -1,   416,   453,
     547,   548,    -1,    -1,   560,   549,   453,    -1,    -1,  1317,
     109,   273,    -1,    -1,   305,   453,   551,   552,    -1,    -1,
     560,   453,    -1,   560,   553,   453,    -1,   553,   453,    -1,
     554,    -1,   553,   554,    -1,   555,    -1,   556,    -1,   557,
      -1,   558,    -1,   269,   411,  1287,  1237,  1330,    -1,  1336,
    1287,  1204,    -1,   397,  1287,  1237,    -1,  1275,    61,  1287,
     559,    -1,  1204,    -1,   258,    -1,   496,    -1,   436,    -1,
     506,    -1,   560,   506,    -1,    -1,   370,   453,   562,   563,
      -1,    -1,   564,   453,    -1,   564,     1,   453,    -1,   565,
      -1,   564,   565,    -1,   200,     9,   230,    -1,   200,   566,
     567,    -1,   200,   568,   230,    -1,   371,    -1,   498,    -1,
      -1,    26,   257,    -1,   371,    -1,   568,   371,    -1,   418,
     453,    -1,   571,   453,    -1,   571,     1,   453,    -1,   572,
      -1,   571,   572,    -1,   573,    -1,   578,    -1,   587,    -1,
     597,    -1,   594,    -1,   598,    -1,   600,    -1,   601,    -1,
     602,    -1,   603,    -1,   604,    -1,   605,    -1,    -1,   506,
     574,   575,    -1,  1287,    98,    -1,  1237,  1287,  1208,    -1,
    1287,  1208,   576,    -1,   577,    -1,    -1,   577,    -1,  1053,
    1298,  1208,    -1,   577,  1053,  1298,  1208,    -1,    -1,    11,
    1208,   579,  1287,   580,    -1,   281,    -1,   420,    -1,   421,
      -1,   128,    -1,    28,    -1,   581,    -1,   582,    -1,   581,
     582,    -1,   585,    -1,   585,   444,   585,    -1,    -1,   585,
      17,   583,   584,    -1,   585,    -1,   584,    17,   585,    -1,
     257,    -1,   417,    -1,   512,    -1,   347,    -1,   213,    -1,
     267,    -1,   417,    -1,   512,    -1,   589,   588,    -1,    -1,
     219,   506,    -1,   434,  1276,   590,    -1,   591,    -1,   590,
     591,    -1,   592,  1288,   593,    -1,  1209,    -1,   592,  1209,
      -1,  1238,    -1,   593,  1238,    -1,    60,  1208,  1287,   595,
      -1,   596,    -1,   595,   596,    -1,  1240,    -1,  1240,   444,
    1240,    -1,   258,  1208,  1287,   257,    -1,   100,  1304,  1287,
     257,   599,    -1,    -1,  1317,   329,   257,    -1,   110,  1287,
      70,    -1,   302,   406,  1287,   470,   401,    -1,   102,  1287,
    1203,    -1,    98,   424,  1287,  1203,    -1,   391,  1287,  1203,
      -1,   166,  1287,  1203,    -1,    -1,   227,   395,   453,    -1,
      -1,   175,   453,    -1,    -1,   235,   453,    -1,    -1,   609,
     610,    -1,    -1,   398,  1261,  1208,   611,   612,   453,    -1,
     398,     1,   453,    -1,    -1,   612,   613,    -1,   614,    -1,
     620,    -1,   622,    -1,   624,    -1,   625,    -1,   627,    -1,
     631,    -1,   633,    -1,   634,    -1,   635,    -1,   640,    -1,
     641,    -1,   643,    -1,    29,  1314,   617,   616,   618,    -1,
      29,  1314,   617,   615,   619,    -1,    29,  1314,   617,   121,
     619,    -1,    29,  1314,   617,   239,   619,    -1,    29,  1314,
     617,   336,   619,    -1,   119,    -1,   120,    -1,   439,    -1,
     348,    -1,    -1,   253,     7,  1279,    -1,    -1,   173,    -1,
     127,    -1,   257,    -1,  1234,    -1,    -1,   257,    -1,  1234,
      -1,     4,  1293,  1287,   621,    -1,   403,    -1,   127,    -1,
     348,    -1,    19,  1318,  1289,  1287,  1203,  1255,   623,    -1,
      19,  1318,  1289,  1287,  1203,   636,   637,  1255,   623,    -1,
      -1,   433,   503,     9,  1241,    -1,   433,   503,   586,    -1,
    1319,  1287,   506,    -1,   626,   424,  1287,  1203,    -1,    -1,
     456,    -1,   413,    -1,    -1,   628,   263,  1293,  1287,   629,
      -1,   268,   630,    -1,    33,   630,    -1,   169,    -1,    -1,
     505,   263,   310,  1329,    -1,   505,   263,   310,   275,  1329,
      -1,   505,   386,    -1,   316,  1287,   632,    -1,   632,    -1,
     221,    -1,  1302,  1273,   403,    -1,   360,    -1,   253,   403,
      -1,   321,  1275,  1287,  1207,    -1,   352,   115,  1287,   420,
      -1,   352,  1289,  1287,  1203,    -1,   352,  1289,  1287,  1203,
     636,   637,    -1,   454,    -1,   415,  1287,    -1,    -1,   638,
     639,    -1,   637,   639,    -1,  1203,    -1,   360,  1289,  1287,
    1203,    -1,   373,   642,  1270,    -1,   288,    -1,  1237,    -1,
     405,  1317,   644,    -1,     9,  1299,    -1,   288,  1299,    -1,
     350,   311,    -1,    -1,   646,   453,    -1,   646,     1,   453,
      -1,   647,    -1,   646,   647,    -1,   648,    -1,   650,    -1,
     389,   649,  1270,  1280,  1193,    -1,    -1,   352,    -1,   413,
      -1,   414,    -1,    -1,   275,   651,  1279,  1310,  1277,   652,
      -1,   653,    -1,   652,   653,    -1,  1194,   654,    -1,    -1,
     332,  1237,    -1,    -1,   104,   124,   453,    -1,    -1,   456,
     395,   453,    -1,    -1,   657,   658,    -1,   659,   688,    -1,
      -1,   661,  1194,   660,   662,   453,    -1,   661,     1,   453,
      -1,   174,    -1,   393,    -1,    -1,   662,   663,    -1,  1287,
     173,    -1,  1287,   205,    -1,   664,    -1,   666,    -1,   670,
      -1,   671,    -1,   674,    -1,   675,    -1,   681,    -1,   682,
      -1,   683,    -1,    47,  1277,  1237,   669,   665,    -1,    -1,
     354,    -1,    59,    -1,   352,  1277,  1237,  1276,    -1,   352,
    1277,  1237,   448,  1237,  1276,    -1,   352,  1287,   501,  1282,
    1307,   668,   669,  1276,   667,    -1,    -1,   116,  1297,  1203,
      -1,    -1,  1281,  1237,    -1,    -1,   448,  1237,    -1,   240,
    1331,  1327,    -1,   500,   307,   672,  1287,   673,    -1,   500,
     307,   176,  1287,   673,    -1,   506,    -1,   214,    -1,   257,
      -1,  1234,    -1,   104,  1331,  1205,    -1,   251,  1287,  1207,
    1292,   676,    -1,    -1,   676,   677,    -1,   678,    -1,   679,
      -1,   680,    -1,  1317,   189,  1272,  1207,    -1,   467,  1207,
      -1,    48,  1207,    -1,   353,  1293,  1287,   506,    -1,    64,
    1287,   506,    -1,   684,   685,    -1,   367,  1287,    -1,   369,
    1269,    -1,  1208,    -1,   685,  1208,    -1,    -1,    -1,   508,
     395,   453,   687,   688,    -1,    -1,    -1,   689,   690,    -1,
     691,   453,    -1,   690,   691,   453,    -1,   690,   453,    -1,
     703,    -1,    -1,   693,   694,   692,   705,    -1,   693,     1,
     453,    -1,  1253,   506,    -1,    -1,   177,    -1,   506,    -1,
     506,    -1,    -1,  1287,   205,    -1,  1241,    -1,   246,   698,
      -1,   245,   698,    -1,    50,  1296,   698,    -1,  1231,    -1,
      41,    -1,    44,    -1,    43,    -1,    42,    -1,    40,    -1,
     702,    -1,   714,    -1,   715,    -1,   699,    -1,   700,    -1,
     701,    -1,     1,   453,    -1,   181,    -1,   185,    -1,   182,
      -1,   183,    -1,   180,    -1,   184,    -1,   186,    -1,   331,
      -1,   344,    -1,   693,   695,    87,   696,   704,    -1,  1271,
     697,    -1,   197,   506,    -1,    -1,   705,   706,    -1,   707,
      -1,   708,    -1,   710,    -1,   711,    -1,   712,    -1,   716,
      -1,   719,    -1,   731,    -1,   732,    -1,   734,    -1,   735,
      -1,   736,    -1,   741,    -1,   742,    -1,   356,  1231,    -1,
    1287,   173,   709,    -1,    -1,    26,   257,    -1,  1287,   205,
      -1,   328,    -1,   713,    -1,   493,  1287,   713,    -1,    39,
      -1,    75,    -1,   714,    -1,   715,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,   121,    -1,   220,
      -1,   320,    -1,   331,    -1,   344,    -1,   410,    -1,   408,
      -1,   409,    -1,   481,    -1,   479,    -1,   480,    -1,    41,
    1305,    -1,    41,   478,    -1,    44,  1305,    -1,    44,   478,
      -1,    43,  1305,    -1,    43,   478,    -1,    42,  1305,    -1,
      42,   478,    -1,    40,  1305,    -1,    40,   478,    -1,   181,
      -1,   182,    -1,   180,    -1,   183,    -1,   184,    -1,   278,
      -1,    77,    -1,   188,    -1,    78,    -1,   187,    -1,  1306,
     242,  1265,    -1,  1306,   470,  1265,    -1,   306,  1237,   720,
    1312,   722,   718,    -1,    -1,   426,  1237,    -1,   306,  1237,
     720,  1312,   722,   725,   728,    -1,   306,   127,   723,   721,
     720,   724,   725,   728,    -1,    -1,   448,  1237,    -1,    -1,
     197,  1237,    -1,    -1,   116,  1297,  1203,    -1,    -1,    53,
    1282,   506,    -1,    -1,   224,    -1,   726,    -1,    -1,   726,
     727,  1289,  1287,  1202,    -1,    27,    -1,   117,    -1,    -1,
     221,  1274,   729,    -1,   730,    -1,   729,   730,    -1,   506,
      -1,   236,  1303,    -1,   435,   733,    -1,    -1,   243,    -1,
     385,    -1,    45,  1315,   512,    -1,    36,    -1,    -1,   500,
    1288,   738,   737,   740,    -1,   739,    -1,   738,   739,    -1,
    1241,    -1,  1241,   444,  1241,    -1,    -1,  1316,   455,  1287,
    1241,    -1,   364,  1234,    -1,   364,  1234,   444,  1234,    -1,
      21,   245,    -1,    21,   302,    -1,    -1,    -1,   262,   395,
     453,   744,   688,    -1,    -1,    -1,   256,   395,   453,   746,
     688,    -1,    -1,    -1,   367,   395,   453,   748,   749,    -1,
      -1,   749,   750,    -1,    -1,   349,  1195,   751,   752,   453,
     769,    -1,    -1,   752,   753,    -1,     1,   453,    -1,  1287,
     205,    -1,    63,  1287,  1221,    -1,   754,    -1,   759,    -1,
    1344,   755,    -1,   756,   757,    -1,   756,    -1,   757,    -1,
     178,    -1,   758,    -1,   757,   758,    -1,  1230,    -1,   322,
    1291,   760,   762,    -1,   761,    -1,   761,  1328,    -1,   761,
    1328,   761,  1321,    -1,  1239,    -1,  1230,    -1,    -1,   762,
     763,    -1,   764,    -1,   765,    -1,   766,    -1,   767,    -1,
     768,    -1,   211,  1287,   761,    -1,   179,  1337,  1287,   761,
      -1,   241,  1338,  1287,   761,    -1,   241,  1337,  1287,   761,
      -1,   189,  1287,   761,    -1,    -1,   769,   770,    -1,    -1,
     693,   694,   771,   772,   453,    -1,    -1,   772,   773,    -1,
     774,    -1,   778,    -1,   786,    -1,   791,    -1,   711,    -1,
     801,    -1,   716,    -1,   731,    -1,   792,    -1,   734,    -1,
     799,    -1,   781,    -1,   736,    -1,   784,    -1,   800,    -1,
     717,    -1,   785,    -1,   474,  1287,   775,    -1,  1342,    -1,
    1340,    -1,  1338,   776,    -1,  1339,   777,    -1,  1337,    -1,
    1341,    -1,  1343,    -1,    -1,  1230,    -1,   178,    -1,    -1,
    1230,    -1,   178,    -1,   286,   210,  1287,   779,    -1,  1237,
      -1,   330,  1237,    -1,   465,  1237,    -1,   780,    -1,   286,
     322,    -1,   287,    -1,   322,    -1,   286,    -1,   432,  1296,
    1214,   782,    -1,    -1,   374,  1297,   783,    -1,   486,  1230,
      -1,  1230,    -1,   178,    -1,   334,   503,  1170,    -1,   501,
    1230,   197,  1216,    49,  1216,    -1,   787,   788,    -1,   253,
     789,    -1,   790,    -1,   330,  1239,    -1,   465,  1239,    -1,
      -1,   300,   233,    -1,   300,    -1,  1239,    -1,   286,   322,
      -1,   310,   286,   322,    -1,   793,   796,    -1,  1322,  1295,
     794,  1288,    -1,    -1,   795,    -1,   243,    -1,   385,    -1,
      54,    -1,   810,  1239,    -1,   797,    -1,   798,    -1,   798,
     797,    -1,  1239,    -1,   415,  1287,  1216,  1262,    -1,   210,
    1284,    -1,   493,  1287,   121,    -1,    -1,    -1,   390,   395,
     453,   803,   804,    -1,    -1,   805,    -1,   806,   453,    -1,
     805,   806,   453,    -1,   703,    -1,    -1,   693,   694,   807,
     808,    -1,   693,     1,   453,    -1,    -1,   808,   809,    -1,
      45,   253,    -1,    45,   390,    -1,    38,    -1,    46,    -1,
     162,   158,    -1,   162,   160,    -1,   212,    -1,   266,    -1,
     379,    -1,   475,    -1,   319,    -1,   244,    -1,    32,    -1,
     396,    -1,   372,    -1,   199,    -1,   346,    58,  1287,  1221,
      -1,   346,    -1,   458,    -1,   253,  1294,  1287,   812,  1223,
      -1,  1320,  1294,  1287,   813,  1223,    -1,   191,  1287,  1223,
      -1,    35,  1287,  1223,    -1,   712,    -1,   734,    -1,   815,
      -1,   731,    -1,   716,    -1,   736,    -1,   711,    -1,   814,
      -1,   499,  1230,    -1,   197,  1226,    -1,   448,  1230,    -1,
     330,    -1,   465,    -1,   271,    -1,   460,    -1,    -1,   810,
      -1,   811,    -1,    -1,   810,    -1,   811,    -1,   306,  1237,
    1312,    -1,  1287,   205,    -1,    -1,    -1,    -1,   338,   124,
     820,   828,   453,   817,   829,   818,   831,    -1,    -1,   819,
     842,   453,   831,    -1,    -1,    -1,   499,   821,   823,    -1,
      -1,    57,   822,   823,    -1,   824,    -1,   823,   824,    -1,
     825,   826,   827,   506,    -1,    -1,  1274,   358,    -1,  1274,
     500,    -1,    -1,   411,  1287,    32,    -1,   411,  1287,   112,
      -1,   478,   411,  1287,    32,    -1,   478,   411,  1287,  1237,
      -1,   411,  1287,  1237,    -1,    -1,   313,    -1,    -1,   377,
     506,    -1,    -1,    -1,   111,   453,   830,   831,   131,   111,
     453,    -1,    -1,   831,   832,    -1,   833,    -1,   836,    -1,
     842,   453,    -1,   837,    -1,   453,    -1,    -1,   506,   395,
     838,   453,   834,   835,    -1,    -1,  1124,   453,    -1,   506,
     453,    -1,   506,    -1,    -1,  1237,    -1,    -1,    -1,   840,
     841,   842,    -1,    -1,   843,   844,    -1,   842,   844,    -1,
     845,    -1,   861,    -1,   866,    -1,   870,    -1,   875,    -1,
     890,    -1,   893,    -1,   901,    -1,   897,    -1,   902,    -1,
     903,    -1,   908,    -1,   922,    -1,   926,    -1,   929,    -1,
     943,    -1,   947,    -1,   950,    -1,   953,    -1,   957,    -1,
     958,    -1,   962,    -1,   972,    -1,   975,    -1,   992,    -1,
     994,    -1,   997,    -1,  1001,    -1,  1007,    -1,  1019,    -1,
    1027,    -1,  1028,    -1,  1031,    -1,  1032,    -1,  1036,    -1,
    1041,    -1,  1042,    -1,  1050,    -1,  1065,    -1,  1075,    -1,
    1084,    -1,  1089,    -1,  1096,    -1,  1100,    -1,  1102,    -1,
    1105,    -1,  1108,    -1,  1112,    -1,  1139,    -1,   286,   400,
      -1,     1,  1266,    -1,    -1,     3,   846,   847,   860,    -1,
     848,   850,   854,   855,   856,  1147,    -1,  1230,   197,   849,
      -1,  1230,   197,  1321,    -1,  1230,   197,   105,   511,    -1,
    1230,   197,   105,    -1,  1230,   197,   106,   510,    -1,  1230,
     197,   106,    -1,  1230,   197,   107,    -1,  1230,   197,   164,
     238,    -1,  1230,   197,   167,   424,    -1,  1230,   197,   445,
      -1,  1230,   197,   495,   277,    -1,  1230,   197,    71,    -1,
    1230,   197,   157,  1147,    -1,  1230,   197,   155,  1219,  1147,
      -1,  1230,   197,    24,    -1,  1230,   197,    25,  1147,    -1,
    1230,   197,  1197,    -1,  1230,   197,   506,    -1,  1230,    -1,
     309,    -1,   255,    -1,   253,   300,    -1,    -1,   851,    -1,
    1272,   852,   853,    -1,  1272,   853,   852,    -1,  1272,   852,
      -1,  1272,   853,    -1,    30,  1219,    -1,   253,  1294,  1223,
      -1,  1320,  1294,  1223,    -1,   332,  1294,  1223,    -1,    -1,
     198,    -1,    -1,   273,  1287,    47,    -1,    -1,   505,   857,
      -1,   858,    -1,   857,   858,    -1,    32,    -1,   437,    -1,
      38,    -1,    46,    -1,    93,    -1,   199,    -1,   212,    -1,
     244,    -1,   264,    -1,   266,    -1,   289,    -1,   319,    -1,
     346,    58,  1287,  1221,    -1,   346,    -1,   372,    -1,   379,
      -1,   396,    -1,   475,    -1,   288,   859,    -1,   859,    -1,
     491,    -1,   191,  1287,  1223,    -1,    35,  1287,  1223,    -1,
     392,   484,  1169,    -1,   392,   125,  1169,    -1,   446,  1268,
    1224,    -1,   485,    -1,   112,    -1,    -1,   132,    -1,    -1,
       5,   862,   863,   865,    -1,  1212,   448,  1189,  1153,    -1,
    1212,   864,   204,  1189,  1153,    -1,    96,  1230,   448,  1230,
    1262,  1153,    -1,    -1,   448,  1213,    -1,    -1,   133,    -1,
      -1,    10,   867,   868,    -1,  1230,  1256,   869,    -1,  1183,
      59,  1257,   869,    -1,    -1,   377,  1211,    -1,    -1,    18,
     871,   872,    -1,   873,    -1,   872,   873,    -1,  1199,   448,
     874,  1199,    -1,    -1,   340,   448,    -1,    -1,    51,   876,
     877,   889,    -1,   878,  1222,   879,   884,   887,   888,    -1,
      -1,   423,    -1,   425,    -1,   272,    -1,    -1,    -1,   499,
     880,   881,    -1,   882,    -1,   881,   882,    -1,   883,   309,
      -1,   883,   826,  1213,    -1,    -1,  1274,   358,    -1,  1274,
      89,    -1,  1274,   500,    -1,    -1,   885,  1286,  1230,    -1,
     885,   886,    -1,   885,     6,  1296,  1230,    -1,   377,    -1,
     204,    -1,   462,    -1,   309,    -1,    -1,  1325,   839,    -1,
      -1,   295,   839,    -1,    -1,   134,    -1,    -1,    52,   891,
     892,    -1,  1221,    -1,   892,  1221,    -1,    -1,    62,   894,
     895,    -1,  1194,   896,    -1,   895,  1194,   896,    -1,    -1,
    1332,    -1,  1332,  1280,   363,    -1,  1317,   288,   381,    -1,
    1317,   263,    -1,    -1,    76,   898,   899,   900,    -1,  1189,
    1323,  1183,  1153,    -1,    -1,   135,    -1,    73,    -1,    90,
      -1,    -1,   113,   904,   905,   907,    -1,  1194,  1302,  1166,
      -1,   456,   906,    -1,  1194,    -1,   906,  1194,    -1,    -1,
     136,    -1,    -1,   121,   909,   910,   921,    -1,  1221,   489,
    1150,    -1,  1221,   490,  1150,    -1,  1221,   487,  1150,    -1,
    1221,   488,  1150,    -1,  1212,   914,   918,  1150,    -1,   911,
    1150,    -1,  1213,   505,   919,  1150,    -1,   913,    -1,    -1,
     911,   912,   913,    -1,  1213,   851,   915,   855,   917,    -1,
      -1,   486,  1197,    -1,   486,   506,    -1,   486,   336,    -1,
     486,    98,    -1,    -1,   486,   916,    -1,    98,    -1,    99,
      -1,    -1,   505,   919,    -1,    -1,   299,    -1,   920,    -1,
     919,   920,    -1,    38,    -1,    45,   253,    -1,    45,   390,
      -1,    46,    -1,    93,    -1,   162,   158,    -1,   162,   160,
      -1,   212,    -1,   266,    -1,   319,    -1,   379,    -1,   475,
      -1,   191,  1287,  1223,    -1,    35,  1287,  1223,    -1,   392,
     484,  1169,    -1,   392,   125,  1169,    -1,    -1,   137,    -1,
      -1,   123,   923,   924,   925,    -1,  1213,   229,  1189,  1153,
      -1,  1213,   229,  1213,   204,  1189,  1153,    -1,  1213,    49,
    1213,   204,  1189,  1153,    -1,  1213,   229,  1213,   204,  1190,
     362,  1190,  1153,    -1,  1213,    49,  1213,   204,  1190,   362,
    1190,  1153,    -1,    -1,   138,    -1,    -1,   154,   927,   928,
      -1,   257,   879,    -1,    -1,   165,   930,   931,   942,    -1,
     932,   934,    -1,   933,    -1,   932,    17,   933,    -1,  1171,
      -1,   466,    -1,   455,    -1,   935,   937,    -1,   935,    -1,
     936,    -1,   935,   936,    -1,   938,   839,    -1,   503,   317,
     839,    -1,   503,   939,    -1,   938,   503,   939,    -1,   940,
      -1,   939,    17,   940,    -1,  1172,   941,    -1,    21,    -1,
     466,    -1,   455,    -1,    -1,   444,  1171,    -1,    -1,   139,
      -1,    -1,   170,   944,   945,    -1,    -1,   341,   946,    -1,
     200,    -1,   325,   103,    -1,   325,    -1,   395,    -1,   324,
      -1,    -1,   885,  1213,    -1,    -1,   196,   948,   949,    -1,
    1210,    -1,    -1,   203,   951,   952,    -1,  1234,    -1,    -1,
     206,   954,   955,    -1,  1313,  1198,   956,    -1,    -1,   116,
    1297,  1230,    -1,   207,   946,    -1,    -1,   216,   959,  1170,
    1311,   960,   961,    -1,   839,   130,   839,    -1,   130,   839,
      -1,   839,    -1,    -1,   141,    -1,    -1,   223,   963,   964,
      -1,  1210,   965,   966,   967,   971,    -1,    -1,  1317,   177,
      -1,    -1,     9,  1313,   500,    -1,   970,  1313,   500,    -1,
      -1,   366,   968,    -1,   969,    -1,   968,   969,    -1,   970,
    1278,    49,  1213,    -1,    12,    -1,    15,    -1,   302,    -1,
      16,    -1,   303,    -1,   278,    -1,   279,    -1,    -1,  1311,
    1313,   112,    -1,    -1,   225,   973,   974,    -1,  1195,    -1,
     974,  1195,    -1,    -1,   228,   976,   977,    -1,   978,   979,
      -1,  1230,    -1,  1241,    -1,  1244,    -1,   980,   982,    -1,
     980,    -1,   982,    -1,   983,    -1,    -1,   438,   981,   984,
      -1,   366,   986,    -1,    94,  1219,   448,  1220,   990,    -1,
     985,    -1,   984,   985,    -1,  1219,   190,    -1,    59,   990,
      -1,     9,    -1,   242,    -1,   470,    -1,  1219,   990,    -1,
     987,    -1,   986,   987,    -1,    59,    49,  1219,   990,    -1,
     988,   989,    -1,    -1,     9,    -1,   242,    -1,   179,    -1,
     470,    -1,  1219,    49,  1220,   990,    -1,    -1,   990,   991,
      -1,    37,  1285,  1213,    -1,     8,  1285,  1213,    -1,    -1,
     270,   993,  1067,    -1,    -1,   274,   995,   996,    -1,  1213,
     448,  1210,    -1,    96,  1213,   448,  1210,    -1,    -1,   276,
     998,   999,  1000,    -1,  1213,    49,  1189,  1153,    -1,  1213,
      49,  1213,   204,  1189,  1153,    -1,    -1,   142,    -1,    -1,
     312,  1002,  1003,    -1,  1004,  1005,  1193,  1006,    -1,  1003,
    1004,  1005,  1193,  1006,    -1,   226,    -1,   318,    -1,   234,
      -1,   172,    -1,    -1,   405,  1317,   644,    -1,    -1,  1317,
     288,   381,    -1,  1317,   263,    -1,   380,    -1,    -1,   325,
    1008,  1009,    -1,  1013,  1014,    -1,    -1,  1014,  1010,   839,
    1011,    -1,  1014,  1012,    -1,    -1,   143,    -1,   143,    -1,
     453,    -1,  1199,    -1,  1199,   444,  1199,    -1,    -1,  1222,
     447,    -1,   192,    -1,  1015,   483,  1016,    -1,  1015,   501,
    1017,    -1,    -1,  1317,   441,  1144,    -1,   170,    -1,  1170,
      -1,  1018,    -1,  1017,     8,  1018,    -1,  1230,   197,  1213,
      49,  1213,   483,  1170,    -1,    -1,   350,  1020,  1021,  1026,
      -1,  1194,  1259,  1302,  1022,  1023,  1024,  1025,    -1,    -1,
     229,  1230,    -1,    -1,   218,   263,    -1,  1317,   263,    -1,
    1317,   237,   263,    -1,  1317,   288,   263,    -1,  1317,   217,
     263,    -1,  1317,   502,    -1,    -1,   238,  1287,  1230,    -1,
    1166,    -1,  1160,    -1,    -1,   145,    -1,   351,    -1,    -1,
     361,  1029,  1030,    -1,  1191,  1142,    -1,   375,    -1,    -1,
     376,  1033,  1034,  1035,    -1,  1194,  1302,  1022,  1159,    -1,
      -1,   146,    -1,    -1,   382,  1037,  1038,  1040,    -1,  1191,
    1142,  1039,  1166,    -1,    -1,  1317,   263,    -1,  1317,   288,
     263,    -1,    -1,   147,    -1,   386,    -1,    -1,   394,  1043,
    1044,  1049,    -1,  1192,  1045,  1046,  1047,    -1,     9,  1192,
    1046,   503,  1171,   839,    -1,    -1,   501,  1230,    -1,    -1,
     131,   839,    -1,  1048,    -1,  1048,  1047,    -1,   503,  1170,
     839,    -1,    -1,   148,    -1,    -1,   404,  1051,  1052,    -1,
    1055,    -1,  1056,    -1,  1059,    -1,  1060,    -1,  1061,    -1,
    1063,    -1,   310,    -1,   308,    -1,   484,    -1,   125,    -1,
     155,  1219,   448,  1219,    -1,  1227,    31,  1057,    -1,  1058,
      -1,  1057,  1058,    -1,    38,  1053,    -1,    46,  1053,    -1,
     212,  1053,    -1,   266,  1053,    -1,   379,  1053,    -1,   475,
    1053,    -1,   244,  1053,    -1,   319,  1053,    -1,  1210,   448,
     154,  1218,    -1,  1210,   448,  1213,    -1,  1210,  1054,    49,
    1213,    -1,  1062,    -1,  1061,  1062,    -1,  1196,   448,  1053,
      -1,  1064,    -1,  1063,  1064,    -1,  1210,   448,   466,    -1,
    1210,   448,   455,    -1,    -1,   413,  1066,  1067,    -1,    -1,
    1228,  1069,  1071,  1072,  1068,  1073,  1074,    -1,    -1,  1069,
    1297,   727,  1289,  1070,    -1,    -1,  1070,  1234,    -1,    -1,
    1335,  1283,    -1,    -1,  1319,  1287,  1203,    -1,    -1,   499,
    1193,    -1,   226,   338,  1287,  1013,    -1,    -1,   204,  1193,
      -1,   318,   338,  1287,  1013,    -1,    -1,   422,  1076,  1077,
    1083,    -1,  1194,  1079,  1078,  1166,    -1,    -1,  1317,  1334,
    1183,    -1,    -1,   238,  1287,  1080,  1230,    -1,   179,    -1,
     241,    -1,  1176,    -1,  1260,  1177,    -1,  1260,  1178,    -1,
    1260,  1179,    -1,  1260,  1180,    -1,  1081,    -1,  1082,    -1,
     291,  1176,    -1,   294,    -1,    -1,   149,    -1,    -1,   427,
     388,  1085,  1086,    -1,   427,  1088,    -1,    -1,   885,  1213,
      -1,  1317,   163,  1309,  1087,    -1,  1317,   290,  1309,  1087,
      -1,    -1,  1213,    -1,   257,    -1,   417,    -1,   512,    -1,
     347,    -1,    -1,   428,  1090,  1091,  1095,    -1,  1092,   229,
    1230,  1094,  1156,    -1,  1093,    -1,  1092,  1093,    -1,  1213,
      -1,   114,  1274,   411,    -1,   114,  1274,  1213,    -1,    -1,
    1317,   331,  1287,  1230,    -1,    -1,   150,    -1,    -1,   431,
    1097,  1098,  1099,    -1,  1212,   197,  1189,  1153,    -1,  1212,
     197,  1213,   204,  1189,  1153,    -1,    96,  1230,   197,  1230,
    1262,  1153,    -1,    -1,   151,    -1,   433,  1101,    -1,    -1,
     337,    -1,    -1,   440,  1103,  1104,    -1,  1195,    -1,  1104,
    1195,    -1,    -1,   471,  1106,  1107,    -1,  1230,   197,  1219,
     448,  1220,    -1,    -1,   477,  1109,  1110,    -1,  1194,  1111,
      -1,    -1,   352,    -1,   354,    -1,    -1,   482,  1113,  1114,
    1123,    -1,  1230,  1115,  1118,  1094,  1122,  1156,    -1,    -1,
     114,  1274,  1116,    -1,  1117,    -1,  1116,   314,  1117,    -1,
    1254,  1219,    -1,   229,  1119,    -1,  1118,  1119,    -1,  1230,
    1120,  1121,    -1,    -1,   115,  1282,  1230,    -1,    -1,    97,
    1282,  1230,    -1,    -1,   438,  1282,  1230,    -1,    -1,   152,
      -1,    -1,   494,  1125,  1126,    -1,  1127,    -1,  1130,    -1,
    1134,    -1,  1136,    -1,  1137,    -1,  1128,  1268,  1308,  1324,
    1300,  1297,  1129,    -1,    -1,   205,    -1,  1193,    -1,   226,
      -1,   318,    -1,   234,    -1,   172,    -1,  1280,   109,  1297,
    1131,    -1,  1132,    -1,  1131,  1132,    -1,  1200,    -1,     9,
     339,    -1,     9,  1133,  1234,    -1,    -1,   359,    -1,   359,
     307,    -1,   307,    -1,  1272,   341,  1135,    -1,   422,    -1,
     131,    -1,  1128,    37,   368,  1230,    -1,  1138,    -1,   168,
      -1,   129,    -1,    -1,   509,  1140,  1141,  1146,    -1,  1191,
    1142,  1143,  1039,  1145,    -1,    -1,   197,  1226,    -1,    -1,
    1144,  1267,  1223,  1290,    -1,  1144,  1267,  1197,    -1,  1144,
    1267,   322,    -1,    37,    -1,     8,    -1,  1166,    -1,  1163,
      -1,    -1,   153,    -1,  1148,  1149,    -1,    -1,   167,   839,
      -1,    -1,   295,   839,    -1,  1151,  1152,    -1,    -1,   167,
     839,    -1,    -1,   295,   839,    -1,  1154,  1155,    -1,    -1,
     412,   839,    -1,    -1,   298,   839,    -1,  1157,  1158,    -1,
      -1,   463,   839,    -1,    -1,   297,   839,    -1,  1161,  1162,
      -1,  1161,    -1,  1161,  1162,    -1,  1161,    -1,  1162,    -1,
     131,   839,    -1,   292,   839,    -1,  1164,  1165,    -1,  1164,
      -1,  1165,    -1,   159,   839,    -1,   293,   839,    -1,  1167,
    1168,    -1,    -1,   232,   839,    -1,    -1,   296,   839,    -1,
      -1,  1225,  1333,    -1,  1171,    -1,  1172,    -1,    -1,  1173,
    1174,    -1,  1175,    -1,  1174,   233,    -1,  1174,  1175,    -1,
    1213,    -1,   464,    -1,   450,    -1,   465,    -1,   460,    -1,
     461,    -1,   452,    -1,   171,    -1,  1176,    -1,  1177,    -1,
    1178,    -1,  1179,    -1,  1180,    -1,   294,    -1,   291,    -1,
      20,    -1,   314,    -1,   309,    -1,   302,    -1,    12,    -1,
      13,    -1,    14,    -1,   333,    -1,   285,    -1,   454,    -1,
     161,  1313,    -1,   457,    -1,   208,    -1,   459,    -1,   247,
      -1,   209,    -1,   248,    -1,  1183,    -1,  1181,  1182,  1183,
      -1,    -1,    72,    -1,   399,    -1,  1183,   465,  1184,    -1,
    1183,   460,  1184,    -1,  1184,    -1,  1184,   461,  1185,    -1,
    1184,   452,  1185,    -1,  1185,    -1,  1186,   171,  1185,    -1,
    1186,    -1,   465,  1187,    -1,   460,  1187,    -1,  1187,    -1,
     464,  1183,   450,    -1,  1216,    -1,   252,    -1,   252,  1326,
     506,    -1,   254,    -1,   254,  1326,   506,    -1,   323,    -1,
     323,  1326,   506,    -1,  1190,    -1,  1189,  1190,    -1,  1211,
    1262,    -1,  1234,    -1,  1234,    -1,  1194,    -1,  1193,  1194,
      -1,   506,    -1,   506,    -1,  1197,    -1,  1196,  1197,    -1,
     272,    -1,    -1,  1198,  1199,    -1,  1200,    -1,  1234,    -1,
    1201,    -1,  1201,  1326,  1201,    -1,   257,    -1,  1203,    -1,
    1202,  1203,    -1,  1234,    -1,   506,    -1,  1206,    -1,  1205,
    1206,    -1,   506,    -1,  1203,    -1,   257,    -1,   506,    -1,
     506,    -1,  1211,    -1,  1210,  1211,    -1,  1232,    -1,  1242,
      -1,     6,  1296,  1231,    -1,  1213,    -1,  1212,  1213,    -1,
    1230,    -1,  1241,    -1,  1244,    -1,  1188,    -1,   246,  1231,
      -1,   246,  1242,    -1,   246,  1244,    -1,     6,  1296,  1217,
    1218,    -1,     6,  1296,  1231,    -1,   272,    -1,  1216,    -1,
    1214,  1216,    -1,  1230,    -1,  1242,    -1,  1244,    -1,  1230,
      -1,  1242,    -1,  1244,    -1,  1188,    -1,   246,  1231,    -1,
     246,  1242,    -1,   246,  1244,    -1,   341,    -1,   154,    -1,
    1231,    -1,   257,    -1,  1230,    -1,  1242,    -1,  1230,    -1,
    1241,    -1,  1230,    -1,   257,    -1,  1230,    -1,   257,    -1,
    1244,    -1,  1227,    -1,  1237,    -1,   512,    -1,  1227,    -1,
    1239,    -1,  1227,    -1,  1237,    -1,  1230,    -1,  1241,    -1,
    1244,    -1,  1229,    -1,  1229,    -1,  1234,    -1,  1234,  1235,
      -1,  1231,    -1,  1234,  1235,  1236,    -1,  1234,  1235,    -1,
    1234,  1236,    -1,  1234,    -1,  1233,    -1,  1188,    -1,  1234,
    1235,  1236,    -1,  1234,  1235,    -1,  1234,  1236,    -1,  1234,
      -1,   506,    -1,   506,  1326,  1234,    -1,   464,  1181,   450,
      -1,   464,  1183,   451,   450,    -1,   464,  1183,   451,  1183,
     450,    -1,   257,    -1,   257,    -1,   257,    -1,   512,    -1,
     257,    -1,   417,    -1,   512,    -1,   347,    -1,   213,    -1,
     267,    -1,   462,    -1,  1242,    -1,     9,  1243,    -1,  1243,
      -1,  1242,   449,  1243,    -1,   257,    -1,   417,    -1,   512,
      -1,   347,    -1,   213,    -1,   267,    -1,   462,    -1,  1245,
    1248,    -1,  1246,   464,  1215,   450,  1248,    -1,  1247,   464,
    1181,   450,  1248,    -1,   472,   464,  1250,   450,  1248,    -1,
     304,   464,  1251,   450,    -1,   259,   464,  1252,   450,  1248,
      -1,   260,   464,  1252,   450,  1248,    -1,   261,   464,  1252,
     450,  1248,    -1,   202,  1249,    -1,   497,  1249,    -1,   101,
      -1,   504,    -1,   492,    -1,   265,    -1,   378,    -1,    84,
      -1,   193,    -1,   194,    -1,   195,    -1,   429,    -1,   430,
      -1,    -1,   464,  1183,   451,   450,    -1,   464,  1183,   451,
    1183,   450,    -1,    -1,   464,  1181,   450,    -1,   464,   450,
      -1,  1215,    -1,  1215,  1182,   242,    -1,  1215,  1182,   470,
      -1,  1215,    -1,  1215,  1182,  1215,    -1,  1183,    -1,  1183,
    1182,  1203,    -1,    -1,    -1,     9,    -1,    -1,  1335,    -1,
      -1,   224,    -1,    -1,   224,  1258,    -1,    -1,   448,  1220,
      -1,    -1,   286,    -1,   335,    -1,    -1,   291,    -1,    -1,
     313,    -1,   291,   313,    -1,    -1,   387,  1263,    -1,    -1,
     273,  1287,  1264,    -1,    34,    -1,   282,    -1,   283,    -1,
     284,    -1,   345,    -1,   468,    -1,   469,    -1,   473,    -1,
      -1,   401,  1275,    -1,   453,    -1,     3,    -1,     5,    -1,
      10,    -1,    18,    -1,    51,    -1,    52,    -1,    62,    -1,
      73,    -1,    76,    -1,    90,    -1,   113,    -1,   121,    -1,
     123,    -1,   130,    -1,   154,    -1,   165,    -1,   170,    -1,
     196,    -1,   203,    -1,   206,    -1,   207,    -1,   216,    -1,
     223,    -1,   225,    -1,   228,    -1,   270,    -1,   274,    -1,
     276,    -1,   286,    -1,   312,    -1,   325,    -1,   350,    -1,
     361,    -1,   376,    -1,   382,    -1,   386,    -1,   394,    -1,
     404,    -1,   413,    -1,   422,    -1,   427,    -1,   428,    -1,
     431,    -1,   433,    -1,   440,    -1,   471,    -1,   477,    -1,
     482,    -1,   509,    -1,   132,    -1,   133,    -1,   134,    -1,
     135,    -1,   136,    -1,   137,    -1,   138,    -1,   139,    -1,
     141,    -1,   142,    -1,   143,    -1,   145,    -1,   146,    -1,
     147,    -1,   148,    -1,   149,    -1,   150,    -1,   151,    -1,
     152,    -1,   153,    -1,    -1,     7,    -1,    -1,     8,    -1,
      -1,    22,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,
      30,    -1,    -1,    39,    -1,    -1,    49,    -1,    -1,    58,
      -1,    -1,    59,    -1,    -1,    88,    -1,    -1,   104,    -1,
      -1,   456,    -1,    -1,   190,    -1,    -1,   197,    -1,    -1,
     219,    -1,    -1,   315,    -1,   219,   315,    -1,    -1,   222,
      -1,    -1,   458,    -1,    -1,   229,    -1,    -1,   233,    -1,
      -1,   233,    -1,    22,    -1,    -1,   238,    -1,    -1,   253,
      -1,   255,    -1,    -1,   249,  1287,    -1,   250,  1269,    -1,
      -1,   255,    -1,    -1,   273,    -1,    -1,   300,    -1,    -1,
     300,    -1,   301,    -1,    -1,   307,    -1,    -1,   310,    -1,
      -1,   424,   233,    -1,   424,    -1,   233,    -1,    -1,   317,
      -1,    -1,   338,    -1,    -1,   341,    -1,    -1,   352,    -1,
      -1,   385,    -1,    -1,   406,    -1,    -1,   407,    -1,    -1,
     406,    -1,   406,   233,    -1,    -1,   411,    -1,    -1,   419,
      -1,    -1,   424,    -1,    -1,   439,    -1,    -1,   443,    -1,
      -1,   447,    -1,    -1,   448,    -1,    -1,   448,    -1,   499,
      -1,    -1,   503,    -1,    -1,   503,   404,   448,    -1,    -1,
     505,    -1,    -1,   352,    -1,    65,   402,    -1,   402,    -1,
      68,    -1,    66,    -1,    69,    -1,    67,    -1,  1320,    -1,
    1321,    -1,   454,    -1,   161,    -1,   167,    -1,   163,    -1,
     167,    -1,   463,    -1,   219,    -1,   307,    -1,   419,    -1,
     309,    -1,   253,    -1,   255,    -1,   352,    -1,   354,    -1,
      59,    -1,   507,    -1,   352,  1287,    -1,   354,  1269,    -1,
     357,    -1,   476,    -1,   253,    -1,   255,    -1,   411,    -1,
     245,    -1,   505,   126,    -1,   126,    -1,   341,    65,   402,
      -1,    65,   402,    -1,   402,    -1,   118,    -1,   108,    -1,
      91,   211,    -1,    56,    -1,    91,   189,    -1,    55,    -1,
     322,   211,    -1,   326,    -1,   322,   189,    -1,   327,    -1,
     367,   211,    -1,   384,    -1,   367,   189,    -1,   383,    -1,
      91,  1287,    -1,    92,  1269,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1371,  1371,  1371,  1403,  1404,  1408,  1409,  1413,  1414,
    1418,  1418,  1441,  1448,  1455,  1461,  1462,  1463,  1467,  1468,
    1472,  1496,  1497,  1501,  1535,  1541,  1553,  1527,  1563,  1562,
    1600,  1632,  1633,  1637,  1638,  1641,  1642,  1646,  1655,  1664,
    1665,  1669,  1673,  1682,  1683,  1691,  1692,  1702,  1703,  1707,
    1708,  1709,  1710,  1711,  1718,  1717,  1730,  1731,  1734,  1735,
    1749,  1748,  1758,  1759,  1760,  1761,  1765,  1766,  1770,  1771,
    1772,  1773,  1777,  1784,  1791,  1798,  1809,  1813,  1817,  1821,
    1828,  1829,  1836,  1835,  1846,  1847,  1848,  1855,  1856,  1860,
    1864,  1876,  1880,  1881,  1886,  1889,  1896,  1901,  1912,  1925,
    1926,  1934,  1935,  1939,  1940,  1941,  1942,  1943,  1944,  1945,
    1946,  1947,  1948,  1949,  1950,  1958,  1957,  1976,  1986,  1999,
    2007,  2010,  2011,  2015,  2025,  2041,  2040,  2064,  2070,  2076,
    2082,  2088,  2094,  2104,  2108,  2115,  2119,  2124,  2123,  2134,
    2138,  2145,  2146,  2147,  2148,  2149,  2150,  2154,  2155,  2162,
    2177,  2180,  2187,  2195,  2199,  2210,  2230,  2238,  2249,  2250,
    2256,  2277,  2278,  2282,  2286,  2307,  2330,  2412,  2415,  2424,
    2443,  2459,  2477,  2495,  2512,  2528,  2529,  2536,  2537,  2545,
    2546,  2556,  2557,  2562,  2561,  2582,  2592,  2593,  2597,  2598,
    2599,  2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,  2608,
    2609,  2616,  2622,  2632,  2645,  2658,  2674,  2675,  2676,  2677,
    2680,  2681,  2687,  2688,  2692,  2696,  2697,  2702,  2705,  2706,
    2713,  2721,  2722,  2723,  2730,  2759,  2797,  2799,  2804,  2814,
    2825,  2832,  2834,  2835,  2841,  2841,  2848,  2853,  2858,  2865,
    2866,  2867,  2871,  2882,  2883,  2887,  2892,  2897,  2902,  2913,
    2924,  2934,  2939,  2960,  2961,  2965,  2965,  2969,  2974,  2992,
    3003,  3010,  3011,  3017,  3025,  3026,  3027,  3033,  3034,  3035,
    3042,  3043,  3047,  3048,  3054,  3082,  3083,  3084,  3085,  3092,
    3091,  3107,  3108,  3112,  3115,  3116,  3122,  3123,  3131,  3132,
    3140,  3141,  3145,  3166,  3165,  3182,  3189,  3193,  3199,  3200,
    3204,  3214,  3229,  3230,  3231,  3232,  3233,  3234,  3235,  3236,
    3237,  3244,  3251,  3251,  3251,  3257,  3277,  3311,  3342,  3343,
    3350,  3351,  3355,  3356,  3363,  3374,  3379,  3390,  3391,  3395,
    3396,  3402,  3413,  3431,  3432,  3436,  3437,  3438,  3442,  3449,
    3456,  3465,  3477,  3529,  3544,  3545,  3549,  3561,  3603,  3605,
    3604,  3620,  3623,  3623,  3641,  3642,  3644,  3648,  3650,  3649,
    3684,  3697,  3705,  3710,  3716,  3725,  3735,  3738,  3750,  3751,
    3752,  3753,  3757,  3761,  3765,  3769,  3773,  3777,  3781,  3785,
    3789,  3793,  3797,  3801,  3805,  3816,  3817,  3821,  3822,  3826,
    3827,  3828,  3832,  3833,  3837,  3863,  3867,  3876,  3880,  3889,
    3890,  3891,  3892,  3893,  3894,  3895,  3896,  3897,  3898,  3899,
    3900,  3901,  3902,  3909,  3933,  3961,  3964,  3973,  3998,  4009,
    4010,  4014,  4018,  4022,  4026,  4030,  4034,  4038,  4042,  4046,
    4050,  4054,  4058,  4062,  4067,  4072,  4076,  4080,  4088,  4092,
    4096,  4104,  4108,  4112,  4116,  4120,  4124,  4128,  4132,  4136,
    4144,  4152,  4156,  4160,  4164,  4168,  4172,  4180,  4181,  4185,
    4186,  4192,  4198,  4210,  4228,  4229,  4238,  4259,  4280,  4281,
    4285,  4286,  4289,  4290,  4296,  4297,  4304,  4305,  4312,  4336,
    4337,  4354,  4355,  4358,  4359,  4366,  4367,  4372,  4383,  4394,
    4401,  4403,  4404,  4416,  4427,  4456,  4455,  4464,  4465,  4469,
    4470,  4473,  4474,  4487,  4500,  4521,  4530,  4544,  4546,  4545,
    4565,  4567,  4566,  4582,  4584,  4583,  4594,  4595,  4602,  4601,
    4630,  4631,  4632,  4639,  4645,  4649,  4650,  4656,  4663,  4664,
    4665,  4669,  4676,  4677,  4681,  4691,  4731,  4741,  4751,  4769,
    4770,  4773,  4774,  4779,  4780,  4781,  4782,  4783,  4787,  4798,
    4809,  4820,  4831,  4841,  4842,  4847,  4846,  4867,  4868,  4872,
    4873,  4874,  4875,  4876,  4877,  4878,  4879,  4880,  4881,  4882,
    4883,  4884,  4885,  4886,  4887,  4888,  4892,  4899,  4903,  4907,
    4908,  4909,  4916,  4920,  4927,  4930,  4935,  4942,  4945,  4950,
    4957,  4964,  4973,  4978,  4983,  4990,  4991,  4992,  4993,  4997,
    5005,  5006,  5007,  5014,  5018,  5025,  5033,  5037,  5045,  5049,
    5055,  5070,  5087,  5088,  5089,  5093,  5110,  5114,  5121,  5136,
    5139,  5141,  5145,  5149,  5153,  5160,  5180,  5184,  5185,  5189,
    5221,  5229,  5237,  5245,  5247,  5246,  5267,  5268,  5272,  5273,
    5278,  5280,  5279,  5336,  5354,  5355,  5359,  5363,  5367,  5371,
    5375,  5379,  5383,  5387,  5391,  5395,  5399,  5403,  5407,  5411,
    5415,  5419,  5423,  5428,  5432,  5436,  5441,  5446,  5451,  5456,
    5457,  5458,  5459,  5460,  5461,  5462,  5463,  5464,  5471,  5476,
    5485,  5486,  5490,  5491,  5496,  5499,  5503,  5511,  5514,  5518,
    5526,  5537,  5545,  5547,  5557,  5546,  5584,  5584,  5617,  5621,
    5620,  5634,  5633,  5653,  5654,  5659,  5666,  5668,  5672,  5682,
    5684,  5692,  5700,  5708,  5737,  5768,  5770,  5780,  5785,  5812,
    5814,  5813,  5850,  5851,  5855,  5856,  5857,  5874,  5875,  5886,
    5885,  5935,  5936,  5940,  5988,  6001,  6004,  6023,  6028,  6022,
    6041,  6041,  6071,  6078,  6079,  6080,  6081,  6082,  6083,  6084,
    6085,  6086,  6087,  6088,  6089,  6090,  6091,  6092,  6093,  6094,
    6095,  6096,  6097,  6098,  6099,  6100,  6101,  6102,  6103,  6104,
    6105,  6106,  6107,  6108,  6109,  6110,  6111,  6112,  6113,  6114,
    6115,  6116,  6117,  6118,  6119,  6120,  6121,  6122,  6123,  6124,
    6125,  6126,  6127,  6141,  6153,  6152,  6168,  6174,  6178,  6182,
    6187,  6192,  6197,  6202,  6206,  6210,  6214,  6218,  6223,  6227,
    6231,  6235,  6239,  6243,  6247,  6254,  6255,  6262,  6263,  6267,
    6268,  6272,  6273,  6274,  6275,  6276,  6280,  6284,  6285,  6288,
    6289,  6292,  6293,  6299,  6300,  6304,  6305,  6309,  6313,  6319,
    6323,  6327,  6331,  6335,  6339,  6343,  6347,  6351,  6355,  6359,
    6363,  6367,  6371,  6375,  6379,  6383,  6389,  6393,  6397,  6401,
    6405,  6409,  6413,  6420,  6421,  6425,  6429,  6447,  6446,  6455,
    6459,  6463,  6469,  6470,  6477,  6481,  6492,  6491,  6500,  6504,
    6516,  6517,  6525,  6524,  6533,  6534,  6538,  6544,  6544,  6551,
    6550,  6560,  6580,  6584,  6589,  6594,  6615,  6619,  6618,  6635,
    6636,  6641,  6649,  6673,  6675,  6679,  6688,  6701,  6704,  6708,
    6712,  6735,  6736,  6740,  6741,  6746,  6749,  6757,  6761,  6769,
    6773,  6784,  6783,  6791,  6795,  6806,  6805,  6813,  6818,  6826,
    6827,  6828,  6829,  6830,  6838,  6837,  6846,  6853,  6857,  6867,
    6878,  6896,  6895,  6904,  6908,  6912,  6917,  6925,  6929,  6940,
    6939,  6949,  6953,  6957,  6961,  6965,  6969,  6970,  6979,  6981,
    6980,  6988,  6997,  7004,  7008,  7012,  7016,  7026,  7028,  7032,
    7033,  7036,  7038,  7045,  7046,  7050,  7051,  7056,  7060,  7064,
    7068,  7072,  7076,  7080,  7084,  7088,  7092,  7096,  7100,  7104,
    7108,  7112,  7116,  7123,  7127,  7138,  7137,  7146,  7150,  7154,
    7158,  7162,  7169,  7173,  7184,  7183,  7192,  7211,  7210,  7234,
    7242,  7243,  7248,  7259,  7270,  7284,  7288,  7295,  7296,  7301,
    7310,  7319,  7324,  7333,  7334,  7339,  7401,  7402,  7403,  7407,
    7408,  7412,  7416,  7427,  7426,  7438,  7439,  7460,  7474,  7496,
    7518,  7538,  7561,  7562,  7570,  7569,  7578,  7589,  7588,  7597,
    7610,  7609,  7622,  7631,  7635,  7646,  7662,  7661,  7670,  7674,
    7678,  7685,  7689,  7700,  7699,  7707,  7715,  7716,  7720,  7721,
    7722,  7727,  7730,  7737,  7741,  7749,  7756,  7757,  7758,  7759,
    7760,  7761,  7762,  7767,  7770,  7780,  7779,  7787,  7794,  7807,
    7806,  7815,  7819,  7823,  7827,  7834,  7835,  7836,  7837,  7844,
    7843,  7857,  7867,  7876,  7877,  7881,  7882,  7883,  7884,  7885,
    7886,  7890,  7891,  7895,  7900,  7907,  7908,  7909,  7910,  7911,
    7915,  7943,  7946,  7953,  7957,  7967,  7966,  7979,  7978,  7986,
    7990,  8001,  8000,  8009,  8013,  8020,  8024,  8035,  8034,  8042,
    8063,  8087,  8088,  8089,  8090,  8094,  8095,  8099,  8100,  8101,
    8102,  8114,  8113,  8124,  8130,  8129,  8140,  8148,  8156,  8163,
    8167,  8180,  8187,  8199,  8202,  8207,  8211,  8222,  8229,  8230,
    8234,  8235,  8238,  8239,  8244,  8284,  8283,  8292,  8319,  8320,
    8325,  8328,  8332,  8336,  8340,  8344,  8348,  8355,  8356,  8360,
    8361,  8365,  8369,  8379,  8390,  8389,  8397,  8407,  8418,  8417,
    8426,  8433,  8437,  8448,  8447,  8459,  8468,  8471,  8475,  8482,
    8486,  8496,  8508,  8507,  8516,  8520,  8529,  8530,  8535,  8538,
    8546,  8550,  8557,  8565,  8569,  8580,  8579,  8593,  8594,  8595,
    8596,  8597,  8598,  8602,  8603,  8607,  8608,  8614,  8623,  8630,
    8631,  8635,  8639,  8643,  8647,  8651,  8655,  8659,  8663,  8672,
    8676,  8685,  8694,  8695,  8699,  8708,  8709,  8713,  8717,  8728,
    8727,  8736,  8735,  8766,  8769,  8789,  8790,  8793,  8794,  8802,
    8803,  8808,  8813,  8823,  8839,  8844,  8854,  8871,  8870,  8880,
    8893,  8896,  8904,  8907,  8912,  8917,  8925,  8926,  8927,  8928,
    8929,  8930,  8934,  8942,  8943,  8947,  8951,  8962,  8961,  8971,
    8984,  8987,  8991,  8999,  9011,  9014,  9021,  9022,  9023,  9024,
    9031,  9030,  9039,  9046,  9047,  9051,  9052,  9053,  9057,  9058,
    9062,  9066,  9077,  9076,  9085,  9089,  9093,  9100,  9104,  9114,
    9125,  9126,  9133,  9132,  9140,  9148,  9161,  9160,  9168,  9182,
    9181,  9189,  9202,  9204,  9205,  9213,  9212,  9221,  9229,  9230,
    9235,  9236,  9241,  9248,  9249,  9254,  9261,  9262,  9266,  9267,
    9271,  9272,  9276,  9280,  9291,  9290,  9299,  9300,  9301,  9302,
    9303,  9307,  9334,  9337,  9349,  9359,  9364,  9369,  9374,  9382,
    9420,  9421,  9425,  9465,  9475,  9498,  9499,  9500,  9501,  9505,
    9514,  9520,  9530,  9561,  9570,  9571,  9578,  9577,  9589,  9599,
    9600,  9605,  9608,  9612,  9616,  9623,  9624,  9628,  9629,  9633,
    9637,  9649,  9652,  9653,  9662,  9663,  9672,  9675,  9676,  9685,
    9686,  9697,  9700,  9701,  9710,  9711,  9723,  9726,  9728,  9738,
    9739,  9751,  9752,  9756,  9757,  9758,  9762,  9771,  9782,  9783,
    9784,  9788,  9797,  9808,  9813,  9814,  9823,  9824,  9835,  9839,
    9849,  9856,  9863,  9863,  9873,  9874,  9875,  9879,  9888,  9889,
    9891,  9892,  9893,  9894,  9895,  9897,  9898,  9899,  9900,  9901,
    9902,  9904,  9905,  9906,  9908,  9909,  9910,  9911,  9912,  9915,
    9916,  9920,  9921,  9925,  9926,  9930,  9931,  9935,  9939,  9945,
    9949,  9955,  9956,  9957,  9961,  9962,  9963,  9967,  9968,  9969,
    9973,  9977,  9981,  9982,  9983,  9986,  9987,  9997, 10009, 10018,
   10034, 10043, 10059, 10074, 10075, 10080, 10089, 10095, 10115, 10119,
   10140, 10181, 10195, 10196, 10201, 10207, 10208, 10213, 10225, 10226,
   10227, 10234, 10245, 10246, 10250, 10258, 10266, 10270, 10277, 10286,
   10287, 10293, 10307, 10324, 10328, 10335, 10336, 10337, 10344, 10348,
   10355, 10356, 10357, 10358, 10359, 10363, 10367, 10371, 10375, 10379,
   10400, 10404, 10411, 10412, 10413, 10417, 10418, 10419, 10420, 10421,
   10425, 10429, 10436, 10437, 10441, 10442, 10446, 10447, 10451, 10452,
   10463, 10464, 10468, 10469, 10470, 10474, 10475, 10476, 10483, 10484,
   10488, 10489, 10493, 10494, 10495, 10501, 10505, 10509, 10510, 10514,
   10518, 10525, 10532, 10539, 10549, 10553, 10560, 10570, 10580, 10590,
   10603, 10607, 10615, 10623, 10627, 10637, 10652, 10675, 10695, 10702,
   10718, 10719, 10720, 10721, 10722, 10723, 10727, 10731, 10748, 10752,
   10759, 10760, 10761, 10762, 10763, 10764, 10765, 10771, 10775, 10779,
   10783, 10787, 10791, 10795, 10799, 10803, 10807, 10814, 10815, 10819,
   10820, 10821, 10825, 10826, 10827, 10828, 10829, 10830, 10834, 10838,
   10842, 10849, 10853, 10857, 10864, 10871, 10878, 10888, 10895, 10905,
   10912, 10924, 10932, 10933, 10937, 10938, 10942, 10943, 10948, 10951,
   10959, 10962, 10969, 10971, 10972, 10976, 10977, 10981, 10982, 10983,
   10988, 10991, 11004, 11008, 11016, 11020, 11024, 11028, 11032, 11036,
   11040, 11044, 11051, 11052, 11058, 11059, 11060, 11061, 11062, 11063,
   11064, 11065, 11066, 11067, 11068, 11069, 11070, 11071, 11072, 11073,
   11074, 11075, 11076, 11077, 11078, 11079, 11080, 11081, 11082, 11083,
   11084, 11085, 11086, 11087, 11088, 11089, 11090, 11091, 11092, 11093,
   11094, 11095, 11096, 11097, 11098, 11099, 11100, 11101, 11102, 11103,
   11104, 11105, 11106, 11107, 11108, 11109, 11110, 11111, 11112, 11113,
   11114, 11115, 11116, 11117, 11118, 11119, 11120, 11121, 11122, 11123,
   11124, 11125, 11126, 11127, 11134, 11134, 11135, 11135, 11136, 11136,
   11137, 11137, 11138, 11138, 11139, 11139, 11140, 11140, 11141, 11141,
   11142, 11142, 11143, 11143, 11144, 11144, 11145, 11145, 11146, 11146,
   11147, 11147, 11148, 11148, 11149, 11149, 11150, 11150, 11150, 11151,
   11151, 11152, 11152, 11153, 11153, 11154, 11154, 11155, 11155, 11155,
   11156, 11156, 11157, 11157, 11157, 11158, 11158, 11158, 11159, 11159,
   11160, 11160, 11161, 11161, 11162, 11162, 11162, 11163, 11163, 11164,
   11164, 11165, 11165, 11165, 11165, 11166, 11166, 11167, 11167, 11168,
   11168, 11169, 11169, 11170, 11170, 11171, 11171, 11172, 11172, 11173,
   11173, 11173, 11174, 11174, 11175, 11175, 11176, 11176, 11177, 11177,
   11178, 11178, 11179, 11179, 11180, 11180, 11181, 11181, 11181, 11182,
   11182, 11183, 11183, 11184, 11184, 11185, 11185, 11189, 11189, 11190,
   11190, 11191, 11191, 11192, 11192, 11193, 11193, 11194, 11194, 11195,
   11195, 11196, 11196, 11197, 11197, 11198, 11198, 11199, 11199, 11200,
   11200, 11201, 11201, 11202, 11202, 11203, 11203, 11204, 11204, 11205,
   11205, 11208, 11209, 11210, 11214, 11214, 11215, 11215, 11216, 11216,
   11217, 11217, 11218, 11218, 11219, 11219, 11220, 11220, 11221, 11221
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
  "next_group_clause", "next_group_plus", "next_page", "sum_clause_list",
  "reset_clause", "data_or_final", "present_when_condition",
  "varying_clause", "line_clause", "line_keyword_clause",
  "line_clause_options", "number_is", "line_clause_integer",
  "line_clause_next_page", "column_clause", "col_keyword_clause",
  "_orientation", "_left_right_center", "col_or_plus",
  "column_integer_list", "column_integer", "source_clause",
  "group_indicate_clause", "report_usage_clause", "screen_section", "$@27",
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
  "numvalc_args", "locale_dt_args", "not_const_word", "flag_all",
  "flag_duplicates", "flag_initialized", "flag_initialized_to",
  "to_init_val", "flag_next", "flag_not", "flag_optional", "flag_rounded",
  "round_mode", "round_choice", "flag_separate", "error_stmt_recover",
  "_advancing", "_after", "_are", "_area", "_as", "_at", "_binary", "_by",
  "_character", "_characters", "_contains", "_data", "_file", "_for",
  "_from", "_in", "_in_order", "_indicate", "_initial", "_into", "_is",
  "_is_are", "_key", "_line_or_lines", "_limits", "_lines", "_mode",
  "_number", "_numbers", "_of", "_on", "_onoff_status", "_other",
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
     765,   766,   767,   768
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   514,   516,   515,   517,   517,   518,   518,   519,   519,
     521,   520,   522,   523,   524,   525,   525,   525,   526,   526,
     527,   528,   528,   529,   531,   532,   533,   530,   535,   534,
     536,   537,   537,   538,   538,   539,   539,   540,   540,   540,
     540,   541,   541,   542,   542,   543,   543,   544,   544,   545,
     545,   545,   545,   545,   547,   546,   548,   548,   549,   549,
     551,   550,   552,   552,   552,   552,   553,   553,   554,   554,
     554,   554,   555,   556,   557,   558,   559,   559,   559,   559,
     560,   560,   562,   561,   563,   563,   563,   564,   564,   565,
     565,   565,   566,   566,   567,   567,   568,   568,   569,   570,
     570,   571,   571,   572,   572,   572,   572,   572,   572,   572,
     572,   572,   572,   572,   572,   574,   573,   575,   575,   575,
     575,   576,   576,   577,   577,   579,   578,   580,   580,   580,
     580,   580,   580,   581,   581,   582,   582,   583,   582,   584,
     584,   585,   585,   585,   585,   585,   585,   586,   586,   587,
     588,   588,   589,   590,   590,   591,   592,   592,   593,   593,
     594,   595,   595,   596,   596,   597,   598,   599,   599,   600,
     601,   602,   603,   604,   605,   606,   606,   607,   607,   608,
     608,   609,   609,   611,   610,   610,   612,   612,   613,   613,
     613,   613,   613,   613,   613,   613,   613,   613,   613,   613,
     613,   614,   614,   614,   614,   614,   615,   615,   615,   615,
     616,   616,   617,   617,   617,   618,   618,   619,   619,   619,
     620,   621,   621,   621,   622,   622,   623,   623,   623,   624,
     625,   626,   626,   626,   628,   627,   629,   629,   629,   630,
     630,   630,   630,   631,   631,   632,   632,   632,   632,   633,
     634,   635,   635,   636,   636,   638,   637,   637,   639,   640,
     641,   642,   642,   643,   644,   644,   644,   645,   645,   645,
     646,   646,   647,   647,   648,   649,   649,   649,   649,   651,
     650,   652,   652,   653,   654,   654,   655,   655,   656,   656,
     657,   657,   658,   660,   659,   659,   661,   661,   662,   662,
     663,   663,   663,   663,   663,   663,   663,   663,   663,   663,
     663,   664,   665,   665,   665,   666,   666,   666,   667,   667,
     668,   668,   669,   669,   670,   671,   671,   672,   672,   673,
     673,   674,   675,   676,   676,   677,   677,   677,   678,   679,
     680,   681,   682,   683,   684,   684,   685,   685,   686,   687,
     686,   688,   689,   688,   690,   690,   690,   691,   692,   691,
     691,   693,   694,   694,   694,   695,   696,   696,   697,   697,
     697,   697,   698,   698,   698,   698,   698,   698,   698,   698,
     698,   698,   698,   698,   698,   699,   699,   700,   700,   701,
     701,   701,   702,   702,   703,   704,   704,   705,   705,   706,
     706,   706,   706,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   706,   707,   708,   709,   709,   710,   711,   712,
     712,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   713,   714,   714,   715,
     715,   716,   716,   717,   718,   718,   719,   719,   720,   720,
     721,   721,   722,   722,   723,   723,   724,   724,   725,   726,
     726,   727,   727,   728,   728,   729,   729,   730,   731,   732,
     733,   733,   733,   734,   735,   737,   736,   738,   738,   739,
     739,   740,   740,   741,   741,   742,   742,   743,   744,   743,
     745,   746,   745,   747,   748,   747,   749,   749,   751,   750,
     752,   752,   752,   753,   753,   753,   753,   754,   755,   755,
     755,   756,   757,   757,   758,   759,   760,   760,   760,   761,
     761,   762,   762,   763,   763,   763,   763,   763,   764,   765,
     766,   767,   768,   769,   769,   771,   770,   772,   772,   773,
     773,   773,   773,   773,   773,   773,   773,   773,   773,   773,
     773,   773,   773,   773,   773,   773,   774,   775,   775,   775,
     775,   775,   775,   775,   776,   776,   776,   777,   777,   777,
     778,   779,   779,   779,   779,   780,   780,   780,   780,   781,
     782,   782,   782,   783,   783,   784,   785,   786,   787,   788,
     788,   788,   789,   789,   789,   790,   791,   791,   792,   793,
     794,   794,   795,   795,   795,   796,   796,   797,   797,   798,
     799,   800,   801,   802,   803,   802,   804,   804,   805,   805,
     806,   807,   806,   806,   808,   808,   809,   809,   809,   809,
     809,   809,   809,   809,   809,   809,   809,   809,   809,   809,
     809,   809,   809,   809,   809,   809,   809,   809,   809,   809,
     809,   809,   809,   809,   809,   809,   809,   809,   809,   809,
     810,   810,   811,   811,   812,   812,   812,   813,   813,   813,
     814,   815,   816,   817,   818,   816,   819,   816,   820,   821,
     820,   822,   820,   823,   823,   824,   825,   825,   825,   826,
     826,   826,   826,   826,   826,   827,   827,   828,   828,   829,
     830,   829,   831,   831,   832,   832,   832,   832,   832,   834,
     833,   835,   835,   836,   837,   838,   838,   840,   841,   839,
     843,   842,   842,   844,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   844,   844,   844,   844,   844,   844,
     844,   844,   844,   844,   846,   845,   847,   847,   847,   847,
     847,   847,   847,   847,   847,   847,   847,   847,   847,   847,
     847,   847,   847,   847,   847,   848,   848,   849,   849,   850,
     850,   851,   851,   851,   851,   851,   852,   853,   853,   854,
     854,   855,   855,   856,   856,   857,   857,   858,   858,   858,
     858,   858,   858,   858,   858,   858,   858,   858,   858,   858,
     858,   858,   858,   858,   858,   858,   858,   858,   858,   858,
     858,   858,   858,   859,   859,   860,   860,   862,   861,   863,
     863,   863,   864,   864,   865,   865,   867,   866,   868,   868,
     869,   869,   871,   870,   872,   872,   873,   874,   874,   876,
     875,   877,   878,   878,   878,   878,   879,   880,   879,   881,
     881,   882,   882,   883,   883,   883,   883,   884,   884,   884,
     884,   885,   885,   886,   886,   887,   887,   888,   888,   889,
     889,   891,   890,   892,   892,   894,   893,   895,   895,   896,
     896,   896,   896,   896,   898,   897,   899,   900,   900,   901,
     902,   904,   903,   905,   905,   906,   906,   907,   907,   909,
     908,   910,   910,   910,   910,   910,   910,   910,   911,   912,
     911,   913,   914,   914,   914,   914,   914,   915,   915,   916,
     916,   917,   917,   918,   918,   919,   919,   920,   920,   920,
     920,   920,   920,   920,   920,   920,   920,   920,   920,   920,
     920,   920,   920,   921,   921,   923,   922,   924,   924,   924,
     924,   924,   925,   925,   927,   926,   928,   930,   929,   931,
     932,   932,   933,   933,   933,   934,   934,   935,   935,   936,
     937,   938,   938,   939,   939,   940,   940,   940,   940,   941,
     941,   942,   942,   944,   943,   945,   945,   945,   945,   945,
     945,   945,   946,   946,   948,   947,   949,   951,   950,   952,
     954,   953,   955,   956,   956,   957,   959,   958,   960,   960,
     960,   961,   961,   963,   962,   964,   965,   965,   966,   966,
     966,   967,   967,   968,   968,   969,   970,   970,   970,   970,
     970,   970,   970,   971,   971,   973,   972,   974,   974,   976,
     975,   977,   978,   978,   978,   979,   979,   979,   979,   981,
     980,   982,   983,   984,   984,   985,   985,   985,   985,   985,
     985,   986,   986,   987,   987,   988,   988,   988,   988,   988,
     989,   990,   990,   991,   991,   993,   992,   995,   994,   996,
     996,   998,   997,   999,   999,  1000,  1000,  1002,  1001,  1003,
    1003,  1004,  1004,  1004,  1004,  1005,  1005,  1006,  1006,  1006,
    1006,  1008,  1007,  1009,  1010,  1009,  1009,  1011,  1011,  1012,
    1012,  1013,  1013,  1014,  1014,  1014,  1014,  1014,  1015,  1015,
    1016,  1016,  1017,  1017,  1018,  1020,  1019,  1021,  1022,  1022,
    1023,  1023,  1023,  1023,  1023,  1023,  1023,  1024,  1024,  1025,
    1025,  1026,  1026,  1027,  1029,  1028,  1030,  1031,  1033,  1032,
    1034,  1035,  1035,  1037,  1036,  1038,  1039,  1039,  1039,  1040,
    1040,  1041,  1043,  1042,  1044,  1044,  1045,  1045,  1046,  1046,
    1047,  1047,  1048,  1049,  1049,  1051,  1050,  1052,  1052,  1052,
    1052,  1052,  1052,  1053,  1053,  1054,  1054,  1055,  1056,  1057,
    1057,  1058,  1058,  1058,  1058,  1058,  1058,  1058,  1058,  1059,
    1059,  1060,  1061,  1061,  1062,  1063,  1063,  1064,  1064,  1066,
    1065,  1068,  1067,  1069,  1069,  1070,  1070,  1071,  1071,  1072,
    1072,  1073,  1073,  1073,  1074,  1074,  1074,  1076,  1075,  1077,
    1078,  1078,  1079,  1079,  1079,  1079,  1080,  1080,  1080,  1080,
    1080,  1080,  1081,  1082,  1082,  1083,  1083,  1085,  1084,  1084,
    1086,  1086,  1086,  1086,  1087,  1087,  1088,  1088,  1088,  1088,
    1090,  1089,  1091,  1092,  1092,  1093,  1093,  1093,  1094,  1094,
    1095,  1095,  1097,  1096,  1098,  1098,  1098,  1099,  1099,  1100,
    1101,  1101,  1103,  1102,  1104,  1104,  1106,  1105,  1107,  1109,
    1108,  1110,  1111,  1111,  1111,  1113,  1112,  1114,  1115,  1115,
    1116,  1116,  1117,  1118,  1118,  1119,  1120,  1120,  1121,  1121,
    1122,  1122,  1123,  1123,  1125,  1124,  1126,  1126,  1126,  1126,
    1126,  1127,  1128,  1128,  1129,  1129,  1129,  1129,  1129,  1130,
    1131,  1131,  1132,  1132,  1132,  1133,  1133,  1133,  1133,  1134,
    1135,  1135,  1136,  1137,  1138,  1138,  1140,  1139,  1141,  1142,
    1142,  1143,  1143,  1143,  1143,  1144,  1144,  1145,  1145,  1146,
    1146,  1147,  1148,  1148,  1149,  1149,  1150,  1151,  1151,  1152,
    1152,  1153,  1154,  1154,  1155,  1155,  1156,  1157,  1157,  1158,
    1158,  1159,  1159,  1160,  1160,  1160,  1161,  1162,  1163,  1163,
    1163,  1164,  1165,  1166,  1167,  1167,  1168,  1168,  1169,  1169,
    1170,  1171,  1173,  1172,  1174,  1174,  1174,  1175,  1175,  1175,
    1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,
    1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,  1175,
    1175,  1176,  1176,  1177,  1177,  1178,  1178,  1179,  1180,  1181,
    1181,  1182,  1182,  1182,  1183,  1183,  1183,  1184,  1184,  1184,
    1185,  1185,  1186,  1186,  1186,  1187,  1187,  1188,  1188,  1188,
    1188,  1188,  1188,  1189,  1189,  1190,  1191,  1192,  1193,  1193,
    1194,  1195,  1196,  1196,  1197,  1198,  1198,  1199,  1200,  1200,
    1200,  1201,  1202,  1202,  1203,  1204,  1205,  1205,  1206,  1207,
    1207,  1208,  1209,  1210,  1210,  1211,  1211,  1211,  1212,  1212,
    1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,
    1214,  1214,  1215,  1215,  1215,  1216,  1216,  1216,  1216,  1216,
    1216,  1216,  1217,  1217,  1218,  1218,  1219,  1219,  1220,  1220,
    1221,  1221,  1222,  1222,  1222,  1223,  1223,  1223,  1224,  1224,
    1225,  1225,  1226,  1226,  1226,  1227,  1228,  1229,  1229,  1230,
    1231,  1231,  1231,  1231,  1232,  1232,  1233,  1233,  1233,  1233,
    1234,  1234,  1235,  1236,  1236,  1237,  1238,  1239,  1239,  1240,
    1240,  1240,  1240,  1240,  1240,  1240,  1241,  1241,  1242,  1242,
    1243,  1243,  1243,  1243,  1243,  1243,  1243,  1244,  1244,  1244,
    1244,  1244,  1244,  1244,  1244,  1244,  1244,  1245,  1245,  1246,
    1246,  1246,  1247,  1247,  1247,  1247,  1247,  1247,  1248,  1248,
    1248,  1249,  1249,  1249,  1250,  1250,  1250,  1251,  1251,  1252,
    1252,  1253,  1254,  1254,  1255,  1255,  1256,  1256,  1257,  1257,
    1258,  1258,  1259,  1259,  1259,  1260,  1260,  1261,  1261,  1261,
    1262,  1262,  1263,  1263,  1264,  1264,  1264,  1264,  1264,  1264,
    1264,  1264,  1265,  1265,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,  1266,
    1266,  1266,  1266,  1266,  1267,  1267,  1268,  1268,  1269,  1269,
    1270,  1270,  1271,  1271,  1272,  1272,  1273,  1273,  1274,  1274,
    1275,  1275,  1276,  1276,  1277,  1277,  1278,  1278,  1279,  1279,
    1280,  1280,  1281,  1281,  1282,  1282,  1283,  1283,  1283,  1284,
    1284,  1285,  1285,  1286,  1286,  1287,  1287,  1288,  1288,  1288,
    1289,  1289,  1290,  1290,  1290,  1291,  1291,  1291,  1292,  1292,
    1293,  1293,  1294,  1294,  1295,  1295,  1295,  1296,  1296,  1297,
    1297,  1298,  1298,  1298,  1298,  1299,  1299,  1300,  1300,  1301,
    1301,  1302,  1302,  1303,  1303,  1304,  1304,  1305,  1305,  1306,
    1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,  1310,  1310,
    1311,  1311,  1312,  1312,  1313,  1313,  1314,  1314,  1314,  1315,
    1315,  1316,  1316,  1317,  1317,  1318,  1318,  1319,  1319,  1320,
    1320,  1321,  1321,  1322,  1322,  1323,  1323,  1324,  1324,  1325,
    1325,  1326,  1326,  1327,  1327,  1328,  1328,  1329,  1329,  1330,
    1330,  1331,  1331,  1332,  1332,  1333,  1333,  1334,  1334,  1335,
    1335,  1336,  1336,  1336,  1337,  1337,  1338,  1338,  1339,  1339,
    1340,  1340,  1341,  1341,  1342,  1342,  1343,  1343,  1344,  1344
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
       1,     0,     2,     1,     1,     1,     1,     1,     3,     4,
       4,     4,     3,     0,     2,     0,     5,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     2,
       2,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       4,     1,     2,     2,     1,     2,     1,     1,     1,     4,
       0,     3,     2,     1,     1,     3,     6,     2,     2,     1,
       2,     2,     0,     2,     1,     1,     2,     3,     2,     4,
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
       5,     4,     5,     5,     5,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       5,     0,     3,     2,     1,     3,     3,     1,     3,     1,
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
       0,     1,     0,     1,     0,     1,     1,     0,     1,     0,
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
    1815,    46,     0,     0,     0,  1855,  1815,  1815,  1815,     0,
       0,     0,     0,     0,  1815,     0,     0,  1792,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1816,     0,     0,  1541,   125,  1815,
    1815,  1856,  1815,     0,     0,     0,     0,  1815,  1815,    60,
      82,     0,    54,    98,  1793,     0,  1815,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1849,    39,  1815,     0,     0,     0,  1610,   171,  1534,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1542,
     152,   153,  1817,   156,  1615,  1234,  1233,   116,   120,  1841,
    1815,     0,   100,   151,   178,   179,    38,  1850,    36,     0,
    1623,  1619,  1624,  1622,  1620,  1625,  1621,   160,   161,   163,
     172,   167,  1901,  1902,     0,   165,     0,  1791,     0,     0,
       0,  1815,  1923,    80,    61,  1790,    66,    68,    69,    70,
      71,  1790,     0,  1815,     0,    83,     0,    87,    55,    58,
     154,  1819,  1818,   157,     0,  1841,  1844,  1843,     0,     0,
     117,   121,     0,     0,   267,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1884,   166,     0,  1611,   170,  1922,  1815,
       0,     0,    65,    67,    63,    81,  1790,  1815,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1616,
     155,   158,     0,  1842,   123,   118,   119,   122,   180,     0,
       0,  1688,     0,   279,   275,    24,     0,   270,   272,   273,
     134,   137,     0,   164,     0,     0,  1921,    74,    64,     0,
    1535,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1689,   183,  1798,   276,   277,   278,  1780,
     286,     0,   268,   271,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1799,  1868,  1781,  1800,
       0,   288,   269,   138,   139,  1909,  1910,    72,  1851,  1869,
    1794,  1801,     0,     0,     0,   290,     0,  1830,  1885,  1876,
       0,   245,     0,  1815,  1790,  1820,   247,     0,  1888,  1883,
     233,   184,   232,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   244,   195,   196,   197,   198,   199,   200,
    1786,  1815,  1795,     0,  1520,   274,  1518,   287,     0,    25,
     140,  1831,  1815,  1886,  1820,  1877,  1878,   212,  1887,   248,
    1851,  1815,  1815,  1821,  1815,  1815,   261,  1780,   262,     0,
    1815,  1830,  1787,     0,     0,   280,   281,   284,  1519,   289,
     296,   297,   348,   291,   351,     0,     0,  1815,   214,   213,
     210,  1852,   247,   243,     0,     0,     0,     0,   260,  1845,
    1845,     0,   263,     0,  1815,   246,   229,   282,     0,   283,
       0,   507,   292,  1671,     0,   293,   222,   223,   221,   220,
       0,   206,   207,   217,   217,     0,   217,   209,   208,   217,
       0,  1540,  1539,   249,   250,   251,   259,  1846,   264,   265,
     266,   230,     0,   285,     0,     0,   510,   353,     0,     0,
     357,     0,   295,   298,  1674,   218,   203,   219,   204,  1798,
     205,   202,   215,   201,   216,  1815,   253,   255,   239,   238,
     239,   235,   349,     0,     0,   513,   356,     0,   354,     0,
     363,   364,   358,     0,   361,  1815,  1920,     0,   255,   226,
    1675,   211,   254,   252,     0,     0,   237,   236,   351,   508,
       0,     0,   633,   355,   360,   397,   366,  1794,  1815,     0,
       0,  1815,  1794,  1830,  1815,  1778,   294,     0,   299,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,     0,
    1919,  1674,     0,   224,   257,   258,   256,     0,   242,   350,
     351,   511,     0,     0,    26,  1815,  1782,     0,     0,     0,
    1815,  1778,     0,     0,     0,     0,     0,  1815,   344,  1779,
     345,     0,   343,   346,   300,   301,   226,     0,     0,   509,
     351,   514,     0,   696,     0,   494,   421,  1857,  1857,  1857,
    1857,  1857,  1879,   422,   457,   459,   425,   426,   427,   428,
     429,   430,   453,   451,   452,   454,   455,   460,   458,   431,
    1853,   456,     0,   432,   418,   433,   434,     0,     0,  1860,
     436,   437,   435,   490,   439,   440,   438,  1815,  1817,   398,
     399,   400,   401,   402,   403,   419,   423,   424,   404,   405,
     406,   407,   408,   409,   410,   411,   412,     0,     0,  1783,
       0,   394,     0,   367,   322,   342,  1911,  1912,  1538,   331,
    1536,  1904,  1903,   324,  1828,  1792,  1804,     0,  1815,   328,
     327,  1815,   347,   225,     0,   147,   148,   228,     0,  1907,
    1908,   240,   512,   516,   634,     0,    27,   740,   505,   506,
    1858,   450,   449,   442,   441,   448,   447,   446,   445,   444,
     443,  1880,     0,  1854,   488,   474,   468,   413,  1603,   503,
    1861,   491,   492,   489,     0,     0,   415,   417,  1702,  1702,
     396,     0,  1837,  1634,     0,     0,  1630,  1635,  1633,  1631,
    1636,  1632,   395,   368,  1626,  1628,     0,   312,  1537,  1829,
     333,     0,   315,  1805,  1862,   341,     0,     0,   227,   241,
     515,   636,   698,     0,     0,   493,  1804,   470,     0,  1872,
       0,  1601,  1602,     0,   420,   495,   497,   499,     0,   414,
    1790,   461,   462,  1627,  1838,     0,     0,   377,   373,   376,
     375,   374,   389,   385,   387,   388,   390,   386,   391,   392,
     393,   370,   381,   382,   383,   378,   379,   380,   372,   369,
       0,   323,   314,   313,   311,   332,  1792,  1863,   320,   329,
     326,   330,   325,     0,   517,     0,   640,   635,   637,     0,
     701,   699,   717,     0,   794,   867,   876,   882,   889,   921,
     925,   939,   934,   940,   941,   949,   995,  1004,  1007,  1033,
    1044,  1047,  1050,  1042,  1056,  1063,  1085,  1089,  1125,  1127,
    1131,     0,  1137,  1151,  1175,  1193,  1194,  1197,  1198,  1203,
    1211,  1212,  1225,  1259,  1277,     0,  1310,  1322,  1330,  1332,
     722,  1336,  1339,  1345,  1396,   742,   743,   744,   745,   746,
     747,   748,   749,   751,   750,   752,   753,   754,   755,   756,
     757,   758,   759,   760,   761,   762,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   741,     0,     0,   468,   469,
    1873,   472,  1652,  1647,  1653,  1654,  1655,  1661,     0,  1507,
    1509,     0,     0,     0,  1650,     0,  1511,  1651,  1656,  1657,
       0,     0,     0,     0,  1649,  1661,  1648,  1491,  1489,  1496,
    1499,  1501,  1504,  1568,  1506,  1565,  1599,  1566,  1567,  1658,
       0,     0,     0,  1600,   504,   501,   498,     0,   416,  1703,
     371,   384,  1629,     0,     0,   334,   335,   336,   337,     0,
     316,  1803,   322,     0,  1521,   518,     0,   641,     0,   638,
     706,   706,     0,     0,  1705,  1706,  1707,  1708,  1709,  1710,
    1711,  1712,  1713,  1714,  1715,  1716,  1717,  1718,  1754,  1755,
    1756,  1757,  1758,  1759,  1760,  1761,  1762,  1763,  1764,  1765,
    1766,  1767,  1768,  1769,  1770,  1771,  1772,  1773,  1719,  1720,
    1721,  1722,  1723,  1724,  1725,  1726,  1727,  1728,  1729,  1730,
    1731,  1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,  1740,
    1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,  1749,  1704,
    1750,  1751,  1752,  1753,   793,     0,     0,     0,     0,   892,
       0,     0,     0,     0,     0,     0,     0,  1452,  1035,     0,
       0,  1874,   912,   911,     0,  1055,  1452,     0,     0,     0,
       0,     0,     0,   792,     0,  1163,     0,     0,     0,     0,
       0,     0,     0,     0,  1306,  1309,  1297,  1307,  1308,  1299,
       0,     0,  1331,  1329,     0,   740,     0,     0,     0,     0,
     475,   471,   476,  1839,   479,     0,  1645,  1569,  1570,  1571,
       0,     0,     0,     0,     0,     0,     0,  1503,     0,  1502,
       0,  1646,  1492,  1493,  1612,     0,     0,     0,     0,     0,
       0,     0,     0,  1637,     0,     0,     0,     0,   496,     0,
     500,   340,   339,  1784,  1792,   321,     0,   643,   644,   639,
    1789,   706,   703,   709,     0,   706,   718,   693,   816,   865,
     819,   815,  1837,     0,     0,  1559,   874,  1553,   872,  1548,
    1550,  1551,  1552,   877,     0,  1676,  1531,   883,   884,     0,
    1527,  1529,  1528,   895,   893,   894,   919,     0,  1581,   922,
     923,  1580,   926,   929,  1837,   937,  1605,     0,  1513,  1690,
    1545,  1604,  1609,  1546,     0,   947,  1851,  1630,   993,  1417,
     958,   962,  1548,     0,  1550,  1002,     0,   896,  1005,  1014,
    1013,  1031,     0,  1010,  1012,  1451,     0,  1037,  1041,  1039,
    1042,  1040,  1034,  1045,  1046,  1543,  1048,  1049,  1875,  1051,
    1525,  1043,  1870,  1450,  1064,  1066,  1086,  1087,  1090,     0,
    1092,  1093,  1094,  1126,  1263,  1596,  1597,     0,  1128,     0,
    1135,     0,  1144,  1141,  1143,  1142,  1138,  1145,  1165,  1531,
    1152,  1163,  1154,     0,  1161,     0,  1582,  1528,  1584,     0,
    1191,  1682,  1195,  1399,  1516,  1201,  1851,  1209,  1399,     0,
    1223,  1216,  1517,     0,  1524,  1226,  1227,  1228,  1229,  1230,
    1231,  1252,  1232,  1255,     0,  1522,     0,     0,  1595,  1609,
    1260,  1295,  1282,  1300,  1788,  1320,     0,  1313,  1315,     0,
    1327,     0,  1333,  1334,   728,   734,   723,   724,   725,   727,
       0,  1337,     0,  1340,  1342,  1362,  1348,  1409,  1399,   477,
     479,  1840,     0,   483,   478,  1663,  1491,  1489,  1508,  1510,
    1491,     0,     0,     0,  1491,  1562,  1563,  1564,     0,  1512,
    1505,  1491,     0,  1490,  1613,     0,  1495,  1494,  1498,  1497,
    1500,     0,     0,  1491,     0,  1815,  1785,     0,   318,     0,
    1815,  1859,   704,  1815,     0,   715,   707,   708,   719,   866,
     795,  1785,   829,   820,     0,     0,     0,     0,  1554,  1555,
    1556,   875,   868,     0,     0,  1549,  1678,  1677,   880,   885,
     887,     0,   920,   890,  1583,   896,   924,   929,  1913,  1914,
     927,     0,   930,     0,   938,   935,  1896,  1895,  1514,     0,
    1692,  1515,  1607,  1608,   944,   945,   948,   942,  1444,   994,
     950,   737,     0,   956,  1419,     0,   973,     0,   967,  1417,
    1417,  1417,  1417,  1003,   996,     0,     0,   897,  1006,  1032,
    1008,  1452,  1452,  1009,  1016,  1017,   737,  1476,  1477,  1478,
    1472,  1874,  1464,  1484,  1487,  1486,  1488,  1480,  1471,  1470,
    1475,  1474,  1473,  1479,  1459,  1463,  1481,  1483,  1485,  1461,
    1462,  1458,  1460,  1453,  1454,  1465,  1466,  1467,  1468,  1469,
    1457,  1038,  1036,  1544,  1053,  1871,   737,  1068,     0,  1088,
       0,  1115,  1099,  1091,  1096,  1097,  1098,  1267,     0,  1598,
       0,     0,  1136,  1132,     0,  1145,  1883,     0,  1153,  1159,
    1160,   737,  1156,  1452,     0,     0,  1164,     0,  1192,  1176,
    1683,  1684,  1851,     0,  1196,  1202,  1199,  1178,  1210,  1204,
    1206,  1218,  1224,  1213,     0,  1218,     0,  1576,  1577,  1253,
    1256,     0,     0,  1523,  1236,     0,  1235,     0,     0,  1607,
    1296,  1278,  1284,  1815,  1285,  1280,     0,  1298,     0,     0,
    1321,  1311,     0,  1314,     0,  1328,  1323,     0,  1335,   735,
     733,   726,     0,  1343,  1344,  1341,  1363,  1346,  1788,     0,
    1410,  1397,  1401,   483,   473,  1788,   466,   481,   482,  1820,
    1662,     0,  1658,  1658,  1658,     0,  1641,     0,  1658,  1614,
       0,  1658,  1658,  1882,     0,   338,  1839,   317,   522,  1815,
    1815,  1778,  1825,   553,   521,   525,   526,     0,     0,   658,
    1815,   648,  1879,   649,  1890,  1889,     0,  1815,     0,   661,
     652,   657,  1832,   653,     0,   656,   663,   660,   654,   659,
       0,   664,   655,     0,   675,   669,   673,   672,   670,   674,
     645,   676,   671,     0,  1832,     0,  1815,   716,     0,     0,
     694,   825,   830,   831,  1832,  1832,   823,   824,  1832,   811,
    1412,  1892,  1891,   808,   800,   802,   803,     0,  1412,     0,
       0,     0,   817,   806,     0,   814,   797,   813,   798,  1573,
    1572,     0,  1558,     0,  1837,  1605,  1422,   873,  1609,  1546,
       0,  1680,   880,     0,   878,     0,     0,  1530,   907,   928,
     933,     0,     0,  1547,  1422,  1815,  1691,  1606,   946,   737,
     943,  1446,  1418,   738,   960,  1784,   737,  1416,   966,   965,
     964,   963,   974,  1417,  1815,   977,     0,   980,   981,     0,
    1815,   984,   985,   986,   987,     0,   988,  1417,   975,     0,
     831,   953,   954,   951,   952,     0,  1422,     0,   903,  1011,
    1026,  1028,  1027,  1021,  1023,  1029,  1452,  1018,  1015,  1452,
    1019,  1482,  1455,  1456,  1839,  1052,  1526,   737,  1060,  1061,
    1874,  1076,  1077,  1079,  1081,  1082,  1078,  1080,  1071,  1874,
    1067,     0,  1116,     0,  1118,  1117,  1119,  1101,  1111,     0,
       0,  1095,  1269,     0,  1806,     0,  1129,  1422,     0,     0,
       0,  1147,  1157,  1170,  1166,  1171,  1167,  1172,     0,  1162,
    1406,  1405,  1169,  1178,  1400,  1592,  1593,  1594,     0,     0,
    1444,     0,   737,     0,  1217,     0,     0,     0,  1254,     0,
    1258,  1257,  1250,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1238,  1239,  1685,  1444,     0,  1301,  1866,  1866,
    1316,  1317,  1318,     0,  1422,     0,     0,   736,     0,  1672,
       0,  1318,  1206,  1774,   467,     0,  1815,  1670,  1642,  1643,
    1644,  1668,  1665,  1666,  1640,  1659,     0,  1638,  1639,   502,
       0,     0,  1938,  1939,  1815,  1778,     0,   519,   523,   531,
     527,   529,   530,   532,   534,     0,   646,   647,   650,   651,
       0,   678,  1833,  1815,  1872,  1815,   679,   677,   691,  1815,
     710,   711,   714,     0,   705,   720,   722,  1815,   833,     0,
       0,   821,   822,     0,   737,   812,  1414,   799,   801,  1412,
     809,   804,   805,   818,   807,  1575,  1557,  1574,  1690,     0,
     737,   869,  1424,  1607,  1608,  1422,     0,  1679,   879,   881,
     888,   886,   915,  1813,   932,   931,   936,     0,  1445,   737,
    1443,   740,  1420,   955,     0,   978,   979,   982,   983,     0,
    1448,  1448,   976,   957,   969,   970,   968,   971,     0,   997,
       0,   898,   899,   709,     0,  1452,  1452,  1025,   737,  1022,
       0,  1059,   737,  1062,  1057,     0,     0,  1083,     0,     0,
       0,  1112,  1114,     0,  1107,  1121,  1108,  1109,  1100,  1103,
    1121,  1261,  1815,  1820,     0,  1807,  1268,  1130,  1133,     0,
    1147,  1146,  1150,  1139,     0,  1158,  1155,     0,     0,  1180,
    1179,   737,  1200,  1432,  1205,  1207,     0,  1219,  1452,  1452,
    1214,  1220,  1237,  1249,  1251,  1241,  1242,  1243,  1247,  1244,
    1248,  1245,  1246,  1240,  1686,  1294,     0,  1291,  1292,  1286,
       0,  1279,  1918,  1917,     0,  1867,  1304,  1304,  1427,     0,
    1690,  1324,     0,   729,     0,  1673,  1349,  1350,     0,  1353,
    1356,  1360,  1354,  1444,  1775,     0,   487,   484,   485,     0,
    1660,   319,   524,  1826,  1827,  1617,  1618,   541,   536,   540,
     539,   362,   554,   528,   533,  1587,   668,  1585,  1586,   667,
     684,   690,     0,   687,   712,   713,   722,   740,     0,     0,
    1412,   826,   828,   827,  1413,   737,  1411,   810,  1422,  1547,
    1423,   737,  1421,  1606,   870,  1681,  1578,  1579,  1899,  1900,
     917,   737,  1837,  1814,   914,   913,   909,     0,  1694,  1695,
    1696,  1697,  1698,  1699,  1700,  1701,  1693,  1447,     0,   990,
     989,   992,     0,  1590,  1591,   991,     0,   961,  1422,  1513,
    1422,  1513,   900,   901,     0,   905,   904,   906,  1024,  1030,
    1020,  1054,  1058,  1069,  1072,  1073,  1796,  1065,  1874,  1070,
    1121,  1121,     0,  1106,  1104,  1105,  1110,  1271,     0,  1265,
    1808,  1422,  1140,  1149,     0,  1173,     0,     0,  1187,     0,
    1436,   737,  1431,  1208,   737,   737,  1221,  1293,  1283,  1287,
    1288,  1289,  1290,  1281,  1302,  1305,  1303,   737,  1312,  1429,
    1815,  1422,  1422,   731,  1338,  1672,  1352,  1804,  1358,  1804,
    1427,   737,   737,  1398,  1408,  1439,  1440,  1407,  1404,  1403,
    1822,   486,   480,  1532,   535,  1905,  1906,   537,   364,   555,
     682,   680,   683,   681,   685,   686,     0,   662,   688,   689,
       0,   740,   832,   837,  1815,   839,   840,   841,   864,  1815,
     842,   843,   844,   845,   846,     0,   847,   848,   850,   851,
     852,     0,   853,   838,  1776,   854,   863,   857,   834,   835,
     856,   796,  1415,   871,  1425,   737,   891,   916,     0,   908,
    1915,  1916,  1449,   972,   999,     0,   998,     0,   902,  1074,
    1797,     0,     0,  1102,  1113,  1121,  1811,  1811,  1122,     0,
       0,  1274,  1270,  1264,  1134,  1148,     0,  1181,  1815,  1444,
       0,     0,  1182,     0,  1186,  1437,  1215,  1222,  1428,   737,
    1426,     0,  1326,  1325,  1364,   730,     0,  1351,     0,  1804,
    1355,     0,  1347,  1441,  1442,  1438,  1823,  1824,  1402,  1533,
       0,  1815,  1815,     0,   542,   543,   544,   545,   546,   547,
       0,   557,   665,   666,     0,     0,     0,   855,  1815,  1448,
    1448,  1777,     0,   836,   918,   910,  1422,  1422,     0,  1084,
    1120,  1812,     0,     0,  1815,  1272,     0,     0,  1262,  1266,
       0,     0,  1177,  1190,  1434,  1435,  1189,  1185,  1183,  1184,
    1430,  1319,  1372,   732,  1357,     0,  1361,  1925,  1924,  1815,
       0,     0,  1927,     0,  1815,  1815,   538,  1859,     0,   859,
     858,     0,   861,   860,   862,  1588,  1589,  1001,  1000,  1075,
    1124,  1123,     0,  1275,  1815,  1452,  1188,  1433,  1395,  1394,
    1373,  1365,  1366,  1776,  1367,  1368,  1369,  1370,  1393,     0,
       0,  1359,     0,   552,   548,  1926,     0,     0,  1809,   612,
       0,     0,     0,     0,  1815,  1837,   556,  1815,  1815,     0,
     563,   565,   574,   566,   568,   571,   558,   559,   560,   570,
     572,   575,   561,     0,   562,   567,     0,   569,   573,   564,
    1893,  1894,  1834,   721,   849,  1273,     0,  1174,     0,  1864,
       0,  1839,   549,   551,   550,  1810,   631,   614,   608,  1815,
     616,   468,     0,  1452,     0,     0,     0,     0,     0,     0,
       0,   607,   609,   615,   618,   626,   627,     0,   629,  1835,
    1836,   620,  1276,     0,  1865,     0,  1391,  1390,  1389,     0,
     613,     0,  1872,   617,   605,  1690,   600,  1560,  1929,     0,
       0,  1931,  1933,     0,  1937,  1935,   576,   581,   584,   587,
     578,   582,   577,   583,   632,     0,   610,   611,   628,   625,
     624,   622,   623,  1817,   621,  1392,  1898,  1897,  1847,  1385,
    1379,  1380,  1382,   598,   596,   597,     0,     0,   590,   594,
     591,   472,   630,  1839,     0,   599,  1561,  1928,  1932,  1930,
    1936,  1934,   586,   579,   585,   589,   580,   588,     0,   619,
    1848,  1839,  1388,  1383,  1386,     0,  1381,   595,   592,   593,
     464,     0,   602,     0,     0,  1387,  1384,     0,   463,   604,
     601,   603,   606,  1378,  1375,  1377,  1376,  1371,  1374,   465
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
     569,   844,   570,  1697,  1032,   777,   571,   572,   711,   850,
     573,   574,   845,  1025,  1026,  1027,  1028,   575,   576,   577,
     578,   612,   461,   548,   462,   463,   497,   498,   555,   499,
     532,   533,   596,   772,   831,   832,   833,   834,   835,   500,
     691,   595,   669,   670,   671,   809,   672,   673,   674,   675,
     676,   677,   678,  2592,  2748,   679,   799,   968,  1174,   797,
    1410,  1413,  1414,  1679,  1676,  2187,  2188,   680,   681,   753,
     682,   683,   684,  1015,   805,   806,  1208,   685,   686,   496,
     590,   525,   620,   552,   723,   790,   854,  1216,  1450,  1704,
    1705,  1990,  1991,  1992,  1993,  1706,  2197,  2198,  2354,  2474,
    2475,  2476,  2477,  2478,  2479,  1987,  2202,  2481,  2537,  2596,
    2597,  2676,  2723,  2726,  2598,  2708,  2709,  2599,  2715,  2750,
    2600,  2601,  2602,  2603,  2641,  2628,  2642,  2604,  2605,  2606,
    2693,  2694,  2644,  2645,  2646,  2607,  2608,  2609,   594,   791,
     857,   858,   859,  1218,  1451,  1740,  2364,  2365,  2366,  2370,
    1741,  1742,   726,  1458,  2016,   727,   862,  1041,  1040,  1221,
    1222,  1223,  1455,  1748,  1043,  1750,  2216,  1165,  1396,  1397,
    2333,  2455,  1398,  1399,  1956,  1812,  1813,  2061,  1400,   794,
     915,   916,  1115,  1229,  1230,  1776,  1462,  1518,  1756,  1757,
    1753,  2018,  2220,  2398,  2399,  2400,  1460,   917,  1116,  1236,
    1474,  1472,   918,  1117,  1243,  1794,   919,  1118,  1247,  1248,
    1796,   920,  1119,  1256,  1257,  1528,  1848,  2081,  2082,  2083,
    2052,  1134,  2246,  2240,  2406,  1483,   921,  1120,  1259,   922,
    1121,  1262,  1490,   923,  1122,  1265,  1495,   924,   925,   926,
    1123,  1275,  1504,  1507,   927,  1124,  1278,  1279,  1512,  1280,
    1516,  1840,  2076,  2267,  1823,  1837,  1838,  1510,   928,  1125,
    1285,  1524,   929,  1126,  1288,   930,  1127,  1291,  1292,  1293,
    1533,  1534,  1535,  1858,  1536,  1853,  1854,  2087,  1530,   931,
    1128,  1302,  1135,   932,  1129,  1303,   933,  1130,  1306,   934,
    1131,  1309,  1865,   935,   936,  1136,  1869,  2094,   937,  1137,
    1314,  1577,  1878,  2097,  2284,  2285,  2286,  2287,   938,  1138,
    1316,   939,  1139,  1318,  1319,  1583,  1584,  1890,  1585,  1586,
    2108,  2109,  1887,  1888,  1889,  2102,  2293,  2428,   940,  1140,
     941,  1141,  1328,   942,  1142,  1330,  1593,   943,  1144,  1336,
    1337,  1597,  2123,   944,  1145,  1340,  1601,  2126,  1602,  1341,
    1342,  1343,  1904,  1906,  1907,   945,  1146,  1350,  1919,  2308,
    2439,  2512,  1609,   946,   947,  1147,  1352,   948,   949,  1148,
    1355,  1616,   950,  1149,  1357,  1920,  1619,   951,   952,  1150,
    1360,  1625,  1923,  2140,  2141,  1623,   953,  1151,  1365,   159,
    1637,  1366,  1367,  1942,  1943,  1368,  1369,  1370,  1371,  1372,
    1373,   954,  1152,  1323,  2297,  1587,  2433,  1892,  2111,  2431,
    2508,   955,  1153,  1381,  1945,  1645,  2156,  2157,  2158,  1641,
     956,  1383,  1647,  2324,  1159,   957,  1160,  1385,  1386,  1387,
    2168,  1651,   958,  1161,  1390,  1656,   959,  1163,   960,  1164,
    1392,   961,  1166,  1401,   962,  1167,  1403,  1665,   963,  1168,
    1405,  1669,  2176,  2177,  1961,  2179,  2338,  2460,  2340,  1667,
    2456,  2522,  2561,  2562,  2563,  2757,  2564,  2700,  2701,  2735,
    2565,  2658,  2566,  2567,  2568,   964,  1169,  1407,  1614,  1962,
    1912,  2343,  1671,  2025,  2026,  2226,  1513,  1514,  1817,  2041,
    2042,  2232,  2328,  2329,  2450,  2132,  2513,  2133,  2312,  2344,
    2345,  2346,  1810,  1811,  2060,  2261,  1312,  1313,  1295,  1296,
    1563,  1564,  1565,  1566,  1567,  1568,  1569,   997,  1195,  1417,
     999,  1000,  1001,  1002,  1266,  1267,  1498,  1353,  1361,   395,
     396,  1035,  1374,  1375,  1574,  1344,  1250,  1251,  2352,   482,
     301,   699,   700,   483,    98,   153,  1304,  1269,  1238,  1475,
    2666,  1424,  1004,  1781,  2036,  2110,  2235,  1260,  1345,  2206,
    2544,  2262,  1914,  2207,  1324,  1378,  1240,  1006,  1270,  1271,
     748,   801,   802,  2208,   271,  2200,   179,  1241,   774,   775,
    1242,  1009,  1010,  1011,  1203,  1176,  1432,  1428,  1421,   501,
    2178,   539,  1478,  1792,  2047,  1612,  2160,   282,  1501,  1806,
    2256,   811,  1114,  2185,  2492,   610,   339,   692,  1464,   423,
    1224,   202,   115,   393,  2421,   337,   352,  1033,   784,  2116,
    2626,  2502,  2247,    96,   214,   414,  2468,  1986,   780,   402,
    2003,  2651,   815,  1412,   218,   488,  2731,   168,   390,   744,
     102,   732,   688,   848,  2655,  2166,   350,  1576,   971,  1310,
     407,   742,  1209,  1349,   404,   391,  1758,  1778,  2612,  1499,
    2698,  2241,   184,   703,  2357,   721,   347,   602,  1492,  2412,
    2164,   540,   203,  2529,  2535,  2679,  2680,  2681,  2682,  2683,
    1708
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2416
static const yytype_int16 yypact[] =
{
   -2416,   782,   117, -2416,   332,   534, -2416,   117, -2416, -2416,
     756, -2416, -2416,   756,   756,   467,   467, -2416,   869, -2416,
     952,   703,   920, -2416, -2416,  1081,  1081,   669,   755, -2416,
   -2416,   512,   756,   467, -2416, -2416,   934,   744, -2416, -2416,
     772,  1730,   467, -2416, -2416, -2416,   703,   924, -2416, -2416,
     -27, -2416,   867,   867,   987,  1011,  1196,  1196,  1196,  1043,
     867,  1042,  1002,  1012,  1196,  1020,  1024,  1445, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416,   226, -2416, -2416, -2416, -2416,
    1289, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
    1341,  1072,   512, -2416, -2416,  1084,    99, -2416, -2416,  1196,
    1196, -2416,  1196,  1066,  1506,  1066,  1127,  1196,  1196, -2416,
   -2416,  1066, -2416, -2416, -2416,  1089,  1129,  1143, -2416, -2416,
    1093, -2416,  1150, -2416, -2416, -2416, -2416,  -124, -2416, -2416,
   -2416,  1269, -2416,  1196,   642,  1066,  1357,   484, -2416, -2416,
   -2416, -2416, -2416,  1363,  1165,   274,  1436, -2416,  1132, -2416,
    1089, -2416,    80, -2416, -2416, -2416, -2416, -2416,  1025,   465,
    1196,     0, -2416, -2416, -2416,   542, -2416, -2416, -2416,  1001,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416,   642, -2416,  1193,
   -2416,   363, -2416, -2416,  1066, -2416,  1238, -2416,  1244,  1229,
    1582,  1196, -2416, -2416, -2416,   575, -2416, -2416, -2416, -2416,
   -2416,   421,  1587,  1196,    71, -2416,    83, -2416, -2416,     2,
   -2416, -2416, -2416, -2416,  1394,   465, -2416,  1417,   867,   867,
   -2416,  1025,  1199,    94,   -40, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,   826, -2416,
      91, -2416,   642, -2416, -2416,  1324, -2416, -2416, -2416,  1196,
    1252,  1399, -2416, -2416, -2416, -2416,   783,  1196,  1152,  1429,
     517, -2416,  1634,   533,  1208, -2416, -2416,  1210,  1555, -2416,
    1394, -2416,   867, -2416, -2416, -2416, -2416,  1025, -2416,  1212,
    1353, -2416,   867, -2416,   836, -2416,   214, -2416, -2416, -2416,
   -2416, -2416,   826, -2416,  1410,  1399, -2416, -2416, -2416,   574,
   -2416, -2416, -2416,  1411, -2416, -2416, -2416, -2416, -2416,  1400,
   -2416, -2416, -2416, -2416, -2416,  1215, -2416, -2416, -2416,  1651,
    1571,  1227, -2416, -2416,   826, -2416, -2416,    38, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1242, -2416,  1495,
    1562,  1232, -2416,  1672, -2416, -2416, -2416, -2416,  1919, -2416,
    1603, -2416,  1186,  1241,  1300, -2416,   826,  1424,  1347,   415,
    1298, -2416,  1299,  1196,  1645,   162,   505,   890, -2416,  1200,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1284,
   -2416,  1446, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
    1671,  1196, -2416,  1186, -2416,  1186, -2416, -2416,  1258,   -28,
   -2416, -2416,  1196, -2416,  1475, -2416, -2416,   116, -2416, -2416,
     874,  1196,  1196, -2416,  1196,  1196, -2416,  1651, -2416,   124,
    1196,  1424, -2416,  1311,  1209,  1186, -2416,  1390, -2416, -2416,
   -2416, -2416,  1216, -2416,  1214,    57,   545,  1196, -2416, -2416,
    1097, -2416, -2416, -2416,   -98,  1306,  1066,  1066, -2416,  1413,
    1413,  1416, -2416,  1066,  1196, -2416, -2416, -2416,  1399, -2416,
    1336,  1470, -2416, -2416,  1280, -2416, -2416, -2416, -2416, -2416,
    1066, -2416, -2416,   -93,   -93,  1727,   -93, -2416, -2416,   -93,
     188, -2416, -2416, -2416, -2416,   721, -2416, -2416, -2416, -2416,
   -2416, -2416,   596, -2416,  1285,  1344,  1484,   291,  1301,  6826,
   -2416,  1236, -2416, -2416,   205, -2416, -2416, -2416, -2416,  1215,
   -2416, -2416, -2416, -2416, -2416,  1196, -2416, -2416,  1248, -2416,
    1248, -2416, -2416,  1302,  1362,  1391, -2416,  1307, -2416,  1309,
   -2416,  1677, -2416,  1679, -2416,  1263, -2416,  1633, -2416,  1337,
   -2416, -2416, -2416,  1066,  1066,   453, -2416, -2416,  1214, -2416,
    1316,  1376,  1382, -2416, -2416, -2416,    49,  1603,  1196,  1131,
    1131,  1196,    16,  1424,  1196,  1751, -2416,  1467, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,   867,  1054,
   -2416,    25,  1272, -2416, -2416, -2416, -2416,  1468, -2416, -2416,
    1214, -2416,  1326,  1385, -2416,  6997,   167,  1572,  1399,  1275,
    1196,  1751,  1277,   -90,   -98,  1399,  1283,  1196, -2416, -2416,
   -2416,   -38,   867, -2416, -2416, -2416,  1337,    58,   888, -2416,
    1214, -2416,  1332,   746,   788, -2416, -2416,  -169,   414,   597,
     609,   698,  1286, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
    1401, -2416,   592, -2416, -2416, -2416, -2416,  1066,  1066,  1558,
   -2416, -2416, -2416,   -45, -2416, -2416, -2416,  1196,   136, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1078,   -76, -2416,
    1290, -2416,   964, -2416,  1339, -2416, -2416, -2416, -2416,  1277,
   -2416, -2416, -2416, -2416,  1540,    48,  1580,  1294,  1196, -2416,
   -2416,  1196, -2416, -2416,    85, -2416, -2416, -2416,  1153, -2416,
   -2416, -2416, -2416, -2416, -2416,  1678, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416,  1292, -2416, -2416,  1754,  1360, -2416,  1358,  1365,
   -2416, -2416, -2416, -2416,  7378,    85,  1785, -2416,  1419,  1419,
   -2416,  1388,  1514, -2416,  1564,  1564, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416,  1374, -2416,  1399,    75, -2416, -2416,
   -2416,  1399, -2416, -2416,  1423, -2416,   417,   417, -2416, -2416,
    1477,  1321,    74,  3335,  3866, -2416,  1580,  1632,  1399,  1386,
    7579,  1371, -2416,  1066, -2416,    85, -2416,  1397,  1581, -2416,
    1645, -2416, -2416, -2416, -2416,  1564,  1384, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
    1388, -2416, -2416, -2416, -2416,    18,  1445, -2416,   752, -2416,
   -2416, -2416, -2416,  1338, -2416,  6485, -2416, -2416,  1321,  1389,
   -2416, -2416,  1469,  4177, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,    21, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416,  1447, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416,   655, -2416, -2416,  1508, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416,  1342,  1399,  1360, -2416,
   -2416,  1739, -2416, -2416, -2416, -2416, -2416,  1395,  7941,   484,
     484,  1396,  1402,  1403, -2416,  1409,   484, -2416, -2416, -2416,
    7676,  7579,  7676,  1414, -2416,  1395, -2416,   189,  1015,  -190,
   -2416,  1686, -2416, -2416, -2416, -2416, -2416,  1374, -2416,  1430,
    1434,  1435,  7579, -2416, -2416,   612, -2416,    85, -2416, -2416,
   -2416, -2416, -2416,   -98,   -98, -2416, -2416, -2416, -2416,  1669,
   -2416, -2416,  1339,  1399, -2416, -2416,  1412, -2416,  1426, -2416,
      90,    90,  1369,  1427, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416,  -138,  4994,  7579,   491,   683,
     500,  1186,   948,  -192,  5947,  6046,  1605,   458,   862,   948,
    1066,  1453, -2416, -2416,  6046, -2416, -2416,   948,  1338,  3693,
    1066,  5114,  6046, -2416,  1036,  3222,  1186,  1066,  1186,  1066,
      62,   579,  1066,  1186, -2416, -2416, -2416, -2416, -2416, -2416,
    5236,  5258, -2416, -2416,  1338,    72,  1066,  1186,  1066,  1066,
   -2416, -2416,  1680,  1583, -2416,  6904, -2416, -2416,  1374, -2416,
    1406,  1407,  7579,  7579,  7579,  7941,  1420, -2416,   842, -2416,
    7941, -2416, -2416, -2416, -2416,  7579,  7412,  7579,  7579,  7579,
    7579,  7579,  7579, -2416,  7941,  7579,  1015,  1499, -2416,  1451,
   -2416, -2416, -2416,  1877,  1445, -2416,   100, -2416, -2416, -2416,
   -2416,   123, -2416,  -175,   347,   169, -2416, -2416, -2416,  1777,
     754,  1721,  1514,  1066,  7941, -2416,  1788, -2416,  5356, -2416,
   -2416, -2416, -2416, -2416,   170,   705, -2416,   491, -2416,  1474,
   -2416,   484, -2416, -2416, -2416, -2416,  1794,  2432, -2416,   500,
   -2416, -2416,  1186,   880,  1514,  1795, -2416,   822, -2416,  1542,
   -2416, -2416,  1358,  1374,  1186,  1796,  1579,  1080,  1800,  5378,
   -2416,  5642,   131,  1099,  1104,  1801,    92,  1441, -2416, -2416,
   -2416,  1802,    56, -2416, -2416, -2416,  4552, -2416, -2416,  1830,
      21, -2416, -2416, -2416,   948, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416,  1501, -2416, -2416,   717,  1338, -2416, -2416,    53,
   -2416, -2416, -2416, -2416, -2416, -2416,  1482,  6046, -2416,  1502,
    1805,  1900, -2416, -2416, -2416, -2416,  1036,  1546, -2416,  1505,
   -2416,  6317,     5,   747,  1509,  1507, -2416,   914, -2416,  1517,
    1817,   827, -2416,  1772, -2416,  1824,  1579,  1826,  1772,  1066,
    1828,  1473, -2416,  1195, -2416, -2416, -2416, -2416, -2416, -2416,
    1706, -2416,   948, -2416,   432, -2416,   395,  1948, -2416,    65,
   -2416,  1832,  1003,   447,  1934,  1836,  4839, -2416, -2416,  1066,
    1838,  5738,  1338, -2416, -2416,   424, -2416, -2416, -2416, -2416,
    3586, -2416,  1790, -2416,  1201,  1839,  1876,  1840,  1772, -2416,
   -2416, -2416,  1066,  1771,   182, -2416,   207,   939, -2416, -2416,
     228,  1544,  1545,  1547,   225, -2416,  1374, -2416,  1548, -2416,
   -2416,   235,  1549,   939, -2416,   959,  -190,  -190, -2416, -2416,
   -2416,  1027,  1550,   247,  1553,  1196, -2416,   -98,  1880,  1551,
     202,  7304, -2416,  1196,  1591,  1692, -2416, -2416,  1896, -2416,
   -2416,  1195,  1813, -2416,   769,  1939,   -29,  1565, -2416,  1374,
   -2416, -2416, -2416,  6127,  1808, -2416,  1791, -2416,  1640, -2416,
    1683,  1761, -2416, -2416, -2416,  1441, -2416,   880, -2416, -2416,
   -2416,    -8,   521,  1066, -2416, -2416, -2416, -2416, -2416,  7579,
    1747, -2416,  1371, -2416,  1186, -2416, -2416, -2416,  1793, -2416,
   -2416, -2416,  6046, -2416,  1731,   119,  1732,  1818,  1552,  1866,
    1866,  1866,  1866, -2416, -2416,  6046,  6127, -2416, -2416, -2416,
   -2416,   458,    67, -2416,  1531, -2416,  1534, -2416, -2416, -2416,
   -2416,  1453, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,  4430, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416,    -7, -2416,  1909,   976,  1863, -2416,
    1195,    78, -2416, -2416,  1675, -2416, -2416,    51,  7579, -2416,
    1594,   948, -2416, -2416,  6127,  1546,  1200,  1186, -2416, -2416,
   -2416, -2416, -2416,  1873,  1066,   491, -2416,  1230, -2416, -2416,
   -2416, -2416,  1579,  3693, -2416, -2416, -2416,  1819, -2416, -2416,
       4,  1916, -2416, -2416,  1066,  1916,  1602, -2416,  1374, -2416,
   -2416,   881,  1025, -2416, -2416,  4719, -2416,  2003,   671,    68,
   -2416, -2416, -2416,  1196, -2416,     7,  6046, -2416,   550,  5765,
   -2416, -2416,  1066, -2416,  1856, -2416, -2416,  6127, -2416,  1399,
   -2416, -2416,  1195, -2416, -2416, -2416, -2416, -2416,  1934,  1825,
   -2416, -2416,  1230,  1771, -2416,  1934, -2416, -2416, -2416,  1475,
   -2416,  1066,  1430,  1430,  1430,  7941, -2416,   -61,  1430, -2416,
    7556,  1430,  1430, -2416,    85, -2416,  1583, -2416, -2416,  1196,
    1196,  1751,  1142, -2416, -2416, -2416, -2416,  1850,   -46, -2416,
    1196, -2416,   -65, -2416, -2416, -2416,  1404,  1196,  3693, -2416,
   -2416, -2416,  1757, -2416,  1399, -2416,  2000, -2416, -2416, -2416,
    1066, -2416, -2416,  1066, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,  1854,  1757,   146,  1196, -2416,  1556,  1607,
   -2416, -2416, -2416,  1792,  1757,  1757,   322,  1810,  1757, -2416,
    1894, -2416, -2416, -2416,  1557,  1561, -2416,  1195,  1894,  1829,
    1642,  1764, -2416, -2416,  1797, -2416, -2416, -2416, -2416, -2416,
   -2416,   511, -2416,  1066,  1514,  1868,  1112, -2416,   -47,   -34,
     948,  1625,  1640,   948, -2416,  1628,   491, -2416,    21, -2416,
   -2416,  1696,  1715, -2416,   812,  1196, -2416, -2416, -2416, -2416,
   -2416,  1783, -2416, -2416, -2416,  2051, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,  1866,  1196, -2416,   -42, -2416, -2416,  1415,
    1196, -2416, -2416, -2416, -2416,   -15, -2416,  1889, -2416,  1422,
    1792, -2416, -2416, -2416, -2416,  1879,  1112,  1881,   113, -2416,
   -2416, -2416, -2416,  2070, -2416,  1644,   132, -2416, -2416,    67,
   -2416, -2416, -2416, -2416,  1583, -2416, -2416, -2416,  1959,  1949,
    1453, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1725,  1453,
   -2416,  1647, -2416,  2043, -2416, -2416, -2416,  1073, -2416,  1195,
    1255, -2416,    55,   182,    -5,   948,   948,  1112,  1893,  1186,
     124,   895,  1950, -2416, -2416, -2416,  2091, -2416,  1905, -2416,
   -2416, -2416, -2416,  1819, -2416, -2416, -2416, -2416,  1066,  1973,
    1793,   507, -2416,  1604, -2416,  1606,  1195,   975, -2416,   511,
   -2416, -2416, -2416,  6046,  1025,  1025,  1025,  1025,  1025,  1025,
    1025,  1025,   671, -2416,   487,  1793,   454, -2416,  1681,  1681,
   -2416, -2416,  -148,  1066,  1112,  1904,  1657, -2416,  1663,  2103,
    1066,   604,     4,  2107, -2416,  1609,  1196, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416,   984, -2416, -2416, -2416,
    1066,   500, -2416, -2416,  1196,  1751,  -107,  1321, -2416, -2416,
   -2416,  1066,  1066, -2416, -2416,   488, -2416, -2416, -2416, -2416,
     488, -2416, -2416,  1196,  1386,  1196, -2416, -2416, -2416,  1196,
   -2416, -2416, -2416,   618, -2416, -2416, -2416,  1196,  1611,   488,
     488, -2416, -2416,   488, -2416, -2416,  1822, -2416, -2416,  1894,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1542,   -29,
   -2416, -2416,  1820,   -44,  1915,  1112,   354, -2416, -2416, -2416,
   -2416, -2416,    20,    87, -2416, -2416, -2416,   361, -2416, -2416,
   -2416, -2416, -2416, -2416,   488, -2416, -2416, -2416, -2416,   488,
     515,   515, -2416, -2416, -2416, -2416, -2416,  1615,   948, -2416,
     948,  2456, -2416,   -81,    14,    67, -2416, -2416, -2416,  2070,
    1066, -2416, -2416, -2416, -2416,  1622,  1281,   210,  1623,   354,
    1195, -2416, -2416,  2075, -2416, -2416, -2416, -2416,  1255, -2416,
    1935, -2416,  1196,  1475,  1811, -2416, -2416,   948, -2416,   948,
     895, -2416, -2416, -2416,  1125, -2416, -2416,  1066,  6046,  1334,
   -2416, -2416, -2416,  1835, -2416, -2416,  1865, -2416, -2416, -2416,
   -2416,  1606, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416,   135, -2416,  1066, -2416, -2416, -2416,
     849, -2416, -2416, -2416,  7579, -2416,  6046,  6046,  1666,  1799,
    1542, -2416,   948, -2416,   354, -2416,  1821, -2416,  1195, -2416,
    2017,  1695, -2416,   710, -2416,   741, -2416,  1609, -2416,  1066,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1345, -2416,
   -2416,   -60, -2416,  1066, -2416, -2416, -2416, -2416, -2416, -2416,
     903, -2416,   500,   903, -2416, -2416, -2416,    86,  2087,  2474,
    1894, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1724,  1937,
   -2416, -2416, -2416,  1938, -2416, -2416, -2416, -2416, -2416, -2416,
    1843, -2416,  1514, -2416, -2416, -2416, -2416,  1066, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  3019, -2416,
   -2416, -2416,  1356, -2416, -2416, -2416,  1818, -2416,  1112,  1781,
    1112,  1782, -2416, -2416,  6046, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416,  1281, -2416,  2035, -2416,  1453, -2416,
   -2416, -2416,   354,  1282, -2416, -2416,  1282,   -83,  1066, -2416,
   -2416,  1112, -2416, -2416,  1768, -2416,  2096,  1887,  1913,   401,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,   939, -2416, -2416, -2416, -2416, -2416,  1855,
    1196,  1724,  1112,  1659, -2416,  2103, -2416,  1580,  2057,  1580,
    1666, -2416, -2416, -2416, -2416,  1864, -2416, -2416, -2416, -2416,
    1364, -2416,  1066, -2416,   970, -2416, -2416,  -107, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416,   488, -2416, -2416, -2416,
     488,    -2, -2416, -2416,  1196, -2416, -2416, -2416, -2416,  1196,
   -2416, -2416, -2416, -2416, -2416,     3, -2416, -2416,  2098, -2416,
   -2416,   -12, -2416, -2416,  2150, -2416, -2416, -2416,  2474, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1066, -2416,
   -2416, -2416, -2416,  1818, -2416,   948, -2416,   948, -2416, -2416,
   -2416,  2110,  2048,  1282,  1282, -2416,  1704,  1704, -2416,  1831,
    1186,   478, -2416,  1066, -2416, -2416,  6046, -2416,  1196,   839,
    1903,  1907, -2416,  1908, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416,  1066, -2416, -2416, -2416, -2416,  1710, -2416,  1066,  1580,
   -2416,  1066, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
    1034,  1196,  1196,  1264, -2416, -2416, -2416, -2416, -2416, -2416,
    1554, -2416, -2416, -2416,  2062,   488,   488, -2416,  1196,   515,
     515, -2416,  -107, -2416, -2416, -2416,  1724,  1724,  6046, -2416,
    1282, -2416,  6046,  6046,  1196,  1186,  1186,  1837, -2416, -2416,
    1685,  1066, -2416, -2416,  1835, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416,   796, -2416, -2416,  1066, -2416, -2416, -2416,  1196,
    -107,  -107, -2416,  1963,  1196,  1196, -2416,  2375,  1723, -2416,
   -2416,   500, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416,   491,  1186,  1196, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,  1343, -2416, -2416, -2416, -2416, -2416,  1842,
    2068, -2416,  -107, -2416, -2416, -2416,  -107,  -107,  1956,  1884,
     559,  1399,  1895,  1676,  1196,  1514, -2416,  1196,  1196,  1066,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,   463, -2416, -2416,   588, -2416, -2416, -2416,
   -2416, -2416,  1233, -2416, -2416, -2416,   491, -2416,  1812,  1767,
     115,  1583, -2416, -2416, -2416, -2416, -2416,  1954, -2416,  1196,
   -2416,  1360,  1867, -2416,  7843,  7843,  1588,  2067,  1993,  -101,
    -101, -2416, -2416, -2416, -2416, -2416,  -101,  -101, -2416, -2416,
   -2416,    95, -2416,  1066, -2416,  1138, -2416, -2416, -2416,    60,
   -2416,  1017,  1386, -2416, -2416,  1542,  4290, -2416, -2416,    70,
    1076, -2416, -2416,  1102, -2416, -2416, -2416, -2416,   -24,   -13,
   -2416, -2416, -2416, -2416, -2416,  7843, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,   136, -2416, -2416, -2416, -2416,  1853,   978,
      60, -2416, -2416,  1871, -2416, -2416,  1399,  1399, -2416, -2416,
   -2416,  1739, -2416,  1583,  1066, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  2147, -2416,
   -2416,  1583, -2416, -2416,  1892,  1066, -2416, -2416, -2416, -2416,
    1774,    -9, -2416,  7843,   524, -2416, -2416,  1399, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1186, -2416
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2416, -2416, -2416, -2416, -2416,  2194, -2416, -2416, -2416,   684,
   -2416,  2156, -2416,  2111, -2416, -2416,  1393, -2416, -2416, -2416,
     268, -2416, -2416,  1398,  2178, -2416, -2416,  2078, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  2005,
      46, -2416, -2416, -2416, -2416, -2416,  2061, -2416, -2416, -2416,
   -2416,  2006, -2416, -2416, -2416, -2416, -2416, -2416,  2138, -2416,
   -2416, -2416, -2416,  1994, -2416, -2416, -2416, -2416,  1976, -2416,
   -2416,   -50, -2416, -2416, -2416, -2416, -2416,  2066, -2416, -2416,
   -2416, -2416,  2040, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416,  1087, -2416, -2416, -2416,  1608,
   -2416, -2416, -2416, -2416, -2416, -2416,  1699, -2416,  1815, -2416,
   -2416, -2416,  1716,  1684, -2416,  1682, -2416, -2416, -2416, -2416,
     321, -2416, -2416,  1941, -2416, -2416, -2416, -2416, -2416,  1798,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416,  1198, -2416, -2416, -2416,  1444,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416,   434, -2416, -2416,  1735, -2416,  -767,
    -842, -2416, -2416, -2416,   304, -2416, -2416, -2416, -2416,   234,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -1423,   777,  1479,
     391,   638, -1421, -2416, -2416, -2416,  -961, -2416,  -477, -2416,
   -2416,   831, -2416,   344,   569, -2416,    59, -1420, -2416, -2416,
   -1417, -2416, -1416, -2416, -2416,  1438, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,   253, -1331, -2416, -2416, -1231, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,  -401, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416,  1392, -2416, -2416, -2416, -2101,    34, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  1207,
     -31, -2416,   168, -2416, -2416, -2416, -2416, -1827, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416,  -899, -2416, -2416,  -709, -2416,
    1458, -2416, -2416, -2416, -2416, -2416, -2416,  1023,   497,   499,
   -2416,   416, -2416, -2416,  -141,  -127, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416,   468, -2416, -2416, -2416,  1018,
   -2416, -2416, -2416, -2416, -2416,   774, -2416, -2416,   181, -2416,
   -2416, -1277, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416,   785, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,   757,
   -2416, -2416, -2416, -2416, -2416,     9, -1785, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,   733,
   -2416, -2416,   739, -2416, -2416,   418,   191, -2416, -2416, -2416,
   -2416, -2416,   980, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416,    -6,   706, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,   700, -2416,
   -2416,   174, -2416,   398, -2416, -2416, -1910, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
     950,   692,   171, -2416, -2416, -2416, -2416, -2416, -2416, -1754,
     947, -2416, -2416, -2416,   173, -2416, -2416, -2416,   381, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416,   333, -2416, -2416, -2416, -2416,
   -2416, -2416,   672,   155, -2416, -2416, -2416, -2416, -2416,  -122,
   -2416, -2416, -2416, -2416,   356, -2416, -2416, -2416,   931, -2416,
     930, -2416, -2416,  1151, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,   137, -2416, -2416, -2416, -2416, -2416,   919,
     346, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416,   -26, -2416,   350, -2416, -2416, -2416, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  -394, -2416,
   -2416, -2416, -2416, -2416, -2416, -2416, -2416, -2416,  -280, -2416,
     636, -2416, -2416, -1678, -2416, -2416,  -624, -2416, -2416, -1730,
   -2416, -2416,   -25, -2416, -2416, -2416, -2416,  -126, -2206, -2416,
   -2416,   -23, -1860, -2416, -2416, -1971, -1577, -1087, -1473, -2416,
   -2416,   753, -1281,   157,   158,   159,   160,  -915,    43,  -759,
     343,   345, -2416,   641,  1418, -1412, -1099,   227,   966, -1572,
    -392,  -311, -2416, -1335, -2416, -1061, -2415,   845, -2416,   -91,
    2024, -2416,  1629,  -562,    29,  2175, -1088, -1081,  -873,  -921,
   -2416, -1125, -1354, -2416,   400, -1317, -1905, -1114,  1074, -1553,
   -2416, -2416,   615, -1132, -2416,  -874,   686,  -641, -2416, -2416,
    -103, -1204,  -780,  -111,  2064, -1108,  2093,  -663,  -396,   -66,
    -239, -2416, -2416, -2416,  -165,  1346, -2416, -2416,   373, -2416,
   -2416,  1755, -2416, -2416, -2416, -2416, -2416, -2416, -1985, -2416,
   -2416,  1578, -2416, -2416,  -224,  -590,  1923, -2416, -1198, -2416,
   -1322,  -259,  -650,   927, -2416,  1833, -1454, -2416,  -790, -2416,
   -2416,   -82, -2416,    19,  -664,  -357, -2416, -2416, -2416,   328,
    -297, -2416, -1210, -1560,  2129,  1901, -2416, -2416, -1148, -2416,
   -2416,   997, -2416, -2416, -2416,   397, -2416,   255, -1954, -1477,
   -2416, -2416, -2416,  -164, -2416,   461, -1414, -1341, -2416, -2416,
   -2416, -2416,  -620, -2416, -2416,  1636, -2416,  1803, -2416, -2416,
   -2416,   763, -2416, -1683,  -281, -2416, -2416, -2416, -2416, -2416,
   -2416
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1884
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   755,   160,   966,  1172,   139,   415,
    1283,   697,   138,  1037,   141,  1447,   747,   245,   793,  1377,
     147,  1013,  1466,  1268,   855,  1901,  1905,  1893,  1734,   773,
    1736,  1737,   139,   427,  1738,  1739,   215,  1744,  1802,  1633,
    1294,   998,   704,   465,   180,   268,  1626,   437,  1305,  1315,
    2211,   788,  2072,  2228,  1493,   782,  1305,  1249,   464,  1855,
    2134,  1786,  1649,  1376,  1861,  1431,  1023,   714,  1502,  2699,
    1305,  1359,  -697,  1531,  2056,   103,   104,   105, -1839,  1442,
     259,   246,    99,   111,   264,  2161,  -695,  1882,  1850,   107,
    2030,   855,   807,  2242,   761,   279, -1597,   345,   220, -1598,
    2265,  1449,   211,  2275,   392,   411,  1646,   114,   291,  1864,
    2070, -1883,  2368,  2489,  1846,  2378,  2079,   530,   134,   135,
     360,   136,  1589,   838,   838,  1779,   143,   144,  1508,  2484,
    1777,   860,  1989,   449,   842,   161,  1980,  1883,   708,  1220,
     297,  1525,   807,  2429,  1751,  1486,   430,  1580,  1599,  2690,
    2195,   536,   169,  1850,  2722,   215,  2195, -1603,   211,   481,
   -1601,  1461,  1220,  -520,   505,  2725,   758,  2118, -1839,  2749,
   -1626,  1228,  1220,   127,   838,  1639,   709,   536,  2010,   219,
    1821,  1972,  1897, -1883,   327,  2331,  1249,  2238,  1996,  2217,
     221,  -520,  -520,   689,  2290,  1239,  1030, -1784,   751, -1784,
    2296, -1852, -1788,  1282,  1286,   419,    94, -1883,  1617,  1677,
     251,  2065,  -697,  1311,  2114,   321,  -697,  1818,  1220,   701,
    1329,  1331,   258,  1573,  2171,  1132,  -695,   117,  2273,  1476,
    -695,   129,  1188,  2515,  1573,   283,  1453,    52,   730,  1388,
    1239,   253,   325,   438,  2702,  1954,  2656,   274,   275,    94,
    1246,  1281, -1883,  1206, -1815,  1800,   418,  1884,  2011,  2717,
    1416,  1192,  1199,  1881,  1274,  1699,  1325, -1883,   295,  2334,
      13,  1200,   128,  -697,   344,    13,   299,   412,  1325,  1192,
    1801,  2575,    94,   204,  1631,  2702,    53,  -695,  1391,   439,
    1443,  1305, -1883,  1700,  1701,  1573,  1541,  1192,   763,  1678,
    1192,   311,   253,  1454,  2090,  -520,   400,  1192,  2557,   731,
    2115,   314,  1780,   212,   394,  2234,  2243,  1246,     4,  1192,
    1885,  1526, -1870,  2347,    54,  1997,    55,  2120,    56,   702,
    1453,   536,   187,  -520,   130, -1790,    57,  1177,  2691,   188,
     752,   139,   766,   139,   139,  1958,  1959,   493,  2066,   284,
     139,  2227,   767,  1965,  1210,   485,   486,   243,  1244,  1180,
    1181,  1411,   491,   761,   690,   431,  1186,   139,   137,   212,
     507,   507,  2276,   507,  1268,  1570,   507,   514,  2045,   504,
    2423,  2424,   410,  1855, -1784,   280,  1855,  2425,  1714,  2371,
    1715,  1364,    58,  2095,   759,  2248,  2244,  1454,  1133,   137,
     413,  1264,  2098,   154,  1007,  2196,  1590,   281,   137,  1973,
     424,  2196,   450,   137,  -697,   840,  2430,   800, -1883,  1581,
    1012,   436,  -520,  1420,  1420,  1420,   -35,  1268,  -695,   843,
     444,   445,   768,   446,   447,    94,  1433,  1435,   741,   453,
     139,   139,   260,  1441,  1294,   512,  2358,  2209, -1788,  2088,
    2029,  1394,   585,   585,   129,  1819,   470,   368,  1600,     5,
     137,  1211,  1212, -1784,  1913,  1388,  2221,  2222,   710,  2071,
    2223, -1788,  2490,   492,   451,   715,  1321,   137,   139,   187,
    2692, -1788,   137,  2239,    60,  1024,   188,   694,  2396,   283,
     585,  1582,  1503,   137,   705,  1268,   781,   137,  2403,   137,
    -702,   139,   769,  1896,  1395,  2647,    97,   243,   255,   243,
    1305,  2259,   243,  1866,  2277,  2500,  2260, -1815,  2542,  2543,
    1634,  2053,  1851,   243,  1702,  1394,  2084, -1788,    61,   800,
     537,   137,  1012,  1852,   542,   292,   265,  2657,  2414,  1394,
    2416,   746,  2401,   189,  1909,   346,  -700,   770,  1886,  2245,
    1573,  1019,  1787,  -520,   579,   749,   537,   130,  1268,  1532,
    1971,  1008,  2315,   394,  1448, -1852,   137,   763,   137,   261,
     716,  2434,  2103,   861,  2039,   597,  -702,   599,  1395,  2516,
     604,   606,  1178,   608,  2043,  1264,   149,  1851,  1193,  1556,
   -1788,  1815,  1395,  1468,  1007,  1007,  1007,   771,  1852,  1503,
   -1687,  2452,  2453,   284,  1845,  1847,  1193,   613,   763,  2142,
   -1883,   766,  1855, -1788,   687,   190,  1007,    64,  2440,   696,
     515,   767,  -700, -1788,  1193,  1820,   707,  1193,  2072,   518,
    1197,  1481,  2350,   187,  1193,  1198,  1517,  1860,  2441,  1194,
     188,   712,  1570,  2249,  2250,  2251,  1193,   979,  1541,   980,
    2214,  1132,   766,  1575,  1755,  1703,    42,  1680, -1870,   516,
      67,  2204,   767,  2159,  2442,   841,  2268,   322,  2270, -1788,
     846,   191,   466,  1898,   849, -1667,   192,  1868, -1669,   118,
    2712,  1029,  2506,   851,   851, -1664,   754,   969,  1197,  2443,
     189,  1268, -1883,  1198,   137,   813,  2753,  1692,   216,  2162,
    1014,   768,  1902,   182,  1364,  1456,  2252,  2301,  2711,  1934,
     537,   351,  2049,  1948,  1932,    43,   587,  1935,   986,   745,
    2195,  1007,  1807,  1264,    23,  1947,  1273,   786,  1951,  1263,
     787,  1276,    68,  1273,  1363,  2051,  1955, -1883, -1820,  1179,
    1804,  1273,   768,   413,   526,   154,  -692,   -96,  1246,   454,
    2754,  1008,  1008,  1008,  1351,  1273,  1356,  1258,  2755,  2084,
    2332,  1382,   190,   305, -1565,   519,  2547,  2548,  2035,  2629,
    2135,   769,   154,  1008,  1022,  1404,    43,   222,  2154,  1007,
     193,  2155,     3,  2291,  1461,    15,  1007,  1007,  1007,  1426,
    2534,   183,   763,  2639,  1426,  2136,  2507, -1671,  2615,  1007,
    1007,  1007,  1007,  1007,  1007,  1007,  1007,  2117,  1426,  1007,
      24,  2422,   769,  2482,  1305,  1573,   770,  2483,   191,  1659,
   -1784,   730, -1784,   192,  1133,  1782,  1446,  1317,  1264,  2253,
    2254,   979,   328,   980,  2255,  1714,   766,  1715,  1469,   588,
    1949,   187,  2756,  1635,   189,  2195,   767,  1457,   188,   154,
    2349,  1364,  1803,  1393,     5,   170,  1171,   770,  2505,  1807,
     137,  2336,  2652,   405,   520,  2163,   771,  2192,   243,  2341,
    1487,  1273,  2204,  2317,   254,   154, -1565,  1660,  1008,  1636,
    1632,  2630,  1505,  1936, -1800,  1695,  -692,  1264,   -96,   217,
    -692,   607,   733,   467, -1883,  1841,  1842,  1843,  1844,   171,
    1322,   137,   986,  2444,   306, -1800,  1348,   771,  1273,   172,
    2058,    18,  1154,  1289,   406,  1937,   190,  2062,  2361,  1273,
     139,   139,  1215,   137,  1290,  2558,   768,   255,  2640,  1477,
     763,  1976,  2539,  2540,  2553, -1883,  1008,  1938,  2263,  2263,
     223,  1556,  1809,  1008,  1008,  1008,  1427,  -692,   468,  1031,
    1916,  1427,   243,  2677,  1264,  1253,  1008,  1008,  1008,  1008,
    1008,  1008,  1008,  1008,  2559,  1427,  1008,  1628,  2091,   979,
    2131,   980,   191,   761,   766,  2196,  1273,   192,  2617,  2269,
    1273,  2271,   589,  1496,   767,  1870,   351,    16,  1871,   173,
    1939,  1872,  1873,    27,   137,  1470,   769,   137,   154,  2279,
    2205,  2560,  1155,  2342,   730,  1579,   137, -1784,  2044, -1802,
     329, -1820,  2144,  1364,   762,  1252,   730,   137,  1348,  1272,
    1268,   137,  1754,  2137,   619,   856,  1272,  1307,   252,   226,
     394,  1979,  2408,   728,  1272,   763,  1573,  1326,    28,   228,
     986,   770,  1347,  1156,  1354,     5,  1354,  1362,  1379,  1326,
    1940,  2314,   189,  2363,   722,  1916,  2664,  1543,  1544,   174,
      33,  2659,  1297,  2348,   768,  1628,  1354, -1881,  2570,   839,
     330,  1809,  1157,  1268,   979,   735,   980,  1789,  1620,   766,
     300,  1658,  1882,   229,   725,   137, -1784,   737,  -692,   767,
     729,   771,   856,   230,   763,   361,  1545,  1546,  2367,  1491,
    2196,  1755,  1348,  1007,   175,   730,  1254,    36,  1255,   243,
     137,  1983,  1808,  1610,  2590,  1207,  2591,  2593,  1264,  1020,
    2594,  2595,    39,  2610,   190,  2224,  2480,   362,  1672,   227,
    1789,  2311,  1883,   979,   769,   980,   515, -1784,   766,  2536,
    2037,  2230,  2527, -1883,  1252,   986,  1941,   154,   767,  2470,
      40,  1578,  2528,  2741,   176,   836,   836, -1565, -1883,  2471,
    2257,   763,  1611,   718,  1272, -1565, -1565,  1158, -1883,   768,
   -1565,  2744,  2758,   232,  2360,   516,   739,   763,   416,   770,
     191,  2472,  1642, -1883,  1628,   192,  1298,  1299,   316,  2280,
    1452,    48,  1007,  2282,  1452,  1273,  2611,    49,  1789,  2063,
     979,  1272,   980,  1300,   986,   766,   836,  2306,  1332,   764,
     765,  2473,  1272,  2073,   228,   767,   471,   472,   473,  1648,
    2201,   766,   243,   137,  2040,    51,   441,   614,   768,   771,
    1603,   767,  2310,  2361,   442,  1273,   298,  1488,  1910,   769,
     719,  1643,   720,   233,  1644,  2325,  2325,   137,  1604,   317,
     318,   756,  1884,  2205,  1874,  1875,  1362,  1301,   229,   615,
    1008,  1789,  1333,  2233,  2104,  2718,  1628,  1911,   230,  1272,
    1334,   986,  1197,  1272,   154,  2122,  1497,  1198,  1876,  1877,
    2665,  2667,   231,   757,   770,  2732, -1115,  2719,  2037,  1426,
    2426,  2720,  1430,  1871,  1007,   768,  1872,  1873,   769,  2573,
    2574,  2696,  1197,  2703,  2704,  2697,  1557,  1198,  1558,   139,
     557,   768,  2716,  2721,  2105,  1885,  2496,  2733,  2497,  2427,
    2532,  1674,  1966,  1491,  2569,   763,  2402,   558,   137,  1927,
   -1115,  2728,  2404,   155,   771,   156,   474,  2734,   236,  2705,
   -1115,  2622,  2407,   770,   139,  2623,  2624,  2706,   232,  1008,
     475,  2491,  2258,  2418,  1335,  2533,  1489,  2263,  2263,  2359,
    2545, -1603,    94,  2362,   979,   769,   980,   559,  2363,   766,
    1788,  1628,  2527,    97,  1917,  2635,  1358,    93,   800,   767,
    2618,   769,  2528,  2237,  2546,   243,   154,   137,  2303,  2752,
    1273,  1984,  1985,   771,  1273,  2194,  1408,  1273,  2229,  1197,
     243,   394,   837,   837,  1198,  2323,    21,    22,   763,  1689,
     770,   100,  2445,  2304,    26,  2446,  2447,   101,   233,  1197,
   -1115,   234,   235,  1788,  1198,    46,   770,  2614,  2448,    94,
    1930,    47,  1900,   476,  2190,   986,  2237,   155,   106,   156,
      91,  1931,  2463,  2464,  1197,   477,  1427,  2009,   108,  1198,
    1273,  1008,   766,   837,   137,   109,  1921,  2019,  2020,   768,
     771,  2023,   767,  1681,  1694,   110,  1196,  1685,   763,  1707,
    1743,  1252,  1745,   112,  1687,  1197,   771,   113,  1690,  1917,
    1198,  1946,  2707,   600,   598,   601,  1005,  1197,  1272,   605,
   -1115,  1788,  1198,  1628,  1628,  2643,    94,  2106,  2648,  1273,
    1273,  1273,  1252,   560,   114,   719,  2494,   720,   120,   428,
    1928,  2237,   766,   236,   561,  2510,   122,  1968,  1969,  1970,
    2074,  2075,   767,  1974,  2040,   124,  1977,  1978,  1272,   769,
    1628,  2686,  2687,  2649,  2650, -1115,   478,   126,  2648,  2689,
    1436,  1437,   768,  1886,  1438,  1439,  1440,  2458,  1957,  2461,
    2520, -1883,  2307,  1663,  1788,  1664,  1422,  1423,  1273,  1874,
    1875,   508,  1998,   510,  1999,   816,   511, -1581, -1581, -1581,
   -1581, -1883,   137,  2067,   770,  2068,   140,  2549,   139, -1115,
     142,  2550,  2551,  1876,  1877, -1115,  1519,  1520,  1521,  1522,
    1967, -1580, -1580, -1580, -1580,   149,   162, -1883,  2355,   163,
    2356,   763,   768,   164,   817,   818,   819,   820,   821,  2410,
     167,  2411,   769,  2004,   181,   562,   563,  2466,   137,  2467,
     185,  1761, -1883,  1762,   771,   734,   736,   738,   740,  2237,
     564,  1187,   565,  1189,  2012,   186,   204,   242,   193,   247,
     249,   634,   635,  2668,  2532,   766,   248,   250,   257,  1273,
     273,   269,   278,   294,   296,   767,   154,   770,   300,   302,
     303,   307,  1944,   308,   309,   312,   313,   326,   333,  2525,
    2662,   336,   769,   334,   338,   340,  1005,  1005,  1005,  2669,
     342,   349,  1273,  1272,  1273,   351,   353,  1272,   354,   356,
    1272,   392,   394,  1252,   397,   398,  2527,   401,  1005,   403,
     408,   137,   409,   187,  1628,   243,  2528,   771,   420,   421,
     422,   429,  1628,   413,   455,   456,   566,   770,  1981,  1982,
    -352,  1273,   458,  1273,   460,  2107,   484,   490,   428,  1995,
     487,   494,   495,   502,   509,   768,  2000,  2124,   522,   523,
     524,    52,   534,  1272,   822,   823,   824,   825,   826,   827,
     828,   647,   648,   545,   528,   549,  2299,   550,   551,   580,
     553,   137,   554,   567,  -365,  2013,   556,   771,  1007,   591,
     582,   592,   593,   609,   611,   617,  1273,   693,   618,   621,
     622,   695,  1628,   698,   706,   724,   743,   776,  2169,   741,
      53,   750,  1272,  1272,  1272,   779,   760,  2169,  1921,   783,
     785,  1231,   792,  1245,   795,   769,  1261,   796,   798,   803,
    1284,   808,  2145,  2146,  2147,  2148,  2149,  2150,  2151,  2152,
     810,   814,   800,   840,  2057,  1320,   853, -1671,    54,   967,
      55,  1346,    56,   970,   847,  1012, -1883,  1021,  1018,   243,
      57,  1017,  1039,  2064,  1034,  1162,  1042,  1143,  1170,  2069,
     770,  1272,  1402,  1824,  1406,  1173,  1825,  1201,  1213,  1175,
    1182,  1005,  1287,  1826,  1827,  1217,  1183,  1184,  1005,  1005,
    1005,  1425,  1273,  1185,  1273,  1226,  1425,   139,  1190,  1219,
    1227,  1005,  1005,  1005,  1005,  1005,  1005,  1005,  1005,  2191,
    1425,  1005,  1326,  1411,  1202,   829,    58,  1326,  1204,  1205,
     771,  1308,  2215,  1444,  1409,  1273,  1445,  1446,   830,  1459,
    2670,  1828,  1418,  1419,  2671,  2672,  1326,  1326,  1465,  1467,
    1326,  1471,  1480,   357,  1824,  1008,  1429,  1825,  1482,  1500,
    1494,   441,  1506,  1571,  1826,  1827,  1273,  1509,   358,  1523,
    1527,  1529,  1272,  1346,  1575,  1261,  1588,  1592,   359,  1594,
    1591,  1596, -1583,  1605,  1606,  2673,  2124,    59,  1607,  2264,
    2264,  1326,  1608,  1759,  1760,  2309,  1326,  1326,  1326,  1613,
    1615,  2674,  2675,  1618,  1624,  1272,  1622,  1272,  1364,  1638,
    1829,  1640,  1828,  1220,   360,  2189,  1650,  1662,    60,  1655,
    1668,  1666,  1675,  1670,  1682,  1683,  1696,  1684,  1686,  1688,
    1691,  1693,  1746,  2193,  1698,  1747,  1761,  1749,  1762,  1830,
    1763,  1752,  1790,  1783,  1272,  1791,  1272,  1793,  1246,  1273,
    1805,  1273,  2210,  1795,  2212,  1809,  1816,  1346,  2213,  2729,
    1831,  1822,    61,  1511,  1856,    62,  2218,  1859,  1839,  1867,
    1880,  1581,  1895,  1903,  1764,  1765,  1766,  1922,  1918,  1627,
    1926,  1829,  1933,  1953,  1960,  1988,  1511,  2002,  2005,  2008,
    2015,  2024,  2014,  1754,  2033,  2017,  2032,  2031,  2027,  1272,
     137,  2028, -1553,  2046,  2034,  1654,  2050,  2054,  2055,  2059,
    1830,  1461,  1326,  2078,  1832,  2080,   139,  2085,  2086,  2092,
    2093,  2096,  2100,  2125,  1767,  2099,  1768,  2119,  2353,  2127,
      63,  1831,  2128,  1769,  2131,  2165,  1770,  2138,  2172,  2139,
    2173,  2174,  2175,   428,  2184,  2186,  2219,  2225,  2231, -1602,
    2266,    64,  2283,  2289,  2292,  2295,  2300,  2311,  2313,  2327,
    2330,  2298,  2337,  2339,  2372,  2335,  2040,  1833,  2405,  2420,
     361, -1558, -1600,  2415,  2417,  2436,    65,  1627,    66,  2435,
    2437,  2438,  2449,  2454,  2459,  1832,  2488,  2342,  2491,  2498,
    2499,   428,  2501,  2523,    67,  1272,  2517,  1272,  2555,  2504,
    2518,  2519,   362,  2538,  2575,  2554,  2613,  2621,  2625,  2633,
    2653,  2632,  -234,  2620,  2627,  1005,  2654,  2660,  2684,  2663,
    2685,  2730,  1771,  2737,  1772,   139,  2743,  1834,  1272,  2745,
    2747,    17,    92,   125,    38,   166,   256,  2432,  1833,   209,
    1835,  1364,   266,   119,   290,   277,   210,   241,  1003,   547,
     538,  2121,   581,   457,   713,   443,   586,   323,  1735,  1272,
    1214,   852,   527,   804,  2740,   363,    68,  2113,  1007,  1007,
     364,  1673,  1964,  1016,  2203,  2688,  2351,  2369,  1225,   139,
    1038,  2274,   965,  1463,  2022,  2021,  2077,  2493,  2487,  1798,
    2048,  2469,  2272,  1326,  1849,  1479,  1627,  1326,  1834,  1814,
    1007,   365,  1799,  1857,  1005,  2413,  2278,  2089,  2419,   366,
    1572,  1835,  2294,  1879,  1891,  2101,  1595,  1899,  1598,  1007,
    1908,  2302,   367,  1836,  2129,  2183,  2316,  1925,  2153,  1915,
    2305,  1629,  1630,  1380,  2326,  1653,  2736,  2181,  1963,  2457,
    1924,  2182,  1272,  2514,  1272,  2462,  1863,  2319,  2320,  2321,
    2322,   368,  2465,   332,   369,  1621,  1797,   213,   778,  2143,
    2509,  1485,   370,  2001,   310,   293,   616,   812,  1952,  2619,
     448,  1191,   541,  -231,   272,  2503,  2167,  1007,  1627,  2451,
    1894,   489,  2288,  2112,   789,  2678,     0,     0,     0,     0,
       0,     0,     0,   603,  1836,     0,   428,     0,     0,     0,
       0,  1425,   371,     0,     0,   372,  1005,     0,  2264,  2264,
       0,     0,  1326,  1326,  1773,     0,  1326,  1326,     0,  1326,
       0,     0,     0,  2485,  1994,  1008,  1008,     0,  2486,     0,
       0,     0,     0,     0,  1915,     0,     0,     0,  1003,  1003,
    1003,     0,     0,     0,     0,     0,  2006,     0,     0,  2007,
     632,     0,     0,     0,     0,     0,     0,  1008,     0,     0,
    1003,     0,     0,     0,  1774,     0,     0,     0,     0,     0,
       0,  1714,  1761,  1715,  1762,  1775,  1008,     0,     0,  1252,
       0,     0,     0,  1627,     0,     0,     0,  2511,     0,     0,
       0,     0,  -903,     0,     0,  -903,     0,     0,     0,  2038,
    2631,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2530,  2531,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1008,  1220,  2373,  2541,     0,  2374,
       0,     0,  2375,  1252,     0,     0,   972,     0,     0,     0,
    2376,     0,     0,  2552,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   973,  1237,  1003,     0,     0,     0,     0,
    -903,     0,  1237,  1237,     0, -1788,     0,     0,  2572,     0,
    2710,     0,  1237,  2576,  2577,     0,  1252,  -903,     0,  1237,
    1237,     0,     0,     0,     0,     0,     0,  2377,     0,     0,
       0,     0,     0,  2616,     0,  1627,  1627,     0,  1237,  1237,
       0,     0,     0,     0,     0,  2578,  2378,     0,     0,     0,
       0,     0,     0,  1003,     0,  2738,  2739,  1252,     0,     0,
    1003,  1003,  1003,  2634,  2130,     0,  2636,  2637,     0,     0,
       0,   650,  1627,  1003,  1003,  1003,  1003,  1003,  1003,  1003,
    1003,     0,     0,  1003,     0,   974,   975,   976,  2579,     0,
       0,     0,  2746,     0,   977,     0,  2759,     0,     0,  2170,
       0,     0,     0,     0,     0,     0,  2180,  2180,  2661,  -903,
    -903,  -903,     0,     0,     0,     0,  1237,     0,  -903,     0,
       0,  2580,     0,     0,     0,  2379,     0,  1261,     0,  -903,
       0,     0,  2199,  2380,     0,     0,     0,  1994,  1994,     0,
       0,  2581,     0,     0,     0,  2582,  2381,     0,     0,  1484,
       0,   981,   982,   983,     0,     0,     0,   984,     0,  1237,
       0,     0,  -903,   654,     0,     0,     0,     0,  -903,  2583,
    -903,     0,     0,  -903,  1237,  -903,  -903,  -903,  2382,     0,
       0,  -903,     0,  -903,     0,     0,     0,     0,  -903,     0,
       0,     0,  2236,     0,     0,     0,   985,     0,  2383,     0,
    2384,     0,     0,     0,     0,  1237,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -903,     0,  2385,  2386,     0,  -903,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2281,     0,     0,  -903,
       0,   659,     0,     0,     0,  2236,  1627,     0,     0,     0,
    2584,     0,     0,  2387,  1627,     0,     0,     0,     0,     0,
       0,     0,     0,  -903,  1237,     0,     0,  2585,     0,  1237,
     987,     0,     0,  1908, -1788,     0,     0,     0,     0,     0,
    2388,     0,     0,     0,     0,     0,     0,     0,  2586,     0,
       0,     0,     0,     0,  -903,     0,     0,     0,     0,     0,
       0,     0,  2318,     0,     0,     0,  2389,     0,     0,  2587,
    1005,     0,     0,  2390,     0,     0,     0,     0,     0,     0,
    2236,   988,   989,     0,  1627,     0,  2391,  -903,  2588,     0,
    2392,     0,     0,  -903,     0,   668,  2589,     0,     0,     0,
       0,     0,     0,     0,     0,  -903,  -903,     0,     0,  1994,
       0,  1785,     0,     0,     0,     0,     0,     0,  1261,     0,
       0,     0,     0,     0,   993,     0,     0,     0,     0,     0,
       0,  2393,     0,     0,     0,     0,     0,  1003,  -903,     0,
    2394,     0,     0,     0,   994,     0,     0,     0,  -903,   995,
    1237,     0,     0,  2409,  -903,     0,   996,     0,   137,     0,
       0,     0,     0,  1237,  1785,     0,     0,     0,  -903,  2395,
       0,     0,     0,  -903,     0,     0, -1788,     0,     0,  2396,
    -903,     0,  -903,     0,     0,  2397,     0,     0,  -903,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2236,     0,
       0,  1237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1003,     0,     0,     0,
       0,     0,  1785,     0,     0,     0,     0,     0,     0,     0,
     863,     0,   864,     0,   865,     0,     0,     0,     0,   866,
       0,     0,     0,     0,     0,     0,     0,   867,     0,     0,
       0,     0,     0,  2199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1237,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1237,     0,     0,  1237,     0,     0,
     868,   869,     0,     0,     0,  1785,     0,     0,     0,     0,
       0,   870,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   871,     0,  2495,   872,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1003,   873,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   874,     0,     0,     0,     0,  2521,     0,     0,
     875,     0,   876,     0,  2524,     0,     0,  2526,     0,  -739,
       0,  -739,  -739,  -739,  -739,  -739,  -739,  -739,  -739,     0,
    -739,  -739,  -739,     0,  -739,  -739,  -739,  -739,  -739,  -739,
    -739,  -739,  -739,   877,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   878,     0,     0,     0,     0,   879,
       0,     0,     0,     0,     0,     0,     0,  2556,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2571,     0,     0,     0,   880,  2199,  2199,     0,     0,
       0,     0,   881,     0,     0,   882,   883,  1261,     0,     0,
       0,     0,     0,     0,     0,   884,     0,     0,     0,     0,
       0,     0,   885,     0,   886,     0,     0,   887,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2199,     0,
       0,     0,  2199,  2199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2638,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   888,
       0,     0,     0,   889,     0,   890,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   891,   972,     0,     0,     0,
       0,  -739,  -739,     0,  -739,  -739,  -739,  -739,     0,     0,
    1005,  1005,     0,   973,     0,     0,     0,     0,     0,     0,
       0,   892,     0,     0,     0,     0,   863,     0,   864,  2695,
     865,     0,     0,     0,   893,   866,     0,     0,     0,     0,
       0,  1237,  1005,   867,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2724,  2727,     0,     0,     0,   894,
     895,  1005,     0,     0,     0,     0,     0,     0,     0,     0,
     896,     0,     0,     0,     0,     0,   868,   869,     0,     0,
       0,     0,     0,     0,   897,   898,     0,   870,     0,     0,
    2742,   899,     0,     0,     0,   900,     0,     0,   871,     0,
       0,   872,     0,   901,  1338,   974,   975,   976,     0,     0,
       0,     0,     0,   902,   977,   873,     0,  2751,     0,  1005,
       0,     0,   903,     0,     0,     0,     0,     0,     0,     0,
       0,   904,     0,     0,     0,     0,   905,   906,   874,     0,
     907,     0,   908,     0,     0,     0,   875,     0,   876,   909,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -739,     0,     0,     0,     0,     0,     0,  1339,
       0,   981,   982,   983,     0,     0,     0,   984,     0,   877,
     911,     0,     0,     0,     0,     0,   912,     0,     0,     0,
     878,   913,     0,     0,     0,   879,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -739,     0,     0,     0,   985,     0,   914,     0,
       0,   880,     0,     0,     0,     0,     0,     0,   881,     0,
       0,   882,   883,     0,     0,     0,  1237,     0,     0,     0,
       0,   884,     0,     0,     0,     0,     0,     0,   885,     0,
     886,     0,     0,   887,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1003,     0,  1237,  1237,     0,   863,     0,   864,
       0,   865,     0,     0,     0,     0,   866,     0,     0,     0,
     987,     0,     0,     0,   867,   888,     0,     0,     0,   889,
       0,   890,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   891,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   868,   869,     0,
       0,     0,     0,     0,     0,     0,     0,   892,   870,     0,
       0,   988,   989,     0,     0,     0,     0,     0,     0,   871,
     893,     0,   872, -1883,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   873,     0,     0,     0,
       0,     0,     0,     0,     0,   894,   895,     0,     0,     0,
       0,     0,  1237,     0,   993,     0,   896,     0,     0,   874,
       0,     0,   761,     0,     0, -1168,     0,   875,     0,   876,
     897,   898,     0,     0,   994,     0,     0,   899,     0,   995,
       0,   900,     0, -1168,     0,     0,   996,   243,   137,   901,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   902,
     877,     0,     0,     0,     0,     0,     0,     0,   903,     0,
       0,   878,     0,     0,     0,     0,   879,   904,     0,     0,
       0,     0,   905,   906,     0,     0,   907,     0,   908,     0,
       0,     0,     0,     0,     0,   909,     0,   972,     0,     0,
       0,     0,   880,     0,     0,     0,     0,     0,   910,   881,
       0,     0,   882,   883,   973,     0,     0,     0,     0,     0,
       0,     0,   884,     0,     0,     0,   911,     0,     0,   885,
       0,   886,   912,     0,   887,     0,     0,   913,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   914,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1237,     0,   888,     0,     0,     0,
     889,     0,   890,     0,     0,     0,     0,   863,     0,   864,
       0,   865,   891,     0,     0,     0,   866,     0,     0,     0,
       0,     0,     0,     0,   867,     0,   974,   975,   976,     0,
       0,     0,     0,     0,     0,   977,     0,     0,   892,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,   893,     0,     0,     0,     0,  1237,   868,   869,     0,
    1237,  1237,     0,     0,     0,     0,     0,     0,   870,     0,
       0,     0,     0,     0,     0,     0,   894,   895,     0,   871,
       0,     0,   872,     0,     0,     0,     0,   896,     0,     0,
     766,     0,   981,   982,   983,     0,   873,     0,   984,     0,
     767,   897,   898,     0,     0,     0,     0,     0,   899,     0,
       0,     0,   900,     0,     0,     0,     0,     0,     0,   874,
     901,     0,     0,     0,     0,     0,     0,   875,     0,   876,
     902,     0,     0,     0,     0,     0,     0,   985,     0,   903,
       0,     0,     0,     0,     0,     0,     0,     0,   904,     0,
       0,     0,     0,   905,   906,     0,     0,   907,     0,   908,
     877,     0,     0,     0,     0,     0,   909,     0,     0,     0,
       0,   878,     0,     0,     0,     0,   879,     0,     0,  1661,
     768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1003,  1003,     0,     0,     0,   911,     0,     0,
       0,     0,   880,   912,     0,     0,     0,     0,   913,   881,
       0,   987,   882,   883,     0,     0,     0,     0,     0,     0,
       0,     0,   884,     0,  1003,     0,     0,     0,     0,   885,
       0,   886,     0,     0,   887,   914,     0,     0,     0,     0,
       0,     0,     0,  1003,     0,     0,     0,     0,     0,     0,
     769,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   988,   989,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   888,     0,     0,     0,
     889,     0,   890,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   891,     0,     0,   770,     0,     0,     0,     0,
       0,  1003,     0,     0,     0,   993,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   892,     0,
    1044,     0,  1045,     0,     0,   994,     0,  1046,     0,     0,
     995,   893,     0,     0,     0,  1047,     0,   996,     0,   137,
       0,     0,     0,     0,     0,   771,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   894,   895,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   896,  1048,  1049,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1050,
       0,   897,   898,     0,     0,     0,     0,     0,   899,     0,
    1051,     0,   900,  1052,     0,     0,     0,     0,     0,     0,
     901,     0,     0,     0,     0,     0,     0,  1053,     0,     0,
     902,     0,     0,     0,     0,     0,     0,     0,     0,   903,
       0,     0,     0,     0,     0,     0,     0,     0,   904,     0,
    1054,     0,     0,   905,   906,     0,     0,   907,  1055,   908,
    1056,     0,     0,     0,     0,     0,   909,  1057,     0,  1058,
    1059,  1060,  1061,  1062,  1063,  1064,  1065,     0,  1066,  1067,
    1068,     0,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,
    1077,  1078,     0,     0,     0,     0,     0,   911,     0,     0,
       0,     0,  1079,   912,     0,     0,     0,  1080,   913,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1081,   972,   914,     0,     0,     0,     0,
    1082,     0,     0,  1083,  1084,     0,     0,     0,     0,     0,
       0,   973,     0,  1085,     0,     0,     0,     0,     0,     0,
    1086,     0,  1087,     0,     0,  1088,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1232,     0,     0,   761,
       0,     0,  1537,  1538,  1539,     0,     0,  1089,     0,     0,
    1540,  1090,     0,  1091,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1092,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   974,   975,   976,     0,     0,     0,  1093,
       0,     0,   977,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1094,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   972,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1095,     0,     0,
       0,   973,     0,     0,     0,     0,   978,     0,  1096,     0,
       0,     0,   979,     0,   980,     0,     0,   766,     0,   981,
     982,   983,     0,  1097,     0,   984,     0,   767,  1232,  1098,
       0,   761,     0,  1099,  1537,  1538,  1539,     0,     0,     0,
       0,  1100,  1540,     0,     0,     0,     0,     0,     0,     0,
       0,  1101,     0,     0,     0,     0,     0,     0,     0,     0,
    1102,  1541,     0,     0,   985,     0,     0,     0,     0,  1103,
       0,  1542,     0,     0,  1104,  1105,     0,     0,  1106,     0,
    1107,     0,     0,   986,     0,     0,     0,  1108,     0,     0,
       0,     0,     0,   974,   975,   976,     0,     0,     0,     0,
    1109,     0,   977,     0,     0,     0,   972,   768,  1543,  1544,
       0,     0,     0,   763,     0,     0,     0,     0,  1110,     0,
       0,     0,     0,   973,  1111,     0,     0,     0,     0,  1112,
       0,     0,     0,  1862,  2713,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,  1234,  1545,  1546,     0,
       0,     0,   979,     0,   980,     0,  1113,   766,     0,   981,
     982,   983,     0,     0,     0,   984,     0,   767,     0,     0,
       0,     0,  1235,     0,     0,     0,     0,   769,     0,     0,
       0,     0,     0,  1541,     0,  1547,     0,     0,     0,   988,
     989,  1548,     0,  1542,  1549,  1232,     0,     0,   761,     0,
       0,     0,  1550,     0,   985,     0,     0,     0,     0,  1551,
       0,     0,     0,     0,  1552,   974,   975,   976,     0,     0,
       0,     0,   770,   986,   977,     0,     0,     0,     0,     0,
    1543,  1544,   993,  1553,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2714,   768,     0,     0,
       0,     0,   994,     0,     0,     0,     0,   995,     0,     0,
       0,     0,     0,     0,   996,     0,   137,     0,  1234,  1545,
    1546,     0,   771,   972,   979,     0,   980,     0,   987,   766,
       0,   981,   982,   983,     0,     0,     0,   984,     0,   767,
     973,     0,     0,     0,  1235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1547,     0,     0,
       0,     0,     0,  1548,     0,  1232,  1549,   769,   761,     0,
       0,     0,     0,     0,  1550,     0,   985,     0,     0,   988,
     989,  1551,     0,     0,     0,     0,  1552,     0,     0,     0,
       0,     0,     0,  1929,     0,   986,     0,     0,     0,     0,
    1554,     0,  1555,     0,  1556,  1553,     0,  1557,     0,  1558,
    1559,  1560,   770,     0,  1561,  1562,     0,     0,     0,   768,
       0,     0,   993,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   974,   975,   976,     0,     0,     0,     0,     0,
       0,   977,   994,   972,     0,     0,     0,   995,     0,     0,
     987,     0,   763,     0,   996,     0,   137,     0,     0,     0,
     973,     0,   771,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1384,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1234,     0,     0,     0,   769,
       0,   979,     0,   980,     0,     0,   766,     0,   981,   982,
     983,   988,   989,     0,   984,     0,   767,     0,     0,     0,
       0,  1235,     0,     0,     0,     0,     0,     0,     0,     0,
    1232,     0,  1554,   761,  1555,     0,  1556,     0,     0,  1557,
       0,  1558,  1559,  1560,   770,     0,  1561,  1562,     0,     0,
       0,     0,     0,   985,   993,     0,     0,     0,     0,     0,
       0,     0,   974,   975,   976,     0,     0,     0,     0,     0,
       0,   977,   986,     0,   994,     0,     0,     0,     0,   995,
       0,     0,   763,     0,     0,     0,   996,     0,   137,     0,
       0,     0,     0,     0,   771,     0,   768,     0,  1652,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   972,     0,
       0,     0,     0,     0,     0,  1234,     0,     0,     0,     0,
    1233,   979,     0,   980,     0,   973,   766,   987,   981,   982,
     983,     0,     0,     0,   984,     0,   767,     0,     0,     0,
       0,  1235,     0,     0,     0,     0,     0,     0,     0,     0,
    1232,     0,     0,   761,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   769,     0,     0,     0,
       0,     0,     0,   985,     0,     0,     0,     0,   988,   989,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   986,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1930,     0,     0,     0,     0,     0,
       0,   770,     0,     0,     0,  1931,   768,   974,   975,   976,
       0,   993,     0,     0,     0,     0,   977,     0,   972,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
    1327,   994,     0,     0,     0,   973,   995,   987,     0,     0,
       0,     0,     0,   996,     0,   137,     0,     0,     0,     0,
       0,   771,     0,     0,     0,     0,     0,     0,     0,     0,
    1234,     0,  1232,     0,     0,   761,   979,     0,   980,     0,
       0,   766,     0,   981,   982,   983,   769,     0,     0,   984,
       0,   767,     0,     0,  1232,     0,  1235,   761,   988,   989,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   985,     0,
       0,   770,     0,     0,     0,     0,     0,   974,   975,   976,
       0,   993,     0,     0,     0,     0,   977,   986,     0,     0,
     972,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,   994,     0,     0,     0,     0,   995,   973,     0,     0,
       0,   768,   972,   996,     0,   137,     0,     0,     0,     0,
    1384,   771,     0,     0,  1389,     0,     0,     0,     0,   973,
    1234,     0,  1232,     0,     0,   761,   979,     0,   980,     0,
       0,   766,   987,   981,   982,   983,     0,     0,     0,   984,
       0,   767,     0,     0,  -959,     0,  1235,  -959,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   769,     0,     0,     0,     0,     0,     0,   985,     0,
       0,     0,     0,   988,   989,     0,     0,     0,     0,   974,
     975,   976,     0,     0,     0,     0,     0,   986,   977,     0,
     972,     0,     0,     0,     0,     0,     0,     0,     0,   763,
       0,   974,   975,   976,     0,     0,   770,   973,     0,     0,
     977,   768,  -959,     0,     0,     0,   993,     0,     0,     0,
       0,   763,     0,     0,     0,     0,     0,     0,     0,  -959,
       0,     0,  1234,     0,     0,     0,   994,     0,   979,     0,
     980,   995,   987,   766,     0,   981,   982,   983,   996,     0,
     137,   984,     0,   767,  1234,     0,   771,     0,  1235,     0,
     979,     0,   980,     0,     0,   766,     0,   981,   982,   983,
       0,     0,     0,   984,     0,   767,     0,     0,     0,     0,
    1235,   769,     0,     0,     0,     0,     0,     0,     0,     0,
     985,     0,     0,   988,   989,  1511,     0,     0,     0,   974,
     975,   976,     0,     0,     0,     0,     0,     0,   977,   986,
       0,     0,   985,     0,     0,     0,     0,     0,     0,   763,
       0,  -959,  -959,  -959,     0,     0,   770,     0,     0,     0,
    -959,   986,     0,   768,     0,     0,   993,     0,     0,     0,
       0,  -959,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1234,     0,     0,   768,   994,     0,   979,     0,
     980,   995,     0,   766,   987,   981,   982,   983,   996,     0,
     137,   984,     0,   767,  -959,     0,   771,     0,  1235,     0,
    -959,     0,  -959,     0,     0,  -959,   987,  -959,  -959,  -959,
       0,     0,     0,  -959,     0,  -959,     0,     0,  1232,     0,
    -959,   761,     0,   769,     0,     0,     0,     0,     0,     0,
     985,     0,     0,     0,     0,   988,   989,     0,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,     0,   986,
       0,     0,  -959,     0,     0,     0,     0,   988,   989,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   770,     0,
       0,  -959,     0,   768,     0,     0,     0,     0,   993,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     770,     0,     0,     0,     0,  -959,   972,     0,   994,     0,
     993,     0,     0,   995,   987,     0,     0,     0,     0,     0,
     996,     0,   137,   973,  1232,     0,     0,   761,   771,     0,
     994,     0,     0,     0,     0,   995,  -959,     0,     0,     0,
       0,     0,   996,     0,   137,     0,     0,     0,     0,     0,
     771,  1232,     0,   769,   761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   988,   989,     0,     0,     0,
       0,     0,     0,     0,     0,  -959,     0,     0,     0,     0,
       0,     0,     0,     0,  1473,     0,     0,  -959,  -959,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,   972,     0,     0,     0,     0,     0,   993,     0,
       0,     0,     0,     0,     0,   974,   975,   976,     0,   973,
    -959,     0,     0,     0,   977,     0,     0,     0,   994,   972,
    -959,     0,     0,   995,     0,   763,     0,     0,     0,     0,
     996,     0,   137,     0,     0,     0,   973,     0,   771,     0,
    -959,     0,     0,     0,     0,  -959,     0,     0,     0,     0,
       0,     0,  -959,     0,  -959,     0,     0,     0,  1234,     0,
    -959,     0,     0,     0,   979,     0,   980,     0,     0,   766,
       0,   981,   982,   983,     0,     0,     0,   984,     0,   767,
       0,     0,     0,     0,  1235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   974,   975,   976,     0,  1657,     0,     0,     0,     0,
     977,     0,     0,     0,     0,     0,   985,     0,     0,     0,
       0,   763,     0,  1232,     0,     0,   761,     0,   974,   975,
     976,     0,     0,     0,     0,   986,     0,   977,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   763,     0,
       0,     0,     0,     0,  1234,     0,     0,     0,     0,   768,
     979,     0,   980,     0,     0,   766,     0,   981,   982,   983,
       0,     0,     0,   984,     0,   767,     0,     0,     0,     0,
    1235,  1234,     0,     0,     0,     0,     0,   979,     0,   980,
     987,     0,   766,     0,   981,   982,   983,     0,     0,     0,
     984,   972,   767,     0,     0,     0,     0,  1235,     0,     0,
       0,     0,   985,     0,     0,     0,     0,     0,   973,     0,
       0,     0,  1232,     0,     0,   761,     0,     0,     0,   769,
       0,   986,     0,     0,     0,     0,     0,     0,     0,   985,
       0,   988,   989,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   768,     0,     0,   986,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,   768,     0,   993,     0,   987,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1515,     0,
     972,     0,     0,  1784,   994,     0,   761,     0,     0,   995,
     974,   975,   976,   987,     0,     0,   996,   973,   137,   977,
       0,     0,     0,     0,   771,   769,     0,     0,     0,     0,
     763,     0,     0,     0,     0,     0,     0,   988,   989,     0,
       0,     0,     0,     0,     0,     0,  1950,     0,     0,     0,
       0,     0,   769,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1234,   988,   989,     0,     0,     0,   979,
     770,   980,     0,     0,  1277,     0,   981,   982,   983,     0,
     993,   972,   984,     0,   767,     0,     0,     0,     0,  1235,
       0,     0,     0,     0,     0,     0,     0,   770,   973,     0,
     994,     0,     0,     0,     0,   995,     0,   993,     0,   974,
     975,   976,   996,     0,   137,     0,     0,     0,   977,     0,
     771,   985,     0,     0,     0,     0,     0,   994,     0,   763,
       0,     0,   995,     0,     0,     0,     0,     0,     0,   996,
     986,   137,     0,     0,     0,     0,     0,   771,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1234,     0,   768,     0,     0,     0,   979,     0,
     980,     0,     0,   766,     0,   981,   982,   983,     0,     0,
       0,   984,     0,   767,     0,     0,     0,     0,  1235,     0,
     974,   975,   976,     0,     0,   987,     0,     0,     0,   977,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     985,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   769,     0,     0,     0,     0,   986,
       0,     0,     0,  1234,     0,     0,   988,   989,     0,   979,
       0,   980,     0,     0,   766,     0,   981,   982,   983,     0,
       0,     0,   984,   768,   767,     0,     0,     0,     0,  1235,
       0,   972,     0,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,   973,   993,
       0,     0,     0,     0,   987,     0,     0,     0,     0,     0,
       0,   985,     0,     0,     0,     0,     0,     0,     0,   994,
       0,     0,     0,     0,   995,     0,     0,     0,     0,     0,
     986,   996,     0,   137,     0,     0,     0,     0,     0,   771,
       0,     0,     0,   769,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   768,   988,   989,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1036,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   987,     0,     0,   770,  1338,
     974,   975,   976,     0,     0,     0,     0,  -362,   993,   977,
    -362,     0,     0,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,     0,     0,     0,     0,     0,     0,   994,     0,
       0,     0,     0,   995,   769,     0,     0,     0,     0,     0,
     996,  -362,   137,  -362,     0,     0,   988,   989,   771,     0,
    -362,     0,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     0,
       0,     0,     0,     0,  1484,     0,   981,   982,   983,     0,
       0,     0,   984,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   993,
       0,     0,     0,     0,     0,     0,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   994,
       0,   985,     0,     0,   995,     0,     0,     0,     0,     0,
       0,   996,     0,   137,     0,     0,     0,     0,     0,   771,
       0,     0,     0,     0,     0,     0,     0,  -362,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   530,     0,     0,  -362,  -362,  -362,  -362,  -362,
       0,     0,  -362,  -362,     0,     0,  -362,     0,     0,     0,
       0,     0,  -362,     0,  -362,     0,     0,     0,     0,     0,
    -362,     0,     0,     0,     0,   987,     0,  -362,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -362,     0,
       0,  -362,     0,     0,     0,     0,     0,  -362,     0,  -362,
       0,     0,     0,     0,     0,     0,     0,     0,  -362,     0,
       0,     0,     0,     0,     0,     0,   988,   989,     0,     0,
       0,  -362,     0,     0,     0,     0,     0,     0, -1883,     0,
       0,     0,     0,  -362,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   993,
       0,  -362,     0,     0,     0,     0,     0,     0,     0,     0,
   -1168,     0,     0,     0,  -362,  -362,     0,     0,     0,   994,
       0,     0,     0,  -362,   995,     0,  -362,     0, -1168,     0,
       0,   996,   243,   137,     0,     0,     0,   529,     0,  -362,
       0,  -362,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -362,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -362,     0,     0,
       0,     0,  -362,     0,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -362,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -362,     0,  -362,  -362,  -362,     0,     0,     0,     0,
       0,  -362,     0,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -362,     0,     0,     0,     0,  -362,     0,
       0,     0,     0,  -362,     0,     0,     0,  -362,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
    -362,     0,     0,     0,  -362,  -362,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -362,     0,
       0,     0,     0,     0,  -362,  -362,     0,     0,   972,     0,
       0,   531,     0,     0,     0,     0,     0,     0,     0,  -362,
       0,     0,     0,   530,     0,   973,  -362,  -362,  -362,  -362,
    -362,     0,     0,  -362,  -362,     0,     0,     0,   624,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -362,     0,   625,     0,     0,   626,   627,   628,   629,
     630,   631,   632,     0,     0,     0,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -362,
       0,     0,  -362,     0,     0,     0,     0,     0,  -362,     0,
       0,     0,   633,     0,   634,   635,   636,   637,   638,   639,
     640,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   974,   975,   976,
       0,     0,     0,     0,  -362,     0,   977,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,   641,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -362,     0,     0,     0,
     978,     0,     0,     0,  -362,     0,   979,  -362,   980,     0,
       0,   766,     0,   981,   982,   983,     0,     0,     0,   984,
    -362,   767,     0,     0,     0,     0,     0,   642,   643,   644,
     645,   646,  -362,     0,   647,   648,     0,     0,     0,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   985,     0,
       0,     0,     0,     0,     0,     0,     0,   649,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   986,     0,     0,
      94,     0,  -362,   650,  -362,  -362,  -362,     0,     0, -1859,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   768,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -362,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   651,     0,     0,     0,  -362,
       0,     0,   987,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -362,     0,     0,     0,
       0,     0,     0,   652,     0,  -362,  -362,  -362,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   653,     0,  -362,
       0,   769,     0,     0,     0,   654,  -362,     0,   655,     0,
       0,     0,   531,   988,   989,     0,  1709,     0,     0,  1710,
       0,   656,  1711,   626,   627,   628,   629,   630,   631,  1712,
    1713,     0,     0,   657,  1415,     0,     0,     0,     0,     0,
       0,   658,     0,     0,   990,     0,   770,     0,   991,   992,
    1714,     0,  1715,     0,     0,     0,   993,     0,     0,   633,
       0,   634,   635,   636,   637,   638,   639,   640,     0,     0,
       0,     0,     0,     0,     0,     0,   994,     0,     0,     0,
       0,   995,     0,   659,     0,   660,   661,   662,   996,     0,
     137,     0,     0,     0,     0,     0,   771,   626,   627,   628,
     629,   630,   631,     0,     0,   641,     0,     0,     0,     0,
       0,     0,   663,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -359,     0,     0,   633,     0,   634,   635,   636,   637,   638,
     639,   640,     0,     0,     0,     0,  1716, -1859,     0,     0,
       0,     0,     0,     0,     0,     0,   664,   665,   666,     0,
       0,     0,     0,     0,   642,   643,   644,   645,   646,     0,
     667,   647,   648,     0,     0,  1717,   972,   668,     0,   641,
       0,  1718,     0,  1719,     0,     0,     0,     0,     0, -1815,
       0,     0,     0,   973,     0,     0,  1720,     0,     0,     0,
       0,     0,     0,     0,   649,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
     650,     0,     0,     0,     0,     0,     0,     0,  1721,     0,
       0,     0,     0,     0,     0,     0,     0,  1722,   642,   643,
     644,   645,   646,     0,     0,   647,   648,     0,     0,     0,
    1723,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   651,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   649,     0,
       0,     0,     0,     0,     0,   974,   975,   976,     0,     0,
    1724,     0,     0,     0,   977,     0,     0,     0,     0,     0,
       0,     0,     0,  1725,   653,   763,     0,     0,     0,     0,
       0,     0,   654,     0,     0,   655,     0,     0,     0,     0,
     972,     0,     0,     0,     0,     0,     0,     0,   656,     0,
    1726,     0,     0,     0,     0,     0,   651,   973,   978,     0,
       0,     0,     0,   972,   979,     0,   980,     0,     0,   766,
       0,   981,   982,   983,     0,     0,  1727,   984,     0,   767,
     973,     0,     0,  1728,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   653,     0,
    1729,     0,     0,     0,     0,     0,     0,     0,     0,   655,
     659,     0,   660,   661,   662,     0,   985,     0,     0,     0,
       0,     0,   656,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   986,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   974,
     975,   976,  1730,     0,     0,     0,     0,  -642,   977,   768,
     972,     0,  1731,     0,     0,     0,     0,     0,     0,   763,
       0,     0,   974,   975,   976,     0,     0,   973,     0,  1732,
       0,   977,     0,   664,   665,   666,   660,   661,   662,     0,
     987,     0,   763,     0,     0,     0,     0,   667,     0,     0,
       0,     0,   978,  1733,   668,     0,     0,     0,   979,     0,
     980,     0,     0,   766,     0,   981,   982,   983,     0,     0,
       0,   984,     0,   767,     0,   978,     0,     0,     0,   769,
       0,   979,     0,   980,     0,     0,   766,     0,   981,   982,
     983,   988,   989,     0,   984,     0,   767,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   664,   665,   666,
     985,     0,  1434,     0,     0,     0,     0,     0,     0,   974,
     975,   976,   990,     0,   770,     0,   991,   992,   977,   986,
       0,     0,     0,   985,   993,     0,     0,     0,     0,   763,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   986,   768,   994,     0,     0,     0,     0,   995,
       0,     0,     0,     0,     0,     0,   996,     0,   137,     0,
       0,     0,   978,     0,   771,     0,   768,   972,   979,     0,
     980,     0,     0,   766,   987,   981,   982,   983,     0,     0,
       0,   984,     0,   767,   973,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   769,     0,     0,     0,     0,     0,     0,
     985,     0,     0,     0,     0,   988,   989,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   769,     0,     0,   986,
       0,     0,     0,     0,     0,     0,  1975,     0,   988,   989,
       0,     0,     0,     0,     0,     0,   990,     0,   770,     0,
     991,   992,     0,   768,     0,   972,     0,     0,   993,     0,
       0,     0,     0,     0,     0,     0,   974,   975,   976,   990,
       0,   770,   973,   991,   992,   977,     0,     0,   994,     0,
       0,   993,     0,   995,   987,     0,   763,     0,     0,     0,
     996,     0,   137,     0,     0,     0,     0,     0,   771,     0,
       0,   994,     0,     0,     0,     0,   995,     0,     0,     0,
       0,     0,     0,   996,     0,   137,     0,     0,     0,   978,
       0,   771,     0,   769,     0,   979,     0,   980,     0,     0,
     766,     0,   981,   982,   983,   988,   989,     0,   984,     0,
     767,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   974,   975,   976,     0,   770,     0,
     991,     0,     0,   977,     0,     0,     0,   985,   993,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,   994,     0,
       0,     0,     0,   995,     0,     0,     0,     0,     0,     0,
     996,     0,   137,     0,     0,     0,     0,     0,   771,     0,
     768,     0,     0,     0,     0,     0,     0,     0,   766,     0,
     981,   982,   983,     0,     0,     0,   984,     0,   767,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   987,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   985,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     769,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   988,   989,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   768,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   770,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   993,     0,     0,     0,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   994,     0,     0,     0,     0,
     995,     0,     0,     0,     0,     0,     0,   996,     0,   137,
       0,     0,     0,     0,     0,   771,     0,     0,   769,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     988,   989,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   770,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   993,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   994,     0,     0,     0,     0,   995,     0,
       0,     0,     0,     0,     0,   996,     0,   137,     0,     0,
       0,     0,     0,   771
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2416)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   668,   116,   796,   968,   111,   366,
    1124,   601,   103,   855,   105,  1213,   657,   181,   727,  1151,
     111,   801,  1232,  1122,   791,  1597,  1603,  1587,  1451,   692,
    1451,  1451,   135,   425,  1451,  1451,   158,  1451,  1492,  1374,
    1127,   800,   604,   435,   135,   209,  1363,   404,  1129,  1137,
    2004,   714,  1837,  2038,  1264,   705,  1137,  1118,     1,  1532,
    1920,  1473,  1384,  1151,  1541,  1190,    48,     9,  1272,     9,
    1151,     9,     0,    17,  1804,    56,    57,    58,    27,  1204,
       9,   184,    53,    64,     1,  1945,     0,     9,    21,    60,
    1768,   858,   755,     6,     9,     1,    31,    59,    98,    31,
    2071,     1,    22,    89,    88,   364,  1383,    59,    17,   116,
     125,   109,  2213,   125,  1526,   112,  1846,   177,    99,   100,
      65,   102,  1326,   764,   765,   154,   107,   108,  1276,   131,
    1465,    57,   178,     9,    59,   116,  1696,    59,   176,    49,
     251,    49,   805,   226,  1461,  1259,   174,    94,   143,    54,
     257,   126,   133,    21,   178,   277,   257,   204,    22,   257,
     204,    30,    49,    63,   257,   178,   242,  1897,   117,   178,
     204,   309,    49,    74,   815,  1379,   214,   126,    32,   160,
    1515,   242,  1594,   331,   295,  2170,  1247,   167,   253,  2016,
     161,    91,    92,    26,  2099,  1116,   846,    66,   243,    68,
    2110,    39,    89,  1124,  1125,   369,   233,   189,  1356,    27,
     191,   253,   140,  1134,   219,     1,   144,    98,    49,   309,
    1141,  1142,   203,  1304,  1954,   204,   140,     1,   309,    59,
     144,   355,   991,  2439,  1315,   275,   411,    11,   407,  1160,
    1161,   195,   292,   127,  2659,  1657,   131,   218,   219,   233,
     257,  1124,   245,  1012,   205,   263,   367,   179,   112,   189,
    1175,    72,   452,  1580,   456,    63,  1140,   263,   249,  2174,
       2,   461,   173,   201,   324,     7,   257,   115,  1152,    72,
     288,   211,   233,   200,  1372,  2700,    60,   201,  1161,   173,
    1205,  1372,   288,    91,    92,  1376,   161,    72,   213,   117,
      72,   272,   256,   478,  1864,   205,   356,    72,  2514,   478,
     315,   282,   341,   233,   506,  2045,   229,   257,   201,    72,
     242,   229,   112,  2183,    98,   390,   100,  1899,   102,   419,
     411,   126,    58,   233,   458,    61,   110,   978,   243,    65,
     385,   444,   257,   446,   447,  1662,  1668,   458,   390,   389,
     453,  2029,   267,  1675,  1017,   446,   447,   505,  1117,   979,
     980,   310,   453,     9,   197,   393,   986,   470,   506,   233,
     473,   474,   358,   476,  1473,  1296,   479,   480,  1790,   470,
    2290,  2291,   363,  1856,   253,   291,  1859,  2292,    66,  2216,
      68,   272,   166,  1870,   470,    34,   309,   478,   377,   506,
     238,     6,  1879,   257,   800,   512,  1327,   313,   506,   470,
     391,   512,   288,   506,   342,   449,   499,   464,   411,   366,
     464,   402,   322,  1182,  1183,  1184,   453,  1526,   342,   354,
     411,   412,   347,   414,   415,   233,  1195,  1196,   503,   420,
     543,   544,   371,  1202,  1531,   257,   506,  2000,   358,   317,
    1767,   453,   543,   544,   355,   336,   437,   402,   453,   342,
     506,  1023,  1024,   332,  1612,  1386,  2019,  2020,   506,   484,
    2023,   358,   484,   454,   350,   417,  1139,   506,   581,    58,
     385,   358,   506,   463,   258,   467,    65,   598,   485,   275,
     581,   438,  1272,   506,   605,  1594,   448,   506,  2228,   506,
     377,   604,   417,  1591,   506,  2606,   506,   505,   506,   505,
    1591,  2064,   505,  1574,   500,  2425,  2069,   501,  2489,  2490,
     125,  1798,   455,   505,   322,   453,  1848,   358,   302,   464,
     505,   506,   464,   466,   515,   444,   453,   422,  2268,   453,
    2270,   652,  2220,   269,  1605,   507,   377,   462,   470,   462,
    1631,   810,  1473,   453,   535,   658,   505,   458,  1657,   503,
    1685,   800,  2139,   506,  1214,   403,   506,   213,   506,   498,
     512,  2301,  1889,   499,  1784,   556,   453,   558,   506,  2439,
     561,   562,   978,   564,  1788,     6,   506,   455,   399,   454,
     500,  1512,   506,  1234,   990,   991,   992,   512,   466,  1379,
     506,  2331,  2332,   389,  1525,  1526,   399,   578,   213,  1926,
     163,   257,  2085,   500,   595,   341,  1012,   391,   217,   600,
     415,   267,   453,   500,   399,   506,   607,   399,  2413,    33,
     460,  1251,  2185,    58,   399,   465,   505,  1536,   237,   450,
      65,   612,  1563,   282,   283,   284,   399,   252,   161,   254,
      32,   204,   257,   443,   332,   453,   144,   450,   448,   454,
     434,  1992,   267,  1944,   263,   776,  2078,   453,  2080,   500,
     781,   397,   127,  1594,   257,   450,   402,  1576,   450,   453,
    2665,   845,   204,   786,   787,   450,   667,   798,   460,   288,
     269,  1790,   329,   465,   506,   761,   172,   450,   233,   245,
     803,   347,  1601,   219,   272,   358,   345,  2119,  2662,    38,
     505,   190,  1793,   163,  1635,    31,   263,    46,   323,   127,
     257,  1117,  1502,     6,   257,  1646,  1122,   708,  1649,  1121,
     711,  1123,   506,  1129,   155,  1796,  1657,   290,   233,   978,
    1499,  1137,   347,   238,   453,   257,     0,   230,   257,   421,
     226,   990,   991,   992,  1146,  1151,  1148,   257,   234,  2081,
    2172,  1153,   341,   230,    59,   169,  2496,  2497,   257,   210,
     263,   417,   257,  1012,   840,  1167,    92,   235,   291,  1175,
     506,   294,     0,  2100,    30,   453,  1182,  1183,  1184,  1185,
    2473,   307,   213,   330,  1190,   288,   318,   506,  2552,  1195,
    1196,  1197,  1198,  1199,  1200,  1201,  1202,  1895,  1204,  1205,
     343,  2288,   417,  2366,  1895,  1896,   462,  2370,   397,   395,
      66,   407,    68,   402,   377,  1466,    30,  1138,     6,   468,
     469,   252,   258,   254,   473,    66,   257,    68,  1234,   386,
     290,    58,   318,   448,   269,   257,   267,   500,    65,   257,
    2185,   272,  1493,  1164,   342,   213,   967,   462,  2430,  1639,
     506,  2178,  2616,   448,   268,   411,   512,  1981,   505,   159,
    1262,  1267,  2203,  2154,   453,   257,   171,   453,  1117,   484,
     448,   322,  1274,   212,   363,  1447,   140,     6,   371,   424,
     144,   563,   478,   348,   177,  1519,  1520,  1521,  1522,   257,
    1139,   506,   323,   502,   371,   109,  1145,   512,  1304,   267,
    1809,   155,   257,   455,   499,   244,   341,  1816,   330,  1315,
    1023,  1024,  1033,   506,   466,   129,   347,   506,   465,   224,
     213,  1690,  2485,  2486,  2506,   331,  1175,   266,  2070,  2071,
     398,   454,   232,  1182,  1183,  1184,  1185,   201,   403,   197,
    1613,  1190,   505,  2636,     6,   272,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,   168,  1204,  1205,  1363,  1867,   252,
     131,   254,   397,     9,   257,   512,  1372,   402,  2555,  2078,
    1376,  2080,   548,   161,   267,     9,   190,   453,    12,   347,
     319,    15,    16,   124,   506,  1234,   417,   506,   257,  2086,
     512,   205,   347,   293,   407,  1316,   506,   253,  1788,   257,
     436,   506,  1933,   272,    50,  1118,   407,   506,  1257,  1122,
    2119,   506,   253,  1922,   590,   791,  1129,  1130,   453,    28,
     506,  1694,  2242,   245,  1137,   213,  2117,  1140,    86,   213,
     323,   462,  1145,   388,  1147,   342,  1149,  1150,  1151,  1152,
     379,  2138,   269,   465,   620,  1718,  2633,   208,   209,   417,
     140,  2621,   200,   322,   347,  1461,  1169,   455,  2522,   765,
     496,   232,   417,  2172,   252,   478,   254,  1473,  1358,   257,
     506,  1392,     9,   257,   338,   506,   332,   478,   342,   267,
     302,   512,   858,   267,   213,   221,   247,   248,  2212,  1263,
     512,   332,  1341,  1499,   462,   407,   423,    26,   425,   505,
     506,  1701,  1504,   286,  2537,   503,  2537,  2537,     6,   815,
    2537,  2537,   453,  2537,   341,  2024,  2357,   253,  1408,   128,
    1526,   292,    59,   252,   417,   254,   415,   341,   257,  2480,
    1781,  2040,   108,   263,  1247,   323,   475,   257,   267,   179,
     395,  1315,   118,  2713,   512,   764,   765,   452,   263,   189,
    2059,   213,   335,   275,  1267,   460,   461,   512,   288,   347,
     465,  2731,  2744,   347,   271,   454,   478,   213,   288,   462,
     397,   211,   179,   288,  1580,   402,   324,   325,   352,  2088,
    1221,   257,  1588,  2092,  1225,  1591,  2537,   453,  1594,  1823,
     252,  1304,   254,   341,   323,   257,   815,  2128,   172,   245,
     246,   241,  1315,  1837,   213,   267,   119,   120,   121,  1383,
    1987,   257,   505,   506,   412,   453,   352,   173,   347,   512,
     483,   267,  2131,   330,   360,  1631,   453,   357,     8,   417,
     352,   238,   354,   417,   241,  2166,  2167,   506,   501,   413,
     414,   173,   179,   512,   278,   279,  1359,   395,   257,   205,
    1499,  1657,   226,  2043,     9,   189,  1662,    37,   267,  1372,
     234,   323,   460,  1376,   257,   380,   454,   465,   302,   303,
    2634,  2635,   281,   205,   462,   307,   213,   211,  1929,  1685,
       8,   189,   450,    12,  1690,   347,    15,    16,   417,  2530,
    2531,   163,   460,   286,   287,   167,   457,   465,   459,  1412,
      47,   347,  2666,   211,    59,   242,  2415,   339,  2417,    37,
      56,  1412,  1679,  1487,  2522,   213,  2225,    64,   506,   448,
     257,  2685,  2231,   308,   512,   310,   239,   359,   512,   322,
     267,  2572,  2241,   462,  1447,  2576,  2577,   330,   347,  1588,
     253,     8,  2061,  2274,   318,    91,   476,  2489,  2490,  2201,
    2492,   447,   233,   460,   252,   417,   254,   104,   465,   257,
    1473,  1767,   108,   506,  1613,  2585,  1149,   453,   464,   267,
      37,   417,   118,  2046,  2492,   505,   257,   506,   263,  2743,
    1786,   249,   250,   512,  1790,  1985,  1169,  1793,  2039,   460,
     505,   506,   764,   765,   465,  2164,    13,    14,   213,   450,
     462,   424,  2311,   288,    16,  2314,  2315,   406,   417,   460,
     347,   420,   421,  1526,   465,    32,   462,  2541,  2327,   233,
     455,    33,  1596,   336,   450,   323,  2099,   308,   395,   310,
      42,   466,  2341,  2342,   460,   348,  1685,  1744,   406,   465,
    1846,  1690,   257,   815,   506,   453,  1620,  1754,  1755,   347,
     512,  1758,   267,  1420,  1445,   453,   451,  1424,   213,  1450,
    1451,  1574,  1453,   453,  1431,   460,   512,   453,   451,  1718,
     465,  1645,   465,   352,   557,   354,   800,   460,  1591,   562,
     417,  1594,   465,  1889,  1890,  2603,   233,   242,  2606,  1895,
    1896,  1897,  1605,   240,    59,   352,  2405,   354,   219,  1901,
    1632,  2174,   257,   512,   251,  2436,   175,  1682,  1683,  1684,
      98,    99,   267,  1688,   412,   453,  1691,  1692,  1631,   417,
    1926,  2639,  2640,   300,   301,   462,   439,   453,  2646,  2647,
    1197,  1198,   347,   470,  1199,  1200,  1201,  2337,  1659,  2339,
    2449,   217,   218,   352,  1657,   354,  1183,  1184,  1954,   278,
     279,   474,   158,   476,   160,     1,   479,   487,   488,   489,
     490,   237,   506,   158,   462,   160,    70,  2498,  1681,   506,
     453,  2502,  2503,   302,   303,   512,   487,   488,   489,   490,
    1681,   487,   488,   489,   490,   506,   453,   263,   253,   506,
     255,   213,   347,   453,    40,    41,    42,    43,    44,   253,
     341,   255,   417,  1724,   257,   352,   353,   253,   506,   255,
     257,    67,   288,    69,   512,   628,   629,   630,   631,  2292,
     367,   990,   369,   992,  1745,   470,   200,   444,   506,   401,
     411,    77,    78,    55,    56,   257,   402,    65,    61,  2045,
     233,   257,   453,   329,   402,   267,   257,   462,   506,   230,
      26,   453,  1643,   453,   109,   453,   313,   257,   257,  2459,
    2631,   456,   417,   273,    23,   104,   990,   991,   992,    91,
     453,   439,  2078,  1786,  2080,   190,   124,  1790,   456,    17,
    1793,    88,   506,  1796,   453,   395,   108,   273,  1012,   352,
     402,   506,   403,    58,  2100,   505,   118,   512,   424,   263,
      39,   453,  2108,   238,   403,   506,   453,   462,  1699,  1700,
     506,  2117,   332,  2119,   508,   470,   420,   311,  2120,  1710,
     317,   395,   262,   453,     7,   347,  1717,  1901,   453,   395,
     256,    11,   506,  1846,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   505,   453,   453,  2113,   395,   367,   126,
     453,   506,   453,   500,    87,  1746,    87,   512,  2164,   453,
     433,   395,   390,    22,   307,   503,  2172,   205,   310,   453,
     395,   506,  2178,   506,   501,   453,   385,   448,  1952,   503,
      60,   233,  1895,  1896,  1897,   255,   506,  1961,  1962,   219,
     506,  1115,   124,  1117,   512,   417,  1120,    53,   448,   444,
    1124,    26,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,
     401,   307,   464,   449,  1805,  1139,   349,   506,    98,   197,
     100,  1145,   102,   447,   411,   464,   502,   453,   257,   505,
     110,   444,   453,  1824,   506,   337,   377,   400,   506,  1830,
     462,  1954,  1166,    35,  1168,   116,    38,   171,   189,   464,
     464,  1175,   257,    45,    46,   453,   464,   464,  1182,  1183,
    1184,  1185,  2268,   464,  2270,   506,  1190,  1980,   464,   453,
     453,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,  1980,
    1204,  1205,  1995,   310,   464,   331,   166,  2000,   464,   464,
     512,   448,  2013,   404,   224,  2301,   455,    30,   344,   132,
     322,    93,   506,   506,   326,   327,  2019,  2020,   197,  1233,
    2023,   133,   448,     4,    35,  2164,   506,    38,   134,   387,
     135,   352,   136,   103,    45,    46,  2332,   137,    19,   138,
     499,   139,  2045,  1257,   443,  1259,   464,   142,    29,    49,
     448,   405,   447,   444,   447,   367,  2120,   227,   441,  2070,
    2071,  2064,   145,    24,    25,  2129,  2069,  2070,  2071,   197,
     146,   383,   384,   147,   501,  2078,   148,  2080,   272,    31,
     162,   149,    93,    49,    65,  1966,   150,   197,   258,   151,
     114,   152,   221,   153,   450,   450,   116,   450,   450,   450,
     450,   448,   411,  1984,   453,   313,    67,   111,    69,   191,
      71,   198,   204,   448,  2117,   224,  2119,   377,   257,  2415,
     273,  2417,  2003,   340,  2005,   232,   295,  1341,  2009,  2693,
     212,   299,   302,   167,   503,   305,  2017,   503,   486,   130,
     177,   366,   448,   170,   105,   106,   107,   131,   229,  1363,
     448,   162,    49,   197,   229,   205,   167,   300,    58,   205,
     453,   167,   506,   253,   300,   273,   424,   238,   511,  2172,
     506,   510,   204,   448,   277,  1389,   448,   381,   363,   296,
     191,    30,  2185,   204,   266,   204,  2189,    17,   444,   130,
     141,   366,    49,   143,   155,   448,   157,   204,  2189,     8,
     370,   212,   197,   164,   131,   424,   167,   503,   204,   503,
     453,   448,     9,  2505,     7,   506,   505,   295,   298,   204,
     505,   391,   500,   500,    49,   190,   315,   292,   263,   463,
     331,  2112,   115,   438,    47,   314,   412,   319,   295,   104,
     221,   204,   204,   362,   362,    49,   416,  1461,   418,   381,
     263,   238,   297,   494,    97,   266,    58,   293,     8,    49,
     112,  2553,   458,   453,   434,  2268,   263,  2270,   483,   338,
     263,   263,   253,   111,   211,   338,   453,   109,   222,   503,
     368,   286,   263,   341,   300,  1499,   419,   233,   121,   322,
     197,   338,   253,   322,   255,  2298,    49,   379,  2301,   307,
     426,     7,    46,    92,    26,   127,   201,  2298,   319,   148,
     392,   272,   206,    75,   238,   221,   150,   177,   800,   520,
     504,  1900,   538,   425,   616,   410,   544,   286,  1451,  2332,
    1032,   787,   497,   754,  2711,   316,   506,  1893,  2634,  2635,
     321,  1410,  1673,   805,  1991,  2646,  2187,  2213,  1041,  2352,
     858,  2083,   794,  1230,  1757,  1756,  1840,  2398,  2385,  1485,
    1792,  2352,  2081,  2366,  1531,  1247,  1580,  2370,   379,  1512,
    2666,   352,  1487,  1534,  1588,  2266,  2085,  1859,  2284,   360,
    1300,   392,  2108,  1577,  1584,  1887,  1336,  1595,  1341,  2685,
    1604,  2120,   373,   475,  1913,  1962,  2141,  1625,  1942,  1613,
    2127,  1370,  1372,  1152,  2167,  1386,  2700,  1961,  1672,  2335,
    1624,  1961,  2415,  2439,  2417,  2340,  1563,  2160,  2160,  2160,
    2160,   402,  2345,   299,   405,  1359,  1481,   152,   699,  1929,
    2433,  1257,   413,  1718,   270,   242,   581,   759,  1652,  2563,
     417,   995,   509,   424,   215,  2427,  1949,  2743,  1662,  2330,
    1587,   450,  2097,  1892,   718,  2636,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   560,   475,    -1,  2758,    -1,    -1,    -1,
      -1,  1685,   453,    -1,    -1,   456,  1690,    -1,  2489,  2490,
      -1,    -1,  2485,  2486,   445,    -1,  2489,  2490,    -1,  2492,
      -1,    -1,    -1,  2374,  1708,  2634,  2635,    -1,  2379,    -1,
      -1,    -1,    -1,    -1,  1718,    -1,    -1,    -1,   990,   991,
     992,    -1,    -1,    -1,    -1,    -1,  1730,    -1,    -1,  1733,
      45,    -1,    -1,    -1,    -1,    -1,    -1,  2666,    -1,    -1,
    1012,    -1,    -1,    -1,   495,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,   506,  2685,    -1,    -1,  2552,
      -1,    -1,    -1,  1767,    -1,    -1,    -1,  2438,    -1,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,  1783,
    2581,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2471,  2472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2743,    49,    32,  2488,    -1,    35,
      -1,    -1,    38,  2616,    -1,    -1,    84,    -1,    -1,    -1,
      46,    -1,    -1,  2504,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,  1116,  1117,    -1,    -1,    -1,    -1,
      84,    -1,  1124,  1125,    -1,    89,    -1,    -1,  2529,    -1,
    2661,    -1,  1134,  2534,  2535,    -1,  2659,   101,    -1,  1141,
    1142,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,
      -1,    -1,    -1,  2554,    -1,  1889,  1890,    -1,  1160,  1161,
      -1,    -1,    -1,    -1,    -1,   210,   112,    -1,    -1,    -1,
      -1,    -1,    -1,  1175,    -1,  2706,  2707,  2700,    -1,    -1,
    1182,  1183,  1184,  2584,  1918,    -1,  2587,  2588,    -1,    -1,
      -1,   236,  1926,  1195,  1196,  1197,  1198,  1199,  1200,  1201,
    1202,    -1,    -1,  1205,    -1,   193,   194,   195,   253,    -1,
      -1,    -1,  2735,    -1,   202,    -1,  2747,    -1,    -1,  1953,
      -1,    -1,    -1,    -1,    -1,    -1,  1960,  1961,  2629,   193,
     194,   195,    -1,    -1,    -1,    -1,  1238,    -1,   202,    -1,
      -1,   286,    -1,    -1,    -1,   191,    -1,  1981,    -1,   213,
      -1,    -1,  1986,   199,    -1,    -1,    -1,  1991,  1992,    -1,
      -1,   306,    -1,    -1,    -1,   310,   212,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,  1281,
      -1,    -1,   246,   328,    -1,    -1,    -1,    -1,   252,   334,
     254,    -1,    -1,   257,  1296,   259,   260,   261,   244,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,  2046,    -1,    -1,    -1,   304,    -1,   264,    -1,
     266,    -1,    -1,    -1,    -1,  1327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,   288,   289,    -1,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2090,    -1,    -1,   323,
      -1,   406,    -1,    -1,    -1,  2099,  2100,    -1,    -1,    -1,
     415,    -1,    -1,   319,  2108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   347,  1386,    -1,    -1,   432,    -1,  1391,
     378,    -1,    -1,  2127,   358,    -1,    -1,    -1,    -1,    -1,
     346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   453,    -1,
      -1,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2156,    -1,    -1,    -1,   372,    -1,    -1,   474,
    2164,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,
    2174,   429,   430,    -1,  2178,    -1,   392,   411,   493,    -1,
     396,    -1,    -1,   417,    -1,   500,   501,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   429,   430,    -1,    -1,  2203,
      -1,  1473,    -1,    -1,    -1,    -1,    -1,    -1,  2212,    -1,
      -1,    -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,
      -1,   437,    -1,    -1,    -1,    -1,    -1,  1499,   462,    -1,
     446,    -1,    -1,    -1,   492,    -1,    -1,    -1,   472,   497,
    1512,    -1,    -1,  2247,   478,    -1,   504,    -1,   506,    -1,
      -1,    -1,    -1,  1525,  1526,    -1,    -1,    -1,   492,   475,
      -1,    -1,    -1,   497,    -1,    -1,   500,    -1,    -1,   485,
     504,    -1,   506,    -1,    -1,   491,    -1,    -1,   512,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2292,    -1,
      -1,  1563,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1588,    -1,    -1,    -1,
      -1,    -1,  1594,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    -1,  2357,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1635,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1646,    -1,    -1,  1649,    -1,    -1,
      51,    52,    -1,    -1,    -1,  1657,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,  2408,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1690,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,    -1,    -1,  2451,    -1,    -1,
     121,    -1,   123,    -1,  2458,    -1,    -1,  2461,    -1,   130,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,    -1,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2511,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2525,    -1,    -1,    -1,   196,  2530,  2531,    -1,    -1,
      -1,    -1,   203,    -1,    -1,   206,   207,  2541,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,   225,    -1,    -1,   228,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2572,    -1,
      -1,    -1,  2576,  2577,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2589,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,   274,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   286,    84,    -1,    -1,    -1,
      -1,   292,   293,    -1,   295,   296,   297,   298,    -1,    -1,
    2634,  2635,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   312,    -1,    -1,    -1,    -1,     1,    -1,     3,  2653,
       5,    -1,    -1,    -1,   325,    10,    -1,    -1,    -1,    -1,
      -1,  1933,  2666,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2678,  2679,    -1,    -1,    -1,   350,
     351,  2685,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     361,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,   375,   376,    -1,    62,    -1,    -1,
    2714,   382,    -1,    -1,    -1,   386,    -1,    -1,    73,    -1,
      -1,    76,    -1,   394,   192,   193,   194,   195,    -1,    -1,
      -1,    -1,    -1,   404,   202,    90,    -1,  2741,    -1,  2743,
      -1,    -1,   413,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   422,    -1,    -1,    -1,    -1,   427,   428,   113,    -1,
     431,    -1,   433,    -1,    -1,    -1,   121,    -1,   123,   440,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   453,    -1,    -1,    -1,    -1,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   154,
     471,    -1,    -1,    -1,    -1,    -1,   477,    -1,    -1,    -1,
     165,   482,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   503,    -1,    -1,    -1,   304,    -1,   509,    -1,
      -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,
      -1,   206,   207,    -1,    -1,    -1,  2128,    -1,    -1,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,
     225,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2164,    -1,  2166,  2167,    -1,     1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
     378,    -1,    -1,    -1,    18,   270,    -1,    -1,    -1,   274,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    62,    -1,
      -1,   429,   430,    -1,    -1,    -1,    -1,    -1,    -1,    73,
     325,    -1,    76,   441,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   350,   351,    -1,    -1,    -1,
      -1,    -1,  2274,    -1,   472,    -1,   361,    -1,    -1,   113,
      -1,    -1,     9,    -1,    -1,   483,    -1,   121,    -1,   123,
     375,   376,    -1,    -1,   492,    -1,    -1,   382,    -1,   497,
      -1,   386,    -1,   501,    -1,    -1,   504,   505,   506,   394,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   404,
     154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,
      -1,   165,    -1,    -1,    -1,    -1,   170,   422,    -1,    -1,
      -1,    -1,   427,   428,    -1,    -1,   431,    -1,   433,    -1,
      -1,    -1,    -1,    -1,    -1,   440,    -1,    84,    -1,    -1,
      -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,   453,   203,
      -1,    -1,   206,   207,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,   471,    -1,    -1,   223,
      -1,   225,   477,    -1,   228,    -1,    -1,   482,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   509,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2436,    -1,   270,    -1,    -1,    -1,
     274,    -1,   276,    -1,    -1,    -1,    -1,     1,    -1,     3,
      -1,     5,   286,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,   193,   194,   195,    -1,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,   312,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
      -1,   325,    -1,    -1,    -1,    -1,  2498,    51,    52,    -1,
    2502,  2503,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   350,   351,    -1,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,   361,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    90,    -1,   265,    -1,
     267,   375,   376,    -1,    -1,    -1,    -1,    -1,   382,    -1,
      -1,    -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,   113,
     394,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,   123,
     404,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,   413,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,
      -1,    -1,    -1,   427,   428,    -1,    -1,   431,    -1,   433,
     154,    -1,    -1,    -1,    -1,    -1,   440,    -1,    -1,    -1,
      -1,   165,    -1,    -1,    -1,    -1,   170,    -1,    -1,   453,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2634,  2635,    -1,    -1,    -1,   471,    -1,    -1,
      -1,    -1,   196,   477,    -1,    -1,    -1,    -1,   482,   203,
      -1,   378,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,  2666,    -1,    -1,    -1,    -1,   223,
      -1,   225,    -1,    -1,   228,   509,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2685,    -1,    -1,    -1,    -1,    -1,    -1,
     417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   429,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,
     274,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   286,    -1,    -1,   462,    -1,    -1,    -1,    -1,
      -1,  2743,    -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,
       3,    -1,     5,    -1,    -1,   492,    -1,    10,    -1,    -1,
     497,   325,    -1,    -1,    -1,    18,    -1,   504,    -1,   506,
      -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   350,   351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   361,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      -1,   375,   376,    -1,    -1,    -1,    -1,    -1,   382,    -1,
      73,    -1,   386,    76,    -1,    -1,    -1,    -1,    -1,    -1,
     394,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,
     404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,
     113,    -1,    -1,   427,   428,    -1,    -1,   431,   121,   433,
     123,    -1,    -1,    -1,    -1,    -1,   440,   130,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,    -1,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,    -1,    -1,    -1,    -1,    -1,   471,    -1,    -1,
      -1,    -1,   165,   477,    -1,    -1,    -1,   170,   482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   196,    84,   509,    -1,    -1,    -1,    -1,
     203,    -1,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,
     223,    -1,   225,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,
      -1,    -1,    12,    13,    14,    -1,    -1,   270,    -1,    -1,
      20,   274,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,   194,   195,    -1,    -1,    -1,   312,
      -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   325,   213,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   350,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   246,    -1,   361,    -1,
      -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,
     260,   261,    -1,   376,    -1,   265,    -1,   267,     6,   382,
      -1,     9,    -1,   386,    12,    13,    14,    -1,    -1,    -1,
      -1,   394,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     413,   161,    -1,    -1,   304,    -1,    -1,    -1,    -1,   422,
      -1,   171,    -1,    -1,   427,   428,    -1,    -1,   431,    -1,
     433,    -1,    -1,   323,    -1,    -1,    -1,   440,    -1,    -1,
      -1,    -1,    -1,   193,   194,   195,    -1,    -1,    -1,    -1,
     453,    -1,   202,    -1,    -1,    -1,    84,   347,   208,   209,
      -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,   471,    -1,
      -1,    -1,    -1,   101,   477,    -1,    -1,    -1,    -1,   482,
      -1,    -1,    -1,   233,   374,    -1,    -1,    -1,   378,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   246,   247,   248,    -1,
      -1,    -1,   252,    -1,   254,    -1,   509,   257,    -1,   259,
     260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,   417,    -1,    -1,
      -1,    -1,    -1,   161,    -1,   285,    -1,    -1,    -1,   429,
     430,   291,    -1,   171,   294,     6,    -1,    -1,     9,    -1,
      -1,    -1,   302,    -1,   304,    -1,    -1,    -1,    -1,   309,
      -1,    -1,    -1,    -1,   314,   193,   194,   195,    -1,    -1,
      -1,    -1,   462,   323,   202,    -1,    -1,    -1,    -1,    -1,
     208,   209,   472,   333,    -1,   213,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   486,   347,    -1,    -1,
      -1,    -1,   492,    -1,    -1,    -1,    -1,   497,    -1,    -1,
      -1,    -1,    -1,    -1,   504,    -1,   506,    -1,   246,   247,
     248,    -1,   512,    84,   252,    -1,   254,    -1,   378,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,
     101,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,
      -1,    -1,    -1,   291,    -1,     6,   294,   417,     9,    -1,
      -1,    -1,    -1,    -1,   302,    -1,   304,    -1,    -1,   429,
     430,   309,    -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,   323,    -1,    -1,    -1,    -1,
     450,    -1,   452,    -1,   454,   333,    -1,   457,    -1,   459,
     460,   461,   462,    -1,   464,   465,    -1,    -1,    -1,   347,
      -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,   195,    -1,    -1,    -1,    -1,    -1,
      -1,   202,   492,    84,    -1,    -1,    -1,   497,    -1,    -1,
     378,    -1,   213,    -1,   504,    -1,   506,    -1,    -1,    -1,
     101,    -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,   417,
      -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,   429,   430,    -1,   265,    -1,   267,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,   450,     9,   452,    -1,   454,    -1,    -1,   457,
      -1,   459,   460,   461,   462,    -1,   464,   465,    -1,    -1,
      -1,    -1,    -1,   304,   472,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,   195,    -1,    -1,    -1,    -1,    -1,
      -1,   202,   323,    -1,   492,    -1,    -1,    -1,    -1,   497,
      -1,    -1,   213,    -1,    -1,    -1,   504,    -1,   506,    -1,
      -1,    -1,    -1,    -1,   512,    -1,   347,    -1,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      96,   252,    -1,   254,    -1,   101,   257,   378,   259,   260,
     261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,
      -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,   429,   430,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,
      -1,   462,    -1,    -1,    -1,   466,   347,   193,   194,   195,
      -1,   472,    -1,    -1,    -1,    -1,   202,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
      96,   492,    -1,    -1,    -1,   101,   497,   378,    -1,    -1,
      -1,    -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,
      -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     246,    -1,     6,    -1,    -1,     9,   252,    -1,   254,    -1,
      -1,   257,    -1,   259,   260,   261,   417,    -1,    -1,   265,
      -1,   267,    -1,    -1,     6,    -1,   272,     9,   429,   430,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,   462,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,
      -1,   472,    -1,    -1,    -1,    -1,   202,   323,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
      -1,   492,    -1,    -1,    -1,    -1,   497,   101,    -1,    -1,
      -1,   347,    84,   504,    -1,   506,    -1,    -1,    -1,    -1,
     114,   512,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,
     246,    -1,     6,    -1,    -1,     9,   252,    -1,   254,    -1,
      -1,   257,   378,   259,   260,   261,    -1,    -1,    -1,   265,
      -1,   267,    -1,    -1,     6,    -1,   272,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,   429,   430,    -1,    -1,    -1,    -1,   193,
     194,   195,    -1,    -1,    -1,    -1,    -1,   323,   202,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,   193,   194,   195,    -1,    -1,   462,   101,    -1,    -1,
     202,   347,    84,    -1,    -1,    -1,   472,    -1,    -1,    -1,
      -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,   246,    -1,    -1,    -1,   492,    -1,   252,    -1,
     254,   497,   378,   257,    -1,   259,   260,   261,   504,    -1,
     506,   265,    -1,   267,   246,    -1,   512,    -1,   272,    -1,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,   429,   430,   167,    -1,    -1,    -1,   193,
     194,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   323,
      -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,   193,   194,   195,    -1,    -1,   462,    -1,    -1,    -1,
     202,   323,    -1,   347,    -1,    -1,   472,    -1,    -1,    -1,
      -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   246,    -1,    -1,   347,   492,    -1,   252,    -1,
     254,   497,    -1,   257,   378,   259,   260,   261,   504,    -1,
     506,   265,    -1,   267,   246,    -1,   512,    -1,   272,    -1,
     252,    -1,   254,    -1,    -1,   257,   378,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,     6,    -1,
     272,     9,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   429,   430,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,   323,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,
      -1,   323,    -1,   347,    -1,    -1,    -1,    -1,   472,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     462,    -1,    -1,    -1,    -1,   347,    84,    -1,   492,    -1,
     472,    -1,    -1,   497,   378,    -1,    -1,    -1,    -1,    -1,
     504,    -1,   506,   101,     6,    -1,    -1,     9,   512,    -1,
     492,    -1,    -1,    -1,    -1,   497,   378,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,
     512,     6,    -1,   417,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   429,   430,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   448,    -1,    -1,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,   472,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,   101,
     462,    -1,    -1,    -1,   202,    -1,    -1,    -1,   492,    84,
     472,    -1,    -1,   497,    -1,   213,    -1,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,   101,    -1,   512,    -1,
     492,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,   246,    -1,
     512,    -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,
      -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,   194,   195,    -1,   197,    -1,    -1,    -1,    -1,
     202,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   213,    -1,     6,    -1,    -1,     9,    -1,   193,   194,
     195,    -1,    -1,    -1,    -1,   323,    -1,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,   347,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,   246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,
     378,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    84,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,     6,    -1,    -1,     9,    -1,    -1,    -1,   417,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,   429,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   462,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   347,    -1,   472,    -1,   378,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,
      84,    -1,    -1,     6,   492,    -1,     9,    -1,    -1,   497,
     193,   194,   195,   378,    -1,    -1,   504,   101,   506,   202,
      -1,    -1,    -1,    -1,   512,   417,    -1,    -1,    -1,    -1,
     213,    -1,    -1,    -1,    -1,    -1,    -1,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   411,    -1,    -1,    -1,
      -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   246,   429,   430,    -1,    -1,    -1,   252,
     462,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
     472,    84,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,   101,    -1,
     492,    -1,    -1,    -1,    -1,   497,    -1,   472,    -1,   193,
     194,   195,   504,    -1,   506,    -1,    -1,    -1,   202,    -1,
     512,   304,    -1,    -1,    -1,    -1,    -1,   492,    -1,   213,
      -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,   504,
     323,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   246,    -1,   347,    -1,    -1,    -1,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,
     193,   194,   195,    -1,    -1,   378,    -1,    -1,    -1,   202,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,   323,
      -1,    -1,    -1,   246,    -1,    -1,   429,   430,    -1,   252,
      -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,   347,   267,    -1,    -1,    -1,    -1,   272,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   472,
      -1,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,
      -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,
     323,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,   512,
      -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   347,   429,   430,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   378,    -1,    -1,   462,   192,
     193,   194,   195,    -1,    -1,    -1,    -1,    32,   472,   202,
      35,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,   492,    -1,
      -1,    -1,    -1,   497,   417,    -1,    -1,    -1,    -1,    -1,
     504,    66,   506,    68,    -1,    -1,   429,   430,   512,    -1,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,   462,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,
      -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,
      -1,   304,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,
      -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,   512,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   177,    -1,    -1,   180,   181,   182,   183,   184,
      -1,    -1,   187,   188,    -1,    -1,   191,    -1,    -1,    -1,
      -1,    -1,   197,    -1,   199,    -1,    -1,    -1,    -1,    -1,
     205,    -1,    -1,    -1,    -1,   378,    -1,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,    -1,    -1,    -1,    -1,    -1,   242,    -1,   244,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   429,   430,    -1,    -1,
      -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,
      -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,
      -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     483,    -1,    -1,    -1,   319,   320,    -1,    -1,    -1,   492,
      -1,    -1,    -1,   328,   497,    -1,   331,    -1,   501,    -1,
      -1,   504,   505,   506,    -1,    -1,    -1,     1,    -1,   344,
      -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,    -1,
      -1,    -1,    36,    -1,   379,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   406,    -1,   408,   409,   410,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,    -1,    -1,    -1,    -1,   453,    -1,
      -1,    -1,    -1,   458,    -1,    -1,    -1,   121,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,
     475,    -1,    -1,    -1,   479,   480,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   493,    -1,
      -1,    -1,    -1,    -1,   499,   500,    -1,    -1,    84,    -1,
      -1,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,    -1,   177,    -1,   101,   180,   181,   182,   183,
     184,    -1,    -1,   187,   188,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   205,    -1,    36,    -1,    -1,    39,    40,    41,    42,
      43,    44,    45,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
      -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,    -1,    75,    -1,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,
      -1,    -1,    -1,    -1,   278,    -1,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,
     246,    -1,    -1,    -1,   328,    -1,   252,   331,   254,    -1,
      -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,
     344,   267,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,
     183,   184,   356,    -1,   187,   188,    -1,    -1,    -1,    -1,
     364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,
     233,    -1,   406,   236,   408,   409,   410,    -1,    -1,   242,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,   453,
      -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,
      -1,    -1,    -1,   306,    -1,   479,   480,   481,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,   493,
      -1,   417,    -1,    -1,    -1,   328,   500,    -1,   331,    -1,
      -1,    -1,   506,   429,   430,    -1,    32,    -1,    -1,    35,
      -1,   344,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,   356,   450,    -1,    -1,    -1,    -1,    -1,
      -1,   364,    -1,    -1,   460,    -1,   462,    -1,   464,   465,
      66,    -1,    68,    -1,    -1,    -1,   472,    -1,    -1,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,    -1,
      -1,   497,    -1,   406,    -1,   408,   409,   410,   504,    -1,
     506,    -1,    -1,    -1,    -1,    -1,   512,    39,    40,    41,
      42,    43,    44,    -1,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     453,    -1,    -1,    75,    -1,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,   162,   470,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,   480,   481,    -1,
      -1,    -1,    -1,    -1,   180,   181,   182,   183,   184,    -1,
     493,   187,   188,    -1,    -1,   191,    84,   500,    -1,   121,
      -1,   197,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,   101,    -1,    -1,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
     236,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,   180,   181,
     182,   183,   184,    -1,    -1,   187,   188,    -1,    -1,    -1,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,
     306,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   319,   320,   213,    -1,    -1,    -1,    -1,
      -1,    -1,   328,    -1,    -1,   331,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,
     346,    -1,    -1,    -1,    -1,    -1,   278,   101,   246,    -1,
      -1,    -1,    -1,    84,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,   372,   265,    -1,   267,
     101,    -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,
     396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,
     406,    -1,   408,   409,   410,    -1,   304,    -1,    -1,    -1,
      -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,
     194,   195,   448,    -1,    -1,    -1,    -1,   453,   202,   347,
      84,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,   193,   194,   195,    -1,    -1,   101,    -1,   475,
      -1,   202,    -1,   479,   480,   481,   408,   409,   410,    -1,
     378,    -1,   213,    -1,    -1,    -1,    -1,   493,    -1,    -1,
      -1,    -1,   246,   499,   500,    -1,    -1,    -1,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,    -1,   246,    -1,    -1,    -1,   417,
      -1,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,   429,   430,    -1,   265,    -1,   267,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,   480,   481,
     304,    -1,   450,    -1,    -1,    -1,    -1,    -1,    -1,   193,
     194,   195,   460,    -1,   462,    -1,   464,   465,   202,   323,
      -1,    -1,    -1,   304,   472,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   323,   347,   492,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,   506,    -1,
      -1,    -1,   246,    -1,   512,    -1,   347,    84,   252,    -1,
     254,    -1,    -1,   257,   378,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,   267,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,   429,   430,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,   323,
      -1,    -1,    -1,    -1,    -1,    -1,   450,    -1,   429,   430,
      -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,   462,    -1,
     464,   465,    -1,   347,    -1,    84,    -1,    -1,   472,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,   460,
      -1,   462,   101,   464,   465,   202,    -1,    -1,   492,    -1,
      -1,   472,    -1,   497,   378,    -1,   213,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,
      -1,   492,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,    -1,    -1,   504,    -1,   506,    -1,    -1,    -1,   246,
      -1,   512,    -1,   417,    -1,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,   429,   430,    -1,   265,    -1,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,   195,    -1,   462,    -1,
     464,    -1,    -1,   202,    -1,    -1,    -1,   304,   472,    -1,
      -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,   492,    -1,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   429,   430,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,    -1,   378,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,    -1,    -1,
     497,    -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,   506,
      -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,   417,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     429,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   462,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   492,    -1,    -1,    -1,    -1,   497,    -1,
      -1,    -1,    -1,    -1,    -1,   504,    -1,   506,    -1,    -1,
      -1,    -1,    -1,   512
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   515,   516,     0,   201,   342,   517,   518,   519,   520,
     521,   522,   524,   534,   536,   453,   453,   519,   155,   530,
     542,   530,   530,   257,   343,   537,   537,   124,    86,   543,
     523,   525,   534,   140,   528,   529,    26,   538,   538,   453,
     395,   544,   144,   523,   526,   527,   530,   537,   257,   453,
     535,   453,    11,    60,    98,   100,   102,   110,   166,   227,
     258,   302,   305,   370,   391,   416,   418,   434,   506,   545,
     546,   550,   561,   569,   570,   571,   572,   573,   578,   587,
     589,   594,   597,   598,   600,   601,   602,   603,   604,   605,
     606,   537,   525,   453,   233,   539,  1287,   506,  1208,  1208,
     424,   406,  1304,  1287,  1287,  1287,   395,  1208,   406,   453,
     453,  1287,   453,   453,    59,  1276,   574,     1,   453,   572,
     219,   588,   175,   607,   453,   527,   453,    74,   173,   355,
     458,   540,   541,   579,  1287,  1287,  1287,   506,  1203,  1234,
      70,  1203,   453,  1287,  1287,   551,   562,  1203,   547,   506,
     590,   591,   592,  1209,   257,   308,   310,   575,   577,  1053,
    1237,  1287,   453,   506,   453,   609,   541,   341,  1301,  1287,
     213,   257,   267,   347,   417,   462,   512,   595,   596,  1240,
    1203,   257,   219,   307,  1326,   257,   470,    58,    65,   269,
     341,   397,   402,   506,   552,   553,   554,   555,   556,   557,
     558,   560,  1275,  1336,   200,   563,   564,   565,   548,   560,
     591,    22,   233,  1209,  1288,  1053,   233,   424,  1298,  1287,
      98,  1208,   235,   398,   608,   610,    28,   128,   213,   257,
     267,   281,   347,   417,   420,   421,   512,   580,   581,   582,
     585,   596,   444,   505,   599,  1317,  1234,   401,   402,   411,
      65,  1287,   453,   554,   453,   506,   553,    61,  1287,     9,
     371,   498,   566,   568,     1,   453,   565,   549,  1317,   257,
     593,  1238,  1298,   233,  1208,  1208,   576,   577,   453,     1,
     291,   313,  1261,   275,   389,   645,   646,   647,   648,   650,
     582,    17,   444,  1240,   329,  1287,   402,  1237,   453,  1287,
     506,  1204,   230,    26,   567,   230,   371,   453,   453,   109,
    1238,  1208,   453,   313,  1208,   651,   352,   413,   414,   649,
     531,     1,   453,   647,   583,   585,   257,  1237,   258,   436,
     496,   559,  1204,   257,   273,   611,   456,  1279,    23,  1270,
     104,   655,   453,   584,   585,    59,   507,  1330,   612,   439,
    1310,   190,  1280,   124,   456,   656,    17,     4,    19,    29,
      65,   221,   253,   316,   321,   352,   360,   373,   402,   405,
     413,   453,   456,   613,   614,   620,   622,   624,   625,   626,
     627,   628,   631,   632,   633,   634,   635,   640,   641,   643,
    1302,  1319,    88,  1277,   506,  1193,  1194,   453,   395,   657,
     585,   273,  1293,   352,  1318,   448,   499,  1314,   402,   403,
    1287,  1275,   115,   238,  1289,  1289,   288,   642,  1237,  1317,
     424,   263,    39,  1273,  1287,   652,   653,  1194,  1194,   453,
     174,   393,   532,   658,   659,   661,  1287,  1289,   127,   173,
     617,   352,   360,   632,  1287,  1287,  1287,  1287,  1270,     9,
     288,   350,   644,  1287,  1293,   403,   506,   653,   332,   654,
     508,   686,   688,   689,     1,  1194,   127,   348,   403,   621,
    1287,   119,   120,   121,   239,   253,   336,   348,   439,   615,
     616,   257,  1203,  1207,   420,  1203,  1203,   317,  1299,  1299,
     311,  1203,  1287,  1237,   395,   262,   743,   690,   691,   693,
     703,  1253,   453,   660,  1203,   257,   619,  1234,   619,     7,
     619,   619,   257,   618,  1234,   415,   454,   636,    33,   169,
     268,   629,   453,   395,   256,   745,   453,   691,   453,     1,
     177,   506,   694,   695,   506,   662,   126,   505,   636,  1255,
    1335,  1279,  1287,   637,   638,   505,   630,   630,   687,   453,
     395,   367,   747,   453,   453,   692,    87,    47,    64,   104,
     240,   251,   352,   353,   367,   369,   453,   500,   663,   664,
     666,   670,   671,   674,   675,   681,   682,   683,   684,  1287,
     126,   637,   433,   623,   639,  1203,   639,   263,   386,   688,
     744,   453,   395,   390,   802,   705,   696,  1287,  1277,  1287,
     352,   354,  1331,  1331,  1287,  1277,  1287,  1293,  1287,    22,
    1269,   307,   685,  1208,   173,   205,  1255,   503,   310,   688,
     746,   453,   395,   533,    21,    36,    39,    40,    41,    42,
      43,    44,    45,    75,    77,    78,    79,    80,    81,    82,
      83,   121,   180,   181,   182,   183,   184,   187,   188,   220,
     236,   278,   306,   320,   328,   331,   344,   356,   364,   406,
     408,   409,   410,   435,   479,   480,   481,   493,   500,   706,
     707,   708,   710,   711,   712,   713,   714,   715,   716,   719,
     731,   732,   734,   735,   736,   741,   742,  1287,  1306,    26,
     197,   704,  1271,   205,  1237,   506,  1287,  1269,   506,  1205,
    1206,   309,   419,  1327,  1207,  1237,   501,  1287,   176,   214,
     506,   672,  1208,   623,     9,   417,   512,   586,   275,   352,
     354,  1329,   688,   748,   453,   338,   816,   819,   245,   302,
     407,   478,  1305,   478,  1305,   478,  1305,   478,  1305,   478,
    1305,   503,  1315,   385,  1303,   127,  1237,  1231,  1234,  1234,
     233,   243,   385,   733,  1287,  1288,   173,   205,   242,   470,
     506,     9,    50,   213,   245,   246,   257,   267,   347,   417,
     462,   512,   697,  1241,  1242,  1243,   448,   669,  1206,   255,
    1292,   448,  1276,   219,  1282,   506,  1287,  1287,  1241,  1329,
     749,   803,   124,   842,   843,   512,    53,   723,   448,   720,
     464,  1235,  1236,   444,   713,   738,   739,  1241,    26,   709,
     401,  1265,  1265,  1243,   307,  1296,     1,    40,    41,    42,
      43,    44,   180,   181,   182,   183,   184,   185,   186,   331,
     344,   698,   699,   700,   701,   702,   714,   715,  1231,   698,
     449,  1237,    59,   354,   665,   676,  1237,   411,  1307,   257,
     673,  1234,   673,   349,   750,   693,   703,   804,   805,   806,
      57,   499,   820,     1,     3,     5,    10,    18,    51,    52,
      62,    73,    76,    90,   113,   121,   123,   154,   165,   170,
     196,   203,   206,   207,   216,   223,   225,   228,   270,   274,
     276,   286,   312,   325,   350,   351,   361,   375,   376,   382,
     386,   394,   404,   413,   422,   427,   428,   431,   433,   440,
     453,   471,   477,   482,   509,   844,   845,   861,   866,   870,
     875,   890,   893,   897,   901,   902,   903,   908,   922,   926,
     929,   943,   947,   950,   953,   957,   958,   962,   972,   975,
     992,   994,   997,  1001,  1007,  1019,  1027,  1028,  1031,  1032,
    1036,  1041,  1042,  1050,  1065,  1075,  1084,  1089,  1096,  1100,
    1102,  1105,  1108,  1112,  1139,   844,  1282,   197,   721,  1237,
     447,  1312,    84,   101,   193,   194,   195,   202,   246,   252,
     254,   259,   260,   261,   265,   304,   323,   378,   429,   430,
     460,   464,   465,   472,   492,   497,   504,  1181,  1183,  1184,
    1185,  1186,  1187,  1188,  1216,  1230,  1231,  1242,  1244,  1245,
    1246,  1247,   464,  1236,  1234,   737,   739,   444,   257,  1275,
     698,   453,  1243,    48,   467,   677,   678,   679,   680,  1317,
    1276,   197,   668,  1281,   506,  1195,     1,   694,   806,   453,
     822,   821,   377,   828,     3,     5,    10,    18,    51,    52,
      62,    73,    76,    90,   113,   121,   123,   130,   132,   133,
     134,   135,   136,   137,   138,   139,   141,   142,   143,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   165,
     170,   196,   203,   206,   207,   216,   223,   225,   228,   270,
     274,   276,   286,   312,   325,   350,   361,   376,   382,   386,
     394,   404,   413,   422,   427,   428,   431,   433,   440,   453,
     471,   477,   482,   509,  1266,   846,   862,   867,   871,   876,
     891,   894,   898,   904,   909,   923,   927,   930,   944,   948,
     951,   954,   204,   377,   885,   946,   959,   963,   973,   976,
     993,   995,   998,   400,  1002,  1008,  1020,  1029,  1033,  1037,
    1043,  1051,  1066,  1076,   257,   347,   388,   417,   512,  1088,
    1090,  1097,   337,  1101,  1103,   831,  1106,  1109,  1113,  1140,
     506,  1237,   720,   116,   722,   464,  1249,  1231,  1242,  1244,
    1326,  1326,   464,   464,   464,   464,  1326,  1187,  1183,  1187,
     464,  1249,    72,   399,   450,  1182,   451,   460,   465,   452,
     461,   171,   464,  1248,   464,   464,  1183,   503,   740,  1316,
    1241,  1207,  1207,   189,   669,  1237,   751,   453,   807,   453,
      49,   823,   824,   825,  1274,   823,   506,   453,   309,   847,
     848,  1230,     6,    96,   246,   272,   863,  1188,  1212,  1213,
    1230,  1241,  1244,   868,  1183,  1230,   257,   872,   873,  1199,
    1200,  1201,  1234,   272,   423,   425,   877,   878,   257,   892,
    1221,  1230,   895,  1194,     6,   899,  1188,  1189,  1190,  1211,
    1232,  1233,  1234,  1242,   456,   905,  1194,   257,   910,   911,
     913,  1212,  1213,  1221,  1230,   924,  1213,   257,   928,   455,
     466,   931,   932,   933,  1171,  1172,  1173,   200,   324,   325,
     341,   395,   945,   949,  1210,  1211,   952,  1234,   448,   955,
    1313,  1213,  1170,  1171,   964,  1210,   974,  1195,   977,   978,
    1230,  1241,  1244,  1067,  1228,  1229,  1234,    96,   996,  1213,
     999,  1213,   172,   226,   234,   318,  1003,  1004,   192,   257,
    1009,  1013,  1014,  1015,  1199,  1222,  1230,  1234,  1244,  1317,
    1021,  1194,  1030,  1191,  1234,  1034,  1194,  1038,  1191,     9,
    1044,  1192,  1234,   155,   272,  1052,  1055,  1056,  1059,  1060,
    1061,  1062,  1063,  1064,  1196,  1197,  1210,  1227,  1229,  1234,
    1067,  1077,  1194,  1085,   114,  1091,  1092,  1093,  1213,    96,
    1098,  1212,  1104,  1195,   453,   506,   832,   833,   836,   837,
     842,  1107,  1230,  1110,  1194,  1114,  1230,  1141,  1191,   224,
     724,   310,  1297,   725,   726,   450,  1181,  1183,   506,   506,
    1183,  1252,  1252,  1252,  1215,  1230,  1242,  1244,  1251,   506,
     450,  1215,  1250,  1183,   450,  1183,  1184,  1184,  1185,  1185,
    1185,  1183,  1215,  1181,   404,   455,    30,  1272,  1276,     1,
     752,   808,   824,   411,   478,   826,   358,   500,   817,   132,
     860,    30,   850,   851,  1272,   197,  1296,  1230,  1231,  1242,
    1244,   133,   865,   448,   864,  1213,    59,   224,  1256,   873,
     448,  1326,   134,   889,   257,  1222,  1221,  1194,   357,   476,
     896,  1317,  1332,  1296,   135,   900,   161,   454,  1190,  1323,
     387,  1262,  1235,  1236,   906,  1194,   136,   907,  1302,   137,
     921,   167,   912,  1150,  1151,   486,   914,   505,   851,   487,
     488,   489,   490,   138,   925,    49,   229,   499,   879,   139,
     942,    17,   503,   934,   935,   936,   938,    12,    13,    14,
      20,   161,   171,   208,   209,   247,   248,   285,   291,   294,
     302,   309,   314,   333,   450,   452,   454,   457,   459,   460,
     461,   464,   465,  1174,  1175,  1176,  1177,  1178,  1179,  1180,
    1213,   103,   946,  1211,  1198,   443,  1311,   965,  1317,  1195,
      94,   366,   438,   979,   980,   982,   983,  1069,   464,  1235,
    1213,   448,   142,  1000,    49,  1004,   405,  1005,  1014,   143,
     453,  1010,  1012,   483,   501,   444,   447,   441,   145,  1026,
     286,   335,  1259,   197,  1142,   146,  1035,  1302,   147,  1040,
    1142,  1192,   148,  1049,   501,  1045,  1219,  1230,  1242,  1062,
    1064,  1210,   448,  1197,   125,   448,   484,  1054,    31,  1235,
     149,  1083,   179,   238,   241,  1079,   885,  1086,  1317,  1274,
     150,  1095,   229,  1093,  1230,   151,  1099,   197,  1195,   395,
     453,   453,   197,   352,   354,  1111,   152,  1123,   114,  1115,
     153,  1146,  1142,   725,  1203,   221,   728,    27,   117,   727,
     450,  1182,   450,   450,   450,  1182,   450,  1182,   450,   450,
     451,   450,   450,   448,  1287,  1207,   116,   667,   453,    63,
      91,    92,   322,   453,   753,   754,   759,  1287,  1344,    32,
      35,    38,    45,    46,    66,    68,   162,   191,   197,   199,
     212,   244,   253,   266,   306,   319,   346,   372,   379,   396,
     448,   458,   475,   499,   711,   712,   716,   731,   734,   736,
     809,   814,   815,  1287,  1320,  1287,   411,   313,   827,   111,
     829,  1219,   198,   854,   253,   332,   852,   853,  1320,    24,
      25,    67,    69,    71,   105,   106,   107,   155,   157,   164,
     167,   253,   255,   445,   495,   506,   849,  1197,  1321,   154,
     341,  1217,  1231,   448,     6,  1188,  1189,  1213,  1234,  1242,
     204,   224,  1257,   377,   869,   340,   874,  1201,   879,   896,
     263,   288,  1280,  1231,  1183,   273,  1263,  1236,  1194,   232,
    1166,  1167,   839,   840,   913,  1213,   295,  1152,    98,   336,
     506,  1197,   299,   918,    35,    38,    45,    46,    93,   162,
     191,   212,   266,   319,   379,   392,   475,   919,   920,   486,
     915,  1150,  1150,  1150,  1150,  1213,  1189,  1213,   880,   933,
      21,   455,   466,   939,   940,  1172,   503,   936,   937,   503,
     839,  1313,   233,  1175,   116,   956,  1199,   130,   839,   960,
       9,    12,    15,    16,   278,   279,   302,   303,   966,   970,
     177,  1219,     9,    59,   179,   242,   470,   986,   987,   988,
     981,   982,  1071,  1297,  1335,   448,  1210,  1189,  1213,  1005,
    1317,  1193,   839,   170,  1016,  1170,  1017,  1018,  1230,  1199,
       8,    37,  1144,  1302,  1226,  1230,  1241,  1244,   229,  1022,
    1039,  1317,   131,  1046,  1230,  1046,   448,   448,  1053,   154,
     455,   466,  1213,    49,    38,    46,   212,   244,   266,   319,
     379,   475,  1057,  1058,  1287,  1078,  1317,  1213,   163,   290,
     411,  1213,  1230,   197,  1189,  1213,   838,  1237,  1219,  1274,
     229,  1118,  1143,  1144,   728,  1274,  1289,  1203,  1248,  1248,
    1248,  1215,   242,   470,  1248,   450,  1183,  1248,  1248,  1241,
    1297,  1287,  1287,  1269,   249,   250,  1291,   769,   205,   178,
     755,   756,   757,   758,  1230,  1287,   253,   390,   158,   160,
    1287,  1226,   300,  1294,  1237,    58,  1230,  1230,   205,  1294,
      32,   112,  1237,  1287,   506,   453,   818,   273,   855,  1294,
    1294,   853,   852,  1294,   167,  1147,  1148,   511,   510,  1219,
    1147,   238,   424,   300,   277,   257,  1218,  1231,  1230,  1296,
     412,  1153,  1154,  1235,  1236,  1189,   448,  1258,   869,  1211,
     448,  1199,   884,   885,   381,   363,  1153,  1287,   839,   296,
    1168,   841,   839,  1150,  1287,   253,   390,   158,   160,  1287,
     125,   484,   920,  1150,    98,    99,   916,   855,   204,  1153,
     204,   881,   882,   883,  1274,    17,   444,   941,   317,   939,
    1297,   839,   130,   141,   961,  1313,   366,   967,  1313,   448,
      49,   987,   989,  1219,     9,    59,   242,   470,   984,   985,
    1219,  1072,  1319,   727,   219,   315,  1283,  1210,  1153,   204,
    1193,   644,   380,  1006,  1317,   143,  1011,     8,   197,  1022,
    1230,   131,  1159,  1161,  1166,   263,   288,   839,   503,   503,
    1047,  1048,  1219,  1218,  1213,  1053,  1053,  1053,  1053,  1053,
    1053,  1053,  1053,  1058,   291,   294,  1080,  1081,  1082,  1176,
    1260,  1166,   245,   411,  1334,   424,  1309,  1309,  1094,  1317,
    1230,  1153,   204,   453,   448,     9,  1116,  1117,  1254,  1119,
    1230,  1094,  1119,  1039,     7,  1267,   506,   729,   730,  1287,
     450,  1203,  1221,  1287,  1269,   257,   512,   760,   761,  1230,
    1239,   693,   770,   757,   758,   512,  1223,  1227,  1237,  1223,
    1287,  1312,  1287,  1287,    32,  1237,   830,   831,  1287,   505,
     856,  1223,  1223,  1223,   839,   295,  1149,  1147,  1262,  1231,
     839,   298,  1155,  1236,  1153,  1220,  1230,  1241,   167,   463,
     887,  1325,     6,   229,   309,   462,   886,  1286,    34,   282,
     283,   284,   345,   468,   469,   473,  1264,   839,   842,  1223,
    1223,  1169,  1225,  1227,  1237,  1169,   505,   917,  1189,  1190,
    1189,  1190,   882,   309,   826,    89,   358,   500,   940,  1171,
     839,  1230,   839,   500,   968,   969,   970,   971,  1311,   500,
    1220,  1219,    49,   990,   985,   190,   990,  1068,  1287,  1289,
     315,  1189,  1006,   263,   288,  1018,  1213,   218,  1023,  1317,
     839,   292,  1162,   263,  1171,  1170,  1047,  1176,  1230,  1177,
    1178,  1179,  1180,  1183,  1087,  1213,  1087,   463,  1156,  1157,
     331,  1262,  1189,   834,  1220,   314,  1219,   115,  1120,   438,
    1122,   159,   293,  1145,  1163,  1164,  1165,  1166,   322,  1197,
    1223,   730,  1202,  1203,   762,   253,   255,  1328,   506,   694,
     271,   330,   460,   465,   810,   811,   812,  1221,   810,   811,
     813,   831,    47,    32,    35,    38,    46,    93,   112,   191,
     199,   212,   244,   264,   266,   288,   289,   319,   346,   372,
     379,   392,   396,   437,   446,   475,   485,   491,   857,   858,
     859,  1147,   839,  1153,   839,   295,   888,   839,  1296,  1230,
     253,   255,  1333,   919,  1153,   362,  1153,   362,  1213,   969,
     104,  1278,  1313,   990,   990,  1220,     8,    37,   991,   226,
     499,  1073,  1203,  1070,  1153,   381,    49,   263,   238,  1024,
     217,   237,   263,   288,   502,   839,   839,   839,   839,   297,
    1158,  1287,  1153,  1153,   494,   835,  1124,  1117,  1282,    97,
    1121,  1282,  1156,   839,   839,  1165,   253,   255,  1290,  1203,
     179,   189,   211,   241,   763,   764,   765,   766,   767,   768,
     761,   771,  1223,  1223,   131,  1287,  1287,   859,    58,   125,
     484,     8,  1268,   858,   839,  1230,  1190,  1190,    49,   112,
     990,   458,  1285,  1285,   338,  1193,   204,   318,  1074,  1234,
    1213,  1287,  1025,  1160,  1161,  1162,  1166,   263,   263,   263,
     839,  1230,  1125,   453,  1230,  1282,  1230,   108,   118,  1337,
    1287,  1287,    56,    91,  1337,  1338,  1321,   772,   111,  1223,
    1223,  1287,  1169,  1169,  1224,  1227,  1239,  1153,  1153,  1213,
    1213,  1213,  1287,  1193,   338,   483,  1230,  1162,   129,   168,
     205,  1126,  1127,  1128,  1130,  1134,  1136,  1137,  1138,  1272,
    1280,  1230,  1287,   761,   761,   211,  1287,  1287,   210,   253,
     286,   306,   310,   334,   415,   432,   453,   474,   493,   501,
     711,   716,   717,   731,   734,   736,   773,   774,   778,   781,
     784,   785,   786,   787,   791,   792,   793,   799,   800,   801,
    1320,  1321,  1322,   453,  1221,  1013,  1287,  1170,    37,  1268,
     341,   109,   761,   761,   761,   222,  1284,   300,   789,   210,
     322,  1237,   286,   503,  1287,  1296,  1287,  1287,  1230,   330,
     465,   788,   790,  1239,   796,   797,   798,   810,  1239,   300,
     301,  1295,  1013,   368,   419,  1308,   131,   422,  1135,  1297,
     233,  1287,   720,   322,  1170,  1216,  1214,  1216,    55,    91,
     322,   326,   327,   367,   383,   384,   775,  1337,  1338,  1339,
    1340,  1341,  1342,  1343,   121,   197,  1239,  1239,   797,  1239,
      54,   243,   385,   794,   795,  1230,   163,   167,  1324,     9,
    1131,  1132,  1200,   286,   287,   322,   330,   465,   779,   780,
    1237,  1312,  1262,   374,   486,   782,  1216,   189,   189,   211,
     189,   211,   178,   776,  1230,   178,   777,  1230,  1216,  1288,
     338,  1300,   307,   339,   359,  1133,  1132,   322,  1237,  1237,
     722,  1297,  1230,    49,  1297,   307,  1234,   426,   718,   178,
     783,  1230,  1216,   172,   226,   234,   318,  1129,  1193,  1237
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
#line 1371 "parser.y"
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
#line 1382 "parser.y"
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
#line 1418 "parser.y"
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
#line 1473 "parser.y"
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
#line 1502 "parser.y"
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
#line 1535 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 1541 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 1553 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 1563 "parser.y"
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
#line 1594 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 1601 "parser.y"
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

  case 33:
/* Line 1792 of yacc.c  */
#line 1637 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 1638 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 1647 "parser.y"
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
#line 1656 "parser.y"
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
#line 1670 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 1674 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 1684 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 1693 "parser.y"
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
#line 1718 "parser.y"
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
#line 1736 "parser.y"
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
#line 1749 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 1778 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 1785 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 1792 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 1799 "parser.y"
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
#line 1810 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 1814 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 1818 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 1822 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 1836 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 1841 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 1849 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 1861 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 1865 "parser.y"
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
#line 1886 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 1890 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 1897 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 1902 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 1913 "parser.y"
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
#line 1927 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 1958 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
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
#line 1977 "parser.y"
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
#line 1987 "parser.y"
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
#line 2000 "parser.y"
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
#line 2016 "parser.y"
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
#line 2026 "parser.y"
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
#line 2041 "parser.y"
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

  case 126:
/* Line 1792 of yacc.c  */
#line 2054 "parser.y"
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
#line 2065 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 2071 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 2077 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 2083 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 2089 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 2095 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 2105 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 2109 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 2116 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 2120 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 2124 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 2128 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2135 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2139 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 2145 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 2146 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 2147 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 2148 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 2149 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 2150 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 2154 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 2155 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 2163 "parser.y"
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

  case 150:
/* Line 1792 of yacc.c  */
#line 2177 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 2181 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 2189 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 2196 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 2200 "parser.y"
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
#line 2211 "parser.y"
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
#line 2231 "parser.y"
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
#line 2239 "parser.y"
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
#line 2249 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 2250 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 2257 "parser.y"
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

  case 161:
/* Line 1792 of yacc.c  */
#line 2277 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 2278 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 2283 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 2287 "parser.y"
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
#line 2308 "parser.y"
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

  case 166:
/* Line 1792 of yacc.c  */
#line 2331 "parser.y"
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
#line 2412 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 2416 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 2425 "parser.y"
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
    break;

  case 170:
/* Line 1792 of yacc.c  */
#line 2444 "parser.y"
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

  case 171:
/* Line 1792 of yacc.c  */
#line 2460 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_SPECIAL_NAMES, 0);
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "SPECIAL-NAMES");
	} else {
		check_repeated ("CURSOR", SYN_CLAUSE_3);
		current_program->cursor_pos = (yyvsp[(3) - (3)]);
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
		check_repeated ("CRT STATUS", SYN_CLAUSE_4);
		current_program->crt_status = (yyvsp[(4) - (4)]);
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
		check_repeated ("SCREEN CONTROL", SYN_CLAUSE_5);
		PENDING ("SCREEN CONTROL");
	}
  }
    break;

  case 174:
/* Line 1792 of yacc.c  */
#line 2513 "parser.y"
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
    break;

  case 176:
/* Line 1792 of yacc.c  */
#line 2530 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 2538 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 2547 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 2562 "parser.y"
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
#line 2579 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 2583 "parser.y"
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
#line 2617 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 2623 "parser.y"
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
#line 2633 "parser.y"
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
#line 2646 "parser.y"
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
#line 2659 "parser.y"
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
#line 2682 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 2689 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 2702 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 2714 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 2721 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 2722 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 2723 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 2731 "parser.y"
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

  case 225:
/* Line 1792 of yacc.c  */
#line 2760 "parser.y"
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

  case 226:
/* Line 1792 of yacc.c  */
#line 2797 "parser.y"
    { (yyval) = cb_int (-1); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 2800 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(4) - (4)])));
  }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 2805 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(3) - (3)])));
  }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 2815 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 2826 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 2841 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 2849 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 2854 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 2859 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 2868 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 2872 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 2888 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 2893 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 2898 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 2903 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 2914 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 2925 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 2935 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 2940 "parser.y"
    {
	cb_tree composite_key;

	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
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

  case 255:
/* Line 1792 of yacc.c  */
#line 2965 "parser.y"
    {
    key_component_list = NULL;
  }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 2975 "parser.y"
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

  case 259:
/* Line 1792 of yacc.c  */
#line 2993 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 3004 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 3018 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 3025 "parser.y"
    { (yyval) = NULL; }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 3026 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 3027 "parser.y"
    { (yyval) = NULL; }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 3036 "parser.y"
    {
	yyerrok;
  }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 3055 "parser.y"
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

  case 275:
/* Line 1792 of yacc.c  */
#line 3082 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 3083 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 3084 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 3085 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 3092 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 3097 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION,
			       COBC_HD_I_O_CONTROL, 0);
	cb_verify (cb_multiple_file_tape_clause, "MULTIPLE FILE TAPE");
	cobc_cs_check = 0;
  }
    break;

  case 287:
/* Line 1792 of yacc.c  */
#line 3124 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 3133 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 3147 "parser.y"
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

  case 293:
/* Line 1792 of yacc.c  */
#line 3166 "parser.y"
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

  case 295:
/* Line 1792 of yacc.c  */
#line 3183 "parser.y"
    {
	yyerrok;
  }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 3190 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 3194 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 3205 "parser.y"
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

  case 301:
/* Line 1792 of yacc.c  */
#line 3215 "parser.y"
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
    break;

  case 311:
/* Line 1792 of yacc.c  */
#line 3245 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 3258 "parser.y"
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

  case 316:
/* Line 1792 of yacc.c  */
#line 3278 "parser.y"
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

  case 317:
/* Line 1792 of yacc.c  */
#line 3313 "parser.y"
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

  case 319:
/* Line 1792 of yacc.c  */
#line 3344 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 3350 "parser.y"
    { (yyval) = NULL; }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 3351 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 3355 "parser.y"
    { (yyval) = NULL; }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 3356 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 3364 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 3375 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 3380 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
	if (!current_file->assign) {
		current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
	}
  }
    break;

  case 331:
/* Line 1792 of yacc.c  */
#line 3403 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 3415 "parser.y"
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

  case 338:
/* Line 1792 of yacc.c  */
#line 3443 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 3450 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 3457 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 3466 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 3478 "parser.y"
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

  case 343:
/* Line 1792 of yacc.c  */
#line 3530 "parser.y"
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

  case 346:
/* Line 1792 of yacc.c  */
#line 3550 "parser.y"
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

  case 347:
/* Line 1792 of yacc.c  */
#line 3562 "parser.y"
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

  case 349:
/* Line 1792 of yacc.c  */
#line 3605 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 3611 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 3620 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 3623 "parser.y"
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 3630 "parser.y"
    {
	struct cb_field *p;

	for (p = description_field; p; p = p->sister) {
		cb_validate_field (p);
	}
	(yyval) = CB_TREE (description_field);
  }
    break;

  case 358:
/* Line 1792 of yacc.c  */
#line 3650 "parser.y"
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

  case 359:
/* Line 1792 of yacc.c  */
#line 3665 "parser.y"
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

  case 360:
/* Line 1792 of yacc.c  */
#line 3685 "parser.y"
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

  case 361:
/* Line 1792 of yacc.c  */
#line 3698 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 3705 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 3711 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 3717 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
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
	(yyval)= NULL;
  }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 3739 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 3750 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 3751 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 3752 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 3753 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 3758 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 3762 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 3766 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 3770 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 3774 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 3778 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 3782 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 3786 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 3790 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 3794 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 3798 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 3802 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 3806 "parser.y"
    {
	yyerrok;
	cb_unput_dot ();
	check_pic_duplicate = 0;
	check_duplicate = 0;
	current_field = cb_get_real_field ();
  }
    break;

  case 394:
/* Line 1792 of yacc.c  */
#line 3838 "parser.y"
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

  case 395:
/* Line 1792 of yacc.c  */
#line 3864 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 3868 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 3876 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 3882 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 3910 "parser.y"
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

  case 414:
/* Line 1792 of yacc.c  */
#line 3934 "parser.y"
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
    break;

  case 415:
/* Line 1792 of yacc.c  */
#line 3961 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 3965 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 3974 "parser.y"
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
    break;

  case 418:
/* Line 1792 of yacc.c  */
#line 3999 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 4015 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 4019 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 4023 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 4027 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 4031 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 4035 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 4039 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 4043 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 4047 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 4051 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 4055 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 4059 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 4063 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 4068 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 4073 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 4077 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 4081 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 438:
/* Line 1792 of yacc.c  */
#line 4089 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 4093 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 4097 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 441:
/* Line 1792 of yacc.c  */
#line 4105 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 4109 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 4113 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 4117 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4121 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4125 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4129 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 4133 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 4137 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_SIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_SIGNED_LONG);
	}
  }
    break;

  case 450:
/* Line 1792 of yacc.c  */
#line 4145 "parser.y"
    {
	if (sizeof(long) == 4) {
		check_set_usage (CB_USAGE_UNSIGNED_INT);
	} else {
		check_set_usage (CB_USAGE_UNSIGNED_LONG);
	}
  }
    break;

  case 451:
/* Line 1792 of yacc.c  */
#line 4153 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 4157 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 4161 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 4165 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 4169 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 4173 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 4193 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 4199 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 4212 "parser.y"
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

  case 465:
/* Line 1792 of yacc.c  */
#line 4230 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 4240 "parser.y"
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
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 467:
/* Line 1792 of yacc.c  */
#line 4261 "parser.y"
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
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "OCCURS");
	} else if (current_field->flag_external) {
		cb_error (_("%s and %s are mutually exclusive"), "EXTERNAL", "OCCURS");
	}
	current_field->flag_occurs = 1;
  }
    break;

  case 468:
/* Line 1792 of yacc.c  */
#line 4280 "parser.y"
    { (yyval) = NULL; }
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 4281 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 4285 "parser.y"
    { (yyval) = NULL; }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 4286 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 4291 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 4298 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 4306 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 4313 "parser.y"
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

  case 479:
/* Line 1792 of yacc.c  */
#line 4336 "parser.y"
    { (yyval) = NULL; }
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 4339 "parser.y"
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

  case 481:
/* Line 1792 of yacc.c  */
#line 4354 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 4355 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 4360 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 4366 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 4368 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 4373 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 4384 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 4395 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 4405 "parser.y"
    {
	/* Stay quiet on this
	PENDING ("SYNCHRONIZED RIGHT");
	*/
  }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 4417 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 4428 "parser.y"
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
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 4456 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 4464 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 4465 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 4469 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 4470 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 4475 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 4488 "parser.y"
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

  case 504:
/* Line 1792 of yacc.c  */
#line 4501 "parser.y"
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

  case 505:
/* Line 1792 of yacc.c  */
#line 4522 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 4531 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("%s and %s are mutually exclusive"), "BASED", "ANY clause");
	} else {
		current_field->flag_any_length = 1;
		current_field->flag_any_numeric = 1;
	}
  }
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 4546 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("%s not allowed in nested programs"), "LOCAL-STORAGE");
	}
  }
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 4555 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 4567 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 4573 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 4584 "parser.y"
    {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  }
    break;

  case 518:
/* Line 1792 of yacc.c  */
#line 4602 "parser.y"
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

  case 519:
/* Line 1792 of yacc.c  */
#line 4615 "parser.y"
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

  case 522:
/* Line 1792 of yacc.c  */
#line 4633 "parser.y"
    {
	yyerrok;
  }
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 4640 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 4646 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 4657 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 4670 "parser.y"
    {
      current_report->control_final = 1;
  }
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 4682 "parser.y"
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), current_report->controls);
  }
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 4693 "parser.y"
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

  case 536:
/* Line 1792 of yacc.c  */
#line 4732 "parser.y"
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

  case 537:
/* Line 1792 of yacc.c  */
#line 4742 "parser.y"
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

  case 538:
/* Line 1792 of yacc.c  */
#line 4752 "parser.y"
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

  case 548:
/* Line 1792 of yacc.c  */
#line 4788 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_heading = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 4799 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_first_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 4810 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_control = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 4821 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 4832 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_footing = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 555:
/* Line 1792 of yacc.c  */
#line 4847 "parser.y"
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

  case 576:
/* Line 1792 of yacc.c  */
#line 4893 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 4900 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 4904 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 4910 "parser.y"
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 4917 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 4921 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 4927 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 4931 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 4936 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 4942 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 4946 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 4951 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 4958 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 4965 "parser.y"
    {
	if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int((yyvsp[(1) - (1)]));
  }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 4974 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 4979 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 4984 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
    break;

  case 599:
/* Line 1792 of yacc.c  */
#line 4998 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
	current_field->report_sum_list = (yyvsp[(3) - (4)]);
	build_sum_counter( current_report, current_field);
  }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 5008 "parser.y"
    {
      current_field->report_sum_upon = (yyvsp[(2) - (2)]);
  }
    break;

  case 603:
/* Line 1792 of yacc.c  */
#line 5015 "parser.y"
    {
      current_field->report_reset = (yyvsp[(1) - (1)]);
  }
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 5019 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
    break;

  case 605:
/* Line 1792 of yacc.c  */
#line 5026 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_when = (yyvsp[(3) - (3)]);
  }
    break;

  case 607:
/* Line 1792 of yacc.c  */
#line 5038 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
	current_field->report_flag |= COB_REPORT_LINE;
  }
    break;

  case 609:
/* Line 1792 of yacc.c  */
#line 5050 "parser.y"
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
    break;

  case 610:
/* Line 1792 of yacc.c  */
#line 5056 "parser.y"
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

  case 611:
/* Line 1792 of yacc.c  */
#line 5071 "parser.y"
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

  case 615:
/* Line 1792 of yacc.c  */
#line 5094 "parser.y"
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

  case 616:
/* Line 1792 of yacc.c  */
#line 5111 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 617:
/* Line 1792 of yacc.c  */
#line 5115 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 618:
/* Line 1792 of yacc.c  */
#line 5122 "parser.y"
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
    break;

  case 622:
/* Line 1792 of yacc.c  */
#line 5146 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_LEFT;
  }
    break;

  case 623:
/* Line 1792 of yacc.c  */
#line 5150 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_RIGHT;
  }
    break;

  case 624:
/* Line 1792 of yacc.c  */
#line 5154 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_CENTER;
  }
    break;

  case 625:
/* Line 1792 of yacc.c  */
#line 5161 "parser.y"
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

  case 629:
/* Line 1792 of yacc.c  */
#line 5190 "parser.y"
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

  case 630:
/* Line 1792 of yacc.c  */
#line 5222 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
	current_field->report_source = (yyvsp[(3) - (4)]);
  }
    break;

  case 631:
/* Line 1792 of yacc.c  */
#line 5230 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
    break;

  case 632:
/* Line 1792 of yacc.c  */
#line 5238 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
    break;

  case 634:
/* Line 1792 of yacc.c  */
#line 5247 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 635:
/* Line 1792 of yacc.c  */
#line 5254 "parser.y"
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

  case 641:
/* Line 1792 of yacc.c  */
#line 5280 "parser.y"
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

  case 642:
/* Line 1792 of yacc.c  */
#line 5311 "parser.y"
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

  case 643:
/* Line 1792 of yacc.c  */
#line 5337 "parser.y"
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

  case 646:
/* Line 1792 of yacc.c  */
#line 5360 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 647:
/* Line 1792 of yacc.c  */
#line 5364 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 648:
/* Line 1792 of yacc.c  */
#line 5368 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 649:
/* Line 1792 of yacc.c  */
#line 5372 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 650:
/* Line 1792 of yacc.c  */
#line 5376 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 651:
/* Line 1792 of yacc.c  */
#line 5380 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 652:
/* Line 1792 of yacc.c  */
#line 5384 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 653:
/* Line 1792 of yacc.c  */
#line 5388 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 654:
/* Line 1792 of yacc.c  */
#line 5392 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 655:
/* Line 1792 of yacc.c  */
#line 5396 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 656:
/* Line 1792 of yacc.c  */
#line 5400 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 657:
/* Line 1792 of yacc.c  */
#line 5404 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 658:
/* Line 1792 of yacc.c  */
#line 5408 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 659:
/* Line 1792 of yacc.c  */
#line 5412 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 660:
/* Line 1792 of yacc.c  */
#line 5416 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 661:
/* Line 1792 of yacc.c  */
#line 5420 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 662:
/* Line 1792 of yacc.c  */
#line 5424 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 663:
/* Line 1792 of yacc.c  */
#line 5429 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 664:
/* Line 1792 of yacc.c  */
#line 5433 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 665:
/* Line 1792 of yacc.c  */
#line 5437 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 666:
/* Line 1792 of yacc.c  */
#line 5442 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 667:
/* Line 1792 of yacc.c  */
#line 5447 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 668:
/* Line 1792 of yacc.c  */
#line 5452 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 677:
/* Line 1792 of yacc.c  */
#line 5465 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 678:
/* Line 1792 of yacc.c  */
#line 5472 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 679:
/* Line 1792 of yacc.c  */
#line 5477 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 684:
/* Line 1792 of yacc.c  */
#line 5496 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 685:
/* Line 1792 of yacc.c  */
#line 5500 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 686:
/* Line 1792 of yacc.c  */
#line 5504 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 687:
/* Line 1792 of yacc.c  */
#line 5511 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 688:
/* Line 1792 of yacc.c  */
#line 5515 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 689:
/* Line 1792 of yacc.c  */
#line 5519 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 690:
/* Line 1792 of yacc.c  */
#line 5527 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 691:
/* Line 1792 of yacc.c  */
#line 5538 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 693:
/* Line 1792 of yacc.c  */
#line 5547 "parser.y"
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

  case 694:
/* Line 1792 of yacc.c  */
#line 5557 "parser.y"
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

  case 695:
/* Line 1792 of yacc.c  */
#line 5569 "parser.y"
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

  case 696:
/* Line 1792 of yacc.c  */
#line 5584 "parser.y"
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

  case 698:
/* Line 1792 of yacc.c  */
#line 5617 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 699:
/* Line 1792 of yacc.c  */
#line 5621 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 700:
/* Line 1792 of yacc.c  */
#line 5626 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 701:
/* Line 1792 of yacc.c  */
#line 5634 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 702:
/* Line 1792 of yacc.c  */
#line 5643 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 703:
/* Line 1792 of yacc.c  */
#line 5653 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 704:
/* Line 1792 of yacc.c  */
#line 5655 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 705:
/* Line 1792 of yacc.c  */
#line 5660 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 707:
/* Line 1792 of yacc.c  */
#line 5669 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 708:
/* Line 1792 of yacc.c  */
#line 5673 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 710:
/* Line 1792 of yacc.c  */
#line 5685 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 711:
/* Line 1792 of yacc.c  */
#line 5693 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 712:
/* Line 1792 of yacc.c  */
#line 5701 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 713:
/* Line 1792 of yacc.c  */
#line 5709 "parser.y"
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

  case 714:
/* Line 1792 of yacc.c  */
#line 5738 "parser.y"
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

  case 716:
/* Line 1792 of yacc.c  */
#line 5771 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 717:
/* Line 1792 of yacc.c  */
#line 5780 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 718:
/* Line 1792 of yacc.c  */
#line 5786 "parser.y"
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

  case 720:
/* Line 1792 of yacc.c  */
#line 5814 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 721:
/* Line 1792 of yacc.c  */
#line 5820 "parser.y"
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

  case 726:
/* Line 1792 of yacc.c  */
#line 5858 "parser.y"
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

  case 728:
/* Line 1792 of yacc.c  */
#line 5876 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 729:
/* Line 1792 of yacc.c  */
#line 5886 "parser.y"
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

  case 730:
/* Line 1792 of yacc.c  */
#line 5930 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 733:
/* Line 1792 of yacc.c  */
#line 5941 "parser.y"
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

  case 734:
/* Line 1792 of yacc.c  */
#line 5989 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
	}
	YYERROR;
  }
    break;

  case 735:
/* Line 1792 of yacc.c  */
#line 6001 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 736:
/* Line 1792 of yacc.c  */
#line 6005 "parser.y"
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

  case 737:
/* Line 1792 of yacc.c  */
#line 6023 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 738:
/* Line 1792 of yacc.c  */
#line 6028 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 739:
/* Line 1792 of yacc.c  */
#line 6033 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 740:
/* Line 1792 of yacc.c  */
#line 6041 "parser.y"
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

  case 741:
/* Line 1792 of yacc.c  */
#line 6068 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 742:
/* Line 1792 of yacc.c  */
#line 6072 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 792:
/* Line 1792 of yacc.c  */
#line 6128 "parser.y"
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

  case 793:
/* Line 1792 of yacc.c  */
#line 6142 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 794:
/* Line 1792 of yacc.c  */
#line 6153 "parser.y"
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

  case 796:
/* Line 1792 of yacc.c  */
#line 6170 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 797:
/* Line 1792 of yacc.c  */
#line 6175 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 798:
/* Line 1792 of yacc.c  */
#line 6179 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 799:
/* Line 1792 of yacc.c  */
#line 6183 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 800:
/* Line 1792 of yacc.c  */
#line 6188 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 801:
/* Line 1792 of yacc.c  */
#line 6193 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 802:
/* Line 1792 of yacc.c  */
#line 6198 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 803:
/* Line 1792 of yacc.c  */
#line 6203 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 804:
/* Line 1792 of yacc.c  */
#line 6207 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 805:
/* Line 1792 of yacc.c  */
#line 6211 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 806:
/* Line 1792 of yacc.c  */
#line 6215 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 807:
/* Line 1792 of yacc.c  */
#line 6219 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 808:
/* Line 1792 of yacc.c  */
#line 6224 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 809:
/* Line 1792 of yacc.c  */
#line 6228 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 810:
/* Line 1792 of yacc.c  */
#line 6232 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 811:
/* Line 1792 of yacc.c  */
#line 6236 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 812:
/* Line 1792 of yacc.c  */
#line 6240 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 813:
/* Line 1792 of yacc.c  */
#line 6244 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 814:
/* Line 1792 of yacc.c  */
#line 6248 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 816:
/* Line 1792 of yacc.c  */
#line 6256 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 819:
/* Line 1792 of yacc.c  */
#line 6267 "parser.y"
    { (yyval) = NULL; }
    break;

  case 820:
/* Line 1792 of yacc.c  */
#line 6268 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 821:
/* Line 1792 of yacc.c  */
#line 6272 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 822:
/* Line 1792 of yacc.c  */
#line 6273 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 823:
/* Line 1792 of yacc.c  */
#line 6274 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 824:
/* Line 1792 of yacc.c  */
#line 6275 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 825:
/* Line 1792 of yacc.c  */
#line 6276 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 826:
/* Line 1792 of yacc.c  */
#line 6280 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 827:
/* Line 1792 of yacc.c  */
#line 6284 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 828:
/* Line 1792 of yacc.c  */
#line 6285 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 832:
/* Line 1792 of yacc.c  */
#line 6294 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 837:
/* Line 1792 of yacc.c  */
#line 6310 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 838:
/* Line 1792 of yacc.c  */
#line 6314 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 839:
/* Line 1792 of yacc.c  */
#line 6320 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 840:
/* Line 1792 of yacc.c  */
#line 6324 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 841:
/* Line 1792 of yacc.c  */
#line 6328 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 842:
/* Line 1792 of yacc.c  */
#line 6332 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 843:
/* Line 1792 of yacc.c  */
#line 6336 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 844:
/* Line 1792 of yacc.c  */
#line 6340 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 845:
/* Line 1792 of yacc.c  */
#line 6344 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 846:
/* Line 1792 of yacc.c  */
#line 6348 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 847:
/* Line 1792 of yacc.c  */
#line 6352 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 848:
/* Line 1792 of yacc.c  */
#line 6356 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 849:
/* Line 1792 of yacc.c  */
#line 6360 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  }
    break;

  case 850:
/* Line 1792 of yacc.c  */
#line 6364 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 851:
/* Line 1792 of yacc.c  */
#line 6368 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 852:
/* Line 1792 of yacc.c  */
#line 6372 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 853:
/* Line 1792 of yacc.c  */
#line 6376 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 854:
/* Line 1792 of yacc.c  */
#line 6380 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 855:
/* Line 1792 of yacc.c  */
#line 6384 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 856:
/* Line 1792 of yacc.c  */
#line 6390 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 857:
/* Line 1792 of yacc.c  */
#line 6394 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 858:
/* Line 1792 of yacc.c  */
#line 6398 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 859:
/* Line 1792 of yacc.c  */
#line 6402 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 860:
/* Line 1792 of yacc.c  */
#line 6406 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 861:
/* Line 1792 of yacc.c  */
#line 6410 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 862:
/* Line 1792 of yacc.c  */
#line 6414 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  }
    break;

  case 865:
/* Line 1792 of yacc.c  */
#line 6426 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 866:
/* Line 1792 of yacc.c  */
#line 6430 "parser.y"
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

  case 867:
/* Line 1792 of yacc.c  */
#line 6447 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 869:
/* Line 1792 of yacc.c  */
#line 6456 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 870:
/* Line 1792 of yacc.c  */
#line 6460 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 871:
/* Line 1792 of yacc.c  */
#line 6464 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 873:
/* Line 1792 of yacc.c  */
#line 6471 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 874:
/* Line 1792 of yacc.c  */
#line 6478 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 875:
/* Line 1792 of yacc.c  */
#line 6482 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 876:
/* Line 1792 of yacc.c  */
#line 6492 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 878:
/* Line 1792 of yacc.c  */
#line 6501 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 879:
/* Line 1792 of yacc.c  */
#line 6505 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 880:
/* Line 1792 of yacc.c  */
#line 6516 "parser.y"
    { (yyval) = NULL; }
    break;

  case 881:
/* Line 1792 of yacc.c  */
#line 6517 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 882:
/* Line 1792 of yacc.c  */
#line 6525 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 886:
/* Line 1792 of yacc.c  */
#line 6539 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 889:
/* Line 1792 of yacc.c  */
#line 6551 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 891:
/* Line 1792 of yacc.c  */
#line 6566 "parser.y"
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

  case 892:
/* Line 1792 of yacc.c  */
#line 6580 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 893:
/* Line 1792 of yacc.c  */
#line 6585 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 894:
/* Line 1792 of yacc.c  */
#line 6590 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 895:
/* Line 1792 of yacc.c  */
#line 6595 "parser.y"
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

  case 896:
/* Line 1792 of yacc.c  */
#line 6615 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 897:
/* Line 1792 of yacc.c  */
#line 6619 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 898:
/* Line 1792 of yacc.c  */
#line 6624 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 899:
/* Line 1792 of yacc.c  */
#line 6635 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 900:
/* Line 1792 of yacc.c  */
#line 6637 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 901:
/* Line 1792 of yacc.c  */
#line 6642 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 902:
/* Line 1792 of yacc.c  */
#line 6650 "parser.y"
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

  case 904:
/* Line 1792 of yacc.c  */
#line 6676 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 905:
/* Line 1792 of yacc.c  */
#line 6680 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 906:
/* Line 1792 of yacc.c  */
#line 6689 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 907:
/* Line 1792 of yacc.c  */
#line 6701 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 908:
/* Line 1792 of yacc.c  */
#line 6705 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 909:
/* Line 1792 of yacc.c  */
#line 6709 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 910:
/* Line 1792 of yacc.c  */
#line 6713 "parser.y"
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

  case 915:
/* Line 1792 of yacc.c  */
#line 6746 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 916:
/* Line 1792 of yacc.c  */
#line 6751 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 917:
/* Line 1792 of yacc.c  */
#line 6758 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 918:
/* Line 1792 of yacc.c  */
#line 6763 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 919:
/* Line 1792 of yacc.c  */
#line 6770 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 6774 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 921:
/* Line 1792 of yacc.c  */
#line 6784 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 923:
/* Line 1792 of yacc.c  */
#line 6792 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 924:
/* Line 1792 of yacc.c  */
#line 6796 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 925:
/* Line 1792 of yacc.c  */
#line 6806 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 927:
/* Line 1792 of yacc.c  */
#line 6814 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 928:
/* Line 1792 of yacc.c  */
#line 6819 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 929:
/* Line 1792 of yacc.c  */
#line 6826 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 930:
/* Line 1792 of yacc.c  */
#line 6827 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 931:
/* Line 1792 of yacc.c  */
#line 6828 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 932:
/* Line 1792 of yacc.c  */
#line 6829 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 933:
/* Line 1792 of yacc.c  */
#line 6830 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 934:
/* Line 1792 of yacc.c  */
#line 6838 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 936:
/* Line 1792 of yacc.c  */
#line 6847 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 937:
/* Line 1792 of yacc.c  */
#line 6854 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 938:
/* Line 1792 of yacc.c  */
#line 6858 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 939:
/* Line 1792 of yacc.c  */
#line 6868 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 6879 "parser.y"
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

  case 941:
/* Line 1792 of yacc.c  */
#line 6896 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 6905 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 945:
/* Line 1792 of yacc.c  */
#line 6913 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 946:
/* Line 1792 of yacc.c  */
#line 6918 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 947:
/* Line 1792 of yacc.c  */
#line 6926 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 948:
/* Line 1792 of yacc.c  */
#line 6930 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 949:
/* Line 1792 of yacc.c  */
#line 6940 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 951:
/* Line 1792 of yacc.c  */
#line 6950 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 952:
/* Line 1792 of yacc.c  */
#line 6954 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 953:
/* Line 1792 of yacc.c  */
#line 6958 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 954:
/* Line 1792 of yacc.c  */
#line 6962 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 955:
/* Line 1792 of yacc.c  */
#line 6966 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 957:
/* Line 1792 of yacc.c  */
#line 6971 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 959:
/* Line 1792 of yacc.c  */
#line 6981 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 961:
/* Line 1792 of yacc.c  */
#line 6989 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 962:
/* Line 1792 of yacc.c  */
#line 6997 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 963:
/* Line 1792 of yacc.c  */
#line 7005 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 964:
/* Line 1792 of yacc.c  */
#line 7009 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 965:
/* Line 1792 of yacc.c  */
#line 7013 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 966:
/* Line 1792 of yacc.c  */
#line 7017 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 972:
/* Line 1792 of yacc.c  */
#line 7039 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 973:
/* Line 1792 of yacc.c  */
#line 7045 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 974:
/* Line 1792 of yacc.c  */
#line 7046 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 977:
/* Line 1792 of yacc.c  */
#line 7057 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 978:
/* Line 1792 of yacc.c  */
#line 7061 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 979:
/* Line 1792 of yacc.c  */
#line 7065 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 980:
/* Line 1792 of yacc.c  */
#line 7069 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 981:
/* Line 1792 of yacc.c  */
#line 7073 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 982:
/* Line 1792 of yacc.c  */
#line 7077 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 983:
/* Line 1792 of yacc.c  */
#line 7081 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 984:
/* Line 1792 of yacc.c  */
#line 7085 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 985:
/* Line 1792 of yacc.c  */
#line 7089 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 986:
/* Line 1792 of yacc.c  */
#line 7093 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 987:
/* Line 1792 of yacc.c  */
#line 7097 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7101 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 989:
/* Line 1792 of yacc.c  */
#line 7105 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7109 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 991:
/* Line 1792 of yacc.c  */
#line 7113 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7117 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7124 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 994:
/* Line 1792 of yacc.c  */
#line 7128 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 995:
/* Line 1792 of yacc.c  */
#line 7138 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 997:
/* Line 1792 of yacc.c  */
#line 7147 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 998:
/* Line 1792 of yacc.c  */
#line 7151 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 999:
/* Line 1792 of yacc.c  */
#line 7155 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 1000:
/* Line 1792 of yacc.c  */
#line 7159 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1001:
/* Line 1792 of yacc.c  */
#line 7163 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1002:
/* Line 1792 of yacc.c  */
#line 7170 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 1003:
/* Line 1792 of yacc.c  */
#line 7174 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 1004:
/* Line 1792 of yacc.c  */
#line 7184 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 1006:
/* Line 1792 of yacc.c  */
#line 7193 "parser.y"
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

  case 1007:
/* Line 1792 of yacc.c  */
#line 7211 "parser.y"
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

  case 1009:
/* Line 1792 of yacc.c  */
#line 7235 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1010:
/* Line 1792 of yacc.c  */
#line 7242 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1011:
/* Line 1792 of yacc.c  */
#line 7244 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1012:
/* Line 1792 of yacc.c  */
#line 7249 "parser.y"
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

  case 1013:
/* Line 1792 of yacc.c  */
#line 7260 "parser.y"
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

  case 1014:
/* Line 1792 of yacc.c  */
#line 7271 "parser.y"
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

  case 1015:
/* Line 1792 of yacc.c  */
#line 7285 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1016:
/* Line 1792 of yacc.c  */
#line 7289 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1017:
/* Line 1792 of yacc.c  */
#line 7295 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1018:
/* Line 1792 of yacc.c  */
#line 7297 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1019:
/* Line 1792 of yacc.c  */
#line 7303 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1020:
/* Line 1792 of yacc.c  */
#line 7312 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1021:
/* Line 1792 of yacc.c  */
#line 7320 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1022:
/* Line 1792 of yacc.c  */
#line 7326 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1023:
/* Line 1792 of yacc.c  */
#line 7333 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1024:
/* Line 1792 of yacc.c  */
#line 7335 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1025:
/* Line 1792 of yacc.c  */
#line 7340 "parser.y"
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

  case 1026:
/* Line 1792 of yacc.c  */
#line 7401 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1027:
/* Line 1792 of yacc.c  */
#line 7402 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1028:
/* Line 1792 of yacc.c  */
#line 7403 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1029:
/* Line 1792 of yacc.c  */
#line 7407 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1030:
/* Line 1792 of yacc.c  */
#line 7408 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1031:
/* Line 1792 of yacc.c  */
#line 7413 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1032:
/* Line 1792 of yacc.c  */
#line 7417 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1033:
/* Line 1792 of yacc.c  */
#line 7427 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1034:
/* Line 1792 of yacc.c  */
#line 7432 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1036:
/* Line 1792 of yacc.c  */
#line 7440 "parser.y"
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

  case 1037:
/* Line 1792 of yacc.c  */
#line 7461 "parser.y"
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

  case 1038:
/* Line 1792 of yacc.c  */
#line 7475 "parser.y"
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

  case 1039:
/* Line 1792 of yacc.c  */
#line 7497 "parser.y"
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

  case 1040:
/* Line 1792 of yacc.c  */
#line 7519 "parser.y"
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

  case 1041:
/* Line 1792 of yacc.c  */
#line 7539 "parser.y"
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

  case 1042:
/* Line 1792 of yacc.c  */
#line 7561 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1043:
/* Line 1792 of yacc.c  */
#line 7562 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1044:
/* Line 1792 of yacc.c  */
#line 7570 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1046:
/* Line 1792 of yacc.c  */
#line 7579 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1047:
/* Line 1792 of yacc.c  */
#line 7589 "parser.y"
    {
	begin_statement ("GENERATE", 0);
  }
    break;

  case 1049:
/* Line 1792 of yacc.c  */
#line 7598 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
		cb_emit_generate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1050:
/* Line 1792 of yacc.c  */
#line 7610 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1052:
/* Line 1792 of yacc.c  */
#line 7623 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1053:
/* Line 1792 of yacc.c  */
#line 7631 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1054:
/* Line 1792 of yacc.c  */
#line 7636 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1055:
/* Line 1792 of yacc.c  */
#line 7647 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1056:
/* Line 1792 of yacc.c  */
#line 7662 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1058:
/* Line 1792 of yacc.c  */
#line 7671 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1059:
/* Line 1792 of yacc.c  */
#line 7675 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1060:
/* Line 1792 of yacc.c  */
#line 7679 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1061:
/* Line 1792 of yacc.c  */
#line 7686 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1062:
/* Line 1792 of yacc.c  */
#line 7690 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1063:
/* Line 1792 of yacc.c  */
#line 7700 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1065:
/* Line 1792 of yacc.c  */
#line 7709 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1066:
/* Line 1792 of yacc.c  */
#line 7715 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1067:
/* Line 1792 of yacc.c  */
#line 7716 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1068:
/* Line 1792 of yacc.c  */
#line 7720 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 7721 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1070:
/* Line 1792 of yacc.c  */
#line 7722 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1071:
/* Line 1792 of yacc.c  */
#line 7727 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1072:
/* Line 1792 of yacc.c  */
#line 7731 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1073:
/* Line 1792 of yacc.c  */
#line 7738 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1074:
/* Line 1792 of yacc.c  */
#line 7743 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1075:
/* Line 1792 of yacc.c  */
#line 7750 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1076:
/* Line 1792 of yacc.c  */
#line 7756 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1077:
/* Line 1792 of yacc.c  */
#line 7757 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 7758 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 7759 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 7760 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1081:
/* Line 1792 of yacc.c  */
#line 7761 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1082:
/* Line 1792 of yacc.c  */
#line 7762 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1083:
/* Line 1792 of yacc.c  */
#line 7767 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1084:
/* Line 1792 of yacc.c  */
#line 7771 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1085:
/* Line 1792 of yacc.c  */
#line 7780 "parser.y"
    {
	begin_statement ("INITIATE", 0);
  }
    break;

  case 1087:
/* Line 1792 of yacc.c  */
#line 7788 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1088:
/* Line 1792 of yacc.c  */
#line 7795 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1089:
/* Line 1792 of yacc.c  */
#line 7807 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 7820 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1093:
/* Line 1792 of yacc.c  */
#line 7824 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1094:
/* Line 1792 of yacc.c  */
#line 7828 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1099:
/* Line 1792 of yacc.c  */
#line 7844 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1100:
/* Line 1792 of yacc.c  */
#line 7848 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1101:
/* Line 1792 of yacc.c  */
#line 7858 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1102:
/* Line 1792 of yacc.c  */
#line 7868 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1103:
/* Line 1792 of yacc.c  */
#line 7876 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1104:
/* Line 1792 of yacc.c  */
#line 7877 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1105:
/* Line 1792 of yacc.c  */
#line 7881 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1106:
/* Line 1792 of yacc.c  */
#line 7882 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1107:
/* Line 1792 of yacc.c  */
#line 7883 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1108:
/* Line 1792 of yacc.c  */
#line 7884 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1109:
/* Line 1792 of yacc.c  */
#line 7885 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 7886 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 7890 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1112:
/* Line 1792 of yacc.c  */
#line 7891 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1113:
/* Line 1792 of yacc.c  */
#line 7896 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1114:
/* Line 1792 of yacc.c  */
#line 7901 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 7907 "parser.y"
    { /* Nothing */ }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 7908 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1117:
/* Line 1792 of yacc.c  */
#line 7909 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1118:
/* Line 1792 of yacc.c  */
#line 7910 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1119:
/* Line 1792 of yacc.c  */
#line 7911 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 7916 "parser.y"
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

  case 1121:
/* Line 1792 of yacc.c  */
#line 7943 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 7947 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1123:
/* Line 1792 of yacc.c  */
#line 7954 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1124:
/* Line 1792 of yacc.c  */
#line 7958 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 7967 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1127:
/* Line 1792 of yacc.c  */
#line 7979 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1129:
/* Line 1792 of yacc.c  */
#line 7987 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1130:
/* Line 1792 of yacc.c  */
#line 7991 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1131:
/* Line 1792 of yacc.c  */
#line 8001 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1133:
/* Line 1792 of yacc.c  */
#line 8010 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1134:
/* Line 1792 of yacc.c  */
#line 8014 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 8021 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1136:
/* Line 1792 of yacc.c  */
#line 8025 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1137:
/* Line 1792 of yacc.c  */
#line 8035 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1139:
/* Line 1792 of yacc.c  */
#line 8043 "parser.y"
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

  case 1140:
/* Line 1792 of yacc.c  */
#line 8064 "parser.y"
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

  case 1141:
/* Line 1792 of yacc.c  */
#line 8087 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1142:
/* Line 1792 of yacc.c  */
#line 8088 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1143:
/* Line 1792 of yacc.c  */
#line 8089 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8090 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8094 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8095 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1147:
/* Line 1792 of yacc.c  */
#line 8099 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1148:
/* Line 1792 of yacc.c  */
#line 8100 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1149:
/* Line 1792 of yacc.c  */
#line 8101 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1150:
/* Line 1792 of yacc.c  */
#line 8103 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1151:
/* Line 1792 of yacc.c  */
#line 8114 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1153:
/* Line 1792 of yacc.c  */
#line 8125 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8130 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8136 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1156:
/* Line 1792 of yacc.c  */
#line 8141 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8149 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1158:
/* Line 1792 of yacc.c  */
#line 8157 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8164 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8168 "parser.y"
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

  case 1161:
/* Line 1792 of yacc.c  */
#line 8181 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1162:
/* Line 1792 of yacc.c  */
#line 8188 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1163:
/* Line 1792 of yacc.c  */
#line 8199 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1164:
/* Line 1792 of yacc.c  */
#line 8203 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8208 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1166:
/* Line 1792 of yacc.c  */
#line 8212 "parser.y"
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

  case 1167:
/* Line 1792 of yacc.c  */
#line 8223 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1168:
/* Line 1792 of yacc.c  */
#line 8229 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1169:
/* Line 1792 of yacc.c  */
#line 8230 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1170:
/* Line 1792 of yacc.c  */
#line 8234 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1171:
/* Line 1792 of yacc.c  */
#line 8235 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1172:
/* Line 1792 of yacc.c  */
#line 8238 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8240 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1174:
/* Line 1792 of yacc.c  */
#line 8245 "parser.y"
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

  case 1175:
/* Line 1792 of yacc.c  */
#line 8284 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1177:
/* Line 1792 of yacc.c  */
#line 8293 "parser.y"
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

  case 1178:
/* Line 1792 of yacc.c  */
#line 8319 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1179:
/* Line 1792 of yacc.c  */
#line 8320 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1180:
/* Line 1792 of yacc.c  */
#line 8325 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1181:
/* Line 1792 of yacc.c  */
#line 8329 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1182:
/* Line 1792 of yacc.c  */
#line 8333 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1183:
/* Line 1792 of yacc.c  */
#line 8337 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1184:
/* Line 1792 of yacc.c  */
#line 8341 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1185:
/* Line 1792 of yacc.c  */
#line 8345 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1186:
/* Line 1792 of yacc.c  */
#line 8349 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1187:
/* Line 1792 of yacc.c  */
#line 8355 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1188:
/* Line 1792 of yacc.c  */
#line 8356 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1191:
/* Line 1792 of yacc.c  */
#line 8366 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8370 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1193:
/* Line 1792 of yacc.c  */
#line 8380 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8390 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1196:
/* Line 1792 of yacc.c  */
#line 8398 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8408 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1198:
/* Line 1792 of yacc.c  */
#line 8418 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1200:
/* Line 1792 of yacc.c  */
#line 8427 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1201:
/* Line 1792 of yacc.c  */
#line 8434 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1202:
/* Line 1792 of yacc.c  */
#line 8438 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1203:
/* Line 1792 of yacc.c  */
#line 8448 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1205:
/* Line 1792 of yacc.c  */
#line 8460 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1206:
/* Line 1792 of yacc.c  */
#line 8468 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1207:
/* Line 1792 of yacc.c  */
#line 8472 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 8476 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1209:
/* Line 1792 of yacc.c  */
#line 8483 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1210:
/* Line 1792 of yacc.c  */
#line 8487 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 8497 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1212:
/* Line 1792 of yacc.c  */
#line 8508 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1214:
/* Line 1792 of yacc.c  */
#line 8517 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1215:
/* Line 1792 of yacc.c  */
#line 8522 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1216:
/* Line 1792 of yacc.c  */
#line 8529 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1217:
/* Line 1792 of yacc.c  */
#line 8530 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1218:
/* Line 1792 of yacc.c  */
#line 8535 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1219:
/* Line 1792 of yacc.c  */
#line 8540 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1220:
/* Line 1792 of yacc.c  */
#line 8547 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1221:
/* Line 1792 of yacc.c  */
#line 8551 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1222:
/* Line 1792 of yacc.c  */
#line 8559 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1223:
/* Line 1792 of yacc.c  */
#line 8566 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1224:
/* Line 1792 of yacc.c  */
#line 8570 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1225:
/* Line 1792 of yacc.c  */
#line 8580 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1226:
/* Line 1792 of yacc.c  */
#line 8587 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1233:
/* Line 1792 of yacc.c  */
#line 8602 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1234:
/* Line 1792 of yacc.c  */
#line 8603 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1235:
/* Line 1792 of yacc.c  */
#line 8607 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 8608 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1237:
/* Line 1792 of yacc.c  */
#line 8615 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1238:
/* Line 1792 of yacc.c  */
#line 8624 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1241:
/* Line 1792 of yacc.c  */
#line 8636 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1242:
/* Line 1792 of yacc.c  */
#line 8640 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1243:
/* Line 1792 of yacc.c  */
#line 8644 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1244:
/* Line 1792 of yacc.c  */
#line 8648 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 8652 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1246:
/* Line 1792 of yacc.c  */
#line 8656 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1247:
/* Line 1792 of yacc.c  */
#line 8660 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1248:
/* Line 1792 of yacc.c  */
#line 8664 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1249:
/* Line 1792 of yacc.c  */
#line 8673 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1250:
/* Line 1792 of yacc.c  */
#line 8677 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1251:
/* Line 1792 of yacc.c  */
#line 8686 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1254:
/* Line 1792 of yacc.c  */
#line 8700 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1257:
/* Line 1792 of yacc.c  */
#line 8714 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1258:
/* Line 1792 of yacc.c  */
#line 8718 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1259:
/* Line 1792 of yacc.c  */
#line 8728 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 8736 "parser.y"
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

  case 1262:
/* Line 1792 of yacc.c  */
#line 8757 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1263:
/* Line 1792 of yacc.c  */
#line 8766 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1264:
/* Line 1792 of yacc.c  */
#line 8771 "parser.y"
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

  case 1265:
/* Line 1792 of yacc.c  */
#line 8789 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1266:
/* Line 1792 of yacc.c  */
#line 8790 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1268:
/* Line 1792 of yacc.c  */
#line 8795 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1269:
/* Line 1792 of yacc.c  */
#line 8802 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1270:
/* Line 1792 of yacc.c  */
#line 8803 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1271:
/* Line 1792 of yacc.c  */
#line 8808 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1272:
/* Line 1792 of yacc.c  */
#line 8814 "parser.y"
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

  case 1273:
/* Line 1792 of yacc.c  */
#line 8824 "parser.y"
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

  case 1274:
/* Line 1792 of yacc.c  */
#line 8839 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1275:
/* Line 1792 of yacc.c  */
#line 8845 "parser.y"
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

  case 1276:
/* Line 1792 of yacc.c  */
#line 8855 "parser.y"
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

  case 1277:
/* Line 1792 of yacc.c  */
#line 8871 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1279:
/* Line 1792 of yacc.c  */
#line 8881 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1280:
/* Line 1792 of yacc.c  */
#line 8893 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1281:
/* Line 1792 of yacc.c  */
#line 8897 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1282:
/* Line 1792 of yacc.c  */
#line 8904 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1283:
/* Line 1792 of yacc.c  */
#line 8908 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1284:
/* Line 1792 of yacc.c  */
#line 8913 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1285:
/* Line 1792 of yacc.c  */
#line 8918 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1286:
/* Line 1792 of yacc.c  */
#line 8925 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1287:
/* Line 1792 of yacc.c  */
#line 8926 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1288:
/* Line 1792 of yacc.c  */
#line 8927 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1289:
/* Line 1792 of yacc.c  */
#line 8928 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1290:
/* Line 1792 of yacc.c  */
#line 8929 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1291:
/* Line 1792 of yacc.c  */
#line 8930 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1292:
/* Line 1792 of yacc.c  */
#line 8935 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 8948 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1296:
/* Line 1792 of yacc.c  */
#line 8952 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1297:
/* Line 1792 of yacc.c  */
#line 8962 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1298:
/* Line 1792 of yacc.c  */
#line 8966 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1299:
/* Line 1792 of yacc.c  */
#line 8972 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1300:
/* Line 1792 of yacc.c  */
#line 8984 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1301:
/* Line 1792 of yacc.c  */
#line 8988 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1302:
/* Line 1792 of yacc.c  */
#line 8992 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1303:
/* Line 1792 of yacc.c  */
#line 9000 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1304:
/* Line 1792 of yacc.c  */
#line 9011 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1305:
/* Line 1792 of yacc.c  */
#line 9015 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1306:
/* Line 1792 of yacc.c  */
#line 9021 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1307:
/* Line 1792 of yacc.c  */
#line 9022 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1308:
/* Line 1792 of yacc.c  */
#line 9023 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1309:
/* Line 1792 of yacc.c  */
#line 9024 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1310:
/* Line 1792 of yacc.c  */
#line 9031 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1312:
/* Line 1792 of yacc.c  */
#line 9040 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1313:
/* Line 1792 of yacc.c  */
#line 9046 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1314:
/* Line 1792 of yacc.c  */
#line 9047 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1315:
/* Line 1792 of yacc.c  */
#line 9051 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1316:
/* Line 1792 of yacc.c  */
#line 9052 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1317:
/* Line 1792 of yacc.c  */
#line 9053 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1318:
/* Line 1792 of yacc.c  */
#line 9057 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1319:
/* Line 1792 of yacc.c  */
#line 9058 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1320:
/* Line 1792 of yacc.c  */
#line 9063 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1321:
/* Line 1792 of yacc.c  */
#line 9067 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1322:
/* Line 1792 of yacc.c  */
#line 9077 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1324:
/* Line 1792 of yacc.c  */
#line 9086 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1325:
/* Line 1792 of yacc.c  */
#line 9090 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1326:
/* Line 1792 of yacc.c  */
#line 9094 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1327:
/* Line 1792 of yacc.c  */
#line 9101 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1328:
/* Line 1792 of yacc.c  */
#line 9105 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1329:
/* Line 1792 of yacc.c  */
#line 9115 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  }
    break;

  case 1332:
/* Line 1792 of yacc.c  */
#line 9133 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
  }
    break;

  case 1334:
/* Line 1792 of yacc.c  */
#line 9141 "parser.y"
    {
	begin_implicit_statement ();
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1335:
/* Line 1792 of yacc.c  */
#line 9149 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
		cb_emit_terminate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1336:
/* Line 1792 of yacc.c  */
#line 9161 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9169 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1339:
/* Line 1792 of yacc.c  */
#line 9182 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1341:
/* Line 1792 of yacc.c  */
#line 9190 "parser.y"
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

  case 1345:
/* Line 1792 of yacc.c  */
#line 9213 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1347:
/* Line 1792 of yacc.c  */
#line 9223 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1348:
/* Line 1792 of yacc.c  */
#line 9229 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1349:
/* Line 1792 of yacc.c  */
#line 9231 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1350:
/* Line 1792 of yacc.c  */
#line 9235 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1351:
/* Line 1792 of yacc.c  */
#line 9237 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1352:
/* Line 1792 of yacc.c  */
#line 9242 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1353:
/* Line 1792 of yacc.c  */
#line 9248 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1354:
/* Line 1792 of yacc.c  */
#line 9250 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1355:
/* Line 1792 of yacc.c  */
#line 9255 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1356:
/* Line 1792 of yacc.c  */
#line 9261 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1357:
/* Line 1792 of yacc.c  */
#line 9262 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1358:
/* Line 1792 of yacc.c  */
#line 9266 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1359:
/* Line 1792 of yacc.c  */
#line 9267 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1360:
/* Line 1792 of yacc.c  */
#line 9271 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1361:
/* Line 1792 of yacc.c  */
#line 9272 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1362:
/* Line 1792 of yacc.c  */
#line 9277 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1363:
/* Line 1792 of yacc.c  */
#line 9281 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1364:
/* Line 1792 of yacc.c  */
#line 9291 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1371:
/* Line 1792 of yacc.c  */
#line 9309 "parser.y"
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

  case 1372:
/* Line 1792 of yacc.c  */
#line 9334 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1373:
/* Line 1792 of yacc.c  */
#line 9338 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1374:
/* Line 1792 of yacc.c  */
#line 9350 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1375:
/* Line 1792 of yacc.c  */
#line 9360 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1376:
/* Line 1792 of yacc.c  */
#line 9365 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1377:
/* Line 1792 of yacc.c  */
#line 9370 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1378:
/* Line 1792 of yacc.c  */
#line 9375 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1379:
/* Line 1792 of yacc.c  */
#line 9383 "parser.y"
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

  case 1382:
/* Line 1792 of yacc.c  */
#line 9426 "parser.y"
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

  case 1383:
/* Line 1792 of yacc.c  */
#line 9466 "parser.y"
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

  case 1384:
/* Line 1792 of yacc.c  */
#line 9476 "parser.y"
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

  case 1389:
/* Line 1792 of yacc.c  */
#line 9506 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1390:
/* Line 1792 of yacc.c  */
#line 9515 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1391:
/* Line 1792 of yacc.c  */
#line 9521 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1392:
/* Line 1792 of yacc.c  */
#line 9531 "parser.y"
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

  case 1393:
/* Line 1792 of yacc.c  */
#line 9562 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1396:
/* Line 1792 of yacc.c  */
#line 9578 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1398:
/* Line 1792 of yacc.c  */
#line 9590 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1399:
/* Line 1792 of yacc.c  */
#line 9599 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1400:
/* Line 1792 of yacc.c  */
#line 9600 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1401:
/* Line 1792 of yacc.c  */
#line 9605 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1402:
/* Line 1792 of yacc.c  */
#line 9609 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1403:
/* Line 1792 of yacc.c  */
#line 9613 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1404:
/* Line 1792 of yacc.c  */
#line 9617 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1405:
/* Line 1792 of yacc.c  */
#line 9623 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1406:
/* Line 1792 of yacc.c  */
#line 9624 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1409:
/* Line 1792 of yacc.c  */
#line 9634 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1410:
/* Line 1792 of yacc.c  */
#line 9638 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1413:
/* Line 1792 of yacc.c  */
#line 9655 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1415:
/* Line 1792 of yacc.c  */
#line 9665 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1418:
/* Line 1792 of yacc.c  */
#line 9678 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1420:
/* Line 1792 of yacc.c  */
#line 9688 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1423:
/* Line 1792 of yacc.c  */
#line 9703 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1425:
/* Line 1792 of yacc.c  */
#line 9713 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 9730 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1430:
/* Line 1792 of yacc.c  */
#line 9741 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1436:
/* Line 1792 of yacc.c  */
#line 9764 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1437:
/* Line 1792 of yacc.c  */
#line 9773 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1441:
/* Line 1792 of yacc.c  */
#line 9790 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1442:
/* Line 1792 of yacc.c  */
#line 9799 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1445:
/* Line 1792 of yacc.c  */
#line 9816 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1447:
/* Line 1792 of yacc.c  */
#line 9826 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1448:
/* Line 1792 of yacc.c  */
#line 9836 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1449:
/* Line 1792 of yacc.c  */
#line 9840 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1450:
/* Line 1792 of yacc.c  */
#line 9850 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1451:
/* Line 1792 of yacc.c  */
#line 9857 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1452:
/* Line 1792 of yacc.c  */
#line 9863 "parser.y"
    {
	current_expr = NULL;
  }
    break;

  case 1453:
/* Line 1792 of yacc.c  */
#line 9867 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1457:
/* Line 1792 of yacc.c  */
#line 9880 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1458:
/* Line 1792 of yacc.c  */
#line 9888 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1459:
/* Line 1792 of yacc.c  */
#line 9889 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1460:
/* Line 1792 of yacc.c  */
#line 9891 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 9892 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1462:
/* Line 1792 of yacc.c  */
#line 9893 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1463:
/* Line 1792 of yacc.c  */
#line 9894 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1464:
/* Line 1792 of yacc.c  */
#line 9895 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1465:
/* Line 1792 of yacc.c  */
#line 9897 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1466:
/* Line 1792 of yacc.c  */
#line 9898 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1467:
/* Line 1792 of yacc.c  */
#line 9899 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1468:
/* Line 1792 of yacc.c  */
#line 9900 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1469:
/* Line 1792 of yacc.c  */
#line 9901 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1470:
/* Line 1792 of yacc.c  */
#line 9902 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1471:
/* Line 1792 of yacc.c  */
#line 9904 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1472:
/* Line 1792 of yacc.c  */
#line 9905 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1473:
/* Line 1792 of yacc.c  */
#line 9906 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1474:
/* Line 1792 of yacc.c  */
#line 9908 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1475:
/* Line 1792 of yacc.c  */
#line 9909 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1476:
/* Line 1792 of yacc.c  */
#line 9910 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1477:
/* Line 1792 of yacc.c  */
#line 9911 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1478:
/* Line 1792 of yacc.c  */
#line 9912 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1479:
/* Line 1792 of yacc.c  */
#line 9915 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1480:
/* Line 1792 of yacc.c  */
#line 9916 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 9946 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1490:
/* Line 1792 of yacc.c  */
#line 9950 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1494:
/* Line 1792 of yacc.c  */
#line 9961 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1495:
/* Line 1792 of yacc.c  */
#line 9962 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1496:
/* Line 1792 of yacc.c  */
#line 9963 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1497:
/* Line 1792 of yacc.c  */
#line 9967 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1498:
/* Line 1792 of yacc.c  */
#line 9968 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1499:
/* Line 1792 of yacc.c  */
#line 9969 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1500:
/* Line 1792 of yacc.c  */
#line 9974 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1501:
/* Line 1792 of yacc.c  */
#line 9977 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1502:
/* Line 1792 of yacc.c  */
#line 9981 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1503:
/* Line 1792 of yacc.c  */
#line 9982 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1504:
/* Line 1792 of yacc.c  */
#line 9983 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1505:
/* Line 1792 of yacc.c  */
#line 9986 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1506:
/* Line 1792 of yacc.c  */
#line 9987 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1507:
/* Line 1792 of yacc.c  */
#line 9998 "parser.y"
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

  case 1508:
/* Line 1792 of yacc.c  */
#line 10010 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1509:
/* Line 1792 of yacc.c  */
#line 10019 "parser.y"
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

  case 1510:
/* Line 1792 of yacc.c  */
#line 10035 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1511:
/* Line 1792 of yacc.c  */
#line 10044 "parser.y"
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

  case 1512:
/* Line 1792 of yacc.c  */
#line 10060 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1513:
/* Line 1792 of yacc.c  */
#line 10074 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1514:
/* Line 1792 of yacc.c  */
#line 10076 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1515:
/* Line 1792 of yacc.c  */
#line 10081 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1516:
/* Line 1792 of yacc.c  */
#line 10089 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1517:
/* Line 1792 of yacc.c  */
#line 10096 "parser.y"
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

  case 1518:
/* Line 1792 of yacc.c  */
#line 10116 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1519:
/* Line 1792 of yacc.c  */
#line 10120 "parser.y"
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

  case 1520:
/* Line 1792 of yacc.c  */
#line 10141 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10182 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1522:
/* Line 1792 of yacc.c  */
#line 10195 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1523:
/* Line 1792 of yacc.c  */
#line 10197 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1524:
/* Line 1792 of yacc.c  */
#line 10201 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1525:
/* Line 1792 of yacc.c  */
#line 10207 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1526:
/* Line 1792 of yacc.c  */
#line 10209 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1527:
/* Line 1792 of yacc.c  */
#line 10214 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1530:
/* Line 1792 of yacc.c  */
#line 10228 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1531:
/* Line 1792 of yacc.c  */
#line 10235 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1532:
/* Line 1792 of yacc.c  */
#line 10245 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1533:
/* Line 1792 of yacc.c  */
#line 10246 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1534:
/* Line 1792 of yacc.c  */
#line 10251 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1535:
/* Line 1792 of yacc.c  */
#line 10259 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1536:
/* Line 1792 of yacc.c  */
#line 10267 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1537:
/* Line 1792 of yacc.c  */
#line 10271 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1538:
/* Line 1792 of yacc.c  */
#line 10278 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1541:
/* Line 1792 of yacc.c  */
#line 10294 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1542:
/* Line 1792 of yacc.c  */
#line 10308 "parser.y"
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

  case 1543:
/* Line 1792 of yacc.c  */
#line 10325 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1544:
/* Line 1792 of yacc.c  */
#line 10329 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10338 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1548:
/* Line 1792 of yacc.c  */
#line 10345 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1549:
/* Line 1792 of yacc.c  */
#line 10349 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1554:
/* Line 1792 of yacc.c  */
#line 10360 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1555:
/* Line 1792 of yacc.c  */
#line 10364 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1556:
/* Line 1792 of yacc.c  */
#line 10368 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1557:
/* Line 1792 of yacc.c  */
#line 10372 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1558:
/* Line 1792 of yacc.c  */
#line 10376 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1559:
/* Line 1792 of yacc.c  */
#line 10380 "parser.y"
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

  case 1560:
/* Line 1792 of yacc.c  */
#line 10401 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1561:
/* Line 1792 of yacc.c  */
#line 10405 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1569:
/* Line 1792 of yacc.c  */
#line 10422 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1570:
/* Line 1792 of yacc.c  */
#line 10426 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1571:
/* Line 1792 of yacc.c  */
#line 10430 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1587:
/* Line 1792 of yacc.c  */
#line 10477 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1595:
/* Line 1792 of yacc.c  */
#line 10501 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1596:
/* Line 1792 of yacc.c  */
#line 10505 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1597:
/* Line 1792 of yacc.c  */
#line 10509 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1598:
/* Line 1792 of yacc.c  */
#line 10510 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1599:
/* Line 1792 of yacc.c  */
#line 10514 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1600:
/* Line 1792 of yacc.c  */
#line 10519 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1601:
/* Line 1792 of yacc.c  */
#line 10526 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1602:
/* Line 1792 of yacc.c  */
#line 10533 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1603:
/* Line 1792 of yacc.c  */
#line 10540 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1604:
/* Line 1792 of yacc.c  */
#line 10550 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1605:
/* Line 1792 of yacc.c  */
#line 10554 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1606:
/* Line 1792 of yacc.c  */
#line 10561 "parser.y"
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

  case 1607:
/* Line 1792 of yacc.c  */
#line 10571 "parser.y"
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

  case 1608:
/* Line 1792 of yacc.c  */
#line 10581 "parser.y"
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

  case 1609:
/* Line 1792 of yacc.c  */
#line 10591 "parser.y"
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

  case 1610:
/* Line 1792 of yacc.c  */
#line 10604 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1611:
/* Line 1792 of yacc.c  */
#line 10608 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1612:
/* Line 1792 of yacc.c  */
#line 10616 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1613:
/* Line 1792 of yacc.c  */
#line 10624 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1614:
/* Line 1792 of yacc.c  */
#line 10628 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1615:
/* Line 1792 of yacc.c  */
#line 10638 "parser.y"
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

  case 1616:
/* Line 1792 of yacc.c  */
#line 10653 "parser.y"
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

  case 1617:
/* Line 1792 of yacc.c  */
#line 10676 "parser.y"
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

  case 1618:
/* Line 1792 of yacc.c  */
#line 10696 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1619:
/* Line 1792 of yacc.c  */
#line 10703 "parser.y"
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

  case 1620:
/* Line 1792 of yacc.c  */
#line 10718 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1621:
/* Line 1792 of yacc.c  */
#line 10719 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 10720 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1623:
/* Line 1792 of yacc.c  */
#line 10721 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1624:
/* Line 1792 of yacc.c  */
#line 10722 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 10723 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1626:
/* Line 1792 of yacc.c  */
#line 10728 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1627:
/* Line 1792 of yacc.c  */
#line 10732 "parser.y"
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

  case 1628:
/* Line 1792 of yacc.c  */
#line 10749 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1629:
/* Line 1792 of yacc.c  */
#line 10753 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1630:
/* Line 1792 of yacc.c  */
#line 10759 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1631:
/* Line 1792 of yacc.c  */
#line 10760 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1632:
/* Line 1792 of yacc.c  */
#line 10761 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1633:
/* Line 1792 of yacc.c  */
#line 10762 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1634:
/* Line 1792 of yacc.c  */
#line 10763 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1635:
/* Line 1792 of yacc.c  */
#line 10764 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1636:
/* Line 1792 of yacc.c  */
#line 10765 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1637:
/* Line 1792 of yacc.c  */
#line 10772 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1638:
/* Line 1792 of yacc.c  */
#line 10776 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1639:
/* Line 1792 of yacc.c  */
#line 10780 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1640:
/* Line 1792 of yacc.c  */
#line 10784 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1641:
/* Line 1792 of yacc.c  */
#line 10788 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1642:
/* Line 1792 of yacc.c  */
#line 10792 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1643:
/* Line 1792 of yacc.c  */
#line 10796 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1644:
/* Line 1792 of yacc.c  */
#line 10800 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 10804 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1646:
/* Line 1792 of yacc.c  */
#line 10808 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1658:
/* Line 1792 of yacc.c  */
#line 10835 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1659:
/* Line 1792 of yacc.c  */
#line 10839 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1660:
/* Line 1792 of yacc.c  */
#line 10843 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1661:
/* Line 1792 of yacc.c  */
#line 10850 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1662:
/* Line 1792 of yacc.c  */
#line 10854 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1663:
/* Line 1792 of yacc.c  */
#line 10858 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1664:
/* Line 1792 of yacc.c  */
#line 10865 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1665:
/* Line 1792 of yacc.c  */
#line 10872 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1666:
/* Line 1792 of yacc.c  */
#line 10879 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1667:
/* Line 1792 of yacc.c  */
#line 10889 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 10896 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 10906 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 10913 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 10924 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 10932 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1673:
/* Line 1792 of yacc.c  */
#line 10933 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1674:
/* Line 1792 of yacc.c  */
#line 10937 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1675:
/* Line 1792 of yacc.c  */
#line 10938 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1676:
/* Line 1792 of yacc.c  */
#line 10942 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1677:
/* Line 1792 of yacc.c  */
#line 10943 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1678:
/* Line 1792 of yacc.c  */
#line 10948 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1679:
/* Line 1792 of yacc.c  */
#line 10952 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1680:
/* Line 1792 of yacc.c  */
#line 10959 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1681:
/* Line 1792 of yacc.c  */
#line 10963 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1682:
/* Line 1792 of yacc.c  */
#line 10970 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1683:
/* Line 1792 of yacc.c  */
#line 10971 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 10972 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1685:
/* Line 1792 of yacc.c  */
#line 10976 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 10977 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1687:
/* Line 1792 of yacc.c  */
#line 10981 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 10982 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 10983 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1690:
/* Line 1792 of yacc.c  */
#line 10988 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 10992 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 11004 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1693:
/* Line 1792 of yacc.c  */
#line 11009 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 11017 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1695:
/* Line 1792 of yacc.c  */
#line 11021 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1696:
/* Line 1792 of yacc.c  */
#line 11025 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1697:
/* Line 1792 of yacc.c  */
#line 11029 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1698:
/* Line 1792 of yacc.c  */
#line 11033 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1699:
/* Line 1792 of yacc.c  */
#line 11037 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1700:
/* Line 1792 of yacc.c  */
#line 11041 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1701:
/* Line 1792 of yacc.c  */
#line 11045 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1702:
/* Line 1792 of yacc.c  */
#line 11051 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1703:
/* Line 1792 of yacc.c  */
#line 11052 "parser.y"
    { (yyval) = cb_int1; }
    break;


/* Line 1792 of yacc.c  */
#line 18369 "parser.c"
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
#line 11223 "parser.y"

