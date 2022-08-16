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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ type; scalar_t__ reg; scalar_t__ offset; } ;
struct TYPE_3__ {scalar_t__ type; scalar_t__ reg; } ;
struct stack_op {TYPE_2__ src; TYPE_1__ dest; } ;
struct instruction {struct stack_op stack_op; } ;
struct cfi_reg {scalar_t__ base; int offset; } ;
struct insn_state {struct cfi_reg cfa; } ;

/* Variables and functions */
 scalar_t__ CFI_SP ; 
 scalar_t__ OP_DEST_PUSH ; 
 scalar_t__ OP_DEST_REG ; 
 scalar_t__ OP_SRC_ADD ; 
 scalar_t__ OP_SRC_POP ; 

__attribute__((used)) static int update_insn_state_regs(struct instruction *insn, struct insn_state *state)
{
	struct cfi_reg *cfa = &state->cfa;
	struct stack_op *op = &insn->stack_op;

	if (cfa->base != CFI_SP)
		return 0;

	/* push */
	if (op->dest.type == OP_DEST_PUSH)
		cfa->offset += 8;

	/* pop */
	if (op->src.type == OP_SRC_POP)
		cfa->offset -= 8;

	/* add immediate to sp */
	if (op->dest.type == OP_DEST_REG && op->src.type == OP_SRC_ADD &&
	    op->dest.reg == CFI_SP && op->src.reg == CFI_SP)
		cfa->offset -= op->src.offset;

	return 0;
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
          int _len_insn0 = 1;
          struct instruction * insn = (struct instruction *) malloc(_len_insn0*sizeof(struct instruction));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0].stack_op.src.type = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].stack_op.src.reg = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].stack_op.src.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].stack_op.dest.type = ((-2 * (next_i()%2)) + 1) * next_i();
        insn[_i0].stack_op.dest.reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          struct insn_state * state = (struct insn_state *) malloc(_len_state0*sizeof(struct insn_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].cfa.base = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].cfa.offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = update_insn_state_regs(insn,state);
          printf("%d\n", benchRet); 
          free(insn);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
