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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct xhci_hcd {int hci_version; } ;
struct urb {TYPE_3__* ep; TYPE_1__* dev; } ;
struct TYPE_5__ {unsigned int bMaxBurst; } ;
struct TYPE_6__ {TYPE_2__ ss_ep_comp; } ;
struct TYPE_4__ {scalar_t__ speed; } ;

/* Variables and functions */
 scalar_t__ USB_SPEED_SUPER ; 

__attribute__((used)) static unsigned int xhci_get_last_burst_packet_count(struct xhci_hcd *xhci,
		struct urb *urb, unsigned int total_packet_count)
{
	unsigned int max_burst;
	unsigned int residue;

	if (xhci->hci_version < 0x100)
		return 0;

	if (urb->dev->speed >= USB_SPEED_SUPER) {
		/* bMaxBurst is zero based: 0 means 1 packet per burst */
		max_burst = urb->ep->ss_ep_comp.bMaxBurst;
		residue = total_packet_count % (max_burst + 1);
		/* If residue is zero, the last burst contains (max_burst + 1)
		 * number of packets, but the TLBPC field is zero-based.
		 */
		if (residue == 0)
			return max_burst;
		return residue - 1;
	}
	if (total_packet_count == 0)
		return 0;
	return total_packet_count - 1;
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
          unsigned int total_packet_count = 100;
          int _len_xhci0 = 1;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
            xhci[_i0].hci_version = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb0 = 1;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
              int _len_urb__i0__ep0 = 1;
          urb[_i0].ep = (struct TYPE_6__ *) malloc(_len_urb__i0__ep0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_urb__i0__ep0; _j0++) {
            urb[_i0].ep->ss_ep_comp.bMaxBurst = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb__i0__dev0 = 1;
          urb[_i0].dev = (struct TYPE_4__ *) malloc(_len_urb__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_urb__i0__dev0; _j0++) {
            urb[_i0].dev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = xhci_get_last_burst_packet_count(xhci,urb,total_packet_count);
          printf("%u\n", benchRet); 
          free(xhci);
          for(int _aux = 0; _aux < _len_urb0; _aux++) {
          free(urb[_aux].ep);
          }
          for(int _aux = 0; _aux < _len_urb0; _aux++) {
          free(urb[_aux].dev);
          }
          free(urb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
