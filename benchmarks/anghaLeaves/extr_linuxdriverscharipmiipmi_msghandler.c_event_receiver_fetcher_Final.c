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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ipmi_smi {int event_receiver; int event_receiver_lun; } ;
struct TYPE_4__ {scalar_t__ netfn; scalar_t__ cmd; int* data; } ;
struct TYPE_3__ {scalar_t__ addr_type; } ;
struct ipmi_recv_msg {TYPE_2__ msg; TYPE_1__ addr; } ;

/* Variables and functions */
 int IPMI_CC_NO_ERROR ; 
 scalar_t__ IPMI_GET_EVENT_RECEIVER_CMD ; 
 scalar_t__ IPMI_NETFN_SENSOR_EVENT_RESPONSE ; 
 scalar_t__ IPMI_SYSTEM_INTERFACE_ADDR_TYPE ; 

__attribute__((used)) static void event_receiver_fetcher(struct ipmi_smi *intf,
				   struct ipmi_recv_msg *msg)
{
	if ((msg->addr.addr_type == IPMI_SYSTEM_INTERFACE_ADDR_TYPE)
	    && (msg->msg.netfn == IPMI_NETFN_SENSOR_EVENT_RESPONSE)
	    && (msg->msg.cmd == IPMI_GET_EVENT_RECEIVER_CMD)
	    && (msg->msg.data[0] == IPMI_CC_NO_ERROR)) {
		/* A get event receiver command, save it. */
		intf->event_receiver = msg->msg.data[1];
		intf->event_receiver_lun = msg->msg.data[2] & 0x3;
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
          int _len_intf0 = 1;
          struct ipmi_smi * intf = (struct ipmi_smi *) malloc(_len_intf0*sizeof(struct ipmi_smi));
          for(int _i0 = 0; _i0 < _len_intf0; _i0++) {
            intf[_i0].event_receiver = ((-2 * (next_i()%2)) + 1) * next_i();
        intf[_i0].event_receiver_lun = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 1;
          struct ipmi_recv_msg * msg = (struct ipmi_recv_msg *) malloc(_len_msg0*sizeof(struct ipmi_recv_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].msg.netfn = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].msg.cmd = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msg__i0__msg_data0 = 1;
          msg[_i0].msg.data = (int *) malloc(_len_msg__i0__msg_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_msg__i0__msg_data0; _j0++) {
            msg[_i0].msg.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        msg[_i0].addr.addr_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          event_receiver_fetcher(intf,msg);
          free(intf);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
