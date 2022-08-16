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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int status; int flag; } ;
typedef  TYPE_1__ mbfl_identify_filter ;

/* Variables and functions */

__attribute__((used)) static int mbfl_filt_ident_utf7(int c, mbfl_identify_filter *filter)
{
	int n;

	switch (filter->status) {
	/* directly encoded characters */
	case 0:
		if (c == 0x2b) {	/* '+'  shift character */
			filter->status++;
		} else if (c == 0x5c || c == 0x7e || c < 0 || c > 0x7f) {	/* illegal character */
			filter->flag = 1;	/* bad */
		}
		break;

	/* Modified Base64 */
	case 1:
	case 2:
		n = 0;
		if (c >= 0x41 && c <= 0x5a) {		/* A - Z */
			n = 1;
		} else if (c >= 0x61 && c <= 0x7a) {	/* a - z */
			n = 1;
		} else if (c >= 0x30 && c <= 0x39) {	/* 0 - 9 */
			n = 1;
		} else if (c == 0x2b) {			/* '+' */
			n = 1;
		} else if (c == 0x2f) {			/* '/' */
			n = 1;
		}
		if (n <= 0) {
			if (filter->status == 1 && c != 0x2d) {
				filter->flag = 1;	/* bad */
			} else if (c < 0 || c > 0x7f) {
				filter->flag = 1;	/* bad */
			}
			filter->status = 0;
		} else {
			filter->status = 2;
		}
		break;

	default:
		filter->status = 0;
		break;
	}

	return c;
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
          int c = 100;
          int _len_filter0 = 1;
          struct TYPE_3__ * filter = (struct TYPE_3__ *) malloc(_len_filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            filter[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mbfl_filt_ident_utf7(c,filter);
          printf("%d\n", benchRet); 
          free(filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
