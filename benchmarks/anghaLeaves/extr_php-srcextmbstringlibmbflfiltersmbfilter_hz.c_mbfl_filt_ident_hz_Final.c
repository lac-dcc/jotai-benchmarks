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

__attribute__((used)) static int mbfl_filt_ident_hz(int c, mbfl_identify_filter *filter)
{
	switch (filter->status & 0xf) {
/*	case 0x00:	 ASCII */
/*	case 0x10:	 GB2312 */
	case 0:
		if (c == 0x7e) {
			filter->status += 2;
		} else if (filter->status == 0x10 && c > 0x20 && c < 0x7f) {		/* DBCS first char */
			filter->status += 1;
		} else if (c >= 0 && c < 0x80) {		/* latin, CTLs */
			;
		} else {
			filter->flag = 1;	/* bad */
		}
		break;

/*	case 0x11:	 GB2312 second char */
	case 1:
		filter->status &= ~0xf;
		if (c < 0x21 || c > 0x7e) {		/* bad */
			filter->flag = 1;
		}
		break;

	case 2:
		if (c == 0x7d) {		/* '}' */
			filter->status = 0;
		} else if (c == 0x7b) {		/* '{' */
			filter->status = 0x10;
		} else if (c == 0x7e) {		/* '~' */
			filter->status = 0;
		} else {
			filter->flag = 1;	/* bad */
			filter->status &= ~0xf;
		}
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int c = 100;
        
          int _len_filter0 = 1;
          struct TYPE_3__ * filter = (struct TYPE_3__ *) malloc(_len_filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mbfl_filt_ident_hz(c,filter);
          printf("%d\n", benchRet); 
          free(filter);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int c = 255;
        
          int _len_filter0 = 65025;
          struct TYPE_3__ * filter = (struct TYPE_3__ *) malloc(_len_filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mbfl_filt_ident_hz(c,filter);
          printf("%d\n", benchRet); 
          free(filter);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int c = 10;
        
          int _len_filter0 = 100;
          struct TYPE_3__ * filter = (struct TYPE_3__ *) malloc(_len_filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mbfl_filt_ident_hz(c,filter);
          printf("%d\n", benchRet); 
          free(filter);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 23
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 16
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          int c = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_filter0 = 1;
          struct TYPE_3__ * filter = (struct TYPE_3__ *) malloc(_len_filter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
              filter[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          filter[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mbfl_filt_ident_hz(c,filter);
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
