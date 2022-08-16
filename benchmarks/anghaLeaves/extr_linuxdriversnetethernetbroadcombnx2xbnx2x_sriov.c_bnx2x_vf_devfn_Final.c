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
struct pci_dev {int devfn; } ;
struct bnx2x_sriov {int offset; int stride; } ;
struct bnx2x {TYPE_1__* vfdb; struct pci_dev* pdev; } ;
struct TYPE_2__ {struct bnx2x_sriov sriov; } ;

/* Variables and functions */

__attribute__((used)) static int bnx2x_vf_devfn(struct bnx2x *bp, int vfid)
{
	struct pci_dev *dev = bp->pdev;
	struct bnx2x_sriov *iov = &bp->vfdb->sriov;

	return (dev->devfn + iov->offset + iov->stride * vfid) & 0xff;
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
          int vfid = 100;
          int _len_bp0 = 1;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              int _len_bp__i0__vfdb0 = 1;
          bp[_i0].vfdb = (struct TYPE_2__ *) malloc(_len_bp__i0__vfdb0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bp__i0__vfdb0; _j0++) {
            bp[_i0].vfdb->sriov.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].vfdb->sriov.stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__pdev0 = 1;
          bp[_i0].pdev = (struct pci_dev *) malloc(_len_bp__i0__pdev0*sizeof(struct pci_dev));
          for(int _j0 = 0; _j0 < _len_bp__i0__pdev0; _j0++) {
            bp[_i0].pdev->devfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = bnx2x_vf_devfn(bp,vfid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].vfdb);
          }
          for(int _aux = 0; _aux < _len_bp0; _aux++) {
          free(bp[_aux].pdev);
          }
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
