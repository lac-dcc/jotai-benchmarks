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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint8_t ;
typedef  scalar_t__ uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ clk; } ;

/* Variables and functions */

__attribute__((used)) static uint8_t vega10_get_uclk_index(struct pp_hwmgr *hwmgr,
			struct phm_ppt_v1_clock_voltage_dependency_table *mclk_table,
						uint32_t frequency)
{
	uint8_t count;
	uint8_t i;

	if (mclk_table == NULL || mclk_table->count == 0)
		return 0;

	count = (uint8_t)(mclk_table->count);

	for(i = 0; i < count; i++) {
		if(mclk_table->entries[i].clk >= frequency)
			return i;
	}

	return i-1;
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
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
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          long frequency = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              hwmgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_mclk_table0 = 1;
          struct phm_ppt_v1_clock_voltage_dependency_table * mclk_table = (struct phm_ppt_v1_clock_voltage_dependency_table *) malloc(_len_mclk_table0*sizeof(struct phm_ppt_v1_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_mclk_table0; _i0++) {
              mclk_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mclk_table__i0__entries0 = 1;
          mclk_table[_i0].entries = (struct TYPE_2__ *) malloc(_len_mclk_table__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mclk_table__i0__entries0; _j0++) {
              mclk_table[_i0].entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          unsigned long benchRet = vega10_get_uclk_index(hwmgr,mclk_table,frequency);
          printf("%lu\n", benchRet); 
          free(hwmgr);
          for(int _aux = 0; _aux < _len_mclk_table0; _aux++) {
          free(mclk_table[_aux].entries);
          }
          free(mclk_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
