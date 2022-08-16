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

/* Variables and functions */

__attribute__((used)) static void ide_generic_check_pci_legacy_iobases(int *primary, int *secondary)
{
#ifdef CONFIG_PCI
	struct pci_dev *p = NULL;
	u16 val;

	for_each_pci_dev(p) {
		if (pci_resource_start(p, 0) == 0x1f0)
			*primary = 1;
		if (pci_resource_start(p, 2) == 0x170)
			*secondary = 1;

		/* Cyrix CS55{1,2}0 pre SFF MWDMA ATA on the bridge */
		if (p->vendor == PCI_VENDOR_ID_CYRIX &&
		    (p->device == PCI_DEVICE_ID_CYRIX_5510 ||
		     p->device == PCI_DEVICE_ID_CYRIX_5520))
			*primary = *secondary = 1;

		/* Intel MPIIX - PIO ATA on non PCI side of bridge */
		if (p->vendor == PCI_VENDOR_ID_INTEL &&
		    p->device == PCI_DEVICE_ID_INTEL_82371MX) {
			pci_read_config_word(p, 0x6C, &val);
			if (val & 0x8000) {
				/* ATA port enabled */
				if (val & 0x4000)
					*secondary = 1;
				else
					*primary = 1;
			}
		}
	}
#endif
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
          int _len_primary0 = 1;
          int * primary = (int *) malloc(_len_primary0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_primary0; _i0++) {
            primary[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_secondary0 = 1;
          int * secondary = (int *) malloc(_len_secondary0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_secondary0; _i0++) {
            secondary[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ide_generic_check_pci_legacy_iobases(primary,secondary);
          free(primary);
          free(secondary);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
