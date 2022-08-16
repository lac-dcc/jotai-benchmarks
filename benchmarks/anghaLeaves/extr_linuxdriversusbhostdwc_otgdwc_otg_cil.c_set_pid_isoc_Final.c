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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ speed; int multi_count; void* data_pid_start; scalar_t__ ep_is_in; } ;
typedef  TYPE_1__ dwc_hc_t ;

/* Variables and functions */
 scalar_t__ DWC_OTG_EP_SPEED_HIGH ; 
 void* DWC_OTG_HC_PID_DATA0 ; 
 void* DWC_OTG_HC_PID_DATA1 ; 
 void* DWC_OTG_HC_PID_DATA2 ; 
 void* DWC_OTG_HC_PID_MDATA ; 

void set_pid_isoc(dwc_hc_t * hc)
{
	/* Set up the initial PID for the transfer. */
	if (hc->speed == DWC_OTG_EP_SPEED_HIGH) {
		if (hc->ep_is_in) {
			if (hc->multi_count == 1) {
				hc->data_pid_start = DWC_OTG_HC_PID_DATA0;
			} else if (hc->multi_count == 2) {
				hc->data_pid_start = DWC_OTG_HC_PID_DATA1;
			} else {
				hc->data_pid_start = DWC_OTG_HC_PID_DATA2;
			}
		} else {
			if (hc->multi_count == 1) {
				hc->data_pid_start = DWC_OTG_HC_PID_DATA0;
			} else {
				hc->data_pid_start = DWC_OTG_HC_PID_MDATA;
			}
		}
	} else {
		hc->data_pid_start = DWC_OTG_HC_PID_DATA0;
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
          int _len_hc0 = 1;
          struct TYPE_3__ * hc = (struct TYPE_3__ *) malloc(_len_hc0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hc0; _i0++) {
            hc[_i0].speed = ((-2 * (next_i()%2)) + 1) * next_i();
        hc[_i0].multi_count = ((-2 * (next_i()%2)) + 1) * next_i();
        hc[_i0].ep_is_in = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_pid_isoc(hc);
          free(hc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
