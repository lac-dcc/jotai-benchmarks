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
struct unimac_mdio_pdata {int phy_mask; } ;
struct device {struct bcmgenet_platform_data* platform_data; } ;
struct bcmgenet_priv {TYPE_1__* pdev; } ;
struct bcmgenet_platform_data {scalar_t__ phy_interface; int phy_address; scalar_t__ mdio_enabled; } ;
struct TYPE_2__ {struct device dev; } ;

/* Variables and functions */
 scalar_t__ PHY_INTERFACE_MODE_MOCA ; 
 int PHY_MAX_ADDR ; 

__attribute__((used)) static void bcmgenet_mii_pdata_init(struct bcmgenet_priv *priv,
				    struct unimac_mdio_pdata *ppd)
{
	struct device *kdev = &priv->pdev->dev;
	struct bcmgenet_platform_data *pd = kdev->platform_data;

	if (pd->phy_interface != PHY_INTERFACE_MODE_MOCA && pd->mdio_enabled) {
		/*
		 * Internal or external PHY with MDIO access
		 */
		if (pd->phy_address >= 0 && pd->phy_address < PHY_MAX_ADDR)
			ppd->phy_mask = 1 << pd->phy_address;
		else
			ppd->phy_mask = 0;
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
          int _len_priv0 = 1;
          struct bcmgenet_priv * priv = (struct bcmgenet_priv *) malloc(_len_priv0*sizeof(struct bcmgenet_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__pdev0 = 1;
          priv[_i0].pdev = (struct TYPE_2__ *) malloc(_len_priv__i0__pdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdev0; _j0++) {
              int _len_priv__i0__pdev_dev_platform_data0 = 1;
          priv[_i0].pdev->dev.platform_data = (struct bcmgenet_platform_data *) malloc(_len_priv__i0__pdev_dev_platform_data0*sizeof(struct bcmgenet_platform_data));
          for(int _j0 = 0; _j0 < _len_priv__i0__pdev_dev_platform_data0; _j0++) {
            priv[_i0].pdev->dev.platform_data->phy_interface = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].pdev->dev.platform_data->phy_address = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].pdev->dev.platform_data->mdio_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ppd0 = 1;
          struct unimac_mdio_pdata * ppd = (struct unimac_mdio_pdata *) malloc(_len_ppd0*sizeof(struct unimac_mdio_pdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].phy_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bcmgenet_mii_pdata_init(priv,ppd);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].pdev);
          }
          free(priv);
          free(ppd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
