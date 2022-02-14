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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct usbip_iso_packet_descriptor {int /*<<< orphan*/  actual_length; int /*<<< orphan*/  status; int /*<<< orphan*/  length; int /*<<< orphan*/  offset; } ;
struct usb_iso_packet_descriptor {int /*<<< orphan*/  actual_length; int /*<<< orphan*/  status; int /*<<< orphan*/  length; int /*<<< orphan*/  offset; } ;

/* Variables and functions */

__attribute__((used)) static void usbip_pack_iso(struct usbip_iso_packet_descriptor *iso,
			   struct usb_iso_packet_descriptor *uiso, int pack)
{
	if (pack) {
		iso->offset		= uiso->offset;
		iso->length		= uiso->length;
		iso->status		= uiso->status;
		iso->actual_length	= uiso->actual_length;
	} else {
		uiso->offset		= iso->offset;
		uiso->length		= iso->length;
		uiso->status		= iso->status;
		uiso->actual_length	= iso->actual_length;
	}
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

    // big-arr
    case 0:
    {
          int pack = 255;
          int _len_iso0 = 1;
          struct usbip_iso_packet_descriptor * iso = (struct usbip_iso_packet_descriptor *) malloc(_len_iso0*sizeof(struct usbip_iso_packet_descriptor));
          for(int _i0 = 0; _i0 < _len_iso0; _i0++) {
            iso->actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        iso->status = ((-2 * (next_i()%2)) + 1) * next_i();
        iso->length = ((-2 * (next_i()%2)) + 1) * next_i();
        iso->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uiso0 = 1;
          struct usb_iso_packet_descriptor * uiso = (struct usb_iso_packet_descriptor *) malloc(_len_uiso0*sizeof(struct usb_iso_packet_descriptor));
          for(int _i0 = 0; _i0 < _len_uiso0; _i0++) {
            uiso->actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso->status = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso->length = ((-2 * (next_i()%2)) + 1) * next_i();
        uiso->offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usbip_pack_iso(iso,uiso,pack);
          free(iso);
          free(uiso);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
