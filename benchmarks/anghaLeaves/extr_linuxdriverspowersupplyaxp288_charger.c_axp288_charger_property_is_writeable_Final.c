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
struct power_supply {int dummy; } ;
typedef  enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;

/* Variables and functions */
#define  POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT 130 
#define  POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE 129 
#define  POWER_SUPPLY_PROP_INPUT_CURRENT_LIMIT 128 

__attribute__((used)) static int axp288_charger_property_is_writeable(struct power_supply *psy,
		enum power_supply_property psp)
{
	int ret;

	switch (psp) {
	case POWER_SUPPLY_PROP_CONSTANT_CHARGE_CURRENT:
	case POWER_SUPPLY_PROP_CONSTANT_CHARGE_VOLTAGE:
	case POWER_SUPPLY_PROP_INPUT_CURRENT_LIMIT:
		ret = 1;
		break;
	default:
		ret = 0;
	}

	return ret;
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
          enum power_supply_property psp = 0;
          int _len_psy0 = 1;
          struct power_supply * psy = (struct power_supply *) malloc(_len_psy0*sizeof(struct power_supply));
          for(int _i0 = 0; _i0 < _len_psy0; _i0++) {
            psy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = axp288_charger_property_is_writeable(psy,psp);
          printf("%d\n", benchRet); 
          free(psy);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum power_supply_property psp = 0;
          int _len_psy0 = 100;
          struct power_supply * psy = (struct power_supply *) malloc(_len_psy0*sizeof(struct power_supply));
          for(int _i0 = 0; _i0 < _len_psy0; _i0++) {
            psy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = axp288_charger_property_is_writeable(psy,psp);
          printf("%d\n", benchRet); 
          free(psy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
