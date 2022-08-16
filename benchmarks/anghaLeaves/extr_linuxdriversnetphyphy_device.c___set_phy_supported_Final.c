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
typedef  int u32 ;
struct phy_device {int /*<<< orphan*/  supported; } ;

/* Variables and functions */
 int ENOTSUPP ; 
 int /*<<< orphan*/  PHY_1000BT_FEATURES ; 
 int /*<<< orphan*/  PHY_100BT_FEATURES ; 
#define  SPEED_10 130 
#define  SPEED_100 129 
#define  SPEED_1000 128 

__attribute__((used)) static int __set_phy_supported(struct phy_device *phydev, u32 max_speed)
{
	switch (max_speed) {
	case SPEED_10:
		phydev->supported &= ~PHY_100BT_FEATURES;
		/* fall through */
	case SPEED_100:
		phydev->supported &= ~PHY_1000BT_FEATURES;
		break;
	case SPEED_1000:
		break;
	default:
		return -ENOTSUPP;
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
          int max_speed = 100;
          int _len_phydev0 = 1;
          struct phy_device * phydev = (struct phy_device *) malloc(_len_phydev0*sizeof(struct phy_device));
          for(int _i0 = 0; _i0 < _len_phydev0; _i0++) {
            phydev[_i0].supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __set_phy_supported(phydev,max_speed);
          printf("%d\n", benchRet); 
          free(phydev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int max_speed = 10;
          int _len_phydev0 = 100;
          struct phy_device * phydev = (struct phy_device *) malloc(_len_phydev0*sizeof(struct phy_device));
          for(int _i0 = 0; _i0 < _len_phydev0; _i0++) {
            phydev[_i0].supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __set_phy_supported(phydev,max_speed);
          printf("%d\n", benchRet); 
          free(phydev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
