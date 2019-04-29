#!/bin/sh
# cobcinfo.sh gnucobol/doc
#
# Copyright (C) 2010,2012, 2016-2019 Free Software Foundation, Inc.
# Written by Roger While, Simon Sobisch
#
# This file is part of GnuCOBOL.
#
# The GnuCOBOL compiler is free software: you can redistribute it
# and/or modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation, either version 3 of the
# License, or (at your option) any later version.
#
# GnuCOBOL is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GnuCOBOL.  If not, see <https://www.gnu.org/licenses/>.

# use GREP from configure, passed when called from Makefile
GREP_ORIG="$GREP";
if test "x$GREP" = "x"; then GREP=grep; fi

if test "$1" != "fixtimestamps"; then

   # test for grep -A
   $GREP -A2 test /dev/null 2>/dev/null 1>&2
   if test "$?" -ne 1; then
      GREP=ggrep
      $GREP -A2 test /dev/null 2>/dev/null 1>&2
      if test "$?" -ne 1; then
         echo "error: grep not working, re-run with GREP=/path/to/gnu-grep"
         echo "       GREP is currently \"$GREP_ORIG\""
         exit 1
      fi
   fi

   if test "x$COBC" = "x"; then
      echo 'WARNING: $COBC not set, defaulting to "cobc"'
      COBC=cobc
   fi
   if test "x$COBCRUN" = "x"; then
      echo 'WARNING: $COBCRUN not set, defaulting to "cobcrun"'
      COBCRUN=cobcrun
   fi
   
   # test for working executables
   $COBC    -V 2>/dev/null 1>&2
   ret=$?
   if test "$ret" -ne 0; then
     echo "error: cobc is not working, re-run with COBC=/path/to/cobc"
	 echo "       and ensure that its dependencies can be found."
     echo "       COBC is currently \"$COBC\""
     exit $ret
   fi
   $COBCRUN -V 2>/dev/null 1>&2
   if test "$ret" -ne 0; then
     echo "error: cobcrun is not working, re-run with COBCRUN=/path/to/cobcrun"
	 echo "       and ensure that its dependencies can be found."
     echo "       COBCRUN is currently \"$COBCRUN\""
     exit $ret
   fi

fi

# Make sure to source atconfig/atlocal before running this shell
# to use the currently compiled version of cobc
# (is done in the makefile for automated calls)

# Function for creating the actual file and check
_create_file () {
	echo "$0: creating $1"
	case "$1" in
		"cbhelp.tex")
			echo "@verbatim"               > $1
			$COBC -q --help                >>$1
			echo "@end verbatim"           >>$1
			;;
		"cbchelp.tex")
			echo "@verbatim"               > $1
			$COBCRUN -q --help             >>$1
			echo "@end verbatim"           >>$1
			;;
		"cbrese.tex")
			echo "@verbatim"               > $1
			$COBC -q --list-reserved       >>$1
			echo "@end verbatim"           >>$1
			;;
		"cbintr.tex")
			echo "@verbatim"               > $1
			$COBC -q --list-intrinsics     >>$1
			echo "@end verbatim"           >>$1
			;;
		"cbsyst.tex")
			echo "@verbatim"               > $1
			$COBC -q --list-system         >>$1
			echo "@end verbatim"           >>$1
			;;
		"cbmnem.tex")
			echo "@verbatim"               > $1
			$COBC -q --list-mnemonics      >>$1
			echo "@end verbatim"           >>$1
			;;
		"cbconf.tex")
			echo "@verbatim"               > $1
			$GREP -A9999 "https://www.gnu.org/licenses/" \
			  $confdir/default.conf \
			| tail -n +2 \
			                               >>$1
			echo "@end verbatim"           >>$1
			;;
		"cbrunt.tex")
			# First section, as it is formatted different
			$GREP -A400 -m1 "##" \
			  $confdir/runtime.cfg \
			| $GREP -B400 -m2 "##" \
			| cut -b2- \
			| sed -e 's/\r//g' \
			| sed -e 's/^#$//g' \
			      -e 's/^#\( .*\)/@section\1\n/g' \
			      -e 's/^ //g' \
			      -e 's/{/@{/g' \
			      -e 's/}/@}/g' \
			      -e 's/\(Example:\)  \(.*\)$/\n\1 @code{\2}/g' \
			      -e 's/  \([^ ][^(]*\)  \([,.]\)/ @code{\1}\2/g' \
			      -e 's/  \([^ ][^(]*\)  / @code{\1} /g' \
			      -e 's/  \([^ ][^(]*\)$/ @code{\1}/g' \
			      -e 's/^$/@\*/g' \
			                               > $1
			lines=`cat $1 | wc -l`
			lines=`expr 20 + $lines`
			# All other sections
			echo "@verbatim"               >>$1
			tail -n +$lines $confdir/runtime.cfg \
			| cut -b2- \
			| sed -e 's/\r//g' \
			      -e 's/^#\( .*\)/@end verbatim\n@section\1\n@verbatim/g' \
			      -e 's/^ //g' \
			                               >>$1
			echo "@end verbatim"           >>$1
			;;
	esac
}

docdir=`dirname $0`
confdir=$docdir/../config
created_texfiles="cbhelp.tex cbchelp.tex cbrese.tex cbintr.tex cbsyst.tex"
created_texfiles="$created_texfiles cbmnem.tex cbconf.tex cbrunt.tex"


# for old systems that don't support this POSIX parameter expansion:
#case "$1" in
# otherwise: only use filename (strip possible path)
case "${1##*/}" in
	"")
		for file in $created_texfiles; do
			_create_file $file
		done
		;;
	"help")
		_create_file "cbhelp.tex"
		_create_file "cbchelp.tex"
		;;
	"lists")
		_create_file "cbrese.tex"
		_create_file "cbintr.tex"
		_create_file "cbsyst.tex"
		_create_file "cbmnem.tex"
		;;
	"conf")
		_create_file "cbconf.tex"
		_create_file "cbrunt.tex"
		;;
	"cbhelp.tex")
		_create_file "cbhelp.tex"
		;;
	"cbchelp.tex")
		_create_file "cbchelp.tex"
		;;
	"cbrese.tex")
		_create_file "cbrese.tex"
		;;
	"cbintr.tex")
		_create_file "cbintr.tex"
		;;
	"cbsyst.tex")
		_create_file "cbsyst.tex"
		;;
	"cbmnem.tex")
		_create_file "cbmnem.tex"
		;;
	"cbconf.tex")
		_create_file "cbconf.tex"
		;;
	"cbrunt.tex")
		_create_file "cbrunt.tex"
		;;
	"fixtimestamps")
		echo $0: touch tex-includes
		for file in $created_texfiles; do
			echo " touch $file"
			touch $file
		done
		echo $0: touch tex-results
		for file in $docdir/gnucobol.*; do
			if test "$file" = "$docdir/gnucobol.texi"; then continue; fi
			echo " touch $file"
			touch $file
		done
		;;
	*)
		echo "$0: ERROR: called with unsupported option $1"
		exit 1;
esac
