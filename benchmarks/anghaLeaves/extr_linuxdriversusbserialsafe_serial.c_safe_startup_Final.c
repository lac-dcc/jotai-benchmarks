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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct usb_serial {TYPE_4__* interface; TYPE_2__* dev; } ;
struct usb_interface_descriptor {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; int bInterfaceProtocol; } ;
struct TYPE_8__ {TYPE_3__* cur_altsetting; } ;
struct TYPE_7__ {struct usb_interface_descriptor desc; } ;
struct TYPE_5__ {scalar_t__ bDeviceClass; } ;
struct TYPE_6__ {TYPE_1__ descriptor; } ;

/* Variables and functions */
 scalar_t__ CDC_DEVICE_CLASS ; 
 int EINVAL ; 
 int ENODEV ; 
 scalar_t__ LINEO_INTERFACE_CLASS ; 
 scalar_t__ LINEO_INTERFACE_SUBCLASS_SAFESERIAL ; 
#define  LINEO_SAFESERIAL_CRC 129 
#define  LINEO_SAFESERIAL_CRC_PADDED 128 
 int padded ; 

__attribute__((used)) static int safe_startup(struct usb_serial *serial)
{
	struct usb_interface_descriptor	*desc;

	if (serial->dev->descriptor.bDeviceClass != CDC_DEVICE_CLASS)
		return -ENODEV;

	desc = &serial->interface->cur_altsetting->desc;

	if (desc->bInterfaceClass != LINEO_INTERFACE_CLASS)
		return -ENODEV;
	if (desc->bInterfaceSubClass != LINEO_INTERFACE_SUBCLASS_SAFESERIAL)
		return -ENODEV;

	switch (desc->bInterfaceProtocol) {
	case LINEO_SAFESERIAL_CRC:
		break;
	case LINEO_SAFESERIAL_CRC_PADDED:
		padded = true;
		break;
	default:
		return -EINVAL;
	}
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
          int _len_serial0 = 1;
          struct usb_serial * serial = (struct usb_serial *) malloc(_len_serial0*sizeof(struct usb_serial));
          for(int _i0 = 0; _i0 < _len_serial0; _i0++) {
              int _len_serial__i0__interface0 = 1;
          serial[_i0].interface = (struct TYPE_8__ *) malloc(_len_serial__i0__interface0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_serial__i0__interface0; _j0++) {
              int _len_serial__i0__interface_cur_altsetting0 = 1;
          serial[_i0].interface->cur_altsetting = (struct TYPE_7__ *) malloc(_len_serial__i0__interface_cur_altsetting0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_serial__i0__interface_cur_altsetting0; _j0++) {
            serial[_i0].interface->cur_altsetting->desc.bInterfaceClass = ((-2 * (next_i()%2)) + 1) * next_i();
        serial[_i0].interface->cur_altsetting->desc.bInterfaceSubClass = ((-2 * (next_i()%2)) + 1) * next_i();
        serial[_i0].interface->cur_altsetting->desc.bInterfaceProtocol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_serial__i0__dev0 = 1;
          serial[_i0].dev = (struct TYPE_6__ *) malloc(_len_serial__i0__dev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_serial__i0__dev0; _j0++) {
            serial[_i0].dev->descriptor.bDeviceClass = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = safe_startup(serial);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_serial0; _aux++) {
          free(serial[_aux].interface);
          }
          for(int _aux = 0; _aux < _len_serial0; _aux++) {
          free(serial[_aux].dev);
          }
          free(serial);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
