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
struct radeon_device {int dummy; } ;
struct atom_voltage_table {unsigned int count; int /*<<< orphan*/ * entries; } ;

/* Variables and functions */
 unsigned int MAX_NO_VREG_STEPS ; 

__attribute__((used)) static void cypress_trim_voltage_table_to_fit_state_table(struct radeon_device *rdev,
							  struct atom_voltage_table *voltage_table)
{
	unsigned int i, diff;

	if (voltage_table->count <= MAX_NO_VREG_STEPS)
		return;

	diff = voltage_table->count - MAX_NO_VREG_STEPS;

	for (i= 0; i < MAX_NO_VREG_STEPS; i++)
		voltage_table->entries[i] = voltage_table->entries[i + diff];

	voltage_table->count = MAX_NO_VREG_STEPS;
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
          int _len_voltage_table0 = 1;
          struct atom_voltage_table * voltage_table = (struct atom_voltage_table *) malloc(_len_voltage_table0*sizeof(struct atom_voltage_table));
          for(int _i0 = 0; _i0 < _len_voltage_table0; _i0++) {
            voltage_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_voltage_table__i0__entries0 = 1;
          voltage_table[_i0].entries = (int *) malloc(_len_voltage_table__i0__entries0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_voltage_table__i0__entries0; _j0++) {
            voltage_table[_i0].entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cypress_trim_voltage_table_to_fit_state_table(rdev,voltage_table);
          free(rdev);
          for(int _aux = 0; _aux < _len_voltage_table0; _aux++) {
          free(voltage_table[_aux].entries);
          }
          free(voltage_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
