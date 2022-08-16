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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32 ;
struct radeon_device {int dummy; } ;
struct radeon_clock_voltage_dependency_table {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_2__ {size_t clk; size_t v; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int ci_get_dependency_volt_by_clk(struct radeon_device *rdev,
					 struct radeon_clock_voltage_dependency_table *allowed_clock_voltage_table,
					 u32 clock, u32 *voltage)
{
	u32 i = 0;

	if (allowed_clock_voltage_table->count == 0)
		return -EINVAL;

	for (i = 0; i < allowed_clock_voltage_table->count; i++) {
		if (allowed_clock_voltage_table->entries[i].clk >= clock) {
			*voltage = allowed_clock_voltage_table->entries[i].v;
			return 0;
		}
	}

	*voltage = allowed_clock_voltage_table->entries[i-1].v;

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
          unsigned long clock = 100;
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_allowed_clock_voltage_table0 = 1;
          struct radeon_clock_voltage_dependency_table * allowed_clock_voltage_table = (struct radeon_clock_voltage_dependency_table *) malloc(_len_allowed_clock_voltage_table0*sizeof(struct radeon_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_allowed_clock_voltage_table0; _i0++) {
            allowed_clock_voltage_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_allowed_clock_voltage_table__i0__entries0 = 1;
          allowed_clock_voltage_table[_i0].entries = (struct TYPE_2__ *) malloc(_len_allowed_clock_voltage_table__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_allowed_clock_voltage_table__i0__entries0; _j0++) {
            allowed_clock_voltage_table[_i0].entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
        allowed_clock_voltage_table[_i0].entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage0 = 1;
          unsigned long * voltage = (unsigned long *) malloc(_len_voltage0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_voltage0; _i0++) {
            voltage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ci_get_dependency_volt_by_clk(rdev,allowed_clock_voltage_table,clock,voltage);
          printf("%d\n", benchRet); 
          free(rdev);
          for(int _aux = 0; _aux < _len_allowed_clock_voltage_table0; _aux++) {
          free(allowed_clock_voltage_table[_aux].entries);
          }
          free(allowed_clock_voltage_table);
          free(voltage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
