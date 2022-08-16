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
struct usbip_header_ret_submit {int /*<<< orphan*/  error_count; int /*<<< orphan*/  number_of_packets; int /*<<< orphan*/  start_frame; int /*<<< orphan*/  actual_length; int /*<<< orphan*/  status; } ;
struct TYPE_2__ {struct usbip_header_ret_submit ret_submit; } ;
struct usbip_header {TYPE_1__ u; } ;
struct urb {int /*<<< orphan*/  error_count; int /*<<< orphan*/  number_of_packets; int /*<<< orphan*/  start_frame; int /*<<< orphan*/  actual_length; int /*<<< orphan*/  status; } ;

/* Variables and functions */

__attribute__((used)) static void usbip_pack_ret_submit(struct usbip_header *pdu, struct urb *urb,
				  int pack)
{
	struct usbip_header_ret_submit *rpdu = &pdu->u.ret_submit;

	if (pack) {
		rpdu->status		= urb->status;
		rpdu->actual_length	= urb->actual_length;
		rpdu->start_frame	= urb->start_frame;
		rpdu->number_of_packets = urb->number_of_packets;
		rpdu->error_count	= urb->error_count;
	} else {
		urb->status		= rpdu->status;
		urb->actual_length	= rpdu->actual_length;
		urb->start_frame	= rpdu->start_frame;
		urb->number_of_packets = rpdu->number_of_packets;
		urb->error_count	= rpdu->error_count;
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

    // int-bounds
    case 0:
    {
          int pack = 100;
          int _len_pdu0 = 1;
          struct usbip_header * pdu = (struct usbip_header *) malloc(_len_pdu0*sizeof(struct usbip_header));
          for(int _i0 = 0; _i0 < _len_pdu0; _i0++) {
            pdu[_i0].u.ret_submit.error_count = ((-2 * (next_i()%2)) + 1) * next_i();
        pdu[_i0].u.ret_submit.number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        pdu[_i0].u.ret_submit.start_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        pdu[_i0].u.ret_submit.actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        pdu[_i0].u.ret_submit.status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb0 = 1;
          struct urb * urb = (struct urb *) malloc(_len_urb0*sizeof(struct urb));
          for(int _i0 = 0; _i0 < _len_urb0; _i0++) {
            urb[_i0].error_count = ((-2 * (next_i()%2)) + 1) * next_i();
        urb[_i0].number_of_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        urb[_i0].start_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        urb[_i0].actual_length = ((-2 * (next_i()%2)) + 1) * next_i();
        urb[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usbip_pack_ret_submit(pdu,urb,pack);
          free(pdu);
          free(urb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
