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
struct ipr_ioarcb_ata_regs {int /*<<< orphan*/  ctl; int /*<<< orphan*/  hob_lbah; int /*<<< orphan*/  hob_lbam; int /*<<< orphan*/  hob_lbal; int /*<<< orphan*/  hob_nsect; int /*<<< orphan*/  hob_feature; int /*<<< orphan*/  command; int /*<<< orphan*/  device; int /*<<< orphan*/  lbah; int /*<<< orphan*/  lbam; int /*<<< orphan*/  lbal; int /*<<< orphan*/  nsect; int /*<<< orphan*/  feature; } ;
struct ata_taskfile {int /*<<< orphan*/  ctl; int /*<<< orphan*/  hob_lbah; int /*<<< orphan*/  hob_lbam; int /*<<< orphan*/  hob_lbal; int /*<<< orphan*/  hob_nsect; int /*<<< orphan*/  hob_feature; int /*<<< orphan*/  command; int /*<<< orphan*/  device; int /*<<< orphan*/  lbah; int /*<<< orphan*/  lbam; int /*<<< orphan*/  lbal; int /*<<< orphan*/  nsect; int /*<<< orphan*/  feature; } ;

/* Variables and functions */

__attribute__((used)) static void ipr_copy_sata_tf(struct ipr_ioarcb_ata_regs *regs,
			     struct ata_taskfile *tf)
{
	regs->feature = tf->feature;
	regs->nsect = tf->nsect;
	regs->lbal = tf->lbal;
	regs->lbam = tf->lbam;
	regs->lbah = tf->lbah;
	regs->device = tf->device;
	regs->command = tf->command;
	regs->hob_feature = tf->hob_feature;
	regs->hob_nsect = tf->hob_nsect;
	regs->hob_lbal = tf->hob_lbal;
	regs->hob_lbam = tf->hob_lbam;
	regs->hob_lbah = tf->hob_lbah;
	regs->ctl = tf->ctl;
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
          int _len_regs0 = 1;
          struct ipr_ioarcb_ata_regs * regs = (struct ipr_ioarcb_ata_regs *) malloc(_len_regs0*sizeof(struct ipr_ioarcb_ata_regs));
          for(int _i0 = 0; _i0 < _len_regs0; _i0++) {
            regs[_i0].ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].hob_feature = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].command = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        regs[_i0].feature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tf0 = 1;
          struct ata_taskfile * tf = (struct ata_taskfile *) malloc(_len_tf0*sizeof(struct ata_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf[_i0].ctl = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].hob_feature = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].command = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].nsect = ((-2 * (next_i()%2)) + 1) * next_i();
        tf[_i0].feature = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipr_copy_sata_tf(regs,tf);
          free(regs);
          free(tf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
