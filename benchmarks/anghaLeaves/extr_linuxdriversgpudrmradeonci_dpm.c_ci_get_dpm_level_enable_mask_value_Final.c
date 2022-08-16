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
typedef  int u32 ;
struct ci_single_dpm_table {int count; TYPE_1__* dpm_levels; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;

/* Variables and functions */

__attribute__((used)) static u32 ci_get_dpm_level_enable_mask_value(struct ci_single_dpm_table *dpm_table)
{
	u32 i;
	u32 mask_value = 0;

	for (i = dpm_table->count; i > 0; i--) {
		mask_value = mask_value << 1;
		if (dpm_table->dpm_levels[i-1].enabled)
			mask_value |= 0x1;
		else
			mask_value &= 0xFFFFFFFE;
	}

	return mask_value;
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
          int _len_dpm_table0 = 1;
          struct ci_single_dpm_table * dpm_table = (struct ci_single_dpm_table *) malloc(_len_dpm_table0*sizeof(struct ci_single_dpm_table));
          for(int _i0 = 0; _i0 < _len_dpm_table0; _i0++) {
            dpm_table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dpm_table__i0__dpm_levels0 = 1;
          dpm_table[_i0].dpm_levels = (struct TYPE_2__ *) malloc(_len_dpm_table__i0__dpm_levels0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dpm_table__i0__dpm_levels0; _j0++) {
            dpm_table[_i0].dpm_levels->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ci_get_dpm_level_enable_mask_value(dpm_table);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dpm_table0; _aux++) {
          free(dpm_table[_aux].dpm_levels);
          }
          free(dpm_table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
