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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int zend_long ;
typedef  int /*<<< orphan*/ * compare_func_t ;

/* Variables and functions */
 int PHP_SORT_FLAG_CASE ; 
#define  PHP_SORT_NATURAL 131 
#define  PHP_SORT_NUMERIC 130 
#define  PHP_SORT_REGULAR 129 
#define  PHP_SORT_STRING 128 
 int /*<<< orphan*/ * php_array_key_compare ; 
 int /*<<< orphan*/ * php_array_key_compare_numeric ; 
 int /*<<< orphan*/ * php_array_key_compare_string ; 
 int /*<<< orphan*/ * php_array_key_compare_string_case ; 
 int /*<<< orphan*/ * php_array_key_compare_string_natural ; 
 int /*<<< orphan*/ * php_array_key_compare_string_natural_case ; 
 int /*<<< orphan*/ * php_array_reverse_key_compare ; 
 int /*<<< orphan*/ * php_array_reverse_key_compare_numeric ; 
 int /*<<< orphan*/ * php_array_reverse_key_compare_string ; 
 int /*<<< orphan*/ * php_array_reverse_key_compare_string_case ; 
 int /*<<< orphan*/ * php_array_reverse_key_compare_string_natural ; 
 int /*<<< orphan*/ * php_array_reverse_key_compare_string_natural_case ; 

__attribute__((used)) static compare_func_t php_get_key_compare_func(zend_long sort_type, int reverse) /* {{{ */
{
	switch (sort_type & ~PHP_SORT_FLAG_CASE) {
		case PHP_SORT_NUMERIC:
			if (reverse) {
				return php_array_reverse_key_compare_numeric;
			} else {
				return php_array_key_compare_numeric;
			}
			break;

		case PHP_SORT_STRING:
			if (sort_type & PHP_SORT_FLAG_CASE) {
				if (reverse) {
					return php_array_reverse_key_compare_string_case;
				} else {
					return php_array_key_compare_string_case;
				}
			} else {
				if (reverse) {
					return php_array_reverse_key_compare_string;
				} else {
					return php_array_key_compare_string;
				}
			}
			break;

		case PHP_SORT_NATURAL:
			if (sort_type & PHP_SORT_FLAG_CASE) {
				if (reverse) {
					return php_array_reverse_key_compare_string_natural_case;
				} else {
					return php_array_key_compare_string_natural_case;
				}
			} else {
				if (reverse) {
					return php_array_reverse_key_compare_string_natural;
				} else {
					return php_array_key_compare_string_natural;
				}
			}
			break;

#if HAVE_STRCOLL
		case PHP_SORT_LOCALE_STRING:
			if (reverse) {
				return php_array_reverse_key_compare_string_locale;
			} else {
				return php_array_key_compare_string_locale;
			}
			break;
#endif

		case PHP_SORT_REGULAR:
		default:
			if (reverse) {
				return php_array_reverse_key_compare;
			} else {
				return php_array_key_compare;
			}
			break;
	}
	return NULL;
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

    // big-arr
    case 0:
    {
          int sort_type = 255;
          int reverse = 255;
          int * benchRet = php_get_key_compare_func(sort_type,reverse);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
