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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uprobe_opcode_t ;
struct TYPE_6__ {int /*<<< orphan*/  rt; } ;
struct TYPE_5__ {int /*<<< orphan*/  func; } ;
struct TYPE_4__ {int opcode; } ;
union mips_instruction {TYPE_3__ u_format; TYPE_2__ r_format; TYPE_1__ i_format; int /*<<< orphan*/  word; } ;

/* Variables and functions */
#define  bcond_op 142 
#define  break_op 141 
#define  spec_op 140 
#define  teq_op 139 
#define  teqi_op 138 
#define  tge_op 137 
#define  tgei_op 136 
#define  tgeiu_op 135 
#define  tgeu_op 134 
#define  tlt_op 133 
#define  tlti_op 132 
#define  tltiu_op 131 
#define  tltu_op 130 
#define  tne_op 129 
#define  tnei_op 128 

bool is_trap_insn(uprobe_opcode_t *insn)
{
	union mips_instruction inst;

	inst.word = *insn;

	switch (inst.i_format.opcode) {
	case spec_op:
		switch (inst.r_format.func) {
		case break_op:
		case teq_op:
		case tge_op:
		case tgeu_op:
		case tlt_op:
		case tltu_op:
		case tne_op:
			return 1;
		}
		break;

	case bcond_op:	/* Yes, really ...  */
		switch (inst.u_format.rt) {
		case teqi_op:
		case tgei_op:
		case tgeiu_op:
		case tlti_op:
		case tltiu_op:
		case tnei_op:
			return 1;
		}
		break;
	}

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
          int * insn = (int *) malloc(_len_insn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_trap_insn(insn);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_insn0 = 100;
          int * insn = (int *) malloc(_len_insn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_insn0; _i0++) {
            insn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_trap_insn(insn);
          printf("%d\n", benchRet); 
          free(insn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
