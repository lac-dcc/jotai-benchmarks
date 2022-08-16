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
struct qlcnic_adapter {struct pci_dev* pdev; } ;
struct pci_dev {unsigned short subsystem_vendor; scalar_t__ device; scalar_t__ subsystem_device; } ;
struct TYPE_2__ {unsigned short sub_vendor; scalar_t__ sub_device; } ;

/* Variables and functions */
 scalar_t__ PCI_DEVICE_ID_QLOGIC_QLE824X ; 
 scalar_t__ PCI_DEVICE_ID_QLOGIC_QLE834X ; 
 TYPE_1__* qlcnic_boards ; 

__attribute__((used)) static bool qlcnic_validate_subsystem_id(struct qlcnic_adapter *adapter,
					 int index)
{
	struct pci_dev *pdev = adapter->pdev;
	unsigned short subsystem_vendor;
	bool ret = true;

	subsystem_vendor = pdev->subsystem_vendor;

	if (pdev->device == PCI_DEVICE_ID_QLOGIC_QLE824X ||
	    pdev->device == PCI_DEVICE_ID_QLOGIC_QLE834X) {
		if (qlcnic_boards[index].sub_vendor == subsystem_vendor &&
		    qlcnic_boards[index].sub_device == pdev->subsystem_device)
			ret = true;
		else
			ret = false;
	}

	return ret;
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
          int index = 100;
          int _len_adapter0 = 1;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__pdev0 = 1;
          adapter[_i0].pdev = (struct pci_dev *) malloc(_len_adapter__i0__pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_adapter__i0__pdev0; _j0++) {
            adapter[_i0].pdev->subsystem_vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].pdev->device = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].pdev->subsystem_device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_validate_subsystem_id(adapter,index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].pdev);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
