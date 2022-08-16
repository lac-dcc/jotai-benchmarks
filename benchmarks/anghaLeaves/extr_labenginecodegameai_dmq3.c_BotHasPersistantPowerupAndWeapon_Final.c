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
struct TYPE_3__ {int* inventory; } ;
typedef  TYPE_1__ bot_state_t ;

/* Variables and functions */
 size_t INVENTORY_ARMOR ; 
 size_t INVENTORY_BELT ; 
 size_t INVENTORY_BFG10K ; 
 size_t INVENTORY_BFGAMMO ; 
 size_t INVENTORY_CELLS ; 
 size_t INVENTORY_CHAINGUN ; 
 size_t INVENTORY_HEALTH ; 
 size_t INVENTORY_LIGHTNING ; 
 size_t INVENTORY_LIGHTNINGAMMO ; 
 size_t INVENTORY_MINES ; 
 size_t INVENTORY_NAILGUN ; 
 size_t INVENTORY_NAILS ; 
 size_t INVENTORY_PLASMAGUN ; 
 size_t INVENTORY_PROXLAUNCHER ; 
 size_t INVENTORY_RAILGUN ; 
 size_t INVENTORY_ROCKETLAUNCHER ; 
 size_t INVENTORY_ROCKETS ; 
 size_t INVENTORY_SLUGS ; 
 int qfalse ; 
 int qtrue ; 

int BotHasPersistantPowerupAndWeapon(bot_state_t *bs) {
#ifdef MISSIONPACK
	// if the bot does not have a persistant powerup
	if (!bs->inventory[INVENTORY_SCOUT] &&
		!bs->inventory[INVENTORY_GUARD] &&
		!bs->inventory[INVENTORY_DOUBLER] &&
		!bs->inventory[INVENTORY_AMMOREGEN] ) {
		return qfalse;
	}
#endif
	//if the bot is very low on health
	if (bs->inventory[INVENTORY_HEALTH] < 60) return qfalse;
	//if the bot is low on health
	if (bs->inventory[INVENTORY_HEALTH] < 80) {
		//if the bot has insufficient armor
		if (bs->inventory[INVENTORY_ARMOR] < 40) return qfalse;
	}
	//if the bot can use the bfg
	if (bs->inventory[INVENTORY_BFG10K] > 0 &&
			bs->inventory[INVENTORY_BFGAMMO] > 7) return qtrue;
	//if the bot can use the railgun
	if (bs->inventory[INVENTORY_RAILGUN] > 0 &&
			bs->inventory[INVENTORY_SLUGS] > 5) return qtrue;
	//if the bot can use the lightning gun
	if (bs->inventory[INVENTORY_LIGHTNING] > 0 &&
			bs->inventory[INVENTORY_LIGHTNINGAMMO] > 50) return qtrue;
	//if the bot can use the rocketlauncher
	if (bs->inventory[INVENTORY_ROCKETLAUNCHER] > 0 &&
			bs->inventory[INVENTORY_ROCKETS] > 5) return qtrue;
	//
	if (bs->inventory[INVENTORY_NAILGUN] > 0 &&
			bs->inventory[INVENTORY_NAILS] > 5) return qtrue;
	//
	if (bs->inventory[INVENTORY_PROXLAUNCHER] > 0 &&
			bs->inventory[INVENTORY_MINES] > 5) return qtrue;
	//
	if (bs->inventory[INVENTORY_CHAINGUN] > 0 &&
			bs->inventory[INVENTORY_BELT] > 40) return qtrue;
	//if the bot can use the plasmagun
	if (bs->inventory[INVENTORY_PLASMAGUN] > 0 &&
			bs->inventory[INVENTORY_CELLS] > 20) return qtrue;
	return qfalse;
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
          bs[_i0].inventory = (int *) malloc(_len_bs__i0__inventory0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bs__i0__inventory0; _j0++) {
            bs[_i0].inventory[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = BotHasPersistantPowerupAndWeapon(bs);
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
