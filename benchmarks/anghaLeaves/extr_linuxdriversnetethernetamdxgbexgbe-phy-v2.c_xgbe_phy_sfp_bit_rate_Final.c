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
typedef  scalar_t__ u8 ;
struct xgbe_sfp_eeprom {scalar_t__* base; } ;
typedef  enum xgbe_sfp_speed { ____Placeholder_xgbe_sfp_speed } xgbe_sfp_speed ;

/* Variables and functions */
 size_t XGBE_SFP_BASE_BR ; 
 scalar_t__ XGBE_SFP_BASE_BR_10GBE_MAX ; 
 scalar_t__ XGBE_SFP_BASE_BR_10GBE_MIN ; 
 scalar_t__ XGBE_SFP_BASE_BR_1GBE_MAX ; 
 scalar_t__ XGBE_SFP_BASE_BR_1GBE_MIN ; 
#define  XGBE_SFP_SPEED_1000 129 
#define  XGBE_SFP_SPEED_10000 128 

__attribute__((used)) static bool xgbe_phy_sfp_bit_rate(struct xgbe_sfp_eeprom *sfp_eeprom,
				  enum xgbe_sfp_speed sfp_speed)
{
	u8 *sfp_base, min, max;

	sfp_base = sfp_eeprom->base;

	switch (sfp_speed) {
	case XGBE_SFP_SPEED_1000:
		min = XGBE_SFP_BASE_BR_1GBE_MIN;
		max = XGBE_SFP_BASE_BR_1GBE_MAX;
		break;
	case XGBE_SFP_SPEED_10000:
		min = XGBE_SFP_BASE_BR_10GBE_MIN;
		max = XGBE_SFP_BASE_BR_10GBE_MAX;
		break;
	default:
		return false;
	}

	return ((sfp_base[XGBE_SFP_BASE_BR] >= min) &&
		(sfp_base[XGBE_SFP_BASE_BR] <= max));
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
          enum xgbe_sfp_speed sfp_speed = 0;
          int _len_sfp_eeprom0 = 1;
          struct xgbe_sfp_eeprom * sfp_eeprom = (struct xgbe_sfp_eeprom *) malloc(_len_sfp_eeprom0*sizeof(struct xgbe_sfp_eeprom));
          for(int _i0 = 0; _i0 < _len_sfp_eeprom0; _i0++) {
              int _len_sfp_eeprom__i0__base0 = 1;
          sfp_eeprom[_i0].base = (long *) malloc(_len_sfp_eeprom__i0__base0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_sfp_eeprom__i0__base0; _j0++) {
            sfp_eeprom[_i0].base[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xgbe_phy_sfp_bit_rate(sfp_eeprom,sfp_speed);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sfp_eeprom0; _aux++) {
          free(sfp_eeprom[_aux].base);
          }
          free(sfp_eeprom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
