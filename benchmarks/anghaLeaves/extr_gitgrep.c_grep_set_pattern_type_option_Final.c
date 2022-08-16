// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
struct grep_opt {int extended_regexp_option; int fixed; int pcre1; } ;
typedef  enum grep_pattern_type { ____Placeholder_grep_pattern_type } grep_pattern_type ;

/* Variables and functions */
#define  GREP_PATTERN_TYPE_BRE 132 
#define  GREP_PATTERN_TYPE_ERE 131 
#define  GREP_PATTERN_TYPE_FIXED 130 
#define  GREP_PATTERN_TYPE_PCRE 129 
#define  GREP_PATTERN_TYPE_UNSPECIFIED 128 

__attribute__((used)) static void grep_set_pattern_type_option(enum grep_pattern_type pattern_type, struct grep_opt *opt)
{
	/*
	 * When committing to the pattern type by setting the relevant
	 * fields in grep_opt it's generally not necessary to zero out
	 * the fields we're not choosing, since they won't have been
	 * set by anything. The extended_regexp_option field is the
	 * only exception to this.
	 *
	 * This is because in the process of parsing grep.patternType
	 * & grep.extendedRegexp we set opt->pattern_type_option and
	 * opt->extended_regexp_option, respectively. We then
	 * internally use opt->extended_regexp_option to see if we're
	 * compiling an ERE. It must be unset if that's not actually
	 * the case.
	 */
	if (pattern_type != GREP_PATTERN_TYPE_ERE &&
	    opt->extended_regexp_option)
		opt->extended_regexp_option = 0;

	switch (pattern_type) {
	case GREP_PATTERN_TYPE_UNSPECIFIED:
		/* fall through */

	case GREP_PATTERN_TYPE_BRE:
		break;

	case GREP_PATTERN_TYPE_ERE:
		opt->extended_regexp_option = 1;
		break;

	case GREP_PATTERN_TYPE_FIXED:
		opt->fixed = 1;
		break;

	case GREP_PATTERN_TYPE_PCRE:
#ifdef USE_LIBPCRE2
		opt->pcre2 = 1;
#else
		/*
		 * It's important that pcre1 always be assigned to
		 * even when there's no USE_LIBPCRE* defined. We still
		 * call the PCRE stub function, it just dies with
		 * "cannot use Perl-compatible regexes[...]".
		 */
		opt->pcre1 = 1;
#endif
		break;
	}
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          enum grep_pattern_type pattern_type = 0;
          int _len_opt0 = 1;
          struct grep_opt * opt = (struct grep_opt *) malloc(_len_opt0*sizeof(struct grep_opt));
          for(int _i0 = 0; _i0 < _len_opt0; _i0++) {
            opt[_i0].extended_regexp_option = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].fixed = ((-2 * (next_i()%2)) + 1) * next_i();
        opt[_i0].pcre1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          grep_set_pattern_type_option(pattern_type,opt);
          free(opt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
