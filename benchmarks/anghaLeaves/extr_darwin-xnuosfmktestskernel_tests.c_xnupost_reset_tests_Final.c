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
typedef  TYPE_1__* xnupost_test_t ;
typedef  size_t uint32_t ;
typedef  int /*<<< orphan*/  kern_return_t ;
struct TYPE_3__ {int xt_retval; int /*<<< orphan*/  xt_test_actions; scalar_t__ xt_end_time; scalar_t__ xt_begin_time; } ;

/* Variables and functions */
 int /*<<< orphan*/  KERN_SUCCESS ; 
 int /*<<< orphan*/  XT_ACTION_NONE ; 

kern_return_t
xnupost_reset_tests(xnupost_test_t test_list, uint32_t test_count)
{
	uint32_t i = 0;
	xnupost_test_t testp;
	for (; i < test_count; i++) {
		testp                  = &test_list[i];
		testp->xt_begin_time   = 0;
		testp->xt_end_time     = 0;
		testp->xt_test_actions = XT_ACTION_NONE;
		testp->xt_retval       = -1;
	}
	return KERN_SUCCESS;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 5111
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 1794
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 1548
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 1548
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 1548
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 1794
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 2304
          // ------------------------------- 

          unsigned long test_count = 255;
        
          int _len_test_list0 = 65025;
          struct TYPE_3__ * test_list = (struct TYPE_3__ *) malloc(_len_test_list0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_test_list0; _i0++) {
              test_list[_i0].xt_retval = ((-2 * (next_i()%2)) + 1) * next_i();
          test_list[_i0].xt_test_actions = ((-2 * (next_i()%2)) + 1) * next_i();
          test_list[_i0].xt_end_time = ((-2 * (next_i()%2)) + 1) * next_i();
          test_list[_i0].xt_begin_time = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xnupost_reset_tests(test_list,test_count);
          printf("%d\n", benchRet); 
          free(test_list);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 211
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 79
          // ------------------------------- 
          // static_instructions_O2 : 30
          // dynamic_instructions_O2 : 78
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 78
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 78
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 79
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 99
          // ------------------------------- 

          unsigned long test_count = 10;
        
          int _len_test_list0 = 100;
          struct TYPE_3__ * test_list = (struct TYPE_3__ *) malloc(_len_test_list0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_test_list0; _i0++) {
              test_list[_i0].xt_retval = ((-2 * (next_i()%2)) + 1) * next_i();
          test_list[_i0].xt_test_actions = ((-2 * (next_i()%2)) + 1) * next_i();
          test_list[_i0].xt_end_time = ((-2 * (next_i()%2)) + 1) * next_i();
          test_list[_i0].xt_begin_time = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = xnupost_reset_tests(test_list,test_count);
          printf("%d\n", benchRet); 
          free(test_list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
