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
struct pci_dev {scalar_t__ vendor; scalar_t__ device; scalar_t__ revision; } ;
struct cas {int /*<<< orphan*/  cas_flags; struct pci_dev* pdev; } ;

/* Variables and functions */
 int /*<<< orphan*/  CAS_FLAG_NO_HW_CSUM ; 
 int /*<<< orphan*/  CAS_FLAG_REG_PLUS ; 
 int /*<<< orphan*/  CAS_FLAG_SATURN ; 
 int /*<<< orphan*/  CAS_FLAG_TARGET_ABORT ; 
 scalar_t__ CAS_ID_REV2 ; 
 scalar_t__ CAS_ID_REVPLUS ; 
 scalar_t__ CAS_ID_REVPLUS02u ; 
 scalar_t__ PCI_DEVICE_ID_NS_SATURN ; 
 scalar_t__ PCI_DEVICE_ID_SUN_CASSINI ; 
 scalar_t__ PCI_VENDOR_ID_NS ; 
 scalar_t__ PCI_VENDOR_ID_SUN ; 

__attribute__((used)) static void cas_check_pci_invariants(struct cas *cp)
{
	struct pci_dev *pdev = cp->pdev;

	cp->cas_flags = 0;
	if ((pdev->vendor == PCI_VENDOR_ID_SUN) &&
	    (pdev->device == PCI_DEVICE_ID_SUN_CASSINI)) {
		if (pdev->revision >= CAS_ID_REVPLUS)
			cp->cas_flags |= CAS_FLAG_REG_PLUS;
		if (pdev->revision < CAS_ID_REVPLUS02u)
			cp->cas_flags |= CAS_FLAG_TARGET_ABORT;

		/* Original Cassini supports HW CSUM, but it's not
		 * enabled by default as it can trigger TX hangs.
		 */
		if (pdev->revision < CAS_ID_REV2)
			cp->cas_flags |= CAS_FLAG_NO_HW_CSUM;
	} else {
		/* Only sun has original cassini chips.  */
		cp->cas_flags |= CAS_FLAG_REG_PLUS;

		/* We use a flag because the same phy might be externally
		 * connected.
		 */
		if ((pdev->vendor == PCI_VENDOR_ID_NS) &&
		    (pdev->device == PCI_DEVICE_ID_NS_SATURN))
			cp->cas_flags |= CAS_FLAG_SATURN;
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
          int _len_cp0 = 1;
          struct cas * cp = (struct cas *) malloc(_len_cp0*sizeof(struct cas));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
            cp[_i0].cas_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cp__i0__pdev0 = 1;
          cp[_i0].pdev = (struct pci_dev *) malloc(_len_cp__i0__pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_cp__i0__pdev0; _j0++) {
            cp[_i0].pdev->vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        cp[_i0].pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
        cp[_i0].pdev->revision = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cas_check_pci_invariants(cp);
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].pdev);
          }
          free(cp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
