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
       1            linked\n\
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
struct power_supply_info {scalar_t__ charge_full_design; } ;
struct gab_platform_data {struct power_supply_info battery_info; } ;
struct gab {scalar_t__ level; int status; struct gab_platform_data* pdata; } ;

/* Variables and functions */
 int POWER_SUPPLY_STATUS_FULL ; 

__attribute__((used)) static int gab_get_status(struct gab *adc_bat)
{
	struct gab_platform_data *pdata = adc_bat->pdata;
	struct power_supply_info *bat_info;

	bat_info = &pdata->battery_info;
	if (adc_bat->level == bat_info->charge_full_design)
		return POWER_SUPPLY_STATUS_FULL;
	return adc_bat->status;
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
          int _len_adc_bat0 = 1;
          struct gab * adc_bat = (struct gab *) malloc(_len_adc_bat0*sizeof(struct gab));
          for(int _i0 = 0; _i0 < _len_adc_bat0; _i0++) {
            adc_bat[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        adc_bat[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adc_bat__i0__pdata0 = 1;
          adc_bat[_i0].pdata = (struct gab_platform_data *) malloc(_len_adc_bat__i0__pdata0*sizeof(struct gab_platform_data));
          for(int _j0 = 0; _j0 < _len_adc_bat__i0__pdata0; _j0++) {
            adc_bat[_i0].pdata->battery_info.charge_full_design = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gab_get_status(adc_bat);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adc_bat0; _aux++) {
          free(adc_bat[_aux].pdata);
          }
          free(adc_bat);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_adc_bat0 = 1;
          struct gab * adc_bat = (struct gab *) malloc(_len_adc_bat0*sizeof(struct gab));
          for(int _i0 = 0; _i0 < _len_adc_bat0; _i0++) {
            adc_bat[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        adc_bat[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adc_bat__i0__pdata0 = 1;
          adc_bat[_i0].pdata = (struct gab_platform_data *) malloc(_len_adc_bat__i0__pdata0*sizeof(struct gab_platform_data));
          for(int _j0 = 0; _j0 < _len_adc_bat__i0__pdata0; _j0++) {
            adc_bat[_i0].pdata->battery_info.charge_full_design = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = gab_get_status(adc_bat);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_adc_bat0; _aux++) {
          free(adc_bat[_aux].pdata);
          }
          free(adc_bat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
