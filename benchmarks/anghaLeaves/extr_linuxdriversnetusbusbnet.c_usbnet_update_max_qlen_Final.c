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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct usbnet {int rx_qlen; int rx_urb_size; int tx_qlen; int hard_mtu; TYPE_1__* udev; } ;
typedef  enum usb_device_speed { ____Placeholder_usb_device_speed } usb_device_speed ;
struct TYPE_2__ {int speed; } ;

/* Variables and functions */
 int MAX_QUEUE_MEMORY ; 
#define  USB_SPEED_HIGH 130 
#define  USB_SPEED_SUPER 129 
#define  USB_SPEED_SUPER_PLUS 128 

void usbnet_update_max_qlen(struct usbnet *dev)
{
	enum usb_device_speed speed = dev->udev->speed;

	switch (speed) {
	case USB_SPEED_HIGH:
		dev->rx_qlen = MAX_QUEUE_MEMORY / dev->rx_urb_size;
		dev->tx_qlen = MAX_QUEUE_MEMORY / dev->hard_mtu;
		break;
	case USB_SPEED_SUPER:
	case USB_SPEED_SUPER_PLUS:
		/*
		 * Not take default 5ms qlen for super speed HC to
		 * save memory, and iperf tests show 2.5ms qlen can
		 * work well
		 */
		dev->rx_qlen = 5 * MAX_QUEUE_MEMORY / dev->rx_urb_size;
		dev->tx_qlen = 5 * MAX_QUEUE_MEMORY / dev->hard_mtu;
		break;
	default:
		dev->rx_qlen = dev->tx_qlen = 4;
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
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
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_dev0 = 65025;
          struct usbnet * dev = (struct usbnet *) malloc(_len_dev0*sizeof(struct usbnet));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].rx_qlen = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].rx_urb_size = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].tx_qlen = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].hard_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__udev0 = 1;
          dev[_i0].udev = (struct TYPE_2__ *) malloc(_len_dev__i0__udev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__udev0; _j0++) {
              dev[_i0].udev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          usbnet_update_max_qlen(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].udev);
          }
          free(dev);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
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
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_dev0 = 100;
          struct usbnet * dev = (struct usbnet *) malloc(_len_dev0*sizeof(struct usbnet));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].rx_qlen = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].rx_urb_size = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].tx_qlen = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].hard_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__udev0 = 1;
          dev[_i0].udev = (struct TYPE_2__ *) malloc(_len_dev__i0__udev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__udev0; _j0++) {
              dev[_i0].udev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          usbnet_update_max_qlen(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].udev);
          }
          free(dev);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
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
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int _len_dev0 = 1;
          struct usbnet * dev = (struct usbnet *) malloc(_len_dev0*sizeof(struct usbnet));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].rx_qlen = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].rx_urb_size = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].tx_qlen = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].hard_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__udev0 = 1;
          dev[_i0].udev = (struct TYPE_2__ *) malloc(_len_dev__i0__udev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__udev0; _j0++) {
              dev[_i0].udev->speed = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          usbnet_update_max_qlen(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].udev);
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
