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
struct TYPE_2__ {int num_dev_in_eps; int num_dev_perio_in_ep; scalar_t__ en_multiple_tx_fifo; } ;
struct dwc2_hsotg {TYPE_1__ hw_params; } ;

/* Variables and functions */

int dwc2_hsotg_tx_fifo_count(struct dwc2_hsotg *hsotg)
{
	if (hsotg->hw_params.en_multiple_tx_fifo)
		/* In dedicated FIFO mode we need count of IN EPs */
		return hsotg->hw_params.num_dev_in_eps;
	else
		/* In shared FIFO mode we need count of Periodic IN EPs */
		return hsotg->hw_params.num_dev_perio_in_ep;
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
          int _len_hsotg0 = 1;
          struct dwc2_hsotg * hsotg = (struct dwc2_hsotg *) malloc(_len_hsotg0*sizeof(struct dwc2_hsotg));
          for(int _i0 = 0; _i0 < _len_hsotg0; _i0++) {
            hsotg[_i0].hw_params.num_dev_in_eps = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].hw_params.num_dev_perio_in_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        hsotg[_i0].hw_params.en_multiple_tx_fifo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dwc2_hsotg_tx_fifo_count(hsotg);
          printf("%d\n", benchRet); 
          free(hsotg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
