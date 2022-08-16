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
struct qede_rx_queue {struct qede_agg_info* tpa_info; } ;
struct qede_agg_info {int /*<<< orphan*/  state; } ;

/* Variables and functions */
 int ETH_TPA_MAX_AGGS_NUM ; 
 int /*<<< orphan*/  QEDE_AGG_STATE_NONE ; 

__attribute__((used)) static void qede_set_tpa_param(struct qede_rx_queue *rxq)
{
	int i;

	for (i = 0; i < ETH_TPA_MAX_AGGS_NUM; i++) {
		struct qede_agg_info *tpa_info = &rxq->tpa_info[i];

		tpa_info->state = QEDE_AGG_STATE_NONE;
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
          int _len_rxq0 = 1;
          struct qede_rx_queue * rxq = (struct qede_rx_queue *) malloc(_len_rxq0*sizeof(struct qede_rx_queue));
          for(int _i0 = 0; _i0 < _len_rxq0; _i0++) {
              int _len_rxq__i0__tpa_info0 = 1;
          rxq[_i0].tpa_info = (struct qede_agg_info *) malloc(_len_rxq__i0__tpa_info0*sizeof(struct qede_agg_info));
          for(int _j0 = 0; _j0 < _len_rxq__i0__tpa_info0; _j0++) {
            rxq[_i0].tpa_info->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qede_set_tpa_param(rxq);
          for(int _aux = 0; _aux < _len_rxq0; _aux++) {
          free(rxq[_aux].tpa_info);
          }
          free(rxq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
