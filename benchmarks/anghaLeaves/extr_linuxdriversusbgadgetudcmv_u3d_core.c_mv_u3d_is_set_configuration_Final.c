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
struct usb_ctrlrequest {int bRequestType; scalar_t__ bRequest; } ;

/* Variables and functions */
 scalar_t__ USB_REQ_SET_CONFIGURATION ; 
 int USB_TYPE_MASK ; 
 int USB_TYPE_STANDARD ; 

__attribute__((used)) static int mv_u3d_is_set_configuration(struct usb_ctrlrequest *setup)
{
	if ((setup->bRequestType & USB_TYPE_MASK) == USB_TYPE_STANDARD)
		if (setup->bRequest == USB_REQ_SET_CONFIGURATION)
			return 1;

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
          int _len_setup0 = 1;
          struct usb_ctrlrequest * setup = (struct usb_ctrlrequest *) malloc(_len_setup0*sizeof(struct usb_ctrlrequest));
          for(int _i0 = 0; _i0 < _len_setup0; _i0++) {
            setup[_i0].bRequestType = ((-2 * (next_i()%2)) + 1) * next_i();
        setup[_i0].bRequest = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mv_u3d_is_set_configuration(setup);
          printf("%d\n", benchRet); 
          free(setup);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
