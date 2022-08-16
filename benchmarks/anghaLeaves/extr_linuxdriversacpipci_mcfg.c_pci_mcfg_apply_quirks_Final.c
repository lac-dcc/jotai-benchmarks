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
struct resource {int dummy; } ;
struct pci_ecam_ops {int dummy; } ;
struct acpi_pci_root {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void pci_mcfg_apply_quirks(struct acpi_pci_root *root,
				  struct resource *cfgres,
				  struct pci_ecam_ops **ecam_ops)
{
#ifdef CONFIG_PCI_QUIRKS
	u16 segment = root->segment;
	struct resource *bus_range = &root->secondary;
	struct mcfg_fixup *f;
	int i;

	for (i = 0, f = mcfg_quirks; i < ARRAY_SIZE(mcfg_quirks); i++, f++) {
		if (pci_mcfg_quirk_matches(f, segment, bus_range)) {
			if (f->cfgres.start)
				*cfgres = f->cfgres;
			if (f->ops)
				*ecam_ops =  f->ops;
			dev_info(&root->device->dev, "MCFG quirk: ECAM at %pR for %pR with %ps\n",
				 cfgres, bus_range, *ecam_ops);
			return;
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
          int _len_root0 = 1;
          struct acpi_pci_root * root = (struct acpi_pci_root *) malloc(_len_root0*sizeof(struct acpi_pci_root));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
            root[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfgres0 = 1;
          struct resource * cfgres = (struct resource *) malloc(_len_cfgres0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_cfgres0; _i0++) {
            cfgres[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ecam_ops0 = 1;
          struct pci_ecam_ops ** ecam_ops = (struct pci_ecam_ops **) malloc(_len_ecam_ops0*sizeof(struct pci_ecam_ops *));
          for(int _i0 = 0; _i0 < _len_ecam_ops0; _i0++) {
            int _len_ecam_ops1 = 1;
            ecam_ops[_i0] = (struct pci_ecam_ops *) malloc(_len_ecam_ops1*sizeof(struct pci_ecam_ops));
            for(int _i1 = 0; _i1 < _len_ecam_ops1; _i1++) {
              ecam_ops[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          pci_mcfg_apply_quirks(root,cfgres,ecam_ops);
          free(root);
          free(cfgres);
          for(int i1 = 0; i1 < _len_ecam_ops0; i1++) {
            int _len_ecam_ops1 = 1;
              free(ecam_ops[i1]);
          }
          free(ecam_ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
