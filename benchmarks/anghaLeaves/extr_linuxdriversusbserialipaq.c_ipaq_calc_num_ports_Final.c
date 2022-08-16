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
struct usb_serial_endpoints {int num_bulk_in; int num_bulk_out; int /*<<< orphan*/ * bulk_out; int /*<<< orphan*/ * bulk_in; } ;
struct usb_serial {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static int ipaq_calc_num_ports(struct usb_serial *serial,
					struct usb_serial_endpoints *epds)
{
	/*
	 * Some of the devices in ipaq_id_table[] are composite, and we
	 * shouldn't bind to all the interfaces. This test will rule out
	 * some obviously invalid possibilities.
	 */
	if (epds->num_bulk_in == 0 || epds->num_bulk_out == 0)
		return -ENODEV;

	/*
	 * A few devices have four endpoints, seemingly Yakuma devices, and
	 * we need the second pair.
	 */
	if (epds->num_bulk_in > 1 && epds->num_bulk_out > 1) {
		epds->bulk_in[0] = epds->bulk_in[1];
		epds->bulk_out[0] = epds->bulk_out[1];
	}

	/*
	 * Other devices have 3 endpoints, but we only use the first bulk in
	 * and out endpoints.
	 */
	epds->num_bulk_in = 1;
	epds->num_bulk_out = 1;

	return 1;
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
            serial[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_epds0 = 1;
          struct usb_serial_endpoints * epds = (struct usb_serial_endpoints *) malloc(_len_epds0*sizeof(struct usb_serial_endpoints));
          for(int _i0 = 0; _i0 < _len_epds0; _i0++) {
            epds[_i0].num_bulk_in = ((-2 * (next_i()%2)) + 1) * next_i();
        epds[_i0].num_bulk_out = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_epds__i0__bulk_out0 = 1;
          epds[_i0].bulk_out = (int *) malloc(_len_epds__i0__bulk_out0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_epds__i0__bulk_out0; _j0++) {
            epds[_i0].bulk_out[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_epds__i0__bulk_in0 = 1;
          epds[_i0].bulk_in = (int *) malloc(_len_epds__i0__bulk_in0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_epds__i0__bulk_in0; _j0++) {
            epds[_i0].bulk_in[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipaq_calc_num_ports(serial,epds);
          printf("%d\n", benchRet); 
          free(serial);
          for(int _aux = 0; _aux < _len_epds0; _aux++) {
          free(epds[_aux].bulk_out);
          }
          for(int _aux = 0; _aux < _len_epds0; _aux++) {
          free(epds[_aux].bulk_in);
          }
          free(epds);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
