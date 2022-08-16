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
struct TYPE_2__ {int /*<<< orphan*/  disk; } ;
struct drbd_device {TYPE_1__ state; } ;
struct device_info {int /*<<< orphan*/  dev_disk_state; } ;

/* Variables and functions */

__attribute__((used)) static void device_to_info(struct device_info *info,
			   struct drbd_device *device)
{
	info->dev_disk_state = device->state.disk;
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
          struct device_info * info = (struct device_info *) malloc(_len_info0*sizeof(struct device_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].dev_disk_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_device0 = 1;
          struct drbd_device * device = (struct drbd_device *) malloc(_len_device0*sizeof(struct drbd_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            device[_i0].state.disk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          device_to_info(info,device);
          free(info);
          free(device);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
