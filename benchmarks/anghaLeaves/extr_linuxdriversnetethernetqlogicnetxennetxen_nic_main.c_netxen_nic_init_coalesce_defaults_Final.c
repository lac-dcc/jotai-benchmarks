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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  tx_packets; int /*<<< orphan*/  tx_time_us; int /*<<< orphan*/  rx_packets; int /*<<< orphan*/  rx_time_us; } ;
struct TYPE_6__ {TYPE_2__ data; } ;
struct TYPE_4__ {TYPE_3__ normal; int /*<<< orphan*/  flags; } ;
struct netxen_adapter {TYPE_1__ coal; } ;

/* Variables and functions */
 int /*<<< orphan*/  NETXEN_DEFAULT_INTR_COALESCE_RX_PACKETS ; 
 int /*<<< orphan*/  NETXEN_DEFAULT_INTR_COALESCE_RX_TIME_US ; 
 int /*<<< orphan*/  NETXEN_DEFAULT_INTR_COALESCE_TX_PACKETS ; 
 int /*<<< orphan*/  NETXEN_DEFAULT_INTR_COALESCE_TX_TIME_US ; 
 int /*<<< orphan*/  NETXEN_NIC_INTR_DEFAULT ; 

__attribute__((used)) static void
netxen_nic_init_coalesce_defaults(struct netxen_adapter *adapter)
{
	adapter->coal.flags = NETXEN_NIC_INTR_DEFAULT;
	adapter->coal.normal.data.rx_time_us =
		NETXEN_DEFAULT_INTR_COALESCE_RX_TIME_US;
	adapter->coal.normal.data.rx_packets =
		NETXEN_DEFAULT_INTR_COALESCE_RX_PACKETS;
	adapter->coal.normal.data.tx_time_us =
		NETXEN_DEFAULT_INTR_COALESCE_TX_TIME_US;
	adapter->coal.normal.data.tx_packets =
		NETXEN_DEFAULT_INTR_COALESCE_TX_PACKETS;
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
          int _len_adapter0 = 1;
          struct netxen_adapter * adapter = (struct netxen_adapter *) malloc(_len_adapter0*sizeof(struct netxen_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].coal.normal.data.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].coal.normal.data.tx_time_us = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].coal.normal.data.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].coal.normal.data.rx_time_us = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].coal.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          netxen_nic_init_coalesce_defaults(adapter);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
