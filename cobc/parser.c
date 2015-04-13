/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
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



/* Line 268 of yacc.c  */
#line 796 "parser.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
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


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 1352 "parser.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  514
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  828
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1935
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2757

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
    1693,  1696,  1697,  1699,  1701,  1703,  1705,  1708,  1710,  1715,
    1718,  1722,  1723,  1724,  1730,  1731,  1733,  1736,  1740,  1742,
    1743,  1748,  1752,  1753,  1756,  1759,  1762,  1764,  1766,  1769,
    1772,  1774,  1776,  1778,  1780,  1782,  1784,  1786,  1788,  1790,
    1792,  1797,  1799,  1801,  1807,  1813,  1817,  1821,  1823,  1825,
    1827,  1829,  1831,  1833,  1835,  1837,  1840,  1843,  1846,  1848,
    1850,  1852,  1854,  1855,  1857,  1859,  1860,  1862,  1864,  1868,
    1871,  1872,  1873,  1874,  1884,  1885,  1890,  1891,  1892,  1896,
    1897,  1901,  1903,  1906,  1911,  1912,  1915,  1918,  1919,  1923,
    1927,  1932,  1937,  1941,  1942,  1944,  1945,  1948,  1949,  1950,
    1958,  1959,  1962,  1964,  1966,  1969,  1971,  1973,  1974,  1981,
    1982,  1985,  1988,  1990,  1991,  1993,  1994,  1995,  1999,  2000,
    2003,  2006,  2008,  2010,  2012,  2014,  2016,  2018,  2020,  2022,
    2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,
    2044,  2046,  2048,  2050,  2052,  2054,  2056,  2058,  2060,  2062,
    2064,  2066,  2068,  2070,  2072,  2074,  2076,  2078,  2080,  2082,
    2084,  2086,  2088,  2090,  2092,  2094,  2096,  2098,  2100,  2102,
    2104,  2107,  2110,  2111,  2116,  2123,  2127,  2131,  2136,  2140,
    2145,  2149,  2153,  2158,  2163,  2167,  2172,  2176,  2181,  2187,
    2191,  2196,  2200,  2204,  2206,  2208,  2210,  2213,  2214,  2216,
    2220,  2224,  2227,  2230,  2233,  2237,  2241,  2245,  2246,  2248,
    2249,  2253,  2254,  2257,  2259,  2262,  2264,  2266,  2268,  2270,
    2272,  2274,  2276,  2278,  2280,  2282,  2284,  2286,  2291,  2293,
    2295,  2297,  2299,  2301,  2304,  2306,  2308,  2312,  2316,  2320,
    2324,  2328,  2330,  2332,  2333,  2335,  2336,  2341,  2346,  2352,
    2359,  2360,  2363,  2364,  2366,  2367,  2371,  2375,  2380,  2381,
    2384,  2385,  2389,  2391,  2394,  2399,  2400,  2403,  2404,  2409,
    2416,  2417,  2419,  2421,  2423,  2424,  2425,  2429,  2431,  2434,
    2437,  2441,  2442,  2445,  2448,  2451,  2452,  2456,  2459,  2464,
    2466,  2468,  2470,  2472,  2473,  2476,  2477,  2480,  2481,  2483,
    2484,  2488,  2490,  2493,  2494,  2498,  2501,  2505,  2506,  2508,
    2512,  2516,  2519,  2520,  2525,  2530,  2531,  2533,  2535,  2537,
    2538,  2543,  2547,  2550,  2552,  2555,  2556,  2558,  2559,  2564,
    2568,  2572,  2576,  2580,  2585,  2588,  2593,  2595,  2596,  2600,
    2606,  2607,  2610,  2613,  2616,  2619,  2620,  2623,  2625,  2627,
    2628,  2631,  2632,  2634,  2636,  2639,  2641,  2644,  2647,  2649,
    2651,  2654,  2657,  2659,  2661,  2663,  2665,  2667,  2671,  2675,
    2679,  2683,  2684,  2686,  2687,  2692,  2697,  2704,  2711,  2720,
    2729,  2730,  2732,  2733,  2737,  2740,  2741,  2746,  2749,  2751,
    2755,  2757,  2759,  2761,  2764,  2766,  2768,  2771,  2774,  2778,
    2781,  2785,  2787,  2791,  2794,  2796,  2798,  2800,  2801,  2804,
    2805,  2807,  2808,  2812,  2813,  2816,  2818,  2821,  2823,  2825,
    2827,  2828,  2831,  2832,  2836,  2838,  2839,  2843,  2845,  2846,
    2850,  2854,  2855,  2859,  2862,  2863,  2870,  2874,  2877,  2879,
    2880,  2882,  2883,  2887,  2893,  2894,  2897,  2898,  2902,  2906,
    2907,  2910,  2912,  2915,  2920,  2922,  2924,  2926,  2928,  2930,
    2932,  2934,  2935,  2939,  2940,  2944,  2946,  2949,  2950,  2954,
    2957,  2959,  2961,  2963,  2966,  2968,  2970,  2972,  2973,  2977,
    2980,  2986,  2988,  2991,  2994,  2997,  2999,  3001,  3003,  3006,
    3008,  3011,  3016,  3019,  3020,  3022,  3024,  3026,  3028,  3033,
    3034,  3037,  3041,  3045,  3046,  3050,  3051,  3055,  3059,  3064,
    3065,  3070,  3075,  3082,  3083,  3085,  3086,  3090,  3095,  3101,
    3103,  3105,  3107,  3109,  3110,  3114,  3115,  3119,  3122,  3124,
    3125,  3129,  3132,  3133,  3138,  3141,  3142,  3144,  3146,  3148,
    3150,  3154,  3155,  3158,  3160,  3164,  3168,  3169,  3173,  3175,
    3177,  3179,  3183,  3191,  3192,  3197,  3205,  3206,  3209,  3210,
    3213,  3216,  3220,  3224,  3228,  3231,  3232,  3236,  3238,  3240,
    3241,  3243,  3245,  3246,  3250,  3253,  3255,  3256,  3261,  3266,
    3267,  3269,  3270,  3275,  3280,  3281,  3284,  3288,  3289,  3291,
    3293,  3294,  3299,  3304,  3311,  3312,  3315,  3316,  3319,  3321,
    3324,  3328,  3329,  3331,  3332,  3336,  3338,  3340,  3342,  3344,
    3346,  3348,  3350,  3352,  3354,  3356,  3361,  3365,  3367,  3370,
    3373,  3376,  3379,  3382,  3385,  3388,  3391,  3394,  3399,  3403,
    3408,  3410,  3413,  3417,  3419,  3422,  3426,  3430,  3431,  3435,
    3436,  3444,  3445,  3451,  3452,  3455,  3456,  3459,  3460,  3464,
    3465,  3468,  3473,  3474,  3477,  3482,  3483,  3488,  3493,  3494,
    3498,  3499,  3504,  3506,  3508,  3510,  3513,  3516,  3519,  3522,
    3524,  3526,  3529,  3531,  3532,  3534,  3535,  3540,  3543,  3544,
    3547,  3552,  3557,  3558,  3560,  3562,  3564,  3566,  3568,  3569,
    3574,  3580,  3582,  3585,  3587,  3591,  3595,  3596,  3601,  3602,
    3604,  3605,  3610,  3615,  3622,  3629,  3630,  3632,  3635,  3636,
    3638,  3639,  3643,  3645,  3648,  3649,  3653,  3659,  3660,  3664,
    3667,  3668,  3670,  3672,  3673,  3678,  3685,  3686,  3690,  3692,
    3696,  3699,  3702,  3705,  3709,  3710,  3714,  3715,  3719,  3720,
    3724,  3725,  3727,  3728,  3732,  3734,  3736,  3738,  3740,  3742,
    3750,  3751,  3753,  3755,  3757,  3759,  3761,  3763,  3768,  3770,
    3773,  3775,  3778,  3782,  3783,  3785,  3788,  3790,  3794,  3796,
    3798,  3803,  3805,  3807,  3809,  3810,  3815,  3821,  3822,  3825,
    3826,  3831,  3835,  3839,  3841,  3843,  3845,  3847,  3848,  3850,
    3853,  3854,  3857,  3858,  3861,  3864,  3865,  3868,  3869,  3872,
    3875,  3876,  3879,  3880,  3883,  3886,  3887,  3890,  3891,  3894,
    3897,  3899,  3902,  3904,  3906,  3909,  3912,  3915,  3917,  3919,
    3922,  3925,  3928,  3929,  3932,  3933,  3936,  3937,  3940,  3942,
    3944,  3945,  3948,  3950,  3953,  3956,  3958,  3960,  3962,  3964,
    3966,  3968,  3970,  3972,  3974,  3976,  3978,  3980,  3982,  3984,
    3986,  3988,  3990,  3992,  3994,  3996,  3998,  4000,  4002,  4004,
    4006,  4009,  4011,  4013,  4015,  4017,  4019,  4021,  4023,  4027,
    4028,  4030,  4032,  4036,  4040,  4042,  4046,  4050,  4052,  4056,
    4058,  4061,  4064,  4066,  4070,  4072,  4074,  4078,  4080,  4084,
    4086,  4090,  4092,  4095,  4098,  4100,  4102,  4104,  4107,  4109,
    4111,  4113,  4116,  4118,  4119,  4122,  4124,  4126,  4128,  4132,
    4134,  4136,  4139,  4141,  4143,  4145,  4148,  4150,  4152,  4154,
    4156,  4158,  4160,  4163,  4165,  4167,  4171,  4173,  4176,  4178,
    4180,  4182,  4184,  4187,  4190,  4193,  4198,  4202,  4204,  4206,
    4209,  4211,  4213,  4215,  4217,  4219,  4221,  4223,  4226,  4229,
    4232,  4234,  4236,  4238,  4240,  4242,  4244,  4246,  4248,  4250,
    4252,  4254,  4256,  4258,  4260,  4262,  4264,  4266,  4268,  4270,
    4272,  4274,  4276,  4278,  4280,  4282,  4284,  4287,  4289,  4293,
    4296,  4299,  4301,  4303,  4305,  4309,  4312,  4315,  4317,  4319,
    4323,  4327,  4332,  4338,  4340,  4342,  4344,  4346,  4348,  4350,
    4352,  4354,  4356,  4358,  4360,  4362,  4365,  4367,  4371,  4373,
    4375,  4377,  4379,  4381,  4383,  4385,  4388,  4394,  4400,  4406,
    4411,  4417,  4423,  4429,  4432,  4435,  4437,  4439,  4441,  4443,
    4445,  4447,  4449,  4451,  4453,  4455,  4457,  4458,  4463,  4469,
    4470,  4474,  4477,  4479,  4483,  4487,  4489,  4493,  4495,  4499,
    4500,  4501,  4503,  4504,  4506,  4507,  4509,  4510,  4513,  4514,
    4517,  4518,  4520,  4522,  4523,  4525,  4526,  4528,  4531,  4532,
    4535,  4536,  4540,  4542,  4544,  4546,  4548,  4550,  4552,  4554,
    4556,  4557,  4560,  4562,  4564,  4566,  4568,  4570,  4572,  4574,
    4576,  4578,  4580,  4582,  4584,  4586,  4588,  4590,  4592,  4594,
    4596,  4598,  4600,  4602,  4604,  4606,  4608,  4610,  4612,  4614,
    4616,  4618,  4620,  4622,  4624,  4626,  4628,  4630,  4632,  4634,
    4636,  4638,  4640,  4642,  4644,  4646,  4648,  4650,  4652,  4654,
    4656,  4658,  4660,  4662,  4664,  4666,  4668,  4670,  4672,  4674,
    4676,  4678,  4680,  4682,  4684,  4686,  4688,  4690,  4692,  4694,
    4696,  4698,  4700,  4701,  4703,  4704,  4706,  4707,  4709,  4710,
    4712,  4713,  4715,  4716,  4718,  4719,  4721,  4722,  4724,  4725,
    4727,  4728,  4730,  4731,  4733,  4734,  4736,  4737,  4739,  4740,
    4742,  4743,  4745,  4746,  4748,  4749,  4751,  4754,  4755,  4757,
    4758,  4760,  4761,  4763,  4764,  4766,  4767,  4769,  4771,  4772,
    4774,  4775,  4777,  4779,  4780,  4783,  4786,  4787,  4789,  4790,
    4792,  4793,  4795,  4796,  4798,  4800,  4801,  4803,  4804,  4806,
    4807,  4810,  4812,  4814,  4815,  4817,  4818,  4820,  4821,  4823,
    4824,  4826,  4827,  4829,  4830,  4832,  4833,  4835,  4836,  4838,
    4841,  4842,  4844,  4845,  4847,  4848,  4850,  4851,  4853,  4854,
    4856,  4857,  4859,  4860,  4862,  4863,  4865,  4867,  4868,  4870,
    4871,  4875,  4876,  4878,  4879,  4881,  4884,  4886,  4888,  4890,
    4892,  4894,  4896,  4898,  4900,  4902,  4904,  4906,  4908,  4910,
    4912,  4914,  4916,  4918,  4920,  4922,  4924,  4926,  4929,  4932,
    4934,  4936,  4938,  4940,  4942,  4944,  4947,  4949,  4953,  4956,
    4958,  4960,  4962,  4965,  4967,  4970,  4972,  4975,  4977,  4980,
    4982,  4985,  4987,  4990,  4992,  4995
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
     655,   656,   657,   532,   686,   743,   745,   747,   800,   533,
     814,    -1,    -1,   342,   453,   537,   538,   535,   539,   453,
      -1,   201,   453,   537,   538,   453,    -1,   343,    -1,   257,
      -1,    -1,    26,   257,    -1,    -1,  1285,   540,  1299,    -1,
      74,    -1,    74,   541,    -1,   541,    -1,   173,    -1,   458,
      -1,   355,    -1,    -1,   155,   124,   453,    -1,    -1,    86,
     395,   453,    -1,    -1,   544,   545,    -1,   546,    -1,   550,
      -1,   569,    -1,   570,    -1,   561,    -1,    -1,   416,   453,
     547,   548,    -1,    -1,   560,   549,   453,    -1,    -1,  1315,
     109,   273,    -1,    -1,   305,   453,   551,   552,    -1,    -1,
     560,   453,    -1,   560,   553,   453,    -1,   553,   453,    -1,
     554,    -1,   553,   554,    -1,   555,    -1,   556,    -1,   557,
      -1,   558,    -1,   269,   411,  1285,  1235,  1327,    -1,  1333,
    1285,  1202,    -1,   397,  1285,  1235,    -1,  1273,    61,  1285,
     559,    -1,  1202,    -1,   258,    -1,   496,    -1,   436,    -1,
     506,    -1,   560,   506,    -1,    -1,   370,   453,   562,   563,
      -1,    -1,   564,   453,    -1,   564,     1,   453,    -1,   565,
      -1,   564,   565,    -1,   200,     9,   230,    -1,   200,   566,
     567,    -1,   200,   568,   230,    -1,   371,    -1,   498,    -1,
      -1,    26,   257,    -1,   371,    -1,   568,   371,    -1,   418,
     453,    -1,   571,   453,    -1,   571,     1,   453,    -1,   572,
      -1,   571,   572,    -1,   573,    -1,   578,    -1,   587,    -1,
     597,    -1,   594,    -1,   598,    -1,   600,    -1,   601,    -1,
     602,    -1,   603,    -1,   604,    -1,   605,    -1,    -1,   506,
     574,   575,    -1,  1285,    98,    -1,  1235,  1285,  1206,    -1,
    1285,  1206,   576,    -1,   577,    -1,    -1,   577,    -1,  1051,
    1296,  1206,    -1,   577,  1051,  1296,  1206,    -1,    -1,    11,
    1206,   579,  1285,   580,    -1,   281,    -1,   420,    -1,   421,
      -1,   128,    -1,    28,    -1,   581,    -1,   582,    -1,   581,
     582,    -1,   585,    -1,   585,   444,   585,    -1,    -1,   585,
      17,   583,   584,    -1,   585,    -1,   584,    17,   585,    -1,
     257,    -1,   417,    -1,   512,    -1,   347,    -1,   213,    -1,
     267,    -1,   417,    -1,   512,    -1,   589,   588,    -1,    -1,
     219,   506,    -1,   434,  1274,   590,    -1,   591,    -1,   590,
     591,    -1,   592,  1286,   593,    -1,  1207,    -1,   592,  1207,
      -1,  1236,    -1,   593,  1236,    -1,    60,  1206,  1285,   595,
      -1,   596,    -1,   595,   596,    -1,  1238,    -1,  1238,   444,
    1238,    -1,   258,  1206,  1285,   257,    -1,   100,  1302,  1285,
     257,   599,    -1,    -1,  1315,   329,   257,    -1,   110,  1285,
      70,    -1,   302,   406,  1285,   470,   401,    -1,   102,  1285,
    1201,    -1,    98,   424,  1285,  1201,    -1,   391,  1285,  1201,
      -1,   166,  1285,  1201,    -1,    -1,   227,   395,   453,    -1,
      -1,   175,   453,    -1,    -1,   235,   453,    -1,    -1,   609,
     610,    -1,    -1,   398,  1259,  1206,   611,   612,   453,    -1,
     398,     1,   453,    -1,    -1,   612,   613,    -1,   614,    -1,
     620,    -1,   622,    -1,   624,    -1,   625,    -1,   627,    -1,
     631,    -1,   633,    -1,   634,    -1,   635,    -1,   640,    -1,
     641,    -1,   643,    -1,    29,  1312,   617,   616,   618,    -1,
      29,  1312,   617,   615,   619,    -1,    29,  1312,   617,   121,
     619,    -1,    29,  1312,   617,   239,   619,    -1,    29,  1312,
     617,   336,   619,    -1,   119,    -1,   120,    -1,   439,    -1,
     348,    -1,    -1,   253,     7,  1277,    -1,    -1,   173,    -1,
     127,    -1,   257,    -1,  1232,    -1,    -1,   257,    -1,  1232,
      -1,     4,  1291,  1285,   621,    -1,   403,    -1,   127,    -1,
     348,    -1,    19,  1316,  1287,  1285,  1201,  1253,   623,    -1,
      19,  1316,  1287,  1285,  1201,   636,   637,  1253,   623,    -1,
      -1,   433,   503,     9,  1239,    -1,   433,   503,   586,    -1,
    1317,  1285,   506,    -1,   626,   424,  1285,  1201,    -1,    -1,
     456,    -1,   413,    -1,    -1,   628,   263,  1291,  1285,   629,
      -1,   268,   630,    -1,    33,   630,    -1,   169,    -1,    -1,
     505,   263,   310,  1326,    -1,   505,   263,   310,   275,  1326,
      -1,   505,   386,    -1,   316,  1285,   632,    -1,   632,    -1,
     221,    -1,  1300,  1271,   403,    -1,   360,    -1,   253,   403,
      -1,   321,  1273,  1285,  1205,    -1,   352,   115,  1285,   420,
      -1,   352,  1287,  1285,  1201,    -1,   352,  1287,  1285,  1201,
     636,   637,    -1,   454,    -1,   415,  1285,    -1,    -1,   638,
     639,    -1,   637,   639,    -1,  1201,    -1,   360,  1287,  1285,
    1201,    -1,   373,   642,  1268,    -1,   288,    -1,  1235,    -1,
     405,  1315,   644,    -1,     9,  1297,    -1,   288,  1297,    -1,
     350,   311,    -1,    -1,   646,   453,    -1,   646,     1,   453,
      -1,   647,    -1,   646,   647,    -1,   648,    -1,   650,    -1,
     389,   649,  1268,  1278,  1191,    -1,    -1,   352,    -1,   413,
      -1,   414,    -1,    -1,   275,   651,  1277,  1308,  1275,   652,
      -1,   653,    -1,   652,   653,    -1,  1192,   654,    -1,    -1,
     332,  1235,    -1,    -1,   104,   124,   453,    -1,    -1,   456,
     395,   453,    -1,    -1,   657,   658,    -1,   659,   688,    -1,
      -1,   661,  1192,   660,   662,   453,    -1,   661,     1,   453,
      -1,   174,    -1,   393,    -1,    -1,   662,   663,    -1,  1285,
     173,    -1,  1285,   205,    -1,   664,    -1,   666,    -1,   670,
      -1,   671,    -1,   674,    -1,   675,    -1,   681,    -1,   682,
      -1,   683,    -1,    47,  1275,  1235,   669,   665,    -1,    -1,
     354,    -1,    59,    -1,   352,  1275,  1235,  1274,    -1,   352,
    1275,  1235,   448,  1235,  1274,    -1,   352,  1285,   501,  1280,
    1305,   668,   669,  1274,   667,    -1,    -1,   116,  1295,  1201,
      -1,    -1,  1279,  1235,    -1,    -1,   448,  1235,    -1,   240,
    1328,  1324,    -1,   500,   307,   672,  1285,   673,    -1,   500,
     307,   176,  1285,   673,    -1,   506,    -1,   214,    -1,   257,
      -1,  1232,    -1,   104,  1328,  1203,    -1,   251,  1285,  1205,
    1290,   676,    -1,    -1,   676,   677,    -1,   678,    -1,   679,
      -1,   680,    -1,  1315,   189,  1270,  1205,    -1,   467,  1205,
      -1,    48,  1205,    -1,   353,  1291,  1285,   506,    -1,    64,
    1285,   506,    -1,   684,   685,    -1,   367,  1285,    -1,   369,
    1267,    -1,  1206,    -1,   685,  1206,    -1,    -1,    -1,   508,
     395,   453,   687,   688,    -1,    -1,    -1,   689,   690,    -1,
     691,   453,    -1,   690,   691,   453,    -1,   690,   453,    -1,
     703,    -1,    -1,   693,   694,   692,   705,    -1,   693,     1,
     453,    -1,  1251,   506,    -1,    -1,   177,    -1,   506,    -1,
     506,    -1,    -1,  1285,   205,    -1,  1239,    -1,   246,   698,
      -1,   245,   698,    -1,    50,  1294,   698,    -1,  1229,    -1,
      41,    -1,    44,    -1,    43,    -1,    42,    -1,    40,    -1,
     702,    -1,   714,    -1,   715,    -1,   699,    -1,   700,    -1,
     701,    -1,     1,   453,    -1,   181,    -1,   185,    -1,   182,
      -1,   183,    -1,   180,    -1,   184,    -1,   186,    -1,   331,
      -1,   344,    -1,   693,   695,    87,   696,   704,    -1,  1269,
     697,    -1,   197,   506,    -1,    -1,   705,   706,    -1,   707,
      -1,   708,    -1,   710,    -1,   711,    -1,   712,    -1,   716,
      -1,   719,    -1,   731,    -1,   732,    -1,   734,    -1,   735,
      -1,   736,    -1,   741,    -1,   742,    -1,   356,  1229,    -1,
    1285,   173,   709,    -1,    -1,    26,   257,    -1,  1285,   205,
      -1,   328,    -1,   713,    -1,   493,  1285,   713,    -1,    39,
      -1,    75,    -1,   714,    -1,   715,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,   121,    -1,   220,
      -1,   320,    -1,   331,    -1,   344,    -1,   410,    -1,   408,
      -1,   409,    -1,   481,    -1,   479,    -1,   480,    -1,    41,
    1303,    -1,    41,   478,    -1,    44,  1303,    -1,    44,   478,
      -1,    43,  1303,    -1,    43,   478,    -1,    42,  1303,    -1,
      42,   478,    -1,    40,  1303,    -1,    40,   478,    -1,   181,
      -1,   182,    -1,   180,    -1,   183,    -1,   184,    -1,   278,
      -1,    77,    -1,   188,    -1,    78,    -1,   187,    -1,  1304,
     242,  1263,    -1,  1304,   470,  1263,    -1,   306,  1235,   720,
    1310,   722,   718,    -1,    -1,   426,  1235,    -1,   306,  1235,
     720,  1310,   722,   725,   728,    -1,   306,   127,   723,   721,
     720,   724,   725,   728,    -1,    -1,   448,  1235,    -1,    -1,
     197,  1235,    -1,    -1,   116,  1295,  1201,    -1,    -1,    53,
    1280,   506,    -1,    -1,   224,    -1,   726,    -1,    -1,   726,
     727,  1287,  1285,  1200,    -1,    27,    -1,   117,    -1,    -1,
     221,  1272,   729,    -1,   730,    -1,   729,   730,    -1,   506,
      -1,   236,  1301,    -1,   435,   733,    -1,    -1,   243,    -1,
     385,    -1,    45,  1313,   512,    -1,    36,    -1,    -1,   500,
    1286,   738,   737,   740,    -1,   739,    -1,   738,   739,    -1,
    1239,    -1,  1239,   444,  1239,    -1,    -1,  1314,   455,  1285,
    1239,    -1,   364,  1232,    -1,   364,  1232,   444,  1232,    -1,
      21,   245,    -1,    21,   302,    -1,    -1,    -1,   262,   395,
     453,   744,   688,    -1,    -1,    -1,   256,   395,   453,   746,
     688,    -1,    -1,    -1,   367,   395,   453,   748,   749,    -1,
      -1,   749,   750,    -1,    -1,   349,  1193,   751,   752,   453,
     769,    -1,    -1,   752,   753,    -1,     1,   453,    -1,  1285,
     205,    -1,    63,  1285,  1219,    -1,   754,    -1,   759,    -1,
    1341,   755,    -1,   756,   757,    -1,   756,    -1,   757,    -1,
     178,    -1,   758,    -1,   757,   758,    -1,  1228,    -1,   322,
    1289,   760,   762,    -1,   761,    -1,   761,  1325,    -1,   761,
    1325,   761,  1319,    -1,  1237,    -1,  1228,    -1,    -1,   762,
     763,    -1,   764,    -1,   765,    -1,   766,    -1,   767,    -1,
     768,    -1,   211,  1285,   761,    -1,   179,  1334,  1285,   761,
      -1,   241,  1335,  1285,   761,    -1,   241,  1334,  1285,   761,
      -1,   189,  1285,   761,    -1,    -1,   769,   770,    -1,    -1,
     693,   694,   771,   772,   453,    -1,    -1,   772,   773,    -1,
     774,    -1,   778,    -1,   786,    -1,   791,    -1,   711,    -1,
     799,    -1,   716,    -1,   731,    -1,   792,    -1,   734,    -1,
     797,    -1,   781,    -1,   736,    -1,   784,    -1,   798,    -1,
     717,    -1,   785,    -1,   474,  1285,   775,    -1,  1339,    -1,
    1337,    -1,  1335,   776,    -1,  1336,   777,    -1,  1334,    -1,
    1338,    -1,  1340,    -1,    -1,  1228,    -1,   178,    -1,    -1,
    1228,    -1,   178,    -1,   286,   210,  1285,   779,    -1,  1235,
      -1,   330,  1235,    -1,   465,  1235,    -1,   780,    -1,   286,
     322,    -1,   287,    -1,   322,    -1,   286,    -1,   432,  1294,
    1212,   782,    -1,    -1,   374,  1295,   783,    -1,   486,  1228,
      -1,  1228,    -1,   178,    -1,   334,   503,  1168,    -1,   501,
    1228,   197,  1214,    49,  1214,    -1,   787,   788,    -1,   253,
     789,    -1,   790,    -1,   330,  1237,    -1,   465,  1237,    -1,
      -1,   300,   233,    -1,   300,    -1,  1237,    -1,   286,   322,
      -1,   310,   286,   322,    -1,   793,   796,    -1,  1318,  1293,
     794,  1286,    -1,  1319,  1267,    -1,    -1,   795,    -1,   243,
      -1,   385,    -1,    54,    -1,   808,  1237,    -1,  1237,    -1,
     415,  1285,  1214,  1260,    -1,   210,  1282,    -1,   493,  1285,
     121,    -1,    -1,    -1,   390,   395,   453,   801,   802,    -1,
      -1,   803,    -1,   804,   453,    -1,   803,   804,   453,    -1,
     703,    -1,    -1,   693,   694,   805,   806,    -1,   693,     1,
     453,    -1,    -1,   806,   807,    -1,    45,   253,    -1,    45,
     390,    -1,    38,    -1,    46,    -1,   162,   158,    -1,   162,
     160,    -1,   212,    -1,   266,    -1,   379,    -1,   475,    -1,
     319,    -1,   244,    -1,    32,    -1,   396,    -1,   372,    -1,
     199,    -1,   346,    58,  1285,  1219,    -1,   346,    -1,   458,
      -1,   253,  1292,  1285,   810,  1221,    -1,  1318,  1292,  1285,
     811,  1221,    -1,   191,  1285,  1221,    -1,    35,  1285,  1221,
      -1,   712,    -1,   734,    -1,   813,    -1,   731,    -1,   716,
      -1,   736,    -1,   711,    -1,   812,    -1,   499,  1228,    -1,
     197,  1224,    -1,   448,  1228,    -1,   330,    -1,   465,    -1,
     271,    -1,   460,    -1,    -1,   808,    -1,   809,    -1,    -1,
     808,    -1,   809,    -1,   306,  1235,  1310,    -1,  1285,   205,
      -1,    -1,    -1,    -1,   338,   124,   818,   826,   453,   815,
     827,   816,   829,    -1,    -1,   817,   840,   453,   829,    -1,
      -1,    -1,   499,   819,   821,    -1,    -1,    57,   820,   821,
      -1,   822,    -1,   821,   822,    -1,   823,   824,   825,   506,
      -1,    -1,  1272,   358,    -1,  1272,   500,    -1,    -1,   411,
    1285,    32,    -1,   411,  1285,   112,    -1,   478,   411,  1285,
      32,    -1,   478,   411,  1285,  1235,    -1,   411,  1285,  1235,
      -1,    -1,   313,    -1,    -1,   377,   506,    -1,    -1,    -1,
     111,   453,   828,   829,   131,   111,   453,    -1,    -1,   829,
     830,    -1,   831,    -1,   834,    -1,   840,   453,    -1,   835,
      -1,   453,    -1,    -1,   506,   395,   836,   453,   832,   833,
      -1,    -1,  1122,   453,    -1,   506,   453,    -1,   506,    -1,
      -1,  1235,    -1,    -1,    -1,   838,   839,   840,    -1,    -1,
     841,   842,    -1,   840,   842,    -1,   843,    -1,   859,    -1,
     864,    -1,   868,    -1,   873,    -1,   888,    -1,   891,    -1,
     899,    -1,   895,    -1,   900,    -1,   901,    -1,   906,    -1,
     920,    -1,   924,    -1,   927,    -1,   941,    -1,   945,    -1,
     948,    -1,   951,    -1,   955,    -1,   956,    -1,   960,    -1,
     970,    -1,   973,    -1,   990,    -1,   992,    -1,   995,    -1,
     999,    -1,  1005,    -1,  1017,    -1,  1025,    -1,  1026,    -1,
    1029,    -1,  1030,    -1,  1034,    -1,  1039,    -1,  1040,    -1,
    1048,    -1,  1063,    -1,  1073,    -1,  1082,    -1,  1087,    -1,
    1094,    -1,  1098,    -1,  1100,    -1,  1103,    -1,  1106,    -1,
    1110,    -1,  1137,    -1,   286,   400,    -1,     1,  1264,    -1,
      -1,     3,   844,   845,   858,    -1,   846,   848,   852,   853,
     854,  1145,    -1,  1228,   197,   847,    -1,  1228,   197,  1319,
      -1,  1228,   197,   105,   511,    -1,  1228,   197,   105,    -1,
    1228,   197,   106,   510,    -1,  1228,   197,   106,    -1,  1228,
     197,   107,    -1,  1228,   197,   164,   238,    -1,  1228,   197,
     167,   424,    -1,  1228,   197,   445,    -1,  1228,   197,   495,
     277,    -1,  1228,   197,    71,    -1,  1228,   197,   157,  1145,
      -1,  1228,   197,   155,  1217,  1145,    -1,  1228,   197,    24,
      -1,  1228,   197,    25,  1145,    -1,  1228,   197,  1195,    -1,
    1228,   197,   506,    -1,  1228,    -1,   309,    -1,   255,    -1,
     253,   300,    -1,    -1,   849,    -1,  1270,   850,   851,    -1,
    1270,   851,   850,    -1,  1270,   850,    -1,  1270,   851,    -1,
      30,  1217,    -1,   253,  1292,  1221,    -1,  1318,  1292,  1221,
      -1,   332,  1292,  1221,    -1,    -1,   198,    -1,    -1,   273,
    1285,    47,    -1,    -1,   505,   855,    -1,   856,    -1,   855,
     856,    -1,    32,    -1,   437,    -1,    38,    -1,    46,    -1,
      93,    -1,   199,    -1,   212,    -1,   244,    -1,   264,    -1,
     266,    -1,   289,    -1,   319,    -1,   346,    58,  1285,  1219,
      -1,   346,    -1,   372,    -1,   379,    -1,   396,    -1,   475,
      -1,   288,   857,    -1,   857,    -1,   491,    -1,   191,  1285,
    1221,    -1,    35,  1285,  1221,    -1,   392,   484,  1167,    -1,
     392,   125,  1167,    -1,   446,  1266,  1222,    -1,   485,    -1,
     112,    -1,    -1,   132,    -1,    -1,     5,   860,   861,   863,
      -1,  1210,   448,  1187,  1151,    -1,  1210,   862,   204,  1187,
    1151,    -1,    96,  1228,   448,  1228,  1260,  1151,    -1,    -1,
     448,  1211,    -1,    -1,   133,    -1,    -1,    10,   865,   866,
      -1,  1228,  1254,   867,    -1,  1181,    59,  1255,   867,    -1,
      -1,   377,  1209,    -1,    -1,    18,   869,   870,    -1,   871,
      -1,   870,   871,    -1,  1197,   448,   872,  1197,    -1,    -1,
     340,   448,    -1,    -1,    51,   874,   875,   887,    -1,   876,
    1220,   877,   882,   885,   886,    -1,    -1,   423,    -1,   425,
      -1,   272,    -1,    -1,    -1,   499,   878,   879,    -1,   880,
      -1,   879,   880,    -1,   881,   309,    -1,   881,   824,  1211,
      -1,    -1,  1272,   358,    -1,  1272,    89,    -1,  1272,   500,
      -1,    -1,   883,  1284,  1228,    -1,   883,   884,    -1,   883,
       6,  1294,  1228,    -1,   377,    -1,   204,    -1,   462,    -1,
     309,    -1,    -1,  1322,   837,    -1,    -1,   295,   837,    -1,
      -1,   134,    -1,    -1,    52,   889,   890,    -1,  1219,    -1,
     890,  1219,    -1,    -1,    62,   892,   893,    -1,  1192,   894,
      -1,   893,  1192,   894,    -1,    -1,  1329,    -1,  1329,  1278,
     363,    -1,  1315,   288,   381,    -1,  1315,   263,    -1,    -1,
      76,   896,   897,   898,    -1,  1187,  1320,  1181,  1151,    -1,
      -1,   135,    -1,    73,    -1,    90,    -1,    -1,   113,   902,
     903,   905,    -1,  1192,  1300,  1164,    -1,   456,   904,    -1,
    1192,    -1,   904,  1192,    -1,    -1,   136,    -1,    -1,   121,
     907,   908,   919,    -1,  1219,   489,  1148,    -1,  1219,   490,
    1148,    -1,  1219,   487,  1148,    -1,  1219,   488,  1148,    -1,
    1210,   912,   916,  1148,    -1,   909,  1148,    -1,  1211,   505,
     917,  1148,    -1,   911,    -1,    -1,   909,   910,   911,    -1,
    1211,   849,   913,   853,   915,    -1,    -1,   486,  1195,    -1,
     486,   506,    -1,   486,   336,    -1,   486,    98,    -1,    -1,
     486,   914,    -1,    98,    -1,    99,    -1,    -1,   505,   917,
      -1,    -1,   299,    -1,   918,    -1,   917,   918,    -1,    38,
      -1,    45,   253,    -1,    45,   390,    -1,    46,    -1,    93,
      -1,   162,   158,    -1,   162,   160,    -1,   212,    -1,   266,
      -1,   319,    -1,   379,    -1,   475,    -1,   191,  1285,  1221,
      -1,    35,  1285,  1221,    -1,   392,   484,  1167,    -1,   392,
     125,  1167,    -1,    -1,   137,    -1,    -1,   123,   921,   922,
     923,    -1,  1211,   229,  1187,  1151,    -1,  1211,   229,  1211,
     204,  1187,  1151,    -1,  1211,    49,  1211,   204,  1187,  1151,
      -1,  1211,   229,  1211,   204,  1188,   362,  1188,  1151,    -1,
    1211,    49,  1211,   204,  1188,   362,  1188,  1151,    -1,    -1,
     138,    -1,    -1,   154,   925,   926,    -1,   257,   877,    -1,
      -1,   165,   928,   929,   940,    -1,   930,   932,    -1,   931,
      -1,   930,    17,   931,    -1,  1169,    -1,   466,    -1,   455,
      -1,   933,   935,    -1,   933,    -1,   934,    -1,   933,   934,
      -1,   936,   837,    -1,   503,   317,   837,    -1,   503,   937,
      -1,   936,   503,   937,    -1,   938,    -1,   937,    17,   938,
      -1,  1170,   939,    -1,    21,    -1,   466,    -1,   455,    -1,
      -1,   444,  1169,    -1,    -1,   139,    -1,    -1,   170,   942,
     943,    -1,    -1,   341,   944,    -1,   200,    -1,   325,   103,
      -1,   325,    -1,   395,    -1,   324,    -1,    -1,   883,  1211,
      -1,    -1,   196,   946,   947,    -1,  1208,    -1,    -1,   203,
     949,   950,    -1,  1232,    -1,    -1,   206,   952,   953,    -1,
    1311,  1196,   954,    -1,    -1,   116,  1295,  1228,    -1,   207,
     944,    -1,    -1,   216,   957,  1168,  1309,   958,   959,    -1,
     837,   130,   837,    -1,   130,   837,    -1,   837,    -1,    -1,
     141,    -1,    -1,   223,   961,   962,    -1,  1208,   963,   964,
     965,   969,    -1,    -1,  1315,   177,    -1,    -1,     9,  1311,
     500,    -1,   968,  1311,   500,    -1,    -1,   366,   966,    -1,
     967,    -1,   966,   967,    -1,   968,  1276,    49,  1211,    -1,
      12,    -1,    15,    -1,   302,    -1,    16,    -1,   303,    -1,
     278,    -1,   279,    -1,    -1,  1309,  1311,   112,    -1,    -1,
     225,   971,   972,    -1,  1193,    -1,   972,  1193,    -1,    -1,
     228,   974,   975,    -1,   976,   977,    -1,  1228,    -1,  1239,
      -1,  1242,    -1,   978,   980,    -1,   978,    -1,   980,    -1,
     981,    -1,    -1,   438,   979,   982,    -1,   366,   984,    -1,
      94,  1217,   448,  1218,   988,    -1,   983,    -1,   982,   983,
      -1,  1217,   190,    -1,    59,   988,    -1,     9,    -1,   242,
      -1,   470,    -1,  1217,   988,    -1,   985,    -1,   984,   985,
      -1,    59,    49,  1217,   988,    -1,   986,   987,    -1,    -1,
       9,    -1,   242,    -1,   179,    -1,   470,    -1,  1217,    49,
    1218,   988,    -1,    -1,   988,   989,    -1,    37,  1283,  1211,
      -1,     8,  1283,  1211,    -1,    -1,   270,   991,  1065,    -1,
      -1,   274,   993,   994,    -1,  1211,   448,  1208,    -1,    96,
    1211,   448,  1208,    -1,    -1,   276,   996,   997,   998,    -1,
    1211,    49,  1187,  1151,    -1,  1211,    49,  1211,   204,  1187,
    1151,    -1,    -1,   142,    -1,    -1,   312,  1000,  1001,    -1,
    1002,  1003,  1191,  1004,    -1,  1001,  1002,  1003,  1191,  1004,
      -1,   226,    -1,   318,    -1,   234,    -1,   172,    -1,    -1,
     405,  1315,   644,    -1,    -1,  1315,   288,   381,    -1,  1315,
     263,    -1,   380,    -1,    -1,   325,  1006,  1007,    -1,  1011,
    1012,    -1,    -1,  1012,  1008,   837,  1009,    -1,  1012,  1010,
      -1,    -1,   143,    -1,   143,    -1,   453,    -1,  1197,    -1,
    1197,   444,  1197,    -1,    -1,  1220,   447,    -1,   192,    -1,
    1013,   483,  1014,    -1,  1013,   501,  1015,    -1,    -1,  1315,
     441,  1142,    -1,   170,    -1,  1168,    -1,  1016,    -1,  1015,
       8,  1016,    -1,  1228,   197,  1211,    49,  1211,   483,  1168,
      -1,    -1,   350,  1018,  1019,  1024,    -1,  1192,  1257,  1300,
    1020,  1021,  1022,  1023,    -1,    -1,   229,  1228,    -1,    -1,
     218,   263,    -1,  1315,   263,    -1,  1315,   237,   263,    -1,
    1315,   288,   263,    -1,  1315,   217,   263,    -1,  1315,   502,
      -1,    -1,   238,  1285,  1228,    -1,  1164,    -1,  1158,    -1,
      -1,   145,    -1,   351,    -1,    -1,   361,  1027,  1028,    -1,
    1189,  1140,    -1,   375,    -1,    -1,   376,  1031,  1032,  1033,
      -1,  1192,  1300,  1020,  1157,    -1,    -1,   146,    -1,    -1,
     382,  1035,  1036,  1038,    -1,  1189,  1140,  1037,  1164,    -1,
      -1,  1315,   263,    -1,  1315,   288,   263,    -1,    -1,   147,
      -1,   386,    -1,    -1,   394,  1041,  1042,  1047,    -1,  1190,
    1043,  1044,  1045,    -1,     9,  1190,  1044,   503,  1169,   837,
      -1,    -1,   501,  1228,    -1,    -1,   131,   837,    -1,  1046,
      -1,  1046,  1045,    -1,   503,  1168,   837,    -1,    -1,   148,
      -1,    -1,   404,  1049,  1050,    -1,  1053,    -1,  1054,    -1,
    1057,    -1,  1058,    -1,  1059,    -1,  1061,    -1,   310,    -1,
     308,    -1,   484,    -1,   125,    -1,   155,  1217,   448,  1217,
      -1,  1225,    31,  1055,    -1,  1056,    -1,  1055,  1056,    -1,
      38,  1051,    -1,    46,  1051,    -1,   212,  1051,    -1,   266,
    1051,    -1,   379,  1051,    -1,   475,  1051,    -1,   244,  1051,
      -1,   319,  1051,    -1,  1208,   448,   154,  1216,    -1,  1208,
     448,  1211,    -1,  1208,  1052,    49,  1211,    -1,  1060,    -1,
    1059,  1060,    -1,  1194,   448,  1051,    -1,  1062,    -1,  1061,
    1062,    -1,  1208,   448,   466,    -1,  1208,   448,   455,    -1,
      -1,   413,  1064,  1065,    -1,    -1,  1226,  1067,  1069,  1070,
    1066,  1071,  1072,    -1,    -1,  1067,  1295,   727,  1287,  1068,
      -1,    -1,  1068,  1232,    -1,    -1,  1332,  1281,    -1,    -1,
    1317,  1285,  1201,    -1,    -1,   499,  1191,    -1,   226,   338,
    1285,  1011,    -1,    -1,   204,  1191,    -1,   318,   338,  1285,
    1011,    -1,    -1,   422,  1074,  1075,  1081,    -1,  1192,  1077,
    1076,  1164,    -1,    -1,  1315,  1331,  1181,    -1,    -1,   238,
    1285,  1078,  1228,    -1,   179,    -1,   241,    -1,  1174,    -1,
    1258,  1175,    -1,  1258,  1176,    -1,  1258,  1177,    -1,  1258,
    1178,    -1,  1079,    -1,  1080,    -1,   291,  1174,    -1,   294,
      -1,    -1,   149,    -1,    -1,   427,   388,  1083,  1084,    -1,
     427,  1086,    -1,    -1,   883,  1211,    -1,  1315,   163,  1307,
    1085,    -1,  1315,   290,  1307,  1085,    -1,    -1,  1211,    -1,
     257,    -1,   417,    -1,   512,    -1,   347,    -1,    -1,   428,
    1088,  1089,  1093,    -1,  1090,   229,  1228,  1092,  1154,    -1,
    1091,    -1,  1090,  1091,    -1,  1211,    -1,   114,  1272,   411,
      -1,   114,  1272,  1211,    -1,    -1,  1315,   331,  1285,  1228,
      -1,    -1,   150,    -1,    -1,   431,  1095,  1096,  1097,    -1,
    1210,   197,  1187,  1151,    -1,  1210,   197,  1211,   204,  1187,
    1151,    -1,    96,  1228,   197,  1228,  1260,  1151,    -1,    -1,
     151,    -1,   433,  1099,    -1,    -1,   337,    -1,    -1,   440,
    1101,  1102,    -1,  1193,    -1,  1102,  1193,    -1,    -1,   471,
    1104,  1105,    -1,  1228,   197,  1217,   448,  1218,    -1,    -1,
     477,  1107,  1108,    -1,  1192,  1109,    -1,    -1,   352,    -1,
     354,    -1,    -1,   482,  1111,  1112,  1121,    -1,  1228,  1113,
    1116,  1092,  1120,  1154,    -1,    -1,   114,  1272,  1114,    -1,
    1115,    -1,  1114,   314,  1115,    -1,  1252,  1217,    -1,   229,
    1117,    -1,  1116,  1117,    -1,  1228,  1118,  1119,    -1,    -1,
     115,  1280,  1228,    -1,    -1,    97,  1280,  1228,    -1,    -1,
     438,  1280,  1228,    -1,    -1,   152,    -1,    -1,   494,  1123,
    1124,    -1,  1125,    -1,  1128,    -1,  1132,    -1,  1134,    -1,
    1135,    -1,  1126,  1266,  1306,  1321,  1298,  1295,  1127,    -1,
      -1,   205,    -1,  1191,    -1,   226,    -1,   318,    -1,   234,
      -1,   172,    -1,  1278,   109,  1295,  1129,    -1,  1130,    -1,
    1129,  1130,    -1,  1198,    -1,     9,   339,    -1,     9,  1131,
    1232,    -1,    -1,   359,    -1,   359,   307,    -1,   307,    -1,
    1270,   341,  1133,    -1,   422,    -1,   131,    -1,  1126,    37,
     368,  1228,    -1,  1136,    -1,   168,    -1,   129,    -1,    -1,
     509,  1138,  1139,  1144,    -1,  1189,  1140,  1141,  1037,  1143,
      -1,    -1,   197,  1224,    -1,    -1,  1142,  1265,  1221,  1288,
      -1,  1142,  1265,  1195,    -1,  1142,  1265,   322,    -1,    37,
      -1,     8,    -1,  1164,    -1,  1161,    -1,    -1,   153,    -1,
    1146,  1147,    -1,    -1,   167,   837,    -1,    -1,   295,   837,
      -1,  1149,  1150,    -1,    -1,   167,   837,    -1,    -1,   295,
     837,    -1,  1152,  1153,    -1,    -1,   412,   837,    -1,    -1,
     298,   837,    -1,  1155,  1156,    -1,    -1,   463,   837,    -1,
      -1,   297,   837,    -1,  1159,  1160,    -1,  1159,    -1,  1159,
    1160,    -1,  1159,    -1,  1160,    -1,   131,   837,    -1,   292,
     837,    -1,  1162,  1163,    -1,  1162,    -1,  1163,    -1,   159,
     837,    -1,   293,   837,    -1,  1165,  1166,    -1,    -1,   232,
     837,    -1,    -1,   296,   837,    -1,    -1,  1223,  1330,    -1,
    1169,    -1,  1170,    -1,    -1,  1171,  1172,    -1,  1173,    -1,
    1172,   233,    -1,  1172,  1173,    -1,  1211,    -1,   464,    -1,
     450,    -1,   465,    -1,   460,    -1,   461,    -1,   452,    -1,
     171,    -1,  1174,    -1,  1175,    -1,  1176,    -1,  1177,    -1,
    1178,    -1,   294,    -1,   291,    -1,    20,    -1,   314,    -1,
     309,    -1,   302,    -1,    12,    -1,    13,    -1,    14,    -1,
     333,    -1,   285,    -1,   454,    -1,   161,  1311,    -1,   457,
      -1,   208,    -1,   459,    -1,   247,    -1,   209,    -1,   248,
      -1,  1181,    -1,  1179,  1180,  1181,    -1,    -1,    72,    -1,
     399,    -1,  1181,   465,  1182,    -1,  1181,   460,  1182,    -1,
    1182,    -1,  1182,   461,  1183,    -1,  1182,   452,  1183,    -1,
    1183,    -1,  1184,   171,  1183,    -1,  1184,    -1,   465,  1185,
      -1,   460,  1185,    -1,  1185,    -1,   464,  1181,   450,    -1,
    1214,    -1,   252,    -1,   252,  1323,   506,    -1,   254,    -1,
     254,  1323,   506,    -1,   323,    -1,   323,  1323,   506,    -1,
    1188,    -1,  1187,  1188,    -1,  1209,  1260,    -1,  1232,    -1,
    1232,    -1,  1192,    -1,  1191,  1192,    -1,   506,    -1,   506,
      -1,  1195,    -1,  1194,  1195,    -1,   272,    -1,    -1,  1196,
    1197,    -1,  1198,    -1,  1232,    -1,  1199,    -1,  1199,  1323,
    1199,    -1,   257,    -1,  1201,    -1,  1200,  1201,    -1,  1232,
      -1,   506,    -1,  1204,    -1,  1203,  1204,    -1,   506,    -1,
    1201,    -1,   257,    -1,   506,    -1,   506,    -1,  1209,    -1,
    1208,  1209,    -1,  1230,    -1,  1240,    -1,     6,  1294,  1229,
      -1,  1211,    -1,  1210,  1211,    -1,  1228,    -1,  1239,    -1,
    1242,    -1,  1186,    -1,   246,  1229,    -1,   246,  1240,    -1,
     246,  1242,    -1,     6,  1294,  1215,  1216,    -1,     6,  1294,
    1229,    -1,   272,    -1,  1214,    -1,  1212,  1214,    -1,  1228,
      -1,  1240,    -1,  1242,    -1,  1228,    -1,  1240,    -1,  1242,
      -1,  1186,    -1,   246,  1229,    -1,   246,  1240,    -1,   246,
    1242,    -1,   341,    -1,   154,    -1,  1229,    -1,   257,    -1,
    1228,    -1,  1240,    -1,  1228,    -1,  1239,    -1,  1228,    -1,
     257,    -1,  1228,    -1,   257,    -1,  1242,    -1,  1225,    -1,
    1235,    -1,   512,    -1,  1225,    -1,  1237,    -1,  1225,    -1,
    1235,    -1,  1228,    -1,  1239,    -1,  1242,    -1,  1227,    -1,
    1227,    -1,  1232,    -1,  1232,  1233,    -1,  1229,    -1,  1232,
    1233,  1234,    -1,  1232,  1233,    -1,  1232,  1234,    -1,  1232,
      -1,  1231,    -1,  1186,    -1,  1232,  1233,  1234,    -1,  1232,
    1233,    -1,  1232,  1234,    -1,  1232,    -1,   506,    -1,   506,
    1323,  1232,    -1,   464,  1179,   450,    -1,   464,  1181,   451,
     450,    -1,   464,  1181,   451,  1181,   450,    -1,   257,    -1,
     257,    -1,   257,    -1,   512,    -1,   257,    -1,   417,    -1,
     512,    -1,   347,    -1,   213,    -1,   267,    -1,   462,    -1,
    1240,    -1,     9,  1241,    -1,  1241,    -1,  1240,   449,  1241,
      -1,   257,    -1,   417,    -1,   512,    -1,   347,    -1,   213,
      -1,   267,    -1,   462,    -1,  1243,  1246,    -1,  1244,   464,
    1213,   450,  1246,    -1,  1245,   464,  1179,   450,  1246,    -1,
     472,   464,  1248,   450,  1246,    -1,   304,   464,  1249,   450,
      -1,   259,   464,  1250,   450,  1246,    -1,   260,   464,  1250,
     450,  1246,    -1,   261,   464,  1250,   450,  1246,    -1,   202,
    1247,    -1,   497,  1247,    -1,   101,    -1,   504,    -1,   492,
      -1,   265,    -1,   378,    -1,    84,    -1,   193,    -1,   194,
      -1,   195,    -1,   429,    -1,   430,    -1,    -1,   464,  1181,
     451,   450,    -1,   464,  1181,   451,  1181,   450,    -1,    -1,
     464,  1179,   450,    -1,   464,   450,    -1,  1213,    -1,  1213,
    1180,   242,    -1,  1213,  1180,   470,    -1,  1213,    -1,  1213,
    1180,  1213,    -1,  1181,    -1,  1181,  1180,  1201,    -1,    -1,
      -1,     9,    -1,    -1,  1332,    -1,    -1,   224,    -1,    -1,
     224,  1256,    -1,    -1,   448,  1218,    -1,    -1,   286,    -1,
     335,    -1,    -1,   291,    -1,    -1,   313,    -1,   291,   313,
      -1,    -1,   387,  1261,    -1,    -1,   273,  1285,  1262,    -1,
      34,    -1,   282,    -1,   283,    -1,   284,    -1,   345,    -1,
     468,    -1,   469,    -1,   473,    -1,    -1,   401,  1273,    -1,
     453,    -1,     3,    -1,     5,    -1,    10,    -1,    18,    -1,
      51,    -1,    52,    -1,    62,    -1,    73,    -1,    76,    -1,
      90,    -1,   113,    -1,   121,    -1,   123,    -1,   130,    -1,
     154,    -1,   165,    -1,   170,    -1,   196,    -1,   203,    -1,
     206,    -1,   207,    -1,   216,    -1,   223,    -1,   225,    -1,
     228,    -1,   270,    -1,   274,    -1,   276,    -1,   286,    -1,
     312,    -1,   325,    -1,   350,    -1,   361,    -1,   376,    -1,
     382,    -1,   386,    -1,   394,    -1,   404,    -1,   413,    -1,
     422,    -1,   427,    -1,   428,    -1,   431,    -1,   433,    -1,
     440,    -1,   471,    -1,   477,    -1,   482,    -1,   509,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,   138,    -1,   139,    -1,   141,    -1,   142,    -1,
     143,    -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,
     149,    -1,   150,    -1,   151,    -1,   152,    -1,   153,    -1,
      -1,     7,    -1,    -1,     8,    -1,    -1,    22,    -1,    -1,
      23,    -1,    -1,    26,    -1,    -1,    30,    -1,    -1,    39,
      -1,    -1,    49,    -1,    -1,    58,    -1,    -1,    59,    -1,
      -1,    88,    -1,    -1,   104,    -1,    -1,   456,    -1,    -1,
     190,    -1,    -1,   197,    -1,    -1,   219,    -1,    -1,   315,
      -1,   219,   315,    -1,    -1,   222,    -1,    -1,   458,    -1,
      -1,   229,    -1,    -1,   233,    -1,    -1,   233,    -1,    22,
      -1,    -1,   238,    -1,    -1,   253,    -1,   255,    -1,    -1,
     249,  1285,    -1,   250,  1267,    -1,    -1,   255,    -1,    -1,
     273,    -1,    -1,   300,    -1,    -1,   300,    -1,   301,    -1,
      -1,   307,    -1,    -1,   310,    -1,    -1,   424,   233,    -1,
     424,    -1,   233,    -1,    -1,   317,    -1,    -1,   338,    -1,
      -1,   341,    -1,    -1,   352,    -1,    -1,   385,    -1,    -1,
     406,    -1,    -1,   407,    -1,    -1,   406,    -1,   406,   233,
      -1,    -1,   411,    -1,    -1,   419,    -1,    -1,   424,    -1,
      -1,   439,    -1,    -1,   443,    -1,    -1,   447,    -1,    -1,
     448,    -1,    -1,   448,    -1,   499,    -1,    -1,   503,    -1,
      -1,   503,   404,   448,    -1,    -1,   505,    -1,    -1,   352,
      -1,    65,   402,    -1,   402,    -1,    68,    -1,    66,    -1,
      69,    -1,    67,    -1,   454,    -1,   161,    -1,   167,    -1,
     163,    -1,   167,    -1,   463,    -1,   219,    -1,   307,    -1,
     419,    -1,   309,    -1,   253,    -1,   255,    -1,   352,    -1,
     354,    -1,    59,    -1,   507,    -1,   352,  1285,    -1,   354,
    1267,    -1,   357,    -1,   476,    -1,   253,    -1,   255,    -1,
     411,    -1,   245,    -1,   505,   126,    -1,   126,    -1,   341,
      65,   402,    -1,    65,   402,    -1,   402,    -1,   118,    -1,
     108,    -1,    91,   211,    -1,    56,    -1,    91,   189,    -1,
      55,    -1,   322,   211,    -1,   326,    -1,   322,   189,    -1,
     327,    -1,   367,   211,    -1,   384,    -1,   367,   189,    -1,
     383,    -1,    91,  1285,    -1,    92,  1267,    -1
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
    4401,  4403,  4404,  4414,  4425,  4454,  4453,  4462,  4463,  4467,
    4468,  4471,  4472,  4485,  4498,  4519,  4528,  4542,  4544,  4543,
    4563,  4565,  4564,  4580,  4582,  4581,  4592,  4593,  4600,  4599,
    4628,  4629,  4630,  4637,  4643,  4647,  4648,  4654,  4661,  4662,
    4663,  4667,  4674,  4675,  4679,  4689,  4729,  4739,  4749,  4767,
    4768,  4771,  4772,  4777,  4778,  4779,  4780,  4781,  4785,  4796,
    4807,  4818,  4829,  4839,  4840,  4845,  4844,  4865,  4866,  4870,
    4871,  4872,  4873,  4874,  4875,  4876,  4877,  4878,  4879,  4880,
    4881,  4882,  4883,  4884,  4885,  4886,  4890,  4897,  4901,  4905,
    4906,  4907,  4914,  4918,  4925,  4928,  4933,  4940,  4943,  4948,
    4955,  4962,  4971,  4976,  4981,  4988,  4989,  4990,  4991,  4995,
    5003,  5004,  5005,  5012,  5016,  5023,  5031,  5035,  5043,  5047,
    5053,  5068,  5085,  5086,  5087,  5091,  5108,  5112,  5119,  5126,
    5127,  5130,  5132,  5140,  5141,  5142,  5146,  5155,  5174,  5182,
    5190,  5198,  5200,  5199,  5220,  5221,  5225,  5226,  5231,  5233,
    5232,  5289,  5307,  5308,  5312,  5316,  5320,  5324,  5328,  5332,
    5336,  5340,  5344,  5348,  5352,  5356,  5360,  5364,  5368,  5372,
    5376,  5381,  5385,  5389,  5394,  5399,  5404,  5409,  5410,  5411,
    5412,  5413,  5414,  5415,  5416,  5417,  5424,  5429,  5438,  5439,
    5443,  5444,  5449,  5452,  5456,  5464,  5467,  5471,  5479,  5490,
    5498,  5500,  5510,  5499,  5537,  5537,  5570,  5574,  5573,  5587,
    5586,  5606,  5607,  5612,  5619,  5621,  5625,  5635,  5637,  5645,
    5653,  5661,  5690,  5721,  5723,  5733,  5738,  5765,  5767,  5766,
    5803,  5804,  5808,  5809,  5810,  5827,  5828,  5839,  5838,  5888,
    5889,  5893,  5941,  5954,  5957,  5976,  5981,  5975,  5994,  5994,
    6024,  6031,  6032,  6033,  6034,  6035,  6036,  6037,  6038,  6039,
    6040,  6041,  6042,  6043,  6044,  6045,  6046,  6047,  6048,  6049,
    6050,  6051,  6052,  6053,  6054,  6055,  6056,  6057,  6058,  6059,
    6060,  6061,  6062,  6063,  6064,  6065,  6066,  6067,  6068,  6069,
    6070,  6071,  6072,  6073,  6074,  6075,  6076,  6077,  6078,  6079,
    6080,  6094,  6106,  6105,  6121,  6127,  6131,  6135,  6140,  6145,
    6150,  6155,  6159,  6163,  6167,  6171,  6176,  6180,  6184,  6188,
    6192,  6196,  6200,  6207,  6208,  6215,  6216,  6220,  6221,  6225,
    6226,  6227,  6228,  6229,  6233,  6237,  6238,  6241,  6242,  6245,
    6246,  6252,  6253,  6257,  6258,  6262,  6266,  6272,  6276,  6280,
    6284,  6288,  6292,  6296,  6300,  6304,  6308,  6312,  6316,  6320,
    6324,  6328,  6332,  6336,  6342,  6346,  6350,  6354,  6358,  6362,
    6366,  6373,  6374,  6378,  6382,  6400,  6399,  6408,  6412,  6416,
    6422,  6423,  6430,  6434,  6445,  6444,  6453,  6457,  6469,  6470,
    6478,  6477,  6486,  6487,  6491,  6497,  6497,  6504,  6503,  6513,
    6533,  6537,  6542,  6547,  6568,  6572,  6571,  6588,  6589,  6594,
    6602,  6626,  6628,  6632,  6641,  6654,  6657,  6661,  6665,  6688,
    6689,  6693,  6694,  6699,  6702,  6710,  6714,  6722,  6726,  6737,
    6736,  6744,  6748,  6759,  6758,  6766,  6771,  6779,  6780,  6781,
    6782,  6783,  6791,  6790,  6799,  6806,  6810,  6820,  6831,  6849,
    6848,  6857,  6861,  6865,  6870,  6878,  6882,  6893,  6892,  6902,
    6906,  6910,  6914,  6918,  6922,  6923,  6932,  6934,  6933,  6941,
    6950,  6957,  6961,  6965,  6969,  6979,  6981,  6985,  6986,  6989,
    6991,  6998,  6999,  7003,  7004,  7009,  7013,  7017,  7021,  7025,
    7029,  7033,  7037,  7041,  7045,  7049,  7053,  7057,  7061,  7065,
    7069,  7076,  7080,  7091,  7090,  7099,  7103,  7107,  7111,  7115,
    7122,  7126,  7137,  7136,  7145,  7164,  7163,  7187,  7195,  7196,
    7201,  7212,  7223,  7237,  7241,  7248,  7249,  7254,  7263,  7272,
    7277,  7286,  7287,  7292,  7354,  7355,  7356,  7360,  7361,  7365,
    7369,  7380,  7379,  7391,  7392,  7413,  7427,  7449,  7471,  7491,
    7514,  7515,  7523,  7522,  7531,  7542,  7541,  7550,  7563,  7562,
    7575,  7584,  7588,  7599,  7615,  7614,  7623,  7627,  7631,  7638,
    7642,  7653,  7652,  7660,  7668,  7669,  7673,  7674,  7675,  7680,
    7683,  7690,  7694,  7702,  7709,  7710,  7711,  7712,  7713,  7714,
    7715,  7720,  7723,  7733,  7732,  7740,  7747,  7760,  7759,  7768,
    7772,  7776,  7780,  7787,  7788,  7789,  7790,  7797,  7796,  7810,
    7820,  7829,  7830,  7834,  7835,  7836,  7837,  7838,  7839,  7843,
    7844,  7848,  7853,  7860,  7861,  7862,  7863,  7864,  7868,  7896,
    7899,  7906,  7910,  7920,  7919,  7932,  7931,  7939,  7943,  7954,
    7953,  7962,  7966,  7973,  7977,  7988,  7987,  7995,  8016,  8040,
    8041,  8042,  8043,  8047,  8048,  8052,  8053,  8054,  8055,  8067,
    8066,  8077,  8083,  8082,  8093,  8101,  8109,  8116,  8120,  8133,
    8140,  8152,  8155,  8160,  8164,  8175,  8182,  8183,  8187,  8188,
    8191,  8192,  8197,  8237,  8236,  8245,  8272,  8273,  8278,  8281,
    8285,  8289,  8293,  8297,  8301,  8308,  8309,  8313,  8314,  8318,
    8322,  8332,  8343,  8342,  8350,  8360,  8371,  8370,  8379,  8386,
    8390,  8401,  8400,  8412,  8421,  8424,  8428,  8435,  8439,  8449,
    8461,  8460,  8469,  8473,  8482,  8483,  8488,  8491,  8499,  8503,
    8510,  8518,  8522,  8533,  8532,  8546,  8547,  8548,  8549,  8550,
    8551,  8555,  8556,  8560,  8561,  8567,  8576,  8583,  8584,  8588,
    8592,  8596,  8600,  8604,  8608,  8612,  8616,  8625,  8629,  8638,
    8647,  8648,  8652,  8661,  8662,  8666,  8670,  8681,  8680,  8689,
    8688,  8719,  8722,  8742,  8743,  8746,  8747,  8755,  8756,  8761,
    8766,  8776,  8792,  8797,  8807,  8824,  8823,  8833,  8846,  8849,
    8857,  8860,  8865,  8870,  8878,  8879,  8880,  8881,  8882,  8883,
    8887,  8895,  8896,  8900,  8904,  8915,  8914,  8924,  8937,  8940,
    8944,  8952,  8964,  8967,  8974,  8975,  8976,  8977,  8984,  8983,
    8992,  8999,  9000,  9004,  9005,  9006,  9010,  9011,  9015,  9019,
    9030,  9029,  9038,  9042,  9046,  9053,  9057,  9067,  9078,  9079,
    9086,  9085,  9093,  9101,  9114,  9113,  9121,  9135,  9134,  9142,
    9155,  9157,  9158,  9166,  9165,  9174,  9182,  9183,  9188,  9189,
    9194,  9201,  9202,  9207,  9214,  9215,  9219,  9220,  9224,  9225,
    9229,  9233,  9244,  9243,  9252,  9253,  9254,  9255,  9256,  9260,
    9287,  9290,  9302,  9312,  9317,  9322,  9327,  9335,  9373,  9374,
    9378,  9418,  9428,  9451,  9452,  9453,  9454,  9458,  9467,  9473,
    9483,  9514,  9523,  9524,  9531,  9530,  9542,  9552,  9553,  9558,
    9561,  9565,  9569,  9576,  9577,  9581,  9582,  9586,  9590,  9602,
    9605,  9606,  9615,  9616,  9625,  9628,  9629,  9638,  9639,  9650,
    9653,  9654,  9663,  9664,  9676,  9679,  9681,  9691,  9692,  9704,
    9705,  9709,  9710,  9711,  9715,  9724,  9735,  9736,  9737,  9741,
    9750,  9761,  9766,  9767,  9776,  9777,  9788,  9792,  9802,  9809,
    9816,  9816,  9826,  9827,  9828,  9832,  9841,  9842,  9844,  9845,
    9846,  9847,  9848,  9850,  9851,  9852,  9853,  9854,  9855,  9857,
    9858,  9859,  9861,  9862,  9863,  9864,  9865,  9868,  9869,  9873,
    9874,  9878,  9879,  9883,  9884,  9888,  9892,  9898,  9902,  9908,
    9909,  9910,  9914,  9915,  9916,  9920,  9921,  9922,  9926,  9930,
    9934,  9935,  9936,  9939,  9940,  9950,  9962,  9971,  9987,  9996,
   10012, 10027, 10028, 10033, 10042, 10048, 10068, 10072, 10093, 10134,
   10148, 10149, 10154, 10160, 10161, 10166, 10178, 10179, 10180, 10187,
   10198, 10199, 10203, 10211, 10219, 10223, 10230, 10239, 10240, 10246,
   10260, 10277, 10281, 10288, 10289, 10290, 10297, 10301, 10308, 10309,
   10310, 10311, 10312, 10316, 10320, 10324, 10328, 10332, 10353, 10357,
   10364, 10365, 10366, 10370, 10371, 10372, 10373, 10374, 10378, 10382,
   10389, 10390, 10394, 10395, 10399, 10400, 10404, 10405, 10416, 10417,
   10421, 10422, 10423, 10427, 10428, 10429, 10436, 10437, 10441, 10442,
   10446, 10447, 10448, 10454, 10458, 10462, 10463, 10467, 10471, 10478,
   10485, 10492, 10502, 10506, 10513, 10523, 10533, 10543, 10556, 10560,
   10568, 10576, 10580, 10590, 10605, 10628, 10648, 10655, 10671, 10672,
   10673, 10674, 10675, 10676, 10680, 10684, 10701, 10705, 10712, 10713,
   10714, 10715, 10716, 10717, 10718, 10724, 10728, 10732, 10736, 10740,
   10744, 10748, 10752, 10756, 10760, 10767, 10768, 10772, 10773, 10774,
   10778, 10779, 10780, 10781, 10782, 10783, 10787, 10791, 10795, 10802,
   10806, 10810, 10817, 10824, 10831, 10841, 10848, 10858, 10865, 10877,
   10885, 10886, 10890, 10891, 10895, 10896, 10901, 10904, 10912, 10915,
   10922, 10924, 10925, 10929, 10930, 10934, 10935, 10936, 10941, 10944,
   10957, 10961, 10969, 10973, 10977, 10981, 10985, 10989, 10993, 10997,
   11004, 11005, 11011, 11012, 11013, 11014, 11015, 11016, 11017, 11018,
   11019, 11020, 11021, 11022, 11023, 11024, 11025, 11026, 11027, 11028,
   11029, 11030, 11031, 11032, 11033, 11034, 11035, 11036, 11037, 11038,
   11039, 11040, 11041, 11042, 11043, 11044, 11045, 11046, 11047, 11048,
   11049, 11050, 11051, 11052, 11053, 11054, 11055, 11056, 11057, 11058,
   11059, 11060, 11061, 11062, 11063, 11064, 11065, 11066, 11067, 11068,
   11069, 11070, 11071, 11072, 11073, 11074, 11075, 11076, 11077, 11078,
   11079, 11080, 11087, 11087, 11088, 11088, 11089, 11089, 11090, 11090,
   11091, 11091, 11092, 11092, 11093, 11093, 11094, 11094, 11095, 11095,
   11096, 11096, 11097, 11097, 11098, 11098, 11099, 11099, 11100, 11100,
   11101, 11101, 11102, 11102, 11103, 11103, 11103, 11104, 11104, 11105,
   11105, 11106, 11106, 11107, 11107, 11108, 11108, 11108, 11109, 11109,
   11110, 11110, 11110, 11111, 11111, 11111, 11112, 11112, 11113, 11113,
   11114, 11114, 11115, 11115, 11115, 11116, 11116, 11117, 11117, 11118,
   11118, 11118, 11118, 11119, 11119, 11120, 11120, 11121, 11121, 11122,
   11122, 11123, 11123, 11124, 11124, 11125, 11125, 11126, 11126, 11126,
   11127, 11127, 11128, 11128, 11129, 11129, 11130, 11130, 11131, 11131,
   11132, 11132, 11133, 11133, 11134, 11134, 11134, 11135, 11135, 11136,
   11136, 11137, 11137, 11138, 11138, 11142, 11142, 11143, 11143, 11144,
   11144, 11145, 11145, 11146, 11146, 11147, 11147, 11148, 11148, 11149,
   11149, 11150, 11150, 11151, 11151, 11152, 11152, 11153, 11153, 11154,
   11154, 11155, 11155, 11156, 11156, 11157, 11157, 11160, 11161, 11162,
   11166, 11166, 11167, 11167, 11168, 11168, 11169, 11169, 11170, 11170,
   11171, 11171, 11172, 11172, 11173, 11173
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "_orientation", "_left_right_center", "col_or_plus", "source_clause",
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
  "coll_sequence", "column_or_col", "columns_or_cols", "comp_equal",
  "exception_or_error", "exception_or_overflow", "in_of", "label_option",
  "line_or_lines", "lock_records", "object_char_or_word", "records",
  "reel_or_unit", "scroll_line_or_lines", "size_or_length", "with_dups",
  "prog_coll_sequence", "detail_keyword", "ch_keyword", "cf_keyword",
  "ph_keyword", "pf_keyword", "rh_keyword", "rf_keyword",
  "control_keyword", 0
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
     793,   794,   794,   795,   795,   795,   796,   796,   797,   798,
     799,   800,   801,   800,   802,   802,   803,   803,   804,   805,
     804,   804,   806,   806,   807,   807,   807,   807,   807,   807,
     807,   807,   807,   807,   807,   807,   807,   807,   807,   807,
     807,   807,   807,   807,   807,   807,   807,   807,   807,   807,
     807,   807,   807,   807,   807,   807,   807,   807,   808,   808,
     809,   809,   810,   810,   810,   811,   811,   811,   812,   813,
     814,   815,   816,   814,   817,   814,   818,   819,   818,   820,
     818,   821,   821,   822,   823,   823,   823,   824,   824,   824,
     824,   824,   824,   825,   825,   826,   826,   827,   828,   827,
     829,   829,   830,   830,   830,   830,   830,   832,   831,   833,
     833,   834,   835,   836,   836,   838,   839,   837,   841,   840,
     840,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   842,   842,   842,   842,   842,   842,   842,   842,
     842,   842,   844,   843,   845,   845,   845,   845,   845,   845,
     845,   845,   845,   845,   845,   845,   845,   845,   845,   845,
     845,   845,   845,   846,   846,   847,   847,   848,   848,   849,
     849,   849,   849,   849,   850,   851,   851,   852,   852,   853,
     853,   854,   854,   855,   855,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   856,   856,   856,   856,   856,   856,   856,   856,   856,
     856,   857,   857,   858,   858,   860,   859,   861,   861,   861,
     862,   862,   863,   863,   865,   864,   866,   866,   867,   867,
     869,   868,   870,   870,   871,   872,   872,   874,   873,   875,
     876,   876,   876,   876,   877,   878,   877,   879,   879,   880,
     880,   881,   881,   881,   881,   882,   882,   882,   882,   883,
     883,   884,   884,   885,   885,   886,   886,   887,   887,   889,
     888,   890,   890,   892,   891,   893,   893,   894,   894,   894,
     894,   894,   896,   895,   897,   898,   898,   899,   900,   902,
     901,   903,   903,   904,   904,   905,   905,   907,   906,   908,
     908,   908,   908,   908,   908,   908,   909,   910,   909,   911,
     912,   912,   912,   912,   912,   913,   913,   914,   914,   915,
     915,   916,   916,   917,   917,   918,   918,   918,   918,   918,
     918,   918,   918,   918,   918,   918,   918,   918,   918,   918,
     918,   919,   919,   921,   920,   922,   922,   922,   922,   922,
     923,   923,   925,   924,   926,   928,   927,   929,   930,   930,
     931,   931,   931,   932,   932,   933,   933,   934,   935,   936,
     936,   937,   937,   938,   938,   938,   938,   939,   939,   940,
     940,   942,   941,   943,   943,   943,   943,   943,   943,   943,
     944,   944,   946,   945,   947,   949,   948,   950,   952,   951,
     953,   954,   954,   955,   957,   956,   958,   958,   958,   959,
     959,   961,   960,   962,   963,   963,   964,   964,   964,   965,
     965,   966,   966,   967,   968,   968,   968,   968,   968,   968,
     968,   969,   969,   971,   970,   972,   972,   974,   973,   975,
     976,   976,   976,   977,   977,   977,   977,   979,   978,   980,
     981,   982,   982,   983,   983,   983,   983,   983,   983,   984,
     984,   985,   985,   986,   986,   986,   986,   986,   987,   988,
     988,   989,   989,   991,   990,   993,   992,   994,   994,   996,
     995,   997,   997,   998,   998,  1000,   999,  1001,  1001,  1002,
    1002,  1002,  1002,  1003,  1003,  1004,  1004,  1004,  1004,  1006,
    1005,  1007,  1008,  1007,  1007,  1009,  1009,  1010,  1010,  1011,
    1011,  1012,  1012,  1012,  1012,  1012,  1013,  1013,  1014,  1014,
    1015,  1015,  1016,  1018,  1017,  1019,  1020,  1020,  1021,  1021,
    1021,  1021,  1021,  1021,  1021,  1022,  1022,  1023,  1023,  1024,
    1024,  1025,  1027,  1026,  1028,  1029,  1031,  1030,  1032,  1033,
    1033,  1035,  1034,  1036,  1037,  1037,  1037,  1038,  1038,  1039,
    1041,  1040,  1042,  1042,  1043,  1043,  1044,  1044,  1045,  1045,
    1046,  1047,  1047,  1049,  1048,  1050,  1050,  1050,  1050,  1050,
    1050,  1051,  1051,  1052,  1052,  1053,  1054,  1055,  1055,  1056,
    1056,  1056,  1056,  1056,  1056,  1056,  1056,  1057,  1057,  1058,
    1059,  1059,  1060,  1061,  1061,  1062,  1062,  1064,  1063,  1066,
    1065,  1067,  1067,  1068,  1068,  1069,  1069,  1070,  1070,  1071,
    1071,  1071,  1072,  1072,  1072,  1074,  1073,  1075,  1076,  1076,
    1077,  1077,  1077,  1077,  1078,  1078,  1078,  1078,  1078,  1078,
    1079,  1080,  1080,  1081,  1081,  1083,  1082,  1082,  1084,  1084,
    1084,  1084,  1085,  1085,  1086,  1086,  1086,  1086,  1088,  1087,
    1089,  1090,  1090,  1091,  1091,  1091,  1092,  1092,  1093,  1093,
    1095,  1094,  1096,  1096,  1096,  1097,  1097,  1098,  1099,  1099,
    1101,  1100,  1102,  1102,  1104,  1103,  1105,  1107,  1106,  1108,
    1109,  1109,  1109,  1111,  1110,  1112,  1113,  1113,  1114,  1114,
    1115,  1116,  1116,  1117,  1118,  1118,  1119,  1119,  1120,  1120,
    1121,  1121,  1123,  1122,  1124,  1124,  1124,  1124,  1124,  1125,
    1126,  1126,  1127,  1127,  1127,  1127,  1127,  1128,  1129,  1129,
    1130,  1130,  1130,  1131,  1131,  1131,  1131,  1132,  1133,  1133,
    1134,  1135,  1136,  1136,  1138,  1137,  1139,  1140,  1140,  1141,
    1141,  1141,  1141,  1142,  1142,  1143,  1143,  1144,  1144,  1145,
    1146,  1146,  1147,  1147,  1148,  1149,  1149,  1150,  1150,  1151,
    1152,  1152,  1153,  1153,  1154,  1155,  1155,  1156,  1156,  1157,
    1157,  1158,  1158,  1158,  1159,  1160,  1161,  1161,  1161,  1162,
    1163,  1164,  1165,  1165,  1166,  1166,  1167,  1167,  1168,  1169,
    1171,  1170,  1172,  1172,  1172,  1173,  1173,  1173,  1173,  1173,
    1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,
    1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,  1173,  1174,
    1174,  1175,  1175,  1176,  1176,  1177,  1178,  1179,  1179,  1180,
    1180,  1180,  1181,  1181,  1181,  1182,  1182,  1182,  1183,  1183,
    1184,  1184,  1184,  1185,  1185,  1186,  1186,  1186,  1186,  1186,
    1186,  1187,  1187,  1188,  1189,  1190,  1191,  1191,  1192,  1193,
    1194,  1194,  1195,  1196,  1196,  1197,  1198,  1198,  1198,  1199,
    1200,  1200,  1201,  1202,  1203,  1203,  1204,  1205,  1205,  1206,
    1207,  1208,  1208,  1209,  1209,  1209,  1210,  1210,  1211,  1211,
    1211,  1211,  1211,  1211,  1211,  1211,  1211,  1211,  1212,  1212,
    1213,  1213,  1213,  1214,  1214,  1214,  1214,  1214,  1214,  1214,
    1215,  1215,  1216,  1216,  1217,  1217,  1218,  1218,  1219,  1219,
    1220,  1220,  1220,  1221,  1221,  1221,  1222,  1222,  1223,  1223,
    1224,  1224,  1224,  1225,  1226,  1227,  1227,  1228,  1229,  1229,
    1229,  1229,  1230,  1230,  1231,  1231,  1231,  1231,  1232,  1232,
    1233,  1234,  1234,  1235,  1236,  1237,  1237,  1238,  1238,  1238,
    1238,  1238,  1238,  1238,  1239,  1239,  1240,  1240,  1241,  1241,
    1241,  1241,  1241,  1241,  1241,  1242,  1242,  1242,  1242,  1242,
    1242,  1242,  1242,  1242,  1242,  1243,  1243,  1244,  1244,  1244,
    1245,  1245,  1245,  1245,  1245,  1245,  1246,  1246,  1246,  1247,
    1247,  1247,  1248,  1248,  1248,  1249,  1249,  1250,  1250,  1251,
    1252,  1252,  1253,  1253,  1254,  1254,  1255,  1255,  1256,  1256,
    1257,  1257,  1257,  1258,  1258,  1259,  1259,  1259,  1260,  1260,
    1261,  1261,  1262,  1262,  1262,  1262,  1262,  1262,  1262,  1262,
    1263,  1263,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,
    1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,
    1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,
    1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,
    1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,
    1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,
    1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,  1264,
    1264,  1264,  1265,  1265,  1266,  1266,  1267,  1267,  1268,  1268,
    1269,  1269,  1270,  1270,  1271,  1271,  1272,  1272,  1273,  1273,
    1274,  1274,  1275,  1275,  1276,  1276,  1277,  1277,  1278,  1278,
    1279,  1279,  1280,  1280,  1281,  1281,  1281,  1282,  1282,  1283,
    1283,  1284,  1284,  1285,  1285,  1286,  1286,  1286,  1287,  1287,
    1288,  1288,  1288,  1289,  1289,  1289,  1290,  1290,  1291,  1291,
    1292,  1292,  1293,  1293,  1293,  1294,  1294,  1295,  1295,  1296,
    1296,  1296,  1296,  1297,  1297,  1298,  1298,  1299,  1299,  1300,
    1300,  1301,  1301,  1302,  1302,  1303,  1303,  1304,  1304,  1304,
    1305,  1305,  1306,  1306,  1307,  1307,  1308,  1308,  1309,  1309,
    1310,  1310,  1311,  1311,  1312,  1312,  1312,  1313,  1313,  1314,
    1314,  1315,  1315,  1316,  1316,  1317,  1317,  1318,  1318,  1319,
    1319,  1320,  1320,  1321,  1321,  1322,  1322,  1323,  1323,  1324,
    1324,  1325,  1325,  1326,  1326,  1327,  1327,  1328,  1328,  1329,
    1329,  1330,  1330,  1331,  1331,  1332,  1332,  1333,  1333,  1333,
    1334,  1334,  1335,  1335,  1336,  1336,  1337,  1337,  1338,  1338,
    1339,  1339,  1340,  1340,  1341,  1341
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
       2,     0,     1,     1,     1,     1,     2,     1,     4,     2,
       3,     0,     0,     5,     0,     1,     2,     3,     1,     0,
       4,     3,     0,     2,     2,     2,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     5,     5,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     0,     1,     1,     0,     1,     1,     3,     2,
       0,     0,     0,     9,     0,     4,     0,     0,     3,     0,
       3,     1,     2,     4,     0,     2,     2,     0,     3,     3,
       4,     4,     3,     0,     1,     0,     2,     0,     0,     7,
       0,     2,     1,     1,     2,     1,     1,     0,     6,     0,
       2,     2,     1,     0,     1,     0,     0,     3,     0,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     4,     6,     3,     3,     4,     3,     4,
       3,     3,     4,     4,     3,     4,     3,     4,     5,     3,
       4,     3,     3,     1,     1,     1,     2,     0,     1,     3,
       3,     2,     2,     2,     3,     3,     3,     0,     1,     0,
       3,     0,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     3,     3,     3,
       3,     1,     1,     0,     1,     0,     4,     4,     5,     6,
       0,     2,     0,     1,     0,     3,     3,     4,     0,     2,
       0,     3,     1,     2,     4,     0,     2,     0,     4,     6,
       0,     1,     1,     1,     0,     0,     3,     1,     2,     2,
       3,     0,     2,     2,     2,     0,     3,     2,     4,     1,
       1,     1,     1,     0,     2,     0,     2,     0,     1,     0,
       3,     1,     2,     0,     3,     2,     3,     0,     1,     3,
       3,     2,     0,     4,     4,     0,     1,     1,     1,     0,
       4,     3,     2,     1,     2,     0,     1,     0,     4,     3,
       3,     3,     3,     4,     2,     4,     1,     0,     3,     5,
       0,     2,     2,     2,     2,     0,     2,     1,     1,     0,
       2,     0,     1,     1,     2,     1,     2,     2,     1,     1,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     0,     1,     0,     4,     4,     6,     6,     8,     8,
       0,     1,     0,     3,     2,     0,     4,     2,     1,     3,
       1,     1,     1,     2,     1,     1,     2,     2,     3,     2,
       3,     1,     3,     2,     1,     1,     1,     0,     2,     0,
       1,     0,     3,     0,     2,     1,     2,     1,     1,     1,
       0,     2,     0,     3,     1,     0,     3,     1,     0,     3,
       3,     0,     3,     2,     0,     6,     3,     2,     1,     0,
       1,     0,     3,     5,     0,     2,     0,     3,     3,     0,
       2,     1,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     3,     1,     2,     0,     3,     2,
       1,     1,     1,     2,     1,     1,     1,     0,     3,     2,
       5,     1,     2,     2,     2,     1,     1,     1,     2,     1,
       2,     4,     2,     0,     1,     1,     1,     1,     4,     0,
       2,     3,     3,     0,     3,     0,     3,     3,     4,     0,
       4,     4,     6,     0,     1,     0,     3,     4,     5,     1,
       1,     1,     1,     0,     3,     0,     3,     2,     1,     0,
       3,     2,     0,     4,     2,     0,     1,     1,     1,     1,
       3,     0,     2,     1,     3,     3,     0,     3,     1,     1,
       1,     3,     7,     0,     4,     7,     0,     2,     0,     2,
       2,     3,     3,     3,     2,     0,     3,     1,     1,     0,
       1,     1,     0,     3,     2,     1,     0,     4,     4,     0,
       1,     0,     4,     4,     0,     2,     3,     0,     1,     1,
       0,     4,     4,     6,     0,     2,     0,     2,     1,     2,
       3,     0,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     3,     4,
       1,     2,     3,     1,     2,     3,     3,     0,     3,     0,
       7,     0,     5,     0,     2,     0,     2,     0,     3,     0,
       2,     4,     0,     2,     4,     0,     4,     4,     0,     3,
       0,     4,     1,     1,     1,     2,     2,     2,     2,     1,
       1,     2,     1,     0,     1,     0,     4,     2,     0,     2,
       4,     4,     0,     1,     1,     1,     1,     1,     0,     4,
       5,     1,     2,     1,     3,     3,     0,     4,     0,     1,
       0,     4,     4,     6,     6,     0,     1,     2,     0,     1,
       0,     3,     1,     2,     0,     3,     5,     0,     3,     2,
       0,     1,     1,     0,     4,     6,     0,     3,     1,     3,
       2,     2,     2,     3,     0,     3,     0,     3,     0,     3,
       0,     1,     0,     3,     1,     1,     1,     1,     1,     7,
       0,     1,     1,     1,     1,     1,     1,     4,     1,     2,
       1,     2,     3,     0,     1,     2,     1,     3,     1,     1,
       4,     1,     1,     1,     0,     4,     5,     0,     2,     0,
       4,     3,     3,     1,     1,     1,     1,     0,     1,     2,
       0,     2,     0,     2,     2,     0,     2,     0,     2,     2,
       0,     2,     0,     2,     2,     0,     2,     0,     2,     2,
       1,     2,     1,     1,     2,     2,     2,     1,     1,     2,
       2,     2,     0,     2,     0,     2,     0,     2,     1,     1,
       0,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       1,     1,     3,     3,     1,     3,     3,     1,     3,     1,
       2,     2,     1,     3,     1,     1,     3,     1,     3,     1,
       3,     1,     2,     2,     1,     1,     1,     2,     1,     1,
       1,     2,     1,     0,     2,     1,     1,     1,     3,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     1,     2,     1,     1,
       1,     1,     2,     2,     2,     4,     3,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     3,     2,
       2,     1,     1,     1,     3,     2,     2,     1,     1,     3,
       3,     4,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     5,     5,     5,     4,
       5,     5,     5,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     5,     0,
       3,     2,     1,     3,     3,     1,     3,     1,     3,     0,
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
       0,     1,     0,     1,     1,     0,     1,     0,     1,     0,
       2,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     2,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     0,     1,     0,
       3,     0,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     1,     3,     2,     1,
       1,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     2
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
    1813,    46,     0,     0,     0,  1853,  1813,  1813,  1813,     0,
       0,     0,     0,     0,  1813,     0,     0,  1790,   115,    48,
      49,    50,    53,    51,    52,     0,   101,   103,   104,   105,
     150,   107,   106,   108,   109,   110,   111,   112,   113,   114,
     177,     0,     0,    23,  1814,     0,     0,  1539,   125,  1813,
    1813,  1854,  1813,     0,     0,     0,     0,  1813,  1813,    60,
      82,     0,    54,    98,  1791,     0,  1813,     0,    99,   102,
       0,   149,     0,   181,    20,    13,    29,    37,    40,    42,
      41,  1847,    39,  1813,     0,     0,     0,  1608,   171,  1532,
     169,   174,   176,     0,     0,    62,    84,   173,    56,  1540,
     152,   153,  1815,   156,  1613,  1232,  1231,   116,   120,  1839,
    1813,     0,   100,   151,   178,   179,    38,  1848,    36,     0,
    1621,  1617,  1622,  1620,  1618,  1623,  1619,   160,   161,   163,
     172,   167,  1897,  1898,     0,   165,     0,  1789,     0,     0,
       0,  1813,  1919,    80,    61,  1788,    66,    68,    69,    70,
      71,  1788,     0,  1813,     0,    83,     0,    87,    55,    58,
     154,  1817,  1816,   157,     0,  1839,  1842,  1841,     0,     0,
     117,   121,     0,     0,   267,   182,   131,   130,   145,   141,
     146,   127,   144,   142,   128,   129,   143,   126,   132,   133,
     135,   162,     0,  1882,   166,     0,  1609,   170,  1918,  1813,
       0,     0,    65,    67,    63,    81,  1788,  1813,     0,     0,
      92,    93,    94,     0,     0,    85,    88,     0,     0,  1614,
     155,   158,     0,  1840,   123,   118,   119,   122,   180,     0,
       0,  1686,     0,   279,   275,    24,     0,   270,   272,   273,
     134,   137,     0,   164,     0,     0,  1917,    74,    64,     0,
    1533,    73,    89,     0,    90,    91,    97,    86,    57,     0,
     159,   124,   185,  1687,   183,  1796,   276,   277,   278,  1778,
     286,     0,   268,   271,     0,   136,   168,     0,    77,    79,
      78,    75,    76,    95,    59,   186,  1797,  1866,  1779,  1798,
       0,   288,   269,   138,   139,  1905,  1906,    72,  1849,  1867,
    1792,  1799,     0,     0,     0,   290,     0,  1828,  1883,  1874,
       0,   245,     0,  1813,  1788,  1818,   247,     0,  1886,  1881,
     233,   184,   232,   187,   188,   189,   190,   191,   192,     0,
     193,     0,   194,   244,   195,   196,   197,   198,   199,   200,
    1784,  1813,  1793,     0,  1518,   274,  1516,   287,     0,    25,
     140,  1829,  1813,  1884,  1818,  1875,  1876,   212,  1885,   248,
    1849,  1813,  1813,  1819,  1813,  1813,   261,  1778,   262,     0,
    1813,  1828,  1785,     0,     0,   280,   281,   284,  1517,   289,
     296,   297,   348,   291,   351,     0,     0,  1813,   214,   213,
     210,  1850,   247,   243,     0,     0,     0,     0,   260,  1843,
    1843,     0,   263,     0,  1813,   246,   229,   282,     0,   283,
       0,   507,   292,  1669,     0,   293,   222,   223,   221,   220,
       0,   206,   207,   217,   217,     0,   217,   209,   208,   217,
       0,  1538,  1537,   249,   250,   251,   259,  1844,   264,   265,
     266,   230,     0,   285,     0,     0,   510,   353,     0,     0,
     357,     0,   295,   298,  1672,   218,   203,   219,   204,  1796,
     205,   202,   215,   201,   216,  1813,   253,   255,   239,   238,
     239,   235,   349,     0,     0,   513,   356,     0,   354,     0,
     363,   364,   358,     0,   361,  1813,  1916,     0,   255,   226,
    1673,   211,   254,   252,     0,     0,   237,   236,   351,   508,
       0,     0,   631,   355,   360,   397,   366,  1792,  1813,     0,
       0,  1813,  1792,  1828,  1813,  1776,   294,     0,   299,   302,
     303,   304,   305,   306,   307,   308,   309,   310,     0,     0,
    1915,  1672,     0,   224,   257,   258,   256,     0,   242,   350,
     351,   511,     0,     0,    26,  1813,  1780,     0,     0,     0,
    1813,  1776,     0,     0,     0,     0,     0,  1813,   344,  1777,
     345,     0,   343,   346,   300,   301,   226,     0,     0,   509,
     351,   514,     0,   694,     0,   494,   421,  1855,  1855,  1855,
    1855,  1855,  1877,   422,   457,   459,   425,   426,   427,   428,
     429,   430,   453,   451,   452,   454,   455,   460,   458,   431,
    1851,   456,     0,   432,   418,   433,   434,     0,     0,  1858,
     436,   437,   435,   490,   439,   440,   438,  1813,  1815,   398,
     399,   400,   401,   402,   403,   419,   423,   424,   404,   405,
     406,   407,   408,   409,   410,   411,   412,     0,     0,  1781,
       0,   394,     0,   367,   322,   342,  1907,  1908,  1536,   331,
    1534,  1900,  1899,   324,  1826,  1790,  1802,     0,  1813,   328,
     327,  1813,   347,   225,     0,   147,   148,   228,     0,  1903,
    1904,   240,   512,   516,   632,     0,    27,   738,   505,   506,
    1856,   450,   449,   442,   441,   448,   447,   446,   445,   444,
     443,  1878,     0,  1852,   488,   474,   468,   413,  1601,   503,
    1859,   491,   492,   489,     0,     0,   415,   417,  1700,  1700,
     396,     0,  1835,  1632,     0,     0,  1628,  1633,  1631,  1629,
    1634,  1630,   395,   368,  1624,  1626,     0,   312,  1535,  1827,
     333,     0,   315,  1803,  1860,   341,     0,     0,   227,   241,
     515,   634,   696,     0,     0,   493,  1802,   470,     0,  1870,
       0,  1599,  1600,     0,   420,   495,   497,   499,     0,   414,
    1788,   461,   462,  1625,  1836,     0,     0,   377,   373,   376,
     375,   374,   389,   385,   387,   388,   390,   386,   391,   392,
     393,   370,   381,   382,   383,   378,   379,   380,   372,   369,
       0,   323,   314,   313,   311,   332,  1790,  1861,   320,   329,
     326,   330,   325,     0,   517,     0,   638,   633,   635,     0,
     699,   697,   715,     0,   792,   865,   874,   880,   887,   919,
     923,   937,   932,   938,   939,   947,   993,  1002,  1005,  1031,
    1042,  1045,  1048,  1040,  1054,  1061,  1083,  1087,  1123,  1125,
    1129,     0,  1135,  1149,  1173,  1191,  1192,  1195,  1196,  1201,
    1209,  1210,  1223,  1257,  1275,     0,  1308,  1320,  1328,  1330,
     720,  1334,  1337,  1343,  1394,   740,   741,   742,   743,   744,
     745,   746,   747,   749,   748,   750,   751,   752,   753,   754,
     755,   756,   757,   758,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   776,   777,   778,   779,   780,   781,   782,   783,   784,
     785,   786,   787,   788,   789,   739,     0,     0,   468,   469,
    1871,   472,  1650,  1645,  1651,  1652,  1653,  1659,     0,  1505,
    1507,     0,     0,     0,  1648,     0,  1509,  1649,  1654,  1655,
       0,     0,     0,     0,  1647,  1659,  1646,  1489,  1487,  1494,
    1497,  1499,  1502,  1566,  1504,  1563,  1597,  1564,  1565,  1656,
       0,     0,     0,  1598,   504,   501,   498,     0,   416,  1701,
     371,   384,  1627,     0,     0,   334,   335,   336,   337,     0,
     316,  1801,   322,     0,  1519,   518,     0,   639,     0,   636,
     704,   704,     0,     0,  1703,  1704,  1705,  1706,  1707,  1708,
    1709,  1710,  1711,  1712,  1713,  1714,  1715,  1716,  1752,  1753,
    1754,  1755,  1756,  1757,  1758,  1759,  1760,  1761,  1762,  1763,
    1764,  1765,  1766,  1767,  1768,  1769,  1770,  1771,  1717,  1718,
    1719,  1720,  1721,  1722,  1723,  1724,  1725,  1726,  1727,  1728,
    1729,  1730,  1731,  1732,  1733,  1734,  1735,  1736,  1737,  1738,
    1739,  1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1702,
    1748,  1749,  1750,  1751,   791,     0,     0,     0,     0,   890,
       0,     0,     0,     0,     0,     0,     0,  1450,  1033,     0,
       0,  1872,   910,   909,     0,  1053,  1450,     0,     0,     0,
       0,     0,     0,   790,     0,  1161,     0,     0,     0,     0,
       0,     0,     0,     0,  1304,  1307,  1295,  1305,  1306,  1297,
       0,     0,  1329,  1327,     0,   738,     0,     0,     0,     0,
     475,   471,   476,  1837,   479,     0,  1643,  1567,  1568,  1569,
       0,     0,     0,     0,     0,     0,     0,  1501,     0,  1500,
       0,  1644,  1490,  1491,  1610,     0,     0,     0,     0,     0,
       0,     0,     0,  1635,     0,     0,     0,     0,   496,     0,
     500,   340,   339,  1782,  1790,   321,     0,   641,   642,   637,
    1787,   704,   701,   707,     0,   704,   716,   691,   814,   863,
     817,   813,  1835,     0,     0,  1557,   872,  1551,   870,  1546,
    1548,  1549,  1550,   875,     0,  1674,  1529,   881,   882,     0,
    1525,  1527,  1526,   893,   891,   892,   917,     0,  1579,   920,
     921,  1578,   924,   927,  1835,   935,  1603,     0,  1511,  1688,
    1543,  1602,  1607,  1544,     0,   945,  1849,  1628,   991,  1415,
     956,   960,  1546,     0,  1548,  1000,     0,   894,  1003,  1012,
    1011,  1029,     0,  1008,  1010,  1449,     0,  1035,  1039,  1037,
    1040,  1038,  1032,  1043,  1044,  1541,  1046,  1047,  1873,  1049,
    1523,  1041,  1868,  1448,  1062,  1064,  1084,  1085,  1088,     0,
    1090,  1091,  1092,  1124,  1261,  1594,  1595,     0,  1126,     0,
    1133,     0,  1142,  1139,  1141,  1140,  1136,  1143,  1163,  1529,
    1150,  1161,  1152,     0,  1159,     0,  1580,  1526,  1582,     0,
    1189,  1680,  1193,  1397,  1514,  1199,  1849,  1207,  1397,     0,
    1221,  1214,  1515,     0,  1522,  1224,  1225,  1226,  1227,  1228,
    1229,  1250,  1230,  1253,     0,  1520,     0,     0,  1593,  1607,
    1258,  1293,  1280,  1298,  1786,  1318,     0,  1311,  1313,     0,
    1325,     0,  1331,  1332,   726,   732,   721,   722,   723,   725,
       0,  1335,     0,  1338,  1340,  1360,  1346,  1407,  1397,   477,
     479,  1838,     0,   483,   478,  1661,  1489,  1487,  1506,  1508,
    1489,     0,     0,     0,  1489,  1560,  1561,  1562,     0,  1510,
    1503,  1489,     0,  1488,  1611,     0,  1493,  1492,  1496,  1495,
    1498,     0,     0,  1489,     0,  1813,  1783,     0,   318,     0,
    1813,  1857,   702,  1813,     0,   713,   705,   706,   717,   864,
     793,  1783,   827,   818,     0,     0,     0,     0,  1552,  1553,
    1554,   873,   866,     0,     0,  1547,  1676,  1675,   878,   883,
     885,     0,   918,   888,  1581,   894,   922,   927,  1909,  1910,
     925,     0,   928,     0,   936,   933,  1892,  1891,  1512,     0,
    1690,  1513,  1605,  1606,   942,   943,   946,   940,  1442,   992,
     948,   735,     0,   954,  1417,     0,   971,     0,   965,  1415,
    1415,  1415,  1415,  1001,   994,     0,     0,   895,  1004,  1030,
    1006,  1450,  1450,  1007,  1014,  1015,   735,  1474,  1475,  1476,
    1470,  1872,  1462,  1482,  1485,  1484,  1486,  1478,  1469,  1468,
    1473,  1472,  1471,  1477,  1457,  1461,  1479,  1481,  1483,  1459,
    1460,  1456,  1458,  1451,  1452,  1463,  1464,  1465,  1466,  1467,
    1455,  1036,  1034,  1542,  1051,  1869,   735,  1066,     0,  1086,
       0,  1113,  1097,  1089,  1094,  1095,  1096,  1265,     0,  1596,
       0,     0,  1134,  1130,     0,  1143,  1881,     0,  1151,  1157,
    1158,   735,  1154,  1450,     0,     0,  1162,     0,  1190,  1174,
    1681,  1682,  1849,     0,  1194,  1200,  1197,  1176,  1208,  1202,
    1204,  1216,  1222,  1211,     0,  1216,     0,  1574,  1575,  1251,
    1254,     0,     0,  1521,  1234,     0,  1233,     0,     0,  1605,
    1294,  1276,  1282,  1813,  1283,  1278,     0,  1296,     0,     0,
    1319,  1309,     0,  1312,     0,  1326,  1321,     0,  1333,   733,
     731,   724,     0,  1341,  1342,  1339,  1361,  1344,  1786,     0,
    1408,  1395,  1399,   483,   473,  1786,   466,   481,   482,  1818,
    1660,     0,  1656,  1656,  1656,     0,  1639,     0,  1656,  1612,
       0,  1656,  1656,  1880,     0,   338,  1837,   317,   522,  1813,
    1813,  1776,  1823,   553,   521,   525,   526,     0,     0,   656,
    1813,   646,  1877,   647,  1888,  1887,     0,  1813,     0,   659,
     650,   655,  1830,   651,     0,   654,   661,   658,   652,   657,
       0,   662,   653,     0,   673,   667,   671,   670,   668,   672,
     643,   674,   669,     0,  1830,     0,  1813,   714,     0,     0,
     692,   823,   828,   829,  1830,  1830,   821,   822,  1830,   809,
    1410,  1890,  1889,   806,   798,   800,   801,     0,  1410,     0,
       0,     0,   815,   804,     0,   812,   795,   811,   796,  1571,
    1570,     0,  1556,     0,  1835,  1603,  1420,   871,  1607,  1544,
       0,  1678,   878,     0,   876,     0,     0,  1528,   905,   926,
     931,     0,     0,  1545,  1420,  1813,  1689,  1604,   944,   735,
     941,  1444,  1416,   736,   958,  1782,   735,  1414,   964,   963,
     962,   961,   972,  1415,  1813,   975,     0,   978,   979,     0,
    1813,   982,   983,   984,   985,     0,   986,  1415,   973,     0,
     829,   951,   952,   949,   950,     0,  1420,     0,   901,  1009,
    1024,  1026,  1025,  1019,  1021,  1027,  1450,  1016,  1013,  1450,
    1017,  1480,  1453,  1454,  1837,  1050,  1524,   735,  1058,  1059,
    1872,  1074,  1075,  1077,  1079,  1080,  1076,  1078,  1069,  1872,
    1065,     0,  1114,     0,  1116,  1115,  1117,  1099,  1109,     0,
       0,  1093,  1267,     0,  1804,     0,  1127,  1420,     0,     0,
       0,  1145,  1155,  1168,  1164,  1169,  1165,  1170,     0,  1160,
    1404,  1403,  1167,  1176,  1398,  1590,  1591,  1592,     0,     0,
    1442,     0,   735,     0,  1215,     0,     0,     0,  1252,     0,
    1256,  1255,  1248,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1236,  1237,  1683,  1442,     0,  1299,  1864,  1864,
    1314,  1315,  1316,     0,  1420,     0,     0,   734,     0,  1670,
       0,  1316,  1204,  1772,   467,     0,  1813,  1668,  1640,  1641,
    1642,  1666,  1663,  1664,  1638,  1657,     0,  1636,  1637,   502,
       0,     0,  1934,  1935,  1813,  1776,     0,   519,   523,   531,
     527,   529,   530,   532,   534,     0,   644,   645,   648,   649,
       0,   676,  1831,  1813,  1870,  1813,   677,   675,   689,  1813,
     708,   709,   712,     0,   703,   718,   720,  1813,   831,     0,
       0,   819,   820,     0,   735,   810,  1412,   797,   799,  1410,
     807,   802,   803,   816,   805,  1573,  1555,  1572,  1688,     0,
     735,   867,  1422,  1605,  1606,  1420,     0,  1677,   877,   879,
     886,   884,   913,  1811,   930,   929,   934,     0,  1443,   735,
    1441,   738,  1418,   953,     0,   976,   977,   980,   981,     0,
    1446,  1446,   974,   955,   967,   968,   966,   969,     0,   995,
       0,   896,   897,   707,     0,  1450,  1450,  1023,   735,  1020,
       0,  1057,   735,  1060,  1055,     0,     0,  1081,     0,     0,
       0,  1110,  1112,     0,  1105,  1119,  1106,  1107,  1098,  1101,
    1119,  1259,  1813,  1818,     0,  1805,  1266,  1128,  1131,     0,
    1145,  1144,  1148,  1137,     0,  1156,  1153,     0,     0,  1178,
    1177,   735,  1198,  1430,  1203,  1205,     0,  1217,  1450,  1450,
    1212,  1218,  1235,  1247,  1249,  1239,  1240,  1241,  1245,  1242,
    1246,  1243,  1244,  1238,  1684,  1292,     0,  1289,  1290,  1284,
       0,  1277,  1914,  1913,     0,  1865,  1302,  1302,  1425,     0,
    1688,  1322,     0,   727,     0,  1671,  1347,  1348,     0,  1351,
    1354,  1358,  1352,  1442,  1773,     0,   487,   484,   485,     0,
    1658,   319,   524,  1824,  1825,  1615,  1616,   541,   536,   540,
     539,   362,   554,   528,   533,  1585,   666,  1583,  1584,   665,
     682,   688,     0,   685,   710,   711,   720,   738,     0,     0,
    1410,   824,   826,   825,  1411,   735,  1409,   808,  1420,  1545,
    1421,   735,  1419,  1604,   868,  1679,  1576,  1577,  1895,  1896,
     915,   735,  1835,  1812,   912,   911,   907,     0,  1692,  1693,
    1694,  1695,  1696,  1697,  1698,  1699,  1691,  1445,     0,   988,
     987,   990,     0,  1588,  1589,   989,     0,   959,  1420,  1511,
    1420,  1511,   898,   899,     0,   903,   902,   904,  1022,  1028,
    1018,  1052,  1056,  1067,  1070,  1071,  1794,  1063,  1872,  1068,
    1119,  1119,     0,  1104,  1102,  1103,  1108,  1269,     0,  1263,
    1806,  1420,  1138,  1147,     0,  1171,     0,     0,  1185,     0,
    1434,   735,  1429,  1206,   735,   735,  1219,  1291,  1281,  1285,
    1286,  1287,  1288,  1279,  1300,  1303,  1301,   735,  1310,  1427,
    1813,  1420,  1420,   729,  1336,  1670,  1350,  1802,  1356,  1802,
    1425,   735,   735,  1396,  1406,  1437,  1438,  1405,  1402,  1401,
    1820,   486,   480,  1530,   535,  1901,  1902,   537,   364,   555,
     680,   678,   681,   679,   683,   684,     0,   660,   686,   687,
       0,   738,   830,   835,  1813,   837,   838,   839,   862,  1813,
     840,   841,   842,   843,   844,     0,   845,   846,   848,   849,
     850,     0,   851,   836,  1774,   852,   861,   855,   832,   833,
     854,   794,  1413,   869,  1423,   735,   889,   914,     0,   906,
    1911,  1912,  1447,   970,   997,     0,   996,     0,   900,  1072,
    1795,     0,     0,  1100,  1111,  1119,  1809,  1809,  1120,     0,
       0,  1272,  1268,  1262,  1132,  1146,     0,  1179,  1813,  1442,
       0,     0,  1180,     0,  1184,  1435,  1213,  1220,  1426,   735,
    1424,     0,  1324,  1323,  1362,   728,     0,  1349,     0,  1802,
    1353,     0,  1345,  1439,  1440,  1436,  1821,  1822,  1400,  1531,
       0,  1813,  1813,     0,   542,   543,   544,   545,   546,   547,
       0,   557,   663,   664,     0,     0,     0,   853,  1813,  1446,
    1446,  1775,     0,   834,   916,   908,  1420,  1420,     0,  1082,
    1118,  1810,     0,     0,  1813,  1270,     0,     0,  1260,  1264,
       0,     0,  1175,  1188,  1432,  1433,  1187,  1183,  1181,  1182,
    1428,  1317,  1370,   730,  1355,     0,  1359,  1921,  1920,  1813,
       0,     0,  1923,     0,  1813,  1813,   538,  1857,     0,   857,
     856,     0,   859,   858,   860,  1586,  1587,   999,   998,  1073,
    1122,  1121,     0,  1273,  1813,  1450,  1186,  1431,  1393,  1392,
    1371,  1363,  1364,  1774,  1365,  1366,  1367,  1368,  1391,     0,
       0,  1357,     0,   552,   548,  1922,     0,     0,  1807,   612,
       0,     0,     0,     0,  1813,  1835,   556,  1813,  1813,     0,
     563,   565,   574,   566,   568,   571,   558,   559,   560,   570,
     572,   575,   561,     0,   562,   567,     0,   569,   573,   564,
    1832,  1776,   719,   847,  1271,     0,  1172,     0,  1862,     0,
    1837,   549,   551,   550,  1808,   629,   614,   608,  1813,   616,
     468,     0,  1450,     0,     0,     0,     0,     0,     0,     0,
     607,   609,   615,   618,     0,   627,  1833,  1834,   621,   620,
    1274,     0,  1863,     0,  1389,  1388,  1387,     0,   613,     0,
    1870,   617,   605,  1688,   600,  1558,  1925,     0,     0,  1927,
    1929,     0,  1933,  1931,   576,   581,   584,   587,   578,   582,
     577,   583,   630,     0,   610,   611,   626,   625,   623,   624,
    1815,   622,  1390,  1894,  1893,  1845,  1383,  1377,  1378,  1380,
     598,   596,   597,     0,     0,   590,   594,   591,   472,   628,
    1837,     0,   599,  1559,  1924,  1928,  1926,  1932,  1930,   586,
     579,   585,   589,   580,   588,     0,   619,  1846,  1837,  1386,
    1381,  1384,     0,  1379,   595,   592,   593,   464,     0,   602,
       0,     0,  1385,  1382,     0,   463,   604,   601,   603,   606,
    1376,  1373,  1375,  1374,  1369,  1372,   465
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
     676,   677,   678,  2592,  2745,   679,   799,   968,  1174,   797,
    1410,  1413,  1414,  1679,  1676,  2187,  2188,   680,   681,   753,
     682,   683,   684,  1015,   805,   806,  1208,   685,   686,   496,
     590,   525,   620,   552,   723,   790,   854,  1216,  1450,  1704,
    1705,  1990,  1991,  1992,  1993,  1706,  2197,  2198,  2354,  2474,
    2475,  2476,  2477,  2478,  2479,  1987,  2202,  2481,  2537,  2596,
    2597,  2674,  2720,  2723,  2598,  2705,  2706,  2599,  2712,  2747,
    2600,  2601,  2602,  2603,  2640,  2627,  2641,  2604,  2605,  2606,
    2690,  2691,  2643,  2607,  2608,  2609,   594,   791,   857,   858,
     859,  1218,  1451,  1740,  2364,  2365,  2366,  2370,  1741,  1742,
     726,  1458,  2016,   727,   862,  1041,  1040,  1221,  1222,  1223,
    1455,  1748,  1043,  1750,  2216,  1165,  1396,  1397,  2333,  2455,
    1398,  1399,  1956,  1812,  1813,  2061,  1400,   794,   915,   916,
    1115,  1229,  1230,  1776,  1462,  1518,  1756,  1757,  1753,  2018,
    2220,  2398,  2399,  2400,  1460,   917,  1116,  1236,  1474,  1472,
     918,  1117,  1243,  1794,   919,  1118,  1247,  1248,  1796,   920,
    1119,  1256,  1257,  1528,  1848,  2081,  2082,  2083,  2052,  1134,
    2246,  2240,  2406,  1483,   921,  1120,  1259,   922,  1121,  1262,
    1490,   923,  1122,  1265,  1495,   924,   925,   926,  1123,  1275,
    1504,  1507,   927,  1124,  1278,  1279,  1512,  1280,  1516,  1840,
    2076,  2267,  1823,  1837,  1838,  1510,   928,  1125,  1285,  1524,
     929,  1126,  1288,   930,  1127,  1291,  1292,  1293,  1533,  1534,
    1535,  1858,  1536,  1853,  1854,  2087,  1530,   931,  1128,  1302,
    1135,   932,  1129,  1303,   933,  1130,  1306,   934,  1131,  1309,
    1865,   935,   936,  1136,  1869,  2094,   937,  1137,  1314,  1577,
    1878,  2097,  2284,  2285,  2286,  2287,   938,  1138,  1316,   939,
    1139,  1318,  1319,  1583,  1584,  1890,  1585,  1586,  2108,  2109,
    1887,  1888,  1889,  2102,  2293,  2428,   940,  1140,   941,  1141,
    1328,   942,  1142,  1330,  1593,   943,  1144,  1336,  1337,  1597,
    2123,   944,  1145,  1340,  1601,  2126,  1602,  1341,  1342,  1343,
    1904,  1906,  1907,   945,  1146,  1350,  1919,  2308,  2439,  2512,
    1609,   946,   947,  1147,  1352,   948,   949,  1148,  1355,  1616,
     950,  1149,  1357,  1920,  1619,   951,   952,  1150,  1360,  1625,
    1923,  2140,  2141,  1623,   953,  1151,  1365,   159,  1637,  1366,
    1367,  1942,  1943,  1368,  1369,  1370,  1371,  1372,  1373,   954,
    1152,  1323,  2297,  1587,  2433,  1892,  2111,  2431,  2508,   955,
    1153,  1381,  1945,  1645,  2156,  2157,  2158,  1641,   956,  1383,
    1647,  2324,  1159,   957,  1160,  1385,  1386,  1387,  2168,  1651,
     958,  1161,  1390,  1656,   959,  1163,   960,  1164,  1392,   961,
    1166,  1401,   962,  1167,  1403,  1665,   963,  1168,  1405,  1669,
    2176,  2177,  1961,  2179,  2338,  2460,  2340,  1667,  2456,  2522,
    2561,  2562,  2563,  2754,  2564,  2697,  2698,  2732,  2565,  2656,
    2566,  2567,  2568,   964,  1169,  1407,  1614,  1962,  1912,  2343,
    1671,  2025,  2026,  2226,  1513,  1514,  1817,  2041,  2042,  2232,
    2328,  2329,  2450,  2132,  2513,  2133,  2312,  2344,  2345,  2346,
    1810,  1811,  2060,  2261,  1312,  1313,  1295,  1296,  1563,  1564,
    1565,  1566,  1567,  1568,  1569,   997,  1195,  1417,   999,  1000,
    1001,  1002,  1266,  1267,  1498,  1353,  1361,   395,   396,  1035,
    1374,  1375,  1574,  1344,  1250,  1251,  2352,   482,   301,   699,
     700,   483,    98,   153,  1304,  1269,  1238,  1475,  2664,  1424,
    1004,  1781,  2036,  2110,  2235,  1260,  1345,  2206,  2544,  2262,
    1914,  2207,  1324,  1378,  1240,  1006,  1270,  1271,   748,   801,
     802,  2208,   271,  2200,   179,  1241,   774,   775,  1242,  1009,
    1010,  1011,  1203,  1176,  1432,  1428,  1421,   501,  2178,   539,
    1478,  1792,  2047,  1612,  2160,   282,  1501,  1806,  2256,   811,
    1114,  2185,  2492,   610,   339,   692,  1464,   423,  1224,   202,
     115,   393,  2421,   337,   352,  1033,   784,  2116,  2625,  2502,
    2247,    96,   214,   414,  2468,  1986,   780,   402,  2003,  2648,
     815,  1412,   218,   488,  2728,   168,   390,   744,   102,   732,
     688,   848,  2653,  2166,   350,  1576,   971,  1310,   407,   742,
    1209,  1349,   404,   391,  1758,  1778,  1499,  2695,  2241,   184,
     703,  2357,   721,   347,   602,  1492,  2412,  2164,   540,   203,
    2529,  2535,  2677,  2678,  2679,  2680,  2681,  1708
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2315
static const yytype_int16 yypact[] =
{
   -2315,   250,   436, -2315,  -195,   286, -2315,   436, -2315, -2315,
     619, -2315, -2315,   619,   619,   -51,   -51, -2315,   677, -2315,
     862,   614,   824, -2315, -2315,  1038,  1038,   634,   716, -2315,
   -2315,    18,   619,   -51, -2315, -2315,   892,   760, -2315, -2315,
     791,  1677,   -51, -2315, -2315, -2315,   614,   804, -2315, -2315,
     -68, -2315,   778,   778,   904,   950,  1150,  1150,  1150,  1024,
     778,  1051,  1021,  1059,  1150,  1092,  1109,  1431, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315,   844, -2315, -2315, -2315, -2315,
    1313, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
    1409,  1159,    18, -2315, -2315,  1169,   129, -2315, -2315,  1150,
    1150, -2315,  1150,  1103,  1562,  1103,  1182,  1150,  1150, -2315,
   -2315,  1103, -2315, -2315, -2315,  1132,   992,  1196, -2315, -2315,
    1152, -2315,  1207, -2315, -2315, -2315, -2315,  -150, -2315, -2315,
   -2315,  1321, -2315,  1150,   800,  1103,  1407,   749, -2315, -2315,
   -2315, -2315, -2315,  1414,  1206,   732,  1466, -2315,  1172, -2315,
    1132, -2315,    88, -2315, -2315, -2315, -2315, -2315,  1228,   456,
    1150,     3, -2315, -2315, -2315,   527, -2315, -2315, -2315,   948,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315,   800, -2315,  1236,
   -2315,   319, -2315, -2315,  1103, -2315,  1285, -2315,  1287,  1280,
    1627,  1150, -2315, -2315, -2315,   858, -2315, -2315, -2315, -2315,
   -2315,    62,  1633,  1150,    71, -2315,    86, -2315, -2315,   102,
   -2315, -2315, -2315, -2315,  1442,   456, -2315,  1472,   778,   778,
   -2315,  1228,  1254,    70,   490, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,   706, -2315,
      66, -2315,   800, -2315, -2315,  1379, -2315, -2315, -2315,  1150,
    1307,  1453, -2315, -2315, -2315, -2315,  1041,  1150,  1208,  1481,
     441, -2315,  1686,   538,  1262, -2315, -2315,  1263,  1608, -2315,
    1442, -2315,   778, -2315, -2315, -2315, -2315,  1228, -2315,  1267,
    1410, -2315,   778, -2315,  1062, -2315,    93, -2315, -2315, -2315,
   -2315, -2315,   706, -2315,  1467,  1453, -2315, -2315, -2315,   500,
   -2315, -2315, -2315,  1468, -2315, -2315, -2315, -2315, -2315,  1454,
   -2315, -2315, -2315, -2315, -2315,  1270, -2315, -2315, -2315,  1707,
    1628,  1281, -2315, -2315,   706, -2315, -2315,    23, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315,  1294, -2315,  1545,
    1612,  1282, -2315,  1722, -2315, -2315, -2315, -2315,  2338, -2315,
    1652, -2315,  1238,  1292,  1351, -2315,   706,  1474,  1396,   740,
    1348, -2315,  1346,  1150,  1693,   636,   -84,   -16, -2315,  1247,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,  1329,
   -2315,  1492, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
    1717,  1150, -2315,  1238, -2315,  1238, -2315, -2315,  1306,   -53,
   -2315, -2315,  1150, -2315,  1522, -2315, -2315,  1003, -2315, -2315,
     589,  1150,  1150, -2315,  1150,  1150, -2315,  1707, -2315,   135,
    1150,  1474, -2315,  1358,  1256,  1238, -2315,  1433, -2315, -2315,
   -2315, -2315,  1255, -2315,  1261,    68,   485,  1150, -2315, -2315,
    1258, -2315, -2315, -2315,   -23,  1349,  1103,  1103, -2315,  1456,
    1456,  1459, -2315,  1103,  1150, -2315, -2315, -2315,  1453, -2315,
    1376,  1512, -2315, -2315,  1323, -2315, -2315, -2315, -2315, -2315,
    1103, -2315, -2315,   387,   387,  1771,   387, -2315, -2315,   387,
     388, -2315, -2315, -2315, -2315,  -175, -2315, -2315, -2315, -2315,
   -2315, -2315,   124, -2315,  1328,  1389,  1526,   727,  1332,  6755,
   -2315,  1289, -2315, -2315,    45, -2315, -2315, -2315, -2315,  1270,
   -2315, -2315, -2315, -2315, -2315,  1150, -2315, -2315,  1283, -2315,
    1283, -2315, -2315,  1333,  1402,  1424, -2315,  1345, -2315,  1352,
   -2315,  1712, -2315,  1713, -2315,   839, -2315,  1680, -2315,  1375,
   -2315, -2315, -2315,  1103,  1103,   -56, -2315, -2315,  1261, -2315,
    1368,  1427,  1435, -2315, -2315, -2315,    42,  1652,  1150,  1189,
    1189,  1150,    11,  1474,  1150,  1805, -2315,  1521, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,   778,  1098,
   -2315,   128,  1326, -2315, -2315, -2315, -2315,  1520, -2315, -2315,
    1261, -2315,  1378,  1437, -2315,  6926,   125,  1629,  1453,  1327,
    1150,  1805,  1330,  -105,   -23,  1453,  1334,  1150, -2315, -2315,
   -2315,    89,   778, -2315, -2315, -2315,  1375,    59,   870, -2315,
    1261, -2315,  1386,   885,   684, -2315, -2315,  -183,  -145,   543,
     748,   764,  1337, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
    1457, -2315,   875, -2315, -2315, -2315, -2315,  1103,  1103,  1605,
   -2315, -2315, -2315,   521, -2315, -2315, -2315,  1150,   576, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315,  1144,   380, -2315,
    1338, -2315,   189, -2315,  1393, -2315, -2315, -2315, -2315,  1330,
   -2315, -2315, -2315, -2315,  1590,    49,  1630,  1340,  1150, -2315,
   -2315,  1150, -2315, -2315,   180, -2315, -2315, -2315,  1199, -2315,
   -2315, -2315, -2315, -2315, -2315,  1724, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315,  1341, -2315, -2315,  1797,  1411, -2315,  1391,  1416,
   -2315, -2315, -2315, -2315,  7307,   180,  1831, -2315,  1461,  1461,
   -2315,   980,  1551, -2315,  1387,  1387, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315,  1421, -2315,  1453,   295, -2315, -2315,
   -2315,  1453, -2315, -2315,  1452, -2315,   445,   445, -2315, -2315,
    1516,  1362,    43,  3515,  3795, -2315,  1630,  1672,  1453,  1426,
    7508,  1412, -2315,  1103, -2315,   180, -2315,  1430,  1614, -2315,
    1693, -2315, -2315, -2315, -2315,  1387,  1422, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
     980, -2315, -2315, -2315, -2315,    29,  1431, -2315,    31, -2315,
   -2315, -2315, -2315,  1373, -2315,  6414, -2315, -2315,  1362,  1428,
   -2315, -2315,  1505,  4106, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,   -41, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315,  1483, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315,   901, -2315, -2315,  1547, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315,  1382,  1453,  1411, -2315,
   -2315,  1769, -2315, -2315, -2315, -2315, -2315,  1423,  3196,   749,
     749,  1432,  1439,  1441, -2315,  1443,   749, -2315, -2315, -2315,
    7605,  7508,  7605,  1444, -2315,  1423, -2315,   120,  1012,  1055,
   -2315,  1719, -2315, -2315, -2315, -2315, -2315,  1421, -2315,  1448,
    1449,  1450,  7508, -2315, -2315,   811, -2315,   180, -2315, -2315,
   -2315, -2315, -2315,   -23,   -23, -2315, -2315, -2315, -2315,  1705,
   -2315, -2315,  1393,  1453, -2315, -2315,  1446, -2315,  1462, -2315,
      67,    67,  1395,  1465, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315,  -148,  4923,  7508,   464,   507,
     510,  1238,   881,  -224,  5876,  5975,  1638,  -203,   995,   881,
    1103,  1473, -2315, -2315,  5975, -2315, -2315,   881,  1373,  1394,
    1103,  5043,  5975, -2315,   947,  2845,  1238,  1103,  1238,  1103,
      69,   473,  1103,  1238, -2315, -2315, -2315, -2315, -2315, -2315,
    5165,  5187, -2315, -2315,  1373,    76,  1103,  1238,  1103,  1103,
   -2315, -2315,  1698,  1613, -2315,  6833, -2315, -2315,  1421, -2315,
    1418,  1434,  7508,  7508,  7508,  3196,  1438, -2315,  1065, -2315,
    3196, -2315, -2315, -2315, -2315,  7508,  7341,  7508,  7508,  7508,
    7508,  7508,  7508, -2315,  3196,  7508,  1012,  1523, -2315,  1470,
   -2315, -2315, -2315,  1896,  1431, -2315,   756, -2315, -2315, -2315,
   -2315,   109, -2315,  -168,   460,   269, -2315, -2315, -2315,  1796,
     865,  1732,  1551,  1103,  3196, -2315,  1799, -2315,  5285, -2315,
   -2315, -2315, -2315, -2315,    63,   207, -2315,   464, -2315,  1486,
   -2315,   749, -2315, -2315, -2315, -2315,  1802,  4092, -2315,   510,
   -2315, -2315,  1238,  1147,  1551,  1803, -2315,   359, -2315,  1550,
   -2315, -2315,  1391,  1421,  1238,  1807,  1587,  1128,  1808,  5307,
   -2315,  5571,   100,  1153,  1157,  1809,   123,  1447, -2315, -2315,
   -2315,  1810,    58, -2315, -2315, -2315,  4481, -2315, -2315,  1848,
     -41, -2315, -2315, -2315,   881, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315,  1510, -2315, -2315,   660,  1373, -2315, -2315,    20,
   -2315, -2315, -2315, -2315, -2315, -2315,  1490,  5975, -2315,  1507,
    1814,  1909, -2315, -2315, -2315, -2315,   947,  1559, -2315,  1518,
   -2315,  6246,   -24,  -228,  1527,  1525, -2315,   393, -2315,  1529,
    1828,   673, -2315,  1779, -2315,  1832,  1587,  1834,  1779,  1103,
    1835,  1484, -2315,   994, -2315, -2315, -2315, -2315, -2315, -2315,
    1714, -2315,   881, -2315,   433, -2315,   332,  1953, -2315,    57,
   -2315,  1838,   918,   623,  1939,  1839,  4768, -2315, -2315,  1103,
    1840,  5667,  1373, -2315, -2315,   516, -2315, -2315, -2315, -2315,
    3613, -2315,  1793, -2315,  1205,  1841,  1878,  1842,  1779, -2315,
   -2315, -2315,  1103,  1773,   215, -2315,   226,   812, -2315, -2315,
     342,  1546,  1548,  1552,   300, -2315,  1421, -2315,  1553, -2315,
   -2315,   354,  1554,   812, -2315,  1077,  1055,  1055, -2315, -2315,
   -2315,  1036,  1556,   367,  1549,  1150, -2315,   -23,  1884,  1555,
      84,  7233, -2315,  1150,  1596,  1696, -2315, -2315,  1899, -2315,
   -2315,   994,  1813, -2315,   596,  1697,   -29,  1564, -2315,  1421,
   -2315, -2315, -2315,  6056,  1815, -2315,  1794, -2315,  1643, -2315,
    1681,  1765, -2315, -2315, -2315,  1447, -2315,  1147, -2315, -2315,
   -2315,   757,     6,  1103, -2315, -2315, -2315, -2315, -2315,  7508,
    1750, -2315,  1412, -2315,  1238, -2315, -2315, -2315,  1792, -2315,
   -2315, -2315,  5975, -2315,  1730,   112,  1731,  1488,  1558,  1864,
    1864,  1864,  1864, -2315, -2315,  5975,  6056, -2315, -2315, -2315,
   -2315,  -203,   174, -2315,  1530, -2315,  1532, -2315, -2315, -2315,
   -2315,  1473, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,  4359, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315,     2, -2315,  1907,  1002,  1861, -2315,
     994,   132, -2315, -2315,  1674, -2315, -2315,   110,  7508, -2315,
    1593,   881, -2315, -2315,  6056,  1559,  1247,  1238, -2315, -2315,
   -2315, -2315, -2315,  1872,  1103,   464, -2315,   838, -2315, -2315,
   -2315, -2315,  1587,  1394, -2315, -2315, -2315,  1816, -2315, -2315,
     837,  1915, -2315, -2315,  1103,  1915,  1600, -2315,  1421, -2315,
   -2315,   648,  1228, -2315, -2315,  4648, -2315,  2001,   714,   117,
   -2315, -2315, -2315,  1150, -2315,   440,  5975, -2315,    38,  5694,
   -2315, -2315,  1103, -2315,  1854, -2315, -2315,  6056, -2315,  1453,
   -2315, -2315,   994, -2315, -2315, -2315, -2315, -2315,  1939,  1823,
   -2315, -2315,   838,  1773, -2315,  1939, -2315, -2315, -2315,  1522,
   -2315,  1103,  1448,  1448,  1448,  3196, -2315,   397,  1448, -2315,
    7485,  1448,  1448, -2315,   180, -2315,  1613, -2315, -2315,  1150,
    1150,  1805,  1381, -2315, -2315, -2315, -2315,  1852,   -43, -2315,
    1150, -2315,   -94, -2315, -2315, -2315,  1419,  1150,  1394, -2315,
   -2315, -2315,  1759, -2315,  1453, -2315,  2002, -2315, -2315, -2315,
    1103, -2315, -2315,  1103, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,  1856,  1759,   148,  1150, -2315,  1557,  1609,
   -2315, -2315, -2315,  1798,  1759,  1759,   329,  1812,  1759, -2315,
    1900, -2315, -2315, -2315,  1561,  1560, -2315,   994,  1900,  1836,
    1642,  1775, -2315, -2315,  1800, -2315, -2315, -2315, -2315, -2315,
   -2315,   532, -2315,  1103,  1551,  1869,   828, -2315,     5,   -19,
     881,  1631,  1643,   881, -2315,  1632,   464, -2315,   -41, -2315,
   -2315,  1695,  1715, -2315,   834,  1150, -2315, -2315, -2315, -2315,
   -2315,  1785, -2315, -2315, -2315,  2053, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,  1864,  1150, -2315,   -71, -2315, -2315,  1425,
    1150, -2315, -2315, -2315, -2315,   -12, -2315,  1139, -2315,  1493,
    1798, -2315, -2315, -2315, -2315,  1880,   828,  1885,   104, -2315,
   -2315, -2315, -2315,  2071, -2315,  1646,   181, -2315, -2315,   174,
   -2315, -2315, -2315, -2315,  1613, -2315, -2315, -2315,  1961,  1951,
    1473, -2315, -2315, -2315, -2315, -2315, -2315, -2315,  1733,  1473,
   -2315,  1648, -2315,  2048, -2315, -2315, -2315,   276, -2315,   994,
     724, -2315,    73,   215,   544,   881,   881,   828,  1901,  1238,
     135,   879,  1957, -2315, -2315, -2315,  2098, -2315,  1910, -2315,
   -2315, -2315, -2315,  1816, -2315, -2315, -2315, -2315,  1103,  1979,
    1792,  1074, -2315,  1619, -2315,  1622,   994,   897, -2315,   532,
   -2315, -2315, -2315,  5975,  1228,  1228,  1228,  1228,  1228,  1228,
    1228,  1228,   714, -2315,    72,  1792,   -66, -2315,  1688,  1688,
   -2315, -2315,   310,  1103,   828,  1922,  1675, -2315,  1679,  2120,
    1103,   363,   837,  2123, -2315,  1625,  1150, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315,  1079, -2315, -2315, -2315,
    1103,   510, -2315, -2315,  1150,  1805,   491,  1362, -2315, -2315,
   -2315,  1103,  1103, -2315, -2315,   524, -2315, -2315, -2315, -2315,
     524, -2315, -2315,  1150,  1426,  1150, -2315, -2315, -2315,  1150,
   -2315, -2315, -2315,   158, -2315, -2315, -2315,  1150,  1634,   524,
     524, -2315, -2315,   524, -2315, -2315,  1837, -2315, -2315,  1900,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,  1550,   -29,
   -2315, -2315,  1843,   331,  1929,   828,   651, -2315, -2315, -2315,
   -2315, -2315,   -39,    87, -2315, -2315, -2315,   710, -2315, -2315,
   -2315, -2315, -2315, -2315,   524, -2315, -2315, -2315, -2315,   524,
     534,   534, -2315, -2315, -2315, -2315, -2315,  1635,   881, -2315,
     881,  2511, -2315,   499,    17,   174, -2315, -2315, -2315,  2071,
    1103, -2315, -2315, -2315, -2315,  1636,  1093,    -5,  1637,   651,
     994, -2315, -2315,  2085, -2315, -2315, -2315, -2315,   724, -2315,
    1945, -2315,  1150,  1522,  1829, -2315, -2315,   881, -2315,   881,
     879, -2315, -2315, -2315,  1149, -2315, -2315,  1103,  5975,  1050,
   -2315, -2315, -2315,  1846, -2315, -2315,  1882, -2315, -2315, -2315,
   -2315,  1622, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315,    -9, -2315,  1103, -2315, -2315, -2315,
    1099, -2315, -2315, -2315,  7508, -2315,  5975,  5975,  1685,  1818,
    1550, -2315,   881, -2315,   651, -2315,  1844, -2315,   994, -2315,
    2028,  1718, -2315,   742, -2315,   569, -2315,  1625, -2315,  1103,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,  1342, -2315,
   -2315,   -35, -2315,  1103, -2315, -2315, -2315, -2315, -2315, -2315,
     502, -2315,   510,   502, -2315, -2315, -2315,    79,  2103,  2649,
    1900, -2315, -2315, -2315, -2315, -2315, -2315, -2315,  1739,  1949,
   -2315, -2315, -2315,  1956, -2315, -2315, -2315, -2315, -2315, -2315,
    1860, -2315,  1551, -2315, -2315, -2315, -2315,  1103, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,  3108, -2315,
   -2315, -2315,  1347, -2315, -2315, -2315,  1488, -2315,   828,  1795,
     828,  1801, -2315, -2315,  5975, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315,  1093, -2315,  2058, -2315,  1473, -2315,
   -2315, -2315,   651,  1226, -2315, -2315,  1226,   -95,  1103, -2315,
   -2315,   828, -2315, -2315,  1783, -2315,  2119,  1906,  1932,   953,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,   812, -2315, -2315, -2315, -2315, -2315,  1874,
    1150,  1739,   828,  1678, -2315,  2120, -2315,  1630,  2076,  1630,
    1685, -2315, -2315, -2315, -2315,  1886, -2315, -2315, -2315, -2315,
    1350, -2315,  1103, -2315,  1335, -2315, -2315,   491, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315,   524, -2315, -2315, -2315,
     524,   -26, -2315, -2315,  1150, -2315, -2315, -2315, -2315,  1150,
   -2315, -2315, -2315, -2315, -2315,    22, -2315, -2315,  2117, -2315,
   -2315,    56, -2315, -2315,  2172, -2315, -2315, -2315,  2649, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,  1103, -2315,
   -2315, -2315, -2315,  1488, -2315,   881, -2315,   881, -2315, -2315,
   -2315,  2132,  2070,  1226,  1226, -2315,  1726,  1726, -2315,  1847,
    1238,   672, -2315,  1103, -2315, -2315,  5975, -2315,  1150,   692,
    1923,  1924, -2315,  1926, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315,  1103, -2315, -2315, -2315, -2315,  1737, -2315,  1103,  1630,
   -2315,  1103, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
    1385,  1150,  1150,  1343, -2315, -2315, -2315, -2315, -2315, -2315,
    1541, -2315, -2315, -2315,  2080,   524,   524, -2315,  1150,   534,
     534, -2315,   491, -2315, -2315, -2315,  1739,  1739,  5975, -2315,
    1226, -2315,  5975,  5975,  1150,  1238,  1238,  1855, -2315, -2315,
    1711,  1103, -2315, -2315,  1846, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315,  1053, -2315, -2315,  1103, -2315, -2315, -2315,  1150,
     491,   491, -2315,  1988,  1150,  1150, -2315,  1987,  1747, -2315,
   -2315,   510, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315,   464,  1238,  1150, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,  1242, -2315, -2315, -2315, -2315, -2315,  1863,
    2092, -2315,   491, -2315, -2315, -2315,   491,   491,  1980,  1905,
       7,  1453,  1920,  1706,  1150,  1551, -2315,  1150,  1150,  1103,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,   475, -2315, -2315,   627, -2315, -2315, -2315,
    1356,  1805, -2315, -2315, -2315,   464, -2315,  1845,  1789,   137,
    1613, -2315, -2315, -2315, -2315, -2315,  1977, -2315,  1150, -2315,
    1411,  1889, -2315,  7772,  7772,  1298,  2093,  2018,   -31,   -31,
   -2315, -2315, -2315, -2315,   -31, -2315, -2315, -2315,   400, -2315,
   -2315,  1103, -2315,  1162, -2315, -2315, -2315,    82, -2315,  1183,
    1426, -2315, -2315,  1550,  4219, -2315, -2315,   942,  1137, -2315,
   -2315,  1156, -2315, -2315, -2315, -2315,   -18,     0, -2315, -2315,
   -2315, -2315, -2315,  7772, -2315, -2315, -2315, -2315, -2315, -2315,
     576, -2315, -2315, -2315, -2315,  1887,   -72,    82, -2315, -2315,
    1894, -2315, -2315,  1453,  1453, -2315, -2315, -2315,  1769, -2315,
    1613,  1103, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315,  2169, -2315, -2315,  1613, -2315,
   -2315,  1917,  1103, -2315, -2315, -2315, -2315,  1804,    47, -2315,
    7772,   -57, -2315, -2315,  1453, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315,  1238, -2315
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2315, -2315, -2315, -2315, -2315,  2219, -2315, -2315, -2315,   861,
   -2315,  2182, -2315,  2139, -2315, -2315,  1485, -2315, -2315, -2315,
    1413, -2315, -2315,  1420,  2217, -2315, -2315,  2118, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,  2043,
     848, -2315, -2315, -2315, -2315, -2315,  2099, -2315, -2315, -2315,
   -2315,  2040, -2315, -2315, -2315, -2315, -2315, -2315,  2173, -2315,
   -2315, -2315, -2315,  2029, -2315, -2315, -2315, -2315,  2013, -2315,
   -2315,   -78, -2315, -2315, -2315, -2315, -2315,  2102, -2315, -2315,
   -2315, -2315,  2077, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315,   928, -2315, -2315, -2315,  1639,
   -2315, -2315, -2315, -2315, -2315, -2315,  1736, -2315,  1849, -2315,
   -2315, -2315,  1753,  1720, -2315,  1721, -2315, -2315, -2315, -2315,
     362, -2315, -2315,  1978, -2315, -2315, -2315, -2315, -2315,  1850,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315,  1234, -2315, -2315, -2315,  1482,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315,   662, -2315, -2315,  1777, -2315,  -768,
    -837, -2315, -2315, -2315,   239, -2315, -2315, -2315, -2315,  -134,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -1423,   817,  1524,
     372,   558, -1422, -2315, -2315, -2315,  -958, -2315,  -438, -2315,
   -2315,   866, -2315,   379,   604, -2315,    92, -1420, -2315, -2315,
   -1417, -2315, -1416, -2315, -2315,  1475, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,   290, -1846, -2315, -2315, -1155, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
    1429, -2315, -2315, -2315, -2104,    75, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315,  1243,   229, -2315,
     200, -2315, -2315, -2315, -2315, -1852, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -1253, -2315, -2315,  -706, -2315,  1491, -2315,
   -2315, -2315, -2315, -2315, -2315,  1056,   533,   535, -2315,   449,
   -2315, -2315,  -106,   -90, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,   504, -2315, -2315, -2315,  1047, -2315, -2315,
   -2315, -2315, -2315,   813, -2315, -2315,   218, -2315, -2315, -1298,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
     814, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315,   788, -2315, -2315,
   -2315, -2315, -2315,    36, -1778, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315,   772, -2315, -2315,
     771, -2315, -2315,   447,   222, -2315, -2315, -2315, -2315, -2315,
    1009, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,    26,   734, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315,   729, -2315, -2315,   208,
   -2315,   430, -2315, -2315, -1460, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,   982,   725,
     199, -2315, -2315, -2315, -2315, -2315, -2315, -2314,   981, -2315,
   -2315, -2315,   196, -2315, -2315, -2315,   411, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315,   365, -2315, -2315, -2315, -2315, -2315, -2315,
     700,   187, -2315, -2315, -2315, -2315, -2315,  -122, -2315, -2315,
   -2315, -2315,   389, -2315, -2315, -2315,   959, -2315,   960, -2315,
   -2315,  1181, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315,   167, -2315, -2315, -2315, -2315, -2315,   949,   375, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315,     4, -2315,   376, -2315, -2315, -2315, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315,  -359, -2315, -2315, -2315,
   -2315, -2315, -2315, -2315, -2315, -2315,  -138, -2315,   668, -2315,
   -2315, -1601, -2315, -2315,  -623, -2315, -2315, -1754, -2315, -2315,
       8, -2315, -2315, -2315, -2315,   -96, -2217, -2315, -2315,    -1,
   -1859, -2315, -2315, -1858, -1573, -1087, -1465, -2315, -2315,   782,
   -1288,   186,   190,   191,   193,    78,   162,  -783,   476,   320,
   -2315,   629,   284, -1400, -1056,  -900,   988, -1572,  -392,  -361,
   -2315, -1332, -2315, -1061, -1814,   868, -2315,   -91,  2055, -2315,
    1656,  -558,    12,  2204, -1096, -1067,   130,  -835, -2315, -1093,
   -1348, -2315,   429, -1316, -1222, -1109,  1102, -1749, -2315, -2315,
     642, -1132, -2315,   234,   919,  -641, -2315, -2315,  -103, -1209,
    -779,  -111,  2091, -1040,  2122,  -666,  1037,  -540,  -487, -2315,
   -2315, -2315,   -55,  1367, -2315, -2315,   501, -2315, -2315,  1784,
   -2315, -2315, -2315, -2315, -2315, -2315, -1982, -2315, -2315,  1607,
   -2315, -2315,  -192,  -594,  1952, -2315, -1189, -2315, -1326,  -262,
    -631,   978, -2315,  1859, -1453, -2315,  -790, -2315, -2315,   -54,
   -2315,    -4,  -664,  -355, -2315, -2315, -2315,   442,  -194, -2315,
   -1219, -1560,  2157,  1927, -2315, -2315, -1144, -2315, -2315,  1073,
   -2315, -2315, -2315,   425, -2315,   279, -1940, -1490, -2315, -2315,
   -2315,  -172, -2315,   489, -1413, -1505, -2315, -2315, -2315,  -598,
   -2315, -2315,  1666, -2315,  1825, -2315, -2315, -2315,   801, -2315,
   -1799,  -245, -2315, -2315, -2315, -2315, -2315, -2315
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1882
static const yytype_int16 yytable[] =
{
     139,   427,   139,   428,   755,   160,   966,   697,   139,   245,
    1172,   415,   138,  1466,   141,  1283,   747,   998,  1037,  1377,
     147,   793,  1013,   855,  1447,  1901,   773,  1893,  1734,  1736,
    1905,  1737,   139,   427,  1738,  1739,   215,   268,  1744,  1802,
    1294,  1315,  1633,   465,   180,  1493,   704,  1626,   788,   437,
    2056,  1861,   103,   104,   105,  1376,  2228,  1249,  1649,  2072,
     111,  2134,  1305,  1502,  2211,    99,  1268,  1855,   714,   464,
    1305,   279,   107,  1786,   782,  1531,  -695,  1023,  1359,  -693,
     259,   246,   345,   291,  1305,  1646,  2161,   264, -1595,   807,
     855,  2696,  2079,  2242,   321,   134,   135,  1431,   136,   392,
     860,   220,   411,   143,   144,  2484,  2275, -1868,   114,  2368,
     211,  1442,   161,  2070,  1580,  2750,  1220,  1589,  1864,  1599,
     187,   430,  1476,   838,   838,  1779,  1846,   188,  2238,   169,
    1461,  2429,  1508,  1777,  2378,  1989,  1980, -1837,   360,   807,
     297,  1882,   530,  2118,   449,  1751,  2204,  1699, -1596, -1818,
    1486,   689,  1541,  1220,   413,   215,   219,   518,  1220,  1996,
    2719,  1228,    42,  1132,  2217,    94, -1782,  2030, -1782,  2751,
    1639,   536,  1525,   221,   838,  1700,  1701,  2752,  2722,  2162,
    2010,  2489,  2065,  1821,   327, -1624,  1249,   251,  2331,   761,
    2214,  1883,  1192, -1786,  1897,  1850,   351,   419,   761,   258,
    2171,  1948,  1850,   127,   701,   129,    23,   587,  1188, -1601,
    1818, -1881,  1617,  2265,   325,  1030,  -695,  2628, -1881,  -693,
    -695,   813,  2515,  -693,   730,  2746,  2195, -1837,  1031,  1206,
     274,   275,  1274,  1541,   481,  2729,   536,  1573,  2614,   762,
     515,   154,  1677,  1453,    94,   295,   344, -1813,  1573,  1358,
       3,  2209,  1289,   299,   536,  1603,   418,  1954,    15,  1246,
    2011,  2753,   730,  1290,  1881,   708, -1563,  2730,  2654,  1408,
    2221,  2222,   416,  1604,  2223,    94,  1631,  -695,   400,   516,
    -693,  1239,   394,  1860,   311,  1882,   204,  2731, -1800,  1282,
    1286,  2234,    24,   519,   314,   731,  1997,  2557,  1192,  1311,
    1022,  2650,   128,   709,  2090,  1305,  1329,  1331,   130,  1573,
    1454,  1884,  1780,  1008,   702,  2259,  2243,    94,  1220,  2066,
    2260,   212,   690,  1868,  2347,  1388,  1239,  2120,  1949,  2629,
     588,   189,  1678,   733,  1244,  1883,  1133,  1177,  1264,  1246,
     431,   139,  1959,   139,   139,  2163,  1958,   493,  1902,  1965,
     139,  1210,  1526, -1782,   842,   485,   486,  2204,   137,   410,
       5,   280,   491,  2154,  2371,  1264,  2155,   139,   283, -1798,
     507,   507,  1192,   507,  1885,  2276,   507,   514, -1563,   504,
    2095,  1180,  1181,   281,  1364,   -35,  1581,   424,  1186,  2098,
    2045,  1855,   520,   763,  1855,  1714,  2244,  1715,   436,  1420,
    1420,  1420,   763,   190,  2430,   154,  1702,   444,   445,   741,
     446,   447,  1433,  1435,  1192,   154,   453,  1268,  -695,  1441,
    1411,  -693, -1818,   450,  2239, -1786,  1192,  1394,  2227,  1600,
     840,  1477, -1782,   470,   764,   765,  2350,   766,  1575,  1192,
     139,   139,   260, -1868,  1294,  1556,   766,   767,  1819,   394,
     492,  2029,   585,   585,  2687,  1884,   767,  1634,  1582,   191,
     515,  1570, -1786,   137,   192,  1211,  1212, -1786,  1913,   800,
    1268,  2358,  2071,  1321,  2403,   368,   715,   137,   139,  1264,
    1395,  2196,   284,   137,   129,   451,  -700,   694,   137, -1113,
     585,  1179,  1590,  1503,   705,  1896,  1024,   781,  2088,   516,
    2053,   139,  2644,  1008,  1008,  1008,   137,  2396,   137,    97,
     292,   542, -1813,  1866,  2414,   254,  2416,  2277,  1885,  1193,
    1496,   800,  2084,  1197,  1305,  1008,  1556,   768,  1198,  1394,
     346,   579,  1394, -1113,   243, -1599,   768,  1703,  1268,   265,
    2490,   746,   861, -1113,  1909,   763,   322,  2434,  1019,  2245,
     537,  1388,   597,   137,   599,   749,  2058,   604,   606,  2655,
     608,  1532,  -700,  2062,  1573,  2039,  2315, -1786,   255,   261,
    1194,   716,   763,  2103,   394,   137, -1685,  2452,  2453,  2043,
    2516,  1012,  1395,  1448,   979,  1395,   980,   130,   137,   766,
     613,   687,  1971,  1468,   149,   710,   696,   769,   211,   767,
    1503,  1268,  1886,   707, -1786,  1517,   769,   243,   255, -1786,
    2142,   979,   466,   980,  2091,   537,   766,  2482,  1820,  2401,
    1855,  2483,   758, -1113,   712,  1193,   767, -1786,  1363,  1851,
    1008,  2542,  2543,   537,   137,  2072,  1851,     4,  1787,  1972,
    1852, -1881,   770,  2688,   505,   512,  -698,  1852, -1881,   843,
    2296,   770,  1322,  1481,  1264,   986,  2159,   856,  1348, -1563,
     761,  1755,  1714,   754,  1715,   841,  1264, -1563, -1563,  2137,
     846,   -96, -1563,  1029,  2534, -1850,  1680,  1815,  2268,   768,
    2270,  2709,   986,   851,   851, -1881,   763,   969,  1008,   216,
    1845,  1847,   771, -1113, -1881,  1008,  1008,  1008,  1427,  1193,
    1014,   771,   849,  1427,   786,  1364,   768,   787,  1008,  1008,
    1008,  1008,  1008,  1008,  1008,  1008,  1804,  1427,  1008,  2301,
    2708,  1246,  -698,  1807,   856,   979,  2049,   980,  1570,  1263,
     766,  1276,  2195,  2104,  1268,  2051,  2539,  2540, -1113,    16,
     767,  1193,  2547,  2548,  2248,  1364,  1886,  1470,  2195,   769,
   -1665,   412,  1934,  1193,  1351,  2084,  1356,  1449,   328,  1898,
    1935,  1382,   222,  2114,   751,   283,  1193,  1258,   305, -1786,
    1348,  2224,  2332,  2360,    18,  1404,   769,  1317,     5,  1253,
    1635,   154, -1113,  2105,  2291,  2689, -1881,  2230, -1113,  2035,
     187,   154, -1667, -1788,   770,  1012,   986,   188,  2422,  2117,
    1932,    27,  1197,  1393, -1662,  2638,  2257,  1198,  2273,   212,
     361,  1947,   -96,  1497,  1951,   243,  1636,  1692,  1456,  -520,
     768,   770,  1955,  2131,   243,  1782,   154,  1132,  1305,  1573,
    2423,  2424,  2361,   467,  1264,  2280,  2675, -1881,   137,  2282,
   -1601,  1364,   362,  2699,   771,   117,  1910,  -520,  -520,  1754,
     759, -1881,  1803,  2349,  1348,    52,  1171,   800,  2505,  2115,
    1807,   763,  2336,   454,   763,   137,  2317,  1973,   243,   137,
    1487,   771,  2192,   763,   413,  1911,  2506,  2290,  2310,   284,
     217,  1632,  1505,  2699,  2195,  -690,   557,  1264,   468,  1695,
     769,  2348,    43,   137,   137,  1461,  1841,  1842,  1843,  1844,
     979,  2341,   980,   558,    53,   766,   752,  1976,   766,   306,
    1453,  1659,   979, -1881,   980,   767,   187,   766,   767,   228,
     139,   139,  1215,   188,  1809,   223,  1936,   767,  1755,   728,
    1254, -1782,  1255, -1782,  2553,   770,   329,   763,  2263,  2263,
    2639,   441,    54,   559,    55,   243,    56,  1916,    28,   442,
     730,   137,  2334,    43,    57,  1579,     5,  2361,  1937,  1610,
    1457,  -520,  2362,   229,    33,  2500,  2106,  2363,   182,  1660,
     137,   986,  2402,   230,  1809,  2536,   226,  1454,  2404,   137,
    1938,   766,  2616,   986,  2311,   771,   729,  2196,  2407,  -520,
    2507,   767,  2249,  2250,  2251,   768,   330,   137,   768,  2279,
    1133,   189,   745,  2196,   839,   607,   300,   768,  1611,  2044,
      58,  1870,  1008,   170,  1871,  1252,   137,  1872,  1873,  1272,
    1800,   735,  2269,  2408,  2271,  -690,  1272,  1307,  1979,  -690,
     137,  1658,  2611,  1939,  1272,  2342,  2205,  1326,   137, -1850,
     137,   763,  1347,   253,  1354,  1801,  1354,  1362,  1379,  1326,
    1573,  2314,  1916,   232,  1020,  2252,   183,   171,  2445,  2662,
    2657,  2446,  2447,  1268,    36,   769,  1354,   172,   769,  2570,
    2425,   768,    94,   190,  2448,   137,   227,   769,  -520,   560,
     979,  2205,   980,  1446,  1003,   766,  -690,    39,  2463,  2464,
     561,  1491,  2363,  1940,   763,   767,  1927,  1642,  2144,   187,
   -1881,  1008,    60,  2367,   253,  1871,   188,  1983,  1872,  1873,
     770,    40,  1808,   770,  2590,  2591,  1268,  2593, -1782,  1332,
    2594,  2595,   770,   233,  2610, -1881,  1917,   189,   243,   191,
     438,  2714,   154,   979,   192,   980,   836,   836,   766,  2196,
    2037,   769, -1881,  1578,  1252,   718,    61,   173,   767,    48,
    2738,   986,  2494,  2575,   137,   730,  1643,   137,  1154,  1644,
     771,   228, -1798,   771,  1272,   243,   137, -1881,  2741,  2755,
    2440,   730,   771,  1333,  1824,   768,   439,  1825,  2253,  2254,
     526,  1334,  2558,  2255,  1826,  1827,   770,   836,   405,  1941,
    2441,   562,   563,   763,  2107,  1297,  2520, -1782,  1427,   190,
    2063,  1272,  2480,  1008,   986,   229,   564,   763,   565,  -520,
     589,  1648,  1272,    49,  2073,   230,  2442,   174,   236,  2201,
    1620,  2559,   719,   725,   720,    94,   737,  -690,   768,   231,
     137,  1917,  1828, -1669,  2426,    64,   771,   766,   193,   406,
    2040,  2443,   739,   351,    51,   769,  2040,   767,  1155,   154,
    2491,   766,   619,  1416,  1281,   191,  1362,    93,  2560,  2122,
     192,   767,   175,  2427,  2233,  1335, -1879, -1881,  2307,  1272,
    1672,   614,  1197,  1272,  1003,  1003,  1003,  1198,    67,  2617,
    1874,  1875,   722,  1443,    97,  2663,  2665, -1881,  2037,  1156,
     770,  1391,   566,  2306,  1197,   232,  1003,   118,   769,  1198,
     155,  1829,   156,   615,  1876,  1877,  1511,  1543,  1544,   139,
     189,   252,   176, -1881,  1207,  1491,  2713,   756,  1157,  1298,
    1299,  1674,   837,   837,  1966,  2693,  2715,   768,   100,  2694,
    1830,  2325,  2325,  2569,   137,  2725,  1300,  2135, -1881,   567,
     771,   768,   243,   770,   139,  2717,  1545,  1546,  2716,   757,
      68,  1831,  1930,  2666,  2532,  2258,   101,  2263,  2263,  2496,
    2545,  2497,  2136,  1931,  2359,   233,  2634,  2718,   234,   235,
    1788,  1874,  1875,   837,  1325,  2573,  2574,   471,   472,   473,
    2237,  2323,   190,    94,   243,   394,  1325,   137,   816,  2667,
    1301,  2194,  2749,   771, -1782,  1876,  1877,   769,  2229,  2532,
    1237,  1003,   508,   761,   510,  1832,  2527,   511,  1237,  1237,
   -1881,   769,  2303,  1158,   316,    13,  2528,  2621,  1237,   106,
      13,  2622,  2623,  1788,  1900,  1237,  1237,   817,   818,   819,
     820,   821,  2613,  2237,  2533, -1881,    26,  2304,   191,  2418,
     154,  1694,   770,   192,  1237,  1237,  1707,  1743,  1921,  1745,
    1452,  2527,  2546,    47,  1452,  2444,   770,   108,  1833,  1003,
     236,  2528,    91,  1196,   634,   635,  1003,  1003,  1003,  2700,
    2701,  1252,  1197,  1946,   109,   317,   318,  1198,   972,  1003,
    1003,  1003,  1003,  1003,  1003,  1003,  1003,  1690,  1272,  1003,
     114,  1788,   771,  2527,   298,   973,  1197,   474,    21,    22,
     137,  1198,  1252,  2528,  1488,  2702,   771,  1199,  2237,   428,
    1928,   475,   110,  2703,  2470,  1430,  1200,    46,  1834,  1438,
    1439,  1440,  1237,  1824,  2471,  1197,  1825,  1689,  1272,  2190,
    1198,  1835,   120,  1826,  1827,   598,   155,  1197,   156,  1197,
     605,   600,  1198,   601,  1198,   112,  2472,  2458,  1957,  2461,
    2009,   719, -1881,   720,  1788,   243,  1557,  1663,  1558,  1664,
    2019,  2020,   113,  2642,  2023,  1237,  2645,   822,   823,   824,
     825,   826,   827,   828,   647,   648,  2473,  1998,   139,  1999,
    1237,  1828,  1681,  2067,   122,  2068,  1685,   974,   975,   976,
    1967,  2074,  2075,  1687,   476,  2355,   977,  2356,  2684,  2685,
    2410,  2510,  2411,  2466,  2686,  2467,   477,   763,  1761,   137,
    1762,  1237,   124,  2004,  1836, -1579, -1579, -1579, -1579,  1187,
    2668,  1189,   126,  1489,  2669,  2670,  2237,  1968,  1969,  1970,
    1984,  1985,   140,  1974,  2012,   142,  1977,  1978,   149,  1944,
    1519,  1520,  1521,  1522, -1578, -1578, -1578, -1578,  2704,   162,
    1829,   766,   243,   981,   982,   983,  2646,  2647,   163,   984,
     164,   767,   167,  2549,   181,  2671,   204,  2550,  2551,  2525,
    1237,   185,  2660,  1436,  1437,  1237,   186,  1008,   193,  1830,
     242,  2672,  2673,  1272,  1422,  1423,   247,  1272,    52,   248,
    1272,   249,   250,  1252,   257,  1981,  1982,   478,   985,   269,
    1831,   734,   736,   738,   740,   273,  1995,   278,   294,   296,
     154,   302,   303,  2000,   300,   307,   308,   309,   829,  1005,
     312,  1759,  1760,   313,   326,   333,   336,   334,   428,  2124,
     338,   830,   340,   349,   342,   351,   353,    53,   354,   356,
     392,   768,  2013,  1272,   394,   397,   398,   401,   403,   409,
     408,   187,   243,   420,  1832,   421,   422,  1785,  2299,   429,
     413,   455,   456,   460,  1761,   458,  1762,  -352,  1763,   484,
     490,   494,   987,   487,   495,    54,   502,    55,   509,    56,
    2169,   522,   524,  1003,   523,   528,   549,    57,   545,  2169,
    1921,   551,  1272,  1272,  1272,   534,  1237,   550,   553,  -365,
     556,  2057,  1764,  1765,  1766,   554,   580,  1833,   582,  1237,
    1785,   769,  2145,  2146,  2147,  2148,  2149,  2150,  2151,  2152,
    2064,   591,   592,   988,   989,   593,  2069,   609,   611,   617,
     618,   621,   622,   695,   693,   706,   698,  1007,   750,   724,
     741,   776,   743,    58,   760,   779,   785,  1237,   792,   783,
     796,  1272,  1767,   795,  1768,   800,   770,   808,   814,   798,
     803,  1769,   810,   847,  1770,   853,   993,  1834, -1669,   967,
     840,  1018,  1003,   970,  1017,  1021,  1012,   139,  1785,  1034,
    1835,  1039,  1042,  1143,  1162,  1173,   994,  1175,  1170,  2191,
    1201,   995,  1326,   137,  1213,  1287,  1182,  1326,   996,  1217,
     137,  1226,  2215,  1183,    59,  1184,   771,  1185,  1190,  1005,
    1005,  1005,  1202,  1204,  1205,  1219,  1326,  1326,  1227,  1237,
    1326,  1308,  1409,  1411,  1418,  1445,  1446,  1444,  1459,  1465,
    1237,  1005,  1471,  1237,  1480,    60,  1482,  1500,  1494,   441,
    1419,  1785,  1272,  1506,  1429,  1509,  1527,  1523,  2124,  1529,
    1771,  1571,  1772,  1575,  1588,  1591,  1592,  2309,  1594,  2264,
    2264,  1326,  2189,  1836,  1596, -1581,  1326,  1326,  1326,  1364,
    1607,  1605,  1606,  1608,  1003,  1272,  1613,  1272,  1615,    61,
    2193,  1618,    62,  1622,  1638,  1624,  1364,  1640,  1220,  1650,
    1662,  1655,  1668,  1666,  1675,  1670,  1682,  1693,  1683,  2210,
    1696,  2212,  1684,  1686,  1688,  2213,  1691,  1746,  1698,  1747,
    1749,  1752,  1783,  2218,  1272,  1178,  1272,  2649,  1791,  1790,
    1793,  1795,  1246,  1805,  1809,  1816,  2726,  1007,  1007,  1007,
    1822,  1511,   632,  1856,  1231,  1859,  1245,  1867,  1880,  1261,
    1581,  1895,  1903,  1284,  1839,  1918,  1922,    63,  1926,  1007,
    1933,  1953,  1960,  1714,  1761,  1715,  1762,  1988,  1320,  2002,
    2005,  2008,  2015,  2014,  1346,  1754,  2032,  2024,    64,  1272,
    2028,  2017,  2027, -1551,  2031,  2033,  2054,  2034,  2055,  2046,
    2050,  2059,  1326,  1461,  2078,  1402,   139,  1406,  2085,  2080,
    2086,  2092,  2093,    65,  1005,    66,  2099,  2100,  2353,  2096,
    2125,  1005,  1005,  1005,  1425,  2119,  2127,  2128,  2298,  1425,
    2131,    67,  2165,   428,  1005,  1005,  1005,  1005,  1005,  1005,
    1005,  1005,  2138,  1425,  1005,  2139,  2172,  2174,  2173,  2175,
    2184,  2186,  2225, -1600,  2292,  2295,  2283,  2289,  2311,  2219,
    2266,  2231,  1773,  2337,  2300,  2313,  1008,  1008,  2327,  2330,
    2372,  2040,  1467, -1556,  1007,  2405,  2339,  2415,  2335,  1273,
   -1598,   428,  2420,  2417,  2435,  1272,  1273,  1272,  2436,  2437,
    2438,  2449,  2454,  2459,  1273,  2488,  1346,  1008,  1261,  2342,
    2491,  2498,  2499,    68,  2501,  2504,  2517,  2518,  1273,  2519,
    2523,  2538,  1774,  2554,  2555,   139,  1008,  2578,  1272,  2575,
    2612,  2620,  2624,  1775,  2619,  2626,  2631,  2432,  2652,  2632,
    2658,  2661,  1007,  2651,  2682,  2683,  2734,  1237,  2740,  1007,
    1007,  1007,  1426,   650,  2742,  2727,    17,  1426,    92,  1272,
    2744,   125,  1007,  1007,  1007,  1007,  1007,  1007,  1007,  1007,
    2579,  1426,  1007,    38,   256,   166,   266,   209,   119,   139,
     277,   290,   210,  1008,   241,   713,   547,   538,   581,   443,
    1346,  2469,  2121,  1326,   323,   586,  1214,  1326,  1735,   852,
    2737,  1469,  2113,  2580,   527,   457,  1673,  1964,   804,  2351,
    1016,  2203,  1627,  2274,  1225,   965,  1463,  1038,  2369,  2077,
    2022,  2021,  2493,  2581,  1479,  2487,  2048,  2582,  1798,  2272,
    1814,  1799,  2413,  1849,  1273,  1857,  2089,  2278,  1654,  1572,
    2419,  1879,  1272,  1891,  1272,   654,  2294,  2101,  1595,  2302,
    1899,  2583,  1598,  2305,  2129,  1925,  2451,  2183,  2316,  1629,
    2509,  2153,  1630,  1380,  2326,  1653,  2181,  2182,  2733,  2457,
    1963,  1273,   357,  2514,  2465,  1863,  2319,  1621,  2462,  1797,
    2320,  2321,  1273,  2322,   332,   778,   213,   358,  2143,  1485,
    2001,   310,  1191,   428,   293,   616,   812,   359,   541,   448,
    2485,  2618,   272,  2503,  2167,  2486,  2288,   489,  2264,  2264,
    1627,  2112,  1326,  1326,   789,   603,  1326,  1326,  1894,  1326,
    2676,     0,     0,   659,     0,     0,     0,     0,     0,     0,
    1628,     0,  2584,   360,     0,     0,     0,     0,     0,  1273,
       0,     0,  1237,  1273,     0,     0,     0,     0,  1005,  2585,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2511,     0,     0,     0,     0,     0,
    2586,     0,     0,     0,     0,     0,     0,     0,  1003,  1252,
    1237,  1237,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2587,     0,     0,     0,     0,     0,  2530,  2531,     0,
    2630,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2588,     0,     0,     0,  2541,     0,     0,   668,  2589,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1628,  1627,
    2552,     0,     0,     0,     0,     0,     0,  1005,     0,     0,
    1789,     0,  1252,     0,     0,     0,     0,  -901,     0,     0,
    -901,     0,     0,  1908,     0,  2572,     0,     0,     0,     0,
    2576,  2577,  1915,     0,     0,     0,  1007,     0,     0,     0,
       0,     0,     0,  1924,     0,     0,     0,     0,  2707,     0,
    2615,     0,     0,     0,  1252,     0,     0,     0,  1237,   361,
    1220,     0,     0,  1789,     0,     0,     0,     0,     0,     0,
       0,  1952,     0,     0,     0,     0,     0,     0,     0,     0,
    2633,  1627,     0,  2635,  2636,     0,     0,     0,     0,     0,
       0,   362,  2735,  2736,  1252,  -901,     0,     0,     0,     0,
   -1786,  -234,     0,     0,  1425,     0,     0,     0,     0,  1005,
       0,     0,  -901,     0,     0,     0,     0,  1628,     0,     0,
       0,     0,     0,     0,  2659,  1007,     0,  1994,  1273,  2743,
       0,  1789,     0,  2756,     0,     0,     0,  1915,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2006,
       0,     0,  2007,     0,   363,     0,     0,     0,     0,   364,
       0,     0,     0,     0,     0,     0,     0,     0,  1273,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2373,     0,     0,  2374,     0,  1627,  2375,     0,     0,
     365,     0,     0,     0,  1789,  2376,     0,     0,   366,  1628,
       0,     0,  2038,     0,  -901,  -901,  -901,     0,     0,     0,
       0,   367,     0,  -901,     0,     0,     0,     0,     0,     0,
    1237,     0,  1426,     0,  -901,     0,     0,  1007,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     368,     0,  2377,   369,     0,     0,     0,     0,     0,     0,
       0,   370,     0,     0,     0,     0,     0,  -901,     0,     0,
       0,  2378,  -231,  -901,     0,  -901,     0,     0,  -901,     0,
    -901,  -901,  -901,     0,     0,     0,  -901,     0,  -901,     0,
       0,     0,  1237,  -901,     0,     0,  1237,  1237,     0,     0,
       0,   371,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1628,     0,     0,     0,  1627,  1627,
       0,     0,     0,     0,     0,  -901,     0,     0,     0,     0,
    -901,     0,     0,  1273,     0,     0,     0,  1273,     0,     0,
    1273,     0,     0,     0,  -901,     0,     0,  2130,     0,     0,
    2379,     0,     0,     0,     0,  1627,     0,     0,  2380,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -901,     0,
       0,  2381,     0,     0,     0,     0,     0,     0,     0, -1786,
       0,     0,  2170,     0,     0,     0,     0,     0,     0,  2180,
    2180,     0,     0,  1273,     0,     0,     0,     0,     0,  -901,
       0,     0,     0,  2382,     0,     0,     0,     0,     0,     0,
    1261,     0,     0,     0,     0,  2199,     0,     0,     0,     0,
    1994,  1994,     0,  2383,     0,  2384,     0,  1003,  1003,     0,
       0,     0,  -901,     0,     0,     0,  1628,  1628,  -901,   972,
       0,     0,  1273,  1273,  1273,     0,     0,  2385,  2386,     0,
    -901,  -901,     0,     0,     0,     0,   973,     0,  1003,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1628,     0,  2236,     0,  1003,  2387,     0,
       0,     0,     0,  -901,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -901,     0,     0,     0,     0,     0,  -901,
       0,  1273,     0,     0,     0,  2388,     0,     0,     0,     0,
       0,     0,     0,  -901,     0,     0,     0,     0,  -901,  2281,
       0, -1786,     0,     0,     0,  -901,     0,  -901,  2236,  1627,
       0,  2389,     0,  -901,  1003,     0,     0,  1627,  2390,     0,
       0,     0,     0,     0,     0,     0,     0,  1338,   974,   975,
     976,  2391,     0,     0,     0,  2392,  1908,   977,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2318,     0,     0,     0,     0,
       0,     0,  1273,  1005,     0,     0,  2393,     0,     0,     0,
       0,     0,     0,  2236,     0,  2394,     0,  1627,     0,     0,
       0,     0,  1339,     0,   981,   982,   983,     0,     0,   863,
     984,   864,     0,   865,     0,  1273,     0,  1273,   866,     0,
       0,     0,  1994,     0,  2395,     0,   867,     0,     0,     0,
       0,  1261,     0,     0,  2396,     0,     0,  1628,     0,     0,
    2397,     0,     0,     0,     0,  1628,     0,     0,     0,   985,
       0,     0,     0,     0,  1273,     0,  1273,     0,     0,   868,
     869,     0,     0,     0,     0,     0,  2409,     0,     0,     0,
     870,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   871,     0,     0,   872,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   873,     0,
       0,  1007,     0,     0,     0,     0,     0,     0,     0,  1273,
       0,  2236,     0,     0,     0,  1628,     0,     0,     0,     0,
       0,   874,     0,   987,     0,     0,     0,     0,     0,   875,
       0,   876,     0,     0,     0,     0,     0,     0,  -737,     0,
    -737,  -737,  -737,  -737,  -737,  -737,  -737,  -737,     0,  -737,
    -737,  -737,     0,  -737,  -737,  -737,  -737,  -737,  -737,  -737,
    -737,  -737,   877,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   878,   988,   989,  2199,     0,   879,     0,
     972,     0,     0,     0,     0,     0, -1881,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   973,     0,     0,
       0,     0,     0,     0,   880,  1273,     0,  1273,     0,     0,
       0,   881,     0,     0,   882,   883,     0,   993,     0,     0,
       0,     0,     0,     0,   884,     0,     0,  2495, -1166,     0,
       0,   885,     0,   886,     0,     0,   887,   994,  1273,     0,
       0,     0,   995,     0,     0,     0, -1166,     0,     0,   996,
     243,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1273,
    2521,     0,     0,     0,     0,     0,     0,  2524,   888,     0,
    2526,     0,   889,     0,   890,     0,     0,     0,     0,   974,
     975,   976,     0,     0,   891,     0,     0,     0,   977,     0,
    -737,  -737,     0,  -737,  -737,  -737,  -737,     0,     0,   763,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     892,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2556,     0,     0,   893,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2571,     0,     0,     0,     0,  2199,
    2199,     0,  1273,   766,  1273,   981,   982,   983,   894,   895,
    1261,   984,     0,   767,     0,     0,     0,     0,     0,   896,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   897,   898,     0,     0,     0,     0,     0,
     899,  2199,     0,     0,   900,  2199,  2199,     0,     0,     0,
     985,     0,   901,     0,     0,     0,     0,     0,  2637,     0,
       0,     0,   902,     0,     0,     0,   863,     0,   864,     0,
     865,   903,     0,     0,     0,   866,     0,     0,     0,     0,
     904,     0,     0,   867,     0,   905,   906,     0,     0,   907,
       0,   908,     0,   768,     0,     0,     0,     0,   909,     0,
       0,     0,  1005,  1005,     0,     0,     0,     0,     0,     0,
       0,  -737,     0,     0,     0,     0,   868,   869,     0,     0,
    2692,     0,     0,     0,   987,     0,     0,   870,     0,   911,
       0,     0,     0,  1005,     0,   912,     0,     0,   871,     0,
     913,   872,     0,     0,     0,  2721,  2724,     0,     0,     0,
       0,     0,  1005,     0,     0,   873,     0,     0,     0,     0,
       0,  -737,     0,   769,   863,     0,   864,   914,   865,     0,
       0,     0,     0,   866,     0,   988,   989,     0,   874,     0,
    2739,   867,     0,     0,     0,     0,   875,     0,   876,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2748,   770,  1005,
       0,     0,     0,     0,   868,   869,     0,     0,   993,   877,
    1007,  1007,     0,     0,     0,   870,     0,     0,     0,     0,
     878,     0,     0,     0,     0,   879,   871,     0,   994,   872,
       0,     0,     0,   995,     0,     0,     0,     0,     0,     0,
     996,  1007,   137,   873,     0,     0,     0,     0,   771,     0,
       0,   880,     0,     0,     0,     0,     0,     0,   881,     0,
    1007,   882,   883,     0,     0,     0,   874,     0,     0,     0,
       0,   884,     0,     0,   875,     0,   876,     0,   885,     0,
     886,     0,     0,   887,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   877,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1007,   878,     0,
       0,     0,     0,   879,     0,   888,     0,     0,     0,   889,
       0,   890,     0,     0,     0,     0,   863,     0,   864,     0,
     865,   891,     0,     0,     0,   866,     0,     0,     0,   880,
       0,     0,     0,   867,     0,     0,   881,     0,     0,   882,
     883,     0,     0,     0,     0,     0,     0,   892,     0,   884,
       0,     0,     0,     0,     0,     0,   885,     0,   886,     0,
     893,   887,     0,     0,     0,     0,   868,   869,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   870,     0,     0,
       0,     0,     0,     0,     0,   894,   895,     0,   871,     0,
       0,   872,     0,     0,     0,     0,   896,     0,     0,     0,
       0,     0,     0,   888,     0,   873,     0,   889,     0,   890,
     897,   898,     0,     0,     0,     0,     0,   899,     0,   891,
       0,   900,     0,     0,     0,     0,     0,     0,   874,   901,
       0,     0,     0,     0,     0,     0,   875,     0,   876,   902,
       0,     0,     0,     0,     0,   892,     0,     0,   903,     0,
       0,     0,     0,     0,     0,     0,     0,   904,   893,     0,
       0,     0,   905,   906,     0,     0,   907,     0,   908,   877,
       0,     0,     0,     0,     0,   909,     0,     0,     0,     0,
     878,     0,     0,   894,   895,   879,     0,     0,   910,     0,
       0,     0,     0,     0,   896,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   911,     0,   897,   898,
       0,   880,   912,     0,     0,   899,     0,   913,   881,   900,
       0,   882,   883,     0,     0,     0,     0,   901,     0,     0,
       0,   884,     0,     0,     0,     0,     0,   902,   885,     0,
     886,     0,     0,   887,   914,     0,   903,     0,     0,     0,
       0,     0,     0,     0,     0,   904,     0,     0,     0,     0,
     905,   906,     0,     0,   907,     0,   908,     0,     0,     0,
       0,     0,     0,   909,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   888,  1661,     0,     0,   889,
       0,   890,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   891,     0,     0,   911,     0,     0,     0,     0,     0,
     912,     0,     0,     0,     0,   913,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   892,     0,  1044,
       0,  1045,     0,     0,     0,     0,  1046,     0,     0,     0,
     893,     0,   914,     0,  1047,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   894,   895,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   896,  1048,  1049,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1050,     0,
     897,   898,     0,     0,     0,     0,   972,   899,     0,  1051,
       0,   900,  1052,     0,     0,     0,     0,     0,     0,   901,
       0,     0,     0,   973,     0,     0,  1053,     0,     0,   902,
       0,     0,     0,     0,     0,     0,     0,     0,   903,     0,
       0,     0,     0,     0,     0,     0,     0,   904,     0,  1054,
       0,     0,   905,   906,     0,     0,   907,  1055,   908,  1056,
       0,     0,     0,     0,     0,   909,  1057,     0,  1058,  1059,
    1060,  1061,  1062,  1063,  1064,  1065,     0,  1066,  1067,  1068,
       0,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,
    1078,     0,     0,     0,     0,     0,   911,     0,     0,     0,
       0,  1079,   912,     0,     0,     0,  1080,   913,     0,     0,
       0,     0,     0,     0,     0,   974,   975,   976,     0,     0,
       0,     0,     0,     0,   977,     0,     0,     0,     0,     0,
       0,     0,  1081,   972,   914,     0,     0,     0,     0,  1082,
       0,     0,  1083,  1084,     0,     0,     0,     0,     0,     0,
     973,     0,  1085,     0,     0,     0,     0,     0,     0,  1086,
       0,  1087,     0,     0,  1088,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1484,
       0,   981,   982,   983,     0,     0,     0,   984,     0,     0,
       0,     0,     0,     0,     0,  1232,     0,     0,   761,     0,
       0,  1537,  1538,  1539,     0,     0,  1089,     0,     0,  1540,
    1090,     0,  1091,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1092,     0,     0,     0,   985,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   974,   975,   976,     0,     0,     0,  1093,     0,
       0,   977,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1094,   763,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   972,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1095,     0,     0,     0,
     973,     0,     0,     0,     0,   978,     0,  1096,     0,     0,
     987,   979,     0,   980,     0,     0,   766,     0,   981,   982,
     983,     0,  1097,     0,   984,     0,   767,  1232,  1098,     0,
     761,     0,  1099,  1537,  1538,  1539,     0,     0,     0,     0,
    1100,  1540,     0,     0,     0,     0,     0,     0,     0,     0,
    1101,     0,     0,     0,     0,     0,     0,     0,     0,  1102,
    1541,   988,   989,   985,     0,     0,     0,     0,  1103,     0,
    1542,     0,     0,  1104,  1105,     0,     0,  1106,     0,  1107,
       0,     0,   986,     0,     0,     0,  1108,     0,     0,     0,
       0,     0,   974,   975,   976,     0,     0,     0,     0,  1109,
       0,   977,     0,     0,   993,   972,   768,  1543,  1544,     0,
       0,     0,   763,     0,     0,     0,     0,  1110,     0,     0,
       0,     0,   973,  1111,   994,     0,     0,     0,  1112,   995,
       0,     0,  1862,  2710,     0,     0,   996,   987,   137,     0,
       0,     0,     0,     0,     0,  1234,  1545,  1546,     0,     0,
       0,   979,     0,   980,     0,  1113,   766,     0,   981,   982,
     983,     0,     0,     0,   984,     0,   767,     0,     0,     0,
       0,  1235,     0,     0,     0,     0,   769,     0,     0,     0,
       0,     0,  1541,     0,  1547,     0,     0,     0,   988,   989,
    1548,     0,  1542,  1549,  1232,     0,     0,   761,     0,     0,
       0,  1550,     0,   985,     0,     0,     0,     0,  1551,     0,
       0,     0,     0,  1552,   974,   975,   976,     0,     0,     0,
       0,   770,   986,   977,     0,     0,     0,     0,     0,  1543,
    1544,   993,  1553,     0,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2711,   768,     0,     0,     0,
       0,   994,     0,     0,     0,     0,   995,     0,     0,     0,
       0,     0,     0,   996,     0,   137,     0,  1234,  1545,  1546,
       0,   771,   972,   979,     0,   980,     0,   987,   766,     0,
     981,   982,   983,     0,     0,     0,   984,     0,   767,   973,
       0,     0,     0,  1235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1547,     0,     0,     0,
       0,     0,  1548,     0,  1232,  1549,   769,   761,     0,     0,
       0,     0,     0,  1550,     0,   985,     0,     0,   988,   989,
    1551,     0,     0,     0,     0,  1552,     0,     0,     0,     0,
       0,     0,  1929,     0,   986,     0,     0,     0,     0,  1554,
       0,  1555,     0,  1556,  1553,     0,  1557,     0,  1558,  1559,
    1560,   770,     0,  1561,  1562,     0,     0,     0,   768,     0,
       0,   993,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   974,   975,   976,     0,     0,     0,     0,     0,     0,
     977,   994,   972,     0,     0,     0,   995,     0,     0,   987,
       0,   763,     0,   996,     0,   137,     0,     0,     0,   973,
       0,   771,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1384,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1234,     0,     0,     0,   769,     0,
     979,     0,   980,     0,     0,   766,     0,   981,   982,   983,
     988,   989,     0,   984,     0,   767,     0,     0,     0,     0,
    1235,     0,     0,     0,     0,     0,     0,     0,     0,  1232,
       0,  1554,   761,  1555,     0,  1556,     0,     0,  1557,     0,
    1558,  1559,  1560,   770,     0,  1561,  1562,     0,     0,     0,
       0,     0,   985,   993,     0,     0,     0,     0,     0,     0,
       0,   974,   975,   976,     0,     0,     0,     0,     0,     0,
     977,   986,     0,   994,     0,     0,     0,     0,   995,     0,
       0,   763,     0,     0,     0,   996,     0,   137,     0,     0,
       0,     0,     0,   771,     0,   768,     0,  1652,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   972,     0,     0,
       0,     0,     0,     0,  1234,     0,     0,     0,     0,  1233,
     979,     0,   980,     0,   973,   766,   987,   981,   982,   983,
       0,     0,     0,   984,     0,   767,     0,     0,     0,     0,
    1235,     0,     0,     0,     0,     0,     0,     0,     0,  1232,
       0,     0,   761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,   985,     0,     0,     0,     0,   988,   989,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   986,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1930,     0,     0,     0,     0,     0,     0,
     770,     0,     0,     0,  1931,   768,   974,   975,   976,     0,
     993,     0,     0,     0,     0,   977,     0,   972,     0,     0,
       0,     0,     0,     0,     0,     0,   763,     0,     0,  1327,
     994,     0,     0,     0,   973,   995,   987,     0,     0,     0,
       0,     0,   996,     0,   137,     0,     0,     0,     0,     0,
     771,     0,     0,     0,     0,     0,     0,     0,     0,  1234,
       0,  1232,     0,     0,   761,   979,     0,   980,     0,     0,
     766,     0,   981,   982,   983,   769,     0,     0,   984,     0,
     767,     0,     0,  1232,     0,  1235,   761,   988,   989,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   985,     0,     0,
     770,     0,     0,     0,     0,     0,   974,   975,   976,     0,
     993,     0,     0,     0,     0,   977,   986,     0,     0,   972,
       0,     0,     0,     0,     0,     0,   763,     0,     0,     0,
     994,     0,     0,     0,     0,   995,   973,     0,     0,     0,
     768,   972,   996,     0,   137,     0,     0,     0,     0,  1384,
     771,     0,     0,  1389,     0,     0,     0,     0,   973,  1234,
       0,  1232,     0,     0,   761,   979,     0,   980,     0,     0,
     766,   987,   981,   982,   983,     0,     0,     0,   984,     0,
     767,     0,     0,  -957,     0,  1235,  -957,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     769,     0,     0,     0,     0,     0,     0,   985,     0,     0,
       0,     0,   988,   989,     0,     0,     0,     0,   974,   975,
     976,     0,     0,     0,     0,     0,   986,   977,     0,   972,
       0,     0,     0,     0,     0,     0,     0,     0,   763,     0,
     974,   975,   976,     0,     0,   770,   973,     0,     0,   977,
     768,  -957,     0,     0,     0,   993,     0,     0,     0,     0,
     763,     0,     0,     0,     0,     0,     0,     0,  -957,     0,
       0,  1234,     0,     0,     0,   994,     0,   979,     0,   980,
     995,   987,   766,     0,   981,   982,   983,   996,     0,   137,
     984,     0,   767,  1234,     0,   771,     0,  1235,     0,   979,
       0,   980,     0,     0,   766,     0,   981,   982,   983,     0,
       0,     0,   984,     0,   767,     0,     0,     0,     0,  1235,
     769,     0,     0,     0,     0,     0,     0,     0,     0,   985,
       0,     0,   988,   989,  1511,     0,     0,     0,   974,   975,
     976,     0,     0,     0,     0,     0,     0,   977,   986,     0,
       0,   985,     0,     0,     0,     0,     0,     0,   763,     0,
    -957,  -957,  -957,     0,     0,   770,     0,     0,     0,  -957,
     986,     0,   768,     0,     0,   993,     0,     0,     0,     0,
    -957,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1234,     0,     0,   768,   994,     0,   979,     0,   980,
     995,     0,   766,   987,   981,   982,   983,   996,     0,   137,
     984,     0,   767,  -957,     0,   771,     0,  1235,     0,  -957,
       0,  -957,     0,     0,  -957,   987,  -957,  -957,  -957,     0,
       0,     0,  -957,     0,  -957,     0,     0,  1232,     0,  -957,
     761,     0,   769,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,   988,   989,     0,     0,     0,     0,
       0,     0,     0,     0,   769,     0,     0,     0,   986,     0,
       0,  -957,     0,     0,     0,     0,   988,   989,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   770,     0,     0,
    -957,     0,   768,     0,     0,     0,     0,   993,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,  -957,   972,     0,   994,     0,   993,
       0,     0,   995,   987,     0,     0,     0,     0,     0,   996,
       0,   137,   973,  1232,     0,     0,   761,   771,     0,   994,
       0,     0,     0,     0,   995,  -957,     0,     0,     0,     0,
       0,   996,     0,   137,     0,     0,     0,     0,     0,   771,
    1232,     0,   769,   761,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   988,   989,     0,     0,     0,     0,
       0,     0,     0,     0,  -957,     0,     0,     0,     0,     0,
       0,     0,     0,  1473,     0,     0,  -957,  -957,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   770,     0,     0,
       0,   972,     0,     0,     0,     0,     0,   993,     0,     0,
       0,     0,     0,     0,   974,   975,   976,     0,   973,  -957,
       0,     0,     0,   977,     0,     0,     0,   994,   972,  -957,
       0,     0,   995,     0,   763,     0,     0,     0,     0,   996,
       0,   137,     0,     0,     0,   973,     0,   771,     0,  -957,
       0,     0,     0,     0,  -957,     0,     0,     0,     0,     0,
       0,  -957,     0,  -957,     0,     0,     0,  1234,     0,  -957,
       0,     0,     0,   979,     0,   980,     0,     0,   766,     0,
     981,   982,   983,     0,     0,     0,   984,     0,   767,     0,
       0,     0,     0,  1235,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     974,   975,   976,     0,  1657,     0,     0,     0,     0,   977,
       0,     0,     0,     0,     0,   985,     0,     0,     0,     0,
     763,     0,  1232,     0,     0,   761,     0,   974,   975,   976,
       0,     0,     0,     0,   986,     0,   977,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   763,     0,     0,
       0,     0,     0,  1234,     0,     0,     0,     0,   768,   979,
       0,   980,     0,     0,   766,     0,   981,   982,   983,     0,
       0,     0,   984,     0,   767,     0,     0,     0,     0,  1235,
    1234,     0,     0,     0,     0,     0,   979,     0,   980,   987,
       0,   766,     0,   981,   982,   983,     0,     0,     0,   984,
     972,   767,     0,     0,     0,     0,  1235,     0,     0,     0,
       0,   985,     0,     0,     0,     0,     0,   973,     0,     0,
       0,  1232,     0,     0,   761,     0,     0,     0,   769,     0,
     986,     0,     0,     0,     0,     0,     0,     0,   985,     0,
     988,   989,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   768,     0,     0,   986,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   770,     0,     0,     0,     0,     0,     0,
       0,   768,     0,   993,     0,   987,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1515,     0,   972,
       0,     0,  1784,   994,     0,   761,     0,     0,   995,   974,
     975,   976,   987,     0,     0,   996,   973,   137,   977,     0,
       0,     0,     0,   771,   769,     0,     0,     0,     0,   763,
       0,     0,     0,     0,     0,     0,   988,   989,     0,     0,
       0,     0,     0,     0,     0,  1950,     0,     0,     0,     0,
       0,   769,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1234,   988,   989,     0,     0,     0,   979,   770,
     980,     0,     0,  1277,     0,   981,   982,   983,     0,   993,
     972,   984,     0,   767,     0,     0,     0,     0,  1235,     0,
       0,     0,     0,     0,     0,     0,   770,   973,     0,   994,
       0,     0,     0,     0,   995,     0,   993,     0,   974,   975,
     976,   996,     0,   137,     0,     0,     0,   977,     0,   771,
     985,     0,     0,     0,     0,     0,   994,     0,   763,     0,
       0,   995,     0,     0,     0,     0,     0,     0,   996,   986,
     137,     0,     0,     0,     0,     0,   771,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1234,     0,   768,     0,     0,     0,   979,     0,   980,
       0,     0,   766,     0,   981,   982,   983,     0,     0,     0,
     984,     0,   767,     0,     0,     0,     0,  1235,     0,   974,
     975,   976,     0,     0,   987,     0,     0,     0,   977,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   763,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   769,     0,     0,     0,     0,   986,     0,
       0,     0,  1234,     0,     0,   988,   989,     0,   979,     0,
     980,     0,     0,   766,     0,   981,   982,   983,     0,     0,
       0,   984,   768,   767,     0,     0,     0,     0,  1235,     0,
     972,     0,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,     0,     0,   973,   993,     0,
       0,     0,     0,   987,     0,     0,     0,     0,     0,     0,
     985,     0,     0,     0,     0,     0,     0,     0,   994,     0,
       0,     0,     0,   995,     0,     0,     0,     0,     0,   986,
     996,     0,   137,     0,     0,     0,     0,     0,   771,     0,
       0,     0,   769,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   768,   988,   989,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1036,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   987,     0,     0,   770,  1338,   974,
     975,   976,     0,     0,     0,     0,  -362,   993,   977,  -362,
       0,     0,  -362,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,     0,     0,     0,     0,     0,     0,   994,     0,     0,
       0,     0,   995,   769,     0,     0,     0,     0,     0,   996,
    -362,   137,  -362,     0,     0,   988,   989,   771,     0,  -362,
       0,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     0,     0,
       0,     0,     0,  1484,     0,   981,   982,   983,     0,     0,
       0,   984,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   993,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   994,     0,
     985,     0,     0,   995,     0,     0,     0,     0,     0,     0,
     996,     0,   137,     0,     0,     0,     0,     0,   771,     0,
       0,     0,     0,     0,     0,     0,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   530,     0,     0,  -362,  -362,  -362,  -362,  -362,     0,
       0,  -362,  -362,     0,     0,  -362,     0,     0,     0,     0,
       0,  -362,     0,  -362,     0,     0,     0,     0,     0,  -362,
       0,     0,     0,     0,   987,     0,  -362,     0,     0,     0,
       0,     0,     0,     0,  -362,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -362,     0,     0,
    -362,     0,     0,     0,     0,     0,  -362,     0,  -362,     0,
       0,     0,     0,     0,     0,     0,     0,  -362,     0,     0,
       0,     0,     0,     0,     0,   988,   989,     0,     0,     0,
    -362,     0,     0,     0,     0,     0,     0, -1881,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   993,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,     0, -1166,
       0,     0,     0,  -362,  -362,     0,     0,     0,   994,     0,
       0,     0,  -362,   995,     0,  -362,     0, -1166,     0,     0,
     996,   243,   137,     0,     0,     0,   529,     0,  -362,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -362,     0,     0,     0,
       0,  -362,     0,  -362,  -362,  -362,  -362,  -362,  -362,  -362,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -362,     0,  -362,  -362,  -362,     0,     0,     0,     0,     0,
    -362,     0,  -362,  -362,  -362,  -362,  -362,  -362,  -362,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -362,     0,     0,     0,     0,  -362,     0,     0,
       0,     0,  -362,     0,     0,     0,  -362,     0,     0,     0,
       0,     0,     0,     0,  -362,     0,     0,     0,     0,  -362,
       0,     0,     0,  -362,  -362,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -362,     0,     0,
       0,     0,     0,  -362,  -362,     0,     0,   972,     0,     0,
     531,     0,     0,     0,     0,     0,     0,     0,  -362,     0,
       0,     0,   530,     0,   973,  -362,  -362,  -362,  -362,  -362,
       0,     0,  -362,  -362,     0,     0,     0,   624,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -362,     0,   625,     0,     0,   626,   627,   628,   629,   630,
     631,   632,     0,     0,     0,  -362,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -362,     0,
       0,  -362,     0,     0,     0,     0,     0,  -362,     0,     0,
       0,   633,     0,   634,   635,   636,   637,   638,   639,   640,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   974,   975,   976,     0,
       0,     0,     0,  -362,     0,   977,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   763,   641,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -362,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,   978,
       0,     0,     0,  -362,     0,   979,  -362,   980,     0,     0,
     766,     0,   981,   982,   983,     0,     0,     0,   984,  -362,
     767,     0,     0,     0,     0,     0,   642,   643,   644,   645,
     646,  -362,     0,   647,   648,     0,     0,     0,     0,  -362,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   985,     0,     0,
       0,     0,     0,     0,     0,     0,   649,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,    94,
       0,  -362,   650,  -362,  -362,  -362,     0,     0, -1857,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -362,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   651,     0,     0,     0,  -362,     0,
       0,   987,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -362,     0,     0,     0,     0,
       0,     0,   652,     0,  -362,  -362,  -362,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   653,     0,  -362,     0,
     769,     0,     0,     0,   654,  -362,     0,   655,     0,     0,
       0,   531,   988,   989,     0,  1709,     0,     0,  1710,     0,
     656,  1711,   626,   627,   628,   629,   630,   631,  1712,  1713,
       0,     0,   657,  1415,     0,     0,     0,     0,     0,     0,
     658,     0,     0,   990,     0,   770,     0,   991,   992,  1714,
       0,  1715,     0,     0,     0,   993,     0,     0,   633,     0,
     634,   635,   636,   637,   638,   639,   640,     0,     0,     0,
       0,     0,     0,     0,     0,   994,     0,     0,     0,     0,
     995,     0,   659,     0,   660,   661,   662,   996,     0,   137,
       0,     0,     0,     0,     0,   771,   626,   627,   628,   629,
     630,   631,     0,     0,   641,     0,     0,     0,     0,     0,
       0,   663,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -359,
       0,     0,   633,     0,   634,   635,   636,   637,   638,   639,
     640,     0,     0,     0,     0,  1716, -1857,     0,     0,     0,
       0,     0,     0,     0,     0,   664,   665,   666,     0,     0,
       0,     0,     0,   642,   643,   644,   645,   646,     0,   667,
     647,   648,     0,     0,  1717,   972,   668,     0,   641,     0,
    1718,     0,  1719,     0,     0,     0,     0,     0, -1813,     0,
       0,     0,   973,     0,     0,  1720,     0,     0,     0,     0,
       0,     0,     0,   649,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    94,     0,     0,   650,
       0,     0,     0,     0,     0,     0,     0,  1721,     0,     0,
       0,     0,     0,     0,     0,     0,  1722,   642,   643,   644,
     645,   646,     0,     0,   647,   648,     0,     0,     0,  1723,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   651,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   649,     0,     0,
       0,     0,     0,     0,   974,   975,   976,     0,     0,  1724,
       0,     0,     0,   977,     0,     0,     0,     0,     0,     0,
       0,     0,  1725,   653,   763,     0,     0,     0,     0,     0,
       0,   654,     0,     0,   655,     0,     0,     0,     0,   972,
       0,     0,     0,     0,     0,     0,     0,   656,     0,  1726,
       0,     0,     0,     0,     0,   651,   973,   978,     0,     0,
       0,     0,   972,   979,     0,   980,     0,     0,   766,     0,
     981,   982,   983,     0,     0,  1727,   984,     0,   767,   973,
       0,     0,  1728,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   653,     0,  1729,
       0,     0,     0,     0,     0,     0,     0,     0,   655,   659,
       0,   660,   661,   662,     0,   985,     0,     0,     0,     0,
       0,   656,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   986,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   974,   975,
     976,  1730,     0,     0,     0,     0,  -640,   977,   768,   972,
       0,  1731,     0,     0,     0,     0,     0,     0,   763,     0,
       0,   974,   975,   976,     0,     0,   973,     0,  1732,     0,
     977,     0,   664,   665,   666,   660,   661,   662,     0,   987,
       0,   763,     0,     0,     0,     0,   667,     0,     0,     0,
       0,   978,  1733,   668,     0,     0,     0,   979,     0,   980,
       0,     0,   766,     0,   981,   982,   983,     0,     0,     0,
     984,     0,   767,     0,   978,     0,     0,     0,   769,     0,
     979,     0,   980,     0,     0,   766,     0,   981,   982,   983,
     988,   989,     0,   984,     0,   767,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   664,   665,   666,   985,
       0,  1434,     0,     0,     0,     0,     0,     0,   974,   975,
     976,   990,     0,   770,     0,   991,   992,   977,   986,     0,
       0,     0,   985,   993,     0,     0,     0,     0,   763,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   986,   768,   994,     0,     0,     0,     0,   995,     0,
       0,     0,     0,     0,     0,   996,     0,   137,     0,     0,
       0,   978,     0,   771,     0,   768,   972,   979,     0,   980,
       0,     0,   766,   987,   981,   982,   983,     0,     0,     0,
     984,     0,   767,   973,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   987,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   769,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,   988,   989,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,   986,     0,
       0,     0,     0,     0,     0,  1975,     0,   988,   989,     0,
       0,     0,     0,     0,     0,   990,     0,   770,     0,   991,
     992,     0,   768,     0,     0,     0,     0,   993,     0,     0,
       0,     0,     0,     0,     0,   974,   975,   976,   990,     0,
     770,     0,   991,   992,   977,     0,     0,   994,     0,     0,
     993,     0,   995,   987,     0,   763,     0,     0,     0,   996,
       0,   137,     0,     0,     0,     0,     0,   771,     0,     0,
     994,     0,     0,     0,     0,   995,     0,     0,     0,     0,
       0,     0,   996,     0,   137,     0,     0,     0,   978,     0,
     771,     0,   769,     0,   979,     0,   980,     0,     0,   766,
       0,   981,   982,   983,   988,   989,     0,   984,     0,   767,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   770,     0,   991,
       0,     0,     0,     0,     0,     0,   985,   993,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   986,     0,   994,     0,     0,
       0,     0,   995,     0,     0,     0,     0,     0,     0,   996,
       0,   137,     0,     0,     0,     0,     0,   771,     0,   768,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     987,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   769,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   988,   989,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   770,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   993,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   994,     0,     0,     0,     0,   995,
       0,     0,     0,     0,     0,     0,   996,     0,   137,     0,
       0,     0,     0,     0,   771
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-2315))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
     103,   393,   105,   395,   668,   116,   796,   601,   111,   181,
     968,   366,   103,  1232,   105,  1124,   657,   800,   855,  1151,
     111,   727,   801,   791,  1213,  1597,   692,  1587,  1451,  1451,
    1603,  1451,   135,   425,  1451,  1451,   158,   209,  1451,  1492,
    1127,  1137,  1374,   435,   135,  1264,   604,  1363,   714,   404,
    1804,  1541,    56,    57,    58,  1151,  2038,  1118,  1384,  1837,
      64,  1920,  1129,  1272,  2004,    53,  1122,  1532,     9,     1,
    1137,     1,    60,  1473,   705,    17,     0,    48,     9,     0,
       9,   184,    59,    17,  1151,  1383,  1945,     1,    31,   755,
     858,     9,  1846,     6,     1,    99,   100,  1190,   102,    88,
      57,    98,   364,   107,   108,   131,    89,   112,    59,  2213,
      22,  1204,   116,   125,    94,   172,    49,  1326,   116,   143,
      58,   174,    59,   764,   765,   154,  1526,    65,   167,   133,
      30,   226,  1276,  1465,   112,   178,  1696,    27,    65,   805,
     251,     9,   177,  1897,     9,  1461,  1992,    63,    31,   233,
    1259,    26,   161,    49,   238,   277,   160,    33,    49,   253,
     178,   309,   144,   204,  2016,   233,    66,  1768,    68,   226,
    1379,   126,    49,   161,   815,    91,    92,   234,   178,   245,
      32,   125,   253,  1515,   295,   204,  1247,   191,  2170,     9,
      32,    59,    72,    89,  1594,    21,   190,   369,     9,   203,
    1954,   163,    21,    74,   309,   355,   257,   263,   991,   204,
      98,   109,  1356,  2071,   292,   846,   140,   210,   189,   140,
     144,   761,  2439,   144,   407,   178,   257,   117,   197,  1012,
     218,   219,   456,   161,   257,   307,   126,  1304,  2552,    50,
     415,   257,    27,   411,   233,   249,   324,   205,  1315,  1149,
       0,  2000,   455,   257,   126,   483,   367,  1657,   453,   257,
     112,   318,   407,   466,  1580,   176,    59,   339,   131,  1169,
    2019,  2020,   288,   501,  2023,   233,  1372,   201,   356,   454,
     201,  1116,   506,  1536,   272,     9,   200,   359,   257,  1124,
    1125,  2045,   343,   169,   282,   478,   390,  2514,    72,  1134,
     840,  2615,   173,   214,  1864,  1372,  1141,  1142,   458,  1376,
     478,   179,   341,   800,   419,  2064,   229,   233,    49,   390,
    2069,   233,   197,  1576,  2183,  1160,  1161,  1899,   290,   322,
     386,   269,   117,   478,  1117,    59,   377,   978,     6,   257,
     393,   444,  1668,   446,   447,   411,  1662,   458,  1601,  1675,
     453,  1017,   229,   253,    59,   446,   447,  2203,   506,   363,
     342,   291,   453,   291,  2216,     6,   294,   470,   275,   363,
     473,   474,    72,   476,   242,   358,   479,   480,   171,   470,
    1870,   979,   980,   313,   272,   453,   366,   391,   986,  1879,
    1790,  1856,   268,   213,  1859,    66,   309,    68,   402,  1182,
    1183,  1184,   213,   341,   499,   257,   322,   411,   412,   503,
     414,   415,  1195,  1196,    72,   257,   420,  1473,   342,  1202,
     310,   342,   506,   288,   463,   358,    72,   453,  2029,   453,
     449,   224,   332,   437,   245,   246,  2185,   257,   443,    72,
     543,   544,   371,   448,  1531,   454,   257,   267,   336,   506,
     454,  1767,   543,   544,    54,   179,   267,   125,   438,   397,
     415,  1296,   358,   506,   402,  1023,  1024,   358,  1612,   464,
    1526,   506,   484,  1139,  2228,   402,   417,   506,   581,     6,
     506,   512,   389,   506,   355,   350,   377,   598,   506,   213,
     581,   978,  1327,  1272,   605,  1591,   467,   448,   317,   454,
    1798,   604,  2606,   990,   991,   992,   506,   485,   506,   506,
     444,   515,   501,  1574,  2268,   453,  2270,   500,   242,   399,
     161,   464,  1848,   460,  1591,  1012,   454,   347,   465,   453,
     507,   535,   453,   257,   505,   204,   347,   453,  1594,   453,
     484,   652,   499,   267,  1605,   213,   453,  2301,   810,   462,
     505,  1386,   556,   506,   558,   658,  1809,   561,   562,   422,
     564,   503,   453,  1816,  1631,  1784,  2139,   500,   506,   498,
     450,   512,   213,  1889,   506,   506,   506,  2331,  2332,  1788,
    2439,   464,   506,  1214,   252,   506,   254,   458,   506,   257,
     578,   595,  1685,  1234,   506,   506,   600,   417,    22,   267,
    1379,  1657,   470,   607,   500,   505,   417,   505,   506,   500,
    1926,   252,   127,   254,  1867,   505,   257,  2366,   506,  2220,
    2085,  2370,   242,   347,   612,   399,   267,   358,   155,   455,
    1117,  2489,  2490,   505,   506,  2413,   455,   201,  1473,   242,
     466,   331,   462,   243,   257,   257,   377,   466,   329,   354,
    2110,   462,  1139,  1251,     6,   323,  1944,   791,  1145,   452,
       9,   332,    66,   667,    68,   776,     6,   460,   461,  1922,
     781,   230,   465,   845,  2473,    39,   450,  1512,  2078,   347,
    2080,  2663,   323,   786,   787,   245,   213,   798,  1175,   233,
    1525,  1526,   512,   417,   331,  1182,  1183,  1184,  1185,   399,
     803,   512,   257,  1190,   708,   272,   347,   711,  1195,  1196,
    1197,  1198,  1199,  1200,  1201,  1202,  1499,  1204,  1205,  2119,
    2660,   257,   453,  1502,   858,   252,  1793,   254,  1563,  1121,
     257,  1123,   257,     9,  1790,  1796,  2485,  2486,   462,   453,
     267,   399,  2496,  2497,    34,   272,   470,  1234,   257,   417,
     450,   115,    38,   399,  1146,  2081,  1148,     1,   258,  1594,
      46,  1153,   235,   219,   243,   275,   399,   257,   230,   500,
    1257,  2024,  2172,   271,   155,  1167,   417,  1138,   342,   272,
     448,   257,   506,    59,  2100,   385,   163,  2040,   512,   257,
      58,   257,   450,    61,   462,   464,   323,    65,  2288,  1895,
    1635,   124,   460,  1164,   450,   330,  2059,   465,   309,   233,
     221,  1646,   371,   454,  1649,   505,   484,   450,   358,    63,
     347,   462,  1657,   131,   505,  1466,   257,   204,  1895,  1896,
    2290,  2291,   330,   348,     6,  2088,  2635,   177,   506,  2092,
     447,   272,   253,  2657,   512,     1,     8,    91,    92,   253,
     470,   411,  1493,  2185,  1341,    11,   967,   464,  2430,   315,
    1639,   213,  2178,   421,   213,   506,  2154,   470,   505,   506,
    1262,   512,  1981,   213,   238,    37,   204,  2099,  2131,   389,
     424,   448,  1274,  2697,   257,     0,    47,     6,   403,  1447,
     417,   322,    31,   506,   506,    30,  1519,  1520,  1521,  1522,
     252,   159,   254,    64,    60,   257,   385,  1690,   257,   371,
     411,   395,   252,   290,   254,   267,    58,   257,   267,   213,
    1023,  1024,  1033,    65,   232,   398,   212,   267,   332,   245,
     423,    66,   425,    68,  2506,   462,   436,   213,  2070,  2071,
     465,   352,    98,   104,   100,   505,   102,  1613,    86,   360,
     407,   506,  2174,    92,   110,  1316,   342,   330,   244,   286,
     500,   205,   460,   257,   140,  2425,   242,   465,   219,   453,
     506,   323,  2225,   267,   232,  2480,    28,   478,  2231,   506,
     266,   257,  2555,   323,   292,   512,   302,   512,  2241,   233,
     318,   267,   282,   283,   284,   347,   496,   506,   347,  2086,
     377,   269,   127,   512,   765,   563,   506,   347,   335,  1788,
     166,     9,  1499,   213,    12,  1118,   506,    15,    16,  1122,
     263,   478,  2078,  2242,  2080,   140,  1129,  1130,  1694,   144,
     506,  1392,  2537,   319,  1137,   293,   512,  1140,   506,   403,
     506,   213,  1145,   195,  1147,   288,  1149,  1150,  1151,  1152,
    2117,  2138,  1718,   347,   815,   345,   307,   257,  2311,  2632,
    2620,  2314,  2315,  2119,    26,   417,  1169,   267,   417,  2522,
    2292,   347,   233,   341,  2327,   506,   128,   417,   322,   240,
     252,   512,   254,    30,   800,   257,   201,   453,  2341,  2342,
     251,  1263,   465,   379,   213,   267,   448,   179,  1933,    58,
     263,  1588,   258,  2212,   256,    12,    65,  1701,    15,    16,
     462,   395,  1504,   462,  2537,  2537,  2172,  2537,   253,   172,
    2537,  2537,   462,   417,  2537,   288,  1613,   269,   505,   397,
     127,   189,   257,   252,   402,   254,   764,   765,   257,   512,
    1781,   417,   263,  1315,  1247,   275,   302,   347,   267,   257,
    2710,   323,  2405,   211,   506,   407,   238,   506,   257,   241,
     512,   213,   109,   512,  1267,   505,   506,   288,  2728,  2741,
     217,   407,   512,   226,    35,   347,   173,    38,   468,   469,
     453,   234,   129,   473,    45,    46,   462,   815,   448,   475,
     237,   352,   353,   213,   470,   200,  2449,   332,  1685,   341,
    1823,  1304,  2357,  1690,   323,   257,   367,   213,   369,   453,
     548,  1383,  1315,   453,  1837,   267,   263,   417,   512,  1987,
    1358,   168,   352,   338,   354,   233,   478,   342,   347,   281,
     506,  1718,    93,   506,     8,   391,   512,   257,   506,   499,
     412,   288,   478,   190,   453,   417,   412,   267,   347,   257,
       8,   257,   590,  1175,  1124,   397,  1359,   453,   205,   380,
     402,   267,   462,    37,  2043,   318,   455,   217,   218,  1372,
    1408,   173,   460,  1376,   990,   991,   992,   465,   434,    37,
     278,   279,   620,  1205,   506,  2633,  2634,   237,  1929,   388,
     462,  1161,   453,  2128,   460,   347,  1012,   453,   417,   465,
     308,   162,   310,   205,   302,   303,   167,   208,   209,  1412,
     269,   453,   512,   263,   503,  1487,  2664,   173,   417,   324,
     325,  1412,   764,   765,  1679,   163,   189,   347,   424,   167,
     191,  2166,  2167,  2522,   506,  2683,   341,   263,   288,   500,
     512,   347,   505,   462,  1447,   189,   247,   248,   211,   205,
     506,   212,   455,    55,    56,  2061,   406,  2489,  2490,  2415,
    2492,  2417,   288,   466,  2201,   417,  2585,   211,   420,   421,
    1473,   278,   279,   815,  1140,  2530,  2531,   119,   120,   121,
    2046,  2164,   341,   233,   505,   506,  1152,   506,     1,    91,
     395,  1985,  2740,   512,   341,   302,   303,   417,  2039,    56,
    1116,  1117,   474,     9,   476,   266,   108,   479,  1124,  1125,
     263,   417,   263,   512,   352,     2,   118,  2572,  1134,   395,
       7,  2576,  2577,  1526,  1596,  1141,  1142,    40,    41,    42,
      43,    44,  2541,  2099,    91,   288,    16,   288,   397,  2274,
     257,  1445,   462,   402,  1160,  1161,  1450,  1451,  1620,  1453,
    1221,   108,  2492,    33,  1225,   502,   462,   406,   319,  1175,
     512,   118,    42,   451,    77,    78,  1182,  1183,  1184,   286,
     287,  1574,   460,  1645,   453,   413,   414,   465,    84,  1195,
    1196,  1197,  1198,  1199,  1200,  1201,  1202,   451,  1591,  1205,
      59,  1594,   512,   108,   453,   101,   460,   239,    13,    14,
     506,   465,  1605,   118,   357,   322,   512,   452,  2174,  1901,
    1632,   253,   453,   330,   179,   450,   461,    32,   379,  1199,
    1200,  1201,  1238,    35,   189,   460,    38,   450,  1631,   450,
     465,   392,   219,    45,    46,   557,   308,   460,   310,   460,
     562,   352,   465,   354,   465,   453,   211,  2337,  1659,  2339,
    1744,   352,   502,   354,  1657,   505,   457,   352,   459,   354,
    1754,  1755,   453,  2603,  1758,  1281,  2606,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   241,   158,  1681,   160,
    1296,    93,  1420,   158,   175,   160,  1424,   193,   194,   195,
    1681,    98,    99,  1431,   336,   253,   202,   255,  2638,  2639,
     253,  2436,   255,   253,  2644,   255,   348,   213,    67,   506,
      69,  1327,   453,  1724,   475,   487,   488,   489,   490,   990,
     322,   992,   453,   476,   326,   327,  2292,  1682,  1683,  1684,
     249,   250,    70,  1688,  1745,   453,  1691,  1692,   506,  1643,
     487,   488,   489,   490,   487,   488,   489,   490,   465,   453,
     162,   257,   505,   259,   260,   261,   300,   301,   506,   265,
     453,   267,   341,  2498,   257,   367,   200,  2502,  2503,  2459,
    1386,   257,  2630,  1197,  1198,  1391,   470,  2164,   506,   191,
     444,   383,   384,  1786,  1183,  1184,   401,  1790,    11,   402,
    1793,   411,    65,  1796,    61,  1699,  1700,   439,   304,   257,
     212,   628,   629,   630,   631,   233,  1710,   453,   329,   402,
     257,   230,    26,  1717,   506,   453,   453,   109,   331,   800,
     453,    24,    25,   313,   257,   257,   456,   273,  2120,  1901,
      23,   344,   104,   439,   453,   190,   124,    60,   456,    17,
      88,   347,  1746,  1846,   506,   453,   395,   273,   352,   403,
     402,    58,   505,   424,   266,   263,    39,  1473,  2113,   453,
     238,   403,   506,   508,    67,   332,    69,   506,    71,   420,
     311,   395,   378,   317,   262,    98,   453,   100,     7,   102,
    1952,   453,   256,  1499,   395,   453,   453,   110,   505,  1961,
    1962,   367,  1895,  1896,  1897,   506,  1512,   395,   453,    87,
      87,  1805,   105,   106,   107,   453,   126,   319,   433,  1525,
    1526,   417,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,
    1824,   453,   395,   429,   430,   390,  1830,    22,   307,   503,
     310,   453,   395,   506,   205,   501,   506,   800,   233,   453,
     503,   448,   385,   166,   506,   255,   506,  1563,   124,   219,
      53,  1954,   155,   512,   157,   464,   462,    26,   307,   448,
     444,   164,   401,   411,   167,   349,   472,   379,   506,   197,
     449,   257,  1588,   447,   444,   453,   464,  1980,  1594,   506,
     392,   453,   377,   400,   337,   116,   492,   464,   506,  1980,
     171,   497,  1995,   506,   189,   257,   464,  2000,   504,   453,
     506,   506,  2013,   464,   227,   464,   512,   464,   464,   990,
     991,   992,   464,   464,   464,   453,  2019,  2020,   453,  1635,
    2023,   448,   224,   310,   506,   455,    30,   404,   132,   197,
    1646,  1012,   133,  1649,   448,   258,   134,   387,   135,   352,
     506,  1657,  2045,   136,   506,   137,   499,   138,  2120,   139,
     253,   103,   255,   443,   464,   448,   142,  2129,    49,  2070,
    2071,  2064,  1966,   475,   405,   447,  2069,  2070,  2071,   272,
     441,   444,   447,   145,  1690,  2078,   197,  2080,   146,   302,
    1984,   147,   305,   148,    31,   501,   272,   149,    49,   150,
     197,   151,   114,   152,   221,   153,   450,   448,   450,  2003,
     116,  2005,   450,   450,   450,  2009,   450,   411,   453,   313,
     111,   198,   448,  2017,  2117,   978,  2119,  2611,   224,   204,
     377,   340,   257,   273,   232,   295,  2690,   990,   991,   992,
     299,   167,    45,   503,  1115,   503,  1117,   130,   177,  1120,
     366,   448,   170,  1124,   486,   229,   131,   370,   448,  1012,
      49,   197,   229,    66,    67,    68,    69,   205,  1139,   300,
      58,   205,   453,   506,  1145,   253,   424,   167,   391,  2172,
     510,   273,   511,   204,   238,   300,   381,   277,   363,   448,
     448,   296,  2185,    30,   204,  1166,  2189,  1168,    17,   204,
     444,   130,   141,   416,  1175,   418,   448,    49,  2189,   366,
     143,  1182,  1183,  1184,  1185,   204,     8,   197,  2112,  1190,
     131,   434,   424,  2505,  1195,  1196,  1197,  1198,  1199,  1200,
    1201,  1202,   503,  1204,  1205,   503,   204,   448,   453,     9,
       7,   506,   295,   204,    49,   190,   500,   500,   292,   505,
     505,   298,   445,   115,   315,   263,  2633,  2634,   463,   331,
      47,   412,  1233,   204,  1117,   295,   438,   362,   314,  1122,
     204,  2553,   104,   362,   381,  2268,  1129,  2270,    49,   263,
     238,   297,   494,    97,  1137,    58,  1257,  2664,  1259,   293,
       8,    49,   112,   506,   458,   338,   263,   263,  1151,   263,
     453,   111,   495,   338,   483,  2298,  2683,   210,  2301,   211,
     453,   109,   222,   506,   341,   300,   286,  2298,   419,   503,
     233,   322,  1175,   368,   121,   197,   322,  1933,    49,  1182,
    1183,  1184,  1185,   236,   307,   338,     7,  1190,    46,  2332,
     426,    92,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
     253,  1204,  1205,    26,   201,   127,   206,   148,    75,  2352,
     221,   238,   150,  2740,   177,   616,   520,   504,   538,   410,
    1341,  2352,  1900,  2366,   286,   544,  1032,  2370,  1451,   787,
    2708,  1234,  1893,   286,   497,   425,  1410,  1673,   754,  2187,
     805,  1991,  1363,  2083,  1041,   794,  1230,   858,  2213,  1840,
    1757,  1756,  2398,   306,  1247,  2385,  1792,   310,  1485,  2081,
    1512,  1487,  2266,  1531,  1267,  1534,  1859,  2085,  1389,  1300,
    2284,  1577,  2415,  1584,  2417,   328,  2108,  1887,  1336,  2120,
    1595,   334,  1341,  2127,  1913,  1625,  2330,  1962,  2141,  1370,
    2433,  1942,  1372,  1152,  2167,  1386,  1961,  1961,  2697,  2335,
    1672,  1304,     4,  2439,  2345,  1563,  2160,  1359,  2340,  1481,
    2160,  2160,  1315,  2160,   299,   699,   152,    19,  1929,  1257,
    1718,   270,   995,  2755,   242,   581,   759,    29,   509,   417,
    2374,  2563,   215,  2427,  1949,  2379,  2097,   450,  2489,  2490,
    1461,  1892,  2485,  2486,   718,   560,  2489,  2490,  1587,  2492,
    2635,    -1,    -1,   406,    -1,    -1,    -1,    -1,    -1,    -1,
    1363,    -1,   415,    65,    -1,    -1,    -1,    -1,    -1,  1372,
      -1,    -1,  2128,  1376,    -1,    -1,    -1,    -1,  1499,   432,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2438,    -1,    -1,    -1,    -1,    -1,
     453,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2164,  2552,
    2166,  2167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   474,    -1,    -1,    -1,    -1,    -1,  2471,  2472,    -1,
    2581,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     493,    -1,    -1,    -1,  2488,    -1,    -1,   500,   501,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1461,  1580,
    2504,    -1,    -1,    -1,    -1,    -1,    -1,  1588,    -1,    -1,
    1473,    -1,  2615,    -1,    -1,    -1,    -1,     6,    -1,    -1,
       9,    -1,    -1,  1604,    -1,  2529,    -1,    -1,    -1,    -1,
    2534,  2535,  1613,    -1,    -1,    -1,  1499,    -1,    -1,    -1,
      -1,    -1,    -1,  1624,    -1,    -1,    -1,    -1,  2659,    -1,
    2554,    -1,    -1,    -1,  2657,    -1,    -1,    -1,  2274,   221,
      49,    -1,    -1,  1526,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1652,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2584,  1662,    -1,  2587,  2588,    -1,    -1,    -1,    -1,    -1,
      -1,   253,  2703,  2704,  2697,    84,    -1,    -1,    -1,    -1,
      89,   263,    -1,    -1,  1685,    -1,    -1,    -1,    -1,  1690,
      -1,    -1,   101,    -1,    -1,    -1,    -1,  1580,    -1,    -1,
      -1,    -1,    -1,    -1,  2628,  1588,    -1,  1708,  1591,  2732,
      -1,  1594,    -1,  2744,    -1,    -1,    -1,  1718,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1730,
      -1,    -1,  1733,    -1,   316,    -1,    -1,    -1,    -1,   321,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1631,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    -1,  1767,    38,    -1,    -1,
     352,    -1,    -1,    -1,  1657,    46,    -1,    -1,   360,  1662,
      -1,    -1,  1783,    -1,   193,   194,   195,    -1,    -1,    -1,
      -1,   373,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,
    2436,    -1,  1685,    -1,   213,    -1,    -1,  1690,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     402,    -1,    93,   405,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   413,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,
      -1,   112,   424,   252,    -1,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,  2498,   272,    -1,    -1,  2502,  2503,    -1,    -1,
      -1,   453,    -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1767,    -1,    -1,    -1,  1889,  1890,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     309,    -1,    -1,  1786,    -1,    -1,    -1,  1790,    -1,    -1,
    1793,    -1,    -1,    -1,   323,    -1,    -1,  1918,    -1,    -1,
     191,    -1,    -1,    -1,    -1,  1926,    -1,    -1,   199,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,    -1,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,
      -1,    -1,  1953,    -1,    -1,    -1,    -1,    -1,    -1,  1960,
    1961,    -1,    -1,  1846,    -1,    -1,    -1,    -1,    -1,   378,
      -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,
    1981,    -1,    -1,    -1,    -1,  1986,    -1,    -1,    -1,    -1,
    1991,  1992,    -1,   264,    -1,   266,    -1,  2633,  2634,    -1,
      -1,    -1,   411,    -1,    -1,    -1,  1889,  1890,   417,    84,
      -1,    -1,  1895,  1896,  1897,    -1,    -1,   288,   289,    -1,
     429,   430,    -1,    -1,    -1,    -1,   101,    -1,  2664,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1926,    -1,  2046,    -1,  2683,   319,    -1,
      -1,    -1,    -1,   462,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,   478,
      -1,  1954,    -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   492,    -1,    -1,    -1,    -1,   497,  2090,
      -1,   500,    -1,    -1,    -1,   504,    -1,   506,  2099,  2100,
      -1,   372,    -1,   512,  2740,    -1,    -1,  2108,   379,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,   193,   194,
     195,   392,    -1,    -1,    -1,   396,  2127,   202,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2156,    -1,    -1,    -1,    -1,
      -1,    -1,  2045,  2164,    -1,    -1,   437,    -1,    -1,    -1,
      -1,    -1,    -1,  2174,    -1,   446,    -1,  2178,    -1,    -1,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,     1,
     265,     3,    -1,     5,    -1,  2078,    -1,  2080,    10,    -1,
      -1,    -1,  2203,    -1,   475,    -1,    18,    -1,    -1,    -1,
      -1,  2212,    -1,    -1,   485,    -1,    -1,  2100,    -1,    -1,
     491,    -1,    -1,    -1,    -1,  2108,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,  2117,    -1,  2119,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,  2247,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,
      -1,  2164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2172,
      -1,  2292,    -1,    -1,    -1,  2178,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   378,    -1,    -1,    -1,    -1,    -1,   121,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,    -1,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   165,   429,   430,  2357,    -1,   170,    -1,
      84,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,   196,  2268,    -1,  2270,    -1,    -1,
      -1,   203,    -1,    -1,   206,   207,    -1,   472,    -1,    -1,
      -1,    -1,    -1,    -1,   216,    -1,    -1,  2408,   483,    -1,
      -1,   223,    -1,   225,    -1,    -1,   228,   492,  2301,    -1,
      -1,    -1,   497,    -1,    -1,    -1,   501,    -1,    -1,   504,
     505,   506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2332,
    2451,    -1,    -1,    -1,    -1,    -1,    -1,  2458,   270,    -1,
    2461,    -1,   274,    -1,   276,    -1,    -1,    -1,    -1,   193,
     194,   195,    -1,    -1,   286,    -1,    -1,    -1,   202,    -1,
     292,   293,    -1,   295,   296,   297,   298,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     312,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2511,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2525,    -1,    -1,    -1,    -1,  2530,
    2531,    -1,  2415,   257,  2417,   259,   260,   261,   350,   351,
    2541,   265,    -1,   267,    -1,    -1,    -1,    -1,    -1,   361,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   375,   376,    -1,    -1,    -1,    -1,    -1,
     382,  2572,    -1,    -1,   386,  2576,  2577,    -1,    -1,    -1,
     304,    -1,   394,    -1,    -1,    -1,    -1,    -1,  2589,    -1,
      -1,    -1,   404,    -1,    -1,    -1,     1,    -1,     3,    -1,
       5,   413,    -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,
     422,    -1,    -1,    18,    -1,   427,   428,    -1,    -1,   431,
      -1,   433,    -1,   347,    -1,    -1,    -1,    -1,   440,    -1,
      -1,    -1,  2633,  2634,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   453,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
    2651,    -1,    -1,    -1,   378,    -1,    -1,    62,    -1,   471,
      -1,    -1,    -1,  2664,    -1,   477,    -1,    -1,    73,    -1,
     482,    76,    -1,    -1,    -1,  2676,  2677,    -1,    -1,    -1,
      -1,    -1,  2683,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,   503,    -1,   417,     1,    -1,     3,   509,     5,    -1,
      -1,    -1,    -1,    10,    -1,   429,   430,    -1,   113,    -1,
    2711,    18,    -1,    -1,    -1,    -1,   121,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2738,   462,  2740,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,   472,   154,
    2633,  2634,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
     165,    -1,    -1,    -1,    -1,   170,    73,    -1,   492,    76,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,
     504,  2664,   506,    90,    -1,    -1,    -1,    -1,   512,    -1,
      -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,
    2683,   206,   207,    -1,    -1,    -1,   113,    -1,    -1,    -1,
      -1,   216,    -1,    -1,   121,    -1,   123,    -1,   223,    -1,
     225,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2740,   165,    -1,
      -1,    -1,    -1,   170,    -1,   270,    -1,    -1,    -1,   274,
      -1,   276,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,
       5,   286,    -1,    -1,    -1,    10,    -1,    -1,    -1,   196,
      -1,    -1,    -1,    18,    -1,    -1,   203,    -1,    -1,   206,
     207,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,   216,
      -1,    -1,    -1,    -1,    -1,    -1,   223,    -1,   225,    -1,
     325,   228,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   350,   351,    -1,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,
      -1,    -1,    -1,   270,    -1,    90,    -1,   274,    -1,   276,
     375,   376,    -1,    -1,    -1,    -1,    -1,   382,    -1,   286,
      -1,   386,    -1,    -1,    -1,    -1,    -1,    -1,   113,   394,
      -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,   123,   404,
      -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,   413,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,   325,    -1,
      -1,    -1,   427,   428,    -1,    -1,   431,    -1,   433,   154,
      -1,    -1,    -1,    -1,    -1,   440,    -1,    -1,    -1,    -1,
     165,    -1,    -1,   350,   351,   170,    -1,    -1,   453,    -1,
      -1,    -1,    -1,    -1,   361,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   471,    -1,   375,   376,
      -1,   196,   477,    -1,    -1,   382,    -1,   482,   203,   386,
      -1,   206,   207,    -1,    -1,    -1,    -1,   394,    -1,    -1,
      -1,   216,    -1,    -1,    -1,    -1,    -1,   404,   223,    -1,
     225,    -1,    -1,   228,   509,    -1,   413,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   422,    -1,    -1,    -1,    -1,
     427,   428,    -1,    -1,   431,    -1,   433,    -1,    -1,    -1,
      -1,    -1,    -1,   440,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   270,   453,    -1,    -1,   274,
      -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   286,    -1,    -1,   471,    -1,    -1,    -1,    -1,    -1,
     477,    -1,    -1,    -1,    -1,   482,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
     325,    -1,   509,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   350,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   361,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
     375,   376,    -1,    -1,    -1,    -1,    84,   382,    -1,    73,
      -1,   386,    76,    -1,    -1,    -1,    -1,    -1,    -1,   394,
      -1,    -1,    -1,   101,    -1,    -1,    90,    -1,    -1,   404,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,   113,
      -1,    -1,   427,   428,    -1,    -1,   431,   121,   433,   123,
      -1,    -1,    -1,    -1,    -1,   440,   130,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
      -1,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,    -1,    -1,    -1,    -1,   471,    -1,    -1,    -1,
      -1,   165,   477,    -1,    -1,    -1,   170,   482,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,
      -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    84,   509,    -1,    -1,    -1,    -1,   203,
      -1,    -1,   206,   207,    -1,    -1,    -1,    -1,    -1,    -1,
     101,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,   223,
      -1,   225,    -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,
      -1,   259,   260,   261,    -1,    -1,    -1,   265,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,    -1,    -1,     9,    -1,
      -1,    12,    13,    14,    -1,    -1,   270,    -1,    -1,    20,
     274,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   286,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   193,   194,   195,    -1,    -1,    -1,   312,    -1,
      -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   325,   213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   350,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,   246,    -1,   361,    -1,    -1,
     378,   252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,
     261,    -1,   376,    -1,   265,    -1,   267,     6,   382,    -1,
       9,    -1,   386,    12,    13,    14,    -1,    -1,    -1,    -1,
     394,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,
     161,   429,   430,   304,    -1,    -1,    -1,    -1,   422,    -1,
     171,    -1,    -1,   427,   428,    -1,    -1,   431,    -1,   433,
      -1,    -1,   323,    -1,    -1,    -1,   440,    -1,    -1,    -1,
      -1,    -1,   193,   194,   195,    -1,    -1,    -1,    -1,   453,
      -1,   202,    -1,    -1,   472,    84,   347,   208,   209,    -1,
      -1,    -1,   213,    -1,    -1,    -1,    -1,   471,    -1,    -1,
      -1,    -1,   101,   477,   492,    -1,    -1,    -1,   482,   497,
      -1,    -1,   233,   374,    -1,    -1,   504,   378,   506,    -1,
      -1,    -1,    -1,    -1,    -1,   246,   247,   248,    -1,    -1,
      -1,   252,    -1,   254,    -1,   509,   257,    -1,   259,   260,
     261,    -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,
      -1,   272,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,
      -1,    -1,   161,    -1,   285,    -1,    -1,    -1,   429,   430,
     291,    -1,   171,   294,     6,    -1,    -1,     9,    -1,    -1,
      -1,   302,    -1,   304,    -1,    -1,    -1,    -1,   309,    -1,
      -1,    -1,    -1,   314,   193,   194,   195,    -1,    -1,    -1,
      -1,   462,   323,   202,    -1,    -1,    -1,    -1,    -1,   208,
     209,   472,   333,    -1,   213,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   486,   347,    -1,    -1,    -1,
      -1,   492,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,
      -1,    -1,    -1,   504,    -1,   506,    -1,   246,   247,   248,
      -1,   512,    84,   252,    -1,   254,    -1,   378,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,   101,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,    -1,
      -1,    -1,   291,    -1,     6,   294,   417,     9,    -1,    -1,
      -1,    -1,    -1,   302,    -1,   304,    -1,    -1,   429,   430,
     309,    -1,    -1,    -1,    -1,   314,    -1,    -1,    -1,    -1,
      -1,    -1,   154,    -1,   323,    -1,    -1,    -1,    -1,   450,
      -1,   452,    -1,   454,   333,    -1,   457,    -1,   459,   460,
     461,   462,    -1,   464,   465,    -1,    -1,    -1,   347,    -1,
      -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,   194,   195,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   492,    84,    -1,    -1,    -1,   497,    -1,    -1,   378,
      -1,   213,    -1,   504,    -1,   506,    -1,    -1,    -1,   101,
      -1,   512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,   417,    -1,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
     429,   430,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,   450,     9,   452,    -1,   454,    -1,    -1,   457,    -1,
     459,   460,   461,   462,    -1,   464,   465,    -1,    -1,    -1,
      -1,    -1,   304,   472,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,   194,   195,    -1,    -1,    -1,    -1,    -1,    -1,
     202,   323,    -1,   492,    -1,    -1,    -1,    -1,   497,    -1,
      -1,   213,    -1,    -1,    -1,   504,    -1,   506,    -1,    -1,
      -1,    -1,    -1,   512,    -1,   347,    -1,   229,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,    96,
     252,    -1,   254,    -1,   101,   257,   378,   259,   260,   261,
      -1,    -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,    -1,    -1,
     462,    -1,    -1,    -1,   466,   347,   193,   194,   195,    -1,
     472,    -1,    -1,    -1,    -1,   202,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    96,
     492,    -1,    -1,    -1,   101,   497,   378,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,
     512,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,
      -1,     6,    -1,    -1,     9,   252,    -1,   254,    -1,    -1,
     257,    -1,   259,   260,   261,   417,    -1,    -1,   265,    -1,
     267,    -1,    -1,     6,    -1,   272,     9,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
     462,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,
     472,    -1,    -1,    -1,    -1,   202,   323,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,    -1,
     492,    -1,    -1,    -1,    -1,   497,   101,    -1,    -1,    -1,
     347,    84,   504,    -1,   506,    -1,    -1,    -1,    -1,   114,
     512,    -1,    -1,    96,    -1,    -1,    -1,    -1,   101,   246,
      -1,     6,    -1,    -1,     9,   252,    -1,   254,    -1,    -1,
     257,   378,   259,   260,   261,    -1,    -1,    -1,   265,    -1,
     267,    -1,    -1,     6,    -1,   272,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     417,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,   429,   430,    -1,    -1,    -1,    -1,   193,   194,
     195,    -1,    -1,    -1,    -1,    -1,   323,   202,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,
     193,   194,   195,    -1,    -1,   462,   101,    -1,    -1,   202,
     347,    84,    -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,   246,    -1,    -1,    -1,   492,    -1,   252,    -1,   254,
     497,   378,   257,    -1,   259,   260,   261,   504,    -1,   506,
     265,    -1,   267,   246,    -1,   512,    -1,   272,    -1,   252,
      -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,
     417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,   429,   430,   167,    -1,    -1,    -1,   193,   194,
     195,    -1,    -1,    -1,    -1,    -1,    -1,   202,   323,    -1,
      -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,
     193,   194,   195,    -1,    -1,   462,    -1,    -1,    -1,   202,
     323,    -1,   347,    -1,    -1,   472,    -1,    -1,    -1,    -1,
     213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,   347,   492,    -1,   252,    -1,   254,
     497,    -1,   257,   378,   259,   260,   261,   504,    -1,   506,
     265,    -1,   267,   246,    -1,   512,    -1,   272,    -1,   252,
      -1,   254,    -1,    -1,   257,   378,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,    -1,    -1,     6,    -1,   272,
       9,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   429,   430,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,   323,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   429,   430,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,
     323,    -1,   347,    -1,    -1,    -1,    -1,   472,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,
      -1,    -1,    -1,    -1,   347,    84,    -1,   492,    -1,   472,
      -1,    -1,   497,   378,    -1,    -1,    -1,    -1,    -1,   504,
      -1,   506,   101,     6,    -1,    -1,     9,   512,    -1,   492,
      -1,    -1,    -1,    -1,   497,   378,    -1,    -1,    -1,    -1,
      -1,   504,    -1,   506,    -1,    -1,    -1,    -1,    -1,   512,
       6,    -1,   417,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   429,   430,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   448,    -1,    -1,   429,   430,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,   472,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,   195,    -1,   101,   462,
      -1,    -1,    -1,   202,    -1,    -1,    -1,   492,    84,   472,
      -1,    -1,   497,    -1,   213,    -1,    -1,    -1,    -1,   504,
      -1,   506,    -1,    -1,    -1,   101,    -1,   512,    -1,   492,
      -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,
      -1,   504,    -1,   506,    -1,    -1,    -1,   246,    -1,   512,
      -1,    -1,    -1,   252,    -1,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,    -1,   265,    -1,   267,    -1,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,   194,   195,    -1,   197,    -1,    -1,    -1,    -1,   202,
      -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,    -1,
     213,    -1,     6,    -1,    -1,     9,    -1,   193,   194,   195,
      -1,    -1,    -1,    -1,   323,    -1,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,   347,   252,
      -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,
      -1,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,
     246,    -1,    -1,    -1,    -1,    -1,   252,    -1,   254,   378,
      -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,
      84,   267,    -1,    -1,    -1,    -1,   272,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,     6,    -1,    -1,     9,    -1,    -1,    -1,   417,    -1,
     323,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,
     429,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   347,    -1,    -1,   323,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   462,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   347,    -1,   472,    -1,   378,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   486,    -1,    84,
      -1,    -1,     6,   492,    -1,     9,    -1,    -1,   497,   193,
     194,   195,   378,    -1,    -1,   504,   101,   506,   202,    -1,
      -1,    -1,    -1,   512,   417,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,    -1,   429,   430,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   411,    -1,    -1,    -1,    -1,
      -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   246,   429,   430,    -1,    -1,    -1,   252,   462,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,   472,
      84,   265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   462,   101,    -1,   492,
      -1,    -1,    -1,    -1,   497,    -1,   472,    -1,   193,   194,
     195,   504,    -1,   506,    -1,    -1,    -1,   202,    -1,   512,
     304,    -1,    -1,    -1,    -1,    -1,   492,    -1,   213,    -1,
      -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,   504,   323,
     506,    -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,   347,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,    -1,    -1,    -1,   272,    -1,   193,
     194,   195,    -1,    -1,   378,    -1,    -1,    -1,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   417,    -1,    -1,    -1,    -1,   323,    -1,
      -1,    -1,   246,    -1,    -1,   429,   430,    -1,   252,    -1,
     254,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,   347,   267,    -1,    -1,    -1,    -1,   272,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   472,    -1,
      -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,
     304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,    -1,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,   323,
     504,    -1,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,
      -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   347,   429,   430,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   378,    -1,    -1,   462,   192,   193,
     194,   195,    -1,    -1,    -1,    -1,    32,   472,   202,    35,
      -1,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,
      -1,    -1,   497,   417,    -1,    -1,    -1,    -1,    -1,   504,
      66,   506,    68,    -1,    -1,   429,   430,   512,    -1,    75,
      -1,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,
      -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,
      -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   492,    -1,
     304,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,
     504,    -1,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   177,    -1,    -1,   180,   181,   182,   183,   184,    -1,
      -1,   187,   188,    -1,    -1,   191,    -1,    -1,    -1,    -1,
      -1,   197,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,
      -1,    -1,    -1,    -1,   378,    -1,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,
     236,    -1,    -1,    -1,    -1,    -1,   242,    -1,   244,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   429,   430,    -1,    -1,    -1,
     266,    -1,    -1,    -1,    -1,    -1,    -1,   441,    -1,    -1,
      -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,    -1,
     306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   483,
      -1,    -1,    -1,   319,   320,    -1,    -1,    -1,   492,    -1,
      -1,    -1,   328,   497,    -1,   331,    -1,   501,    -1,    -1,
     504,   505,   506,    -1,    -1,    -1,     1,    -1,   344,    -1,
     346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   372,    -1,    -1,    -1,
      -1,    36,    -1,   379,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     406,    -1,   408,   409,   410,    -1,    -1,    -1,    -1,    -1,
      75,    -1,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   448,    -1,    -1,    -1,    -1,   453,    -1,    -1,
      -1,    -1,   458,    -1,    -1,    -1,   121,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,   475,
      -1,    -1,    -1,   479,   480,   481,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   493,    -1,    -1,
      -1,    -1,    -1,   499,   500,    -1,    -1,    84,    -1,    -1,
     506,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,
      -1,    -1,   177,    -1,   101,   180,   181,   182,   183,   184,
      -1,    -1,   187,   188,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     205,    -1,    36,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,   236,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   193,   194,   195,    -1,
      -1,    -1,    -1,   278,    -1,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,   121,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,    -1,   246,
      -1,    -1,    -1,   328,    -1,   252,   331,   254,    -1,    -1,
     257,    -1,   259,   260,   261,    -1,    -1,    -1,   265,   344,
     267,    -1,    -1,    -1,    -1,    -1,   180,   181,   182,   183,
     184,   356,    -1,   187,   188,    -1,    -1,    -1,    -1,   364,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   323,    -1,    -1,   233,
      -1,   406,   236,   408,   409,   410,    -1,    -1,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,   453,    -1,
      -1,   378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   470,    -1,    -1,    -1,    -1,
      -1,    -1,   306,    -1,   479,   480,   481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,   493,    -1,
     417,    -1,    -1,    -1,   328,   500,    -1,   331,    -1,    -1,
      -1,   506,   429,   430,    -1,    32,    -1,    -1,    35,    -1,
     344,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,   356,   450,    -1,    -1,    -1,    -1,    -1,    -1,
     364,    -1,    -1,   460,    -1,   462,    -1,   464,   465,    66,
      -1,    68,    -1,    -1,    -1,   472,    -1,    -1,    75,    -1,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   492,    -1,    -1,    -1,    -1,
     497,    -1,   406,    -1,   408,   409,   410,   504,    -1,   506,
      -1,    -1,    -1,    -1,    -1,   512,    39,    40,    41,    42,
      43,    44,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   453,
      -1,    -1,    75,    -1,    77,    78,    79,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,   162,   470,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   479,   480,   481,    -1,    -1,
      -1,    -1,    -1,   180,   181,   182,   183,   184,    -1,   493,
     187,   188,    -1,    -1,   191,    84,   500,    -1,   121,    -1,
     197,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,    -1,
      -1,    -1,   101,    -1,    -1,   212,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   180,   181,   182,
     183,   184,    -1,    -1,   187,   188,    -1,    -1,    -1,   266,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,   193,   194,   195,    -1,    -1,   306,
      -1,    -1,    -1,   202,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   319,   320,   213,    -1,    -1,    -1,    -1,    -1,
      -1,   328,    -1,    -1,   331,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,    -1,   346,
      -1,    -1,    -1,    -1,    -1,   278,   101,   246,    -1,    -1,
      -1,    -1,    84,   252,    -1,   254,    -1,    -1,   257,    -1,
     259,   260,   261,    -1,    -1,   372,   265,    -1,   267,   101,
      -1,    -1,   379,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   320,    -1,   396,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,   406,
      -1,   408,   409,   410,    -1,   304,    -1,    -1,    -1,    -1,
      -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   323,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,
     195,   448,    -1,    -1,    -1,    -1,   453,   202,   347,    84,
      -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,   213,    -1,
      -1,   193,   194,   195,    -1,    -1,   101,    -1,   475,    -1,
     202,    -1,   479,   480,   481,   408,   409,   410,    -1,   378,
      -1,   213,    -1,    -1,    -1,    -1,   493,    -1,    -1,    -1,
      -1,   246,   499,   500,    -1,    -1,    -1,   252,    -1,   254,
      -1,    -1,   257,    -1,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,    -1,   246,    -1,    -1,    -1,   417,    -1,
     252,    -1,   254,    -1,    -1,   257,    -1,   259,   260,   261,
     429,   430,    -1,   265,    -1,   267,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   479,   480,   481,   304,
      -1,   450,    -1,    -1,    -1,    -1,    -1,    -1,   193,   194,
     195,   460,    -1,   462,    -1,   464,   465,   202,   323,    -1,
      -1,    -1,   304,   472,    -1,    -1,    -1,    -1,   213,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   323,   347,   492,    -1,    -1,    -1,    -1,   497,    -1,
      -1,    -1,    -1,    -1,    -1,   504,    -1,   506,    -1,    -1,
      -1,   246,    -1,   512,    -1,   347,    84,   252,    -1,   254,
      -1,    -1,   257,   378,   259,   260,   261,    -1,    -1,    -1,
     265,    -1,   267,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   378,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,   304,
      -1,    -1,    -1,    -1,   429,   430,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   417,    -1,    -1,   323,    -1,
      -1,    -1,    -1,    -1,    -1,   450,    -1,   429,   430,    -1,
      -1,    -1,    -1,    -1,    -1,   460,    -1,   462,    -1,   464,
     465,    -1,   347,    -1,    -1,    -1,    -1,   472,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   193,   194,   195,   460,    -1,
     462,    -1,   464,   465,   202,    -1,    -1,   492,    -1,    -1,
     472,    -1,   497,   378,    -1,   213,    -1,    -1,    -1,   504,
      -1,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,
     492,    -1,    -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,
      -1,    -1,   504,    -1,   506,    -1,    -1,    -1,   246,    -1,
     512,    -1,   417,    -1,   252,    -1,   254,    -1,    -1,   257,
      -1,   259,   260,   261,   429,   430,    -1,   265,    -1,   267,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   462,    -1,   464,
      -1,    -1,    -1,    -1,    -1,    -1,   304,   472,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   323,    -1,   492,    -1,    -1,
      -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,   504,
      -1,   506,    -1,    -1,    -1,    -1,    -1,   512,    -1,   347,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   417,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   429,   430,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   462,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   472,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   492,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,   506,    -1,
      -1,    -1,    -1,    -1,   512
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
     606,   537,   525,   453,   233,   539,  1285,   506,  1206,  1206,
     424,   406,  1302,  1285,  1285,  1285,   395,  1206,   406,   453,
     453,  1285,   453,   453,    59,  1274,   574,     1,   453,   572,
     219,   588,   175,   607,   453,   527,   453,    74,   173,   355,
     458,   540,   541,   579,  1285,  1285,  1285,   506,  1201,  1232,
      70,  1201,   453,  1285,  1285,   551,   562,  1201,   547,   506,
     590,   591,   592,  1207,   257,   308,   310,   575,   577,  1051,
    1235,  1285,   453,   506,   453,   609,   541,   341,  1299,  1285,
     213,   257,   267,   347,   417,   462,   512,   595,   596,  1238,
    1201,   257,   219,   307,  1323,   257,   470,    58,    65,   269,
     341,   397,   402,   506,   552,   553,   554,   555,   556,   557,
     558,   560,  1273,  1333,   200,   563,   564,   565,   548,   560,
     591,    22,   233,  1207,  1286,  1051,   233,   424,  1296,  1285,
      98,  1206,   235,   398,   608,   610,    28,   128,   213,   257,
     267,   281,   347,   417,   420,   421,   512,   580,   581,   582,
     585,   596,   444,   505,   599,  1315,  1232,   401,   402,   411,
      65,  1285,   453,   554,   453,   506,   553,    61,  1285,     9,
     371,   498,   566,   568,     1,   453,   565,   549,  1315,   257,
     593,  1236,  1296,   233,  1206,  1206,   576,   577,   453,     1,
     291,   313,  1259,   275,   389,   645,   646,   647,   648,   650,
     582,    17,   444,  1238,   329,  1285,   402,  1235,   453,  1285,
     506,  1202,   230,    26,   567,   230,   371,   453,   453,   109,
    1236,  1206,   453,   313,  1206,   651,   352,   413,   414,   649,
     531,     1,   453,   647,   583,   585,   257,  1235,   258,   436,
     496,   559,  1202,   257,   273,   611,   456,  1277,    23,  1268,
     104,   655,   453,   584,   585,    59,   507,  1327,   612,   439,
    1308,   190,  1278,   124,   456,   656,    17,     4,    19,    29,
      65,   221,   253,   316,   321,   352,   360,   373,   402,   405,
     413,   453,   456,   613,   614,   620,   622,   624,   625,   626,
     627,   628,   631,   632,   633,   634,   635,   640,   641,   643,
    1300,  1317,    88,  1275,   506,  1191,  1192,   453,   395,   657,
     585,   273,  1291,   352,  1316,   448,   499,  1312,   402,   403,
    1285,  1273,   115,   238,  1287,  1287,   288,   642,  1235,  1315,
     424,   263,    39,  1271,  1285,   652,   653,  1192,  1192,   453,
     174,   393,   532,   658,   659,   661,  1285,  1287,   127,   173,
     617,   352,   360,   632,  1285,  1285,  1285,  1285,  1268,     9,
     288,   350,   644,  1285,  1291,   403,   506,   653,   332,   654,
     508,   686,   688,   689,     1,  1192,   127,   348,   403,   621,
    1285,   119,   120,   121,   239,   253,   336,   348,   439,   615,
     616,   257,  1201,  1205,   420,  1201,  1201,   317,  1297,  1297,
     311,  1201,  1285,  1235,   395,   262,   743,   690,   691,   693,
     703,  1251,   453,   660,  1201,   257,   619,  1232,   619,     7,
     619,   619,   257,   618,  1232,   415,   454,   636,    33,   169,
     268,   629,   453,   395,   256,   745,   453,   691,   453,     1,
     177,   506,   694,   695,   506,   662,   126,   505,   636,  1253,
    1332,  1277,  1285,   637,   638,   505,   630,   630,   687,   453,
     395,   367,   747,   453,   453,   692,    87,    47,    64,   104,
     240,   251,   352,   353,   367,   369,   453,   500,   663,   664,
     666,   670,   671,   674,   675,   681,   682,   683,   684,  1285,
     126,   637,   433,   623,   639,  1201,   639,   263,   386,   688,
     744,   453,   395,   390,   800,   705,   696,  1285,  1275,  1285,
     352,   354,  1328,  1328,  1285,  1275,  1285,  1291,  1285,    22,
    1267,   307,   685,  1206,   173,   205,  1253,   503,   310,   688,
     746,   453,   395,   533,    21,    36,    39,    40,    41,    42,
      43,    44,    45,    75,    77,    78,    79,    80,    81,    82,
      83,   121,   180,   181,   182,   183,   184,   187,   188,   220,
     236,   278,   306,   320,   328,   331,   344,   356,   364,   406,
     408,   409,   410,   435,   479,   480,   481,   493,   500,   706,
     707,   708,   710,   711,   712,   713,   714,   715,   716,   719,
     731,   732,   734,   735,   736,   741,   742,  1285,  1304,    26,
     197,   704,  1269,   205,  1235,   506,  1285,  1267,   506,  1203,
    1204,   309,   419,  1324,  1205,  1235,   501,  1285,   176,   214,
     506,   672,  1206,   623,     9,   417,   512,   586,   275,   352,
     354,  1326,   688,   748,   453,   338,   814,   817,   245,   302,
     407,   478,  1303,   478,  1303,   478,  1303,   478,  1303,   478,
    1303,   503,  1313,   385,  1301,   127,  1235,  1229,  1232,  1232,
     233,   243,   385,   733,  1285,  1286,   173,   205,   242,   470,
     506,     9,    50,   213,   245,   246,   257,   267,   347,   417,
     462,   512,   697,  1239,  1240,  1241,   448,   669,  1204,   255,
    1290,   448,  1274,   219,  1280,   506,  1285,  1285,  1239,  1326,
     749,   801,   124,   840,   841,   512,    53,   723,   448,   720,
     464,  1233,  1234,   444,   713,   738,   739,  1239,    26,   709,
     401,  1263,  1263,  1241,   307,  1294,     1,    40,    41,    42,
      43,    44,   180,   181,   182,   183,   184,   185,   186,   331,
     344,   698,   699,   700,   701,   702,   714,   715,  1229,   698,
     449,  1235,    59,   354,   665,   676,  1235,   411,  1305,   257,
     673,  1232,   673,   349,   750,   693,   703,   802,   803,   804,
      57,   499,   818,     1,     3,     5,    10,    18,    51,    52,
      62,    73,    76,    90,   113,   121,   123,   154,   165,   170,
     196,   203,   206,   207,   216,   223,   225,   228,   270,   274,
     276,   286,   312,   325,   350,   351,   361,   375,   376,   382,
     386,   394,   404,   413,   422,   427,   428,   431,   433,   440,
     453,   471,   477,   482,   509,   842,   843,   859,   864,   868,
     873,   888,   891,   895,   899,   900,   901,   906,   920,   924,
     927,   941,   945,   948,   951,   955,   956,   960,   970,   973,
     990,   992,   995,   999,  1005,  1017,  1025,  1026,  1029,  1030,
    1034,  1039,  1040,  1048,  1063,  1073,  1082,  1087,  1094,  1098,
    1100,  1103,  1106,  1110,  1137,   842,  1280,   197,   721,  1235,
     447,  1310,    84,   101,   193,   194,   195,   202,   246,   252,
     254,   259,   260,   261,   265,   304,   323,   378,   429,   430,
     460,   464,   465,   472,   492,   497,   504,  1179,  1181,  1182,
    1183,  1184,  1185,  1186,  1214,  1228,  1229,  1240,  1242,  1243,
    1244,  1245,   464,  1234,  1232,   737,   739,   444,   257,  1273,
     698,   453,  1241,    48,   467,   677,   678,   679,   680,  1315,
    1274,   197,   668,  1279,   506,  1193,     1,   694,   804,   453,
     820,   819,   377,   826,     3,     5,    10,    18,    51,    52,
      62,    73,    76,    90,   113,   121,   123,   130,   132,   133,
     134,   135,   136,   137,   138,   139,   141,   142,   143,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   165,
     170,   196,   203,   206,   207,   216,   223,   225,   228,   270,
     274,   276,   286,   312,   325,   350,   361,   376,   382,   386,
     394,   404,   413,   422,   427,   428,   431,   433,   440,   453,
     471,   477,   482,   509,  1264,   844,   860,   865,   869,   874,
     889,   892,   896,   902,   907,   921,   925,   928,   942,   946,
     949,   952,   204,   377,   883,   944,   957,   961,   971,   974,
     991,   993,   996,   400,  1000,  1006,  1018,  1027,  1031,  1035,
    1041,  1049,  1064,  1074,   257,   347,   388,   417,   512,  1086,
    1088,  1095,   337,  1099,  1101,   829,  1104,  1107,  1111,  1138,
     506,  1235,   720,   116,   722,   464,  1247,  1229,  1240,  1242,
    1323,  1323,   464,   464,   464,   464,  1323,  1185,  1181,  1185,
     464,  1247,    72,   399,   450,  1180,   451,   460,   465,   452,
     461,   171,   464,  1246,   464,   464,  1181,   503,   740,  1314,
    1239,  1205,  1205,   189,   669,  1235,   751,   453,   805,   453,
      49,   821,   822,   823,  1272,   821,   506,   453,   309,   845,
     846,  1228,     6,    96,   246,   272,   861,  1186,  1210,  1211,
    1228,  1239,  1242,   866,  1181,  1228,   257,   870,   871,  1197,
    1198,  1199,  1232,   272,   423,   425,   875,   876,   257,   890,
    1219,  1228,   893,  1192,     6,   897,  1186,  1187,  1188,  1209,
    1230,  1231,  1232,  1240,   456,   903,  1192,   257,   908,   909,
     911,  1210,  1211,  1219,  1228,   922,  1211,   257,   926,   455,
     466,   929,   930,   931,  1169,  1170,  1171,   200,   324,   325,
     341,   395,   943,   947,  1208,  1209,   950,  1232,   448,   953,
    1311,  1211,  1168,  1169,   962,  1208,   972,  1193,   975,   976,
    1228,  1239,  1242,  1065,  1226,  1227,  1232,    96,   994,  1211,
     997,  1211,   172,   226,   234,   318,  1001,  1002,   192,   257,
    1007,  1011,  1012,  1013,  1197,  1220,  1228,  1232,  1242,  1315,
    1019,  1192,  1028,  1189,  1232,  1032,  1192,  1036,  1189,     9,
    1042,  1190,  1232,   155,   272,  1050,  1053,  1054,  1057,  1058,
    1059,  1060,  1061,  1062,  1194,  1195,  1208,  1225,  1227,  1232,
    1065,  1075,  1192,  1083,   114,  1089,  1090,  1091,  1211,    96,
    1096,  1210,  1102,  1193,   453,   506,   830,   831,   834,   835,
     840,  1105,  1228,  1108,  1192,  1112,  1228,  1139,  1189,   224,
     724,   310,  1295,   725,   726,   450,  1179,  1181,   506,   506,
    1181,  1250,  1250,  1250,  1213,  1228,  1240,  1242,  1249,   506,
     450,  1213,  1248,  1181,   450,  1181,  1182,  1182,  1183,  1183,
    1183,  1181,  1213,  1179,   404,   455,    30,  1270,  1274,     1,
     752,   806,   822,   411,   478,   824,   358,   500,   815,   132,
     858,    30,   848,   849,  1270,   197,  1294,  1228,  1229,  1240,
    1242,   133,   863,   448,   862,  1211,    59,   224,  1254,   871,
     448,  1323,   134,   887,   257,  1220,  1219,  1192,   357,   476,
     894,  1315,  1329,  1294,   135,   898,   161,   454,  1188,  1320,
     387,  1260,  1233,  1234,   904,  1192,   136,   905,  1300,   137,
     919,   167,   910,  1148,  1149,   486,   912,   505,   849,   487,
     488,   489,   490,   138,   923,    49,   229,   499,   877,   139,
     940,    17,   503,   932,   933,   934,   936,    12,    13,    14,
      20,   161,   171,   208,   209,   247,   248,   285,   291,   294,
     302,   309,   314,   333,   450,   452,   454,   457,   459,   460,
     461,   464,   465,  1172,  1173,  1174,  1175,  1176,  1177,  1178,
    1211,   103,   944,  1209,  1196,   443,  1309,   963,  1315,  1193,
      94,   366,   438,   977,   978,   980,   981,  1067,   464,  1233,
    1211,   448,   142,   998,    49,  1002,   405,  1003,  1012,   143,
     453,  1008,  1010,   483,   501,   444,   447,   441,   145,  1024,
     286,   335,  1257,   197,  1140,   146,  1033,  1300,   147,  1038,
    1140,  1190,   148,  1047,   501,  1043,  1217,  1228,  1240,  1060,
    1062,  1208,   448,  1195,   125,   448,   484,  1052,    31,  1233,
     149,  1081,   179,   238,   241,  1077,   883,  1084,  1315,  1272,
     150,  1093,   229,  1091,  1228,   151,  1097,   197,  1193,   395,
     453,   453,   197,   352,   354,  1109,   152,  1121,   114,  1113,
     153,  1144,  1140,   725,  1201,   221,   728,    27,   117,   727,
     450,  1180,   450,   450,   450,  1180,   450,  1180,   450,   450,
     451,   450,   450,   448,  1285,  1205,   116,   667,   453,    63,
      91,    92,   322,   453,   753,   754,   759,  1285,  1341,    32,
      35,    38,    45,    46,    66,    68,   162,   191,   197,   199,
     212,   244,   253,   266,   306,   319,   346,   372,   379,   396,
     448,   458,   475,   499,   711,   712,   716,   731,   734,   736,
     807,   812,   813,  1285,  1318,  1285,   411,   313,   825,   111,
     827,  1217,   198,   852,   253,   332,   850,   851,  1318,    24,
      25,    67,    69,    71,   105,   106,   107,   155,   157,   164,
     167,   253,   255,   445,   495,   506,   847,  1195,  1319,   154,
     341,  1215,  1229,   448,     6,  1186,  1187,  1211,  1232,  1240,
     204,   224,  1255,   377,   867,   340,   872,  1199,   877,   894,
     263,   288,  1278,  1229,  1181,   273,  1261,  1234,  1192,   232,
    1164,  1165,   837,   838,   911,  1211,   295,  1150,    98,   336,
     506,  1195,   299,   916,    35,    38,    45,    46,    93,   162,
     191,   212,   266,   319,   379,   392,   475,   917,   918,   486,
     913,  1148,  1148,  1148,  1148,  1211,  1187,  1211,   878,   931,
      21,   455,   466,   937,   938,  1170,   503,   934,   935,   503,
     837,  1311,   233,  1173,   116,   954,  1197,   130,   837,   958,
       9,    12,    15,    16,   278,   279,   302,   303,   964,   968,
     177,  1217,     9,    59,   179,   242,   470,   984,   985,   986,
     979,   980,  1069,  1295,  1332,   448,  1208,  1187,  1211,  1003,
    1315,  1191,   837,   170,  1014,  1168,  1015,  1016,  1228,  1197,
       8,    37,  1142,  1300,  1224,  1228,  1239,  1242,   229,  1020,
    1037,  1315,   131,  1044,  1228,  1044,   448,   448,  1051,   154,
     455,   466,  1211,    49,    38,    46,   212,   244,   266,   319,
     379,   475,  1055,  1056,  1285,  1076,  1315,  1211,   163,   290,
     411,  1211,  1228,   197,  1187,  1211,   836,  1235,  1217,  1272,
     229,  1116,  1141,  1142,   728,  1272,  1287,  1201,  1246,  1246,
    1246,  1213,   242,   470,  1246,   450,  1181,  1246,  1246,  1239,
    1295,  1285,  1285,  1267,   249,   250,  1289,   769,   205,   178,
     755,   756,   757,   758,  1228,  1285,   253,   390,   158,   160,
    1285,  1224,   300,  1292,  1235,    58,  1228,  1228,   205,  1292,
      32,   112,  1235,  1285,   506,   453,   816,   273,   853,  1292,
    1292,   851,   850,  1292,   167,  1145,  1146,   511,   510,  1217,
    1145,   238,   424,   300,   277,   257,  1216,  1229,  1228,  1294,
     412,  1151,  1152,  1233,  1234,  1187,   448,  1256,   867,  1209,
     448,  1197,   882,   883,   381,   363,  1151,  1285,   837,   296,
    1166,   839,   837,  1148,  1285,   253,   390,   158,   160,  1285,
     125,   484,   918,  1148,    98,    99,   914,   853,   204,  1151,
     204,   879,   880,   881,  1272,    17,   444,   939,   317,   937,
    1295,   837,   130,   141,   959,  1311,   366,   965,  1311,   448,
      49,   985,   987,  1217,     9,    59,   242,   470,   982,   983,
    1217,  1070,  1317,   727,   219,   315,  1281,  1208,  1151,   204,
    1191,   644,   380,  1004,  1315,   143,  1009,     8,   197,  1020,
    1228,   131,  1157,  1159,  1164,   263,   288,   837,   503,   503,
    1045,  1046,  1217,  1216,  1211,  1051,  1051,  1051,  1051,  1051,
    1051,  1051,  1051,  1056,   291,   294,  1078,  1079,  1080,  1174,
    1258,  1164,   245,   411,  1331,   424,  1307,  1307,  1092,  1315,
    1228,  1151,   204,   453,   448,     9,  1114,  1115,  1252,  1117,
    1228,  1092,  1117,  1037,     7,  1265,   506,   729,   730,  1285,
     450,  1201,  1219,  1285,  1267,   257,   512,   760,   761,  1228,
    1237,   693,   770,   757,   758,   512,  1221,  1225,  1235,  1221,
    1285,  1310,  1285,  1285,    32,  1235,   828,   829,  1285,   505,
     854,  1221,  1221,  1221,   837,   295,  1147,  1145,  1260,  1229,
     837,   298,  1153,  1234,  1151,  1218,  1228,  1239,   167,   463,
     885,  1322,     6,   229,   309,   462,   884,  1284,    34,   282,
     283,   284,   345,   468,   469,   473,  1262,   837,   840,  1221,
    1221,  1167,  1223,  1225,  1235,  1167,   505,   915,  1187,  1188,
    1187,  1188,   880,   309,   824,    89,   358,   500,   938,  1169,
     837,  1228,   837,   500,   966,   967,   968,   969,  1309,   500,
    1218,  1217,    49,   988,   983,   190,   988,  1066,  1285,  1287,
     315,  1187,  1004,   263,   288,  1016,  1211,   218,  1021,  1315,
     837,   292,  1160,   263,  1169,  1168,  1045,  1174,  1228,  1175,
    1176,  1177,  1178,  1181,  1085,  1211,  1085,   463,  1154,  1155,
     331,  1260,  1187,   832,  1218,   314,  1217,   115,  1118,   438,
    1120,   159,   293,  1143,  1161,  1162,  1163,  1164,   322,  1195,
    1221,   730,  1200,  1201,   762,   253,   255,  1325,   506,   694,
     271,   330,   460,   465,   808,   809,   810,  1219,   808,   809,
     811,   829,    47,    32,    35,    38,    46,    93,   112,   191,
     199,   212,   244,   264,   266,   288,   289,   319,   346,   372,
     379,   392,   396,   437,   446,   475,   485,   491,   855,   856,
     857,  1145,   837,  1151,   837,   295,   886,   837,  1294,  1228,
     253,   255,  1330,   917,  1151,   362,  1151,   362,  1211,   967,
     104,  1276,  1311,   988,   988,  1218,     8,    37,   989,   226,
     499,  1071,  1201,  1068,  1151,   381,    49,   263,   238,  1022,
     217,   237,   263,   288,   502,   837,   837,   837,   837,   297,
    1156,  1285,  1151,  1151,   494,   833,  1122,  1115,  1280,    97,
    1119,  1280,  1154,   837,   837,  1163,   253,   255,  1288,  1201,
     179,   189,   211,   241,   763,   764,   765,   766,   767,   768,
     761,   771,  1221,  1221,   131,  1285,  1285,   857,    58,   125,
     484,     8,  1266,   856,   837,  1228,  1188,  1188,    49,   112,
     988,   458,  1283,  1283,   338,  1191,   204,   318,  1072,  1232,
    1211,  1285,  1023,  1158,  1159,  1160,  1164,   263,   263,   263,
     837,  1228,  1123,   453,  1228,  1280,  1228,   108,   118,  1334,
    1285,  1285,    56,    91,  1334,  1335,  1319,   772,   111,  1221,
    1221,  1285,  1167,  1167,  1222,  1225,  1237,  1151,  1151,  1211,
    1211,  1211,  1285,  1191,   338,   483,  1228,  1160,   129,   168,
     205,  1124,  1125,  1126,  1128,  1132,  1134,  1135,  1136,  1270,
    1278,  1228,  1285,   761,   761,   211,  1285,  1285,   210,   253,
     286,   306,   310,   334,   415,   432,   453,   474,   493,   501,
     711,   716,   717,   731,   734,   736,   773,   774,   778,   781,
     784,   785,   786,   787,   791,   792,   793,   797,   798,   799,
    1318,  1319,   453,  1219,  1011,  1285,  1168,    37,  1266,   341,
     109,   761,   761,   761,   222,  1282,   300,   789,   210,   322,
    1235,   286,   503,  1285,  1294,  1285,  1285,  1228,   330,   465,
     788,   790,  1237,   796,   808,  1237,   300,   301,  1293,  1267,
    1011,   368,   419,  1306,   131,   422,  1133,  1295,   233,  1285,
     720,   322,  1168,  1214,  1212,  1214,    55,    91,   322,   326,
     327,   367,   383,   384,   775,  1334,  1335,  1336,  1337,  1338,
    1339,  1340,   121,   197,  1237,  1237,  1237,    54,   243,   385,
     794,   795,  1228,   163,   167,  1321,     9,  1129,  1130,  1198,
     286,   287,   322,   330,   465,   779,   780,  1235,  1310,  1260,
     374,   486,   782,  1214,   189,   189,   211,   189,   211,   178,
     776,  1228,   178,   777,  1228,  1214,  1286,   338,  1298,   307,
     339,   359,  1131,  1130,   322,  1235,  1235,   722,  1295,  1228,
      49,  1295,   307,  1232,   426,   718,   178,   783,  1228,  1214,
     172,   226,   234,   318,  1127,  1191,  1235
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

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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


/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  *++yyvsp = yylval;

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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 1535 "parser.y"
    {
	cb_validate_program_environment (current_program);
  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 1541 "parser.y"
    {
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 1553 "parser.y"
    {
	cb_validate_program_data (current_program);
  }
    break;

  case 28:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 1594 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 30:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 1637 "parser.y"
    { (yyval) = NULL; }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 1638 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 1670 "parser.y"
    {
	current_program->flag_initial = 1;
  }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 1674 "parser.y"
    {
	current_program->flag_recursive = 1;
  }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 1684 "parser.y"
    {
	header_check |= COBC_HD_ENVIRONMENT_DIVISION;
  }
    break;

  case 46:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 1749 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
	check_comp_repeated ("OBJECT-COMPUTER", SYN_CLAUSE_2);
  }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 1778 "parser.y"
    {
	cb_verify (cb_memory_size_clause, "MEMORY SIZE");
  }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 1785 "parser.y"
    {
	current_program->collating_sequence = (yyvsp[(3) - (3)]);
  }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 1792 "parser.y"
    {
	/* Ignore */
  }
    break;

  case 75:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 1810 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 1814 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 1818 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 1822 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 1836 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_CONFIGURATION_SECTION, 0, 0);
  }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 1841 "parser.y"
    {
	cobc_in_repository = 0;
  }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 1849 "parser.y"
    {
	yyerrok;
  }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 1861 "parser.y"
    {
	functions_are_all = 1;
  }
    break;

  case 90:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 1886 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 1890 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 1897 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(1) - (1)]));
  }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 1902 "parser.y"
    {
	current_program->function_spec_list =
		cb_list_add (current_program->function_spec_list, (yyvsp[(2) - (2)]));
  }
    break;

  case 98:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 1927 "parser.y"
    {
	cobc_cs_check = 0;
	yyerrok;
  }
    break;

  case 115:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2065 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_NATIVE;
	}
  }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 2071 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 2077 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 2083 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_EBCDIC;
	}
  }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 2089 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_ASCII;
	}
  }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 2095 "parser.y"
    {
	if ((yyvsp[(-1) - (1)])) {
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->alphabet_type = CB_ALPHABET_CUSTOM;
		CB_ALPHABET_NAME ((yyvsp[(-1) - (1)]))->custom_list = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 2105 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 2109 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 2116 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 2120 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 2124 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (2)]));
  }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 2128 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (4)]);
  }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 2135 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 2139 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 2145 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 2146 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 2147 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 2148 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 2149 "parser.y"
    { (yyval) = cb_norm_high; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 2150 "parser.y"
    { (yyval) = cb_norm_low; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 2154 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 2155 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2177 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 2181 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 2189 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 2196 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 154:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2249 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 2250 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2277 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 2278 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 2283 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 164:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2412 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 2416 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 169:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2530 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_INPUT_OUTPUT_SECTION;
  }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 2538 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_FILE_CONTROL;
  }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 2547 "parser.y"
    {
	check_headers_present (COBC_HD_ENVIRONMENT_DIVISION,
			       COBC_HD_INPUT_OUTPUT_SECTION, 0, 0);
	header_check |= COBC_HD_I_O_CONTROL;
  }
    break;

  case 183:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2579 "parser.y"
    {
	validate_file (current_file, (yyvsp[(3) - (6)]));
  }
    break;

  case 185:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2617 "parser.y"
    {
	check_repeated ("ASSIGN", SYN_CLAUSE_1);
	cobc_cs_check = 0;
	current_file->assign = cb_build_assignment_name (current_file, (yyvsp[(5) - (5)]));
  }
    break;

  case 202:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2682 "parser.y"
    {
	current_file->flag_line_adv = 1;
  }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 2689 "parser.y"
    {
	current_file->flag_ext_assign = 1;
  }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 2702 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 2714 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("ACCESS", SYN_CLAUSE_2);
  }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 2721 "parser.y"
    { current_file->access_mode = COB_ACCESS_SEQUENTIAL; }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 2722 "parser.y"
    { current_file->access_mode = COB_ACCESS_DYNAMIC; }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 2723 "parser.y"
    { current_file->access_mode = COB_ACCESS_RANDOM; }
    break;

  case 224:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2797 "parser.y"
    { (yyval) = cb_int (-1); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 2800 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(4) - (4)])));
  }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 2805 "parser.y"
    {
	(yyval) = cb_int (literal_value ((yyvsp[(3) - (3)])));
  }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 2815 "parser.y"
    {
	check_repeated ("COLLATING", SYN_CLAUSE_3);
	PENDING ("COLLATING SEQUENCE");
  }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 2826 "parser.y"
    {
	check_repeated ("STATUS", SYN_CLAUSE_4);
	current_file->file_status = (yyvsp[(4) - (4)]);
  }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 2841 "parser.y"
    {
	check_repeated ("LOCK", SYN_CLAUSE_5);
  }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 2849 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_MANUAL;
	cobc_cs_check = 0;
  }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 2854 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_AUTOMATIC;
	cobc_cs_check = 0;
  }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 2859 "parser.y"
    {
	current_file->lock_mode = COB_LOCK_EXCLUSIVE;
	cobc_cs_check = 0;
  }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 2868 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
  }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 2872 "parser.y"
    {
	current_file->lock_mode |= COB_LOCK_MULTIPLE;
	PENDING ("WITH ROLLBACK");
  }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 2888 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_INDEXED;
  }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 2893 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_SEQUENTIAL;
  }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 2898 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_RELATIVE;
  }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 2903 "parser.y"
    {
	check_repeated ("ORGANIZATION", SYN_CLAUSE_6);
	current_file->organization = COB_ORG_LINE_SEQUENTIAL;
  }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 2914 "parser.y"
    {
	check_repeated ("PADDING", SYN_CLAUSE_7);
	cb_verify (cb_padding_character_clause, "PADDING CHARACTER");
  }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 2925 "parser.y"
    {
	check_repeated ("RECORD DELIMITER", SYN_CLAUSE_8);
  }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 2935 "parser.y"
    {
	check_repeated ("RECORD KEY", SYN_CLAUSE_9);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 252:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2965 "parser.y"
    {
    key_component_list = NULL;
  }
    break;

  case 258:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 2993 "parser.y"
    {
	check_repeated ("RELATIVE KEY", SYN_CLAUSE_10);
	current_file->key = (yyvsp[(4) - (4)]);
  }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 3004 "parser.y"
    {
	check_repeated ("RESERVE", SYN_CLAUSE_11);
  }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 3018 "parser.y"
    {
	check_repeated ("SHARING", SYN_CLAUSE_12);
	current_file->sharing = (yyvsp[(3) - (3)]);
  }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 3025 "parser.y"
    { (yyval) = NULL; }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 3026 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 3027 "parser.y"
    { (yyval) = NULL; }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 3036 "parser.y"
    {
	yyerrok;
  }
    break;

  case 274:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3082 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 3083 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 3084 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 3085 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 3092 "parser.y"
    {
	/* Fake for TAPE */
	cobc_cs_check = CB_CS_ASSIGN;
  }
    break;

  case 280:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3124 "parser.y"
    {
	header_check |= COBC_HD_DATA_DIVISION;
  }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 3133 "parser.y"
    {
	current_storage = CB_STORAGE_FILE;
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_FILE_SECTION;
  }
    break;

  case 292:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3183 "parser.y"
    {
	yyerrok;
  }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 3190 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 3194 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 300:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3245 "parser.y"
    {
	check_repeated ("BLOCK", SYN_CLAUSE_3);
	/* ignore */
  }
    break;

  case 315:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3344 "parser.y"
    {
	current_file->record_depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 320:

/* Line 1806 of yacc.c  */
#line 3350 "parser.y"
    { (yyval) = NULL; }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 3351 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 3355 "parser.y"
    { (yyval) = NULL; }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 3356 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 3364 "parser.y"
    {
	check_repeated ("LABEL", SYN_CLAUSE_5);
	cb_verify (cb_label_records_clause, "LABEL RECORDS");
  }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 3375 "parser.y"
    {
	check_repeated ("VALUE OF", SYN_CLAUSE_6);
	cb_verify (cb_value_of_clause, "VALUE OF");
  }
    break;

  case 326:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3403 "parser.y"
    {
	check_repeated ("DATA", SYN_CLAUSE_7);
	cb_verify (cb_data_records_clause, "DATA RECORDS");
  }
    break;

  case 332:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3443 "parser.y"
    {
	current_file->latfoot = (yyvsp[(4) - (4)]);
  }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 3450 "parser.y"
    {
	current_file->lattop = (yyvsp[(2) - (2)]);
  }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 3457 "parser.y"
    {
	current_file->latbot = (yyvsp[(2) - (2)]);
  }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 3466 "parser.y"
    {
	cobc_cs_check = 0;
	check_repeated ("RECORDING", SYN_CLAUSE_9);
	/* ignore */
  }
    break;

  case 342:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3605 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_WORKING_STORAGE_SECTION;
	current_storage = CB_STORAGE_WORKING;
  }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 3611 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		CB_FIELD_ADD (current_program->working_storage, CB_FIELD ((yyvsp[(5) - (5)])));
	}
  }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 3620 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 3623 "parser.y"
    {
	current_field = NULL;
	control_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 353:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3698 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 3705 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 3711 "parser.y"
    {
	(yyval) = cb_build_filler ();
	qualifier = NULL;
	non_const_word = 0;
  }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 3717 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 3726 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	qualifier = (yyvsp[(1) - (1)]);
	non_const_word = 0;
  }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 3735 "parser.y"
    {
	(yyval)= NULL;
  }
    break;

  case 367:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3750 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 3751 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 3752 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(2) - (2)])); }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 3753 "parser.y"
    { (yyval) = cb_build_const_length ((yyvsp[(3) - (3)])); }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 3758 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 3762 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 3766 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 3770 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 3774 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 3778 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(long));
  }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 3782 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(void *));
  }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 3786 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(float));
  }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 3790 "parser.y"
    {
	(yyval) = cb_int ((int)sizeof(double));
  }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 3794 "parser.y"
    {
	(yyval) = cb_int (4);
  }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 3798 "parser.y"
    {
	(yyval) = cb_int (8);
  }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 3802 "parser.y"
    {
	(yyval) = cb_int (16);
  }
    break;

  case 384:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3864 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 3868 "parser.y"
    {
	PENDING ("CONSTANT FROM clause");
	(yyval) = NULL;
  }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 3876 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = NULL;
  }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 3882 "parser.y"
    {
	/* Required to check redefines */
	(yyval) = cb_true;
  }
    break;

  case 413:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3961 "parser.y"
    {
	current_field->ename = cb_to_cname (current_field->name);
  }
    break;

  case 416:

/* Line 1806 of yacc.c  */
#line 3965 "parser.y"
    {
	current_field->ename = cb_to_cname ((const char *)CB_LITERAL ((yyvsp[(2) - (2)]))->data);
  }
    break;

  case 417:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 3999 "parser.y"
    {
	check_pic_repeated ("PICTURE", SYN_CLAUSE_4);
	current_field->pic = CB_PICTURE ((yyvsp[(1) - (1)]));
  }
    break;

  case 421:

/* Line 1806 of yacc.c  */
#line 4015 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 422:

/* Line 1806 of yacc.c  */
#line 4019 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 423:

/* Line 1806 of yacc.c  */
#line 4023 "parser.y"
    {
	check_set_usage (CB_USAGE_FLOAT);
  }
    break;

  case 424:

/* Line 1806 of yacc.c  */
#line 4027 "parser.y"
    {
	check_set_usage (CB_USAGE_DOUBLE);
  }
    break;

  case 425:

/* Line 1806 of yacc.c  */
#line 4031 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 426:

/* Line 1806 of yacc.c  */
#line 4035 "parser.y"
    {
	check_set_usage (CB_USAGE_BINARY);
  }
    break;

  case 427:

/* Line 1806 of yacc.c  */
#line 4039 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_5);
  }
    break;

  case 428:

/* Line 1806 of yacc.c  */
#line 4043 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_6);
  }
    break;

  case 429:

/* Line 1806 of yacc.c  */
#line 4047 "parser.y"
    {
	check_set_usage (CB_USAGE_COMP_X);
  }
    break;

  case 430:

/* Line 1806 of yacc.c  */
#line 4051 "parser.y"
    {
	check_set_usage (CB_USAGE_DISPLAY);
  }
    break;

  case 431:

/* Line 1806 of yacc.c  */
#line 4055 "parser.y"
    {
	check_set_usage (CB_USAGE_INDEX);
  }
    break;

  case 432:

/* Line 1806 of yacc.c  */
#line 4059 "parser.y"
    {
	check_set_usage (CB_USAGE_PACKED);
  }
    break;

  case 433:

/* Line 1806 of yacc.c  */
#line 4063 "parser.y"
    {
	check_set_usage (CB_USAGE_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 434:

/* Line 1806 of yacc.c  */
#line 4068 "parser.y"
    {
	check_set_usage (CB_USAGE_PROGRAM_POINTER);
	current_field->flag_is_pointer = 1;
  }
    break;

  case 435:

/* Line 1806 of yacc.c  */
#line 4073 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 436:

/* Line 1806 of yacc.c  */
#line 4077 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 437:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 4089 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 439:

/* Line 1806 of yacc.c  */
#line 4093 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 440:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 4105 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_CHAR);
  }
    break;

  case 442:

/* Line 1806 of yacc.c  */
#line 4109 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_CHAR);
  }
    break;

  case 443:

/* Line 1806 of yacc.c  */
#line 4113 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_SHORT);
  }
    break;

  case 444:

/* Line 1806 of yacc.c  */
#line 4117 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_SHORT);
  }
    break;

  case 445:

/* Line 1806 of yacc.c  */
#line 4121 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_INT);
  }
    break;

  case 446:

/* Line 1806 of yacc.c  */
#line 4125 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_INT);
  }
    break;

  case 447:

/* Line 1806 of yacc.c  */
#line 4129 "parser.y"
    {
	check_set_usage (CB_USAGE_SIGNED_LONG);
  }
    break;

  case 448:

/* Line 1806 of yacc.c  */
#line 4133 "parser.y"
    {
	check_set_usage (CB_USAGE_UNSIGNED_LONG);
  }
    break;

  case 449:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 4153 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN32);
  }
    break;

  case 452:

/* Line 1806 of yacc.c  */
#line 4157 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN64);
  }
    break;

  case 453:

/* Line 1806 of yacc.c  */
#line 4161 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_BIN128);
  }
    break;

  case 454:

/* Line 1806 of yacc.c  */
#line 4165 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC64);
  }
    break;

  case 455:

/* Line 1806 of yacc.c  */
#line 4169 "parser.y"
    {
	check_set_usage (CB_USAGE_FP_DEC128);
  }
    break;

  case 456:

/* Line 1806 of yacc.c  */
#line 4173 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_5);
	PENDING ("USAGE NATIONAL");
  }
    break;

  case 461:

/* Line 1806 of yacc.c  */
#line 4193 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 1;
  }
    break;

  case 462:

/* Line 1806 of yacc.c  */
#line 4199 "parser.y"
    {
	check_pic_repeated ("SIGN", SYN_CLAUSE_6);
	current_field->flag_sign_separate = ((yyvsp[(3) - (3)]) ? 1 : 0);
	current_field->flag_sign_leading  = 0;
  }
    break;

  case 463:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 4230 "parser.y"
    {
	current_field->step_count = cb_get_int ((yyvsp[(2) - (2)]));
  }
    break;

  case 466:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 4280 "parser.y"
    { (yyval) = NULL; }
    break;

  case 469:

/* Line 1806 of yacc.c  */
#line 4281 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 470:

/* Line 1806 of yacc.c  */
#line 4285 "parser.y"
    { (yyval) = NULL; }
    break;

  case 471:

/* Line 1806 of yacc.c  */
#line 4286 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 473:

/* Line 1806 of yacc.c  */
#line 4291 "parser.y"
    {
	current_field->depending = (yyvsp[(3) - (3)]);
  }
    break;

  case 475:

/* Line 1806 of yacc.c  */
#line 4298 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(3) - (3)]), cb_zero, 0, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 477:

/* Line 1806 of yacc.c  */
#line 4306 "parser.y"
    {
	/* current_field->initialized = 1; */
  }
    break;

  case 478:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 4336 "parser.y"
    { (yyval) = NULL; }
    break;

  case 480:

/* Line 1806 of yacc.c  */
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

/* Line 1806 of yacc.c  */
#line 4354 "parser.y"
    { (yyval) = cb_int (COB_ASCENDING); }
    break;

  case 482:

/* Line 1806 of yacc.c  */
#line 4355 "parser.y"
    { (yyval) = cb_int (COB_DESCENDING); }
    break;

  case 484:

/* Line 1806 of yacc.c  */
#line 4360 "parser.y"
    {
	current_field->index_list = (yyvsp[(3) - (3)]);
  }
    break;

  case 485:

/* Line 1806 of yacc.c  */
#line 4366 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 486:

/* Line 1806 of yacc.c  */
#line 4368 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 487:

/* Line 1806 of yacc.c  */
#line 4373 "parser.y"
    {
	(yyval) = cb_build_index ((yyvsp[(1) - (1)]), cb_int1, 1U, current_field);
	CB_FIELD_PTR ((yyval))->special_index = 1;
  }
    break;

  case 488:

/* Line 1806 of yacc.c  */
#line 4384 "parser.y"
    {
	check_pic_repeated ("JUSTIFIED", SYN_CLAUSE_8);
	current_field->flag_justified = 1;
  }
    break;

  case 489:

/* Line 1806 of yacc.c  */
#line 4395 "parser.y"
    {
	check_pic_repeated ("SYNCHRONIZED", SYN_CLAUSE_9);
	current_field->flag_synchronized = 1;
  }
    break;

  case 492:

/* Line 1806 of yacc.c  */
#line 4405 "parser.y"
    {
	PENDING ("SYNCHRONIZED RIGHT");
  }
    break;

  case 493:

/* Line 1806 of yacc.c  */
#line 4415 "parser.y"
    {
	check_pic_repeated ("BLANK", SYN_CLAUSE_10);
	current_field->flag_blank_zero = 1;
  }
    break;

  case 494:

/* Line 1806 of yacc.c  */
#line 4426 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4454 "parser.y"
    {
	check_pic_repeated ("VALUE", SYN_CLAUSE_12);
	current_field->values = (yyvsp[(3) - (3)]);
  }
    break;

  case 497:

/* Line 1806 of yacc.c  */
#line 4462 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 498:

/* Line 1806 of yacc.c  */
#line 4463 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 499:

/* Line 1806 of yacc.c  */
#line 4467 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 500:

/* Line 1806 of yacc.c  */
#line 4468 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 502:

/* Line 1806 of yacc.c  */
#line 4473 "parser.y"
    {
	if (current_field->level != 88) {
		cb_error (_("FALSE clause only allowed for 88 level"));
	}
	current_field->false_88 = CB_LIST_INIT ((yyvsp[(4) - (4)]));
  }
    break;

  case 503:

/* Line 1806 of yacc.c  */
#line 4486 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4499 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4520 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4529 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4544 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4553 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->local_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 511:

/* Line 1806 of yacc.c  */
#line 4565 "parser.y"
    {
	check_headers_present (COBC_HD_DATA_DIVISION, 0, 0, 0);
	header_check |= COBC_HD_LINKAGE_SECTION;
	current_storage = CB_STORAGE_LINKAGE;
  }
    break;

  case 512:

/* Line 1806 of yacc.c  */
#line 4571 "parser.y"
    {
	if ((yyvsp[(5) - (5)])) {
		current_program->linkage_storage = CB_FIELD ((yyvsp[(5) - (5)]));
	}
  }
    break;

  case 514:

/* Line 1806 of yacc.c  */
#line 4582 "parser.y"
    {
	header_check |= COBC_HD_REPORT_SECTION;
	current_storage = CB_STORAGE_REPORT;
	description_field = NULL;
	current_program->flag_report = 1;
	cb_clear_real_field ();
  }
    break;

  case 518:

/* Line 1806 of yacc.c  */
#line 4600 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4613 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4631 "parser.y"
    {
	yyerrok;
  }
    break;

  case 523:

/* Line 1806 of yacc.c  */
#line 4638 "parser.y"
    {
	check_repeated ("GLOBAL", SYN_CLAUSE_1);
	current_report->global = 1;
	cb_error (_("GLOBAL is not allowed with RD"));
  }
    break;

  case 524:

/* Line 1806 of yacc.c  */
#line 4644 "parser.y"
    {
	check_repeated ("CODE", SYN_CLAUSE_2);
  }
    break;

  case 527:

/* Line 1806 of yacc.c  */
#line 4655 "parser.y"
    {
	check_repeated ("CONTROL", SYN_CLAUSE_3);
  }
    break;

  case 531:

/* Line 1806 of yacc.c  */
#line 4668 "parser.y"
    {
      current_report->control_final = 1;
  }
    break;

  case 534:

/* Line 1806 of yacc.c  */
#line 4680 "parser.y"
    {
	/* Add field to current control list */
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), current_report->controls);
  }
    break;

  case 535:

/* Line 1806 of yacc.c  */
#line 4691 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4730 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4740 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4750 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4786 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->heading = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_heading = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 549:

/* Line 1806 of yacc.c  */
#line 4797 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->first_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_first_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 550:

/* Line 1806 of yacc.c  */
#line 4808 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_control = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_control = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 551:

/* Line 1806 of yacc.c  */
#line 4819 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(4) - (4)]))) {
		current_report->last_detail = cb_get_int ((yyvsp[(4) - (4)]));
	} else {
		current_report->t_last_detail = (yyvsp[(4) - (4)]);
	}
  }
    break;

  case 552:

/* Line 1806 of yacc.c  */
#line 4830 "parser.y"
    {
	if (CB_LITERAL_P ((yyvsp[(3) - (3)]))) {
		current_report->footing = cb_get_int ((yyvsp[(3) - (3)]));
	} else {
		current_report->t_footing = (yyvsp[(3) - (3)]);
	}
  }
    break;

  case 555:

/* Line 1806 of yacc.c  */
#line 4845 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4891 "parser.y"
    {
	check_pic_repeated ("TYPE", SYN_CLAUSE_16);
  }
    break;

  case 577:

/* Line 1806 of yacc.c  */
#line 4898 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_HEADING;
  }
    break;

  case 578:

/* Line 1806 of yacc.c  */
#line 4902 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_HEADING;
  }
    break;

  case 581:

/* Line 1806 of yacc.c  */
#line 4908 "parser.y"
    {
	if(current_report != NULL) {
		current_report->has_detail = 1;
	}
      current_field->report_flag |= COB_REPORT_DETAIL;
  }
    break;

  case 582:

/* Line 1806 of yacc.c  */
#line 4915 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_PAGE_FOOTING;
  }
    break;

  case 583:

/* Line 1806 of yacc.c  */
#line 4919 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_FOOTING;
  }
    break;

  case 584:

/* Line 1806 of yacc.c  */
#line 4925 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
  }
    break;

  case 585:

/* Line 1806 of yacc.c  */
#line 4929 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 586:

/* Line 1806 of yacc.c  */
#line 4934 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_HEADING_FINAL;
  }
    break;

  case 587:

/* Line 1806 of yacc.c  */
#line 4940 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
  }
    break;

  case 588:

/* Line 1806 of yacc.c  */
#line 4944 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING;
      current_field->report_control = (yyvsp[(1) - (1)]);
  }
    break;

  case 589:

/* Line 1806 of yacc.c  */
#line 4949 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_CONTROL_FOOTING_FINAL;
  }
    break;

  case 590:

/* Line 1806 of yacc.c  */
#line 4956 "parser.y"
    {
	check_pic_repeated ("NEXT GROUP", SYN_CLAUSE_17);
  }
    break;

  case 591:

/* Line 1806 of yacc.c  */
#line 4963 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 4972 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 593:

/* Line 1806 of yacc.c  */
#line 4977 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PLUS;
      current_field->next_group_line = cb_get_int((yyvsp[(2) - (2)]));
  }
    break;

  case 594:

/* Line 1806 of yacc.c  */
#line 4982 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_NEXT_GROUP_PAGE;
  }
    break;

  case 599:

/* Line 1806 of yacc.c  */
#line 4996 "parser.y"
    {
	check_pic_repeated ("SUM", SYN_CLAUSE_19);
	current_field->report_sum_list = (yyvsp[(3) - (4)]);
	build_sum_counter( current_report, current_field);
  }
    break;

  case 602:

/* Line 1806 of yacc.c  */
#line 5006 "parser.y"
    {
      current_field->report_sum_upon = (yyvsp[(2) - (2)]);
  }
    break;

  case 603:

/* Line 1806 of yacc.c  */
#line 5013 "parser.y"
    {
      current_field->report_reset = (yyvsp[(1) - (1)]);
  }
    break;

  case 604:

/* Line 1806 of yacc.c  */
#line 5017 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_RESET_FINAL;
  }
    break;

  case 605:

/* Line 1806 of yacc.c  */
#line 5024 "parser.y"
    {
	check_pic_repeated ("PRESENT", SYN_CLAUSE_20);
	current_field->report_when = (yyvsp[(3) - (3)]);
  }
    break;

  case 607:

/* Line 1806 of yacc.c  */
#line 5036 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_21);
	current_field->report_flag |= COB_REPORT_LINE;
  }
    break;

  case 609:

/* Line 1806 of yacc.c  */
#line 5048 "parser.y"
    {
	if(current_field->report_line == 0) {
		cb_warning (_("LINE 0 not implemented"));
	}
  }
    break;

  case 610:

/* Line 1806 of yacc.c  */
#line 5054 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 5069 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 5092 "parser.y"
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

/* Line 1806 of yacc.c  */
#line 5109 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 617:

/* Line 1806 of yacc.c  */
#line 5113 "parser.y"
    {
      current_field->report_flag |= COB_REPORT_LINE_NEXT_PAGE;
  }
    break;

  case 618:

/* Line 1806 of yacc.c  */
#line 5120 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_18);
  }
    break;

  case 622:

/* Line 1806 of yacc.c  */
#line 5133 "parser.y"
    {
	/* ToDo: Add check in typeck that all operands are absolute */
	PENDING ("COLUMN orientation (LEFT/RIGHT/CENTER)");
  }
    break;

  case 626:

/* Line 1806 of yacc.c  */
#line 5147 "parser.y"
    {
	current_field->report_column = cb_get_int ((yyvsp[(2) - (2)]));
	if (current_field->report_column > 0) {
		current_field->report_flag |= COB_REPORT_COLUMN_PLUS;
	} else {
		current_field->report_column = 0;
	}
  }
    break;

  case 627:

/* Line 1806 of yacc.c  */
#line 5156 "parser.y"
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

  case 628:

/* Line 1806 of yacc.c  */
#line 5175 "parser.y"
    {
	check_pic_repeated ("SOURCE", SYN_CLAUSE_22);
	current_field->report_source = (yyvsp[(3) - (4)]);
  }
    break;

  case 629:

/* Line 1806 of yacc.c  */
#line 5183 "parser.y"
    {
	check_pic_repeated ("GROUP", SYN_CLAUSE_23);
	current_field->report_flag |= COB_REPORT_GROUP_INDICATE;
  }
    break;

  case 630:

/* Line 1806 of yacc.c  */
#line 5191 "parser.y"
    {
	check_pic_repeated ("USAGE", SYN_CLAUSE_24);
  }
    break;

  case 632:

/* Line 1806 of yacc.c  */
#line 5200 "parser.y"
    {
	current_storage = CB_STORAGE_SCREEN;
	current_field = NULL;
	description_field = NULL;
	cb_clear_real_field ();
  }
    break;

  case 633:

/* Line 1806 of yacc.c  */
#line 5207 "parser.y"
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

  case 639:

/* Line 1806 of yacc.c  */
#line 5233 "parser.y"
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

  case 640:

/* Line 1806 of yacc.c  */
#line 5264 "parser.y"
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

  case 641:

/* Line 1806 of yacc.c  */
#line 5290 "parser.y"
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

  case 644:

/* Line 1806 of yacc.c  */
#line 5313 "parser.y"
    {
	check_screen_attr ("BLANK LINE", COB_SCREEN_BLANK_LINE);
  }
    break;

  case 645:

/* Line 1806 of yacc.c  */
#line 5317 "parser.y"
    {
	check_screen_attr ("BLANK SCREEN", COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 646:

/* Line 1806 of yacc.c  */
#line 5321 "parser.y"
    {
	check_screen_attr ("BELL", COB_SCREEN_BELL);
  }
    break;

  case 647:

/* Line 1806 of yacc.c  */
#line 5325 "parser.y"
    {
	check_screen_attr ("BLINK", COB_SCREEN_BLINK);
  }
    break;

  case 648:

/* Line 1806 of yacc.c  */
#line 5329 "parser.y"
    {
	check_screen_attr ("ERASE EOL", COB_SCREEN_ERASE_EOL);
  }
    break;

  case 649:

/* Line 1806 of yacc.c  */
#line 5333 "parser.y"
    {
	check_screen_attr ("ERASE EOS", COB_SCREEN_ERASE_EOS);
  }
    break;

  case 650:

/* Line 1806 of yacc.c  */
#line 5337 "parser.y"
    {
	check_screen_attr ("HIGHLIGHT", COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 651:

/* Line 1806 of yacc.c  */
#line 5341 "parser.y"
    {
	check_screen_attr ("LOWLIGHT", COB_SCREEN_LOWLIGHT);
  }
    break;

  case 652:

/* Line 1806 of yacc.c  */
#line 5345 "parser.y"
    {
	check_screen_attr ("REVERSE-VIDEO", COB_SCREEN_REVERSE);
  }
    break;

  case 653:

/* Line 1806 of yacc.c  */
#line 5349 "parser.y"
    {
	check_screen_attr ("UNDERLINE", COB_SCREEN_UNDERLINE);
  }
    break;

  case 654:

/* Line 1806 of yacc.c  */
#line 5353 "parser.y"
    {
	check_screen_attr ("OVERLINE", COB_SCREEN_OVERLINE);
  }
    break;

  case 655:

/* Line 1806 of yacc.c  */
#line 5357 "parser.y"
    {
	check_screen_attr ("LEFTLINE", COB_SCREEN_LEFTLINE);
  }
    break;

  case 656:

/* Line 1806 of yacc.c  */
#line 5361 "parser.y"
    {
	check_screen_attr ("AUTO", COB_SCREEN_AUTO);
  }
    break;

  case 657:

/* Line 1806 of yacc.c  */
#line 5365 "parser.y"
    {
	check_screen_attr ("SECURE", COB_SCREEN_SECURE);
  }
    break;

  case 658:

/* Line 1806 of yacc.c  */
#line 5369 "parser.y"
    {
	check_screen_attr ("REQUIRED", COB_SCREEN_REQUIRED);
  }
    break;

  case 659:

/* Line 1806 of yacc.c  */
#line 5373 "parser.y"
    {
	check_screen_attr ("FULL", COB_SCREEN_FULL);
  }
    break;

  case 660:

/* Line 1806 of yacc.c  */
#line 5377 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
	current_field->screen_prompt = (yyvsp[(4) - (4)]);
  }
    break;

  case 661:

/* Line 1806 of yacc.c  */
#line 5382 "parser.y"
    {
	check_screen_attr ("PROMPT", COB_SCREEN_PROMPT);
  }
    break;

  case 662:

/* Line 1806 of yacc.c  */
#line 5386 "parser.y"
    {
	check_screen_attr ("INITIAL", COB_SCREEN_INITIAL);
  }
    break;

  case 663:

/* Line 1806 of yacc.c  */
#line 5390 "parser.y"
    {
	check_pic_repeated ("LINE", SYN_CLAUSE_16);
	current_field->screen_line = (yyvsp[(5) - (5)]);
  }
    break;

  case 664:

/* Line 1806 of yacc.c  */
#line 5395 "parser.y"
    {
	check_pic_repeated ("COLUMN", SYN_CLAUSE_17);
	current_field->screen_column = (yyvsp[(5) - (5)]);
  }
    break;

  case 665:

/* Line 1806 of yacc.c  */
#line 5400 "parser.y"
    {
	check_pic_repeated ("FOREGROUND-COLOR", SYN_CLAUSE_18);
	current_field->screen_foreg = (yyvsp[(3) - (3)]);
  }
    break;

  case 666:

/* Line 1806 of yacc.c  */
#line 5405 "parser.y"
    {
	check_pic_repeated ("BACKGROUND-COLOR", SYN_CLAUSE_19);
	current_field->screen_backg = (yyvsp[(3) - (3)]);
  }
    break;

  case 675:

/* Line 1806 of yacc.c  */
#line 5418 "parser.y"
    {
	check_pic_repeated ("USING", SYN_CLAUSE_20);
	current_field->screen_from = (yyvsp[(2) - (2)]);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 676:

/* Line 1806 of yacc.c  */
#line 5425 "parser.y"
    {
	check_pic_repeated ("FROM", SYN_CLAUSE_21);
	current_field->screen_from = (yyvsp[(2) - (2)]);
  }
    break;

  case 677:

/* Line 1806 of yacc.c  */
#line 5430 "parser.y"
    {
	check_pic_repeated ("TO", SYN_CLAUSE_22);
	current_field->screen_to = (yyvsp[(2) - (2)]);
	current_field->screen_flag |= COB_SCREEN_INPUT;
  }
    break;

  case 682:

/* Line 1806 of yacc.c  */
#line 5449 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 683:

/* Line 1806 of yacc.c  */
#line 5453 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_PLUS;
  }
    break;

  case 684:

/* Line 1806 of yacc.c  */
#line 5457 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_LINE_MINUS;
  }
    break;

  case 685:

/* Line 1806 of yacc.c  */
#line 5464 "parser.y"
    {
	/* Nothing */
  }
    break;

  case 686:

/* Line 1806 of yacc.c  */
#line 5468 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_PLUS;
  }
    break;

  case 687:

/* Line 1806 of yacc.c  */
#line 5472 "parser.y"
    {
	current_field->screen_flag |= COB_SCREEN_COLUMN_MINUS;
  }
    break;

  case 688:

/* Line 1806 of yacc.c  */
#line 5480 "parser.y"
    {
	check_pic_repeated ("OCCURS", SYN_CLAUSE_23);
	current_field->occurs_max = cb_get_int ((yyvsp[(2) - (3)]));
	current_field->occurs_min = current_field->occurs_max;
	current_field->indexes++;
	current_field->flag_occurs = 1;
  }
    break;

  case 689:

/* Line 1806 of yacc.c  */
#line 5491 "parser.y"
    {
	cb_error (_("GLOBAL is not allowed with screen items"));
  }
    break;

  case 691:

/* Line 1806 of yacc.c  */
#line 5500 "parser.y"
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

  case 692:

/* Line 1806 of yacc.c  */
#line 5510 "parser.y"
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

  case 693:

/* Line 1806 of yacc.c  */
#line 5522 "parser.y"
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

  case 694:

/* Line 1806 of yacc.c  */
#line 5537 "parser.y"
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

  case 696:

/* Line 1806 of yacc.c  */
#line 5570 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 697:

/* Line 1806 of yacc.c  */
#line 5574 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 698:

/* Line 1806 of yacc.c  */
#line 5579 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 699:

/* Line 1806 of yacc.c  */
#line 5587 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("CHAINING invalid in user FUNCTION"));
	} else {
		current_program->flag_chained = 1;
	}
  }
    break;

  case 700:

/* Line 1806 of yacc.c  */
#line 5596 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error (_("Number of parameters exceeds maximum %d"),
			  COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 701:

/* Line 1806 of yacc.c  */
#line 5606 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 702:

/* Line 1806 of yacc.c  */
#line 5608 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 703:

/* Line 1806 of yacc.c  */
#line 5613 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_build_identifier ((yyvsp[(4) - (4)]), 0));
	CB_SIZES ((yyval)) = size_mode;
  }
    break;

  case 705:

/* Line 1806 of yacc.c  */
#line 5622 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 706:

/* Line 1806 of yacc.c  */
#line 5626 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error (_("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 708:

/* Line 1806 of yacc.c  */
#line 5638 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO;
	}
  }
    break;

  case 709:

/* Line 1806 of yacc.c  */
#line 5646 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_4;
	}
  }
    break;

  case 710:

/* Line 1806 of yacc.c  */
#line 5654 "parser.y"
    {
	if (call_mode != CB_CALL_BY_VALUE) {
		cb_error (_("SIZE only allowed for BY VALUE items"));
	} else {
		size_mode = CB_SIZE_AUTO | CB_SIZE_UNSIGNED;
	}
  }
    break;

  case 711:

/* Line 1806 of yacc.c  */
#line 5662 "parser.y"
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

  case 712:

/* Line 1806 of yacc.c  */
#line 5691 "parser.y"
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

  case 714:

/* Line 1806 of yacc.c  */
#line 5724 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error (_("OPTIONAL only allowed for BY REFERENCE items"));
	}
  }
    break;

  case 715:

/* Line 1806 of yacc.c  */
#line 5733 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("RETURNING clause is required for a FUNCTION"));
	}
  }
    break;

  case 716:

/* Line 1806 of yacc.c  */
#line 5739 "parser.y"
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

  case 718:

/* Line 1806 of yacc.c  */
#line 5767 "parser.y"
    {
	in_declaratives = 1;
	emit_statement (cb_build_comment ("DECLARATIVES"));
  }
    break;

  case 719:

/* Line 1806 of yacc.c  */
#line 5773 "parser.y"
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

  case 724:

/* Line 1806 of yacc.c  */
#line 5811 "parser.y"
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

  case 726:

/* Line 1806 of yacc.c  */
#line 5829 "parser.y"
    {
	/* check_unreached = 0; */
  }
    break;

  case 727:

/* Line 1806 of yacc.c  */
#line 5839 "parser.y"
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

  case 728:

/* Line 1806 of yacc.c  */
#line 5883 "parser.y"
    {
	emit_statement (CB_TREE (current_section));
  }
    break;

  case 731:

/* Line 1806 of yacc.c  */
#line 5894 "parser.y"
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

  case 732:

/* Line 1806 of yacc.c  */
#line 5942 "parser.y"
    {
	non_const_word = 0;
	check_unreached = 0;
	if (cb_build_section_name ((yyvsp[(1) - (1)]), 0) != cb_error_node) {
		cb_error_x ((yyvsp[(1) - (1)]), _("Unknown statement '%s'"), CB_NAME ((yyvsp[(1) - (1)])));
	}
	YYERROR;
  }
    break;

  case 733:

/* Line 1806 of yacc.c  */
#line 5954 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 734:

/* Line 1806 of yacc.c  */
#line 5958 "parser.y"
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

  case 735:

/* Line 1806 of yacc.c  */
#line 5976 "parser.y"
    {
	(yyval) = current_program->exec_list;
	current_program->exec_list = NULL;
	check_unreached = 0;
  }
    break;

  case 736:

/* Line 1806 of yacc.c  */
#line 5981 "parser.y"
    {
	(yyval) = CB_TREE (current_statement);
	current_statement = NULL;
  }
    break;

  case 737:

/* Line 1806 of yacc.c  */
#line 5986 "parser.y"
    {
	(yyval) = cb_list_reverse (current_program->exec_list);
	current_program->exec_list = (yyvsp[(1) - (3)]);
	current_statement = CB_STATEMENT ((yyvsp[(2) - (3)]));
  }
    break;

  case 738:

/* Line 1806 of yacc.c  */
#line 5994 "parser.y"
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

  case 739:

/* Line 1806 of yacc.c  */
#line 6021 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 740:

/* Line 1806 of yacc.c  */
#line 6025 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 790:

/* Line 1806 of yacc.c  */
#line 6081 "parser.y"
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

  case 791:

/* Line 1806 of yacc.c  */
#line 6095 "parser.y"
    {
	yyerrok;
	cobc_cs_check = 0;
  }
    break;

  case 792:

/* Line 1806 of yacc.c  */
#line 6106 "parser.y"
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

  case 794:

/* Line 1806 of yacc.c  */
#line 6123 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), current_statement->attr_ptr);
  }
    break;

  case 795:

/* Line 1806 of yacc.c  */
#line 6128 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 0);
  }
    break;

  case 796:

/* Line 1806 of yacc.c  */
#line 6132 "parser.y"
    {
	cb_emit_accept_line_or_col ((yyvsp[(1) - (3)]), 1);
  }
    break;

  case 797:

/* Line 1806 of yacc.c  */
#line 6136 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date_yyyymmdd ((yyvsp[(1) - (4)]));
  }
    break;

  case 798:

/* Line 1806 of yacc.c  */
#line 6141 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_date ((yyvsp[(1) - (3)]));
  }
    break;

  case 799:

/* Line 1806 of yacc.c  */
#line 6146 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day_yyyyddd ((yyvsp[(1) - (4)]));
  }
    break;

  case 800:

/* Line 1806 of yacc.c  */
#line 6151 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_day ((yyvsp[(1) - (3)]));
  }
    break;

  case 801:

/* Line 1806 of yacc.c  */
#line 6156 "parser.y"
    {
	cb_emit_accept_day_of_week ((yyvsp[(1) - (3)]));
  }
    break;

  case 802:

/* Line 1806 of yacc.c  */
#line 6160 "parser.y"
    {
	cb_emit_accept_escape_key ((yyvsp[(1) - (4)]));
  }
    break;

  case 803:

/* Line 1806 of yacc.c  */
#line 6164 "parser.y"
    {
	cb_emit_accept_exception_status ((yyvsp[(1) - (4)]));
  }
    break;

  case 804:

/* Line 1806 of yacc.c  */
#line 6168 "parser.y"
    {
	cb_emit_accept_time ((yyvsp[(1) - (3)]));
  }
    break;

  case 805:

/* Line 1806 of yacc.c  */
#line 6172 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_accept_user_name ((yyvsp[(1) - (4)]));
  }
    break;

  case 806:

/* Line 1806 of yacc.c  */
#line 6177 "parser.y"
    {
	cb_emit_accept_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 807:

/* Line 1806 of yacc.c  */
#line 6181 "parser.y"
    {
	cb_emit_accept_environment ((yyvsp[(1) - (4)]));
  }
    break;

  case 808:

/* Line 1806 of yacc.c  */
#line 6185 "parser.y"
    {
	cb_emit_get_environment ((yyvsp[(4) - (5)]), (yyvsp[(1) - (5)]));
  }
    break;

  case 809:

/* Line 1806 of yacc.c  */
#line 6189 "parser.y"
    {
	cb_emit_accept_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 810:

/* Line 1806 of yacc.c  */
#line 6193 "parser.y"
    {
	cb_emit_accept_arg_value ((yyvsp[(1) - (4)]));
  }
    break;

  case 811:

/* Line 1806 of yacc.c  */
#line 6197 "parser.y"
    {
	cb_emit_accept_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 812:

/* Line 1806 of yacc.c  */
#line 6201 "parser.y"
    {
	cb_emit_accept_name ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 814:

/* Line 1806 of yacc.c  */
#line 6209 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 817:

/* Line 1806 of yacc.c  */
#line 6220 "parser.y"
    { (yyval) = NULL; }
    break;

  case 818:

/* Line 1806 of yacc.c  */
#line 6221 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 819:

/* Line 1806 of yacc.c  */
#line 6225 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 820:

/* Line 1806 of yacc.c  */
#line 6226 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); }
    break;

  case 821:

/* Line 1806 of yacc.c  */
#line 6227 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), cb_int0); }
    break;

  case 822:

/* Line 1806 of yacc.c  */
#line 6228 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, (yyvsp[(2) - (2)])); }
    break;

  case 823:

/* Line 1806 of yacc.c  */
#line 6229 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 824:

/* Line 1806 of yacc.c  */
#line 6233 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 825:

/* Line 1806 of yacc.c  */
#line 6237 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 826:

/* Line 1806 of yacc.c  */
#line 6238 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 830:

/* Line 1806 of yacc.c  */
#line 6247 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 835:

/* Line 1806 of yacc.c  */
#line 6263 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_AUTO);
  }
    break;

  case 836:

/* Line 1806 of yacc.c  */
#line 6267 "parser.y"
    {
	if (cb_accept_auto) {
		remove_attrib (COB_SCREEN_AUTO);
	}
  }
    break;

  case 837:

/* Line 1806 of yacc.c  */
#line 6273 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 838:

/* Line 1806 of yacc.c  */
#line 6277 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 839:

/* Line 1806 of yacc.c  */
#line 6281 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 840:

/* Line 1806 of yacc.c  */
#line 6285 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_FULL);
  }
    break;

  case 841:

/* Line 1806 of yacc.c  */
#line 6289 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 842:

/* Line 1806 of yacc.c  */
#line 6293 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LEFTLINE);
  }
    break;

  case 843:

/* Line 1806 of yacc.c  */
#line 6297 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWER);
  }
    break;

  case 844:

/* Line 1806 of yacc.c  */
#line 6301 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 845:

/* Line 1806 of yacc.c  */
#line 6305 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_NO_ECHO);
  }
    break;

  case 846:

/* Line 1806 of yacc.c  */
#line 6309 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 847:

/* Line 1806 of yacc.c  */
#line 6313 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, (yyvsp[(4) - (4)]), COB_SCREEN_PROMPT);
  }
    break;

  case 848:

/* Line 1806 of yacc.c  */
#line 6317 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_PROMPT);
  }
    break;

  case 849:

/* Line 1806 of yacc.c  */
#line 6321 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REQUIRED);
  }
    break;

  case 850:

/* Line 1806 of yacc.c  */
#line 6325 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 851:

/* Line 1806 of yacc.c  */
#line 6329 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_SECURE);
  }
    break;

  case 852:

/* Line 1806 of yacc.c  */
#line 6333 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 853:

/* Line 1806 of yacc.c  */
#line 6337 "parser.y"
    {
	if (cb_accept_update) {
		remove_attrib (COB_SCREEN_UPDATE);
	}
  }
    break;

  case 854:

/* Line 1806 of yacc.c  */
#line 6343 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPDATE);
  }
    break;

  case 855:

/* Line 1806 of yacc.c  */
#line 6347 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UPPER);
  }
    break;

  case 856:

/* Line 1806 of yacc.c  */
#line 6351 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 857:

/* Line 1806 of yacc.c  */
#line 6355 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 858:

/* Line 1806 of yacc.c  */
#line 6359 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 859:

/* Line 1806 of yacc.c  */
#line 6363 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 860:

/* Line 1806 of yacc.c  */
#line 6367 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, (yyvsp[(3) - (3)]), NULL, 0);
  }
    break;

  case 863:

/* Line 1806 of yacc.c  */
#line 6379 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ACCEPT);
  }
    break;

  case 864:

/* Line 1806 of yacc.c  */
#line 6383 "parser.y"
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

  case 865:

/* Line 1806 of yacc.c  */
#line 6400 "parser.y"
    {
	begin_statement ("ADD", TERM_ADD);
  }
    break;

  case 867:

/* Line 1806 of yacc.c  */
#line 6409 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '+', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 868:

/* Line 1806 of yacc.c  */
#line 6413 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(4) - (5)]), 0, cb_build_binary_list ((yyvsp[(1) - (5)]), '+'));
  }
    break;

  case 869:

/* Line 1806 of yacc.c  */
#line 6417 "parser.y"
    {
	cb_emit_corresponding (cb_build_add, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 871:

/* Line 1806 of yacc.c  */
#line 6424 "parser.y"
    {
	cb_list_add ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 872:

/* Line 1806 of yacc.c  */
#line 6431 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), ADD);
  }
    break;

  case 873:

/* Line 1806 of yacc.c  */
#line 6435 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), ADD);
  }
    break;

  case 874:

/* Line 1806 of yacc.c  */
#line 6445 "parser.y"
    {
	begin_statement ("ALLOCATE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 876:

/* Line 1806 of yacc.c  */
#line 6454 "parser.y"
    {
	cb_emit_allocate ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), NULL, (yyvsp[(2) - (3)]));
  }
    break;

  case 877:

/* Line 1806 of yacc.c  */
#line 6458 "parser.y"
    {
	if ((yyvsp[(4) - (4)]) == NULL) {
		cb_error_x (CB_TREE (current_statement),
			    _("ALLOCATE CHARACTERS requires RETURNING clause"));
	} else {
		cb_emit_allocate (NULL, (yyvsp[(4) - (4)]), (yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 878:

/* Line 1806 of yacc.c  */
#line 6469 "parser.y"
    { (yyval) = NULL; }
    break;

  case 879:

/* Line 1806 of yacc.c  */
#line 6470 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 880:

/* Line 1806 of yacc.c  */
#line 6478 "parser.y"
    {
	begin_statement ("ALTER", 0);
	cb_verify (cb_alter_statement, "ALTER statement");
  }
    break;

  case 884:

/* Line 1806 of yacc.c  */
#line 6492 "parser.y"
    {
	cb_emit_alter ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 887:

/* Line 1806 of yacc.c  */
#line 6504 "parser.y"
    {
	begin_statement ("CALL", TERM_CALL);
	cobc_cs_check = CB_CS_CALL;
  }
    break;

  case 889:

/* Line 1806 of yacc.c  */
#line 6519 "parser.y"
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

  case 890:

/* Line 1806 of yacc.c  */
#line 6533 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 891:

/* Line 1806 of yacc.c  */
#line 6538 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STATIC_LINK);
	cobc_cs_check = 0;
  }
    break;

  case 892:

/* Line 1806 of yacc.c  */
#line 6543 "parser.y"
    {
	(yyval) = cb_int (CB_CONV_STDCALL);
	cobc_cs_check = 0;
  }
    break;

  case 893:

/* Line 1806 of yacc.c  */
#line 6548 "parser.y"
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

  case 894:

/* Line 1806 of yacc.c  */
#line 6568 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 895:

/* Line 1806 of yacc.c  */
#line 6572 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
	size_mode = CB_SIZE_4;
  }
    break;

  case 896:

/* Line 1806 of yacc.c  */
#line 6577 "parser.y"
    {
	if (cb_list_length ((yyvsp[(3) - (3)])) > COB_MAX_FIELD_PARAMS) {
		cb_error_x (CB_TREE (current_statement),
			    _("Number of parameters exceeds maximum %d"),
			    COB_MAX_FIELD_PARAMS);
	}
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 897:

/* Line 1806 of yacc.c  */
#line 6588 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 898:

/* Line 1806 of yacc.c  */
#line 6590 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 899:

/* Line 1806 of yacc.c  */
#line 6595 "parser.y"
    {
	if (call_mode != CB_CALL_BY_REFERENCE) {
		cb_error_x (CB_TREE (current_statement),
			    _("OMITTED only allowed with BY REFERENCE"));
	}
	(yyval) = CB_BUILD_PAIR (cb_int (call_mode), cb_null);
  }
    break;

  case 900:

/* Line 1806 of yacc.c  */
#line 6603 "parser.y"
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

  case 902:

/* Line 1806 of yacc.c  */
#line 6629 "parser.y"
    {
	call_mode = CB_CALL_BY_REFERENCE;
  }
    break;

  case 903:

/* Line 1806 of yacc.c  */
#line 6633 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY CONTENT");
	} else {
		call_mode = CB_CALL_BY_CONTENT;
	}
  }
    break;

  case 904:

/* Line 1806 of yacc.c  */
#line 6642 "parser.y"
    {
	if (current_program->flag_chained) {
		cb_error_x (CB_TREE (current_statement),
			    _("%s not allowed in CHAINED programs"), "BY VALUE");
	} else {
		call_mode = CB_CALL_BY_VALUE;
	}
  }
    break;

  case 905:

/* Line 1806 of yacc.c  */
#line 6654 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 906:

/* Line 1806 of yacc.c  */
#line 6658 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 907:

/* Line 1806 of yacc.c  */
#line 6662 "parser.y"
    {
	(yyval) = cb_null;
  }
    break;

  case 908:

/* Line 1806 of yacc.c  */
#line 6666 "parser.y"
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

  case 913:

/* Line 1806 of yacc.c  */
#line 6699 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 914:

/* Line 1806 of yacc.c  */
#line 6704 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 915:

/* Line 1806 of yacc.c  */
#line 6711 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 916:

/* Line 1806 of yacc.c  */
#line 6716 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 917:

/* Line 1806 of yacc.c  */
#line 6723 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), CALL);
  }
    break;

  case 918:

/* Line 1806 of yacc.c  */
#line 6727 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), CALL);
  }
    break;

  case 919:

/* Line 1806 of yacc.c  */
#line 6737 "parser.y"
    {
	begin_statement ("CANCEL", 0);
  }
    break;

  case 921:

/* Line 1806 of yacc.c  */
#line 6745 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(1) - (1)]));
  }
    break;

  case 922:

/* Line 1806 of yacc.c  */
#line 6749 "parser.y"
    {
	cb_emit_cancel ((yyvsp[(2) - (2)]));
  }
    break;

  case 923:

/* Line 1806 of yacc.c  */
#line 6759 "parser.y"
    {
	begin_statement ("CLOSE", 0);
  }
    break;

  case 925:

/* Line 1806 of yacc.c  */
#line 6767 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 926:

/* Line 1806 of yacc.c  */
#line 6772 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_close ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 927:

/* Line 1806 of yacc.c  */
#line 6779 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NORMAL); }
    break;

  case 928:

/* Line 1806 of yacc.c  */
#line 6780 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT); }
    break;

  case 929:

/* Line 1806 of yacc.c  */
#line 6781 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_UNIT_REMOVAL); }
    break;

  case 930:

/* Line 1806 of yacc.c  */
#line 6782 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_NO_REWIND); }
    break;

  case 931:

/* Line 1806 of yacc.c  */
#line 6783 "parser.y"
    { (yyval) = cb_int (COB_CLOSE_LOCK); }
    break;

  case 932:

/* Line 1806 of yacc.c  */
#line 6791 "parser.y"
    {
	begin_statement ("COMPUTE", TERM_COMPUTE);
  }
    break;

  case 934:

/* Line 1806 of yacc.c  */
#line 6800 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(1) - (4)]), 0, (yyvsp[(3) - (4)]));
  }
    break;

  case 935:

/* Line 1806 of yacc.c  */
#line 6807 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), COMPUTE);
  }
    break;

  case 936:

/* Line 1806 of yacc.c  */
#line 6811 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), COMPUTE);
  }
    break;

  case 937:

/* Line 1806 of yacc.c  */
#line 6821 "parser.y"
    {
	begin_statement ("COMMIT", 0);
	cb_emit_commit ();
  }
    break;

  case 938:

/* Line 1806 of yacc.c  */
#line 6832 "parser.y"
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

  case 939:

/* Line 1806 of yacc.c  */
#line 6849 "parser.y"
    {
	begin_statement ("DELETE", TERM_DELETE);
  }
    break;

  case 941:

/* Line 1806 of yacc.c  */
#line 6858 "parser.y"
    {
	cb_emit_delete ((yyvsp[(1) - (3)]));
  }
    break;

  case 943:

/* Line 1806 of yacc.c  */
#line 6866 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(1) - (1)]));
  }
    break;

  case 944:

/* Line 1806 of yacc.c  */
#line 6871 "parser.y"
    {
	begin_implicit_statement ();
	cb_emit_delete_file ((yyvsp[(2) - (2)]));
  }
    break;

  case 945:

/* Line 1806 of yacc.c  */
#line 6879 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DELETE);
  }
    break;

  case 946:

/* Line 1806 of yacc.c  */
#line 6883 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DELETE);
  }
    break;

  case 947:

/* Line 1806 of yacc.c  */
#line 6893 "parser.y"
    {
	begin_statement ("DISPLAY", TERM_DISPLAY);
	cobc_cs_check = CB_CS_DISPLAY;
  }
    break;

  case 949:

/* Line 1806 of yacc.c  */
#line 6903 "parser.y"
    {
	cb_emit_env_name ((yyvsp[(1) - (3)]));
  }
    break;

  case 950:

/* Line 1806 of yacc.c  */
#line 6907 "parser.y"
    {
	cb_emit_env_value ((yyvsp[(1) - (3)]));
  }
    break;

  case 951:

/* Line 1806 of yacc.c  */
#line 6911 "parser.y"
    {
	cb_emit_arg_number ((yyvsp[(1) - (3)]));
  }
    break;

  case 952:

/* Line 1806 of yacc.c  */
#line 6915 "parser.y"
    {
	cb_emit_command_line ((yyvsp[(1) - (3)]));
  }
    break;

  case 953:

/* Line 1806 of yacc.c  */
#line 6919 "parser.y"
    {
	cb_emit_display ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), NULL, NULL);
  }
    break;

  case 955:

/* Line 1806 of yacc.c  */
#line 6924 "parser.y"
    {
	cobc_cs_check = 0;
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (4)])), cb_null, cb_int1,
			 NULL, current_statement->attr_ptr);
  }
    break;

  case 957:

/* Line 1806 of yacc.c  */
#line 6934 "parser.y"
    {
	begin_implicit_statement ();
  }
    break;

  case 959:

/* Line 1806 of yacc.c  */
#line 6942 "parser.y"
    {
	cb_emit_display (CB_LIST_INIT ((yyvsp[(1) - (5)])), cb_null, cb_int1,
			 (yyvsp[(2) - (5)]), current_statement->attr_ptr);
  }
    break;

  case 960:

/* Line 1806 of yacc.c  */
#line 6950 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 961:

/* Line 1806 of yacc.c  */
#line 6958 "parser.y"
    {
	(yyval) = cb_build_display_mnemonic ((yyvsp[(2) - (2)]));
  }
    break;

  case 962:

/* Line 1806 of yacc.c  */
#line 6962 "parser.y"
    {
	(yyval) = cb_build_display_name ((yyvsp[(2) - (2)]));
  }
    break;

  case 963:

/* Line 1806 of yacc.c  */
#line 6966 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 964:

/* Line 1806 of yacc.c  */
#line 6970 "parser.y"
    {
	if (current_program->flag_console_is_crt) {
		(yyval) = cb_null;
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 970:

/* Line 1806 of yacc.c  */
#line 6992 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 971:

/* Line 1806 of yacc.c  */
#line 6998 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 972:

/* Line 1806 of yacc.c  */
#line 6999 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 975:

/* Line 1806 of yacc.c  */
#line 7010 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BELL);
  }
    break;

  case 976:

/* Line 1806 of yacc.c  */
#line 7014 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_LINE);
  }
    break;

  case 977:

/* Line 1806 of yacc.c  */
#line 7018 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLANK_SCREEN);
  }
    break;

  case 978:

/* Line 1806 of yacc.c  */
#line 7022 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_BLINK);
  }
    break;

  case 979:

/* Line 1806 of yacc.c  */
#line 7026 "parser.y"
    {
	cb_warning (_("Ignoring CONVERSION"));
  }
    break;

  case 980:

/* Line 1806 of yacc.c  */
#line 7030 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOL);
  }
    break;

  case 981:

/* Line 1806 of yacc.c  */
#line 7034 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_ERASE_EOS);
  }
    break;

  case 982:

/* Line 1806 of yacc.c  */
#line 7038 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 983:

/* Line 1806 of yacc.c  */
#line 7042 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_LOWLIGHT);
  }
    break;

  case 984:

/* Line 1806 of yacc.c  */
#line 7046 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_OVERLINE);
  }
    break;

  case 985:

/* Line 1806 of yacc.c  */
#line 7050 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_REVERSE);
  }
    break;

  case 986:

/* Line 1806 of yacc.c  */
#line 7054 "parser.y"
    {
	check_attribs (NULL, NULL, NULL, NULL, NULL, COB_SCREEN_UNDERLINE);
  }
    break;

  case 987:

/* Line 1806 of yacc.c  */
#line 7058 "parser.y"
    {
	check_attribs ((yyvsp[(3) - (3)]), NULL, NULL, NULL, NULL, 0);
  }
    break;

  case 988:

/* Line 1806 of yacc.c  */
#line 7062 "parser.y"
    {
	check_attribs (NULL, (yyvsp[(3) - (3)]), NULL, NULL, NULL, 0);
  }
    break;

  case 989:

/* Line 1806 of yacc.c  */
#line 7066 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, 0);
  }
    break;

  case 990:

/* Line 1806 of yacc.c  */
#line 7070 "parser.y"
    {
	check_attribs (NULL, NULL, (yyvsp[(3) - (3)]), NULL, NULL, COB_SCREEN_SCROLL_DOWN);
  }
    break;

  case 991:

/* Line 1806 of yacc.c  */
#line 7077 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DISPLAY);
  }
    break;

  case 992:

/* Line 1806 of yacc.c  */
#line 7081 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DISPLAY);
  }
    break;

  case 993:

/* Line 1806 of yacc.c  */
#line 7091 "parser.y"
    {
	begin_statement ("DIVIDE", TERM_DIVIDE);
  }
    break;

  case 995:

/* Line 1806 of yacc.c  */
#line 7100 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '/', (yyvsp[(1) - (4)]));
  }
    break;

  case 996:

/* Line 1806 of yacc.c  */
#line 7104 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(3) - (6)]), '/', (yyvsp[(1) - (6)])));
  }
    break;

  case 997:

/* Line 1806 of yacc.c  */
#line 7108 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '/', (yyvsp[(3) - (6)])));
  }
    break;

  case 998:

/* Line 1806 of yacc.c  */
#line 7112 "parser.y"
    {
	cb_emit_divide ((yyvsp[(3) - (8)]), (yyvsp[(1) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 999:

/* Line 1806 of yacc.c  */
#line 7116 "parser.y"
    {
	cb_emit_divide ((yyvsp[(1) - (8)]), (yyvsp[(3) - (8)]), (yyvsp[(5) - (8)]), (yyvsp[(7) - (8)]));
  }
    break;

  case 1000:

/* Line 1806 of yacc.c  */
#line 7123 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), DIVIDE);
  }
    break;

  case 1001:

/* Line 1806 of yacc.c  */
#line 7127 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), DIVIDE);
  }
    break;

  case 1002:

/* Line 1806 of yacc.c  */
#line 7137 "parser.y"
    {
	check_unreached = 0;
	begin_statement ("ENTRY", 0);
  }
    break;

  case 1004:

/* Line 1806 of yacc.c  */
#line 7146 "parser.y"
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

  case 1005:

/* Line 1806 of yacc.c  */
#line 7164 "parser.y"
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

  case 1007:

/* Line 1806 of yacc.c  */
#line 7188 "parser.y"
    {
	cb_emit_evaluate ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
	eval_level--;
  }
    break;

  case 1008:

/* Line 1806 of yacc.c  */
#line 7195 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1009:

/* Line 1806 of yacc.c  */
#line 7197 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1010:

/* Line 1806 of yacc.c  */
#line 7202 "parser.y"
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

  case 1011:

/* Line 1806 of yacc.c  */
#line 7213 "parser.y"
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

  case 1012:

/* Line 1806 of yacc.c  */
#line 7224 "parser.y"
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

  case 1013:

/* Line 1806 of yacc.c  */
#line 7238 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1014:

/* Line 1806 of yacc.c  */
#line 7242 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1015:

/* Line 1806 of yacc.c  */
#line 7248 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1016:

/* Line 1806 of yacc.c  */
#line 7250 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1017:

/* Line 1806 of yacc.c  */
#line 7256 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1018:

/* Line 1806 of yacc.c  */
#line 7265 "parser.y"
    {
	(yyval) = CB_BUILD_CHAIN ((yyvsp[(3) - (3)]), NULL);
	eval_inc2 = 0;
  }
    break;

  case 1019:

/* Line 1806 of yacc.c  */
#line 7273 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)]));
	eval_inc2 = 0;
  }
    break;

  case 1020:

/* Line 1806 of yacc.c  */
#line 7279 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
	eval_inc2 = 0;
  }
    break;

  case 1021:

/* Line 1806 of yacc.c  */
#line 7286 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1022:

/* Line 1806 of yacc.c  */
#line 7288 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1023:

/* Line 1806 of yacc.c  */
#line 7293 "parser.y"
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

  case 1024:

/* Line 1806 of yacc.c  */
#line 7354 "parser.y"
    { (yyval) = cb_any; eval_inc2++; }
    break;

  case 1025:

/* Line 1806 of yacc.c  */
#line 7355 "parser.y"
    { (yyval) = cb_true; eval_inc2++; }
    break;

  case 1026:

/* Line 1806 of yacc.c  */
#line 7356 "parser.y"
    { (yyval) = cb_false; eval_inc2++; }
    break;

  case 1027:

/* Line 1806 of yacc.c  */
#line 7360 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1028:

/* Line 1806 of yacc.c  */
#line 7361 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1029:

/* Line 1806 of yacc.c  */
#line 7366 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), EVALUATE);
  }
    break;

  case 1030:

/* Line 1806 of yacc.c  */
#line 7370 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), EVALUATE);
  }
    break;

  case 1031:

/* Line 1806 of yacc.c  */
#line 7380 "parser.y"
    {
	begin_statement ("EXIT", 0);
	cobc_cs_check = CB_CS_EXIT;
  }
    break;

  case 1032:

/* Line 1806 of yacc.c  */
#line 7385 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1034:

/* Line 1806 of yacc.c  */
#line 7393 "parser.y"
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

  case 1035:

/* Line 1806 of yacc.c  */
#line 7414 "parser.y"
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

  case 1036:

/* Line 1806 of yacc.c  */
#line 7428 "parser.y"
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

  case 1037:

/* Line 1806 of yacc.c  */
#line 7450 "parser.y"
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

  case 1038:

/* Line 1806 of yacc.c  */
#line 7472 "parser.y"
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

  case 1039:

/* Line 1806 of yacc.c  */
#line 7492 "parser.y"
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

  case 1040:

/* Line 1806 of yacc.c  */
#line 7514 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1041:

/* Line 1806 of yacc.c  */
#line 7515 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1042:

/* Line 1806 of yacc.c  */
#line 7523 "parser.y"
    {
	begin_statement ("FREE", 0);
	current_statement->flag_no_based = 1;
  }
    break;

  case 1044:

/* Line 1806 of yacc.c  */
#line 7532 "parser.y"
    {
	cb_emit_free ((yyvsp[(1) - (1)]));
  }
    break;

  case 1045:

/* Line 1806 of yacc.c  */
#line 7542 "parser.y"
    {
	begin_statement ("GENERATE", 0);
  }
    break;

  case 1047:

/* Line 1806 of yacc.c  */
#line 7551 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
		cb_emit_generate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1048:

/* Line 1806 of yacc.c  */
#line 7563 "parser.y"
    {
	if (!current_paragraph->flag_statement) {
		current_paragraph->flag_first_is_goto = 1;
	}
	begin_statement ("GO TO", 0);
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1050:

/* Line 1806 of yacc.c  */
#line 7576 "parser.y"
    {
	cb_emit_goto ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
	start_debug = save_debug;
  }
    break;

  case 1051:

/* Line 1806 of yacc.c  */
#line 7584 "parser.y"
    {
	check_unreached = 1;
	(yyval) = NULL;
  }
    break;

  case 1052:

/* Line 1806 of yacc.c  */
#line 7589 "parser.y"
    {
	check_unreached = 0;
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1053:

/* Line 1806 of yacc.c  */
#line 7600 "parser.y"
    {
	begin_statement ("GOBACK", 0);
	check_unreached = 1;
	if ((yyvsp[(2) - (2)]) != NULL) {
		cb_emit_move ((yyvsp[(2) - (2)]), CB_LIST_INIT (current_program->cb_return_code));
	}
	cb_emit_exit (1U);
  }
    break;

  case 1054:

/* Line 1806 of yacc.c  */
#line 7615 "parser.y"
    {
	begin_statement ("IF", TERM_IF);
  }
    break;

  case 1056:

/* Line 1806 of yacc.c  */
#line 7624 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1057:

/* Line 1806 of yacc.c  */
#line 7628 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (2)]), NULL, (yyvsp[(2) - (2)]));
  }
    break;

  case 1058:

/* Line 1806 of yacc.c  */
#line 7632 "parser.y"
    {
	cb_emit_if ((yyvsp[(-1) - (1)]), (yyvsp[(1) - (1)]), NULL);
  }
    break;

  case 1059:

/* Line 1806 of yacc.c  */
#line 7639 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), IF);
  }
    break;

  case 1060:

/* Line 1806 of yacc.c  */
#line 7643 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), IF);
  }
    break;

  case 1061:

/* Line 1806 of yacc.c  */
#line 7653 "parser.y"
    {
	begin_statement ("INITIALIZE", 0);
  }
    break;

  case 1063:

/* Line 1806 of yacc.c  */
#line 7662 "parser.y"
    {
	cb_emit_initialize ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
  }
    break;

  case 1064:

/* Line 1806 of yacc.c  */
#line 7668 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1065:

/* Line 1806 of yacc.c  */
#line 7669 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1066:

/* Line 1806 of yacc.c  */
#line 7673 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1067:

/* Line 1806 of yacc.c  */
#line 7674 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1068:

/* Line 1806 of yacc.c  */
#line 7675 "parser.y"
    { (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 1069:

/* Line 1806 of yacc.c  */
#line 7680 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1070:

/* Line 1806 of yacc.c  */
#line 7684 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1071:

/* Line 1806 of yacc.c  */
#line 7691 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1072:

/* Line 1806 of yacc.c  */
#line 7696 "parser.y"
    {
	(yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1073:

/* Line 1806 of yacc.c  */
#line 7703 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1074:

/* Line 1806 of yacc.c  */
#line 7709 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHABETIC); }
    break;

  case 1075:

/* Line 1806 of yacc.c  */
#line 7710 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC); }
    break;

  case 1076:

/* Line 1806 of yacc.c  */
#line 7711 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC); }
    break;

  case 1077:

/* Line 1806 of yacc.c  */
#line 7712 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_ALPHANUMERIC_EDITED); }
    break;

  case 1078:

/* Line 1806 of yacc.c  */
#line 7713 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NUMERIC_EDITED); }
    break;

  case 1079:

/* Line 1806 of yacc.c  */
#line 7714 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL); }
    break;

  case 1080:

/* Line 1806 of yacc.c  */
#line 7715 "parser.y"
    { (yyval) = cb_int (CB_CATEGORY_NATIONAL_EDITED); }
    break;

  case 1081:

/* Line 1806 of yacc.c  */
#line 7720 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1082:

/* Line 1806 of yacc.c  */
#line 7724 "parser.y"
    {
	(yyval) = cb_true;
  }
    break;

  case 1083:

/* Line 1806 of yacc.c  */
#line 7733 "parser.y"
    {
	begin_statement ("INITIATE", 0);
  }
    break;

  case 1085:

/* Line 1806 of yacc.c  */
#line 7741 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1086:

/* Line 1806 of yacc.c  */
#line 7748 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
	    cb_emit_initiate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1087:

/* Line 1806 of yacc.c  */
#line 7760 "parser.y"
    {
	begin_statement ("INSPECT", 0);
	inspect_keyword = 0;
  }
    break;

  case 1090:

/* Line 1806 of yacc.c  */
#line 7773 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1091:

/* Line 1806 of yacc.c  */
#line 7777 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1092:

/* Line 1806 of yacc.c  */
#line 7781 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1097:

/* Line 1806 of yacc.c  */
#line 7797 "parser.y"
    {
	cb_init_tallying ();
  }
    break;

  case 1098:

/* Line 1806 of yacc.c  */
#line 7801 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (3)]), (yyvsp[(3) - (3)]), cb_int0, 0);
	(yyval) = (yyvsp[(0) - (3)]);
  }
    break;

  case 1099:

/* Line 1806 of yacc.c  */
#line 7811 "parser.y"
    {
	cb_emit_inspect ((yyvsp[(0) - (2)]), (yyvsp[(2) - (2)]), cb_int1, 1);
	inspect_keyword = 0;
  }
    break;

  case 1100:

/* Line 1806 of yacc.c  */
#line 7821 "parser.y"
    {
	cb_tree		x;
	x = cb_build_converting ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]), (yyvsp[(5) - (5)]));
	cb_emit_inspect ((yyvsp[(0) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1101:

/* Line 1806 of yacc.c  */
#line 7829 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1102:

/* Line 1806 of yacc.c  */
#line 7830 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1103:

/* Line 1806 of yacc.c  */
#line 7834 "parser.y"
    { (yyval) = cb_build_tallying_data ((yyvsp[(1) - (2)])); }
    break;

  case 1104:

/* Line 1806 of yacc.c  */
#line 7835 "parser.y"
    { (yyval) = cb_build_tallying_characters ((yyvsp[(2) - (2)])); }
    break;

  case 1105:

/* Line 1806 of yacc.c  */
#line 7836 "parser.y"
    { (yyval) = cb_build_tallying_all (); }
    break;

  case 1106:

/* Line 1806 of yacc.c  */
#line 7837 "parser.y"
    { (yyval) = cb_build_tallying_leading (); }
    break;

  case 1107:

/* Line 1806 of yacc.c  */
#line 7838 "parser.y"
    { (yyval) = cb_build_tallying_trailing (); }
    break;

  case 1108:

/* Line 1806 of yacc.c  */
#line 7839 "parser.y"
    { (yyval) = cb_build_tallying_value ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1109:

/* Line 1806 of yacc.c  */
#line 7843 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1110:

/* Line 1806 of yacc.c  */
#line 7844 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1111:

/* Line 1806 of yacc.c  */
#line 7849 "parser.y"
    {
	(yyval) = cb_build_replacing_characters ((yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
	inspect_keyword = 0;
  }
    break;

  case 1112:

/* Line 1806 of yacc.c  */
#line 7854 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1113:

/* Line 1806 of yacc.c  */
#line 7860 "parser.y"
    { /* Nothing */ }
    break;

  case 1114:

/* Line 1806 of yacc.c  */
#line 7861 "parser.y"
    { inspect_keyword = 1; }
    break;

  case 1115:

/* Line 1806 of yacc.c  */
#line 7862 "parser.y"
    { inspect_keyword = 2; }
    break;

  case 1116:

/* Line 1806 of yacc.c  */
#line 7863 "parser.y"
    { inspect_keyword = 3; }
    break;

  case 1117:

/* Line 1806 of yacc.c  */
#line 7864 "parser.y"
    { inspect_keyword = 4; }
    break;

  case 1118:

/* Line 1806 of yacc.c  */
#line 7869 "parser.y"
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

  case 1119:

/* Line 1806 of yacc.c  */
#line 7896 "parser.y"
    {
	(yyval) = cb_build_inspect_region_start ();
  }
    break;

  case 1120:

/* Line 1806 of yacc.c  */
#line 7900 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1121:

/* Line 1806 of yacc.c  */
#line 7907 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_before", (yyvsp[(3) - (3)])));
  }
    break;

  case 1122:

/* Line 1806 of yacc.c  */
#line 7911 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(0) - (3)]), CB_BUILD_FUNCALL_1 ("cob_inspect_after", (yyvsp[(3) - (3)])));
  }
    break;

  case 1123:

/* Line 1806 of yacc.c  */
#line 7920 "parser.y"
    {
	begin_statement ("MERGE", 0);
	current_statement->flag_merge = 1;
  }
    break;

  case 1125:

/* Line 1806 of yacc.c  */
#line 7932 "parser.y"
    {
	begin_statement ("MOVE", 0);
  }
    break;

  case 1127:

/* Line 1806 of yacc.c  */
#line 7940 "parser.y"
    {
	cb_emit_move ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1128:

/* Line 1806 of yacc.c  */
#line 7944 "parser.y"
    {
	cb_emit_move_corresponding ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1129:

/* Line 1806 of yacc.c  */
#line 7954 "parser.y"
    {
	begin_statement ("MULTIPLY", TERM_MULTIPLY);
  }
    break;

  case 1131:

/* Line 1806 of yacc.c  */
#line 7963 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '*', (yyvsp[(1) - (4)]));
  }
    break;

  case 1132:

/* Line 1806 of yacc.c  */
#line 7967 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_op ((yyvsp[(1) - (6)]), '*', (yyvsp[(3) - (6)])));
  }
    break;

  case 1133:

/* Line 1806 of yacc.c  */
#line 7974 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), MULTIPLY);
  }
    break;

  case 1134:

/* Line 1806 of yacc.c  */
#line 7978 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), MULTIPLY);
  }
    break;

  case 1135:

/* Line 1806 of yacc.c  */
#line 7988 "parser.y"
    {
	begin_statement ("OPEN", 0);
  }
    break;

  case 1137:

/* Line 1806 of yacc.c  */
#line 7996 "parser.y"
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

  case 1138:

/* Line 1806 of yacc.c  */
#line 8017 "parser.y"
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

  case 1139:

/* Line 1806 of yacc.c  */
#line 8040 "parser.y"
    { (yyval) = cb_int (COB_OPEN_INPUT); }
    break;

  case 1140:

/* Line 1806 of yacc.c  */
#line 8041 "parser.y"
    { (yyval) = cb_int (COB_OPEN_OUTPUT); }
    break;

  case 1141:

/* Line 1806 of yacc.c  */
#line 8042 "parser.y"
    { (yyval) = cb_int (COB_OPEN_I_O); }
    break;

  case 1142:

/* Line 1806 of yacc.c  */
#line 8043 "parser.y"
    { (yyval) = cb_int (COB_OPEN_EXTEND); }
    break;

  case 1143:

/* Line 1806 of yacc.c  */
#line 8047 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1144:

/* Line 1806 of yacc.c  */
#line 8048 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1145:

/* Line 1806 of yacc.c  */
#line 8052 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1146:

/* Line 1806 of yacc.c  */
#line 8053 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1147:

/* Line 1806 of yacc.c  */
#line 8054 "parser.y"
    { (yyval) = cb_int (COB_LOCK_OPEN_EXCLUSIVE); }
    break;

  case 1148:

/* Line 1806 of yacc.c  */
#line 8056 "parser.y"
    {
	(void)cb_verify (CB_OBSOLETE, "REVERSED");
	(yyval) = NULL;
  }
    break;

  case 1149:

/* Line 1806 of yacc.c  */
#line 8067 "parser.y"
    {
	begin_statement ("PERFORM", TERM_PERFORM);
	/* Turn off field debug - PERFORM is special */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1151:

/* Line 1806 of yacc.c  */
#line 8078 "parser.y"
    {
	cb_emit_perform ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
	start_debug = save_debug;
  }
    break;

  case 1152:

/* Line 1806 of yacc.c  */
#line 8083 "parser.y"
    {
	CB_ADD_TO_CHAIN ((yyvsp[(1) - (1)]), perform_stack);
	/* Restore field debug before inline statements */
	start_debug = save_debug;
  }
    break;

  case 1153:

/* Line 1806 of yacc.c  */
#line 8089 "parser.y"
    {
	perform_stack = CB_CHAIN (perform_stack);
	cb_emit_perform ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1154:

/* Line 1806 of yacc.c  */
#line 8094 "parser.y"
    {
	cb_emit_perform ((yyvsp[(1) - (2)]), NULL);
	start_debug = save_debug;
  }
    break;

  case 1155:

/* Line 1806 of yacc.c  */
#line 8102 "parser.y"
    {
	if (cb_relaxed_syntax_check) {
		TERMINATOR_WARNING ((yyvsp[(-4) - (0)]), PERFORM);
	} else {
		TERMINATOR_ERROR ((yyvsp[(-4) - (0)]), PERFORM);
	}
  }
    break;

  case 1156:

/* Line 1806 of yacc.c  */
#line 8110 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-4) - (1)]), PERFORM);
  }
    break;

  case 1157:

/* Line 1806 of yacc.c  */
#line 8117 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), PERFORM);
  }
    break;

  case 1158:

/* Line 1806 of yacc.c  */
#line 8121 "parser.y"
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

  case 1159:

/* Line 1806 of yacc.c  */
#line 8134 "parser.y"
    {
	/* Return from $1 */
	CB_REFERENCE ((yyvsp[(1) - (1)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (1)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]));
  }
    break;

  case 1160:

/* Line 1806 of yacc.c  */
#line 8141 "parser.y"
    {
	/* Return from $3 */
	CB_REFERENCE ((yyvsp[(3) - (3)]))->length = cb_true;
	CB_REFERENCE ((yyvsp[(1) - (3)]))->flag_decl_ok = 1;
	CB_REFERENCE ((yyvsp[(3) - (3)]))->flag_decl_ok = 1;
	(yyval) = CB_BUILD_PAIR ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1161:

/* Line 1806 of yacc.c  */
#line 8152 "parser.y"
    {
	(yyval) = cb_build_perform_once (NULL);
  }
    break;

  case 1162:

/* Line 1806 of yacc.c  */
#line 8156 "parser.y"
    {
	(yyval) = cb_build_perform_times ((yyvsp[(1) - (2)]));
	current_program->loop_counter++;
  }
    break;

  case 1163:

/* Line 1806 of yacc.c  */
#line 8161 "parser.y"
    {
	(yyval) = cb_build_perform_forever (NULL);
  }
    break;

  case 1164:

/* Line 1806 of yacc.c  */
#line 8165 "parser.y"
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

  case 1165:

/* Line 1806 of yacc.c  */
#line 8176 "parser.y"
    {
	(yyval) = cb_build_perform_until ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1166:

/* Line 1806 of yacc.c  */
#line 8182 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1167:

/* Line 1806 of yacc.c  */
#line 8183 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1168:

/* Line 1806 of yacc.c  */
#line 8187 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1169:

/* Line 1806 of yacc.c  */
#line 8188 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1170:

/* Line 1806 of yacc.c  */
#line 8191 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1171:

/* Line 1806 of yacc.c  */
#line 8193 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1172:

/* Line 1806 of yacc.c  */
#line 8198 "parser.y"
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

  case 1173:

/* Line 1806 of yacc.c  */
#line 8237 "parser.y"
    {
	begin_statement ("READ", TERM_READ);
  }
    break;

  case 1175:

/* Line 1806 of yacc.c  */
#line 8246 "parser.y"
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

  case 1176:

/* Line 1806 of yacc.c  */
#line 8272 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1177:

/* Line 1806 of yacc.c  */
#line 8273 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1178:

/* Line 1806 of yacc.c  */
#line 8278 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1179:

/* Line 1806 of yacc.c  */
#line 8282 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1180:

/* Line 1806 of yacc.c  */
#line 8286 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1181:

/* Line 1806 of yacc.c  */
#line 8290 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1182:

/* Line 1806 of yacc.c  */
#line 8294 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1183:

/* Line 1806 of yacc.c  */
#line 8298 "parser.y"
    {
	(yyval) = cb_int3;
  }
    break;

  case 1184:

/* Line 1806 of yacc.c  */
#line 8302 "parser.y"
    {
	(yyval) = cb_int4;
  }
    break;

  case 1185:

/* Line 1806 of yacc.c  */
#line 8308 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1186:

/* Line 1806 of yacc.c  */
#line 8309 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1189:

/* Line 1806 of yacc.c  */
#line 8319 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), READ);
  }
    break;

  case 1190:

/* Line 1806 of yacc.c  */
#line 8323 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), READ);
  }
    break;

  case 1191:

/* Line 1806 of yacc.c  */
#line 8333 "parser.y"
    {
	begin_statement ("READY TRACE", 0);
	cb_emit_ready_trace ();
  }
    break;

  case 1192:

/* Line 1806 of yacc.c  */
#line 8343 "parser.y"
    {
	begin_statement ("RELEASE", 0);
  }
    break;

  case 1194:

/* Line 1806 of yacc.c  */
#line 8351 "parser.y"
    {
	cb_emit_release ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1195:

/* Line 1806 of yacc.c  */
#line 8361 "parser.y"
    {
	begin_statement ("RESET TRACE", 0);
	cb_emit_reset_trace ();
  }
    break;

  case 1196:

/* Line 1806 of yacc.c  */
#line 8371 "parser.y"
    {
	begin_statement ("RETURN", TERM_RETURN);
  }
    break;

  case 1198:

/* Line 1806 of yacc.c  */
#line 8380 "parser.y"
    {
	cb_emit_return ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1199:

/* Line 1806 of yacc.c  */
#line 8387 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), RETURN);
  }
    break;

  case 1200:

/* Line 1806 of yacc.c  */
#line 8391 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), RETURN);
  }
    break;

  case 1201:

/* Line 1806 of yacc.c  */
#line 8401 "parser.y"
    {
	begin_statement ("REWRITE", TERM_REWRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1203:

/* Line 1806 of yacc.c  */
#line 8413 "parser.y"
    {
	cb_emit_rewrite ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	start_debug = save_debug;
  }
    break;

  case 1204:

/* Line 1806 of yacc.c  */
#line 8421 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1205:

/* Line 1806 of yacc.c  */
#line 8425 "parser.y"
    {
	(yyval) = cb_int1;
  }
    break;

  case 1206:

/* Line 1806 of yacc.c  */
#line 8429 "parser.y"
    {
	(yyval) = cb_int2;
  }
    break;

  case 1207:

/* Line 1806 of yacc.c  */
#line 8436 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), REWRITE);
  }
    break;

  case 1208:

/* Line 1806 of yacc.c  */
#line 8440 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), REWRITE);
  }
    break;

  case 1209:

/* Line 1806 of yacc.c  */
#line 8450 "parser.y"
    {
	begin_statement ("ROLLBACK", 0);
	cb_emit_rollback ();
  }
    break;

  case 1210:

/* Line 1806 of yacc.c  */
#line 8461 "parser.y"
    {
	begin_statement ("SEARCH", TERM_SEARCH);
  }
    break;

  case 1212:

/* Line 1806 of yacc.c  */
#line 8470 "parser.y"
    {
	cb_emit_search ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1213:

/* Line 1806 of yacc.c  */
#line 8475 "parser.y"
    {
	current_statement->name = (const char *)"SEARCH ALL";
	cb_emit_search_all ((yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(5) - (6)]), (yyvsp[(6) - (6)]));
  }
    break;

  case 1214:

/* Line 1806 of yacc.c  */
#line 8482 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1215:

/* Line 1806 of yacc.c  */
#line 8483 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1216:

/* Line 1806 of yacc.c  */
#line 8488 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1217:

/* Line 1806 of yacc.c  */
#line 8493 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1218:

/* Line 1806 of yacc.c  */
#line 8500 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1219:

/* Line 1806 of yacc.c  */
#line 8504 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1220:

/* Line 1806 of yacc.c  */
#line 8512 "parser.y"
    {
	(yyval) = cb_build_if_check_break ((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1221:

/* Line 1806 of yacc.c  */
#line 8519 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SEARCH);
  }
    break;

  case 1222:

/* Line 1806 of yacc.c  */
#line 8523 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SEARCH);
  }
    break;

  case 1223:

/* Line 1806 of yacc.c  */
#line 8533 "parser.y"
    {
	begin_statement ("SET", 0);
	setattr_val_on = 0;
	setattr_val_off = 0;
	cobc_cs_check = CB_CS_SET;
  }
    break;

  case 1224:

/* Line 1806 of yacc.c  */
#line 8540 "parser.y"
    {
	cobc_cs_check = 0;
  }
    break;

  case 1231:

/* Line 1806 of yacc.c  */
#line 8555 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1232:

/* Line 1806 of yacc.c  */
#line 8556 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1233:

/* Line 1806 of yacc.c  */
#line 8560 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1234:

/* Line 1806 of yacc.c  */
#line 8561 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1235:

/* Line 1806 of yacc.c  */
#line 8568 "parser.y"
    {
	cb_emit_setenv ((yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1236:

/* Line 1806 of yacc.c  */
#line 8577 "parser.y"
    {
	cb_emit_set_attribute ((yyvsp[(1) - (3)]), setattr_val_on, setattr_val_off);
  }
    break;

  case 1239:

/* Line 1806 of yacc.c  */
#line 8589 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BELL);
  }
    break;

  case 1240:

/* Line 1806 of yacc.c  */
#line 8593 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_BLINK);
  }
    break;

  case 1241:

/* Line 1806 of yacc.c  */
#line 8597 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_HIGHLIGHT);
  }
    break;

  case 1242:

/* Line 1806 of yacc.c  */
#line 8601 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LOWLIGHT);
  }
    break;

  case 1243:

/* Line 1806 of yacc.c  */
#line 8605 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_REVERSE);
  }
    break;

  case 1244:

/* Line 1806 of yacc.c  */
#line 8609 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_UNDERLINE);
  }
    break;

  case 1245:

/* Line 1806 of yacc.c  */
#line 8613 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_LEFTLINE);
  }
    break;

  case 1246:

/* Line 1806 of yacc.c  */
#line 8617 "parser.y"
    {
	bit_set_attr ((yyvsp[(2) - (2)]), COB_SCREEN_OVERLINE);
  }
    break;

  case 1247:

/* Line 1806 of yacc.c  */
#line 8626 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (4)]), cb_build_ppointer ((yyvsp[(4) - (4)])));
  }
    break;

  case 1248:

/* Line 1806 of yacc.c  */
#line 8630 "parser.y"
    {
	cb_emit_set_to ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1249:

/* Line 1806 of yacc.c  */
#line 8639 "parser.y"
    {
	cb_emit_set_up_down ((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]));
  }
    break;

  case 1252:

/* Line 1806 of yacc.c  */
#line 8653 "parser.y"
    {
	cb_emit_set_on_off ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1255:

/* Line 1806 of yacc.c  */
#line 8667 "parser.y"
    {
	cb_emit_set_true ((yyvsp[(1) - (3)]));
  }
    break;

  case 1256:

/* Line 1806 of yacc.c  */
#line 8671 "parser.y"
    {
	cb_emit_set_false ((yyvsp[(1) - (3)]));
  }
    break;

  case 1257:

/* Line 1806 of yacc.c  */
#line 8681 "parser.y"
    {
	begin_statement ("SORT", 0);
  }
    break;

  case 1259:

/* Line 1806 of yacc.c  */
#line 8689 "parser.y"
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

  case 1260:

/* Line 1806 of yacc.c  */
#line 8710 "parser.y"
    {
	if ((yyvsp[(5) - (7)]) && CB_VALID_TREE ((yyvsp[(1) - (7)]))) {
		cb_emit_sort_finish ((yyvsp[(1) - (7)]));
	}
  }
    break;

  case 1261:

/* Line 1806 of yacc.c  */
#line 8719 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1262:

/* Line 1806 of yacc.c  */
#line 8724 "parser.y"
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

  case 1263:

/* Line 1806 of yacc.c  */
#line 8742 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1264:

/* Line 1806 of yacc.c  */
#line 8743 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1266:

/* Line 1806 of yacc.c  */
#line 8748 "parser.y"
    {
	/* The OC sort is a stable sort. ie. Dups are per default in order */
	/* Therefore nothing to do here */
  }
    break;

  case 1267:

/* Line 1806 of yacc.c  */
#line 8755 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1268:

/* Line 1806 of yacc.c  */
#line 8756 "parser.y"
    { (yyval) = cb_ref ((yyvsp[(3) - (3)])); }
    break;

  case 1269:

/* Line 1806 of yacc.c  */
#line 8761 "parser.y"
    {
	if ((yyvsp[(0) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(0) - (0)])))) {
		cb_error (_("File sort requires USING or INPUT PROCEDURE"));
	}
  }
    break;

  case 1270:

/* Line 1806 of yacc.c  */
#line 8767 "parser.y"
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

  case 1271:

/* Line 1806 of yacc.c  */
#line 8777 "parser.y"
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

  case 1272:

/* Line 1806 of yacc.c  */
#line 8792 "parser.y"
    {
	if ((yyvsp[(-1) - (0)]) && CB_FILE_P (cb_ref ((yyvsp[(-1) - (0)])))) {
		cb_error (_("File sort requires GIVING or OUTPUT PROCEDURE"));
	}
  }
    break;

  case 1273:

/* Line 1806 of yacc.c  */
#line 8798 "parser.y"
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

  case 1274:

/* Line 1806 of yacc.c  */
#line 8808 "parser.y"
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

  case 1275:

/* Line 1806 of yacc.c  */
#line 8824 "parser.y"
    {
	begin_statement ("START", TERM_START);
	start_tree = cb_int (COB_EQ);
  }
    break;

  case 1277:

/* Line 1806 of yacc.c  */
#line 8834 "parser.y"
    {
	if ((yyvsp[(3) - (4)]) && !(yyvsp[(2) - (4)])) {
		cb_error_x (CB_TREE (current_statement),
			    _("SIZE/LENGTH invalid here"));
	} else {
		cb_emit_start ((yyvsp[(1) - (4)]), start_tree, (yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]));
	}
  }
    break;

  case 1278:

/* Line 1806 of yacc.c  */
#line 8846 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1279:

/* Line 1806 of yacc.c  */
#line 8850 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
  }
    break;

  case 1280:

/* Line 1806 of yacc.c  */
#line 8857 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1281:

/* Line 1806 of yacc.c  */
#line 8861 "parser.y"
    {
	start_tree = (yyvsp[(3) - (4)]);
	(yyval) = (yyvsp[(4) - (4)]);
  }
    break;

  case 1282:

/* Line 1806 of yacc.c  */
#line 8866 "parser.y"
    {
	start_tree = cb_int (COB_FI);
	(yyval) = NULL;
  }
    break;

  case 1283:

/* Line 1806 of yacc.c  */
#line 8871 "parser.y"
    {
	start_tree = cb_int (COB_LA);
	(yyval) = NULL;
  }
    break;

  case 1284:

/* Line 1806 of yacc.c  */
#line 8878 "parser.y"
    { (yyval) = cb_int (COB_EQ); }
    break;

  case 1285:

/* Line 1806 of yacc.c  */
#line 8879 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LE : COB_GT); }
    break;

  case 1286:

/* Line 1806 of yacc.c  */
#line 8880 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GE : COB_LT); }
    break;

  case 1287:

/* Line 1806 of yacc.c  */
#line 8881 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_LT : COB_GE); }
    break;

  case 1288:

/* Line 1806 of yacc.c  */
#line 8882 "parser.y"
    { (yyval) = cb_int ((yyvsp[(1) - (2)]) ? COB_GT : COB_LE); }
    break;

  case 1289:

/* Line 1806 of yacc.c  */
#line 8883 "parser.y"
    { (yyval) = cb_int (COB_NE); }
    break;

  case 1290:

/* Line 1806 of yacc.c  */
#line 8888 "parser.y"
    {
	cb_error_x (CB_TREE (current_statement),
		    _("NOT EQUAL condition disallowed on START statement"));
  }
    break;

  case 1293:

/* Line 1806 of yacc.c  */
#line 8901 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), START);
  }
    break;

  case 1294:

/* Line 1806 of yacc.c  */
#line 8905 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), START);
  }
    break;

  case 1295:

/* Line 1806 of yacc.c  */
#line 8915 "parser.y"
    {
	begin_statement ("STOP RUN", 0);
  }
    break;

  case 1296:

/* Line 1806 of yacc.c  */
#line 8919 "parser.y"
    {
	cb_emit_stop_run ((yyvsp[(4) - (4)]));
	check_unreached = 1;
	cobc_cs_check = 0;
  }
    break;

  case 1297:

/* Line 1806 of yacc.c  */
#line 8925 "parser.y"
    {
	begin_statement ("STOP", 0);
	cb_verify (cb_stop_literal_statement, "STOP literal");
	cb_emit_display (CB_LIST_INIT ((yyvsp[(2) - (2)])), cb_int0, cb_int1, NULL,
			 NULL);
	cb_emit_accept (cb_null, NULL, NULL);
	cobc_cs_check = 0;
  }
    break;

  case 1298:

/* Line 1806 of yacc.c  */
#line 8937 "parser.y"
    {
	(yyval) = current_program->cb_return_code;
  }
    break;

  case 1299:

/* Line 1806 of yacc.c  */
#line 8941 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1300:

/* Line 1806 of yacc.c  */
#line 8945 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int1;
	}
  }
    break;

  case 1301:

/* Line 1806 of yacc.c  */
#line 8953 "parser.y"
    {
	if ((yyvsp[(4) - (4)])) {
		(yyval) = (yyvsp[(4) - (4)]);
	} else {
		(yyval) = cb_int0;
	}
  }
    break;

  case 1302:

/* Line 1806 of yacc.c  */
#line 8964 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1303:

/* Line 1806 of yacc.c  */
#line 8968 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1304:

/* Line 1806 of yacc.c  */
#line 8974 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1305:

/* Line 1806 of yacc.c  */
#line 8975 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1306:

/* Line 1806 of yacc.c  */
#line 8976 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1307:

/* Line 1806 of yacc.c  */
#line 8977 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1308:

/* Line 1806 of yacc.c  */
#line 8984 "parser.y"
    {
	begin_statement ("STRING", TERM_STRING);
  }
    break;

  case 1310:

/* Line 1806 of yacc.c  */
#line 8993 "parser.y"
    {
	cb_emit_string ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1311:

/* Line 1806 of yacc.c  */
#line 8999 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1312:

/* Line 1806 of yacc.c  */
#line 9000 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1313:

/* Line 1806 of yacc.c  */
#line 9004 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1314:

/* Line 1806 of yacc.c  */
#line 9005 "parser.y"
    { (yyval) = CB_BUILD_PAIR (cb_int0, NULL); }
    break;

  case 1315:

/* Line 1806 of yacc.c  */
#line 9006 "parser.y"
    { (yyval) = CB_BUILD_PAIR ((yyvsp[(3) - (3)]), NULL); }
    break;

  case 1316:

/* Line 1806 of yacc.c  */
#line 9010 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1317:

/* Line 1806 of yacc.c  */
#line 9011 "parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 1318:

/* Line 1806 of yacc.c  */
#line 9016 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), STRING);
  }
    break;

  case 1319:

/* Line 1806 of yacc.c  */
#line 9020 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), STRING);
  }
    break;

  case 1320:

/* Line 1806 of yacc.c  */
#line 9030 "parser.y"
    {
	begin_statement ("SUBTRACT", TERM_SUBTRACT);
  }
    break;

  case 1322:

/* Line 1806 of yacc.c  */
#line 9039 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(3) - (4)]), '-', cb_build_binary_list ((yyvsp[(1) - (4)]), '+'));
  }
    break;

  case 1323:

/* Line 1806 of yacc.c  */
#line 9043 "parser.y"
    {
	cb_emit_arithmetic ((yyvsp[(5) - (6)]), 0, cb_build_binary_list (CB_BUILD_CHAIN ((yyvsp[(3) - (6)]), (yyvsp[(1) - (6)])), '-'));
  }
    break;

  case 1324:

/* Line 1806 of yacc.c  */
#line 9047 "parser.y"
    {
	cb_emit_corresponding (cb_build_sub, (yyvsp[(4) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1325:

/* Line 1806 of yacc.c  */
#line 9054 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), SUBTRACT);
  }
    break;

  case 1326:

/* Line 1806 of yacc.c  */
#line 9058 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), SUBTRACT);
  }
    break;

  case 1327:

/* Line 1806 of yacc.c  */
#line 9068 "parser.y"
    {
	begin_statement ("SUPPRESS", 0);
	if (!in_declaratives) {
		cb_error_x (CB_TREE (current_statement),
			    _("SUPPRESS statement must be within DECLARATIVES"));
	}
	cb_emit_suppress(control_field);
  }
    break;

  case 1330:

/* Line 1806 of yacc.c  */
#line 9086 "parser.y"
    {
	begin_statement ("TERMINATE", 0);
  }
    break;

  case 1332:

/* Line 1806 of yacc.c  */
#line 9094 "parser.y"
    {
	begin_implicit_statement ();
	begin_implicit_statement ();
	if ((yyvsp[(1) - (1)]) != cb_error_node) {
	    cb_emit_terminate((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1333:

/* Line 1806 of yacc.c  */
#line 9102 "parser.y"
    {
	begin_implicit_statement ();
	if ((yyvsp[(2) - (2)]) != cb_error_node) {
		cb_emit_terminate((yyvsp[(2) - (2)]));
	}
  }
    break;

  case 1334:

/* Line 1806 of yacc.c  */
#line 9114 "parser.y"
    {
	begin_statement ("TRANSFORM", 0);
  }
    break;

  case 1336:

/* Line 1806 of yacc.c  */
#line 9122 "parser.y"
    {
	cb_tree		x;

	x = cb_build_converting ((yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), cb_build_inspect_region_start ());
	cb_emit_inspect ((yyvsp[(1) - (5)]), x, cb_int0, 2);
  }
    break;

  case 1337:

/* Line 1806 of yacc.c  */
#line 9135 "parser.y"
    {
	begin_statement ("UNLOCK", 0);
  }
    break;

  case 1339:

/* Line 1806 of yacc.c  */
#line 9143 "parser.y"
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

  case 1343:

/* Line 1806 of yacc.c  */
#line 9166 "parser.y"
    {
	begin_statement ("UNSTRING", TERM_UNSTRING);
  }
    break;

  case 1345:

/* Line 1806 of yacc.c  */
#line 9176 "parser.y"
    {
	cb_emit_unstring ((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)]), (yyvsp[(4) - (6)]), (yyvsp[(5) - (6)]));
  }
    break;

  case 1346:

/* Line 1806 of yacc.c  */
#line 9182 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1347:

/* Line 1806 of yacc.c  */
#line 9184 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1348:

/* Line 1806 of yacc.c  */
#line 9188 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1349:

/* Line 1806 of yacc.c  */
#line 9190 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 1350:

/* Line 1806 of yacc.c  */
#line 9195 "parser.y"
    {
	(yyval) = cb_build_unstring_delimited ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1351:

/* Line 1806 of yacc.c  */
#line 9201 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(2) - (2)])); }
    break;

  case 1352:

/* Line 1806 of yacc.c  */
#line 9203 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1353:

/* Line 1806 of yacc.c  */
#line 9208 "parser.y"
    {
	(yyval) = cb_build_unstring_into ((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1354:

/* Line 1806 of yacc.c  */
#line 9214 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1355:

/* Line 1806 of yacc.c  */
#line 9215 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1356:

/* Line 1806 of yacc.c  */
#line 9219 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1357:

/* Line 1806 of yacc.c  */
#line 9220 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1358:

/* Line 1806 of yacc.c  */
#line 9224 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1359:

/* Line 1806 of yacc.c  */
#line 9225 "parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 1360:

/* Line 1806 of yacc.c  */
#line 9230 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), UNSTRING);
  }
    break;

  case 1361:

/* Line 1806 of yacc.c  */
#line 9234 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), UNSTRING);
  }
    break;

  case 1362:

/* Line 1806 of yacc.c  */
#line 9244 "parser.y"
    {
	skip_statements = 0;
	in_debugging = 0;
  }
    break;

  case 1369:

/* Line 1806 of yacc.c  */
#line 9262 "parser.y"
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

  case 1370:

/* Line 1806 of yacc.c  */
#line 9287 "parser.y"
    {
	use_global_ind = 0;
  }
    break;

  case 1371:

/* Line 1806 of yacc.c  */
#line 9291 "parser.y"
    {
	if (current_program->prog_type == CB_FUNCTION_TYPE) {
		cb_error (_("%s is invalid in a user FUNCTION"), "GLOBAL");
	} else {
		use_global_ind = 1;
		current_program->flag_global_use = 1;
	}
  }
    break;

  case 1372:

/* Line 1806 of yacc.c  */
#line 9303 "parser.y"
    {
	cb_tree		l;

	for (l = (yyvsp[(1) - (1)]); l; l = CB_CHAIN (l)) {
		if (CB_VALID_TREE (CB_VALUE (l))) {
			setup_use_file (CB_FILE (cb_ref (CB_VALUE (l))));
		}
	}
  }
    break;

  case 1373:

/* Line 1806 of yacc.c  */
#line 9313 "parser.y"
    {
	current_program->global_handler[COB_OPEN_INPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_INPUT].handler_prog = current_program;
  }
    break;

  case 1374:

/* Line 1806 of yacc.c  */
#line 9318 "parser.y"
    {
	current_program->global_handler[COB_OPEN_OUTPUT].handler_label = current_section;
	current_program->global_handler[COB_OPEN_OUTPUT].handler_prog = current_program;
  }
    break;

  case 1375:

/* Line 1806 of yacc.c  */
#line 9323 "parser.y"
    {
	current_program->global_handler[COB_OPEN_I_O].handler_label = current_section;
	current_program->global_handler[COB_OPEN_I_O].handler_prog = current_program;
  }
    break;

  case 1376:

/* Line 1806 of yacc.c  */
#line 9328 "parser.y"
    {
	current_program->global_handler[COB_OPEN_EXTEND].handler_label = current_section;
	current_program->global_handler[COB_OPEN_EXTEND].handler_prog = current_program;
  }
    break;

  case 1377:

/* Line 1806 of yacc.c  */
#line 9336 "parser.y"
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

  case 1380:

/* Line 1806 of yacc.c  */
#line 9379 "parser.y"
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

  case 1381:

/* Line 1806 of yacc.c  */
#line 9419 "parser.y"
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

  case 1382:

/* Line 1806 of yacc.c  */
#line 9429 "parser.y"
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

  case 1387:

/* Line 1806 of yacc.c  */
#line 9459 "parser.y"
    {
	if (current_program->nested_level) {
		cb_error (_("%s is invalid in nested program"), "USE AT");
	}
  }
    break;

  case 1388:

/* Line 1806 of yacc.c  */
#line 9468 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM START"));
	/* emit_entry ("_START", 0, NULL); */
	PENDING ("USE AT PROGRAM START");
  }
    break;

  case 1389:

/* Line 1806 of yacc.c  */
#line 9474 "parser.y"
    {
	emit_statement (cb_build_comment ("USE AT PROGRAM END"));
	/* emit_entry ("_END", 0, NULL); */
	PENDING ("USE AT PROGRAM END");
  }
    break;

  case 1390:

/* Line 1806 of yacc.c  */
#line 9484 "parser.y"
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

  case 1391:

/* Line 1806 of yacc.c  */
#line 9515 "parser.y"
    {
	current_section->flag_real_label = 1;
	emit_statement (cb_build_comment ("USE AFTER EXCEPTION CONDITION"));
	PENDING ("USE AFTER EXCEPTION CONDITION");
  }
    break;

  case 1394:

/* Line 1806 of yacc.c  */
#line 9531 "parser.y"
    {
	begin_statement ("WRITE", TERM_WRITE);
	/* Special in debugging mode */
	save_debug = start_debug;
	start_debug = 0;
  }
    break;

  case 1396:

/* Line 1806 of yacc.c  */
#line 9543 "parser.y"
    {
	if (CB_VALID_TREE ((yyvsp[(1) - (5)]))) {
		cb_emit_write ((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(4) - (5)]));
	}
	start_debug = save_debug;
  }
    break;

  case 1397:

/* Line 1806 of yacc.c  */
#line 9552 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1398:

/* Line 1806 of yacc.c  */
#line 9553 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1399:

/* Line 1806 of yacc.c  */
#line 9558 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1400:

/* Line 1806 of yacc.c  */
#line 9562 "parser.y"
    {
	(yyval) = cb_build_write_advancing_lines ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]));
  }
    break;

  case 1401:

/* Line 1806 of yacc.c  */
#line 9566 "parser.y"
    {
	(yyval) = cb_build_write_advancing_mnemonic ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1402:

/* Line 1806 of yacc.c  */
#line 9570 "parser.y"
    {
	(yyval) = cb_build_write_advancing_page ((yyvsp[(1) - (3)]));
  }
    break;

  case 1403:

/* Line 1806 of yacc.c  */
#line 9576 "parser.y"
    { (yyval) = CB_BEFORE; }
    break;

  case 1404:

/* Line 1806 of yacc.c  */
#line 9577 "parser.y"
    { (yyval) = CB_AFTER; }
    break;

  case 1407:

/* Line 1806 of yacc.c  */
#line 9587 "parser.y"
    {
	TERMINATOR_WARNING ((yyvsp[(-2) - (0)]), WRITE);
  }
    break;

  case 1408:

/* Line 1806 of yacc.c  */
#line 9591 "parser.y"
    {
	TERMINATOR_CLEAR ((yyvsp[(-2) - (1)]), WRITE);
  }
    break;

  case 1411:

/* Line 1806 of yacc.c  */
#line 9608 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1413:

/* Line 1806 of yacc.c  */
#line 9618 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_ACCEPT;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1416:

/* Line 1806 of yacc.c  */
#line 9631 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1418:

/* Line 1806 of yacc.c  */
#line 9641 "parser.y"
    {
	current_statement->handler_id = COB_EC_IMP_DISPLAY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1421:

/* Line 1806 of yacc.c  */
#line 9656 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1423:

/* Line 1806 of yacc.c  */
#line 9666 "parser.y"
    {
	current_statement->handler_id = COB_EC_SIZE;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1426:

/* Line 1806 of yacc.c  */
#line 9683 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1428:

/* Line 1806 of yacc.c  */
#line 9694 "parser.y"
    {
	current_statement->handler_id = COB_EC_OVERFLOW;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1434:

/* Line 1806 of yacc.c  */
#line 9717 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1435:

/* Line 1806 of yacc.c  */
#line 9726 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_AT_END;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1439:

/* Line 1806 of yacc.c  */
#line 9743 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1440:

/* Line 1806 of yacc.c  */
#line 9752 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_EOP;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1443:

/* Line 1806 of yacc.c  */
#line 9769 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler1 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1445:

/* Line 1806 of yacc.c  */
#line 9779 "parser.y"
    {
	current_statement->handler_id = COB_EC_I_O_INVALID_KEY;
	current_statement->handler2 = (yyvsp[(2) - (2)]);
  }
    break;

  case 1446:

/* Line 1806 of yacc.c  */
#line 9789 "parser.y"
    {
	(yyval) = cb_one;
  }
    break;

  case 1447:

/* Line 1806 of yacc.c  */
#line 9793 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
  }
    break;

  case 1448:

/* Line 1806 of yacc.c  */
#line 9803 "parser.y"
    {
	(yyval) = cb_build_cond ((yyvsp[(1) - (1)]));
  }
    break;

  case 1449:

/* Line 1806 of yacc.c  */
#line 9810 "parser.y"
    {
	(yyval) = cb_build_expr ((yyvsp[(1) - (1)]));
  }
    break;

  case 1450:

/* Line 1806 of yacc.c  */
#line 9816 "parser.y"
    {
	current_expr = NULL;
  }
    break;

  case 1451:

/* Line 1806 of yacc.c  */
#line 9820 "parser.y"
    {
	(yyval) = cb_list_reverse (current_expr);
  }
    break;

  case 1455:

/* Line 1806 of yacc.c  */
#line 9833 "parser.y"
    {
	if (CB_REFERENCE_P ((yyvsp[(1) - (1)])) && CB_CLASS_NAME_P (cb_ref ((yyvsp[(1) - (1)])))) {
		push_expr ('C', (yyvsp[(1) - (1)]));
	} else {
		push_expr ('x', (yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1456:

/* Line 1806 of yacc.c  */
#line 9841 "parser.y"
    { push_expr ('(', NULL); }
    break;

  case 1457:

/* Line 1806 of yacc.c  */
#line 9842 "parser.y"
    { push_expr (')', NULL); }
    break;

  case 1458:

/* Line 1806 of yacc.c  */
#line 9844 "parser.y"
    { push_expr ('+', NULL); }
    break;

  case 1459:

/* Line 1806 of yacc.c  */
#line 9845 "parser.y"
    { push_expr ('-', NULL); }
    break;

  case 1460:

/* Line 1806 of yacc.c  */
#line 9846 "parser.y"
    { push_expr ('*', NULL); }
    break;

  case 1461:

/* Line 1806 of yacc.c  */
#line 9847 "parser.y"
    { push_expr ('/', NULL); }
    break;

  case 1462:

/* Line 1806 of yacc.c  */
#line 9848 "parser.y"
    { push_expr ('^', NULL); }
    break;

  case 1463:

/* Line 1806 of yacc.c  */
#line 9850 "parser.y"
    { push_expr ('=', NULL); }
    break;

  case 1464:

/* Line 1806 of yacc.c  */
#line 9851 "parser.y"
    { push_expr ('>', NULL); }
    break;

  case 1465:

/* Line 1806 of yacc.c  */
#line 9852 "parser.y"
    { push_expr ('<', NULL); }
    break;

  case 1466:

/* Line 1806 of yacc.c  */
#line 9853 "parser.y"
    { push_expr (']', NULL); }
    break;

  case 1467:

/* Line 1806 of yacc.c  */
#line 9854 "parser.y"
    { push_expr ('[', NULL); }
    break;

  case 1468:

/* Line 1806 of yacc.c  */
#line 9855 "parser.y"
    { push_expr ('~', NULL); }
    break;

  case 1469:

/* Line 1806 of yacc.c  */
#line 9857 "parser.y"
    { push_expr ('!', NULL); }
    break;

  case 1470:

/* Line 1806 of yacc.c  */
#line 9858 "parser.y"
    { push_expr ('&', NULL); }
    break;

  case 1471:

/* Line 1806 of yacc.c  */
#line 9859 "parser.y"
    { push_expr ('|', NULL); }
    break;

  case 1472:

/* Line 1806 of yacc.c  */
#line 9861 "parser.y"
    { push_expr ('O', NULL); }
    break;

  case 1473:

/* Line 1806 of yacc.c  */
#line 9862 "parser.y"
    { push_expr ('9', NULL); }
    break;

  case 1474:

/* Line 1806 of yacc.c  */
#line 9863 "parser.y"
    { push_expr ('A', NULL); }
    break;

  case 1475:

/* Line 1806 of yacc.c  */
#line 9864 "parser.y"
    { push_expr ('L', NULL); }
    break;

  case 1476:

/* Line 1806 of yacc.c  */
#line 9865 "parser.y"
    { push_expr ('U', NULL); }
    break;

  case 1477:

/* Line 1806 of yacc.c  */
#line 9868 "parser.y"
    { push_expr ('P', NULL); }
    break;

  case 1478:

/* Line 1806 of yacc.c  */
#line 9869 "parser.y"
    { push_expr ('N', NULL); }
    break;

  case 1487:

/* Line 1806 of yacc.c  */
#line 9899 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1488:

/* Line 1806 of yacc.c  */
#line 9903 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1492:

/* Line 1806 of yacc.c  */
#line 9914 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '+', (yyvsp[(3) - (3)])); }
    break;

  case 1493:

/* Line 1806 of yacc.c  */
#line 9915 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '-', (yyvsp[(3) - (3)])); }
    break;

  case 1494:

/* Line 1806 of yacc.c  */
#line 9916 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1495:

/* Line 1806 of yacc.c  */
#line 9920 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '*', (yyvsp[(3) - (3)])); }
    break;

  case 1496:

/* Line 1806 of yacc.c  */
#line 9921 "parser.y"
    { (yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '/', (yyvsp[(3) - (3)])); }
    break;

  case 1497:

/* Line 1806 of yacc.c  */
#line 9922 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1498:

/* Line 1806 of yacc.c  */
#line 9927 "parser.y"
    {
	(yyval) = cb_build_binary_op ((yyvsp[(1) - (3)]), '^', (yyvsp[(3) - (3)]));
  }
    break;

  case 1499:

/* Line 1806 of yacc.c  */
#line 9930 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1500:

/* Line 1806 of yacc.c  */
#line 9934 "parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 1501:

/* Line 1806 of yacc.c  */
#line 9935 "parser.y"
    { (yyval) = cb_build_binary_op (cb_zero, '-', (yyvsp[(2) - (2)])); }
    break;

  case 1502:

/* Line 1806 of yacc.c  */
#line 9936 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1503:

/* Line 1806 of yacc.c  */
#line 9939 "parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 1504:

/* Line 1806 of yacc.c  */
#line 9940 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1505:

/* Line 1806 of yacc.c  */
#line 9951 "parser.y"
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

  case 1506:

/* Line 1806 of yacc.c  */
#line 9963 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_FILE (cb_ref ((yyvsp[(3) - (3)])))->linage_ctr;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1507:

/* Line 1806 of yacc.c  */
#line 9972 "parser.y"
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

  case 1508:

/* Line 1806 of yacc.c  */
#line 9988 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->line_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1509:

/* Line 1806 of yacc.c  */
#line 9997 "parser.y"
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

  case 1510:

/* Line 1806 of yacc.c  */
#line 10013 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(3) - (3)])))) {
		(yyval) = CB_REPORT (cb_ref ((yyvsp[(3) - (3)])))->page_counter;
	} else {
		cb_error_x ((yyvsp[(3) - (3)]), _("'%s' is not a report name"), CB_NAME ((yyvsp[(3) - (3)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1511:

/* Line 1806 of yacc.c  */
#line 10027 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1512:

/* Line 1806 of yacc.c  */
#line 10029 "parser.y"
    { (yyval) = cb_list_append ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1513:

/* Line 1806 of yacc.c  */
#line 10034 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (2)]), (yyvsp[(1) - (2)]));
  }
    break;

  case 1514:

/* Line 1806 of yacc.c  */
#line 10042 "parser.y"
    { cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1515:

/* Line 1806 of yacc.c  */
#line 10049 "parser.y"
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

  case 1516:

/* Line 1806 of yacc.c  */
#line 10069 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1517:

/* Line 1806 of yacc.c  */
#line 10073 "parser.y"
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

  case 1518:

/* Line 1806 of yacc.c  */
#line 10094 "parser.y"
    {
	if (CB_FILE_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error_x ((yyvsp[(1) - (1)]), _("'%s' is not a file name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1519:

/* Line 1806 of yacc.c  */
#line 10135 "parser.y"
    {
	if (CB_REPORT_P (cb_ref ((yyvsp[(1) - (1)])))) {
		(yyval) = (yyvsp[(1) - (1)]);
	} else {
		cb_error (_("'%s' is not a valid report name"), CB_NAME ((yyvsp[(1) - (1)])));
		(yyval) = cb_error_node;
	}
  }
    break;

  case 1520:

/* Line 1806 of yacc.c  */
#line 10148 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1521:

/* Line 1806 of yacc.c  */
#line 10150 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1522:

/* Line 1806 of yacc.c  */
#line 10154 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1523:

/* Line 1806 of yacc.c  */
#line 10160 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1524:

/* Line 1806 of yacc.c  */
#line 10162 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1525:

/* Line 1806 of yacc.c  */
#line 10167 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE ((yyval))->offset = CB_TREE (current_section);
	CB_REFERENCE ((yyval))->flag_in_decl = !!in_declaratives;
	CB_REFERENCE ((yyval))->section = current_section;
	CB_REFERENCE ((yyval))->paragraph = current_paragraph;
	CB_ADD_TO_CHAIN ((yyval), current_program->label_list);
  }
    break;

  case 1528:

/* Line 1806 of yacc.c  */
#line 10181 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1529:

/* Line 1806 of yacc.c  */
#line 10188 "parser.y"
    {
	(yyval) = cb_build_reference ((char *)(CB_LITERAL ((yyvsp[(1) - (1)]))->data));
	(yyval)->source_file = (yyvsp[(1) - (1)])->source_file;
	(yyval)->source_line = (yyvsp[(1) - (1)])->source_line;
  }
    break;

  case 1530:

/* Line 1806 of yacc.c  */
#line 10198 "parser.y"
    { (yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)])); }
    break;

  case 1531:

/* Line 1806 of yacc.c  */
#line 10199 "parser.y"
    { (yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); }
    break;

  case 1532:

/* Line 1806 of yacc.c  */
#line 10204 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1533:

/* Line 1806 of yacc.c  */
#line 10212 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1534:

/* Line 1806 of yacc.c  */
#line 10220 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1535:

/* Line 1806 of yacc.c  */
#line 10224 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1536:

/* Line 1806 of yacc.c  */
#line 10231 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	CB_REFERENCE((yyval))->flag_optional = 1;
	CB_ADD_TO_CHAIN ((yyval), current_program->reference_list);
  }
    break;

  case 1539:

/* Line 1806 of yacc.c  */
#line 10247 "parser.y"
    {
	if (CB_WORD_COUNT ((yyvsp[(1) - (1)])) > 0) {
		redefinition_error ((yyvsp[(1) - (1)]));
		(yyval) = cb_error_node;
	} else {
		(yyval) = (yyvsp[(1) - (1)]);
	}
  }
    break;

  case 1540:

/* Line 1806 of yacc.c  */
#line 10261 "parser.y"
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

  case 1541:

/* Line 1806 of yacc.c  */
#line 10278 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1542:

/* Line 1806 of yacc.c  */
#line 10282 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1545:

/* Line 1806 of yacc.c  */
#line 10291 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1546:

/* Line 1806 of yacc.c  */
#line 10298 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1547:

/* Line 1806 of yacc.c  */
#line 10302 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1552:

/* Line 1806 of yacc.c  */
#line 10313 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1553:

/* Line 1806 of yacc.c  */
#line 10317 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1554:

/* Line 1806 of yacc.c  */
#line 10321 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1555:

/* Line 1806 of yacc.c  */
#line 10325 "parser.y"
    {
	(yyval) = cb_build_ppointer ((yyvsp[(4) - (4)]));
  }
    break;

  case 1556:

/* Line 1806 of yacc.c  */
#line 10329 "parser.y"
    {
	(yyval) = cb_build_address ((yyvsp[(3) - (3)]));
  }
    break;

  case 1557:

/* Line 1806 of yacc.c  */
#line 10333 "parser.y"
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

  case 1558:

/* Line 1806 of yacc.c  */
#line 10354 "parser.y"
    {
	(yyval) = CB_LIST_INIT ((yyvsp[(1) - (1)]));
  }
    break;

  case 1559:

/* Line 1806 of yacc.c  */
#line 10358 "parser.y"
    {
	(yyval) = cb_list_add ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]));
  }
    break;

  case 1567:

/* Line 1806 of yacc.c  */
#line 10375 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1568:

/* Line 1806 of yacc.c  */
#line 10379 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1569:

/* Line 1806 of yacc.c  */
#line 10383 "parser.y"
    {
	(yyval) = cb_build_length ((yyvsp[(2) - (2)]));
  }
    break;

  case 1585:

/* Line 1806 of yacc.c  */
#line 10430 "parser.y"
    {
	(yyval) = cb_zero;
  }
    break;

  case 1593:

/* Line 1806 of yacc.c  */
#line 10454 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1594:

/* Line 1806 of yacc.c  */
#line 10458 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 1); }
    break;

  case 1595:

/* Line 1806 of yacc.c  */
#line 10462 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1596:

/* Line 1806 of yacc.c  */
#line 10463 "parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 1597:

/* Line 1806 of yacc.c  */
#line 10467 "parser.y"
    { (yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0); }
    break;

  case 1598:

/* Line 1806 of yacc.c  */
#line 10472 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (3)]));
	}
  }
    break;

  case 1599:

/* Line 1806 of yacc.c  */
#line 10479 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1600:

/* Line 1806 of yacc.c  */
#line 10486 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (2)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (2)]));
	}
  }
    break;

  case 1601:

/* Line 1806 of yacc.c  */
#line 10493 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
	if (start_debug) {
		cb_check_field_debug ((yyvsp[(1) - (1)]));
	}
  }
    break;

  case 1602:

/* Line 1806 of yacc.c  */
#line 10503 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1603:

/* Line 1806 of yacc.c  */
#line 10507 "parser.y"
    {
	(yyval) = cb_build_identifier ((yyvsp[(1) - (1)]), 0);
  }
    break;

  case 1604:

/* Line 1806 of yacc.c  */
#line 10514 "parser.y"
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

  case 1605:

/* Line 1806 of yacc.c  */
#line 10524 "parser.y"
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

  case 1606:

/* Line 1806 of yacc.c  */
#line 10534 "parser.y"
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

  case 1607:

/* Line 1806 of yacc.c  */
#line 10544 "parser.y"
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

  case 1608:

/* Line 1806 of yacc.c  */
#line 10557 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1609:

/* Line 1806 of yacc.c  */
#line 10561 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (3)]);
	CB_REFERENCE ((yyvsp[(1) - (3)]))->chain = (yyvsp[(3) - (3)]);
  }
    break;

  case 1610:

/* Line 1806 of yacc.c  */
#line 10569 "parser.y"
    {
	(yyval) = (yyvsp[(0) - (3)]);
	CB_REFERENCE ((yyvsp[(0) - (3)]))->subs = cb_list_reverse ((yyvsp[(2) - (3)]));
  }
    break;

  case 1611:

/* Line 1806 of yacc.c  */
#line 10577 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (4)]))->offset = (yyvsp[(2) - (4)]);
  }
    break;

  case 1612:

/* Line 1806 of yacc.c  */
#line 10581 "parser.y"
    {
	CB_REFERENCE ((yyvsp[(0) - (5)]))->offset = (yyvsp[(2) - (5)]);
	CB_REFERENCE ((yyvsp[(0) - (5)]))->length = (yyvsp[(4) - (5)]);
  }
    break;

  case 1613:

/* Line 1806 of yacc.c  */
#line 10591 "parser.y"
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

  case 1614:

/* Line 1806 of yacc.c  */
#line 10606 "parser.y"
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

  case 1615:

/* Line 1806 of yacc.c  */
#line 10629 "parser.y"
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

  case 1616:

/* Line 1806 of yacc.c  */
#line 10649 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1617:

/* Line 1806 of yacc.c  */
#line 10656 "parser.y"
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

  case 1618:

/* Line 1806 of yacc.c  */
#line 10671 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1619:

/* Line 1806 of yacc.c  */
#line 10672 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1620:

/* Line 1806 of yacc.c  */
#line 10673 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1621:

/* Line 1806 of yacc.c  */
#line 10674 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1622:

/* Line 1806 of yacc.c  */
#line 10675 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1623:

/* Line 1806 of yacc.c  */
#line 10676 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1624:

/* Line 1806 of yacc.c  */
#line 10681 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1625:

/* Line 1806 of yacc.c  */
#line 10685 "parser.y"
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

  case 1626:

/* Line 1806 of yacc.c  */
#line 10702 "parser.y"
    {
	(yyval) = (yyvsp[(1) - (1)]);
  }
    break;

  case 1627:

/* Line 1806 of yacc.c  */
#line 10706 "parser.y"
    {
	(yyval) = cb_concat_literals ((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]));
  }
    break;

  case 1628:

/* Line 1806 of yacc.c  */
#line 10712 "parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 1629:

/* Line 1806 of yacc.c  */
#line 10713 "parser.y"
    { (yyval) = cb_space; }
    break;

  case 1630:

/* Line 1806 of yacc.c  */
#line 10714 "parser.y"
    { (yyval) = cb_zero; }
    break;

  case 1631:

/* Line 1806 of yacc.c  */
#line 10715 "parser.y"
    { (yyval) = cb_quote; }
    break;

  case 1632:

/* Line 1806 of yacc.c  */
#line 10716 "parser.y"
    { (yyval) = cb_high; }
    break;

  case 1633:

/* Line 1806 of yacc.c  */
#line 10717 "parser.y"
    { (yyval) = cb_low; }
    break;

  case 1634:

/* Line 1806 of yacc.c  */
#line 10718 "parser.y"
    { (yyval) = cb_null; }
    break;

  case 1635:

/* Line 1806 of yacc.c  */
#line 10725 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), NULL, (yyvsp[(2) - (2)]), 0);
  }
    break;

  case 1636:

/* Line 1806 of yacc.c  */
#line 10729 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), CB_LIST_INIT ((yyvsp[(3) - (5)])), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1637:

/* Line 1806 of yacc.c  */
#line 10733 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1638:

/* Line 1806 of yacc.c  */
#line 10737 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1639:

/* Line 1806 of yacc.c  */
#line 10741 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (4)]), (yyvsp[(3) - (4)]), NULL, 0);
  }
    break;

  case 1640:

/* Line 1806 of yacc.c  */
#line 10745 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1641:

/* Line 1806 of yacc.c  */
#line 10749 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1642:

/* Line 1806 of yacc.c  */
#line 10753 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(5) - (5)]), 0);
  }
    break;

  case 1643:

/* Line 1806 of yacc.c  */
#line 10757 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 0);
  }
    break;

  case 1644:

/* Line 1806 of yacc.c  */
#line 10761 "parser.y"
    {
	(yyval) = cb_build_intrinsic ((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)]), NULL, 1);
  }
    break;

  case 1656:

/* Line 1806 of yacc.c  */
#line 10788 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1657:

/* Line 1806 of yacc.c  */
#line 10792 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (4)]), NULL);
  }
    break;

  case 1658:

/* Line 1806 of yacc.c  */
#line 10796 "parser.y"
    {
	(yyval) = CB_BUILD_PAIR ((yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));
  }
    break;

  case 1659:

/* Line 1806 of yacc.c  */
#line 10803 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1660:

/* Line 1806 of yacc.c  */
#line 10807 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (3)]);
  }
    break;

  case 1661:

/* Line 1806 of yacc.c  */
#line 10811 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1662:

/* Line 1806 of yacc.c  */
#line 10818 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_int0);
  }
    break;

  case 1663:

/* Line 1806 of yacc.c  */
#line 10825 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int1);
  }
    break;

  case 1664:

/* Line 1806 of yacc.c  */
#line 10832 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_int2);
  }
    break;

  case 1665:

/* Line 1806 of yacc.c  */
#line 10842 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1666:

/* Line 1806 of yacc.c  */
#line 10849 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, (yyvsp[(3) - (3)]));
  }
    break;

  case 1667:

/* Line 1806 of yacc.c  */
#line 10859 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (1)]));
	(yyval) = cb_list_add (x, cb_null);
  }
    break;

  case 1668:

/* Line 1806 of yacc.c  */
#line 10866 "parser.y"
    {
	cb_tree	x;

	x = CB_LIST_INIT ((yyvsp[(1) - (3)]));
	(yyval) = cb_list_add (x, cb_ref ((yyvsp[(3) - (3)])));
  }
    break;

  case 1669:

/* Line 1806 of yacc.c  */
#line 10877 "parser.y"
    {
	non_const_word = 1;
  }
    break;

  case 1670:

/* Line 1806 of yacc.c  */
#line 10885 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1671:

/* Line 1806 of yacc.c  */
#line 10886 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1672:

/* Line 1806 of yacc.c  */
#line 10890 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1673:

/* Line 1806 of yacc.c  */
#line 10891 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1674:

/* Line 1806 of yacc.c  */
#line 10895 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1675:

/* Line 1806 of yacc.c  */
#line 10896 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1676:

/* Line 1806 of yacc.c  */
#line 10901 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1677:

/* Line 1806 of yacc.c  */
#line 10905 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1678:

/* Line 1806 of yacc.c  */
#line 10912 "parser.y"
    {
	(yyval) = NULL;
  }
    break;

  case 1679:

/* Line 1806 of yacc.c  */
#line 10916 "parser.y"
    {
	(yyval) = (yyvsp[(2) - (2)]);
  }
    break;

  case 1680:

/* Line 1806 of yacc.c  */
#line 10923 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1681:

/* Line 1806 of yacc.c  */
#line 10924 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1682:

/* Line 1806 of yacc.c  */
#line 10925 "parser.y"
    { (yyval) = cb_int2; }
    break;

  case 1683:

/* Line 1806 of yacc.c  */
#line 10929 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1684:

/* Line 1806 of yacc.c  */
#line 10930 "parser.y"
    { (yyval) = cb_true; }
    break;

  case 1685:

/* Line 1806 of yacc.c  */
#line 10934 "parser.y"
    { (yyval) = cb_int (cb_flag_optional_file); }
    break;

  case 1686:

/* Line 1806 of yacc.c  */
#line 10935 "parser.y"
    { (yyval) = cb_int1; }
    break;

  case 1687:

/* Line 1806 of yacc.c  */
#line 10936 "parser.y"
    { (yyval) = cb_int0; }
    break;

  case 1688:

/* Line 1806 of yacc.c  */
#line 10941 "parser.y"
    {
	(yyval) = cb_int0;
  }
    break;

  case 1689:

/* Line 1806 of yacc.c  */
#line 10945 "parser.y"
    {
	if ((yyvsp[(2) - (2)])) {
		(yyval) = (yyvsp[(2) - (2)]);
	} else {
		(yyval) = cb_int (COB_STORE_ROUND);
	}
	cobc_cs_check = 0;
  }
    break;

  case 1690:

/* Line 1806 of yacc.c  */
#line 10957 "parser.y"
    {
	(yyval) = NULL;
	cobc_cs_check = 0;
  }
    break;

  case 1691:

/* Line 1806 of yacc.c  */
#line 10962 "parser.y"
    {
	(yyval) = (yyvsp[(3) - (3)]);
	cobc_cs_check = 0;
  }
    break;

  case 1692:

/* Line 1806 of yacc.c  */
#line 10970 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_AWAY_FROM_ZERO);
  }
    break;

  case 1693:

/* Line 1806 of yacc.c  */
#line 10974 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_AWAY_FROM_ZERO);
  }
    break;

  case 1694:

/* Line 1806 of yacc.c  */
#line 10978 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_EVEN);
  }
    break;

  case 1695:

/* Line 1806 of yacc.c  */
#line 10982 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_NEAR_TOWARD_ZERO);
  }
    break;

  case 1696:

/* Line 1806 of yacc.c  */
#line 10986 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_PROHIBITED);
  }
    break;

  case 1697:

/* Line 1806 of yacc.c  */
#line 10990 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_GREATER);
  }
    break;

  case 1698:

/* Line 1806 of yacc.c  */
#line 10994 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TOWARD_LESSER);
  }
    break;

  case 1699:

/* Line 1806 of yacc.c  */
#line 10998 "parser.y"
    {
	(yyval) = cb_int (COB_STORE_ROUND | COB_STORE_TRUNCATION);
  }
    break;

  case 1700:

/* Line 1806 of yacc.c  */
#line 11004 "parser.y"
    { (yyval) = NULL; }
    break;

  case 1701:

/* Line 1806 of yacc.c  */
#line 11005 "parser.y"
    { (yyval) = cb_int1; }
    break;



/* Line 1806 of yacc.c  */
#line 19440 "parser.c"
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 2067 of yacc.c  */
#line 11175 "parser.y"


