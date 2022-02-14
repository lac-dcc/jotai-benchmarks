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
       0            big-arr\n\
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
struct gru_thread_state {int /*<<< orphan*/  ts_dsr_map; int /*<<< orphan*/  ts_cbr_map; } ;
struct gru_state {int /*<<< orphan*/  gs_dsr_map; int /*<<< orphan*/  gs_cbr_map; int /*<<< orphan*/  gs_active_contexts; } ;

/* Variables and functions */

__attribute__((used)) static void free_gru_resources(struct gru_state *gru,
			       struct gru_thread_state *gts)
{
	gru->gs_active_contexts--;
	gru->gs_cbr_map |= gts->ts_cbr_map;
	gru->gs_dsr_map |= gts->ts_dsr_map;
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

    // big-arr
    case 0:
    {
          int _len_gru0 = 1;
          struct gru_state * gru = (struct gru_state *) malloc(_len_gru0*sizeof(struct gru_state));
          for(int _i0 = 0; _i0 < _len_gru0; _i0++) {
            gru->gs_dsr_map = ((-2 * (next_i()%2)) + 1) * next_i();
        gru->gs_cbr_map = ((-2 * (next_i()%2)) + 1) * next_i();
        gru->gs_active_contexts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gts0 = 1;
          struct gru_thread_state * gts = (struct gru_thread_state *) malloc(_len_gts0*sizeof(struct gru_thread_state));
          for(int _i0 = 0; _i0 < _len_gts0; _i0++) {
            gts->ts_dsr_map = ((-2 * (next_i()%2)) + 1) * next_i();
        gts->ts_cbr_map = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          free_gru_resources(gru,gts);
          free(gru);
          free(gts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
