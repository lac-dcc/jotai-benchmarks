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
struct cpdma_ctlr {int num_rx_desc; TYPE_1__* pool; scalar_t__ num_tx_desc; } ;
struct TYPE_2__ {scalar_t__ num_desc; } ;

/* Variables and functions */

void cpdma_set_num_rx_descs(struct cpdma_ctlr *ctlr, int num_rx_desc)
{
	ctlr->num_rx_desc = num_rx_desc;
	ctlr->num_tx_desc = ctlr->pool->num_desc - ctlr->num_rx_desc;
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
          int num_rx_desc = 100;
          int _len_ctlr0 = 1;
          struct cpdma_ctlr * ctlr = (struct cpdma_ctlr *) malloc(_len_ctlr0*sizeof(struct cpdma_ctlr));
          for(int _i0 = 0; _i0 < _len_ctlr0; _i0++) {
            ctlr[_i0].num_rx_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctlr__i0__pool0 = 1;
          ctlr[_i0].pool = (struct TYPE_2__ *) malloc(_len_ctlr__i0__pool0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctlr__i0__pool0; _j0++) {
            ctlr[_i0].pool->num_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctlr[_i0].num_tx_desc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cpdma_set_num_rx_descs(ctlr,num_rx_desc);
          for(int _aux = 0; _aux < _len_ctlr0; _aux++) {
          free(ctlr[_aux].pool);
          }
          free(ctlr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
