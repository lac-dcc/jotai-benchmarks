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
struct can_device_stats {int /*<<< orphan*/  error_passive; int /*<<< orphan*/  error_warning; int /*<<< orphan*/  bus_off; int /*<<< orphan*/  restarts; } ;
struct TYPE_2__ {void* state; struct can_device_stats can_stats; } ;
struct gs_can {TYPE_1__ can; } ;
struct can_frame {int can_id; int* data; } ;

/* Variables and functions */
 int CAN_ERR_BUSOFF ; 
 int CAN_ERR_CRTL ; 
 int CAN_ERR_CRTL_RX_PASSIVE ; 
 int CAN_ERR_CRTL_RX_WARNING ; 
 int CAN_ERR_CRTL_TX_PASSIVE ; 
 int CAN_ERR_CRTL_TX_WARNING ; 
 int CAN_ERR_RESTARTED ; 
 void* CAN_STATE_BUS_OFF ; 
 void* CAN_STATE_ERROR_ACTIVE ; 
 void* CAN_STATE_ERROR_PASSIVE ; 
 void* CAN_STATE_ERROR_WARNING ; 

__attribute__((used)) static void gs_update_state(struct gs_can *dev, struct can_frame *cf)
{
	struct can_device_stats *can_stats = &dev->can.can_stats;

	if (cf->can_id & CAN_ERR_RESTARTED) {
		dev->can.state = CAN_STATE_ERROR_ACTIVE;
		can_stats->restarts++;
	} else if (cf->can_id & CAN_ERR_BUSOFF) {
		dev->can.state = CAN_STATE_BUS_OFF;
		can_stats->bus_off++;
	} else if (cf->can_id & CAN_ERR_CRTL) {
		if ((cf->data[1] & CAN_ERR_CRTL_TX_WARNING) ||
		    (cf->data[1] & CAN_ERR_CRTL_RX_WARNING)) {
			dev->can.state = CAN_STATE_ERROR_WARNING;
			can_stats->error_warning++;
		} else if ((cf->data[1] & CAN_ERR_CRTL_TX_PASSIVE) ||
			   (cf->data[1] & CAN_ERR_CRTL_RX_PASSIVE)) {
			dev->can.state = CAN_STATE_ERROR_PASSIVE;
			can_stats->error_passive++;
		} else {
			dev->can.state = CAN_STATE_ERROR_ACTIVE;
		}
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
          int _len_dev0 = 1;
          struct gs_can * dev = (struct gs_can *) malloc(_len_dev0*sizeof(struct gs_can));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].can.can_stats.error_passive = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].can.can_stats.error_warning = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].can.can_stats.bus_off = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].can.can_stats.restarts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cf0 = 1;
          struct can_frame * cf = (struct can_frame *) malloc(_len_cf0*sizeof(struct can_frame));
          for(int _i0 = 0; _i0 < _len_cf0; _i0++) {
            cf[_i0].can_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cf__i0__data0 = 1;
          cf[_i0].data = (int *) malloc(_len_cf__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cf__i0__data0; _j0++) {
            cf[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gs_update_state(dev,cf);
          free(dev);
          for(int _aux = 0; _aux < _len_cf0; _aux++) {
          free(cf[_aux].data);
          }
          free(cf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
