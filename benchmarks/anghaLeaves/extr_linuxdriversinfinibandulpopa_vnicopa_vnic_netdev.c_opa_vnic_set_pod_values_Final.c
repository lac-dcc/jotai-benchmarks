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
struct TYPE_6__ {int /*<<< orphan*/  eth_mtu; } ;
struct TYPE_4__ {int /*<<< orphan*/  eth_link_status; int /*<<< orphan*/  config_state; int /*<<< orphan*/  max_smac_ent; int /*<<< orphan*/  max_mac_tbl_ent; } ;
struct TYPE_5__ {TYPE_3__ vesw; TYPE_1__ vport; } ;
struct opa_vnic_adapter {TYPE_2__ info; } ;

/* Variables and functions */
 int /*<<< orphan*/  ETH_DATA_LEN ; 
 int /*<<< orphan*/  OPA_VNIC_ETH_LINK_DOWN ; 
 int /*<<< orphan*/  OPA_VNIC_MAC_TBL_MAX_ENTRIES ; 
 int /*<<< orphan*/  OPA_VNIC_MAX_SMAC_LIMIT ; 
 int /*<<< orphan*/  OPA_VNIC_STATE_DROP_ALL ; 

__attribute__((used)) static inline void opa_vnic_set_pod_values(struct opa_vnic_adapter *adapter)
{
	adapter->info.vport.max_mac_tbl_ent = OPA_VNIC_MAC_TBL_MAX_ENTRIES;
	adapter->info.vport.max_smac_ent = OPA_VNIC_MAX_SMAC_LIMIT;
	adapter->info.vport.config_state = OPA_VNIC_STATE_DROP_ALL;
	adapter->info.vport.eth_link_status = OPA_VNIC_ETH_LINK_DOWN;
	adapter->info.vesw.eth_mtu = ETH_DATA_LEN;
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
          struct opa_vnic_adapter * adapter = (struct opa_vnic_adapter *) malloc(_len_adapter0*sizeof(struct opa_vnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].info.vesw.eth_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].info.vport.eth_link_status = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].info.vport.config_state = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].info.vport.max_smac_ent = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].info.vport.max_mac_tbl_ent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          opa_vnic_set_pod_values(adapter);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
