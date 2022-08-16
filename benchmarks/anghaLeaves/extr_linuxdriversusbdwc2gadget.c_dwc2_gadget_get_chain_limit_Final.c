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
struct dwc2_hsotg_ep {int isochronous; scalar_t__ dir_in; } ;

/* Variables and functions */
 unsigned int DEV_DMA_ISOC_RX_NBYTES_LIMIT ; 
 unsigned int DEV_DMA_ISOC_TX_NBYTES_LIMIT ; 
 unsigned int DEV_DMA_NBYTES_LIMIT ; 
 unsigned int MAX_DMA_DESC_NUM_GENERIC ; 

__attribute__((used)) static unsigned int dwc2_gadget_get_chain_limit(struct dwc2_hsotg_ep *hs_ep)
{
	int is_isoc = hs_ep->isochronous;
	unsigned int maxsize;

	if (is_isoc)
		maxsize = hs_ep->dir_in ? DEV_DMA_ISOC_TX_NBYTES_LIMIT :
					   DEV_DMA_ISOC_RX_NBYTES_LIMIT;
	else
		maxsize = DEV_DMA_NBYTES_LIMIT;

	/* Above size of one descriptor was chosen, multiple it */
	maxsize *= MAX_DMA_DESC_NUM_GENERIC;

	return maxsize;
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
          int _len_hs_ep0 = 1;
          struct dwc2_hsotg_ep * hs_ep = (struct dwc2_hsotg_ep *) malloc(_len_hs_ep0*sizeof(struct dwc2_hsotg_ep));
          for(int _i0 = 0; _i0 < _len_hs_ep0; _i0++) {
            hs_ep[_i0].isochronous = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].dir_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = dwc2_gadget_get_chain_limit(hs_ep);
          printf("%u\n", benchRet); 
          free(hs_ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
