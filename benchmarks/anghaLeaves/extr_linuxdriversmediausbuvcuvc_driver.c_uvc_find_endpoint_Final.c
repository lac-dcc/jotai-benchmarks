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
       0            empty\n\
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
typedef  scalar_t__ u8 ;
struct TYPE_3__ {unsigned int bNumEndpoints; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {scalar_t__ bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;

/* Variables and functions */

struct usb_host_endpoint *uvc_find_endpoint(struct usb_host_interface *alts,
		u8 epaddr)
{
	struct usb_host_endpoint *ep;
	unsigned int i;

	for (i = 0; i < alts->desc.bNumEndpoints; ++i) {
		ep = &alts->endpoint[i];
		if (ep->desc.bEndpointAddress == epaddr)
			return ep;
	}

	return NULL;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 25
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          long epaddr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_alts0 = 1;
          struct usb_host_interface * alts = (struct usb_host_interface *) malloc(_len_alts0*sizeof(struct usb_host_interface));
          for(int _i0 = 0; _i0 < _len_alts0; _i0++) {
              int _len_alts__i0__endpoint0 = 1;
          alts[_i0].endpoint = (struct usb_host_endpoint *) malloc(_len_alts__i0__endpoint0*sizeof(struct usb_host_endpoint));
          for(int _j0 = 0; _j0 < _len_alts__i0__endpoint0; _j0++) {
              alts[_i0].endpoint->desc.bEndpointAddress = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
          alts[_i0].desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          struct usb_host_endpoint * benchRet = uvc_find_endpoint(alts,epaddr);
          for(int _aux = 0; _aux < _len_alts0; _aux++) {
          free(alts[_aux].endpoint);
          }
          free(alts);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
