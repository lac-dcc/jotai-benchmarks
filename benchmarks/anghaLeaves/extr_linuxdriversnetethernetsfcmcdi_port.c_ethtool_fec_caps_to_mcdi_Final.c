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
 int ETHTOOL_FEC_AUTO ; 
 int ETHTOOL_FEC_BASER ; 
 int ETHTOOL_FEC_OFF ; 
 int ETHTOOL_FEC_RS ; 
 int MC_CMD_PHY_CAP_25G_BASER_FEC_LBN ; 
 int MC_CMD_PHY_CAP_25G_BASER_FEC_REQUESTED_LBN ; 
 int MC_CMD_PHY_CAP_BASER_FEC_LBN ; 
 int MC_CMD_PHY_CAP_BASER_FEC_REQUESTED_LBN ; 
 int MC_CMD_PHY_CAP_RS_FEC_LBN ; 
 int MC_CMD_PHY_CAP_RS_FEC_REQUESTED_LBN ; 

__attribute__((used)) static u32 ethtool_fec_caps_to_mcdi(u32 ethtool_cap)
{
	u32 ret = 0;

	if (ethtool_cap & ETHTOOL_FEC_OFF)
		return 0;

	if (ethtool_cap & ETHTOOL_FEC_AUTO)
		ret |= (1 << MC_CMD_PHY_CAP_BASER_FEC_LBN) |
		       (1 << MC_CMD_PHY_CAP_25G_BASER_FEC_LBN) |
		       (1 << MC_CMD_PHY_CAP_RS_FEC_LBN);
	if (ethtool_cap & ETHTOOL_FEC_RS)
		ret |= (1 << MC_CMD_PHY_CAP_RS_FEC_LBN) |
		       (1 << MC_CMD_PHY_CAP_RS_FEC_REQUESTED_LBN);
	if (ethtool_cap & ETHTOOL_FEC_BASER)
		ret |= (1 << MC_CMD_PHY_CAP_BASER_FEC_LBN) |
		       (1 << MC_CMD_PHY_CAP_25G_BASER_FEC_LBN) |
		       (1 << MC_CMD_PHY_CAP_BASER_FEC_REQUESTED_LBN) |
		       (1 << MC_CMD_PHY_CAP_25G_BASER_FEC_REQUESTED_LBN);
	return ret;
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
          int ethtool_cap = 100;
          int benchRet = ethtool_fec_caps_to_mcdi(ethtool_cap);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ethtool_cap = 255;
          int benchRet = ethtool_fec_caps_to_mcdi(ethtool_cap);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ethtool_cap = 10;
          int benchRet = ethtool_fec_caps_to_mcdi(ethtool_cap);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
