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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u32 ;

/* Variables and functions */
 int EFX_FILTER_MATCH_ENCAP_TYPE ; 
 int EFX_FILTER_MATCH_ETHER_TYPE ; 
 int EFX_FILTER_MATCH_INNER_VID ; 
 int EFX_FILTER_MATCH_IP_PROTO ; 
 int EFX_FILTER_MATCH_LOC_HOST ; 
 int EFX_FILTER_MATCH_LOC_MAC ; 
 int EFX_FILTER_MATCH_LOC_MAC_IG ; 
 int EFX_FILTER_MATCH_LOC_PORT ; 
 int EFX_FILTER_MATCH_OUTER_VID ; 
 int EFX_FILTER_MATCH_REM_HOST ; 
 int EFX_FILTER_MATCH_REM_MAC ; 
 int EFX_FILTER_MATCH_REM_PORT ; 
 int EINVAL ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_DST_IP_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_DST_MAC_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_DST_PORT_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_ETHER_TYPE_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_DST_IP_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_DST_MAC_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_DST_PORT_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_ETHER_TYPE_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_IP_PROTO_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_SRC_IP_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_SRC_MAC_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_SRC_PORT_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_UNKNOWN_MCAST_DST_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IFRM_UNKNOWN_UCAST_DST_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_INNER_VLAN_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_IP_PROTO_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_OUTER_VLAN_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_SRC_IP_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_SRC_MAC_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_SRC_PORT_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_UNKNOWN_MCAST_DST_LBN ; 
 int MC_CMD_FILTER_OP_EXT_IN_MATCH_UNKNOWN_UCAST_DST_LBN ; 

__attribute__((used)) static int efx_ef10_filter_match_flags_from_mcdi(bool encap, u32 mcdi_flags)
{
	int match_flags = 0;

#define MAP_FLAG(gen_flag, mcdi_field) do {				\
		u32 old_mcdi_flags = mcdi_flags;			\
		mcdi_flags &= ~(1 << MC_CMD_FILTER_OP_EXT_IN_MATCH_ ##	\
				     mcdi_field ## _LBN);		\
		if (mcdi_flags != old_mcdi_flags)			\
			match_flags |= EFX_FILTER_MATCH_ ## gen_flag;	\
	} while (0)

	if (encap) {
		/* encap filters must specify encap type */
		match_flags |= EFX_FILTER_MATCH_ENCAP_TYPE;
		/* and imply ethertype and ip proto */
		mcdi_flags &=
			~(1 << MC_CMD_FILTER_OP_EXT_IN_MATCH_IP_PROTO_LBN);
		mcdi_flags &=
			~(1 << MC_CMD_FILTER_OP_EXT_IN_MATCH_ETHER_TYPE_LBN);
		/* VLAN tags refer to the outer packet */
		MAP_FLAG(INNER_VID, INNER_VLAN);
		MAP_FLAG(OUTER_VID, OUTER_VLAN);
		/* everything else refers to the inner packet */
		MAP_FLAG(LOC_MAC_IG, IFRM_UNKNOWN_UCAST_DST);
		MAP_FLAG(LOC_MAC_IG, IFRM_UNKNOWN_MCAST_DST);
		MAP_FLAG(REM_HOST, IFRM_SRC_IP);
		MAP_FLAG(LOC_HOST, IFRM_DST_IP);
		MAP_FLAG(REM_MAC, IFRM_SRC_MAC);
		MAP_FLAG(REM_PORT, IFRM_SRC_PORT);
		MAP_FLAG(LOC_MAC, IFRM_DST_MAC);
		MAP_FLAG(LOC_PORT, IFRM_DST_PORT);
		MAP_FLAG(ETHER_TYPE, IFRM_ETHER_TYPE);
		MAP_FLAG(IP_PROTO, IFRM_IP_PROTO);
	} else {
		MAP_FLAG(LOC_MAC_IG, UNKNOWN_UCAST_DST);
		MAP_FLAG(LOC_MAC_IG, UNKNOWN_MCAST_DST);
		MAP_FLAG(REM_HOST, SRC_IP);
		MAP_FLAG(LOC_HOST, DST_IP);
		MAP_FLAG(REM_MAC, SRC_MAC);
		MAP_FLAG(REM_PORT, SRC_PORT);
		MAP_FLAG(LOC_MAC, DST_MAC);
		MAP_FLAG(LOC_PORT, DST_PORT);
		MAP_FLAG(ETHER_TYPE, ETHER_TYPE);
		MAP_FLAG(INNER_VID, INNER_VLAN);
		MAP_FLAG(OUTER_VID, OUTER_VLAN);
		MAP_FLAG(IP_PROTO, IP_PROTO);
	}
#undef MAP_FLAG

	/* Did we map them all? */
	if (mcdi_flags)
		return -EINVAL;

	return match_flags;
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
          int encap = 100;
          int mcdi_flags = 100;
          int benchRet = efx_ef10_filter_match_flags_from_mcdi(encap,mcdi_flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int encap = 255;
          int mcdi_flags = 255;
          int benchRet = efx_ef10_filter_match_flags_from_mcdi(encap,mcdi_flags);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int encap = 10;
          int mcdi_flags = 10;
          int benchRet = efx_ef10_filter_match_flags_from_mcdi(encap,mcdi_flags);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
