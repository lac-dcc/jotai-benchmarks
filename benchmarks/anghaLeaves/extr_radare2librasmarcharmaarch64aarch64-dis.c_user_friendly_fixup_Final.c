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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_3__* operands; TYPE_1__* opcode; } ;
typedef  TYPE_4__ aarch64_inst ;
struct TYPE_7__ {int value; } ;
struct TYPE_8__ {int /*<<< orphan*/  qualifier; TYPE_2__ imm; } ;
struct TYPE_6__ {int iclass; } ;

/* Variables and functions */
 int /*<<< orphan*/  AARCH64_OPND_QLF_W ; 
#define  testbranch 128 

__attribute__((used)) static void
user_friendly_fixup (aarch64_inst *inst)
{
  switch (inst->opcode->iclass)
    {
    case testbranch:
      /* TBNZ Xn|Wn, #uimm6, label
	 Test and Branch Not Zero: conditionally jumps to label if bit number
	 uimm6 in register Xn is not zero.  The bit number implies the width of
	 the register, which may be written and should be disassembled as Wn if
	 uimm is less than 32. Limited to a branch offset range of +/- 32KiB.
	 */
      if (inst->operands[1].imm.value < 32)
	inst->operands[0].qualifier = AARCH64_OPND_QLF_W;
      break;
    default: break;
    }
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
          int _len_inst0 = 1;
          struct TYPE_9__ * inst = (struct TYPE_9__ *) malloc(_len_inst0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_inst0; _i0++) {
              int _len_inst__i0__operands0 = 1;
          inst[_i0].operands = (struct TYPE_8__ *) malloc(_len_inst__i0__operands0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_inst__i0__operands0; _j0++) {
            inst[_i0].operands->qualifier = ((-2 * (next_i()%2)) + 1) * next_i();
        inst[_i0].operands->imm.value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inst__i0__opcode0 = 1;
          inst[_i0].opcode = (struct TYPE_6__ *) malloc(_len_inst__i0__opcode0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_inst__i0__opcode0; _j0++) {
            inst[_i0].opcode->iclass = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          user_friendly_fixup(inst);
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].operands);
          }
          for(int _aux = 0; _aux < _len_inst0; _aux++) {
          free(inst[_aux].opcode);
          }
          free(inst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
