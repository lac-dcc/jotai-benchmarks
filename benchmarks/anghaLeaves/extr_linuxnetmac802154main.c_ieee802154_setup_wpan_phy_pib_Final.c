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
struct wpan_phy {int lifs_period; int symbol_duration; int sifs_period; } ;

/* Variables and functions */
 int IEEE802154_LIFS_PERIOD ; 
 int IEEE802154_SIFS_PERIOD ; 

__attribute__((used)) static void ieee802154_setup_wpan_phy_pib(struct wpan_phy *wpan_phy)
{
	/* TODO warn on empty symbol_duration
	 * Should be done when all drivers sets this value.
	 */

	wpan_phy->lifs_period = IEEE802154_LIFS_PERIOD *
				wpan_phy->symbol_duration;
	wpan_phy->sifs_period = IEEE802154_SIFS_PERIOD *
				wpan_phy->symbol_duration;
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
          int _len_wpan_phy0 = 1;
          struct wpan_phy * wpan_phy = (struct wpan_phy *) malloc(_len_wpan_phy0*sizeof(struct wpan_phy));
          for(int _i0 = 0; _i0 < _len_wpan_phy0; _i0++) {
            wpan_phy[_i0].lifs_period = ((-2 * (next_i()%2)) + 1) * next_i();
        wpan_phy[_i0].symbol_duration = ((-2 * (next_i()%2)) + 1) * next_i();
        wpan_phy[_i0].sifs_period = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ieee802154_setup_wpan_phy_pib(wpan_phy);
          free(wpan_phy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
