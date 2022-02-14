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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u32 ;
struct phy_device {int lp_advertising; int advertising; scalar_t__ duplex; int pause; int asym_pause; void* speed; } ;

/* Variables and functions */
 int ADVERTISED_10000baseT_Full ; 
 int ADVERTISED_1000baseT_Full ; 
 int ADVERTISED_1000baseT_Half ; 
 int ADVERTISED_100baseT_Full ; 
 int ADVERTISED_100baseT_Half ; 
 int ADVERTISED_10baseT_Full ; 
 int ADVERTISED_10baseT_Half ; 
 int ADVERTISED_Asym_Pause ; 
 int ADVERTISED_Pause ; 
 scalar_t__ DUPLEX_FULL ; 
 void* DUPLEX_HALF ; 
 void* SPEED_10 ; 
 void* SPEED_100 ; 
 void* SPEED_1000 ; 
 void* SPEED_10000 ; 

void phy_resolve_aneg_linkmode(struct phy_device *phydev)
{
	u32 common = phydev->lp_advertising & phydev->advertising;

	if (common & ADVERTISED_10000baseT_Full) {
		phydev->speed = SPEED_10000;
		phydev->duplex = DUPLEX_FULL;
	} else if (common & ADVERTISED_1000baseT_Full) {
		phydev->speed = SPEED_1000;
		phydev->duplex = DUPLEX_FULL;
	} else if (common & ADVERTISED_1000baseT_Half) {
		phydev->speed = SPEED_1000;
		phydev->duplex = DUPLEX_HALF;
	} else if (common & ADVERTISED_100baseT_Full) {
		phydev->speed = SPEED_100;
		phydev->duplex = DUPLEX_FULL;
	} else if (common & ADVERTISED_100baseT_Half) {
		phydev->speed = SPEED_100;
		phydev->duplex = DUPLEX_HALF;
	} else if (common & ADVERTISED_10baseT_Full) {
		phydev->speed = SPEED_10;
		phydev->duplex = DUPLEX_FULL;
	} else if (common & ADVERTISED_10baseT_Half) {
		phydev->speed = SPEED_10;
		phydev->duplex = DUPLEX_HALF;
	}

	if (phydev->duplex == DUPLEX_FULL) {
		phydev->pause = !!(phydev->lp_advertising & ADVERTISED_Pause);
		phydev->asym_pause = !!(phydev->lp_advertising &
					ADVERTISED_Asym_Pause);
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

    // big-arr
    case 0:
    {
          int _len_phydev0 = 1;
          struct phy_device * phydev = (struct phy_device *) malloc(_len_phydev0*sizeof(struct phy_device));
          for(int _i0 = 0; _i0 < _len_phydev0; _i0++) {
            phydev->lp_advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        phydev->advertising = ((-2 * (next_i()%2)) + 1) * next_i();
        phydev->duplex = ((-2 * (next_i()%2)) + 1) * next_i();
        phydev->pause = ((-2 * (next_i()%2)) + 1) * next_i();
        phydev->asym_pause = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          phy_resolve_aneg_linkmode(phydev);
          free(phydev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
