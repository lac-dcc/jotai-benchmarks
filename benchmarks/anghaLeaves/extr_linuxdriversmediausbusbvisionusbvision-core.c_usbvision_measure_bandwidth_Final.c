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
struct usb_usbvision {int isoc_measure_bandwidth_count; int isoc_packet_size; int isoc_packet_count; int used_bandwidth; int isoc_data_count; int isoc_skip_count; } ;

/* Variables and functions */

__attribute__((used)) static int usbvision_measure_bandwidth(struct usb_usbvision *usbvision)
{
	if (usbvision->isoc_measure_bandwidth_count < 2) { /* this gives an average bandwidth of 3 frames */
		usbvision->isoc_measure_bandwidth_count++;
		return 0;
	}
	if ((usbvision->isoc_packet_size > 0) && (usbvision->isoc_packet_count > 0)) {
		usbvision->used_bandwidth = usbvision->isoc_data_count /
					(usbvision->isoc_packet_count + usbvision->isoc_skip_count) *
					100 / usbvision->isoc_packet_size;
	}
	usbvision->isoc_measure_bandwidth_count = 0;
	usbvision->isoc_data_count = 0;
	usbvision->isoc_packet_count = 0;
	usbvision->isoc_skip_count = 0;
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
          int _len_usbvision0 = 1;
          struct usb_usbvision * usbvision = (struct usb_usbvision *) malloc(_len_usbvision0*sizeof(struct usb_usbvision));
          for(int _i0 = 0; _i0 < _len_usbvision0; _i0++) {
            usbvision[_i0].isoc_measure_bandwidth_count = ((-2 * (next_i()%2)) + 1) * next_i();
        usbvision[_i0].isoc_packet_size = ((-2 * (next_i()%2)) + 1) * next_i();
        usbvision[_i0].isoc_packet_count = ((-2 * (next_i()%2)) + 1) * next_i();
        usbvision[_i0].used_bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        usbvision[_i0].isoc_data_count = ((-2 * (next_i()%2)) + 1) * next_i();
        usbvision[_i0].isoc_skip_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = usbvision_measure_bandwidth(usbvision);
          printf("%d\n", benchRet); 
          free(usbvision);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
