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
struct usb_config_descriptor {scalar_t__ bDescriptorType; unsigned int bLength; scalar_t__ bConfigurationValue; int bmAttributes; } ;

/* Variables and functions */
 int USB_CONFIG_ATT_ONE ; 
 int USB_CONFIG_ATT_WAKEUP ; 
 scalar_t__ USB_DT_CONFIG ; 
 unsigned int USB_DT_CONFIG_SIZE ; 

__attribute__((used)) static int is_valid_config(struct usb_config_descriptor *config,
		unsigned int total)
{
	return config->bDescriptorType == USB_DT_CONFIG
		&& config->bLength == USB_DT_CONFIG_SIZE
		&& total >= USB_DT_CONFIG_SIZE
		&& config->bConfigurationValue != 0
		&& (config->bmAttributes & USB_CONFIG_ATT_ONE) != 0
		&& (config->bmAttributes & USB_CONFIG_ATT_WAKEUP) == 0;
	/* FIXME if gadget->is_otg, _must_ include an otg descriptor */
	/* FIXME check lengths: walk to end */
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
          unsigned int total = 100;
          int _len_config0 = 1;
          struct usb_config_descriptor * config = (struct usb_config_descriptor *) malloc(_len_config0*sizeof(struct usb_config_descriptor));
          for(int _i0 = 0; _i0 < _len_config0; _i0++) {
            config[_i0].bDescriptorType = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].bLength = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].bConfigurationValue = ((-2 * (next_i()%2)) + 1) * next_i();
        config[_i0].bmAttributes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_valid_config(config,total);
          printf("%d\n", benchRet); 
          free(config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
