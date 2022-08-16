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
struct dm_pp_clock_levels_with_voltage {int num_levels; TYPE_1__* data; } ;
struct TYPE_2__ {scalar_t__ clocks_in_khz; } ;

/* Variables and functions */

__attribute__((used)) static bool verify_clock_values(struct dm_pp_clock_levels_with_voltage *clks)
{
	int i;

	if (clks->num_levels == 0)
		return false;

	for (i = 0; i < clks->num_levels; i++)
		/* Ensure that the result is sane */
		if (clks->data[i].clocks_in_khz == 0)
			return false;

	return true;
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
          int _len_clks0 = 1;
          struct dm_pp_clock_levels_with_voltage * clks = (struct dm_pp_clock_levels_with_voltage *) malloc(_len_clks0*sizeof(struct dm_pp_clock_levels_with_voltage));
          for(int _i0 = 0; _i0 < _len_clks0; _i0++) {
            clks[_i0].num_levels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_clks__i0__data0 = 1;
          clks[_i0].data = (struct TYPE_2__ *) malloc(_len_clks__i0__data0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_clks__i0__data0; _j0++) {
            clks[_i0].data->clocks_in_khz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = verify_clock_values(clks);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_clks0; _aux++) {
          free(clks[_aux].data);
          }
          free(clks);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
