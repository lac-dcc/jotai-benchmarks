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
typedef  int /*<<< orphan*/  u32 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int bus_type; } ;

/* Variables and functions */

void b43_phy_take_out_of_reset(struct b43_wldev *dev)
{
	u32 tmp;

	switch (dev->dev->bus_type) {
#ifdef CONFIG_B43_BCMA
	case B43_BUS_BCMA:
		/* Unset reset bit (with forcing clock) */
		tmp = bcma_aread32(dev->dev->bdev, BCMA_IOCTL);
		tmp &= ~B43_BCMA_IOCTL_PHY_RESET;
		tmp &= ~B43_BCMA_IOCTL_PHY_CLKEN;
		tmp |= BCMA_IOCTL_FGC;
		bcma_awrite32(dev->dev->bdev, BCMA_IOCTL, tmp);
		udelay(1);

		/* Do not force clock anymore */
		tmp = bcma_aread32(dev->dev->bdev, BCMA_IOCTL);
		tmp &= ~BCMA_IOCTL_FGC;
		tmp |= B43_BCMA_IOCTL_PHY_CLKEN;
		bcma_awrite32(dev->dev->bdev, BCMA_IOCTL, tmp);
		udelay(1);
		break;
#endif
#ifdef CONFIG_B43_SSB
	case B43_BUS_SSB:
		/* Unset reset bit (with forcing clock) */
		tmp = ssb_read32(dev->dev->sdev, SSB_TMSLOW);
		tmp &= ~B43_TMSLOW_PHYRESET;
		tmp &= ~B43_TMSLOW_PHYCLKEN;
		tmp |= SSB_TMSLOW_FGC;
		ssb_write32(dev->dev->sdev, SSB_TMSLOW, tmp);
		ssb_read32(dev->dev->sdev, SSB_TMSLOW); /* flush */
		usleep_range(1000, 2000);

		tmp = ssb_read32(dev->dev->sdev, SSB_TMSLOW);
		tmp &= ~SSB_TMSLOW_FGC;
		tmp |= B43_TMSLOW_PHYCLKEN;
		ssb_write32(dev->dev->sdev, SSB_TMSLOW, tmp);
		ssb_read32(dev->dev->sdev, SSB_TMSLOW); /* flush */
		usleep_range(1000, 2000);
		break;
#endif
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
          int _len_dev0 = 1;
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev0 = 1;
          dev[_i0].dev = (struct TYPE_2__ *) malloc(_len_dev__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev0; _j0++) {
            dev[_i0].dev->bus_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          b43_phy_take_out_of_reset(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
