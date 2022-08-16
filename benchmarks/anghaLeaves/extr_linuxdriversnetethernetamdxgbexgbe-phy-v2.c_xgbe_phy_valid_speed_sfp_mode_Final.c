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
       1            big-arr-10x\n\
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
struct xgbe_phy_data {int /*<<< orphan*/  sfp_speed; } ;

/* Variables and functions */
#define  SPEED_100 130 
#define  SPEED_1000 129 
#define  SPEED_10000 128 
 int /*<<< orphan*/  XGBE_SFP_SPEED_1000 ; 
 int /*<<< orphan*/  XGBE_SFP_SPEED_10000 ; 
 int /*<<< orphan*/  XGBE_SFP_SPEED_100_1000 ; 

__attribute__((used)) static bool xgbe_phy_valid_speed_sfp_mode(struct xgbe_phy_data *phy_data,
					  int speed)
{
	switch (speed) {
	case SPEED_100:
		return (phy_data->sfp_speed == XGBE_SFP_SPEED_100_1000);
	case SPEED_1000:
		return ((phy_data->sfp_speed == XGBE_SFP_SPEED_100_1000) ||
			(phy_data->sfp_speed == XGBE_SFP_SPEED_1000));
	case SPEED_10000:
		return (phy_data->sfp_speed == XGBE_SFP_SPEED_10000);
	default:
		return false;
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
          int speed = 100;
          int _len_phy_data0 = 1;
          struct xgbe_phy_data * phy_data = (struct xgbe_phy_data *) malloc(_len_phy_data0*sizeof(struct xgbe_phy_data));
          for(int _i0 = 0; _i0 < _len_phy_data0; _i0++) {
            phy_data[_i0].sfp_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xgbe_phy_valid_speed_sfp_mode(phy_data,speed);
          printf("%d\n", benchRet); 
          free(phy_data);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int speed = 10;
          int _len_phy_data0 = 100;
          struct xgbe_phy_data * phy_data = (struct xgbe_phy_data *) malloc(_len_phy_data0*sizeof(struct xgbe_phy_data));
          for(int _i0 = 0; _i0 < _len_phy_data0; _i0++) {
            phy_data[_i0].sfp_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xgbe_phy_valid_speed_sfp_mode(phy_data,speed);
          printf("%d\n", benchRet); 
          free(phy_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
