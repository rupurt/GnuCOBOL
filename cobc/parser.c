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
#line 1371 "parser.c"

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
#define YYLAST   8548

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  513
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  826
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1931
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2754

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
    1347,  1351,  1353,  1354,  1360,  1362,  1365,  1367,  1371,  1372,
    1377,  1380,  1385,  1388,  1391,  1392,  1393,  1399,  1400,  1401,
    1407,  1408,  1409,  1415,  1416,  1419,  1420,  1427,  1428,  1431,
    1434,  1437,  1441,  1443,  1445,  1448,  1451,  1453,  1455,  1457,
    1459,  1462,  1464,  1469,  1471,  1474,  1479,  1481,  1483,  1484,
    1487,  1489,  1491,  1493,  1495,  1497,  1501,  1506,  1511,  1516,
    1520,  1521,  1524,  1525,  1531,  1532,  1535,  1537,  1539,  1541,
    1543,  1545,  1547,  1549,  1551,  1553,  1555,  1557,  1559,  1561,
    1563,  1565,  1567,  1569,  1573,  1575,  1577,  1580,  1583,  1585,
    1587,  1589,  1590,  1592,  1594,  1595,  1597,  1599,  1604,  1606,
    1609,  1612,  1614,  1617,  1619,  1621,  1623,  1628,  1629,  1633,
    1636,  1638,  1640,  1644,  1651,  1654,  1657,  1659,  1662,  1665,
    1666,  1669,  1671,  1673,  1676,  1680,  1683,  1687,  1690,  1693,
    1696,  1698,  1703,  1706,  1710,  1711,  1712,  1718,  1719,  1721,
    1724,  1728,  1730,  1731,  1736,  1740,  1741,  1744,  1747,  1750,
    1752,  1754,  1757,  1760,  1762,  1764,  1766,  1768,  1770,  1772,
    1774,  1776,  1778,  1780,  1785,  1787,  1789,  1795,  1801,  1805,
    1809,  1811,  1813,  1815,  1817,  1819,  1821,  1823,  1825,  1828,
    1831,  1834,  1836,  1838,  1840,  1842,  1843,  1845,  1847,  1848,
    1850,  1852,  1856,  1859,  1860,  1861,  1862,  1872,  1873,  1878,
    1879,  1880,  1884,  1885,  1889,  1891,  1894,  1899,  1900,  1903,
    1906,  1907,  1911,  1915,  1920,  1925,  1929,  1930,  1932,  1933,
    1936,  1937,  1938,  1946,  1947,  1950,  1952,  1954,  1957,  1959,
    1961,  1962,  1969,  1970,  1973,  1976,  1978,  1979,  1981,  1982,
    1983,  1987,  1988,  1991,  1994,  1996,  1998,  2000,  2002,  2004,
    2006,  2008,  2010,  2012,  2014,  2016,  2018,  2020,  2022,  2024,
    2026,  2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,  2044,
    2046,  2048,  2050,  2052,  2054,  2056,  2058,  2060,  2062,  2064,
    2066,  2068,  2070,  2072,  2074,  2076,  2078,  2080,  2082,  2084,
    2086,  2088,  2090,  2092,  2095,  2098,  2099,  2104,  2111,  2115,
    2119,  2124,  2128,  2133,  2137,  2141,  2146,  2151,  2155,  2160,
    2164,  2169,  2175,  2179,  2184,  2188,  2192,  2194,  2196,  2198,
    2201,  2202,  2204,  2208,  2212,  2215,  2218,  2221,  2225,  2229,
    2233,  2234,  2236,  2237,  2241,  2242,  2245,  2247,  2250,  2252,
    2254,  2256,  2258,  2260,  2262,  2264,  2266,  2268,  2270,  2272,
    2274,  2279,  2281,  2283,  2285,  2287,  2289,  2292,  2294,  2296,
    2300,  2304,  2308,  2312,  2316,  2318,  2320,  2321,  2323,  2324,
    2329,  2334,  2340,  2347,  2348,  2351,  2352,  2354,  2355,  2359,
    2363,  2368,  2369,  2372,  2373,  2377,  2379,  2382,  2387,  2388,
    2391,  2392,  2397,  2404,  2405,  2407,  2409,  2411,  2412,  2413,
    2417,  2419,  2422,  2425,  2429,  2430,  2433,  2436,  2439,  2440,
    2444,  2447,  2452,  2454,  2456,  2458,  2460,  2461,  2464,  2465,
    2468,  2469,  2471,  2472,  2476,  2478,  2481,  2482,  2486,  2489,
    2493,  2494,  2496,  2500,  2504,  2507,  2508,  2513,  2518,  2519,
    2521,  2523,  2525,  2526,  2531,  2535,  2538,  2540,  2543,  2544,
    2546,  2547,  2552,  2556,  2560,  2564,  2568,  2573,  2576,  2581,
    2583,  2584,  2588,  2594,  2595,  2598,  2601,  2604,  2607,  2608,
    2611,  2613,  2615,  2616,  2619,  2620,  2622,  2624,  2627,  2629,
    2632,  2635,  2637,  2639,  2642,  2645,  2647,  2649,  2651,  2653,
    2655,  2659,  2663,  2667,  2671,  2672,  2674,  2675,  2680,  2685,
    2692,  2699,  2708,  2717,  2718,  2720,  2721,  2725,  2728,  2729,
    2734,  2737,  2739,  2743,  2745,  2747,  2749,  2752,  2754,  2756,
    2759,  2762,  2766,  2769,  2773,  2775,  2779,  2782,  2784,  2786,
    2788,  2789,  2792,  2793,  2795,  2796,  2800,  2801,  2804,  2806,
    2809,  2811,  2813,  2815,  2816,  2819,  2820,  2824,  2826,  2827,
    2831,  2833,  2834,  2838,  2842,  2843,  2847,  2850,  2851,  2858,
    2862,  2865,  2867,  2868,  2870,  2871,  2875,  2881,  2882,  2885,
    2886,  2890,  2894,  2895,  2898,  2900,  2903,  2908,  2910,  2912,
    2914,  2916,  2918,  2920,  2922,  2923,  2927,  2928,  2932,  2934,
    2937,  2938,  2942,  2945,  2947,  2949,  2951,  2954,  2956,  2958,
    2960,  2961,  2965,  2968,  2974,  2976,  2979,  2982,  2985,  2987,
    2989,  2991,  2994,  2996,  2999,  3004,  3007,  3008,  3010,  3012,
    3014,  3016,  3021,  3022,  3025,  3029,  3033,  3034,  3038,  3039,
    3043,  3047,  3052,  3053,  3058,  3063,  3070,  3071,  3073,  3074,
    3078,  3083,  3089,  3091,  3093,  3095,  3097,  3098,  3102,  3103,
    3107,  3110,  3112,  3113,  3117,  3120,  3121,  3126,  3129,  3130,
    3132,  3134,  3136,  3138,  3142,  3143,  3146,  3148,  3152,  3156,
    3157,  3161,  3163,  3165,  3167,  3171,  3179,  3180,  3185,  3193,
    3194,  3197,  3198,  3201,  3204,  3208,  3212,  3216,  3219,  3220,
    3224,  3226,  3228,  3229,  3231,  3233,  3234,  3238,  3241,  3243,
    3244,  3249,  3254,  3255,  3257,  3258,  3263,  3268,  3269,  3272,
    3276,  3277,  3279,  3281,  3282,  3287,  3292,  3299,  3300,  3303,
    3304,  3307,  3309,  3312,  3316,  3317,  3319,  3320,  3324,  3326,
    3328,  3330,  3332,  3334,  3336,  3338,  3340,  3342,  3344,  3349,
    3353,  3355,  3358,  3361,  3364,  3367,  3370,  3373,  3376,  3379,
    3382,  3387,  3391,  3396,  3398,  3401,  3405,  3407,  3410,  3414,
    3418,  3419,  3423,  3424,  3432,  3433,  3439,  3440,  3443,  3444,
    3447,  3448,  3452,  3453,  3456,  3461,  3462,  3465,  3470,  3471,
    3476,  3481,  3482,  3486,  3487,  3492,  3494,  3496,  3498,  3501,
    3504,  3507,  3510,  3512,  3514,  3517,  3519,  3520,  3522,  3523,
    3528,  3531,  3532,  3535,  3540,  3545,  3546,  3548,  3550,  3552,
    3554,  3556,  3557,  3562,  3568,  3570,  3573,  3575,  3579,  3583,
    3584,  3589,  3590,  3592,  3593,  3598,  3603,  3610,  3617,  3618,
    3620,  3623,  3624,  3626,  3627,  3631,  3633,  3636,  3637,  3641,
    3647,  3648,  3652,  3655,  3656,  3658,  3660,  3661,  3666,  3673,
    3674,  3678,  3680,  3684,  3687,  3690,  3693,  3697,  3698,  3702,
    3703,  3707,  3708,  3712,  3713,  3715,  3716,  3720,  3722,  3724,
    3726,  3728,  3730,  3738,  3739,  3741,  3743,  3745,  3747,  3749,
    3751,  3756,  3758,  3761,  3763,  3766,  3770,  3771,  3773,  3776,
    3778,  3782,  3784,  3786,  3791,  3793,  3795,  3797,  3798,  3803,
    3809,  3810,  3813,  3814,  3819,  3823,  3827,  3829,  3831,  3833,
    3835,  3836,  3838,  3841,  3842,  3845,  3846,  3849,  3852,  3853,
    3856,  3857,  3860,  3863,  3864,  3867,  3868,  3871,  3874,  3875,
    3878,  3879,  3882,  3885,  3887,  3890,  3892,  3894,  3897,  3900,
    3903,  3905,  3907,  3910,  3913,  3916,  3917,  3920,  3921,  3924,
    3925,  3928,  3930,  3932,  3933,  3936,  3938,  3941,  3944,  3946,
    3948,  3950,  3952,  3954,  3956,  3958,  3960,  3962,  3964,  3966,
    3968,  3970,  3972,  3974,  3976,  3978,  3980,  3982,  3984,  3986,
    3988,  3990,  3992,  3994,  3997,  3999,  4001,  4003,  4005,  4007,
    4009,  4011,  4015,  4016,  4018,  4020,  4024,  4028,  4030,  4034,
    4038,  4040,  4044,  4046,  4049,  4052,  4054,  4058,  4060,  4062,
    4066,  4068,  4072,  4074,  4078,  4080,  4083,  4086,  4088,  4090,
    4092,  4095,  4097,  4099,  4101,  4104,  4106,  4107,  4110,  4112,
    4114,  4116,  4120,  4122,  4124,  4127,  4129,  4131,  4133,  4136,
    4138,  4140,  4142,  4144,  4146,  4148,  4151,  4153,  4155,  4159,
    4161,  4164,  4166,  4168,  4170,  4172,  4175,  4178,  4181,  4186,
    4190,  4192,  4194,  4197,  4199,  4201,  4203,  4205,  4207,  4209,
    4211,  4214,  4217,  4220,  4222,  4224,  4226,  4228,  4230,  4232,
    4234,  4236,  4238,  4240,  4242,  4244,  4246,  4248,  4250,  4252,
    4254,  4256,  4258,  4260,  4262,  4264,  4266,  4268,  4270,  4272,
    4275,  4277,  4281,  4284,  4287,  4289,  4291,  4293,  4297,  4300,
    4303,  4305,  4307,  4311,  4315,  4320,  4326,  4328,  4330,  4332,
    4334,  4336,  4338,  4340,  4342,  4344,  4346,  4348,  4350,  4353,
    4355,  4359,  4361,  4363,  4365,  4367,  4369,  4371,  4373,  4376,
    4382,  4388,  4394,  4399,  4405,  4411,  4417,  4420,  4423,  4425,
    4427,  4429,  4431,  4433,  4435,  4437,  4439,  4441,  4443,  4445,
    4446,  4451,  4457,  4458,  4462,  4465,  4467,  4471,  4475,  4477,
    4481,  4483,  4487,  4488,  4489,  4491,  4492,  4494,  4495,  4497,
    4498,  4501,  4502,  4505,  4506,  4508,  4510,  4511,  4513,  4514,
    4516,  4519,  4520,  4523,  4524,  4528,  4530,  4532,  4534,  4536,
    4538,  4540,  4542,  4544,  4545,  4548,  4550,  4552,  4554,  4556,
    4558,  4560,  4562,  4564,  4566,  4568,  4570,  4572,  4574,  4576,
    4578,  4580,  4582,  4584,  4586,  4588,  4590,  4592,  4594,  4596,
    4598,  4600,  4602,  4604,  4606,  4608,  4610,  4612,  4614,  4616,
    4618,  4620,  4622,  4624,  4626,  4628,  4630,  4632,  4634,  4636,
    4638,  4640,  4642,  4644,  4646,  4648,  4650,  4652,  4654,  4656,
    4658,  4660,  4662,  4664,  4666,  4668,  4670,  4672,  4674,  4676,
    4678,  4680,  4682,  4684,  4686,  4688,  4689,  4691,  4692,  4694,
    4695,  4697,  4698,  4700,  4701,  4703,  4704,  4706,  4707,  4709,
    4710,  4712,  4713,  4715,  4716,  4718,  4719,  4721,  4722,  4724,
    4725,  4727,  4728,  4730,  4731,  4733,  4734,  4736,  4737,  4739,
    4742,  4743,  4745,  4746,  4748,  4749,  4751,  4752,  4754,  4755,
    4757,  4759,  4760,  4762,  4763,  4765,  4767,  4768,  4770,  4772,
    4773,  4776,  4779,  4780,  4782,  4783,  4785,  4786,  4788,  4789,
    4791,  4793,  4794,  4796,  4797,  4799,  4800,  4803,  4805,  4807,
    4808,  4810,  4811,  4813,  4814,  4816,  4817,  4819,  4820,  4822,
    4823,  4825,  4826,  4828,  4829,  4831,  4834,  4835,  4837,  4838,
    4840,  4841,  4843,  4844,  4846,  4847,  4849,  4850,  4852,  4853,
    4855,  4856,  4858,  4860,  4861,  4863,  4864,  4868,  4869,  4871,
    4872,  4874,  4877,  4879,  4881,  4883,  4885,  4887,  4889,  4891,
    4893,  4895,  4897,  4899,  4901,  4903,  4905,  4907,  4909,  4911,
    4913,  4915,  4917,  4919,  4922,  4925,  4927,  4929,  4931,  4933,
    4935,  4937,  4940,  4942,  4946,  4949,  4951,  4953,  4955,  4958,
    4960,  4963,  4965,  4968,  4970,  4973,  4975,  4978,  4980,  4983,
    4985,  4988
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
      -1,   541,   542,   543,   605,   606,   608,   607,   644,   530,
     654,   655,   656,   531,   685,   741,   743,   745,   796,   532,
     810,    -1,    -1,   341,   452,   536,   537,   534,   538,   452,
      -1,   200,   452,   536,   537,   452,    -1,   342,    -1,   256,
      -1,    -1,    26,   256,    -1,    -1,  1281,   539,  1296,    -1,
      73,    -1,    73,   540,    -1,   540,    -1,   172,    -1,   457,
      -1,   354,    -1,    -1,   154,   123,   452,    -1,    -1,    85,
     394,   452,    -1,    -1,   543,   544,    -1,   545,    -1,   549,
      -1,   568,    -1,   569,    -1,   560,    -1,    -1,   415,   452,
     546,   547,    -1,    -1,   559,   548,   452,    -1,    -1,  1312,
     108,   272,    -1,    -1,   304,   452,   550,   551,    -1,    -1,
     559,   452,    -1,   559,   552,   452,    -1,   552,   452,    -1,
     553,    -1,   552,   553,    -1,   554,    -1,   555,    -1,   556,
      -1,   557,    -1,   268,   410,  1281,  1231,  1324,    -1,  1330,
    1281,  1198,    -1,   396,  1281,  1231,    -1,  1269,    60,  1281,
     558,    -1,  1198,    -1,   257,    -1,   495,    -1,   435,    -1,
     505,    -1,   559,   505,    -1,    -1,   369,   452,   561,   562,
      -1,    -1,   563,   452,    -1,   563,     1,   452,    -1,   564,
      -1,   563,   564,    -1,   199,     9,   229,    -1,   199,   565,
     566,    -1,   199,   567,   229,    -1,   370,    -1,   497,    -1,
      -1,    26,   256,    -1,   370,    -1,   567,   370,    -1,   417,
     452,    -1,   570,   452,    -1,   570,     1,   452,    -1,   571,
      -1,   570,   571,    -1,   572,    -1,   577,    -1,   586,    -1,
     596,    -1,   593,    -1,   597,    -1,   599,    -1,   600,    -1,
     601,    -1,   602,    -1,   603,    -1,   604,    -1,    -1,   505,
     573,   574,    -1,  1281,    97,    -1,  1231,  1281,  1202,    -1,
    1281,  1202,   575,    -1,   576,    -1,    -1,   576,    -1,  1047,
    1293,  1202,    -1,   576,  1047,  1293,  1202,    -1,    -1,    11,
    1202,   578,  1281,   579,    -1,   280,    -1,   419,    -1,   420,
      -1,   127,    -1,    28,    -1,   580,    -1,   581,    -1,   580,
     581,    -1,   584,    -1,   584,   443,   584,    -1,    -1,   584,
      17,   582,   583,    -1,   584,    -1,   583,    17,   584,    -1,
     256,    -1,   416,    -1,   511,    -1,   346,    -1,   212,    -1,
     266,    -1,   416,    -1,   511,    -1,   588,   587,    -1,    -1,
     218,   505,    -1,   433,  1270,   589,    -1,   590,    -1,   589,
     590,    -1,   591,  1282,   592,    -1,  1203,    -1,   591,  1203,
      -1,  1232,    -1,   592,  1232,    -1,    59,  1202,  1281,   594,
      -1,   595,    -1,   594,   595,    -1,  1234,    -1,  1234,   443,
    1234,    -1,   257,  1202,  1281,   256,    -1,    99,  1299,  1281,
     256,   598,    -1,    -1,  1312,   328,   256,    -1,   109,  1281,
      69,    -1,   301,   405,  1281,   469,   400,    -1,   101,  1281,
    1197,    -1,    97,   423,  1281,  1197,    -1,   390,  1281,  1197,
      -1,   165,  1281,  1197,    -1,    -1,   226,   394,   452,    -1,
      -1,   174,   452,    -1,    -1,   234,   452,    -1,    -1,   608,
     609,    -1,    -1,   397,  1255,  1202,   610,   611,   452,    -1,
     397,     1,   452,    -1,    -1,   611,   612,    -1,   613,    -1,
     619,    -1,   621,    -1,   623,    -1,   624,    -1,   626,    -1,
     630,    -1,   632,    -1,   633,    -1,   634,    -1,   639,    -1,
     640,    -1,   642,    -1,    29,  1309,   616,   615,   617,    -1,
      29,  1309,   616,   614,   618,    -1,    29,  1309,   616,   120,
     618,    -1,    29,  1309,   616,   238,   618,    -1,    29,  1309,
     616,   335,   618,    -1,   118,    -1,   119,    -1,   438,    -1,
     347,    -1,    -1,   252,     7,  1273,    -1,    -1,   172,    -1,
     126,    -1,   256,    -1,  1228,    -1,    -1,   256,    -1,  1228,
      -1,     4,  1288,  1281,   620,    -1,   402,    -1,   126,    -1,
     347,    -1,    19,  1313,  1283,  1281,  1197,  1249,   622,    -1,
      19,  1313,  1283,  1281,  1197,   635,   636,  1249,   622,    -1,
      -1,   432,   502,     9,  1235,    -1,   432,   502,   585,    -1,
    1314,  1281,   505,    -1,   625,   423,  1281,  1197,    -1,    -1,
     455,    -1,   412,    -1,    -1,   627,   262,  1288,  1281,   628,
      -1,   267,   629,    -1,    33,   629,    -1,   168,    -1,    -1,
     504,   262,   309,  1323,    -1,   504,   262,   309,   274,  1323,
      -1,   504,   385,    -1,   315,  1281,   631,    -1,   631,    -1,
     220,    -1,  1297,  1267,   402,    -1,   359,    -1,   252,   402,
      -1,   320,  1269,  1281,  1201,    -1,   351,   114,  1281,   419,
      -1,   351,  1283,  1281,  1197,    -1,   351,  1283,  1281,  1197,
     635,   636,    -1,   453,    -1,   414,  1281,    -1,    -1,   637,
     638,    -1,   636,   638,    -1,  1197,    -1,   359,  1283,  1281,
    1197,    -1,   372,   641,  1264,    -1,   287,    -1,  1231,    -1,
     404,  1312,   643,    -1,     9,  1294,    -1,   287,  1294,    -1,
     349,   310,    -1,    -1,   645,   452,    -1,   645,     1,   452,
      -1,   646,    -1,   645,   646,    -1,   647,    -1,   649,    -1,
     388,   648,  1264,  1274,  1187,    -1,    -1,   351,    -1,   412,
      -1,   413,    -1,    -1,   274,   650,  1273,  1305,  1271,   651,
      -1,   652,    -1,   651,   652,    -1,  1188,   653,    -1,    -1,
     331,  1231,    -1,    -1,   103,   123,   452,    -1,    -1,   455,
     394,   452,    -1,    -1,   656,   657,    -1,   658,   687,    -1,
      -1,   660,  1188,   659,   661,   452,    -1,   660,     1,   452,
      -1,   173,    -1,   392,    -1,    -1,   661,   662,    -1,  1281,
     172,    -1,  1281,   204,    -1,   663,    -1,   665,    -1,   669,
      -1,   670,    -1,   673,    -1,   674,    -1,   680,    -1,   681,
      -1,   682,    -1,    47,  1271,  1231,   668,   664,    -1,    -1,
     353,    -1,    58,    -1,   351,  1271,  1231,  1270,    -1,   351,
    1271,  1231,   447,  1231,  1270,    -1,   351,  1281,   500,  1276,
    1302,   667,   668,  1270,   666,    -1,    -1,   115,  1292,  1197,
      -1,    -1,  1275,  1231,    -1,    -1,   447,  1231,    -1,   239,
    1325,  1321,    -1,   499,   306,   671,  1281,   672,    -1,   499,
     306,   175,  1281,   672,    -1,   505,    -1,   213,    -1,   256,
      -1,  1228,    -1,   103,  1325,  1199,    -1,   250,  1281,  1201,
    1287,   675,    -1,    -1,   675,   676,    -1,   677,    -1,   678,
      -1,   679,    -1,  1312,   188,  1266,  1201,    -1,   466,  1201,
      -1,    48,  1201,    -1,   352,  1288,  1281,   505,    -1,    63,
    1281,   505,    -1,   683,   684,    -1,   366,  1281,    -1,   368,
    1263,    -1,  1202,    -1,   684,  1202,    -1,    -1,    -1,   507,
     394,   452,   686,   687,    -1,    -1,    -1,   688,   689,    -1,
     690,   452,    -1,   689,   690,   452,    -1,   689,   452,    -1,
     702,    -1,    -1,   692,   693,   691,   704,    -1,   692,     1,
     452,    -1,  1247,   505,    -1,    -1,   176,    -1,   505,    -1,
     505,    -1,    -1,  1281,   204,    -1,  1235,    -1,   245,   697,
      -1,   244,   697,    -1,    50,  1291,   697,    -1,  1225,    -1,
      41,    -1,    44,    -1,    43,    -1,    42,    -1,    40,    -1,
     701,    -1,   713,    -1,   714,    -1,   698,    -1,   699,    -1,
     700,    -1,     1,   452,    -1,   180,    -1,   184,    -1,   181,
      -1,   182,    -1,   179,    -1,   183,    -1,   185,    -1,   330,
      -1,   343,    -1,   692,   694,    86,   695,   703,    -1,  1265,
     696,    -1,   196,   505,    -1,    -1,   704,   705,    -1,   706,
      -1,   707,    -1,   709,    -1,   710,    -1,   711,    -1,   715,
      -1,   718,    -1,   730,    -1,   731,    -1,   732,    -1,   733,
      -1,   734,    -1,   739,    -1,   740,    -1,   355,  1225,    -1,
    1281,   172,   708,    -1,    -1,    26,   256,    -1,  1281,   204,
      -1,   327,    -1,   712,    -1,   492,  1281,   712,    -1,    39,
      -1,    74,    -1,   713,    -1,   714,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,   120,    -1,   219,
      -1,   319,    -1,   330,    -1,   343,    -1,   409,    -1,   407,
      -1,   408,    -1,   480,    -1,   478,    -1,   479,    -1,    41,
    1300,    -1,    41,   477,    -1,    44,  1300,    -1,    44,   477,
      -1,    43,  1300,    -1,    43,   477,    -1,    42,  1300,    -1,
      42,   477,    -1,    40,  1300,    -1,    40,   477,    -1,   180,
      -1,   181,    -1,   179,    -1,   182,    -1,   183,    -1,   277,
      -1,    76,    -1,   187,    -1,    77,    -1,   186,    -1,  1301,
     241,  1259,    -1,  1301,   469,  1259,    -1,   305,  1231,   719,
    1307,   721,   717,    -1,    -1,   425,  1231,    -1,   305,  1231,
     719,  1307,   721,   724,   727,    -1,   305,   126,   722,   720,
     719,   723,   724,   727,    -1,    -1,   447,  1231,    -1,    -1,
     196,  1231,    -1,    -1,   115,  1292,  1197,    -1,    -1,    53,
    1276,   505,    -1,    -1,   223,    -1,   725,    -1,    -1,   725,
     726,  1283,  1281,  1196,    -1,    27,    -1,   116,    -1,    -1,
     220,  1268,   728,    -1,   729,    -1,   728,   729,    -1,   505,
      -1,   235,  1298,    -1,   434,  1284,    -1,    45,  1310,   511,
      -1,    36,    -1,    -1,   499,  1282,   736,   735,   738,    -1,
     737,    -1,   736,   737,    -1,  1235,    -1,  1235,   443,  1235,
      -1,    -1,  1311,   454,  1281,  1235,    -1,   363,  1228,    -1,
     363,  1228,   443,  1228,    -1,    21,   244,    -1,    21,   301,
      -1,    -1,    -1,   261,   394,   452,   742,   687,    -1,    -1,
      -1,   255,   394,   452,   744,   687,    -1,    -1,    -1,   366,
     394,   452,   746,   747,    -1,    -1,   747,   748,    -1,    -1,
     348,  1189,   749,   750,   452,   767,    -1,    -1,   750,   751,
      -1,     1,   452,    -1,  1281,   204,    -1,    62,  1281,  1215,
      -1,   752,    -1,   757,    -1,  1338,   753,    -1,   754,   755,
      -1,   754,    -1,   755,    -1,   177,    -1,   756,    -1,   755,
     756,    -1,  1224,    -1,   321,  1286,   758,   760,    -1,   759,
      -1,   759,  1322,    -1,   759,  1322,   759,  1316,    -1,  1233,
      -1,  1224,    -1,    -1,   760,   761,    -1,   762,    -1,   763,
      -1,   764,    -1,   765,    -1,   766,    -1,   210,  1281,   759,
      -1,   178,  1331,  1281,   759,    -1,   240,  1332,  1281,   759,
      -1,   240,  1331,  1281,   759,    -1,   188,  1281,   759,    -1,
      -1,   767,   768,    -1,    -1,   692,   693,   769,   770,   452,
      -1,    -1,   770,   771,    -1,   772,    -1,   776,    -1,   784,
      -1,   789,    -1,   710,    -1,   795,    -1,   715,    -1,   730,
      -1,   790,    -1,   732,    -1,   793,    -1,   779,    -1,   734,
      -1,   782,    -1,   794,    -1,   716,    -1,   783,    -1,   473,
    1281,   773,    -1,  1336,    -1,  1334,    -1,  1332,   774,    -1,
    1333,   775,    -1,  1331,    -1,  1335,    -1,  1337,    -1,    -1,
    1224,    -1,   177,    -1,    -1,  1224,    -1,   177,    -1,   285,
     209,  1281,   777,    -1,  1231,    -1,   329,  1231,    -1,   464,
    1231,    -1,   778,    -1,   285,   321,    -1,   286,    -1,   321,
      -1,   285,    -1,   431,  1291,  1208,   780,    -1,    -1,   373,
    1292,   781,    -1,   485,  1224,    -1,  1224,    -1,   177,    -1,
     333,   502,  1164,    -1,   500,  1224,   196,  1210,    49,  1210,
      -1,   785,   786,    -1,   252,   787,    -1,   788,    -1,   329,
    1233,    -1,   464,  1233,    -1,    -1,   299,   232,    -1,   299,
      -1,  1233,    -1,   285,   321,    -1,   309,   285,   321,    -1,
     791,   792,    -1,  1315,  1290,  1282,    -1,  1316,  1263,    -1,
     329,  1233,    -1,   464,  1233,    -1,  1233,    -1,   414,  1281,
    1210,  1256,    -1,   209,  1278,    -1,   492,  1281,   120,    -1,
      -1,    -1,   389,   394,   452,   797,   798,    -1,    -1,   799,
      -1,   800,   452,    -1,   799,   800,   452,    -1,   702,    -1,
      -1,   692,   693,   801,   802,    -1,   692,     1,   452,    -1,
      -1,   802,   803,    -1,    45,   252,    -1,    45,   389,    -1,
      38,    -1,    46,    -1,   161,   157,    -1,   161,   159,    -1,
     211,    -1,   265,    -1,   378,    -1,   474,    -1,   318,    -1,
     243,    -1,    32,    -1,   395,    -1,   371,    -1,   198,    -1,
     345,    57,  1281,  1215,    -1,   345,    -1,   457,    -1,   252,
    1289,  1281,   806,  1217,    -1,  1315,  1289,  1281,   807,  1217,
      -1,   190,  1281,  1217,    -1,    35,  1281,  1217,    -1,   711,
      -1,   732,    -1,   809,    -1,   730,    -1,   715,    -1,   734,
      -1,   710,    -1,   808,    -1,   498,  1224,    -1,   196,  1220,
      -1,   447,  1224,    -1,   329,    -1,   464,    -1,   270,    -1,
     459,    -1,    -1,   804,    -1,   805,    -1,    -1,   804,    -1,
     805,    -1,   305,  1231,  1307,    -1,  1281,   204,    -1,    -1,
      -1,    -1,   337,   123,   814,   822,   452,   811,   823,   812,
     825,    -1,    -1,   813,   836,   452,   825,    -1,    -1,    -1,
     498,   815,   817,    -1,    -1,    56,   816,   817,    -1,   818,
      -1,   817,   818,    -1,   819,   820,   821,   505,    -1,    -1,
    1268,   357,    -1,  1268,   499,    -1,    -1,   410,  1281,    32,
      -1,   410,  1281,   111,    -1,   477,   410,  1281,    32,    -1,
     477,   410,  1281,  1231,    -1,   410,  1281,  1231,    -1,    -1,
     312,    -1,    -1,   376,   505,    -1,    -1,    -1,   110,   452,
     824,   825,   130,   110,   452,    -1,    -1,   825,   826,    -1,
     827,    -1,   830,    -1,   836,   452,    -1,   831,    -1,   452,
      -1,    -1,   505,   394,   832,   452,   828,   829,    -1,    -1,
    1118,   452,    -1,   505,   452,    -1,   505,    -1,    -1,  1231,
      -1,    -1,    -1,   834,   835,   836,    -1,    -1,   837,   838,
      -1,   836,   838,    -1,   839,    -1,   855,    -1,   860,    -1,
     864,    -1,   869,    -1,   884,    -1,   887,    -1,   895,    -1,
     891,    -1,   896,    -1,   897,    -1,   902,    -1,   916,    -1,
     920,    -1,   923,    -1,   937,    -1,   941,    -1,   944,    -1,
     947,    -1,   951,    -1,   952,    -1,   956,    -1,   966,    -1,
     969,    -1,   986,    -1,   988,    -1,   991,    -1,   995,    -1,
    1001,    -1,  1013,    -1,  1021,    -1,  1022,    -1,  1025,    -1,
    1026,    -1,  1030,    -1,  1035,    -1,  1036,    -1,  1044,    -1,
    1059,    -1,  1069,    -1,  1078,    -1,  1083,    -1,  1090,    -1,
    1094,    -1,  1096,    -1,  1099,    -1,  1102,    -1,  1106,    -1,
    1133,    -1,   285,   399,    -1,     1,  1260,    -1,    -1,     3,
     840,   841,   854,    -1,   842,   844,   848,   849,   850,  1141,
      -1,  1224,   196,   843,    -1,  1224,   196,  1316,    -1,  1224,
     196,   104,   510,    -1,  1224,   196,   104,    -1,  1224,   196,
     105,   509,    -1,  1224,   196,   105,    -1,  1224,   196,   106,
      -1,  1224,   196,   163,   237,    -1,  1224,   196,   166,   423,
      -1,  1224,   196,   444,    -1,  1224,   196,   494,   276,    -1,
    1224,   196,    70,    -1,  1224,   196,   156,  1141,    -1,  1224,
     196,   154,  1213,  1141,    -1,  1224,   196,    24,    -1,  1224,
     196,    25,  1141,    -1,  1224,   196,  1191,    -1,  1224,   196,
     505,    -1,  1224,    -1,   308,    -1,   254,    -1,   252,   299,
      -1,    -1,   845,    -1,  1266,   846,   847,    -1,  1266,   847,
     846,    -1,  1266,   846,    -1,  1266,   847,    -1,    30,  1213,
      -1,   252,  1289,  1217,    -1,  1315,  1289,  1217,    -1,   331,
    1289,  1217,    -1,    -1,   197,    -1,    -1,   272,  1281,    47,
      -1,    -1,   504,   851,    -1,   852,    -1,   851,   852,    -1,
      32,    -1,   436,    -1,    38,    -1,    46,    -1,    92,    -1,
     198,    -1,   211,    -1,   243,    -1,   263,    -1,   265,    -1,
     288,    -1,   318,    -1,   345,    57,  1281,  1215,    -1,   345,
      -1,   371,    -1,   378,    -1,   395,    -1,   474,    -1,   287,
     853,    -1,   853,    -1,   490,    -1,   190,  1281,  1217,    -1,
      35,  1281,  1217,    -1,   391,   483,  1163,    -1,   391,   124,
    1163,    -1,   445,  1262,  1218,    -1,   484,    -1,   111,    -1,
      -1,   131,    -1,    -1,     5,   856,   857,   859,    -1,  1206,
     447,  1183,  1147,    -1,  1206,   858,   203,  1183,  1147,    -1,
      95,  1224,   447,  1224,  1256,  1147,    -1,    -1,   447,  1207,
      -1,    -1,   132,    -1,    -1,    10,   861,   862,    -1,  1224,
    1250,   863,    -1,  1177,    58,  1251,   863,    -1,    -1,   376,
    1205,    -1,    -1,    18,   865,   866,    -1,   867,    -1,   866,
     867,    -1,  1193,   447,   868,  1193,    -1,    -1,   339,   447,
      -1,    -1,    51,   870,   871,   883,    -1,   872,  1216,   873,
     878,   881,   882,    -1,    -1,   422,    -1,   424,    -1,   271,
      -1,    -1,    -1,   498,   874,   875,    -1,   876,    -1,   875,
     876,    -1,   877,   308,    -1,   877,   820,  1207,    -1,    -1,
    1268,   357,    -1,  1268,    88,    -1,  1268,   499,    -1,    -1,
     879,  1280,  1224,    -1,   879,   880,    -1,   879,     6,  1291,
    1224,    -1,   376,    -1,   203,    -1,   461,    -1,   308,    -1,
      -1,  1319,   833,    -1,    -1,   294,   833,    -1,    -1,   133,
      -1,    -1,    52,   885,   886,    -1,  1215,    -1,   886,  1215,
      -1,    -1,    61,   888,   889,    -1,  1188,   890,    -1,   889,
    1188,   890,    -1,    -1,  1326,    -1,  1326,  1274,   362,    -1,
    1312,   287,   380,    -1,  1312,   262,    -1,    -1,    75,   892,
     893,   894,    -1,  1183,  1317,  1177,  1147,    -1,    -1,   134,
      -1,    72,    -1,    89,    -1,    -1,   112,   898,   899,   901,
      -1,  1188,  1297,  1160,    -1,   455,   900,    -1,  1188,    -1,
     900,  1188,    -1,    -1,   135,    -1,    -1,   120,   903,   904,
     915,    -1,  1215,   488,  1144,    -1,  1215,   489,  1144,    -1,
    1215,   486,  1144,    -1,  1215,   487,  1144,    -1,  1206,   908,
     912,  1144,    -1,   905,  1144,    -1,  1207,   504,   913,  1144,
      -1,   907,    -1,    -1,   905,   906,   907,    -1,  1207,   845,
     909,   849,   911,    -1,    -1,   485,  1191,    -1,   485,   505,
      -1,   485,   335,    -1,   485,    97,    -1,    -1,   485,   910,
      -1,    97,    -1,    98,    -1,    -1,   504,   913,    -1,    -1,
     298,    -1,   914,    -1,   913,   914,    -1,    38,    -1,    45,
     252,    -1,    45,   389,    -1,    46,    -1,    92,    -1,   161,
     157,    -1,   161,   159,    -1,   211,    -1,   265,    -1,   318,
      -1,   378,    -1,   474,    -1,   190,  1281,  1217,    -1,    35,
    1281,  1217,    -1,   391,   483,  1163,    -1,   391,   124,  1163,
      -1,    -1,   136,    -1,    -1,   122,   917,   918,   919,    -1,
    1207,   228,  1183,  1147,    -1,  1207,   228,  1207,   203,  1183,
    1147,    -1,  1207,    49,  1207,   203,  1183,  1147,    -1,  1207,
     228,  1207,   203,  1184,   361,  1184,  1147,    -1,  1207,    49,
    1207,   203,  1184,   361,  1184,  1147,    -1,    -1,   137,    -1,
      -1,   153,   921,   922,    -1,   256,   873,    -1,    -1,   164,
     924,   925,   936,    -1,   926,   928,    -1,   927,    -1,   926,
      17,   927,    -1,  1165,    -1,   465,    -1,   454,    -1,   929,
     931,    -1,   929,    -1,   930,    -1,   929,   930,    -1,   932,
     833,    -1,   502,   316,   833,    -1,   502,   933,    -1,   932,
     502,   933,    -1,   934,    -1,   933,    17,   934,    -1,  1166,
     935,    -1,    21,    -1,   465,    -1,   454,    -1,    -1,   443,
    1165,    -1,    -1,   138,    -1,    -1,   169,   938,   939,    -1,
      -1,   340,   940,    -1,   199,    -1,   324,   102,    -1,   324,
      -1,   394,    -1,   323,    -1,    -1,   879,  1207,    -1,    -1,
     195,   942,   943,    -1,  1204,    -1,    -1,   202,   945,   946,
      -1,  1228,    -1,    -1,   205,   948,   949,    -1,  1308,  1192,
     950,    -1,    -1,   115,  1292,  1224,    -1,   206,   940,    -1,
      -1,   215,   953,  1164,  1306,   954,   955,    -1,   833,   129,
     833,    -1,   129,   833,    -1,   833,    -1,    -1,   140,    -1,
      -1,   222,   957,   958,    -1,  1204,   959,   960,   961,   965,
      -1,    -1,  1312,   176,    -1,    -1,     9,  1308,   499,    -1,
     964,  1308,   499,    -1,    -1,   365,   962,    -1,   963,    -1,
     962,   963,    -1,   964,  1272,    49,  1207,    -1,    12,    -1,
      15,    -1,   301,    -1,    16,    -1,   302,    -1,   277,    -1,
     278,    -1,    -1,  1306,  1308,   111,    -1,    -1,   224,   967,
     968,    -1,  1189,    -1,   968,  1189,    -1,    -1,   227,   970,
     971,    -1,   972,   973,    -1,  1224,    -1,  1235,    -1,  1238,
      -1,   974,   976,    -1,   974,    -1,   976,    -1,   977,    -1,
      -1,   437,   975,   978,    -1,   365,   980,    -1,    93,  1213,
     447,  1214,   984,    -1,   979,    -1,   978,   979,    -1,  1213,
     189,    -1,    58,   984,    -1,     9,    -1,   241,    -1,   469,
      -1,  1213,   984,    -1,   981,    -1,   980,   981,    -1,    58,
      49,  1213,   984,    -1,   982,   983,    -1,    -1,     9,    -1,
     241,    -1,   178,    -1,   469,    -1,  1213,    49,  1214,   984,
      -1,    -1,   984,   985,    -1,    37,  1279,  1207,    -1,     8,
    1279,  1207,    -1,    -1,   269,   987,  1061,    -1,    -1,   273,
     989,   990,    -1,  1207,   447,  1204,    -1,    95,  1207,   447,
    1204,    -1,    -1,   275,   992,   993,   994,    -1,  1207,    49,
    1183,  1147,    -1,  1207,    49,  1207,   203,  1183,  1147,    -1,
      -1,   141,    -1,    -1,   311,   996,   997,    -1,   998,   999,
    1187,  1000,    -1,   997,   998,   999,  1187,  1000,    -1,   225,
      -1,   317,    -1,   233,    -1,   171,    -1,    -1,   404,  1312,
     643,    -1,    -1,  1312,   287,   380,    -1,  1312,   262,    -1,
     379,    -1,    -1,   324,  1002,  1003,    -1,  1007,  1008,    -1,
      -1,  1008,  1004,   833,  1005,    -1,  1008,  1006,    -1,    -1,
     142,    -1,   142,    -1,   452,    -1,  1193,    -1,  1193,   443,
    1193,    -1,    -1,  1216,   446,    -1,   191,    -1,  1009,   482,
    1010,    -1,  1009,   500,  1011,    -1,    -1,  1312,   440,  1138,
      -1,   169,    -1,  1164,    -1,  1012,    -1,  1011,     8,  1012,
      -1,  1224,   196,  1207,    49,  1207,   482,  1164,    -1,    -1,
     349,  1014,  1015,  1020,    -1,  1188,  1253,  1297,  1016,  1017,
    1018,  1019,    -1,    -1,   228,  1224,    -1,    -1,   217,   262,
      -1,  1312,   262,    -1,  1312,   236,   262,    -1,  1312,   287,
     262,    -1,  1312,   216,   262,    -1,  1312,   501,    -1,    -1,
     237,  1281,  1224,    -1,  1160,    -1,  1154,    -1,    -1,   144,
      -1,   350,    -1,    -1,   360,  1023,  1024,    -1,  1185,  1136,
      -1,   374,    -1,    -1,   375,  1027,  1028,  1029,    -1,  1188,
    1297,  1016,  1153,    -1,    -1,   145,    -1,    -1,   381,  1031,
    1032,  1034,    -1,  1185,  1136,  1033,  1160,    -1,    -1,  1312,
     262,    -1,  1312,   287,   262,    -1,    -1,   146,    -1,   385,
      -1,    -1,   393,  1037,  1038,  1043,    -1,  1186,  1039,  1040,
    1041,    -1,     9,  1186,  1040,   502,  1165,   833,    -1,    -1,
     500,  1224,    -1,    -1,   130,   833,    -1,  1042,    -1,  1042,
    1041,    -1,   502,  1164,   833,    -1,    -1,   147,    -1,    -1,
     403,  1045,  1046,    -1,  1049,    -1,  1050,    -1,  1053,    -1,
    1054,    -1,  1055,    -1,  1057,    -1,   309,    -1,   307,    -1,
     483,    -1,   124,    -1,   154,  1213,   447,  1213,    -1,  1221,
      31,  1051,    -1,  1052,    -1,  1051,  1052,    -1,    38,  1047,
      -1,    46,  1047,    -1,   211,  1047,    -1,   265,  1047,    -1,
     378,  1047,    -1,   474,  1047,    -1,   243,  1047,    -1,   318,
    1047,    -1,  1204,   447,   153,  1212,    -1,  1204,   447,  1207,
      -1,  1204,  1048,    49,  1207,    -1,  1056,    -1,  1055,  1056,
      -1,  1190,   447,  1047,    -1,  1058,    -1,  1057,  1058,    -1,
    1204,   447,   465,    -1,  1204,   447,   454,    -1,    -1,   412,
    1060,  1061,    -1,    -1,  1222,  1063,  1065,  1066,  1062,  1067,
    1068,    -1,    -1,  1063,  1292,   726,  1283,  1064,    -1,    -1,
    1064,  1228,    -1,    -1,  1329,  1277,    -1,    -1,  1314,  1281,
    1197,    -1,    -1,   498,  1187,    -1,   225,   337,  1281,  1007,
      -1,    -1,   203,  1187,    -1,   317,   337,  1281,  1007,    -1,
      -1,   421,  1070,  1071,  1077,    -1,  1188,  1073,  1072,  1160,
      -1,    -1,  1312,  1328,  1177,    -1,    -1,   237,  1281,  1074,
    1224,    -1,   178,    -1,   240,    -1,  1170,    -1,  1254,  1171,
      -1,  1254,  1172,    -1,  1254,  1173,    -1,  1254,  1174,    -1,
    1075,    -1,  1076,    -1,   290,  1170,    -1,   293,    -1,    -1,
     148,    -1,    -1,   426,   387,  1079,  1080,    -1,   426,  1082,
      -1,    -1,   879,  1207,    -1,  1312,   162,  1304,  1081,    -1,
    1312,   289,  1304,  1081,    -1,    -1,  1207,    -1,   256,    -1,
     416,    -1,   511,    -1,   346,    -1,    -1,   427,  1084,  1085,
    1089,    -1,  1086,   228,  1224,  1088,  1150,    -1,  1087,    -1,
    1086,  1087,    -1,  1207,    -1,   113,  1268,   410,    -1,   113,
    1268,  1207,    -1,    -1,  1312,   330,  1281,  1224,    -1,    -1,
     149,    -1,    -1,   430,  1091,  1092,  1093,    -1,  1206,   196,
    1183,  1147,    -1,  1206,   196,  1207,   203,  1183,  1147,    -1,
      95,  1224,   196,  1224,  1256,  1147,    -1,    -1,   150,    -1,
     432,  1095,    -1,    -1,   336,    -1,    -1,   439,  1097,  1098,
      -1,  1189,    -1,  1098,  1189,    -1,    -1,   470,  1100,  1101,
      -1,  1224,   196,  1213,   447,  1214,    -1,    -1,   476,  1103,
    1104,    -1,  1188,  1105,    -1,    -1,   351,    -1,   353,    -1,
      -1,   481,  1107,  1108,  1117,    -1,  1224,  1109,  1112,  1088,
    1116,  1150,    -1,    -1,   113,  1268,  1110,    -1,  1111,    -1,
    1110,   313,  1111,    -1,  1248,  1213,    -1,   228,  1113,    -1,
    1112,  1113,    -1,  1224,  1114,  1115,    -1,    -1,   114,  1276,
    1224,    -1,    -1,    96,  1276,  1224,    -1,    -1,   437,  1276,
    1224,    -1,    -1,   151,    -1,    -1,   493,  1119,  1120,    -1,
    1121,    -1,  1124,    -1,  1128,    -1,  1130,    -1,  1131,    -1,
    1122,  1262,  1303,  1318,  1295,  1292,  1123,    -1,    -1,   204,
      -1,  1187,    -1,   225,    -1,   317,    -1,   233,    -1,   171,
      -1,  1274,   108,  1292,  1125,    -1,  1126,    -1,  1125,  1126,
      -1,  1194,    -1,     9,   338,    -1,     9,  1127,  1228,    -1,
      -1,   358,    -1,   358,   306,    -1,   306,    -1,  1266,   340,
    1129,    -1,   421,    -1,   130,    -1,  1122,    37,   367,  1224,
      -1,  1132,    -1,   167,    -1,   128,    -1,    -1,   508,  1134,
    1135,  1140,    -1,  1185,  1136,  1137,  1033,  1139,    -1,    -1,
     196,  1220,    -1,    -1,  1138,  1261,  1217,  1285,    -1,  1138,
    1261,  1191,    -1,  1138,  1261,   321,    -1,    37,    -1,     8,
      -1,  1160,    -1,  1157,    -1,    -1,   152,    -1,  1142,  1143,
      -1,    -1,   166,   833,    -1,    -1,   294,   833,    -1,  1145,
    1146,    -1,    -1,   166,   833,    -1,    -1,   294,   833,    -1,
    1148,  1149,    -1,    -1,   411,   833,    -1,    -1,   297,   833,
      -1,  1151,  1152,    -1,    -1,   462,   833,    -1,    -1,   296,
     833,    -1,  1155,  1156,    -1,  1155,    -1,  1155,  1156,    -1,
    1155,    -1,  1156,    -1,   130,   833,    -1,   291,   833,    -1,
    1158,  1159,    -1,  1158,    -1,  1159,    -1,   158,   833,    -1,
     292,   833,    -1,  1161,  1162,    -1,    -1,   231,   833,    -1,
      -1,   295,   833,    -1,    -1,  1219,  1327,    -1,  1165,    -1,
    1166,    -1,    -1,  1167,  1168,    -1,  1169,    -1,  1168,   232,
      -1,  1168,  1169,    -1,  1207,    -1,   463,    -1,   449,    -1,
     464,    -1,   459,    -1,   460,    -1,   451,    -1,   170,    -1,
    1170,    -1,  1171,    -1,  1172,    -1,  1173,    -1,  1174,    -1,
     293,    -1,   290,    -1,    20,    -1,   313,    -1,   308,    -1,
     301,    -1,    12,    -1,    13,    -1,    14,    -1,   332,    -1,
     284,    -1,   453,    -1,   160,  1308,    -1,   456,    -1,   207,
      -1,   458,    -1,   246,    -1,   208,    -1,   247,    -1,  1177,
      -1,  1175,  1176,  1177,    -1,    -1,    71,    -1,   398,    -1,
    1177,   464,  1178,    -1,  1177,   459,  1178,    -1,  1178,    -1,
    1178,   460,  1179,    -1,  1178,   451,  1179,    -1,  1179,    -1,
    1180,   170,  1179,    -1,  1180,    -1,   464,  1181,    -1,   459,
    1181,    -1,  1181,    -1,   463,  1177,   449,    -1,  1210,    -1,
     251,    -1,   251,  1320,   505,    -1,   253,    -1,   253,  1320,
     505,    -1,   322,    -1,   322,  1320,   505,    -1,  1184,    -1,
    1183,  1184,    -1,  1205,  1256,    -1,  1228,    -1,  1228,    -1,
    1188,    -1,  1187,  1188,    -1,   505,    -1,   505,    -1,  1191,
      -1,  1190,  1191,    -1,   271,    -1,    -1,  1192,  1193,    -1,
    1194,    -1,  1228,    -1,  1195,    -1,  1195,  1320,  1195,    -1,
     256,    -1,  1197,    -1,  1196,  1197,    -1,  1228,    -1,   505,
      -1,  1200,    -1,  1199,  1200,    -1,   505,    -1,  1197,    -1,
     256,    -1,   505,    -1,   505,    -1,  1205,    -1,  1204,  1205,
      -1,  1226,    -1,  1236,    -1,     6,  1291,  1225,    -1,  1207,
      -1,  1206,  1207,    -1,  1224,    -1,  1235,    -1,  1238,    -1,
    1182,    -1,   245,  1225,    -1,   245,  1236,    -1,   245,  1238,
      -1,     6,  1291,  1211,  1212,    -1,     6,  1291,  1225,    -1,
     271,    -1,  1210,    -1,  1208,  1210,    -1,  1224,    -1,  1236,
      -1,  1238,    -1,  1224,    -1,  1236,    -1,  1238,    -1,  1182,
      -1,   245,  1225,    -1,   245,  1236,    -1,   245,  1238,    -1,
     340,    -1,   153,    -1,  1225,    -1,   256,    -1,  1224,    -1,
    1236,    -1,  1224,    -1,  1235,    -1,  1224,    -1,   256,    -1,
    1224,    -1,   256,    -1,  1238,    -1,  1221,    -1,  1231,    -1,
     511,    -1,  1221,    -1,  1233,    -1,  1221,    -1,  1231,    -1,
    1224,    -1,  1235,    -1,  1238,    -1,  1223,    -1,  1223,    -1,
    1228,    -1,  1228,  1229,    -1,  1225,    -1,  1228,  1229,  1230,
      -1,  1228,  1229,    -1,  1228,  1230,    -1,  1228,    -1,  1227,
      -1,  1182,    -1,  1228,  1229,  1230,    -1,  1228,  1229,    -1,
    1228,  1230,    -1,  1228,    -1,   505,    -1,   505,  1320,  1228,
      -1,   463,  1175,   449,    -1,   463,  1177,   450,   449,    -1,
     463,  1177,   450,  1177,   449,    -1,   256,    -1,   256,    -1,
     256,    -1,   511,    -1,   256,    -1,   416,    -1,   511,    -1,
     346,    -1,   212,    -1,   266,    -1,   461,    -1,  1236,    -1,
       9,  1237,    -1,  1237,    -1,  1236,   448,  1237,    -1,   256,
      -1,   416,    -1,   511,    -1,   346,    -1,   212,    -1,   266,
      -1,   461,    -1,  1239,  1242,    -1,  1240,   463,  1209,   449,
    1242,    -1,  1241,   463,  1175,   449,  1242,    -1,   471,   463,
    1244,   449,  1242,    -1,   303,   463,  1245,   449,    -1,   258,
     463,  1246,   449,  1242,    -1,   259,   463,  1246,   449,  1242,
      -1,   260,   463,  1246,   449,  1242,    -1,   201,  1243,    -1,
     496,  1243,    -1,   100,    -1,   503,    -1,   491,    -1,   264,
      -1,   377,    -1,    83,    -1,   192,    -1,   193,    -1,   194,
      -1,   428,    -1,   429,    -1,    -1,   463,  1177,   450,   449,
      -1,   463,  1177,   450,  1177,   449,    -1,    -1,   463,  1175,
     449,    -1,   463,   449,    -1,  1209,    -1,  1209,  1176,   241,
      -1,  1209,  1176,   469,    -1,  1209,    -1,  1209,  1176,  1209,
      -1,  1177,    -1,  1177,  1176,  1197,    -1,    -1,    -1,     9,
      -1,    -1,  1329,    -1,    -1,   223,    -1,    -1,   223,  1252,
      -1,    -1,   447,  1214,    -1,    -1,   285,    -1,   334,    -1,
      -1,   290,    -1,    -1,   312,    -1,   290,   312,    -1,    -1,
     386,  1257,    -1,    -1,   272,  1281,  1258,    -1,    34,    -1,
     281,    -1,   282,    -1,   283,    -1,   344,    -1,   467,    -1,
     468,    -1,   472,    -1,    -1,   400,  1269,    -1,   452,    -1,
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
     254,    -1,    -1,   248,  1281,    -1,   249,  1263,    -1,    -1,
     254,    -1,    -1,   272,    -1,    -1,   299,    -1,    -1,   299,
      -1,   300,    -1,    -1,   306,    -1,    -1,   309,    -1,    -1,
     423,   232,    -1,   423,    -1,   232,    -1,    -1,   316,    -1,
      -1,   337,    -1,    -1,   340,    -1,    -1,   351,    -1,    -1,
     384,    -1,    -1,   405,    -1,    -1,   406,    -1,    -1,   405,
      -1,   405,   232,    -1,    -1,   410,    -1,    -1,   418,    -1,
      -1,   423,    -1,    -1,   438,    -1,    -1,   442,    -1,    -1,
     446,    -1,    -1,   447,    -1,    -1,   447,    -1,   498,    -1,
      -1,   502,    -1,    -1,   502,   403,   447,    -1,    -1,   504,
      -1,    -1,   351,    -1,    64,   401,    -1,   401,    -1,    67,
      -1,    65,    -1,    68,    -1,    66,    -1,   453,    -1,   160,
      -1,   166,    -1,   162,    -1,   166,    -1,   462,    -1,   218,
      -1,   306,    -1,   418,    -1,   308,    -1,   252,    -1,   254,
      -1,   351,    -1,   353,    -1,    58,    -1,   506,    -1,   351,
    1281,    -1,   353,  1263,    -1,   356,    -1,   475,    -1,   252,
      -1,   254,    -1,   410,    -1,   244,    -1,   504,   125,    -1,
     125,    -1,   340,    64,   401,    -1,    64,   401,    -1,   401,
      -1,   117,    -1,   107,    -1,    90,   210,    -1,    55,    -1,
      90,   188,    -1,    54,    -1,   321,   210,    -1,   325,    -1,
     321,   188,    -1,   326,    -1,   366,   210,    -1,   383,    -1,
     366,   188,    -1,   382,    -1,    90,  1281,    -1,    91,  1263,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1370,  1370,  1370,  1402,  1403,  1407,  1408,  1412,  1413,
    1417,  1417,  1440,  1447,  1454,  1460,  1461,  1462,  1466,  1467,
    1471,  1495,  1496,  1500,  1534,  1540,  1552,  1526,  1562,  1561,
    1599,  1634,  1635,  1639,  1640,  1643,  1644,  1648,  1657,  1666,
    1667,  1671,  1675,  1684,  1685,  1693,  1694,  1704,  1705,  1709,
    1710,  1711,  1712,  1713,  1720,  1719,  1732,  1733,  1736,  1737,
    1751,  1750,  1760,  1761,  1762,  1763,  1767,  1768,  1772,  1773,
    1774,  1775,  1779,  1786,  1793,  1800,  1811,  1815,  1819,  1823,
    1830,  1831,  1838,  1837,  1848,  1849,  1850,  1857,  1858,  1862,
    1866,  1878,  1882,  1883,  1888,  1891,  1898,  1903,  1914,  1927,
    1928,  1936,  1937,  1941,  1942,  1943,  1944,  1945,  1946,  1947,
    1948,  1949,  1950,  1951,  1952,  1960,  1959,  1978,  1988,  2001,
    2009,  2012,  2013,  2017,  2027,  2043,  2042,  2066,  2072,  2078,
    2084,  2090,  2096,  2106,  2110,  2117,  2121,  2126,  2125,  2136,
    2140,  2147,  2148,  2149,  2150,  2151,  2152,  2156,  2157,  2164,
    2179,  2182,  2189,  2197,  2201,  2212,  2232,  2240,  2251,  2252,
    2258,  2279,  2280,  2284,  2288,  2309,  2332,  2414,  2417,  2426,
    2445,  2461,  2479,  2497,  2514,  2530,  2531,  2538,  2539,  2547,
    2548,  2558,  2559,  2564,  2563,  2584,  2594,  2595,  2599,  2600,
    2601,  2602,  2603,  2604,  2605,  2606,  2607,  2608,  2609,  2610,
    2611,  2618,  2624,  2634,  2647,  2660,  2676,  2677,  2678,  2679,
    2682,  2683,  2689,  2690,  2694,  2698,  2699,  2704,  2707,  2708,
    2715,  2723,  2724,  2725,  2732,  2761,  2799,  2801,  2806,  2816,
    2827,  2834,  2836,  2837,  2843,  2843,  2850,  2855,  2860,  2867,
    2868,  2869,  2873,  2884,  2885,  2889,  2894,  2899,  2904,  2915,
    2926,  2936,  2941,  2962,  2963,  2967,  2967,  2971,  2976,  2994,
    3005,  3012,  3013,  3019,  3027,  3028,  3029,  3035,  3036,  3037,
    3044,  3045,  3049,  3050,  3056,  3084,  3085,  3086,  3087,  3094,
    3093,  3109,  3110,  3114,  3117,  3118,  3124,  3125,  3133,  3134,
    3142,  3143,  3147,  3168,  3167,  3184,  3191,  3195,  3201,  3202,
    3206,  3216,  3231,  3232,  3233,  3234,  3235,  3236,  3237,  3238,
    3239,  3246,  3253,  3253,  3253,  3259,  3279,  3313,  3344,  3345,
    3352,  3353,  3357,  3358,  3365,  3376,  3381,  3392,  3393,  3397,
    3398,  3404,  3415,  3433,  3434,  3438,  3439,  3440,  3444,  3451,
    3458,  3467,  3479,  3531,  3546,  3547,  3551,  3563,  3605,  3607,
    3606,  3622,  3625,  3625,  3643,  3644,  3646,  3650,  3652,  3651,
    3686,  3699,  3707,  3712,  3718,  3727,  3737,  3740,  3752,  3753,
    3754,  3755,  3759,  3763,  3767,  3771,  3775,  3779,  3783,  3787,
    3791,  3795,  3799,  3803,  3807,  3818,  3819,  3823,  3824,  3828,
    3829,  3830,  3834,  3835,  3839,  3865,  3869,  3878,  3882,  3891,
    3892,  3893,  3894,  3895,  3896,  3897,  3898,  3899,  3900,  3901,
    3902,  3903,  3904,  3911,  3935,  3963,  3966,  3975,  4000,  4011,
    4012,  4016,  4020,  4024,  4028,  4032,  4036,  4040,  4044,  4048,
    4052,  4056,  4060,  4064,  4069,  4074,  4078,  4082,  4090,  4094,
    4098,  4106,  4110,  4114,  4118,  4122,  4126,  4130,  4134,  4138,
    4146,  4154,  4158,  4162,  4166,  4170,  4174,  4182,  4183,  4187,
    4188,  4194,  4200,  4212,  4230,  4231,  4240,  4261,  4282,  4283,
    4287,  4288,  4291,  4292,  4298,  4299,  4306,  4307,  4314,  4338,
    4339,  4356,  4357,  4360,  4361,  4368,  4369,  4374,  4385,  4396,
    4407,  4418,  4447,  4446,  4455,  4456,  4460,  4461,  4464,  4465,
    4478,  4491,  4512,  4521,  4535,  4537,  4536,  4556,  4558,  4557,
    4573,  4575,  4574,  4585,  4586,  4593,  4592,  4621,  4622,  4623,
    4630,  4636,  4640,  4641,  4647,  4654,  4655,  4656,  4660,  4667,
    4668,  4672,  4682,  4722,  4732,  4742,  4760,  4761,  4764,  4765,
    4770,  4771,  4772,  4773,  4774,  4778,  4789,  4800,  4811,  4822,
    4832,  4833,  4838,  4837,  4858,  4859,  4863,  4864,  4865,  4866,
    4867,  4868,  4869,  4870,  4871,  4872,  4873,  4874,  4875,  4876,
    4877,  4878,  4879,  4883,  4890,  4894,  4898,  4899,  4900,  4907,
    4911,  4918,  4921,  4926,  4933,  4936,  4941,  4948,  4955,  4964,
    4969,  4974,  4981,  4982,  4983,  4984,  4988,  4996,  4997,  4998,
    5005,  5009,  5016,  5024,  5028,  5036,  5040,  5046,  5061,  5078,
    5079,  5080,  5084,  5101,  5105,  5112,  5119,  5120,  5124,  5132,
    5140,  5159,  5167,  5175,  5183,  5185,  5184,  5205,  5206,  5210,
    5211,  5216,  5218,  5217,  5274,  5292,  5293,  5297,  5301,  5305,
    5309,  5313,  5317,  5321,  5325,  5329,  5333,  5337,  5341,  5345,
    5349,  5353,  5357,  5361,  5366,  5370,  5374,  5379,  5384,  5389,
    5394,  5395,  5396,  5397,  5398,  5399,  5400,  5401,  5402,  5409,
    5414,  5423,  5424,  5428,  5429,  5434,  5437,  5441,  5449,  5452,
    5456,  5464,  5475,  5483,  5485,  5495,  5484,  5522,  5522,  5555,
    5559,  5558,  5572,  5571,  5591,  5592,  5597,  5604,  5606,  5610,
    5620,  5622,  5630,  5638,  5646,  5675,  5706,  5708,  5718,  5723,
    5750,  5752,  5751,  5788,  5789,  5793,  5794,  5795,  5812,  5813,
    5824,  5823,  5873,  5874,  5878,  5926,  5939,  5942,  5961,  5966,
    5960,  5979,  5979,  6009,  6016,  6017,  6018,  6019,  6020,  6021,
    6022,  6023,  6024,  6025,  6026,  6027,  6028,  6029,  6030,  6031,
    6032,  6033,  6034,  6035,  6036,  6037,  6038,  6039,  6040,  6041,
    6042,  6043,  6044,  6045,  6046,  6047,  6048,  6049,  6050,  6051,
    6052,  6053,  6054,  6055,  6056,  6057,  6058,  6059,  6060,  6061,
    6062,  6063,  6064,  6065,  6079,  6091,  6090,  6106,  6112,  6116,
    6120,  6125,  6130,  6135,  6140,  6144,  6148,  6152,  6156,  6161,
    6165,  6169,  6173,  6177,  6181,  6185,  6192,  6193,  6200,  6201,
    6205,  6206,  6210,  6211,  6212,  6213,  6214,  6218,  6222,  6223,
    6226,  6227,  6230,  6231,  6237,  6238,  6242,  6243,  6247,  6251,
    6257,  6261,  6265,  6269,  6273,  6277,  6281,  6285,  6289,  6293,
    6297,  6301,  6305,  6309,  6313,  6317,  6321,  6327,  6331,  6335,
    6339,  6343,  6347,  6351,  6358,  6359,  6363,  6367,  6385,  6384,
    6393,  6397,  6401,  6407,  6408,  6415,  6419,  6430,  6429,  6438,
    6442,  6454,  6455,  6463,  6462,  6471,  6472,  6476,  6482,  6482,
    6489,  6488,  6498,  6518,  6522,  6527,  6532,  6553,  6557,  6556,
    6573,  6574,  6579,  6587,  6611,  6613,  6617,  6626,  6639,  6642,
    6646,  6650,  6673,  6674,  6678,  6679,  6684,  6687,  6695,  6699,
    6707,  6711,  6722,  6721,  6729,  6733,  6744,  6743,  6751,  6756,
    6764,  6765,  6766,  6767,  6768,  6776,  6775,  6784,  6791,  6795,
    6805,  6816,  6834,  6833,  6842,  6846,  6850,  6855,  6863,  6867,
    6878,  6877,  6887,  6891,  6895,  6899,  6903,  6907,  6908,  6917,
    6919,  6918,  6926,  6935,  6942,  6946,  6950,  6954,  6964,  6966,
    6970,  6971,  6974,  6976,  6983,  6984,  6988,  6989,  6994,  6998,
    7002,  7006,  7010,  7014,  7018,  7022,  7026,  7030,  7034,  7038,
    7042,  7046,  7050,  7054,  7061,  7065,  7076,  7075,  7084,  7088,
    7092,  7096,  7100,  7107,  7111,  7122,  7121,  7130,  7149,  7148,
    7172,  7180,  7181,  7186,  7197,  7208,  7222,  7226,  7233,  7234,
    7239,  7248,  7257,  7262,  7271,  7272,  7277,  7339,  7340,  7341,
    7345,  7346,  7350,  7354,  7365,  7364,  7376,  7377,  7398,  7412,
    7434,  7456,  7476,  7499,  7500,  7508,  7507,  7516,  7527,  7526,
    7535,  7548,  7547,  7560,  7569,  7573,  7584,  7600,  7599,  7608,
    7612,  7616,  7623,  7627,  7638,  7637,  7645,  7653,  7654,  7658,
    7659,  7660,  7665,  7668,  7675,  7679,  7687,  7694,  7695,  7696,
    7697,  7698,  7699,  7700,  7705,  7708,  7718,  7717,  7725,  7732,
    7745,  7744,  7753,  7757,  7761,  7765,  7772,  7773,  7774,  7775,
    7782,  7781,  7795,  7805,  7814,  7815,  7819,  7820,  7821,  7822,
    7823,  7824,  7828,  7829,  7833,  7838,  7845,  7846,  7847,  7848,
    7849,  7853,  7881,  7884,  7891,  7895,  7905,  7904,  7917,  7916,
    7924,  7928,  7939,  7938,  7947,  7951,  7958,  7962,  7973,  7972,
    7980,  8001,  8025,  8026,  8027,  8028,  8032,  8033,  8037,  8038,
    8039,  8040,  8052,  8051,  8062,  8068,  8067,  8078,  8086,  8094,
    8101,  8105,  8118,  8125,  8137,  8140,  8145,  8149,  8160,  8167,
    8168,  8172,  8173,  8176,  8177,  8182,  8222,  8221,  8230,  8257,
    8258,  8263,  8266,  8270,  8274,  8278,  8282,  8286,  8293,  8294,
    8298,  8299,  8303,  8307,  8317,  8328,  8327,  8335,  8345,  8356,
    8355,  8364,  8371,  8375,  8386,  8385,  8397,  8406,  8409,  8413,
    8420,  8424,  8434,  8446,  8445,  8454,  8458,  8467,  8468,  8473,
    8476,  8484,  8488,  8495,  8503,  8507,  8518,  8517,  8531,  8532,
    8533,  8534,  8535,  8536,  8540,  8541,  8545,  8546,  8552,  8561,
    8568,  8569,  8573,  8577,  8581,  8585,  8589,  8593,  8597,  8601,
    8610,  8614,  8623,  8632,  8633,  8637,  8646,  8647,  8651,  8655,
    8666,  8665,  8674,  8673,  8704,  8707,  8727,  8728,  8731,  8732,
    8740,  8741,  8746,  8751,  8761,  8777,  8782,  8792,  8809,  8808,
    8818,  8831,  8834,  8842,  8845,  8850,  8855,  8863,  8864,  8865,
    8866,  8867,  8868,  8872,  8880,  8881,  8885,  8889,  8900,  8899,
    8909,  8922,  8925,  8929,  8937,  8949,  8952,  8959,  8960,  8961,
    8962,  8969,  8968,  8977,  8984,  8985,  8989,  8990,  8991,  8995,
    8996,  9000,  9004,  9015,  9014,  9023,  9027,  9031,  9038,  9042,
    9052,  9063,  9064,  9071,  9070,  9078,  9086,  9099,  9098,  9106,
    9120,  9119,  9127,  9140,  9142,  9143,  9151,  9150,  9159,  9167,
    9168,  9173,  9174,  9179,  9186,  9187,  9192,  9199,  9200,  9204,
    9205,  9209,  9210,  9214,  9218,  9229,  9228,  9237,  9238,  9239,
    9240,  9241,  9245,  9272,  9275,  9287,  9297,  9302,  9307,  9312,
    9320,  9358,  9359,  9363,  9403,  9413,  9436,  9437,  9438,  9439,
    9443,  9452,  9458,  9468,  9499,  9508,  9509,  9516,  9515,  9527,
    9537,  9538,  9543,  9546,  9550,  9554,  9561,  9562,  9566,  9567,
    9571,  9575,  9587,  9590,  9591,  9600,  9601,  9610,  9613,  9614,
    9623,  9624,  9635,  9638,  9639,  9648,  9649,  9661,  9664,  9666,
    9676,  9677,  9689,  9690,  9694,  9695,  9696,  9700,  9709,  9720,
    9721,  9722,  9726,  9735,  9746,  9751,  9752,  9761,  9762,  9773,
    9777,  9787,  9794,  9801,  9801,  9811,  9812,  9813,  9817,  9826,
    9827,  9829,  9830,  9831,  9832,  9833,  9835,  9836,  9837,  9838,
    9839,  9840,  9842,  9843,  9844,  9846,  9847,  9848,  9849,  9850,
    9853,  9854,  9858,  9859,  9863,  9864,  9868,  9869,  9873,  9877,
    9883,  9887,  9893,  9894,  9895,  9899,  9900,  9901,  9905,  9906,
    9907,  9911,  9915,  9919,  9920,  9921,  9924,  9925,  9935,  9947,
    9956,  9972,  9981,  9997, 10012, 10013, 10018, 10027, 10033, 10053,
   10057, 10078, 10119, 10133, 10134, 10139, 10145, 10146, 10151, 10163,
   10164, 10165, 10172, 10183, 10184, 10188, 10196, 10204, 10208, 10215,
   10224, 10225, 10231, 10245, 10262, 10266, 10273, 10274, 10275, 10282,
   10286, 10293, 10294, 10295, 10296, 10297, 10301, 10305, 10309, 10313,
   10317, 10338, 10342, 10349, 10350, 10351, 10355, 10356, 10357, 10358,
   10359, 10363, 10367, 10374, 10375, 10379, 10380, 10384, 10385, 10389,
   10390, 10401, 10402, 10406, 10407, 10408, 10412, 10413, 10414, 10421,
   10422, 10426, 10427, 10431, 10432, 10433, 10439, 10443, 10447, 10448,
   10452, 10456, 10463, 10470, 10477, 10487, 10491, 10498, 10508, 10518,
   10528, 10541, 10545, 10553, 10561, 10565, 10575, 10590, 10613, 10633,
   10640, 10656, 10657, 10658, 10659, 10660, 10661, 10665, 10669, 10686,
   10690, 10697, 10698, 10699, 10700, 10701, 10702, 10703, 10709, 10713,
   10717, 10721, 10725, 10729, 10733, 10737, 10741, 10745, 10752, 10753,
   10757, 10758, 10759, 10763, 10764, 10765, 10766, 10767, 10768, 10772,
   10776, 10780, 10787, 10791, 10795, 10802, 10809, 10816, 10826, 10833,
   10843, 10850, 10862, 10870, 10871, 10875, 10876, 10880, 10881, 10886,
   10889, 10897, 10900, 10907, 10909, 10910, 10914, 10915, 10919, 10920,
   10921, 10926, 10929, 10942, 10946, 10954, 10958, 10962, 10966, 10970,
   10974, 10978, 10982, 10989, 10990, 10996, 10997, 10998, 10999, 11000,
   11001, 11002, 11003, 11004, 11005, 11006, 11007, 11008, 11009, 11010,
   11011, 11012, 11013, 11014, 11015, 11016, 11017, 11018, 11019, 11020,
   11021, 11022, 11023, 11024, 11025, 11026, 11027, 11028, 11029, 11030,
   11031, 11032, 11033, 11034, 11035, 11036, 11037, 11038, 11039, 11040,
   11041, 11042, 11043, 11044, 11045, 11046, 11047, 11048, 11049, 11050,
   11051, 11052, 11053, 11054, 11055, 11056, 11057, 11058, 11059, 11060,
   11061, 11062, 11063, 11064, 11065, 11072, 11072, 11073, 11073, 11074,
   11074, 11075, 11075, 11076, 11076, 11077, 11077, 11078, 11078, 11079,
   11079, 11080, 11080, 11081, 11081, 11082, 11082, 11083, 11083, 11084,
   11084, 11085, 11085, 11086, 11086, 11087, 11087, 11088, 11088, 11088,
   11089, 11089, 11090, 11090, 11091, 11091, 11092, 11092, 11093, 11093,
   11093, 11094, 11094, 11095, 11095, 11095, 11096, 11096, 11096, 11097,
   11097, 11097, 11098, 11098, 11099, 11099, 11100, 11100, 11101, 11101,
   11101, 11102, 11102, 11103, 11103, 11104, 11104, 11104, 11104, 11105,
   11105, 11106, 11106, 11107, 11107, 11108, 11108, 11109, 11109, 11110,
   11110, 11111, 11111, 11112, 11112, 11112, 11113, 11113, 11114, 11114,
   11115, 11115, 11116, 11116, 11117, 11117, 11118, 11118, 11119, 11119,
   11120, 11120, 11120, 11121, 11121, 11122, 11122, 11123, 11123, 11124,
   11124, 11128, 11128, 11129, 11129, 11130, 11130, 11131, 11131, 11132,
   11132, 11133, 11133, 11134, 11134, 11135, 11135, 11136, 11136, 11137,
   11137, 11138, 11138, 11139, 11139, 11140, 11140, 11141, 11141, 11142,
   11142, 11143, 11143, 11146, 11147, 11148, 11152, 11152, 11153, 11153,
   11154, 11154, 11155, 11155, 11156, 11156, 11157, 11157, 11158, 11158,
   11159, 11159
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
  "blank_clause", "based_clause", "value_clause", "$@21",
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
  "col_or_plus", "source_clause", "group_indicate_clause",
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
  "_is_are", "_key", "_left_or_right", "_line_or_lines", "_limits",
  "_lines", "_mode", "_number", "_numbers", "_of", "_on", "_onoff_status",
  "_other", "_procedure", "_program", "_record", "_right", "_sign",
  "_signed", "_sign_is", "_size", "_standard", "_status", "_tape", "_then",
  "_times", "_to", "_to_using", "_when", "_when_set_to", "_with",
  "rel_record", "coll_sequence", "column_or_col", "columns_or_cols",
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
     619,   620,   620,   620,   621,   621,   622,   622,   622,   623,
     624,   625,   625,   625,   627,   626,   628,   628,   628,   629,
     629,   629,   629,   630,   630,   631,   631,   631,   631,   632,
     633,   634,   634,   635,   635,   637,   636,   636,   638,   639,
     640,   641,   641,   642,   643,   643,   643,   644,   644,   644,
     645,   645,   646,   646,   647,   648,   648,   648,   648,   650,
     649,   651,   651,   652,   653,   653,   654,   654,   655,   655,
     656,   656,   657,   659,   658,   658,   660,   660,   661,   661,
     662,   662,   662,   662,   662,   662,   662,   662,   662,   662,
     662,   663,   664,   664,   664,   665,   665,   665,   666,   666,
     667,   667,   668,   668,   669,   670,   670,   671,   671,   672,
     672,   673,   674,   675,   675,   676,   676,   676,   677,   678,
     679,   680,   681,   682,   683,   683,   684,   684,   685,   686,
     685,   687,   688,   687,   689,   689,   689,   690,   691,   690,
     690,   692,   693,   693,   693,   694,   695,   695,   696,   696,
     696,   696,   697,   697,   697,   697,   697,   697,   697,   697,
     697,   697,   697,   697,   697,   698,   698,   699,   699,   700,
     700,   700,   701,   701,   702,   703,   703,   704,   704,   705,
     705,   705,   705,   705,   705,   705,   705,   705,   705,   705,
     705,   705,   705,   706,   707,   708,   708,   709,   710,   711,
     711,   712,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   712,   712,   712,   712,   712,   712,   712,   712,
     712,   712,   712,   712,   712,   712,   712,   713,   713,   714,
     714,   715,   715,   716,   717,   717,   718,   718,   719,   719,
     720,   720,   721,   721,   722,   722,   723,   723,   724,   725,
     725,   726,   726,   727,   727,   728,   728,   729,   730,   731,
     732,   733,   735,   734,   736,   736,   737,   737,   738,   738,
     739,   739,   740,   740,   741,   742,   741,   743,   744,   743,
     745,   746,   745,   747,   747,   749,   748,   750,   750,   750,
     751,   751,   751,   751,   752,   753,   753,   753,   754,   755,
     755,   756,   757,   758,   758,   758,   759,   759,   760,   760,
     761,   761,   761,   761,   761,   762,   763,   764,   765,   766,
     767,   767,   769,   768,   770,   770,   771,   771,   771,   771,
     771,   771,   771,   771,   771,   771,   771,   771,   771,   771,
     771,   771,   771,   772,   773,   773,   773,   773,   773,   773,
     773,   774,   774,   774,   775,   775,   775,   776,   777,   777,
     777,   777,   778,   778,   778,   778,   779,   780,   780,   780,
     781,   781,   782,   783,   784,   785,   786,   786,   786,   787,
     787,   787,   788,   789,   789,   790,   791,   791,   792,   792,
     792,   793,   794,   795,   796,   797,   796,   798,   798,   799,
     799,   800,   801,   800,   800,   802,   802,   803,   803,   803,
     803,   803,   803,   803,   803,   803,   803,   803,   803,   803,
     803,   803,   803,   803,   803,   803,   803,   803,   803,   803,
     803,   803,   803,   803,   803,   803,   803,   803,   803,   803,
     803,   804,   804,   805,   805,   806,   806,   806,   807,   807,
     807,   808,   809,   810,   811,   812,   810,   813,   810,   814,
     815,   814,   816,   814,   817,   817,   818,   819,   819,   819,
     820,   820,   820,   820,   820,   820,   821,   821,   822,   822,
     823,   824,   823,   825,   825,   826,   826,   826,   826,   826,
     828,   827,   829,   829,   830,   831,   832,   832,   834,   835,
     833,   837,   836,   836,   838,   838,   838,   838,   838,   838,
     838,   838,   838,   838,   838,   838,   838,   838,   838,   838,
     838,   838,   838,   838,   838,   838,   838,   838,   838,   838,
     838,   838,   838,   838,   838,   838,   838,   838,   838,   838,
     838,   838,   838,   838,   838,   838,   838,   838,   838,   838,
     838,   838,   838,   838,   838,   840,   839,   841,   841,   841,
     841,   841,   841,   841,   841,   841,   841,   841,   841,   841,
     841,   841,   841,   841,   841,   841,   842,   842,   843,   843,
     844,   844,   845,   845,   845,   845,   845,   846,   847,   847,
     848,   848,   849,   849,   850,   850,   851,   851,   852,   852,
     852,   852,   852,   852,   852,   852,   852,   852,   852,   852,
     852,   852,   852,   852,   852,   852,   852,   852,   852,   852,
     852,   852,   852,   852,   853,   853,   854,   854,   856,   855,
     857,   857,   857,   858,   858,   859,   859,   861,   860,   862,
     862,   863,   863,   865,   864,   866,   866,   867,   868,   868,
     870,   869,   871,   872,   872,   872,   872,   873,   874,   873,
     875,   875,   876,   876,   877,   877,   877,   877,   878,   878,
     878,   878,   879,   879,   880,   880,   881,   881,   882,   882,
     883,   883,   885,   884,   886,   886,   888,   887,   889,   889,
     890,   890,   890,   890,   890,   892,   891,   893,   894,   894,
     895,   896,   898,   897,   899,   899,   900,   900,   901,   901,
     903,   902,   904,   904,   904,   904,   904,   904,   904,   905,
     906,   905,   907,   908,   908,   908,   908,   908,   909,   909,
     910,   910,   911,   911,   912,   912,   913,   913,   914,   914,
     914,   914,   914,   914,   914,   914,   914,   914,   914,   914,
     914,   914,   914,   914,   915,   915,   917,   916,   918,   918,
     918,   918,   918,   919,   919,   921,   920,   922,   924,   923,
     925,   926,   926,   927,   927,   927,   928,   928,   929,   929,
     930,   931,   932,   932,   933,   933,   934,   934,   934,   934,
     935,   935,   936,   936,   938,   937,   939,   939,   939,   939,
     939,   939,   939,   940,   940,   942,   941,   943,   945,   944,
     946,   948,   947,   949,   950,   950,   951,   953,   952,   954,
     954,   954,   955,   955,   957,   956,   958,   959,   959,   960,
     960,   960,   961,   961,   962,   962,   963,   964,   964,   964,
     964,   964,   964,   964,   965,   965,   967,   966,   968,   968,
     970,   969,   971,   972,   972,   972,   973,   973,   973,   973,
     975,   974,   976,   977,   978,   978,   979,   979,   979,   979,
     979,   979,   980,   980,   981,   981,   982,   982,   982,   982,
     982,   983,   984,   984,   985,   985,   987,   986,   989,   988,
     990,   990,   992,   991,   993,   993,   994,   994,   996,   995,
     997,   997,   998,   998,   998,   998,   999,   999,  1000,  1000,
    1000,  1000,  1002,  1001,  1003,  1004,  1003,  1003,  1005,  1005,
    1006,  1006,  1007,  1007,  1008,  1008,  1008,  1008,  1008,  1009,
    1009,  1010,  1010,  1011,  1011,  1012,  1014,  1013,  1015,  1016,
    1016,  1017,  1017,  1017,  1017,  1017,  1017,  1017,  1018,  1018,
    1019,  1019,  1020,  1020,  1021,  1023,  1022,  1024,  1025,  1027,
    1026,  1028,  1029,  1029,  1031,  1030,  1032,  1033,  1033,  1033,
    1034,  1034,  1035,  1037,  1036,  1038,  1038,  1039,  1039,  1040,
    1040,  1041,  1041,  1042,  1043,  1043,  1045,  1044,  1046,  1046,
    1046,  1046,  1046,  1046,  1047,  1047,  1048,  1048,  1049,  1050,
    1051,  1051,  1052,  1052,  1052,  1052,  1052,  1052,  1052,  1052,
    1053,  1053,  1054,  1055,  1055,  1056,  1057,  1057,  1058,  1058,
    1060,  1059,  1062,  1061,  1063,  1063,  1064,  1064,  1065,  1065,
    1066,  1066,  1067,  1067,  1067,  1068,  1068,  1068,  1070,  1069,
    1071,  1072,  1072,  1073,  1073,  1073,  1073,  1074,  1074,  1074,
    1074,  1074,  1074,  1075,  1076,  1076,  1077,  1077,  1079,  1078,
    1078,  1080,  1080,  1080,  1080,  1081,  1081,  1082,  1082,  1082,
    1082,  1084,  1083,  1085,  1086,  1086,  1087,  1087,  1087,  1088,
    1088,  1089,  1089,  1091,  1090,  1092,  1092,  1092,  1093,  1093,
    1094,  1095,  1095,  1097,  1096,  1098,  1098,  1100,  1099,  1101,
    1103,  1102,  1104,  1105,  1105,  1105,  1107,  1106,  1108,  1109,
    1109,  1110,  1110,  1111,  1112,  1112,  1113,  1114,  1114,  1115,
    1115,  1116,  1116,  1117,  1117,  1119,  1118,  1120,  1120,  1120,
    1120,  1120,  1121,  1122,  1122,  1123,  1123,  1123,  1123,  1123,
    1124,  1125,  1125,  1126,  1126,  1126,  1127,  1127,  1127,  1127,
    1128,  1129,  1129,  1130,  1131,  1132,  1132,  1134,  1133,  1135,
    1136,  1136,  1137,  1137,  1137,  1137,  1138,  1138,  1139,  1139,
    1140,  1140,  1141,  1142,  1142,  1143,  1143,  1144,  1145,  1145,
    1146,  1146,  1147,  1148,  1148,  1149,  1149,  1150,  1151,  1151,
    1152,  1152,  1153,  1153,  1154,  1154,  1154,  1155,  1156,  1157,
    1157,  1157,  1158,  1159,  1160,  1161,  1161,  1162,  1162,  1163,
    1163,  1164,  1165,  1167,  1166,  1168,  1168,  1168,  1169,  1169,
    1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,
    1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,  1169,
    1169,  1169,  1170,  1170,  1171,  1171,  1172,  1172,  1173,  1174,
    1175,  1175,  1176,  1176,  1176,  1177,  1177,  1177,  1178,  1178,
    1178,  1179,  1179,  1180,  1180,  1180,  1181,  1181,  1182,  1182,
    1182,  1182,  1182,  1182,  1183,  1183,  1184,  1185,  1186,  1187,
    1187,  1188,  1189,  1190,  1190,  1191,  1192,  1192,  1193,  1194,
    1194,  1194,  1195,  1196,  1196,  1197,  1198,  1199,  1199,  1200,
    1201,  1201,  1202,  1203,  1204,  1204,  1205,  1205,  1205,  1206,
    1206,  1207,  1207,  1207,  1207,  1207,  1207,  1207,  1207,  1207,
    1207,  1208,  1208,  1209,  1209,  1209,  1210,  1210,  1210,  1210,
    1210,  1210,  1210,  1211,  1211,  1212,  1212,  1213,  1213,  1214,
    1214,  1215,  1215,  1216,  1216,  1216,  1217,  1217,  1217,  1218,
    1218,  1219,  1219,  1220,  1220,  1220,  1221,  1222,  1223,  1223,
    1224,  1225,  1225,  1225,  1225,  1226,  1226,  1227,  1227,  1227,
    1227,  1228,  1228,  1229,  1230,  1230,  1231,  1232,  1233,  1233,
    1234,  1234,  1234,  1234,  1234,  1234,  1234,  1235,  1235,  1236,
    1236,  1237,  1237,  1237,  1237,  1237,  1237,  1237,  1238,  1238,
    1238,  1238,  1238,  1238,  1238,  1238,  1238,  1238,  1239,  1239,
    1240,  1240,  1240,  1241,  1241,  1241,  1241,  1241,  1241,  1242,
    1242,  1242,  1243,  1243,  1243,  1244,  1244,  1244,  1245,  1245,
    1246,  1246,  1247,  1248,  1248,  1249,  1249,  1250,  1250,  1251,
    1251,  1252,  1252,  1253,  1253,  1253,  1254,  1254,  1255,  1255,
    1255,  1256,  1256,  1257,  1257,  1258,  1258,  1258,  1258,  1258,
    1258,  1258,  1258,  1259,  1259,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,  1260,
    1260,  1260,  1260,  1260,  1260,  1261,  1261,  1262,  1262,  1263,
    1263,  1264,  1264,  1265,  1265,  1266,  1266,  1267,  1267,  1268,
    1268,  1269,  1269,  1270,  1270,  1271,  1271,  1272,  1272,  1273,
    1273,  1274,  1274,  1275,  1275,  1276,  1276,  1277,  1277,  1277,
    1278,  1278,  1279,  1279,  1280,  1280,  1281,  1281,  1282,  1282,
    1282,  1283,  1283,  1284,  1284,  1284,  1285,  1285,  1285,  1286,
    1286,  1286,  1287,  1287,  1288,  1288,  1289,  1289,  1290,  1290,
    1290,  1291,  1291,  1292,  1292,  1293,  1293,  1293,  1293,  1294,
    1294,  1295,  1295,  1296,  1296,  1297,  1297,  1298,  1298,  1299,
    1299,  1300,  1300,  1301,  1301,  1301,  1302,  1302,  1303,  1303,
    1304,  1304,  1305,  1305,  1306,  1306,  1307,  1307,  1308,  1308,
    1309,  1309,  1309,  1310,  1310,  1311,  1311,  1312,  1312,  1313,
    1313,  1314,  1314,  1315,  1315,  1316,  1316,  1317,  1317,  1318,
    1318,  1319,  1319,  1320,  1320,  1321,  1321,  1322,  1322,  1323,
    1323,  1324,  1324,  1325,  1325,  1326,  1326,  1327,  1327,  1328,
    1328,  1329,  1329,  1330,  1330,  1330,  1331,  1331,  1332,  1332,
    1333,  1333,  1334,  1334,  1335,  1335,  1336,  1336,  1337,  1337,
    1338,  1338
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
       3,     1,     0,     5,     1,     2,     1,     3,     0,     4,
       2,     4,     2,     2,     0,     0,     5,     0,     0,     5,
       0,     0,     5,     0,     2,     0,     6,     0,     2,     2,
       2,     3,     1,     1,     2,     2,     1,     1,     1,     1,
       2,     1,     4,     1,     2,     4,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     3,     4,     4,     4,     3,
       0,     2,     0,     5,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     2,     2,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     4,     1,     2,
       2,     1,     2,     1,     1,     1,     4,     0,     3,     2,
       1,     1,     3,     6,     2,     2,     1,     2,     2,     0,
       2,     1,     1,     2,     3,     2,     3,     2,     2,     2,
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
       5,     5,     4,     5,     5,     5,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     5,     0,     3,     2,     1,     3,     3,     1,     3,
       1,     3,     0,     0,     1,     0,     1,     0,     1,     0,
       2,     0,     2,     0,     1,     1,     0,     1,     0,     1,
       2,     0,     2,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     2,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     0,     1,     1,     0,     1,     1,     0,
       2,     2,     0,     1,     0,     1,     0,     1,     0,     1,
       1,     0,     1,     0,     1,     0,     2,     1,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     2,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     1,     0,     1,     0,     3,     0,     1,     0,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     2,     1,     1,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     2
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
    1806,    46,     0,     0,     0,  1849,  1806,  1806,  1806,     0,
       0,     0,     0,     0,  1806,     0,     0,  1783,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1807,     0,     0,  1532,   125,  1806,
    1806,  1850,  1806,     0,     0,     0,     0,  1806,  1806,    60,
      82,     0,    54,    98,  1784,     0,  1806,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1843,    39,  1806,     0,     0,     0,  1601,   171,  1525,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1533,
     152,   153,  1808,   156,  1606,  1225,  1224,   116,   120,  1835,
    1806,     0,   100,   151,   178,   179,    38,  1844,    36,     0,
    1614,  1610,  1615,  1613,  1611,  1616,  1612,   160,   161,   163,
     172,   167,  1893,  1894,     0,   165,     0,  1782,     0,     0,
       0,  1806,  1915,    80,    61,  1781,    66,    68,    69,    70,
      71,  1781,     0,  1806,     0,    83,     0,    87,    55,    58,
     154,  1810,  1809,   157,     0,  1835,  1838,  1837,     0,     0,
     117,   121,     0,     0,   267,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1878,   166,     0,  1602,   170,  1914,  1806,
       0,     0,    65,    67,    63,    81,  1781,  1806,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1607,
     155,   158,     0,  1836,   123,   118,   119,   122,   180,     0,
       0,  1679,     0,   279,   275,    24,     0,   270,   272,   273,
     134,   137,     0,   164,     0,     0,  1913,    74,    64,     0,
    1526,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1680,   183,  1789,   276,   277,   278,  1771,
     286,     0,   268,   271,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1790,  1862,  1772,  1791,
       0,   288,   269,   138,   139,  1901,  1902,    72,  1845,  1863,
    1785,  1792,     0,     0,     0,   290,     0,  1824,  1879,  1870,
       0,   245,     0,  1806,  1781,  1811,   247,     0,  1882,  1877,
     233,   184,   232,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   244,   195,   196,   197,   198,   199,   200,
    1777,  1806,  1786,     0,  1511,   274,  1509,   287,     0,    25,
     140,  1825,  1806,  1880,  1811,  1871,  1872,   212,  1881,   248,
    1845,  1806,  1806,  1812,  1806,  1806,   261,  1771,   262,     0,
    1806,  1824,  1778,     0,     0,   280,   281,   284,  1510,   289,
     296,   297,   348,   291,   351,     0,     0,  1806,   214,   213,
     210,  1846,   247,   243,     0,     0,     0,     0,   260,  1839,
    1839,     0,   263,     0,  1806,   246,   229,   282,     0,   283,
       0,   504,   292,  1662,     0,   293,   222,   223,   221,   220,
       0,   206,   207,   217,   217,     0,   217,   209,   208,   217,
       0,  1531,  1530,   249,   250,   251,   259,  1840,   264,   265,
     266,   230,     0,   285,     0,     0,   507,   353,     0,     0,
     357,     0,   295,   298,  1665,   218,   203,   219,   204,  1789,
     205,   202,   215,   201,   216,  1806,   253,   255,   239,   238,
     239,   235,   349,     0,     0,   510,   356,     0,   354,     0,
     363,   364,   358,     0,   361,  1806,  1912,     0,   255,   226,
    1666,   211,   254,   252,     0,     0,   237,   236,   351,   505,
       0,     0,   624,   355,   360,   397,   366,  1785,  1806,     0,
       0,  1806,  1785,  1824,  1806,  1769,   294,     0,   299,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,     0,
    1911,  1665,     0,   224,   257,   258,   256,     0,   242,   350,
     351,   508,     0,     0,    26,  1806,  1773,     0,     0,     0,
    1806,  1769,     0,     0,     0,     0,     0,  1806,   344,  1770,
     345,     0,   343,   346,   300,   301,   226,     0,     0,   506,
     351,   511,     0,   687,     0,   491,   421,  1851,  1851,  1851,
    1851,  1851,  1873,   422,   457,   459,   425,   426,   427,   428,
     429,   430,   453,   451,   452,   454,   455,   460,   458,   431,
    1847,   456,     0,   432,   418,   433,   434,     0,     0,  1854,
     436,   437,   435,  1813,   439,   440,   438,  1806,  1808,   398,
     399,   400,   401,   402,   403,   419,   423,   424,   404,   405,
     406,   407,   408,   409,   410,   411,   412,     0,     0,  1774,
       0,   394,     0,   367,   322,   342,  1903,  1904,  1529,   331,
    1527,  1896,  1895,   324,  1822,  1783,  1795,     0,  1806,   328,
     327,  1806,   347,   225,     0,   147,   148,   228,     0,  1899,
    1900,   240,   509,   513,   625,     0,    27,   731,   502,   503,
    1852,   450,   449,   442,   441,   448,   447,   446,   445,   444,
     443,  1874,     0,  1848,   488,   474,   468,   413,  1594,   500,
    1855,  1814,  1815,   489,     0,     0,   415,   417,  1693,  1693,
     396,     0,  1831,  1625,     0,     0,  1621,  1626,  1624,  1622,
    1627,  1623,   395,   368,  1617,  1619,     0,   312,  1528,  1823,
     333,     0,   315,  1796,  1856,   341,     0,     0,   227,   241,
     512,   627,   689,     0,     0,   490,  1795,   470,     0,  1866,
       0,  1592,  1593,     0,   420,   492,   494,   496,     0,   414,
    1781,   461,   462,  1618,  1832,     0,     0,   377,   373,   376,
     375,   374,   389,   385,   387,   388,   390,   386,   391,   392,
     393,   370,   381,   382,   383,   378,   379,   380,   372,   369,
       0,   323,   314,   313,   311,   332,  1783,  1857,   320,   329,
     326,   330,   325,     0,   514,     0,   631,   626,   628,     0,
     692,   690,   708,     0,   785,   858,   867,   873,   880,   912,
     916,   930,   925,   931,   932,   940,   986,   995,   998,  1024,
    1035,  1038,  1041,  1033,  1047,  1054,  1076,  1080,  1116,  1118,
    1122,     0,  1128,  1142,  1166,  1184,  1185,  1188,  1189,  1194,
    1202,  1203,  1216,  1250,  1268,     0,  1301,  1313,  1321,  1323,
     713,  1327,  1330,  1336,  1387,   733,   734,   735,   736,   737,
     738,   739,   740,   742,   741,   743,   744,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   755,   756,   757,
     758,   759,   760,   761,   762,   763,   764,   765,   766,   767,
     768,   769,   770,   771,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   782,   732,     0,     0,   468,   469,
    1867,   472,  1643,  1638,  1644,  1645,  1646,  1652,     0,  1498,
    1500,     0,     0,     0,  1641,     0,  1502,  1642,  1647,  1648,
       0,     0,     0,     0,  1640,  1652,  1639,  1482,  1480,  1487,
    1490,  1492,  1495,  1559,  1497,  1556,  1590,  1557,  1558,  1649,
       0,     0,     0,  1591,   501,   498,   495,     0,   416,  1694,
     371,   384,  1620,     0,     0,   334,   335,   336,   337,     0,
     316,  1794,   322,     0,  1512,   515,     0,   632,     0,   629,
     697,   697,     0,     0,  1696,  1697,  1698,  1699,  1700,  1701,
    1702,  1703,  1704,  1705,  1706,  1707,  1708,  1709,  1745,  1746,
    1747,  1748,  1749,  1750,  1751,  1752,  1753,  1754,  1755,  1756,
    1757,  1758,  1759,  1760,  1761,  1762,  1763,  1764,  1710,  1711,
    1712,  1713,  1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,
    1722,  1723,  1724,  1725,  1726,  1727,  1728,  1729,  1730,  1731,
    1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,  1740,  1695,
    1741,  1742,  1743,  1744,   784,     0,     0,     0,     0,   883,
       0,     0,     0,     0,     0,     0,     0,  1443,  1026,     0,
       0,  1868,   903,   902,     0,  1046,  1443,     0,     0,     0,
       0,     0,     0,   783,     0,  1154,     0,     0,     0,     0,
       0,     0,     0,     0,  1297,  1300,  1288,  1298,  1299,  1290,
       0,     0,  1322,  1320,     0,   731,     0,     0,     0,     0,
     475,   471,   476,  1833,   479,     0,  1636,  1560,  1561,  1562,
       0,     0,     0,     0,     0,     0,     0,  1494,     0,  1493,
       0,  1637,  1483,  1484,  1603,     0,     0,     0,     0,     0,
       0,     0,     0,  1628,     0,     0,     0,     0,   493,     0,
     497,   340,   339,  1775,  1783,   321,     0,   634,   635,   630,
    1780,   697,   694,   700,     0,   697,   709,   684,   807,   856,
     810,   806,  1831,     0,     0,  1550,   865,  1544,   863,  1539,
    1541,  1542,  1543,   868,     0,  1667,  1522,   874,   875,     0,
    1518,  1520,  1519,   886,   884,   885,   910,     0,  1572,   913,
     914,  1571,   917,   920,  1831,   928,  1596,     0,  1504,  1681,
    1536,  1595,  1600,  1537,     0,   938,  1845,  1621,   984,  1408,
     949,   953,  1539,     0,  1541,   993,     0,   887,   996,  1005,
    1004,  1022,     0,  1001,  1003,  1442,     0,  1028,  1032,  1030,
    1033,  1031,  1025,  1036,  1037,  1534,  1039,  1040,  1869,  1042,
    1516,  1034,  1864,  1441,  1055,  1057,  1077,  1078,  1081,     0,
    1083,  1084,  1085,  1117,  1254,  1587,  1588,     0,  1119,     0,
    1126,     0,  1135,  1132,  1134,  1133,  1129,  1136,  1156,  1522,
    1143,  1154,  1145,     0,  1152,     0,  1573,  1519,  1575,     0,
    1182,  1673,  1186,  1390,  1507,  1192,  1845,  1200,  1390,     0,
    1214,  1207,  1508,     0,  1515,  1217,  1218,  1219,  1220,  1221,
    1222,  1243,  1223,  1246,     0,  1513,     0,     0,  1586,  1600,
    1251,  1286,  1273,  1291,  1779,  1311,     0,  1304,  1306,     0,
    1318,     0,  1324,  1325,   719,   725,   714,   715,   716,   718,
       0,  1328,     0,  1331,  1333,  1353,  1339,  1400,  1390,   477,
     479,  1834,     0,   483,   478,  1654,  1482,  1480,  1499,  1501,
    1482,     0,     0,     0,  1482,  1553,  1554,  1555,     0,  1503,
    1496,  1482,     0,  1481,  1604,     0,  1486,  1485,  1489,  1488,
    1491,     0,     0,  1482,     0,  1806,  1776,     0,   318,     0,
    1806,  1853,   695,  1806,     0,   706,   698,   699,   710,   857,
     786,  1776,   820,   811,     0,     0,     0,     0,  1545,  1546,
    1547,   866,   859,     0,     0,  1540,  1669,  1668,   871,   876,
     878,     0,   911,   881,  1574,   887,   915,   920,  1905,  1906,
     918,     0,   921,     0,   929,   926,  1888,  1887,  1505,     0,
    1683,  1506,  1598,  1599,   935,   936,   939,   933,  1435,   985,
     941,   728,     0,   947,  1410,     0,   964,     0,   958,  1408,
    1408,  1408,  1408,   994,   987,     0,     0,   888,   997,  1023,
     999,  1443,  1443,  1000,  1007,  1008,   728,  1467,  1468,  1469,
    1463,  1868,  1455,  1475,  1478,  1477,  1479,  1471,  1462,  1461,
    1466,  1465,  1464,  1470,  1450,  1454,  1472,  1474,  1476,  1452,
    1453,  1449,  1451,  1444,  1445,  1456,  1457,  1458,  1459,  1460,
    1448,  1029,  1027,  1535,  1044,  1865,   728,  1059,     0,  1079,
       0,  1106,  1090,  1082,  1087,  1088,  1089,  1258,     0,  1589,
       0,     0,  1127,  1123,     0,  1136,  1877,     0,  1144,  1150,
    1151,   728,  1147,  1443,     0,     0,  1155,     0,  1183,  1167,
    1674,  1675,  1845,     0,  1187,  1193,  1190,  1169,  1201,  1195,
    1197,  1209,  1215,  1204,     0,  1209,     0,  1567,  1568,  1244,
    1247,     0,     0,  1514,  1227,     0,  1226,     0,     0,  1598,
    1287,  1269,  1275,  1806,  1276,  1271,     0,  1289,     0,     0,
    1312,  1302,     0,  1305,     0,  1319,  1314,     0,  1326,   726,
     724,   717,     0,  1334,  1335,  1332,  1354,  1337,  1779,     0,
    1401,  1388,  1392,   483,   473,  1779,   466,   481,   482,  1811,
    1653,     0,  1649,  1649,  1649,     0,  1632,     0,  1649,  1605,
       0,  1649,  1649,  1876,     0,   338,  1833,   317,   519,  1806,
    1806,  1769,  1819,   550,   518,   522,   523,     0,     0,   649,
    1806,   639,  1873,   640,  1884,  1883,     0,  1806,     0,   652,
     643,   648,  1826,   644,     0,   647,   654,   651,   645,   650,
       0,   655,   646,     0,   666,   660,   664,   663,   661,   665,
     636,   667,   662,     0,  1826,     0,  1806,   707,     0,     0,
     685,   816,   821,   822,  1826,  1826,   814,   815,  1826,   802,
    1403,  1886,  1885,   799,   791,   793,   794,     0,  1403,     0,
       0,     0,   808,   797,     0,   805,   788,   804,   789,  1564,
    1563,     0,  1549,     0,  1831,  1596,  1413,   864,  1600,  1537,
       0,  1671,   871,     0,   869,     0,     0,  1521,   898,   919,
     924,     0,     0,  1538,  1413,  1806,  1682,  1597,   937,   728,
     934,  1437,  1409,   729,   951,  1775,   728,  1407,   957,   956,
     955,   954,   965,  1408,  1806,   968,     0,   971,   972,     0,
    1806,   975,   976,   977,   978,     0,   979,  1408,   966,     0,
     822,   944,   945,   942,   943,     0,  1413,     0,   894,  1002,
    1017,  1019,  1018,  1012,  1014,  1020,  1443,  1009,  1006,  1443,
    1010,  1473,  1446,  1447,  1833,  1043,  1517,   728,  1051,  1052,
    1868,  1067,  1068,  1070,  1072,  1073,  1069,  1071,  1062,  1868,
    1058,     0,  1107,     0,  1109,  1108,  1110,  1092,  1102,     0,
       0,  1086,  1260,     0,  1797,     0,  1120,  1413,     0,     0,
       0,  1138,  1148,  1161,  1157,  1162,  1158,  1163,     0,  1153,
    1397,  1396,  1160,  1169,  1391,  1583,  1584,  1585,     0,     0,
    1435,     0,   728,     0,  1208,     0,     0,     0,  1245,     0,
    1249,  1248,  1241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1229,  1230,  1676,  1435,     0,  1292,  1860,  1860,
    1307,  1308,  1309,     0,  1413,     0,     0,   727,     0,  1663,
       0,  1309,  1197,  1765,   467,     0,  1806,  1661,  1633,  1634,
    1635,  1659,  1656,  1657,  1631,  1650,     0,  1629,  1630,   499,
       0,     0,  1930,  1931,  1806,  1769,     0,   516,   520,   528,
     524,   526,   527,   529,   531,     0,   637,   638,   641,   642,
       0,   669,  1827,  1806,  1866,  1806,   670,   668,   682,  1806,
     701,   702,   705,     0,   696,   711,   713,  1806,   824,     0,
       0,   812,   813,     0,   728,   803,  1405,   790,   792,  1403,
     800,   795,   796,   809,   798,  1566,  1548,  1565,  1681,     0,
     728,   860,  1415,  1598,  1599,  1413,     0,  1670,   870,   872,
     879,   877,   906,  1804,   923,   922,   927,     0,  1436,   728,
    1434,   731,  1411,   946,     0,   969,   970,   973,   974,     0,
    1439,  1439,   967,   948,   960,   961,   959,   962,     0,   988,
       0,   889,   890,   700,     0,  1443,  1443,  1016,   728,  1013,
       0,  1050,   728,  1053,  1048,     0,     0,  1074,     0,     0,
       0,  1103,  1105,     0,  1098,  1112,  1099,  1100,  1091,  1094,
    1112,  1252,  1806,  1811,     0,  1798,  1259,  1121,  1124,     0,
    1138,  1137,  1141,  1130,     0,  1149,  1146,     0,     0,  1171,
    1170,   728,  1191,  1423,  1196,  1198,     0,  1210,  1443,  1443,
    1205,  1211,  1228,  1240,  1242,  1232,  1233,  1234,  1238,  1235,
    1239,  1236,  1237,  1231,  1677,  1285,     0,  1282,  1283,  1277,
       0,  1270,  1910,  1909,     0,  1861,  1295,  1295,  1418,     0,
    1681,  1315,     0,   720,     0,  1664,  1340,  1341,     0,  1344,
    1347,  1351,  1345,  1435,  1766,     0,   487,   484,   485,     0,
    1651,   319,   521,  1820,  1821,  1608,  1609,   538,   533,   537,
     536,   362,   551,   525,   530,  1578,   659,  1576,  1577,   658,
     675,   681,     0,   678,   703,   704,   713,   731,     0,     0,
    1403,   817,   819,   818,  1404,   728,  1402,   801,  1413,  1538,
    1414,   728,  1412,  1597,   861,  1672,  1569,  1570,  1891,  1892,
     908,   728,  1831,  1805,   905,   904,   900,     0,  1685,  1686,
    1687,  1688,  1689,  1690,  1691,  1692,  1684,  1438,     0,   981,
     980,   983,     0,  1581,  1582,   982,     0,   952,  1413,  1504,
    1413,  1504,   891,   892,     0,   896,   895,   897,  1015,  1021,
    1011,  1045,  1049,  1060,  1063,  1064,  1787,  1056,  1868,  1061,
    1112,  1112,     0,  1097,  1095,  1096,  1101,  1262,     0,  1256,
    1799,  1413,  1131,  1140,     0,  1164,     0,     0,  1178,     0,
    1427,   728,  1422,  1199,   728,   728,  1212,  1284,  1274,  1278,
    1279,  1280,  1281,  1272,  1293,  1296,  1294,   728,  1303,  1420,
    1806,  1413,  1413,   722,  1329,  1663,  1343,  1795,  1349,  1795,
    1418,   728,   728,  1389,  1399,  1430,  1431,  1398,  1395,  1394,
    1816,   486,   480,  1523,   532,  1897,  1898,   534,   364,   552,
     673,   671,   674,   672,   676,   677,     0,   653,   679,   680,
       0,   731,   823,   828,  1806,   830,   831,   832,   855,  1806,
     833,   834,   835,   836,   837,     0,   838,   839,   841,   842,
     843,     0,   844,   829,  1767,   845,   854,   848,   825,   826,
     847,   787,  1406,   862,  1416,   728,   882,   907,     0,   899,
    1907,  1908,  1440,   963,   990,     0,   989,     0,   893,  1065,
    1788,     0,     0,  1093,  1104,  1112,  1802,  1802,  1113,     0,
       0,  1265,  1261,  1255,  1125,  1139,     0,  1172,  1806,  1435,
       0,     0,  1173,     0,  1177,  1428,  1206,  1213,  1419,   728,
    1417,     0,  1317,  1316,  1355,   721,     0,  1342,     0,  1795,
    1346,     0,  1338,  1432,  1433,  1429,  1817,  1818,  1393,  1524,
       0,  1806,  1806,     0,   539,   540,   541,   542,   543,   544,
       0,   554,   656,   657,     0,     0,     0,   846,  1806,  1439,
    1439,  1768,     0,   827,   909,   901,  1413,  1413,     0,  1075,
    1111,  1803,     0,     0,  1806,  1263,     0,     0,  1253,  1257,
       0,     0,  1168,  1181,  1425,  1426,  1180,  1176,  1174,  1175,
    1421,  1310,  1363,   723,  1348,     0,  1352,  1917,  1916,  1806,
       0,     0,  1919,     0,  1806,  1806,   535,  1853,     0,   850,
     849,     0,   852,   851,   853,  1579,  1580,   992,   991,  1066,
    1115,  1114,     0,  1266,  1806,  1443,  1179,  1424,  1386,  1385,
    1364,  1356,  1357,  1767,  1358,  1359,  1360,  1361,  1384,     0,
       0,  1350,     0,   549,   545,  1918,     0,     0,  1800,   609,
       0,     0,     0,     0,  1806,  1831,   553,  1806,  1806,     0,
     560,   562,   571,   563,   565,   568,   555,   556,   557,   567,
     569,   572,   558,     0,   559,   564,     0,   566,   570,   561,
    1828,  1769,   712,   840,  1264,     0,  1165,     0,  1858,     0,
    1833,   546,   548,   547,  1801,   622,   611,   605,  1806,   613,
     468,     0,  1443,     0,     0,     0,     0,     0,     0,     0,
     604,   606,   612,     0,     0,   615,   620,  1829,  1830,  1808,
     617,  1267,     0,  1859,     0,  1382,  1381,  1380,     0,   610,
       0,  1866,   614,   602,  1681,   597,  1551,  1921,     0,     0,
    1923,  1925,     0,  1929,  1927,   573,   578,   581,   584,   575,
     579,   574,   580,   623,     0,   607,   608,   618,   619,   616,
    1383,  1890,  1889,  1841,  1376,  1370,  1371,  1373,   595,   593,
     594,     0,     0,   587,   591,   588,   472,   621,  1833,     0,
     596,  1552,  1920,  1924,  1922,  1928,  1926,   583,   576,   582,
     586,   577,   585,     0,  1842,  1833,  1379,  1374,  1377,     0,
    1372,   592,   589,   590,   464,     0,   599,     0,     0,  1378,
    1375,     0,   463,   601,   598,   600,   603,  1369,  1366,  1368,
    1367,  1362,  1365,   465
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
     676,   677,   678,  2592,  2742,   679,   799,   968,  1174,   797,
    1410,  1413,  1414,  1679,  1676,  2187,  2188,   680,   681,   682,
     683,   684,  1015,   805,   806,  1208,   685,   686,   496,   590,
     525,   620,   552,   723,   790,   854,  1216,  1450,  1704,  1705,
    1990,  1991,  1992,  1993,  1706,  2197,  2198,  2354,  2474,  2475,
    2476,  2477,  2478,  2479,  1987,  2202,  2481,  2537,  2596,  2597,
    2675,  2718,  2721,  2598,  2703,  2704,  2599,  2710,  2744,  2600,
    2601,  2602,  2603,  2640,  2627,  2641,  2604,  2605,  2606,  2645,
    2607,  2608,  2609,   594,   791,   857,   858,   859,  1218,  1451,
    1740,  2364,  2365,  2366,  2370,  1741,  1742,   726,  1458,  2016,
     727,   862,  1041,  1040,  1221,  1222,  1223,  1455,  1748,  1043,
    1750,  2216,  1165,  1396,  1397,  2333,  2455,  1398,  1399,  1956,
    1812,  1813,  2061,  1400,   794,   915,   916,  1115,  1229,  1230,
    1776,  1462,  1518,  1756,  1757,  1753,  2018,  2220,  2398,  2399,
    2400,  1460,   917,  1116,  1236,  1474,  1472,   918,  1117,  1243,
    1794,   919,  1118,  1247,  1248,  1796,   920,  1119,  1256,  1257,
    1528,  1848,  2081,  2082,  2083,  2052,  1134,  2246,  2240,  2406,
    1483,   921,  1120,  1259,   922,  1121,  1262,  1490,   923,  1122,
    1265,  1495,   924,   925,   926,  1123,  1275,  1504,  1507,   927,
    1124,  1278,  1279,  1512,  1280,  1516,  1840,  2076,  2267,  1823,
    1837,  1838,  1510,   928,  1125,  1285,  1524,   929,  1126,  1288,
     930,  1127,  1291,  1292,  1293,  1533,  1534,  1535,  1858,  1536,
    1853,  1854,  2087,  1530,   931,  1128,  1302,  1135,   932,  1129,
    1303,   933,  1130,  1306,   934,  1131,  1309,  1865,   935,   936,
    1136,  1869,  2094,   937,  1137,  1314,  1577,  1878,  2097,  2284,
    2285,  2286,  2287,   938,  1138,  1316,   939,  1139,  1318,  1319,
    1583,  1584,  1890,  1585,  1586,  2108,  2109,  1887,  1888,  1889,
    2102,  2293,  2428,   940,  1140,   941,  1141,  1328,   942,  1142,
    1330,  1593,   943,  1144,  1336,  1337,  1597,  2123,   944,  1145,
    1340,  1601,  2126,  1602,  1341,  1342,  1343,  1904,  1906,  1907,
     945,  1146,  1350,  1919,  2308,  2439,  2512,  1609,   946,   947,
    1147,  1352,   948,   949,  1148,  1355,  1616,   950,  1149,  1357,
    1920,  1619,   951,   952,  1150,  1360,  1625,  1923,  2140,  2141,
    1623,   953,  1151,  1365,   159,  1637,  1366,  1367,  1942,  1943,
    1368,  1369,  1370,  1371,  1372,  1373,   954,  1152,  1323,  2297,
    1587,  2433,  1892,  2111,  2431,  2508,   955,  1153,  1381,  1945,
    1645,  2156,  2157,  2158,  1641,   956,  1383,  1647,  2324,  1159,
     957,  1160,  1385,  1386,  1387,  2168,  1651,   958,  1161,  1390,
    1656,   959,  1163,   960,  1164,  1392,   961,  1166,  1401,   962,
    1167,  1403,  1665,   963,  1168,  1405,  1669,  2176,  2177,  1961,
    2179,  2338,  2460,  2340,  1667,  2456,  2522,  2561,  2562,  2563,
    2751,  2564,  2695,  2696,  2729,  2565,  2657,  2566,  2567,  2568,
     964,  1169,  1407,  1614,  1962,  1912,  2343,  1671,  2025,  2026,
    2226,  1513,  1514,  1817,  2041,  2042,  2232,  2328,  2329,  2450,
    2132,  2513,  2133,  2312,  2344,  2345,  2346,  1810,  1811,  2060,
    2261,  1312,  1313,  1295,  1296,  1563,  1564,  1565,  1566,  1567,
    1568,  1569,   997,  1195,  1417,   999,  1000,  1001,  1002,  1266,
    1267,  1498,  1353,  1361,   395,   396,  1035,  1374,  1375,  1574,
    1344,  1250,  1251,  2352,   482,   301,   699,   700,   483,    98,
     153,  1304,  1269,  1238,  1475,  2665,  1424,  1004,  1781,  2036,
    2110,  2235,  1260,  1345,  2206,  2544,  2262,  1914,  2207,  1324,
    1378,  1240,  1006,  1270,  1271,   748,   801,   802,  2208,   271,
    2200,   179,  1241,   774,   775,  1242,  1009,  1010,  1011,  1203,
    1176,  1432,  1428,  1421,   501,  2178,   539,  1478,  1792,  2047,
    1612,  2160,   282,  1501,  1806,  2256,   811,  1114,  2185,  2492,
     610,   339,   692,  1464,   423,  1224,   202,   115,   393,  2421,
     337,   352,  1033,   784,  2116,  2625,  2502,  2247,    96,   214,
     414,   753,  2468,  1986,   780,   402,  2003,  2649,   815,  1412,
     218,   488,  2725,   168,   390,   744,   102,   732,   688,   848,
    2654,  2166,   350,  1576,   971,  1310,   407,   742,  1209,  1349,
     404,   391,  1758,  1778,  1499,  2693,  2241,   184,   703,  2357,
     721,   347,   602,  1492,  2412,  2164,   540,   203,  2529,  2535,
    2678,  2679,  2680,  2681,  2682,  1708
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2224
static const yytype_int16 yypact[] =
{
   -2224,   238,   636, -2224,  -186,   263, -2224,   636, -2224, -2224,
     674, -2224, -2224,   674,   674,     9,     9, -2224,   774, -2224,
     705,   656,   924, -2224, -2224,  1076,  1076,   795,   860, -2224,
   -2224,   531,   674,     9, -2224, -2224,  1032,   833, -2224, -2224,
     878,  1141,     9, -2224, -2224, -2224,   656,   894, -2224, -2224,
     -13, -2224,   807,   807,   931,   956,  1145,  1145,  1145,   998,
     807,   999,   974,  1008,  1145,  1012,  1022,  1393, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224,   784, -2224, -2224, -2224, -2224,
    1268, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
    1322,  1047,   531, -2224, -2224,  1074,    80, -2224, -2224,  1145,
    1145, -2224,  1145,  1033,  1451,  1033,  1093,  1145,  1145, -2224,
   -2224,  1033, -2224, -2224, -2224,  1050,  1118,  1110, -2224, -2224,
    1060, -2224,  1120, -2224, -2224, -2224, -2224,  -141, -2224, -2224,
   -2224,  1239, -2224,  1145,   933,  1033,  1326,    13, -2224, -2224,
   -2224, -2224, -2224,  1333,  1137,   411,  1413, -2224,  1112, -2224,
    1050, -2224,    51, -2224, -2224, -2224, -2224, -2224,   898,   -85,
    1145,    34, -2224, -2224, -2224,   -64, -2224, -2224, -2224,  1002,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224,   933, -2224,  1166,
   -2224,  -180, -2224, -2224,  1033, -2224,  1235, -2224,  1252,  1250,
    1574,  1145, -2224, -2224, -2224,   571, -2224, -2224, -2224, -2224,
   -2224,   741,  1607,  1145,    68, -2224,    82, -2224, -2224,    95,
   -2224, -2224, -2224, -2224,  1415,   -85, -2224,  1434,   807,   807,
   -2224,   898,  1230,    74,   -70, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,   432, -2224,
      76, -2224,   933, -2224, -2224,  1357, -2224, -2224, -2224,  1145,
    1288,  1435, -2224, -2224, -2224, -2224,   895,  1145,  1187,  1465,
     521, -2224,  1671,   626,  1246, -2224, -2224,  1247,  1595, -2224,
    1415, -2224,   807, -2224, -2224, -2224, -2224,   898, -2224,  1253,
    1392, -2224,   807, -2224,   684, -2224,   189, -2224, -2224, -2224,
   -2224, -2224,   432, -2224,  1455,  1435, -2224, -2224, -2224,   511,
   -2224, -2224, -2224,  1456, -2224, -2224, -2224, -2224, -2224,  1448,
   -2224, -2224, -2224, -2224, -2224,  1272, -2224, -2224, -2224,  1707,
    1629,  1285, -2224, -2224,   432, -2224, -2224,    24, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224,  1300, -2224,  1550,
    1617,  1290, -2224,  1737, -2224, -2224, -2224, -2224,  1636, -2224,
    1672, -2224,  1256,  1306,  1366, -2224,   432,  1490,  1412,   693,
    1363, -2224,  1364,  1145,  1708,   141,   -26,   870, -2224,  1263,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,  1346,
   -2224,  1506, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
    1731,  1145, -2224,  1256, -2224,  1256, -2224, -2224,  1320,   115,
   -2224, -2224,  1145, -2224,  1536, -2224, -2224,  1009, -2224, -2224,
     859,  1145,  1145, -2224,  1145,  1145, -2224,  1707, -2224,   105,
    1145,  1490, -2224,  1372,  1273,  1256, -2224,  1446, -2224, -2224,
   -2224, -2224,  1274, -2224,  1277,    66,   545,  1145, -2224, -2224,
    1283, -2224, -2224, -2224,  -101,  1360,  1033,  1033, -2224,  1467,
    1467,  1474, -2224,  1033,  1145, -2224, -2224, -2224,  1435, -2224,
    1394,  1525, -2224, -2224,  1335, -2224, -2224, -2224, -2224, -2224,
    1033, -2224, -2224,   -54,   -54,  1784,   -54, -2224, -2224,   -54,
     153, -2224, -2224, -2224, -2224,   788, -2224, -2224, -2224, -2224,
   -2224, -2224,   666, -2224,  1347,  1403,  1543,  -251,  1348,  7020,
   -2224,  1305, -2224, -2224,    42, -2224, -2224, -2224, -2224,  1272,
   -2224, -2224, -2224, -2224, -2224,  1145, -2224, -2224,  1307, -2224,
    1307, -2224, -2224,  1361,  1418,  1449, -2224,  1365, -2224,  1369,
   -2224,  1733, -2224,  1736, -2224,   726, -2224,  1698, -2224,  1395,
   -2224, -2224, -2224,  1033,  1033,   -62, -2224, -2224,  1277, -2224,
    1373,  1430,  1439, -2224, -2224, -2224,  1000,  1672,  1145,  1104,
    1104,  1145,    32,  1490,  1145,  1807, -2224,  1524, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,   807,    65,
   -2224,   -23,  1329, -2224, -2224, -2224, -2224,  1526, -2224, -2224,
    1277, -2224,  1382,  1442, -2224,  7191,   667,  1633,  1435,  1334,
    1145,  1807,  1336,   -96,  -101,  1435,  1342,  1145, -2224, -2224,
   -2224,   -59,   807, -2224, -2224, -2224,  1395,    57,   -52, -2224,
    1277, -2224,  1388,   627,    19, -2224, -2224,  -146,   349,   582,
     616,   682,  1341, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
    1460, -2224,   692, -2224, -2224, -2224, -2224,  1033,  1033,  1613,
   -2224, -2224, -2224,   461, -2224, -2224, -2224,  1145,   142, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224,   789,   -80, -2224,
    1343, -2224,   501, -2224,  1399, -2224, -2224, -2224, -2224,  1336,
   -2224, -2224, -2224, -2224,  1593,    50,  1634,  1352,  1145, -2224,
   -2224,  1145, -2224, -2224,   102, -2224, -2224, -2224,  1193, -2224,
   -2224, -2224, -2224, -2224, -2224,  1730, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224,  1349, -2224, -2224,  1806,  1414, -2224,  1401,  1419,
   -2224, -2224, -2224, -2224,  7572,   102,  1839, -2224,  1468,  1468,
   -2224,   997,  1561, -2224,  1154,  1154, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224,  1421, -2224,  1435,    94, -2224, -2224,
   -2224,  1435, -2224, -2224,  1461, -2224,   368,   368, -2224, -2224,
    1527,  1371,    23,  2884,  3937, -2224,  1634,  1682,  1435,  1433,
    7773,  1417, -2224,  1033, -2224,   102, -2224,  1440,  1625, -2224,
    1708, -2224, -2224, -2224, -2224,  1154,  1432, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
     997, -2224, -2224, -2224, -2224,    58,  1393, -2224,   934, -2224,
   -2224, -2224, -2224,  1377, -2224,  6680, -2224, -2224,  1371,  1441,
   -2224, -2224,  1509,  4248, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,   483, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224,  1487, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224,   433, -2224, -2224,  1551, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224,  1385,  1435,  1414, -2224,
   -2224,  1776, -2224, -2224, -2224, -2224, -2224,  1431,  3026,    13,
      13,  1436,  1443,  1445, -2224,  1458,    13, -2224, -2224, -2224,
    7870,  7773,  7870,  1459, -2224,  1431, -2224,    39,  1143,   922,
   -2224,  1725, -2224, -2224, -2224, -2224, -2224,  1421, -2224,  1462,
    1463,  1466,  7773, -2224, -2224,   502, -2224,   102, -2224, -2224,
   -2224, -2224, -2224,  -101,  -101, -2224, -2224, -2224, -2224,  1712,
   -2224, -2224,  1399,  1435, -2224, -2224,  1453, -2224,  1472, -2224,
      85,    85,  1391,  1476, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224,   314,  5140,  7773,   391,   529,
     394,  1256,   170,  -223,  6089,  6194,  1645,   536,  1210,   170,
    1033,  1471, -2224, -2224,  6194, -2224, -2224,   170,  1377,  2770,
    1033,  5168,  6194, -2224,  1042,  4336,  1256,  1033,  1256,  1033,
      61,   754,  1033,  1256, -2224, -2224, -2224, -2224, -2224, -2224,
    5359,  5455, -2224, -2224,  1377,   128,  1033,  1256,  1033,  1033,
   -2224, -2224,  1680,  1598, -2224,  7098, -2224, -2224,  1421, -2224,
    1407,  1408,  7773,  7773,  7773,  3026,  1425, -2224,  1026, -2224,
    3026, -2224, -2224, -2224, -2224,  7773,  7606,  7773,  7773,  7773,
    7773,  7773,  7773, -2224,  3026,  7773,  1143,  1516, -2224,  1478,
   -2224, -2224, -2224,  1903,  1393, -2224,   605, -2224, -2224, -2224,
   -2224,    48, -2224,  -193,  -169,   334, -2224, -2224, -2224,  1803,
     168,  1739,  1561,  1033,  3026, -2224,  1804, -2224,  5482, -2224,
   -2224, -2224, -2224, -2224,    81,   672, -2224,   391, -2224,  1491,
   -2224,    13, -2224, -2224, -2224, -2224,  1808,  1367, -2224,   394,
   -2224, -2224,  1256,   828,  1561,  1805, -2224,   137, -2224,  1554,
   -2224, -2224,  1401,  1421,  1256,  1802,  1592,  1190,  1809,  5703,
   -2224,  5802,   114,  1221,  1228,  1810,   178,  1454, -2224, -2224,
   -2224,  1811,    70, -2224, -2224, -2224,  4731, -2224, -2224,  1842,
     483, -2224, -2224, -2224,   170, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224,  1504, -2224, -2224,   649,  1377, -2224, -2224,     7,
   -2224, -2224, -2224, -2224, -2224, -2224,  1492,  6194, -2224,  1503,
    1812,  1905, -2224, -2224, -2224, -2224,  1042,  1559, -2224,  1512,
   -2224,  6515,   -25,  -239,  1521,  1519, -2224,   930, -2224,  1529,
    1826,   813, -2224,  1775, -2224,  1827,  1592,  1828,  1775,  1033,
    1829,  1473, -2224,   657, -2224, -2224, -2224, -2224, -2224, -2224,
    1710, -2224,   170, -2224,   -78, -2224,   623,  1947, -2224,    49,
   -2224,  1831,  1071,   -11,  1933,  1834,  5037, -2224, -2224,  1033,
    1836,  5825,  1377, -2224, -2224,  -154, -2224, -2224, -2224, -2224,
    3696, -2224,  1788, -2224,  1218,  1837,  1876,  1838,  1775, -2224,
   -2224, -2224,  1033,  1771,   201, -2224,    87,   822, -2224, -2224,
     514,  1544,  1545,  1547,   177, -2224,  1421, -2224,  1548, -2224,
   -2224,   191,  1549,   822, -2224,  1028,   922,   922, -2224, -2224,
   -2224,  1169,  1553,   241,  1556,  1145, -2224,  -101,  1877,  1552,
     182,  7498, -2224,  1145,  1590,  1694, -2224, -2224,  1897, -2224,
   -2224,   657,  1813, -2224,   601,  1410,   -48,  1562, -2224,  1421,
   -2224, -2224, -2224,  6337,  1815, -2224,  1792, -2224,  1635, -2224,
    1681,  1763, -2224, -2224, -2224,  1454, -2224,   828, -2224, -2224,
   -2224,   -36,   513,  1033, -2224, -2224, -2224, -2224, -2224,  7773,
    1749, -2224,  1417, -2224,  1256, -2224, -2224, -2224,  1791, -2224,
   -2224, -2224,  6194, -2224,  1729,    18,  1727,  1134,  1541,  1861,
    1861,  1861,  1861, -2224, -2224,  6194,  6337, -2224, -2224, -2224,
   -2224,   536,   165, -2224,  1528, -2224,  1530, -2224, -2224, -2224,
   -2224,  1471, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,  4502, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224,   -14, -2224,  1899,  1572,  1853, -2224,
     657,    69, -2224, -2224,  1666, -2224, -2224,    93,  7773, -2224,
    1586,   170, -2224, -2224,  6337,  1559,  1263,  1256, -2224, -2224,
   -2224, -2224, -2224,  1866,  1033,   391, -2224,   233, -2224, -2224,
   -2224, -2224,  1592,  2770, -2224, -2224, -2224,  1814, -2224, -2224,
     487,  1908, -2224, -2224,  1033,  1908,  1594, -2224,  1421, -2224,
   -2224,   787,   898, -2224, -2224,  4816, -2224,  1995,   746,    54,
   -2224, -2224, -2224,  1145, -2224,  -107,  6194, -2224,   698,  5922,
   -2224, -2224,  1033, -2224,  1849, -2224, -2224,  6337, -2224,  1435,
   -2224, -2224,   657, -2224, -2224, -2224, -2224, -2224,  1933,  1819,
   -2224, -2224,   233,  1771, -2224,  1933, -2224, -2224, -2224,  1536,
   -2224,  1033,  1462,  1462,  1462,  3026, -2224,   415,  1462, -2224,
    7750,  1462,  1462, -2224,   102, -2224,  1598, -2224, -2224,  1145,
    1145,  1807,  1181, -2224, -2224, -2224, -2224,  1847,   -47, -2224,
    1145, -2224,   -84, -2224, -2224, -2224,  1438,  1145,  2770, -2224,
   -2224, -2224,  1754, -2224,  1435, -2224,  1997, -2224, -2224, -2224,
    1033, -2224, -2224,  1033, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,  1851,  1754,   686,  1145, -2224,  1557,  1604,
   -2224, -2224, -2224,  1785,  1754,  1754,   118,  1816,  1754, -2224,
    1895, -2224, -2224, -2224,  1555,  1558, -2224,   657,  1895,  1833,
    1640,  1767, -2224, -2224,  1795, -2224, -2224, -2224, -2224, -2224,
   -2224,   405, -2224,  1033,  1561,  1869,   805, -2224,   -38,   -53,
     170,  1626,  1635,   170, -2224,  1627,   391, -2224,   483, -2224,
   -2224,  1695,  1714, -2224,   764,  1145, -2224, -2224, -2224, -2224,
   -2224,  1783, -2224, -2224, -2224,  2049, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,  1861,  1145, -2224,   520, -2224, -2224,  1444,
    1145, -2224, -2224, -2224, -2224,    86, -2224,  1340, -2224,  1488,
    1785, -2224, -2224, -2224, -2224,  1878,   805,  1880,    75, -2224,
   -2224, -2224, -2224,  2063, -2224,  1641,   151, -2224, -2224,   165,
   -2224, -2224, -2224, -2224,  1598, -2224, -2224, -2224,  1960,  1950,
    1471, -2224, -2224, -2224, -2224, -2224, -2224, -2224,  1728,  1471,
   -2224,  1648, -2224,  2043, -2224, -2224, -2224,   926, -2224,   657,
     248, -2224,    71,   201,   508,   170,   170,   805,  1893,  1256,
     105,   977,  1955, -2224, -2224, -2224,  2091, -2224,  1904, -2224,
   -2224, -2224, -2224,  1814, -2224, -2224, -2224, -2224,  1033,  1975,
    1791,  1015, -2224,  1605, -2224,  1608,   657,  1029, -2224,   405,
   -2224, -2224, -2224,  6194,   898,   898,   898,   898,   898,   898,
     898,   898,   746, -2224,   418,  1791,   -50, -2224,  1688,  1688,
   -2224, -2224,   302,  1033,   805,  1909,  1670, -2224,  1679,  2118,
    1033,   327,   487,  2121, -2224,  1624,  1145, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224,  1068, -2224, -2224, -2224,
    1033,   394, -2224, -2224,  1145,  1807,   140,  1371, -2224, -2224,
   -2224,  1033,  1033, -2224, -2224,   393, -2224, -2224, -2224, -2224,
     393, -2224, -2224,  1145,  1433,  1145, -2224, -2224, -2224,  1145,
   -2224, -2224, -2224,   645, -2224, -2224, -2224,  1145,  1628,   393,
     393, -2224, -2224,   393, -2224, -2224,  1840, -2224, -2224,  1895,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,  1554,   -48,
   -2224, -2224,  1841,    -8,  1927,   805,   584, -2224, -2224, -2224,
   -2224, -2224,     8,    83, -2224, -2224, -2224,  1124, -2224, -2224,
   -2224, -2224, -2224, -2224,   393, -2224, -2224, -2224, -2224,   393,
     413,   413, -2224, -2224, -2224, -2224, -2224,  1631,   170, -2224,
     170,  2413, -2224,   493,     6,   165, -2224, -2224, -2224,  2063,
    1033, -2224, -2224, -2224, -2224,  1637,  1161,   196,  1638,   584,
     657, -2224, -2224,  2084, -2224, -2224, -2224, -2224,   248, -2224,
    1951, -2224,  1145,  1536,  1830, -2224, -2224,   170, -2224,   170,
     977, -2224, -2224, -2224,  1127, -2224, -2224,  1033,  6194,  1035,
   -2224, -2224, -2224,  1850, -2224, -2224,  1881, -2224, -2224, -2224,
   -2224,  1608, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224,    89, -2224,  1033, -2224, -2224, -2224,
    1119, -2224, -2224, -2224,  7773, -2224,  6194,  6194,  1684,  1817,
    1554, -2224,   170, -2224,   584, -2224,  1835, -2224,   657, -2224,
    2035,  1713, -2224,   783, -2224,   885, -2224,  1624, -2224,  1033,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,  1370, -2224,
   -2224,   -43, -2224,  1033, -2224, -2224, -2224, -2224, -2224, -2224,
    1034, -2224,   394,  1034, -2224, -2224, -2224,   157,  2104,  2014,
    1895, -2224, -2224, -2224, -2224, -2224, -2224, -2224,  1742,  1952,
   -2224, -2224, -2224,  1953, -2224, -2224, -2224, -2224, -2224, -2224,
    1860, -2224,  1561, -2224, -2224, -2224, -2224,  1033, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,  3540, -2224,
   -2224, -2224,  1400, -2224, -2224, -2224,  1134, -2224,   805,  1796,
     805,  1797, -2224, -2224,  6194, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224,  1161, -2224,  2056, -2224,  1471, -2224,
   -2224, -2224,   584,  1237, -2224, -2224,  1237,   104,  1033, -2224,
   -2224,   805, -2224, -2224,  1780, -2224,  2113,  1901,  1929,   478,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,   822, -2224, -2224, -2224, -2224, -2224,  1868,
    1145,  1742,   805,  1675, -2224,  2118, -2224,  1634,  2073,  1634,
    1684, -2224, -2224, -2224, -2224,  1882, -2224, -2224, -2224, -2224,
    1409, -2224,  1033, -2224,  1255, -2224, -2224,   140, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224,   393, -2224, -2224, -2224,
     393,   -21, -2224, -2224,  1145, -2224, -2224, -2224, -2224,  1145,
   -2224, -2224, -2224, -2224, -2224,     2, -2224, -2224,  2115, -2224,
   -2224,   112, -2224, -2224,  2165, -2224, -2224, -2224,  2014, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,  1033, -2224,
   -2224, -2224, -2224,  1134, -2224,   170, -2224,   170, -2224, -2224,
   -2224,  2126,  2066,  1237,  1237, -2224,  1722,  1722, -2224,  1843,
    1256,     4, -2224,  1033, -2224, -2224,  6194, -2224,  1145,   550,
    1919,  1921, -2224,  1922, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224,  1033, -2224, -2224, -2224, -2224,  1734, -2224,  1033,  1634,
   -2224,  1033, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
    1173,  1145,  1145,  1153, -2224, -2224, -2224, -2224, -2224, -2224,
    1606, -2224, -2224, -2224,  2075,   393,   393, -2224,  1145,   413,
     413, -2224,   140, -2224, -2224, -2224,  1742,  1742,  6194, -2224,
    1237, -2224,  6194,  6194,  1145,  1256,  1256,  1852, -2224, -2224,
    1705,  1033, -2224, -2224,  1850, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224,  1116, -2224, -2224,  1033, -2224, -2224, -2224,  1145,
     140,   140, -2224,  1978,  1145,  1145, -2224,  2501,  1738, -2224,
   -2224,   394, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224,   391,  1256,  1145, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,  1270, -2224, -2224, -2224, -2224, -2224,  1854,
    2083, -2224,   140, -2224, -2224, -2224,   140,   140,  1971,  1894,
      11,  1435,  1911,  1697,  1145,  1561, -2224,  1145,  1145,  1033,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,   590, -2224, -2224,   608, -2224, -2224, -2224,
    1345,  1807, -2224, -2224, -2224,   391, -2224,  1844,  1779,   183,
    1598, -2224, -2224, -2224, -2224, -2224,  1968, -2224,  1145, -2224,
    1414,  1884, -2224,  8037,  8037,  1450,  2081,  2007,   -94,   -94,
   -2224, -2224, -2224,   -94,   -94, -2224, -2224, -2224, -2224,   142,
   -2224, -2224,  1033, -2224,   819, -2224, -2224, -2224,    59, -2224,
    1043,  1433, -2224, -2224,  1554,  6543, -2224, -2224,   798,   961,
   -2224, -2224,   973, -2224, -2224, -2224, -2224,   103,   116, -2224,
   -2224, -2224, -2224, -2224,  8037, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,  1872,  1082,    59, -2224, -2224,  1885, -2224,
   -2224,  1435,  1435, -2224, -2224, -2224,  1776, -2224,  1598,  1033,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,  2161, -2224,  1598, -2224, -2224,  1910,  1033,
   -2224, -2224, -2224, -2224,  1789,   131, -2224,  8037,   577, -2224,
   -2224,  1435, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224,  1256, -2224
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2224, -2224, -2224, -2224, -2224,  2208, -2224, -2224, -2224,   194,
   -2224,  2171, -2224,  2127, -2224, -2224,  1505, -2224, -2224, -2224,
    1452, -2224, -2224,  1437,  2192, -2224, -2224,  2093, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,  2021,
     567, -2224, -2224, -2224, -2224, -2224,  2076, -2224, -2224, -2224,
   -2224,  2017, -2224, -2224, -2224, -2224, -2224, -2224,  2151, -2224,
   -2224, -2224, -2224,  2006, -2224, -2224, -2224, -2224,  1990, -2224,
   -2224,   937, -2224, -2224, -2224, -2224, -2224,  2080, -2224, -2224,
   -2224, -2224,  2054, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224,   629, -2224, -2224, -2224,  1616,
   -2224, -2224, -2224, -2224, -2224, -2224,  1715, -2224,  1823, -2224,
   -2224, -2224,  1735,  1696, -2224,  1693, -2224, -2224, -2224, -2224,
     338, -2224, -2224,  1954, -2224, -2224, -2224, -2224, -2224,  1818,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224,  1212, -2224, -2224, -2224,  1464,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224,   412, -2224, -2224,  1745, -2224,  -768,
    -839, -2224, -2224, -2224,   209, -2224, -2224, -2224, -2224,   222,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -1423,   794,  1493,
     646,   651, -1421, -2224, -2224, -2224,  -955, -2224,  -460, -2224,
   -2224,   838, -2224,   357,   579, -2224,    67, -1420, -2224, -1417,
   -2224, -1416, -2224, -2224,  1457, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224,   262, -1823, -2224, -2224,  -978, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224,  1397, -2224, -2224,
   -2224,    43,    45, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224,  1223,   159, -2224,   176, -2224, -2224,
   -2224, -2224, -1801, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -1387, -2224, -2224,  -706, -2224,  1475, -2224, -2224, -2224, -2224,
   -2224, -2224,  1036,   515,   509, -2224,   428, -2224, -2224,  -128,
    -114, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
     481, -2224, -2224, -2224,  1031, -2224, -2224, -2224, -2224, -2224,
     790, -2224, -2224,   195, -2224, -2224, -1292, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224,   793, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224,   769, -2224, -2224, -2224, -2224, -2224,
      17, -1790, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224,   753, -2224, -2224,   751, -2224, -2224,
     427,   202, -2224, -2224, -2224, -2224, -2224,   988, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
      10,   712, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,   706, -2224, -2224,   184, -2224,   404, -2224,
   -2224, -1951, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224,   957,   700,   179, -2224, -2224,
   -2224, -2224, -2224, -2224, -1690,   955, -2224, -2224, -2224,   171,
   -2224, -2224, -2224,   384, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
     341, -2224, -2224, -2224, -2224, -2224, -2224,   675,   163, -2224,
   -2224, -2224, -2224, -2224,  -132, -2224, -2224, -2224, -2224,   363,
   -2224, -2224, -2224,   936, -2224,   935, -2224, -2224,  1157, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,   143, -2224,
   -2224, -2224, -2224, -2224,   925,   352, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,   -20, -2224,
     355, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,  -378, -2224, -2224, -2224, -2224, -2224, -2224,
   -2224, -2224, -2224,  -375, -2224,   647, -2224, -2224, -1694, -2224,
   -2224,  -334, -2224, -2224, -1720, -2224, -2224,   -19, -2224, -2224,
   -2224, -2224,  -119, -2223, -2224, -2224,   -22, -1857, -2224, -2224,
   -1875, -1563, -1088, -1475, -2224, -2224,   759, -1806,   164,   167,
     169,   173,   -92,  -106,  -783,   451,   323, -2224,   694,  1566,
   -1355, -1098,  -361,   966, -1572,  -392,  -486, -2224, -1333, -2224,
   -1072, -1401,   847, -2224,   -91,  2032, -2224,  1639,  -559,     5,
    2182, -1082, -1030,   152,  -866, -2224, -1118, -1265, -2224,   406,
   -1301, -1317, -1113,  1079, -1133, -2224, -2224,   621, -1132, -2224,
    -336,   919,  -642, -2224, -2224,  -103, -1201,  -759,  -111,  2070,
   -1023,  2100,  -663,   551,  -531,  -463, -2224, -2224, -2224,   -41,
    1350, -2224, -2224,   473, -2224, -2224,  1762, -2224, -2224, -2224,
   -2224, -2224, -2224, -1979, -2224, -2224,  1587, -2224, -2224,  -216,
    -594,  1931, -2224, -1191, -2224, -1323,  -288,  -641,   855, -2224,
    1845, -1454, -2224,  -790, -2224, -2224,   -77, -2224,    -4,  -664,
    -356, -2224, -2224, -2224, -2224,   366,  -144, -2224, -1214, -1560,
    2134,  1902, -2224, -2224, -1135, -2224, -2224,  1094, -2224, -2224,
   -2224,   402, -2224,   256, -1955, -1485, -2224, -2224, -2224,  -172,
   -2224,   463, -1415, -1486, -2224, -2224, -2224,  -165, -2224, -2224,
    1643, -2224,  1798, -2224, -2224, -2224,   770, -2224, -1721,  -279,
   -2224, -2224, -2224, -2224, -2224, -2224
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1878
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   755,   160,   966,   697,   139,   245,
     415,  1283,   138,  1172,   141,   747,  1037,   998,  1466,  1377,
     147,   793,  1447,   855,  1268,  1901,   215,  1893,  1734,   773,
    1736,  1737,   139,   427,  1738,  1739,  1744,   268,  1802,  1294,
    1905,  1633,  1013,   465,   180,   704,  1249,  2072,   437,  2211,
    1493,   788,   103,   104,   105,  1315,  1861,  1855,    99,  2228,
     111,  1649,  1626,  2134,   782,   107,   714,   464,  2694,  1376,
    1359,  1502,  1431,   211,  2030,   279,   411,   259,  1882,   860,
   -1588,   246,   345,   264,  2056, -1589,  1442,  1531,  2161,  2242,
     855,  1646,   807,   291,  2275,   134,   135,  1220,   136,  1305,
    1580,  1864,   536,   143,   144,  1779,  1023,  1305,   114,  2484,
    1192,   761,   161,  2378,   449,  1818,   708,  1599,  1786,   392,
   -1833,  1305,   838,   838,  1220,  1589,  2079,  1883,  -688,   169,
    1989,   220,  1777,   530,  1220,   360,  1980, -1877,  2159,  1476,
     297,  1508,   807,  1264,  1461,   215,  1486,   216, -1877,  1860,
   -1617, -1877,   842,   127,   709,   481,   219,  -686,  1192,  2296,
    1751,   758,  2195, -1779,   211, -1594,   221,   536,  1996,  2204,
     222,  1846,  1850,   838,  2238,  1249,  1264,  2118,  1639, -1775,
   -1846, -1775,  1821,  1714,   327,  1715,  1850,   251,  1456,  1868,
     321,  2331,  1132,  1364,  2162, -1592,  2265,   419,  1461,   258,
     587,   526,   505, -1877,   283,  1030, -1811,  2506,  1188, -1833,
    2070,   413,   701,   129,  1902,  2217,  2515,  1453,   536,    94,
    2628,  1617,   718,   274,   275,    43,  1800,  1525,  1677,  1206,
     813,   182,  1274, -1775,  2171, -1775,  2489,   614,     3,  1897,
    1659,  1910,  1246,  1603,  1699,   295, -1877,  1884,  1192,  1541,
    1239,  1801,   128,   299, -1662,   412,   418,  2104,  1282,  1286,
     730,  1604,  1192,   728,    94,    23,    15,  -688,  1311,   615,
    1911,  -688,  1700,  1701,  1573,  1329,  1331,   311, -1877,  1881,
    2717,   204,   394,   212,  1454,  1573,    43,   314,   430,  1364,
    1631,  2557,  1780,  2720,  1388,  1239,  -686,  1496,  1660,   719,
    -686,   720,  1954, -1877,  2090,  1997,  2105, -1864,  2743,  1022,
    1885,  2243,  1192,  2655,   763,  1246,   130,  1678,   284,   183,
     729,  2507,   702,   588,   243,  2234,  2347,  2120,  -688,  2429,
    1457,   731,  2629,   223,  1244,  2227,  1177,  1008,   217,  2423,
    2424,   139,  1305,   139,   139,  1959,  1573,   493,  2317,   763,
     139,    24,  1965,  1819,  1210,   485,   486,  -686,   766,   410,
    2163,  1958,   491,  2276,   280,  1133, -1775,   139,   767,  1632,
     507,   507,  1581,   507,   212,  1268,   507,   514,   413,   504,
    2204,  1855,   763,  1220,  1855,  2095,   281,   424,   979,   759,
     980,  2244,   450,   766,  2098,   840,  2195,   243,   436,  1420,
    1420,  1420,  1411,   767,   137, -1779,  1526,   444,   445,   512,
     446,   447,  1433,  1435,    94,  2371,   453,  2196,   741,  1441,
   -1775,   979,  2058,   980,  -693,   800,   766,  1600,  1268,  2062,
    1570,  1394, -1779,   470,   129,  2045,   767,  1193,   260,   -35,
     139,   139, -1779,  1294,  1582, -1775,   710,   843,   768,  1755,
     492,   137,   585,   585,   451,  1012,   515,   137,   137,   986,
     763,  1590,  2358,   283,  1211,  1212,  2029,  2088,   187,  -688,
    2239, -1781,   368,   715,  2500,   188,  1321,  1913,   139, -1811,
    2091,   537,   137,   768,  1395,  1193,  2396,   694,  1194,  2106,
     585,   137,   986,   243,   705,   516,  1268,   781,  -686, -1775,
    -693,   139,  1866,  1702,   766,  2277,  2053,   431,  2403,  1896,
     761,   542,   800,  1503,   767,  1179,   768,  1012,   769,   292,
    1388,   861,  1019,  1820,  1024,  2084,  2401,  1008,  1008,  1008,
     346,   579, -1806,  1909,   265,  2137,  1680,   130,  1886,    97,
    1197,   746,  1556, -1846,  2245,  1198,   537, -1779,  2414,  1008,
    2416,   762,   597,   769,   599,   749,   149,   604,   606,  1268,
     608,  1305,   243,   770,   137,   261,   137,  1971,   716,  2071,
    2039,   394,  1532,  1448, -1779,  1193,  2315,   284,  1541, -1678,
    1394,  2434,  2516,   613, -1779,  1192,   769,  2043,  2103,  1193,
    1497,   687,  1468,   761,   768,  2490,   696,   537,   770,   243,
     255,  1573,  2430,   707,  2656,  1851,  1449,  1787,   137,  1394,
    1855,  2452,  2453,   771,  2542,  2543,  1852,   712,  1517,  1851,
    1503,   137,  1228,  2072,   849,  2142, -1658,  -683,   187,  1264,
    1852,   770, -1877,  1395,  1703,   188,   137,  2224,  1575,  1193,
   -1655,   322,   137, -1864,   228,   137,  1815,  1246,   771,   154,
    1258,  2196,  1317,  2230,  1008,  1264,  1972, -1877,   137,  1845,
    1847,  2035,  1395,   754,   769,   841,  1714,  -517,  1715,   154,
     846,   466,  2257,  1029,    42,   137,  1322,  2214,  1393,   189,
    2131,   771,  1348,   851,   851,  2707,  1132,   969,   229,  1154,
    1692, -1779,  1268,   689,  2440,  -517,  -517,  1570,   230,   518,
    1014,  2280,   351,   751,   786,  2282,  2706,   787,  2154,   770,
    -691,  2155,  1008,   763,  2441,    16,  1804,  2107,  2010,  1008,
    1008,  1008,  1427,  2268,  2051,  2270,  2114,  1427,  1898,  1263,
   -1556,  1276,  1008,  1008,  1008,  1008,  1008,  1008,  1008,  1008,
    2442,  1427,  1008,  1807,  2310,   764,   765,  1634,  2747, -1877,
     -96,   190,  2534,   137,  1351,   730,  1356,   766,  2084,   771,
    1264,  1382,   253,  2049,  2301,  2443,  -683,   767,   328,  1932,
    -683,  1470,  2065,   557, -1877,  1404,  2547,  2548,   232,  1155,
    1947,  1809,  2290,  1951,  1934,   117,  -691,   454,  1358,   558,
      28,  1955,  1935,  1264,  1348,    52,   763,  2011,   187,  2291,
    1253,  2273,  2748,  2422,  1325,   188,   243,   191,  1408,  -517,
    2749,  1264,   192,  2117,  1180,  1181,  1325,  2332,   745,   137,
    1156,  1186,  2115,   253,  1782, -1877,   733,  -683,    18,   559,
    1579,   243,   137, -1779,   519,   763,     4,  -517,  2402,   189,
     766,  2311, -1556,    53,  2404,   752,  2195,   768,   233,  1157,
     767,  1803,  2349,  1754,  2407,   305,  1171,  2334,  2505,  1133,
    1948,   763,  2614,   690,  2195,  1305,  1573,  2209,  2192,   763,
    1487,  1556,     5,   137,   979, -1791,   980,  2336,  1348,   766,
    1807,    54,  1505,    55,  1973,    56,  2221,  2222,  1695,   767,
    2223,   -96,   467,    57,  2750,  1477,   137,    27,   137,   137,
     979,   154,   980,  1453,  2205,   766,  1658,  1976,  1363,  2066,
     137,   190,  1193,   766,  2676,   767,   193,   769,   137,  2638,
     139,   139,  1215,   767,  2445,  2651,  -517,  2446,  2447,   607,
     768,  2259,  1755,   520,  2553,  1882,  2260,  2643,  2263,  2263,
    2448,  2341,   154,   236,  1158,   986,   329,   468,   154,    58,
    1916,  1254,   187,  1255,  2463,  2464, -1875,  1936,    94,   188,
     589,   756,   770, -1660,   725,   560,   763,   191,  -683,   768,
    1454,   986,   192,  1197,   839,  2425,   561,     5,  1198,  2444,
    2269,  2691,  2271,  1620,  1883,  2692,  2712,  1949,   730,  1937,
    1289,   243,  2616,   757,  2536,   768,   306,     5,  2279,   763,
     769,  1290,   619,   768,  1207,   979,   330,   980,  2575,   189,
     766,  1938,   771,   856,  1809,  1252,   300,   763,  2494,  1272,
     767,  1268,   730,   252,  1020,  1364,  1272,  1307,  2408,  2044,
     226,  1979,   722,  1672,  1272,   316,  1008,  1326,   979,   769,
     980,    60,  1347,   766,  1354,   770,  1354,  1362,  1379,  1326,
    2314,  2611,  2350,   767,  2639,  1916,   979,  -517,   980,   735,
    2658,   766,  2520,    33,  1939,   769,  1354,  2144,  2570,  2663,
    1635,   767,  2644,   769,  1268,  2342,   986,   562,   563,   361,
     856,   190,   394,  1416,   770,    61,  1481,  1573,   730,   137,
   -1877,  1491,   564,   737,   565,   771,   317,   318,  1610,  2367,
     768,  2196,    36,   508,  1884,   510,  1636,  1983,   511,   986,
     770,   362,  1808,  1443,  2590, -1877,  2591,  2593,   770,  2196,
    2594,  2595,  2610, -1556,  1940,  1008,   154,   986,   137,   227,
    1031, -1556, -1556,   768,   771,   438, -1556,   191, -1106,  2037,
     405,   154,   192,  1578,  1252,   170,  1446,  1611,  2735,  2713,
    1917,   768,    52,   243,   137,   816,  1364,   416,  2248,   739,
     771,  2715,   137,   189,  1272,  2738,  2752,  1885,   771,  1824,
     769,  2714,  1825,  1871,    64,  2040,  1872,  1873,   566,  1826,
    1827,   439, -1106,  2716,  1488,  1841,  1842,  1843,  1844,   171,
   -1793,   406, -1106,   254,   817,   818,   819,   820,   821,   172,
      53,  1272,   515,   769, -1806,   155,  2348,   156,  2532,   763,
     441,  1648,  1272,  1332,   228,   770,  2040,    67,   442,  2201,
    1941,   769,  1427,  1197, -1791,   567,  1828,  1008,  1198,   325,
     634,   635,    94,  2482,  1927,   190,   118,  2483,    54, -1877,
      55,   516,    56,  2533,  2558,  2426,   255,    39,   770,  1642,
      57, -1877,  2307,   766,    40,  1917,  1362,  2697,   229,   137,
    2527,   344,  2306,   767, -1877,   771,   770,  1333,   230,  1272,
    2528, -1877, -1106,  1272,  2427,  1334,  1281,  2135,  2491,   173,
    2527,  1197,   231,  2559,  2233,    49,  1198,  2037,    48,    68,
    2528,   191,   137,   400,  2697,  1829,   192, -1877,   771,   154,
    2325,  2325,  2136,  1489,  2360,   351,    58,  2617,  1643,   139,
     137,  1644,    97,  1391,  1681,  1491,   771,  2496,  1685,  2497,
    2560,  1674, -1877,  1966,  1830,  1687,  1543,  1544,  2698,  2699,
      51,  2569,   243,   822,   823,   824,   825,   826,   827,   828,
     647,   648, -1106,   768,   139,  1831,    93,   298,   232,   174,
      94,  1007,  2539,  2540,   100,  2258,  2122,  2263,  2263,  1335,
    2545,   101,  2359,  2361,  2700,  1545,  1546,    59,  2664,  2666,
    1788,  2634,  2701,  1199,   154,  1824, -1594,    94,  1825,  2480,
    1452,  2323,  1200,  2237,  1452,  1826,  1827, -1106,  2726,  2303,
     137,  2194,   106,   800,   175,  1886,  2205,  2229,    60,  1832,
    2711,   471,   472,   473,   108,  2249,  2250,  2251,  2418,  1297,
     836,   836,   598,   769,  2304,   837,   837,   605,   233,  2723,
    2727,   234,   235,  1788,  1900,   155,   109,   156,  2613,  1984,
    1985, -1106,  1828,  2470,  1759,  1760,  2237, -1106,  1874,  1875,
    2728,  1694,    61,  2471,   176,    62,  1707,  1743,  1921,  1745,
     972,   114,  1833,    26,    13,   600, -1775,   601,   770,    13,
     110,   836,  1876,  1877,   112,  2472,   837,   973,  2252,  2546,
      47,  1252,  2746,  1946,   113,  1430,  1761,  1689,  1762,    91,
    1763,   243,   394,  1930,   829,  1197,   120,  1197,  1272,  2063,
    1198,  1788,  1198,  2362,  1931,  2473,   122,   830,  2363,   124,
    1928,  1829,  1252,  2073,  2667,  2532,  1511,  2702,   771,   428,
      63,  2237,  1834,   236,  1764,  1765,  1766,  2190,    21,    22,
     140,   474,  1438,  1439,  1440,  1835,   126,  1197,  1272,  1178,
    1830,    64,  1198,  1298,  1299,   475, -1877,    46,   137,   243,
    2668,  1007,  1007,  1007,   719,   142,   720,  2458,  1957,  2461,
    1300,  1831,  2573,  2574,  1788,   149,    65,  2527,    66,   974,
     975,   976,   162,  1007,  1767,   163,  1768,  2528,   977,  1663,
    2510,  1664,   164,  1769,    67,  1557,  1770,  1558,   139,   167,
    2642,  1870,   181,  2646,  1871,  2074,  2075,  1872,  1873,   185,
    1967,  2253,  2254,  1196,  2621,  1998,  2255,  1999,  2622,  2623,
    2009,  2067,  1197,  2068,  1301,  1832,   186,  1198,  1836,   242,
    2019,  2020,   204,  2004,  2023,  2685,  2686,   193,   476,  1690,
    2687,  2688,  2355,  1484,  2356,   981,   982,   983,  1197,  2237,
     477,   984,  2549,  1198,  2012,   247,  2550,  2551,   250,  1944,
     357,  1968,  1969,  1970,  2647,  2648,    68,  1974,  1436,  1437,
    1977,  1978,  2410,   248,  2411,   358,  1422,  1423,  1833,   137,
     249,  2466,  1771,  2467,  1772,   359,   273,   257,  1007,  2525,
     985,   269,  1761,  1273,  1762,  2661, -1572, -1572, -1572, -1572,
    1273,  1364,   278,  1272,  1187,   294,  1189,  1272,  1273,   296,
    1272,   154,   300,  1252,   302,  1981,  1982,   303,   307,   308,
     360,  1008,  1273,   309,   313,   312,  1995,  1519,  1520,  1521,
    1522,   326,   333,  2000, -1571, -1571, -1571, -1571,  1834,  1005,
     334,   478,   734,   736,   738,   740,  1007,   336,   428,  2124,
     338,  1835,   340,  1007,  1007,  1007,  1426,   342,   349,   351,
     353,  1426,  2013,  1272,   987,   354,  1007,  1007,  1007,  1007,
    1007,  1007,  1007,  1007,   356,  1426,  1007,  2299,   397,   392,
     398,   394,   401,   403,   408,   187,   409,   243,   421,   420,
     422,  2669,   429,   413,   455,  2670,  2671,   458,   456,   484,
    2169,   460,  -352,   487,   490,  1469,   495,   502,   494,  2169,
    1921,   509,  1272,  1272,  1272,   988,   989,   523,   524,   522,
     528,  2057,  2145,  2146,  2147,  2148,  2149,  2150,  2151,  2152,
     534,   545,   550,   549,  1836,   551,  2672,   553,  1273,  -365,
    2064,   554,   556,   580,   592,   591,  2069,   582,   593,   609,
     611,   617,  2673,  2674,   621,   618,   622,   693,   993,   695,
     724,   698,   706,   741,   743,   750,   776,   779,   760,  1874,
    1875,  1272,   783,   792,  1773,  1273,   361,   785,   994,   796,
     795,   798,   803,   995,   800,   808,  1273,   814,   810,   840,
     996,   847,   137,  1876,  1877,   853, -1662,   139,   967,   970,
    1012,  1018,  1034,  1017,  1021,  1042,  1143,  1162,   362,  2191,
    1170,  1173,  1326,  1039,  1175,  1201,  1226,  1326,  -234,  1182,
    1213,  1287,  2215,  1409,  1774,  1217,  1183,  1411,  1184,  1005,
    1005,  1005,  1418,  1419,  1628,  1775,  1326,  1326,  1308,  1444,
    1326,  1185,  1190,  1273,  1219,  1202,  1204,  1273,  1227,  1205,
    1429,  1005,  1445,  1446,  1459,  1465,  1471,  1506,  1480,  1494,
    1500,  1482,  1272,   441,  1571,  1509,  1575,  1523,  2124,  1529,
    1591,   363,  1527,  1592,  1594,  1588,   364,  2309, -1574,  2264,
    2264,  1326,  2189,  1596,  1605,  1606,  1326,  1326,  1326,  1607,
    1608,  1613,  1615,  1624,  1618,  1272,  1622,  1272,  1638,  1640,
    2193,  1364,  1220,  1650,  1662,  2689,  1655,   365,  1666,  1668,
    1670,  1675,  1696,  1682,  1683,   366,  1684,  1686,  1688,  2210,
    1746,  2212,  1691,  1693,  1698,  2213,  1747,  1749,   367,  1783,
    1752,  1793,  1628,  2218,  1272,  1791,  1272,  2650,  1790,  1246,
    1795,  1805,  1809,  1816,  1789,  1822,  1839,  1511,  1867,  1880,
    1856,  1581,  1859,  1895,  1231,  1903,  1245,   368,  1922,  1261,
     369,  1926,  1918,  1284,  1933,  1953,  2373,  1960,   370,  2374,
    1007,  1988,  2375,  2002,  2005,  2008,  2015,  2017,  1320,  -231,
    2376,  2024,  2014,  2032,  1346,  2027,  2033,  2028,  1754,  1272,
    2031,  2034, -1544,  2046,  2050,  2054,  2055,  1789,  2059,  1461,
    2085,  2078,  1326,  2080,  2086,  1402,   139,  1406,   371,  2092,
    2093,   372,  2100,  2096,  1005,  2099,  2119,  2125,  2353,  2127,
    2128,  1005,  1005,  1005,  1425,  2131,  2377,  2138,  2298,  1425,
    2139,  2165,  2172,   428,  1005,  1005,  1005,  1005,  1005,  1005,
    1005,  1005,  2173,  1425,  1005,  2378,  2174,  2175,  2184,  2186,
   -1593,  1628,  2219,  2292,  2225,  2266,  2283,  2289,  2231,  1007,
    2295,  2311,  1273,  2313,  2300,  1789,  2327,  2330,  2335,  2337,
    2339,  2372,  1467,  2040,  2405, -1549, -1591,  2415,  2417,  2420,
    2435,   428,  2436,  2437,  2449,  1272,  2438,  1272,  2454,  2459,
    1008,  1008,  2488,  2491,  2342,  2498,  1346,  2499,  1261,  2501,
    2504,  2517,  1273,  2518,  2519,  2538,  2523,  2555,  2575,  2554,
    2612,  2620,  2624,  2626,  2619,   139,  2631,  2653,  1272,  2632,
    2659,  2683,  1008,  2684,  2379,  2662,  2731,  2432,  1789,  2724,
    2737,  2652,  2380,  1628,  2741,    17,  2739,    92,    38,   125,
     166,  1008,   256,   266,   209,  2381,   119,   277,   290,  1272,
     210,   241,   713,   443,   581,   547,  1426,   586,  2121,   538,
     323,  1007,   527,   457,  1214,  1735,  2734,   804,  1673,   139,
    2113,   852,  1964,  2203,  2351,  1038,  2368,  2382,  2369,  2274,
    1346,  2469,  1016,  1326,  1225,  2021,  1463,  1326,  2077,   965,
    2493,  2487,  2022,  2048,  1008,  1798,  2272,  2383,  1479,  2384,
    1799,  1814,  1627,  2413,  1849,  1857,  2089,  2278,  1572,  1879,
    1891,  2101,  2294,  1595,  2419,  1899,  1598,  2129,  2305,  2302,
    1925,  2385,  2386,  2183,  2316,  2153,  1629,  1630,  1654,  1380,
    2326,  1653,  1272,  2181,  1272,  2457,  2182,  2730,  1628,  1963,
    2514,  2462,  1863,  2465,  2319,  1621,  2451,  2320,  1797,  2321,
    2509,   332,  2387,  2322,   213,  2143,  1485,  1273,   778,  2001,
     310,  1273,   293,   616,  1273,  1191,   812,  2618,   448,   272,
    2503,  2167,   489,  2288,   541,  2112,  2677,  1894,   603,  2388,
     428,   789,     0,     0,     0,     0,  1003,     0,     0,     0,
    2485,     0,     0,     0,     0,  2486,     0,     0,  2264,  2264,
    1627,     0,  1326,  1326,     0,  2389,  1326,  1326,     0,  1326,
       0,     0,  2390,     0,     0,     0,     0,  1273,     0,     0,
       0,     0,     0,     0,     0,  2391,     0,     0,     0,  2392,
       0,     0,     0,     0,     0,     0,     0,     0,  1005,  -894,
       0,     0,  -894,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2511,     0,     0,     0,     0,     0,
    1628,  1628,     0,     0,     0,     0,  1273,  1273,  1273,  1252,
    2393,     0,     0,     0,     0,     0,     0,     0,     0,  2394,
       0,     0,  1220,     0,     0,     0,     0,  2530,  2531,     0,
    2630,     0,     0,     0,     0,     0,     0,  1628,     0,     0,
       0,     0,     0,     0,  2541,     0,     0,     0,  2395,     0,
       0,     0,     0,     0,     0,     0,  -894,     0,  2396,  1627,
    2552, -1779,     0,     0,  2397,  1273,     0,  1005,     0,     0,
       0,     0,  1252,  -894,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1908,     0,  2572,     0,     0,     0,     0,
    2576,  2577,  1915,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1924,     0,     0,   632,     0,     0,  2705,
    2615,     0,     0,     0,     0,  1252,  1003,  1003,  1003,     0,
       0,     0,     0,     0,     0,     0,  1714,  1761,  1715,  1762,
       0,  1952,     0,     0,     0,     0,     0,     0,  1003,     0,
    2633,  1627,     0,  2635,  2636,     0,     0,     0,     0,     0,
    2732,  2733,  1252,     0,     0,     0,  1273,     0,     0,     0,
       0,     0,     0,     0,  1425,  -894,  -894,  -894,     0,  1005,
       0,     0,     0,     0,  -894,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2660,  -894,  2740,  1994,     0,  1273,
    2753,  1273,     0,     0,     0,     0,     0,  1915,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2006,
       0,  1628,  2007,     0,     0,     0,     0,     0,  -894,  1628,
       0,     0,     0,     0,  -894,     0,  -894,     0,  1273,  -894,
    1273,  -894,  -894,  -894,     0,     0,     0,  -894,     0,  -894,
       0,     0,  1237,  1003,  -894,     0,  1627,     0,     0,     0,
    1237,  1237,     0,     0,     0,     0,     0,     0,     0,     0,
    1237,     0,  2038,     0,     0,     0,     0,  1237,  1237,     0,
    2578,     0,     0,     0,     0,  1007,  -894,     0,     0,     0,
       0,  -894,     0,  1273,     0,     0,  1237,  1237,     0,  1628,
       0,     0,     0,     0,     0,  -894,   650,     0,     0,     0,
       0,  1003,     0,     0,     0,     0,     0,     0,  1003,  1003,
    1003,     0,     0,  2579,     0,     0,     0,     0,     0,  -894,
       0,  1003,  1003,  1003,  1003,  1003,  1003,  1003,  1003,     0,
   -1779,  1003,     0,     0,     0,     0,     0,     0,     0,   761,
       0,     0,     0,     0,     0,     0,  2580,     0,     0,     0,
    -894,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1237,     0,  2581,     0,  1627,  1627,
    2582,     0,     0,     0,     0,     0,     0,     0,     0,  1273,
       0,  1273,     0,  -894,     0,     0,     0,     0,   654,  -894,
       0,     0,     0,     0,  2583,     0,     0,  2130,     0,     0,
       0,  -894,  -894,     0,     0,  1627,     0,  1237,     0,     0,
       0,     0,  1273,   972,     0,     0,     0,     0,     0,     0,
       0,     0,  1237,     0,     0,     0,     0,     0,     0,     0,
     973,     0,  2170,     0,  -894,     0,     0,     0,     0,  2180,
    2180,     0,     0,  1273,  -894,   863,     0,   864,     0,   865,
    -894,     0,     0,  1237,   866,     0,     0,     0,     0,     0,
    1261,     0,   867,     0,  -894,  2199,   659,     0,     0,  -894,
    1994,  1994, -1779,     0,     0,  2584,  -894,     0,  -894,     0,
       0,     0,     0,     0,  -894,     0,     0,     0,     0,     0,
       0,     0,  2585,     0,     0,   868,   869,     0,     0,     0,
       0,     0,     0,     0,     0,   870,     0,     0,     0,     0,
       0,     0,  1237,  2586,     0,     0,   871,  1237,     0,   872,
       0,     0,   974,   975,   976,  2236,  1273,     0,  1273,     0,
       0,   977,     0,   873,  2587,     0,     0,     0,     0,     0,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2588,     0,     0,   874,     0,     0,     0,
     668,  2589,     0,     0,   875,     0,   876,     0,     0,  2281,
       0,     0,     0,     0,     0,     0,     0,     0,  2236,  1627,
       0,     0,     0,     0,     0,     0,   766,  1627,   981,   982,
     983,     0,     0,     0,   984,     0,   767,   877,     0,  1785,
       0,     0,     0,     0,     0,     0,  1908,     0,   878,     0,
       0,     0,     0,   879,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1003,     0,     0,     0,     0,
       0,     0,     0,   985,     0,  2318,     0,     0,  1237,   880,
       0,     0,     0,  1005,     0,     0,   881,     0,     0,   882,
     883,  1237,  1785,  2236,     0,     0,     0,  1627,     0,   884,
       0,     0,     0,     0,     0,     0,   885,     0,   886,   972,
       0,   887,     0,     0,     0,     0,   768,     0,     0,     0,
       0,     0,  1994,     0,     0,     0,   973,     0,     0,  1237,
       0,  1261,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   987,     0,     0,
       0,     0,     0,   888,  1003,     0,     0,   889,     0,   890,
    1785,     0,     0,     0,     0,     0,  2409,     0,     0,   891,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1007,  1007,   769,     0,     0,     0,
       0,     0,     0,     0,     0,   892,     0,     0,   988,   989,
       0,  1237,     0,     0,     0,     0,     0,     0,   893,     0,
       0,  2236,  1237,     0,     0,  1237,  1007,     0,   974,   975,
     976,     0,     0,  1785,     0,     0,     0,   977,     0,     0,
       0,   770,     0,   894,   895,  1007,     0,     0,   763,     0,
       0,   993,     0,     0,   896,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1003,     0,   897,   898,
       0,   994,     0,     0,     0,   899,   995,     0,     0,   900,
       0,     0,     0,   996,     0,   137,  2199,   901,     0,     0,
       0,   771,   766,     0,   981,   982,   983,   902,  1007,     0,
     984,     0,   767,     0,     0,     0,   903,     0,     0,     0,
       0,     0,     0,     0,     0,   904,     0,     0,     0,     0,
     905,   906,     0,     0,   907,     0,   908,     0,     0,     0,
       0,     0,     0,   909,     0,     0,     0,  2495,     0,   985,
       0,     0,     0,     0,     0,     0,   910,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   911,     0,     0,     0,     0,     0,
     912,     0,     0,     0,     0,   913,     0,     0,     0,     0,
    2521,     0,   768,     0,     0,     0,     0,  2524,     0,     0,
    2526,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   914,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   987,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2556,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   769,     0,  2571,     0,     0,     0,     0,  2199,
    2199,     0,     0,     0,   988,   989,     0,     0,     0,     0,
    1261,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   770,     0,     0,
       0,  2199,     0,     0,     0,  2199,  2199,   993,     0,  1237,
       0,     0,     0,     0,     0,     0,     0,     0,  2637,     0,
       0,     0,     0,     0,     0,     0,     0,   994,     0,     0,
       0,     0,   995,     0,     0,     0,     0,     0,     0,   996,
       0,   137,     0,     0,     0,     0,     0,   771,     0,     0,
       0,   863,     0,   864,     0,   865,     0,     0,     0,     0,
     866,     0,  1005,  1005,     0,     0,     0,     0,   867,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2690,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1005,     0,     0,     0,     0,     0,
       0,   868,   869,     0,     0,     0,  2719,  2722,     0,     0,
       0,   870,     0,  1005,     0,     0,     0,     0,     0,     0,
       0,     0,   871,     0,     0,   872,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2736,   873,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   874,     0,  2745,     0,  1005,     0,     0,     0,
     875,     0,   876,     0,     0,     0,     0,     0,     0,  -730,
       0,  -730,  -730,  -730,  -730,  -730,  -730,  -730,  -730,     0,
    -730,  -730,  -730,     0,  -730,  -730,  -730,  -730,  -730,  -730,
    -730,  -730,  -730,   877,  1237,     0,     0,   863,     0,   864,
       0,   865,     0,     0,   878,     0,   866,     0,     0,   879,
       0,     0,     0,     0,   867,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1003,     0,  1237,  1237,     0,   880,     0,     0,     0,     0,
       0,     0,   881,     0,     0,   882,   883,   868,   869,     0,
       0,     0,     0,     0,     0,   884,     0,   870,     0,     0,
       0,     0,   885,     0,   886,     0,     0,   887,   871,     0,
       0,   872,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   873,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   874,   888,
       0,     0,     0,   889,     0,   890,   875,     0,   876,     0,
       0,     0,     0,     0,     0,   891,     0,     0,     0,     0,
       0,  -730,  -730,     0,  -730,  -730,  -730,  -730,     0,     0,
    1237,     0,     0,     0,     0,     0,     0,     0,     0,   877,
       0,   892,     0,     0,     0,     0,     0,     0,     0,     0,
     878,     0,     0,     0,   893,   879,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   894,
     895,   880,     0,     0,     0,     0,     0,     0,   881,     0,
     896,   882,   883,     0,     0,     0,     0,     0,     0,     0,
       0,   884,     0,     0,   897,   898,     0,     0,   885,     0,
     886,   899,     0,   887,     0,   900,     0,     0,     0,     0,
       0,     0,     0,   901,     0,     0,     0,     0,   863,     0,
     864,     0,   865,   902,     0,     0,     0,   866,     0,     0,
       0,     0,   903,     0,     0,   867,     0,     0,     0,     0,
       0,   904,     0,     0,     0,   888,   905,   906,     0,   889,
     907,   890,   908,     0,     0,     0,     0,     0,     0,   909,
       0,   891,     0,     0,     0,     0,     0,     0,   868,   869,
       0,     0,  -730,     0,     0,     0,     0,     0,   870,     0,
       0,     0,  1237,     0,     0,     0,     0,   892,     0,   871,
     911,     0,   872,     0,     0,     0,   912,     0,     0,     0,
     893,   913,     0,     0,     0,     0,   873,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -730,     0,     0,   894,   895,     0,   914,   874,
       0,     0,     0,     0,     0,     0,   896,   875,     0,   876,
       0,     0,     0,     0,  1237,     0,     0,     0,  1237,  1237,
     897,   898,     0,     0,     0,     0,     0,   899,     0,     0,
       0,   900,     0,     0,     0,     0,     0,     0,     0,   901,
     877,     0,     0,     0,     0,     0,     0,     0,     0,   902,
       0,   878,     0,     0,     0,     0,   879,     0,   903,     0,
       0,     0,     0,     0,     0,     0,     0,   904,     0,     0,
       0,     0,   905,   906,     0,     0,   907,     0,   908,     0,
       0,     0,   880,     0,     0,   909,     0,     0,     0,   881,
       0,     0,   882,   883,     0,     0,     0,     0,  1661,     0,
       0,     0,   884,     0,     0,     0,     0,     0,     0,   885,
       0,   886,     0,     0,   887,     0,   911,     0,     0,     0,
       0,     0,   912,     0,     0,     0,     0,   913,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1003,
    1003,     0,     0,     0,   914,     0,   888,     0,     0,     0,
     889,     0,   890,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   891,     0,     0,     0,     0,     0,     0,     0,
       0,  1003,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   892,     0,
    1003,  1044,     0,  1045,     0,     0,     0,     0,  1046,     0,
       0,   893,     0,     0,     0,     0,  1047,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   894,   895,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   896,     0,  1048,
    1049,     0,     0,  1003,     0,     0,     0,     0,     0,  1050,
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
       0,     0,  1079,   912,     0,     0,     0,  1080,   913,   972,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   973,     0,     0,     0,
       0,     0,     0,  1081,     0,   914,     0,     0,     0,     0,
    1082,     0,     0,  1083,  1084,     0,     0,     0,     0,     0,
       0,     0,     0,  1085,     0,     0,     0,     0,     0,     0,
    1086,     0,  1087,     0,     0,  1088,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1232,     0,
       0,   761,     0,     0,  1537,  1538,  1539,  1089,     0,     0,
       0,  1090,  1540,  1091,     0,     0,     0,  1338,   974,   975,
     976,     0,     0,  1092,     0,     0,     0,   977,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1093,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1094,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   972,     0,     0,     0,     0,
       0,     0,  1339,     0,   981,   982,   983,  1095,     0,     0,
     984,     0,   973,     0,     0,     0,     0,     0,  1096,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1097,     0,     0,     0,     0,     0,  1098,
       0,     0,     0,  1099,     0,     0,     0,     0,     0,   985,
       0,  1100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1101,     0,     0,     0,     0,     0,     0,     0,     0,
    1102,     0,  1541,     0,     0,     0,     0,     0,     0,  1103,
       0,     0,  1542,     0,  1104,  1105,     0,     0,  1106,     0,
    1107,     0,     0,     0,     0,     0,     0,  1108,     0,     0,
       0,     0,     0,     0,   974,   975,   976,     0,     0,     0,
    1109,     0,     0,   977,     0,     0,     0,     0,     0,  1543,
    1544,     0,     0,   987,   763,     0,     0,     0,  1110,     0,
       0,     0,     0,     0,  1111,     0,     0,     0,     0,  1112,
       0,     0,     0,     0,  1862,     0,     0,  1232,     0,     0,
     761,     0,     0,  1537,  1538,  1539,     0,  1234,  1545,  1546,
       0,  1540,     0,   979,     0,   980,  1113,     0,   766,     0,
     981,   982,   983,     0,   988,   989,   984,     0,   767,     0,
       0,     0,     0,  1235,     0,     0, -1877,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1547,     0,     0,     0,
       0,     0,  1548,     0,     0,  1549,     0,     0,     0,     0,
       0,     0,     0,  1550,     0,   985,     0,   993,     0,     0,
    1551,     0,     0,     0,   972,  1552,     0,     0, -1159,     0,
       0,     0,  1232,     0,   986,   761,     0,   994,     0,     0,
       0,   973,   995,     0,  1553,     0, -1159,     0,     0,   996,
     243,   137,     0,     0,     0,     0,     0,     0,   768,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   987,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1541,     0,     0,     0,     0,     0,     0,     0,   972,
       0,  1542,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   973,     0,   769,     0,
       0,     0,     0,   974,   975,   976,     0,     0,     0,     0,
     988,   989,   977,     0,     0,     0,     0,     0,  1543,  1544,
       0,     0,     0,   763,     0,     0,     0,     0,     0,     0,
       0,  1554,     0,  1555,     0,  1556,     0,     0,  1557,     0,
    1558,  1559,  1560,   770,     0,  1561,  1562,     0,     0,  1929,
       0,     0,     0,   993,     0,     0,  1234,  1545,  1546,     0,
       0,     0,   979,     0,   980,     0,     0,   766,     0,   981,
     982,   983,     0,   994,     0,   984,     0,   767,   995,     0,
       0,     0,  1235,     0,     0,   996,     0,   137,   974,   975,
     976,     0,     0,   771,     0,  1547,     0,   977,     0,     0,
       0,  1548,     0,     0,  1549,     0,     0,     0,   763,     0,
       0,     0,  1550,     0,   985,     0,     0,     0,     0,  1551,
       0,     0,     0,  1232,  1552,     0,   761,     0,     0,     0,
       0,     0,     0,   986,     0,     0,     0,     0,     0,     0,
       0,  1234,     0,  1553,     0,     0,     0,   979,     0,   980,
       0,     0,   766,     0,   981,   982,   983,   768,     0,     0,
     984,     0,   767,     0,     0,     0,     0,  1235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   985,
     972,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   973,   986,     0,
       0,     0,     0,     0,     0,     0,  1232,   769,     0,   761,
    1384,     0,     0,     0,     0,     0,     0,     0,     0,   988,
     989,     0,   768,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1232,     0,     0,   761,     0,     0,
    1554,     0,  1555,     0,  1556,     0,     0,  1557,     0,  1558,
    1559,  1560,   770,   987,  1561,  1562,     0,     0,     0,     0,
       0,     0,   993,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   994,   972,     0,     0,     0,   995,     0,   974,
     975,   976,   769,     0,   996,  1233,   137,     0,   977,     0,
     973,     0,   771,     0,   988,   989,     0,     0,     0,   763,
       0,   972,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1327,     0,  1652,     0,     0,   973,     0,
    1930,     0,     0,     0,     0,     0,     0,   770,     0,     0,
       0,  1931,  1234,     0,     0,     0,     0,   993,   979,     0,
     980,     0,     0,   766,     0,   981,   982,   983,     0,     0,
       0,   984,     0,   767,     0,     0,     0,   994,  1235,     0,
       0,     0,   995,     0,     0,     0,     0,     0,     0,   996,
       0,   137,     0,     0,     0,     0,     0,   771,     0,     0,
       0,     0,   974,   975,   976,     0,     0,     0,     0,     0,
     985,   977,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   763,     0,     0,     0,     0,     0,     0,   986,
     974,   975,   976,     0,     0,  1232,     0,     0,   761,   977,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,   768,     0,  1234,     0,     0,     0,     0,
       0,   979,     0,   980,     0,     0,   766,     0,   981,   982,
     983,     0,     0,     0,   984,     0,   767,     0,     0,     0,
       0,  1235,     0,  1234,   987,     0,     0,     0,     0,   979,
       0,   980,     0,     0,   766,     0,   981,   982,   983,     0,
       0,     0,   984,     0,   767,     0,     0,     0,     0,  1235,
       0,     0,   972,   985,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   769,     0,     0,     0,     0,     0,   973,
       0,  1232,   986,     0,   761,   988,   989,     0,     0,     0,
       0,   985,  1384,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   768,     0,  1232,     0,
     986,   761,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   993,     0,
       0,     0,     0,     0,   768,     0,     0,   987,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   994,     0,
       0,     0,     0,   995,     0,     0,     0,     0,   972,     0,
     996,     0,   137,     0,     0,   987,     0,     0,   771,     0,
    1389,   974,   975,   976,     0,   973,   769,     0,     0,     0,
     977,     0,     0,     0,     0,   972,     0,     0,   988,   989,
       0,   763,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   973,     0,   769,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   988,   989,     0,     0,
       0,   770,     0,     0,  1234,     0,     0,     0,     0,     0,
     979,   993,   980,     0,     0,   766,     0,   981,   982,   983,
       0,     0,     0,   984,     0,   767,     0,     0,     0,   770,
    1235,   994,     0,     0,     0,     0,   995,     0,     0,   993,
       0,     0,     0,   996,     0,   137,     0,   974,   975,   976,
       0,   771,     0,     0,     0,     0,   977,     0,     0,   994,
       0,     0,   985,     0,   995,     0,     0,   763,     0,     0,
       0,   996,     0,   137,   974,   975,   976,     0,     0,   771,
       0,   986,     0,   977,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,     0,     0,     0,
    1234,     0,     0,     0,     0,   768,   979,     0,   980,  -950,
       0,   766,  -950,   981,   982,   983,     0,     0,     0,   984,
       0,   767,     0,     0,     0,     0,  1235,  1234,     0,     0,
       0,     0,     0,   979,     0,   980,   987,     0,   766,     0,
     981,   982,   983,     0,     0,     0,   984,     0,   767,     0,
       0,     0,     0,  1235,     0,     0,     0,     0,   985,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   769,     0,   986,     0,     0,
       0,     0,     0,     0,     0,   985,  -950,   988,   989,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   768,     0,  -950,   986,     0,     0,     0,  1232,     0,
       0,   761,     0,     0,     0,     0,     0,     0,     0,     0,
     770,     0,     0,     0,     0,     0,     0,     0,   768,     0,
     993,  1232,   987,     0,   761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     994,     0,     0,     0,     0,   995,     0,     0,     0,   987,
       0,     0,   996,     0,   137,     0,     0,     0,     0,  1511,
     771,   769,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,   989,   972,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -950,  -950,  -950,   769,     0,
       0,     0,   973,     0,  -950,     0,     0,     0,   972,     0,
     988,   989,     0,     0,     0,  -950,   770,     0,     0,     0,
       0,     0,     0,     0,     0,   973,   993,     0,  1232,  1473,
       0,   761,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   770,     0,     0,   994,     0,  -950,     0,
       0,   995,     0,   993,  -950,     0,  -950,     0,   996,  -950,
     137,  -950,  -950,  -950,     0,     0,   771,  -950,     0,  -950,
       0,     0,     0,   994,  -950,     0,     0,     0,   995,     0,
       0,     0,     0,     0,     0,   996,     0,   137,     0,     0,
       0,     0,     0,   771,   974,   975,   976,     0,     0,     0,
       0,     0,     0,   977,     0,   972,  -950,     0,     0,     0,
       0,     0,     0,     0,   763,     0,     0,   974,   975,   976,
       0,  1657,   973,     0,     0,  -950,   977,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1234,     0,  -950,
       0,     0,     0,   979,     0,   980,     0,     0,   766,     0,
     981,   982,   983,     0,     0,     0,   984,     0,   767,     0,
    1234,     0,     0,  1235,     0,     0,   979,     0,   980,     0,
    -950,   766,     0,   981,   982,   983,     0,     0,     0,   984,
       0,   767,     0,     0,     0,  1232,  1235,     0,   761,     0,
       0,     0,     0,     0,     0,   985,     0,     0,     0,     0,
       0,     0,     0,     0,   974,   975,   976,     0,     0,  -950,
       0,     0,     0,   977,   986,     0,     0,     0,   985,     0,
       0,  -950,  -950,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   986,   768,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -950,     0,     0,  1234,     0,     0,
       0,   768,   972,   979,  -950,   980,     0,     0,   766,   987,
     981,   982,   983,     0,     0,     0,   984,     0,   767,   973,
       0,     0,     0,  1235,  -950,     0,     0,     0,     0,  -950,
    1232,     0,   987,   761,     0,     0,  -950,     0,  -950,     0,
       0,     0,     0,     0,  -950,     0,     0,     0,   769,     0,
       0,     0,     0,     0,     0,   985,     0,     0,     0,     0,
     988,   989,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   769,     0,     0,   986,     0,     0,     0,     0,     0,
       0,     0,     0,   988,   989,     0,     0,     0,     0,     0,
       0,     0,     0,   770,     0,     0,     0,     0,   768,     0,
       0,     0,     0,   993,     0,     0,     0,   972,     0,     0,
       0,   974,   975,   976,     0,     0,   770,  1515,     0,     0,
     977,     0,     0,   994,   973,     0,   993,     0,   995,   987,
       0,   763,     0,     0,     0,   996,     0,   137,     0,     0,
       0,     0,     0,   771,     0,     0,   994,     0,     0,     0,
       0,   995,     0,     0,     0,     0,     0,     0,   996,     0,
     137,     0,  1950,     0,  1234,     0,   771,     0,   769,     0,
     979,     0,   980,  1784,     0,  1277,   761,   981,   982,   983,
     988,   989,     0,   984,     0,   767,     0,     0,     0,     0,
    1235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   770,     0,     0,   974,   975,   976,     0,
       0,     0,   985,   993,     0,   977,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
       0,   986,     0,   994,     0,     0,     0,     0,   995,     0,
     972,     0,     0,     0,     0,   996,     0,   137,     0,     0,
       0,     0,     0,   771,     0,   768,     0,   973,     0,  1234,
       0,     0,     0,     0,     0,   979,     0,   980,     0,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,     0,
     767,     0,     0,     0,     0,  1235,   987,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   985,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,   988,   989,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   974,
     975,   976,     0,     0,     0,     0,     0,     0,   977,     0,
     768,     0,     0,     0,     0,     0,     0,     0,     0,   763,
     770,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     993,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   987,     0,     0,     0,     0,     0,     0,     0,     0,
     994,     0,  1234,     0,     0,   995,     0,     0,   979,     0,
     980,     0,   996,   766,   137,   981,   982,   983,   972,     0,
     771,   984,     0,   767,     0,     0,     0,     0,  1235,     0,
     769,     0,     0,     0,     0,   973,     0,     0,     0,     0,
       0,     0,   988,   989,     0,     0,   972,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     985,     0,     0,   973,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   770,     0,     0,     0,   986,
       0,     0,     0,     0,     0,   993,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1036,     0,   768,     0,   994,     0,     0,     0,     0,
     995,     0,     0,     0,     0,     0,     0,   996,     0,   137,
       0,     0,     0,     0,     0,   771,  1338,   974,   975,   976,
       0,     0,  -362,     0,   987,  -362,   977,     0,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,   974,   975,   976,     0,     0,
       0,     0,     0,     0,   977,  -362,     0,  -362,     0,     0,
       0,     0,     0,   769,  -362,   763,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,     0,     0,   988,   989,     0,     0,     0,
       0,  1484,     0,   981,   982,   983,     0,     0,     0,   984,
       0,     0,     0,     0,     0,     0,     0,     0,   978,     0,
       0,     0,     0,     0,   979,     0,   980,     0,   770,   766,
    -362,   981,   982,   983,     0,     0,     0,   984,   993,   767,
       0,     0,     0,     0,     0,     0,     0,     0,   985,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   994,     0,
       0,     0,     0,   995,     0,     0,     0,     0,     0,     0,
     996,  -362,   137,     0,     0,     0,   985,     0,   771,     0,
       0,     0,     0,     0,     0,     0,   530,     0,     0,  -362,
    -362,  -362,  -362,  -362,     0,   986,  -362,  -362,     0,     0,
    -362,     0,     0,     0,     0,     0,  -362,     0,  -362,     0,
       0,     0,     0,     0,  -362,     0,     0,     0,     0,   768,
       0,  -362,   987,     0,     0,     0,     0,     0,     0,  -362,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,  -362,  2708,     0,     0,     0,
     987,  -362,     0,  -362,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   988,   989,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0, -1877,     0,  -362,     0,   769,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   988,   989,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,   993,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0, -1159,  -362,  -362,
       0,     0,     0,     0,   770,     0,   994,  -362,     0,     0,
    -362,   995,     0,     0,   993, -1159,     0,     0,   996,   243,
     137,   529,     0,  -362,     0,  -362,     0,     0,  2709,     0,
       0,     0,     0,     0,   994,     0,     0,     0,     0,   995,
       0,  -362,     0,     0,     0,     0,   996,     0,   137,     0,
       0,  -362,     0,     0,   771,     0,  -362,     0,  -362,  -362,
    -362,  -362,  -362,  -362,  -362,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,  -362,  -362,  -362,
       0,     0,     0,     0,  -362,     0,  -362,  -362,  -362,  -362,
    -362,  -362,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -362,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,  -362,     0,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,  -362,
       0,     0,     0,     0,  -362,     0,     0,     0,  -362,  -362,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,     0,  -362,  -362,
       0,   972,     0,     0,     0,   531,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,   530,     0,   973,  -362,
    -362,  -362,  -362,  -362,     0,     0,  -362,  -362,     0,     0,
       0,     0,   624,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -362,     0,     0,   625,     0,     0,
     626,   627,   628,   629,   630,   631,   632,     0,     0,  -362,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,  -362,     0,     0,     0,     0,
       0,  -362,     0,     0,     0,   633,     0,   634,   635,   636,
     637,   638,   639,   640,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     974,   975,   976,     0,     0,     0,     0,  -362,     0,   977,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,   641,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -362,
       0,     0,     0,   978,     0,     0,     0,  -362,     0,   979,
    -362,   980,     0,     0,   766,     0,   981,   982,   983,     0,
       0,     0,   984,  -362,   767,     0,     0,     0,     0,     0,
     642,   643,   644,   645,   646,  -362,     0,   647,   648,     0,
       0,     0,     0,  -362,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   985,     0,     0,     0,     0,     0,     0,     0,     0,
     649,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     986,     0,     0,    94,     0,  -362,   650,  -362,  -362,  -362,
       0,     0, -1853,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   768,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -362,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   651,     0,
       0,     0,  -362,     0,     0,   987,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -362,
       0,     0,     0,     0,     0,     0,   652,     0,  -362,  -362,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     653,     0,  -362,     0,   769,     0,     0,     0,   654,  -362,
       0,   655,     0,     0,     0,   531,   988,   989,     0,     0,
    1709,     0,     0,  1710,   656,     0,  1711,   626,   627,   628,
     629,   630,   631,  1712,  1713,     0,   657,  1415,     0,     0,
       0,     0,     0,     0,   658,     0,     0,   990,     0,   770,
       0,   991,   992,  1714,     0,  1715,     0,     0,     0,   993,
       0,     0,   633,     0,   634,   635,   636,   637,   638,   639,
     640,     0,     0,     0,     0,     0,     0,     0,     0,   994,
       0,     0,     0,     0,   995,     0,   659,     0,   660,   661,
     662,   996,     0,   137,     0,     0,     0,     0,     0,   771,
       0,   626,   627,   628,   629,   630,   631,     0,   641,     0,
       0,     0,     0,     0,     0,   663,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -359,     0,     0,   633,     0,   634,   635,
     636,   637,   638,   639,   640,     0,     0,     0,     0,  1716,
   -1853,     0,     0,     0,     0,     0,     0,     0,     0,   664,
     665,   666,     0,     0,     0,     0,     0,   642,   643,   644,
     645,   646,     0,   667,   647,   648,     0,     0,  1717,   972,
     668,     0,   641,     0,  1718,     0,  1719,     0,     0,     0,
       0,     0, -1806,     0,     0,     0,   973,     0,     0,  1720,
       0,     0,     0,     0,     0,     0,     0,   649,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,   650,     0,     0,     0,     0,     0,     0,
       0,  1721,     0,     0,     0,     0,     0,     0,     0,     0,
    1722,   642,   643,   644,   645,   646,     0,     0,   647,   648,
       0,     0,     0,  1723,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   651,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   649,     0,     0,     0,     0,     0,     0,   974,   975,
     976,     0,     0,  1724,     0,     0,     0,   977,     0,     0,
       0,     0,     0,     0,     0,     0,  1725,   653,   763,     0,
       0,     0,     0,     0,     0,   654,     0,     0,   655,     0,
       0,     0,     0,   972,     0,     0,     0,     0,     0,     0,
       0,   656,     0,  1726,     0,     0,     0,     0,     0,   651,
     973,   978,     0,     0,     0,     0,   972,   979,     0,   980,
       0,     0,   766,     0,   981,   982,   983,     0,     0,  1727,
     984,     0,   767,   973,     0,     0,  1728,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   653,     0,  1729,     0,     0,     0,     0,     0,     0,
       0,     0,   655,   659,     0,   660,   661,   662,     0,   985,
       0,     0,     0,     0,     0,   656,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   986,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   974,   975,   976,  1730,     0,     0,     0,     0,
    -633,   977,   768,   972,     0,  1731,     0,     0,     0,     0,
       0,     0,   763,     0,     0,   974,   975,   976,     0,     0,
     973,     0,  1732,     0,   977,     0,   664,   665,   666,   660,
     661,   662,     0,   987,     0,   763,     0,     0,     0,     0,
     667,     0,     0,     0,     0,   978,  1733,   668,     0,     0,
       0,   979,     0,   980,     0,     0,   766,     0,   981,   982,
     983,     0,     0,     0,   984,     0,   767,     0,   978,     0,
       0,     0,   769,     0,   979,     0,   980,     0,     0,   766,
       0,   981,   982,   983,   988,   989,     0,   984,     0,   767,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     664,   665,   666,   985,     0,  1434,     0,     0,     0,     0,
       0,     0,   974,   975,   976,   990,     0,   770,     0,   991,
     992,   977,   986,     0,     0,     0,   985,   993,     0,     0,
       0,     0,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   986,   768,   994,     0,     0,
       0,     0,   995,     0,     0,     0,     0,     0,     0,   996,
       0,   137,     0,     0,     0,   978,     0,   771,     0,   768,
     972,   979,     0,   980,     0,     0,   766,   987,   981,   982,
     983,     0,     0,     0,   984,     0,   767,   973,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   769,     0,     0,     0,
       0,     0,     0,   985,     0,     0,     0,     0,   988,   989,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,     0,   986,     0,     0,     0,     0,     0,     0,  1975,
       0,   988,   989,     0,     0,     0,     0,     0,     0,   990,
       0,   770,     0,   991,   992,     0,   768,     0,     0,     0,
       0,   993,     0,     0,     0,     0,     0,     0,     0,   974,
     975,   976,   990,     0,   770,     0,   991,   992,   977,     0,
       0,   994,     0,     0,   993,     0,   995,   987,     0,   763,
       0,     0,     0,   996,     0,   137,     0,     0,     0,     0,
       0,   771,     0,     0,   994,     0,     0,     0,     0,   995,
       0,     0,     0,     0,     0,     0,   996,     0,   137,     0,
       0,     0,   978,     0,   771,     0,   769,     0,   979,     0,
     980,     0,     0,   766,     0,   981,   982,   983,   988,   989,
       0,   984,     0,   767,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   770,     0,   991,     0,     0,     0,     0,     0,     0,
     985,   993,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   986,
       0,   994,     0,     0,     0,     0,   995,     0,     0,     0,
       0,     0,     0,   996,     0,   137,     0,     0,     0,     0,
       0,   771,     0,   768,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   987,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   769,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   988,   989,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   993,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   994,     0,
       0,     0,     0,   995,     0,     0,     0,     0,     0,     0,
     996,     0,   137,     0,     0,     0,     0,     0,   771
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-2224)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   668,   116,   796,   601,   111,   181,
     366,  1124,   103,   968,   105,   657,   855,   800,  1232,  1151,
     111,   727,  1213,   791,  1122,  1597,   158,  1587,  1451,   692,
    1451,  1451,   135,   425,  1451,  1451,  1451,   209,  1492,  1127,
    1603,  1374,   801,   435,   135,   604,  1118,  1837,   404,  2004,
    1264,   714,    56,    57,    58,  1137,  1541,  1532,    53,  2038,
      64,  1384,  1363,  1920,   705,    60,     9,     1,     9,  1151,
       9,  1272,  1190,    22,  1768,     1,   364,     9,     9,    56,
      31,   184,    58,     1,  1804,    31,  1204,    17,  1945,     6,
     858,  1383,   755,    17,    88,    99,   100,    49,   102,  1129,
      93,   115,   125,   107,   108,   153,    48,  1137,    58,   130,
      71,     9,   116,   111,     9,    97,   175,   142,  1473,    87,
      27,  1151,   764,   765,    49,  1326,  1846,    58,     0,   133,
     177,    97,  1465,   176,    49,    64,  1696,   244,  1944,    58,
     251,  1276,   805,     6,    30,   277,  1259,   232,   328,  1536,
     203,   162,    58,    73,   213,   256,   160,     0,    71,  2110,
    1461,   241,   256,    88,    22,   203,   161,   125,   252,  1992,
     234,  1526,    21,   815,   166,  1247,     6,  1897,  1379,    65,
      39,    67,  1515,    65,   295,    67,    21,   191,   357,  1576,
       1,  2170,   203,   271,   244,   203,  2071,   369,    30,   203,
     262,   452,   256,   108,   274,   846,   232,   203,   991,   116,
     124,   237,   308,   354,  1601,  2016,  2439,   410,   125,   232,
     209,  1356,   274,   218,   219,    31,   262,    49,    27,  1012,
     761,   218,   455,    65,  1954,    67,   124,   172,     0,  1594,
     394,     8,   256,   482,    62,   249,   188,   178,    71,   160,
    1116,   287,   172,   257,   505,   114,   367,     9,  1124,  1125,
     406,   500,    71,   244,   232,   256,   452,   139,  1134,   204,
      37,   143,    90,    91,  1304,  1141,  1142,   272,   289,  1580,
     177,   199,   505,   232,   477,  1315,    92,   282,   173,   271,
    1372,  2514,   340,   177,  1160,  1161,   139,   160,   452,   351,
     143,   353,  1657,   410,  1864,   389,    58,   111,   177,   840,
     241,   228,    71,   130,   212,   256,   457,   116,   388,   306,
     301,   317,   418,   385,   504,  2045,  2183,  1899,   200,   225,
     499,   477,   321,   397,  1117,  2029,   978,   800,   423,  2290,
    2291,   444,  1372,   446,   447,  1668,  1376,   458,  2154,   212,
     453,   342,  1675,   335,  1017,   446,   447,   200,   256,   363,
     410,  1662,   453,   357,   290,   376,   252,   470,   266,   447,
     473,   474,   365,   476,   232,  1473,   479,   480,   237,   470,
    2203,  1856,   212,    49,  1859,  1870,   312,   391,   251,   469,
     253,   308,   287,   256,  1879,   448,   256,   504,   402,  1182,
    1183,  1184,   309,   266,   505,   357,   228,   411,   412,   256,
     414,   415,  1195,  1196,   232,  2216,   420,   511,   502,  1202,
     252,   251,  1809,   253,   376,   463,   256,   452,  1526,  1816,
    1296,   452,   357,   437,   354,  1790,   266,   398,   370,   452,
     543,   544,   357,  1531,   437,   331,   505,   353,   346,   331,
     454,   505,   543,   544,   349,   463,   414,   505,   505,   322,
     212,  1327,   505,   274,  1023,  1024,  1767,   316,    57,   341,
     462,    60,   401,   416,  2425,    64,  1139,  1612,   581,   505,
    1867,   504,   505,   346,   505,   398,   484,   598,   449,   241,
     581,   505,   322,   504,   605,   453,  1594,   447,   341,   331,
     452,   604,  1574,   321,   256,   499,  1798,   392,  2228,  1591,
       9,   515,   463,  1272,   266,   978,   346,   463,   416,   443,
    1386,   498,   810,   505,   466,  1848,  2220,   990,   991,   992,
     506,   535,   500,  1605,   452,  1922,   449,   457,   469,   505,
     459,   652,   453,   402,   461,   464,   504,   499,  2268,  1012,
    2270,    50,   556,   416,   558,   658,   505,   561,   562,  1657,
     564,  1591,   504,   461,   505,   497,   505,  1685,   511,   483,
    1784,   505,   502,  1214,   499,   398,  2139,   388,   160,   505,
     452,  2301,  2439,   578,   499,    71,   416,  1788,  1889,   398,
     453,   595,  1234,     9,   346,   483,   600,   504,   461,   504,
     505,  1631,   498,   607,   421,   454,     1,  1473,   505,   452,
    2085,  2331,  2332,   511,  2489,  2490,   465,   612,   504,   454,
    1379,   505,   308,  2413,   256,  1926,   449,     0,    57,     6,
     465,   461,   330,   505,   452,    64,   505,  2024,   442,   398,
     449,   452,   505,   447,   212,   505,  1512,   256,   511,   256,
     256,   511,  1138,  2040,  1117,     6,   241,   330,   505,  1525,
    1526,   256,   505,   667,   416,   776,    65,    62,    67,   256,
     781,   126,  2059,   845,   143,   505,  1139,    32,  1164,   268,
     130,   511,  1145,   786,   787,  2664,   203,   798,   256,   256,
     449,   357,  1790,    26,   216,    90,    91,  1563,   266,    33,
     803,  2088,   189,   242,   708,  2092,  2661,   711,   290,   461,
     376,   293,  1175,   212,   236,   452,  1499,   469,    32,  1182,
    1183,  1184,  1185,  2078,  1796,  2080,   218,  1190,  1594,  1121,
      58,  1123,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
     262,  1204,  1205,  1502,  2131,   244,   245,   124,   171,   262,
     229,   340,  2473,   505,  1146,   406,  1148,   256,  2081,   511,
       6,  1153,   195,  1793,  2119,   287,   139,   266,   257,  1635,
     143,  1234,   252,    47,   287,  1167,  2496,  2497,   346,   346,
    1646,   231,  2099,  1649,    38,     1,   452,   421,  1149,    63,
      85,  1657,    46,     6,  1257,    11,   212,   111,    57,  2100,
     271,   308,   225,  2288,  1140,    64,   504,   396,  1169,   204,
     233,     6,   401,  1895,   979,   980,  1152,  2172,   126,   505,
     387,   986,   314,   256,  1466,   176,   477,   200,   154,   103,
    1316,   504,   505,   499,   168,   212,   200,   232,  2225,   268,
     256,   291,   170,    59,  2231,   384,   256,   346,   416,   416,
     266,  1493,  2185,   252,  2241,   229,   967,  2174,  2430,   376,
     162,   212,  2552,   196,   256,  1895,  1896,  2000,  1981,   212,
    1262,   453,   341,   505,   251,   362,   253,  2178,  1341,   256,
    1639,    97,  1274,    99,   469,   101,  2019,  2020,  1447,   266,
    2023,   370,   347,   109,   317,   223,   505,   123,   505,   505,
     251,   256,   253,   410,   511,   256,  1392,  1690,   154,   389,
     505,   340,   398,   256,  2635,   266,   505,   416,   505,   329,
    1023,  1024,  1033,   266,  2311,  2615,   321,  2314,  2315,   563,
     346,  2064,   331,   267,  2506,     9,  2069,   329,  2070,  2071,
    2327,   158,   256,   511,   511,   322,   435,   402,   256,   165,
    1613,   422,    57,   424,  2341,  2342,   454,   211,   232,    64,
     548,   172,   461,   449,   337,   239,   212,   396,   341,   346,
     477,   322,   401,   459,   765,  2292,   250,   341,   464,   501,
    2078,   162,  2080,  1358,    58,   166,   188,   289,   406,   243,
     454,   504,  2555,   204,  2480,   346,   370,   341,  2086,   212,
     416,   465,   590,   346,   502,   251,   495,   253,   210,   268,
     256,   265,   511,   791,   231,  1118,   505,   212,  2405,  1122,
     266,  2119,   406,   452,   815,   271,  1129,  1130,  2242,  1788,
      28,  1694,   620,  1408,  1137,   351,  1499,  1140,   251,   416,
     253,   257,  1145,   256,  1147,   461,  1149,  1150,  1151,  1152,
    2138,  2537,  2185,   266,   464,  1718,   251,   452,   253,   477,
    2620,   256,  2449,   139,   318,   416,  1169,  1933,  2522,  2632,
     447,   266,   464,   416,  2172,   292,   322,   351,   352,   220,
     858,   340,   505,  1175,   461,   301,  1251,  2117,   406,   505,
     262,  1263,   366,   477,   368,   511,   412,   413,   285,  2212,
     346,   511,    26,   474,   178,   476,   483,  1701,   479,   322,
     461,   252,  1504,  1205,  2537,   287,  2537,  2537,   461,   511,
    2537,  2537,  2537,   451,   378,  1588,   256,   322,   505,   127,
     196,   459,   460,   346,   511,   126,   464,   396,   212,  1781,
     447,   256,   401,  1315,  1247,   212,    30,   334,  2708,   188,
    1613,   346,    11,   504,   505,     1,   271,   287,    34,   477,
     511,   188,   505,   268,  1267,  2725,  2738,   241,   511,    35,
     416,   210,    38,    12,   390,   411,    15,    16,   452,    45,
      46,   172,   256,   210,   356,  1519,  1520,  1521,  1522,   256,
     256,   498,   266,   452,    40,    41,    42,    43,    44,   266,
      59,  1304,   414,   416,   204,   307,   321,   309,    55,   212,
     351,  1383,  1315,   171,   212,   461,   411,   433,   359,  1987,
     474,   416,  1685,   459,   108,   499,    92,  1690,   464,   292,
      76,    77,   232,  2366,   447,   340,   452,  2370,    97,   262,
      99,   453,   101,    90,   128,     8,   505,   452,   461,   178,
     109,   216,   217,   256,   394,  1718,  1359,  2658,   256,   505,
     107,   324,  2128,   266,   287,   511,   461,   225,   266,  1372,
     117,   236,   346,  1376,    37,   233,  1124,   262,     8,   346,
     107,   459,   280,   167,  2043,   452,   464,  1929,   256,   505,
     117,   396,   505,   356,  2695,   161,   401,   262,   511,   256,
    2166,  2167,   287,   475,   270,   189,   165,    37,   237,  1412,
     505,   240,   505,  1161,  1420,  1487,   511,  2415,  1424,  2417,
     204,  1412,   287,  1679,   190,  1431,   207,   208,   285,   286,
     452,  2522,   504,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   416,   346,  1447,   211,   452,   452,   346,   416,
     232,   800,  2485,  2486,   423,  2061,   379,  2489,  2490,   317,
    2492,   405,  2201,   329,   321,   246,   247,   226,  2633,  2634,
    1473,  2585,   329,   451,   256,    35,   446,   232,    38,  2357,
    1221,  2164,   460,  2046,  1225,    45,    46,   461,   306,   262,
     505,  1985,   394,   463,   461,   469,   511,  2039,   257,   265,
    2665,   118,   119,   120,   405,   281,   282,   283,  2274,   199,
     764,   765,   557,   416,   287,   764,   765,   562,   416,  2684,
     338,   419,   420,  1526,  1596,   307,   452,   309,  2541,   248,
     249,   505,    92,   178,    24,    25,  2099,   511,   277,   278,
     358,  1445,   301,   188,   511,   304,  1450,  1451,  1620,  1453,
      83,    58,   318,    16,     2,   351,   340,   353,   461,     7,
     452,   815,   301,   302,   452,   210,   815,   100,   344,  2492,
      33,  1574,  2737,  1645,   452,   449,    66,   449,    68,    42,
      70,   504,   505,   454,   330,   459,   218,   459,  1591,  1823,
     464,  1594,   464,   459,   465,   240,   174,   343,   464,   452,
    1632,   161,  1605,  1837,    54,    55,   166,   464,   511,  1901,
     369,  2174,   378,   511,   104,   105,   106,   449,    13,    14,
      69,   238,  1199,  1200,  1201,   391,   452,   459,  1631,   978,
     190,   390,   464,   323,   324,   252,   501,    32,   505,   504,
      90,   990,   991,   992,   351,   452,   353,  2337,  1659,  2339,
     340,   211,  2530,  2531,  1657,   505,   415,   107,   417,   192,
     193,   194,   452,  1012,   154,   505,   156,   117,   201,   351,
    2436,   353,   452,   163,   433,   456,   166,   458,  1681,   340,
    2603,     9,   256,  2606,    12,    97,    98,    15,    16,   256,
    1681,   467,   468,   450,  2572,   157,   472,   159,  2576,  2577,
    1744,   157,   459,   159,   394,   265,   469,   464,   474,   443,
    1754,  1755,   199,  1724,  1758,  2638,  2639,   505,   335,   450,
    2643,  2644,   252,   256,   254,   258,   259,   260,   459,  2292,
     347,   264,  2498,   464,  1745,   400,  2502,  2503,    64,  1643,
       4,  1682,  1683,  1684,   299,   300,   505,  1688,  1197,  1198,
    1691,  1692,   252,   401,   254,    19,  1183,  1184,   318,   505,
     410,   252,   252,   254,   254,    29,   232,    60,  1117,  2459,
     303,   256,    66,  1122,    68,  2630,   486,   487,   488,   489,
    1129,   271,   452,  1786,   990,   328,   992,  1790,  1137,   401,
    1793,   256,   505,  1796,   229,  1699,  1700,    26,   452,   452,
      64,  2164,  1151,   108,   312,   452,  1710,   486,   487,   488,
     489,   256,   256,  1717,   486,   487,   488,   489,   378,   800,
     272,   438,   628,   629,   630,   631,  1175,   455,  2120,  1901,
      23,   391,   103,  1182,  1183,  1184,  1185,   452,   438,   189,
     123,  1190,  1746,  1846,   377,   455,  1195,  1196,  1197,  1198,
    1199,  1200,  1201,  1202,    17,  1204,  1205,  2113,   452,    87,
     394,   505,   272,   351,   401,    57,   402,   504,   262,   423,
      39,   321,   452,   237,   402,   325,   326,   331,   505,   419,
    1952,   507,   505,   316,   310,  1234,   261,   452,   394,  1961,
    1962,     7,  1895,  1896,  1897,   428,   429,   394,   255,   452,
     452,  1805,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,
     505,   504,   394,   452,   474,   366,   366,   452,  1267,    86,
    1824,   452,    86,   125,   394,   452,  1830,   432,   389,    22,
     306,   502,   382,   383,   452,   309,   394,   204,   471,   505,
     452,   505,   500,   502,   384,   232,   447,   254,   505,   277,
     278,  1954,   218,   123,   444,  1304,   220,   505,   491,    53,
     511,   447,   443,   496,   463,    26,  1315,   306,   400,   448,
     503,   410,   505,   301,   302,   348,   505,  1980,   196,   446,
     463,   256,   505,   443,   452,   376,   399,   336,   252,  1980,
     505,   115,  1995,   452,   463,   170,   505,  2000,   262,   463,
     188,   256,  2013,   223,   494,   452,   463,   309,   463,   990,
     991,   992,   505,   505,  1363,   505,  2019,  2020,   447,   403,
    2023,   463,   463,  1372,   452,   463,   463,  1376,   452,   463,
     505,  1012,   454,    30,   131,   196,   132,   135,   447,   134,
     386,   133,  2045,   351,   102,   136,   442,   137,  2120,   138,
     447,   315,   498,   141,    49,   463,   320,  2129,   446,  2070,
    2071,  2064,  1966,   404,   443,   446,  2069,  2070,  2071,   440,
     144,   196,   145,   500,   146,  2078,   147,  2080,    31,   148,
    1984,   271,    49,   149,   196,  2649,   150,   351,   151,   113,
     152,   220,   115,   449,   449,   359,   449,   449,   449,  2003,
     410,  2005,   449,   447,   452,  2009,   312,   110,   372,   447,
     197,   376,  1461,  2017,  2117,   223,  2119,  2611,   203,   256,
     339,   272,   231,   294,  1473,   298,   485,   166,   129,   176,
     502,   365,   502,   447,  1115,   169,  1117,   401,   130,  1120,
     404,   447,   228,  1124,    49,   196,    32,   228,   412,    35,
    1499,   204,    38,   299,    57,   204,   452,   272,  1139,   423,
      46,   166,   505,   423,  1145,   510,   299,   509,   252,  2172,
     237,   276,   203,   447,   447,   380,   362,  1526,   295,    30,
      17,   203,  2185,   203,   443,  1166,  2189,  1168,   452,   129,
     140,   455,    49,   365,  1175,   447,   203,   142,  2189,     8,
     196,  1182,  1183,  1184,  1185,   130,    92,   502,  2112,  1190,
     502,   423,   203,  2505,  1195,  1196,  1197,  1198,  1199,  1200,
    1201,  1202,   452,  1204,  1205,   111,   447,     9,     7,   505,
     203,  1580,   504,    49,   294,   504,   499,   499,   297,  1588,
     189,   291,  1591,   262,   314,  1594,   462,   330,   313,   114,
     437,    47,  1233,   411,   294,   203,   203,   361,   361,   103,
     380,  2553,    49,   262,   296,  2268,   237,  2270,   493,    96,
    2633,  2634,    57,     8,   292,    49,  1257,   111,  1259,   457,
     337,   262,  1631,   262,   262,   110,   452,   482,   210,   337,
     452,   108,   221,   299,   340,  2298,   285,   418,  2301,   502,
     232,   120,  2665,   196,   190,   321,   321,  2298,  1657,   337,
      49,   367,   198,  1662,   425,     7,   306,    46,    26,    92,
     127,  2684,   201,   206,   148,   211,    75,   221,   238,  2332,
     150,   177,   616,   410,   538,   520,  1685,   544,  1900,   504,
     286,  1690,   497,   425,  1032,  1451,  2706,   754,  1410,  2352,
    1893,   787,  1673,  1991,  2187,   858,  2213,   243,  2213,  2083,
    1341,  2352,   805,  2366,  1041,  1756,  1230,  2370,  1840,   794,
    2398,  2385,  1757,  1792,  2737,  1485,  2081,   263,  1247,   265,
    1487,  1512,  1363,  2266,  1531,  1534,  1859,  2085,  1300,  1577,
    1584,  1887,  2108,  1336,  2284,  1595,  1341,  1913,  2127,  2120,
    1625,   287,   288,  1962,  2141,  1942,  1370,  1372,  1389,  1152,
    2167,  1386,  2415,  1961,  2417,  2335,  1961,  2695,  1767,  1672,
    2439,  2340,  1563,  2345,  2160,  1359,  2330,  2160,  1481,  2160,
    2433,   299,   318,  2160,   152,  1929,  1257,  1786,   699,  1718,
     270,  1790,   242,   581,  1793,   995,   759,  2563,   417,   215,
    2427,  1949,   450,  2097,   509,  1892,  2635,  1587,   560,   345,
    2752,   718,    -1,    -1,    -1,    -1,   800,    -1,    -1,    -1,
    2374,    -1,    -1,    -1,    -1,  2379,    -1,    -1,  2489,  2490,
    1461,    -1,  2485,  2486,    -1,   371,  2489,  2490,    -1,  2492,
      -1,    -1,   378,    -1,    -1,    -1,    -1,  1846,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   391,    -1,    -1,    -1,   395,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1499,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2438,    -1,    -1,    -1,    -1,    -1,
    1889,  1890,    -1,    -1,    -1,    -1,  1895,  1896,  1897,  2552,
     436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   445,
      -1,    -1,    49,    -1,    -1,    -1,    -1,  2471,  2472,    -1,
    2581,    -1,    -1,    -1,    -1,    -1,    -1,  1926,    -1,    -1,
      -1,    -1,    -1,    -1,  2488,    -1,    -1,    -1,   474,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,   484,  1580,
    2504,    88,    -1,    -1,   490,  1954,    -1,  1588,    -1,    -1,
      -1,    -1,  2615,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1604,    -1,  2529,    -1,    -1,    -1,    -1,
    2534,  2535,  1613,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1624,    -1,    -1,    45,    -1,    -1,  2660,
    2554,    -1,    -1,    -1,    -1,  2658,   990,   991,   992,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,  1652,    -1,    -1,    -1,    -1,    -1,    -1,  1012,    -1,
    2584,  1662,    -1,  2587,  2588,    -1,    -1,    -1,    -1,    -1,
    2701,  2702,  2695,    -1,    -1,    -1,  2045,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1685,   192,   193,   194,    -1,  1690,
      -1,    -1,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2628,   212,  2729,  1708,    -1,  2078,
    2741,  2080,    -1,    -1,    -1,    -1,    -1,  1718,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1730,
      -1,  2100,  1733,    -1,    -1,    -1,    -1,    -1,   245,  2108,
      -1,    -1,    -1,    -1,   251,    -1,   253,    -1,  2117,   256,
    2119,   258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,
      -1,    -1,  1116,  1117,   271,    -1,  1767,    -1,    -1,    -1,
    1124,  1125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1134,    -1,  1783,    -1,    -1,    -1,    -1,  1141,  1142,    -1,
     209,    -1,    -1,    -1,    -1,  2164,   303,    -1,    -1,    -1,
      -1,   308,    -1,  2172,    -1,    -1,  1160,  1161,    -1,  2178,
      -1,    -1,    -1,    -1,    -1,   322,   235,    -1,    -1,    -1,
      -1,  1175,    -1,    -1,    -1,    -1,    -1,    -1,  1182,  1183,
    1184,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,   346,
      -1,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,    -1,
     357,  1205,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,    -1,
     377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1238,    -1,   305,    -1,  1889,  1890,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2268,
      -1,  2270,    -1,   410,    -1,    -1,    -1,    -1,   327,   416,
      -1,    -1,    -1,    -1,   333,    -1,    -1,  1918,    -1,    -1,
      -1,   428,   429,    -1,    -1,  1926,    -1,  1281,    -1,    -1,
      -1,    -1,  2301,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1296,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,  1953,    -1,   461,    -1,    -1,    -1,    -1,  1960,
    1961,    -1,    -1,  2332,   471,     1,    -1,     3,    -1,     5,
     477,    -1,    -1,  1327,    10,    -1,    -1,    -1,    -1,    -1,
    1981,    -1,    18,    -1,   491,  1986,   405,    -1,    -1,   496,
    1991,  1992,   499,    -1,    -1,   414,   503,    -1,   505,    -1,
      -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   431,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,  1386,   452,    -1,    -1,    72,  1391,    -1,    75,
      -1,    -1,   192,   193,   194,  2046,  2415,    -1,  2417,    -1,
      -1,   201,    -1,    89,   473,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   492,    -1,    -1,   112,    -1,    -1,    -1,
     499,   500,    -1,    -1,   120,    -1,   122,    -1,    -1,  2090,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2099,  2100,
      -1,    -1,    -1,    -1,    -1,    -1,   256,  2108,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,   153,    -1,  1473,
      -1,    -1,    -1,    -1,    -1,    -1,  2127,    -1,   164,    -1,
      -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1499,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   303,    -1,  2156,    -1,    -1,  1512,   195,
      -1,    -1,    -1,  2164,    -1,    -1,   202,    -1,    -1,   205,
     206,  1525,  1526,  2174,    -1,    -1,    -1,  2178,    -1,   215,
      -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,   224,    83,
      -1,   227,    -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,
      -1,    -1,  2203,    -1,    -1,    -1,   100,    -1,    -1,  1563,
      -1,  2212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,    -1,
      -1,    -1,    -1,   269,  1588,    -1,    -1,   273,    -1,   275,
    1594,    -1,    -1,    -1,    -1,    -1,  2247,    -1,    -1,   285,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2633,  2634,   416,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   311,    -1,    -1,   428,   429,
      -1,  1635,    -1,    -1,    -1,    -1,    -1,    -1,   324,    -1,
      -1,  2292,  1646,    -1,    -1,  1649,  2665,    -1,   192,   193,
     194,    -1,    -1,  1657,    -1,    -1,    -1,   201,    -1,    -1,
      -1,   461,    -1,   349,   350,  2684,    -1,    -1,   212,    -1,
      -1,   471,    -1,    -1,   360,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1690,    -1,   374,   375,
      -1,   491,    -1,    -1,    -1,   381,   496,    -1,    -1,   385,
      -1,    -1,    -1,   503,    -1,   505,  2357,   393,    -1,    -1,
      -1,   511,   256,    -1,   258,   259,   260,   403,  2737,    -1,
     264,    -1,   266,    -1,    -1,    -1,   412,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,    -1,    -1,
     426,   427,    -1,    -1,   430,    -1,   432,    -1,    -1,    -1,
      -1,    -1,    -1,   439,    -1,    -1,    -1,  2408,    -1,   303,
      -1,    -1,    -1,    -1,    -1,    -1,   452,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,    -1,
     476,    -1,    -1,    -1,    -1,   481,    -1,    -1,    -1,    -1,
    2451,    -1,   346,    -1,    -1,    -1,    -1,  2458,    -1,    -1,
    2461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   508,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   416,    -1,  2525,    -1,    -1,    -1,    -1,  2530,
    2531,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,    -1,
    2541,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,
      -1,  2572,    -1,    -1,    -1,  2576,  2577,   471,    -1,  1933,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2589,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,    -1,
      -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,   503,
      -1,   505,    -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,
      -1,     1,    -1,     3,    -1,     5,    -1,    -1,    -1,    -1,
      10,    -1,  2633,  2634,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2652,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2665,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,  2677,  2678,    -1,    -1,
      -1,    61,    -1,  2684,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2709,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   112,    -1,  2735,    -1,  2737,    -1,    -1,    -1,
     120,    -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,   129,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,  2128,    -1,    -1,     1,    -1,     3,
      -1,     5,    -1,    -1,   164,    -1,    10,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2164,    -1,  2166,  2167,    -1,   195,    -1,    -1,    -1,    -1,
      -1,    -1,   202,    -1,    -1,   205,   206,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,   215,    -1,    61,    -1,    -1,
      -1,    -1,   222,    -1,   224,    -1,    -1,   227,    72,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   269,
      -1,    -1,    -1,   273,    -1,   275,   120,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,    -1,    -1,
      -1,   291,   292,    -1,   294,   295,   296,   297,    -1,    -1,
    2274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   153,
      -1,   311,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     164,    -1,    -1,    -1,   324,   169,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   349,
     350,   195,    -1,    -1,    -1,    -1,    -1,    -1,   202,    -1,
     360,   205,   206,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   215,    -1,    -1,   374,   375,    -1,    -1,   222,    -1,
     224,   381,    -1,   227,    -1,   385,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   393,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,     5,   403,    -1,    -1,    -1,    10,    -1,    -1,
      -1,    -1,   412,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,   421,    -1,    -1,    -1,   269,   426,   427,    -1,   273,
     430,   275,   432,    -1,    -1,    -1,    -1,    -1,    -1,   439,
      -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,   452,    -1,    -1,    -1,    -1,    -1,    61,    -1,
      -1,    -1,  2436,    -1,    -1,    -1,    -1,   311,    -1,    72,
     470,    -1,    75,    -1,    -1,    -1,   476,    -1,    -1,    -1,
     324,   481,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   502,    -1,    -1,   349,   350,    -1,   508,   112,
      -1,    -1,    -1,    -1,    -1,    -1,   360,   120,    -1,   122,
      -1,    -1,    -1,    -1,  2498,    -1,    -1,    -1,  2502,  2503,
     374,   375,    -1,    -1,    -1,    -1,    -1,   381,    -1,    -1,
      -1,   385,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   393,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   403,
      -1,   164,    -1,    -1,    -1,    -1,   169,    -1,   412,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,    -1,
      -1,    -1,   426,   427,    -1,    -1,   430,    -1,   432,    -1,
      -1,    -1,   195,    -1,    -1,   439,    -1,    -1,    -1,   202,
      -1,    -1,   205,   206,    -1,    -1,    -1,    -1,   452,    -1,
      -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,   224,    -1,    -1,   227,    -1,   470,    -1,    -1,    -1,
      -1,    -1,   476,    -1,    -1,    -1,    -1,   481,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2633,
    2634,    -1,    -1,    -1,   508,    -1,   269,    -1,    -1,    -1,
     273,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2665,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,    -1,
    2684,     3,    -1,     5,    -1,    -1,    -1,    -1,    10,    -1,
      -1,   324,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   349,   350,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   360,    -1,    51,
      52,    -1,    -1,  2737,    -1,    -1,    -1,    -1,    -1,    61,
      -1,   374,   375,    -1,    -1,    -1,    -1,    -1,   381,    -1,
      72,    -1,   385,    75,    -1,    -1,    -1,    -1,    -1,    -1,
     393,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
     403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   412,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   421,    -1,
     112,    -1,    -1,   426,   427,    -1,    -1,   430,   120,   432,
     122,    -1,    -1,    -1,    -1,    -1,   439,   129,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,
      -1,    -1,   164,   476,    -1,    -1,    -1,   169,   481,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,   508,    -1,    -1,    -1,    -1,
     202,    -1,    -1,   205,   206,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,    -1,    -1,
     222,    -1,   224,    -1,    -1,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    14,   269,    -1,    -1,
      -1,   273,    20,   275,    -1,    -1,    -1,   191,   192,   193,
     194,    -1,    -1,   285,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   311,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,   256,    -1,   258,   259,   260,   349,    -1,    -1,
     264,    -1,   100,    -1,    -1,    -1,    -1,    -1,   360,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   375,    -1,    -1,    -1,    -1,    -1,   381,
      -1,    -1,    -1,   385,    -1,    -1,    -1,    -1,    -1,   303,
      -1,   393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     412,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,   421,
      -1,    -1,   170,    -1,   426,   427,    -1,    -1,   430,    -1,
     432,    -1,    -1,    -1,    -1,    -1,    -1,   439,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,
     452,    -1,    -1,   201,    -1,    -1,    -1,    -1,    -1,   207,
     208,    -1,    -1,   377,   212,    -1,    -1,    -1,   470,    -1,
      -1,    -1,    -1,    -1,   476,    -1,    -1,    -1,    -1,   481,
      -1,    -1,    -1,    -1,   232,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,    12,    13,    14,    -1,   245,   246,   247,
      -1,    20,    -1,   251,    -1,   253,   508,    -1,   256,    -1,
     258,   259,   260,    -1,   428,   429,   264,    -1,   266,    -1,
      -1,    -1,    -1,   271,    -1,    -1,   440,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,
      -1,    -1,   290,    -1,    -1,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   301,    -1,   303,    -1,   471,    -1,    -1,
     308,    -1,    -1,    -1,    83,   313,    -1,    -1,   482,    -1,
      -1,    -1,     6,    -1,   322,     9,    -1,   491,    -1,    -1,
      -1,   100,   496,    -1,   332,    -1,   500,    -1,    -1,   503,
     504,   505,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,   416,    -1,
      -1,    -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,
     428,   429,   201,    -1,    -1,    -1,    -1,    -1,   207,   208,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   449,    -1,   451,    -1,   453,    -1,    -1,   456,    -1,
     458,   459,   460,   461,    -1,   463,   464,    -1,    -1,   153,
      -1,    -1,    -1,   471,    -1,    -1,   245,   246,   247,    -1,
      -1,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,
     259,   260,    -1,   491,    -1,   264,    -1,   266,   496,    -1,
      -1,    -1,   271,    -1,    -1,   503,    -1,   505,   192,   193,
     194,    -1,    -1,   511,    -1,   284,    -1,   201,    -1,    -1,
      -1,   290,    -1,    -1,   293,    -1,    -1,    -1,   212,    -1,
      -1,    -1,   301,    -1,   303,    -1,    -1,    -1,    -1,   308,
      -1,    -1,    -1,     6,   313,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   245,    -1,   332,    -1,    -1,    -1,   251,    -1,   253,
      -1,    -1,   256,    -1,   258,   259,   260,   346,    -1,    -1,
     264,    -1,   266,    -1,    -1,    -1,    -1,   271,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   377,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   322,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     6,   416,    -1,     9,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   428,
     429,    -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,    -1,
     449,    -1,   451,    -1,   453,    -1,    -1,   456,    -1,   458,
     459,   460,   461,   377,   463,   464,    -1,    -1,    -1,    -1,
      -1,    -1,   471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    83,    -1,    -1,    -1,   496,    -1,   192,
     193,   194,   416,    -1,   503,    95,   505,    -1,   201,    -1,
     100,    -1,   511,    -1,   428,   429,    -1,    -1,    -1,   212,
      -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,   228,    -1,    -1,   100,    -1,
     454,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,
      -1,   465,   245,    -1,    -1,    -1,    -1,   471,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,
      -1,   264,    -1,   266,    -1,    -1,    -1,   491,   271,    -1,
      -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,   503,
      -1,   505,    -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,
      -1,    -1,   192,   193,   194,    -1,    -1,    -1,    -1,    -1,
     303,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,   322,
     192,   193,   194,    -1,    -1,     6,    -1,    -1,     9,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,    -1,    -1,   346,    -1,   245,    -1,    -1,    -1,    -1,
      -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,
      -1,   271,    -1,   245,   377,    -1,    -1,    -1,    -1,   251,
      -1,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,   271,
      -1,    -1,    83,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,   100,
      -1,     6,   322,    -1,     9,   428,   429,    -1,    -1,    -1,
      -1,   303,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,     6,    -1,
     322,     9,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   471,    -1,
      -1,    -1,    -1,    -1,   346,    -1,    -1,   377,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,
      -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,    83,    -1,
     503,    -1,   505,    -1,    -1,   377,    -1,    -1,   511,    -1,
      95,   192,   193,   194,    -1,   100,   416,    -1,    -1,    -1,
     201,    -1,    -1,    -1,    -1,    83,    -1,    -1,   428,   429,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,
      -1,   461,    -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,
     251,   471,   253,    -1,    -1,   256,    -1,   258,   259,   260,
      -1,    -1,    -1,   264,    -1,   266,    -1,    -1,    -1,   461,
     271,   491,    -1,    -1,    -1,    -1,   496,    -1,    -1,   471,
      -1,    -1,    -1,   503,    -1,   505,    -1,   192,   193,   194,
      -1,   511,    -1,    -1,    -1,    -1,   201,    -1,    -1,   491,
      -1,    -1,   303,    -1,   496,    -1,    -1,   212,    -1,    -1,
      -1,   503,    -1,   505,   192,   193,   194,    -1,    -1,   511,
      -1,   322,    -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,
     245,    -1,    -1,    -1,    -1,   346,   251,    -1,   253,     6,
      -1,   256,     9,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,   266,    -1,    -1,    -1,    -1,   271,   245,    -1,    -1,
      -1,    -1,    -1,   251,    -1,   253,   377,    -1,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,
      -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   416,    -1,   322,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   303,    83,   428,   429,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   346,    -1,   100,   322,    -1,    -1,    -1,     6,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,
     471,     6,   377,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     491,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,   377,
      -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,   166,
     511,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   428,   429,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,   416,    -1,
      -1,    -1,   100,    -1,   201,    -1,    -1,    -1,    83,    -1,
     428,   429,    -1,    -1,    -1,   212,   461,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   471,    -1,     6,   447,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   461,    -1,    -1,   491,    -1,   245,    -1,
      -1,   496,    -1,   471,   251,    -1,   253,    -1,   503,   256,
     505,   258,   259,   260,    -1,    -1,   511,   264,    -1,   266,
      -1,    -1,    -1,   491,   271,    -1,    -1,    -1,   496,    -1,
      -1,    -1,    -1,    -1,    -1,   503,    -1,   505,    -1,    -1,
      -1,    -1,    -1,   511,   192,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,   201,    -1,    83,   303,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   212,    -1,    -1,   192,   193,   194,
      -1,   196,   100,    -1,    -1,   322,   201,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,   346,
      -1,    -1,    -1,   251,    -1,   253,    -1,    -1,   256,    -1,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,    -1,
     245,    -1,    -1,   271,    -1,    -1,   251,    -1,   253,    -1,
     377,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,   266,    -1,    -1,    -1,     6,   271,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,   416,
      -1,    -1,    -1,   201,   322,    -1,    -1,    -1,   303,    -1,
      -1,   428,   429,    -1,   212,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,   346,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   461,    -1,    -1,   245,    -1,    -1,
      -1,   346,    83,   251,   471,   253,    -1,    -1,   256,   377,
     258,   259,   260,    -1,    -1,    -1,   264,    -1,   266,   100,
      -1,    -1,    -1,   271,   491,    -1,    -1,    -1,    -1,   496,
       6,    -1,   377,     9,    -1,    -1,   503,    -1,   505,    -1,
      -1,    -1,    -1,    -1,   511,    -1,    -1,    -1,   416,    -1,
      -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,
     428,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   416,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   428,   429,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   461,    -1,    -1,    -1,    -1,   346,    -1,
      -1,    -1,    -1,   471,    -1,    -1,    -1,    83,    -1,    -1,
      -1,   192,   193,   194,    -1,    -1,   461,   485,    -1,    -1,
     201,    -1,    -1,   491,   100,    -1,   471,    -1,   496,   377,
      -1,   212,    -1,    -1,    -1,   503,    -1,   505,    -1,    -1,
      -1,    -1,    -1,   511,    -1,    -1,   491,    -1,    -1,    -1,
      -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,   503,    -1,
     505,    -1,   410,    -1,   245,    -1,   511,    -1,   416,    -1,
     251,    -1,   253,     6,    -1,   256,     9,   258,   259,   260,
     428,   429,    -1,   264,    -1,   266,    -1,    -1,    -1,    -1,
     271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   461,    -1,    -1,   192,   193,   194,    -1,
      -1,    -1,   303,   471,    -1,   201,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,
      -1,   322,    -1,   491,    -1,    -1,    -1,    -1,   496,    -1,
      83,    -1,    -1,    -1,    -1,   503,    -1,   505,    -1,    -1,
      -1,    -1,    -1,   511,    -1,   346,    -1,   100,    -1,   245,
      -1,    -1,    -1,    -1,    -1,   251,    -1,   253,    -1,    -1,
     256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,    -1,
     266,    -1,    -1,    -1,    -1,   271,   377,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,   428,   429,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,   201,    -1,
     346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
     461,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     491,    -1,   245,    -1,    -1,   496,    -1,    -1,   251,    -1,
     253,    -1,   503,   256,   505,   258,   259,   260,    83,    -1,
     511,   264,    -1,   266,    -1,    -1,    -1,    -1,   271,    -1,
     416,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   428,   429,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   461,    -1,    -1,    -1,   322,
      -1,    -1,    -1,    -1,    -1,   471,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,   346,    -1,   491,    -1,    -1,    -1,    -1,
     496,    -1,    -1,    -1,    -1,    -1,    -1,   503,    -1,   505,
      -1,    -1,    -1,    -1,    -1,   511,   191,   192,   193,   194,
      -1,    -1,    32,    -1,   377,    35,   201,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   192,   193,   194,    -1,    -1,
      -1,    -1,    -1,    -1,   201,    65,    -1,    67,    -1,    -1,
      -1,    -1,    -1,   416,    74,   212,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,   428,   429,    -1,    -1,    -1,
      -1,   256,    -1,   258,   259,   260,    -1,    -1,    -1,   264,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
      -1,    -1,    -1,    -1,   251,    -1,   253,    -1,   461,   256,
     120,   258,   259,   260,    -1,    -1,    -1,   264,   471,   266,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   303,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,
      -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,
     503,   161,   505,    -1,    -1,    -1,   303,    -1,   511,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,   179,
     180,   181,   182,   183,    -1,   322,   186,   187,    -1,    -1,
     190,    -1,    -1,    -1,    -1,    -1,   196,    -1,   198,    -1,
      -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,   346,
      -1,   211,   377,    -1,    -1,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   232,    -1,    -1,   235,   373,    -1,    -1,    -1,
     377,   241,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   428,   429,   265,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   440,    -1,   277,    -1,   416,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,   471,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   482,   318,   319,
      -1,    -1,    -1,    -1,   461,    -1,   491,   327,    -1,    -1,
     330,   496,    -1,    -1,   471,   500,    -1,    -1,   503,   504,
     505,     1,    -1,   343,    -1,   345,    -1,    -1,   485,    -1,
      -1,    -1,    -1,    -1,   491,    -1,    -1,    -1,    -1,   496,
      -1,    21,    -1,    -1,    -1,    -1,   503,    -1,   505,    -1,
      -1,   371,    -1,    -1,   511,    -1,    36,    -1,   378,    39,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   405,    -1,   407,   408,   409,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   447,    -1,    -1,
      -1,    -1,   452,    -1,    -1,    -1,    -1,   457,    -1,    -1,
     120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,
      -1,    -1,    -1,    -1,   474,    -1,    -1,    -1,   478,   479,
     480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   492,    -1,    -1,    -1,    -1,    -1,   498,   499,
      -1,    83,    -1,    -1,    -1,   505,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,   176,    -1,   100,   179,
     180,   181,   182,   183,    -1,    -1,   186,   187,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   204,    -1,    -1,    36,    -1,    -1,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   232,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      -1,   241,    -1,    -1,    -1,    74,    -1,    76,    77,    78,
      79,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,   193,   194,    -1,    -1,    -1,    -1,   277,    -1,   201,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     212,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,
      -1,    -1,    -1,   245,    -1,    -1,    -1,   327,    -1,   251,
     330,   253,    -1,    -1,   256,    -1,   258,   259,   260,    -1,
      -1,    -1,   264,   343,   266,    -1,    -1,    -1,    -1,    -1,
     179,   180,   181,   182,   183,   355,    -1,   186,   187,    -1,
      -1,    -1,    -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     322,    -1,    -1,   232,    -1,   405,   235,   407,   408,   409,
      -1,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,
      -1,    -1,   452,    -1,    -1,   377,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   469,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,   478,   479,
     480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     319,    -1,   492,    -1,   416,    -1,    -1,    -1,   327,   499,
      -1,   330,    -1,    -1,    -1,   505,   428,   429,    -1,    -1,
      32,    -1,    -1,    35,   343,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,   355,   449,    -1,    -1,
      -1,    -1,    -1,    -1,   363,    -1,    -1,   459,    -1,   461,
      -1,   463,   464,    65,    -1,    67,    -1,    -1,    -1,   471,
      -1,    -1,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,
      -1,    -1,    -1,    -1,   496,    -1,   405,    -1,   407,   408,
     409,   503,    -1,   505,    -1,    -1,    -1,    -1,    -1,   511,
      -1,    39,    40,    41,    42,    43,    44,    -1,   120,    -1,
      -1,    -1,    -1,    -1,    -1,   434,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   452,    -1,    -1,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    -1,    -1,    -1,    -1,   161,
     469,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   478,
     479,   480,    -1,    -1,    -1,    -1,    -1,   179,   180,   181,
     182,   183,    -1,   492,   186,   187,    -1,    -1,   190,    83,
     499,    -1,   120,    -1,   196,    -1,   198,    -1,    -1,    -1,
      -1,    -1,   204,    -1,    -1,    -1,   100,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     232,    -1,    -1,   235,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     252,   179,   180,   181,   182,   183,    -1,    -1,   186,   187,
      -1,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,
     194,    -1,    -1,   305,    -1,    -1,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   318,   319,   212,    -1,
      -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,   330,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   343,    -1,   345,    -1,    -1,    -1,    -1,    -1,   277,
     100,   245,    -1,    -1,    -1,    -1,    83,   251,    -1,   253,
      -1,    -1,   256,    -1,   258,   259,   260,    -1,    -1,   371,
     264,    -1,   266,   100,    -1,    -1,   378,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   319,    -1,   395,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   330,   405,    -1,   407,   408,   409,    -1,   303,
      -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,   447,    -1,    -1,    -1,    -1,
     452,   201,   346,    83,    -1,   457,    -1,    -1,    -1,    -1,
      -1,    -1,   212,    -1,    -1,   192,   193,   194,    -1,    -1,
     100,    -1,   474,    -1,   201,    -1,   478,   479,   480,   407,
     408,   409,    -1,   377,    -1,   212,    -1,    -1,    -1,    -1,
     492,    -1,    -1,    -1,    -1,   245,   498,   499,    -1,    -1,
      -1,   251,    -1,   253,    -1,    -1,   256,    -1,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,    -1,   245,    -1,
      -1,    -1,   416,    -1,   251,    -1,   253,    -1,    -1,   256,
      -1,   258,   259,   260,   428,   429,    -1,   264,    -1,   266,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     478,   479,   480,   303,    -1,   449,    -1,    -1,    -1,    -1,
      -1,    -1,   192,   193,   194,   459,    -1,   461,    -1,   463,
     464,   201,   322,    -1,    -1,    -1,   303,   471,    -1,    -1,
      -1,    -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   322,   346,   491,    -1,    -1,
      -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,   503,
      -1,   505,    -1,    -1,    -1,   245,    -1,   511,    -1,   346,
      83,   251,    -1,   253,    -1,    -1,   256,   377,   258,   259,
     260,    -1,    -1,    -1,   264,    -1,   266,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     377,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,   428,   429,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   416,
      -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,    -1,   449,
      -1,   428,   429,    -1,    -1,    -1,    -1,    -1,    -1,   459,
      -1,   461,    -1,   463,   464,    -1,   346,    -1,    -1,    -1,
      -1,   471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,   459,    -1,   461,    -1,   463,   464,   201,    -1,
      -1,   491,    -1,    -1,   471,    -1,   496,   377,    -1,   212,
      -1,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,
      -1,   511,    -1,    -1,   491,    -1,    -1,    -1,    -1,   496,
      -1,    -1,    -1,    -1,    -1,    -1,   503,    -1,   505,    -1,
      -1,    -1,   245,    -1,   511,    -1,   416,    -1,   251,    -1,
     253,    -1,    -1,   256,    -1,   258,   259,   260,   428,   429,
      -1,   264,    -1,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   461,    -1,   463,    -1,    -1,    -1,    -1,    -1,    -1,
     303,   471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   322,
      -1,   491,    -1,    -1,    -1,    -1,   496,    -1,    -1,    -1,
      -1,    -1,    -1,   503,    -1,   505,    -1,    -1,    -1,    -1,
      -1,   511,    -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   377,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   428,   429,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   461,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   471,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   491,    -1,
      -1,    -1,    -1,   496,    -1,    -1,    -1,    -1,    -1,    -1,
     503,    -1,   505,    -1,    -1,    -1,    -1,    -1,   511
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
     605,   536,   524,   452,   232,   538,  1281,   505,  1202,  1202,
     423,   405,  1299,  1281,  1281,  1281,   394,  1202,   405,   452,
     452,  1281,   452,   452,    58,  1270,   573,     1,   452,   571,
     218,   587,   174,   606,   452,   526,   452,    73,   172,   354,
     457,   539,   540,   578,  1281,  1281,  1281,   505,  1197,  1228,
      69,  1197,   452,  1281,  1281,   550,   561,  1197,   546,   505,
     589,   590,   591,  1203,   256,   307,   309,   574,   576,  1047,
    1231,  1281,   452,   505,   452,   608,   540,   340,  1296,  1281,
     212,   256,   266,   346,   416,   461,   511,   594,   595,  1234,
    1197,   256,   218,   306,  1320,   256,   469,    57,    64,   268,
     340,   396,   401,   505,   551,   552,   553,   554,   555,   556,
     557,   559,  1269,  1330,   199,   562,   563,   564,   547,   559,
     590,    22,   232,  1203,  1282,  1047,   232,   423,  1293,  1281,
      97,  1202,   234,   397,   607,   609,    28,   127,   212,   256,
     266,   280,   346,   416,   419,   420,   511,   579,   580,   581,
     584,   595,   443,   504,   598,  1312,  1228,   400,   401,   410,
      64,  1281,   452,   553,   452,   505,   552,    60,  1281,     9,
     370,   497,   565,   567,     1,   452,   564,   548,  1312,   256,
     592,  1232,  1293,   232,  1202,  1202,   575,   576,   452,     1,
     290,   312,  1255,   274,   388,   644,   645,   646,   647,   649,
     581,    17,   443,  1234,   328,  1281,   401,  1231,   452,  1281,
     505,  1198,   229,    26,   566,   229,   370,   452,   452,   108,
    1232,  1202,   452,   312,  1202,   650,   351,   412,   413,   648,
     530,     1,   452,   646,   582,   584,   256,  1231,   257,   435,
     495,   558,  1198,   256,   272,   610,   455,  1273,    23,  1264,
     103,   654,   452,   583,   584,    58,   506,  1324,   611,   438,
    1305,   189,  1274,   123,   455,   655,    17,     4,    19,    29,
      64,   220,   252,   315,   320,   351,   359,   372,   401,   404,
     412,   452,   455,   612,   613,   619,   621,   623,   624,   625,
     626,   627,   630,   631,   632,   633,   634,   639,   640,   642,
    1297,  1314,    87,  1271,   505,  1187,  1188,   452,   394,   656,
     584,   272,  1288,   351,  1313,   447,   498,  1309,   401,   402,
    1281,  1269,   114,   237,  1283,  1283,   287,   641,  1231,  1312,
     423,   262,    39,  1267,  1281,   651,   652,  1188,  1188,   452,
     173,   392,   531,   657,   658,   660,  1281,  1283,   126,   172,
     616,   351,   359,   631,  1281,  1281,  1281,  1281,  1264,     9,
     287,   349,   643,  1281,  1288,   402,   505,   652,   331,   653,
     507,   685,   687,   688,     1,  1188,   126,   347,   402,   620,
    1281,   118,   119,   120,   238,   252,   335,   347,   438,   614,
     615,   256,  1197,  1201,   419,  1197,  1197,   316,  1294,  1294,
     310,  1197,  1281,  1231,   394,   261,   741,   689,   690,   692,
     702,  1247,   452,   659,  1197,   256,   618,  1228,   618,     7,
     618,   618,   256,   617,  1228,   414,   453,   635,    33,   168,
     267,   628,   452,   394,   255,   743,   452,   690,   452,     1,
     176,   505,   693,   694,   505,   661,   125,   504,   635,  1249,
    1329,  1273,  1281,   636,   637,   504,   629,   629,   686,   452,
     394,   366,   745,   452,   452,   691,    86,    47,    63,   103,
     239,   250,   351,   352,   366,   368,   452,   499,   662,   663,
     665,   669,   670,   673,   674,   680,   681,   682,   683,  1281,
     125,   636,   432,   622,   638,  1197,   638,   262,   385,   687,
     742,   452,   394,   389,   796,   704,   695,  1281,  1271,  1281,
     351,   353,  1325,  1325,  1281,  1271,  1281,  1288,  1281,    22,
    1263,   306,   684,  1202,   172,   204,  1249,   502,   309,   687,
     744,   452,   394,   532,    21,    36,    39,    40,    41,    42,
      43,    44,    45,    74,    76,    77,    78,    79,    80,    81,
      82,   120,   179,   180,   181,   182,   183,   186,   187,   219,
     235,   277,   305,   319,   327,   330,   343,   355,   363,   405,
     407,   408,   409,   434,   478,   479,   480,   492,   499,   705,
     706,   707,   709,   710,   711,   712,   713,   714,   715,   718,
     730,   731,   732,   733,   734,   739,   740,  1281,  1301,    26,
     196,   703,  1265,   204,  1231,   505,  1281,  1263,   505,  1199,
    1200,   308,   418,  1321,  1201,  1231,   500,  1281,   175,   213,
     505,   671,  1202,   622,     9,   416,   511,   585,   274,   351,
     353,  1323,   687,   746,   452,   337,   810,   813,   244,   301,
     406,   477,  1300,   477,  1300,   477,  1300,   477,  1300,   477,
    1300,   502,  1310,   384,  1298,   126,  1231,  1225,  1228,  1228,
     232,   242,   384,  1284,  1281,  1282,   172,   204,   241,   469,
     505,     9,    50,   212,   244,   245,   256,   266,   346,   416,
     461,   511,   696,  1235,  1236,  1237,   447,   668,  1200,   254,
    1287,   447,  1270,   218,  1276,   505,  1281,  1281,  1235,  1323,
     747,   797,   123,   836,   837,   511,    53,   722,   447,   719,
     463,  1229,  1230,   443,   712,   736,   737,  1235,    26,   708,
     400,  1259,  1259,  1237,   306,  1291,     1,    40,    41,    42,
      43,    44,   179,   180,   181,   182,   183,   184,   185,   330,
     343,   697,   698,   699,   700,   701,   713,   714,  1225,   697,
     448,  1231,    58,   353,   664,   675,  1231,   410,  1302,   256,
     672,  1228,   672,   348,   748,   692,   702,   798,   799,   800,
      56,   498,   814,     1,     3,     5,    10,    18,    51,    52,
      61,    72,    75,    89,   112,   120,   122,   153,   164,   169,
     195,   202,   205,   206,   215,   222,   224,   227,   269,   273,
     275,   285,   311,   324,   349,   350,   360,   374,   375,   381,
     385,   393,   403,   412,   421,   426,   427,   430,   432,   439,
     452,   470,   476,   481,   508,   838,   839,   855,   860,   864,
     869,   884,   887,   891,   895,   896,   897,   902,   916,   920,
     923,   937,   941,   944,   947,   951,   952,   956,   966,   969,
     986,   988,   991,   995,  1001,  1013,  1021,  1022,  1025,  1026,
    1030,  1035,  1036,  1044,  1059,  1069,  1078,  1083,  1090,  1094,
    1096,  1099,  1102,  1106,  1133,   838,  1276,   196,   720,  1231,
     446,  1307,    83,   100,   192,   193,   194,   201,   245,   251,
     253,   258,   259,   260,   264,   303,   322,   377,   428,   429,
     459,   463,   464,   471,   491,   496,   503,  1175,  1177,  1178,
    1179,  1180,  1181,  1182,  1210,  1224,  1225,  1236,  1238,  1239,
    1240,  1241,   463,  1230,  1228,   735,   737,   443,   256,  1269,
     697,   452,  1237,    48,   466,   676,   677,   678,   679,  1312,
    1270,   196,   667,  1275,   505,  1189,     1,   693,   800,   452,
     816,   815,   376,   822,     3,     5,    10,    18,    51,    52,
      61,    72,    75,    89,   112,   120,   122,   129,   131,   132,
     133,   134,   135,   136,   137,   138,   140,   141,   142,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   164,
     169,   195,   202,   205,   206,   215,   222,   224,   227,   269,
     273,   275,   285,   311,   324,   349,   360,   375,   381,   385,
     393,   403,   412,   421,   426,   427,   430,   432,   439,   452,
     470,   476,   481,   508,  1260,   840,   856,   861,   865,   870,
     885,   888,   892,   898,   903,   917,   921,   924,   938,   942,
     945,   948,   203,   376,   879,   940,   953,   957,   967,   970,
     987,   989,   992,   399,   996,  1002,  1014,  1023,  1027,  1031,
    1037,  1045,  1060,  1070,   256,   346,   387,   416,   511,  1082,
    1084,  1091,   336,  1095,  1097,   825,  1100,  1103,  1107,  1134,
     505,  1231,   719,   115,   721,   463,  1243,  1225,  1236,  1238,
    1320,  1320,   463,   463,   463,   463,  1320,  1181,  1177,  1181,
     463,  1243,    71,   398,   449,  1176,   450,   459,   464,   451,
     460,   170,   463,  1242,   463,   463,  1177,   502,   738,  1311,
    1235,  1201,  1201,   188,   668,  1231,   749,   452,   801,   452,
      49,   817,   818,   819,  1268,   817,   505,   452,   308,   841,
     842,  1224,     6,    95,   245,   271,   857,  1182,  1206,  1207,
    1224,  1235,  1238,   862,  1177,  1224,   256,   866,   867,  1193,
    1194,  1195,  1228,   271,   422,   424,   871,   872,   256,   886,
    1215,  1224,   889,  1188,     6,   893,  1182,  1183,  1184,  1205,
    1226,  1227,  1228,  1236,   455,   899,  1188,   256,   904,   905,
     907,  1206,  1207,  1215,  1224,   918,  1207,   256,   922,   454,
     465,   925,   926,   927,  1165,  1166,  1167,   199,   323,   324,
     340,   394,   939,   943,  1204,  1205,   946,  1228,   447,   949,
    1308,  1207,  1164,  1165,   958,  1204,   968,  1189,   971,   972,
    1224,  1235,  1238,  1061,  1222,  1223,  1228,    95,   990,  1207,
     993,  1207,   171,   225,   233,   317,   997,   998,   191,   256,
    1003,  1007,  1008,  1009,  1193,  1216,  1224,  1228,  1238,  1312,
    1015,  1188,  1024,  1185,  1228,  1028,  1188,  1032,  1185,     9,
    1038,  1186,  1228,   154,   271,  1046,  1049,  1050,  1053,  1054,
    1055,  1056,  1057,  1058,  1190,  1191,  1204,  1221,  1223,  1228,
    1061,  1071,  1188,  1079,   113,  1085,  1086,  1087,  1207,    95,
    1092,  1206,  1098,  1189,   452,   505,   826,   827,   830,   831,
     836,  1101,  1224,  1104,  1188,  1108,  1224,  1135,  1185,   223,
     723,   309,  1292,   724,   725,   449,  1175,  1177,   505,   505,
    1177,  1246,  1246,  1246,  1209,  1224,  1236,  1238,  1245,   505,
     449,  1209,  1244,  1177,   449,  1177,  1178,  1178,  1179,  1179,
    1179,  1177,  1209,  1175,   403,   454,    30,  1266,  1270,     1,
     750,   802,   818,   410,   477,   820,   357,   499,   811,   131,
     854,    30,   844,   845,  1266,   196,  1291,  1224,  1225,  1236,
    1238,   132,   859,   447,   858,  1207,    58,   223,  1250,   867,
     447,  1320,   133,   883,   256,  1216,  1215,  1188,   356,   475,
     890,  1312,  1326,  1291,   134,   894,   160,   453,  1184,  1317,
     386,  1256,  1229,  1230,   900,  1188,   135,   901,  1297,   136,
     915,   166,   906,  1144,  1145,   485,   908,   504,   845,   486,
     487,   488,   489,   137,   919,    49,   228,   498,   873,   138,
     936,    17,   502,   928,   929,   930,   932,    12,    13,    14,
      20,   160,   170,   207,   208,   246,   247,   284,   290,   293,
     301,   308,   313,   332,   449,   451,   453,   456,   458,   459,
     460,   463,   464,  1168,  1169,  1170,  1171,  1172,  1173,  1174,
    1207,   102,   940,  1205,  1192,   442,  1306,   959,  1312,  1189,
      93,   365,   437,   973,   974,   976,   977,  1063,   463,  1229,
    1207,   447,   141,   994,    49,   998,   404,   999,  1008,   142,
     452,  1004,  1006,   482,   500,   443,   446,   440,   144,  1020,
     285,   334,  1253,   196,  1136,   145,  1029,  1297,   146,  1034,
    1136,  1186,   147,  1043,   500,  1039,  1213,  1224,  1236,  1056,
    1058,  1204,   447,  1191,   124,   447,   483,  1048,    31,  1229,
     148,  1077,   178,   237,   240,  1073,   879,  1080,  1312,  1268,
     149,  1089,   228,  1087,  1224,   150,  1093,   196,  1189,   394,
     452,   452,   196,   351,   353,  1105,   151,  1117,   113,  1109,
     152,  1140,  1136,   724,  1197,   220,   727,    27,   116,   726,
     449,  1176,   449,   449,   449,  1176,   449,  1176,   449,   449,
     450,   449,   449,   447,  1281,  1201,   115,   666,   452,    62,
      90,    91,   321,   452,   751,   752,   757,  1281,  1338,    32,
      35,    38,    45,    46,    65,    67,   161,   190,   196,   198,
     211,   243,   252,   265,   305,   318,   345,   371,   378,   395,
     447,   457,   474,   498,   710,   711,   715,   730,   732,   734,
     803,   808,   809,  1281,  1315,  1281,   410,   312,   821,   110,
     823,  1213,   197,   848,   252,   331,   846,   847,  1315,    24,
      25,    66,    68,    70,   104,   105,   106,   154,   156,   163,
     166,   252,   254,   444,   494,   505,   843,  1191,  1316,   153,
     340,  1211,  1225,   447,     6,  1182,  1183,  1207,  1228,  1236,
     203,   223,  1251,   376,   863,   339,   868,  1195,   873,   890,
     262,   287,  1274,  1225,  1177,   272,  1257,  1230,  1188,   231,
    1160,  1161,   833,   834,   907,  1207,   294,  1146,    97,   335,
     505,  1191,   298,   912,    35,    38,    45,    46,    92,   161,
     190,   211,   265,   318,   378,   391,   474,   913,   914,   485,
     909,  1144,  1144,  1144,  1144,  1207,  1183,  1207,   874,   927,
      21,   454,   465,   933,   934,  1166,   502,   930,   931,   502,
     833,  1308,   232,  1169,   115,   950,  1193,   129,   833,   954,
       9,    12,    15,    16,   277,   278,   301,   302,   960,   964,
     176,  1213,     9,    58,   178,   241,   469,   980,   981,   982,
     975,   976,  1065,  1292,  1329,   447,  1204,  1183,  1207,   999,
    1312,  1187,   833,   169,  1010,  1164,  1011,  1012,  1224,  1193,
       8,    37,  1138,  1297,  1220,  1224,  1235,  1238,   228,  1016,
    1033,  1312,   130,  1040,  1224,  1040,   447,   447,  1047,   153,
     454,   465,  1207,    49,    38,    46,   211,   243,   265,   318,
     378,   474,  1051,  1052,  1281,  1072,  1312,  1207,   162,   289,
     410,  1207,  1224,   196,  1183,  1207,   832,  1231,  1213,  1268,
     228,  1112,  1137,  1138,   727,  1268,  1283,  1197,  1242,  1242,
    1242,  1209,   241,   469,  1242,   449,  1177,  1242,  1242,  1235,
    1292,  1281,  1281,  1263,   248,   249,  1286,   767,   204,   177,
     753,   754,   755,   756,  1224,  1281,   252,   389,   157,   159,
    1281,  1220,   299,  1289,  1231,    57,  1224,  1224,   204,  1289,
      32,   111,  1231,  1281,   505,   452,   812,   272,   849,  1289,
    1289,   847,   846,  1289,   166,  1141,  1142,   510,   509,  1213,
    1141,   237,   423,   299,   276,   256,  1212,  1225,  1224,  1291,
     411,  1147,  1148,  1229,  1230,  1183,   447,  1252,   863,  1205,
     447,  1193,   878,   879,   380,   362,  1147,  1281,   833,   295,
    1162,   835,   833,  1144,  1281,   252,   389,   157,   159,  1281,
     124,   483,   914,  1144,    97,    98,   910,   849,   203,  1147,
     203,   875,   876,   877,  1268,    17,   443,   935,   316,   933,
    1292,   833,   129,   140,   955,  1308,   365,   961,  1308,   447,
      49,   981,   983,  1213,     9,    58,   241,   469,   978,   979,
    1213,  1066,  1314,   726,   218,   314,  1277,  1204,  1147,   203,
    1187,   643,   379,  1000,  1312,   142,  1005,     8,   196,  1016,
    1224,   130,  1153,  1155,  1160,   262,   287,   833,   502,   502,
    1041,  1042,  1213,  1212,  1207,  1047,  1047,  1047,  1047,  1047,
    1047,  1047,  1047,  1052,   290,   293,  1074,  1075,  1076,  1170,
    1254,  1160,   244,   410,  1328,   423,  1304,  1304,  1088,  1312,
    1224,  1147,   203,   452,   447,     9,  1110,  1111,  1248,  1113,
    1224,  1088,  1113,  1033,     7,  1261,   505,   728,   729,  1281,
     449,  1197,  1215,  1281,  1263,   256,   511,   758,   759,  1224,
    1233,   692,   768,   755,   756,   511,  1217,  1221,  1231,  1217,
    1281,  1307,  1281,  1281,    32,  1231,   824,   825,  1281,   504,
     850,  1217,  1217,  1217,   833,   294,  1143,  1141,  1256,  1225,
     833,   297,  1149,  1230,  1147,  1214,  1224,  1235,   166,   462,
     881,  1319,     6,   228,   308,   461,   880,  1280,    34,   281,
     282,   283,   344,   467,   468,   472,  1258,   833,   836,  1217,
    1217,  1163,  1219,  1221,  1231,  1163,   504,   911,  1183,  1184,
    1183,  1184,   876,   308,   820,    88,   357,   499,   934,  1165,
     833,  1224,   833,   499,   962,   963,   964,   965,  1306,   499,
    1214,  1213,    49,   984,   979,   189,   984,  1062,  1281,  1283,
     314,  1183,  1000,   262,   287,  1012,  1207,   217,  1017,  1312,
     833,   291,  1156,   262,  1165,  1164,  1041,  1170,  1224,  1171,
    1172,  1173,  1174,  1177,  1081,  1207,  1081,   462,  1150,  1151,
     330,  1256,  1183,   828,  1214,   313,  1213,   114,  1114,   437,
    1116,   158,   292,  1139,  1157,  1158,  1159,  1160,   321,  1191,
    1217,   729,  1196,  1197,   760,   252,   254,  1322,   505,   693,
     270,   329,   459,   464,   804,   805,   806,  1215,   804,   805,
     807,   825,    47,    32,    35,    38,    46,    92,   111,   190,
     198,   211,   243,   263,   265,   287,   288,   318,   345,   371,
     378,   391,   395,   436,   445,   474,   484,   490,   851,   852,
     853,  1141,   833,  1147,   833,   294,   882,   833,  1291,  1224,
     252,   254,  1327,   913,  1147,   361,  1147,   361,  1207,   963,
     103,  1272,  1308,   984,   984,  1214,     8,    37,   985,   225,
     498,  1067,  1197,  1064,  1147,   380,    49,   262,   237,  1018,
     216,   236,   262,   287,   501,   833,   833,   833,   833,   296,
    1152,  1281,  1147,  1147,   493,   829,  1118,  1111,  1276,    96,
    1115,  1276,  1150,   833,   833,  1159,   252,   254,  1285,  1197,
     178,   188,   210,   240,   761,   762,   763,   764,   765,   766,
     759,   769,  1217,  1217,   130,  1281,  1281,   853,    57,   124,
     483,     8,  1262,   852,   833,  1224,  1184,  1184,    49,   111,
     984,   457,  1279,  1279,   337,  1187,   203,   317,  1068,  1228,
    1207,  1281,  1019,  1154,  1155,  1156,  1160,   262,   262,   262,
     833,  1224,  1119,   452,  1224,  1276,  1224,   107,   117,  1331,
    1281,  1281,    55,    90,  1331,  1332,  1316,   770,   110,  1217,
    1217,  1281,  1163,  1163,  1218,  1221,  1233,  1147,  1147,  1207,
    1207,  1207,  1281,  1187,   337,   482,  1224,  1156,   128,   167,
     204,  1120,  1121,  1122,  1124,  1128,  1130,  1131,  1132,  1266,
    1274,  1224,  1281,   759,   759,   210,  1281,  1281,   209,   252,
     285,   305,   309,   333,   414,   431,   452,   473,   492,   500,
     710,   715,   716,   730,   732,   734,   771,   772,   776,   779,
     782,   783,   784,   785,   789,   790,   791,   793,   794,   795,
    1315,  1316,   452,  1215,  1007,  1281,  1164,    37,  1262,   340,
     108,   759,   759,   759,   221,  1278,   299,   787,   209,   321,
    1231,   285,   502,  1281,  1291,  1281,  1281,  1224,   329,   464,
     786,   788,  1233,   329,   464,   792,  1233,   299,   300,  1290,
    1263,  1007,   367,   418,  1303,   130,   421,  1129,  1292,   232,
    1281,   719,   321,  1164,  1210,  1208,  1210,    54,    90,   321,
     325,   326,   366,   382,   383,   773,  1331,  1332,  1333,  1334,
    1335,  1336,  1337,   120,   196,  1233,  1233,  1233,  1233,  1282,
    1224,   162,   166,  1318,     9,  1125,  1126,  1194,   285,   286,
     321,   329,   464,   777,   778,  1231,  1307,  1256,   373,   485,
     780,  1210,   188,   188,   210,   188,   210,   177,   774,  1224,
     177,   775,  1224,  1210,   337,  1295,   306,   338,   358,  1127,
    1126,   321,  1231,  1231,   721,  1292,  1224,    49,  1292,   306,
    1228,   425,   717,   177,   781,  1224,  1210,   171,   225,   233,
     317,  1123,  1187,  1231
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
#line 1370 "parser.y"
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
#line 1381 "parser.y"
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
#line 1417 "parser.y"
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
#line 1472 "parser.y"
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
#line 1501 "parser.y"
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
#line 1534 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 1540 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 1552 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 1562 "parser.y"
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
#line 1593 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 1600 "parser.y"
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
#line 1639 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 1640 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 1649 "parser.y"
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
#line 1658 "parser.y"
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
#line 1672 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 1676 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 1686 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 1695 "parser.y"
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
#line 1720 "parser.y"
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
#line 1738 "parser.y"
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
#line 1751 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 1780 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:
/* Line 1792 of yacc.c  */
#line 1787 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:
/* Line 1792 of yacc.c  */
#line 1794 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:
/* Line 1792 of yacc.c  */
#line 1801 "parser.y"
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
#line 1812 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:
/* Line 1792 of yacc.c  */
#line 1816 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:
/* Line 1792 of yacc.c  */
#line 1820 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:
/* Line 1792 of yacc.c  */
#line 1824 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:
/* Line 1792 of yacc.c  */
#line 1838 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:
/* Line 1792 of yacc.c  */
#line 1843 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:
/* Line 1792 of yacc.c  */
#line 1851 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:
/* Line 1792 of yacc.c  */
#line 1863 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:
/* Line 1792 of yacc.c  */
#line 1867 "parser.y"
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
#line 1888 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:
/* Line 1792 of yacc.c  */
#line 1892 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:
/* Line 1792 of yacc.c  */
#line 1899 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:
/* Line 1792 of yacc.c  */
#line 1904 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:
/* Line 1792 of yacc.c  */
#line 1915 "parser.y"
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
#line 1929 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:
/* Line 1792 of yacc.c  */
#line 1960 "parser.y"
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
#line 1979 "parser.y"
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
#line 1989 "parser.y"
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
#line 2002 "parser.y"
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
#line 2018 "parser.y"
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
#line 2028 "parser.y"
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
#line 2043 "parser.y"
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
#line 2056 "parser.y"
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
#line 2067 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 128:
/* Line 1792 of yacc.c  */
#line 2073 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 129:
/* Line 1792 of yacc.c  */
#line 2079 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:
/* Line 1792 of yacc.c  */
#line 2085 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 131:
/* Line 1792 of yacc.c  */
#line 2091 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:
/* Line 1792 of yacc.c  */
#line 2097 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 133:
/* Line 1792 of yacc.c  */
#line 2107 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 134:
/* Line 1792 of yacc.c  */
#line 2111 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 135:
/* Line 1792 of yacc.c  */
#line 2118 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 136:
/* Line 1792 of yacc.c  */
#line 2122 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 137:
/* Line 1792 of yacc.c  */
#line 2126 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 138:
/* Line 1792 of yacc.c  */
#line 2130 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 139:
/* Line 1792 of yacc.c  */
#line 2137 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 140:
/* Line 1792 of yacc.c  */
#line 2141 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:
/* Line 1792 of yacc.c  */
#line 2147 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:
/* Line 1792 of yacc.c  */
#line 2148 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 143:
/* Line 1792 of yacc.c  */
#line 2149 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 144:
/* Line 1792 of yacc.c  */
#line 2150 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 145:
/* Line 1792 of yacc.c  */
#line 2151 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 146:
/* Line 1792 of yacc.c  */
#line 2152 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 147:
/* Line 1792 of yacc.c  */
#line 2156 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:
/* Line 1792 of yacc.c  */
#line 2157 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:
/* Line 1792 of yacc.c  */
#line 2165 "parser.y"
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
#line 2179 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 151:
/* Line 1792 of yacc.c  */
#line 2183 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 152:
/* Line 1792 of yacc.c  */
#line 2191 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 153:
/* Line 1792 of yacc.c  */
#line 2198 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 154:
/* Line 1792 of yacc.c  */
#line 2202 "parser.y"
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
#line 2213 "parser.y"
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
#line 2233 "parser.y"
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
#line 2241 "parser.y"
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
#line 2251 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 159:
/* Line 1792 of yacc.c  */
#line 2252 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 160:
/* Line 1792 of yacc.c  */
#line 2259 "parser.y"
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
#line 2279 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:
/* Line 1792 of yacc.c  */
#line 2280 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:
/* Line 1792 of yacc.c  */
#line 2285 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 164:
/* Line 1792 of yacc.c  */
#line 2289 "parser.y"
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
#line 2310 "parser.y"
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
#line 2333 "parser.y"
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
#line 2414 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 168:
/* Line 1792 of yacc.c  */
#line 2418 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 169:
/* Line 1792 of yacc.c  */
#line 2427 "parser.y"
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
#line 2446 "parser.y"
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
#line 2462 "parser.y"
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
#line 2480 "parser.y"
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
#line 2498 "parser.y"
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
#line 2515 "parser.y"
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
#line 2532 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 178:
/* Line 1792 of yacc.c  */
#line 2540 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 180:
/* Line 1792 of yacc.c  */
#line 2549 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 183:
/* Line 1792 of yacc.c  */
#line 2564 "parser.y"
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
#line 2581 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 185:
/* Line 1792 of yacc.c  */
#line 2585 "parser.y"
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
#line 2619 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 202:
/* Line 1792 of yacc.c  */
#line 2625 "parser.y"
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
#line 2635 "parser.y"
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
#line 2648 "parser.y"
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
#line 2661 "parser.y"
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
#line 2684 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 213:
/* Line 1792 of yacc.c  */
#line 2691 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 217:
/* Line 1792 of yacc.c  */
#line 2704 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 220:
/* Line 1792 of yacc.c  */
#line 2716 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
    break;

  case 221:
/* Line 1792 of yacc.c  */
#line 2723 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 222:
/* Line 1792 of yacc.c  */
#line 2724 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 223:
/* Line 1792 of yacc.c  */
#line 2725 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 224:
/* Line 1792 of yacc.c  */
#line 2733 "parser.y"
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
#line 2762 "parser.y"
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
#line 2799 "parser.y"
    { (yyval) = cb_int (-1); }
    break;

  case 227:
/* Line 1792 of yacc.c  */
#line 2802 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(4) - (4)])));
  }
    break;

  case 228:
/* Line 1792 of yacc.c  */
#line 2807 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(3) - (3)])));
  }
    break;

  case 229:
/* Line 1792 of yacc.c  */
#line 2817 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 230:
/* Line 1792 of yacc.c  */
#line 2828 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 234:
/* Line 1792 of yacc.c  */
#line 2843 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
    break;

  case 236:
/* Line 1792 of yacc.c  */
#line 2851 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 237:
/* Line 1792 of yacc.c  */
#line 2856 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 238:
/* Line 1792 of yacc.c  */
#line 2861 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 241:
/* Line 1792 of yacc.c  */
#line 2870 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 242:
/* Line 1792 of yacc.c  */
#line 2874 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 245:
/* Line 1792 of yacc.c  */
#line 2890 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 246:
/* Line 1792 of yacc.c  */
#line 2895 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 247:
/* Line 1792 of yacc.c  */
#line 2900 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 248:
/* Line 1792 of yacc.c  */
#line 2905 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 249:
/* Line 1792 of yacc.c  */
#line 2916 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 250:
/* Line 1792 of yacc.c  */
#line 2927 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
    break;

  case 251:
/* Line 1792 of yacc.c  */
#line 2937 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 252:
/* Line 1792 of yacc.c  */
#line 2942 "parser.y"
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
#line 2967 "parser.y"
    {
    key_component_list = NULL;
  }
    break;

  case 258:
/* Line 1792 of yacc.c  */
#line 2977 "parser.y"
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
#line 2995 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 260:
/* Line 1792 of yacc.c  */
#line 3006 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
    break;

  case 263:
/* Line 1792 of yacc.c  */
#line 3020 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 264:
/* Line 1792 of yacc.c  */
#line 3027 "parser.y"
    { (yyval) = NULL; }
    break;

  case 265:
/* Line 1792 of yacc.c  */
#line 3028 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 266:
/* Line 1792 of yacc.c  */
#line 3029 "parser.y"
    { (yyval) = NULL; }
    break;

  case 269:
/* Line 1792 of yacc.c  */
#line 3038 "parser.y"
    {
	yyerrok;
  }
    break;

  case 274:
/* Line 1792 of yacc.c  */
#line 3057 "parser.y"
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
#line 3084 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 276:
/* Line 1792 of yacc.c  */
#line 3085 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 277:
/* Line 1792 of yacc.c  */
#line 3086 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 278:
/* Line 1792 of yacc.c  */
#line 3087 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 279:
/* Line 1792 of yacc.c  */
#line 3094 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 280:
/* Line 1792 of yacc.c  */
#line 3099 "parser.y"
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
#line 3126 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 289:
/* Line 1792 of yacc.c  */
#line 3135 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 292:
/* Line 1792 of yacc.c  */
#line 3149 "parser.y"
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
#line 3168 "parser.y"
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
#line 3185 "parser.y"
    {
	yyerrok;
  }
    break;

  case 296:
/* Line 1792 of yacc.c  */
#line 3192 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 297:
/* Line 1792 of yacc.c  */
#line 3196 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 300:
/* Line 1792 of yacc.c  */
#line 3207 "parser.y"
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
#line 3217 "parser.y"
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

  case 311:
/* Line 1792 of yacc.c  */
#line 3247 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
    break;

  case 315:
/* Line 1792 of yacc.c  */
#line 3260 "parser.y"
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
#line 3280 "parser.y"
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
#line 3315 "parser.y"
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
#line 3346 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 320:
/* Line 1792 of yacc.c  */
#line 3352 "parser.y"
    { (yyval) = NULL; }
    break;

  case 321:
/* Line 1792 of yacc.c  */
#line 3353 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 322:
/* Line 1792 of yacc.c  */
#line 3357 "parser.y"
    { (yyval) = NULL; }
    break;

  case 323:
/* Line 1792 of yacc.c  */
#line 3358 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 324:
/* Line 1792 of yacc.c  */
#line 3366 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 325:
/* Line 1792 of yacc.c  */
#line 3377 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 326:
/* Line 1792 of yacc.c  */
#line 3382 "parser.y"
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
#line 3405 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 332:
/* Line 1792 of yacc.c  */
#line 3417 "parser.y"
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
#line 3445 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 339:
/* Line 1792 of yacc.c  */
#line 3452 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 340:
/* Line 1792 of yacc.c  */
#line 3459 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 341:
/* Line 1792 of yacc.c  */
#line 3468 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
    break;

  case 342:
/* Line 1792 of yacc.c  */
#line 3480 "parser.y"
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
#line 3532 "parser.y"
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
#line 3552 "parser.y"
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
#line 3564 "parser.y"
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
#line 3607 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 350:
/* Line 1792 of yacc.c  */
#line 3613 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 351:
/* Line 1792 of yacc.c  */
#line 3622 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 352:
/* Line 1792 of yacc.c  */
#line 3625 "parser.y"
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 353:
/* Line 1792 of yacc.c  */
#line 3632 "parser.y"
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
#line 3652 "parser.y"
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

  case 359:
/* Line 1792 of yacc.c  */
#line 3667 "parser.y"
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
#line 3687 "parser.y"
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

  case 361:
/* Line 1792 of yacc.c  */
#line 3700 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 362:
/* Line 1792 of yacc.c  */
#line 3707 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 363:
/* Line 1792 of yacc.c  */
#line 3713 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 364:
/* Line 1792 of yacc.c  */
#line 3719 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 365:
/* Line 1792 of yacc.c  */
#line 3728 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 366:
/* Line 1792 of yacc.c  */
#line 3737 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 367:
/* Line 1792 of yacc.c  */
#line 3741 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
		(yyval)= NULL;
	} else {
		(yyval) = cb_null;
	}
  }
    break;

  case 368:
/* Line 1792 of yacc.c  */
#line 3752 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 369:
/* Line 1792 of yacc.c  */
#line 3753 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 370:
/* Line 1792 of yacc.c  */
#line 3754 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 371:
/* Line 1792 of yacc.c  */
#line 3755 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 372:
/* Line 1792 of yacc.c  */
#line 3760 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 373:
/* Line 1792 of yacc.c  */
#line 3764 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 374:
/* Line 1792 of yacc.c  */
#line 3768 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 375:
/* Line 1792 of yacc.c  */
#line 3772 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 376:
/* Line 1792 of yacc.c  */
#line 3776 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 377:
/* Line 1792 of yacc.c  */
#line 3780 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 378:
/* Line 1792 of yacc.c  */
#line 3784 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 379:
/* Line 1792 of yacc.c  */
#line 3788 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 380:
/* Line 1792 of yacc.c  */
#line 3792 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 381:
/* Line 1792 of yacc.c  */
#line 3796 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 382:
/* Line 1792 of yacc.c  */
#line 3800 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 383:
/* Line 1792 of yacc.c  */
#line 3804 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 384:
/* Line 1792 of yacc.c  */
#line 3808 "parser.y"
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
#line 3840 "parser.y"
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

  case 395:
/* Line 1792 of yacc.c  */
#line 3866 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 396:
/* Line 1792 of yacc.c  */
#line 3870 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 397:
/* Line 1792 of yacc.c  */
#line 3878 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 398:
/* Line 1792 of yacc.c  */
#line 3884 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 413:
/* Line 1792 of yacc.c  */
#line 3912 "parser.y"
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
#line 3936 "parser.y"
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

  case 415:
/* Line 1792 of yacc.c  */
#line 3963 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 416:
/* Line 1792 of yacc.c  */
#line 3967 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 417:
/* Line 1792 of yacc.c  */
#line 3976 "parser.y"
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

  case 418:
/* Line 1792 of yacc.c  */
#line 4001 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 421:
/* Line 1792 of yacc.c  */
#line 4017 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 422:
/* Line 1792 of yacc.c  */
#line 4021 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 423:
/* Line 1792 of yacc.c  */
#line 4025 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 424:
/* Line 1792 of yacc.c  */
#line 4029 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 425:
/* Line 1792 of yacc.c  */
#line 4033 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 426:
/* Line 1792 of yacc.c  */
#line 4037 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 427:
/* Line 1792 of yacc.c  */
#line 4041 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 428:
/* Line 1792 of yacc.c  */
#line 4045 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 429:
/* Line 1792 of yacc.c  */
#line 4049 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 430:
/* Line 1792 of yacc.c  */
#line 4053 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 431:
/* Line 1792 of yacc.c  */
#line 4057 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 432:
/* Line 1792 of yacc.c  */
#line 4061 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 433:
/* Line 1792 of yacc.c  */
#line 4065 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 434:
/* Line 1792 of yacc.c  */
#line 4070 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 435:
/* Line 1792 of yacc.c  */
#line 4075 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 436:
/* Line 1792 of yacc.c  */
#line 4079 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 437:
/* Line 1792 of yacc.c  */
#line 4083 "parser.y"
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
#line 4091 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 439:
/* Line 1792 of yacc.c  */
#line 4095 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 440:
/* Line 1792 of yacc.c  */
#line 4099 "parser.y"
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
#line 4107 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 442:
/* Line 1792 of yacc.c  */
#line 4111 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 443:
/* Line 1792 of yacc.c  */
#line 4115 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 444:
/* Line 1792 of yacc.c  */
#line 4119 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 445:
/* Line 1792 of yacc.c  */
#line 4123 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 446:
/* Line 1792 of yacc.c  */
#line 4127 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 447:
/* Line 1792 of yacc.c  */
#line 4131 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 448:
/* Line 1792 of yacc.c  */
#line 4135 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 449:
/* Line 1792 of yacc.c  */
#line 4139 "parser.y"
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
#line 4147 "parser.y"
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
#line 4155 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 452:
/* Line 1792 of yacc.c  */
#line 4159 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 453:
/* Line 1792 of yacc.c  */
#line 4163 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 454:
/* Line 1792 of yacc.c  */
#line 4167 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 455:
/* Line 1792 of yacc.c  */
#line 4171 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 456:
/* Line 1792 of yacc.c  */
#line 4175 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 461:
/* Line 1792 of yacc.c  */
#line 4195 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 462:
/* Line 1792 of yacc.c  */
#line 4201 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 463:
/* Line 1792 of yacc.c  */
#line 4214 "parser.y"
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
#line 4232 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 466:
/* Line 1792 of yacc.c  */
#line 4242 "parser.y"
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

  case 467:
/* Line 1792 of yacc.c  */
#line 4263 "parser.y"
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

  case 468:
/* Line 1792 of yacc.c  */
#line 4282 "parser.y"
    { (yyval) = NULL; }
    break;

  case 469:
/* Line 1792 of yacc.c  */
#line 4283 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 470:
/* Line 1792 of yacc.c  */
#line 4287 "parser.y"
    { (yyval) = NULL; }
    break;

  case 471:
/* Line 1792 of yacc.c  */
#line 4288 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 473:
/* Line 1792 of yacc.c  */
#line 4293 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 475:
/* Line 1792 of yacc.c  */
#line 4300 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 477:
/* Line 1792 of yacc.c  */
#line 4308 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 478:
/* Line 1792 of yacc.c  */
#line 4315 "parser.y"
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
#line 4338 "parser.y"
    { (yyval) = NULL; }
    break;

  case 480:
/* Line 1792 of yacc.c  */
#line 4341 "parser.y"
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
#line 4356 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 482:
/* Line 1792 of yacc.c  */
#line 4357 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 484:
/* Line 1792 of yacc.c  */
#line 4362 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 485:
/* Line 1792 of yacc.c  */
#line 4368 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 486:
/* Line 1792 of yacc.c  */
#line 4370 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 487:
/* Line 1792 of yacc.c  */
#line 4375 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 488:
/* Line 1792 of yacc.c  */
#line 4386 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
    break;

  case 489:
/* Line 1792 of yacc.c  */
#line 4397 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
    break;

  case 490:
/* Line 1792 of yacc.c  */
#line 4408 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 491:
/* Line 1792 of yacc.c  */
#line 4419 "parser.y"
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

  case 492:
/* Line 1792 of yacc.c  */
#line 4447 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 494:
/* Line 1792 of yacc.c  */
#line 4455 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 495:
/* Line 1792 of yacc.c  */
#line 4456 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 496:
/* Line 1792 of yacc.c  */
#line 4460 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 497:
/* Line 1792 of yacc.c  */
#line 4461 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 499:
/* Line 1792 of yacc.c  */
#line 4466 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 500:
/* Line 1792 of yacc.c  */
#line 4479 "parser.y"
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

  case 501:
/* Line 1792 of yacc.c  */
#line 4492 "parser.y"
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

  case 502:
/* Line 1792 of yacc.c  */
#line 4513 "parser.y"
    {
	check_pic_repeated ("ANY", SYN_CLAUSE_14);
	if (current_field->flag_item_based) {
		cb_error (_("BASED and ANY clause are mutually exclusive"));
	} else {
		current_field->flag_any_length = 1;
	}
  }
    break;

  case 503:
/* Line 1792 of yacc.c  */
#line 4522 "parser.y"
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

  case 505:
/* Line 1792 of yacc.c  */
#line 4537 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LOCAL_STORAGE_SECTION;
	current_storage = CB_STORAGE_LOCAL;
	if (current_program->nested_level) {
		cb_error (_("LOCAL-STORAGE not allowed in nested programs"));
	}
  }
    break;

  case 506:
/* Line 1792 of yacc.c  */
#line 4546 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 508:
/* Line 1792 of yacc.c  */
#line 4558 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 509:
/* Line 1792 of yacc.c  */
#line 4564 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 511:
/* Line 1792 of yacc.c  */
#line 4575 "parser.y"
    {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  }
    break;

  case 515:
/* Line 1792 of yacc.c  */
#line 4593 "parser.y"
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

  case 516:
/* Line 1792 of yacc.c  */
#line 4606 "parser.y"
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

  case 519:
/* Line 1792 of yacc.c  */
#line 4624 "parser.y"
    {
	yyerrok;
  }
    break;

  case 520:
/* Line 1792 of yacc.c  */
#line 4631 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 521:
/* Line 1792 of yacc.c  */
#line 4637 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
    break;

  case 524:
/* Line 1792 of yacc.c  */
#line 4648 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
    break;

  case 528:
/* Line 1792 of yacc.c  */
#line 4661 "parser.y"
    {
      current_report->control_final = 1;
  }
    break;

  case 531:
/* Line 1792 of yacc.c  */
#line 4673 "parser.y"
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), current_report->controls);
  }
    break;

  case 532:
/* Line 1792 of yacc.c  */
#line 4684 "parser.y"
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

  case 533:
/* Line 1792 of yacc.c  */
#line 4723 "parser.y"
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

  case 534:
/* Line 1792 of yacc.c  */
#line 4733 "parser.y"
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

  case 535:
/* Line 1792 of yacc.c  */
#line 4743 "parser.y"
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

  case 545:
/* Line 1792 of yacc.c  */
#line 4779 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_heading = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 546:
/* Line 1792 of yacc.c  */
#line 4790 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_first_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 547:
/* Line 1792 of yacc.c  */
#line 4801 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_control = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 548:
/* Line 1792 of yacc.c  */
#line 4812 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 549:
/* Line 1792 of yacc.c  */
#line 4823 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_footing = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 552:
/* Line 1792 of yacc.c  */
#line 4838 "parser.y"
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

  case 573:
/* Line 1792 of yacc.c  */
#line 4884 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
    break;

  case 574:
/* Line 1792 of yacc.c  */
#line 4891 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
    break;

  case 575:
/* Line 1792 of yacc.c  */
#line 4895 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
    break;

  case 578:
/* Line 1792 of yacc.c  */
#line 4901 "parser.y"
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
    break;

  case 579:
/* Line 1792 of yacc.c  */
#line 4908 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
    break;

  case 580:
/* Line 1792 of yacc.c  */
#line 4912 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
    break;

  case 581:
/* Line 1792 of yacc.c  */
#line 4918 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
    break;

  case 582:
/* Line 1792 of yacc.c  */
#line 4922 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 583:
/* Line 1792 of yacc.c  */
#line 4927 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
    break;

  case 584:
/* Line 1792 of yacc.c  */
#line 4933 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
    break;

  case 585:
/* Line 1792 of yacc.c  */
#line 4937 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 586:
/* Line 1792 of yacc.c  */
#line 4942 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
    break;

  case 587:
/* Line 1792 of yacc.c  */
#line 4949 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
    break;

  case 588:
/* Line 1792 of yacc.c  */
#line 4956 "parser.y"
    {
	if (CB_LITERAL ((yyvsp[(1) - (1)]))->sign > 0) {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
	} else {
		current_field->report_flag |= COB_REPORT_NEXT_GROUP_LINE;
	}
	current_field->next_group_line = cb_get_int((yyvsp[(1) - (1)]));
  }
    break;

  case 589:
/* Line 1792 of yacc.c  */
#line 4965 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 590:
/* Line 1792 of yacc.c  */
#line 4970 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 591:
/* Line 1792 of yacc.c  */
#line 4975 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
    break;

  case 596:
/* Line 1792 of yacc.c  */
#line 4989 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
	current_field->report_sum_list = (yyvsp[(3) - (4)]);
	build_sum_counter( current_report, current_field);
  }
    break;

  case 599:
/* Line 1792 of yacc.c  */
#line 4999 "parser.y"
    {
      current_field->report_sum_upon = (yyvsp[(2) - (2)]);
  }
    break;

  case 600:
/* Line 1792 of yacc.c  */
#line 5006 "parser.y"
    {
      current_field->report_reset = (yyvsp[(1) - (1)]);
  }
    break;

  case 601:
/* Line 1792 of yacc.c  */
#line 5010 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
    break;

  case 602:
/* Line 1792 of yacc.c  */
#line 5017 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_when = (yyvsp[(3) - (3)]);
  }
    break;

  case 604:
/* Line 1792 of yacc.c  */
#line 5029 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
	current_field->report_flag |= COB_REPORT_LINE;
  }
    break;

  case 606:
/* Line 1792 of yacc.c  */
#line 5041 "parser.y"
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
    break;

  case 607:
/* Line 1792 of yacc.c  */
#line 5047 "parser.y"
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

  case 608:
/* Line 1792 of yacc.c  */
#line 5062 "parser.y"
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

  case 612:
/* Line 1792 of yacc.c  */
#line 5085 "parser.y"
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

  case 613:
/* Line 1792 of yacc.c  */
#line 5102 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 614:
/* Line 1792 of yacc.c  */
#line 5106 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 615:
/* Line 1792 of yacc.c  */
#line 5113 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
    break;

  case 618:
/* Line 1792 of yacc.c  */
#line 5125 "parser.y"
    {
	current_field->report_column = cb_get_int ((yyvsp[(2) - (2)]));
	if(current_field->report_column > 0)
		current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
	else
		current_field->report_column = 0;
  }
    break;

  case 619:
/* Line 1792 of yacc.c  */
#line 5133 "parser.y"
    {
	current_field->report_column = cb_get_int ((yyvsp[(2) - (2)]));
	if(current_field->report_column > 0)
		current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
	else
		current_field->report_column = 0;
  }
    break;

  case 620:
/* Line 1792 of yacc.c  */
#line 5141 "parser.y"
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

  case 621:
/* Line 1792 of yacc.c  */
#line 5160 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
	current_field->report_source = (yyvsp[(3) - (4)]);
  }
    break;

  case 622:
/* Line 1792 of yacc.c  */
#line 5168 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
    break;

  case 623:
/* Line 1792 of yacc.c  */
#line 5176 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
    break;

  case 625:
/* Line 1792 of yacc.c  */
#line 5185 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 626:
/* Line 1792 of yacc.c  */
#line 5192 "parser.y"
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

  case 632:
/* Line 1792 of yacc.c  */
#line 5218 "parser.y"
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

  case 633:
/* Line 1792 of yacc.c  */
#line 5249 "parser.y"
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

  case 634:
/* Line 1792 of yacc.c  */
#line 5275 "parser.y"
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

  case 637:
/* Line 1792 of yacc.c  */
#line 5298 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 638:
/* Line 1792 of yacc.c  */
#line 5302 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 639:
/* Line 1792 of yacc.c  */
#line 5306 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 640:
/* Line 1792 of yacc.c  */
#line 5310 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 641:
/* Line 1792 of yacc.c  */
#line 5314 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 642:
/* Line 1792 of yacc.c  */
#line 5318 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 643:
/* Line 1792 of yacc.c  */
#line 5322 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 644:
/* Line 1792 of yacc.c  */
#line 5326 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 645:
/* Line 1792 of yacc.c  */
#line 5330 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 646:
/* Line 1792 of yacc.c  */
#line 5334 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 647:
/* Line 1792 of yacc.c  */
#line 5338 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 648:
/* Line 1792 of yacc.c  */
#line 5342 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 649:
/* Line 1792 of yacc.c  */
#line 5346 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 650:
/* Line 1792 of yacc.c  */
#line 5350 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 651:
/* Line 1792 of yacc.c  */
#line 5354 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 652:
/* Line 1792 of yacc.c  */
#line 5358 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 653:
/* Line 1792 of yacc.c  */
#line 5362 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 654:
/* Line 1792 of yacc.c  */
#line 5367 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 655:
/* Line 1792 of yacc.c  */
#line 5371 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 656:
/* Line 1792 of yacc.c  */
#line 5375 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 657:
/* Line 1792 of yacc.c  */
#line 5380 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 658:
/* Line 1792 of yacc.c  */
#line 5385 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 659:
/* Line 1792 of yacc.c  */
#line 5390 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 668:
/* Line 1792 of yacc.c  */
#line 5403 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 669:
/* Line 1792 of yacc.c  */
#line 5410 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 670:
/* Line 1792 of yacc.c  */
#line 5415 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 675:
/* Line 1792 of yacc.c  */
#line 5434 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 676:
/* Line 1792 of yacc.c  */
#line 5438 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 677:
/* Line 1792 of yacc.c  */
#line 5442 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 678:
/* Line 1792 of yacc.c  */
#line 5449 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 679:
/* Line 1792 of yacc.c  */
#line 5453 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 680:
/* Line 1792 of yacc.c  */
#line 5457 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 681:
/* Line 1792 of yacc.c  */
#line 5465 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 682:
/* Line 1792 of yacc.c  */
#line 5476 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 684:
/* Line 1792 of yacc.c  */
#line 5485 "parser.y"
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

  case 685:
/* Line 1792 of yacc.c  */
#line 5495 "parser.y"
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

  case 686:
/* Line 1792 of yacc.c  */
#line 5507 "parser.y"
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

  case 687:
/* Line 1792 of yacc.c  */
#line 5522 "parser.y"
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

  case 689:
/* Line 1792 of yacc.c  */
#line 5555 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 690:
/* Line 1792 of yacc.c  */
#line 5559 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 691:
/* Line 1792 of yacc.c  */
#line 5564 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 692:
/* Line 1792 of yacc.c  */
#line 5572 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 693:
/* Line 1792 of yacc.c  */
#line 5581 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 694:
/* Line 1792 of yacc.c  */
#line 5591 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 695:
/* Line 1792 of yacc.c  */
#line 5593 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 696:
/* Line 1792 of yacc.c  */
#line 5598 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 698:
/* Line 1792 of yacc.c  */
#line 5607 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 699:
/* Line 1792 of yacc.c  */
#line 5611 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("BY VALUE not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 701:
/* Line 1792 of yacc.c  */
#line 5623 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 702:
/* Line 1792 of yacc.c  */
#line 5631 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 703:
/* Line 1792 of yacc.c  */
#line 5639 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 704:
/* Line 1792 of yacc.c  */
#line 5647 "parser.y"
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

  case 705:
/* Line 1792 of yacc.c  */
#line 5676 "parser.y"
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

  case 707:
/* Line 1792 of yacc.c  */
#line 5709 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 708:
/* Line 1792 of yacc.c  */
#line 5718 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 709:
/* Line 1792 of yacc.c  */
#line 5724 "parser.y"
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

  case 711:
/* Line 1792 of yacc.c  */
#line 5752 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 712:
/* Line 1792 of yacc.c  */
#line 5758 "parser.y"
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

  case 717:
/* Line 1792 of yacc.c  */
#line 5796 "parser.y"
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

  case 719:
/* Line 1792 of yacc.c  */
#line 5814 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 720:
/* Line 1792 of yacc.c  */
#line 5824 "parser.y"
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

  case 721:
/* Line 1792 of yacc.c  */
#line 5868 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 724:
/* Line 1792 of yacc.c  */
#line 5879 "parser.y"
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

  case 725:
/* Line 1792 of yacc.c  */
#line 5927 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
	}
	YYERROR;
  }
    break;

  case 726:
/* Line 1792 of yacc.c  */
#line 5939 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 727:
/* Line 1792 of yacc.c  */
#line 5943 "parser.y"
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

  case 728:
/* Line 1792 of yacc.c  */
#line 5961 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 729:
/* Line 1792 of yacc.c  */
#line 5966 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 730:
/* Line 1792 of yacc.c  */
#line 5971 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 731:
/* Line 1792 of yacc.c  */
#line 5979 "parser.y"
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

  case 732:
/* Line 1792 of yacc.c  */
#line 6006 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 733:
/* Line 1792 of yacc.c  */
#line 6010 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 783:
/* Line 1792 of yacc.c  */
#line 6066 "parser.y"
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

  case 784:
/* Line 1792 of yacc.c  */
#line 6080 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 785:
/* Line 1792 of yacc.c  */
#line 6091 "parser.y"
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

  case 787:
/* Line 1792 of yacc.c  */
#line 6108 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 788:
/* Line 1792 of yacc.c  */
#line 6113 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 789:
/* Line 1792 of yacc.c  */
#line 6117 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 790:
/* Line 1792 of yacc.c  */
#line 6121 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 791:
/* Line 1792 of yacc.c  */
#line 6126 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 792:
/* Line 1792 of yacc.c  */
#line 6131 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 793:
/* Line 1792 of yacc.c  */
#line 6136 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 794:
/* Line 1792 of yacc.c  */
#line 6141 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 795:
/* Line 1792 of yacc.c  */
#line 6145 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 796:
/* Line 1792 of yacc.c  */
#line 6149 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 797:
/* Line 1792 of yacc.c  */
#line 6153 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 798:
/* Line 1792 of yacc.c  */
#line 6157 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 799:
/* Line 1792 of yacc.c  */
#line 6162 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 800:
/* Line 1792 of yacc.c  */
#line 6166 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 801:
/* Line 1792 of yacc.c  */
#line 6170 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 802:
/* Line 1792 of yacc.c  */
#line 6174 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 803:
/* Line 1792 of yacc.c  */
#line 6178 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 804:
/* Line 1792 of yacc.c  */
#line 6182 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 805:
/* Line 1792 of yacc.c  */
#line 6186 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 807:
/* Line 1792 of yacc.c  */
#line 6194 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 810:
/* Line 1792 of yacc.c  */
#line 6205 "parser.y"
    { (yyval) = NULL; }
    break;

  case 811:
/* Line 1792 of yacc.c  */
#line 6206 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 812:
/* Line 1792 of yacc.c  */
#line 6210 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 813:
/* Line 1792 of yacc.c  */
#line 6211 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 814:
/* Line 1792 of yacc.c  */
#line 6212 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 815:
/* Line 1792 of yacc.c  */
#line 6213 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 816:
/* Line 1792 of yacc.c  */
#line 6214 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 817:
/* Line 1792 of yacc.c  */
#line 6218 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 818:
/* Line 1792 of yacc.c  */
#line 6222 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 819:
/* Line 1792 of yacc.c  */
#line 6223 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 823:
/* Line 1792 of yacc.c  */
#line 6232 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 828:
/* Line 1792 of yacc.c  */
#line 6248 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 829:
/* Line 1792 of yacc.c  */
#line 6252 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 830:
/* Line 1792 of yacc.c  */
#line 6258 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 831:
/* Line 1792 of yacc.c  */
#line 6262 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 832:
/* Line 1792 of yacc.c  */
#line 6266 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 833:
/* Line 1792 of yacc.c  */
#line 6270 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 834:
/* Line 1792 of yacc.c  */
#line 6274 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 835:
/* Line 1792 of yacc.c  */
#line 6278 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 836:
/* Line 1792 of yacc.c  */
#line 6282 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 837:
/* Line 1792 of yacc.c  */
#line 6286 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 838:
/* Line 1792 of yacc.c  */
#line 6290 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 839:
/* Line 1792 of yacc.c  */
#line 6294 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 840:
/* Line 1792 of yacc.c  */
#line 6298 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  }
    break;

  case 841:
/* Line 1792 of yacc.c  */
#line 6302 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 842:
/* Line 1792 of yacc.c  */
#line 6306 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 843:
/* Line 1792 of yacc.c  */
#line 6310 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 844:
/* Line 1792 of yacc.c  */
#line 6314 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 845:
/* Line 1792 of yacc.c  */
#line 6318 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 846:
/* Line 1792 of yacc.c  */
#line 6322 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 847:
/* Line 1792 of yacc.c  */
#line 6328 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 848:
/* Line 1792 of yacc.c  */
#line 6332 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 849:
/* Line 1792 of yacc.c  */
#line 6336 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 850:
/* Line 1792 of yacc.c  */
#line 6340 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 851:
/* Line 1792 of yacc.c  */
#line 6344 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 852:
/* Line 1792 of yacc.c  */
#line 6348 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 853:
/* Line 1792 of yacc.c  */
#line 6352 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  }
    break;

  case 856:
/* Line 1792 of yacc.c  */
#line 6364 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 857:
/* Line 1792 of yacc.c  */
#line 6368 "parser.y"
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

  case 858:
/* Line 1792 of yacc.c  */
#line 6385 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 860:
/* Line 1792 of yacc.c  */
#line 6394 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 861:
/* Line 1792 of yacc.c  */
#line 6398 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 862:
/* Line 1792 of yacc.c  */
#line 6402 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 864:
/* Line 1792 of yacc.c  */
#line 6409 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 865:
/* Line 1792 of yacc.c  */
#line 6416 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 866:
/* Line 1792 of yacc.c  */
#line 6420 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 867:
/* Line 1792 of yacc.c  */
#line 6430 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 869:
/* Line 1792 of yacc.c  */
#line 6439 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 870:
/* Line 1792 of yacc.c  */
#line 6443 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 871:
/* Line 1792 of yacc.c  */
#line 6454 "parser.y"
    { (yyval) = NULL; }
    break;

  case 872:
/* Line 1792 of yacc.c  */
#line 6455 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 873:
/* Line 1792 of yacc.c  */
#line 6463 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 877:
/* Line 1792 of yacc.c  */
#line 6477 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 880:
/* Line 1792 of yacc.c  */
#line 6489 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 882:
/* Line 1792 of yacc.c  */
#line 6504 "parser.y"
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

  case 883:
/* Line 1792 of yacc.c  */
#line 6518 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 884:
/* Line 1792 of yacc.c  */
#line 6523 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 885:
/* Line 1792 of yacc.c  */
#line 6528 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 886:
/* Line 1792 of yacc.c  */
#line 6533 "parser.y"
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

  case 887:
/* Line 1792 of yacc.c  */
#line 6553 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 888:
/* Line 1792 of yacc.c  */
#line 6557 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 889:
/* Line 1792 of yacc.c  */
#line 6562 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 890:
/* Line 1792 of yacc.c  */
#line 6573 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 891:
/* Line 1792 of yacc.c  */
#line 6575 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 892:
/* Line 1792 of yacc.c  */
#line 6580 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 893:
/* Line 1792 of yacc.c  */
#line 6588 "parser.y"
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

  case 895:
/* Line 1792 of yacc.c  */
#line 6614 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 896:
/* Line 1792 of yacc.c  */
#line 6618 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("BY CONTENT not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 897:
/* Line 1792 of yacc.c  */
#line 6627 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("BY VALUE not allowed in CHAINED program"));
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 898:
/* Line 1792 of yacc.c  */
#line 6639 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 899:
/* Line 1792 of yacc.c  */
#line 6643 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 900:
/* Line 1792 of yacc.c  */
#line 6647 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 901:
/* Line 1792 of yacc.c  */
#line 6651 "parser.y"
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

  case 906:
/* Line 1792 of yacc.c  */
#line 6684 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 907:
/* Line 1792 of yacc.c  */
#line 6689 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 908:
/* Line 1792 of yacc.c  */
#line 6696 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 909:
/* Line 1792 of yacc.c  */
#line 6701 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 910:
/* Line 1792 of yacc.c  */
#line 6708 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 911:
/* Line 1792 of yacc.c  */
#line 6712 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 912:
/* Line 1792 of yacc.c  */
#line 6722 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 914:
/* Line 1792 of yacc.c  */
#line 6730 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 915:
/* Line 1792 of yacc.c  */
#line 6734 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 916:
/* Line 1792 of yacc.c  */
#line 6744 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 918:
/* Line 1792 of yacc.c  */
#line 6752 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 919:
/* Line 1792 of yacc.c  */
#line 6757 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 920:
/* Line 1792 of yacc.c  */
#line 6764 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 921:
/* Line 1792 of yacc.c  */
#line 6765 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 922:
/* Line 1792 of yacc.c  */
#line 6766 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 923:
/* Line 1792 of yacc.c  */
#line 6767 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 924:
/* Line 1792 of yacc.c  */
#line 6768 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 925:
/* Line 1792 of yacc.c  */
#line 6776 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 927:
/* Line 1792 of yacc.c  */
#line 6785 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 928:
/* Line 1792 of yacc.c  */
#line 6792 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 929:
/* Line 1792 of yacc.c  */
#line 6796 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 930:
/* Line 1792 of yacc.c  */
#line 6806 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 931:
/* Line 1792 of yacc.c  */
#line 6817 "parser.y"
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

  case 932:
/* Line 1792 of yacc.c  */
#line 6834 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 934:
/* Line 1792 of yacc.c  */
#line 6843 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 936:
/* Line 1792 of yacc.c  */
#line 6851 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 937:
/* Line 1792 of yacc.c  */
#line 6856 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 938:
/* Line 1792 of yacc.c  */
#line 6864 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 939:
/* Line 1792 of yacc.c  */
#line 6868 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 940:
/* Line 1792 of yacc.c  */
#line 6878 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 942:
/* Line 1792 of yacc.c  */
#line 6888 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 943:
/* Line 1792 of yacc.c  */
#line 6892 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 944:
/* Line 1792 of yacc.c  */
#line 6896 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 945:
/* Line 1792 of yacc.c  */
#line 6900 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 946:
/* Line 1792 of yacc.c  */
#line 6904 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 948:
/* Line 1792 of yacc.c  */
#line 6909 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 950:
/* Line 1792 of yacc.c  */
#line 6919 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 952:
/* Line 1792 of yacc.c  */
#line 6927 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 953:
/* Line 1792 of yacc.c  */
#line 6935 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 954:
/* Line 1792 of yacc.c  */
#line 6943 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 955:
/* Line 1792 of yacc.c  */
#line 6947 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 956:
/* Line 1792 of yacc.c  */
#line 6951 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 957:
/* Line 1792 of yacc.c  */
#line 6955 "parser.y"
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
#line 6977 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 964:
/* Line 1792 of yacc.c  */
#line 6983 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 965:
/* Line 1792 of yacc.c  */
#line 6984 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 968:
/* Line 1792 of yacc.c  */
#line 6995 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 969:
/* Line 1792 of yacc.c  */
#line 6999 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 970:
/* Line 1792 of yacc.c  */
#line 7003 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 971:
/* Line 1792 of yacc.c  */
#line 7007 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 972:
/* Line 1792 of yacc.c  */
#line 7011 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 973:
/* Line 1792 of yacc.c  */
#line 7015 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 974:
/* Line 1792 of yacc.c  */
#line 7019 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 975:
/* Line 1792 of yacc.c  */
#line 7023 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 976:
/* Line 1792 of yacc.c  */
#line 7027 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 977:
/* Line 1792 of yacc.c  */
#line 7031 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 978:
/* Line 1792 of yacc.c  */
#line 7035 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 979:
/* Line 1792 of yacc.c  */
#line 7039 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 980:
/* Line 1792 of yacc.c  */
#line 7043 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 981:
/* Line 1792 of yacc.c  */
#line 7047 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 982:
/* Line 1792 of yacc.c  */
#line 7051 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 983:
/* Line 1792 of yacc.c  */
#line 7055 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 984:
/* Line 1792 of yacc.c  */
#line 7062 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 985:
/* Line 1792 of yacc.c  */
#line 7066 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 986:
/* Line 1792 of yacc.c  */
#line 7076 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 988:
/* Line 1792 of yacc.c  */
#line 7085 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 989:
/* Line 1792 of yacc.c  */
#line 7089 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 990:
/* Line 1792 of yacc.c  */
#line 7093 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 991:
/* Line 1792 of yacc.c  */
#line 7097 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 992:
/* Line 1792 of yacc.c  */
#line 7101 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 993:
/* Line 1792 of yacc.c  */
#line 7108 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 994:
/* Line 1792 of yacc.c  */
#line 7112 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 995:
/* Line 1792 of yacc.c  */
#line 7122 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 997:
/* Line 1792 of yacc.c  */
#line 7131 "parser.y"
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

  case 998:
/* Line 1792 of yacc.c  */
#line 7149 "parser.y"
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

  case 1000:
/* Line 1792 of yacc.c  */
#line 7173 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1001:
/* Line 1792 of yacc.c  */
#line 7180 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1002:
/* Line 1792 of yacc.c  */
#line 7182 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1003:
/* Line 1792 of yacc.c  */
#line 7187 "parser.y"
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

  case 1004:
/* Line 1792 of yacc.c  */
#line 7198 "parser.y"
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

  case 1005:
/* Line 1792 of yacc.c  */
#line 7209 "parser.y"
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

  case 1006:
/* Line 1792 of yacc.c  */
#line 7223 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1007:
/* Line 1792 of yacc.c  */
#line 7227 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1008:
/* Line 1792 of yacc.c  */
#line 7233 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1009:
/* Line 1792 of yacc.c  */
#line 7235 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1010:
/* Line 1792 of yacc.c  */
#line 7241 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1011:
/* Line 1792 of yacc.c  */
#line 7250 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1012:
/* Line 1792 of yacc.c  */
#line 7258 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1013:
/* Line 1792 of yacc.c  */
#line 7264 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1014:
/* Line 1792 of yacc.c  */
#line 7271 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1015:
/* Line 1792 of yacc.c  */
#line 7273 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1016:
/* Line 1792 of yacc.c  */
#line 7278 "parser.y"
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

  case 1017:
/* Line 1792 of yacc.c  */
#line 7339 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1018:
/* Line 1792 of yacc.c  */
#line 7340 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1019:
/* Line 1792 of yacc.c  */
#line 7341 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1020:
/* Line 1792 of yacc.c  */
#line 7345 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1021:
/* Line 1792 of yacc.c  */
#line 7346 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1022:
/* Line 1792 of yacc.c  */
#line 7351 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1023:
/* Line 1792 of yacc.c  */
#line 7355 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1024:
/* Line 1792 of yacc.c  */
#line 7365 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1025:
/* Line 1792 of yacc.c  */
#line 7370 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1027:
/* Line 1792 of yacc.c  */
#line 7378 "parser.y"
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

  case 1028:
/* Line 1792 of yacc.c  */
#line 7399 "parser.y"
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

  case 1029:
/* Line 1792 of yacc.c  */
#line 7413 "parser.y"
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

  case 1030:
/* Line 1792 of yacc.c  */
#line 7435 "parser.y"
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

  case 1031:
/* Line 1792 of yacc.c  */
#line 7457 "parser.y"
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

  case 1032:
/* Line 1792 of yacc.c  */
#line 7477 "parser.y"
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

  case 1033:
/* Line 1792 of yacc.c  */
#line 7499 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1034:
/* Line 1792 of yacc.c  */
#line 7500 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1035:
/* Line 1792 of yacc.c  */
#line 7508 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1037:
/* Line 1792 of yacc.c  */
#line 7517 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1038:
/* Line 1792 of yacc.c  */
#line 7527 "parser.y"
    {
	begin_statement ("GENERATE", 0);
  }
    break;

  case 1040:
/* Line 1792 of yacc.c  */
#line 7536 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
		cb_emit_generate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1041:
/* Line 1792 of yacc.c  */
#line 7548 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1043:
/* Line 1792 of yacc.c  */
#line 7561 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1044:
/* Line 1792 of yacc.c  */
#line 7569 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1045:
/* Line 1792 of yacc.c  */
#line 7574 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1046:
/* Line 1792 of yacc.c  */
#line 7585 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1047:
/* Line 1792 of yacc.c  */
#line 7600 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1049:
/* Line 1792 of yacc.c  */
#line 7609 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1050:
/* Line 1792 of yacc.c  */
#line 7613 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1051:
/* Line 1792 of yacc.c  */
#line 7617 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1052:
/* Line 1792 of yacc.c  */
#line 7624 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1053:
/* Line 1792 of yacc.c  */
#line 7628 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1054:
/* Line 1792 of yacc.c  */
#line 7638 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1056:
/* Line 1792 of yacc.c  */
#line 7647 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1057:
/* Line 1792 of yacc.c  */
#line 7653 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1058:
/* Line 1792 of yacc.c  */
#line 7654 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1059:
/* Line 1792 of yacc.c  */
#line 7658 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1060:
/* Line 1792 of yacc.c  */
#line 7659 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1061:
/* Line 1792 of yacc.c  */
#line 7660 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1062:
/* Line 1792 of yacc.c  */
#line 7665 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1063:
/* Line 1792 of yacc.c  */
#line 7669 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1064:
/* Line 1792 of yacc.c  */
#line 7676 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1065:
/* Line 1792 of yacc.c  */
#line 7681 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1066:
/* Line 1792 of yacc.c  */
#line 7688 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1067:
/* Line 1792 of yacc.c  */
#line 7694 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1068:
/* Line 1792 of yacc.c  */
#line 7695 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1069:
/* Line 1792 of yacc.c  */
#line 7696 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1070:
/* Line 1792 of yacc.c  */
#line 7697 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1071:
/* Line 1792 of yacc.c  */
#line 7698 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1072:
/* Line 1792 of yacc.c  */
#line 7699 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1073:
/* Line 1792 of yacc.c  */
#line 7700 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1074:
/* Line 1792 of yacc.c  */
#line 7705 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1075:
/* Line 1792 of yacc.c  */
#line 7709 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1076:
/* Line 1792 of yacc.c  */
#line 7718 "parser.y"
    {
	begin_statement ("INITIATE", 0);
  }
    break;

  case 1078:
/* Line 1792 of yacc.c  */
#line 7726 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1079:
/* Line 1792 of yacc.c  */
#line 7733 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1080:
/* Line 1792 of yacc.c  */
#line 7745 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1083:
/* Line 1792 of yacc.c  */
#line 7758 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1084:
/* Line 1792 of yacc.c  */
#line 7762 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1085:
/* Line 1792 of yacc.c  */
#line 7766 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1090:
/* Line 1792 of yacc.c  */
#line 7782 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1091:
/* Line 1792 of yacc.c  */
#line 7786 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1092:
/* Line 1792 of yacc.c  */
#line 7796 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1093:
/* Line 1792 of yacc.c  */
#line 7806 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1094:
/* Line 1792 of yacc.c  */
#line 7814 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1095:
/* Line 1792 of yacc.c  */
#line 7815 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1096:
/* Line 1792 of yacc.c  */
#line 7819 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1097:
/* Line 1792 of yacc.c  */
#line 7820 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1098:
/* Line 1792 of yacc.c  */
#line 7821 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1099:
/* Line 1792 of yacc.c  */
#line 7822 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1100:
/* Line 1792 of yacc.c  */
#line 7823 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1101:
/* Line 1792 of yacc.c  */
#line 7824 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1102:
/* Line 1792 of yacc.c  */
#line 7828 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1103:
/* Line 1792 of yacc.c  */
#line 7829 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1104:
/* Line 1792 of yacc.c  */
#line 7834 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1105:
/* Line 1792 of yacc.c  */
#line 7839 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1106:
/* Line 1792 of yacc.c  */
#line 7845 "parser.y"
    { /* Nothing */ }
    break;

  case 1107:
/* Line 1792 of yacc.c  */
#line 7846 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1108:
/* Line 1792 of yacc.c  */
#line 7847 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1109:
/* Line 1792 of yacc.c  */
#line 7848 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1110:
/* Line 1792 of yacc.c  */
#line 7849 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1111:
/* Line 1792 of yacc.c  */
#line 7854 "parser.y"
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

  case 1112:
/* Line 1792 of yacc.c  */
#line 7881 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1113:
/* Line 1792 of yacc.c  */
#line 7885 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1114:
/* Line 1792 of yacc.c  */
#line 7892 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1115:
/* Line 1792 of yacc.c  */
#line 7896 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1116:
/* Line 1792 of yacc.c  */
#line 7905 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1118:
/* Line 1792 of yacc.c  */
#line 7917 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1120:
/* Line 1792 of yacc.c  */
#line 7925 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1121:
/* Line 1792 of yacc.c  */
#line 7929 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1122:
/* Line 1792 of yacc.c  */
#line 7939 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1124:
/* Line 1792 of yacc.c  */
#line 7948 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1125:
/* Line 1792 of yacc.c  */
#line 7952 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1126:
/* Line 1792 of yacc.c  */
#line 7959 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1127:
/* Line 1792 of yacc.c  */
#line 7963 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1128:
/* Line 1792 of yacc.c  */
#line 7973 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1130:
/* Line 1792 of yacc.c  */
#line 7981 "parser.y"
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

  case 1131:
/* Line 1792 of yacc.c  */
#line 8002 "parser.y"
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

  case 1132:
/* Line 1792 of yacc.c  */
#line 8025 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1133:
/* Line 1792 of yacc.c  */
#line 8026 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1134:
/* Line 1792 of yacc.c  */
#line 8027 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1135:
/* Line 1792 of yacc.c  */
#line 8028 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1136:
/* Line 1792 of yacc.c  */
#line 8032 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1137:
/* Line 1792 of yacc.c  */
#line 8033 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1138:
/* Line 1792 of yacc.c  */
#line 8037 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1139:
/* Line 1792 of yacc.c  */
#line 8038 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1140:
/* Line 1792 of yacc.c  */
#line 8039 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1141:
/* Line 1792 of yacc.c  */
#line 8041 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1142:
/* Line 1792 of yacc.c  */
#line 8052 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1144:
/* Line 1792 of yacc.c  */
#line 8063 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1145:
/* Line 1792 of yacc.c  */
#line 8068 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1146:
/* Line 1792 of yacc.c  */
#line 8074 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1147:
/* Line 1792 of yacc.c  */
#line 8079 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1148:
/* Line 1792 of yacc.c  */
#line 8087 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1149:
/* Line 1792 of yacc.c  */
#line 8095 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1150:
/* Line 1792 of yacc.c  */
#line 8102 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1151:
/* Line 1792 of yacc.c  */
#line 8106 "parser.y"
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

  case 1152:
/* Line 1792 of yacc.c  */
#line 8119 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1153:
/* Line 1792 of yacc.c  */
#line 8126 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1154:
/* Line 1792 of yacc.c  */
#line 8137 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1155:
/* Line 1792 of yacc.c  */
#line 8141 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1156:
/* Line 1792 of yacc.c  */
#line 8146 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1157:
/* Line 1792 of yacc.c  */
#line 8150 "parser.y"
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

  case 1158:
/* Line 1792 of yacc.c  */
#line 8161 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1159:
/* Line 1792 of yacc.c  */
#line 8167 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1160:
/* Line 1792 of yacc.c  */
#line 8168 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1161:
/* Line 1792 of yacc.c  */
#line 8172 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1162:
/* Line 1792 of yacc.c  */
#line 8173 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1163:
/* Line 1792 of yacc.c  */
#line 8176 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1164:
/* Line 1792 of yacc.c  */
#line 8178 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1165:
/* Line 1792 of yacc.c  */
#line 8183 "parser.y"
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

  case 1166:
/* Line 1792 of yacc.c  */
#line 8222 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1168:
/* Line 1792 of yacc.c  */
#line 8231 "parser.y"
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

  case 1169:
/* Line 1792 of yacc.c  */
#line 8257 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1170:
/* Line 1792 of yacc.c  */
#line 8258 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1171:
/* Line 1792 of yacc.c  */
#line 8263 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1172:
/* Line 1792 of yacc.c  */
#line 8267 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1173:
/* Line 1792 of yacc.c  */
#line 8271 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1174:
/* Line 1792 of yacc.c  */
#line 8275 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1175:
/* Line 1792 of yacc.c  */
#line 8279 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1176:
/* Line 1792 of yacc.c  */
#line 8283 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1177:
/* Line 1792 of yacc.c  */
#line 8287 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1178:
/* Line 1792 of yacc.c  */
#line 8293 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1179:
/* Line 1792 of yacc.c  */
#line 8294 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1182:
/* Line 1792 of yacc.c  */
#line 8304 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1183:
/* Line 1792 of yacc.c  */
#line 8308 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1184:
/* Line 1792 of yacc.c  */
#line 8318 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1185:
/* Line 1792 of yacc.c  */
#line 8328 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1187:
/* Line 1792 of yacc.c  */
#line 8336 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1188:
/* Line 1792 of yacc.c  */
#line 8346 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1189:
/* Line 1792 of yacc.c  */
#line 8356 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1191:
/* Line 1792 of yacc.c  */
#line 8365 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1192:
/* Line 1792 of yacc.c  */
#line 8372 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1193:
/* Line 1792 of yacc.c  */
#line 8376 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1194:
/* Line 1792 of yacc.c  */
#line 8386 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1196:
/* Line 1792 of yacc.c  */
#line 8398 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1197:
/* Line 1792 of yacc.c  */
#line 8406 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1198:
/* Line 1792 of yacc.c  */
#line 8410 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1199:
/* Line 1792 of yacc.c  */
#line 8414 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1200:
/* Line 1792 of yacc.c  */
#line 8421 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1201:
/* Line 1792 of yacc.c  */
#line 8425 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1202:
/* Line 1792 of yacc.c  */
#line 8435 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1203:
/* Line 1792 of yacc.c  */
#line 8446 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1205:
/* Line 1792 of yacc.c  */
#line 8455 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1206:
/* Line 1792 of yacc.c  */
#line 8460 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1207:
/* Line 1792 of yacc.c  */
#line 8467 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1208:
/* Line 1792 of yacc.c  */
#line 8468 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1209:
/* Line 1792 of yacc.c  */
#line 8473 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1210:
/* Line 1792 of yacc.c  */
#line 8478 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1211:
/* Line 1792 of yacc.c  */
#line 8485 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1212:
/* Line 1792 of yacc.c  */
#line 8489 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1213:
/* Line 1792 of yacc.c  */
#line 8497 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1214:
/* Line 1792 of yacc.c  */
#line 8504 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1215:
/* Line 1792 of yacc.c  */
#line 8508 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1216:
/* Line 1792 of yacc.c  */
#line 8518 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1217:
/* Line 1792 of yacc.c  */
#line 8525 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1224:
/* Line 1792 of yacc.c  */
#line 8540 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1225:
/* Line 1792 of yacc.c  */
#line 8541 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1226:
/* Line 1792 of yacc.c  */
#line 8545 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1227:
/* Line 1792 of yacc.c  */
#line 8546 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1228:
/* Line 1792 of yacc.c  */
#line 8553 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1229:
/* Line 1792 of yacc.c  */
#line 8562 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1232:
/* Line 1792 of yacc.c  */
#line 8574 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1233:
/* Line 1792 of yacc.c  */
#line 8578 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1234:
/* Line 1792 of yacc.c  */
#line 8582 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1235:
/* Line 1792 of yacc.c  */
#line 8586 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1236:
/* Line 1792 of yacc.c  */
#line 8590 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1237:
/* Line 1792 of yacc.c  */
#line 8594 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1238:
/* Line 1792 of yacc.c  */
#line 8598 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1239:
/* Line 1792 of yacc.c  */
#line 8602 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1240:
/* Line 1792 of yacc.c  */
#line 8611 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1241:
/* Line 1792 of yacc.c  */
#line 8615 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1242:
/* Line 1792 of yacc.c  */
#line 8624 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1245:
/* Line 1792 of yacc.c  */
#line 8638 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1248:
/* Line 1792 of yacc.c  */
#line 8652 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1249:
/* Line 1792 of yacc.c  */
#line 8656 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1250:
/* Line 1792 of yacc.c  */
#line 8666 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1252:
/* Line 1792 of yacc.c  */
#line 8674 "parser.y"
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

  case 1253:
/* Line 1792 of yacc.c  */
#line 8695 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1254:
/* Line 1792 of yacc.c  */
#line 8704 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1255:
/* Line 1792 of yacc.c  */
#line 8709 "parser.y"
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

  case 1256:
/* Line 1792 of yacc.c  */
#line 8727 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1257:
/* Line 1792 of yacc.c  */
#line 8728 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1259:
/* Line 1792 of yacc.c  */
#line 8733 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1260:
/* Line 1792 of yacc.c  */
#line 8740 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1261:
/* Line 1792 of yacc.c  */
#line 8741 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1262:
/* Line 1792 of yacc.c  */
#line 8746 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1263:
/* Line 1792 of yacc.c  */
#line 8752 "parser.y"
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

  case 1264:
/* Line 1792 of yacc.c  */
#line 8762 "parser.y"
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

  case 1265:
/* Line 1792 of yacc.c  */
#line 8777 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1266:
/* Line 1792 of yacc.c  */
#line 8783 "parser.y"
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

  case 1267:
/* Line 1792 of yacc.c  */
#line 8793 "parser.y"
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

  case 1268:
/* Line 1792 of yacc.c  */
#line 8809 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1270:
/* Line 1792 of yacc.c  */
#line 8819 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1271:
/* Line 1792 of yacc.c  */
#line 8831 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1272:
/* Line 1792 of yacc.c  */
#line 8835 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1273:
/* Line 1792 of yacc.c  */
#line 8842 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1274:
/* Line 1792 of yacc.c  */
#line 8846 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1275:
/* Line 1792 of yacc.c  */
#line 8851 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1276:
/* Line 1792 of yacc.c  */
#line 8856 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1277:
/* Line 1792 of yacc.c  */
#line 8863 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1278:
/* Line 1792 of yacc.c  */
#line 8864 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1279:
/* Line 1792 of yacc.c  */
#line 8865 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1280:
/* Line 1792 of yacc.c  */
#line 8866 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1281:
/* Line 1792 of yacc.c  */
#line 8867 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1282:
/* Line 1792 of yacc.c  */
#line 8868 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1283:
/* Line 1792 of yacc.c  */
#line 8873 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1286:
/* Line 1792 of yacc.c  */
#line 8886 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1287:
/* Line 1792 of yacc.c  */
#line 8890 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1288:
/* Line 1792 of yacc.c  */
#line 8900 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1289:
/* Line 1792 of yacc.c  */
#line 8904 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1290:
/* Line 1792 of yacc.c  */
#line 8910 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1291:
/* Line 1792 of yacc.c  */
#line 8922 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1292:
/* Line 1792 of yacc.c  */
#line 8926 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1293:
/* Line 1792 of yacc.c  */
#line 8930 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1294:
/* Line 1792 of yacc.c  */
#line 8938 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1295:
/* Line 1792 of yacc.c  */
#line 8949 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1296:
/* Line 1792 of yacc.c  */
#line 8953 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1297:
/* Line 1792 of yacc.c  */
#line 8959 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1298:
/* Line 1792 of yacc.c  */
#line 8960 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1299:
/* Line 1792 of yacc.c  */
#line 8961 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1300:
/* Line 1792 of yacc.c  */
#line 8962 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1301:
/* Line 1792 of yacc.c  */
#line 8969 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1303:
/* Line 1792 of yacc.c  */
#line 8978 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1304:
/* Line 1792 of yacc.c  */
#line 8984 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1305:
/* Line 1792 of yacc.c  */
#line 8985 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1306:
/* Line 1792 of yacc.c  */
#line 8989 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1307:
/* Line 1792 of yacc.c  */
#line 8990 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1308:
/* Line 1792 of yacc.c  */
#line 8991 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1309:
/* Line 1792 of yacc.c  */
#line 8995 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1310:
/* Line 1792 of yacc.c  */
#line 8996 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1311:
/* Line 1792 of yacc.c  */
#line 9001 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1312:
/* Line 1792 of yacc.c  */
#line 9005 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1313:
/* Line 1792 of yacc.c  */
#line 9015 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1315:
/* Line 1792 of yacc.c  */
#line 9024 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1316:
/* Line 1792 of yacc.c  */
#line 9028 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1317:
/* Line 1792 of yacc.c  */
#line 9032 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1318:
/* Line 1792 of yacc.c  */
#line 9039 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1319:
/* Line 1792 of yacc.c  */
#line 9043 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1320:
/* Line 1792 of yacc.c  */
#line 9053 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  }
    break;

  case 1323:
/* Line 1792 of yacc.c  */
#line 9071 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
  }
    break;

  case 1325:
/* Line 1792 of yacc.c  */
#line 9079 "parser.y"
    {
	begin_implicit_statement ();
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1326:
/* Line 1792 of yacc.c  */
#line 9087 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
		cb_emit_terminate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1327:
/* Line 1792 of yacc.c  */
#line 9099 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1329:
/* Line 1792 of yacc.c  */
#line 9107 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1330:
/* Line 1792 of yacc.c  */
#line 9120 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1332:
/* Line 1792 of yacc.c  */
#line 9128 "parser.y"
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

  case 1336:
/* Line 1792 of yacc.c  */
#line 9151 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1338:
/* Line 1792 of yacc.c  */
#line 9161 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1339:
/* Line 1792 of yacc.c  */
#line 9167 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1340:
/* Line 1792 of yacc.c  */
#line 9169 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1341:
/* Line 1792 of yacc.c  */
#line 9173 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1342:
/* Line 1792 of yacc.c  */
#line 9175 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1343:
/* Line 1792 of yacc.c  */
#line 9180 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1344:
/* Line 1792 of yacc.c  */
#line 9186 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1345:
/* Line 1792 of yacc.c  */
#line 9188 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1346:
/* Line 1792 of yacc.c  */
#line 9193 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1347:
/* Line 1792 of yacc.c  */
#line 9199 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1348:
/* Line 1792 of yacc.c  */
#line 9200 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1349:
/* Line 1792 of yacc.c  */
#line 9204 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1350:
/* Line 1792 of yacc.c  */
#line 9205 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1351:
/* Line 1792 of yacc.c  */
#line 9209 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1352:
/* Line 1792 of yacc.c  */
#line 9210 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1353:
/* Line 1792 of yacc.c  */
#line 9215 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1354:
/* Line 1792 of yacc.c  */
#line 9219 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1355:
/* Line 1792 of yacc.c  */
#line 9229 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1362:
/* Line 1792 of yacc.c  */
#line 9247 "parser.y"
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

  case 1363:
/* Line 1792 of yacc.c  */
#line 9272 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1364:
/* Line 1792 of yacc.c  */
#line 9276 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("GLOBAL is invalid in a user FUNCTION"));
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1365:
/* Line 1792 of yacc.c  */
#line 9288 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1366:
/* Line 1792 of yacc.c  */
#line 9298 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1367:
/* Line 1792 of yacc.c  */
#line 9303 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1368:
/* Line 1792 of yacc.c  */
#line 9308 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1369:
/* Line 1792 of yacc.c  */
#line 9313 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1370:
/* Line 1792 of yacc.c  */
#line 9321 "parser.y"
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

  case 1373:
/* Line 1792 of yacc.c  */
#line 9364 "parser.y"
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

  case 1374:
/* Line 1792 of yacc.c  */
#line 9404 "parser.y"
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

  case 1375:
/* Line 1792 of yacc.c  */
#line 9414 "parser.y"
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

  case 1380:
/* Line 1792 of yacc.c  */
#line 9444 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("USE AT is invalid in nested program"));
	}
  }
    break;

  case 1381:
/* Line 1792 of yacc.c  */
#line 9453 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1382:
/* Line 1792 of yacc.c  */
#line 9459 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1383:
/* Line 1792 of yacc.c  */
#line 9469 "parser.y"
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

  case 1384:
/* Line 1792 of yacc.c  */
#line 9500 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1387:
/* Line 1792 of yacc.c  */
#line 9516 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1389:
/* Line 1792 of yacc.c  */
#line 9528 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1390:
/* Line 1792 of yacc.c  */
#line 9537 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1391:
/* Line 1792 of yacc.c  */
#line 9538 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1392:
/* Line 1792 of yacc.c  */
#line 9543 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1393:
/* Line 1792 of yacc.c  */
#line 9547 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1394:
/* Line 1792 of yacc.c  */
#line 9551 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1395:
/* Line 1792 of yacc.c  */
#line 9555 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1396:
/* Line 1792 of yacc.c  */
#line 9561 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1397:
/* Line 1792 of yacc.c  */
#line 9562 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1400:
/* Line 1792 of yacc.c  */
#line 9572 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1401:
/* Line 1792 of yacc.c  */
#line 9576 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1404:
/* Line 1792 of yacc.c  */
#line 9593 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1406:
/* Line 1792 of yacc.c  */
#line 9603 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1409:
/* Line 1792 of yacc.c  */
#line 9616 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1411:
/* Line 1792 of yacc.c  */
#line 9626 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1414:
/* Line 1792 of yacc.c  */
#line 9641 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1416:
/* Line 1792 of yacc.c  */
#line 9651 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1419:
/* Line 1792 of yacc.c  */
#line 9668 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1421:
/* Line 1792 of yacc.c  */
#line 9679 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1427:
/* Line 1792 of yacc.c  */
#line 9702 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1428:
/* Line 1792 of yacc.c  */
#line 9711 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1432:
/* Line 1792 of yacc.c  */
#line 9728 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1433:
/* Line 1792 of yacc.c  */
#line 9737 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1436:
/* Line 1792 of yacc.c  */
#line 9754 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1438:
/* Line 1792 of yacc.c  */
#line 9764 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1439:
/* Line 1792 of yacc.c  */
#line 9774 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1440:
/* Line 1792 of yacc.c  */
#line 9778 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1441:
/* Line 1792 of yacc.c  */
#line 9788 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1442:
/* Line 1792 of yacc.c  */
#line 9795 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1443:
/* Line 1792 of yacc.c  */
#line 9801 "parser.y"
    {
	current_expr = NULL;
  }
    break;

  case 1444:
/* Line 1792 of yacc.c  */
#line 9805 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1448:
/* Line 1792 of yacc.c  */
#line 9818 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1449:
/* Line 1792 of yacc.c  */
#line 9826 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1450:
/* Line 1792 of yacc.c  */
#line 9827 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1451:
/* Line 1792 of yacc.c  */
#line 9829 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1452:
/* Line 1792 of yacc.c  */
#line 9830 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1453:
/* Line 1792 of yacc.c  */
#line 9831 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1454:
/* Line 1792 of yacc.c  */
#line 9832 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1455:
/* Line 1792 of yacc.c  */
#line 9833 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1456:
/* Line 1792 of yacc.c  */
#line 9835 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1457:
/* Line 1792 of yacc.c  */
#line 9836 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1458:
/* Line 1792 of yacc.c  */
#line 9837 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1459:
/* Line 1792 of yacc.c  */
#line 9838 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1460:
/* Line 1792 of yacc.c  */
#line 9839 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1461:
/* Line 1792 of yacc.c  */
#line 9840 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1462:
/* Line 1792 of yacc.c  */
#line 9842 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1463:
/* Line 1792 of yacc.c  */
#line 9843 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1464:
/* Line 1792 of yacc.c  */
#line 9844 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1465:
/* Line 1792 of yacc.c  */
#line 9846 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1466:
/* Line 1792 of yacc.c  */
#line 9847 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1467:
/* Line 1792 of yacc.c  */
#line 9848 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1468:
/* Line 1792 of yacc.c  */
#line 9849 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1469:
/* Line 1792 of yacc.c  */
#line 9850 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1470:
/* Line 1792 of yacc.c  */
#line 9853 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1471:
/* Line 1792 of yacc.c  */
#line 9854 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1480:
/* Line 1792 of yacc.c  */
#line 9884 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1481:
/* Line 1792 of yacc.c  */
#line 9888 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1485:
/* Line 1792 of yacc.c  */
#line 9899 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1486:
/* Line 1792 of yacc.c  */
#line 9900 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1487:
/* Line 1792 of yacc.c  */
#line 9901 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1488:
/* Line 1792 of yacc.c  */
#line 9905 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1489:
/* Line 1792 of yacc.c  */
#line 9906 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1490:
/* Line 1792 of yacc.c  */
#line 9907 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1491:
/* Line 1792 of yacc.c  */
#line 9912 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1492:
/* Line 1792 of yacc.c  */
#line 9915 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1493:
/* Line 1792 of yacc.c  */
#line 9919 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1494:
/* Line 1792 of yacc.c  */
#line 9920 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1495:
/* Line 1792 of yacc.c  */
#line 9921 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1496:
/* Line 1792 of yacc.c  */
#line 9924 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1497:
/* Line 1792 of yacc.c  */
#line 9925 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1498:
/* Line 1792 of yacc.c  */
#line 9936 "parser.y"
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

  case 1499:
/* Line 1792 of yacc.c  */
#line 9948 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1500:
/* Line 1792 of yacc.c  */
#line 9957 "parser.y"
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

  case 1501:
/* Line 1792 of yacc.c  */
#line 9973 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1502:
/* Line 1792 of yacc.c  */
#line 9982 "parser.y"
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

  case 1503:
/* Line 1792 of yacc.c  */
#line 9998 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1504:
/* Line 1792 of yacc.c  */
#line 10012 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1505:
/* Line 1792 of yacc.c  */
#line 10014 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1506:
/* Line 1792 of yacc.c  */
#line 10019 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1507:
/* Line 1792 of yacc.c  */
#line 10027 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1508:
/* Line 1792 of yacc.c  */
#line 10034 "parser.y"
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

  case 1509:
/* Line 1792 of yacc.c  */
#line 10054 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1510:
/* Line 1792 of yacc.c  */
#line 10058 "parser.y"
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

  case 1511:
/* Line 1792 of yacc.c  */
#line 10079 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1512:
/* Line 1792 of yacc.c  */
#line 10120 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1513:
/* Line 1792 of yacc.c  */
#line 10133 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1514:
/* Line 1792 of yacc.c  */
#line 10135 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1515:
/* Line 1792 of yacc.c  */
#line 10139 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1516:
/* Line 1792 of yacc.c  */
#line 10145 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1517:
/* Line 1792 of yacc.c  */
#line 10147 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1518:
/* Line 1792 of yacc.c  */
#line 10152 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1521:
/* Line 1792 of yacc.c  */
#line 10166 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1522:
/* Line 1792 of yacc.c  */
#line 10173 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1523:
/* Line 1792 of yacc.c  */
#line 10183 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1524:
/* Line 1792 of yacc.c  */
#line 10184 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1525:
/* Line 1792 of yacc.c  */
#line 10189 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1526:
/* Line 1792 of yacc.c  */
#line 10197 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1527:
/* Line 1792 of yacc.c  */
#line 10205 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1528:
/* Line 1792 of yacc.c  */
#line 10209 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1529:
/* Line 1792 of yacc.c  */
#line 10216 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1532:
/* Line 1792 of yacc.c  */
#line 10232 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1533:
/* Line 1792 of yacc.c  */
#line 10246 "parser.y"
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

  case 1534:
/* Line 1792 of yacc.c  */
#line 10263 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1535:
/* Line 1792 of yacc.c  */
#line 10267 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1538:
/* Line 1792 of yacc.c  */
#line 10276 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1539:
/* Line 1792 of yacc.c  */
#line 10283 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1540:
/* Line 1792 of yacc.c  */
#line 10287 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1545:
/* Line 1792 of yacc.c  */
#line 10298 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1546:
/* Line 1792 of yacc.c  */
#line 10302 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1547:
/* Line 1792 of yacc.c  */
#line 10306 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1548:
/* Line 1792 of yacc.c  */
#line 10310 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1549:
/* Line 1792 of yacc.c  */
#line 10314 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1550:
/* Line 1792 of yacc.c  */
#line 10318 "parser.y"
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

  case 1551:
/* Line 1792 of yacc.c  */
#line 10339 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1552:
/* Line 1792 of yacc.c  */
#line 10343 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1560:
/* Line 1792 of yacc.c  */
#line 10360 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1561:
/* Line 1792 of yacc.c  */
#line 10364 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1562:
/* Line 1792 of yacc.c  */
#line 10368 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1578:
/* Line 1792 of yacc.c  */
#line 10415 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1586:
/* Line 1792 of yacc.c  */
#line 10439 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1587:
/* Line 1792 of yacc.c  */
#line 10443 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1588:
/* Line 1792 of yacc.c  */
#line 10447 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1589:
/* Line 1792 of yacc.c  */
#line 10448 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1590:
/* Line 1792 of yacc.c  */
#line 10452 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1591:
/* Line 1792 of yacc.c  */
#line 10457 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1592:
/* Line 1792 of yacc.c  */
#line 10464 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1593:
/* Line 1792 of yacc.c  */
#line 10471 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1594:
/* Line 1792 of yacc.c  */
#line 10478 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1595:
/* Line 1792 of yacc.c  */
#line 10488 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1596:
/* Line 1792 of yacc.c  */
#line 10492 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1597:
/* Line 1792 of yacc.c  */
#line 10499 "parser.y"
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

  case 1598:
/* Line 1792 of yacc.c  */
#line 10509 "parser.y"
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

  case 1599:
/* Line 1792 of yacc.c  */
#line 10519 "parser.y"
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

  case 1600:
/* Line 1792 of yacc.c  */
#line 10529 "parser.y"
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

  case 1601:
/* Line 1792 of yacc.c  */
#line 10542 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1602:
/* Line 1792 of yacc.c  */
#line 10546 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1603:
/* Line 1792 of yacc.c  */
#line 10554 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1604:
/* Line 1792 of yacc.c  */
#line 10562 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1605:
/* Line 1792 of yacc.c  */
#line 10566 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1606:
/* Line 1792 of yacc.c  */
#line 10576 "parser.y"
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

  case 1607:
/* Line 1792 of yacc.c  */
#line 10591 "parser.y"
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

  case 1608:
/* Line 1792 of yacc.c  */
#line 10614 "parser.y"
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

  case 1609:
/* Line 1792 of yacc.c  */
#line 10634 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1610:
/* Line 1792 of yacc.c  */
#line 10641 "parser.y"
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

  case 1611:
/* Line 1792 of yacc.c  */
#line 10656 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1612:
/* Line 1792 of yacc.c  */
#line 10657 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1613:
/* Line 1792 of yacc.c  */
#line 10658 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1614:
/* Line 1792 of yacc.c  */
#line 10659 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1615:
/* Line 1792 of yacc.c  */
#line 10660 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1616:
/* Line 1792 of yacc.c  */
#line 10661 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1617:
/* Line 1792 of yacc.c  */
#line 10666 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1618:
/* Line 1792 of yacc.c  */
#line 10670 "parser.y"
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

  case 1619:
/* Line 1792 of yacc.c  */
#line 10687 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1620:
/* Line 1792 of yacc.c  */
#line 10691 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1621:
/* Line 1792 of yacc.c  */
#line 10697 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1622:
/* Line 1792 of yacc.c  */
#line 10698 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1623:
/* Line 1792 of yacc.c  */
#line 10699 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1624:
/* Line 1792 of yacc.c  */
#line 10700 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1625:
/* Line 1792 of yacc.c  */
#line 10701 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1626:
/* Line 1792 of yacc.c  */
#line 10702 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1627:
/* Line 1792 of yacc.c  */
#line 10703 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1628:
/* Line 1792 of yacc.c  */
#line 10710 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1629:
/* Line 1792 of yacc.c  */
#line 10714 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1630:
/* Line 1792 of yacc.c  */
#line 10718 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1631:
/* Line 1792 of yacc.c  */
#line 10722 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1632:
/* Line 1792 of yacc.c  */
#line 10726 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1633:
/* Line 1792 of yacc.c  */
#line 10730 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1634:
/* Line 1792 of yacc.c  */
#line 10734 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1635:
/* Line 1792 of yacc.c  */
#line 10738 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1636:
/* Line 1792 of yacc.c  */
#line 10742 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1637:
/* Line 1792 of yacc.c  */
#line 10746 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1649:
/* Line 1792 of yacc.c  */
#line 10773 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1650:
/* Line 1792 of yacc.c  */
#line 10777 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1651:
/* Line 1792 of yacc.c  */
#line 10781 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1652:
/* Line 1792 of yacc.c  */
#line 10788 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1653:
/* Line 1792 of yacc.c  */
#line 10792 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1654:
/* Line 1792 of yacc.c  */
#line 10796 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1655:
/* Line 1792 of yacc.c  */
#line 10803 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1656:
/* Line 1792 of yacc.c  */
#line 10810 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1657:
/* Line 1792 of yacc.c  */
#line 10817 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1658:
/* Line 1792 of yacc.c  */
#line 10827 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1659:
/* Line 1792 of yacc.c  */
#line 10834 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1660:
/* Line 1792 of yacc.c  */
#line 10844 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1661:
/* Line 1792 of yacc.c  */
#line 10851 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1662:
/* Line 1792 of yacc.c  */
#line 10862 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1663:
/* Line 1792 of yacc.c  */
#line 10870 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1664:
/* Line 1792 of yacc.c  */
#line 10871 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1665:
/* Line 1792 of yacc.c  */
#line 10875 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1666:
/* Line 1792 of yacc.c  */
#line 10876 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1667:
/* Line 1792 of yacc.c  */
#line 10880 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1668:
/* Line 1792 of yacc.c  */
#line 10881 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1669:
/* Line 1792 of yacc.c  */
#line 10886 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1670:
/* Line 1792 of yacc.c  */
#line 10890 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1671:
/* Line 1792 of yacc.c  */
#line 10897 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1672:
/* Line 1792 of yacc.c  */
#line 10901 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1673:
/* Line 1792 of yacc.c  */
#line 10908 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1674:
/* Line 1792 of yacc.c  */
#line 10909 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1675:
/* Line 1792 of yacc.c  */
#line 10910 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1676:
/* Line 1792 of yacc.c  */
#line 10914 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1677:
/* Line 1792 of yacc.c  */
#line 10915 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1678:
/* Line 1792 of yacc.c  */
#line 10919 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1679:
/* Line 1792 of yacc.c  */
#line 10920 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1680:
/* Line 1792 of yacc.c  */
#line 10921 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1681:
/* Line 1792 of yacc.c  */
#line 10926 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1682:
/* Line 1792 of yacc.c  */
#line 10930 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1683:
/* Line 1792 of yacc.c  */
#line 10942 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1684:
/* Line 1792 of yacc.c  */
#line 10947 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1685:
/* Line 1792 of yacc.c  */
#line 10955 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1686:
/* Line 1792 of yacc.c  */
#line 10959 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1687:
/* Line 1792 of yacc.c  */
#line 10963 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1688:
/* Line 1792 of yacc.c  */
#line 10967 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1689:
/* Line 1792 of yacc.c  */
#line 10971 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1690:
/* Line 1792 of yacc.c  */
#line 10975 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1691:
/* Line 1792 of yacc.c  */
#line 10979 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1692:
/* Line 1792 of yacc.c  */
#line 10983 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1693:
/* Line 1792 of yacc.c  */
#line 10989 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1694:
/* Line 1792 of yacc.c  */
#line 10990 "parser.y"
    { (yyval) = cb_int1; }
    break;


/* Line 1792 of yacc.c  */
#line 18330 "parser.c"
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
#line 11161 "parser.y"

