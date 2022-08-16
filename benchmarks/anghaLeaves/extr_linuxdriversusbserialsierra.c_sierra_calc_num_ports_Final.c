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
typedef  int u8 ;
struct usb_serial_endpoints {int dummy; } ;
struct usb_serial {TYPE_3__* interface; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_4__ {int bInterfaceNumber; int bNumEndpoints; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;

/* Variables and functions */

__attribute__((used)) static int sierra_calc_num_ports(struct usb_serial *serial,
					struct usb_serial_endpoints *epds)
{
	int num_ports = 0;
	u8 ifnum, numendpoints;

	ifnum = serial->interface->cur_altsetting->desc.bInterfaceNumber;
	numendpoints = serial->interface->cur_altsetting->desc.bNumEndpoints;

	/* Dummy interface present on some SKUs should be ignored */
	if (ifnum == 0x99)
		num_ports = 0;
	else if (numendpoints <= 3)
		num_ports = 1;
	else
		num_ports = (numendpoints-1)/2;
	return num_ports;
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
          int _len_serial0 = 1;
          struct usb_serial * serial = (struct usb_serial *) malloc(_len_serial0*sizeof(struct usb_serial));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
              int _len_serial__i0__interface0 = 1;
          serial[_i0].interface = (struct TYPE_6__ *) malloc(_len_serial__i0__interface0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_serial__i0__interface0; _j0++) {
              int _len_serial__i0__interface_cur_altsetting0 = 1;
          serial[_i0].interface->cur_altsetting = (struct TYPE_5__ *) malloc(_len_serial__i0__interface_cur_altsetting0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_serial__i0__interface_cur_altsetting0; _j0++) {
            serial[_i0].interface->cur_altsetting->desc.bInterfaceNumber = ((-2 * (next_i()%2)) + 1) * next_i();
        serial[_i0].interface->cur_altsetting->desc.bNumEndpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_epds0 = 1;
          struct usb_serial_endpoints * epds = (struct usb_serial_endpoints *) malloc(_len_epds0*sizeof(struct usb_serial_endpoints));
          for(int _i0 = 0; _i0 < _len_epds0; _i0++) {
            epds[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sierra_calc_num_ports(serial,epds);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_serial0; _aux++) {
          free(serial[_aux].interface);
          }
          free(serial);
          free(epds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
