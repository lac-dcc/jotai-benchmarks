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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
#define  MOD_BFG 141 
#define  MOD_BFG_SPLASH 140 
#define  MOD_GAUNTLET 139 
#define  MOD_GRAPPLE 138 
#define  MOD_GRENADE 137 
#define  MOD_GRENADE_SPLASH 136 
#define  MOD_LIGHTNING 135 
#define  MOD_MACHINEGUN 134 
#define  MOD_PLASMA 133 
#define  MOD_PLASMA_SPLASH 132 
#define  MOD_RAILGUN 131 
#define  MOD_ROCKET 130 
#define  MOD_ROCKET_SPLASH 129 
#define  MOD_SHOTGUN 128 

char *BotWeaponNameForMeansOfDeath(int mod) {
	switch(mod) {
		case MOD_SHOTGUN: return "Shotgun";
		case MOD_GAUNTLET: return "Gauntlet";
		case MOD_MACHINEGUN: return "Machinegun";
		case MOD_GRENADE:
		case MOD_GRENADE_SPLASH: return "Grenade Launcher";
		case MOD_ROCKET:
		case MOD_ROCKET_SPLASH: return "Rocket Launcher";
		case MOD_PLASMA:
		case MOD_PLASMA_SPLASH: return "Plasmagun";
		case MOD_RAILGUN: return "Railgun";
		case MOD_LIGHTNING: return "Lightning Gun";
		case MOD_BFG:
		case MOD_BFG_SPLASH: return "BFG10K";
#ifdef MISSIONPACK
		case MOD_NAIL: return "Nailgun";
		case MOD_CHAINGUN: return "Chaingun";
		case MOD_PROXIMITY_MINE: return "Proximity Launcher";
		case MOD_KAMIKAZE: return "Kamikaze";
		case MOD_JUICED: return "Prox mine";
#endif
		case MOD_GRAPPLE: return "Grapple";
		default: return "[unknown weapon]";
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
          int mod = 100;
          char * benchRet = BotWeaponNameForMeansOfDeath(mod);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mod = 255;
          char * benchRet = BotWeaponNameForMeansOfDeath(mod);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mod = 10;
          char * benchRet = BotWeaponNameForMeansOfDeath(mod);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
