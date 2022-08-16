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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int iManufacturer; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct dvb_usb_device_properties {int dummy; } ;
struct dvb_usb_device_description {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int a800_identify_state(struct usb_device *udev, struct dvb_usb_device_properties *props,
	struct dvb_usb_device_description **desc, int *cold)
{
	*cold = udev->descriptor.iManufacturer != 1;
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
          int _len_udev0 = 1;
          struct usb_device * udev = (struct usb_device *) malloc(_len_udev0*sizeof(struct usb_device));
          for(int _i0 = 0; _i0 < _len_udev0; _i0++) {
            udev[_i0].descriptor.iManufacturer = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_props0 = 1;
          struct dvb_usb_device_properties * props = (struct dvb_usb_device_properties *) malloc(_len_props0*sizeof(struct dvb_usb_device_properties));
          for(int _i0 = 0; _i0 < _len_props0; _i0++) {
            props[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc0 = 1;
          struct dvb_usb_device_description ** desc = (struct dvb_usb_device_description **) malloc(_len_desc0*sizeof(struct dvb_usb_device_description *));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            int _len_desc1 = 1;
            desc[_i0] = (struct dvb_usb_device_description *) malloc(_len_desc1*sizeof(struct dvb_usb_device_description));
            for(int _i1 = 0; _i1 < _len_desc1; _i1++) {
              desc[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_cold0 = 1;
          int * cold = (int *) malloc(_len_cold0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cold0; _i0++) {
            cold[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = a800_identify_state(udev,props,desc,cold);
          printf("%d\n", benchRet); 
          free(udev);
          free(props);
          for(int i1 = 0; i1 < _len_desc0; i1++) {
            int _len_desc1 = 1;
              free(desc[i1]);
          }
          free(desc);
          free(cold);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
