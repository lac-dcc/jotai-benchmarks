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
struct TYPE_2__ {unsigned int sdp_min; unsigned int sdp_max; unsigned int dcp_min; unsigned int dcp_max; unsigned int cdp_min; unsigned int cdp_max; unsigned int aca_min; unsigned int aca_max; } ;
struct usb_phy {int chg_type; TYPE_1__ chg_cur; } ;

/* Variables and functions */
#define  ACA_TYPE 131 
#define  CDP_TYPE 130 
#define  DCP_TYPE 129 
#define  SDP_TYPE 128 

void usb_phy_get_charger_current(struct usb_phy *usb_phy,
				 unsigned int *min, unsigned int *max)
{
	switch (usb_phy->chg_type) {
	case SDP_TYPE:
		*min = usb_phy->chg_cur.sdp_min;
		*max = usb_phy->chg_cur.sdp_max;
		break;
	case DCP_TYPE:
		*min = usb_phy->chg_cur.dcp_min;
		*max = usb_phy->chg_cur.dcp_max;
		break;
	case CDP_TYPE:
		*min = usb_phy->chg_cur.cdp_min;
		*max = usb_phy->chg_cur.cdp_max;
		break;
	case ACA_TYPE:
		*min = usb_phy->chg_cur.aca_min;
		*max = usb_phy->chg_cur.aca_max;
		break;
	default:
		*min = 0;
		*max = 0;
		break;
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
          int _len_usb_phy0 = 1;
          struct usb_phy * usb_phy = (struct usb_phy *) malloc(_len_usb_phy0*sizeof(struct usb_phy));
          for(int _i0 = 0; _i0 < _len_usb_phy0; _i0++) {
            usb_phy[_i0].chg_type = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.sdp_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.sdp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.dcp_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.dcp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.cdp_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.cdp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.aca_min = ((-2 * (next_i()%2)) + 1) * next_i();
        usb_phy[_i0].chg_cur.aca_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_min0 = 1;
          unsigned int * min = (unsigned int *) malloc(_len_min0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_min0; _i0++) {
            min[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max0 = 1;
          unsigned int * max = (unsigned int *) malloc(_len_max0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usb_phy_get_charger_current(usb_phy,min,max);
          free(usb_phy);
          free(min);
          free(max);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
