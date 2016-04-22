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
     TAB = 696,
     TALLYING = 697,
     TAPE = 698,
     TERMINATE = 699,
     TEST = 700,
     THAN = 701,
     THEN = 702,
     THRU = 703,
     TIME = 704,
     TIMEOUT = 705,
     TIMES = 706,
     TO = 707,
     TOK_AMPER = 708,
     TOK_CLOSE_PAREN = 709,
     TOK_COLON = 710,
     TOK_DIV = 711,
     TOK_DOT = 712,
     TOK_EQUAL = 713,
     TOK_FALSE = 714,
     TOK_FILE = 715,
     TOK_GREATER = 716,
     TOK_INITIAL = 717,
     TOK_LESS = 718,
     TOK_MINUS = 719,
     TOK_MUL = 720,
     TOK_NULL = 721,
     TOK_OVERFLOW = 722,
     TOK_OPEN_PAREN = 723,
     TOK_PLUS = 724,
     TOK_TRUE = 725,
     TOP = 726,
     TOWARD_GREATER = 727,
     TOWARD_LESSER = 728,
     TRAILING = 729,
     TRANSFORM = 730,
     TRIM_FUNC = 731,
     TRUNCATION = 732,
     TYPE = 733,
     UNDERLINE = 734,
     UNIT = 735,
     UNLOCK = 736,
     UNSIGNED = 737,
     UNSIGNED_INT = 738,
     UNSIGNED_LONG = 739,
     UNSIGNED_SHORT = 740,
     UNSTRING = 741,
     UNTIL = 742,
     UP = 743,
     UPDATE = 744,
     UPON = 745,
     UPON_ARGUMENT_NUMBER = 746,
     UPON_COMMAND_LINE = 747,
     UPON_ENVIRONMENT_NAME = 748,
     UPON_ENVIRONMENT_VALUE = 749,
     UPPER = 750,
     UPPER_CASE_FUNC = 751,
     USAGE = 752,
     USE = 753,
     USER = 754,
     USER_DEFAULT = 755,
     USER_FUNCTION_NAME = 756,
     USER_REPO_FUNCTION = 757,
     USING = 758,
     VALUE = 759,
     VARYING = 760,
     WAIT = 761,
     WHEN = 762,
     WHEN_COMPILED_FUNC = 763,
     WITH = 764,
     WORD = 765,
     WORDS = 766,
     WORKING_STORAGE = 767,
     WRITE = 768,
     YYYYDDD = 769,
     YYYYMMDD = 770,
     ZERO = 771,
     SHIFT_PREFER = 772
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
#line 1376 "parser.c"

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
#define YYLAST   8325

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  518
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  835
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1954
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2785

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   772

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
     515,   516,   517
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
    1510,  1515,  1520,  1525,  1529,  1530,  1533,  1534,  1540,  1541,
    1544,  1546,  1548,  1550,  1552,  1554,  1556,  1558,  1560,  1562,
    1564,  1566,  1568,  1570,  1572,  1574,  1576,  1580,  1582,  1584,
    1588,  1592,  1594,  1596,  1598,  1599,  1601,  1605,  1607,  1608,
    1610,  1612,  1614,  1618,  1620,  1623,  1626,  1628,  1633,  1634,
    1638,  1641,  1643,  1645,  1649,  1654,  1660,  1665,  1671,  1673,
    1675,  1676,  1679,  1681,  1683,  1685,  1692,  1695,  1698,  1699,
    1702,  1704,  1707,  1710,  1713,  1714,  1717,  1719,  1721,  1724,
    1729,  1730,  1732,  1734,  1736,  1738,  1741,  1743,  1745,  1748,
    1750,  1755,  1758,  1762,  1763,  1764,  1770,  1771,  1773,  1776,
    1780,  1782,  1783,  1788,  1792,  1793,  1796,  1799,  1802,  1804,
    1806,  1809,  1812,  1814,  1816,  1818,  1820,  1822,  1824,  1826,
    1828,  1830,  1832,  1837,  1839,  1841,  1847,  1853,  1857,  1861,
    1863,  1865,  1867,  1869,  1871,  1873,  1875,  1877,  1880,  1883,
    1886,  1888,  1890,  1892,  1894,  1895,  1897,  1899,  1900,  1902,
    1904,  1908,  1911,  1912,  1913,  1914,  1924,  1925,  1930,  1931,
    1932,  1936,  1937,  1941,  1943,  1946,  1951,  1952,  1955,  1958,
    1959,  1963,  1967,  1972,  1977,  1981,  1982,  1984,  1985,  1988,
    1989,  1990,  1998,  1999,  2002,  2004,  2006,  2009,  2011,  2013,
    2014,  2021,  2022,  2025,  2028,  2030,  2031,  2033,  2034,  2035,
    2039,  2040,  2043,  2046,  2048,  2050,  2052,  2054,  2056,  2058,
    2060,  2062,  2064,  2066,  2068,  2070,  2072,  2074,  2076,  2078,
    2080,  2082,  2084,  2086,  2088,  2090,  2092,  2094,  2096,  2098,
    2100,  2102,  2104,  2106,  2108,  2110,  2112,  2114,  2116,  2118,
    2120,  2122,  2124,  2126,  2128,  2130,  2132,  2134,  2136,  2138,
    2140,  2142,  2144,  2147,  2150,  2151,  2156,  2163,  2167,  2171,
    2176,  2180,  2185,  2189,  2193,  2198,  2203,  2207,  2212,  2216,
    2221,  2227,  2231,  2236,  2240,  2244,  2246,  2248,  2250,  2253,
    2254,  2256,  2260,  2264,  2267,  2270,  2273,  2277,  2281,  2285,
    2286,  2288,  2289,  2293,  2294,  2297,  2299,  2302,  2304,  2306,
    2308,  2310,  2312,  2314,  2316,  2318,  2320,  2322,  2324,  2326,
    2331,  2333,  2335,  2337,  2339,  2341,  2344,  2346,  2348,  2352,
    2356,  2360,  2364,  2368,  2370,  2372,  2373,  2375,  2376,  2381,
    2386,  2392,  2399,  2400,  2403,  2404,  2406,  2407,  2411,  2415,
    2420,  2421,  2424,  2425,  2429,  2431,  2434,  2439,  2440,  2443,
    2444,  2449,  2456,  2457,  2459,  2461,  2463,  2464,  2465,  2469,
    2471,  2474,  2477,  2481,  2482,  2485,  2488,  2491,  2492,  2496,
    2499,  2504,  2506,  2508,  2510,  2512,  2513,  2516,  2517,  2520,
    2521,  2523,  2524,  2528,  2530,  2533,  2534,  2538,  2541,  2545,
    2546,  2548,  2552,  2556,  2559,  2560,  2565,  2570,  2571,  2573,
    2575,  2577,  2578,  2583,  2587,  2590,  2592,  2595,  2596,  2598,
    2599,  2604,  2608,  2612,  2616,  2620,  2625,  2628,  2633,  2635,
    2636,  2640,  2646,  2647,  2650,  2653,  2656,  2659,  2660,  2663,
    2665,  2667,  2668,  2671,  2672,  2674,  2676,  2679,  2681,  2684,
    2687,  2689,  2691,  2694,  2697,  2699,  2701,  2703,  2705,  2707,
    2711,  2715,  2719,  2723,  2724,  2726,  2727,  2732,  2737,  2744,
    2751,  2760,  2769,  2770,  2772,  2773,  2777,  2780,  2781,  2786,
    2789,  2791,  2795,  2797,  2799,  2801,  2804,  2806,  2808,  2811,
    2814,  2818,  2821,  2825,  2827,  2831,  2834,  2836,  2838,  2840,
    2841,  2844,  2845,  2847,  2848,  2852,  2853,  2856,  2858,  2861,
    2863,  2865,  2867,  2868,  2871,  2872,  2876,  2878,  2879,  2883,
    2885,  2886,  2890,  2894,  2895,  2899,  2902,  2903,  2910,  2914,
    2917,  2919,  2920,  2922,  2923,  2927,  2933,  2934,  2937,  2938,
    2942,  2946,  2947,  2950,  2952,  2955,  2960,  2962,  2964,  2966,
    2968,  2970,  2972,  2974,  2975,  2979,  2980,  2984,  2986,  2989,
    2990,  2994,  2997,  2999,  3001,  3003,  3006,  3008,  3010,  3012,
    3013,  3017,  3020,  3026,  3028,  3031,  3034,  3037,  3039,  3041,
    3043,  3046,  3048,  3051,  3056,  3059,  3060,  3062,  3064,  3066,
    3068,  3073,  3074,  3077,  3081,  3085,  3086,  3090,  3091,  3095,
    3099,  3104,  3105,  3110,  3115,  3122,  3123,  3125,  3126,  3130,
    3135,  3141,  3143,  3145,  3147,  3149,  3150,  3154,  3155,  3159,
    3162,  3164,  3165,  3169,  3172,  3173,  3178,  3181,  3182,  3184,
    3186,  3188,  3190,  3194,  3195,  3198,  3200,  3204,  3208,  3209,
    3213,  3215,  3217,  3219,  3223,  3231,  3232,  3237,  3245,  3246,
    3249,  3250,  3253,  3256,  3260,  3264,  3268,  3271,  3272,  3276,
    3278,  3280,  3281,  3283,  3285,  3286,  3290,  3293,  3295,  3296,
    3301,  3306,  3307,  3309,  3310,  3315,  3320,  3321,  3324,  3328,
    3329,  3331,  3333,  3334,  3339,  3344,  3351,  3352,  3355,  3356,
    3359,  3361,  3364,  3368,  3369,  3371,  3372,  3376,  3378,  3380,
    3382,  3384,  3386,  3388,  3390,  3392,  3394,  3396,  3401,  3405,
    3407,  3410,  3413,  3416,  3419,  3422,  3425,  3428,  3431,  3434,
    3439,  3443,  3448,  3450,  3453,  3457,  3459,  3462,  3466,  3470,
    3471,  3475,  3476,  3484,  3485,  3491,  3492,  3495,  3496,  3499,
    3500,  3504,  3505,  3508,  3513,  3514,  3517,  3522,  3523,  3528,
    3533,  3534,  3538,  3539,  3544,  3546,  3548,  3550,  3553,  3556,
    3559,  3562,  3564,  3566,  3569,  3571,  3572,  3574,  3575,  3580,
    3583,  3584,  3587,  3592,  3597,  3598,  3600,  3602,  3604,  3606,
    3608,  3609,  3614,  3620,  3622,  3625,  3627,  3631,  3635,  3636,
    3641,  3642,  3644,  3645,  3650,  3655,  3662,  3669,  3670,  3672,
    3675,  3676,  3678,  3679,  3683,  3685,  3688,  3689,  3693,  3699,
    3700,  3704,  3707,  3708,  3710,  3712,  3713,  3718,  3725,  3726,
    3730,  3732,  3736,  3739,  3742,  3745,  3749,  3750,  3754,  3755,
    3759,  3760,  3764,  3765,  3767,  3768,  3772,  3774,  3776,  3778,
    3780,  3782,  3790,  3791,  3793,  3795,  3797,  3799,  3801,  3803,
    3808,  3810,  3813,  3815,  3818,  3822,  3823,  3825,  3828,  3830,
    3834,  3836,  3838,  3843,  3845,  3847,  3849,  3850,  3855,  3861,
    3862,  3865,  3866,  3871,  3875,  3879,  3881,  3883,  3885,  3887,
    3888,  3890,  3893,  3894,  3897,  3898,  3901,  3904,  3905,  3908,
    3909,  3912,  3915,  3916,  3919,  3920,  3923,  3926,  3927,  3930,
    3931,  3934,  3937,  3939,  3942,  3944,  3946,  3949,  3952,  3955,
    3957,  3959,  3962,  3965,  3968,  3969,  3972,  3973,  3976,  3977,
    3980,  3982,  3984,  3985,  3988,  3990,  3993,  3996,  3998,  4000,
    4002,  4004,  4006,  4008,  4010,  4012,  4014,  4016,  4018,  4020,
    4022,  4024,  4026,  4028,  4030,  4032,  4034,  4036,  4038,  4040,
    4042,  4044,  4046,  4049,  4051,  4053,  4055,  4057,  4059,  4061,
    4063,  4067,  4068,  4070,  4072,  4076,  4080,  4082,  4086,  4090,
    4092,  4096,  4098,  4101,  4104,  4106,  4110,  4112,  4114,  4118,
    4120,  4124,  4126,  4130,  4132,  4135,  4138,  4140,  4142,  4144,
    4147,  4149,  4151,  4153,  4156,  4158,  4159,  4162,  4164,  4166,
    4168,  4172,  4174,  4176,  4179,  4181,  4183,  4185,  4188,  4190,
    4192,  4194,  4196,  4198,  4200,  4203,  4205,  4207,  4211,  4213,
    4216,  4218,  4220,  4222,  4224,  4227,  4230,  4233,  4238,  4242,
    4244,  4246,  4249,  4251,  4253,  4255,  4257,  4259,  4261,  4263,
    4266,  4269,  4272,  4274,  4276,  4278,  4280,  4282,  4284,  4286,
    4288,  4290,  4292,  4294,  4296,  4298,  4300,  4302,  4304,  4306,
    4308,  4310,  4312,  4314,  4316,  4318,  4320,  4322,  4324,  4327,
    4329,  4333,  4336,  4339,  4341,  4343,  4345,  4349,  4352,  4355,
    4357,  4359,  4363,  4367,  4372,  4378,  4380,  4382,  4384,  4386,
    4388,  4390,  4392,  4394,  4396,  4398,  4400,  4402,  4405,  4407,
    4411,  4413,  4415,  4417,  4419,  4421,  4423,  4425,  4428,  4434,
    4440,  4446,  4451,  4457,  4463,  4469,  4472,  4475,  4477,  4479,
    4481,  4483,  4485,  4487,  4489,  4491,  4493,  4495,  4497,  4498,
    4503,  4509,  4510,  4514,  4517,  4519,  4523,  4527,  4529,  4533,
    4535,  4539,  4540,  4541,  4543,  4544,  4546,  4547,  4549,  4550,
    4553,  4554,  4557,  4558,  4560,  4562,  4563,  4565,  4566,  4568,
    4571,  4572,  4575,  4576,  4580,  4582,  4584,  4586,  4588,  4590,
    4592,  4594,  4596,  4597,  4600,  4602,  4604,  4606,  4608,  4610,
    4612,  4614,  4616,  4618,  4620,  4622,  4624,  4626,  4628,  4630,
    4632,  4634,  4636,  4638,  4640,  4642,  4644,  4646,  4648,  4650,
    4652,  4654,  4656,  4658,  4660,  4662,  4664,  4666,  4668,  4670,
    4672,  4674,  4676,  4678,  4680,  4682,  4684,  4686,  4688,  4690,
    4692,  4694,  4696,  4698,  4700,  4702,  4704,  4706,  4708,  4710,
    4712,  4714,  4716,  4718,  4720,  4722,  4724,  4726,  4728,  4730,
    4732,  4734,  4736,  4738,  4740,  4741,  4743,  4744,  4746,  4747,
    4749,  4750,  4752,  4753,  4755,  4756,  4758,  4759,  4761,  4762,
    4764,  4765,  4767,  4768,  4770,  4771,  4773,  4774,  4776,  4777,
    4779,  4780,  4782,  4783,  4785,  4786,  4788,  4789,  4791,  4794,
    4795,  4797,  4798,  4800,  4801,  4803,  4804,  4806,  4807,  4809,
    4811,  4812,  4814,  4815,  4817,  4819,  4820,  4823,  4826,  4827,
    4829,  4830,  4832,  4833,  4835,  4836,  4838,  4839,  4841,  4843,
    4844,  4846,  4847,  4849,  4850,  4852,  4854,  4855,  4858,  4860,
    4862,  4863,  4865,  4866,  4868,  4869,  4871,  4872,  4874,  4875,
    4877,  4878,  4880,  4881,  4883,  4884,  4886,  4889,  4890,  4892,
    4893,  4895,  4896,  4898,  4899,  4901,  4902,  4904,  4905,  4907,
    4908,  4910,  4911,  4913,  4915,  4916,  4918,  4919,  4923,  4924,
    4926,  4927,  4929,  4932,  4934,  4936,  4938,  4940,  4942,  4944,
    4946,  4948,  4950,  4952,  4954,  4956,  4958,  4960,  4962,  4964,
    4966,  4968,  4970,  4972,  4974,  4976,  4978,  4981,  4984,  4986,
    4988,  4990,  4992,  4994,  4996,  4999,  5001,  5005,  5008,  5010,
    5012,  5014,  5017,  5019,  5022,  5024,  5027,  5029,  5032,  5034,
    5037,  5039,  5042,  5044,  5047
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     519,     0,    -1,    -1,   520,   521,    -1,   524,    -1,   522,
      -1,   523,    -1,   522,   523,    -1,   526,    -1,   528,    -1,
      -1,   525,   534,    -1,   538,   534,   529,   530,    -1,   538,
     534,   529,   531,    -1,   540,   534,   532,    -1,    -1,   527,
      -1,   529,   527,    -1,    -1,   531,    -1,   145,   541,   457,
      -1,    -1,   533,    -1,   141,   541,   457,    -1,    -1,    -1,
      -1,   546,   547,   548,   610,   611,   613,   612,   649,   535,
     659,   660,   661,   536,   690,   747,   749,   751,   808,   537,
     822,    -1,    -1,   346,   457,   541,   542,   539,   543,   457,
      -1,   202,   457,   541,   542,   457,    -1,   347,    -1,   259,
      -1,    -1,    27,   259,    -1,    -1,  1293,   544,  1309,    -1,
      75,    -1,    75,   545,    -1,   545,    -1,   174,    -1,   462,
      -1,   359,    -1,    -1,   156,   125,   457,    -1,    -1,    87,
     399,   457,    -1,    -1,   548,   549,    -1,   550,    -1,   554,
      -1,   573,    -1,   574,    -1,   565,    -1,    -1,   420,   457,
     551,   552,    -1,    -1,   564,   553,   457,    -1,    -1,  1325,
     110,   275,    -1,    -1,   309,   457,   555,   556,    -1,    -1,
     564,   457,    -1,   564,   557,   457,    -1,   557,   457,    -1,
     558,    -1,   557,   558,    -1,   559,    -1,   560,    -1,   561,
      -1,   562,    -1,   271,   415,  1293,  1243,  1338,    -1,  1344,
    1293,  1210,    -1,   401,  1293,  1243,    -1,  1281,    62,  1293,
     563,    -1,  1210,    -1,   260,    -1,   500,    -1,   440,    -1,
     510,    -1,   564,   510,    -1,    -1,   374,   457,   566,   567,
      -1,    -1,   568,   457,    -1,   568,     1,   457,    -1,   569,
      -1,   568,   569,    -1,   201,    10,   231,    -1,   201,   570,
     571,    -1,   201,   572,   231,    -1,   375,    -1,   502,    -1,
      -1,    27,   259,    -1,   375,    -1,   572,   375,    -1,   422,
     457,    -1,   575,   457,    -1,   575,     1,   457,    -1,   576,
      -1,   575,   576,    -1,   577,    -1,   582,    -1,   591,    -1,
     601,    -1,   598,    -1,   602,    -1,   604,    -1,   605,    -1,
     606,    -1,   607,    -1,   608,    -1,   609,    -1,    -1,   510,
     578,   579,    -1,  1293,    99,    -1,  1243,  1293,  1214,    -1,
    1293,  1214,   580,    -1,   581,    -1,    -1,   581,    -1,  1059,
    1306,  1214,    -1,   581,  1059,  1306,  1214,    -1,    -1,    12,
    1214,   583,  1293,   584,    -1,   283,    -1,   424,    -1,   425,
      -1,   129,    -1,    29,    -1,   585,    -1,   586,    -1,   585,
     586,    -1,   589,    -1,   589,   448,   589,    -1,    -1,   589,
      18,   587,   588,    -1,   589,    -1,   588,    18,   589,    -1,
     259,    -1,   421,    -1,   516,    -1,   351,    -1,   214,    -1,
     269,    -1,   421,    -1,   516,    -1,   593,   592,    -1,    -1,
     220,   510,    -1,   438,  1282,   594,    -1,   595,    -1,   594,
     595,    -1,   596,  1294,   597,    -1,  1215,    -1,   596,  1215,
      -1,  1244,    -1,   597,  1244,    -1,    61,  1214,  1293,   599,
      -1,   600,    -1,   599,   600,    -1,  1246,    -1,  1246,   448,
    1246,    -1,   260,  1214,  1293,   259,    -1,   101,  1312,  1293,
     259,   603,    -1,    -1,  1325,   333,   259,    -1,   111,  1293,
      71,    -1,   306,   410,  1293,   474,   405,    -1,   103,  1293,
    1209,    -1,    99,   428,  1293,  1209,    -1,   395,  1293,  1209,
      -1,   167,  1293,  1209,    -1,    -1,   228,   399,   457,    -1,
      -1,   176,   457,    -1,    -1,   236,   457,    -1,    -1,   613,
     614,    -1,    -1,   402,  1267,  1214,   615,   616,   457,    -1,
     402,     1,   457,    -1,    -1,   616,   617,    -1,   618,    -1,
     624,    -1,   626,    -1,   628,    -1,   629,    -1,   631,    -1,
     635,    -1,   637,    -1,   638,    -1,   639,    -1,   644,    -1,
     645,    -1,   647,    -1,    30,  1322,   621,   620,   622,    -1,
      30,  1322,   621,   619,   623,    -1,    30,  1322,   621,   122,
     623,    -1,    30,  1322,   621,   240,   623,    -1,    30,  1322,
     621,   340,   623,    -1,   120,    -1,   121,    -1,   443,    -1,
     352,    -1,    -1,   254,     8,  1285,    -1,    -1,   174,    -1,
     128,    -1,   259,    -1,  1240,    -1,    -1,   259,    -1,  1240,
      -1,     5,  1299,  1293,   625,    -1,   407,    -1,   128,    -1,
     352,    -1,    20,  1326,  1295,  1293,  1209,  1261,   627,    -1,
      20,  1326,  1295,  1293,  1209,   640,   641,  1261,   627,    -1,
      -1,   437,   507,    10,  1247,    -1,   437,   507,   590,    -1,
    1327,  1293,   510,    -1,   630,   428,  1293,  1209,    -1,    -1,
     460,    -1,   417,    -1,    -1,   632,   265,  1299,  1293,   633,
      -1,   270,   634,    -1,    34,   634,    -1,   170,    -1,    -1,
     509,   265,   314,  1337,    -1,   509,   265,   314,   277,  1337,
      -1,   509,   390,    -1,   320,  1293,   636,    -1,   636,    -1,
     222,    -1,  1310,  1279,   407,    -1,   364,    -1,   254,   407,
      -1,   325,  1281,  1293,  1213,    -1,   356,   116,  1293,   424,
      -1,   356,  1295,  1293,  1209,    -1,   356,  1295,  1293,  1209,
     640,   641,    -1,   458,    -1,   419,  1293,    -1,    -1,   642,
     643,    -1,   641,   643,    -1,  1209,    -1,   364,  1295,  1293,
    1209,    -1,   377,   646,  1276,    -1,   292,    -1,  1243,    -1,
     409,  1325,   648,    -1,    10,  1307,    -1,   292,  1307,    -1,
     354,   315,    -1,    -1,   650,   457,    -1,   650,     1,   457,
      -1,   651,    -1,   650,   651,    -1,   652,    -1,   654,    -1,
     393,   653,  1276,  1286,  1199,    -1,    -1,   356,    -1,   417,
      -1,   418,    -1,    -1,   277,   655,  1285,  1318,  1283,   656,
      -1,   657,    -1,   656,   657,    -1,  1200,   658,    -1,    -1,
     336,  1243,    -1,    -1,   105,   125,   457,    -1,    -1,   460,
     399,   457,    -1,    -1,   661,   662,    -1,   663,   692,    -1,
      -1,   665,  1200,   664,   666,   457,    -1,   665,     1,   457,
      -1,   175,    -1,   397,    -1,    -1,   666,   667,    -1,  1293,
     174,    -1,  1293,   206,    -1,   668,    -1,   670,    -1,   674,
      -1,   675,    -1,   678,    -1,   679,    -1,   685,    -1,   686,
      -1,   687,    -1,    48,  1283,  1243,   673,   669,    -1,    -1,
     358,    -1,    60,    -1,   356,  1283,  1243,  1282,    -1,   356,
    1283,  1243,   452,  1243,  1282,    -1,   356,  1293,   505,  1288,
    1315,   672,   673,  1282,   671,    -1,    -1,   117,  1304,  1209,
      -1,    -1,  1287,  1243,    -1,    -1,   452,  1243,    -1,   241,
    1339,  1335,    -1,   504,   311,   676,  1293,   677,    -1,   504,
     311,   177,  1293,   677,    -1,   510,    -1,   215,    -1,   259,
      -1,  1240,    -1,   105,  1339,  1211,    -1,   252,  1293,  1213,
    1298,   680,    -1,    -1,   680,   681,    -1,   682,    -1,   683,
      -1,   684,    -1,  1325,   190,  1278,  1213,    -1,   471,  1213,
      -1,    49,  1213,    -1,   357,  1299,  1293,   510,    -1,    65,
    1293,   510,    -1,   688,   689,    -1,   371,  1293,    -1,   373,
    1275,    -1,  1214,    -1,   689,  1214,    -1,    -1,    -1,   512,
     399,   457,   691,   692,    -1,    -1,    -1,   693,   694,    -1,
     695,   457,    -1,   694,   695,   457,    -1,   694,   457,    -1,
     707,    -1,    -1,   697,   698,   696,   709,    -1,   697,     1,
     457,    -1,  1259,   510,    -1,    -1,   178,    -1,   510,    -1,
     510,    -1,    -1,  1293,   206,    -1,  1247,    -1,   247,   702,
      -1,   246,   702,    -1,    51,  1303,   702,    -1,  1237,    -1,
      42,    -1,    45,    -1,    44,    -1,    43,    -1,    41,    -1,
     706,    -1,   718,    -1,   719,    -1,   703,    -1,   704,    -1,
     705,    -1,     1,   457,    -1,   182,    -1,   186,    -1,   183,
      -1,   184,    -1,   181,    -1,   185,    -1,   187,    -1,   335,
      -1,   348,    -1,   697,   699,    88,   700,   708,    -1,  1277,
     701,    -1,   198,   510,    -1,    -1,   709,   710,    -1,   711,
      -1,   712,    -1,   714,    -1,   715,    -1,   716,    -1,   720,
      -1,   723,    -1,   735,    -1,   736,    -1,   738,    -1,   739,
      -1,   740,    -1,   745,    -1,   746,    -1,   360,  1237,    -1,
    1293,   174,   713,    -1,    -1,    27,   259,    -1,  1293,   206,
      -1,   332,    -1,   717,    -1,   497,  1293,   717,    -1,    40,
      -1,    76,    -1,   718,    -1,   719,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,   122,    -1,   221,
      -1,   324,    -1,   335,    -1,   348,    -1,   414,    -1,   412,
      -1,   413,    -1,   485,    -1,   483,    -1,   484,    -1,    42,
    1313,    -1,    42,   482,    -1,    45,  1313,    -1,    45,   482,
      -1,    44,  1313,    -1,    44,   482,    -1,    43,  1313,    -1,
      43,   482,    -1,    41,  1313,    -1,    41,   482,    -1,   182,
      -1,   183,    -1,   181,    -1,   184,    -1,   185,    -1,   280,
      -1,    78,    -1,   189,    -1,    79,    -1,   188,    -1,  1314,
     243,  1271,    -1,  1314,   474,  1271,    -1,   310,  1243,   724,
    1320,   726,   722,    -1,    -1,   430,  1243,    -1,   310,  1243,
     724,  1320,   726,   729,   732,    -1,   310,   128,   727,   725,
     724,   728,   729,   732,    -1,    -1,   452,  1243,    -1,    -1,
     198,  1243,    -1,    -1,   117,  1304,  1209,    -1,    -1,    54,
    1288,   510,    -1,    -1,   225,    -1,   730,    -1,    -1,   730,
     731,  1295,  1293,  1208,    -1,    28,    -1,   118,    -1,    -1,
     222,  1280,   733,    -1,   734,    -1,   733,   734,    -1,   510,
      -1,   237,  1311,    -1,   439,   737,    -1,    -1,   244,    -1,
     389,    -1,    46,  1323,   516,    -1,    37,    -1,    -1,   504,
    1294,   742,   741,   744,    -1,   743,    -1,   742,   743,    -1,
    1247,    -1,  1247,   448,  1247,    -1,    -1,  1324,   459,  1293,
    1247,    -1,   368,  1240,    -1,   368,  1240,   448,  1240,    -1,
      22,   246,    -1,    22,   306,    -1,    -1,    -1,   264,   399,
     457,   748,   692,    -1,    -1,    -1,   258,   399,   457,   750,
     692,    -1,    -1,    -1,   371,   399,   457,   752,   753,    -1,
      -1,   753,   754,    -1,    -1,   353,  1201,   755,   756,   457,
     773,    -1,    -1,   756,   757,    -1,     1,   457,    -1,  1293,
     206,    -1,    64,  1293,  1227,    -1,   758,    -1,   763,    -1,
    1352,   759,    -1,   760,   761,    -1,   760,    -1,   761,    -1,
     179,    -1,   762,    -1,   761,   762,    -1,  1236,    -1,   326,
    1297,   764,   766,    -1,   765,    -1,   765,  1336,    -1,   765,
    1336,   765,  1329,    -1,  1245,    -1,  1236,    -1,    -1,   766,
     767,    -1,   768,    -1,   769,    -1,   770,    -1,   771,    -1,
     772,    -1,   256,  1293,   765,    -1,   212,  1293,   765,    -1,
     180,  1345,  1293,   765,    -1,   242,  1346,  1293,   765,    -1,
     242,  1345,  1293,   765,    -1,   190,  1293,   765,    -1,    -1,
     773,   774,    -1,    -1,   697,   698,   775,   776,   457,    -1,
      -1,   776,   777,    -1,   778,    -1,   782,    -1,   792,    -1,
     715,    -1,   807,    -1,   720,    -1,   735,    -1,   798,    -1,
     738,    -1,   805,    -1,   784,    -1,   740,    -1,   787,    -1,
     806,    -1,   721,    -1,   791,    -1,   478,  1293,   779,    -1,
    1350,    -1,  1348,    -1,  1346,  1305,   780,    -1,  1347,  1305,
     781,    -1,  1345,    -1,  1349,    -1,  1351,    -1,    -1,  1236,
      -1,  1236,   318,   326,    -1,   179,    -1,    -1,  1236,    -1,
     179,    -1,    10,    -1,   290,  1293,   783,    -1,  1243,    -1,
     334,  1243,    -1,   469,  1243,    -1,   291,    -1,   436,  1303,
    1220,   785,    -1,    -1,   378,  1304,   786,    -1,   490,  1236,
      -1,  1236,    -1,   179,    -1,   788,   507,  1176,    -1,   788,
       9,  1300,   789,    -1,   788,   237,     9,  1300,   326,    -1,
     788,    38,  1300,   789,    -1,   788,   237,    38,  1300,   326,
      -1,   338,    -1,     3,    -1,    -1,   790,   789,    -1,   326,
      -1,  1236,    -1,   318,    -1,   505,  1236,   198,  1222,    50,
    1222,    -1,   793,   794,    -1,   254,   796,    -1,    -1,   795,
     794,    -1,   797,    -1,  1304,   291,    -1,   334,  1245,    -1,
     469,  1245,    -1,    -1,   304,   234,    -1,   304,    -1,  1245,
      -1,   799,   802,    -1,  1330,  1302,   800,  1294,    -1,    -1,
     801,    -1,   244,    -1,   389,    -1,    55,    -1,   816,  1245,
      -1,   803,    -1,   804,    -1,   804,   803,    -1,  1245,    -1,
     419,  1293,  1222,  1268,    -1,   211,  1290,    -1,   497,  1293,
     122,    -1,    -1,    -1,   394,   399,   457,   809,   810,    -1,
      -1,   811,    -1,   812,   457,    -1,   811,   812,   457,    -1,
     707,    -1,    -1,   697,   698,   813,   814,    -1,   697,     1,
     457,    -1,    -1,   814,   815,    -1,    46,   254,    -1,    46,
     394,    -1,    39,    -1,    47,    -1,   163,   159,    -1,   163,
     161,    -1,   213,    -1,   268,    -1,   383,    -1,   479,    -1,
     323,    -1,   245,    -1,    33,    -1,   400,    -1,   376,    -1,
     200,    -1,   350,    59,  1293,  1227,    -1,   350,    -1,   462,
      -1,   254,  1301,  1293,   818,  1229,    -1,  1328,  1301,  1293,
     819,  1229,    -1,   192,  1293,  1229,    -1,    36,  1293,  1229,
      -1,   716,    -1,   738,    -1,   821,    -1,   735,    -1,   720,
      -1,   740,    -1,   715,    -1,   820,    -1,   503,  1236,    -1,
     198,  1232,    -1,   452,  1236,    -1,   334,    -1,   469,    -1,
     273,    -1,   464,    -1,    -1,   816,    -1,   817,    -1,    -1,
     816,    -1,   817,    -1,   310,  1243,  1320,    -1,  1293,   206,
      -1,    -1,    -1,    -1,   342,   125,   826,   834,   457,   823,
     835,   824,   837,    -1,    -1,   825,   848,   457,   837,    -1,
      -1,    -1,   503,   827,   829,    -1,    -1,    58,   828,   829,
      -1,   830,    -1,   829,   830,    -1,   831,   832,   833,   510,
      -1,    -1,  1280,   362,    -1,  1280,   504,    -1,    -1,   415,
    1293,    33,    -1,   415,  1293,   113,    -1,   482,   415,  1293,
      33,    -1,   482,   415,  1293,  1243,    -1,   415,  1293,  1243,
      -1,    -1,   317,    -1,    -1,   381,   510,    -1,    -1,    -1,
     112,   457,   836,   837,   132,   112,   457,    -1,    -1,   837,
     838,    -1,   839,    -1,   842,    -1,   848,   457,    -1,   843,
      -1,   457,    -1,    -1,   510,   399,   844,   457,   840,   841,
      -1,    -1,  1130,   457,    -1,   510,   457,    -1,   510,    -1,
      -1,  1243,    -1,    -1,    -1,   846,   847,   848,    -1,    -1,
     849,   850,    -1,   848,   850,    -1,   851,    -1,   867,    -1,
     872,    -1,   876,    -1,   881,    -1,   896,    -1,   899,    -1,
     907,    -1,   903,    -1,   908,    -1,   909,    -1,   914,    -1,
     928,    -1,   932,    -1,   935,    -1,   949,    -1,   953,    -1,
     956,    -1,   959,    -1,   963,    -1,   964,    -1,   968,    -1,
     978,    -1,   981,    -1,   998,    -1,  1000,    -1,  1003,    -1,
    1007,    -1,  1013,    -1,  1025,    -1,  1033,    -1,  1034,    -1,
    1037,    -1,  1038,    -1,  1042,    -1,  1047,    -1,  1048,    -1,
    1056,    -1,  1071,    -1,  1081,    -1,  1090,    -1,  1095,    -1,
    1102,    -1,  1106,    -1,  1108,    -1,  1111,    -1,  1114,    -1,
    1118,    -1,  1145,    -1,   289,   404,    -1,     1,  1272,    -1,
      -1,     4,   852,   853,   866,    -1,   854,   856,   860,   861,
     862,  1153,    -1,  1236,   198,   855,    -1,  1236,   198,  1329,
      -1,  1236,   198,   106,   515,    -1,  1236,   198,   106,    -1,
    1236,   198,   107,   514,    -1,  1236,   198,   107,    -1,  1236,
     198,   108,    -1,  1236,   198,   165,   239,    -1,  1236,   198,
     168,   428,    -1,  1236,   198,   449,    -1,  1236,   198,   499,
     279,    -1,  1236,   198,    72,    -1,  1236,   198,   158,  1153,
      -1,  1236,   198,   156,  1225,  1153,    -1,  1236,   198,    25,
      -1,  1236,   198,    26,  1153,    -1,  1236,   198,  1203,    -1,
    1236,   198,   510,    -1,  1236,    -1,   313,    -1,   257,    -1,
     254,   304,    -1,    -1,   857,    -1,  1278,   858,   859,    -1,
    1278,   859,   858,    -1,  1278,   858,    -1,  1278,   859,    -1,
      31,  1225,    -1,   254,  1301,  1229,    -1,  1328,  1301,  1229,
      -1,   336,  1301,  1229,    -1,    -1,   199,    -1,    -1,   275,
    1293,    48,    -1,    -1,   509,   863,    -1,   864,    -1,   863,
     864,    -1,    33,    -1,   441,    -1,    39,    -1,    47,    -1,
      94,    -1,   200,    -1,   213,    -1,   245,    -1,   266,    -1,
     268,    -1,   293,    -1,   323,    -1,   350,    59,  1293,  1227,
      -1,   350,    -1,   376,    -1,   383,    -1,   400,    -1,   479,
      -1,   292,   865,    -1,   865,    -1,   495,    -1,   192,  1293,
    1229,    -1,    36,  1293,  1229,    -1,   396,   488,  1175,    -1,
     396,   126,  1175,    -1,   450,  1274,  1230,    -1,   489,    -1,
     113,    -1,    -1,   133,    -1,    -1,     6,   868,   869,   871,
      -1,  1218,   452,  1195,  1159,    -1,  1218,   870,   205,  1195,
    1159,    -1,    97,  1236,   452,  1236,  1268,  1159,    -1,    -1,
     452,  1219,    -1,    -1,   134,    -1,    -1,    11,   873,   874,
      -1,  1236,  1262,   875,    -1,  1189,    60,  1263,   875,    -1,
      -1,   381,  1217,    -1,    -1,    19,   877,   878,    -1,   879,
      -1,   878,   879,    -1,  1205,   452,   880,  1205,    -1,    -1,
     344,   452,    -1,    -1,    52,   882,   883,   895,    -1,   884,
    1228,   885,   890,   893,   894,    -1,    -1,   427,    -1,   429,
      -1,   274,    -1,    -1,    -1,   503,   886,   887,    -1,   888,
      -1,   887,   888,    -1,   889,   313,    -1,   889,   832,  1219,
      -1,    -1,  1280,   362,    -1,  1280,    90,    -1,  1280,   504,
      -1,    -1,   891,  1292,  1236,    -1,   891,   892,    -1,   891,
       7,  1303,  1236,    -1,   381,    -1,   205,    -1,   466,    -1,
     313,    -1,    -1,  1333,   845,    -1,    -1,   299,   845,    -1,
      -1,   135,    -1,    -1,    53,   897,   898,    -1,  1227,    -1,
     898,  1227,    -1,    -1,    63,   900,   901,    -1,  1200,   902,
      -1,   901,  1200,   902,    -1,    -1,  1340,    -1,  1340,  1286,
     367,    -1,  1325,   292,   385,    -1,  1325,   265,    -1,    -1,
      77,   904,   905,   906,    -1,  1195,  1331,  1189,  1159,    -1,
      -1,   136,    -1,    74,    -1,    91,    -1,    -1,   114,   910,
     911,   913,    -1,  1200,  1310,  1172,    -1,   460,   912,    -1,
    1200,    -1,   912,  1200,    -1,    -1,   137,    -1,    -1,   122,
     915,   916,   927,    -1,  1227,   493,  1156,    -1,  1227,   494,
    1156,    -1,  1227,   491,  1156,    -1,  1227,   492,  1156,    -1,
    1218,   920,   924,  1156,    -1,   917,  1156,    -1,  1219,   509,
     925,  1156,    -1,   919,    -1,    -1,   917,   918,   919,    -1,
    1219,   857,   921,   861,   923,    -1,    -1,   490,  1203,    -1,
     490,   510,    -1,   490,   340,    -1,   490,    99,    -1,    -1,
     490,   922,    -1,    99,    -1,   100,    -1,    -1,   509,   925,
      -1,    -1,   303,    -1,   926,    -1,   925,   926,    -1,    39,
      -1,    46,   254,    -1,    46,   394,    -1,    47,    -1,    94,
      -1,   163,   159,    -1,   163,   161,    -1,   213,    -1,   268,
      -1,   323,    -1,   383,    -1,   479,    -1,   192,  1293,  1229,
      -1,    36,  1293,  1229,    -1,   396,   488,  1175,    -1,   396,
     126,  1175,    -1,    -1,   138,    -1,    -1,   124,   929,   930,
     931,    -1,  1219,   230,  1195,  1159,    -1,  1219,   230,  1219,
     205,  1195,  1159,    -1,  1219,    50,  1219,   205,  1195,  1159,
      -1,  1219,   230,  1219,   205,  1196,   366,  1196,  1159,    -1,
    1219,    50,  1219,   205,  1196,   366,  1196,  1159,    -1,    -1,
     139,    -1,    -1,   155,   933,   934,    -1,   259,   885,    -1,
      -1,   166,   936,   937,   948,    -1,   938,   940,    -1,   939,
      -1,   938,    18,   939,    -1,  1177,    -1,   470,    -1,   459,
      -1,   941,   943,    -1,   941,    -1,   942,    -1,   941,   942,
      -1,   944,   845,    -1,   507,   321,   845,    -1,   507,   945,
      -1,   944,   507,   945,    -1,   946,    -1,   945,    18,   946,
      -1,  1178,   947,    -1,    22,    -1,   470,    -1,   459,    -1,
      -1,   448,  1177,    -1,    -1,   140,    -1,    -1,   171,   950,
     951,    -1,    -1,   345,   952,    -1,   201,    -1,   329,   104,
      -1,   329,    -1,   399,    -1,   328,    -1,    -1,   891,  1219,
      -1,    -1,   197,   954,   955,    -1,  1216,    -1,    -1,   204,
     957,   958,    -1,  1240,    -1,    -1,   207,   960,   961,    -1,
    1321,  1204,   962,    -1,    -1,   117,  1304,  1236,    -1,   208,
     952,    -1,    -1,   217,   965,  1176,  1319,   966,   967,    -1,
     845,   131,   845,    -1,   131,   845,    -1,   845,    -1,    -1,
     142,    -1,    -1,   224,   969,   970,    -1,  1216,   971,   972,
     973,   977,    -1,    -1,  1325,   178,    -1,    -1,    10,  1321,
     504,    -1,   976,  1321,   504,    -1,    -1,   370,   974,    -1,
     975,    -1,   974,   975,    -1,   976,  1284,    50,  1219,    -1,
      13,    -1,    16,    -1,   306,    -1,    17,    -1,   307,    -1,
     280,    -1,   281,    -1,    -1,  1319,  1321,   113,    -1,    -1,
     226,   979,   980,    -1,  1201,    -1,   980,  1201,    -1,    -1,
     229,   982,   983,    -1,   984,   985,    -1,  1236,    -1,  1247,
      -1,  1250,    -1,   986,   988,    -1,   986,    -1,   988,    -1,
     989,    -1,    -1,   442,   987,   990,    -1,   370,   992,    -1,
      95,  1225,   452,  1226,   996,    -1,   991,    -1,   990,   991,
      -1,  1225,   191,    -1,    60,   996,    -1,    10,    -1,   243,
      -1,   474,    -1,  1225,   996,    -1,   993,    -1,   992,   993,
      -1,    60,    50,  1225,   996,    -1,   994,   995,    -1,    -1,
      10,    -1,   243,    -1,   180,    -1,   474,    -1,  1225,    50,
    1226,   996,    -1,    -1,   996,   997,    -1,    38,  1291,  1219,
      -1,     9,  1291,  1219,    -1,    -1,   272,   999,  1073,    -1,
      -1,   276,  1001,  1002,    -1,  1219,   452,  1216,    -1,    97,
    1219,   452,  1216,    -1,    -1,   278,  1004,  1005,  1006,    -1,
    1219,    50,  1195,  1159,    -1,  1219,    50,  1219,   205,  1195,
    1159,    -1,    -1,   143,    -1,    -1,   316,  1008,  1009,    -1,
    1010,  1011,  1199,  1012,    -1,  1009,  1010,  1011,  1199,  1012,
      -1,   227,    -1,   322,    -1,   235,    -1,   173,    -1,    -1,
     409,  1325,   648,    -1,    -1,  1325,   292,   385,    -1,  1325,
     265,    -1,   384,    -1,    -1,   329,  1014,  1015,    -1,  1019,
    1020,    -1,    -1,  1020,  1016,   845,  1017,    -1,  1020,  1018,
      -1,    -1,   144,    -1,   144,    -1,   457,    -1,  1205,    -1,
    1205,   448,  1205,    -1,    -1,  1228,   451,    -1,   193,    -1,
    1021,   487,  1022,    -1,  1021,   505,  1023,    -1,    -1,  1325,
     445,  1150,    -1,   171,    -1,  1176,    -1,  1024,    -1,  1023,
       9,  1024,    -1,  1236,   198,  1219,    50,  1219,   487,  1176,
      -1,    -1,   354,  1026,  1027,  1032,    -1,  1200,  1265,  1310,
    1028,  1029,  1030,  1031,    -1,    -1,   230,  1236,    -1,    -1,
     219,   265,    -1,  1325,   265,    -1,  1325,   238,   265,    -1,
    1325,   292,   265,    -1,  1325,   218,   265,    -1,  1325,   506,
      -1,    -1,   239,  1293,  1236,    -1,  1172,    -1,  1166,    -1,
      -1,   146,    -1,   355,    -1,    -1,   365,  1035,  1036,    -1,
    1197,  1148,    -1,   379,    -1,    -1,   380,  1039,  1040,  1041,
      -1,  1200,  1310,  1028,  1165,    -1,    -1,   147,    -1,    -1,
     386,  1043,  1044,  1046,    -1,  1197,  1148,  1045,  1172,    -1,
      -1,  1325,   265,    -1,  1325,   292,   265,    -1,    -1,   148,
      -1,   390,    -1,    -1,   398,  1049,  1050,  1055,    -1,  1198,
    1051,  1052,  1053,    -1,    10,  1198,  1052,   507,  1177,   845,
      -1,    -1,   505,  1236,    -1,    -1,   132,   845,    -1,  1054,
      -1,  1054,  1053,    -1,   507,  1176,   845,    -1,    -1,   149,
      -1,    -1,   408,  1057,  1058,    -1,  1061,    -1,  1062,    -1,
    1065,    -1,  1066,    -1,  1067,    -1,  1069,    -1,   314,    -1,
     312,    -1,   488,    -1,   126,    -1,   156,  1225,   452,  1225,
      -1,  1233,    32,  1063,    -1,  1064,    -1,  1063,  1064,    -1,
      39,  1059,    -1,    47,  1059,    -1,   213,  1059,    -1,   268,
    1059,    -1,   383,  1059,    -1,   479,  1059,    -1,   245,  1059,
      -1,   323,  1059,    -1,  1216,   452,   155,  1224,    -1,  1216,
     452,  1219,    -1,  1216,  1060,    50,  1219,    -1,  1068,    -1,
    1067,  1068,    -1,  1202,   452,  1059,    -1,  1070,    -1,  1069,
    1070,    -1,  1216,   452,   470,    -1,  1216,   452,   459,    -1,
      -1,   417,  1072,  1073,    -1,    -1,  1234,  1075,  1077,  1078,
    1074,  1079,  1080,    -1,    -1,  1075,  1304,   731,  1295,  1076,
      -1,    -1,  1076,  1240,    -1,    -1,  1343,  1289,    -1,    -1,
    1327,  1293,  1209,    -1,    -1,   503,  1199,    -1,   227,   342,
    1293,  1019,    -1,    -1,   205,  1199,    -1,   322,   342,  1293,
    1019,    -1,    -1,   426,  1082,  1083,  1089,    -1,  1200,  1085,
    1084,  1172,    -1,    -1,  1325,  1342,  1189,    -1,    -1,   239,
    1293,  1086,  1236,    -1,   180,    -1,   242,    -1,  1182,    -1,
    1266,  1183,    -1,  1266,  1184,    -1,  1266,  1185,    -1,  1266,
    1186,    -1,  1087,    -1,  1088,    -1,   295,  1182,    -1,   298,
      -1,    -1,   150,    -1,    -1,   431,   392,  1091,  1092,    -1,
     431,  1094,    -1,    -1,   891,  1219,    -1,  1325,   164,  1317,
    1093,    -1,  1325,   294,  1317,  1093,    -1,    -1,  1219,    -1,
     259,    -1,   421,    -1,   516,    -1,   351,    -1,    -1,   432,
    1096,  1097,  1101,    -1,  1098,   230,  1236,  1100,  1162,    -1,
    1099,    -1,  1098,  1099,    -1,  1219,    -1,   115,  1280,   415,
      -1,   115,  1280,  1219,    -1,    -1,  1325,   335,  1293,  1236,
      -1,    -1,   151,    -1,    -1,   435,  1103,  1104,  1105,    -1,
    1218,   198,  1195,  1159,    -1,  1218,   198,  1219,   205,  1195,
    1159,    -1,    97,  1236,   198,  1236,  1268,  1159,    -1,    -1,
     152,    -1,   437,  1107,    -1,    -1,   341,    -1,    -1,   444,
    1109,  1110,    -1,  1201,    -1,  1110,  1201,    -1,    -1,   475,
    1112,  1113,    -1,  1236,   198,  1225,   452,  1226,    -1,    -1,
     481,  1115,  1116,    -1,  1200,  1117,    -1,    -1,   356,    -1,
     358,    -1,    -1,   486,  1119,  1120,  1129,    -1,  1228,  1121,
    1124,  1100,  1128,  1162,    -1,    -1,   115,  1280,  1122,    -1,
    1123,    -1,  1122,   318,  1123,    -1,  1260,  1225,    -1,   230,
    1125,    -1,  1124,  1125,    -1,  1236,  1126,  1127,    -1,    -1,
     116,  1288,  1236,    -1,    -1,    98,  1288,  1236,    -1,    -1,
     442,  1288,  1236,    -1,    -1,   153,    -1,    -1,   498,  1131,
    1132,    -1,  1133,    -1,  1136,    -1,  1140,    -1,  1142,    -1,
    1143,    -1,  1134,  1274,  1316,  1332,  1308,  1304,  1135,    -1,
      -1,   206,    -1,  1199,    -1,   227,    -1,   322,    -1,   235,
      -1,   173,    -1,  1286,   110,  1304,  1137,    -1,  1138,    -1,
    1137,  1138,    -1,  1206,    -1,    10,   343,    -1,    10,  1139,
    1240,    -1,    -1,   363,    -1,   363,   311,    -1,   311,    -1,
    1278,   345,  1141,    -1,   426,    -1,   132,    -1,  1134,    38,
     372,  1236,    -1,  1144,    -1,   169,    -1,   130,    -1,    -1,
     513,  1146,  1147,  1152,    -1,  1197,  1148,  1149,  1045,  1151,
      -1,    -1,   198,  1232,    -1,    -1,  1150,  1273,  1229,  1296,
      -1,  1150,  1273,  1203,    -1,  1150,  1273,   326,    -1,    38,
      -1,     9,    -1,  1172,    -1,  1169,    -1,    -1,   154,    -1,
    1154,  1155,    -1,    -1,   168,   845,    -1,    -1,   299,   845,
      -1,  1157,  1158,    -1,    -1,   168,   845,    -1,    -1,   299,
     845,    -1,  1160,  1161,    -1,    -1,   416,   845,    -1,    -1,
     302,   845,    -1,  1163,  1164,    -1,    -1,   467,   845,    -1,
      -1,   301,   845,    -1,  1167,  1168,    -1,  1167,    -1,  1167,
    1168,    -1,  1167,    -1,  1168,    -1,   132,   845,    -1,   296,
     845,    -1,  1170,  1171,    -1,  1170,    -1,  1171,    -1,   160,
     845,    -1,   297,   845,    -1,  1173,  1174,    -1,    -1,   233,
     845,    -1,    -1,   300,   845,    -1,    -1,  1231,  1341,    -1,
    1177,    -1,  1178,    -1,    -1,  1179,  1180,    -1,  1181,    -1,
    1180,   234,    -1,  1180,  1181,    -1,  1219,    -1,   468,    -1,
     454,    -1,   469,    -1,   464,    -1,   465,    -1,   456,    -1,
     172,    -1,  1182,    -1,  1183,    -1,  1184,    -1,  1185,    -1,
    1186,    -1,   298,    -1,   295,    -1,    21,    -1,   318,    -1,
     313,    -1,   306,    -1,    13,    -1,    14,    -1,    15,    -1,
     337,    -1,   287,    -1,   458,    -1,   162,  1321,    -1,   461,
      -1,   209,    -1,   463,    -1,   248,    -1,   210,    -1,   249,
      -1,  1189,    -1,  1187,  1188,  1189,    -1,    -1,    73,    -1,
     403,    -1,  1189,   469,  1190,    -1,  1189,   464,  1190,    -1,
    1190,    -1,  1190,   465,  1191,    -1,  1190,   456,  1191,    -1,
    1191,    -1,  1192,   172,  1191,    -1,  1192,    -1,   469,  1193,
      -1,   464,  1193,    -1,  1193,    -1,   468,  1189,   454,    -1,
    1222,    -1,   253,    -1,   253,  1334,   510,    -1,   255,    -1,
     255,  1334,   510,    -1,   327,    -1,   327,  1334,   510,    -1,
    1196,    -1,  1195,  1196,    -1,  1217,  1268,    -1,  1240,    -1,
    1240,    -1,  1200,    -1,  1199,  1200,    -1,   510,    -1,   510,
      -1,  1203,    -1,  1202,  1203,    -1,   274,    -1,    -1,  1204,
    1205,    -1,  1206,    -1,  1240,    -1,  1207,    -1,  1207,  1334,
    1207,    -1,   259,    -1,  1209,    -1,  1208,  1209,    -1,  1240,
      -1,   510,    -1,  1212,    -1,  1211,  1212,    -1,   510,    -1,
    1209,    -1,   259,    -1,   510,    -1,   510,    -1,  1217,    -1,
    1216,  1217,    -1,  1238,    -1,  1248,    -1,     7,  1303,  1237,
      -1,  1219,    -1,  1218,  1219,    -1,  1236,    -1,  1247,    -1,
    1250,    -1,  1194,    -1,   247,  1237,    -1,   247,  1248,    -1,
     247,  1250,    -1,     7,  1303,  1223,  1224,    -1,     7,  1303,
    1237,    -1,   274,    -1,  1222,    -1,  1220,  1222,    -1,  1236,
      -1,  1248,    -1,  1250,    -1,  1236,    -1,  1248,    -1,  1250,
      -1,  1194,    -1,   247,  1237,    -1,   247,  1248,    -1,   247,
    1250,    -1,   345,    -1,   155,    -1,  1237,    -1,   259,    -1,
    1236,    -1,  1248,    -1,  1236,    -1,  1247,    -1,  1236,    -1,
     259,    -1,  1236,    -1,   259,    -1,  1250,    -1,  1233,    -1,
    1243,    -1,   516,    -1,  1233,    -1,  1245,    -1,  1233,    -1,
    1243,    -1,  1236,    -1,  1247,    -1,  1250,    -1,  1235,    -1,
    1235,    -1,  1240,    -1,  1240,  1241,    -1,  1237,    -1,  1240,
    1241,  1242,    -1,  1240,  1241,    -1,  1240,  1242,    -1,  1240,
      -1,  1239,    -1,  1194,    -1,  1240,  1241,  1242,    -1,  1240,
    1241,    -1,  1240,  1242,    -1,  1240,    -1,   510,    -1,   510,
    1334,  1240,    -1,   468,  1187,   454,    -1,   468,  1189,   455,
     454,    -1,   468,  1189,   455,  1189,   454,    -1,   259,    -1,
     259,    -1,   259,    -1,   516,    -1,   259,    -1,   421,    -1,
     516,    -1,   351,    -1,   214,    -1,   269,    -1,   466,    -1,
    1248,    -1,    10,  1249,    -1,  1249,    -1,  1248,   453,  1249,
      -1,   259,    -1,   421,    -1,   516,    -1,   351,    -1,   214,
      -1,   269,    -1,   466,    -1,  1251,  1254,    -1,  1252,   468,
    1221,   454,  1254,    -1,  1253,   468,  1187,   454,  1254,    -1,
     476,   468,  1256,   454,  1254,    -1,   308,   468,  1257,   454,
      -1,   261,   468,  1258,   454,  1254,    -1,   262,   468,  1258,
     454,  1254,    -1,   263,   468,  1258,   454,  1254,    -1,   203,
    1255,    -1,   501,  1255,    -1,   102,    -1,   508,    -1,   496,
      -1,   267,    -1,   382,    -1,    85,    -1,   194,    -1,   195,
      -1,   196,    -1,   433,    -1,   434,    -1,    -1,   468,  1189,
     455,   454,    -1,   468,  1189,   455,  1189,   454,    -1,    -1,
     468,  1187,   454,    -1,   468,   454,    -1,  1221,    -1,  1221,
    1188,   243,    -1,  1221,  1188,   474,    -1,  1221,    -1,  1221,
    1188,  1221,    -1,  1189,    -1,  1189,  1188,  1209,    -1,    -1,
      -1,    10,    -1,    -1,  1343,    -1,    -1,   225,    -1,    -1,
     225,  1264,    -1,    -1,   452,  1226,    -1,    -1,   289,    -1,
     339,    -1,    -1,   295,    -1,    -1,   317,    -1,   295,   317,
      -1,    -1,   391,  1269,    -1,    -1,   275,  1293,  1270,    -1,
      35,    -1,   284,    -1,   285,    -1,   286,    -1,   349,    -1,
     472,    -1,   473,    -1,   477,    -1,    -1,   405,  1281,    -1,
     457,    -1,     4,    -1,     6,    -1,    11,    -1,    19,    -1,
      52,    -1,    53,    -1,    63,    -1,    74,    -1,    77,    -1,
      91,    -1,   114,    -1,   122,    -1,   124,    -1,   131,    -1,
     155,    -1,   166,    -1,   171,    -1,   197,    -1,   204,    -1,
     207,    -1,   208,    -1,   217,    -1,   224,    -1,   226,    -1,
     229,    -1,   272,    -1,   276,    -1,   278,    -1,   289,    -1,
     316,    -1,   329,    -1,   354,    -1,   365,    -1,   380,    -1,
     386,    -1,   390,    -1,   398,    -1,   408,    -1,   417,    -1,
     426,    -1,   431,    -1,   432,    -1,   435,    -1,   437,    -1,
     444,    -1,   475,    -1,   481,    -1,   486,    -1,   513,    -1,
     133,    -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,
     138,    -1,   139,    -1,   140,    -1,   142,    -1,   143,    -1,
     144,    -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,
     150,    -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,
      -1,     8,    -1,    -1,     9,    -1,    -1,    23,    -1,    -1,
      24,    -1,    -1,    27,    -1,    -1,    31,    -1,    -1,    40,
      -1,    -1,    50,    -1,    -1,    59,    -1,    -1,    60,    -1,
      -1,    89,    -1,    -1,   105,    -1,    -1,   460,    -1,    -1,
     191,    -1,    -1,   198,    -1,    -1,   220,    -1,    -1,   319,
      -1,   220,   319,    -1,    -1,   223,    -1,    -1,   462,    -1,
      -1,   230,    -1,    -1,   234,    -1,    -1,   234,    -1,    23,
      -1,    -1,   239,    -1,    -1,   254,    -1,   257,    -1,    -1,
     250,  1294,    -1,   251,  1294,    -1,    -1,   257,    -1,    -1,
     275,    -1,    -1,   288,    -1,    -1,   304,    -1,    -1,   304,
      -1,   305,    -1,    -1,   311,    -1,    -1,   314,    -1,    -1,
     314,    -1,   191,    -1,    -1,   428,   234,    -1,   428,    -1,
     234,    -1,    -1,   321,    -1,    -1,   342,    -1,    -1,   345,
      -1,    -1,   356,    -1,    -1,   389,    -1,    -1,   410,    -1,
      -1,   411,    -1,    -1,   410,    -1,   410,   234,    -1,    -1,
     415,    -1,    -1,   423,    -1,    -1,   428,    -1,    -1,   443,
      -1,    -1,   447,    -1,    -1,   451,    -1,    -1,   452,    -1,
      -1,   452,    -1,   503,    -1,    -1,   507,    -1,    -1,   507,
     408,   452,    -1,    -1,   509,    -1,    -1,   356,    -1,    66,
     406,    -1,   406,    -1,    69,    -1,    67,    -1,    70,    -1,
      68,    -1,  1328,    -1,  1329,    -1,   458,    -1,   162,    -1,
     168,    -1,   164,    -1,   168,    -1,   467,    -1,   220,    -1,
     311,    -1,   423,    -1,   313,    -1,   254,    -1,   257,    -1,
     356,    -1,   358,    -1,    60,    -1,   511,    -1,   356,  1294,
      -1,   358,  1294,    -1,   361,    -1,   480,    -1,   254,    -1,
     257,    -1,   415,    -1,   246,    -1,   509,   127,    -1,   127,
      -1,   345,    66,   406,    -1,    66,   406,    -1,   406,    -1,
     119,    -1,   109,    -1,    92,   212,    -1,    57,    -1,    92,
     190,    -1,    56,    -1,   326,   212,    -1,   330,    -1,   326,
     190,    -1,   331,    -1,   371,   212,    -1,   388,    -1,   371,
     190,    -1,   387,    -1,    92,  1294,    -1,    93,  1294,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1375,  1375,  1375,  1407,  1408,  1412,  1413,  1417,  1418,
    1422,  1422,  1445,  1452,  1459,  1465,  1466,  1467,  1471,  1472,
    1476,  1500,  1501,  1505,  1539,  1545,  1557,  1531,  1567,  1566,
    1604,  1636,  1637,  1641,  1642,  1645,  1646,  1650,  1659,  1668,
    1669,  1673,  1677,  1686,  1687,  1695,  1696,  1706,  1707,  1711,
    1712,  1713,  1714,  1715,  1722,  1721,  1734,  1735,  1738,  1739,
    1753,  1752,  1762,  1763,  1764,  1765,  1769,  1770,  1774,  1775,
    1776,  1777,  1781,  1788,  1795,  1802,  1813,  1817,  1821,  1825,
    1832,  1833,  1840,  1839,  1850,  1851,  1852,  1859,  1860,  1864,
    1868,  1880,  1884,  1885,  1890,  1893,  1900,  1905,  1916,  1929,
    1930,  1938,  1939,  1943,  1944,  1945,  1946,  1947,  1948,  1949,
    1950,  1951,  1952,  1953,  1954,  1962,  1961,  1980,  1990,  2003,
    2011,  2014,  2015,  2019,  2029,  2045,  2044,  2068,  2074,  2080,
    2086,  2092,  2098,  2108,  2112,  2119,  2123,  2128,  2127,  2138,
    2142,  2149,  2150,  2151,  2152,  2153,  2154,  2158,  2159,  2166,
    2181,  2184,  2191,  2199,  2203,  2214,  2234,  2242,  2253,  2254,
    2260,  2281,  2282,  2286,  2290,  2311,  2334,  2416,  2419,  2428,
    2447,  2463,  2481,  2499,  2516,  2532,  2533,  2540,  2541,  2549,
    2550,  2560,  2561,  2566,  2565,  2586,  2596,  2597,  2601,  2602,
    2603,  2604,  2605,  2606,  2607,  2608,  2609,  2610,  2611,  2612,
    2613,  2620,  2626,  2636,  2649,  2662,  2678,  2679,  2680,  2681,
    2684,  2685,  2691,  2692,  2696,  2700,  2701,  2706,  2709,  2710,
    2717,  2725,  2726,  2727,  2734,  2763,  2801,  2803,  2808,  2818,
    2829,  2836,  2838,  2839,  2845,  2845,  2852,  2857,  2862,  2869,
    2870,  2871,  2875,  2886,  2887,  2891,  2896,  2901,  2906,  2917,
    2928,  2938,  2943,  2964,  2965,  2969,  2969,  2973,  2978,  2996,
    3007,  3014,  3015,  3021,  3029,  3030,  3031,  3037,  3038,  3039,
    3046,  3047,  3051,  3052,  3058,  3086,  3087,  3088,  3089,  3096,
    3095,  3111,  3112,  3116,  3119,  3120,  3126,  3127,  3135,  3136,
    3144,  3145,  3149,  3169,  3168,  3185,  3192,  3196,  3202,  3203,
    3207,  3217,  3232,  3233,  3234,  3235,  3236,  3237,  3238,  3239,
    3240,  3247,  3254,  3254,  3254,  3260,  3280,  3314,  3345,  3346,
    3353,  3354,  3358,  3359,  3366,  3377,  3382,  3393,  3394,  3398,
    3399,  3405,  3416,  3434,  3435,  3439,  3440,  3441,  3445,  3452,
    3459,  3468,  3480,  3532,  3547,  3548,  3552,  3564,  3606,  3608,
    3607,  3623,  3626,  3626,  3644,  3645,  3647,  3651,  3653,  3652,
    3687,  3700,  3708,  3713,  3719,  3728,  3738,  3741,  3753,  3754,
    3755,  3756,  3760,  3764,  3768,  3772,  3776,  3780,  3784,  3788,
    3792,  3796,  3800,  3804,  3808,  3819,  3820,  3824,  3825,  3829,
    3830,  3831,  3835,  3836,  3840,  3866,  3870,  3879,  3883,  3892,
    3893,  3894,  3895,  3896,  3897,  3898,  3899,  3900,  3901,  3902,
    3903,  3904,  3905,  3912,  3936,  3964,  3967,  3976,  4001,  4012,
    4013,  4017,  4021,  4025,  4029,  4033,  4037,  4041,  4045,  4049,
    4053,  4057,  4061,  4065,  4070,  4075,  4079,  4083,  4091,  4095,
    4099,  4107,  4111,  4115,  4119,  4123,  4127,  4131,  4135,  4139,
    4147,  4155,  4159,  4163,  4167,  4171,  4175,  4183,  4184,  4188,
    4189,  4195,  4201,  4213,  4231,  4232,  4241,  4262,  4283,  4284,
    4288,  4289,  4292,  4293,  4299,  4300,  4307,  4308,  4315,  4339,
    4340,  4357,  4358,  4361,  4362,  4369,  4370,  4375,  4386,  4397,
    4404,  4406,  4407,  4419,  4430,  4459,  4458,  4467,  4468,  4472,
    4473,  4476,  4477,  4490,  4503,  4524,  4533,  4547,  4549,  4548,
    4568,  4570,  4569,  4585,  4587,  4586,  4597,  4598,  4605,  4604,
    4633,  4634,  4635,  4642,  4648,  4652,  4653,  4659,  4666,  4667,
    4668,  4672,  4679,  4680,  4684,  4694,  4734,  4744,  4754,  4773,
    4774,  4777,  4778,  4783,  4784,  4785,  4786,  4787,  4788,  4800,
    4811,  4822,  4833,  4844,  4854,  4855,  4860,  4859,  4880,  4881,
    4885,  4886,  4887,  4888,  4889,  4890,  4891,  4892,  4893,  4894,
    4895,  4896,  4897,  4898,  4899,  4900,  4904,  4911,  4915,  4919,
    4920,  4921,  4928,  4932,  4939,  4942,  4947,  4953,  4960,  4963,
    4968,  4972,  4980,  4987,  4996,  5001,  5006,  5019,  5027,  5028,
    5029,  5036,  5040,  5047,  5052,  5058,  5065,  5071,  5081,  5085,
    5092,  5093,  5097,  5101,  5105,  5109,  5113,  5121,  5124,  5125,
    5129,  5135,  5139,  5154,  5171,  5172,  5173,  5177,  5203,  5218,
    5221,  5223,  5227,  5231,  5235,  5242,  5262,  5266,  5267,  5271,
    5303,  5311,  5319,  5327,  5329,  5328,  5349,  5350,  5354,  5355,
    5360,  5362,  5361,  5418,  5436,  5437,  5441,  5445,  5449,  5453,
    5457,  5461,  5465,  5469,  5473,  5477,  5481,  5485,  5489,  5493,
    5497,  5501,  5505,  5510,  5514,  5518,  5523,  5528,  5533,  5538,
    5539,  5540,  5541,  5542,  5543,  5544,  5545,  5546,  5553,  5558,
    5567,  5568,  5572,  5573,  5578,  5581,  5585,  5593,  5596,  5600,
    5608,  5619,  5627,  5629,  5639,  5628,  5666,  5666,  5699,  5703,
    5702,  5716,  5715,  5735,  5736,  5741,  5748,  5750,  5754,  5764,
    5766,  5774,  5782,  5790,  5819,  5850,  5852,  5862,  5867,  5894,
    5896,  5895,  5932,  5933,  5937,  5938,  5939,  5956,  5957,  5968,
    5967,  6017,  6018,  6022,  6070,  6083,  6086,  6105,  6110,  6104,
    6123,  6123,  6153,  6160,  6161,  6162,  6163,  6164,  6165,  6166,
    6167,  6168,  6169,  6170,  6171,  6172,  6173,  6174,  6175,  6176,
    6177,  6178,  6179,  6180,  6181,  6182,  6183,  6184,  6185,  6186,
    6187,  6188,  6189,  6190,  6191,  6192,  6193,  6194,  6195,  6196,
    6197,  6198,  6199,  6200,  6201,  6202,  6203,  6204,  6205,  6206,
    6207,  6208,  6209,  6223,  6235,  6234,  6250,  6256,  6260,  6264,
    6269,  6274,  6279,  6284,  6288,  6292,  6296,  6300,  6305,  6309,
    6313,  6317,  6321,  6325,  6329,  6336,  6337,  6344,  6345,  6349,
    6350,  6354,  6355,  6356,  6357,  6358,  6362,  6366,  6367,  6370,
    6371,  6374,  6375,  6381,  6382,  6386,  6387,  6391,  6395,  6401,
    6405,  6409,  6413,  6417,  6421,  6425,  6429,  6433,  6437,  6441,
    6445,  6449,  6453,  6457,  6461,  6465,  6471,  6475,  6479,  6483,
    6487,  6491,  6495,  6502,  6503,  6507,  6511,  6529,  6528,  6537,
    6541,  6545,  6551,  6552,  6559,  6563,  6574,  6573,  6582,  6586,
    6598,  6599,  6607,  6606,  6615,  6616,  6620,  6626,  6626,  6633,
    6632,  6642,  6662,  6666,  6671,  6676,  6697,  6701,  6700,  6717,
    6718,  6723,  6731,  6755,  6757,  6761,  6770,  6783,  6786,  6790,
    6794,  6817,  6818,  6822,  6823,  6828,  6831,  6839,  6843,  6851,
    6855,  6866,  6865,  6873,  6877,  6888,  6887,  6895,  6900,  6908,
    6909,  6910,  6911,  6912,  6920,  6919,  6928,  6935,  6939,  6949,
    6960,  6978,  6977,  6986,  6990,  6994,  6999,  7007,  7011,  7022,
    7021,  7031,  7035,  7039,  7043,  7047,  7051,  7052,  7061,  7063,
    7062,  7070,  7079,  7086,  7090,  7094,  7098,  7108,  7110,  7114,
    7115,  7118,  7120,  7127,  7128,  7132,  7133,  7138,  7142,  7146,
    7150,  7154,  7158,  7162,  7166,  7170,  7174,  7178,  7182,  7186,
    7190,  7194,  7198,  7205,  7209,  7220,  7219,  7228,  7232,  7236,
    7240,  7244,  7251,  7255,  7266,  7265,  7274,  7293,  7292,  7316,
    7324,  7325,  7330,  7341,  7352,  7366,  7370,  7377,  7378,  7383,
    7392,  7401,  7406,  7415,  7416,  7421,  7483,  7484,  7485,  7489,
    7490,  7494,  7498,  7509,  7508,  7520,  7521,  7542,  7556,  7578,
    7600,  7620,  7643,  7644,  7652,  7651,  7660,  7671,  7670,  7679,
    7692,  7691,  7704,  7713,  7717,  7728,  7744,  7743,  7752,  7756,
    7760,  7767,  7771,  7782,  7781,  7789,  7797,  7798,  7802,  7803,
    7804,  7809,  7812,  7819,  7823,  7831,  7838,  7839,  7840,  7841,
    7842,  7843,  7844,  7849,  7852,  7862,  7861,  7869,  7876,  7889,
    7888,  7897,  7901,  7905,  7909,  7916,  7917,  7918,  7919,  7926,
    7925,  7939,  7949,  7958,  7959,  7963,  7964,  7965,  7966,  7967,
    7968,  7972,  7973,  7977,  7982,  7989,  7990,  7991,  7992,  7993,
    7997,  8025,  8028,  8035,  8039,  8049,  8048,  8061,  8060,  8068,
    8072,  8083,  8082,  8091,  8095,  8102,  8106,  8117,  8116,  8124,
    8145,  8169,  8170,  8171,  8172,  8176,  8177,  8181,  8182,  8183,
    8184,  8196,  8195,  8206,  8212,  8211,  8222,  8230,  8238,  8245,
    8249,  8262,  8269,  8281,  8284,  8289,  8293,  8304,  8311,  8312,
    8316,  8317,  8320,  8321,  8326,  8366,  8365,  8374,  8401,  8402,
    8407,  8410,  8414,  8418,  8422,  8426,  8430,  8437,  8438,  8442,
    8443,  8447,  8451,  8461,  8472,  8471,  8479,  8489,  8500,  8499,
    8508,  8515,  8519,  8530,  8529,  8541,  8550,  8553,  8557,  8564,
    8568,  8578,  8590,  8589,  8598,  8602,  8611,  8612,  8617,  8620,
    8628,  8632,  8639,  8647,  8651,  8662,  8661,  8675,  8676,  8677,
    8678,  8679,  8680,  8684,  8685,  8689,  8690,  8696,  8705,  8712,
    8713,  8717,  8721,  8725,  8729,  8733,  8737,  8741,  8745,  8754,
    8758,  8767,  8776,  8777,  8781,  8790,  8791,  8795,  8799,  8810,
    8809,  8818,  8817,  8848,  8851,  8871,  8872,  8875,  8876,  8884,
    8885,  8890,  8895,  8905,  8921,  8926,  8936,  8953,  8952,  8962,
    8975,  8978,  8986,  8989,  8994,  8999,  9007,  9008,  9009,  9010,
    9011,  9012,  9016,  9024,  9025,  9029,  9033,  9044,  9043,  9053,
    9066,  9069,  9073,  9081,  9093,  9096,  9103,  9104,  9105,  9106,
    9113,  9112,  9121,  9128,  9129,  9133,  9134,  9135,  9139,  9140,
    9144,  9148,  9159,  9158,  9167,  9171,  9175,  9182,  9186,  9196,
    9207,  9208,  9215,  9214,  9222,  9230,  9243,  9242,  9250,  9264,
    9263,  9271,  9284,  9286,  9287,  9295,  9294,  9303,  9311,  9312,
    9317,  9318,  9323,  9330,  9331,  9336,  9343,  9344,  9348,  9349,
    9353,  9354,  9358,  9362,  9373,  9372,  9381,  9382,  9383,  9384,
    9385,  9389,  9416,  9419,  9431,  9441,  9446,  9451,  9456,  9464,
    9502,  9503,  9507,  9547,  9557,  9580,  9581,  9582,  9583,  9587,
    9596,  9602,  9612,  9643,  9652,  9653,  9660,  9659,  9671,  9681,
    9682,  9687,  9690,  9694,  9698,  9705,  9706,  9710,  9711,  9715,
    9719,  9731,  9734,  9735,  9744,  9745,  9754,  9757,  9758,  9767,
    9768,  9779,  9782,  9783,  9792,  9793,  9805,  9808,  9810,  9820,
    9821,  9833,  9834,  9838,  9839,  9840,  9844,  9853,  9864,  9865,
    9866,  9870,  9879,  9890,  9895,  9896,  9905,  9906,  9917,  9921,
    9931,  9938,  9945,  9945,  9955,  9956,  9957,  9961,  9970,  9971,
    9973,  9974,  9975,  9976,  9977,  9979,  9980,  9981,  9982,  9983,
    9984,  9986,  9987,  9988,  9990,  9991,  9992,  9993,  9994,  9997,
    9998, 10002, 10003, 10007, 10008, 10012, 10013, 10017, 10021, 10027,
   10031, 10037, 10038, 10039, 10043, 10044, 10045, 10049, 10050, 10051,
   10055, 10059, 10063, 10064, 10065, 10068, 10069, 10079, 10091, 10100,
   10116, 10125, 10141, 10156, 10157, 10162, 10171, 10177, 10197, 10201,
   10222, 10263, 10277, 10278, 10283, 10289, 10290, 10295, 10307, 10308,
   10309, 10316, 10327, 10328, 10332, 10340, 10348, 10352, 10359, 10368,
   10369, 10375, 10389, 10406, 10410, 10417, 10418, 10419, 10426, 10430,
   10437, 10438, 10439, 10440, 10441, 10445, 10449, 10453, 10457, 10461,
   10482, 10486, 10493, 10494, 10495, 10499, 10500, 10501, 10502, 10503,
   10507, 10511, 10518, 10519, 10523, 10524, 10528, 10529, 10533, 10534,
   10545, 10546, 10550, 10551, 10552, 10556, 10557, 10558, 10565, 10566,
   10570, 10571, 10575, 10576, 10577, 10583, 10587, 10591, 10592, 10596,
   10600, 10607, 10614, 10621, 10631, 10635, 10642, 10652, 10662, 10672,
   10685, 10689, 10697, 10705, 10709, 10719, 10734, 10757, 10777, 10784,
   10800, 10801, 10802, 10803, 10804, 10805, 10809, 10813, 10830, 10834,
   10841, 10842, 10843, 10844, 10845, 10846, 10847, 10853, 10857, 10861,
   10865, 10869, 10873, 10877, 10881, 10885, 10889, 10896, 10897, 10901,
   10902, 10903, 10907, 10908, 10909, 10910, 10911, 10912, 10916, 10920,
   10924, 10931, 10935, 10939, 10946, 10953, 10960, 10970, 10977, 10987,
   10994, 11006, 11014, 11015, 11019, 11020, 11024, 11025, 11030, 11033,
   11041, 11044, 11051, 11053, 11054, 11058, 11059, 11063, 11064, 11065,
   11070, 11073, 11086, 11090, 11098, 11102, 11106, 11110, 11114, 11118,
   11122, 11126, 11133, 11134, 11140, 11141, 11142, 11143, 11144, 11145,
   11146, 11147, 11148, 11149, 11150, 11151, 11152, 11153, 11154, 11155,
   11156, 11157, 11158, 11159, 11160, 11161, 11162, 11163, 11164, 11165,
   11166, 11167, 11168, 11169, 11170, 11171, 11172, 11173, 11174, 11175,
   11176, 11177, 11178, 11179, 11180, 11181, 11182, 11183, 11184, 11185,
   11186, 11187, 11188, 11189, 11190, 11191, 11192, 11193, 11194, 11195,
   11196, 11197, 11198, 11199, 11200, 11201, 11202, 11203, 11204, 11205,
   11206, 11207, 11208, 11209, 11216, 11216, 11217, 11217, 11218, 11218,
   11219, 11219, 11220, 11220, 11221, 11221, 11222, 11222, 11223, 11223,
   11224, 11224, 11225, 11225, 11226, 11226, 11227, 11227, 11228, 11228,
   11229, 11229, 11230, 11230, 11231, 11231, 11232, 11232, 11232, 11233,
   11233, 11234, 11234, 11235, 11235, 11236, 11236, 11237, 11237, 11237,
   11238, 11238, 11239, 11239, 11239, 11240, 11240, 11240, 11241, 11241,
   11242, 11242, 11243, 11243, 11244, 11244, 11245, 11245, 11245, 11246,
   11246, 11247, 11247, 11248, 11248, 11248, 11249, 11249, 11249, 11249,
   11250, 11250, 11251, 11251, 11252, 11252, 11253, 11253, 11254, 11254,
   11255, 11255, 11256, 11256, 11257, 11257, 11257, 11258, 11258, 11259,
   11259, 11260, 11260, 11261, 11261, 11262, 11262, 11263, 11263, 11264,
   11264, 11265, 11265, 11265, 11266, 11266, 11267, 11267, 11268, 11268,
   11269, 11269, 11273, 11273, 11274, 11274, 11275, 11275, 11276, 11276,
   11277, 11277, 11278, 11278, 11279, 11279, 11280, 11280, 11281, 11281,
   11282, 11282, 11283, 11283, 11284, 11284, 11285, 11285, 11286, 11286,
   11287, 11287, 11288, 11288, 11289, 11289, 11292, 11293, 11294, 11298,
   11298, 11299, 11299, 11300, 11300, 11301, 11301, 11302, 11302, 11303,
   11303, 11304, 11304, 11305, 11305
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
  "numvalc_args", "locale_dt_args", "not_const_word", "flag_all",
  "flag_duplicates", "flag_initialized", "flag_initialized_to",
  "to_init_val", "flag_next", "flag_not", "flag_optional", "flag_rounded",
  "round_mode", "round_choice", "flag_separate", "error_stmt_recover",
  "_advancing", "_after", "_are", "_area", "_as", "_at", "_binary", "_by",
  "_character", "_characters", "_contains", "_data", "_file", "_for",
  "_from", "_in", "_in_order", "_indicate", "_initial", "_into", "_is",
  "_is_are", "_key", "_line_or_lines", "_limits", "_lines", "_mode",
  "_new", "_number", "_numbers", "_of", "_on", "_on_for", "_onoff_status",
  "_other", "_procedure", "_program", "_record", "_right", "_sign",
  "_signed", "_sign_is", "_size", "_standard", "_status", "_tape", "_then",
  "_times", "_to", "_to_using", "_when", "_when_set_to", "_with",
  "rel_record", "coll_sequence", "column_or_col", "columns_or_cols",
  "column_or_cols", "comp_equal", "exception_or_error",
  "exception_or_overflow", "in_of", "label_option", "line_or_lines",
  "lock_records", "object_char_or_word", "records", "reel_or_unit",
  "scroll_line_or_lines", "size_or_length", "with_dups",
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
     765,   766,   767,   768,   769,   770,   771,   772
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   518,   520,   519,   521,   521,   522,   522,   523,   523,
     525,   524,   526,   527,   528,   529,   529,   529,   530,   530,
     531,   532,   532,   533,   535,   536,   537,   534,   539,   538,
     540,   541,   541,   542,   542,   543,   543,   544,   544,   544,
     544,   545,   545,   546,   546,   547,   547,   548,   548,   549,
     549,   549,   549,   549,   551,   550,   552,   552,   553,   553,
     555,   554,   556,   556,   556,   556,   557,   557,   558,   558,
     558,   558,   559,   560,   561,   562,   563,   563,   563,   563,
     564,   564,   566,   565,   567,   567,   567,   568,   568,   569,
     569,   569,   570,   570,   571,   571,   572,   572,   573,   574,
     574,   575,   575,   576,   576,   576,   576,   576,   576,   576,
     576,   576,   576,   576,   576,   578,   577,   579,   579,   579,
     579,   580,   580,   581,   581,   583,   582,   584,   584,   584,
     584,   584,   584,   585,   585,   586,   586,   587,   586,   588,
     588,   589,   589,   589,   589,   589,   589,   590,   590,   591,
     592,   592,   593,   594,   594,   595,   596,   596,   597,   597,
     598,   599,   599,   600,   600,   601,   602,   603,   603,   604,
     605,   606,   607,   608,   609,   610,   610,   611,   611,   612,
     612,   613,   613,   615,   614,   614,   616,   616,   617,   617,
     617,   617,   617,   617,   617,   617,   617,   617,   617,   617,
     617,   618,   618,   618,   618,   618,   619,   619,   619,   619,
     620,   620,   621,   621,   621,   622,   622,   623,   623,   623,
     624,   625,   625,   625,   626,   626,   627,   627,   627,   628,
     629,   630,   630,   630,   632,   631,   633,   633,   633,   634,
     634,   634,   634,   635,   635,   636,   636,   636,   636,   637,
     638,   639,   639,   640,   640,   642,   641,   641,   643,   644,
     645,   646,   646,   647,   648,   648,   648,   649,   649,   649,
     650,   650,   651,   651,   652,   653,   653,   653,   653,   655,
     654,   656,   656,   657,   658,   658,   659,   659,   660,   660,
     661,   661,   662,   664,   663,   663,   665,   665,   666,   666,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   668,   669,   669,   669,   670,   670,   670,   671,   671,
     672,   672,   673,   673,   674,   675,   675,   676,   676,   677,
     677,   678,   679,   680,   680,   681,   681,   681,   682,   683,
     684,   685,   686,   687,   688,   688,   689,   689,   690,   691,
     690,   692,   693,   692,   694,   694,   694,   695,   696,   695,
     695,   697,   698,   698,   698,   699,   700,   700,   701,   701,
     701,   701,   702,   702,   702,   702,   702,   702,   702,   702,
     702,   702,   702,   702,   702,   703,   703,   704,   704,   705,
     705,   705,   706,   706,   707,   708,   708,   709,   709,   710,
     710,   710,   710,   710,   710,   710,   710,   710,   710,   710,
     710,   710,   710,   711,   712,   713,   713,   714,   715,   716,
     716,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   718,   718,   719,
     719,   720,   720,   721,   722,   722,   723,   723,   724,   724,
     725,   725,   726,   726,   727,   727,   728,   728,   729,   730,
     730,   731,   731,   732,   732,   733,   733,   734,   735,   736,
     737,   737,   737,   738,   739,   741,   740,   742,   742,   743,
     743,   744,   744,   745,   745,   746,   746,   747,   748,   747,
     749,   750,   749,   751,   752,   751,   753,   753,   755,   754,
     756,   756,   756,   757,   757,   757,   757,   758,   759,   759,
     759,   760,   761,   761,   762,   763,   764,   764,   764,   765,
     765,   766,   766,   767,   767,   767,   767,   767,   767,   768,
     769,   770,   771,   772,   773,   773,   775,   774,   776,   776,
     777,   777,   777,   777,   777,   777,   777,   777,   777,   777,
     777,   777,   777,   777,   777,   777,   778,   779,   779,   779,
     779,   779,   779,   779,   780,   780,   780,   780,   781,   781,
     781,   781,   782,   783,   783,   783,   783,   784,   785,   785,
     785,   786,   786,   787,   787,   787,   787,   787,   788,   788,
     789,   789,   790,   790,   790,   791,   792,   793,   794,   794,
     795,   795,   795,   795,   796,   796,   796,   797,   798,   799,
     800,   800,   801,   801,   801,   802,   802,   803,   803,   804,
     805,   806,   807,   808,   809,   808,   810,   810,   811,   811,
     812,   813,   812,   812,   814,   814,   815,   815,   815,   815,
     815,   815,   815,   815,   815,   815,   815,   815,   815,   815,
     815,   815,   815,   815,   815,   815,   815,   815,   815,   815,
     815,   815,   815,   815,   815,   815,   815,   815,   815,   815,
     816,   816,   817,   817,   818,   818,   818,   819,   819,   819,
     820,   821,   822,   823,   824,   822,   825,   822,   826,   827,
     826,   828,   826,   829,   829,   830,   831,   831,   831,   832,
     832,   832,   832,   832,   832,   833,   833,   834,   834,   835,
     836,   835,   837,   837,   838,   838,   838,   838,   838,   840,
     839,   841,   841,   842,   843,   844,   844,   846,   847,   845,
     849,   848,   848,   850,   850,   850,   850,   850,   850,   850,
     850,   850,   850,   850,   850,   850,   850,   850,   850,   850,
     850,   850,   850,   850,   850,   850,   850,   850,   850,   850,
     850,   850,   850,   850,   850,   850,   850,   850,   850,   850,
     850,   850,   850,   850,   850,   850,   850,   850,   850,   850,
     850,   850,   850,   850,   852,   851,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   853,   853,   853,   853,   853,
     853,   853,   853,   853,   853,   854,   854,   855,   855,   856,
     856,   857,   857,   857,   857,   857,   858,   859,   859,   860,
     860,   861,   861,   862,   862,   863,   863,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   865,   865,   866,   866,   868,   867,   869,
     869,   869,   870,   870,   871,   871,   873,   872,   874,   874,
     875,   875,   877,   876,   878,   878,   879,   880,   880,   882,
     881,   883,   884,   884,   884,   884,   885,   886,   885,   887,
     887,   888,   888,   889,   889,   889,   889,   890,   890,   890,
     890,   891,   891,   892,   892,   893,   893,   894,   894,   895,
     895,   897,   896,   898,   898,   900,   899,   901,   901,   902,
     902,   902,   902,   902,   904,   903,   905,   906,   906,   907,
     908,   910,   909,   911,   911,   912,   912,   913,   913,   915,
     914,   916,   916,   916,   916,   916,   916,   916,   917,   918,
     917,   919,   920,   920,   920,   920,   920,   921,   921,   922,
     922,   923,   923,   924,   924,   925,   925,   926,   926,   926,
     926,   926,   926,   926,   926,   926,   926,   926,   926,   926,
     926,   926,   926,   927,   927,   929,   928,   930,   930,   930,
     930,   930,   931,   931,   933,   932,   934,   936,   935,   937,
     938,   938,   939,   939,   939,   940,   940,   941,   941,   942,
     943,   944,   944,   945,   945,   946,   946,   946,   946,   947,
     947,   948,   948,   950,   949,   951,   951,   951,   951,   951,
     951,   951,   952,   952,   954,   953,   955,   957,   956,   958,
     960,   959,   961,   962,   962,   963,   965,   964,   966,   966,
     966,   967,   967,   969,   968,   970,   971,   971,   972,   972,
     972,   973,   973,   974,   974,   975,   976,   976,   976,   976,
     976,   976,   976,   977,   977,   979,   978,   980,   980,   982,
     981,   983,   984,   984,   984,   985,   985,   985,   985,   987,
     986,   988,   989,   990,   990,   991,   991,   991,   991,   991,
     991,   992,   992,   993,   993,   994,   994,   994,   994,   994,
     995,   996,   996,   997,   997,   999,   998,  1001,  1000,  1002,
    1002,  1004,  1003,  1005,  1005,  1006,  1006,  1008,  1007,  1009,
    1009,  1010,  1010,  1010,  1010,  1011,  1011,  1012,  1012,  1012,
    1012,  1014,  1013,  1015,  1016,  1015,  1015,  1017,  1017,  1018,
    1018,  1019,  1019,  1020,  1020,  1020,  1020,  1020,  1021,  1021,
    1022,  1022,  1023,  1023,  1024,  1026,  1025,  1027,  1028,  1028,
    1029,  1029,  1029,  1029,  1029,  1029,  1029,  1030,  1030,  1031,
    1031,  1032,  1032,  1033,  1035,  1034,  1036,  1037,  1039,  1038,
    1040,  1041,  1041,  1043,  1042,  1044,  1045,  1045,  1045,  1046,
    1046,  1047,  1049,  1048,  1050,  1050,  1051,  1051,  1052,  1052,
    1053,  1053,  1054,  1055,  1055,  1057,  1056,  1058,  1058,  1058,
    1058,  1058,  1058,  1059,  1059,  1060,  1060,  1061,  1062,  1063,
    1063,  1064,  1064,  1064,  1064,  1064,  1064,  1064,  1064,  1065,
    1065,  1066,  1067,  1067,  1068,  1069,  1069,  1070,  1070,  1072,
    1071,  1074,  1073,  1075,  1075,  1076,  1076,  1077,  1077,  1078,
    1078,  1079,  1079,  1079,  1080,  1080,  1080,  1082,  1081,  1083,
    1084,  1084,  1085,  1085,  1085,  1085,  1086,  1086,  1086,  1086,
    1086,  1086,  1087,  1088,  1088,  1089,  1089,  1091,  1090,  1090,
    1092,  1092,  1092,  1092,  1093,  1093,  1094,  1094,  1094,  1094,
    1096,  1095,  1097,  1098,  1098,  1099,  1099,  1099,  1100,  1100,
    1101,  1101,  1103,  1102,  1104,  1104,  1104,  1105,  1105,  1106,
    1107,  1107,  1109,  1108,  1110,  1110,  1112,  1111,  1113,  1115,
    1114,  1116,  1117,  1117,  1117,  1119,  1118,  1120,  1121,  1121,
    1122,  1122,  1123,  1124,  1124,  1125,  1126,  1126,  1127,  1127,
    1128,  1128,  1129,  1129,  1131,  1130,  1132,  1132,  1132,  1132,
    1132,  1133,  1134,  1134,  1135,  1135,  1135,  1135,  1135,  1136,
    1137,  1137,  1138,  1138,  1138,  1139,  1139,  1139,  1139,  1140,
    1141,  1141,  1142,  1143,  1144,  1144,  1146,  1145,  1147,  1148,
    1148,  1149,  1149,  1149,  1149,  1150,  1150,  1151,  1151,  1152,
    1152,  1153,  1154,  1154,  1155,  1155,  1156,  1157,  1157,  1158,
    1158,  1159,  1160,  1160,  1161,  1161,  1162,  1163,  1163,  1164,
    1164,  1165,  1165,  1166,  1166,  1166,  1167,  1168,  1169,  1169,
    1169,  1170,  1171,  1172,  1173,  1173,  1174,  1174,  1175,  1175,
    1176,  1177,  1179,  1178,  1180,  1180,  1180,  1181,  1181,  1181,
    1181,  1181,  1181,  1181,  1181,  1181,  1181,  1181,  1181,  1181,
    1181,  1181,  1181,  1181,  1181,  1181,  1181,  1181,  1181,  1181,
    1181,  1182,  1182,  1183,  1183,  1184,  1184,  1185,  1186,  1187,
    1187,  1188,  1188,  1188,  1189,  1189,  1189,  1190,  1190,  1190,
    1191,  1191,  1192,  1192,  1192,  1193,  1193,  1194,  1194,  1194,
    1194,  1194,  1194,  1195,  1195,  1196,  1197,  1198,  1199,  1199,
    1200,  1201,  1202,  1202,  1203,  1204,  1204,  1205,  1206,  1206,
    1206,  1207,  1208,  1208,  1209,  1210,  1211,  1211,  1212,  1213,
    1213,  1214,  1215,  1216,  1216,  1217,  1217,  1217,  1218,  1218,
    1219,  1219,  1219,  1219,  1219,  1219,  1219,  1219,  1219,  1219,
    1220,  1220,  1221,  1221,  1221,  1222,  1222,  1222,  1222,  1222,
    1222,  1222,  1223,  1223,  1224,  1224,  1225,  1225,  1226,  1226,
    1227,  1227,  1228,  1228,  1228,  1229,  1229,  1229,  1230,  1230,
    1231,  1231,  1232,  1232,  1232,  1233,  1234,  1235,  1235,  1236,
    1237,  1237,  1237,  1237,  1238,  1238,  1239,  1239,  1239,  1239,
    1240,  1240,  1241,  1242,  1242,  1243,  1244,  1245,  1245,  1246,
    1246,  1246,  1246,  1246,  1246,  1246,  1247,  1247,  1248,  1248,
    1249,  1249,  1249,  1249,  1249,  1249,  1249,  1250,  1250,  1250,
    1250,  1250,  1250,  1250,  1250,  1250,  1250,  1251,  1251,  1252,
    1252,  1252,  1253,  1253,  1253,  1253,  1253,  1253,  1254,  1254,
    1254,  1255,  1255,  1255,  1256,  1256,  1256,  1257,  1257,  1258,
    1258,  1259,  1260,  1260,  1261,  1261,  1262,  1262,  1263,  1263,
    1264,  1264,  1265,  1265,  1265,  1266,  1266,  1267,  1267,  1267,
    1268,  1268,  1269,  1269,  1270,  1270,  1270,  1270,  1270,  1270,
    1270,  1270,  1271,  1271,  1272,  1272,  1272,  1272,  1272,  1272,
    1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,
    1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,
    1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,
    1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,
    1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,
    1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,  1272,
    1272,  1272,  1272,  1272,  1273,  1273,  1274,  1274,  1275,  1275,
    1276,  1276,  1277,  1277,  1278,  1278,  1279,  1279,  1280,  1280,
    1281,  1281,  1282,  1282,  1283,  1283,  1284,  1284,  1285,  1285,
    1286,  1286,  1287,  1287,  1288,  1288,  1289,  1289,  1289,  1290,
    1290,  1291,  1291,  1292,  1292,  1293,  1293,  1294,  1294,  1294,
    1295,  1295,  1296,  1296,  1296,  1297,  1297,  1297,  1298,  1298,
    1299,  1299,  1300,  1300,  1301,  1301,  1302,  1302,  1302,  1303,
    1303,  1304,  1304,  1305,  1305,  1305,  1306,  1306,  1306,  1306,
    1307,  1307,  1308,  1308,  1309,  1309,  1310,  1310,  1311,  1311,
    1312,  1312,  1313,  1313,  1314,  1314,  1314,  1315,  1315,  1316,
    1316,  1317,  1317,  1318,  1318,  1319,  1319,  1320,  1320,  1321,
    1321,  1322,  1322,  1322,  1323,  1323,  1324,  1324,  1325,  1325,
    1326,  1326,  1327,  1327,  1328,  1328,  1329,  1329,  1330,  1330,
    1331,  1331,  1332,  1332,  1333,  1333,  1334,  1334,  1335,  1335,
    1336,  1336,  1337,  1337,  1338,  1338,  1339,  1339,  1340,  1340,
    1341,  1341,  1342,  1342,  1343,  1343,  1344,  1344,  1344,  1345,
    1345,  1346,  1346,  1347,  1347,  1348,  1348,  1349,  1349,  1350,
    1350,  1351,  1351,  1352,  1352
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
       0,   175,     0,    17,    12,    19,    15,     0,    34,    30,
    1825,    46,     0,     0,     0,  1870,  1825,  1825,  1825,     0,
       0,     0,     0,     0,  1825,     0,     0,  1802,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1826,     0,     0,  1551,   125,  1825,
    1825,  1871,  1825,     0,     0,     0,     0,  1825,  1825,    60,
      82,     0,    54,    98,  1803,     0,  1825,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1864,    39,  1825,     0,     0,     0,  1620,   171,  1544,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1552,
     152,   153,  1827,   156,  1625,  1244,  1243,   116,   120,  1856,
    1825,     0,   100,   151,   178,   179,    38,  1865,    36,     0,
    1633,  1629,  1634,  1632,  1630,  1635,  1631,   160,   161,   163,
     172,   167,  1916,  1917,     0,   165,     0,  1801,     0,     0,
       0,  1825,  1938,    80,    61,  1800,    66,    68,    69,    70,
      71,  1800,     0,  1825,     0,    83,     0,    87,    55,    58,
     154,  1829,  1828,   157,     0,  1856,  1859,  1858,     0,     0,
     117,   121,     0,     0,   267,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1899,   166,     0,  1621,   170,  1937,  1825,
       0,     0,    65,    67,    63,    81,  1800,  1825,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1626,
     155,   158,     0,  1857,   123,   118,   119,   122,   180,     0,
       0,  1698,     0,   279,   275,    24,     0,   270,   272,   273,
     134,   137,     0,   164,     0,     0,  1936,    74,    64,     0,
    1545,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1699,   183,  1808,   276,   277,   278,  1790,
     286,     0,   268,   271,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1809,  1883,  1791,  1810,
       0,   288,   269,   138,   139,  1924,  1925,    72,  1866,  1884,
    1804,  1811,     0,     0,     0,   290,     0,  1840,  1900,  1891,
       0,   245,     0,  1825,  1800,  1830,   247,     0,  1903,  1898,
     233,   184,   232,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   244,   195,   196,   197,   198,   199,   200,
    1796,  1825,  1805,     0,  1530,   274,  1528,   287,     0,    25,
     140,  1841,  1825,  1901,  1830,  1892,  1893,   212,  1902,   248,
    1866,  1825,  1825,  1831,  1825,  1825,   261,  1790,   262,     0,
    1825,  1840,  1797,     0,     0,   280,   281,   284,  1529,   289,
     296,   297,   348,   291,   351,     0,     0,  1825,   214,   213,
     210,  1867,   247,   243,     0,     0,     0,     0,   260,  1860,
    1860,     0,   263,     0,  1825,   246,   229,   282,     0,   283,
       0,   507,   292,  1681,     0,   293,   222,   223,   221,   220,
       0,   206,   207,   217,   217,     0,   217,   209,   208,   217,
       0,  1550,  1549,   249,   250,   251,   259,  1861,   264,   265,
     266,   230,     0,   285,     0,     0,   510,   353,     0,     0,
     357,     0,   295,   298,  1684,   218,   203,   219,   204,  1808,
     205,   202,   215,   201,   216,  1825,   253,   255,   239,   238,
     239,   235,   349,     0,     0,   513,   356,     0,   354,     0,
     363,   364,   358,     0,   361,  1825,  1935,     0,   255,   226,
    1685,   211,   254,   252,     0,     0,   237,   236,   351,   508,
       0,     0,   643,   355,   360,   397,   366,  1804,  1825,     0,
       0,  1825,  1804,  1840,  1825,  1788,   294,     0,   299,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,     0,
    1934,  1684,     0,   224,   257,   258,   256,     0,   242,   350,
     351,   511,     0,     0,    26,  1825,  1792,     0,     0,     0,
    1827,  1827,     0,     0,     0,     0,     0,  1825,   344,  1789,
     345,     0,   343,   346,   300,   301,   226,     0,     0,   509,
     351,   514,     0,   706,     0,   494,   421,  1872,  1872,  1872,
    1872,  1872,  1894,   422,   457,   459,   425,   426,   427,   428,
     429,   430,   453,   451,   452,   454,   455,   460,   458,   431,
    1868,   456,     0,   432,   418,   433,   434,     0,     0,  1875,
     436,   437,   435,   490,   439,   440,   438,  1825,  1827,   398,
     399,   400,   401,   402,   403,   419,   423,   424,   404,   405,
     406,   407,   408,   409,   410,   411,   412,     0,     0,  1793,
       0,   394,     0,   367,   322,   342,  1926,  1927,  1548,   331,
    1546,  1919,  1918,   324,  1838,  1802,  1814,     0,  1825,   328,
     327,  1825,   347,   225,     0,   147,   148,   228,     0,  1922,
    1923,   240,   512,   516,   644,     0,    27,   750,   505,   506,
    1873,   450,   449,   442,   441,   448,   447,   446,   445,   444,
     443,  1895,     0,  1869,   488,   474,   468,   413,  1613,   503,
    1876,   491,   492,   489,     0,     0,   415,   417,  1712,  1712,
     396,     0,  1849,  1644,     0,     0,  1640,  1645,  1643,  1641,
    1646,  1642,   395,   368,  1636,  1638,     0,   312,  1547,  1839,
     333,     0,   315,  1815,  1877,   341,     0,     0,   227,   241,
     515,   646,   708,     0,     0,   493,  1814,   470,     0,  1887,
       0,  1611,  1612,     0,   420,   495,   497,   499,     0,   414,
    1800,   461,   462,  1637,  1850,     0,     0,   377,   373,   376,
     375,   374,   389,   385,   387,   388,   390,   386,   391,   392,
     393,   370,   381,   382,   383,   378,   379,   380,   372,   369,
       0,   323,   314,   313,   311,   332,  1802,  1878,   320,   329,
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
    1888,   472,  1662,  1657,  1663,  1664,  1665,  1671,     0,  1517,
    1519,     0,     0,     0,  1660,     0,  1521,  1661,  1666,  1667,
       0,     0,     0,     0,  1659,  1671,  1658,  1501,  1499,  1506,
    1509,  1511,  1514,  1578,  1516,  1575,  1609,  1576,  1577,  1668,
       0,     0,     0,  1610,   504,   501,   498,     0,   416,  1713,
     371,   384,  1639,     0,     0,   334,   335,   336,   337,     0,
     316,  1813,   322,     0,  1531,   518,     0,   651,     0,   648,
     716,   716,     0,     0,  1715,  1716,  1717,  1718,  1719,  1720,
    1721,  1722,  1723,  1724,  1725,  1726,  1727,  1728,  1764,  1765,
    1766,  1767,  1768,  1769,  1770,  1771,  1772,  1773,  1774,  1775,
    1776,  1777,  1778,  1779,  1780,  1781,  1782,  1783,  1729,  1730,
    1731,  1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,  1740,
    1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,  1749,  1750,
    1751,  1752,  1753,  1754,  1755,  1756,  1757,  1758,  1759,  1714,
    1760,  1761,  1762,  1763,   803,     0,     0,     0,     0,   902,
       0,     0,     0,     0,     0,     0,     0,  1462,  1045,     0,
       0,  1889,   922,   921,     0,  1065,  1462,     0,     0,     0,
       0,     0,     0,   802,     0,  1173,     0,     0,     0,     0,
       0,     0,     0,     0,  1316,  1319,  1307,  1317,  1318,  1309,
       0,     0,  1341,  1339,     0,   750,     0,     0,     0,     0,
     475,   471,   476,  1851,   479,     0,  1655,  1579,  1580,  1581,
       0,     0,     0,     0,     0,     0,     0,  1513,     0,  1512,
       0,  1656,  1502,  1503,  1622,     0,     0,     0,     0,     0,
       0,     0,     0,  1647,     0,     0,     0,     0,   496,     0,
     500,   340,   339,  1794,  1802,   321,     0,   653,   654,   649,
    1799,   716,   713,   719,     0,   716,   728,   703,   826,   875,
     829,   825,  1849,     0,     0,  1569,   884,  1563,   882,  1558,
    1560,  1561,  1562,   887,     0,  1686,  1541,   893,   894,     0,
    1537,  1539,  1538,   905,   903,   904,   929,     0,  1591,   932,
     933,  1590,   936,   939,  1849,   947,  1615,     0,  1523,  1700,
    1555,  1614,  1619,  1556,     0,   957,  1866,  1640,  1003,  1427,
     968,   972,  1558,     0,  1560,  1012,     0,   906,  1015,  1024,
    1023,  1041,     0,  1020,  1022,  1461,     0,  1047,  1051,  1049,
    1052,  1050,  1044,  1055,  1056,  1553,  1058,  1059,  1890,  1061,
    1535,  1053,  1885,  1460,  1074,  1076,  1096,  1097,  1100,     0,
    1102,  1103,  1104,  1136,  1273,  1606,  1607,     0,  1138,     0,
    1145,     0,  1154,  1151,  1153,  1152,  1148,  1155,  1175,  1541,
    1162,  1173,  1164,     0,  1171,     0,  1592,  1538,  1594,     0,
    1201,  1692,  1205,  1409,  1526,  1211,  1866,  1219,  1409,     0,
    1233,  1226,  1527,     0,  1534,  1236,  1237,  1238,  1239,  1240,
    1241,  1262,  1242,  1265,     0,  1532,     0,     0,  1605,  1619,
    1270,  1305,  1292,  1310,  1798,  1330,     0,  1323,  1325,     0,
    1337,     0,  1343,  1344,   738,   744,   733,   734,   735,   737,
       0,  1347,     0,  1350,  1352,  1593,  1372,  1358,  1419,  1409,
     477,   479,  1852,     0,   483,   478,  1673,  1501,  1499,  1518,
    1520,  1501,     0,     0,     0,  1501,  1572,  1573,  1574,     0,
    1522,  1515,  1501,     0,  1500,  1623,     0,  1505,  1504,  1508,
    1507,  1510,     0,     0,  1501,     0,  1825,  1795,     0,   318,
       0,  1825,  1874,   714,  1825,     0,   725,   717,   718,   729,
     876,   805,  1795,   839,   830,     0,     0,     0,     0,  1564,
    1565,  1566,   885,   878,     0,     0,  1559,  1688,  1687,   890,
     895,   897,     0,   930,   900,   906,   934,   939,  1928,  1929,
     937,     0,   940,     0,   948,   945,  1911,  1910,  1524,     0,
    1702,  1525,  1617,  1618,   954,   955,   958,   952,  1454,  1004,
     960,   747,     0,   966,  1429,     0,   983,     0,   977,  1427,
    1427,  1427,  1427,  1013,  1006,     0,     0,   907,  1016,  1042,
    1018,  1462,  1462,  1019,  1026,  1027,   747,  1486,  1487,  1488,
    1482,  1889,  1474,  1494,  1497,  1496,  1498,  1490,  1481,  1480,
    1485,  1484,  1483,  1489,  1469,  1473,  1491,  1493,  1495,  1471,
    1472,  1468,  1470,  1463,  1464,  1475,  1476,  1477,  1478,  1479,
    1467,  1048,  1046,  1554,  1063,  1886,   747,  1078,     0,  1098,
       0,  1125,  1109,  1101,  1106,  1107,  1108,  1277,     0,  1608,
       0,     0,  1146,  1142,     0,  1155,  1898,     0,  1163,  1169,
    1170,   747,  1166,  1462,     0,     0,  1174,     0,  1202,  1186,
    1693,  1694,  1866,     0,  1206,  1212,  1209,  1188,  1220,  1214,
    1216,  1228,  1234,  1223,     0,  1228,     0,  1586,  1587,  1263,
    1266,     0,     0,  1533,  1246,     0,  1245,     0,     0,  1617,
    1306,  1288,  1294,  1825,  1295,  1290,     0,  1308,     0,     0,
    1331,  1321,     0,  1324,     0,  1338,  1333,     0,  1345,   745,
     743,   736,     0,  1353,  1354,  1351,  1373,  1356,  1798,     0,
    1420,  1407,  1411,   483,   473,  1798,   466,   481,   482,  1830,
    1672,     0,  1668,  1668,  1668,     0,  1651,     0,  1668,  1624,
       0,  1668,  1668,  1897,     0,   338,  1851,   317,   522,  1825,
    1827,  1827,  1835,   554,   521,   525,   526,     0,     0,   668,
    1825,   658,  1894,   659,  1905,  1904,     0,  1825,     0,   671,
     662,   667,  1844,   663,     0,   666,   673,   670,   664,   669,
       0,   674,   665,     0,   685,   679,   683,   682,   680,   684,
     655,   686,   681,     0,  1844,     0,  1825,   726,     0,     0,
     704,   835,   840,   841,  1844,  1844,   833,   834,  1844,   821,
    1422,  1907,  1906,   818,   810,   812,   813,     0,  1422,     0,
       0,     0,   827,   816,     0,   824,   807,   823,   808,  1583,
    1582,     0,  1568,     0,  1849,  1615,  1432,   883,  1619,  1556,
       0,  1690,   890,     0,   888,     0,     0,  1540,   917,   938,
     943,     0,     0,  1557,  1432,  1825,  1701,  1616,   956,   747,
     953,  1456,  1428,   748,   970,  1794,   747,  1426,   976,   975,
     974,   973,   984,  1427,  1825,   987,     0,   990,   991,     0,
    1825,   994,   995,   996,   997,     0,   998,  1427,   985,     0,
     841,   963,   964,   961,   962,     0,  1432,     0,   913,  1021,
    1036,  1038,  1037,  1031,  1033,  1039,  1462,  1028,  1025,  1462,
    1029,  1492,  1465,  1466,  1851,  1062,  1536,   747,  1070,  1071,
    1889,  1086,  1087,  1089,  1091,  1092,  1088,  1090,  1081,  1889,
    1077,     0,  1126,     0,  1128,  1127,  1129,  1111,  1121,     0,
       0,  1105,  1279,     0,  1816,     0,  1139,  1432,     0,     0,
       0,  1157,  1167,  1180,  1176,  1181,  1177,  1182,     0,  1172,
    1416,  1415,  1179,  1188,  1410,  1602,  1603,  1604,     0,     0,
    1454,     0,   747,     0,  1227,     0,     0,     0,  1264,     0,
    1268,  1267,  1260,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1248,  1249,  1695,  1454,     0,  1311,  1881,  1881,
    1326,  1327,  1328,     0,  1432,     0,     0,   746,     0,  1682,
       0,  1328,  1216,  1784,   467,     0,  1825,  1680,  1652,  1653,
    1654,  1678,  1675,  1676,  1650,  1669,     0,  1648,  1649,   502,
       0,     0,  1953,  1954,  1827,  1827,     0,   519,   523,   531,
     527,   529,   530,   532,   534,     0,   656,   657,   660,   661,
       0,   688,  1845,  1825,  1887,  1825,   689,   687,   701,  1825,
     720,   721,   724,     0,   715,   730,   732,  1825,   843,     0,
       0,   831,   832,     0,   747,   822,  1424,   809,   811,  1422,
     819,   814,   815,   828,   817,  1585,  1567,  1584,  1700,     0,
     747,   879,  1434,  1617,  1618,  1432,     0,  1689,   889,   891,
     898,   896,   925,  1823,   942,   941,   946,     0,  1455,   747,
    1453,   750,  1430,   965,     0,   988,   989,   992,   993,     0,
    1458,  1458,   986,   967,   979,   980,   978,   981,     0,  1007,
       0,   908,   909,   719,     0,  1462,  1462,  1035,   747,  1032,
       0,  1069,   747,  1072,  1067,     0,     0,  1093,     0,     0,
       0,  1122,  1124,     0,  1117,  1131,  1118,  1119,  1110,  1113,
    1131,  1271,  1825,  1830,     0,  1817,  1278,  1140,  1143,     0,
    1157,  1156,  1160,  1149,     0,  1168,  1165,     0,     0,  1190,
    1189,   747,  1210,  1442,  1215,  1217,     0,  1229,  1462,  1462,
    1224,  1230,  1247,  1259,  1261,  1251,  1252,  1253,  1257,  1254,
    1258,  1255,  1256,  1250,  1696,  1304,     0,  1301,  1302,  1296,
       0,  1289,  1933,  1932,     0,  1882,  1314,  1314,  1437,     0,
    1700,  1334,     0,   739,     0,  1683,  1359,  1360,     0,  1363,
    1366,  1370,  1364,  1454,  1785,     0,   487,   484,   485,     0,
    1670,   319,   524,  1836,  1837,  1627,  1628,   541,   536,   540,
     539,   362,   555,   528,   533,  1597,   678,  1595,  1596,   677,
     694,   700,     0,   697,   722,   723,   732,   750,     0,     0,
    1422,   836,   838,   837,  1423,   747,  1421,   820,  1432,  1557,
    1433,   747,  1431,  1616,   880,  1691,  1588,  1589,  1914,  1915,
     927,   747,  1849,  1824,   924,   923,   919,     0,  1704,  1705,
    1706,  1707,  1708,  1709,  1710,  1711,  1703,  1457,     0,  1000,
     999,  1002,     0,  1600,  1601,  1001,     0,   971,  1432,  1523,
    1432,  1523,   910,   911,     0,   915,   914,   916,  1034,  1040,
    1030,  1064,  1068,  1079,  1082,  1083,  1806,  1075,  1889,  1080,
    1131,  1131,     0,  1116,  1114,  1115,  1120,  1281,     0,  1275,
    1818,  1432,  1150,  1159,     0,  1183,     0,     0,  1197,     0,
    1446,   747,  1441,  1218,   747,   747,  1231,  1303,  1293,  1297,
    1298,  1299,  1300,  1291,  1312,  1315,  1313,   747,  1322,  1439,
    1825,  1432,  1432,   741,  1348,  1682,  1362,  1814,  1368,  1814,
    1437,   747,   747,  1408,  1418,  1449,  1450,  1417,  1414,  1413,
    1832,   486,   480,  1542,   535,  1920,  1921,   537,   364,   556,
     692,   690,   693,   691,   695,   696,     0,   672,   698,   699,
       0,   750,   842,   847,  1825,   849,   850,   851,   874,  1825,
     852,   853,   854,   855,   856,     0,   857,   858,   860,   861,
     862,     0,   863,   848,  1786,   864,   873,   867,   844,   845,
     866,   806,  1425,   881,  1435,   747,   901,   926,     0,   918,
    1930,  1931,  1459,   982,  1009,     0,  1008,     0,   912,  1084,
    1807,     0,     0,  1112,  1123,  1131,  1821,  1821,  1132,     0,
       0,  1284,  1280,  1274,  1144,  1158,     0,  1191,  1825,  1454,
       0,     0,  1192,     0,  1196,  1447,  1225,  1232,  1438,   747,
    1436,     0,  1336,  1335,  1374,   740,     0,  1361,     0,  1814,
    1365,     0,  1357,  1451,  1452,  1448,  1833,  1834,  1412,  1543,
       0,  1825,  1825,     0,  1825,   542,   543,   544,   545,   546,
     547,     0,   558,   675,   676,     0,     0,     0,   865,  1825,
    1458,  1458,  1787,     0,   846,   928,   920,  1432,  1432,     0,
    1094,  1130,  1822,     0,     0,  1825,  1282,     0,     0,  1272,
    1276,     0,     0,  1187,  1200,  1444,  1445,  1199,  1195,  1193,
    1194,  1440,  1329,  1382,   742,  1367,     0,  1371,  1940,  1939,
    1825,     0,     0,  1942,     0,  1825,  1825,     0,   538,  1874,
       0,   869,   868,     0,   871,   870,   872,  1598,  1599,  1011,
    1010,  1085,  1134,  1133,     0,  1285,  1825,  1462,  1198,  1443,
    1405,  1404,  1383,  1375,  1376,  1786,  1377,  1378,  1379,  1380,
    1403,     0,     0,  1369,     0,   553,   549,  1941,     0,     0,
     548,   609,  1819,   624,  1825,     0,   608,  1825,  1849,   557,
    1825,  1825,     0,   563,   565,   574,   566,   568,   571,   559,
     560,   561,   570,   572,     0,   575,   562,   618,   567,     0,
     569,   573,   564,  1908,  1909,  1846,   731,   859,  1283,     0,
    1184,     0,  1879,     0,  1851,   550,   552,   551,  1820,   641,
     626,   617,     0,   468,     0,     0,     0,     0,     0,  1842,
    1842,     0,  1462,     0,     0,   616,   618,   620,   627,     0,
     628,   636,   637,     0,   639,  1847,  1848,   630,  1286,     0,
    1880,     0,  1401,  1400,  1399,     0,   625,   596,     0,     0,
     592,   593,  1887,  1700,   598,  1570,  1944,     0,     0,  1946,
    1948,     0,  1952,  1950,   576,   581,  1853,  1853,   578,   582,
     577,   583,   642,     0,  1843,   610,   610,  1842,  1842,   603,
     622,   623,   619,   621,   638,   635,   634,   632,   633,  1827,
     631,  1402,  1913,  1912,  1862,  1395,  1389,  1390,  1392,   594,
     595,   472,   640,  1851,     0,   597,  1571,  1943,  1947,  1945,
    1951,  1949,  1855,  1854,   584,   588,     0,   614,   612,   604,
     610,   613,   606,     0,     0,   629,  1863,  1851,  1398,  1393,
    1396,     0,  1391,   464,     0,   600,   587,   579,   585,   591,
     590,   580,   589,     0,   611,   605,   607,     0,  1397,  1394,
       0,   463,   602,   599,   601,     0,   615,  1388,  1385,  1387,
    1386,  1381,  1384,   465,   586
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
     676,   677,   678,  2595,  2771,   679,   799,   968,  1174,   797,
    1411,  1414,  1415,  1679,  1676,  2187,  2188,   680,   681,   753,
     682,   683,   684,  1015,   805,   806,  1208,   685,   686,   496,
     590,   525,   620,   552,   723,   790,   854,  1216,  1451,  1704,
    1705,  1990,  1991,  1992,  1993,  1706,  2197,  2198,  2354,  2475,
    2476,  2477,  2478,  2479,  2480,  1987,  2202,  2482,  2539,  2599,
    2600,  2684,  2757,  2761,  2601,  2670,  2602,  2725,  2773,  2603,
    2604,  2739,  2740,  2605,  2606,  2607,  2645,  2646,  2631,  2647,
    2608,  2609,  2709,  2710,  2650,  2651,  2652,  2610,  2611,  2612,
     594,   791,   857,   858,   859,  1218,  1452,  1740,  2364,  2365,
    2366,  2370,  1741,  1742,   726,  1459,  2016,   727,   862,  1041,
    1040,  1221,  1222,  1223,  1456,  1748,  1043,  1750,  2216,  1165,
    1396,  1397,  2333,  2455,  1398,  1399,  1956,  1812,  1813,  2061,
    1400,   794,   915,   916,  1115,  1229,  1230,  1776,  1463,  1518,
    1756,  1757,  1753,  2018,  2220,  2398,  2399,  2400,  1461,   917,
    1116,  1236,  1475,  1473,   918,  1117,  1243,  1794,   919,  1118,
    1247,  1248,  1796,   920,  1119,  1256,  1257,  1528,  1848,  2081,
    2082,  2083,  2052,  1134,  2246,  2240,  2406,  1484,   921,  1120,
    1259,   922,  1121,  1262,  1490,   923,  1122,  1265,  1495,   924,
     925,   926,  1123,  1275,  1504,  1507,   927,  1124,  1278,  1279,
    1512,  1280,  1516,  1840,  2076,  2267,  1823,  1837,  1838,  1510,
     928,  1125,  1285,  1524,   929,  1126,  1288,   930,  1127,  1291,
    1292,  1293,  1533,  1534,  1535,  1858,  1536,  1853,  1854,  2087,
    1530,   931,  1128,  1302,  1135,   932,  1129,  1303,   933,  1130,
    1306,   934,  1131,  1309,  1865,   935,   936,  1136,  1869,  2094,
     937,  1137,  1314,  1577,  1878,  2097,  2284,  2285,  2286,  2287,
     938,  1138,  1316,   939,  1139,  1318,  1319,  1583,  1584,  1890,
    1585,  1586,  2108,  2109,  1887,  1888,  1889,  2102,  2293,  2428,
     940,  1140,   941,  1141,  1328,   942,  1142,  1330,  1593,   943,
    1144,  1336,  1337,  1597,  2123,   944,  1145,  1340,  1601,  2126,
    1602,  1341,  1342,  1343,  1904,  1906,  1907,   945,  1146,  1350,
    1919,  2308,  2439,  2513,  1609,   946,   947,  1147,  1352,   948,
     949,  1148,  1355,  1616,   950,  1149,  1357,  1920,  1619,   951,
     952,  1150,  1360,  1625,  1923,  2140,  2141,  1623,   953,  1151,
    1365,   159,  1637,  1366,  1367,  1942,  1943,  1368,  1369,  1370,
    1371,  1372,  1373,   954,  1152,  1323,  2297,  1587,  2433,  1892,
    2111,  2431,  2509,   955,  1153,  1381,  1945,  1645,  2156,  2157,
    2158,  1641,   956,  1383,  1647,  2324,  1159,   957,  1160,  1385,
    1386,  1387,  2168,  1651,   958,  1161,  1390,  1656,   959,  1163,
     960,  1164,  1392,   961,  1166,  1401,   962,  1167,  1403,  1665,
     963,  1168,  1406,  1669,  2176,  2177,  1961,  2179,  2338,  2460,
    2340,  1667,  2456,  2523,  2563,  2564,  2565,  2781,  2566,  2716,
    2717,  2751,  2567,  2664,  2568,  2569,  2570,   964,  1169,  1408,
    1614,  1962,  1912,  2343,  1671,  2025,  2026,  2226,  1513,  1514,
    1817,  2041,  2042,  2232,  2328,  2329,  2450,  2132,  2514,  2133,
    2312,  2344,  2345,  2346,  1810,  1811,  2060,  2261,  1312,  1313,
    1295,  1296,  1563,  1564,  1565,  1566,  1567,  1568,  1569,   997,
    1195,  1418,   999,  1000,  1001,  1002,  1266,  1267,  1498,  1353,
    1361,   395,   396,  1035,  1374,  1375,  1574,  1344,  1250,  1251,
    2352,   482,   301,   699,   700,   483,    98,   153,  1304,  1269,
    1238,  1476,  2674,  1425,  1004,  1781,  2036,  2110,  2235,  1260,
    1345,  2206,  2546,  2262,  1914,  2207,  1324,  1378,  1240,  1006,
    1270,  1271,   748,   801,   802,  2208,   271,  2200,   179,  1241,
     774,   775,  1242,  1009,  1010,  1011,  1203,  1176,  1433,  1429,
    1422,   501,  2178,   539,  1479,  1792,  2047,  1612,  2160,   282,
    1501,  1806,  2256,   811,  1114,  2185,  2493,   610,   339,   692,
    1465,   423,  1224,   202,   115,   393,  2421,   337,   352,  1033,
     784,  2116,  2629,  2503,  2247,    96,   214,   414,  2468,  1986,
     780,   402,  2695,  2003,  2657,   815,  2649,  2734,   218,   488,
    2747,   168,   390,   744,   102,   732,   688,   848,  2661,  2166,
     350,  1576,   971,  1310,   407,   742,  1209,  1349,   404,   391,
    1758,  1778,  2615,  1499,  2714,  2241,   184,   703,  2357,   721,
     347,   602,  1492,  2412,  2164,   540,   203,  2530,  2536,  2687,
    2688,  2689,  2690,  2691,  1708
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2290
static const yytype_int16 yypact[] =
{
   -2290,   314,   496, -2290,    98,   383, -2290,   496, -2290, -2290,
     487, -2290, -2290,   487,   487,     2,     2, -2290,   754, -2290,
     808,   745,   969, -2290, -2290,  1168,  1168,   762,   840, -2290,
   -2290,   543,   487,     2, -2290, -2290,  1070,   927, -2290, -2290,
     955,  2530,     2, -2290, -2290, -2290,   745,  1009, -2290, -2290,
     -46, -2290,   977,   977,  1079,  1115,  1331,  1331,  1331,  1194,
     977,  1190,  1118,  1177,  1331,  1183,  1196,  1557, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290,   217, -2290, -2290, -2290, -2290,
    1405, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
    1452,  1211,   543, -2290, -2290,  1218,   263, -2290, -2290,  1331,
    1331, -2290,  1331,  1167,  1615,  1167,  1230,  1331,  1331, -2290,
   -2290,  1167, -2290, -2290, -2290,  1186,  1054,  1236, -2290, -2290,
    1198, -2290,  1244, -2290, -2290, -2290, -2290,  -139, -2290, -2290,
   -2290,  1365, -2290,  1331,   994,  1167,  1474,    28, -2290, -2290,
   -2290, -2290, -2290,  1475,  1237,   559,  1534, -2290,  1232, -2290,
    1186, -2290,    88, -2290, -2290, -2290, -2290, -2290,   447,    32,
    1331,     3, -2290, -2290, -2290,   516, -2290, -2290, -2290,  1307,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290,   994, -2290,  1292,
   -2290,  -147, -2290, -2290,  1167, -2290,  1336, -2290,  1338,  1332,
    1684,  1331, -2290, -2290, -2290,   900, -2290, -2290, -2290, -2290,
   -2290,   597,  1689,  1331,    91, -2290,    83, -2290, -2290,   128,
   -2290, -2290, -2290, -2290,  1495,    32, -2290,  1522,   977,   977,
   -2290,   447,  1300,    75,   -74, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,   546, -2290,
      71, -2290,   994, -2290, -2290,  1425, -2290, -2290, -2290,  1331,
    1353,  1503, -2290, -2290, -2290, -2290,  1191,  1331,  1253,  1533,
     561, -2290,  1741,   566,  1318, -2290, -2290,  1320,  1668, -2290,
    1495, -2290,   977, -2290, -2290, -2290, -2290,   447, -2290,  1323,
    1468, -2290,   977, -2290,   882, -2290,   224, -2290, -2290, -2290,
   -2290, -2290,   546, -2290,  1530,  1503, -2290, -2290, -2290,   867,
   -2290, -2290, -2290,  1544, -2290, -2290, -2290, -2290, -2290,  1518,
   -2290, -2290, -2290, -2290, -2290,  1355, -2290, -2290, -2290,  1793,
    1715,  1369, -2290, -2290,   546, -2290, -2290,    30, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290,  1384, -2290,  1637,
    1704,  1370, -2290,  1814, -2290, -2290, -2290, -2290,  2234, -2290,
    1744, -2290,  1324,  1378,  1437, -2290,   546,  1562,  1482,   293,
    1434, -2290,  1432,  1331,  1782,   626,   -72,   735, -2290,  1333,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,  1415,
   -2290,  1579, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
    1805,  1331, -2290,  1324, -2290,  1324, -2290, -2290,  1390,   -20,
   -2290, -2290,  1331, -2290,  1607, -2290, -2290,   147, -2290, -2290,
     843,  1331,  1331, -2290,  1331,  1331, -2290,  1793, -2290,   377,
    1331,  1562, -2290,  1441,  1339,  1324, -2290,  1514, -2290, -2290,
   -2290, -2290,  1340, -2290,  1344,    80,    29,  1331, -2290, -2290,
     791, -2290, -2290, -2290,   -49,  1431,  1167,  1167, -2290,  1535,
    1535,  1542, -2290,  1167,  1331, -2290, -2290, -2290,  1503, -2290,
    1460,  1596, -2290, -2290,  1407, -2290, -2290, -2290, -2290, -2290,
    1167, -2290, -2290,   198,   198,  1854,   198, -2290, -2290,   198,
     382, -2290, -2290, -2290, -2290,   451, -2290, -2290, -2290, -2290,
   -2290, -2290,   139, -2290,  1410,  1471,  1613,   645,  1416,  4987,
   -2290,  1362, -2290, -2290,   213, -2290, -2290, -2290, -2290,  1355,
   -2290, -2290, -2290, -2290, -2290,  1331, -2290, -2290,  1368, -2290,
    1368, -2290, -2290,  1421,  1481,  1510, -2290,  1426, -2290,  1427,
   -2290,  1794, -2290,  1798, -2290,  1327, -2290,  1762, -2290,  1454,
   -2290, -2290, -2290,  1167,  1167,   -54, -2290, -2290,  1344, -2290,
    1435,  1494,  1501, -2290, -2290, -2290,   818,  1744,  1331,  1038,
    1038,  1331,    38,  1562,  1331,  1877, -2290,  1590, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,   977,  1050,
   -2290,   143,  1395, -2290, -2290, -2290, -2290,  1589, -2290, -2290,
    1344, -2290,  1447,  1507, -2290,  6648,   726,  1701,  1503,  1398,
     168,   168,  1400,   -98,   -49,  1503,  1409,  1331, -2290, -2290,
   -2290,   -43,   977, -2290, -2290, -2290,  1454,    47,   795, -2290,
    1344, -2290,  1455,  1103,    -9, -2290, -2290,  -176,   574,   602,
     656,   688,  1408, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
    1527, -2290,   647, -2290, -2290, -2290, -2290,  1167,  1167,  1683,
   -2290, -2290, -2290,   -36, -2290, -2290, -2290,  1331,   168, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290,  1176,   -44, -2290,
    1411, -2290,   794, -2290,  1472, -2290, -2290, -2290, -2290,  1400,
   -2290, -2290, -2290, -2290,  1663,    68,  1703,  1417,  1331, -2290,
   -2290,  1331, -2290, -2290,   617, -2290, -2290, -2290,  1231, -2290,
   -2290, -2290, -2290, -2290, -2290,  1800, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290,  1412, -2290, -2290,  1872,  1477, -2290,  1462,  1483,
   -2290, -2290, -2290, -2290,  2948,   617,  1905, -2290,  1529,  1529,
   -2290,  1160,  1624, -2290,   793,   793, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,  1484, -2290,  1503,    89, -2290, -2290,
   -2290,  1503, -2290, -2290,  1521, -2290,   409,   409, -2290, -2290,
    1585,  1429,    22,  3109,  3587, -2290,  1703,  1742,  1503,  1490,
    7354,  1478, -2290,  1167, -2290,   617, -2290,  1497,  1688, -2290,
    1782, -2290, -2290, -2290, -2290,   793,  1485, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
    1160, -2290, -2290, -2290, -2290,    23,  1557, -2290,   641, -2290,
   -2290, -2290, -2290,  1438, -2290,  3854, -2290, -2290,  1429,  1486,
   -2290, -2290,  1568,  4074, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290,    12, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290,  1546, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290,   605, -2290, -2290,  1610, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290,  1442,  1503,  1477, -2290,
   -2290,  1836, -2290, -2290, -2290, -2290, -2290,  1488,  3980,    28,
      28,  1489,  1492,  1493, -2290,  1499,    28, -2290, -2290, -2290,
    7539,  7354,  7539,  1505, -2290,  1488, -2290,    92,   933,   869,
   -2290,  1787, -2290, -2290, -2290, -2290, -2290,  1484, -2290,  1506,
    1508,  1512,  7354, -2290, -2290,  -215, -2290,   617, -2290, -2290,
   -2290, -2290, -2290,   -49,   -49, -2290, -2290, -2290, -2290,  1772,
   -2290, -2290,  1472,  1503, -2290, -2290,  1509, -2290,  1525, -2290,
     100,   100,  1461,  1526, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290,  -145,  5009,  7354,   420,   504,
     430,  1324,  1282,  -214,  6129,  6166,  1706,  1061,   987,  1282,
    1167,  1523, -2290, -2290,  6166, -2290, -2290,  1282,  1438,  1811,
    1167,  5172,  6166, -2290,   555,  7708,  1324,  1167,  1324,  1167,
      87,   731,  1167,  1324, -2290, -2290, -2290, -2290, -2290, -2290,
    5308,  5430, -2290, -2290,  1438,    55,  1167,  1324,  3374,  1167,
   -2290, -2290,  1753,  1671, -2290,  6851, -2290, -2290,  1484, -2290,
    1476,  1479,  7354,  7354,  7354,  3980,  1480, -2290,  1020, -2290,
    3980, -2290, -2290, -2290, -2290,  7354,  7130,  7354,  7354,  7354,
    7354,  7354,  7354, -2290,  3980,  7354,   933,  1584, -2290,  1528,
   -2290, -2290, -2290,  1962,  1557, -2290,   424, -2290, -2290, -2290,
   -2290,    24, -2290,  -192,  -143,    27, -2290, -2290, -2290,  1861,
    1127,  1802,  1624,  1167,  3980, -2290,  1862, -2290,  5552, -2290,
   -2290, -2290, -2290, -2290,   144,   623, -2290,   420, -2290,  1550,
   -2290,    28, -2290, -2290, -2290, -2290,  1868,  3374, -2290,   430,
   -2290, -2290,  1324,   924,  1624,  1876, -2290,   821, -2290,  1617,
   -2290, -2290,  1462,  1484,  1324,  1867,  1657,  1111,  1879,  5654,
   -2290,  5753,   178,  1121,  1128,  1880,   666,  1517, -2290, -2290,
   -2290,  1875,    40, -2290, -2290, -2290,  4639, -2290, -2290,  1918,
      12, -2290, -2290, -2290,  1282, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290,  1576, -2290, -2290,  1013,  1438, -2290, -2290,    48,
   -2290, -2290, -2290, -2290, -2290, -2290,  1558,  6166, -2290,  1575,
    1885,  1979, -2290, -2290, -2290, -2290,   555,  1621, -2290,  1580,
   -2290,  7815,    53,   841,  1586,  1581, -2290,  1026, -2290,  1588,
    1889,   488, -2290,  1838, -2290,  1890,  1657,  1891,  1838,  1167,
    1892,  1537, -2290,  1250, -2290, -2290, -2290, -2290, -2290, -2290,
    1764, -2290,  1282, -2290,   436, -2290,   951,  2008, -2290,    54,
   -2290,  1893,  1137,   -23,  1994,  1894,  2243, -2290, -2290,  1167,
    1895,  5776,  1438, -2290, -2290,  -157, -2290, -2290, -2290, -2290,
    3289, -2290,  1850, -2290,  1289, -2290,  1896,  1936,  1898,  1838,
   -2290, -2290, -2290,  1167,  1831,   186, -2290,   237,   729, -2290,
   -2290,   185,  1600,  1601,  1602,   259, -2290,  1484, -2290,  1604,
   -2290, -2290,   264,  1608,   729, -2290,  1078,   869,   869, -2290,
   -2290, -2290,  1094,  1609,   301,  1612,  1331, -2290,   -49,  1944,
    1611,   680,  6958, -2290,  1331,  1650,  1750, -2290, -2290,  1963,
   -2290, -2290,  1250,  1878, -2290,   707,  2804,   -38,  1629, -2290,
    1484, -2290, -2290, -2290,  6394,  1871, -2290,  1858, -2290,  1705,
   -2290,  1745,  1826, -2290, -2290,  1517, -2290,   924, -2290, -2290,
   -2290,  1043,   532,  1167, -2290, -2290, -2290, -2290, -2290,  7354,
    1815, -2290,  1478, -2290,  1324, -2290, -2290, -2290,  1859, -2290,
   -2290, -2290,  6166, -2290,  1792,   160,  1790,  1215,  1605,  1926,
    1926,  1926,  1926, -2290, -2290,  6166,  6394, -2290, -2290, -2290,
   -2290,  1061,   172, -2290,  1593, -2290,  1598, -2290, -2290, -2290,
   -2290,  1523, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290,  4363, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,     1, -2290,  1966,   833,  1925, -2290,
    1250,    56, -2290, -2290,  1736, -2290, -2290,    36,  7354, -2290,
    1655,  1282, -2290, -2290,  6394,  1621,  1333,  1324, -2290, -2290,
   -2290, -2290, -2290,  1937,  1167,   420, -2290,  1295, -2290, -2290,
   -2290, -2290,  1657,  1811, -2290, -2290, -2290,  1881, -2290, -2290,
     464,  1977, -2290, -2290,  1167,  1977,  1660, -2290,  1484, -2290,
   -2290,   392,   447, -2290, -2290,  4448, -2290,  2063,   431,   124,
   -2290, -2290, -2290,  1331, -2290,   -86,  6166, -2290,   653,  6044,
   -2290, -2290,  1167, -2290,  1919, -2290, -2290,  6394, -2290,  1503,
   -2290, -2290,  1250, -2290, -2290, -2290, -2290, -2290,  1994,  1886,
   -2290, -2290,  1295,  1831, -2290,  1994, -2290, -2290, -2290,  1607,
   -2290,  1167,  1506,  1506,  1506,  3980, -2290,    13,  1506, -2290,
    7211,  1506,  1506, -2290,   617, -2290,  1671, -2290, -2290,  1331,
     168,   168,  1265, -2290, -2290, -2290, -2290,  1912,   -37, -2290,
    1331, -2290,   -79, -2290, -2290, -2290,  1491,  1331,  1811, -2290,
   -2290, -2290,  1817, -2290,  1503, -2290,  2065, -2290, -2290, -2290,
    1167, -2290, -2290,  1167, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290,  1923,  1817,   137,  1331, -2290,  1622,  1674,
   -2290, -2290, -2290,  1863,  1817,  1817,   138,  1882,  1817, -2290,
    1957, -2290, -2290, -2290,  1618,  1623, -2290,  1250,  1957,  1901,
    1713,  1841, -2290, -2290,  1869, -2290, -2290, -2290, -2290, -2290,
   -2290,   453, -2290,  1167,  1624,  1942,  1233, -2290,   -47,   239,
    1282,  1690,  1705,  1282, -2290,  1697,   420, -2290,    12, -2290,
   -2290,  1765,  1785, -2290,   949,  1331, -2290, -2290, -2290, -2290,
   -2290,  1853, -2290, -2290, -2290,  2123, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290,  1926,  1331, -2290,   598, -2290, -2290,  1498,
    1331, -2290, -2290, -2290, -2290,    -3, -2290,  1952, -2290,  1446,
    1863, -2290, -2290, -2290, -2290,  1950,  1233,  1951,    90, -2290,
   -2290, -2290, -2290,  2140, -2290,  1711,   176, -2290, -2290,   172,
   -2290, -2290, -2290, -2290,  1671, -2290, -2290, -2290,  2029,  2019,
    1523, -2290, -2290, -2290, -2290, -2290, -2290, -2290,  1796,  1523,
   -2290,  1712, -2290,  2113, -2290, -2290, -2290,   875, -2290,  1250,
     942, -2290,    49,   186,   537,  1282,  1282,  1233,  1965,  1324,
     377,  1122,  2024, -2290, -2290, -2290,  2163, -2290,  1978, -2290,
   -2290, -2290, -2290,  1881, -2290, -2290, -2290, -2290,  1167,  2043,
    1859,  1165, -2290,  1670, -2290,  1672,  1250,  1074, -2290,   453,
   -2290, -2290, -2290,  6166,   447,   447,   447,   447,   447,   447,
     447,   447,   431, -2290,     7,  1859,   -80, -2290,  1752,  1752,
   -2290, -2290,  -150,  1167,  1233,  1973,  1724, -2290,  1730,  2173,
    1167,   445,   464,  2177, -2290,  1676,  1331, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290,  1100, -2290, -2290, -2290,
    1167,   430, -2290, -2290,   168,   168,   180,  1429, -2290, -2290,
   -2290,  1167,  1167, -2290, -2290,   391, -2290, -2290, -2290, -2290,
     391, -2290, -2290,  1331,  1490,  1331, -2290, -2290, -2290,  1331,
   -2290, -2290, -2290,   141, -2290, -2290, -2290,  1331,  1678,   391,
     391, -2290, -2290,   391, -2290, -2290,  1897, -2290, -2290,  1957,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,  1617,   -38,
   -2290, -2290,  1887,    34,  1983,  1233,   350, -2290, -2290, -2290,
   -2290, -2290,   -32,   103, -2290, -2290, -2290,   421, -2290, -2290,
   -2290, -2290, -2290, -2290,   391, -2290, -2290, -2290, -2290,   391,
     462,   462, -2290, -2290, -2290, -2290, -2290,  1681,  1282, -2290,
    1282,  5032, -2290,   468,    14,   172, -2290, -2290, -2290,  2140,
    1167, -2290, -2290, -2290, -2290,  1687,  1220,   182,  1691,   350,
    1250, -2290, -2290,  2142, -2290, -2290, -2290, -2290,   942, -2290,
    2003, -2290,  1331,  1607,  1883, -2290, -2290,  1282, -2290,  1282,
    1122, -2290, -2290, -2290,  1203, -2290, -2290,  1167,  6166,  1046,
   -2290, -2290, -2290,  1902, -2290, -2290,  1934, -2290, -2290, -2290,
   -2290,  1672, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,   -17, -2290,  1167, -2290, -2290, -2290,
     739, -2290, -2290, -2290,  7354, -2290,  6166,  6166,  1734,  1870,
    1617, -2290,  1282, -2290,   350, -2290,  1888, -2290,  1250, -2290,
    2087,  1767, -2290,   774, -2290,   883, -2290,  1676, -2290,  1167,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,    26, -2290,
   -2290,   -59, -2290,  1167, -2290, -2290, -2290, -2290, -2290, -2290,
     759, -2290,   430,   759, -2290, -2290, -2290,    85,  2156,  3336,
    1957, -2290, -2290, -2290, -2290, -2290, -2290, -2290,  1795,  2005,
   -2290, -2290, -2290,  2009, -2290, -2290, -2290, -2290, -2290, -2290,
    1914, -2290,  1624, -2290, -2290, -2290, -2290,  1167, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,  2709, -2290,
   -2290, -2290,  1317, -2290, -2290, -2290,  1215, -2290,  1233,  1849,
    1233,  1851, -2290, -2290,  6166, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,  1220, -2290,  2111, -2290,  1523, -2290,
   -2290, -2290,   350,  1371, -2290, -2290,  1371,   -81,  1167, -2290,
   -2290,  1233, -2290, -2290,  1833, -2290,  2169,  1956,  1984,   894,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290,   729, -2290, -2290, -2290, -2290, -2290,  1921,
    1331,  1795,  1233,  1726, -2290,  2173, -2290,  1703,  2127,  1703,
    1734, -2290, -2290, -2290, -2290,  1929, -2290, -2290, -2290, -2290,
    1373, -2290,  1167, -2290,  1382, -2290, -2290,   180, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290,   391, -2290, -2290, -2290,
     391,    95, -2290, -2290,  1331, -2290, -2290, -2290, -2290,  1331,
   -2290, -2290, -2290, -2290, -2290,    -6, -2290, -2290,  2168, -2290,
   -2290,    11, -2290, -2290,  2220, -2290, -2290, -2290,  3336, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,  1167, -2290,
   -2290, -2290, -2290,  1215, -2290,  1282, -2290,  1282, -2290, -2290,
   -2290,  2183,  2121,  1371,  1371, -2290,  1773,  1773, -2290,  1899,
    1324,   748, -2290,  1167, -2290, -2290,  6166, -2290,  1331,   577,
    1971,  1972, -2290,  1981, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290,  1167, -2290, -2290, -2290, -2290,  1781, -2290,  1167,  1703,
   -2290,  1167, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
    1016,  1331,  1331,  1234,  1331, -2290, -2290, -2290, -2290, -2290,
   -2290,  1592, -2290, -2290, -2290,  2130,   391,   391, -2290,  1331,
     462,   462, -2290,   180, -2290, -2290, -2290,  1795,  1795,  6166,
   -2290,  1371, -2290,  6166,  6166,  1331,  1324,  1324,  1906, -2290,
   -2290,  1756,  1167, -2290, -2290,  1902, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290,   999, -2290, -2290,  1167, -2290, -2290, -2290,
    1331,   180,   180, -2290,  2044,  1331,  1331,   180, -2290,  2225,
    1803, -2290, -2290,   430, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,   420,  1324,  1331, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290,  1389, -2290, -2290, -2290, -2290,
   -2290,  1916,  2147, -2290,   180, -2290, -2290, -2290,   180,   180,
   -2290, -2290,  2040,  1964,  1331,  1503, -2290,  1331,  1624, -2290,
    1331,  1331,  1167, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,    94, -2290, -2290,   477, -2290,   413,
   -2290, -2290, -2290, -2290, -2290,  1278, -2290, -2290, -2290,   420,
   -2290,  1900,  1843,    19,  1671, -2290, -2290, -2290, -2290, -2290,
    2036, -2290,   527,  1477,  7630,  7630,  1399,  2152,  2078,  1990,
    1990,  1413, -2290,  -106,  -106, -2290,   477, -2290, -2290,  1988,
   -2290, -2290,  -106,  -106, -2290, -2290, -2290,   404, -2290,  1167,
   -2290,  1360, -2290, -2290, -2290,    52, -2290, -2290,  1503,  1503,
   -2290, -2290,  1490,  1617,  7439, -2290, -2290,    79,  1062, -2290,
   -2290,  1065, -2290, -2290, -2290, -2290,    37,    37, -2290, -2290,
   -2290, -2290, -2290,  7630, -2290,   406,   406,  1990,  1990, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,   168,
   -2290, -2290, -2290, -2290,  1939,   906,    52, -2290, -2290, -2290,
   -2290,  1836, -2290,  1671,  1167, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,   -35,    86,  2232, -2290, -2290, -2290,
     406, -2290, -2290,  1958,  1959, -2290, -2290,  1671, -2290, -2290,
    1975,  1167, -2290,  1860,   -18, -2290, -2290, -2290,  1970, -2290,
   -2290, -2290, -2290,  7630, -2290, -2290, -2290,   -34, -2290, -2290,
    1503, -2290, -2290, -2290, -2290,  1976, -2290, -2290, -2290, -2290,
   -2290, -2290,  1324, -2290, -2290
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2290, -2290, -2290, -2290, -2290,  2284, -2290, -2290, -2290,   968,
   -2290,  2250, -2290,  2205, -2290, -2290,  1467, -2290, -2290, -2290,
    1433, -2290, -2290,  1443,  2273, -2290, -2290,  2174, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,  2102,
     965, -2290, -2290, -2290, -2290, -2290,  2158, -2290, -2290, -2290,
   -2290,  2098, -2290, -2290, -2290, -2290, -2290, -2290,  2233, -2290,
   -2290, -2290, -2290,  2088, -2290, -2290, -2290, -2290,  2072, -2290,
   -2290,  1000, -2290, -2290, -2290, -2290, -2290,  2165, -2290, -2290,
   -2290, -2290,  2136, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290,   535, -2290, -2290, -2290,  1702,
   -2290, -2290, -2290, -2290, -2290, -2290,  1804, -2290,  1910, -2290,
   -2290, -2290,  1819,  1788, -2290,  1786, -2290, -2290, -2290, -2290,
     425, -2290, -2290,  2045, -2290, -2290, -2290, -2290, -2290,  1904,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290,  1301, -2290, -2290, -2290,  1547,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,   414, -2290, -2290,  1839, -2290,  -765,
    -847, -2290, -2290, -2290,   417, -2290, -2290, -2290, -2290,  -560,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -1435,   885,  1587,
     533,   556, -1428, -2290, -2290, -2290,  -967, -2290,  -383, -2290,
   -2290,   928, -2290,   449,   667, -2290,   156, -1420, -2290, -2290,
   -1417, -2290, -1415, -2290, -2290,  1539, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290,   355, -1312, -2290, -2290,  -713, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -1908, -2290, -2290, -2290, -2290,  -299, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290,  -303, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,  1496, -2290, -2290, -2290, -2100,   142,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290,  1309,    65, -2290,   268, -2290, -2290, -2290, -2290, -1332,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290,    42, -2290, -2290,
    -709, -2290,  1565, -2290, -2290, -2290, -2290, -2290, -2290,  1130,
     595,   606, -2290,   521, -2290, -2290,   -33,   -22, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290,   572, -2290, -2290,
   -2290,  1120, -2290, -2290, -2290, -2290, -2290,   887, -2290, -2290,
     287, -2290, -2290, -1263, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290,   886, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290,   858, -2290, -2290, -2290, -2290, -2290,   110, -1793, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290,   846, -2290, -2290,   844, -2290, -2290,   520,   295, -2290,
   -2290, -2290, -2290, -2290,  1081, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290,   104,   805, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
     807, -2290, -2290,   285, -2290,   508, -2290, -2290, -1347, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290,  1063,   802,   280, -2290, -2290, -2290, -2290, -2290,
   -2290, -1538,  1060, -2290, -2290, -2290,   275, -2290, -2290, -2290,
     490, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290,   442, -2290, -2290,
   -2290, -2290, -2290, -2290,   780,   265, -2290, -2290, -2290, -2290,
   -2290,  -129, -2290, -2290, -2290, -2290,   465, -2290, -2290, -2290,
    1039, -2290,  1036, -2290, -2290,  1258, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290,   246, -2290, -2290, -2290, -2290,
   -2290,  1028,   454, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290,    81, -2290,   456, -2290, -2290,
   -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
    -298, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290, -2290,
    -336, -2290,   747, -2290, -2290, -1609, -2290, -2290,  -594, -2290,
   -2290, -1764, -2290, -2290,    82, -2290, -2290, -2290, -2290,   -19,
   -2207, -2290, -2290,    76, -1857, -2290, -2290, -1957, -1556, -1091,
   -1461, -2290, -2290,   860, -1251,   266,   267,   269,   272,  -920,
      50,  -769,   482,   514, -2290,   673,  -376, -1405, -1055,  -895,
    1066, -1575,  -384,  -297, -2290, -1328, -2290, -1076, -1440,   946,
   -2290,   -90,  2125, -2290,  1735,  -574,    45,  2281, -1083, -1042,
     245,  -848, -2290, -1078, -1224, -2290,   506, -1298, -1921, -1112,
    -956,  -599, -2290, -2290,   723, -1132, -2290,  -873,   522,  -634,
   -2290, -2290,  -101, -1202,  -776,  -116,  2172,  -870,  2201,  -676,
     -21,  -537,  -624, -2290, -2290, -2290,   -10,  1449, -2290, -2290,
     423, -2290, -2290,  1864, -2290, -2290, -2290, -2290, -2290, -2290,
   -1978, -2290, -2290,  1692, -2290, -2290,  -115, -2290,  2032, -2290,
   -1193, -2290, -1278,  -286,  -630,   880, -2290,  1943, -1464, -2290,
    -789, -2290, -2290,    31, -2290,    -8,  -595,  -352, -2290, -2290,
   -2290,   494, -1467,  -159, -2290, -1205, -1170,  -233,  2240,  2010,
   -2290, -2290, -1154, -2290, -2290,  1171, -2290, -2290, -2290,   510,
   -2290,   364, -1961, -1488, -2290, -2290, -2290,  -148, -2290,   573,
   -1413, -1692, -2290, -2290, -2290, -2290,  -746, -2290, -2290,  1749,
   -2290,  1908, -2290, -2290, -2290,   884, -2290, -2289,  -166, -2290,
   -2290, -2290, -2290, -2290, -2290
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1899
static const yytype_int16 yytable[] =
{
     160,  1172,   139,  1413,   139,   696,   697,   966,  1037,   427,
     139,   428,  1283,   138,   415,   141,   773,  1734,   793,  1377,
    1448,   147,  1901,   747,  1736,  1013,   855,  1467,  1802,   215,
     704,   998,  1737,   245,   139,  1738,  1294,  1739,   788,  1744,
    2056,   427,  1249,  2211,  2072,   180,  1633,  1905,   103,   104,
     105,   465,   437,  1861,  1315,  -707,   111,   714,  1531,  1493,
    2228,   268,  2715,  2134, -1851,  1626,  1882,  1268,  1376,  1786,
    1502,  1855,  1023,   755,  1220,   782,   279,  1220,   411,   807,
     860,   464,  2079,   246,   264,  -705, -1607,  1305,  2161,   291,
     345,   134,   135,   855,   136,  1305,  2759,  1359,    99,   143,
     144,   259,   220,  2639,  2275,   107,  1649,  2378,   161,  1305,
    2242,   211,  1432,  2368,  2265,   360,  1883,  1779,  1864,   530,
    1646,  1846,  1508,  2070,  1589,   169,  1443,   392,   114,   807,
     838,   838,  2640,  2118,   708,   297,  2238,  2490,  1777,  2777,
    1220, -1898,  1989,  1580,  2756,  1541,  2429,  1486,   215,   842,
    1220,  2662,   219,  2195, -1851,   430, -1608,   466, -1613,  2030,
   -1898,  2772, -1830,   536,  1751,  1192,  2162,   413,  1228,  1541,
    2010,  1249,   709,   518,  2214,  1996,  1008,  1639,  2290,   327,
   -1798,   838,  1132,   251,  2535, -1898, -1898,  1821,    94,  1897,
    2171,   211,  2331,  2778,  1850,   258,  -707,  1599,  1850,   758,
    -707,  2779,  1617,   283,  1477,  1714,   221,  1715,   751,  1462,
     481,   587,  1407, -1898,  1677,   701,  1030,  1132,   117,  1457,
     129,   419,  1188,  1454,   813,   321,  -705,  2485,  2732,    52,
    -705,   856,  2516,  1180,  1181,   730,  1884,   728, -1898, -1611,
    1186,   295,  1659,  1206, -1896, -1794,  1274, -1794,   182,   299,
    2011,   418,  1954,  2334,  1358,  1417,  1972,  -707,  1192,  1818,
    1246,    23,  1573,   274,   275,  2760,   216,  1325,  1239,  2727,
     536, -1898,    94,  1573,  1409,   438,  1282,  1286,    53,  1325,
    2355,  2234,  1881,  2356,   204,  1444,  1311,  -705,  2780,  1631,
    1455,  2577,  1207,  1329,  1331, -1885,   394,   729,   856,  1885,
    1660,  1485,  2154,  1022,  1678,  2155,   731,  1780,  2559,   519,
    1192,  1246,  1388,  1239,     3,  1997,    54,   311,    55,   284,
      56,   439,   212,   130,  2120,   702,  2347,   314,    57, -1898,
    1305,  2641,  1192,  2243,  1573,  2163,   588,  1192,   127,   183,
     536,  1210,   493,   139,  1177,   139,   139,  2685,  1244,    24,
    1412,  2733,   139,   752,  1179,   410,   485,   486,  1133,   243,
     761,  1458,   243,   491,  1958,   137,  1008,  1008,  1008,   139,
     280,  2425,   507,   507,  1192,   507,  2276,   431,   507,   514,
     504,   467,  2095,   424,    58,  2045, -1798,   449,  1008, -1798,
    1959,  2098,   281,  1133,   436,  1855,   154,  1965,  1855,  1264,
     154,  -707,   212,   444,   445,  -712,   446,   447,  -710,   520,
    2196,   -35,   453,  1421,  1421,  1421,  2244,  1893,  1581,  1268,
    2227,   800,  2430,   243,  1003,  1450,  1434,  1436,   741,   470,
     759,  -705, -1794,  1442,  1364,  2239,   468,   128, -1830,  2195,
    1294,  1556,   139,   139, -1636,  2663,   492,   843,  1570,  1211,
    1212,  2358, -1798,   585,   585,   368,  2248,   505,  1913,  2706,
     217,   137, -1798,  1321,  2403,  1556,   260,   710,   715,  2029,
    1934,  1268,   137,   137,  1755,   137,   394,    60,  1935,  1590,
     139,  -712,   694,  2396,  -710,  2071,   243,  1973,  -520,   705,
    1582,   585,   137,  1008,  1024,  1193,  1503,  2088,  1866,  2491,
    1819,   283,  1012,   139,  2414,  1482,  2416,   542,  1896,  2653,
    1600,   137,  1394,    97, -1794,  1322,  -520,  -520,  2277,   292,
     781,  1348,   800,    61,  1019,   861,  1980,   579, -1798,  1909,
    1886, -1798,   243,  2544,  2545,  2053,   746,  2434,  1388,  1268,
     265,   346,  1394, -1825,  1348,   537,  1194,  1532,   597,  1305,
     599,  1008,  1394,   604,   606,    15,   608,   749,  1008,  1008,
    1008,  1428,   137,   716,   763,  1395,  1428,  2452,  2453,  2245,
    2084,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  2039,
    1428,  1008,  2517,  2315,  1449, -1697,  2043,   687,  1193,  1573,
     394,  2103,  1012,   261, -1798,  1395,   137,   137,   149,   707,
    1469,  2642,  1268,  1503, -1798,  1395,   763,  1971,  1197,   766,
    1471,  2401,    64,  1198,  1003,  1003,  1003,   284,   187,   767,
    2072, -1800,   129,   613,  1855,   188,  1787,   761,  2142,  1575,
    -520,  1851,   515,  1348, -1885,  1851,  1003,   243,   255, -1679,
    1193,   512,  1852,    18,  1936,   979,  1852,   980,  2707,  1197,
     154,   766,   537,   137,  1198,    67,   187,   712,  -520,   754,
     841,   767,  1193,   188,  1815,   846, -1867,  1193,   849,   450,
    1820,   516,  2195,  2268,   118,  2270,  1937,  1845,  1847,  1246,
    2204,   322,   969, -1575,  2217,   851,   851,  1517,    42,  1258,
     137,  1680,   840,  2159,  2090,  2722,  2196,  1029,     4,  1938,
     786,   768,  1014,   787,  1193,  2249,  2250,  2251,   137,  2131,
    1364,  2721,  2035, -1677,  2301,  1570,  1525,  1348, -1674,   986,
    2051,   154,   537,   351,  2737,   130,  1807,    68,  1332, -1898,
    1804,   451,  2738,  2549,  2550,  1268,  2195,  1263,  1264,  1276,
    1237,  1003,   412,   768,  1699,   405,  1898,  2361,  1237,  1237,
    -520,  2049,   222,   689,  1939,  1692, -1898,  2114,  1237,   155,
     228,   156,  1351,  2296,  1356,  1237,  1237,  2332, -1851,  1382,
    2252,   769,  1700,  1701,  1714,   745,  1715,  1610,  1253,  1007,
   -1898,  2273,  1333,  1404,  1237,  1237,   154,  1932,  2742,  2538,
    1334,  1412,   -96,  2708,   816, -1575,   406,   305,  1947,  1003,
    2422,  1951,  2291,  2084,   761,   229,  1003,  1003,  1003,  1955,
    1809,  2643,  2117,   769,  1940,   230,   770,  1948,  2667,  1003,
    1003,  1003,  1003,  1003,  1003,  1003,  1003,  1611,  1264,  1003,
     189,   763,  2764,  1782,   817,   818,   819,   820,   821,  1031,
      16,  1317,     5,  1870,  1927,   762,  1871,  2614,  1478,  1872,
    1873,  1171,  2065,  1305,  1573,  2506,  2115,  2349,   770,  1803,
     137,  2668,  1237,  1807,  1154,   413,   771,  1393,   189,  2192,
     515,   634,   635,  2311,  1695,  1008,   766,  1335,  1487,    27,
    2336,  -520,  2363,  1454,  2371,  1882,   767,  1363,  1632,     5,
    1505,  2204,   137,  2253,  2254,    28,  1526,   232,  2255, -1810,
   -1812,   137,   137,  2317,   190,  1237,   154,  2205,   771,   516,
    1941,   471,   472,   473,    94,   454,   137,  1215,   223,   137,
    1237,  1976,   139,   139,   690,  1841,  1842,  1843,  1844,  2196,
     137,  1254,  2555,  1255,  2341,  1883,   -96,  1916,  2263,  2263,
     137,   306,   190,  2423,  2424,   763,  2644,  1949,  1543,  1544,
    1455,  1237,  2104,  2507,   243,   137,  1155,  1178,  1264,   187,
     191,  1754,   589,   137,  1008,   192,   188,   233,   768,  1007,
    1007,  1007,   137,   243,   822,   823,   824,   825,   826,   827,
     828,   647,   648,  1496,   979,   730,   980,  1545,  1546,  1917,
     766,  1007,  2066,  2196,   154,  2279,  2669,  1156,   191,    43,
     767,  2620,  2105,   192,   619,  1364,  1702,  1809,   763,   508,
    1237,   510,  2044,   730,   511,  1237,  2618,  1252,  1979,  1579,
    1264,  1272,  1620,  2269, -1825,  2271,  1157,   416,  1272,  1307,
    1447,   474,  2360, -1867,   722,   763,  1272,  2408,   769,  1326,
     764,   765,  1916,  1755,  1347,   475,  1354,  2314,  1354,  1362,
    1379,  1326,    94,   766,   254,  1884,   733,   607,   986,  2572,
      43,  1428,   236,   767,  1268,   361,  1008,   730,  1354,   193,
    2508,  2342,   718,  1672,   979,  1573,   980,  1634,  2501, -1575,
     766,  2658,   768,   770,   735,  2144,  2699, -1575, -1575, -1125,
     767,     5, -1575,  2361,  1917,  1658,  1007,   362,  1785,   730,
    2367,  1273,   526,  -702,  2593,  1982,  1983,   255,  1273, -1810,
      33,  2594,  2440,  1874,  1875,  1491,  1273,  1268,  1885,  2596,
    1808,  1158,  2597,  1003,  2598,  2528,  2613,   328,   829,  2560,
    1273,   476,  2441,   771, -1125,  2529,  1237,  1703,   737,  1876,
    1877,   830,   154,   477, -1125,   768,  1252,  2037,   986,  1237,
    1785,   719,   769,   720,  1007, -1681,   763,  1364,  1462,  2442,
     253,  1007,  1007,  1007,  1427,   763,  1272,  1578,  2561,  1427,
     739,   189,   768,  2696,  1007,  1007,  1007,  1007,  1007,  1007,
    1007,  1007,   839,  1427,  1007,  2106,  2443,  1237,  1297, -1898,
     351, -1898,  2782,  1197, -1794,    36, -1794,   770,  1198,   441,
    1557,   766,  1558,  1272,   979,  2562,   980,   442,   170,  2348,
     766,   767,  1003,  1470,  1272,   769, -1898,  2748,  1785,    39,
     767,   253,  2201,  2362,   614,  2718, -1125,   763,  2363,  2063,
    2743,  2744,  1020,  1871,   478,  1648,  1872,  1873,   316,    40,
    1264,   137,   769,  2073,  -702,   190,  1273,   771,  -702,  2749,
     187,  1824,  2728,   171,  1825,  2730,   615,   188,  1362,  1237,
     770,  1826,  1827,   172, -1898,  2307,   979,  2233,   980,  2750,
    1237,  1272,   766,  1237,  2729,  1272,  2718,  2731,   986,  1497,
    2306,  1785,   767,  1273, -1898,  1488,  1453,   770,    94,  1264,
    1453,  2533,   325,   768,  1273,  2037, -1125,   836,   836,   317,
     318,   191,   768,   137,  1910,  -702,   192,   329,  1800,  1828,
     771, -1898,   139,   154,  1003,  1298,  1299,  1642,  2325,  2325,
     837,   837,  1005,  1674,   344,  1199,  2534,  1966,  1603,    48,
    2571,   137,  1300,  1911,  1200,  1801,   226,   771, -1898,  1491,
     986, -1125,  1628,  2528, -1794,   173,  1604,   139,   836,  1886,
     756,  1273,  2258,  2529,  2359,  1273,   400,   252,  2263,  2263,
    2497,  2547,  2498,   769,   768,  2040,   155,   330,   156,  1281,
    2237,   837,   769,  1788,   763,   557,  1643,   300,  1829,  1644,
    2426, -1794,   757,  2635,    49, -1125,  1301, -1898,  1196,  2193,
    2194, -1125,   558,   137,   600,  2323,   601,  1197,  2492,  2205,
    2444,  2209,  1198,  1635,  1489,  2229,  1391,  1830,   770,  2427,
    2673,  2675,    51,  1197, -1898,   174,  2107,   770,  1198,   766,
    2221,  2222,  2697,  2237,  2223,  1788,  2418,  2621,  1831,   767,
    2135,  2617,   559,   243,   769,    13,   227,   598,  1694,  1636,
      13,  1628,   605,  1707,  1743,   725,  1745,   763,  1900,  -702,
    2726,  2698,   137,  1789,  2665,  2676,  2533,  2136,   771,    26,
     175,   137,   189, -1794,   763,  2259,    93,   771,  2303,  2736,
    2260,  1681,  1921,  1252,  1431,  1685,    47, -1613,  1007,   770,
      21,    22,  1687,  1832,  1197,    91,   979,    97,   980,  1198,
    1272,  2677,   766,  1788,   800,  2304,   763,  1946,  2237,    46,
    1874,  1875,   767,  1928,  1252,  1789,  2122,   100,  2528,   766,
     176,   768,  1005,  1005,  1005,  1984,  1985,   428,  2529,   767,
    1289,   228,   243,   137,  2712,   101,  1876,  1877,  2713,   771,
    1272,  1290,  1689,  1930,  1005,   979,   190,   980,  1833,  2776,
    1008,   766,  1197,  1957,  1931,  2074,  2075,  1198,  2458,  1690,
    2461,   767, -1898,  2754,  2190,   243,  1788,  1237,  1197,  1628,
     986,    94,  2470,  1198,  1197,    94,   229,  1007,   560,  1198,
    1273,  2410,  2471,  1789,  2411,   109,   230,  2767,  1860,   561,
     139,   769,  2655,  2656,   768,  2009,  2350,   719,  2511,   720,
     231,  1967,   191,   106,  2472,  2019,  2020,   192,  1834,  2023,
     108,   768, -1591, -1591, -1591, -1591,  1423,  1424,  2004,   986,
    1273,  1835,  1519,  1520,  1521,  1522,  2237,   114,  1868, -1590,
   -1590, -1590, -1590,  2548,  2473,   120,   770,  2466,   122,  2012,
    2467,   243,   394,   768,   110,  1944,  1789,  1231,  2474,  1245,
     112,  1628,  1261,  1902,  2481,  1663,  1284,  1664,   298,  2040,
    1998,  2551,  1999,   113,   769,  2552,  2553,  2067,   232,  2068,
    1761,  1320,  1762,  1187,  1427,  1189,  2672,  1346,   124,  1007,
    2526,   769,  1968,  1969,  1970,   126,   771,   137,  1974,  1437,
    1438,  1977,  1978,   562,   563,  1272,   140,   142,  1402,  1272,
    1346,  1981,  1272,   162,  1836,  1252,   149,  1005,   564,   770,
     565,   164,  1995,   769,  1005,  1005,  1005,  1426,   163,  2000,
     167,   186,  1426,  1439,  1440,  1441,   770,  1005,  1005,  1005,
    1005,  1005,  1005,  1005,  1005,  2678,  1426,  1005,   233,  2679,
    2680,   234,   235,   181,   185,   204,   428,  2648,  2013,  2654,
     242,   247,   193,   137,   248,  1272,  1628,   249,   770,   771,
     250,   257,  1237,  2124,   269,  1468,   273,   278,   294,   296,
     137,  2299,   154,   300,   302,  1273,   771,  2483,   303,  1273,
    2681,  2484,  1273,  2700,  2701,   307,  2648,   308,   309,  1346,
     312,  1261,  2654,  2705,   566,   313,  2682,  2683,  1003,   326,
    1237,  1237,   137,   334,  1272,  1272,  1272,  2057,   771,   734,
     736,   738,   740,   333,  2169,  2145,  2146,  2147,  2148,  2149,
    2150,  2151,  2152,  2169,  1921,   336,  2064,   338,  2575,  2576,
     340,   761,  2069,   236,  2580,  1273,   342,   349,   351,   353,
     354,   567,   356,   392,   394,   397,   398,   401,   403,   409,
     408,   187,   243,   420,   421,   422,   413,   429,   455,   456,
     458,  2058,   460,  1272,  -352,   484,   487,   490,  2062,   494,
     495,  2625,   509,  1346,   502,  2626,  2627,   522,  1628,  1628,
     523,   524,   534,   528,  1273,  1273,  1273,   545,   549,   139,
     550,   551,  -365,   553,   554,  1627,   556,  2541,  2542,   580,
    2191,   582,   591,   592,  1326,   593,   972,  2215,  1237,  1326,
     609,   611,   617,   618,   621,  1628,   622,   693,   695,  2091,
     698,  1654,   724,   973,   706,   741,   743,   750,  1326,  1326,
     779,   760,  1326,   783,   776,   792,   796,   785,   795,   798,
     800,   803,   808,  1273,   810,   814,   847,   840,   853, -1681,
     967,   970,  1021,  1039,  1272,  1017,  1012,  1018,  1034,  1042,
    1143,  1162,  1170,  1173,  2264,  2264,  1175,  1182,  2189,  1201,
    1183,  1184,  1213,  1326,  2137,  1287,  1217,  1185,  1326,  1326,
    1326,  1226,  2124,  1190,  1202,  1308,  1204,  1272,  1410,  1272,
    1205,  2309,  1219,  1227,  1627,  1412,  1419,  1446,  1824,  1420,
    1430,  1825,  1445,  1447,  1460,  2210,  1472,  2212,  1826,  1827,
    1466,  2213,  1481,  1483,  1506,   974,   975,   976,  1500,  2218,
    1008,  1008,  1494,   441,   977,  1529,  1272,  1509,  1272,  1523,
    1527,  1005,  1571,  1575,  1273,   763,  1588,  1591,  1592,  1594,
    1596, -1593,  1606,  1607,  1605,  1608,  1613,  1615,  1364,  1618,
    1638,  1622,  1624,  1640,  1220,  1650,  1828,  1655,  1662,  1666,
    1008,  1668,  1670,  1675,  1682,  1683,  1684,  1273,  1686,  1273,
    1237,  1696,  1688,  1691,  1693,  1746,  2224,  1747,  1698,  1008,
     766,  1272,   981,   982,   983,  1749,  1790,  1752,   984,  1628,
     767,  1783,  2230,  1791,  1326,  1246,  1793,  1628,   139,  1795,
    1805,  1816,  1809,  1822,  1511,  1839,  1273,  1867,  1273,  2353,
    1856,  2257,  1627,  1880,  2298,  1859,  1581,  1895,  1903,  1922,
    1005,  1918,  1926,  1933,  2745,  1829,  1960,  1953,  1988,   985,
    1511,  2002,   428,  1237,  2005,  2024,  1908,  1237,  1237,  2008,
    2280,  2015,  2014,  2027,  2282,  1915,  1754,  2028,  2017,  1008,
    2031,  2032,  2046,  1007,  1830,  2033,  1924, -1563,  2034,  2050,
    2054,  1273,  2055,  2059,  1462,  2078,  2080,  1628,  2085,  2086,
    2092,  2093,   768,  2100,  2099,  1831,  2096,  1272,  2125,  1272,
    2119,   428,  2127,  2310,  1952,  2131,  2128,  2138,  2172,  2139,
    2165,  2173,  2174,  2175,  1627,  2184,  2186,  2219, -1612,  2231,
    2266,  2283,  2292,   987,  2295,  2289,  2225,   139,  2311,  2313,
    1272,  2327,  2300,  2337,  2372,  2330,  2335,  1426,  2432,  2339,
   -1568,  2040,  1005,  2405, -1610,  2415,  2420,  2417,  2435,  2436,
    1832,  2437,  2449,  2438,  2454,  2459,  2342,  2489,  2581,  2492,
    1994,  1272,   769,  2499,  2500,  2502,  2518,  2519,  2524,   357,
    1915,  2505,  2540,  2557,   988,   989,  2520,  1273,  2556,  1273,
    1232,   139,  2006,   761,   358,  2007,  2577,  2624,  1003,  1003,
    2616,  2623,  2469,  2628,   359,  1326,  2660,  2402,  2630,  1326,
    2666,   632,  2659,  2404,  2692,  1833,  2693,   770,  2694,  2703,
    1273,  2746,  2763,  2407,  2765,  2766,  2768,   993,  2775,  1627,
    2770,    17,  1714,  1761,  1715,  1762,    92,   125,  1003,    38,
     360,   166,  2784,   256,   266,  2038,   209,   994,   119,   277,
     290,  1273,   995,   241,  1272,   210,  1272,  1003,   713,   996,
     443,   137,  2451,   538,   547,  2121,   581,   771,   972,   457,
     586,   323,  2510,  1214,   852,  1834,   527,  1735,  2753,  1673,
    1964,   804,  2113,  2351,  1016,   973,  2203,  2702,  1835,  2704,
    1225,  2274,  2022,  2445,  1038,  2369,  2446,  2447,  1384,   965,
    1464,  2077,  2021,  2488,  2048,  2494,  2486,  1480,  2272,  2448,
    1814,  2487,  1798,  1799,  2264,  2264,  2413,  1849,  1857,  2089,
    2278,  1572,  1879,  2463,  2464,  1326,  1326,  1003,  2419,  1326,
    1326,  1891,  1326,  2294,  1273,  2101,  1273,  1899,   428,  1595,
    2302,  1598,  2305,  2129,  2183,  1925,  2316,  2153,  1630,  1629,
    1380,  1627,  1627,  2326,  1653,  2181,  2457,  2182,  2752,  1963,
    2515,  2465,  2462,  1863,   332,  1621,  2319,  2320,  1797,  2321,
    2512,  1836,  2322,   213,   778,  2143,  2582,   974,   975,   976,
    2130,  2001,   310,   293,  1191,   616,   977,  2495,  1627,   448,
    2622,   812,   541,  1252,  2735,   272,   361,   763,  2504,  2167,
     489,  2288,   650,  2531,  2532,  2112,  2537,   789,   603,  2633,
    2686,  1894,     0,  1652,     0,  2170,     0,     0,     0,  2583,
       0,  2543,  2180,  2180,     0,     0,     0,     0,   362,     0,
    1234,  2521,     0,     0,     0,     0,   979,  2554,   980,  -234,
       0,     0,   766,  1261,   981,   982,   983,     0,  2199,     0,
     984,     0,   767,  1994,  1994,  2584,  2671,  1235,  1252,     0,
       0,     0,  2574,     0,     0,     0,     0,  2578,  2579,     0,
       0,     0,     0,     0,     0,  2585,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,  2619,     0,
       0,   985,  2719,  2720,   363,     0,     0,   654,     0,   364,
       0,     0,     0,  2586,  1252,     0,     0,     0,  2236,     0,
     986,     0,     0,     0,     0,     0,  2632,     0,     0,  2634,
       0,     0,  2636,  2637,     0,     0,     0,     0,     0,     0,
     365,    53,     0,     0,   768,     0,     0,     0,   366,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   367,  2281,  1007,  1007,  1252,     0,     0,     0,     0,
       0,  2236,  1627,     0,     0,   987,     0,     0,     0,    54,
    1627,    55,     0,    56,     0,   659,     0,     0,     0,     0,
     368,    57,     0,   369,  2587,     0,     0,     0,     0,  1908,
    2769,   370,     0,  1007,  2783,     0,     0,     0,     0,     0,
       0,  2588,  -231,     0,   769,     0,     0,     0,     0,     0,
       0,     0,  1007,     0,     0,     0,   988,   989,  2318,     0,
       0,     0,  2589,     0,     0,     0,  1005,     0,     0,     0,
       0,   371,     0,     0,   372,     0,  2236,    58,     0,     0,
    1627,     0,     0,  2590,     0,     0,     0,     0,     0,   770,
     863,     0,     0,   864,     0,   865,     0,     0,     0,   993,
     866,     0,  2591,     0,     0,  1994,     0,     0,   867,   668,
    2592,     0,     0,     0,  1261,     0,     0,     0,     0,   994,
       0,     0,  1007,     0,   995,     0,     0,     0,     0,     0,
       0,   996,     0,   137,     0,     0,     0,     0,    59,   771,
       0,   868,   869,     0,     0,     0,     0,     0,     0,  2409,
       0,     0,   870,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   871,     0,     0,   872,     0,     0,     0,
      60,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     873,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2236,     0,     0,     0,     0,     0,
       0,     0,     0,   874,     0,     0,     0,     0,     0,  1759,
    1760,   875,     0,   876,     0,     0,    61,     0,     0,    62,
    -749,     0,  -749,  -749,  -749,  -749,  -749,  -749,  -749,  -749,
       0,  -749,  -749,  -749,     0,  -749,  -749,  -749,  -749,  -749,
    -749,  -749,  -749,  -749,   877,     0,     0,     0,     0,     0,
       0,     0,  1761,     0,  1762,   878,  1763,     0,     0,  2199,
     879,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,   880,     0,     0,     0,
    1764,  1765,  1766,   881,     0,     0,   882,   883,     0,     0,
       0,     0,     0,     0,     0,    64,   884,     0,     0,     0,
    2496,     0,     0,   885,     0,   886,     0,     0,   887,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,    66,     0,     0,     0,     0,     0,     0,     0,
    1767,     0,  1768,     0,     0,     0,     0,     0,    67,  1769,
       0,     0,  1770,  2522,     0,     0,     0,     0,     0,     0,
    2525,   888,     0,  2527,     0,   889,     0,   890,   626,   627,
     628,   629,   630,   631,     0,     0,     0,     0,   891,     0,
       0,     0,     0,     0,     0,  -749,  -749,     0,  -749,  -749,
    -749,  -749,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   633,   892,   634,   635,   636,   637,
     638,   639,   640,     0,  2558,     0,     0,     0,   893,     0,
      68,     0,     0,     0,     0,     0,     0,     0,  2573,     0,
       0,     0,     0,  2199,  2199,     0,     0,     0,  1771,  2199,
       0,  1772,     0,   894,   895,  1261,     0,     0,     0,     0,
     641,     0,     0,     0,   896,     0,     0,     0,  1364,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   897,   898,
       0,     0,     0,     0,     0,   899,  2199,     0,     0,   900,
    2199,  2199,     0,     0,     0,     0,     0,   901,     0,     0,
     863,     0,     0,   864,  2638,   865,     0,   902,     0,     0,
     866,     0,     0,     0,     0,     0,   903,     0,   867,   642,
     643,   644,   645,   646,     0,   904,   647,   648,     0,     0,
     905,   906,     0,     0,   907,     0,   908,     0,     0,     0,
       0,     0,     0,   909,     0,     0,  1005,  1005,     0,     0,
       0,   868,   869,     0,     0,     0,  -749,     0,     0,   649,
       0,     0,   870,     0,     0,     0,     0,     0,     0,     0,
       0,  2711,     0,   871,   911,     0,   872,     0,     0,     0,
     912,     0,     0,     0,     0,   913,  1005,     0,     0,     0,
     873,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1005,  -749,  2741,  2741,     0,
       0,     0,   914,   874,     0,     0,     0,     0,   651,     0,
       0,   875,     0,   876,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2755,     0,     0,     0,
       0,     0,     0,  1773,     0,     0,  2758,  2762,     0,     0,
       0,     0,  2741,     0,   877,     0,     0,     0,     0,     0,
       0,     0,   653,     0,     0,   878,  2774,     0,     0,     0,
     879,     0,     0,   655,     0,  1005,     0,     0,     0,     0,
     863,     0,     0,   864,     0,   865,   656,     0,     0,     0,
     866,     0,     0,  1774,     0,     0,   880,     0,   867,     0,
       0,     0,     0,   881,  1775,     0,   882,   883,     0,     0,
       0,     0,     0,     0,     0,     0,   884,     0,     0,     0,
       0,     0,     0,   885,     0,   886,     0,     0,   887,     0,
       0,   868,   869,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   870,     0,     0,     0,     0,     0,     0,     0,
     660,   661,   662,   871,     0,     0,   872,     0,     0,  2373,
       0,     0,  2374,     0,     0,  2375,     0,     0,     0,     0,
     873,   888,     0,  2376,     0,   889,     0,   890,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   891,     0,
       0,     0,     0,   874,     0,     0,     0,     0,     0,     0,
       0,   875,     0,   876,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   892,     0,     0,     0,     0,
    2377,   664,   665,   666,     0,     0,     0,     0,   893,     0,
       0,     0,     0,     0,   877,     0,     0,     0,     0,  2378,
       0,     0,     0,     0,     0,   878,     0,     0,     0,   972,
     879,     0,     0,   894,   895,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   896,     0,   973,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   880,     0,   897,   898,
       0,     0,     0,   881,     0,   899,   882,   883,     0,   900,
       0,     0,     0,     0,     0,     0,   884,   901,     0,     0,
       0,     0,     0,   885,     0,   886,     0,   902,   887,     0,
       0,     0,     0,     0,     0,     0,   903,     0,  2379,     0,
       0,     0,     0,     0,     0,   904,  2380,     0,     0,     0,
     905,   906,     0,     0,   907,     0,   908,     0,     0,  2381,
       0,     0,     0,   909,     0,     0,     0,     0,     0,     0,
       0,   888,     0,     0,     0,   889,   910,   890,   974,   975,
     976,     0,     0,     0,     0,     0,     0,   977,   891,     0,
       0,  2382,     0,     0,   911,     0,     0,     0,   863,     0,
     912,   864,     0,   865,     0,   913,     0,     0,   866,     0,
       0,     0,  2383,     0,  2384,   892,   867,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   893,     0,
       0,     0,   914,     0,     0,     0,     0,     0,  2385,  2386,
       0,     0,     0,  1405,     0,   981,   982,   983,     0,   868,
     869,   984,     0,   894,   895,     0,     0,     0,     0,     0,
     870,     0,     0,     0,   896,     0,     0,     0,     0,  2387,
       0,   871,     0,     0,   872,     0,     0,     0,   897,   898,
       0,     0,     0,     0,     0,   899,     0,     0,   873,   900,
       0,     0,   985,     0,     0,     0,  2388,   901,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   902,     0,     0,
       0,   874,     0,     0,     0,     0,   903,     0,     0,   875,
       0,   876,  2389,     0,     0,   904,     0,     0,     0,  2390,
     905,   906,     0,     0,   907,     0,   908,     0,     0,     0,
       0,     0,  2391,   909,     0,     0,  2392,     0,     0,     0,
       0,     0,   877,     0,     0,     0,  1661,     0,     0,     0,
       0,     0,     0,   878,     0,     0,   987,     0,   879,     0,
       0,     0,     0,     0,   911,     0,     0,     0,     0,     0,
     912,     0,     0,     0,     0,   913,     0,  2393,     0,     0,
       0,     0,     0,     0,   880,     0,  2394,     0,     0,     0,
       0,   881,     0,     0,   882,   883,     0,     0,     0,     0,
       0,     0,   914,     0,   884,     0,     0,   988,   989,     0,
       0,   885,     0,   886,     0,  2395,   887,     0,     0,     0,
       0,     0,     0,     0,     0,  2396,     0,     0,     0,     0,
       0,  2397,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     993,     0,     0,     0,     0,  1036,     0,     0,     0,   888,
       0,     0,     0,   889,     0,   890,     0,     0,     0,     0,
     994,     0,     0,     0,     0,   995,   891,     0,     0,     0,
       0,     0,   996,     0,   137,     0,     0,  -362,     0,     0,
    -362,     0,     0,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,     0,   892,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   893,     0,     0,     0,
       0,  -362,     0,  -362,     0,     0,     0,     0,     0,     0,
    -362,     0,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     0,
       0,   894,   895,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   896,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   897,   898,     0,     0,
       0,     0,     0,   899,     0,     0,  -362,   900,     0,     0,
       0,     0,     0,     0,     0,   901,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   902,     0,     0,     0,     0,
       0,     0,     0,     0,   903,     0,     0,     0,     0,     0,
       0,     0,     0,   904,     0,     0,     0,  -362,   905,   906,
       0,     0,   907,     0,   908,     0,     0,     0,     0,     0,
       0,   909,   530,     0,     0,  -362,  -362,  -362,  -362,  -362,
       0,     0,  -362,  -362,     0,     0,  -362,     0,     0,     0,
       0,     0,  -362,     0,  -362,     0,     0,     0,     0,     0,
    -362,     0,   911,     0,     0,   972,     0,  -362,   912,     0,
       0,     0,     0,   913,     0,  -362,     0,     0,  1044,     0,
    1045,     0,   973,     0,     0,  1046,     0,     0,  -362,     0,
       0,  -362,     0,  1047,     0,     0,     0,  -362,     0,  -362,
     914,     0,     0,     0,     0,     0,     0,     0,  -362,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,  1048,  1049,     0,     0,
       0,     0,     0,     0,  -362,     0,     0,  1050,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1051,     0,
       0,  1052,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -362,  1053,     0,     0,     0,     0,
       0,     0,     0,     0,   974,   975,   976,  -362,  -362,     0,
       0,     0,     0,   977,     0,     0,  -362,     0,  1054,  -362,
       0,     0,     0,     0,   763,     0,  1055,     0,  1056,     0,
       0,     0,  -362,     0,  -362,  1057,     0,  1058,  1059,  1060,
    1061,  1062,  1063,  1064,  1065,     0,  1066,  1067,  1068,     0,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,  1078,
    -362,     0,     0,     0,     0,     0,     0,  -362,     0,   766,
    1079,   981,   982,   983,     0,  1080,     0,   984,     0,   767,
       0,     0,     0,     0,  -362,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -362,     0,  -362,  -362,  -362,     0,
       0,  1081,     0,     0,     0,     0,     0,     0,  1082,     0,
       0,  1083,  1084,     0,     0,     0,     0,     0,   985,     0,
       0,  1085,     0,     0,     0,     0,     0,     0,  1086,     0,
    1087,     0,     0,  1088,     0,     0,  -362,     0,     0,     0,
       0,  -362,     0,     0,     0,     0,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -362,     0,
       0,   768,     0,  -362,     0,     0,     0,  -362,  -362,  -362,
       0,     0,     0,     0,     0,     0,  1089,     0,     0,     0,
    1090,  -362,  1091,     0,     0,     0,     0,  -362,  -362,     0,
       0,     0,   987,  1092,   531,     0,     0,     0,     0,     0,
    1232,     0,     0,   761,     0,     0,  1537,  1538,  1539,     0,
       0,     0,     0,     0,  1540,     0,     0,     0,     0,     0,
    1093,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   769,     0,  1094,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,   989,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1095,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1096,
       0,     0,     0,     0,     0,     0,   770,     0,   972,     0,
       0,     0,     0,     0,  1097,  1232,   993,     0,   761,     0,
    1098,     0,     0,     0,  1099,   973,     0,     0,     0,     0,
       0,     0,  1100,     0,     0,     0,   994,     0,     0,     0,
       0,   995,  1101,     0,     0,     0,     0,     0,   996,     0,
     137,  1102,     0,     0,     0,     0,   771,     0,     0,     0,
    1103,     0,     0,     0,     0,  1104,  1105,     0,     0,  1106,
       0,  1107,     0,     0,     0,     0,     0,     0,  1108,     0,
       0,     0,     0,     0,     0,  1541,     0,     0,     0,     0,
       0,  1109,     0,   972,     0,  1542,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1110,
     973,     0,     0,     0,     0,  1111,     0,   974,   975,   976,
    1112,     0,     0,     0,     0,     0,   977,     0,     0,     0,
       0,     0,  1543,  1544,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1862,     0,     0,
       0,     0,     0,  1929,     0,     0,     0,     0,     0,     0,
    1234,  1545,  1546,     0,     0,     0,   979,     0,   980,     0,
       0,     0,   766,     0,   981,   982,   983,     0,     0,     0,
     984,     0,   767,     0,     0,     0,     0,  1235,     0,     0,
       0,     0,   974,   975,   976,     0,  1232,     0,     0,   761,
    1547,   977,  1537,  1538,  1539,     0,     0,     0,  1548,     0,
    1540,  1549,   763,     0,     0,     0,     0,     0,     0,  1550,
       0,   985,     0,     0,     0,     0,  1551,     0,     0,     0,
       0,  1552,     0,     0,     0,     0,     0,     0,     0,     0,
     986,     0,     0,     0,     0,  1234,     0,     0,     0,     0,
    1553,   979,     0,   980,     0,     0,     0,   766,     0,   981,
     982,   983,     0,     0,   768,   984,     0,   767,     0,     0,
       0,     0,  1235,     0,   972,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   973,     0,     0,     0,   987,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   985,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   986,     0,     0,     0,     0,
       0,     0,     0,     0,   769,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   988,   989,     0,   768,
       0,  1541,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1542,     0,     0,     0,     0,     0,  1554,     0,  1555,
       0,  1556,     0,     0,  1557,     0,  1558,  1559,  1560,   770,
     987,  1561,  1562,   974,   975,   976,     0,     0,     0,   993,
       0,     0,   977,     0,     0,     0,     0,     0,  1543,  1544,
       0,     0,     0,   763,     0,     0,     0,     0,     0,   994,
       0,     0,     0,     0,   995,     0,     0,     0,     0,   769,
       0,   996,     0,   137,     0,     0,     0,     0,     0,   771,
       0,   988,   989,     0,     0,     0,  1234,  1545,  1546,     0,
       0,     0,   979,     0,   980,     0,     0,     0,   766,     0,
     981,   982,   983,     0,     0,     0,   984,  1930,   767,     0,
       0,     0,     0,  1235,   770,     0,     0,     0,  1931,     0,
       0,     0,     0,     0,   993,     0,  1547,     0,     0,     0,
       0,     0,     0,     0,  1548,     0,     0,  1549,     0,     0,
       0,     0,     0,     0,   994,  1550,     0,   985,     0,   995,
       0,     0,  1551,     0,     0,     0,   996,  1552,   137,     0,
       0,     0,     0,     0,   771,     0,   986,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1553,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   529,     0,
     768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -362,
       0,     0,     0,     0,     0,     0,  1232,     0,     0,   761,
       0,   987,     0,     0,  -362,     0,     0,  -362,  -362,  -362,
    -362,  -362,  -362,  -362,     0,     0,     0,     0,     0,  -913,
       0,     0,  -913,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     769,     0,     0,  -362,     0,  -362,  -362,  -362,  -362,  -362,
    -362,  -362,   988,   989,     0,     0,     0,     0,     0,     0,
       0,     0,  1220,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1554,   972,  1555,     0,  1556,     0,     0,
    1557,     0,  1558,  1559,  1560,   770,  1233,  1561,  1562,  -362,
       0,   973,     0,     0,     0,   993,     0,  -913,     0,     0,
       0,     0, -1798,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -913,   994,     0,     0,     0,     0,
     995,     0,     0,     0,     0,     0,     0,   996,     0,   137,
       0,     0,     0,     0,     0,   771,     0,     0,     0,     0,
       0,  -362,     0,     0,     0,   530,     0,     0,  -362,  -362,
    -362,  -362,  -362,     0,     0,  -362,  -362,     0,     0,  1232,
       0,     0,   761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -362,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   974,   975,   976,     0,     0,  -362,     0,
       0,     0,   977,     0,     0,     0,     0,     0,     0,     0,
       0,  -362,     0,   763,  -362,     0,  -913,  -913,  -913,     0,
    -362,     0,     0,     0,     0,  -913,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -913,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1234,   972,     0,     0,
       0,     0,   979,     0,   980,     0,     0,  -362,   766,  1327,
     981,   982,   983,     0,   973,     0,   984,     0,   767,  -913,
       0,     0,     0,  1235,     0,  -913,     0,  -913,     0,     0,
       0,  -913,     0,  -913,  -913,  -913,     0,  -362,     0,  -913,
       0,  -913,     0,     0,     0,     0,  -913,     0,     0,     0,
       0,  -362,     0,     0,     0,  1232,     0,   985,   761,  -362,
       0,     0,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,   986,     0,     0,     0,
    -913,     0,     0,     0,     0,  -913,     0,  -362,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,  -913,
     768,     0,     0,     0,     0,     0,   974,   975,   976,     0,
       0,     0,     0,     0,     0,   977,     0,     0,     0,     0,
       0,     0,     0,  -913,     0,     0,   763,     0,     0,     0,
       0,   987,     0,   972, -1798,     0,     0,  -362,     0,  -362,
    -362,  -362,     0,     0,     0,     0,     0,     0,     0,     0,
     973,     0,     0,     0,  -913,     0,     0,     0,     0,  1234,
       0,     0,     0,  1384,     0,   979,  -362,   980,     0,     0,
     769,   766,     0,   981,   982,   983,     0,  1232,     0,   984,
     761,   767,   988,   989,  -362,     0,  1235,  -913,     0,     0,
       0,     0,     0,  -913,     0,     0,     0,     0,     0,     0,
       0,  -362,     0,     0,     0,  -913,  -913,     0,     0,     0,
    -362,  -362,  -362,     0,     0,   770,     0,     0,     0,     0,
     985,     0,     0,     0,  -362,   993,     0,     0,     0,     0,
       0,  -362,     0,     0,     0,     0,     0,   531,  -913,   986,
       0,     0,   974,   975,   976,   994,     0,     0,  -913,     0,
     995,   977,     0,     0,  -913,   972,     0,   996,     0,   137,
       0,     0,   763,   768,     0,   771,     0,  1389,  -913,     0,
       0,     0,   973,  -913,     0,     0, -1798,     0,     0,     0,
    -913,     0,  -913,     0,     0,     0,     0,     0,  -913,     0,
       0,     0,     0,     0,   987,  1234,     0,     0,     0,  1232,
       0,   979,   761,   980,     0,     0,     0,   766,     0,   981,
     982,   983,     0,     0,     0,   984,     0,   767,     0,     0,
       0,     0,  1235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   769,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   988,   989,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   985,     0,     0,     0,
       0,     0,     0,     0,   974,   975,   976,     0,     0,     0,
       0,     0,     0,   977,     0,   986,     0,   972,   770,     0,
       0,     0,     0,     0,   763,     0,     0,     0,   993,     0,
       0,     0,     0,     0,   973,     0,     0,     0,     0,   768,
       0,  -969,     0,     0,  -969,     0,     0,     0,   994,     0,
       0,     0,     0,   995,     0,     0,     0,  1234,     0,     0,
     996,     0,   137,   979,     0,   980,     0,     0,   771,   766,
     987,   981,   982,   983,     0,     0,     0,   984,     0,   767,
       0,     0,     0,     0,  1235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,     0,     0,     0,     0,     0,     0,     0,   985,  -969,
       0,   988,   989,     0,     0,     0,   974,   975,   976,     0,
       0,     0,     0,     0,     0,   977,  -969,   986,     0,     0,
    1232,     0,     0,   761,     0,     0,   763,     0,     0,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,   768,     0,  1232,   993,     0,   761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1234,
       0,     0,     0,     0,   994,   979,     0,   980,     0,   995,
       0,   766,   987,   981,   982,   983,   996,     0,   137,   984,
       0,   767,  1511,     0,   771,     0,  1235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   972,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -969,  -969,
    -969,   769,     0,     0,     0,   973,     0,  -969,     0,     0,
     985,   972,     0,   988,   989,     0,     0,     0,  -969,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   973,   986,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   770,     0,     0,     0,
       0,  -969,     0,   768,     0,     0,   993,  -969,     0,  -969,
       0,     0,     0,  -969,     0,  -969,  -969,  -969,     0,     0,
       0,  -969,     0,  -969,     0,     0,   994,     0,  -969,     0,
       0,   995,     0,     0,   987,     0,     0,     0,   996,     0,
     137,     0,     0,     0,     0,     0,   771,   974,   975,   976,
       0,     0,     0,     0,     0,     0,   977,     0,     0,     0,
       0,     0,  -969,     0,     0,     0,     0,   763,     0,     0,
     974,   975,   976,   769,  1657,     0,     0,     0,     0,   977,
       0,  -969,     0,     0,     0,   988,   989,     0,     0,     0,
     763,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1234,     0,     0,     0,  1474,  -969,   979,     0,   980,     0,
       0,     0,   766,     0,   981,   982,   983,     0,   770,     0,
     984,     0,   767,  1234,     0,     0,     0,  1235,   993,   979,
       0,   980,     0,     0,     0,   766,  -969,   981,   982,   983,
       0,     0,     0,   984,     0,   767,     0,     0,   994,     0,
    1235,  1232,     0,   995,   761,     0,     0,     0,     0,     0,
     996,   985,   137,     0,     0,     0,     0,     0,   771,     0,
       0,     0,     0,     0,     0,  -969,     0,     0,     0,     0,
     986,     0,     0,     0,   985,     0,     0,  -969,  -969,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   986,   768,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -969,     0,     0,     0,     0,     0,     0,   768,     0,   972,
    -969,     0,     0,     0,     0,   987,  1232,     0,     0,   761,
       0,     0,     0,     0,     0,     0,   973,     0,     0,     0,
    -969,     0,     0,     0,     0,  -969,     0,     0,   987,     0,
       0,     0,  -969,     0,  -969,     0,     0,     0,     0,     0,
    -969,     0,     0,  1232,   769,     0,   761,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   988,   989,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   769,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   988,
     989,     0,     0,     0,   972,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   993,
       0,   973,     0,     0,     0,     0,     0,     0,   974,   975,
     976,     0,   770,  1515,     0,     0,     0,   977,     0,   994,
       0,   972,   993,     0,   995,     0,     0,     0,   763,     0,
       0,   996,     0,   137,     0,     0,     0,     0,   973,   771,
       0,     0,   994,     0,     0,     0,     0,   995,     0,     0,
       0,     0,     0,     0,   996,     0,   137,     0,     0,     0,
       0,  1234,   771,     0,     0,     0,     0,   979,     0,   980,
       0,     0,     0,   766,     0,   981,   982,   983,     0,     0,
       0,   984,     0,   767,     0,     0,     0,     0,  1235,     0,
       0,     0,     0,   974,   975,   976,     0,     0,     0,     0,
       0,     0,   977,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,   985,     0,     0,     0,     0,     0,     0,     0,
     974,   975,   976,     0,     0,     0,     0,     0,     0,   977,
       0,   986,     0,     0,     0,     0,  1234,     0,     0,     0,
     763,     0,   979,     0,   980,     0,     0,     0,  1277,     0,
     981,   982,   983,     0,     0,   768,   984,     0,   767,     0,
       0,  1784,     0,  1235,   761,     0,     0,     0,     0,     0,
       0,     0,     0,  1234,     0,     0,     0,     0,     0,   979,
       0,   980,     0,     0,     0,   766,   987,   981,   982,   983,
       0,     0,     0,   984,     0,   767,     0,   985,     0,     0,
    1235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,  1950,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,     0,     0,   985,     0,     0,   988,   989,   972,
     768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   986,     0,     0,   973,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     770,   987,     0,     0,     0,     0,     0,   768,     0,     0,
     993,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     994,     0,     0,     0,     0,   995,     0,     0,   987,     0,
     769,     0,   996,     0,   137,     0,     0,     0,     0,     0,
     771,     0,   988,   989,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   769,   974,   975,
     976,     0,     0,     0,     0,   770,     0,   977,     0,   988,
     989,     0,     0,     0,     0,   993,     0,     0,   763,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   994,     0,     0,     0,     0,
     995,     0,   770,     0,     0,     0,     0,   996,     0,   137,
       0,  1234,   993,     0,     0,   771,     0,   979,     0,   980,
       0,     0,     0,   766,     0,   981,   982,   983,     0,     0,
       0,   984,   994,   767,     0,     0,     0,   995,  1235,     0,
     624,     0,     0,     0,   996,     0,   137,     0,     0,     0,
       0,     0,   771,     0,     0,   625,     0,     0,   626,   627,
     628,   629,   630,   631,   632,     0,     0,     0,     0,     0,
       0,     0,   985,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   986,     0,     0,   633,     0,   634,   635,   636,   637,
     638,   639,   640,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   768,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     641,     0,     0,     0,     0,     0,   987,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   988,   989,   642,
     643,   644,   645,   646,     0,     0,   647,   648,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     770,     0,     0,     0,     0,     0,     0,     0,     0,   649,
     993,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,   650,     0,     0,     0,     0,
     994, -1874,     0,     0,     0,   995,     0,     0,     0,     0,
       0,     0,   996,     0,   137,     0,     0,     0,     0,     0,
     771,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   651,     0,
       0,     0,     0,     0,     0,     0,   972,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   973,     0,     0,     0,     0,   652,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   653,     0,     0,     0,     0,     0,     0,     0,
     654,     0,     0,   655,     0,     0,     0,     0,     0,     0,
       0,  1709,     0,     0,  1710,     0,   656,  1711,   626,   627,
     628,   629,   630,   631,  1712,  1713,     0,     0,   657,     0,
       0,     0,     0,     0,     0,     0,   658,     0,     0,     0,
       0,     0,     0,     0,     0,  1714,     0,  1715,     0,     0,
       0,     0,     0,     0,   633,     0,   634,   635,   636,   637,
     638,   639,   640,     0,     0,   974,   975,   976,     0,     0,
       0,     0,     0,     0,   977,     0,     0,     0,   659,     0,
     660,   661,   662,     0,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     641,     0,     0,     0,     0,     0,     0,   663,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   978,     0,
       0,     0,     0,     0,   979,  -359,   980,     0,     0,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,     0,
     767,  1716, -1874,     0,     0,     0,     0,     0,     0,     0,
       0,   664,   665,   666,     0,     0,     0,     0,     0,   642,
     643,   644,   645,   646,     0,   667,   647,   648,     0,     0,
    1717,     0,   668,     0,     0,     0,  1718,     0,  1719,   985,
       0,     0,     0,     0, -1825,     0,     0,     0,     0,     0,
       0,  1720,     0,     0,     0,     0,     0,     0,   986,   649,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,     0,     0,   650,     0,     0,     0,     0,
       0,     0,   768,  1721,     0,     0,     0,     0,     0,     0,
       0,     0,  1722,     0,     0,   972,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1723,     0,     0,     0,
       0,     0,   973,   987,     0,     0,     0,     0,   651,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1724,     0,
       0,     0,   769,     0,     0,     0,     0,     0,     0,     0,
       0,  1725,   653,     0,   988,   989,     0,     0,     0,     0,
     654,     0,     0,   655,     0,     0,   972,     0,     0,     0,
       0,     0,     0,     0,     0,  1416,   656,     0,  1726,     0,
       0,     0,     0,   973,     0,   990,     0,   770,     0,   991,
     992,     0,     0,     0,   974,   975,   976,   993,     0,     0,
       0,     0,     0,   977,  1727,     0,     0,     0,     0,     0,
       0,  1728,     0,     0,   763,     0,     0,   994,     0,     0,
       0,     0,   995,     0,     0,     0,     0,     0,  1729,   996,
       0,   137,     0,     0,     0,     0,     0,   771,   659,     0,
     660,   661,   662,     0,     0,     0,     0,   978,     0,     0,
       0,     0,     0,   979,     0,   980,     0,     0,     0,   766,
       0,   981,   982,   983,     0,     0,     0,   984,     0,   767,
       0,     0,     0,     0,     0,   974,   975,   976,     0,     0,
    1730,     0,     0,     0,   977,  -652,     0,     0,     0,     0,
    1731,     0,     0,     0,     0,   763,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1732,   985,   972,
       0,   664,   665,   666,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   667,   973,   986,   978,     0,
       0,  1733,   668,     0,   979,     0,   980,     0,     0,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,     0,
     767,   768,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   987,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,   972,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   986,     0,
       0,   973,     0,     0,     0,     0,     0,     0,   974,   975,
     976,   769,     0,     0,     0,     0,     0,   977,     0,     0,
       0,     0,   768,   988,   989,     0,     0,     0,   763,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1435,     0,     0,     0,     0,     0,
       0,     0,     0,   987,   990,     0,   770,     0,   991,   992,
       0,   978,     0,     0,     0,     0,   993,   979,     0,   980,
       0,     0,     0,   766,     0,   981,   982,   983,     0,     0,
       0,   984,     0,   767,   972,     0,   994,     0,     0,     0,
       0,   995,   769,   974,   975,   976,     0,     0,   996,     0,
     137,   973,   977,     0,   988,   989,   771,     0,     0,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,   985,     0,     0,  1975,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   990,     0,   770,     0,   991,
     992,   986,     0,     0,     0,     0,   978,   993,     0,     0,
       0,     0,   979,     0,   980,     0,     0,     0,   766,     0,
     981,   982,   983,     0,     0,   768,   984,   994,   767,     0,
       0,     0,   995,     0,     0,   972,     0,     0,     0,   996,
       0,   137,     0,     0,     0,     0,     0,   771,     0,     0,
       0,     0,   973,   974,   975,   976,   987,     0,     0,     0,
       0,     0,   977,     0,     0,     0,     0,   985,     0,     0,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   978,   988,   989,     0,
     768,     0,   979,   972,   980,     0,     0,     0,   766,     0,
     981,   982,   983,     0,     0,     0,   984,     0,   767,     0,
     973,     0,     0,     0,     0,     0,     0,  2723,   990,     0,
     770,   987,   991,   992,   974,   975,   976,     0,     0,     0,
     993,     0,     0,   977,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,   985,     0,     0,
     994,     0,     0,     0,     0,   995,     0,     0,     0,     0,
     769,     0,   996,     0,   137,     0,   986,     0,     0,     0,
     771,     0,   988,   989,     0,     0,     0,   978,     0,     0,
       0,     0,     0,   979,     0,   980,     0,     0,     0,   766,
     768,   981,   982,   983,     0,     0,     0,   984,     0,   767,
     972,  1338,   974,   975,   976,   770,     0,     0,     0,     0,
       0,   977,     0,     0,     0,   993,     0,   973,     0,     0,
       0,   987,     0,     0,     0,     0,     0,     0,     0,  2724,
       0,     0,     0,     0,     0,   994,     0,     0,   985,     0,
     995,     0,     0,     0,     0,     0,     0,   996,     0,   137,
       0,     0,     0,     0,     0,   771,     0,   986,     0,     0,
     769,     0,     0,     0,     0,     0,     0,  1339,     0,   981,
     982,   983,   988,   989,     0,   984,     0,     0,     0,     0,
       0,   768,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   770,     0,   991,  1338,   974,
     975,   976,   987,     0,     0,   993,   985,     0,   977,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   994,     0,     0,     0,     0,
     995,     0,     0,     0,     0,     0,     0,   996,     0,   137,
       0,   769,     0,     0,     0,   771,     0,     0,     0,     0,
       0,     0,     0,   988,   989,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1405,     0,   981,   982,   983,     0,
       0,     0,   984,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,   770,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   993,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   985,     0,     0,   994,     0,     0,     0,
       0,   995,     0,     0,     0,     0,     0,     0,   996,     0,
     137,   988,   989,     0,     0,     0,   771,     0,     0,     0,
       0,     0,     0, -1898,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   993,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1178,     0,   987,     0,     0,
       0,     0,     0,     0,   994,     0,     0,     0,     0,   995,
       0,     0,     0, -1178,     0,     0,   996,   243,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   988,   989,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
   -1898,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   993,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0, -1178,     0,     0,     0,     0,     0,     0,     0,
       0,   994,     0,     0,     0,     0,   995,     0,     0,     0,
   -1178,     0,     0,   996,   243,   137
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2290)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     116,   968,   103,  1173,   105,   600,   601,   796,   855,   393,
     111,   395,  1124,   103,   366,   105,   692,  1452,   727,  1151,
    1213,   111,  1597,   657,  1452,   801,   791,  1232,  1492,   158,
     604,   800,  1452,   181,   135,  1452,  1127,  1452,   714,  1452,
    1804,   425,  1118,  2004,  1837,   135,  1374,  1603,    56,    57,
      58,   435,   404,  1541,  1137,     0,    64,    10,    18,  1264,
    2038,   209,    10,  1920,    28,  1363,    10,  1122,  1151,  1474,
    1272,  1532,    49,   668,    50,   705,     1,    50,   364,   755,
      58,     1,  1846,   184,     1,     0,    32,  1129,  1945,    18,
      60,    99,   100,   858,   102,  1137,    10,    10,    53,   107,
     108,    10,    99,     9,    90,    60,  1384,   113,   116,  1151,
       7,    23,  1190,  2213,  2071,    66,    60,   155,   117,   178,
    1383,  1526,  1276,   126,  1326,   133,  1204,    89,    60,   805,
     764,   765,    38,  1897,   177,   251,   168,   126,  1466,   173,
      50,   164,   179,    95,   179,   162,   227,  1259,   277,    60,
      50,   132,   160,   259,   118,   175,    32,   128,   205,  1768,
     246,   179,   234,   127,  1462,    73,   246,   239,   313,   162,
      33,  1247,   215,    34,    33,   254,   800,  1379,  2099,   295,
      90,   815,   205,   191,  2473,   335,   333,  1515,   234,  1594,
    1954,    23,  2170,   227,    22,   203,   141,   144,    22,   243,
     145,   235,  1356,   277,    60,    67,   161,    69,   244,    31,
     259,   265,  1168,   190,    28,   313,   846,   205,     1,   362,
     359,   369,   991,   415,   761,     1,   141,   132,   191,    12,
     145,   791,  2439,   979,   980,   411,   180,   246,   110,   205,
     986,   249,   399,  1012,   459,    67,   460,    69,   220,   257,
     113,   367,  1657,  2174,  1149,  1175,   243,   202,    73,    99,
     259,   259,  1304,   218,   219,   179,   234,  1140,  1116,   190,
     127,   294,   234,  1315,  1169,   128,  1124,  1125,    61,  1152,
     254,  2045,  1580,   257,   201,  1205,  1134,   202,   322,  1372,
     482,   212,   507,  1141,  1142,   113,   510,   306,   858,   243,
     457,  1257,   295,   840,   118,   298,   482,   345,  2515,   170,
      73,   259,  1160,  1161,     0,   394,    99,   272,   101,   393,
     103,   174,   234,   462,  1899,   423,  2183,   282,   111,   415,
    1372,   237,    73,   230,  1376,   415,   390,    73,    75,   311,
     127,  1017,   458,   444,   978,   446,   447,  2636,  1117,   347,
     314,   314,   453,   389,   978,   363,   446,   447,   381,   509,
      10,   504,   509,   453,  1662,   510,   990,   991,   992,   470,
     295,  2292,   473,   474,    73,   476,   362,   397,   479,   480,
     470,   352,  1870,   391,   167,  1790,   362,    10,  1012,   362,
    1668,  1879,   317,   381,   402,  1856,   259,  1675,  1859,     7,
     259,   346,   234,   411,   412,   381,   414,   415,   381,   270,
     516,   457,   420,  1182,  1183,  1184,   313,  1587,   370,  1474,
    2029,   468,   503,   509,   800,     1,  1195,  1196,   507,   437,
     474,   346,   254,  1202,   274,   467,   407,   174,   510,   259,
    1531,   458,   543,   544,   205,   426,   454,   358,  1296,  1023,
    1024,   510,   362,   543,   544,   406,    35,   259,  1612,    55,
     428,   510,   362,  1139,  2228,   458,   375,   510,   421,  1767,
      39,  1526,   510,   510,   336,   510,   510,   260,    47,  1327,
     581,   457,   598,   489,   457,   488,   509,   474,    64,   605,
     442,   581,   510,  1117,   471,   403,  1272,   321,  1574,   488,
     340,   277,   468,   604,  2268,  1251,  2270,   515,  1591,  2609,
     457,   510,   457,   510,   336,  1139,    92,    93,   504,   448,
     452,  1145,   468,   306,   810,   503,  1696,   535,   504,  1605,
     474,   504,   509,  2490,  2491,  1798,   652,  2301,  1386,  1594,
     457,   511,   457,   505,  1168,   509,   454,   507,   556,  1591,
     558,  1175,   457,   561,   562,   457,   564,   658,  1182,  1183,
    1184,  1185,   510,   516,   214,   510,  1190,  2331,  2332,   466,
    1848,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,  1784,
    1204,  1205,  2439,  2139,  1214,   510,  1788,   595,   403,  1631,
     510,  1889,   468,   502,   504,   510,   510,   510,   510,   607,
    1234,   507,  1657,  1379,   504,   510,   214,  1685,   464,   259,
    1234,  2220,   395,   469,   990,   991,   992,   393,    59,   269,
    2413,    62,   359,   578,  2085,    66,  1474,    10,  1926,   447,
     206,   459,   419,  1257,   452,   459,  1012,   509,   510,   454,
     403,   259,   470,   156,   213,   253,   470,   255,   244,   464,
     259,   259,   509,   510,   469,   438,    59,   612,   234,   667,
     776,   269,   403,    66,  1512,   781,    40,   403,   259,   292,
     510,   458,   259,  2078,   457,  2080,   245,  1525,  1526,   259,
    1992,   457,   798,    60,  2016,   786,   787,   509,   145,   259,
     510,   454,   453,  1944,  1864,  2673,   516,   845,   202,   268,
     708,   351,   803,   711,   403,   284,   285,   286,   510,   132,
     274,  2672,   259,   454,  2119,  1563,    50,  1341,   454,   327,
    1796,   259,   509,   191,   318,   462,  1502,   510,   173,   265,
    1499,   354,   326,  2497,  2498,  1790,   259,  1121,     7,  1123,
    1116,  1117,   116,   351,    64,   452,  1594,   334,  1124,  1125,
     326,  1793,   236,    27,   323,   454,   292,   220,  1134,   312,
     214,   314,  1146,  2110,  1148,  1141,  1142,  2172,   291,  1153,
     349,   421,    92,    93,    67,   128,    69,   289,   274,   800,
     335,   313,   227,  1167,  1160,  1161,   259,  1635,  2696,  2481,
     235,   314,   231,   389,     1,   172,   503,   231,  1646,  1175,
    2288,  1649,  2100,  2081,    10,   259,  1182,  1183,  1184,  1657,
     233,   334,  1895,   421,   383,   269,   466,   164,   291,  1195,
    1196,  1197,  1198,  1199,  1200,  1201,  1202,   339,     7,  1205,
     271,   214,  2740,  1467,    41,    42,    43,    44,    45,   198,
     457,  1138,   346,    10,   452,    51,    13,  2539,   225,    16,
      17,   967,   254,  1895,  1896,  2430,   319,  2185,   466,  1493,
     510,   334,  1238,  1639,   259,   239,   516,  1164,   271,  1981,
     419,    78,    79,   296,  1448,  1499,   259,   322,  1262,   125,
    2178,   457,   469,   415,  2216,    10,   269,   156,   452,   346,
    1274,  2203,   510,   472,   473,    87,   230,   351,   477,   367,
     259,   510,   510,  2154,   345,  1281,   259,   516,   516,   458,
     479,   120,   121,   122,   234,   421,   510,  1033,   402,   510,
    1296,  1690,  1023,  1024,   198,  1519,  1520,  1521,  1522,   516,
     510,   427,  2507,   429,   160,    60,   375,  1613,  2070,  2071,
     510,   375,   345,  2290,  2291,   214,   469,   294,   209,   210,
     482,  1327,    10,   205,   509,   510,   351,   978,     7,    59,
     401,   254,   548,   510,  1588,   406,    66,   421,   351,   990,
     991,   992,   510,   509,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   162,   253,   411,   255,   248,   249,  1613,
     259,  1012,   394,   516,   259,  2086,   469,   392,   401,    31,
     269,  2557,    60,   406,   590,   274,   326,   233,   214,   474,
    1386,   476,  1788,   411,   479,  1391,  2554,  1118,  1694,  1316,
       7,  1122,  1358,  2078,   206,  2080,   421,   292,  1129,  1130,
      31,   240,   273,   407,   620,   214,  1137,  2242,   421,  1140,
     246,   247,  1718,   336,  1145,   254,  1147,  2138,  1149,  1150,
    1151,  1152,   234,   259,   457,   180,   482,   563,   327,  2523,
      92,  1685,   516,   269,  2119,   222,  1690,   411,  1169,   510,
     322,   297,   277,  1409,   253,  2117,   255,   126,  2425,   456,
     259,  2619,   351,   466,   482,  1933,  2642,   464,   465,   214,
     269,   346,   469,   334,  1718,  1392,  1117,   254,  1474,   411,
    2212,  1122,   457,     0,  2539,  1700,  1701,   510,  1129,   110,
     141,  2539,   218,   280,   281,  1263,  1137,  2172,   243,  2539,
    1504,   516,  2539,  1499,  2539,   109,  2539,   260,   335,   130,
    1151,   340,   238,   516,   259,   119,  1512,   457,   482,   306,
     307,   348,   259,   352,   269,   351,  1247,  1781,   327,  1525,
    1526,   356,   421,   358,  1175,   510,   214,   274,    31,   265,
     195,  1182,  1183,  1184,  1185,   214,  1267,  1315,   169,  1190,
     482,   271,   351,  2640,  1195,  1196,  1197,  1198,  1199,  1200,
    1201,  1202,   765,  1204,  1205,   243,   292,  1563,   201,   265,
     191,   178,  2767,   464,    67,    27,    69,   466,   469,   356,
     461,   259,   463,  1304,   253,   206,   255,   364,   214,   326,
     259,   269,  1588,  1234,  1315,   421,   292,   311,  1594,   457,
     269,   256,  1987,   464,   174,  2665,   351,   214,   469,  1823,
    2697,  2698,   815,    13,   443,  1383,    16,    17,   356,   399,
       7,   510,   421,  1837,   141,   345,  1267,   516,   145,   343,
      59,    36,   190,   259,    39,   190,   206,    66,  1359,  1635,
     466,    46,    47,   269,   218,   219,   253,  2043,   255,   363,
    1646,  1372,   259,  1649,   212,  1376,  2716,   212,   327,   458,
    2128,  1657,   269,  1304,   238,   361,  1221,   466,   234,     7,
    1225,    57,   292,   351,  1315,  1929,   421,   764,   765,   417,
     418,   401,   351,   510,     9,   202,   406,   440,   265,    94,
     516,   265,  1413,   259,  1690,   328,   329,   180,  2166,  2167,
     764,   765,   800,  1413,   324,   456,    92,  1679,   487,   259,
    2523,   510,   345,    38,   465,   292,    29,   516,   292,  1487,
     327,   466,  1363,   109,   345,   351,   505,  1448,   815,   474,
     174,  1372,  2061,   119,  2201,  1376,   356,   457,  2490,  2491,
    2415,  2493,  2417,   421,   351,   416,   312,   500,   314,  1124,
    2046,   815,   421,  1474,   214,    48,   239,   510,   163,   242,
       9,   254,   206,  2588,   457,   510,   399,   265,   455,  1984,
    1985,   516,    65,   510,   356,  2164,   358,   464,     9,   516,
     506,  2000,   469,   452,   480,  2039,  1161,   192,   466,    38,
    2634,  2635,   457,   464,   292,   421,   474,   466,   469,   259,
    2019,  2020,     9,  2099,  2023,  1526,  2274,    38,   213,   269,
     265,  2543,   105,   509,   421,     2,   129,   557,  1446,   488,
       7,  1462,   562,  1451,  1452,   342,  1454,   214,  1596,   346,
    2674,    38,   510,  1474,  2624,    56,    57,   292,   516,    16,
     466,   510,   271,   336,   214,  2064,   457,   516,   265,  2693,
    2069,  1421,  1620,  1574,   454,  1425,    33,   451,  1499,   466,
      13,    14,  1432,   268,   464,    42,   253,   510,   255,   469,
    1591,    92,   259,  1594,   468,   292,   214,  1645,  2174,    32,
     280,   281,   269,  1632,  1605,  1526,   384,   428,   109,   259,
     516,   351,   990,   991,   992,   250,   251,  1901,   119,   269,
     459,   214,   509,   510,   164,   410,   306,   307,   168,   516,
    1631,   470,   454,   459,  1012,   253,   345,   255,   323,  2763,
    2164,   259,   464,  1659,   470,    99,   100,   469,  2337,   455,
    2339,   269,   506,  2723,   454,   509,  1657,  1933,   464,  1580,
     327,   234,   180,   469,   464,   234,   259,  1588,   241,   469,
    1591,   254,   190,  1594,   257,   457,   269,  2747,  1536,   252,
    1681,   421,   304,   305,   351,  1744,  2185,   356,  2436,   358,
     283,  1681,   401,   399,   212,  1754,  1755,   406,   383,  1758,
     410,   351,   491,   492,   493,   494,  1183,  1184,  1724,   327,
    1631,   396,   491,   492,   493,   494,  2292,    60,  1576,   491,
     492,   493,   494,  2493,   242,   220,   466,   254,   176,  1745,
     257,   509,   510,   351,   457,  1643,  1657,  1115,   256,  1117,
     457,  1662,  1120,  1601,  2357,   356,  1124,   358,   457,   416,
     159,  2499,   161,   457,   421,  2503,  2504,   159,   351,   161,
      68,  1139,    70,   990,  1685,   992,  2633,  1145,   457,  1690,
    2459,   421,  1682,  1683,  1684,   457,   516,   510,  1688,  1197,
    1198,  1691,  1692,   356,   357,  1786,    71,   457,  1166,  1790,
    1168,  1699,  1793,   457,   479,  1796,   510,  1175,   371,   466,
     373,   457,  1710,   421,  1182,  1183,  1184,  1185,   510,  1717,
     345,   474,  1190,  1199,  1200,  1201,   466,  1195,  1196,  1197,
    1198,  1199,  1200,  1201,  1202,   326,  1204,  1205,   421,   330,
     331,   424,   425,   259,   259,   201,  2120,  2607,  1746,  2609,
     448,   405,   510,   510,   406,  1846,  1767,   415,   466,   516,
      66,    62,  2128,  1901,   259,  1233,   234,   457,   333,   406,
     510,  2113,   259,   510,   231,  1786,   516,  2366,    27,  1790,
     371,  2370,  1793,  2643,  2644,   457,  2646,   457,   110,  1257,
     457,  1259,  2652,  2653,   457,   317,   387,   388,  2164,   259,
    2166,  2167,   510,   275,  1895,  1896,  1897,  1805,   516,   628,
     629,   630,   631,   259,  1952,  1934,  1935,  1936,  1937,  1938,
    1939,  1940,  1941,  1961,  1962,   460,  1824,    24,  2531,  2532,
     105,    10,  1830,   516,  2537,  1846,   457,   443,   191,   125,
     460,   504,    18,    89,   510,   457,   399,   275,   356,   407,
     406,    59,   509,   428,   265,    40,   239,   457,   407,   510,
     336,  1809,   512,  1954,   510,   424,   321,   315,  1816,   399,
     264,  2574,     8,  1341,   457,  2578,  2579,   457,  1889,  1890,
     399,   258,   510,   457,  1895,  1896,  1897,   509,   457,  1980,
     399,   371,    88,   457,   457,  1363,    88,  2486,  2487,   127,
    1980,   437,   457,   399,  1995,   394,    85,  2013,  2274,  2000,
      23,   311,   507,   314,   457,  1926,   399,   206,   510,  1867,
     510,  1389,   457,   102,   505,   507,   389,   234,  2019,  2020,
     257,   510,  2023,   220,   452,   125,    54,   510,   516,   452,
     468,   448,    27,  1954,   405,   311,   415,   453,   353,   510,
     198,   451,   457,   457,  2045,   448,   468,   259,   510,   381,
     404,   341,   510,   117,  2070,  2071,   468,   468,  1966,   172,
     468,   468,   190,  2064,  1922,   259,   457,   468,  2069,  2070,
    2071,   510,  2120,   468,   468,   452,   468,  2078,   225,  2080,
     468,  2129,   457,   457,  1462,   314,   510,   459,    36,   510,
     510,    39,   408,    31,   133,  2003,   134,  2005,    46,    47,
     198,  2009,   452,   135,   137,   194,   195,   196,   391,  2017,
    2634,  2635,   136,   356,   203,   140,  2117,   138,  2119,   139,
     503,  1499,   104,   447,  2045,   214,   468,   452,   143,    50,
     409,   451,   451,   445,   448,   146,   198,   147,   274,   148,
      32,   149,   505,   150,    50,   151,    94,   152,   198,   153,
    2674,   115,   154,   222,   454,   454,   454,  2078,   454,  2080,
    2436,   117,   454,   454,   452,   415,  2024,   317,   457,  2693,
     259,  2172,   261,   262,   263,   112,   205,   199,   267,  2100,
     269,   452,  2040,   225,  2185,   259,   381,  2108,  2189,   344,
     275,   299,   233,   303,   168,   490,  2117,   131,  2119,  2189,
     507,  2059,  1580,   178,  2112,   507,   370,   452,   171,   132,
    1588,   230,   452,    50,  2709,   163,   230,   198,   206,   308,
     168,   304,  2506,  2499,    59,   168,  1604,  2503,  2504,   206,
    2088,   457,   510,   515,  2092,  1613,   254,   514,   275,  2763,
     239,   428,   452,  2164,   192,   304,  1624,   205,   279,   452,
     385,  2172,   367,   300,    31,   205,   205,  2178,    18,   448,
     131,   142,   351,    50,   452,   213,   370,  2268,   144,  2270,
     205,  2555,     9,  2131,  1652,   132,   198,   507,   205,   507,
     428,   457,   452,    10,  1662,     8,   510,   509,   205,   302,
     509,   504,    50,   382,   191,   504,   299,  2298,   296,   265,
    2301,   467,   319,   116,    48,   335,   318,  1685,  2298,   442,
     205,   416,  1690,   299,   205,   366,   105,   366,   385,    50,
     268,   265,   301,   239,   498,    98,   297,    59,     3,     9,
    1708,  2332,   421,    50,   113,   462,   265,   265,   457,     5,
    1718,   342,   112,   487,   433,   434,   265,  2268,   342,  2270,
       7,  2352,  1730,    10,    20,  1733,   212,   110,  2634,  2635,
     457,   345,  2352,   223,    30,  2366,   423,  2225,   304,  2370,
     234,    46,   372,  2231,   122,   323,   198,   466,   288,   291,
    2301,   342,    50,  2241,   326,   326,   311,   476,   318,  1767,
     430,     7,    67,    68,    69,    70,    46,    92,  2674,    26,
      66,   127,   326,   201,   206,  1783,   148,   496,    75,   221,
     238,  2332,   501,   177,  2415,   150,  2417,  2693,   616,   508,
     410,   510,  2330,   504,   520,  1900,   538,   516,    85,   425,
     544,   286,  2433,  1032,   787,   383,   497,  1452,  2721,  1411,
    1673,   754,  1893,  2187,   805,   102,  1991,  2646,   396,  2652,
    1041,  2083,  1757,  2311,   858,  2213,  2314,  2315,   115,   794,
    1230,  1840,  1756,  2385,  1792,  2398,  2374,  1247,  2081,  2327,
    1512,  2379,  1485,  1487,  2490,  2491,  2266,  1531,  1534,  1859,
    2085,  1300,  1577,  2341,  2342,  2486,  2487,  2763,  2284,  2490,
    2491,  1584,  2493,  2108,  2415,  1887,  2417,  1595,  2782,  1336,
    2120,  1341,  2127,  1913,  1962,  1625,  2141,  1942,  1372,  1370,
    1152,  1889,  1890,  2167,  1386,  1961,  2335,  1961,  2716,  1672,
    2439,  2345,  2340,  1563,   299,  1359,  2160,  2160,  1482,  2160,
    2438,   479,  2160,   152,   699,  1929,   211,   194,   195,   196,
    1918,  1718,   270,   242,   995,   581,   203,  2405,  1926,   417,
    2565,   759,   509,  2554,  2687,   215,   222,   214,  2427,  1949,
     450,  2097,   237,  2471,  2472,  1892,  2474,   718,   560,  2585,
    2636,  1587,    -1,   230,    -1,  1953,    -1,    -1,    -1,   254,
      -1,  2489,  1960,  1961,    -1,    -1,    -1,    -1,   254,    -1,
     247,  2449,    -1,    -1,    -1,    -1,   253,  2505,   255,   265,
      -1,    -1,   259,  1981,   261,   262,   263,    -1,  1986,    -1,
     267,    -1,   269,  1991,  1992,   290,  2632,   274,  2619,    -1,
      -1,    -1,  2530,    -1,    -1,    -1,    -1,  2535,  2536,    -1,
      -1,    -1,    -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,  2556,    -1,
      -1,   308,  2668,  2669,   320,    -1,    -1,   332,    -1,   325,
      -1,    -1,    -1,   338,  2665,    -1,    -1,    -1,  2046,    -1,
     327,    -1,    -1,    -1,    -1,    -1,  2584,    -1,    -1,  2587,
      -1,    -1,  2590,  2591,    -1,    -1,    -1,    -1,    -1,    -1,
     356,    61,    -1,    -1,   351,    -1,    -1,    -1,   364,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   377,  2090,  2634,  2635,  2716,    -1,    -1,    -1,    -1,
      -1,  2099,  2100,    -1,    -1,   382,    -1,    -1,    -1,    99,
    2108,   101,    -1,   103,    -1,   410,    -1,    -1,    -1,    -1,
     406,   111,    -1,   409,   419,    -1,    -1,    -1,    -1,  2127,
    2751,   417,    -1,  2674,  2770,    -1,    -1,    -1,    -1,    -1,
      -1,   436,   428,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2693,    -1,    -1,    -1,   433,   434,  2156,    -1,
      -1,    -1,   457,    -1,    -1,    -1,  2164,    -1,    -1,    -1,
      -1,   457,    -1,    -1,   460,    -1,  2174,   167,    -1,    -1,
    2178,    -1,    -1,   478,    -1,    -1,    -1,    -1,    -1,   466,
       1,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,   476,
      11,    -1,   497,    -1,    -1,  2203,    -1,    -1,    19,   504,
     505,    -1,    -1,    -1,  2212,    -1,    -1,    -1,    -1,   496,
      -1,    -1,  2763,    -1,   501,    -1,    -1,    -1,    -1,    -1,
      -1,   508,    -1,   510,    -1,    -1,    -1,    -1,   228,   516,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,  2247,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,
     260,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2292,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    25,
      26,   122,    -1,   124,    -1,    -1,   306,    -1,    -1,   309,
     131,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,   166,    72,    -1,    -1,  2357,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   374,    -1,   197,    -1,    -1,    -1,
     106,   107,   108,   204,    -1,    -1,   207,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   395,   217,    -1,    -1,    -1,
    2408,    -1,    -1,   224,    -1,   226,    -1,    -1,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     420,    -1,   422,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,   158,    -1,    -1,    -1,    -1,    -1,   438,   165,
      -1,    -1,   168,  2451,    -1,    -1,    -1,    -1,    -1,    -1,
    2458,   272,    -1,  2461,    -1,   276,    -1,   278,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,   297,    -1,   299,   300,
     301,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,   316,    78,    79,    80,    81,
      82,    83,    84,    -1,  2512,    -1,    -1,    -1,   329,    -1,
     510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2526,    -1,
      -1,    -1,    -1,  2531,  2532,    -1,    -1,    -1,   254,  2537,
      -1,   257,    -1,   354,   355,  2543,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,   365,    -1,    -1,    -1,   274,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   379,   380,
      -1,    -1,    -1,    -1,    -1,   386,  2574,    -1,    -1,   390,
    2578,  2579,    -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,
       1,    -1,    -1,     4,  2592,     6,    -1,   408,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,   417,    -1,    19,   181,
     182,   183,   184,   185,    -1,   426,   188,   189,    -1,    -1,
     431,   432,    -1,    -1,   435,    -1,   437,    -1,    -1,    -1,
      -1,    -1,    -1,   444,    -1,    -1,  2634,  2635,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,   457,    -1,    -1,   221,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2659,    -1,    74,   475,    -1,    77,    -1,    -1,    -1,
     481,    -1,    -1,    -1,    -1,   486,  2674,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2693,   507,  2695,  2696,    -1,
      -1,    -1,   513,   114,    -1,    -1,    -1,    -1,   280,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2724,    -1,    -1,    -1,
      -1,    -1,    -1,   449,    -1,    -1,  2734,  2735,    -1,    -1,
      -1,    -1,  2740,    -1,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,   166,  2754,    -1,    -1,    -1,
     171,    -1,    -1,   335,    -1,  2763,    -1,    -1,    -1,    -1,
       1,    -1,    -1,     4,    -1,     6,   348,    -1,    -1,    -1,
      11,    -1,    -1,   499,    -1,    -1,   197,    -1,    19,    -1,
      -1,    -1,    -1,   204,   510,    -1,   207,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,   224,    -1,   226,    -1,    -1,   229,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     412,   413,   414,    74,    -1,    -1,    77,    -1,    -1,    33,
      -1,    -1,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      91,   272,    -1,    47,    -1,   276,    -1,   278,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,    -1,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,
      94,   483,   484,   485,    -1,    -1,    -1,    -1,   329,    -1,
      -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,   113,
      -1,    -1,    -1,    -1,    -1,   166,    -1,    -1,    -1,    85,
     171,    -1,    -1,   354,   355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   365,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,   379,   380,
      -1,    -1,    -1,   204,    -1,   386,   207,   208,    -1,   390,
      -1,    -1,    -1,    -1,    -1,    -1,   217,   398,    -1,    -1,
      -1,    -1,    -1,   224,    -1,   226,    -1,   408,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   417,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,   426,   200,    -1,    -1,    -1,
     431,   432,    -1,    -1,   435,    -1,   437,    -1,    -1,   213,
      -1,    -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,   276,   457,   278,   194,   195,
     196,    -1,    -1,    -1,    -1,    -1,    -1,   203,   289,    -1,
      -1,   245,    -1,    -1,   475,    -1,    -1,    -1,     1,    -1,
     481,     4,    -1,     6,    -1,   486,    -1,    -1,    11,    -1,
      -1,    -1,   266,    -1,   268,   316,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,
      -1,    -1,   513,    -1,    -1,    -1,    -1,    -1,   292,   293,
      -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    52,
      53,   267,    -1,   354,   355,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,   365,    -1,    -1,    -1,    -1,   323,
      -1,    74,    -1,    -1,    77,    -1,    -1,    -1,   379,   380,
      -1,    -1,    -1,    -1,    -1,   386,    -1,    -1,    91,   390,
      -1,    -1,   308,    -1,    -1,    -1,   350,   398,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   408,    -1,    -1,
      -1,   114,    -1,    -1,    -1,    -1,   417,    -1,    -1,   122,
      -1,   124,   376,    -1,    -1,   426,    -1,    -1,    -1,   383,
     431,   432,    -1,    -1,   435,    -1,   437,    -1,    -1,    -1,
      -1,    -1,   396,   444,    -1,    -1,   400,    -1,    -1,    -1,
      -1,    -1,   155,    -1,    -1,    -1,   457,    -1,    -1,    -1,
      -1,    -1,    -1,   166,    -1,    -1,   382,    -1,   171,    -1,
      -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,    -1,
     481,    -1,    -1,    -1,    -1,   486,    -1,   441,    -1,    -1,
      -1,    -1,    -1,    -1,   197,    -1,   450,    -1,    -1,    -1,
      -1,   204,    -1,    -1,   207,   208,    -1,    -1,    -1,    -1,
      -1,    -1,   513,    -1,   217,    -1,    -1,   433,   434,    -1,
      -1,   224,    -1,   226,    -1,   479,   229,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   489,    -1,    -1,    -1,    -1,
      -1,   495,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     476,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,   272,
      -1,    -1,    -1,   276,    -1,   278,    -1,    -1,    -1,    -1,
     496,    -1,    -1,    -1,    -1,   501,   289,    -1,    -1,    -1,
      -1,    -1,   508,    -1,   510,    -1,    -1,    33,    -1,    -1,
      36,    -1,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,
      -1,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    78,    79,    80,    81,    82,    83,    84,    -1,
      -1,   354,   355,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   379,   380,    -1,    -1,
      -1,    -1,    -1,   386,    -1,    -1,   122,   390,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   408,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   426,    -1,    -1,    -1,   163,   431,   432,
      -1,    -1,   435,    -1,   437,    -1,    -1,    -1,    -1,    -1,
      -1,   444,   178,    -1,    -1,   181,   182,   183,   184,   185,
      -1,    -1,   188,   189,    -1,    -1,   192,    -1,    -1,    -1,
      -1,    -1,   198,    -1,   200,    -1,    -1,    -1,    -1,    -1,
     206,    -1,   475,    -1,    -1,    85,    -1,   213,   481,    -1,
      -1,    -1,    -1,   486,    -1,   221,    -1,    -1,     4,    -1,
       6,    -1,   102,    -1,    -1,    11,    -1,    -1,   234,    -1,
      -1,   237,    -1,    19,    -1,    -1,    -1,   243,    -1,   245,
     513,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   268,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,   280,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,   323,   324,    -1,
      -1,    -1,    -1,   203,    -1,    -1,   332,    -1,   114,   335,
      -1,    -1,    -1,    -1,   214,    -1,   122,    -1,   124,    -1,
      -1,    -1,   348,    -1,   350,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     376,    -1,    -1,    -1,    -1,    -1,    -1,   383,    -1,   259,
     166,   261,   262,   263,    -1,   171,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,   400,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   410,    -1,   412,   413,   414,    -1,
      -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,
      -1,   207,   208,    -1,    -1,    -1,    -1,    -1,   308,    -1,
      -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,
     226,    -1,    -1,   229,    -1,    -1,   452,    -1,    -1,    -1,
      -1,   457,    -1,    -1,    -1,    -1,   462,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   474,    -1,
      -1,   351,    -1,   479,    -1,    -1,    -1,   483,   484,   485,
      -1,    -1,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
     276,   497,   278,    -1,    -1,    -1,    -1,   503,   504,    -1,
      -1,    -1,   382,   289,   510,    -1,    -1,    -1,    -1,    -1,
       7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
     316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   421,    -1,   329,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   354,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   365,
      -1,    -1,    -1,    -1,    -1,    -1,   466,    -1,    85,    -1,
      -1,    -1,    -1,    -1,   380,     7,   476,    -1,    10,    -1,
     386,    -1,    -1,    -1,   390,   102,    -1,    -1,    -1,    -1,
      -1,    -1,   398,    -1,    -1,    -1,   496,    -1,    -1,    -1,
      -1,   501,   408,    -1,    -1,    -1,    -1,    -1,   508,    -1,
     510,   417,    -1,    -1,    -1,    -1,   516,    -1,    -1,    -1,
     426,    -1,    -1,    -1,    -1,   431,   432,    -1,    -1,   435,
      -1,   437,    -1,    -1,    -1,    -1,    -1,    -1,   444,    -1,
      -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,
      -1,   457,    -1,    85,    -1,   172,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   475,
     102,    -1,    -1,    -1,    -1,   481,    -1,   194,   195,   196,
     486,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,
      -1,    -1,   209,   210,    -1,    -1,    -1,   214,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   513,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   234,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   248,   249,    -1,    -1,    -1,   253,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,    -1,
     267,    -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,
      -1,    -1,   194,   195,   196,    -1,     7,    -1,    -1,    10,
     287,   203,    13,    14,    15,    -1,    -1,    -1,   295,    -1,
      21,   298,   214,    -1,    -1,    -1,    -1,    -1,    -1,   306,
      -1,   308,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,
      -1,   318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     327,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
     337,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,   351,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,    -1,    -1,   382,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,   351,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,    -1,    -1,   454,    -1,   456,
      -1,   458,    -1,    -1,   461,    -1,   463,   464,   465,   466,
     382,   468,   469,   194,   195,   196,    -1,    -1,    -1,   476,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,   209,   210,
      -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,   496,
      -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,   421,
      -1,   508,    -1,   510,    -1,    -1,    -1,    -1,    -1,   516,
      -1,   433,   434,    -1,    -1,    -1,   247,   248,   249,    -1,
      -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,   459,   269,    -1,
      -1,    -1,    -1,   274,   466,    -1,    -1,    -1,   470,    -1,
      -1,    -1,    -1,    -1,   476,    -1,   287,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   295,    -1,    -1,   298,    -1,    -1,
      -1,    -1,    -1,    -1,   496,   306,    -1,   308,    -1,   501,
      -1,    -1,   313,    -1,    -1,    -1,   508,   318,   510,    -1,
      -1,    -1,    -1,    -1,   516,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,    -1,    10,
      -1,   382,    -1,    -1,    37,    -1,    -1,    40,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     421,    -1,    -1,    76,    -1,    78,    79,    80,    81,    82,
      83,    84,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   454,    85,   456,    -1,   458,    -1,    -1,
     461,    -1,   463,   464,   465,   466,    97,   468,   469,   122,
      -1,   102,    -1,    -1,    -1,   476,    -1,    85,    -1,    -1,
      -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   496,    -1,    -1,    -1,    -1,
     501,    -1,    -1,    -1,    -1,    -1,    -1,   508,    -1,   510,
      -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,    -1,    -1,
      -1,   174,    -1,    -1,    -1,   178,    -1,    -1,   181,   182,
     183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,   221,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   234,    -1,   214,   237,    -1,   194,   195,   196,    -1,
     243,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    85,    -1,    -1,
      -1,    -1,   253,    -1,   255,    -1,    -1,   280,   259,    97,
     261,   262,   263,    -1,   102,    -1,   267,    -1,   269,   247,
      -1,    -1,    -1,   274,    -1,   253,    -1,   255,    -1,    -1,
      -1,   259,    -1,   261,   262,   263,    -1,   310,    -1,   267,
      -1,   269,    -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,
      -1,   324,    -1,    -1,    -1,     7,    -1,   308,    10,   332,
      -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   348,   327,    -1,    -1,    -1,
     308,    -1,    -1,    -1,    -1,   313,    -1,   360,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,   327,
     351,    -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   351,    -1,    -1,   214,    -1,    -1,    -1,
      -1,   382,    -1,    85,   362,    -1,    -1,   410,    -1,   412,
     413,   414,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,   382,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,   115,    -1,   253,   439,   255,    -1,    -1,
     421,   259,    -1,   261,   262,   263,    -1,     7,    -1,   267,
      10,   269,   433,   434,   457,    -1,   274,   415,    -1,    -1,
      -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   474,    -1,    -1,    -1,   433,   434,    -1,    -1,    -1,
     483,   484,   485,    -1,    -1,   466,    -1,    -1,    -1,    -1,
     308,    -1,    -1,    -1,   497,   476,    -1,    -1,    -1,    -1,
      -1,   504,    -1,    -1,    -1,    -1,    -1,   510,   466,   327,
      -1,    -1,   194,   195,   196,   496,    -1,    -1,   476,    -1,
     501,   203,    -1,    -1,   482,    85,    -1,   508,    -1,   510,
      -1,    -1,   214,   351,    -1,   516,    -1,    97,   496,    -1,
      -1,    -1,   102,   501,    -1,    -1,   504,    -1,    -1,    -1,
     508,    -1,   510,    -1,    -1,    -1,    -1,    -1,   516,    -1,
      -1,    -1,    -1,    -1,   382,   247,    -1,    -1,    -1,     7,
      -1,   253,    10,   255,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,    -1,
      -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,
      -1,    -1,    -1,   203,    -1,   327,    -1,    85,   466,    -1,
      -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,   476,    -1,
      -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,   351,
      -1,     7,    -1,    -1,    10,    -1,    -1,    -1,   496,    -1,
      -1,    -1,    -1,   501,    -1,    -1,    -1,   247,    -1,    -1,
     508,    -1,   510,   253,    -1,   255,    -1,    -1,   516,   259,
     382,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   308,    85,
      -1,   433,   434,    -1,    -1,    -1,   194,   195,   196,    -1,
      -1,    -1,    -1,    -1,    -1,   203,   102,   327,    -1,    -1,
       7,    -1,    -1,    10,    -1,    -1,   214,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   466,    -1,    -1,    -1,    -1,    -1,
      -1,   351,    -1,     7,   476,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,   496,   253,    -1,   255,    -1,   501,
      -1,   259,   382,   261,   262,   263,   508,    -1,   510,   267,
      -1,   269,   168,    -1,   516,    -1,   274,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
     196,   421,    -1,    -1,    -1,   102,    -1,   203,    -1,    -1,
     308,    85,    -1,   433,   434,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   327,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   466,    -1,    -1,    -1,
      -1,   247,    -1,   351,    -1,    -1,   476,   253,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,    -1,    -1,   496,    -1,   274,    -1,
      -1,   501,    -1,    -1,   382,    -1,    -1,    -1,   508,    -1,
     510,    -1,    -1,    -1,    -1,    -1,   516,   194,   195,   196,
      -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,   214,    -1,    -1,
     194,   195,   196,   421,   198,    -1,    -1,    -1,    -1,   203,
      -1,   327,    -1,    -1,    -1,   433,   434,    -1,    -1,    -1,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,   452,   351,   253,    -1,   255,    -1,
      -1,    -1,   259,    -1,   261,   262,   263,    -1,   466,    -1,
     267,    -1,   269,   247,    -1,    -1,    -1,   274,   476,   253,
      -1,   255,    -1,    -1,    -1,   259,   382,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,    -1,   496,    -1,
     274,     7,    -1,   501,    10,    -1,    -1,    -1,    -1,    -1,
     508,   308,   510,    -1,    -1,    -1,    -1,    -1,   516,    -1,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
     327,    -1,    -1,    -1,   308,    -1,    -1,   433,   434,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     466,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,    85,
     476,    -1,    -1,    -1,    -1,   382,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,    -1,
     496,    -1,    -1,    -1,    -1,   501,    -1,    -1,   382,    -1,
      -1,    -1,   508,    -1,   510,    -1,    -1,    -1,    -1,    -1,
     516,    -1,    -1,     7,   421,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   434,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,
     434,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,   466,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   476,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
     196,    -1,   466,   490,    -1,    -1,    -1,   203,    -1,   496,
      -1,    85,   476,    -1,   501,    -1,    -1,    -1,   214,    -1,
      -1,   508,    -1,   510,    -1,    -1,    -1,    -1,   102,   516,
      -1,    -1,   496,    -1,    -1,    -1,    -1,   501,    -1,    -1,
      -1,    -1,    -1,    -1,   508,    -1,   510,    -1,    -1,    -1,
      -1,   247,   516,    -1,    -1,    -1,    -1,   253,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,    -1,    -1,    -1,    -1,   274,    -1,
      -1,    -1,    -1,   194,   195,   196,    -1,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,   195,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,
      -1,   327,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
     214,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,   351,   267,    -1,   269,    -1,
      -1,     7,    -1,   274,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,   253,
      -1,   255,    -1,    -1,    -1,   259,   382,   261,   262,   263,
      -1,    -1,    -1,   267,    -1,   269,    -1,   308,    -1,    -1,
     274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,   415,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,   433,   434,    85,
     351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   327,    -1,    -1,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     466,   382,    -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,
     476,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     496,    -1,    -1,    -1,    -1,   501,    -1,    -1,   382,    -1,
     421,    -1,   508,    -1,   510,    -1,    -1,    -1,    -1,    -1,
     516,    -1,   433,   434,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,   194,   195,
     196,    -1,    -1,    -1,    -1,   466,    -1,   203,    -1,   433,
     434,    -1,    -1,    -1,    -1,   476,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,
     501,    -1,   466,    -1,    -1,    -1,    -1,   508,    -1,   510,
      -1,   247,   476,    -1,    -1,   516,    -1,   253,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,   496,   269,    -1,    -1,    -1,   501,   274,    -1,
      22,    -1,    -1,    -1,   508,    -1,   510,    -1,    -1,    -1,
      -1,    -1,   516,    -1,    -1,    37,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   327,    -1,    -1,    76,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,   181,
     182,   183,   184,   185,    -1,    -1,   188,   189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     466,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,
     476,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,   237,    -1,    -1,    -1,    -1,
     496,   243,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,
      -1,    -1,   508,    -1,   510,    -1,    -1,    -1,    -1,    -1,
     516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,   310,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     332,    -1,    -1,   335,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    36,    -1,   348,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,   360,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   368,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,   194,   195,   196,    -1,    -1,
      -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,   410,    -1,
     412,   413,   414,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,   439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,   253,   457,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,   163,   474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   483,   484,   485,    -1,    -1,    -1,    -1,    -1,   181,
     182,   183,   184,   185,    -1,   497,   188,   189,    -1,    -1,
     192,    -1,   504,    -1,    -1,    -1,   198,    -1,   200,   308,
      -1,    -1,    -1,    -1,   206,    -1,    -1,    -1,    -1,    -1,
      -1,   213,    -1,    -1,    -1,    -1,    -1,    -1,   327,   221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   234,    -1,    -1,   237,    -1,    -1,    -1,    -1,
      -1,    -1,   351,   245,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   254,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,
      -1,    -1,   102,   382,    -1,    -1,    -1,    -1,   280,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    -1,
      -1,    -1,   421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,   324,    -1,   433,   434,    -1,    -1,    -1,    -1,
     332,    -1,    -1,   335,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   454,   348,    -1,   350,    -1,
      -1,    -1,    -1,   102,    -1,   464,    -1,   466,    -1,   468,
     469,    -1,    -1,    -1,   194,   195,   196,   476,    -1,    -1,
      -1,    -1,    -1,   203,   376,    -1,    -1,    -1,    -1,    -1,
      -1,   383,    -1,    -1,   214,    -1,    -1,   496,    -1,    -1,
      -1,    -1,   501,    -1,    -1,    -1,    -1,    -1,   400,   508,
      -1,   510,    -1,    -1,    -1,    -1,    -1,   516,   410,    -1,
     412,   413,   414,    -1,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,
      -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      -1,    -1,    -1,    -1,    -1,   194,   195,   196,    -1,    -1,
     452,    -1,    -1,    -1,   203,   457,    -1,    -1,    -1,    -1,
     462,    -1,    -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   479,   308,    85,
      -1,   483,   484,   485,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   497,   102,   327,   247,    -1,
      -1,   503,   504,    -1,   253,    -1,   255,    -1,    -1,    -1,
     259,    -1,   261,   262,   263,    -1,    -1,    -1,   267,    -1,
     269,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,
      -1,   102,    -1,    -1,    -1,    -1,    -1,    -1,   194,   195,
     196,   421,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,    -1,   351,   433,   434,    -1,    -1,    -1,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   454,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   382,   464,    -1,   466,    -1,   468,   469,
      -1,   247,    -1,    -1,    -1,    -1,   476,   253,    -1,   255,
      -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,    -1,
      -1,   267,    -1,   269,    85,    -1,   496,    -1,    -1,    -1,
      -1,   501,   421,   194,   195,   196,    -1,    -1,   508,    -1,
     510,   102,   203,    -1,   433,   434,   516,    -1,    -1,    -1,
      -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,    -1,    -1,   454,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   464,    -1,   466,    -1,   468,
     469,   327,    -1,    -1,    -1,    -1,   247,   476,    -1,    -1,
      -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,   351,   267,   496,   269,    -1,
      -1,    -1,   501,    -1,    -1,    85,    -1,    -1,    -1,   508,
      -1,   510,    -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,
      -1,    -1,   102,   194,   195,   196,   382,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,    -1,    -1,   308,    -1,    -1,
      -1,    -1,    -1,   214,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,   433,   434,    -1,
     351,    -1,   253,    85,   255,    -1,    -1,    -1,   259,    -1,
     261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   378,   464,    -1,
     466,   382,   468,   469,   194,   195,   196,    -1,    -1,    -1,
     476,    -1,    -1,   203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   214,    -1,    -1,   308,    -1,    -1,
     496,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,
     421,    -1,   508,    -1,   510,    -1,   327,    -1,    -1,    -1,
     516,    -1,   433,   434,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,   253,    -1,   255,    -1,    -1,    -1,   259,
     351,   261,   262,   263,    -1,    -1,    -1,   267,    -1,   269,
      85,   193,   194,   195,   196,   466,    -1,    -1,    -1,    -1,
      -1,   203,    -1,    -1,    -1,   476,    -1,   102,    -1,    -1,
      -1,   382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   490,
      -1,    -1,    -1,    -1,    -1,   496,    -1,    -1,   308,    -1,
     501,    -1,    -1,    -1,    -1,    -1,    -1,   508,    -1,   510,
      -1,    -1,    -1,    -1,    -1,   516,    -1,   327,    -1,    -1,
     421,    -1,    -1,    -1,    -1,    -1,    -1,   259,    -1,   261,
     262,   263,   433,   434,    -1,   267,    -1,    -1,    -1,    -1,
      -1,   351,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   466,    -1,   468,   193,   194,
     195,   196,   382,    -1,    -1,   476,   308,    -1,   203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,
     501,    -1,    -1,    -1,    -1,    -1,    -1,   508,    -1,   510,
      -1,   421,    -1,    -1,    -1,   516,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   433,   434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   259,    -1,   261,   262,   263,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     382,    -1,    -1,    -1,    -1,    -1,   466,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   476,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   308,    -1,    -1,   496,    -1,    -1,    -1,
      -1,   501,    -1,    -1,    -1,    -1,    -1,    -1,   508,    -1,
     510,   433,   434,    -1,    -1,    -1,   516,    -1,    -1,    -1,
      -1,    -1,    -1,   445,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   476,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   487,    -1,   382,    -1,    -1,
      -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,   501,
      -1,    -1,    -1,   505,    -1,    -1,   508,   509,   510,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,   434,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     445,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   476,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   487,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   496,    -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,
     505,    -1,    -1,   508,   509,   510
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   519,   520,     0,   202,   346,   521,   522,   523,   524,
     525,   526,   528,   538,   540,   457,   457,   523,   156,   534,
     546,   534,   534,   259,   347,   541,   541,   125,    87,   547,
     527,   529,   538,   141,   532,   533,    27,   542,   542,   457,
     399,   548,   145,   527,   530,   531,   534,   541,   259,   457,
     539,   457,    12,    61,    99,   101,   103,   111,   167,   228,
     260,   306,   309,   374,   395,   420,   422,   438,   510,   549,
     550,   554,   565,   573,   574,   575,   576,   577,   582,   591,
     593,   598,   601,   602,   604,   605,   606,   607,   608,   609,
     610,   541,   529,   457,   234,   543,  1293,   510,  1214,  1214,
     428,   410,  1312,  1293,  1293,  1293,   399,  1214,   410,   457,
     457,  1293,   457,   457,    60,  1282,   578,     1,   457,   576,
     220,   592,   176,   611,   457,   531,   457,    75,   174,   359,
     462,   544,   545,   583,  1293,  1293,  1293,   510,  1209,  1240,
      71,  1209,   457,  1293,  1293,   555,   566,  1209,   551,   510,
     594,   595,   596,  1215,   259,   312,   314,   579,   581,  1059,
    1243,  1293,   457,   510,   457,   613,   545,   345,  1309,  1293,
     214,   259,   269,   351,   421,   466,   516,   599,   600,  1246,
    1209,   259,   220,   311,  1334,   259,   474,    59,    66,   271,
     345,   401,   406,   510,   556,   557,   558,   559,   560,   561,
     562,   564,  1281,  1344,   201,   567,   568,   569,   552,   564,
     595,    23,   234,  1215,  1294,  1059,   234,   428,  1306,  1293,
      99,  1214,   236,   402,   612,   614,    29,   129,   214,   259,
     269,   283,   351,   421,   424,   425,   516,   584,   585,   586,
     589,   600,   448,   509,   603,  1325,  1240,   405,   406,   415,
      66,  1293,   457,   558,   457,   510,   557,    62,  1293,    10,
     375,   502,   570,   572,     1,   457,   569,   553,  1325,   259,
     597,  1244,  1306,   234,  1214,  1214,   580,   581,   457,     1,
     295,   317,  1267,   277,   393,   649,   650,   651,   652,   654,
     586,    18,   448,  1246,   333,  1293,   406,  1243,   457,  1293,
     510,  1210,   231,    27,   571,   231,   375,   457,   457,   110,
    1244,  1214,   457,   317,  1214,   655,   356,   417,   418,   653,
     535,     1,   457,   651,   587,   589,   259,  1243,   260,   440,
     500,   563,  1210,   259,   275,   615,   460,  1285,    24,  1276,
     105,   659,   457,   588,   589,    60,   511,  1338,   616,   443,
    1318,   191,  1286,   125,   460,   660,    18,     5,    20,    30,
      66,   222,   254,   320,   325,   356,   364,   377,   406,   409,
     417,   457,   460,   617,   618,   624,   626,   628,   629,   630,
     631,   632,   635,   636,   637,   638,   639,   644,   645,   647,
    1310,  1327,    89,  1283,   510,  1199,  1200,   457,   399,   661,
     589,   275,  1299,   356,  1326,   452,   503,  1322,   406,   407,
    1293,  1281,   116,   239,  1295,  1295,   292,   646,  1243,  1325,
     428,   265,    40,  1279,  1293,   656,   657,  1200,  1200,   457,
     175,   397,   536,   662,   663,   665,  1293,  1295,   128,   174,
     621,   356,   364,   636,  1293,  1293,  1293,  1293,  1276,    10,
     292,   354,   648,  1293,  1299,   407,   510,   657,   336,   658,
     512,   690,   692,   693,     1,  1200,   128,   352,   407,   625,
    1293,   120,   121,   122,   240,   254,   340,   352,   443,   619,
     620,   259,  1209,  1213,   424,  1209,  1209,   321,  1307,  1307,
     315,  1209,  1293,  1243,   399,   264,   747,   694,   695,   697,
     707,  1259,   457,   664,  1209,   259,   623,  1240,   623,     8,
     623,   623,   259,   622,  1240,   419,   458,   640,    34,   170,
     270,   633,   457,   399,   258,   749,   457,   695,   457,     1,
     178,   510,   698,   699,   510,   666,   127,   509,   640,  1261,
    1343,  1285,  1293,   641,   642,   509,   634,   634,   691,   457,
     399,   371,   751,   457,   457,   696,    88,    48,    65,   105,
     241,   252,   356,   357,   371,   373,   457,   504,   667,   668,
     670,   674,   675,   678,   679,   685,   686,   687,   688,  1293,
     127,   641,   437,   627,   643,  1209,   643,   265,   390,   692,
     748,   457,   399,   394,   808,   709,   700,  1293,  1283,  1293,
     356,   358,  1339,  1339,  1293,  1283,  1293,  1299,  1293,    23,
    1275,   311,   689,  1214,   174,   206,  1261,   507,   314,   692,
     750,   457,   399,   537,    22,    37,    40,    41,    42,    43,
      44,    45,    46,    76,    78,    79,    80,    81,    82,    83,
      84,   122,   181,   182,   183,   184,   185,   188,   189,   221,
     237,   280,   310,   324,   332,   335,   348,   360,   368,   410,
     412,   413,   414,   439,   483,   484,   485,   497,   504,   710,
     711,   712,   714,   715,   716,   717,   718,   719,   720,   723,
     735,   736,   738,   739,   740,   745,   746,  1293,  1314,    27,
     198,   708,  1277,   206,  1243,   510,  1294,  1294,   510,  1211,
    1212,   313,   423,  1335,  1213,  1243,   505,  1293,   177,   215,
     510,   676,  1214,   627,    10,   421,   516,   590,   277,   356,
     358,  1337,   692,   752,   457,   342,   822,   825,   246,   306,
     411,   482,  1313,   482,  1313,   482,  1313,   482,  1313,   482,
    1313,   507,  1323,   389,  1311,   128,  1243,  1237,  1240,  1240,
     234,   244,   389,   737,  1293,  1294,   174,   206,   243,   474,
     510,    10,    51,   214,   246,   247,   259,   269,   351,   421,
     466,   516,   701,  1247,  1248,  1249,   452,   673,  1212,   257,
    1298,   452,  1282,   220,  1288,   510,  1293,  1293,  1247,  1337,
     753,   809,   125,   848,   849,   516,    54,   727,   452,   724,
     468,  1241,  1242,   448,   717,   742,   743,  1247,    27,   713,
     405,  1271,  1271,  1249,   311,  1303,     1,    41,    42,    43,
      44,    45,   181,   182,   183,   184,   185,   186,   187,   335,
     348,   702,   703,   704,   705,   706,   718,   719,  1237,   702,
     453,  1243,    60,   358,   669,   680,  1243,   415,  1315,   259,
     677,  1240,   677,   353,   754,   697,   707,   810,   811,   812,
      58,   503,   826,     1,     4,     6,    11,    19,    52,    53,
      63,    74,    77,    91,   114,   122,   124,   155,   166,   171,
     197,   204,   207,   208,   217,   224,   226,   229,   272,   276,
     278,   289,   316,   329,   354,   355,   365,   379,   380,   386,
     390,   398,   408,   417,   426,   431,   432,   435,   437,   444,
     457,   475,   481,   486,   513,   850,   851,   867,   872,   876,
     881,   896,   899,   903,   907,   908,   909,   914,   928,   932,
     935,   949,   953,   956,   959,   963,   964,   968,   978,   981,
     998,  1000,  1003,  1007,  1013,  1025,  1033,  1034,  1037,  1038,
    1042,  1047,  1048,  1056,  1071,  1081,  1090,  1095,  1102,  1106,
    1108,  1111,  1114,  1118,  1145,   850,  1288,   198,   725,  1243,
     451,  1320,    85,   102,   194,   195,   196,   203,   247,   253,
     255,   261,   262,   263,   267,   308,   327,   382,   433,   434,
     464,   468,   469,   476,   496,   501,   508,  1187,  1189,  1190,
    1191,  1192,  1193,  1194,  1222,  1236,  1237,  1248,  1250,  1251,
    1252,  1253,   468,  1242,  1240,   741,   743,   448,   259,  1281,
     702,   457,  1249,    49,   471,   681,   682,   683,   684,  1325,
    1282,   198,   672,  1287,   510,  1201,     1,   698,   812,   457,
     828,   827,   381,   834,     4,     6,    11,    19,    52,    53,
      63,    74,    77,    91,   114,   122,   124,   131,   133,   134,
     135,   136,   137,   138,   139,   140,   142,   143,   144,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   166,
     171,   197,   204,   207,   208,   217,   224,   226,   229,   272,
     276,   278,   289,   316,   329,   354,   365,   380,   386,   390,
     398,   408,   417,   426,   431,   432,   435,   437,   444,   457,
     475,   481,   486,   513,  1272,   852,   868,   873,   877,   882,
     897,   900,   904,   910,   915,   929,   933,   936,   950,   954,
     957,   960,   205,   381,   891,   952,   965,   969,   979,   982,
     999,  1001,  1004,   404,  1008,  1014,  1026,  1035,  1039,  1043,
    1049,  1057,  1072,  1082,   259,   351,   392,   421,   516,  1094,
    1096,  1103,   341,  1107,  1109,   837,  1112,  1115,  1119,  1146,
     510,  1243,   724,   117,   726,   468,  1255,  1237,  1248,  1250,
    1334,  1334,   468,   468,   468,   468,  1334,  1193,  1189,  1193,
     468,  1255,    73,   403,   454,  1188,   455,   464,   469,   456,
     465,   172,   468,  1254,   468,   468,  1189,   507,   744,  1324,
    1247,  1213,  1213,   190,   673,  1243,   755,   457,   813,   457,
      50,   829,   830,   831,  1280,   829,   510,   457,   313,   853,
     854,  1236,     7,    97,   247,   274,   869,  1194,  1218,  1219,
    1236,  1247,  1250,   874,  1189,  1236,   259,   878,   879,  1205,
    1206,  1207,  1240,   274,   427,   429,   883,   884,   259,   898,
    1227,  1236,   901,  1200,     7,   905,  1194,  1195,  1196,  1217,
    1238,  1239,  1240,  1248,   460,   911,  1200,   259,   916,   917,
     919,  1218,  1219,  1227,  1236,   930,  1219,   259,   934,   459,
     470,   937,   938,   939,  1177,  1178,  1179,   201,   328,   329,
     345,   399,   951,   955,  1216,  1217,   958,  1240,   452,   961,
    1321,  1219,  1176,  1177,   970,  1216,   980,  1201,   983,   984,
    1236,  1247,  1250,  1073,  1234,  1235,  1240,    97,  1002,  1219,
    1005,  1219,   173,   227,   235,   322,  1009,  1010,   193,   259,
    1015,  1019,  1020,  1021,  1205,  1228,  1236,  1240,  1250,  1325,
    1027,  1200,  1036,  1197,  1240,  1040,  1200,  1044,  1197,    10,
    1050,  1198,  1240,   156,   274,  1058,  1061,  1062,  1065,  1066,
    1067,  1068,  1069,  1070,  1202,  1203,  1216,  1233,  1235,  1240,
    1073,  1083,  1200,  1091,   115,  1097,  1098,  1099,  1219,    97,
    1104,  1218,  1110,  1201,   457,   510,   838,   839,   842,   843,
     848,  1113,  1236,  1116,  1200,   259,  1120,  1228,  1147,  1197,
     225,   728,   314,  1304,   729,   730,   454,  1187,  1189,   510,
     510,  1189,  1258,  1258,  1258,  1221,  1236,  1248,  1250,  1257,
     510,   454,  1221,  1256,  1189,   454,  1189,  1190,  1190,  1191,
    1191,  1191,  1189,  1221,  1187,   408,   459,    31,  1278,  1282,
       1,   756,   814,   830,   415,   482,   832,   362,   504,   823,
     133,   866,    31,   856,   857,  1278,   198,  1303,  1236,  1237,
    1248,  1250,   134,   871,   452,   870,  1219,    60,   225,  1262,
     879,   452,  1334,   135,   895,  1228,  1227,  1200,   361,   480,
     902,  1325,  1340,  1303,   136,   906,   162,   458,  1196,  1331,
     391,  1268,  1241,  1242,   912,  1200,   137,   913,  1310,   138,
     927,   168,   918,  1156,  1157,   490,   920,   509,   857,   491,
     492,   493,   494,   139,   931,    50,   230,   503,   885,   140,
     948,    18,   507,   940,   941,   942,   944,    13,    14,    15,
      21,   162,   172,   209,   210,   248,   249,   287,   295,   298,
     306,   313,   318,   337,   454,   456,   458,   461,   463,   464,
     465,   468,   469,  1180,  1181,  1182,  1183,  1184,  1185,  1186,
    1219,   104,   952,  1217,  1204,   447,  1319,   971,  1325,  1201,
      95,   370,   442,   985,   986,   988,   989,  1075,   468,  1241,
    1219,   452,   143,  1006,    50,  1010,   409,  1011,  1020,   144,
     457,  1016,  1018,   487,   505,   448,   451,   445,   146,  1032,
     289,   339,  1265,   198,  1148,   147,  1041,  1310,   148,  1046,
    1148,  1198,   149,  1055,   505,  1051,  1225,  1236,  1248,  1068,
    1070,  1216,   452,  1203,   126,   452,   488,  1060,    32,  1241,
     150,  1089,   180,   239,   242,  1085,   891,  1092,  1325,  1280,
     151,  1101,   230,  1099,  1236,   152,  1105,   198,  1201,   399,
     457,   457,   198,   356,   358,  1117,   153,  1129,   115,  1121,
     154,  1152,  1148,   729,  1209,   222,   732,    28,   118,   731,
     454,  1188,   454,   454,   454,  1188,   454,  1188,   454,   454,
     455,   454,   454,   452,  1293,  1213,   117,   671,   457,    64,
      92,    93,   326,   457,   757,   758,   763,  1293,  1352,    33,
      36,    39,    46,    47,    67,    69,   163,   192,   198,   200,
     213,   245,   254,   268,   310,   323,   350,   376,   383,   400,
     452,   462,   479,   503,   715,   716,   720,   735,   738,   740,
     815,   820,   821,  1293,  1328,  1293,   415,   317,   833,   112,
     835,  1225,   199,   860,   254,   336,   858,   859,  1328,    25,
      26,    68,    70,    72,   106,   107,   108,   156,   158,   165,
     168,   254,   257,   449,   499,   510,   855,  1203,  1329,   155,
     345,  1223,  1237,   452,     7,  1194,  1195,  1219,  1240,  1248,
     205,   225,  1263,   381,   875,   344,   880,  1207,   885,   902,
     265,   292,  1286,  1237,  1189,   275,  1269,  1242,  1200,   233,
    1172,  1173,   845,   846,   919,  1219,   299,  1158,    99,   340,
     510,  1203,   303,   924,    36,    39,    46,    47,    94,   163,
     192,   213,   268,   323,   383,   396,   479,   925,   926,   490,
     921,  1156,  1156,  1156,  1156,  1219,  1195,  1219,   886,   939,
      22,   459,   470,   945,   946,  1178,   507,   942,   943,   507,
     845,  1321,   234,  1181,   117,   962,  1205,   131,   845,   966,
      10,    13,    16,    17,   280,   281,   306,   307,   972,   976,
     178,  1225,    10,    60,   180,   243,   474,   992,   993,   994,
     987,   988,  1077,  1304,  1343,   452,  1216,  1195,  1219,  1011,
    1325,  1199,   845,   171,  1022,  1176,  1023,  1024,  1236,  1205,
       9,    38,  1150,  1310,  1232,  1236,  1247,  1250,   230,  1028,
    1045,  1325,   132,  1052,  1236,  1052,   452,   452,  1059,   155,
     459,   470,  1219,    50,    39,    47,   213,   245,   268,   323,
     383,   479,  1063,  1064,  1293,  1084,  1325,  1219,   164,   294,
     415,  1219,  1236,   198,  1195,  1219,   844,  1243,  1225,  1280,
     230,  1124,  1149,  1150,   732,  1280,  1295,  1209,  1254,  1254,
    1254,  1221,   243,   474,  1254,   454,  1189,  1254,  1254,  1247,
    1304,  1293,  1294,  1294,   250,   251,  1297,   773,   206,   179,
     759,   760,   761,   762,  1236,  1293,   254,   394,   159,   161,
    1293,  1232,   304,  1301,  1243,    59,  1236,  1236,   206,  1301,
      33,   113,  1243,  1293,   510,   457,   824,   275,   861,  1301,
    1301,   859,   858,  1301,   168,  1153,  1154,   515,   514,  1225,
    1153,   239,   428,   304,   279,   259,  1224,  1237,  1236,  1303,
     416,  1159,  1160,  1241,  1242,  1195,   452,  1264,   875,  1217,
     452,  1205,   890,   891,   385,   367,  1159,  1293,   845,   300,
    1174,   847,   845,  1156,  1293,   254,   394,   159,   161,  1293,
     126,   488,   926,  1156,    99,   100,   922,   861,   205,  1159,
     205,   887,   888,   889,  1280,    18,   448,   947,   321,   945,
    1304,   845,   131,   142,   967,  1321,   370,   973,  1321,   452,
      50,   993,   995,  1225,    10,    60,   243,   474,   990,   991,
    1225,  1078,  1327,   731,   220,   319,  1289,  1216,  1159,   205,
    1199,   648,   384,  1012,  1325,   144,  1017,     9,   198,  1028,
    1236,   132,  1165,  1167,  1172,   265,   292,   845,   507,   507,
    1053,  1054,  1225,  1224,  1219,  1059,  1059,  1059,  1059,  1059,
    1059,  1059,  1059,  1064,   295,   298,  1086,  1087,  1088,  1182,
    1266,  1172,   246,   415,  1342,   428,  1317,  1317,  1100,  1325,
    1236,  1159,   205,   457,   452,    10,  1122,  1123,  1260,  1125,
    1236,  1100,  1125,  1045,     8,  1273,   510,   733,   734,  1293,
     454,  1209,  1227,  1294,  1294,   259,   516,   764,   765,  1236,
    1245,   697,   774,   761,   762,   516,  1229,  1233,  1243,  1229,
    1293,  1320,  1293,  1293,    33,  1243,   836,   837,  1293,   509,
     862,  1229,  1229,  1229,   845,   299,  1155,  1153,  1268,  1237,
     845,   302,  1161,  1242,  1159,  1226,  1236,  1247,   168,   467,
     893,  1333,     7,   230,   313,   466,   892,  1292,    35,   284,
     285,   286,   349,   472,   473,   477,  1270,   845,   848,  1229,
    1229,  1175,  1231,  1233,  1243,  1175,   509,   923,  1195,  1196,
    1195,  1196,   888,   313,   832,    90,   362,   504,   946,  1177,
     845,  1236,   845,   504,   974,   975,   976,   977,  1319,   504,
    1226,  1225,    50,   996,   991,   191,   996,  1074,  1293,  1295,
     319,  1195,  1012,   265,   292,  1024,  1219,   219,  1029,  1325,
     845,   296,  1168,   265,  1177,  1176,  1053,  1182,  1236,  1183,
    1184,  1185,  1186,  1189,  1093,  1219,  1093,   467,  1162,  1163,
     335,  1268,  1195,   840,  1226,   318,  1225,   116,  1126,   442,
    1128,   160,   297,  1151,  1169,  1170,  1171,  1172,   326,  1203,
    1229,   734,  1208,  1209,   766,   254,   257,  1336,   510,   698,
     273,   334,   464,   469,   816,   817,   818,  1227,   816,   817,
     819,   837,    48,    33,    36,    39,    47,    94,   113,   192,
     200,   213,   245,   266,   268,   292,   293,   323,   350,   376,
     383,   396,   400,   441,   450,   479,   489,   495,   863,   864,
     865,  1153,   845,  1159,   845,   299,   894,   845,  1303,  1236,
     254,   257,  1341,   925,  1159,   366,  1159,   366,  1219,   975,
     105,  1284,  1321,   996,   996,  1226,     9,    38,   997,   227,
     503,  1079,  1209,  1076,  1159,   385,    50,   265,   239,  1030,
     218,   238,   265,   292,   506,   845,   845,   845,   845,   301,
    1164,  1293,  1159,  1159,   498,   841,  1130,  1123,  1288,    98,
    1127,  1288,  1162,   845,   845,  1171,   254,   257,  1296,  1209,
     180,   190,   212,   242,   256,   767,   768,   769,   770,   771,
     772,   765,   775,  1229,  1229,   132,  1293,  1293,   865,    59,
     126,   488,     9,  1274,   864,   845,  1236,  1196,  1196,    50,
     113,   996,   462,  1291,  1291,   342,  1199,   205,   322,  1080,
    1240,  1219,  1293,  1031,  1166,  1167,  1168,  1172,   265,   265,
     265,   845,  1236,  1131,   457,  1236,  1288,  1236,   109,   119,
    1345,  1293,  1293,    57,    92,  1345,  1346,  1293,  1329,   776,
     112,  1229,  1229,  1293,  1175,  1175,  1230,  1233,  1245,  1159,
    1159,  1219,  1219,  1219,  1293,  1199,   342,   487,  1236,  1168,
     130,   169,   206,  1132,  1133,  1134,  1136,  1140,  1142,  1143,
    1144,  1278,  1286,  1236,  1293,   765,   765,   212,  1293,  1293,
     765,     3,   211,   254,   290,   310,   338,   419,   436,   457,
     478,   497,   505,   715,   720,   721,   735,   738,   740,   777,
     778,   782,   784,   787,   788,   791,   792,   793,   798,   799,
     805,   806,   807,  1328,  1329,  1330,   457,  1227,  1019,  1293,
    1176,    38,  1274,   345,   110,   765,   765,   765,   223,  1290,
     304,   796,  1293,  1243,  1293,  1303,  1293,  1293,  1236,     9,
      38,   237,   507,   334,   469,   794,   795,   797,  1245,  1304,
     802,   803,   804,   816,  1245,   304,   305,  1302,  1019,   372,
     423,  1316,   132,   426,  1141,  1304,   234,   291,   334,   469,
     783,  1243,   724,  1222,  1220,  1222,    56,    92,   326,   330,
     331,   371,   387,   388,   779,  1345,  1346,  1347,  1348,  1349,
    1350,  1351,   122,   198,   288,  1300,  1300,     9,    38,  1176,
    1245,  1245,   794,   291,   803,  1245,    55,   244,   389,   800,
     801,  1236,   164,   168,  1332,    10,  1137,  1138,  1206,  1243,
    1243,  1320,  1268,   378,   490,   785,  1222,   190,   190,   212,
     190,   212,   191,   314,  1305,  1305,  1222,   318,   326,   789,
     790,  1236,   789,  1300,  1300,  1294,   342,  1308,   311,   343,
     363,  1139,  1138,   726,  1304,  1236,   179,   780,  1236,    10,
     179,   781,  1236,    50,   789,   326,   326,  1304,   311,  1240,
     430,   722,   179,   786,  1236,   318,  1222,   173,   227,   235,
     322,  1135,  1199,  1243,   326
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
#line 1375 "parser.y"
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
#line 1386 "parser.y"
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
#line 1422 "parser.y"
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
#line 1477 "parser.y"
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
#line 1506 "parser.y"
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
#line 1539 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 1545 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 1557 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 1567 "parser.y"
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
#line 1598 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 1605 "parser.y"
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
#line 1641 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 1642 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 1651 "parser.y"
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
#line 1660 "parser.y"
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
#line 1674 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 1678 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 1688 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 1697 "parser.y"
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
#line 1722 "parser.y"
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
#line 1740 "parser.y"
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
#line 1753 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 1782 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 1789 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 1796 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 1803 "parser.y"
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
#line 1814 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 1818 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 1822 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 1826 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 1840 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 1845 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 1853 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 1865 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 1869 "parser.y"
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
#line 1890 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 1894 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 1901 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 1906 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 1917 "parser.y"
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
#line 1931 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 1962 "parser.y"
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
#line 1981 "parser.y"
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
#line 1991 "parser.y"
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
#line 2004 "parser.y"
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
#line 2020 "parser.y"
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
#line 2030 "parser.y"
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
#line 2045 "parser.y"
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
#line 2058 "parser.y"
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
#line 2069 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 2075 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
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
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 2093 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 2099 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 2109 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 2113 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 2120 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 2124 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 2128 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 2132 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2139 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2143 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 2149 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 2150 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 2151 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 2152 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 2153 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 2154 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 2158 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 2159 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 2167 "parser.y"
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
#line 2181 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 2185 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 2193 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 2200 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 2204 "parser.y"
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
#line 2215 "parser.y"
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
#line 2235 "parser.y"
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
#line 2243 "parser.y"
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
#line 2253 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 2254 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 2261 "parser.y"
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
#line 2281 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 2282 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 2287 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 2291 "parser.y"
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
#line 2312 "parser.y"
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
#line 2335 "parser.y"
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
#line 2416 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 2420 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 2429 "parser.y"
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
#line 2448 "parser.y"
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
#line 2464 "parser.y"
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
#line 2482 "parser.y"
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
#line 2500 "parser.y"
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
#line 2517 "parser.y"
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
#line 2534 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 2542 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 2551 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 2566 "parser.y"
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
#line 2583 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 2587 "parser.y"
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
#line 2621 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 2627 "parser.y"
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
#line 2637 "parser.y"
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
#line 2650 "parser.y"
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
#line 2663 "parser.y"
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
#line 2686 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 2693 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 2706 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 2718 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 2725 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 2726 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 2727 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 2735 "parser.y"
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
#line 2764 "parser.y"
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
#line 2801 "parser.y"
    { (yyval) = cb_int (-1); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 2804 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(4) - (4)])));
  }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 2809 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(3) - (3)])));
  }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 2819 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 2830 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 2845 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 2853 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 2858 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 2863 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 2872 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 2876 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 2892 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 2897 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 2902 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 2907 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 2918 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 2929 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 2939 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 2944 "parser.y"
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
#line 2969 "parser.y"
    {
    key_component_list = NULL;
  }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 2979 "parser.y"
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
#line 2997 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 3008 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 3022 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 3029 "parser.y"
    { (yyval) = NULL; }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 3030 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 3031 "parser.y"
    { (yyval) = NULL; }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 3040 "parser.y"
    {
	yyerrok;
  }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 3059 "parser.y"
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
#line 3086 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 3087 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 3088 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 3089 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 3096 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 3101 "parser.y"
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
#line 3128 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 3137 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 3151 "parser.y"
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

  case 293:
/* Line 1792 of yacc.c  */
#line 3169 "parser.y"
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
#line 3186 "parser.y"
    {
	yyerrok;
  }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 3193 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 3197 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 3208 "parser.y"
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
#line 3218 "parser.y"
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
#line 3248 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 3261 "parser.y"
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
#line 3281 "parser.y"
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
#line 3316 "parser.y"
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
#line 3347 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 3353 "parser.y"
    { (yyval) = NULL; }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 3354 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 3358 "parser.y"
    { (yyval) = NULL; }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 3359 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 3367 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 3378 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 3383 "parser.y"
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
#line 3406 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 3418 "parser.y"
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
#line 3446 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 3453 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 3460 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 3469 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 3481 "parser.y"
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
#line 3533 "parser.y"
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
#line 3553 "parser.y"
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
#line 3565 "parser.y"
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
#line 3608 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 3614 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 3623 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 3626 "parser.y"
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 3633 "parser.y"
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
#line 3653 "parser.y"
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
#line 3668 "parser.y"
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
#line 3688 "parser.y"
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
#line 3701 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 3708 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
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
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 3729 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 3738 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 3742 "parser.y"
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
#line 3753 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 3754 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 3755 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 3756 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 3761 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 3765 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 3769 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 3773 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 3777 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 3781 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 3785 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 3789 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 3793 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 3797 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 3801 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 3805 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 3809 "parser.y"
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
#line 3841 "parser.y"
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
#line 3867 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 3871 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 3879 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 3885 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 3913 "parser.y"
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
#line 3937 "parser.y"
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
#line 3964 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 3968 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 3977 "parser.y"
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
#line 4002 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 4018 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 4022 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 4026 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 4030 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 4034 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 4038 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 4042 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 4046 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 4050 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 4054 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 4058 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 4062 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 4066 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 4071 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 4076 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 4080 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 4084 "parser.y"
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
#line 4092 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 4096 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 4100 "parser.y"
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
#line 4108 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 4112 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 4116 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 4120 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4124 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4128 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4132 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 4136 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 4140 "parser.y"
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
#line 4148 "parser.y"
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
#line 4156 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 4160 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 4164 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 4168 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 4172 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 4176 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 4196 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 4202 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 4215 "parser.y"
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
#line 4233 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 4243 "parser.y"
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
#line 4264 "parser.y"
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
#line 4283 "parser.y"
    { (yyval) = NULL; }
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 4284 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 4288 "parser.y"
    { (yyval) = NULL; }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 4289 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 4294 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 4301 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 4309 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 4316 "parser.y"
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
#line 4339 "parser.y"
    { (yyval) = NULL; }
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 4342 "parser.y"
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
#line 4357 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 4358 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 4363 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 4369 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 4371 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 4376 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 4387 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 4398 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
    break;

  case 492:
/* Line 1792 of yacc.c  */
#line 4408 "parser.y"
    {
	/* Stay quiet on this
	PENDING ("SYNCHRONIZED RIGHT");
	*/
  }
    break;

  case 493:
/* Line 1792 of yacc.c  */
#line 4420 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 4431 "parser.y"
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
#line 4459 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 4467 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 498:
/* Line 1792 of yacc.c  */
#line 4468 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 4472 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 4473 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 502:
/* Line 1792 of yacc.c  */
#line 4478 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 4491 "parser.y"
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
#line 4504 "parser.y"
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
#line 4525 "parser.y"
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
#line 4534 "parser.y"
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
#line 4549 "parser.y"
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
#line 4558 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 4570 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 512:
/* Line 1792 of yacc.c  */
#line 4576 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 514:
/* Line 1792 of yacc.c  */
#line 4587 "parser.y"
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
#line 4605 "parser.y"
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
#line 4618 "parser.y"
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
#line 4636 "parser.y"
    {
	yyerrok;
  }
    break;

  case 523:
/* Line 1792 of yacc.c  */
#line 4643 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 4649 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
    break;

  case 527:
/* Line 1792 of yacc.c  */
#line 4660 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 4673 "parser.y"
    {
      current_report->control_final = 1;
  }
    break;

  case 534:
/* Line 1792 of yacc.c  */
#line 4685 "parser.y"
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), current_report->controls);
  }
    break;

  case 535:
/* Line 1792 of yacc.c  */
#line 4696 "parser.y"
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
#line 4735 "parser.y"
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
#line 4745 "parser.y"
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
#line 4755 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(1) - (4)]))) {
		current_report->lines = cb_get_int ((yyvsp[(1) - (4)]));
		if(current_report->lines > 999)
			cb_error (_("PAGE LIMIT lines > 999"));
	} else {
		current_report->t_lines = (yyvsp[(1) - (4)]);
	}
	check_repeated ("LINE LIMIT", SYN_CLAUSE_25);
	if (CB_LITERAL_P ((yyvsp[(3) - (4)]))) {
		current_report->columns = cb_get_int ((yyvsp[(3) - (4)]));
	} else {
		current_report->t_columns = (yyvsp[(3) - (4)]);
	}
  }
    break;

  case 548:
/* Line 1792 of yacc.c  */
#line 4789 "parser.y"
    {
	check_repeated ("LINE LIMIT", SYN_CLAUSE_25);
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->columns = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_columns = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 4801 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_heading = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 550:
/* Line 1792 of yacc.c  */
#line 4812 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_first_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 551:
/* Line 1792 of yacc.c  */
#line 4823 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_control = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 4834 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 553:
/* Line 1792 of yacc.c  */
#line 4845 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_footing = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 556:
/* Line 1792 of yacc.c  */
#line 4860 "parser.y"
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
#line 4905 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
    break;

  case 577:
/* Line 1792 of yacc.c  */
#line 4912 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 4916 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 4922 "parser.y"
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 4929 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 4933 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 4939 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 4943 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 4948 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (3)]);
      current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 4954 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 4960 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 4964 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 4969 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 4973 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_flag |= COB_REPORT_ALL;
  }
    break;

  case 592:
/* Line 1792 of yacc.c  */
#line 4981 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
    break;

  case 593:
/* Line 1792 of yacc.c  */
#line 4988 "parser.y"
    {
	if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int((yyvsp[(1) - (1)]));
  }
    break;

  case 594:
/* Line 1792 of yacc.c  */
#line 4997 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 595:
/* Line 1792 of yacc.c  */
#line 5002 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 5007 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
    break;

  case 597:
/* Line 1792 of yacc.c  */
#line 5020 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
	current_field->report_sum_list = (yyvsp[(3) - (4)]);
	build_sum_counter( current_report, current_field);
  }
    break;

  case 600:
/* Line 1792 of yacc.c  */
#line 5030 "parser.y"
    {
      current_field->report_sum_upon = (yyvsp[(2) - (2)]);
  }
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 5037 "parser.y"
    {
      current_field->report_reset = (yyvsp[(1) - (1)]);
  }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 5041 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
    break;

  case 603:
/* Line 1792 of yacc.c  */
#line 5048 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_when = (yyvsp[(3) - (3)]);
  }
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 5053 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
  }
    break;

  case 605:
/* Line 1792 of yacc.c  */
#line 5059 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag &= ~COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 606:
/* Line 1792 of yacc.c  */
#line 5066 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
  }
    break;

  case 607:
/* Line 1792 of yacc.c  */
#line 5072 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_BEFORE;
	current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 608:
/* Line 1792 of yacc.c  */
#line 5082 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
  }
    break;

  case 609:
/* Line 1792 of yacc.c  */
#line 5086 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_PRESENT;
	current_field->report_flag |= COB_REPORT_NEGATE;
  }
    break;

  case 612:
/* Line 1792 of yacc.c  */
#line 5098 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_PAGE;
  }
    break;

  case 613:
/* Line 1792 of yacc.c  */
#line 5102 "parser.y"
    {
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 616:
/* Line 1792 of yacc.c  */
#line 5114 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
	current_field->report_flag |= COB_REPORT_LINE;
  }
    break;

  case 620:
/* Line 1792 of yacc.c  */
#line 5130 "parser.y"
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
    break;

  case 621:
/* Line 1792 of yacc.c  */
#line 5136 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 622:
/* Line 1792 of yacc.c  */
#line 5140 "parser.y"
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

  case 627:
/* Line 1792 of yacc.c  */
#line 5178 "parser.y"
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

  case 628:
/* Line 1792 of yacc.c  */
#line 5204 "parser.y"
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

  case 632:
/* Line 1792 of yacc.c  */
#line 5228 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_LEFT;
  }
    break;

  case 633:
/* Line 1792 of yacc.c  */
#line 5232 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_RIGHT;
  }
    break;

  case 634:
/* Line 1792 of yacc.c  */
#line 5236 "parser.y"
    {
	current_field->report_flag |= COB_REPORT_COLUMN_CENTER;
  }
    break;

  case 635:
/* Line 1792 of yacc.c  */
#line 5243 "parser.y"
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

  case 639:
/* Line 1792 of yacc.c  */
#line 5272 "parser.y"
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

  case 640:
/* Line 1792 of yacc.c  */
#line 5304 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
	current_field->report_source = (yyvsp[(3) - (4)]);
  }
    break;

  case 641:
/* Line 1792 of yacc.c  */
#line 5312 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
    break;

  case 642:
/* Line 1792 of yacc.c  */
#line 5320 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
    break;

  case 644:
/* Line 1792 of yacc.c  */
#line 5329 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 645:
/* Line 1792 of yacc.c  */
#line 5336 "parser.y"
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

  case 651:
/* Line 1792 of yacc.c  */
#line 5362 "parser.y"
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

  case 652:
/* Line 1792 of yacc.c  */
#line 5393 "parser.y"
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

  case 653:
/* Line 1792 of yacc.c  */
#line 5419 "parser.y"
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

  case 656:
/* Line 1792 of yacc.c  */
#line 5442 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 657:
/* Line 1792 of yacc.c  */
#line 5446 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 658:
/* Line 1792 of yacc.c  */
#line 5450 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 659:
/* Line 1792 of yacc.c  */
#line 5454 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 660:
/* Line 1792 of yacc.c  */
#line 5458 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 661:
/* Line 1792 of yacc.c  */
#line 5462 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 662:
/* Line 1792 of yacc.c  */
#line 5466 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 663:
/* Line 1792 of yacc.c  */
#line 5470 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 664:
/* Line 1792 of yacc.c  */
#line 5474 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 665:
/* Line 1792 of yacc.c  */
#line 5478 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 666:
/* Line 1792 of yacc.c  */
#line 5482 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 667:
/* Line 1792 of yacc.c  */
#line 5486 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 668:
/* Line 1792 of yacc.c  */
#line 5490 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 669:
/* Line 1792 of yacc.c  */
#line 5494 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 670:
/* Line 1792 of yacc.c  */
#line 5498 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 671:
/* Line 1792 of yacc.c  */
#line 5502 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 672:
/* Line 1792 of yacc.c  */
#line 5506 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 673:
/* Line 1792 of yacc.c  */
#line 5511 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 674:
/* Line 1792 of yacc.c  */
#line 5515 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 675:
/* Line 1792 of yacc.c  */
#line 5519 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 676:
/* Line 1792 of yacc.c  */
#line 5524 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 677:
/* Line 1792 of yacc.c  */
#line 5529 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 678:
/* Line 1792 of yacc.c  */
#line 5534 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 687:
/* Line 1792 of yacc.c  */
#line 5547 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 688:
/* Line 1792 of yacc.c  */
#line 5554 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 689:
/* Line 1792 of yacc.c  */
#line 5559 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 694:
/* Line 1792 of yacc.c  */
#line 5578 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 695:
/* Line 1792 of yacc.c  */
#line 5582 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 696:
/* Line 1792 of yacc.c  */
#line 5586 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 697:
/* Line 1792 of yacc.c  */
#line 5593 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 698:
/* Line 1792 of yacc.c  */
#line 5597 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 699:
/* Line 1792 of yacc.c  */
#line 5601 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 700:
/* Line 1792 of yacc.c  */
#line 5609 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 701:
/* Line 1792 of yacc.c  */
#line 5620 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 703:
/* Line 1792 of yacc.c  */
#line 5629 "parser.y"
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

  case 704:
/* Line 1792 of yacc.c  */
#line 5639 "parser.y"
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

  case 705:
/* Line 1792 of yacc.c  */
#line 5651 "parser.y"
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

  case 706:
/* Line 1792 of yacc.c  */
#line 5666 "parser.y"
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

  case 708:
/* Line 1792 of yacc.c  */
#line 5699 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 709:
/* Line 1792 of yacc.c  */
#line 5703 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 710:
/* Line 1792 of yacc.c  */
#line 5708 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 711:
/* Line 1792 of yacc.c  */
#line 5716 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 712:
/* Line 1792 of yacc.c  */
#line 5725 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 713:
/* Line 1792 of yacc.c  */
#line 5735 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 714:
/* Line 1792 of yacc.c  */
#line 5737 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 715:
/* Line 1792 of yacc.c  */
#line 5742 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 717:
/* Line 1792 of yacc.c  */
#line 5751 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 718:
/* Line 1792 of yacc.c  */
#line 5755 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 720:
/* Line 1792 of yacc.c  */
#line 5767 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 721:
/* Line 1792 of yacc.c  */
#line 5775 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 722:
/* Line 1792 of yacc.c  */
#line 5783 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 723:
/* Line 1792 of yacc.c  */
#line 5791 "parser.y"
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

  case 724:
/* Line 1792 of yacc.c  */
#line 5820 "parser.y"
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

  case 726:
/* Line 1792 of yacc.c  */
#line 5853 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 727:
/* Line 1792 of yacc.c  */
#line 5862 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 728:
/* Line 1792 of yacc.c  */
#line 5868 "parser.y"
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

  case 730:
/* Line 1792 of yacc.c  */
#line 5896 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 731:
/* Line 1792 of yacc.c  */
#line 5902 "parser.y"
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

  case 736:
/* Line 1792 of yacc.c  */
#line 5940 "parser.y"
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

  case 738:
/* Line 1792 of yacc.c  */
#line 5958 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 739:
/* Line 1792 of yacc.c  */
#line 5968 "parser.y"
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

  case 740:
/* Line 1792 of yacc.c  */
#line 6012 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 743:
/* Line 1792 of yacc.c  */
#line 6023 "parser.y"
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

  case 744:
/* Line 1792 of yacc.c  */
#line 6071 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
	}
	YYERROR;
  }
    break;

  case 745:
/* Line 1792 of yacc.c  */
#line 6083 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 746:
/* Line 1792 of yacc.c  */
#line 6087 "parser.y"
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

  case 747:
/* Line 1792 of yacc.c  */
#line 6105 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 748:
/* Line 1792 of yacc.c  */
#line 6110 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 749:
/* Line 1792 of yacc.c  */
#line 6115 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 750:
/* Line 1792 of yacc.c  */
#line 6123 "parser.y"
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

  case 751:
/* Line 1792 of yacc.c  */
#line 6150 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 752:
/* Line 1792 of yacc.c  */
#line 6154 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 802:
/* Line 1792 of yacc.c  */
#line 6210 "parser.y"
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

  case 803:
/* Line 1792 of yacc.c  */
#line 6224 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 804:
/* Line 1792 of yacc.c  */
#line 6235 "parser.y"
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

  case 806:
/* Line 1792 of yacc.c  */
#line 6252 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 807:
/* Line 1792 of yacc.c  */
#line 6257 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 808:
/* Line 1792 of yacc.c  */
#line 6261 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 809:
/* Line 1792 of yacc.c  */
#line 6265 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 810:
/* Line 1792 of yacc.c  */
#line 6270 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 811:
/* Line 1792 of yacc.c  */
#line 6275 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 812:
/* Line 1792 of yacc.c  */
#line 6280 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 813:
/* Line 1792 of yacc.c  */
#line 6285 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 814:
/* Line 1792 of yacc.c  */
#line 6289 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 815:
/* Line 1792 of yacc.c  */
#line 6293 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 816:
/* Line 1792 of yacc.c  */
#line 6297 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 817:
/* Line 1792 of yacc.c  */
#line 6301 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 818:
/* Line 1792 of yacc.c  */
#line 6306 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 819:
/* Line 1792 of yacc.c  */
#line 6310 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 820:
/* Line 1792 of yacc.c  */
#line 6314 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 821:
/* Line 1792 of yacc.c  */
#line 6318 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 822:
/* Line 1792 of yacc.c  */
#line 6322 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 823:
/* Line 1792 of yacc.c  */
#line 6326 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 824:
/* Line 1792 of yacc.c  */
#line 6330 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 826:
/* Line 1792 of yacc.c  */
#line 6338 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 829:
/* Line 1792 of yacc.c  */
#line 6349 "parser.y"
    { (yyval) = NULL; }
    break;

  case 830:
/* Line 1792 of yacc.c  */
#line 6350 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 831:
/* Line 1792 of yacc.c  */
#line 6354 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 832:
/* Line 1792 of yacc.c  */
#line 6355 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 833:
/* Line 1792 of yacc.c  */
#line 6356 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 834:
/* Line 1792 of yacc.c  */
#line 6357 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 835:
/* Line 1792 of yacc.c  */
#line 6358 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 836:
/* Line 1792 of yacc.c  */
#line 6362 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 837:
/* Line 1792 of yacc.c  */
#line 6366 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 838:
/* Line 1792 of yacc.c  */
#line 6367 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 842:
/* Line 1792 of yacc.c  */
#line 6376 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 847:
/* Line 1792 of yacc.c  */
#line 6392 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 848:
/* Line 1792 of yacc.c  */
#line 6396 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 849:
/* Line 1792 of yacc.c  */
#line 6402 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 850:
/* Line 1792 of yacc.c  */
#line 6406 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 851:
/* Line 1792 of yacc.c  */
#line 6410 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 852:
/* Line 1792 of yacc.c  */
#line 6414 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 853:
/* Line 1792 of yacc.c  */
#line 6418 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 854:
/* Line 1792 of yacc.c  */
#line 6422 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 855:
/* Line 1792 of yacc.c  */
#line 6426 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 856:
/* Line 1792 of yacc.c  */
#line 6430 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 857:
/* Line 1792 of yacc.c  */
#line 6434 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 858:
/* Line 1792 of yacc.c  */
#line 6438 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 859:
/* Line 1792 of yacc.c  */
#line 6442 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  }
    break;

  case 860:
/* Line 1792 of yacc.c  */
#line 6446 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 861:
/* Line 1792 of yacc.c  */
#line 6450 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 862:
/* Line 1792 of yacc.c  */
#line 6454 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 863:
/* Line 1792 of yacc.c  */
#line 6458 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 864:
/* Line 1792 of yacc.c  */
#line 6462 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 865:
/* Line 1792 of yacc.c  */
#line 6466 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 866:
/* Line 1792 of yacc.c  */
#line 6472 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 867:
/* Line 1792 of yacc.c  */
#line 6476 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 868:
/* Line 1792 of yacc.c  */
#line 6480 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 869:
/* Line 1792 of yacc.c  */
#line 6484 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 870:
/* Line 1792 of yacc.c  */
#line 6488 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 871:
/* Line 1792 of yacc.c  */
#line 6492 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 872:
/* Line 1792 of yacc.c  */
#line 6496 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  }
    break;

  case 875:
/* Line 1792 of yacc.c  */
#line 6508 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 876:
/* Line 1792 of yacc.c  */
#line 6512 "parser.y"
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

  case 877:
/* Line 1792 of yacc.c  */
#line 6529 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 879:
/* Line 1792 of yacc.c  */
#line 6538 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 880:
/* Line 1792 of yacc.c  */
#line 6542 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 881:
/* Line 1792 of yacc.c  */
#line 6546 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 883:
/* Line 1792 of yacc.c  */
#line 6553 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 884:
/* Line 1792 of yacc.c  */
#line 6560 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 885:
/* Line 1792 of yacc.c  */
#line 6564 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 886:
/* Line 1792 of yacc.c  */
#line 6574 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 888:
/* Line 1792 of yacc.c  */
#line 6583 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 889:
/* Line 1792 of yacc.c  */
#line 6587 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 890:
/* Line 1792 of yacc.c  */
#line 6598 "parser.y"
    { (yyval) = NULL; }
    break;

  case 891:
/* Line 1792 of yacc.c  */
#line 6599 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 892:
/* Line 1792 of yacc.c  */
#line 6607 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 896:
/* Line 1792 of yacc.c  */
#line 6621 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 899:
/* Line 1792 of yacc.c  */
#line 6633 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 901:
/* Line 1792 of yacc.c  */
#line 6648 "parser.y"
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

  case 902:
/* Line 1792 of yacc.c  */
#line 6662 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 903:
/* Line 1792 of yacc.c  */
#line 6667 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 904:
/* Line 1792 of yacc.c  */
#line 6672 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 905:
/* Line 1792 of yacc.c  */
#line 6677 "parser.y"
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

  case 906:
/* Line 1792 of yacc.c  */
#line 6697 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 907:
/* Line 1792 of yacc.c  */
#line 6701 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 908:
/* Line 1792 of yacc.c  */
#line 6706 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 909:
/* Line 1792 of yacc.c  */
#line 6717 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 910:
/* Line 1792 of yacc.c  */
#line 6719 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 911:
/* Line 1792 of yacc.c  */
#line 6724 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 912:
/* Line 1792 of yacc.c  */
#line 6732 "parser.y"
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

  case 914:
/* Line 1792 of yacc.c  */
#line 6758 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 915:
/* Line 1792 of yacc.c  */
#line 6762 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 916:
/* Line 1792 of yacc.c  */
#line 6771 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 917:
/* Line 1792 of yacc.c  */
#line 6783 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 918:
/* Line 1792 of yacc.c  */
#line 6787 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 919:
/* Line 1792 of yacc.c  */
#line 6791 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 6795 "parser.y"
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

  case 925:
/* Line 1792 of yacc.c  */
#line 6828 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 926:
/* Line 1792 of yacc.c  */
#line 6833 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 927:
/* Line 1792 of yacc.c  */
#line 6840 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 928:
/* Line 1792 of yacc.c  */
#line 6845 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 929:
/* Line 1792 of yacc.c  */
#line 6852 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 930:
/* Line 1792 of yacc.c  */
#line 6856 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 931:
/* Line 1792 of yacc.c  */
#line 6866 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 933:
/* Line 1792 of yacc.c  */
#line 6874 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 934:
/* Line 1792 of yacc.c  */
#line 6878 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 935:
/* Line 1792 of yacc.c  */
#line 6888 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 937:
/* Line 1792 of yacc.c  */
#line 6896 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 938:
/* Line 1792 of yacc.c  */
#line 6901 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 939:
/* Line 1792 of yacc.c  */
#line 6908 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 6909 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 941:
/* Line 1792 of yacc.c  */
#line 6910 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 942:
/* Line 1792 of yacc.c  */
#line 6911 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 6912 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 944:
/* Line 1792 of yacc.c  */
#line 6920 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 946:
/* Line 1792 of yacc.c  */
#line 6929 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 947:
/* Line 1792 of yacc.c  */
#line 6936 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 948:
/* Line 1792 of yacc.c  */
#line 6940 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 949:
/* Line 1792 of yacc.c  */
#line 6950 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 950:
/* Line 1792 of yacc.c  */
#line 6961 "parser.y"
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

  case 951:
/* Line 1792 of yacc.c  */
#line 6978 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 953:
/* Line 1792 of yacc.c  */
#line 6987 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 955:
/* Line 1792 of yacc.c  */
#line 6995 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 956:
/* Line 1792 of yacc.c  */
#line 7000 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 957:
/* Line 1792 of yacc.c  */
#line 7008 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 958:
/* Line 1792 of yacc.c  */
#line 7012 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 959:
/* Line 1792 of yacc.c  */
#line 7022 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 961:
/* Line 1792 of yacc.c  */
#line 7032 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 962:
/* Line 1792 of yacc.c  */
#line 7036 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 963:
/* Line 1792 of yacc.c  */
#line 7040 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 964:
/* Line 1792 of yacc.c  */
#line 7044 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 965:
/* Line 1792 of yacc.c  */
#line 7048 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 967:
/* Line 1792 of yacc.c  */
#line 7053 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 969:
/* Line 1792 of yacc.c  */
#line 7063 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 971:
/* Line 1792 of yacc.c  */
#line 7071 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 972:
/* Line 1792 of yacc.c  */
#line 7079 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 973:
/* Line 1792 of yacc.c  */
#line 7087 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 974:
/* Line 1792 of yacc.c  */
#line 7091 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 975:
/* Line 1792 of yacc.c  */
#line 7095 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 976:
/* Line 1792 of yacc.c  */
#line 7099 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 982:
/* Line 1792 of yacc.c  */
#line 7121 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 983:
/* Line 1792 of yacc.c  */
#line 7127 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 984:
/* Line 1792 of yacc.c  */
#line 7128 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 987:
/* Line 1792 of yacc.c  */
#line 7139 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7143 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 989:
/* Line 1792 of yacc.c  */
#line 7147 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7151 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 991:
/* Line 1792 of yacc.c  */
#line 7155 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7159 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7163 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 994:
/* Line 1792 of yacc.c  */
#line 7167 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 995:
/* Line 1792 of yacc.c  */
#line 7171 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 996:
/* Line 1792 of yacc.c  */
#line 7175 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 997:
/* Line 1792 of yacc.c  */
#line 7179 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 998:
/* Line 1792 of yacc.c  */
#line 7183 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 999:
/* Line 1792 of yacc.c  */
#line 7187 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 1000:
/* Line 1792 of yacc.c  */
#line 7191 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 1001:
/* Line 1792 of yacc.c  */
#line 7195 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 1002:
/* Line 1792 of yacc.c  */
#line 7199 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 1003:
/* Line 1792 of yacc.c  */
#line 7206 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 1004:
/* Line 1792 of yacc.c  */
#line 7210 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 1005:
/* Line 1792 of yacc.c  */
#line 7220 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 1007:
/* Line 1792 of yacc.c  */
#line 7229 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 1008:
/* Line 1792 of yacc.c  */
#line 7233 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 1009:
/* Line 1792 of yacc.c  */
#line 7237 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 1010:
/* Line 1792 of yacc.c  */
#line 7241 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1011:
/* Line 1792 of yacc.c  */
#line 7245 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1012:
/* Line 1792 of yacc.c  */
#line 7252 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 1013:
/* Line 1792 of yacc.c  */
#line 7256 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 1014:
/* Line 1792 of yacc.c  */
#line 7266 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 1016:
/* Line 1792 of yacc.c  */
#line 7275 "parser.y"
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

  case 1017:
/* Line 1792 of yacc.c  */
#line 7293 "parser.y"
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

  case 1019:
/* Line 1792 of yacc.c  */
#line 7317 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1020:
/* Line 1792 of yacc.c  */
#line 7324 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1021:
/* Line 1792 of yacc.c  */
#line 7326 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1022:
/* Line 1792 of yacc.c  */
#line 7331 "parser.y"
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

  case 1023:
/* Line 1792 of yacc.c  */
#line 7342 "parser.y"
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

  case 1024:
/* Line 1792 of yacc.c  */
#line 7353 "parser.y"
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

  case 1025:
/* Line 1792 of yacc.c  */
#line 7367 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1026:
/* Line 1792 of yacc.c  */
#line 7371 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1027:
/* Line 1792 of yacc.c  */
#line 7377 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1028:
/* Line 1792 of yacc.c  */
#line 7379 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1029:
/* Line 1792 of yacc.c  */
#line 7385 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1030:
/* Line 1792 of yacc.c  */
#line 7394 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1031:
/* Line 1792 of yacc.c  */
#line 7402 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1032:
/* Line 1792 of yacc.c  */
#line 7408 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1033:
/* Line 1792 of yacc.c  */
#line 7415 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1034:
/* Line 1792 of yacc.c  */
#line 7417 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1035:
/* Line 1792 of yacc.c  */
#line 7422 "parser.y"
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

  case 1036:
/* Line 1792 of yacc.c  */
#line 7483 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1037:
/* Line 1792 of yacc.c  */
#line 7484 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1038:
/* Line 1792 of yacc.c  */
#line 7485 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1039:
/* Line 1792 of yacc.c  */
#line 7489 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1040:
/* Line 1792 of yacc.c  */
#line 7490 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1041:
/* Line 1792 of yacc.c  */
#line 7495 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1042:
/* Line 1792 of yacc.c  */
#line 7499 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1043:
/* Line 1792 of yacc.c  */
#line 7509 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1044:
/* Line 1792 of yacc.c  */
#line 7514 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1046:
/* Line 1792 of yacc.c  */
#line 7522 "parser.y"
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

  case 1047:
/* Line 1792 of yacc.c  */
#line 7543 "parser.y"
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

  case 1048:
/* Line 1792 of yacc.c  */
#line 7557 "parser.y"
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

  case 1049:
/* Line 1792 of yacc.c  */
#line 7579 "parser.y"
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

  case 1050:
/* Line 1792 of yacc.c  */
#line 7601 "parser.y"
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

  case 1051:
/* Line 1792 of yacc.c  */
#line 7621 "parser.y"
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

  case 1052:
/* Line 1792 of yacc.c  */
#line 7643 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1053:
/* Line 1792 of yacc.c  */
#line 7644 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1054:
/* Line 1792 of yacc.c  */
#line 7652 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1056:
/* Line 1792 of yacc.c  */
#line 7661 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1057:
/* Line 1792 of yacc.c  */
#line 7671 "parser.y"
    {
	begin_statement ("GENERATE", 0);
  }
    break;

  case 1059:
/* Line 1792 of yacc.c  */
#line 7680 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
		cb_emit_generate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1060:
/* Line 1792 of yacc.c  */
#line 7692 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1062:
/* Line 1792 of yacc.c  */
#line 7705 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1063:
/* Line 1792 of yacc.c  */
#line 7713 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1064:
/* Line 1792 of yacc.c  */
#line 7718 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1065:
/* Line 1792 of yacc.c  */
#line 7729 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1066:
/* Line 1792 of yacc.c  */
#line 7744 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1068:
/* Line 1792 of yacc.c  */
#line 7753 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 7757 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1070:
/* Line 1792 of yacc.c  */
#line 7761 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1071:
/* Line 1792 of yacc.c  */
#line 7768 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1072:
/* Line 1792 of yacc.c  */
#line 7772 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1073:
/* Line 1792 of yacc.c  */
#line 7782 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1075:
/* Line 1792 of yacc.c  */
#line 7791 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1076:
/* Line 1792 of yacc.c  */
#line 7797 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1077:
/* Line 1792 of yacc.c  */
#line 7798 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 7802 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 7803 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 7804 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1081:
/* Line 1792 of yacc.c  */
#line 7809 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1082:
/* Line 1792 of yacc.c  */
#line 7813 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1083:
/* Line 1792 of yacc.c  */
#line 7820 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1084:
/* Line 1792 of yacc.c  */
#line 7825 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1085:
/* Line 1792 of yacc.c  */
#line 7832 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1086:
/* Line 1792 of yacc.c  */
#line 7838 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1087:
/* Line 1792 of yacc.c  */
#line 7839 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1088:
/* Line 1792 of yacc.c  */
#line 7840 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1089:
/* Line 1792 of yacc.c  */
#line 7841 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1090:
/* Line 1792 of yacc.c  */
#line 7842 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1091:
/* Line 1792 of yacc.c  */
#line 7843 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 7844 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1093:
/* Line 1792 of yacc.c  */
#line 7849 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1094:
/* Line 1792 of yacc.c  */
#line 7853 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1095:
/* Line 1792 of yacc.c  */
#line 7862 "parser.y"
    {
	begin_statement ("INITIATE", 0);
  }
    break;

  case 1097:
/* Line 1792 of yacc.c  */
#line 7870 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1098:
/* Line 1792 of yacc.c  */
#line 7877 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1099:
/* Line 1792 of yacc.c  */
#line 7889 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1102:
/* Line 1792 of yacc.c  */
#line 7902 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1103:
/* Line 1792 of yacc.c  */
#line 7906 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1104:
/* Line 1792 of yacc.c  */
#line 7910 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1109:
/* Line 1792 of yacc.c  */
#line 7926 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 7930 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 7940 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1112:
/* Line 1792 of yacc.c  */
#line 7950 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1113:
/* Line 1792 of yacc.c  */
#line 7958 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1114:
/* Line 1792 of yacc.c  */
#line 7959 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 7963 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 7964 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1117:
/* Line 1792 of yacc.c  */
#line 7965 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1118:
/* Line 1792 of yacc.c  */
#line 7966 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1119:
/* Line 1792 of yacc.c  */
#line 7967 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 7968 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1121:
/* Line 1792 of yacc.c  */
#line 7972 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 7973 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1123:
/* Line 1792 of yacc.c  */
#line 7978 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1124:
/* Line 1792 of yacc.c  */
#line 7983 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 7989 "parser.y"
    { /* Nothing */ }
    break;

  case 1126:
/* Line 1792 of yacc.c  */
#line 7990 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1127:
/* Line 1792 of yacc.c  */
#line 7991 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1128:
/* Line 1792 of yacc.c  */
#line 7992 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1129:
/* Line 1792 of yacc.c  */
#line 7993 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1130:
/* Line 1792 of yacc.c  */
#line 7998 "parser.y"
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

  case 1131:
/* Line 1792 of yacc.c  */
#line 8025 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1132:
/* Line 1792 of yacc.c  */
#line 8029 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1133:
/* Line 1792 of yacc.c  */
#line 8036 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1134:
/* Line 1792 of yacc.c  */
#line 8040 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 8049 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1137:
/* Line 1792 of yacc.c  */
#line 8061 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1139:
/* Line 1792 of yacc.c  */
#line 8069 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1140:
/* Line 1792 of yacc.c  */
#line 8073 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1141:
/* Line 1792 of yacc.c  */
#line 8083 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1143:
/* Line 1792 of yacc.c  */
#line 8092 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8096 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8103 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8107 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1147:
/* Line 1792 of yacc.c  */
#line 8117 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1149:
/* Line 1792 of yacc.c  */
#line 8125 "parser.y"
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

  case 1150:
/* Line 1792 of yacc.c  */
#line 8146 "parser.y"
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

  case 1151:
/* Line 1792 of yacc.c  */
#line 8169 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1152:
/* Line 1792 of yacc.c  */
#line 8170 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1153:
/* Line 1792 of yacc.c  */
#line 8171 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8172 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8176 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1156:
/* Line 1792 of yacc.c  */
#line 8177 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8181 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1158:
/* Line 1792 of yacc.c  */
#line 8182 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8183 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8185 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1161:
/* Line 1792 of yacc.c  */
#line 8196 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1163:
/* Line 1792 of yacc.c  */
#line 8207 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1164:
/* Line 1792 of yacc.c  */
#line 8212 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8218 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1166:
/* Line 1792 of yacc.c  */
#line 8223 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1167:
/* Line 1792 of yacc.c  */
#line 8231 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1168:
/* Line 1792 of yacc.c  */
#line 8239 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1169:
/* Line 1792 of yacc.c  */
#line 8246 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1170:
/* Line 1792 of yacc.c  */
#line 8250 "parser.y"
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

  case 1171:
/* Line 1792 of yacc.c  */
#line 8263 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1172:
/* Line 1792 of yacc.c  */
#line 8270 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8281 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1174:
/* Line 1792 of yacc.c  */
#line 8285 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1175:
/* Line 1792 of yacc.c  */
#line 8290 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1176:
/* Line 1792 of yacc.c  */
#line 8294 "parser.y"
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

  case 1177:
/* Line 1792 of yacc.c  */
#line 8305 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1178:
/* Line 1792 of yacc.c  */
#line 8311 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1179:
/* Line 1792 of yacc.c  */
#line 8312 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1180:
/* Line 1792 of yacc.c  */
#line 8316 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1181:
/* Line 1792 of yacc.c  */
#line 8317 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1182:
/* Line 1792 of yacc.c  */
#line 8320 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1183:
/* Line 1792 of yacc.c  */
#line 8322 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1184:
/* Line 1792 of yacc.c  */
#line 8327 "parser.y"
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

  case 1185:
/* Line 1792 of yacc.c  */
#line 8366 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1187:
/* Line 1792 of yacc.c  */
#line 8375 "parser.y"
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

  case 1188:
/* Line 1792 of yacc.c  */
#line 8401 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1189:
/* Line 1792 of yacc.c  */
#line 8402 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1190:
/* Line 1792 of yacc.c  */
#line 8407 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1191:
/* Line 1792 of yacc.c  */
#line 8411 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8415 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1193:
/* Line 1792 of yacc.c  */
#line 8419 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8423 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1195:
/* Line 1792 of yacc.c  */
#line 8427 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1196:
/* Line 1792 of yacc.c  */
#line 8431 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8437 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1198:
/* Line 1792 of yacc.c  */
#line 8438 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1201:
/* Line 1792 of yacc.c  */
#line 8448 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1202:
/* Line 1792 of yacc.c  */
#line 8452 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1203:
/* Line 1792 of yacc.c  */
#line 8462 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1204:
/* Line 1792 of yacc.c  */
#line 8472 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1206:
/* Line 1792 of yacc.c  */
#line 8480 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1207:
/* Line 1792 of yacc.c  */
#line 8490 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 8500 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1210:
/* Line 1792 of yacc.c  */
#line 8509 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 8516 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1212:
/* Line 1792 of yacc.c  */
#line 8520 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1213:
/* Line 1792 of yacc.c  */
#line 8530 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1215:
/* Line 1792 of yacc.c  */
#line 8542 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1216:
/* Line 1792 of yacc.c  */
#line 8550 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1217:
/* Line 1792 of yacc.c  */
#line 8554 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1218:
/* Line 1792 of yacc.c  */
#line 8558 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1219:
/* Line 1792 of yacc.c  */
#line 8565 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1220:
/* Line 1792 of yacc.c  */
#line 8569 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1221:
/* Line 1792 of yacc.c  */
#line 8579 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1222:
/* Line 1792 of yacc.c  */
#line 8590 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1224:
/* Line 1792 of yacc.c  */
#line 8599 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1225:
/* Line 1792 of yacc.c  */
#line 8604 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1226:
/* Line 1792 of yacc.c  */
#line 8611 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1227:
/* Line 1792 of yacc.c  */
#line 8612 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1228:
/* Line 1792 of yacc.c  */
#line 8617 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1229:
/* Line 1792 of yacc.c  */
#line 8622 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1230:
/* Line 1792 of yacc.c  */
#line 8629 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1231:
/* Line 1792 of yacc.c  */
#line 8633 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1232:
/* Line 1792 of yacc.c  */
#line 8641 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1233:
/* Line 1792 of yacc.c  */
#line 8648 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1234:
/* Line 1792 of yacc.c  */
#line 8652 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1235:
/* Line 1792 of yacc.c  */
#line 8662 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 8669 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1243:
/* Line 1792 of yacc.c  */
#line 8684 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1244:
/* Line 1792 of yacc.c  */
#line 8685 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 8689 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1246:
/* Line 1792 of yacc.c  */
#line 8690 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1247:
/* Line 1792 of yacc.c  */
#line 8697 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1248:
/* Line 1792 of yacc.c  */
#line 8706 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1251:
/* Line 1792 of yacc.c  */
#line 8718 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1252:
/* Line 1792 of yacc.c  */
#line 8722 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1253:
/* Line 1792 of yacc.c  */
#line 8726 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1254:
/* Line 1792 of yacc.c  */
#line 8730 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1255:
/* Line 1792 of yacc.c  */
#line 8734 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1256:
/* Line 1792 of yacc.c  */
#line 8738 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1257:
/* Line 1792 of yacc.c  */
#line 8742 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1258:
/* Line 1792 of yacc.c  */
#line 8746 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1259:
/* Line 1792 of yacc.c  */
#line 8755 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1260:
/* Line 1792 of yacc.c  */
#line 8759 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 8768 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1264:
/* Line 1792 of yacc.c  */
#line 8782 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1267:
/* Line 1792 of yacc.c  */
#line 8796 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1268:
/* Line 1792 of yacc.c  */
#line 8800 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1269:
/* Line 1792 of yacc.c  */
#line 8810 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1271:
/* Line 1792 of yacc.c  */
#line 8818 "parser.y"
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

  case 1272:
/* Line 1792 of yacc.c  */
#line 8839 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1273:
/* Line 1792 of yacc.c  */
#line 8848 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1274:
/* Line 1792 of yacc.c  */
#line 8853 "parser.y"
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

  case 1275:
/* Line 1792 of yacc.c  */
#line 8871 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1276:
/* Line 1792 of yacc.c  */
#line 8872 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1278:
/* Line 1792 of yacc.c  */
#line 8877 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1279:
/* Line 1792 of yacc.c  */
#line 8884 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1280:
/* Line 1792 of yacc.c  */
#line 8885 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1281:
/* Line 1792 of yacc.c  */
#line 8890 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1282:
/* Line 1792 of yacc.c  */
#line 8896 "parser.y"
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

  case 1283:
/* Line 1792 of yacc.c  */
#line 8906 "parser.y"
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

  case 1284:
/* Line 1792 of yacc.c  */
#line 8921 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1285:
/* Line 1792 of yacc.c  */
#line 8927 "parser.y"
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

  case 1286:
/* Line 1792 of yacc.c  */
#line 8937 "parser.y"
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

  case 1287:
/* Line 1792 of yacc.c  */
#line 8953 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1289:
/* Line 1792 of yacc.c  */
#line 8963 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1290:
/* Line 1792 of yacc.c  */
#line 8975 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1291:
/* Line 1792 of yacc.c  */
#line 8979 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1292:
/* Line 1792 of yacc.c  */
#line 8986 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1293:
/* Line 1792 of yacc.c  */
#line 8990 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1294:
/* Line 1792 of yacc.c  */
#line 8995 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 9000 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1296:
/* Line 1792 of yacc.c  */
#line 9007 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1297:
/* Line 1792 of yacc.c  */
#line 9008 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1298:
/* Line 1792 of yacc.c  */
#line 9009 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1299:
/* Line 1792 of yacc.c  */
#line 9010 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1300:
/* Line 1792 of yacc.c  */
#line 9011 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1301:
/* Line 1792 of yacc.c  */
#line 9012 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1302:
/* Line 1792 of yacc.c  */
#line 9017 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1305:
/* Line 1792 of yacc.c  */
#line 9030 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1306:
/* Line 1792 of yacc.c  */
#line 9034 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1307:
/* Line 1792 of yacc.c  */
#line 9044 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1308:
/* Line 1792 of yacc.c  */
#line 9048 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1309:
/* Line 1792 of yacc.c  */
#line 9054 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1310:
/* Line 1792 of yacc.c  */
#line 9066 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1311:
/* Line 1792 of yacc.c  */
#line 9070 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1312:
/* Line 1792 of yacc.c  */
#line 9074 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1313:
/* Line 1792 of yacc.c  */
#line 9082 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1314:
/* Line 1792 of yacc.c  */
#line 9093 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1315:
/* Line 1792 of yacc.c  */
#line 9097 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1316:
/* Line 1792 of yacc.c  */
#line 9103 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1317:
/* Line 1792 of yacc.c  */
#line 9104 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1318:
/* Line 1792 of yacc.c  */
#line 9105 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1319:
/* Line 1792 of yacc.c  */
#line 9106 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1320:
/* Line 1792 of yacc.c  */
#line 9113 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1322:
/* Line 1792 of yacc.c  */
#line 9122 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1323:
/* Line 1792 of yacc.c  */
#line 9128 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1324:
/* Line 1792 of yacc.c  */
#line 9129 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1325:
/* Line 1792 of yacc.c  */
#line 9133 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1326:
/* Line 1792 of yacc.c  */
#line 9134 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1327:
/* Line 1792 of yacc.c  */
#line 9135 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1328:
/* Line 1792 of yacc.c  */
#line 9139 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1329:
/* Line 1792 of yacc.c  */
#line 9140 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1330:
/* Line 1792 of yacc.c  */
#line 9145 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1331:
/* Line 1792 of yacc.c  */
#line 9149 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1332:
/* Line 1792 of yacc.c  */
#line 9159 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1334:
/* Line 1792 of yacc.c  */
#line 9168 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1335:
/* Line 1792 of yacc.c  */
#line 9172 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1336:
/* Line 1792 of yacc.c  */
#line 9176 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1337:
/* Line 1792 of yacc.c  */
#line 9183 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9187 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1339:
/* Line 1792 of yacc.c  */
#line 9197 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  }
    break;

  case 1342:
/* Line 1792 of yacc.c  */
#line 9215 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
  }
    break;

  case 1344:
/* Line 1792 of yacc.c  */
#line 9223 "parser.y"
    {
	begin_implicit_statement ();
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1345:
/* Line 1792 of yacc.c  */
#line 9231 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
		cb_emit_terminate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1346:
/* Line 1792 of yacc.c  */
#line 9243 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1348:
/* Line 1792 of yacc.c  */
#line 9251 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1349:
/* Line 1792 of yacc.c  */
#line 9264 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1351:
/* Line 1792 of yacc.c  */
#line 9272 "parser.y"
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

  case 1355:
/* Line 1792 of yacc.c  */
#line 9295 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1357:
/* Line 1792 of yacc.c  */
#line 9305 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1358:
/* Line 1792 of yacc.c  */
#line 9311 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1359:
/* Line 1792 of yacc.c  */
#line 9313 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1360:
/* Line 1792 of yacc.c  */
#line 9317 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1361:
/* Line 1792 of yacc.c  */
#line 9319 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1362:
/* Line 1792 of yacc.c  */
#line 9324 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1363:
/* Line 1792 of yacc.c  */
#line 9330 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1364:
/* Line 1792 of yacc.c  */
#line 9332 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1365:
/* Line 1792 of yacc.c  */
#line 9337 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1366:
/* Line 1792 of yacc.c  */
#line 9343 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1367:
/* Line 1792 of yacc.c  */
#line 9344 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1368:
/* Line 1792 of yacc.c  */
#line 9348 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1369:
/* Line 1792 of yacc.c  */
#line 9349 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1370:
/* Line 1792 of yacc.c  */
#line 9353 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1371:
/* Line 1792 of yacc.c  */
#line 9354 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1372:
/* Line 1792 of yacc.c  */
#line 9359 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1373:
/* Line 1792 of yacc.c  */
#line 9363 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1374:
/* Line 1792 of yacc.c  */
#line 9373 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1381:
/* Line 1792 of yacc.c  */
#line 9391 "parser.y"
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

  case 1382:
/* Line 1792 of yacc.c  */
#line 9416 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1383:
/* Line 1792 of yacc.c  */
#line 9420 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1384:
/* Line 1792 of yacc.c  */
#line 9432 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1385:
/* Line 1792 of yacc.c  */
#line 9442 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1386:
/* Line 1792 of yacc.c  */
#line 9447 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1387:
/* Line 1792 of yacc.c  */
#line 9452 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1388:
/* Line 1792 of yacc.c  */
#line 9457 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1389:
/* Line 1792 of yacc.c  */
#line 9465 "parser.y"
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

  case 1392:
/* Line 1792 of yacc.c  */
#line 9508 "parser.y"
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

  case 1393:
/* Line 1792 of yacc.c  */
#line 9548 "parser.y"
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

  case 1394:
/* Line 1792 of yacc.c  */
#line 9558 "parser.y"
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

  case 1399:
/* Line 1792 of yacc.c  */
#line 9588 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1400:
/* Line 1792 of yacc.c  */
#line 9597 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1401:
/* Line 1792 of yacc.c  */
#line 9603 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1402:
/* Line 1792 of yacc.c  */
#line 9613 "parser.y"
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

  case 1403:
/* Line 1792 of yacc.c  */
#line 9644 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1406:
/* Line 1792 of yacc.c  */
#line 9660 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1408:
/* Line 1792 of yacc.c  */
#line 9672 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1409:
/* Line 1792 of yacc.c  */
#line 9681 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1410:
/* Line 1792 of yacc.c  */
#line 9682 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1411:
/* Line 1792 of yacc.c  */
#line 9687 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1412:
/* Line 1792 of yacc.c  */
#line 9691 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1413:
/* Line 1792 of yacc.c  */
#line 9695 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1414:
/* Line 1792 of yacc.c  */
#line 9699 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1415:
/* Line 1792 of yacc.c  */
#line 9705 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1416:
/* Line 1792 of yacc.c  */
#line 9706 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1419:
/* Line 1792 of yacc.c  */
#line 9716 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1420:
/* Line 1792 of yacc.c  */
#line 9720 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1423:
/* Line 1792 of yacc.c  */
#line 9737 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1425:
/* Line 1792 of yacc.c  */
#line 9747 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 9760 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1430:
/* Line 1792 of yacc.c  */
#line 9770 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1433:
/* Line 1792 of yacc.c  */
#line 9785 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1435:
/* Line 1792 of yacc.c  */
#line 9795 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1438:
/* Line 1792 of yacc.c  */
#line 9812 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1440:
/* Line 1792 of yacc.c  */
#line 9823 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1446:
/* Line 1792 of yacc.c  */
#line 9846 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1447:
/* Line 1792 of yacc.c  */
#line 9855 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1451:
/* Line 1792 of yacc.c  */
#line 9872 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1452:
/* Line 1792 of yacc.c  */
#line 9881 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1455:
/* Line 1792 of yacc.c  */
#line 9898 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1457:
/* Line 1792 of yacc.c  */
#line 9908 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1458:
/* Line 1792 of yacc.c  */
#line 9918 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1459:
/* Line 1792 of yacc.c  */
#line 9922 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1460:
/* Line 1792 of yacc.c  */
#line 9932 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 9939 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1462:
/* Line 1792 of yacc.c  */
#line 9945 "parser.y"
    {
	current_expr = NULL;
  }
    break;

  case 1463:
/* Line 1792 of yacc.c  */
#line 9949 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1467:
/* Line 1792 of yacc.c  */
#line 9962 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1468:
/* Line 1792 of yacc.c  */
#line 9970 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1469:
/* Line 1792 of yacc.c  */
#line 9971 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1470:
/* Line 1792 of yacc.c  */
#line 9973 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1471:
/* Line 1792 of yacc.c  */
#line 9974 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1472:
/* Line 1792 of yacc.c  */
#line 9975 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1473:
/* Line 1792 of yacc.c  */
#line 9976 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1474:
/* Line 1792 of yacc.c  */
#line 9977 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1475:
/* Line 1792 of yacc.c  */
#line 9979 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1476:
/* Line 1792 of yacc.c  */
#line 9980 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1477:
/* Line 1792 of yacc.c  */
#line 9981 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1478:
/* Line 1792 of yacc.c  */
#line 9982 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1479:
/* Line 1792 of yacc.c  */
#line 9983 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1480:
/* Line 1792 of yacc.c  */
#line 9984 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1481:
/* Line 1792 of yacc.c  */
#line 9986 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1482:
/* Line 1792 of yacc.c  */
#line 9987 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1483:
/* Line 1792 of yacc.c  */
#line 9988 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1484:
/* Line 1792 of yacc.c  */
#line 9990 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1485:
/* Line 1792 of yacc.c  */
#line 9991 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1486:
/* Line 1792 of yacc.c  */
#line 9992 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1487:
/* Line 1792 of yacc.c  */
#line 9993 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1488:
/* Line 1792 of yacc.c  */
#line 9994 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 9997 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1490:
/* Line 1792 of yacc.c  */
#line 9998 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1499:
/* Line 1792 of yacc.c  */
#line 10028 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1500:
/* Line 1792 of yacc.c  */
#line 10032 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1504:
/* Line 1792 of yacc.c  */
#line 10043 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1505:
/* Line 1792 of yacc.c  */
#line 10044 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1506:
/* Line 1792 of yacc.c  */
#line 10045 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1507:
/* Line 1792 of yacc.c  */
#line 10049 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1508:
/* Line 1792 of yacc.c  */
#line 10050 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1509:
/* Line 1792 of yacc.c  */
#line 10051 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1510:
/* Line 1792 of yacc.c  */
#line 10056 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1511:
/* Line 1792 of yacc.c  */
#line 10059 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1512:
/* Line 1792 of yacc.c  */
#line 10063 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1513:
/* Line 1792 of yacc.c  */
#line 10064 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1514:
/* Line 1792 of yacc.c  */
#line 10065 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1515:
/* Line 1792 of yacc.c  */
#line 10068 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1516:
/* Line 1792 of yacc.c  */
#line 10069 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1517:
/* Line 1792 of yacc.c  */
#line 10080 "parser.y"
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

  case 1518:
/* Line 1792 of yacc.c  */
#line 10092 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1519:
/* Line 1792 of yacc.c  */
#line 10101 "parser.y"
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

  case 1520:
/* Line 1792 of yacc.c  */
#line 10117 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10126 "parser.y"
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

  case 1522:
/* Line 1792 of yacc.c  */
#line 10142 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1523:
/* Line 1792 of yacc.c  */
#line 10156 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1524:
/* Line 1792 of yacc.c  */
#line 10158 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1525:
/* Line 1792 of yacc.c  */
#line 10163 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1526:
/* Line 1792 of yacc.c  */
#line 10171 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1527:
/* Line 1792 of yacc.c  */
#line 10178 "parser.y"
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

  case 1528:
/* Line 1792 of yacc.c  */
#line 10198 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1529:
/* Line 1792 of yacc.c  */
#line 10202 "parser.y"
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

  case 1530:
/* Line 1792 of yacc.c  */
#line 10223 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1531:
/* Line 1792 of yacc.c  */
#line 10264 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1532:
/* Line 1792 of yacc.c  */
#line 10277 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1533:
/* Line 1792 of yacc.c  */
#line 10279 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1534:
/* Line 1792 of yacc.c  */
#line 10283 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1535:
/* Line 1792 of yacc.c  */
#line 10289 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1536:
/* Line 1792 of yacc.c  */
#line 10291 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1537:
/* Line 1792 of yacc.c  */
#line 10296 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1540:
/* Line 1792 of yacc.c  */
#line 10310 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1541:
/* Line 1792 of yacc.c  */
#line 10317 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1542:
/* Line 1792 of yacc.c  */
#line 10327 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1543:
/* Line 1792 of yacc.c  */
#line 10328 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1544:
/* Line 1792 of yacc.c  */
#line 10333 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1545:
/* Line 1792 of yacc.c  */
#line 10341 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1546:
/* Line 1792 of yacc.c  */
#line 10349 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10353 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1548:
/* Line 1792 of yacc.c  */
#line 10360 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1551:
/* Line 1792 of yacc.c  */
#line 10376 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1552:
/* Line 1792 of yacc.c  */
#line 10390 "parser.y"
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

  case 1553:
/* Line 1792 of yacc.c  */
#line 10407 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1554:
/* Line 1792 of yacc.c  */
#line 10411 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1557:
/* Line 1792 of yacc.c  */
#line 10420 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1558:
/* Line 1792 of yacc.c  */
#line 10427 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1559:
/* Line 1792 of yacc.c  */
#line 10431 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1564:
/* Line 1792 of yacc.c  */
#line 10442 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1565:
/* Line 1792 of yacc.c  */
#line 10446 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1566:
/* Line 1792 of yacc.c  */
#line 10450 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1567:
/* Line 1792 of yacc.c  */
#line 10454 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1568:
/* Line 1792 of yacc.c  */
#line 10458 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1569:
/* Line 1792 of yacc.c  */
#line 10462 "parser.y"
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

  case 1570:
/* Line 1792 of yacc.c  */
#line 10483 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1571:
/* Line 1792 of yacc.c  */
#line 10487 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1579:
/* Line 1792 of yacc.c  */
#line 10504 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1580:
/* Line 1792 of yacc.c  */
#line 10508 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1581:
/* Line 1792 of yacc.c  */
#line 10512 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1597:
/* Line 1792 of yacc.c  */
#line 10559 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1605:
/* Line 1792 of yacc.c  */
#line 10583 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1606:
/* Line 1792 of yacc.c  */
#line 10587 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1607:
/* Line 1792 of yacc.c  */
#line 10591 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1608:
/* Line 1792 of yacc.c  */
#line 10592 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1609:
/* Line 1792 of yacc.c  */
#line 10596 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1610:
/* Line 1792 of yacc.c  */
#line 10601 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1611:
/* Line 1792 of yacc.c  */
#line 10608 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1612:
/* Line 1792 of yacc.c  */
#line 10615 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1613:
/* Line 1792 of yacc.c  */
#line 10622 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1614:
/* Line 1792 of yacc.c  */
#line 10632 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1615:
/* Line 1792 of yacc.c  */
#line 10636 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1616:
/* Line 1792 of yacc.c  */
#line 10643 "parser.y"
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

  case 1617:
/* Line 1792 of yacc.c  */
#line 10653 "parser.y"
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

  case 1618:
/* Line 1792 of yacc.c  */
#line 10663 "parser.y"
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

  case 1619:
/* Line 1792 of yacc.c  */
#line 10673 "parser.y"
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

  case 1620:
/* Line 1792 of yacc.c  */
#line 10686 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1621:
/* Line 1792 of yacc.c  */
#line 10690 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 10698 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1623:
/* Line 1792 of yacc.c  */
#line 10706 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1624:
/* Line 1792 of yacc.c  */
#line 10710 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 10720 "parser.y"
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

  case 1626:
/* Line 1792 of yacc.c  */
#line 10735 "parser.y"
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

  case 1627:
/* Line 1792 of yacc.c  */
#line 10758 "parser.y"
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

  case 1628:
/* Line 1792 of yacc.c  */
#line 10778 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1629:
/* Line 1792 of yacc.c  */
#line 10785 "parser.y"
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

  case 1630:
/* Line 1792 of yacc.c  */
#line 10800 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1631:
/* Line 1792 of yacc.c  */
#line 10801 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1632:
/* Line 1792 of yacc.c  */
#line 10802 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1633:
/* Line 1792 of yacc.c  */
#line 10803 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1634:
/* Line 1792 of yacc.c  */
#line 10804 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1635:
/* Line 1792 of yacc.c  */
#line 10805 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1636:
/* Line 1792 of yacc.c  */
#line 10810 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1637:
/* Line 1792 of yacc.c  */
#line 10814 "parser.y"
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

  case 1638:
/* Line 1792 of yacc.c  */
#line 10831 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1639:
/* Line 1792 of yacc.c  */
#line 10835 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1640:
/* Line 1792 of yacc.c  */
#line 10841 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1641:
/* Line 1792 of yacc.c  */
#line 10842 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1642:
/* Line 1792 of yacc.c  */
#line 10843 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1643:
/* Line 1792 of yacc.c  */
#line 10844 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1644:
/* Line 1792 of yacc.c  */
#line 10845 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1645:
/* Line 1792 of yacc.c  */
#line 10846 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1646:
/* Line 1792 of yacc.c  */
#line 10847 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1647:
/* Line 1792 of yacc.c  */
#line 10854 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1648:
/* Line 1792 of yacc.c  */
#line 10858 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 10862 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1650:
/* Line 1792 of yacc.c  */
#line 10866 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1651:
/* Line 1792 of yacc.c  */
#line 10870 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1652:
/* Line 1792 of yacc.c  */
#line 10874 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 10878 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1654:
/* Line 1792 of yacc.c  */
#line 10882 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1655:
/* Line 1792 of yacc.c  */
#line 10886 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1656:
/* Line 1792 of yacc.c  */
#line 10890 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 10917 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 10921 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 10925 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 10932 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 10936 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1673:
/* Line 1792 of yacc.c  */
#line 10940 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1674:
/* Line 1792 of yacc.c  */
#line 10947 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1675:
/* Line 1792 of yacc.c  */
#line 10954 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1676:
/* Line 1792 of yacc.c  */
#line 10961 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1677:
/* Line 1792 of yacc.c  */
#line 10971 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1678:
/* Line 1792 of yacc.c  */
#line 10978 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1679:
/* Line 1792 of yacc.c  */
#line 10988 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1680:
/* Line 1792 of yacc.c  */
#line 10995 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1681:
/* Line 1792 of yacc.c  */
#line 11006 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1682:
/* Line 1792 of yacc.c  */
#line 11014 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1683:
/* Line 1792 of yacc.c  */
#line 11015 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 11019 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1685:
/* Line 1792 of yacc.c  */
#line 11020 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 11024 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1687:
/* Line 1792 of yacc.c  */
#line 11025 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 11030 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 11034 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1690:
/* Line 1792 of yacc.c  */
#line 11041 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 11045 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 11052 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1693:
/* Line 1792 of yacc.c  */
#line 11053 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 11054 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1695:
/* Line 1792 of yacc.c  */
#line 11058 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1696:
/* Line 1792 of yacc.c  */
#line 11059 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1697:
/* Line 1792 of yacc.c  */
#line 11063 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1698:
/* Line 1792 of yacc.c  */
#line 11064 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1699:
/* Line 1792 of yacc.c  */
#line 11065 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1700:
/* Line 1792 of yacc.c  */
#line 11070 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1701:
/* Line 1792 of yacc.c  */
#line 11074 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1702:
/* Line 1792 of yacc.c  */
#line 11086 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1703:
/* Line 1792 of yacc.c  */
#line 11091 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1704:
/* Line 1792 of yacc.c  */
#line 11099 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1705:
/* Line 1792 of yacc.c  */
#line 11103 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1706:
/* Line 1792 of yacc.c  */
#line 11107 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1707:
/* Line 1792 of yacc.c  */
#line 11111 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1708:
/* Line 1792 of yacc.c  */
#line 11115 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1709:
/* Line 1792 of yacc.c  */
#line 11119 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1710:
/* Line 1792 of yacc.c  */
#line 11123 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1711:
/* Line 1792 of yacc.c  */
#line 11127 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1712:
/* Line 1792 of yacc.c  */
#line 11133 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1713:
/* Line 1792 of yacc.c  */
#line 11134 "parser.y"
    { (yyval) = cb_int1; }
    break;


/* Line 1792 of yacc.c  */
#line 18470 "parser.c"
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
#line 11307 "parser.y"

