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
typedef  int u8 ;
typedef  enum tunnel_clss { ____Placeholder_tunnel_clss } tunnel_clss ;

/* Variables and functions */
#define  QED_TUNN_CLSS_INNER_MAC_VLAN 132 
#define  QED_TUNN_CLSS_INNER_MAC_VNI 131 
#define  QED_TUNN_CLSS_MAC_VLAN 130 
#define  QED_TUNN_CLSS_MAC_VLAN_DUAL_STAGE 129 
#define  QED_TUNN_CLSS_MAC_VNI 128 
 int TUNNEL_CLSS_INNER_MAC_VLAN ; 
 int TUNNEL_CLSS_INNER_MAC_VNI ; 
 int TUNNEL_CLSS_MAC_VLAN ; 
 int TUNNEL_CLSS_MAC_VLAN_DUAL_STAGE ; 
 int TUNNEL_CLSS_MAC_VNI ; 

__attribute__((used)) static enum tunnel_clss qed_tunn_clss_to_fw_clss(u8 type)
{
	switch (type) {
	case QED_TUNN_CLSS_MAC_VLAN:
		return TUNNEL_CLSS_MAC_VLAN;
	case QED_TUNN_CLSS_MAC_VNI:
		return TUNNEL_CLSS_MAC_VNI;
	case QED_TUNN_CLSS_INNER_MAC_VLAN:
		return TUNNEL_CLSS_INNER_MAC_VLAN;
	case QED_TUNN_CLSS_INNER_MAC_VNI:
		return TUNNEL_CLSS_INNER_MAC_VNI;
	case QED_TUNN_CLSS_MAC_VLAN_DUAL_STAGE:
		return TUNNEL_CLSS_MAC_VLAN_DUAL_STAGE;
	default:
		return TUNNEL_CLSS_MAC_VLAN;
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
          int type = 100;
          enum tunnel_clss benchRet = qed_tunn_clss_to_fw_clss(type);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          enum tunnel_clss benchRet = qed_tunn_clss_to_fw_clss(type);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          enum tunnel_clss benchRet = qed_tunn_clss_to_fw_clss(type);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
