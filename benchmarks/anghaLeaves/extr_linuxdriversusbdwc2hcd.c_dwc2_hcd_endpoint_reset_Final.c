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
struct usb_host_endpoint {struct dwc2_qh* hcpriv; } ;
struct dwc2_qh {int /*<<< orphan*/  data_toggle; } ;
struct dwc2_hsotg {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  DWC2_HC_PID_DATA0 ; 
 int EINVAL ; 

__attribute__((used)) static int dwc2_hcd_endpoint_reset(struct dwc2_hsotg *hsotg,
				   struct usb_host_endpoint *ep)
{
	struct dwc2_qh *qh = ep->hcpriv;

	if (!qh)
		return -EINVAL;

	qh->data_toggle = DWC2_HC_PID_DATA0;

	return 0;
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
            hsotg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ep0 = 1;
          struct usb_host_endpoint * ep = (struct usb_host_endpoint *) malloc(_len_ep0*sizeof(struct usb_host_endpoint));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
              int _len_ep__i0__hcpriv0 = 1;
          ep[_i0].hcpriv = (struct dwc2_qh *) malloc(_len_ep__i0__hcpriv0*sizeof(struct dwc2_qh));
          for(int _j0 = 0; _j0 < _len_ep__i0__hcpriv0; _j0++) {
            ep[_i0].hcpriv->data_toggle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dwc2_hcd_endpoint_reset(hsotg,ep);
          printf("%d\n", benchRet); 
          free(hsotg);
          for(int _aux = 0; _aux < _len_ep0; _aux++) {
          free(ep[_aux].hcpriv);
          }
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
