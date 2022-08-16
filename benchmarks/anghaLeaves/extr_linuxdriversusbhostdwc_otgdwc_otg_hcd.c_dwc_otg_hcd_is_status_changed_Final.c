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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {scalar_t__ port_over_current_change; scalar_t__ port_suspend_change; scalar_t__ port_enable_change; scalar_t__ port_reset_change; scalar_t__ port_connect_status_change; } ;
struct TYPE_5__ {TYPE_2__ b; } ;
struct TYPE_7__ {TYPE_1__ flags; } ;
typedef  TYPE_3__ dwc_otg_hcd_t ;

/* Variables and functions */
 int DWC_E_INVALID ; 

int dwc_otg_hcd_is_status_changed(dwc_otg_hcd_t * hcd, int port)
{
	int retval;

	if (port != 1) {
		return -DWC_E_INVALID;
	}

	retval = (hcd->flags.b.port_connect_status_change ||
		  hcd->flags.b.port_reset_change ||
		  hcd->flags.b.port_enable_change ||
		  hcd->flags.b.port_suspend_change ||
		  hcd->flags.b.port_over_current_change);
#ifdef DEBUG
	if (retval) {
		DWC_DEBUGPL(DBG_HCD, "DWC OTG HCD HUB STATUS DATA:"
			    " Root port status changed\n");
		DWC_DEBUGPL(DBG_HCDV, "  port_connect_status_change: %d\n",
			    hcd->flags.b.port_connect_status_change);
		DWC_DEBUGPL(DBG_HCDV, "  port_reset_change: %d\n",
			    hcd->flags.b.port_reset_change);
		DWC_DEBUGPL(DBG_HCDV, "  port_enable_change: %d\n",
			    hcd->flags.b.port_enable_change);
		DWC_DEBUGPL(DBG_HCDV, "  port_suspend_change: %d\n",
			    hcd->flags.b.port_suspend_change);
		DWC_DEBUGPL(DBG_HCDV, "  port_over_current_change: %d\n",
			    hcd->flags.b.port_over_current_change);
	}
#endif
	return retval;
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
          int port = 100;
          int _len_hcd0 = 1;
          struct TYPE_7__ * hcd = (struct TYPE_7__ *) malloc(_len_hcd0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_hcd0; _i0++) {
            hcd[_i0].flags.b.port_over_current_change = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].flags.b.port_suspend_change = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].flags.b.port_enable_change = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].flags.b.port_reset_change = ((-2 * (next_i()%2)) + 1) * next_i();
        hcd[_i0].flags.b.port_connect_status_change = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dwc_otg_hcd_is_status_changed(hcd,port);
          printf("%d\n", benchRet); 
          free(hcd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
