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
typedef  size_t u8 ;
struct rsi_common {TYPE_2__* tx_qinfo; TYPE_1__* edca_params; } ;
struct TYPE_4__ {scalar_t__ pkt_contended; scalar_t__ wme_params; scalar_t__ weight; } ;
struct TYPE_3__ {int cw_min; int aifs; } ;

/* Variables and functions */
 size_t NUM_EDCA_QUEUES ; 
 scalar_t__ SIFS_DURATION ; 
 int WMM_SHORT_SLOT_TIME ; 

__attribute__((used)) static void rsi_set_contention_vals(struct rsi_common *common)
{
	u8 ii = 0;

	for (; ii < NUM_EDCA_QUEUES; ii++) {
		common->tx_qinfo[ii].wme_params =
			(((common->edca_params[ii].cw_min / 2) +
			  (common->edca_params[ii].aifs)) *
			  WMM_SHORT_SLOT_TIME + SIFS_DURATION);
		common->tx_qinfo[ii].weight = common->tx_qinfo[ii].wme_params;
		common->tx_qinfo[ii].pkt_contended = 0;
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
          int _len_common0 = 1;
          struct rsi_common * common = (struct rsi_common *) malloc(_len_common0*sizeof(struct rsi_common));
          for(int _i0 = 0; _i0 < _len_common0; _i0++) {
              int _len_common__i0__tx_qinfo0 = 1;
          common[_i0].tx_qinfo = (struct TYPE_4__ *) malloc(_len_common__i0__tx_qinfo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_common__i0__tx_qinfo0; _j0++) {
            common[_i0].tx_qinfo->pkt_contended = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].tx_qinfo->wme_params = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].tx_qinfo->weight = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_common__i0__edca_params0 = 1;
          common[_i0].edca_params = (struct TYPE_3__ *) malloc(_len_common__i0__edca_params0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_common__i0__edca_params0; _j0++) {
            common[_i0].edca_params->cw_min = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].edca_params->aifs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rsi_set_contention_vals(common);
          for(int _aux = 0; _aux < _len_common0; _aux++) {
          free(common[_aux].tx_qinfo);
          }
          for(int _aux = 0; _aux < _len_common0; _aux++) {
          free(common[_aux].edca_params);
          }
          free(common);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
