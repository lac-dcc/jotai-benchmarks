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
struct TYPE_2__ {unsigned int bMaxPower; } ;
struct usb_host_config {TYPE_1__ desc; } ;
struct usb_device {scalar_t__ speed; } ;

/* Variables and functions */
 scalar_t__ USB_SPEED_SUPER ; 

__attribute__((used)) static inline unsigned usb_get_max_power(struct usb_device *udev,
		struct usb_host_config *c)
{
	/* SuperSpeed power is in 8 mA units; others are in 2 mA units */
	unsigned mul = (udev->speed >= USB_SPEED_SUPER ? 8 : 2);

	return c->desc.bMaxPower * mul;
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
            udev[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct usb_host_config * c = (struct usb_host_config *) malloc(_len_c0*sizeof(struct usb_host_config));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].desc.bMaxPower = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = usb_get_max_power(udev,c);
          printf("%u\n", benchRet); 
          free(udev);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
