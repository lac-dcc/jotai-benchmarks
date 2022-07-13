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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct gelic_wl_scan_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void update_best(struct gelic_wl_scan_info **best,
			struct gelic_wl_scan_info *candid,
			int *best_weight,
			int *weight)
{
	if (*best_weight < ++(*weight)) {
		*best_weight = *weight;
		*best = candid;
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
          int _len_best0 = 1;
          struct gelic_wl_scan_info ** best = (struct gelic_wl_scan_info **) malloc(_len_best0*sizeof(struct gelic_wl_scan_info *));
          for(int _i0 = 0; _i0 < _len_best0; _i0++) {
            int _len_best1 = 1;
            best[_i0] = (struct gelic_wl_scan_info *) malloc(_len_best1*sizeof(struct gelic_wl_scan_info));
            for(int _i1 = 0; _i1 < _len_best1; _i1++) {
              best[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_candid0 = 1;
          struct gelic_wl_scan_info * candid = (struct gelic_wl_scan_info *) malloc(_len_candid0*sizeof(struct gelic_wl_scan_info));
          for(int _i0 = 0; _i0 < _len_candid0; _i0++) {
            candid[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_best_weight0 = 1;
          int * best_weight = (int *) malloc(_len_best_weight0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_best_weight0; _i0++) {
            best_weight[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_weight0 = 1;
          int * weight = (int *) malloc(_len_weight0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_weight0; _i0++) {
            weight[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_best(best,candid,best_weight,weight);
          for(int i1 = 0; i1 < _len_best0; i1++) {
            int _len_best1 = 1;
              free(best[i1]);
          }
          free(best);
          free(candid);
          free(best_weight);
          free(weight);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
