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
struct gf100_gr {int tpc_max; int gpc_nr; int* tpc_nr; size_t sm_nr; TYPE_1__* sm; } ;
struct TYPE_2__ {int gpc; int tpc; } ;

/* Variables and functions */

void
gf100_gr_oneinit_sm_id(struct gf100_gr *gr)
{
	int tpc, gpc;
	for (tpc = 0; tpc < gr->tpc_max; tpc++) {
		for (gpc = 0; gpc < gr->gpc_nr; gpc++) {
			if (tpc < gr->tpc_nr[gpc]) {
				gr->sm[gr->sm_nr].gpc = gpc;
				gr->sm[gr->sm_nr].tpc = tpc;
				gr->sm_nr++;
			}
		}
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
          int _len_gr0 = 1;
          struct gf100_gr * gr = (struct gf100_gr *) malloc(_len_gr0*sizeof(struct gf100_gr));
          for(int _i0 = 0; _i0 < _len_gr0; _i0++) {
            gr[_i0].tpc_max = ((-2 * (next_i()%2)) + 1) * next_i();
        gr[_i0].gpc_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gr__i0__tpc_nr0 = 1;
          gr[_i0].tpc_nr = (int *) malloc(_len_gr__i0__tpc_nr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_gr__i0__tpc_nr0; _j0++) {
            gr[_i0].tpc_nr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        gr[_i0].sm_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_gr__i0__sm0 = 1;
          gr[_i0].sm = (struct TYPE_2__ *) malloc(_len_gr__i0__sm0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gr__i0__sm0; _j0++) {
            gr[_i0].sm->gpc = ((-2 * (next_i()%2)) + 1) * next_i();
        gr[_i0].sm->tpc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gf100_gr_oneinit_sm_id(gr);
          for(int _aux = 0; _aux < _len_gr0; _aux++) {
          free(gr[_aux].tpc_nr);
          }
          for(int _aux = 0; _aux < _len_gr0; _aux++) {
          free(gr[_aux].sm);
          }
          free(gr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
