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
       1            big-arr-10x\n\
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
struct usb_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int usb_enumerate_device_otg(struct usb_device *udev)
{
	int err = 0;

#ifdef	CONFIG_USB_OTG
	/*
	 * OTG-aware devices on OTG-capable root hubs may be able to use SRP,
	 * to wake us after we've powered off VBUS; and HNP, switching roles
	 * "host" to "peripheral".  The OTG descriptor helps figure this out.
	 */
	if (!udev->bus->is_b_host
			&& udev->config
			&& udev->parent == udev->bus->root_hub) {
		struct usb_otg_descriptor	*desc = NULL;
		struct usb_bus			*bus = udev->bus;
		unsigned			port1 = udev->portnum;

		/* descriptor may appear anywhere in config */
		err = __usb_get_extra_descriptor(udev->rawdescriptors[0],
				le16_to_cpu(udev->config[0].desc.wTotalLength),
				USB_DT_OTG, (void **) &desc, sizeof(*desc));
		if (err || !(desc->bmAttributes & USB_OTG_HNP))
			return 0;

		dev_info(&udev->dev, "Dual-Role OTG device on %sHNP port\n",
					(port1 == bus->otg_port) ? "" : "non-");

		/* enable HNP before suspend, it's simpler */
		if (port1 == bus->otg_port) {
			bus->b_hnp_enable = 1;
			err = usb_control_msg(udev,
				usb_sndctrlpipe(udev, 0),
				USB_REQ_SET_FEATURE, 0,
				USB_DEVICE_B_HNP_ENABLE,
				0, NULL, 0,
				USB_CTRL_SET_TIMEOUT);
			if (err < 0) {
				/*
				 * OTG MESSAGE: report errors here,
				 * customize to match your product.
				 */
				dev_err(&udev->dev, "can't set HNP mode: %d\n",
									err);
				bus->b_hnp_enable = 0;
			}
		} else if (desc->bLength == sizeof
				(struct usb_otg_descriptor)) {
			/* Set a_alt_hnp_support for legacy otg device */
			err = usb_control_msg(udev,
				usb_sndctrlpipe(udev, 0),
				USB_REQ_SET_FEATURE, 0,
				USB_DEVICE_A_ALT_HNP_SUPPORT,
				0, NULL, 0,
				USB_CTRL_SET_TIMEOUT);
			if (err < 0)
				dev_err(&udev->dev,
					"set a_alt_hnp_support failed: %d\n",
					err);
		}
	}
#endif
	return err;
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
            udev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = usb_enumerate_device_otg(udev);
          printf("%d\n", benchRet); 
          free(udev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_udev0 = 100;
          struct usb_device * udev = (struct usb_device *) malloc(_len_udev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
            udev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = usb_enumerate_device_otg(udev);
          printf("%d\n", benchRet); 
          free(udev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
