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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_2__ {int interface_type; int /*<<< orphan*/  cable_type; } ;
struct be_adapter {TYPE_1__ phy; } ;

/* Variables and functions */
 int BE_SUPPORTED_SPEED_100MBPS ; 
 int BE_SUPPORTED_SPEED_10GBPS ; 
 int BE_SUPPORTED_SPEED_10MBPS ; 
 int BE_SUPPORTED_SPEED_1GBPS ; 
 int BE_SUPPORTED_SPEED_20GBPS ; 
 int BE_SUPPORTED_SPEED_40GBPS ; 
#define  PHY_TYPE_BASET_10GB 141 
#define  PHY_TYPE_BASET_1GB 140 
#define  PHY_TYPE_BASEX_1GB 139 
#define  PHY_TYPE_KR2_20GB 138 
#define  PHY_TYPE_KR4_40GB 137 
#define  PHY_TYPE_KR_10GB 136 
#define  PHY_TYPE_KX4_10GB 135 
#define  PHY_TYPE_QSFP 134 
#define  PHY_TYPE_SFP_1GB 133 
#define  PHY_TYPE_SFP_PLUS_10GB 132 
#define  PHY_TYPE_SGMII 131 
#define  PHY_TYPE_XFP_10GB 130 
#define  QSFP_PLUS_CR4_CABLE 129 
#define  QSFP_PLUS_LR4_CABLE 128 
 int SUPPORTED_10000baseKR_Full ; 
 int SUPPORTED_10000baseKX4_Full ; 
 int SUPPORTED_10000baseT_Full ; 
 int SUPPORTED_1000baseKX_Full ; 
 int SUPPORTED_1000baseT_Full ; 
 int SUPPORTED_100baseT_Full ; 
 int SUPPORTED_10baseT_Full ; 
 int SUPPORTED_20000baseKR2_Full ; 
 int SUPPORTED_40000baseCR4_Full ; 
 int SUPPORTED_40000baseKR4_Full ; 
 int SUPPORTED_40000baseLR4_Full ; 
 int SUPPORTED_40000baseSR4_Full ; 
 int SUPPORTED_Backplane ; 
 int SUPPORTED_FIBRE ; 
 int SUPPORTED_TP ; 

__attribute__((used)) static u32 convert_to_et_setting(struct be_adapter *adapter, u32 if_speeds)
{
	u32 val = 0;

	switch (adapter->phy.interface_type) {
	case PHY_TYPE_BASET_1GB:
	case PHY_TYPE_BASEX_1GB:
	case PHY_TYPE_SGMII:
		val |= SUPPORTED_TP;
		if (if_speeds & BE_SUPPORTED_SPEED_1GBPS)
			val |= SUPPORTED_1000baseT_Full;
		if (if_speeds & BE_SUPPORTED_SPEED_100MBPS)
			val |= SUPPORTED_100baseT_Full;
		if (if_speeds & BE_SUPPORTED_SPEED_10MBPS)
			val |= SUPPORTED_10baseT_Full;
		break;
	case PHY_TYPE_KX4_10GB:
		val |= SUPPORTED_Backplane;
		if (if_speeds & BE_SUPPORTED_SPEED_1GBPS)
			val |= SUPPORTED_1000baseKX_Full;
		if (if_speeds & BE_SUPPORTED_SPEED_10GBPS)
			val |= SUPPORTED_10000baseKX4_Full;
		break;
	case PHY_TYPE_KR2_20GB:
		val |= SUPPORTED_Backplane;
		if (if_speeds & BE_SUPPORTED_SPEED_10GBPS)
			val |= SUPPORTED_10000baseKR_Full;
		if (if_speeds & BE_SUPPORTED_SPEED_20GBPS)
			val |= SUPPORTED_20000baseKR2_Full;
		break;
	case PHY_TYPE_KR_10GB:
		val |= SUPPORTED_Backplane |
				SUPPORTED_10000baseKR_Full;
		break;
	case PHY_TYPE_KR4_40GB:
		val |= SUPPORTED_Backplane;
		if (if_speeds & BE_SUPPORTED_SPEED_10GBPS)
			val |= SUPPORTED_10000baseKR_Full;
		if (if_speeds & BE_SUPPORTED_SPEED_40GBPS)
			val |= SUPPORTED_40000baseKR4_Full;
		break;
	case PHY_TYPE_QSFP:
		if (if_speeds & BE_SUPPORTED_SPEED_40GBPS) {
			switch (adapter->phy.cable_type) {
			case QSFP_PLUS_CR4_CABLE:
				val |= SUPPORTED_40000baseCR4_Full;
				break;
			case QSFP_PLUS_LR4_CABLE:
				val |= SUPPORTED_40000baseLR4_Full;
				break;
			default:
				val |= SUPPORTED_40000baseSR4_Full;
				break;
			}
		}
		/* fall through */
	case PHY_TYPE_SFP_PLUS_10GB:
	case PHY_TYPE_XFP_10GB:
	case PHY_TYPE_SFP_1GB:
		val |= SUPPORTED_FIBRE;
		if (if_speeds & BE_SUPPORTED_SPEED_10GBPS)
			val |= SUPPORTED_10000baseT_Full;
		if (if_speeds & BE_SUPPORTED_SPEED_1GBPS)
			val |= SUPPORTED_1000baseT_Full;
		break;
	case PHY_TYPE_BASET_10GB:
		val |= SUPPORTED_TP;
		if (if_speeds & BE_SUPPORTED_SPEED_10GBPS)
			val |= SUPPORTED_10000baseT_Full;
		if (if_speeds & BE_SUPPORTED_SPEED_1GBPS)
			val |= SUPPORTED_1000baseT_Full;
		if (if_speeds & BE_SUPPORTED_SPEED_100MBPS)
			val |= SUPPORTED_100baseT_Full;
		break;
	default:
		val |= SUPPORTED_TP;
	}

	return val;
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
          int if_speeds = 100;
          int _len_adapter0 = 1;
          struct be_adapter * adapter = (struct be_adapter *) malloc(_len_adapter0*sizeof(struct be_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].phy.interface_type = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].phy.cable_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = convert_to_et_setting(adapter,if_speeds);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
