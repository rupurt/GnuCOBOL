/*
   Copyright (C) 2004-2012, 2014-2016 Free Software Foundation, Inc.
   Written by Roger While, Simon Sobisch

   This file is part of GnuCOBOL.

   The GnuCOBOL module loader is free software: you can redistribute it
   and/or modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

   GnuCOBOL is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GnuCOBOL.  If not, see <http://www.gnu.org/licenses/>.
*/

#include	"config.h"
#include	"defaults.h"

#include	<stdio.h>
#include	<stdlib.h>
#include	<stddef.h>
#include	<string.h>
#include	"libcob.h"
#include	"tarstamp.h"

#include "libcob/cobgetopt.h"

#ifdef	HAVE_LOCALE_H
#include <locale.h>
#endif

static int arg_shift = 1;

static const char short_options[] = "+hirc:V";

#define	CB_NO_ARG	no_argument
#define	CB_RQ_ARG	required_argument
#define	CB_OP_ARG	optional_argument

static const struct option long_options[] = {
	{"help",		CB_NO_ARG, NULL, 'h'},
	{"info",		CB_NO_ARG, NULL, 'i'},
	{"runtime-conf",		CB_NO_ARG, NULL, 'r'},
	{"config",	CB_RQ_ARG, NULL, 'C'},
	{"version",   	CB_NO_ARG, NULL, 'V'},
	{NULL, 0, NULL, 0}
};

#if	defined(ENABLE_NLS) && defined(COB_NLS_RUNTIME)
#include "lib/gettext.h"
#define _(s)		gettext(s)
#define N_(s)		gettext_noop(s)
#else
#define _(s)		s
#define N_(s)		s
#endif


static void
cobcrun_print_version (void)
{
	char	cob_build_stamp[COB_MINI_BUFF];
	char	month[64];
	int status, day, year;

	/* Set up build time stamp */
	memset (cob_build_stamp, 0, (size_t)COB_MINI_BUFF);
	memset (month, 0, sizeof(month));
	day = 0;
	year = 0;
	status = sscanf (__DATE__, "%s %d %d", month, &day, &year);
	if (status == 3) {
		snprintf (cob_build_stamp, (size_t)COB_MINI_MAX,
			  "%s %2.2d %4.4d %s", month, day, year, __TIME__);
	} else {
		snprintf (cob_build_stamp, (size_t)COB_MINI_MAX,
			  "%s %s", __DATE__, __TIME__);
	}

	printf ("cobcrun (%s) %s.%d\n",
		PACKAGE_NAME, PACKAGE_VERSION, PATCH_LEVEL);
	puts ("Copyright (C) 2016 Free Software Foundation, Inc.");
	puts (_("License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>"));
	puts (_("This is free software; see the source for copying conditions.  There is NO\n"
	        "warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE."));
	printf (_("Written by %s\n"), "Roger While, Simon Sobisch");
	printf (_("Built     %s"), cob_build_stamp);
	putchar ('\n');
	printf (_("Packaged  %s"), COB_TAR_DATE);
	putchar ('\n');
}

static void
cobcrun_print_usage (char * prog)
{
	puts (_("COBOL driver program for GnuCOBOL modules"));
	putchar ('\n');
	printf (_("usage: %s [options] PROGRAM [parameter ...]"), prog);
	putchar ('\n');
	printf (_("  or:  %s options"), prog);
	putchar ('\n');
	putchar ('\n');
	puts (_("Options:"));
	puts (_("  -h, -help             display this help and exit"));
	puts (_("  -V, -version          display cobcrun and runtime version and exit"));
	puts (_("  -i, -info             display runtime information (build/environment)"));
	puts (_("  -c <file>, -config=<file>   set runtime configuration from <file>"));
	puts (_("  -r, -runtime-conf              display current runtime configuration\n"
	        "                        (value and origin for all settings)"));
	putchar ('\n');
	printf (_("Report bugs to: %s or\n"
			  "use the preferred issue tracker via home page"), "bug-gnucobol@gnu.org");
	putchar ('\n');
	puts (_("GnuCOBOL home page: <http://www.gnu.org/software/gnucobol/>"));
	puts (_("General help using GNU software: <http://www.gnu.org/gethelp/>"));
}

/* Set current argument from getopt as environment value */
static int
cobcrun_setenv (const char * environment)
{
#if !HAVE_SETENV
	int len;
	char * p;

	len = strlen (environment) + strlen (cob_optarg) + 2U;
	p = cob_fast_malloc (len);
	sprintf (p, "%s=%s", environment, cob_optarg);
	return putenv (p);
#else
	return setenv(environment, cob_optarg, 1);
#endif
}

static void
process_command_line (int argc, char *argv[])
{
	int			c, idx;
#ifdef _WIN32
	int			argnum;

	/* Translate command line arguments from WIN to UNIX style */
	argnum = 1;
	while (++argnum <= argc) {
		if (strrchr(argv[argnum - 1], '/') == argv[argnum - 1]) {
			argv[argnum - 1][0] = '-';
		}
	}
#endif
	
	/* c = -1 if idx > argc or argv[idx] has non-option */
	while ((c = cob_getopt_long_long (argc, argv, short_options,
					  long_options, &idx, 1)) >= 0) {
		switch (c) {
		case '?':
			/* Unknown option or ambiguous */
			exit (1);
		
		case 'c':
		case 'C':
			/* --config=<file> */
			if (strlen (cob_optarg) > COB_SMALL_MAX) {
				fputs (_("invalid configuration file name"), stderr);
				putc ('\n', stderr);
				fflush (stderr);
				exit (1);
			}
			arg_shift++;
			cobcrun_setenv ("COB_RUNTIME_CONFIG");
			/* shift argument again if two part argument was used */
			if (c == 'c') {
				arg_shift++;
			}
			break;

		case 'h':
			/* --help */
			cobcrun_print_usage (argv[0]);
			exit (0);

		case 'i':
			/* --info */
			print_info ();
			exit (0);

		case 'r':
			/* --runtime-conf */
			cob_init (0, &argv[0]);
			print_runtime_conf ();
			exit (0);

		case 'V':
			/* --version */
			cobcrun_print_version ();
			putchar ('\n');
			print_version();
			exit (0);
		}
	}
}

int
main (int argc, char **argv)
{
	cob_call_union	unifunc;

#ifdef	HAVE_SETLOCALE
	setlocale (LC_ALL, "");
#endif

	process_command_line (argc, argv);

	/* At least one option or module name needed */
	if (argc <= arg_shift) {
		cobcrun_print_usage (argv[0]);
		exit (1);
	}

	if (strlen (argv[arg_shift]) > 31) {
		fputs (_("PROGRAM name exceeds 31 characters"), stderr);
		putc ('\n', stderr);
		return 1;
	}
	cob_init (argc - arg_shift, &argv[arg_shift]);
	unifunc.funcvoid = cob_resolve (argv[arg_shift]);
	if (unifunc.funcvoid == NULL) {
		cob_call_error ();
	}
	cob_stop_run ( unifunc.funcint() );
}
