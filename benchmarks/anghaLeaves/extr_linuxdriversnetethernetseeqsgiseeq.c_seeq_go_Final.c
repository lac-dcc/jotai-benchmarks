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
struct sgiseeq_regs {int rstat; } ;
struct sgiseeq_private {int mode; } ;
struct hpc3_ethregs {int /*<<< orphan*/  rx_ctrl; } ;

/* Variables and functions */
 int /*<<< orphan*/  HPC3_ERXCTRL_ACTIVE ; 
 int RSTAT_GO_BITS ; 

__attribute__((used)) static inline void seeq_go(struct sgiseeq_private *sp,
			   struct hpc3_ethregs *hregs,
			   struct sgiseeq_regs *sregs)
{
	sregs->rstat = sp->mode | RSTAT_GO_BITS;
	hregs->rx_ctrl = HPC3_ERXCTRL_ACTIVE;
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
          int _len_sp0 = 1;
          struct sgiseeq_private * sp = (struct sgiseeq_private *) malloc(_len_sp0*sizeof(struct sgiseeq_private));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hregs0 = 1;
          struct hpc3_ethregs * hregs = (struct hpc3_ethregs *) malloc(_len_hregs0*sizeof(struct hpc3_ethregs));
          for(int _i0 = 0; _i0 < _len_hregs0; _i0++) {
            hregs[_i0].rx_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sregs0 = 1;
          struct sgiseeq_regs * sregs = (struct sgiseeq_regs *) malloc(_len_sregs0*sizeof(struct sgiseeq_regs));
          for(int _i0 = 0; _i0 < _len_sregs0; _i0++) {
            sregs[_i0].rstat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          seeq_go(sp,hregs,sregs);
          free(sp);
          free(hregs);
          free(sregs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
