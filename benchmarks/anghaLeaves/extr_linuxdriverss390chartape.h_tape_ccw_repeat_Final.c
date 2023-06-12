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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct ccw1 {int /*<<< orphan*/  cmd_code; scalar_t__ cda; scalar_t__ count; int /*<<< orphan*/  flags; } ;
typedef  scalar_t__ addr_t ;
typedef  int /*<<< orphan*/  __u8 ;
typedef  scalar_t__ __u32 ;

/* Variables and functions */
 int /*<<< orphan*/  CCW_FLAG_CC ; 

__attribute__((used)) static inline struct ccw1 *
tape_ccw_repeat(struct ccw1 *ccw, __u8 cmd_code, int count)
{
	while (count-- > 0) {
		ccw->cmd_code = cmd_code;
		ccw->flags = CCW_FLAG_CC;
		ccw->count = 0;
		ccw->cda = (__u32)(addr_t) &ccw->cmd_code;
		ccw++;
	}
	return ccw;
}

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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 5369
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 2561
          // ------------------------------- 
          // static_instructions_O2 : 59
          // dynamic_instructions_O2 : 1815
          // ------------------------------- 
          // static_instructions_O3 : 59
          // dynamic_instructions_O3 : 1815
          // ------------------------------- 
          // static_instructions_Ofast : 59
          // dynamic_instructions_Ofast : 1815
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 2559
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 2812
          // ------------------------------- 

          int cmd_code = 255;
        
          int count = 255;
        
          int _len_ccw0 = 65025;
          struct ccw1 * ccw = (struct ccw1 *) malloc(_len_ccw0*sizeof(struct ccw1));
          for(int _i0 = 0; _i0 < _len_ccw0; _i0++) {
              ccw[_i0].cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          ccw[_i0].cda = ((-2 * (next_i()%2)) + 1) * next_i();
          ccw[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          ccw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct ccw1 * benchRet = tape_ccw_repeat(ccw,cmd_code,count);
          printf("%d\n", (*benchRet).cmd_code);
          printf("%ld\n", (*benchRet).cda);
          printf("%ld\n", (*benchRet).count);
          printf("%d\n", (*benchRet).flags);
          free(ccw);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 224
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 111
          // ------------------------------- 
          // static_instructions_O2 : 59
          // dynamic_instructions_O2 : 97
          // ------------------------------- 
          // static_instructions_O3 : 59
          // dynamic_instructions_O3 : 97
          // ------------------------------- 
          // static_instructions_Ofast : 59
          // dynamic_instructions_Ofast : 97
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 109
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 117
          // ------------------------------- 

          int cmd_code = 10;
        
          int count = 10;
        
          int _len_ccw0 = 100;
          struct ccw1 * ccw = (struct ccw1 *) malloc(_len_ccw0*sizeof(struct ccw1));
          for(int _i0 = 0; _i0 < _len_ccw0; _i0++) {
              ccw[_i0].cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          ccw[_i0].cda = ((-2 * (next_i()%2)) + 1) * next_i();
          ccw[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          ccw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct ccw1 * benchRet = tape_ccw_repeat(ccw,cmd_code,count);
          printf("%d\n", (*benchRet).cmd_code);
          printf("%ld\n", (*benchRet).cda);
          printf("%ld\n", (*benchRet).count);
          printf("%d\n", (*benchRet).flags);
          free(ccw);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 4
          // dynamic_instructions_O1 : 4
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 4
          // dynamic_instructions_Os : 4
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ccw0 = 1;
          struct ccw1 * ccw = (struct ccw1 *) malloc(_len_ccw0*sizeof(struct ccw1));
          for(int _i0 = 0; _i0 < _len_ccw0; _i0++) {
              ccw[_i0].cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          ccw[_i0].cda = ((-2 * (next_i()%2)) + 1) * next_i();
          ccw[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          ccw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct ccw1 * benchRet = tape_ccw_repeat(ccw,cmd_code,count);
          printf("%d\n", (*benchRet).cmd_code);
          printf("%ld\n", (*benchRet).cda);
          printf("%ld\n", (*benchRet).count);
          printf("%d\n", (*benchRet).flags);
          free(ccw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
