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
struct tsort_run {int length; } ;
typedef  int ssize_t ;

/* Variables and functions */

__attribute__((used)) static int check_invariant(struct tsort_run *stack, ssize_t stack_curr)
{
	if (stack_curr < 2)
		return 1;

	else if (stack_curr == 2) {
		const ssize_t A = stack[stack_curr - 2].length;
		const ssize_t B = stack[stack_curr - 1].length;
		return (A > B);
	} else {
		const ssize_t A = stack[stack_curr - 3].length;
		const ssize_t B = stack[stack_curr - 2].length;
		const ssize_t C = stack[stack_curr - 1].length;
		return !((A <= B + C) || (B <= C));
	}
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
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 45
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int stack_curr = 255;
        
          int _len_stack0 = 65025;
          struct tsort_run * stack = (struct tsort_run *) malloc(_len_stack0*sizeof(struct tsort_run));
          for(int _i0 = 0; _i0 < _len_stack0; _i0++) {
              stack[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_invariant(stack,stack_curr);
          printf("%d\n", benchRet); 
          free(stack);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 45
          // dynamic_instructions_O0 : 45
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int stack_curr = 10;
        
          int _len_stack0 = 100;
          struct tsort_run * stack = (struct tsort_run *) malloc(_len_stack0*sizeof(struct tsort_run));
          for(int _i0 = 0; _i0 < _len_stack0; _i0++) {
              stack[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_invariant(stack,stack_curr);
          printf("%d\n", benchRet); 
          free(stack);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int stack_curr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_stack0 = 1;
          struct tsort_run * stack = (struct tsort_run *) malloc(_len_stack0*sizeof(struct tsort_run));
          for(int _i0 = 0; _i0 < _len_stack0; _i0++) {
              stack[_i0].length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = check_invariant(stack,stack_curr);
          printf("%d\n", benchRet); 
          free(stack);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
