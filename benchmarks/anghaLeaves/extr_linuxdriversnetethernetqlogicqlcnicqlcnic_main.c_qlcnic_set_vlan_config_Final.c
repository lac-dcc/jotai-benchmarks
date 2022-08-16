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
struct qlcnic_esw_func_cfg {scalar_t__ vlan_id; scalar_t__ discard_tagged; } ;
struct qlcnic_adapter {scalar_t__ tx_pvid; scalar_t__ rx_pvid; int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  QLCNIC_TAGGING_ENABLED ; 

void qlcnic_set_vlan_config(struct qlcnic_adapter *adapter,
			    struct qlcnic_esw_func_cfg *esw_cfg)
{
	if (esw_cfg->discard_tagged)
		adapter->flags &= ~QLCNIC_TAGGING_ENABLED;
	else
		adapter->flags |= QLCNIC_TAGGING_ENABLED;

	if (esw_cfg->vlan_id) {
		adapter->rx_pvid = esw_cfg->vlan_id;
		adapter->tx_pvid = esw_cfg->vlan_id;
	} else {
		adapter->rx_pvid = 0;
		adapter->tx_pvid = 0;
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
          int _len_adapter0 = 1;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].tx_pvid = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].rx_pvid = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_esw_cfg0 = 1;
          struct qlcnic_esw_func_cfg * esw_cfg = (struct qlcnic_esw_func_cfg *) malloc(_len_esw_cfg0*sizeof(struct qlcnic_esw_func_cfg));
          for(int _i0 = 0; _i0 < _len_esw_cfg0; _i0++) {
            esw_cfg[_i0].vlan_id = ((-2 * (next_i()%2)) + 1) * next_i();
        esw_cfg[_i0].discard_tagged = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qlcnic_set_vlan_config(adapter,esw_cfg);
          free(adapter);
          free(esw_cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
