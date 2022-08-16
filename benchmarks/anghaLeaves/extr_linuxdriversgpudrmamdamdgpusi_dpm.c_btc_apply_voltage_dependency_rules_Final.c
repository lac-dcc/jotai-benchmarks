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
typedef  scalar_t__ u16 ;
struct amdgpu_clock_voltage_dependency_table {scalar_t__ count; TYPE_1__* entries; } ;
struct TYPE_2__ {size_t clk; scalar_t__ v; } ;

/* Variables and functions */

__attribute__((used)) static void btc_apply_voltage_dependency_rules(struct amdgpu_clock_voltage_dependency_table *table,
					       u32 clock, u16 max_voltage, u16 *voltage)
{
	u32 i;

	if ((table == NULL) || (table->count == 0))
		return;

	for (i= 0; i < table->count; i++) {
		if (clock <= table->entries[i].clk) {
			if (*voltage < table->entries[i].v)
				*voltage = (u16)((table->entries[i].v < max_voltage) ?
					   table->entries[i].v : max_voltage);
			return;
		}
	}

	*voltage = (*voltage > max_voltage) ? *voltage : max_voltage;
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
          long max_voltage = 100;
          int _len_table0 = 1;
          struct amdgpu_clock_voltage_dependency_table * table = (struct amdgpu_clock_voltage_dependency_table *) malloc(_len_table0*sizeof(struct amdgpu_clock_voltage_dependency_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__entries0 = 1;
          table[_i0].entries = (struct TYPE_2__ *) malloc(_len_table__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__entries0; _j0++) {
            table[_i0].entries->clk = ((-2 * (next_i()%2)) + 1) * next_i();
        table[_i0].entries->v = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_voltage0 = 1;
          long * voltage = (long *) malloc(_len_voltage0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_voltage0; _i0++) {
            voltage[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          btc_apply_voltage_dependency_rules(table,clock,max_voltage,voltage);
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].entries);
          }
          free(table);
          free(voltage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
