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
struct TYPE_2__ {scalar_t__ sg_linearized; scalar_t__ sg_ok; scalar_t__ tx_flow_control_xoff; scalar_t__ tx_flow_control_xon; scalar_t__ tx_kicks; scalar_t__ tx_restart_queue; scalar_t__ tx_timeout_count; scalar_t__ rx_encaps_errors; scalar_t__ tx_queue_running_average; scalar_t__ tx_queue_max; scalar_t__ rx_queue_running_average; scalar_t__ rx_queue_max; } ;
struct vector_private {TYPE_1__ estats; } ;

/* Variables and functions */

__attribute__((used)) static void vector_reset_stats(struct vector_private *vp)
{
	vp->estats.rx_queue_max = 0;
	vp->estats.rx_queue_running_average = 0;
	vp->estats.tx_queue_max = 0;
	vp->estats.tx_queue_running_average = 0;
	vp->estats.rx_encaps_errors = 0;
	vp->estats.tx_timeout_count = 0;
	vp->estats.tx_restart_queue = 0;
	vp->estats.tx_kicks = 0;
	vp->estats.tx_flow_control_xon = 0;
	vp->estats.tx_flow_control_xoff = 0;
	vp->estats.sg_ok = 0;
	vp->estats.sg_linearized = 0;
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
          int _len_vp0 = 1;
          struct vector_private * vp = (struct vector_private *) malloc(_len_vp0*sizeof(struct vector_private));
          for(int _i0 = 0; _i0 < _len_vp0; _i0++) {
            vp[_i0].estats.sg_linearized = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.sg_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.tx_flow_control_xoff = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.tx_flow_control_xon = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.tx_kicks = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.tx_restart_queue = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.tx_timeout_count = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.rx_encaps_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.tx_queue_running_average = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.tx_queue_max = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.rx_queue_running_average = ((-2 * (next_i()%2)) + 1) * next_i();
        vp[_i0].estats.rx_queue_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vector_reset_stats(vp);
          free(vp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
