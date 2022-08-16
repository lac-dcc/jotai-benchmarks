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

/* Type definitions */
struct pci_dev {int dummy; } ;

/* Variables and functions */

void remove_dev_pci_data(struct pci_dev *pdev)
{
#ifdef CONFIG_PCI_IOV
	struct pci_dn *parent;
	struct pci_dn *pdn, *tmp;
	int i;

	/*
	 * VF and VF PE are created/released dynamically, so we need to
	 * bind/unbind them.  Otherwise the VF and VF PE would be mismatched
	 * when re-enabling SR-IOV.
	 */
	if (pdev->is_virtfn) {
		pdn = pci_get_pdn(pdev);
		pdn->pe_number = IODA_INVALID_PE;
		return;
	}

	/* Only support IOV PF for now */
	if (!pdev->is_physfn)
		return;

	/* Check if VFs have been populated */
	pdn = pci_get_pdn(pdev);
	if (!pdn || !(pdn->flags & PCI_DN_FLAG_IOV_VF))
		return;

	pdn->flags &= ~PCI_DN_FLAG_IOV_VF;
	parent = pci_bus_to_pdn(pdev->bus);
	if (!parent)
		return;

	/*
	 * We might introduce flag to pci_dn in future
	 * so that we can release VF's firmware data in
	 * a batch mode.
	 */
	for (i = 0; i < pci_sriov_get_totalvfs(pdev); i++) {
		struct eeh_dev *edev __maybe_unused;

		list_for_each_entry_safe(pdn, tmp,
			&parent->child_list, list) {
			if (pdn->busno != pci_iov_virtfn_bus(pdev, i) ||
			    pdn->devfn != pci_iov_virtfn_devfn(pdev, i))
				continue;

#ifdef CONFIG_EEH
			/* Release EEH device for the VF */
			edev = pdn_to_eeh_dev(pdn);
			if (edev) {
				pdn->edev = NULL;
				kfree(edev);
			}
#endif /* CONFIG_EEH */

			if (!list_empty(&pdn->list))
				list_del(&pdn->list);

			kfree(pdn);
		}
	}
#endif /* CONFIG_PCI_IOV */
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
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          remove_dev_pci_data(pdev);
          free(pdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pdev0 = 100;
          struct pci_dev * pdev = (struct pci_dev *) malloc(_len_pdev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          remove_dev_pci_data(pdev);
          free(pdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
