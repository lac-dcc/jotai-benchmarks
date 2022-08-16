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
struct TYPE_3__ {scalar_t__ weaponnum; int* inventory; } ;
typedef  TYPE_1__ bot_state_t ;

/* Variables and functions */
 size_t INVENTORY_HEALTH ; 
 scalar_t__ WP_GAUNTLET ; 
 scalar_t__ WP_MACHINEGUN ; 

float BotFeelingBad(bot_state_t *bs) {
	if (bs->weaponnum == WP_GAUNTLET) {
		return 100;
	}
	if (bs->inventory[INVENTORY_HEALTH] < 40) {
		return 100;
	}
	if (bs->weaponnum == WP_MACHINEGUN) {
		return 90;
	}
	if (bs->inventory[INVENTORY_HEALTH] < 60) {
		return 80;
	}
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
          int _len_bs0 = 1;
          struct TYPE_3__ * bs = (struct TYPE_3__ *) malloc(_len_bs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_bs0; _i0++) {
            bs[_i0].weaponnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bs__i0__inventory0 = 1;
          bs[_i0].inventory = (int *) malloc(_len_bs__i0__inventory0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bs__i0__inventory0; _j0++) {
            bs[_i0].inventory[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          float benchRet = BotFeelingBad(bs);
          printf("%f\n", benchRet); 
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
