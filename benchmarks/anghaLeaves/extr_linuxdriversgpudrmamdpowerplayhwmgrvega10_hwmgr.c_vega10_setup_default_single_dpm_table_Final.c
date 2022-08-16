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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct vega10_single_dpm_table {int count; TYPE_2__* dpm_levels; } ;
struct pp_hwmgr {int dummy; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct TYPE_4__ {scalar_t__ value; int enabled; } ;
struct TYPE_3__ {scalar_t__ clk; } ;

/* Variables and functions */

__attribute__((used)) static void vega10_setup_default_single_dpm_table(struct pp_hwmgr *hwmgr,
		struct vega10_single_dpm_table *dpm_table,
		struct phm_ppt_v1_clock_voltage_dependency_table *dep_table)
{
	int i;

	dpm_table->count = 0;

	for (i = 0; i < dep_table->count; i++) {
		if (i == 0 || dpm_table->dpm_levels[dpm_table->count - 1].value <=
				dep_table->entries[i].clk) {
			dpm_table->dpm_levels[dpm_table->count].value =
					dep_table->entries[i].clk;
			dpm_table->dpm_levels[dpm_table->count].enabled = true;
			dpm_table->count++;
		}
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dpm_table0 = 1;
          struct vega10_single_dpm_table * dpm_table = (struct vega10_single_dpm_table *) malloc(_len_dpm_table0*sizeof(struct vega10_single_dpm_table));
          for(int _i0 = 0; _i0 < _len_dpm_table0; _i0++) {
            dpm_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpm_table__i0__dpm_levels0 = 1;
          dpm_table[_i0].dpm_levels = (struct TYPE_4__ *) malloc(_len_dpm_table__i0__dpm_levels0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dpm_table__i0__dpm_levels0; _j0++) {
            dpm_table[_i0].dpm_levels->value = ((-2 * (next_i()%2)) + 1) * next_i();
        dpm_table[_i0].dpm_levels->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dep_table0 = 1;
          struct phm_ppt_v1_clock_voltage_dependency_table * dep_table = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_dep_table0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_dep_table0; _i0++) {
            dep_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dep_table__i0__entries0 = 1;
          dep_table[_i0].entries = (struct TYPE_3__ *) malloc(_len_dep_table__i0__entries0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dep_table__i0__entries0; _j0++) {
            dep_table[_i0].entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vega10_setup_default_single_dpm_table(hwmgr,dpm_table,dep_table);
          free(hwmgr);
          for(int _aux = 0; _aux < _len_dpm_table0; _aux++) {
          free(dpm_table[_aux].dpm_levels);
          }
          free(dpm_table);
          for(int _aux = 0; _aux < _len_dep_table0; _aux++) {
          free(dep_table[_aux].entries);
          }
          free(dep_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
