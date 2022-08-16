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
struct x86_emulate_ctxt {int b; scalar_t__ rep_prefix; int eflags; } ;

/* Variables and functions */
 scalar_t__ REPE_PREFIX ; 
 scalar_t__ REPNE_PREFIX ; 
 int X86_EFLAGS_ZF ; 

__attribute__((used)) static bool string_insn_completed(struct x86_emulate_ctxt *ctxt)
{
	/* The second termination condition only applies for REPE
	 * and REPNE. Test if the repeat string operation prefix is
	 * REPE/REPZ or REPNE/REPNZ and if it's the case it tests the
	 * corresponding termination condition according to:
	 * 	- if REPE/REPZ and ZF = 0 then done
	 * 	- if REPNE/REPNZ and ZF = 1 then done
	 */
	if (((ctxt->b == 0xa6) || (ctxt->b == 0xa7) ||
	     (ctxt->b == 0xae) || (ctxt->b == 0xaf))
	    && (((ctxt->rep_prefix == REPE_PREFIX) &&
		 ((ctxt->eflags & X86_EFLAGS_ZF) == 0))
		|| ((ctxt->rep_prefix == REPNE_PREFIX) &&
		    ((ctxt->eflags & X86_EFLAGS_ZF) == X86_EFLAGS_ZF))))
		return true;

	return false;
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
          int _len_ctxt0 = 1;
          struct x86_emulate_ctxt * ctxt = (struct x86_emulate_ctxt *) malloc(_len_ctxt0*sizeof(struct x86_emulate_ctxt));
          for(int _i0 = 0; _i0 < _len_ctxt0; _i0++) {
            ctxt[_i0].b = ((-2 * (next_i()%2)) + 1) * next_i();
        ctxt[_i0].rep_prefix = ((-2 * (next_i()%2)) + 1) * next_i();
        ctxt[_i0].eflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = string_insn_completed(ctxt);
          printf("%d\n", benchRet); 
          free(ctxt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
