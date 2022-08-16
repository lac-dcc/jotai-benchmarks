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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct usb_device_descriptor {int bDeviceClass; int bNumConfigurations; } ;
struct TYPE_3__ {int /*<<< orphan*/  of_node; } ;
struct usb_device {TYPE_2__* config; TYPE_1__ dev; struct usb_device_descriptor descriptor; } ;
struct usb_config_descriptor {int bNumInterfaces; } ;
struct TYPE_4__ {struct usb_config_descriptor desc; } ;

/* Variables and functions */
#define  USB_CLASS_HUB 129 
#define  USB_CLASS_PER_INTERFACE 128 

bool usb_of_has_combined_node(struct usb_device *udev)
{
	struct usb_device_descriptor *ddesc = &udev->descriptor;
	struct usb_config_descriptor *cdesc;

	if (!udev->dev.of_node)
		return false;

	switch (ddesc->bDeviceClass) {
	case USB_CLASS_PER_INTERFACE:
	case USB_CLASS_HUB:
		if (ddesc->bNumConfigurations == 1) {
			cdesc = &udev->config->desc;
			if (cdesc->bNumInterfaces == 1)
				return true;
		}
	}

	return false;
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
          int _len_udev0 = 1;
          struct usb_device * udev = (struct usb_device *) malloc(_len_udev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
              int _len_udev__i0__config0 = 1;
          udev[_i0].config = (struct TYPE_4__ *) malloc(_len_udev__i0__config0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_udev__i0__config0; _j0++) {
            udev[_i0].config->desc.bNumInterfaces = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        udev[_i0].dev.of_node = ((-2 * (next_i()%2)) + 1) * next_i();
        udev[_i0].descriptor.bDeviceClass = ((-2 * (next_i()%2)) + 1) * next_i();
        udev[_i0].descriptor.bNumConfigurations = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = usb_of_has_combined_node(udev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_udev0; _aux++) {
          free(udev[_aux].config);
          }
          free(udev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
