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
struct pci_dev {int device; } ;
struct dw_pci_controller {int /*<<< orphan*/  bus_num; int /*<<< orphan*/  bus_cfg; } ;

/* Variables and functions */
 int /*<<< orphan*/  DW_IC_CON_SPEED_MASK ; 
 int /*<<< orphan*/  DW_IC_CON_SPEED_STD ; 
 int ENODEV ; 

__attribute__((used)) static int mfld_setup(struct pci_dev *pdev, struct dw_pci_controller *c)
{
	switch (pdev->device) {
	case 0x0817:
		c->bus_cfg &= ~DW_IC_CON_SPEED_MASK;
		c->bus_cfg |= DW_IC_CON_SPEED_STD;
		/* fall through */
	case 0x0818:
	case 0x0819:
		c->bus_num = pdev->device - 0x817 + 3;
		return 0;
	case 0x082C:
	case 0x082D:
	case 0x082E:
		c->bus_num = pdev->device - 0x82C + 0;
		return 0;
	}
	return -ENODEV;
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
          int _len_pdev0 = 1;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct dw_pci_controller * c = (struct dw_pci_controller *) malloc(_len_c0*sizeof(struct dw_pci_controller));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].bus_num = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].bus_cfg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mfld_setup(pdev,c);
          printf("%d\n", benchRet); 
          free(pdev);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
