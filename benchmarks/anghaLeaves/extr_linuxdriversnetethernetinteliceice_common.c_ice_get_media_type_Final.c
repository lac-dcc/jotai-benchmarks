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
struct ice_link_status {int phy_type_low; } ;
struct TYPE_2__ {struct ice_link_status link_info; } ;
struct ice_port_info {TYPE_1__ phy; } ;
typedef  enum ice_media_type { ____Placeholder_ice_media_type } ice_media_type ;

/* Variables and functions */
 int ICE_MEDIA_BACKPLANE ; 
 int ICE_MEDIA_BASET ; 
 int ICE_MEDIA_DA ; 
 int ICE_MEDIA_FIBER ; 
 int ICE_MEDIA_UNKNOWN ; 
#define  ICE_PHY_TYPE_LOW_1000BASE_KX 157 
#define  ICE_PHY_TYPE_LOW_1000BASE_LX 156 
#define  ICE_PHY_TYPE_LOW_1000BASE_SX 155 
#define  ICE_PHY_TYPE_LOW_1000BASE_T 154 
#define  ICE_PHY_TYPE_LOW_100BASE_TX 153 
#define  ICE_PHY_TYPE_LOW_10GBASE_KR_CR1 152 
#define  ICE_PHY_TYPE_LOW_10GBASE_LR 151 
#define  ICE_PHY_TYPE_LOW_10GBASE_SR 150 
#define  ICE_PHY_TYPE_LOW_10GBASE_T 149 
#define  ICE_PHY_TYPE_LOW_10G_SFI_C2C 148 
#define  ICE_PHY_TYPE_LOW_10G_SFI_DA 147 
#define  ICE_PHY_TYPE_LOW_2500BASE_KX 146 
#define  ICE_PHY_TYPE_LOW_2500BASE_T 145 
#define  ICE_PHY_TYPE_LOW_2500BASE_X 144 
#define  ICE_PHY_TYPE_LOW_25GBASE_CR 143 
#define  ICE_PHY_TYPE_LOW_25GBASE_CR1 142 
#define  ICE_PHY_TYPE_LOW_25GBASE_CR_S 141 
#define  ICE_PHY_TYPE_LOW_25GBASE_KR 140 
#define  ICE_PHY_TYPE_LOW_25GBASE_KR1 139 
#define  ICE_PHY_TYPE_LOW_25GBASE_KR_S 138 
#define  ICE_PHY_TYPE_LOW_25GBASE_LR 137 
#define  ICE_PHY_TYPE_LOW_25GBASE_SR 136 
#define  ICE_PHY_TYPE_LOW_25GBASE_T 135 
#define  ICE_PHY_TYPE_LOW_25G_AUI_C2C 134 
#define  ICE_PHY_TYPE_LOW_40GBASE_CR4 133 
#define  ICE_PHY_TYPE_LOW_40GBASE_KR4 132 
#define  ICE_PHY_TYPE_LOW_40GBASE_LR4 131 
#define  ICE_PHY_TYPE_LOW_40GBASE_SR4 130 
#define  ICE_PHY_TYPE_LOW_5GBASE_KR 129 
#define  ICE_PHY_TYPE_LOW_5GBASE_T 128 

__attribute__((used)) static enum ice_media_type ice_get_media_type(struct ice_port_info *pi)
{
	struct ice_link_status *hw_link_info;

	if (!pi)
		return ICE_MEDIA_UNKNOWN;

	hw_link_info = &pi->phy.link_info;

	if (hw_link_info->phy_type_low) {
		switch (hw_link_info->phy_type_low) {
		case ICE_PHY_TYPE_LOW_1000BASE_SX:
		case ICE_PHY_TYPE_LOW_1000BASE_LX:
		case ICE_PHY_TYPE_LOW_10GBASE_SR:
		case ICE_PHY_TYPE_LOW_10GBASE_LR:
		case ICE_PHY_TYPE_LOW_10G_SFI_C2C:
		case ICE_PHY_TYPE_LOW_25GBASE_SR:
		case ICE_PHY_TYPE_LOW_25GBASE_LR:
		case ICE_PHY_TYPE_LOW_25G_AUI_C2C:
		case ICE_PHY_TYPE_LOW_40GBASE_SR4:
		case ICE_PHY_TYPE_LOW_40GBASE_LR4:
			return ICE_MEDIA_FIBER;
		case ICE_PHY_TYPE_LOW_100BASE_TX:
		case ICE_PHY_TYPE_LOW_1000BASE_T:
		case ICE_PHY_TYPE_LOW_2500BASE_T:
		case ICE_PHY_TYPE_LOW_5GBASE_T:
		case ICE_PHY_TYPE_LOW_10GBASE_T:
		case ICE_PHY_TYPE_LOW_25GBASE_T:
			return ICE_MEDIA_BASET;
		case ICE_PHY_TYPE_LOW_10G_SFI_DA:
		case ICE_PHY_TYPE_LOW_25GBASE_CR:
		case ICE_PHY_TYPE_LOW_25GBASE_CR_S:
		case ICE_PHY_TYPE_LOW_25GBASE_CR1:
		case ICE_PHY_TYPE_LOW_40GBASE_CR4:
			return ICE_MEDIA_DA;
		case ICE_PHY_TYPE_LOW_1000BASE_KX:
		case ICE_PHY_TYPE_LOW_2500BASE_KX:
		case ICE_PHY_TYPE_LOW_2500BASE_X:
		case ICE_PHY_TYPE_LOW_5GBASE_KR:
		case ICE_PHY_TYPE_LOW_10GBASE_KR_CR1:
		case ICE_PHY_TYPE_LOW_25GBASE_KR:
		case ICE_PHY_TYPE_LOW_25GBASE_KR1:
		case ICE_PHY_TYPE_LOW_25GBASE_KR_S:
		case ICE_PHY_TYPE_LOW_40GBASE_KR4:
			return ICE_MEDIA_BACKPLANE;
		}
	}

	return ICE_MEDIA_UNKNOWN;
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
          int _len_pi0 = 1;
          struct ice_port_info * pi = (struct ice_port_info *) malloc(_len_pi0*sizeof(struct ice_port_info));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi[_i0].phy.link_info.phy_type_low = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ice_media_type benchRet = ice_get_media_type(pi);
          free(pi);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pi0 = 100;
          struct ice_port_info * pi = (struct ice_port_info *) malloc(_len_pi0*sizeof(struct ice_port_info));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
            pi[_i0].phy.link_info.phy_type_low = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum ice_media_type benchRet = ice_get_media_type(pi);
          free(pi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
