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
struct hid_device {scalar_t__ product; } ;
typedef  int __u8 ;

/* Variables and functions */
 scalar_t__ USB_DEVICE_ID_TEXAS_INSTRUMENTS_LENOVO_YOGA ; 

__attribute__((used)) static __u8 *sensor_hub_report_fixup(struct hid_device *hdev, __u8 *rdesc,
		unsigned int *rsize)
{
	/*
	 * Checks if the report descriptor of Thinkpad Helix 2 has a logical
	 * minimum for magnetic flux axis greater than the maximum.
	 */
	if (hdev->product == USB_DEVICE_ID_TEXAS_INSTRUMENTS_LENOVO_YOGA &&
		*rsize == 2558 && rdesc[913] == 0x17 && rdesc[914] == 0x40 &&
		rdesc[915] == 0x81 && rdesc[916] == 0x08 &&
		rdesc[917] == 0x00 && rdesc[918] == 0x27 &&
		rdesc[921] == 0x07 && rdesc[922] == 0x00) {
		/* Sets negative logical minimum for mag x, y and z */
		rdesc[914] = rdesc[935] = rdesc[956] = 0xc0;
		rdesc[915] = rdesc[936] = rdesc[957] = 0x7e;
		rdesc[916] = rdesc[937] = rdesc[958] = 0xf7;
		rdesc[917] = rdesc[938] = rdesc[959] = 0xff;
	}

	return rdesc;
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
          int _len_hdev0 = 1;
          struct hid_device * hdev = (struct hid_device *) malloc(_len_hdev0*sizeof(struct hid_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].product = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rdesc0 = 1;
          int * rdesc = (int *) malloc(_len_rdesc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rdesc0; _i0++) {
            rdesc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rsize0 = 1;
          unsigned int * rsize = (unsigned int *) malloc(_len_rsize0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rsize0; _i0++) {
            rsize[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = sensor_hub_report_fixup(hdev,rdesc,rsize);
          printf("%d\n", (*benchRet)); 
          free(hdev);
          free(rdesc);
          free(rsize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
