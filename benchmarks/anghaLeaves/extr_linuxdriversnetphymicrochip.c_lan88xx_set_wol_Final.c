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
struct phy_device {struct lan88xx_priv* priv; } ;
struct lan88xx_priv {int /*<<< orphan*/  wolopts; } ;
struct ethtool_wolinfo {int /*<<< orphan*/  wolopts; } ;

/* Variables and functions */

__attribute__((used)) static int lan88xx_set_wol(struct phy_device *phydev,
			   struct ethtool_wolinfo *wol)
{
	struct lan88xx_priv *priv = phydev->priv;

	priv->wolopts = wol->wolopts;

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
          int _len_phydev0 = 1;
          struct phy_device * phydev = (struct phy_device *) malloc(_len_phydev0*sizeof(struct phy_device));
          for(int _i0 = 0; _i0 < _len_phydev0; _i0++) {
              int _len_phydev__i0__priv0 = 1;
          phydev[_i0].priv = (struct lan88xx_priv *) malloc(_len_phydev__i0__priv0*sizeof(struct lan88xx_priv));
          for(int _j0 = 0; _j0 < _len_phydev__i0__priv0; _j0++) {
            phydev[_i0].priv->wolopts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wol0 = 1;
          struct ethtool_wolinfo * wol = (struct ethtool_wolinfo *) malloc(_len_wol0*sizeof(struct ethtool_wolinfo));
          for(int _i0 = 0; _i0 < _len_wol0; _i0++) {
            wol[_i0].wolopts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lan88xx_set_wol(phydev,wol);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_phydev0; _aux++) {
          free(phydev[_aux].priv);
          }
          free(phydev);
          free(wol);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
