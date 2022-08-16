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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u8 ;
struct TYPE_5__ {int /*<<< orphan*/  proto; } ;
struct TYPE_6__ {TYPE_1__ usr_ip4_spec; } ;
struct TYPE_7__ {int /*<<< orphan*/  proto; } ;
struct TYPE_8__ {TYPE_3__ usr_ip4_spec; } ;
struct ethtool_rx_flow_spec {int flow_type; TYPE_2__ m_u; TYPE_4__ h_u; } ;

/* Variables and functions */
 int FLOW_EXT ; 
#define  IPPROTO_SCTP 134 
#define  IPPROTO_TCP 133 
#define  IPPROTO_UDP 132 
#define  IP_USER_FLOW 131 
 int /*<<< orphan*/  IXGBE_ATR_FLOW_TYPE_IPV4 ; 
 int /*<<< orphan*/  IXGBE_ATR_FLOW_TYPE_SCTPV4 ; 
 int /*<<< orphan*/  IXGBE_ATR_FLOW_TYPE_TCPV4 ; 
 int /*<<< orphan*/  IXGBE_ATR_FLOW_TYPE_UDPV4 ; 
#define  SCTP_V4_FLOW 130 
#define  TCP_V4_FLOW 129 
#define  UDP_V4_FLOW 128 

__attribute__((used)) static int ixgbe_flowspec_to_flow_type(struct ethtool_rx_flow_spec *fsp,
				       u8 *flow_type)
{
	switch (fsp->flow_type & ~FLOW_EXT) {
	case TCP_V4_FLOW:
		*flow_type = IXGBE_ATR_FLOW_TYPE_TCPV4;
		break;
	case UDP_V4_FLOW:
		*flow_type = IXGBE_ATR_FLOW_TYPE_UDPV4;
		break;
	case SCTP_V4_FLOW:
		*flow_type = IXGBE_ATR_FLOW_TYPE_SCTPV4;
		break;
	case IP_USER_FLOW:
		switch (fsp->h_u.usr_ip4_spec.proto) {
		case IPPROTO_TCP:
			*flow_type = IXGBE_ATR_FLOW_TYPE_TCPV4;
			break;
		case IPPROTO_UDP:
			*flow_type = IXGBE_ATR_FLOW_TYPE_UDPV4;
			break;
		case IPPROTO_SCTP:
			*flow_type = IXGBE_ATR_FLOW_TYPE_SCTPV4;
			break;
		case 0:
			if (!fsp->m_u.usr_ip4_spec.proto) {
				*flow_type = IXGBE_ATR_FLOW_TYPE_IPV4;
				break;
			}
			/* fall through */
		default:
			return 0;
		}
		break;
	default:
		return 0;
	}

	return 1;
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
          int _len_fsp0 = 1;
          struct ethtool_rx_flow_spec * fsp = (struct ethtool_rx_flow_spec *) malloc(_len_fsp0*sizeof(struct ethtool_rx_flow_spec));
          for(int _i0 = 0; _i0 < _len_fsp0; _i0++) {
            fsp[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
        fsp[_i0].m_u.usr_ip4_spec.proto = ((-2 * (next_i()%2)) + 1) * next_i();
        fsp[_i0].h_u.usr_ip4_spec.proto = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flow_type0 = 1;
          int * flow_type = (int *) malloc(_len_flow_type0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_flow_type0; _i0++) {
            flow_type[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_flowspec_to_flow_type(fsp,flow_type);
          printf("%d\n", benchRet); 
          free(fsp);
          free(flow_type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
