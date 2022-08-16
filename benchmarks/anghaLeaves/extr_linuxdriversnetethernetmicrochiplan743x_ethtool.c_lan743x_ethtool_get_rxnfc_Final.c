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
typedef  int /*<<< orphan*/  u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; int /*<<< orphan*/  flow_type; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 
#define  ETHTOOL_GRXFH 135 
#define  ETHTOOL_GRXRINGS 134 
#define  IPV4_FLOW 133 
#define  IPV6_FLOW 132 
 int LAN743X_USED_RX_CHANNELS ; 
 int RXH_IP_DST ; 
 int RXH_IP_SRC ; 
 int RXH_L4_B_0_1 ; 
 int RXH_L4_B_2_3 ; 
#define  TCP_V4_FLOW 131 
#define  TCP_V6_FLOW 130 
#define  UDP_V4_FLOW 129 
#define  UDP_V6_FLOW 128 

__attribute__((used)) static int lan743x_ethtool_get_rxnfc(struct net_device *netdev,
				     struct ethtool_rxnfc *rxnfc,
				     u32 *rule_locs)
{
	switch (rxnfc->cmd) {
	case ETHTOOL_GRXFH:
		rxnfc->data = 0;
		switch (rxnfc->flow_type) {
		case TCP_V4_FLOW:case UDP_V4_FLOW:
		case TCP_V6_FLOW:case UDP_V6_FLOW:
			rxnfc->data |= RXH_L4_B_0_1 | RXH_L4_B_2_3;
			/* fall through */
		case IPV4_FLOW: case IPV6_FLOW:
			rxnfc->data |= RXH_IP_SRC | RXH_IP_DST;
			return 0;
		}
		break;
	case ETHTOOL_GRXRINGS:
		rxnfc->data = LAN743X_USED_RX_CHANNELS;
		return 0;
	}
	return -EOPNOTSUPP;
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
          int _len_netdev0 = 1;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxnfc0 = 1;
          struct ethtool_rxnfc * rxnfc = (struct ethtool_rxnfc *) malloc(_len_rxnfc0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_rxnfc0; _i0++) {
            rxnfc[_i0].cmd = ((-2 * (next_i()%2)) + 1) * next_i();
        rxnfc[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        rxnfc[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rule_locs0 = 1;
          int * rule_locs = (int *) malloc(_len_rule_locs0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rule_locs0; _i0++) {
            rule_locs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lan743x_ethtool_get_rxnfc(netdev,rxnfc,rule_locs);
          printf("%d\n", benchRet); 
          free(netdev);
          free(rxnfc);
          free(rule_locs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
