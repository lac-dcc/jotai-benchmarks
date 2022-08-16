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
struct TYPE_2__ {unsigned int maxpacket; } ;
struct dwc2_hsotg_ep {int index; TYPE_1__ ep; scalar_t__ dir_in; } ;

/* Variables and functions */
 int DIEPTSIZ0_PKTCNT_LIMIT ; 
 int DXEPTSIZ_PKTCNT_LIMIT ; 
 int DXEPTSIZ_XFERSIZE_LIMIT ; 

__attribute__((used)) static unsigned int get_ep_limit(struct dwc2_hsotg_ep *hs_ep)
{
	int index = hs_ep->index;
	unsigned int maxsize;
	unsigned int maxpkt;

	if (index != 0) {
		maxsize = DXEPTSIZ_XFERSIZE_LIMIT + 1;
		maxpkt = DXEPTSIZ_PKTCNT_LIMIT + 1;
	} else {
		maxsize = 64 + 64;
		if (hs_ep->dir_in)
			maxpkt = DIEPTSIZ0_PKTCNT_LIMIT + 1;
		else
			maxpkt = 2;
	}

	/* we made the constant loading easier above by using +1 */
	maxpkt--;
	maxsize--;

	/*
	 * constrain by packet count if maxpkts*pktsize is greater
	 * than the length register size.
	 */

	if ((maxpkt * hs_ep->ep.maxpacket) < maxsize)
		maxsize = maxpkt * hs_ep->ep.maxpacket;

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
            hs_ep[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].ep.maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
        hs_ep[_i0].dir_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_ep_limit(hs_ep);
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
