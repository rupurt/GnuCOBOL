#! /usr/bin/awk -f

# Intrinsic Function              Implemented     Parameters
# ABS                             Yes             1
# ACOS                            Yes             1
# ANNUITY                         Yes             2
# ASIN                            Yes             1
# ATAN                            Yes             1
# ...

BEGIN {
    print "@multitable @columnfractions .40 .20 .40"
    header_done = 0
}

# Skip blank lines
! $1 {
    next;
}

# First non-blank line is the header
header_done++ == 0 {
    print  "@headitem", $1 "\n@tab", $2, "@tab", $3
    next
}

{
    print  "@item @code{" $1 "}\n@tab", $2, "@tab", $3
}

END {
    print  "@end multitable"
}
