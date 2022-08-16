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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {struct phm_clock_voltage_dependency_table* vddc_dependency_on_sclk; } ;
struct pp_hwmgr {scalar_t__ pp_table_version; TYPE_2__ dyn_state; scalar_t__ pptable; } ;
struct phm_ppt_v1_information {struct phm_ppt_v1_clock_voltage_dependency_table* vdd_dep_on_sclk; } ;
struct phm_ppt_v1_clock_voltage_dependency_table {int count; TYPE_1__* entries; } ;
struct phm_clock_voltage_dependency_table {int count; TYPE_3__* entries; } ;
struct amd_pp_clocks {int* clock; int count; } ;
struct TYPE_6__ {int clk; } ;
struct TYPE_4__ {int clk; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ PP_TABLE_V0 ; 
 scalar_t__ PP_TABLE_V1 ; 

__attribute__((used)) static int smu7_get_sclks(struct pp_hwmgr *hwmgr, struct amd_pp_clocks *clocks)
{
	struct phm_ppt_v1_information *table_info =
			(struct phm_ppt_v1_information *)hwmgr->pptable;
	struct phm_ppt_v1_clock_voltage_dependency_table *dep_sclk_table = NULL;
	struct phm_clock_voltage_dependency_table *sclk_table;
	int i;

	if (hwmgr->pp_table_version == PP_TABLE_V1) {
		if (table_info == NULL || table_info->vdd_dep_on_sclk == NULL)
			return -EINVAL;
		dep_sclk_table = table_info->vdd_dep_on_sclk;
		for (i = 0; i < dep_sclk_table->count; i++)
			clocks->clock[i] = dep_sclk_table->entries[i].clk * 10;
		clocks->count = dep_sclk_table->count;
	} else if (hwmgr->pp_table_version == PP_TABLE_V0) {
		sclk_table = hwmgr->dyn_state.vddc_dependency_on_sclk;
		for (i = 0; i < sclk_table->count; i++)
			clocks->clock[i] = sclk_table->entries[i].clk * 10;
		clocks->count = sclk_table->count;
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].pp_table_version = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk = (struct phm_clock_voltage_dependency_table *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0*sizeof(struct phm_clock_voltage_dependency_table));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0 = 1;
          hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries = (struct TYPE_6__ *) malloc(_len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__dyn_state_vddc_dependency_on_sclk_entries0; _j0++) {
            hwmgr[_i0].dyn_state.vddc_dependency_on_sclk->entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        hwmgr[_i0].pptable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_clocks0 = 1;
          struct amd_pp_clocks * clocks = (struct amd_pp_clocks *) malloc(_len_clocks0*sizeof(struct amd_pp_clocks));
          for(int _i0 = 0; _i0 < _len_clocks0; _i0++) {
              int _len_clocks__i0__clock0 = 1;
          clocks[_i0].clock = (int *) malloc(_len_clocks__i0__clock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_clocks__i0__clock0; _j0++) {
            clocks[_i0].clock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        clocks[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = smu7_get_sclks(hwmgr,clocks);
          printf("%d\n", benchRet); 
          free(hwmgr);
          for(int _aux = 0; _aux < _len_clocks0; _aux++) {
          free(clocks[_aux].clock);
          }
          free(clocks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
