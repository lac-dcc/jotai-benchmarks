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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct usb_host_endpoint {int dummy; } ;
struct usb_device {struct usb_host_endpoint** ep_out; struct usb_host_endpoint** ep_in; } ;

/* Variables and functions */
 unsigned char USB_ENDPOINT_DIR_MASK ; 
 unsigned char USB_ENDPOINT_NUMBER_MASK ; 

__attribute__((used)) static struct usb_host_endpoint *ep_to_host_endpoint(struct usb_device *dev,
						     unsigned char ep)
{
	if (ep & USB_ENDPOINT_DIR_MASK)
		return dev->ep_in[ep & USB_ENDPOINT_NUMBER_MASK];
	else
		return dev->ep_out[ep & USB_ENDPOINT_NUMBER_MASK];
}

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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned char ep = 100;
        
          int _len_dev0 = 1;
          struct usb_device * dev = (struct usb_device *) malloc(_len_dev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ep_out0 = 1;
          dev[_i0].ep_out = (struct usb_host_endpoint **) malloc(_len_dev__i0__ep_out0*sizeof(struct usb_host_endpoint *));
          for(int _j0 = 0; _j0 < _len_dev__i0__ep_out0; _j0++) {
            int _len_dev__i0__ep_out1 = 1;
            dev[_i0].ep_out[_j0] = (struct usb_host_endpoint *) malloc(_len_dev__i0__ep_out1*sizeof(struct usb_host_endpoint));
            for(int _j1 = 0; _j1 < _len_dev__i0__ep_out1; _j1++) {
                dev[_i0].ep_out[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          int _len_dev__i0__ep_in0 = 1;
          dev[_i0].ep_in = (struct usb_host_endpoint **) malloc(_len_dev__i0__ep_in0*sizeof(struct usb_host_endpoint *));
          for(int _j0 = 0; _j0 < _len_dev__i0__ep_in0; _j0++) {
            int _len_dev__i0__ep_in1 = 1;
            dev[_i0].ep_in[_j0] = (struct usb_host_endpoint *) malloc(_len_dev__i0__ep_in1*sizeof(struct usb_host_endpoint));
            for(int _j1 = 0; _j1 < _len_dev__i0__ep_in1; _j1++) {
                dev[_i0].ep_in[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          struct usb_host_endpoint * benchRet = ep_to_host_endpoint(dev,ep);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].ep_out));
        free(dev[_aux].ep_out);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].ep_in));
        free(dev[_aux].ep_in);
          }
          free(dev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned char ep = 255;
        
          int _len_dev0 = 65025;
          struct usb_device * dev = (struct usb_device *) malloc(_len_dev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ep_out0 = 1;
          dev[_i0].ep_out = (struct usb_host_endpoint **) malloc(_len_dev__i0__ep_out0*sizeof(struct usb_host_endpoint *));
          for(int _j0 = 0; _j0 < _len_dev__i0__ep_out0; _j0++) {
            int _len_dev__i0__ep_out1 = 1;
            dev[_i0].ep_out[_j0] = (struct usb_host_endpoint *) malloc(_len_dev__i0__ep_out1*sizeof(struct usb_host_endpoint));
            for(int _j1 = 0; _j1 < _len_dev__i0__ep_out1; _j1++) {
                dev[_i0].ep_out[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          int _len_dev__i0__ep_in0 = 1;
          dev[_i0].ep_in = (struct usb_host_endpoint **) malloc(_len_dev__i0__ep_in0*sizeof(struct usb_host_endpoint *));
          for(int _j0 = 0; _j0 < _len_dev__i0__ep_in0; _j0++) {
            int _len_dev__i0__ep_in1 = 1;
            dev[_i0].ep_in[_j0] = (struct usb_host_endpoint *) malloc(_len_dev__i0__ep_in1*sizeof(struct usb_host_endpoint));
            for(int _j1 = 0; _j1 < _len_dev__i0__ep_in1; _j1++) {
                dev[_i0].ep_in[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          struct usb_host_endpoint * benchRet = ep_to_host_endpoint(dev,ep);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].ep_out));
        free(dev[_aux].ep_out);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].ep_in));
        free(dev[_aux].ep_in);
          }
          free(dev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned char ep = 10;
        
          int _len_dev0 = 100;
          struct usb_device * dev = (struct usb_device *) malloc(_len_dev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ep_out0 = 1;
          dev[_i0].ep_out = (struct usb_host_endpoint **) malloc(_len_dev__i0__ep_out0*sizeof(struct usb_host_endpoint *));
          for(int _j0 = 0; _j0 < _len_dev__i0__ep_out0; _j0++) {
            int _len_dev__i0__ep_out1 = 1;
            dev[_i0].ep_out[_j0] = (struct usb_host_endpoint *) malloc(_len_dev__i0__ep_out1*sizeof(struct usb_host_endpoint));
            for(int _j1 = 0; _j1 < _len_dev__i0__ep_out1; _j1++) {
                dev[_i0].ep_out[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          int _len_dev__i0__ep_in0 = 1;
          dev[_i0].ep_in = (struct usb_host_endpoint **) malloc(_len_dev__i0__ep_in0*sizeof(struct usb_host_endpoint *));
          for(int _j0 = 0; _j0 < _len_dev__i0__ep_in0; _j0++) {
            int _len_dev__i0__ep_in1 = 1;
            dev[_i0].ep_in[_j0] = (struct usb_host_endpoint *) malloc(_len_dev__i0__ep_in1*sizeof(struct usb_host_endpoint));
            for(int _j1 = 0; _j1 < _len_dev__i0__ep_in1; _j1++) {
                dev[_i0].ep_in[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          struct usb_host_endpoint * benchRet = ep_to_host_endpoint(dev,ep);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].ep_out));
        free(dev[_aux].ep_out);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].ep_in));
        free(dev[_aux].ep_in);
          }
          free(dev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned char ep = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct usb_device * dev = (struct usb_device *) malloc(_len_dev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__ep_out0 = 1;
          dev[_i0].ep_out = (struct usb_host_endpoint **) malloc(_len_dev__i0__ep_out0*sizeof(struct usb_host_endpoint *));
          for(int _j0 = 0; _j0 < _len_dev__i0__ep_out0; _j0++) {
            int _len_dev__i0__ep_out1 = 1;
            dev[_i0].ep_out[_j0] = (struct usb_host_endpoint *) malloc(_len_dev__i0__ep_out1*sizeof(struct usb_host_endpoint));
            for(int _j1 = 0; _j1 < _len_dev__i0__ep_out1; _j1++) {
                dev[_i0].ep_out[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
          int _len_dev__i0__ep_in0 = 1;
          dev[_i0].ep_in = (struct usb_host_endpoint **) malloc(_len_dev__i0__ep_in0*sizeof(struct usb_host_endpoint *));
          for(int _j0 = 0; _j0 < _len_dev__i0__ep_in0; _j0++) {
            int _len_dev__i0__ep_in1 = 1;
            dev[_i0].ep_in[_j0] = (struct usb_host_endpoint *) malloc(_len_dev__i0__ep_in1*sizeof(struct usb_host_endpoint));
            for(int _j1 = 0; _j1 < _len_dev__i0__ep_in1; _j1++) {
                dev[_i0].ep_in[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
            }
          }
        
          }
        
          struct usb_host_endpoint * benchRet = ep_to_host_endpoint(dev,ep);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].ep_out));
        free(dev[_aux].ep_out);
          }
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(*(dev[_aux].ep_in));
        free(dev[_aux].ep_in);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
