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
typedef  int u32 ;
struct via82cxxx_dev {int via_80w; TYPE_1__* via_config; } ;
struct TYPE_2__ {int udma_mask; } ;

/* Variables and functions */
#define  ATA_UDMA4 130 
#define  ATA_UDMA5 129 
#define  ATA_UDMA6 128 

__attribute__((used)) static void via_cable_detect(struct via82cxxx_dev *vdev, u32 u)
{
	int i;

	switch (vdev->via_config->udma_mask) {
		case ATA_UDMA4:
			for (i = 24; i >= 0; i -= 8)
				if (((u >> (i & 16)) & 8) &&
				    ((u >> i) & 0x20) &&
				     (((u >> i) & 7) < 2)) {
					/*
					 * 2x PCI clock and
					 * UDMA w/ < 3T/cycle
					 */
					vdev->via_80w |= (1 << (1 - (i >> 4)));
				}
			break;

		case ATA_UDMA5:
			for (i = 24; i >= 0; i -= 8)
				if (((u >> i) & 0x10) ||
				    (((u >> i) & 0x20) &&
				     (((u >> i) & 7) < 4))) {
					/* BIOS 80-wire bit or
					 * UDMA w/ < 60ns/cycle
					 */
					vdev->via_80w |= (1 << (1 - (i >> 4)));
				}
			break;

		case ATA_UDMA6:
			for (i = 24; i >= 0; i -= 8)
				if (((u >> i) & 0x10) ||
				    (((u >> i) & 0x20) &&
				     (((u >> i) & 7) < 6))) {
					/* BIOS 80-wire bit or
					 * UDMA w/ < 60ns/cycle
					 */
					vdev->via_80w |= (1 << (1 - (i >> 4)));
				}
			break;
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
          int u = 100;
          int _len_vdev0 = 1;
          struct via82cxxx_dev * vdev = (struct via82cxxx_dev *) malloc(_len_vdev0*sizeof(struct via82cxxx_dev));
          for(int _i0 = 0; _i0 < _len_vdev0; _i0++) {
            vdev[_i0].via_80w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vdev__i0__via_config0 = 1;
          vdev[_i0].via_config = (struct TYPE_2__ *) malloc(_len_vdev__i0__via_config0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_vdev__i0__via_config0; _j0++) {
            vdev[_i0].via_config->udma_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          via_cable_detect(vdev,u);
          for(int _aux = 0; _aux < _len_vdev0; _aux++) {
          free(vdev[_aux].via_config);
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
