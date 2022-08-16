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
struct ftrace_ops {int flags; int /*<<< orphan*/  func; } ;
typedef  int /*<<< orphan*/  ftrace_func_t ;

/* Variables and functions */
 int FTRACE_OPS_FL_RCU ; 
 int FTRACE_OPS_FL_RECURSION_SAFE ; 
 int /*<<< orphan*/  ftrace_ops_assist_func ; 

ftrace_func_t ftrace_ops_get_func(struct ftrace_ops *ops)
{
	/*
	 * If the function does not handle recursion, needs to be RCU safe,
	 * or does per cpu logic, then we need to call the assist handler.
	 */
	if (!(ops->flags & FTRACE_OPS_FL_RECURSION_SAFE) ||
	    ops->flags & FTRACE_OPS_FL_RCU)
		return ftrace_ops_assist_func;

	return ops->func;
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
          int _len_ops0 = 1;
          struct ftrace_ops * ops = (struct ftrace_ops *) malloc(_len_ops0*sizeof(struct ftrace_ops));
          for(int _i0 = 0; _i0 < _len_ops0; _i0++) {
            ops[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ops[_i0].func = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ftrace_ops_get_func(ops);
          printf("%d\n", benchRet); 
          free(ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
