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
struct b43_phy {int radio_ver; int /*<<< orphan*/  type; int /*<<< orphan*/  radio_rev; } ;
struct b43_wldev {struct b43_bus_dev* dev; struct b43_phy phy; } ;
struct b43_rfatt {int with_padmix; int att; } ;
struct b43_bus_dev {scalar_t__ board_vendor; scalar_t__ board_type; int board_rev; int chip_id; } ;

/* Variables and functions */
 int /*<<< orphan*/  B43_PHYTYPE_G ; 
 scalar_t__ SSB_BOARDVENDOR_BCM ; 
 scalar_t__ SSB_BOARD_BCM4309G ; 
 scalar_t__ SSB_BOARD_BU4306 ; 

__attribute__((used)) static void default_radio_attenuation(struct b43_wldev *dev,
				      struct b43_rfatt *rf)
{
	struct b43_bus_dev *bdev = dev->dev;
	struct b43_phy *phy = &dev->phy;

	rf->with_padmix = false;

	if (dev->dev->board_vendor == SSB_BOARDVENDOR_BCM &&
	    dev->dev->board_type == SSB_BOARD_BCM4309G) {
		if (dev->dev->board_rev < 0x43) {
			rf->att = 2;
			return;
		} else if (dev->dev->board_rev < 0x51) {
			rf->att = 3;
			return;
		}
	}

	switch (phy->radio_ver) {
	case 0x2053:
		switch (phy->radio_rev) {
		case 1:
			rf->att = 6;
			return;
		}
		break;
	case 0x2050:
		switch (phy->radio_rev) {
		case 0:
			rf->att = 5;
			return;
		case 1:
			if (phy->type == B43_PHYTYPE_G) {
				if (bdev->board_vendor == SSB_BOARDVENDOR_BCM
				    && bdev->board_type == SSB_BOARD_BCM4309G
				    && bdev->board_rev >= 30)
					rf->att = 3;
				else if (bdev->board_vendor ==
					 SSB_BOARDVENDOR_BCM
					 && bdev->board_type ==
					 SSB_BOARD_BU4306)
					rf->att = 3;
				else
					rf->att = 1;
			} else {
				if (bdev->board_vendor == SSB_BOARDVENDOR_BCM
				    && bdev->board_type == SSB_BOARD_BCM4309G
				    && bdev->board_rev >= 30)
					rf->att = 7;
				else
					rf->att = 6;
			}
			return;
		case 2:
			if (phy->type == B43_PHYTYPE_G) {
				if (bdev->board_vendor == SSB_BOARDVENDOR_BCM
				    && bdev->board_type == SSB_BOARD_BCM4309G
				    && bdev->board_rev >= 30)
					rf->att = 3;
				else if (bdev->board_vendor ==
					 SSB_BOARDVENDOR_BCM
					 && bdev->board_type ==
					 SSB_BOARD_BU4306)
					rf->att = 5;
				else if (bdev->chip_id == 0x4320)
					rf->att = 4;
				else
					rf->att = 3;
			} else
				rf->att = 6;
			return;
		case 3:
			rf->att = 5;
			return;
		case 4:
		case 5:
			rf->att = 1;
			return;
		case 6:
		case 7:
			rf->att = 5;
			return;
		case 8:
			rf->att = 0xA;
			rf->with_padmix = true;
			return;
		case 9:
		default:
			rf->att = 5;
			return;
		}
	}
	rf->att = 5;
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
          int _len_dev0 = 1;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev0 = 1;
          dev[_i0].dev = (struct b43_bus_dev *) malloc(_len_dev__i0__dev0*sizeof(struct b43_bus_dev));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev0; _j0++) {
            dev[_i0].dev->board_vendor = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev->board_type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev->board_rev = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].dev->chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].phy.radio_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.type = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.radio_rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rf0 = 1;
          struct b43_rfatt * rf = (struct b43_rfatt *) malloc(_len_rf0*sizeof(struct b43_rfatt));
          for(int _i0 = 0; _i0 < _len_rf0; _i0++) {
            rf[_i0].with_padmix = ((-2 * (next_i()%2)) + 1) * next_i();
        rf[_i0].att = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          default_radio_attenuation(dev,rf);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev);
          }
          free(dev);
          free(rf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
