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
struct omap_mmc_platform_data {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void omap1_init_mmc(struct omap_mmc_platform_data **mmc_data,
				int nr_controllers)
{
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
          int nr_controllers = 100;
          int _len_mmc_data0 = 1;
          struct omap_mmc_platform_data ** mmc_data = (struct omap_mmc_platform_data **) malloc(_len_mmc_data0*sizeof(struct omap_mmc_platform_data *));
          for(int _i0 = 0; _i0 < _len_mmc_data0; _i0++) {
            int _len_mmc_data1 = 1;
            mmc_data[_i0] = (struct omap_mmc_platform_data *) malloc(_len_mmc_data1*sizeof(struct omap_mmc_platform_data));
            for(int _i1 = 0; _i1 < _len_mmc_data1; _i1++) {
              mmc_data[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          omap1_init_mmc(mmc_data,nr_controllers);
          for(int i1 = 0; i1 < _len_mmc_data0; i1++) {
            int _len_mmc_data1 = 1;
              free(mmc_data[i1]);
          }
          free(mmc_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
