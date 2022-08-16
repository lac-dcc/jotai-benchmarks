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
struct usb_hcd {int dummy; } ;
struct urb {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void dwc2_dump_urb_info(struct usb_hcd *hcd, struct urb *urb,
			       char *fn_name)
{
#ifdef VERBOSE_DEBUG
	struct dwc2_hsotg *hsotg = dwc2_hcd_to_hsotg(hcd);
	char *pipetype = NULL;
	char *speed = NULL;

	dev_vdbg(hsotg->dev, "%s, urb %p\n", fn_name, urb);
	dev_vdbg(hsotg->dev, "  Device address: %d\n",
		 usb_pipedevice(urb->pipe));
	dev_vdbg(hsotg->dev, "  Endpoint: %d, %s\n",
		 usb_pipeendpoint(urb->pipe),
		 usb_pipein(urb->pipe) ? "IN" : "OUT");

	switch (usb_pipetype(urb->pipe)) {
	case PIPE_CONTROL:
		pipetype = "CONTROL";
		break;
	case PIPE_BULK:
		pipetype = "BULK";
		break;
	case PIPE_INTERRUPT:
		pipetype = "INTERRUPT";
		break;
	case PIPE_ISOCHRONOUS:
		pipetype = "ISOCHRONOUS";
		break;
	}

	dev_vdbg(hsotg->dev, "  Endpoint type: %s %s (%s)\n", pipetype,
		 usb_urb_dir_in(urb) ? "IN" : "OUT", usb_pipein(urb->pipe) ?
		 "IN" : "OUT");

	switch (urb->dev->speed) {
	case USB_SPEED_HIGH:
		speed = "HIGH";
		break;
	case USB_SPEED_FULL:
		speed = "FULL";
		break;
	case USB_SPEED_LOW:
		speed = "LOW";
		break;
	default:
		speed = "UNKNOWN";
		break;
	}

	dev_vdbg(hsotg->dev, "  Speed: %s\n", speed);
	dev_vdbg(hsotg->dev, "  Max packet size: %d\n",
		 usb_maxpacket(urb->dev, urb->pipe, usb_pipeout(urb->pipe)));
	dev_vdbg(hsotg->dev, "  Data buffer length: %d\n",
		 urb->transfer_buffer_length);
	dev_vdbg(hsotg->dev, "  Transfer buffer: %p, Transfer DMA: %08lx\n",
		 urb->transfer_buffer, (unsigned long)urb->transfer_dma);
	dev_vdbg(hsotg->dev, "  Setup buffer: %p, Setup DMA: %08lx\n",
		 urb->setup_packet, (unsigned long)urb->setup_dma);
	dev_vdbg(hsotg->dev, "  Interval: %d\n", urb->interval);

	if (usb_pipetype(urb->pipe) == PIPE_ISOCHRONOUS) {
		int i;

		for (i = 0; i < urb->number_of_packets; i++) {
			dev_vdbg(hsotg->dev, "  ISO Desc %d:\n", i);
			dev_vdbg(hsotg->dev, "    offset: %d, length %d\n",
				 urb->iso_frame_desc[i].offset,
				 urb->iso_frame_desc[i].length);
		}
	}
#endif
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
          int _len_hcd0 = 1;
          struct usb_hcd * hcd = (struct usb_hcd *) malloc(_len_hcd0*sizeof(struct usb_hcd));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
            hcd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb0 = 1;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fn_name0 = 1;
          char * fn_name = (char *) malloc(_len_fn_name0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_fn_name0; _i0++) {
            fn_name[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dwc2_dump_urb_info(hcd,urb,fn_name);
          free(hcd);
          free(urb);
          free(fn_name);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
