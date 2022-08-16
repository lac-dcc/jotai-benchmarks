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
typedef  int /*<<< orphan*/  u8 ;
typedef  int u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct tg3 {int phy_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  DUPLEX_FULL ; 
 int /*<<< orphan*/  DUPLEX_HALF ; 
 int /*<<< orphan*/  DUPLEX_UNKNOWN ; 
 int MII_TG3_AUX_STAT_100 ; 
#define  MII_TG3_AUX_STAT_1000FULL 133 
#define  MII_TG3_AUX_STAT_1000HALF 132 
#define  MII_TG3_AUX_STAT_100FULL 131 
#define  MII_TG3_AUX_STAT_100HALF 130 
#define  MII_TG3_AUX_STAT_10FULL 129 
#define  MII_TG3_AUX_STAT_10HALF 128 
 int MII_TG3_AUX_STAT_FULL ; 
 int MII_TG3_AUX_STAT_SPDMASK ; 
 int /*<<< orphan*/  SPEED_10 ; 
 int /*<<< orphan*/  SPEED_100 ; 
 int /*<<< orphan*/  SPEED_1000 ; 
 int /*<<< orphan*/  SPEED_UNKNOWN ; 
 int TG3_PHYFLG_IS_FET ; 

__attribute__((used)) static void tg3_aux_stat_to_speed_duplex(struct tg3 *tp, u32 val, u16 *speed, u8 *duplex)
{
	switch (val & MII_TG3_AUX_STAT_SPDMASK) {
	case MII_TG3_AUX_STAT_10HALF:
		*speed = SPEED_10;
		*duplex = DUPLEX_HALF;
		break;

	case MII_TG3_AUX_STAT_10FULL:
		*speed = SPEED_10;
		*duplex = DUPLEX_FULL;
		break;

	case MII_TG3_AUX_STAT_100HALF:
		*speed = SPEED_100;
		*duplex = DUPLEX_HALF;
		break;

	case MII_TG3_AUX_STAT_100FULL:
		*speed = SPEED_100;
		*duplex = DUPLEX_FULL;
		break;

	case MII_TG3_AUX_STAT_1000HALF:
		*speed = SPEED_1000;
		*duplex = DUPLEX_HALF;
		break;

	case MII_TG3_AUX_STAT_1000FULL:
		*speed = SPEED_1000;
		*duplex = DUPLEX_FULL;
		break;

	default:
		if (tp->phy_flags & TG3_PHYFLG_IS_FET) {
			*speed = (val & MII_TG3_AUX_STAT_100) ? SPEED_100 :
				 SPEED_10;
			*duplex = (val & MII_TG3_AUX_STAT_FULL) ? DUPLEX_FULL :
				  DUPLEX_HALF;
			break;
		}
		*speed = SPEED_UNKNOWN;
		*duplex = DUPLEX_UNKNOWN;
		break;
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
          int val = 100;
          int _len_tp0 = 1;
          struct tg3 * tp = (struct tg3 *) malloc(_len_tp0*sizeof(struct tg3));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].phy_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_speed0 = 1;
          int * speed = (int *) malloc(_len_speed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_speed0; _i0++) {
            speed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_duplex0 = 1;
          int * duplex = (int *) malloc(_len_duplex0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_duplex0; _i0++) {
            duplex[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tg3_aux_stat_to_speed_duplex(tp,val,speed,duplex);
          free(tp);
          free(speed);
          free(duplex);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
