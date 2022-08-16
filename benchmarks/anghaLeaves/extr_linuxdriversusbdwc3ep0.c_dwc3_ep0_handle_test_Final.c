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
typedef  int u32 ;
struct dwc3 {int test_mode_nr; int test_mode; } ;
typedef  enum usb_device_state { ____Placeholder_usb_device_state } usb_device_state ;

/* Variables and functions */
 int EINVAL ; 
#define  TEST_FORCE_EN 132 
#define  TEST_J 131 
#define  TEST_K 130 
#define  TEST_PACKET 129 
#define  TEST_SE0_NAK 128 

__attribute__((used)) static int dwc3_ep0_handle_test(struct dwc3 *dwc, enum usb_device_state state,
		u32 wIndex, int set)
{
	if ((wIndex & 0xff) != 0)
		return -EINVAL;
	if (!set)
		return -EINVAL;

	switch (wIndex >> 8) {
	case TEST_J:
	case TEST_K:
	case TEST_SE0_NAK:
	case TEST_PACKET:
	case TEST_FORCE_EN:
		dwc->test_mode_nr = wIndex >> 8;
		dwc->test_mode = true;
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
          enum usb_device_state state = 0;
          int wIndex = 100;
          int set = 100;
          int _len_dwc0 = 1;
          struct dwc3 * dwc = (struct dwc3 *) malloc(_len_dwc0*sizeof(struct dwc3));
          for(int _i0 = 0; _i0 < _len_dwc0; _i0++) {
            dwc[_i0].test_mode_nr = ((-2 * (next_i()%2)) + 1) * next_i();
        dwc[_i0].test_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dwc3_ep0_handle_test(dwc,state,wIndex,set);
          printf("%d\n", benchRet); 
          free(dwc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
