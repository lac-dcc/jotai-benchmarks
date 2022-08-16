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
typedef  int /*<<< orphan*/  u64 ;
struct snd_dice {int /*<<< orphan*/  global_offset; int /*<<< orphan*/  rsrv_offset; int /*<<< orphan*/  sync_offset; int /*<<< orphan*/  rx_offset; int /*<<< orphan*/  tx_offset; } ;
typedef  enum snd_dice_addr_type { ____Placeholder_snd_dice_addr_type } snd_dice_addr_type ;

/* Variables and functions */
 scalar_t__ DICE_PRIVATE_SPACE ; 
#define  SND_DICE_ADDR_TYPE_GLOBAL 132 
#define  SND_DICE_ADDR_TYPE_RSRV 131 
#define  SND_DICE_ADDR_TYPE_RX 130 
#define  SND_DICE_ADDR_TYPE_SYNC 129 
#define  SND_DICE_ADDR_TYPE_TX 128 

__attribute__((used)) static u64 get_subaddr(struct snd_dice *dice, enum snd_dice_addr_type type,
		       u64 offset)
{
	switch (type) {
	case SND_DICE_ADDR_TYPE_TX:
		offset += dice->tx_offset;
		break;
	case SND_DICE_ADDR_TYPE_RX:
		offset += dice->rx_offset;
		break;
	case SND_DICE_ADDR_TYPE_SYNC:
		offset += dice->sync_offset;
		break;
	case SND_DICE_ADDR_TYPE_RSRV:
		offset += dice->rsrv_offset;
		break;
	case SND_DICE_ADDR_TYPE_GLOBAL:
	default:
		offset += dice->global_offset;
		break;
	}
	offset += DICE_PRIVATE_SPACE;
	return offset;
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
          enum snd_dice_addr_type type = 0;
          int offset = 100;
          int _len_dice0 = 1;
          struct snd_dice * dice = (struct snd_dice *) malloc(_len_dice0*sizeof(struct snd_dice));
          for(int _i0 = 0; _i0 < _len_dice0; _i0++) {
            dice[_i0].global_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dice[_i0].rsrv_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dice[_i0].sync_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dice[_i0].rx_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        dice[_i0].tx_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_subaddr(dice,type,offset);
          printf("%d\n", benchRet); 
          free(dice);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
