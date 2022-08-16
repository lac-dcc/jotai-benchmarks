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
struct vfio_device_info {int flags; int /*<<< orphan*/  num_irqs; int /*<<< orphan*/  num_regions; } ;

/* Variables and functions */
 int /*<<< orphan*/  VFIO_CCW_NUM_IRQS ; 
 int /*<<< orphan*/  VFIO_CCW_NUM_REGIONS ; 
 int VFIO_DEVICE_FLAGS_CCW ; 
 int VFIO_DEVICE_FLAGS_RESET ; 

__attribute__((used)) static int vfio_ccw_mdev_get_device_info(struct vfio_device_info *info)
{
	info->flags = VFIO_DEVICE_FLAGS_CCW | VFIO_DEVICE_FLAGS_RESET;
	info->num_regions = VFIO_CCW_NUM_REGIONS;
	info->num_irqs = VFIO_CCW_NUM_IRQS;

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
          int _len_info0 = 1;
          struct vfio_device_info * info = (struct vfio_device_info *) malloc(_len_info0*sizeof(struct vfio_device_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].num_irqs = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].num_regions = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vfio_ccw_mdev_get_device_info(info);
          printf("%d\n", benchRet); 
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
