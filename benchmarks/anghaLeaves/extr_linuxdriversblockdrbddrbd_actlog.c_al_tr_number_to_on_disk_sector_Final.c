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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct drbd_device {unsigned int al_tr_number; TYPE_1__* ldev; } ;
typedef  scalar_t__ sector_t ;
struct TYPE_4__ {unsigned int al_stripes; unsigned int al_stripe_size_4k; unsigned int al_size_4k; scalar_t__ al_offset; scalar_t__ md_offset; } ;
struct TYPE_3__ {TYPE_2__ md; } ;

/* Variables and functions */

__attribute__((used)) static sector_t al_tr_number_to_on_disk_sector(struct drbd_device *device)
{
	const unsigned int stripes = device->ldev->md.al_stripes;
	const unsigned int stripe_size_4kB = device->ldev->md.al_stripe_size_4k;

	/* transaction number, modulo on-disk ring buffer wrap around */
	unsigned int t = device->al_tr_number % (device->ldev->md.al_size_4k);

	/* ... to aligned 4k on disk block */
	t = ((t % stripes) * stripe_size_4kB) + t/stripes;

	/* ... to 512 byte sector in activity log */
	t *= 8;

	/* ... plus offset to the on disk position */
	return device->ldev->md.md_offset + device->ldev->md.al_offset + t;
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
          int _len_device0 = 1;
          struct drbd_device * device = (struct drbd_device *) malloc(_len_device0*sizeof(struct drbd_device));
          for(int _i0 = 0; _i0 < _len_device0; _i0++) {
            device[_i0].al_tr_number = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_device__i0__ldev0 = 1;
          device[_i0].ldev = (struct TYPE_3__ *) malloc(_len_device__i0__ldev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_device__i0__ldev0; _j0++) {
            device[_i0].ldev->md.al_stripes = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].ldev->md.al_stripe_size_4k = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].ldev->md.al_size_4k = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].ldev->md.al_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        device[_i0].ldev->md.md_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = al_tr_number_to_on_disk_sector(device);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_device0; _aux++) {
          free(device[_aux].ldev);
          }
          free(device);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
