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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct ixgbe_adapter {int flags2; } ;
struct ethtool_rxnfc {int data; int flow_type; } ;

/* Variables and functions */
#define  AH_ESP_V4_FLOW 141 
#define  AH_ESP_V6_FLOW 140 
#define  AH_V4_FLOW 139 
#define  AH_V6_FLOW 138 
 int EINVAL ; 
#define  ESP_V4_FLOW 137 
#define  ESP_V6_FLOW 136 
#define  IPV4_FLOW 135 
#define  IPV6_FLOW 134 
 int IXGBE_FLAG2_RSS_FIELD_IPV4_UDP ; 
 int IXGBE_FLAG2_RSS_FIELD_IPV6_UDP ; 
 int RXH_IP_DST ; 
 int RXH_IP_SRC ; 
 int RXH_L4_B_0_1 ; 
 int RXH_L4_B_2_3 ; 
#define  SCTP_V4_FLOW 133 
#define  SCTP_V6_FLOW 132 
#define  TCP_V4_FLOW 131 
#define  TCP_V6_FLOW 130 
#define  UDP_V4_FLOW 129 
#define  UDP_V6_FLOW 128 

__attribute__((used)) static int ixgbe_get_rss_hash_opts(struct ixgbe_adapter *adapter,
				   struct ethtool_rxnfc *cmd)
{
	cmd->data = 0;

	/* Report default options for RSS on ixgbe */
	switch (cmd->flow_type) {
	case TCP_V4_FLOW:
		cmd->data |= RXH_L4_B_0_1 | RXH_L4_B_2_3;
		/* fallthrough */
	case UDP_V4_FLOW:
		if (adapter->flags2 & IXGBE_FLAG2_RSS_FIELD_IPV4_UDP)
			cmd->data |= RXH_L4_B_0_1 | RXH_L4_B_2_3;
		/* fallthrough */
	case SCTP_V4_FLOW:
	case AH_ESP_V4_FLOW:
	case AH_V4_FLOW:
	case ESP_V4_FLOW:
	case IPV4_FLOW:
		cmd->data |= RXH_IP_SRC | RXH_IP_DST;
		break;
	case TCP_V6_FLOW:
		cmd->data |= RXH_L4_B_0_1 | RXH_L4_B_2_3;
		/* fallthrough */
	case UDP_V6_FLOW:
		if (adapter->flags2 & IXGBE_FLAG2_RSS_FIELD_IPV6_UDP)
			cmd->data |= RXH_L4_B_0_1 | RXH_L4_B_2_3;
		/* fallthrough */
	case SCTP_V6_FLOW:
	case AH_ESP_V6_FLOW:
	case AH_V6_FLOW:
	case ESP_V6_FLOW:
	case IPV6_FLOW:
		cmd->data |= RXH_IP_SRC | RXH_IP_DST;
		break;
	default:
		return -EINVAL;
	}

	return 0;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_adapter0 = 65025;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cmd0 = 65025;
          struct ethtool_rxnfc * cmd = (struct ethtool_rxnfc *) malloc(_len_cmd0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ixgbe_get_rss_hash_opts(adapter,cmd);
          printf("%d\n", benchRet); 
          free(adapter);
          free(cmd);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_adapter0 = 100;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cmd0 = 100;
          struct ethtool_rxnfc * cmd = (struct ethtool_rxnfc *) malloc(_len_cmd0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ixgbe_get_rss_hash_opts(adapter,cmd);
          printf("%d\n", benchRet); 
          free(adapter);
          free(cmd);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_adapter0 = 1;
          struct ixgbe_adapter * adapter = (struct ixgbe_adapter *) malloc(_len_adapter0*sizeof(struct ixgbe_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              adapter[_i0].flags2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cmd0 = 1;
          struct ethtool_rxnfc * cmd = (struct ethtool_rxnfc *) malloc(_len_cmd0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              cmd[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          cmd[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ixgbe_get_rss_hash_opts(adapter,cmd);
          printf("%d\n", benchRet); 
          free(adapter);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
