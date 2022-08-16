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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__* inventory; } ;
typedef  TYPE_1__ bot_state_t ;

/* Variables and functions */
 size_t INVENTORY_BFG10K ; 
 size_t INVENTORY_BFGAMMO ; 
 size_t INVENTORY_BULLETS ; 
 size_t INVENTORY_CELLS ; 
 size_t INVENTORY_GRENADELAUNCHER ; 
 size_t INVENTORY_GRENADES ; 
 size_t INVENTORY_LIGHTNING ; 
 size_t INVENTORY_LIGHTNINGAMMO ; 
 size_t INVENTORY_MACHINEGUN ; 
 size_t INVENTORY_PLASMAGUN ; 
 size_t INVENTORY_RAILGUN ; 
 size_t INVENTORY_ROCKETLAUNCHER ; 
 size_t INVENTORY_ROCKETS ; 
 size_t INVENTORY_SHELLS ; 
 size_t INVENTORY_SHOTGUN ; 
 size_t INVENTORY_SLUGS ; 
 int WEAPONINDEX_BFG ; 
 int WEAPONINDEX_GRENADE_LAUNCHER ; 
 int WEAPONINDEX_LIGHTNING ; 
 int WEAPONINDEX_MACHINEGUN ; 
 int WEAPONINDEX_PLASMAGUN ; 
 int WEAPONINDEX_RAILGUN ; 
 int WEAPONINDEX_ROCKET_LAUNCHER ; 
 int WEAPONINDEX_SHOTGUN ; 

int BotSelectActivateWeapon(bot_state_t *bs) {
	//
	if (bs->inventory[INVENTORY_MACHINEGUN] > 0 && bs->inventory[INVENTORY_BULLETS] > 0)
		return WEAPONINDEX_MACHINEGUN;
	else if (bs->inventory[INVENTORY_SHOTGUN] > 0 && bs->inventory[INVENTORY_SHELLS] > 0)
		return WEAPONINDEX_SHOTGUN;
	else if (bs->inventory[INVENTORY_PLASMAGUN] > 0 && bs->inventory[INVENTORY_CELLS] > 0)
		return WEAPONINDEX_PLASMAGUN;
	else if (bs->inventory[INVENTORY_LIGHTNING] > 0 && bs->inventory[INVENTORY_LIGHTNINGAMMO] > 0)
		return WEAPONINDEX_LIGHTNING;
#ifdef MISSIONPACK
	else if (bs->inventory[INVENTORY_CHAINGUN] > 0 && bs->inventory[INVENTORY_BELT] > 0)
		return WEAPONINDEX_CHAINGUN;
	else if (bs->inventory[INVENTORY_NAILGUN] > 0 && bs->inventory[INVENTORY_NAILS] > 0)
		return WEAPONINDEX_NAILGUN;
	else if (bs->inventory[INVENTORY_PROXLAUNCHER] > 0 && bs->inventory[INVENTORY_MINES] > 0)
		return WEAPONINDEX_PROXLAUNCHER;
#endif
	else if (bs->inventory[INVENTORY_GRENADELAUNCHER] > 0 && bs->inventory[INVENTORY_GRENADES] > 0)
		return WEAPONINDEX_GRENADE_LAUNCHER;
	else if (bs->inventory[INVENTORY_RAILGUN] > 0 && bs->inventory[INVENTORY_SLUGS] > 0)
		return WEAPONINDEX_RAILGUN;
	else if (bs->inventory[INVENTORY_ROCKETLAUNCHER] > 0 && bs->inventory[INVENTORY_ROCKETS] > 0)
		return WEAPONINDEX_ROCKET_LAUNCHER;
	else if (bs->inventory[INVENTORY_BFG10K] > 0 && bs->inventory[INVENTORY_BFGAMMO] > 0)
		return WEAPONINDEX_BFG;
	else {
		return -1;
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
          int _len_bs0 = 1;
          struct TYPE_3__ * bs = (struct TYPE_3__ *) malloc(_len_bs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bs0; _i0++) {
              int _len_bs__i0__inventory0 = 1;
          bs[_i0].inventory = (long *) malloc(_len_bs__i0__inventory0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bs__i0__inventory0; _j0++) {
            bs[_i0].inventory[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = BotSelectActivateWeapon(bs);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bs0; _aux++) {
          free(bs[_aux].inventory);
          }
          free(bs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
