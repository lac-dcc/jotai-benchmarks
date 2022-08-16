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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32 ;
struct sumo_disp_clock_voltage_mapping_table {scalar_t__* display_clock_frequency; size_t num_max_voltage_levels; } ;
struct radeon_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ ulMaximumSupportedCLK; } ;
typedef  TYPE_1__ ATOM_CLK_VOLT_CAPABILITY ;

/* Variables and functions */
 size_t SUMO_MAX_NUMBER_VOLTAGES ; 

__attribute__((used)) static void sumo_construct_display_voltage_mapping_table(struct radeon_device *rdev,
							 struct sumo_disp_clock_voltage_mapping_table *disp_clk_voltage_mapping_table,
							 ATOM_CLK_VOLT_CAPABILITY *table)
{
	u32 i;

	for (i = 0; i < SUMO_MAX_NUMBER_VOLTAGES; i++) {
		if (table[i].ulMaximumSupportedCLK == 0)
			break;

		disp_clk_voltage_mapping_table->display_clock_frequency[i] =
			table[i].ulMaximumSupportedCLK;
	}

	disp_clk_voltage_mapping_table->num_max_voltage_levels = i;

	if (disp_clk_voltage_mapping_table->num_max_voltage_levels == 0) {
		disp_clk_voltage_mapping_table->display_clock_frequency[0] = 80000;
		disp_clk_voltage_mapping_table->num_max_voltage_levels = 1;
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
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_disp_clk_voltage_mapping_table0 = 1;
          struct sumo_disp_clock_voltage_mapping_table * disp_clk_voltage_mapping_table = (struct sumo_disp_clock_voltage_mapping_table *) malloc(_len_disp_clk_voltage_mapping_table0*sizeof(struct sumo_disp_clock_voltage_mapping_table));
          for(int _i0 = 0; _i0 < _len_disp_clk_voltage_mapping_table0; _i0++) {
              int _len_disp_clk_voltage_mapping_table__i0__display_clock_frequency0 = 1;
          disp_clk_voltage_mapping_table[_i0].display_clock_frequency = (long *) malloc(_len_disp_clk_voltage_mapping_table__i0__display_clock_frequency0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_disp_clk_voltage_mapping_table__i0__display_clock_frequency0; _j0++) {
            disp_clk_voltage_mapping_table[_i0].display_clock_frequency[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        disp_clk_voltage_mapping_table[_i0].num_max_voltage_levels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_table0 = 1;
          struct TYPE_3__ * table = (struct TYPE_3__ *) malloc(_len_table0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].ulMaximumSupportedCLK = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sumo_construct_display_voltage_mapping_table(rdev,disp_clk_voltage_mapping_table,table);
          free(rdev);
          for(int _aux = 0; _aux < _len_disp_clk_voltage_mapping_table0; _aux++) {
          free(disp_clk_voltage_mapping_table[_aux].display_clock_frequency);
          }
          free(disp_clk_voltage_mapping_table);
          free(table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
