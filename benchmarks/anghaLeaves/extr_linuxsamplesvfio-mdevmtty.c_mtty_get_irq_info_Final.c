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
struct vfio_irq_info {int index; int flags; int count; } ;
struct mdev_device {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 
 int VFIO_IRQ_INFO_AUTOMASKED ; 
 int VFIO_IRQ_INFO_EVENTFD ; 
 int VFIO_IRQ_INFO_MASKABLE ; 
 int VFIO_IRQ_INFO_NORESIZE ; 
#define  VFIO_PCI_INTX_IRQ_INDEX 130 
#define  VFIO_PCI_MSI_IRQ_INDEX 129 
#define  VFIO_PCI_REQ_IRQ_INDEX 128 

int mtty_get_irq_info(struct mdev_device *mdev, struct vfio_irq_info *irq_info)
{
	switch (irq_info->index) {
	case VFIO_PCI_INTX_IRQ_INDEX:
	case VFIO_PCI_MSI_IRQ_INDEX:
	case VFIO_PCI_REQ_IRQ_INDEX:
		break;

	default:
		return -EINVAL;
	}

	irq_info->flags = VFIO_IRQ_INFO_EVENTFD;
	irq_info->count = 1;

	if (irq_info->index == VFIO_PCI_INTX_IRQ_INDEX)
		irq_info->flags |= (VFIO_IRQ_INFO_MASKABLE |
				VFIO_IRQ_INFO_AUTOMASKED);
	else
		irq_info->flags |= VFIO_IRQ_INFO_NORESIZE;

	return 0;
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
          int _len_mdev0 = 1;
          struct mdev_device * mdev = (struct mdev_device *) malloc(_len_mdev0*sizeof(struct mdev_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_irq_info0 = 1;
          struct vfio_irq_info * irq_info = (struct vfio_irq_info *) malloc(_len_irq_info0*sizeof(struct vfio_irq_info));
          for(int _i0 = 0; _i0 < _len_irq_info0; _i0++) {
            irq_info[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        irq_info[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mtty_get_irq_info(mdev,irq_info);
          printf("%d\n", benchRet); 
          free(mdev);
          free(irq_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
