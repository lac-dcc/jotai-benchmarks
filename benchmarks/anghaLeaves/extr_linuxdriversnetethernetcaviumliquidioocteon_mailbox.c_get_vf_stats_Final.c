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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct octeon_device {int num_iqs; int num_oqs; TYPE_4__** droq; TYPE_2__** instr_queue; } ;
struct oct_vf_stats {int /*<<< orphan*/  rx_bytes; int /*<<< orphan*/  rx_packets; int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  tx_packets; } ;
struct TYPE_7__ {scalar_t__ rx_bytes_received; scalar_t__ rx_pkts_received; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct TYPE_5__ {scalar_t__ tx_tot_bytes; scalar_t__ tx_done; } ;
struct TYPE_6__ {TYPE_1__ stats; } ;

/* Variables and functions */

__attribute__((used)) static void get_vf_stats(struct octeon_device *oct,
			 struct oct_vf_stats *stats)
{
	int i;

	for (i = 0; i < oct->num_iqs; i++) {
		if (!oct->instr_queue[i])
			continue;
		stats->tx_packets += oct->instr_queue[i]->stats.tx_done;
		stats->tx_bytes += oct->instr_queue[i]->stats.tx_tot_bytes;
	}

	for (i = 0; i < oct->num_oqs; i++) {
		if (!oct->droq[i])
			continue;
		stats->rx_packets += oct->droq[i]->stats.rx_pkts_received;
		stats->rx_bytes += oct->droq[i]->stats.rx_bytes_received;
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
          int _len_oct0 = 1;
          struct octeon_device * oct = (struct octeon_device *) malloc(_len_oct0*sizeof(struct octeon_device));
          for(int _i0 = 0; _i0 < _len_oct0; _i0++) {
            oct[_i0].num_iqs = ((-2 * (next_i()%2)) + 1) * next_i();
        oct[_i0].num_oqs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_oct__i0__droq0 = 1;
          oct[_i0].droq = (struct TYPE_8__ **) malloc(_len_oct__i0__droq0*sizeof(struct TYPE_8__ *));
          for(int _j0 = 0; _j0 < _len_oct__i0__droq0; _j0++) {
            int _len_oct__i0__droq1 = 1;
            oct[_i0].droq[_j0] = (struct TYPE_8__ *) malloc(_len_oct__i0__droq1*sizeof(struct TYPE_8__));
            for(int _j1 = 0; _j1 < _len_oct__i0__droq1; _j1++) {
              oct[_i0].droq[_j0]->stats.rx_bytes_received = ((-2 * (next_i()%2)) + 1) * next_i();
        oct[_i0].droq[_j0]->stats.rx_pkts_received = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_oct__i0__instr_queue0 = 1;
          oct[_i0].instr_queue = (struct TYPE_6__ **) malloc(_len_oct__i0__instr_queue0*sizeof(struct TYPE_6__ *));
          for(int _j0 = 0; _j0 < _len_oct__i0__instr_queue0; _j0++) {
            int _len_oct__i0__instr_queue1 = 1;
            oct[_i0].instr_queue[_j0] = (struct TYPE_6__ *) malloc(_len_oct__i0__instr_queue1*sizeof(struct TYPE_6__));
            for(int _j1 = 0; _j1 < _len_oct__i0__instr_queue1; _j1++) {
              oct[_i0].instr_queue[_j0]->stats.tx_tot_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        oct[_i0].instr_queue[_j0]->stats.tx_done = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_stats0 = 1;
          struct oct_vf_stats * stats = (struct oct_vf_stats *) malloc(_len_stats0*sizeof(struct oct_vf_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_vf_stats(oct,stats);
          for(int _aux = 0; _aux < _len_oct0; _aux++) {
          free(*(oct[_aux].droq));
        free(oct[_aux].droq);
          }
          for(int _aux = 0; _aux < _len_oct0; _aux++) {
          free(*(oct[_aux].instr_queue));
        free(oct[_aux].instr_queue);
          }
          free(oct);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
