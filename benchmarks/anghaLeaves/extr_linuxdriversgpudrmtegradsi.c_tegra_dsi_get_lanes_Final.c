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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct tegra_dsi {unsigned int lanes; TYPE_2__* slave; TYPE_1__* master; } ;
struct TYPE_4__ {unsigned int lanes; } ;
struct TYPE_3__ {unsigned int lanes; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int tegra_dsi_get_lanes(struct tegra_dsi *dsi)
{
	if (dsi->master)
		return dsi->master->lanes + dsi->lanes;

	if (dsi->slave)
		return dsi->lanes + dsi->slave->lanes;

	return dsi->lanes;
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
          int _len_dsi0 = 1;
          struct tegra_dsi * dsi = (struct tegra_dsi *) malloc(_len_dsi0*sizeof(struct tegra_dsi));
          for(int _i0 = 0; _i0 < _len_dsi0; _i0++) {
            dsi[_i0].lanes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dsi__i0__slave0 = 1;
          dsi[_i0].slave = (struct TYPE_4__ *) malloc(_len_dsi__i0__slave0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dsi__i0__slave0; _j0++) {
            dsi[_i0].slave->lanes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dsi__i0__master0 = 1;
          dsi[_i0].master = (struct TYPE_3__ *) malloc(_len_dsi__i0__master0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dsi__i0__master0; _j0++) {
            dsi[_i0].master->lanes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = tegra_dsi_get_lanes(dsi);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_dsi0; _aux++) {
          free(dsi[_aux].slave);
          }
          for(int _aux = 0; _aux < _len_dsi0; _aux++) {
          free(dsi[_aux].master);
          }
          free(dsi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
