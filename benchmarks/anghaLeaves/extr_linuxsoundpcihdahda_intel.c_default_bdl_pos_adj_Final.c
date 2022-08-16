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
struct azx {int driver_type; TYPE_1__* pci; } ;
struct TYPE_2__ {scalar_t__ vendor; int device; } ;

/* Variables and functions */
#define  AZX_DRIVER_ICH 129 
#define  AZX_DRIVER_PCH 128 
 scalar_t__ PCI_VENDOR_ID_INTEL ; 

__attribute__((used)) static int default_bdl_pos_adj(struct azx *chip)
{
	/* some exceptions: Atoms seem problematic with value 1 */
	if (chip->pci->vendor == PCI_VENDOR_ID_INTEL) {
		switch (chip->pci->device) {
		case 0x0f04: /* Baytrail */
		case 0x2284: /* Braswell */
			return 32;
		}
	}

	switch (chip->driver_type) {
	case AZX_DRIVER_ICH:
	case AZX_DRIVER_PCH:
		return 1;
	default:
		return 32;
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
          int _len_chip0 = 1;
          struct azx * chip = (struct azx *) malloc(_len_chip0*sizeof(struct azx));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].driver_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__pci0 = 1;
          chip[_i0].pci = (struct TYPE_2__ *) malloc(_len_chip__i0__pci0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__pci0; _j0++) {
            chip[_i0].pci->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].pci->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = default_bdl_pos_adj(chip);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].pci);
          }
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
