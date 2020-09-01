#! /usr/bin/awk -f

/^##$/  {
    print "@verbatim"
    section++
    next
}

!section && /^## /,/^##$/ {
    section = 1
    gsub(/^./, "")
    gsub(/\r/, "")
    if( gsub(/^#/, "@section") ) {
	$0 = $0 "\n"
    }
    gsub(/^ /, "")
    gsub(/[{}]/, "@&")

    # Wrap 1-line example in "code{...}"
    # s/\(Example:\)  \(.*\)$/\n\1 @code{\2}/g
    if( /Example:  / ) {
	needle = "Example:"
	n = index($0, needle "  ")
	line = sprintf( "%s\n%s @code{%s}",
			substr($0, 1, n), # prefix
			needle, 
			substr($0, n+1, length($0)) ) # remainder
	$0 = line
    }

    # Wrap example functions in "code{...}"
    # s/  \([^ ][^(]*\)  \([,.]\)/ @code{\1}\2/g
    # s/  \([^ ][^(]*\)  / @code{\1} /g
    # s/  \([^ ][^(]*\)$/ @code{\1}/g

    gsub(/^$/, "@*")

    print
    next
}

#
# Other sections
#

section > 1 {
    gsub(/^./, "")
    gsub(/\r/, "")

    # $SED -e 's/# \?TO-\?DO.*$//g'  
    gsub(/# \?TO-\?DO.*/, "")
    
    # -e 's/^#\( .*\)/@end verbatim\n@section\1\n@verbatim/g'
    if(  match($0, /^# /) ) {
	$0 = sprintf( "@end verbatim\n@section%s\n@verbatim",
		      substr($0, RLENGTH, length($0)) )
    }
    
    # -e 's/^ //g'
    gsub(/^ /, "")

    print
}

END {
    print "@end verbatim"
}

