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
       0            empty\n\
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
typedef  unsigned int uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct pp_atomfwctrl_voltage_table {unsigned int count; int /*<<< orphan*/ * entries; } ;

/* Variables and functions */

__attribute__((used)) static void vega10_trim_voltage_table_to_fit_state_table(
		struct pp_hwmgr *hwmgr,
		uint32_t max_vol_steps,
		struct pp_atomfwctrl_voltage_table *vol_table)
{
	unsigned int i, diff;

	if (vol_table->count <= max_vol_steps)
		return;

	diff = vol_table->count - max_vol_steps;

	for (i = 0; i < max_vol_steps; i++)
		vol_table->entries[i] = vol_table->entries[i + diff];

	vol_table->count = max_vol_steps;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          unsigned int max_vol_steps = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              hwmgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_vol_table0 = 1;
          struct pp_atomfwctrl_voltage_table * vol_table = (struct pp_atomfwctrl_voltage_table *) malloc(_len_vol_table0*sizeof(struct pp_atomfwctrl_voltage_table));
          for(int _i0 = 0; _i0 < _len_vol_table0; _i0++) {
              vol_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vol_table__i0__entries0 = 1;
          vol_table[_i0].entries = (int *) malloc(_len_vol_table__i0__entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vol_table__i0__entries0; _j0++) {
            vol_table[_i0].entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          vega10_trim_voltage_table_to_fit_state_table(hwmgr,max_vol_steps,vol_table);
          free(hwmgr);
          for(int _aux = 0; _aux < _len_vol_table0; _aux++) {
          free(vol_table[_aux].entries);
          }
          free(vol_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
