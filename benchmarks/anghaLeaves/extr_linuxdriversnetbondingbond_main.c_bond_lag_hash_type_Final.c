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
       1            big-arr-10x\n\
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
struct TYPE_2__ {int xmit_policy; } ;
struct bonding {TYPE_1__ params; } ;
typedef  enum netdev_lag_tx_type { ____Placeholder_netdev_lag_tx_type } netdev_lag_tx_type ;
typedef  enum netdev_lag_hash { ____Placeholder_netdev_lag_hash } netdev_lag_hash ;

/* Variables and functions */
#define  BOND_XMIT_POLICY_ENCAP23 132 
#define  BOND_XMIT_POLICY_ENCAP34 131 
#define  BOND_XMIT_POLICY_LAYER2 130 
#define  BOND_XMIT_POLICY_LAYER23 129 
#define  BOND_XMIT_POLICY_LAYER34 128 
 int NETDEV_LAG_HASH_E23 ; 
 int NETDEV_LAG_HASH_E34 ; 
 int NETDEV_LAG_HASH_L2 ; 
 int NETDEV_LAG_HASH_L23 ; 
 int NETDEV_LAG_HASH_L34 ; 
 int NETDEV_LAG_HASH_NONE ; 
 int NETDEV_LAG_HASH_UNKNOWN ; 
 int NETDEV_LAG_TX_TYPE_HASH ; 

__attribute__((used)) static enum netdev_lag_hash bond_lag_hash_type(struct bonding *bond,
					       enum netdev_lag_tx_type type)
{
	if (type != NETDEV_LAG_TX_TYPE_HASH)
		return NETDEV_LAG_HASH_NONE;

	switch (bond->params.xmit_policy) {
	case BOND_XMIT_POLICY_LAYER2:
		return NETDEV_LAG_HASH_L2;
	case BOND_XMIT_POLICY_LAYER34:
		return NETDEV_LAG_HASH_L34;
	case BOND_XMIT_POLICY_LAYER23:
		return NETDEV_LAG_HASH_L23;
	case BOND_XMIT_POLICY_ENCAP23:
		return NETDEV_LAG_HASH_E23;
	case BOND_XMIT_POLICY_ENCAP34:
		return NETDEV_LAG_HASH_E34;
	default:
		return NETDEV_LAG_HASH_UNKNOWN;
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
          enum netdev_lag_tx_type type = 0;
          int _len_bond0 = 1;
          struct bonding * bond = (struct bonding *) malloc(_len_bond0*sizeof(struct bonding));
          for(int _i0 = 0; _i0 < _len_bond0; _i0++) {
            bond[_i0].params.xmit_policy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum netdev_lag_hash benchRet = bond_lag_hash_type(bond,type);
          free(bond);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum netdev_lag_tx_type type = 0;
          int _len_bond0 = 100;
          struct bonding * bond = (struct bonding *) malloc(_len_bond0*sizeof(struct bonding));
          for(int _i0 = 0; _i0 < _len_bond0; _i0++) {
            bond[_i0].params.xmit_policy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum netdev_lag_hash benchRet = bond_lag_hash_type(bond,type);
          free(bond);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
