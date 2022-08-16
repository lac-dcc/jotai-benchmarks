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
struct return_instance {scalar_t__ stack; } ;
struct pt_regs {scalar_t__ sp; } ;
typedef  enum rp_check { ____Placeholder_rp_check } rp_check ;

/* Variables and functions */
 int RP_CHECK_CHAIN_CALL ; 

bool arch_uretprobe_is_alive(struct return_instance *ret, enum rp_check ctx,
		struct pt_regs *regs)
{
	/*
	 * If a simple branch instruction (B) was called for retprobed
	 * assembly label then return true even when regs->sp and ret->stack
	 * are same. It will ensure that cleanup and reporting of return
	 * instances corresponding to callee label is done when
	 * handle_trampoline for called function is executed.
	 */
	if (ctx == RP_CHECK_CHAIN_CALL)
		return regs->sp <= ret->stack;
	else
		return regs->sp < ret->stack;
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
          enum rp_check ctx = 0;
          int _len_ret0 = 1;
          struct return_instance * ret = (struct return_instance *) malloc(_len_ret0*sizeof(struct return_instance));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0].stack = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].sp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = arch_uretprobe_is_alive(ret,ctx,regs);
          printf("%d\n", benchRet); 
          free(ret);
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
