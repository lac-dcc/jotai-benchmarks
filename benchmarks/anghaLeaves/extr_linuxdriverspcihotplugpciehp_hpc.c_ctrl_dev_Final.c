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
struct pci_dev {int dummy; } ;
struct controller {TYPE_1__* pcie; } ;
struct TYPE_2__ {struct pci_dev* port; } ;

/* Variables and functions */

__attribute__((used)) static inline struct pci_dev *ctrl_dev(struct controller *ctrl)
{
	return ctrl->pcie->port;
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
          int _len_ctrl0 = 1;
          struct controller * ctrl = (struct controller *) malloc(_len_ctrl0*sizeof(struct controller));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__pcie0 = 1;
          ctrl[_i0].pcie = (struct TYPE_2__ *) malloc(_len_ctrl__i0__pcie0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__pcie0; _j0++) {
              int _len_ctrl__i0__pcie_port0 = 1;
          ctrl[_i0].pcie->port = (struct pci_dev *) malloc(_len_ctrl__i0__pcie_port0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__pcie_port0; _j0++) {
            ctrl[_i0].pcie->port->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct pci_dev * benchRet = ctrl_dev(ctrl);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].pcie);
          }
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}