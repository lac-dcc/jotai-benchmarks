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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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

int mbfl_filt_ident_eucjp(int c, mbfl_identify_filter *filter)
{
	switch (filter->status) {
	case  0:	/* latin */
		if (c >= 0 && c < 0x80) {	/* ok */
			;
		} else if (c > 0xa0 && c < 0xff) {	/* kanji first char */
			filter->status = 1;
		} else if (c == 0x8e) {				/* kana first char */
			filter->status = 2;
		} else if (c == 0x8f) {				/* X 0212 first char */
			filter->status = 3;
		} else {							/* bad */
			filter->flag = 1;
		}
		break;

	case  1:	/* got first half */
		if (c < 0xa1 || c > 0xfe) {		/* bad */
			filter->flag = 1;
		}
		filter->status = 0;
		break;

	case  2:	/* got 0x8e */
		if (c < 0xa1 || c > 0xdf) {		/* bad */
			filter->flag = 1;
		}
		filter->status = 0;
		break;

	case  3:	/* got 0x8f */
		if (c < 0xa1 || c > 0xfe) {		/* bad */
			filter->flag = 1;
		}
		filter->status++;
		break;
	case  4:	/* got 0x8f */
		if (c < 0xa1 || c > 0xfe) {		/* bad */
			filter->flag = 1;
		}
		filter->status = 0;
		break;

	default:
		filter->status = 0;
		break;
	}

	return c;
}

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
        
          int benchRet = mbfl_filt_ident_eucjp(c,filter);
          printf("%d\n", benchRet); 
          free(filter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int c = 255;
        
          int _len_filter0 = 65025;
          struct TYPE_3__ * filter = (struct TYPE_3__ *) malloc(_len_filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mbfl_filt_ident_eucjp(c,filter);
          printf("%d\n", benchRet); 
          free(filter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int c = 10;
        
          int _len_filter0 = 100;
          struct TYPE_3__ * filter = (struct TYPE_3__ *) malloc(_len_filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mbfl_filt_ident_eucjp(c,filter);
          printf("%d\n", benchRet); 
          free(filter);
        
        break;
    }
    // empty
    case 3:
    {
          int c = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_filter0 = 1;
          struct TYPE_3__ * filter = (struct TYPE_3__ *) malloc(_len_filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mbfl_filt_ident_eucjp(c,filter);
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
