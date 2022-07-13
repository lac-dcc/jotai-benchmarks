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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct vnic_dev {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;

/* Variables and functions */

struct pci_dev *vnic_dev_get_pdev(struct vnic_dev *vdev)
{
	return vdev->pdev;
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
          int _len_vdev0 = 1;
          struct vnic_dev * vdev = (struct vnic_dev *) malloc(_len_vdev0*sizeof(struct vnic_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
              int _len_vdev__i0__pdev0 = 1;
          vdev[_i0].pdev = (struct pci_dev *) malloc(_len_vdev__i0__pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_vdev__i0__pdev0; _j0++) {
            vdev[_i0].pdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct pci_dev * benchRet = vnic_dev_get_pdev(vdev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vdev0; _aux++) {
          free(vdev[_aux].pdev);
          }
          free(vdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vdev0 = 65025;
          struct vnic_dev * vdev = (struct vnic_dev *) malloc(_len_vdev0*sizeof(struct vnic_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
              int _len_vdev__i0__pdev0 = 1;
          vdev[_i0].pdev = (struct pci_dev *) malloc(_len_vdev__i0__pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_vdev__i0__pdev0; _j0++) {
            vdev[_i0].pdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct pci_dev * benchRet = vnic_dev_get_pdev(vdev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vdev0; _aux++) {
          free(vdev[_aux].pdev);
          }
          free(vdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vdev0 = 100;
          struct vnic_dev * vdev = (struct vnic_dev *) malloc(_len_vdev0*sizeof(struct vnic_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
              int _len_vdev__i0__pdev0 = 1;
          vdev[_i0].pdev = (struct pci_dev *) malloc(_len_vdev__i0__pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_vdev__i0__pdev0; _j0++) {
            vdev[_i0].pdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct pci_dev * benchRet = vnic_dev_get_pdev(vdev);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_vdev0; _aux++) {
          free(vdev[_aux].pdev);
          }
          free(vdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
