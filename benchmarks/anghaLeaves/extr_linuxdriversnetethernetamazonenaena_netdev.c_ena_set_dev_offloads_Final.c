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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct net_device {int features; int hw_features; int vlan_features; } ;
struct TYPE_2__ {int tx; int rx_supported; } ;
struct ena_com_dev_get_features_ctx {TYPE_1__ offload; } ;
typedef  int netdev_features_t ;

/* Variables and functions */
 int ENA_ADMIN_FEATURE_OFFLOAD_DESC_RX_L4_IPV4_CSUM_MASK ; 
 int ENA_ADMIN_FEATURE_OFFLOAD_DESC_RX_L4_IPV6_CSUM_MASK ; 
 int ENA_ADMIN_FEATURE_OFFLOAD_DESC_TSO_ECN_MASK ; 
 int ENA_ADMIN_FEATURE_OFFLOAD_DESC_TSO_IPV4_MASK ; 
 int ENA_ADMIN_FEATURE_OFFLOAD_DESC_TSO_IPV6_MASK ; 
 int ENA_ADMIN_FEATURE_OFFLOAD_DESC_TX_L4_IPV4_CSUM_PART_MASK ; 
 int ENA_ADMIN_FEATURE_OFFLOAD_DESC_TX_L4_IPV6_CSUM_PART_MASK ; 
 int NETIF_F_HIGHDMA ; 
 int NETIF_F_IPV6_CSUM ; 
 int NETIF_F_IP_CSUM ; 
 int NETIF_F_RXCSUM ; 
 int NETIF_F_RXHASH ; 
 int NETIF_F_SG ; 
 int NETIF_F_TSO ; 
 int NETIF_F_TSO6 ; 
 int NETIF_F_TSO_ECN ; 

__attribute__((used)) static void ena_set_dev_offloads(struct ena_com_dev_get_features_ctx *feat,
				 struct net_device *netdev)
{
	netdev_features_t dev_features = 0;

	/* Set offload features */
	if (feat->offload.tx &
		ENA_ADMIN_FEATURE_OFFLOAD_DESC_TX_L4_IPV4_CSUM_PART_MASK)
		dev_features |= NETIF_F_IP_CSUM;

	if (feat->offload.tx &
		ENA_ADMIN_FEATURE_OFFLOAD_DESC_TX_L4_IPV6_CSUM_PART_MASK)
		dev_features |= NETIF_F_IPV6_CSUM;

	if (feat->offload.tx & ENA_ADMIN_FEATURE_OFFLOAD_DESC_TSO_IPV4_MASK)
		dev_features |= NETIF_F_TSO;

	if (feat->offload.tx & ENA_ADMIN_FEATURE_OFFLOAD_DESC_TSO_IPV6_MASK)
		dev_features |= NETIF_F_TSO6;

	if (feat->offload.tx & ENA_ADMIN_FEATURE_OFFLOAD_DESC_TSO_ECN_MASK)
		dev_features |= NETIF_F_TSO_ECN;

	if (feat->offload.rx_supported &
		ENA_ADMIN_FEATURE_OFFLOAD_DESC_RX_L4_IPV4_CSUM_MASK)
		dev_features |= NETIF_F_RXCSUM;

	if (feat->offload.rx_supported &
		ENA_ADMIN_FEATURE_OFFLOAD_DESC_RX_L4_IPV6_CSUM_MASK)
		dev_features |= NETIF_F_RXCSUM;

	netdev->features =
		dev_features |
		NETIF_F_SG |
		NETIF_F_RXHASH |
		NETIF_F_HIGHDMA;

	netdev->hw_features |= netdev->features;
	netdev->vlan_features |= netdev->features;
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
          int _len_feat0 = 1;
          struct ena_com_dev_get_features_ctx * feat = (struct ena_com_dev_get_features_ctx *) malloc(_len_feat0*sizeof(struct ena_com_dev_get_features_ctx));
          for(int _i0 = 0; _i0 < _len_feat0; _i0++) {
            feat[_i0].offload.tx = ((-2 * (next_i()%2)) + 1) * next_i();
        feat[_i0].offload.rx_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_netdev0 = 1;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        netdev[_i0].hw_features = ((-2 * (next_i()%2)) + 1) * next_i();
        netdev[_i0].vlan_features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ena_set_dev_offloads(feat,netdev);
          free(feat);
          free(netdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_feat0 = 65025;
          struct ena_com_dev_get_features_ctx * feat = (struct ena_com_dev_get_features_ctx *) malloc(_len_feat0*sizeof(struct ena_com_dev_get_features_ctx));
          for(int _i0 = 0; _i0 < _len_feat0; _i0++) {
            feat[_i0].offload.tx = ((-2 * (next_i()%2)) + 1) * next_i();
        feat[_i0].offload.rx_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_netdev0 = 65025;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        netdev[_i0].hw_features = ((-2 * (next_i()%2)) + 1) * next_i();
        netdev[_i0].vlan_features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ena_set_dev_offloads(feat,netdev);
          free(feat);
          free(netdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_feat0 = 100;
          struct ena_com_dev_get_features_ctx * feat = (struct ena_com_dev_get_features_ctx *) malloc(_len_feat0*sizeof(struct ena_com_dev_get_features_ctx));
          for(int _i0 = 0; _i0 < _len_feat0; _i0++) {
            feat[_i0].offload.tx = ((-2 * (next_i()%2)) + 1) * next_i();
        feat[_i0].offload.rx_supported = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_netdev0 = 100;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        netdev[_i0].hw_features = ((-2 * (next_i()%2)) + 1) * next_i();
        netdev[_i0].vlan_features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ena_set_dev_offloads(feat,netdev);
          free(feat);
          free(netdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
