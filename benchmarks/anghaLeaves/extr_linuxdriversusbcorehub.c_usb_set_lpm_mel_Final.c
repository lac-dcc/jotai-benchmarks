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
struct usb_hub {TYPE_3__* descriptor; } ;
struct usb_device {int dummy; } ;
struct usb3_lpm_parameters {int mel; } ;
struct TYPE_4__ {int bHubHdrDecLat; } ;
struct TYPE_5__ {TYPE_1__ ss; } ;
struct TYPE_6__ {TYPE_2__ u; } ;

/* Variables and functions */

__attribute__((used)) static void usb_set_lpm_mel(struct usb_device *udev,
		struct usb3_lpm_parameters *udev_lpm_params,
		unsigned int udev_exit_latency,
		struct usb_hub *hub,
		struct usb3_lpm_parameters *hub_lpm_params,
		unsigned int hub_exit_latency)
{
	unsigned int total_mel;
	unsigned int device_mel;
	unsigned int hub_mel;

	/*
	 * Calculate the time it takes to transition all links from the roothub
	 * to the parent hub into U0.  The parent hub must then decode the
	 * packet (hub header decode latency) to figure out which port it was
	 * bound for.
	 *
	 * The Hub Header decode latency is expressed in 0.1us intervals (0x1
	 * means 0.1us).  Multiply that by 100 to get nanoseconds.
	 */
	total_mel = hub_lpm_params->mel +
		(hub->descriptor->u.ss.bHubHdrDecLat * 100);

	/*
	 * How long will it take to transition the downstream hub's port into
	 * U0?  The greater of either the hub exit latency or the device exit
	 * latency.
	 *
	 * The BOS U1/U2 exit latencies are expressed in 1us intervals.
	 * Multiply that by 1000 to get nanoseconds.
	 */
	device_mel = udev_exit_latency * 1000;
	hub_mel = hub_exit_latency * 1000;
	if (device_mel > hub_mel)
		total_mel += device_mel;
	else
		total_mel += hub_mel;

	udev_lpm_params->mel = total_mel;
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
          unsigned int udev_exit_latency = 100;
          unsigned int hub_exit_latency = 100;
          int _len_udev0 = 1;
          struct usb_device * udev = (struct usb_device *) malloc(_len_udev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
            udev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udev_lpm_params0 = 1;
          struct usb3_lpm_parameters * udev_lpm_params = (struct usb3_lpm_parameters *) malloc(_len_udev_lpm_params0*sizeof(struct usb3_lpm_parameters));
          for(int _i0 = 0; _i0 < _len_udev_lpm_params0; _i0++) {
            udev_lpm_params[_i0].mel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hub0 = 1;
          struct usb_hub * hub = (struct usb_hub *) malloc(_len_hub0*sizeof(struct usb_hub));
          for(int _i0 = 0; _i0 < _len_hub0; _i0++) {
              int _len_hub__i0__descriptor0 = 1;
          hub[_i0].descriptor = (struct TYPE_6__ *) malloc(_len_hub__i0__descriptor0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_hub__i0__descriptor0; _j0++) {
            hub[_i0].descriptor->u.ss.bHubHdrDecLat = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_hub_lpm_params0 = 1;
          struct usb3_lpm_parameters * hub_lpm_params = (struct usb3_lpm_parameters *) malloc(_len_hub_lpm_params0*sizeof(struct usb3_lpm_parameters));
          for(int _i0 = 0; _i0 < _len_hub_lpm_params0; _i0++) {
            hub_lpm_params[_i0].mel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usb_set_lpm_mel(udev,udev_lpm_params,udev_exit_latency,hub,hub_lpm_params,hub_exit_latency);
          free(udev);
          free(udev_lpm_params);
          for(int _aux = 0; _aux < _len_hub0; _aux++) {
          free(hub[_aux].descriptor);
          }
          free(hub);
          free(hub_lpm_params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
