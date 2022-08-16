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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ base; scalar_t__ offset; } ;
struct insn_state {scalar_t__ stack_size; TYPE_3__* regs; scalar_t__ drap; TYPE_1__ cfa; } ;
struct TYPE_7__ {scalar_t__ base; scalar_t__ offset; } ;
struct TYPE_10__ {TYPE_4__* regs; TYPE_2__ cfa; } ;
struct TYPE_9__ {scalar_t__ base; scalar_t__ offset; } ;
struct TYPE_8__ {scalar_t__ base; scalar_t__ offset; } ;

/* Variables and functions */
 int CFI_NUM_REGS ; 
 TYPE_5__ initial_func_cfi ; 

__attribute__((used)) static bool has_modified_stack_frame(struct insn_state *state)
{
	int i;

	if (state->cfa.base != initial_func_cfi.cfa.base ||
	    state->cfa.offset != initial_func_cfi.cfa.offset ||
	    state->stack_size != initial_func_cfi.cfa.offset ||
	    state->drap)
		return true;

	for (i = 0; i < CFI_NUM_REGS; i++)
		if (state->regs[i].base != initial_func_cfi.regs[i].base ||
		    state->regs[i].offset != initial_func_cfi.regs[i].offset)
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
          int _len_state0 = 1;
          struct insn_state * state = (struct insn_state *) malloc(_len_state0*sizeof(struct insn_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].stack_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__regs0 = 1;
          state[_i0].regs = (struct TYPE_8__ *) malloc(_len_state__i0__regs0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_state__i0__regs0; _j0++) {
            state[_i0].regs->base = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].regs->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].drap = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].cfa.base = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].cfa.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = has_modified_stack_frame(state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].regs);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
