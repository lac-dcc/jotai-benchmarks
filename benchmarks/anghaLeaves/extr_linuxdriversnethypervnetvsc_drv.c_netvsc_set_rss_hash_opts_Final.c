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
struct net_device_context {int /*<<< orphan*/  l4_hash; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 
 int /*<<< orphan*/  HV_TCP4_L4HASH ; 
 int /*<<< orphan*/  HV_TCP6_L4HASH ; 
 int /*<<< orphan*/  HV_UDP4_L4HASH ; 
 int /*<<< orphan*/  HV_UDP6_L4HASH ; 
 int RXH_IP_DST ; 
 int RXH_IP_SRC ; 
 int RXH_L4_B_0_1 ; 
 int RXH_L4_B_2_3 ; 
#define  TCP_V4_FLOW 131 
#define  TCP_V6_FLOW 130 
#define  UDP_V4_FLOW 129 
#define  UDP_V6_FLOW 128 

__attribute__((used)) static int netvsc_set_rss_hash_opts(struct net_device_context *ndc,
				    struct ethtool_rxnfc *info)
{
	if (info->data == (RXH_IP_SRC | RXH_IP_DST |
			   RXH_L4_B_0_1 | RXH_L4_B_2_3)) {
		switch (info->flow_type) {
		case TCP_V4_FLOW:
			ndc->l4_hash |= HV_TCP4_L4HASH;
			break;

		case TCP_V6_FLOW:
			ndc->l4_hash |= HV_TCP6_L4HASH;
			break;

		case UDP_V4_FLOW:
			ndc->l4_hash |= HV_UDP4_L4HASH;
			break;

		case UDP_V6_FLOW:
			ndc->l4_hash |= HV_UDP6_L4HASH;
			break;

		default:
			return -EOPNOTSUPP;
		}

		return 0;
	}

	if (info->data == (RXH_IP_SRC | RXH_IP_DST)) {
		switch (info->flow_type) {
		case TCP_V4_FLOW:
			ndc->l4_hash &= ~HV_TCP4_L4HASH;
			break;

		case TCP_V6_FLOW:
			ndc->l4_hash &= ~HV_TCP6_L4HASH;
			break;

		case UDP_V4_FLOW:
			ndc->l4_hash &= ~HV_UDP4_L4HASH;
			break;

		case UDP_V6_FLOW:
			ndc->l4_hash &= ~HV_UDP6_L4HASH;
			break;

		default:
			return -EOPNOTSUPP;
		}

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
          int _len_ndc0 = 1;
          struct net_device_context * ndc = (struct net_device_context *) malloc(_len_ndc0*sizeof(struct net_device_context));
          for(int _i0 = 0; _i0 < _len_ndc0; _i0++) {
            ndc[_i0].l4_hash = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct ethtool_rxnfc * info = (struct ethtool_rxnfc *) malloc(_len_info0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = netvsc_set_rss_hash_opts(ndc,info);
          printf("%d\n", benchRet); 
          free(ndc);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
