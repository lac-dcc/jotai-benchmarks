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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {unsigned long saved_tnpc; } ;
struct uprobe_task {unsigned long xol_vaddr; scalar_t__ vaddr; TYPE_1__ autask; } ;
struct pt_regs {scalar_t__ tnpc; scalar_t__ tpc; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long relbranch_fixup(u32 insn, struct uprobe_task *utask,
				     struct pt_regs *regs)
{
	/* Branch not taken, no mods necessary.  */
	if (regs->tnpc == regs->tpc + 0x4UL)
		return utask->autask.saved_tnpc + 0x4UL;

	/* The three cases are call, branch w/prediction,
	 * and traditional branch.
	 */
	if ((insn & 0xc0000000) == 0x40000000 ||
	    (insn & 0xc1c00000) == 0x00400000 ||
	    (insn & 0xc1c00000) == 0x00800000) {
		unsigned long real_pc = (unsigned long) utask->vaddr;
		unsigned long ixol_addr = utask->xol_vaddr;

		/* The instruction did all the work for us
		 * already, just apply the offset to the correct
		 * instruction location.
		 */
		return (real_pc + (regs->tnpc - ixol_addr));
	}

	/* It is jmpl or some other absolute PC modification instruction,
	 * leave NPC as-is.
	 */
	return regs->tnpc;
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
          int insn = 100;
          int _len_utask0 = 1;
          struct uprobe_task * utask = (struct uprobe_task *) malloc(_len_utask0*sizeof(struct uprobe_task));
          for(int _i0 = 0; _i0 < _len_utask0; _i0++) {
            utask[_i0].xol_vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        utask[_i0].vaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        utask[_i0].autask.saved_tnpc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_regs0 = 1;
          struct pt_regs * regs = (struct pt_regs *) malloc(_len_regs0*sizeof(struct pt_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].tnpc = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].tpc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = relbranch_fixup(insn,utask,regs);
          printf("%lu\n", benchRet); 
          free(utask);
          free(regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
