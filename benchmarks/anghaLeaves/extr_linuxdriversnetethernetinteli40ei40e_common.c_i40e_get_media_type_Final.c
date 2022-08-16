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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int phy_type; } ;
struct TYPE_4__ {TYPE_1__ link_info; } ;
struct i40e_hw {TYPE_2__ phy; } ;
typedef  enum i40e_media_type { ____Placeholder_i40e_media_type } i40e_media_type ;

/* Variables and functions */
 int I40E_MEDIA_TYPE_BACKPLANE ; 
 int I40E_MEDIA_TYPE_BASET ; 
 int I40E_MEDIA_TYPE_DA ; 
 int I40E_MEDIA_TYPE_FIBER ; 
 int I40E_MEDIA_TYPE_UNKNOWN ; 
#define  I40E_PHY_TYPE_1000BASE_KX 159 
#define  I40E_PHY_TYPE_1000BASE_LX 158 
#define  I40E_PHY_TYPE_1000BASE_SX 157 
#define  I40E_PHY_TYPE_1000BASE_T 156 
#define  I40E_PHY_TYPE_100BASE_TX 155 
#define  I40E_PHY_TYPE_10GBASE_AOC 154 
#define  I40E_PHY_TYPE_10GBASE_CR1 153 
#define  I40E_PHY_TYPE_10GBASE_CR1_CU 152 
#define  I40E_PHY_TYPE_10GBASE_KR 151 
#define  I40E_PHY_TYPE_10GBASE_KX4 150 
#define  I40E_PHY_TYPE_10GBASE_LR 149 
#define  I40E_PHY_TYPE_10GBASE_SFPP_CU 148 
#define  I40E_PHY_TYPE_10GBASE_SR 147 
#define  I40E_PHY_TYPE_10GBASE_T 146 
#define  I40E_PHY_TYPE_20GBASE_KR2 145 
#define  I40E_PHY_TYPE_25GBASE_ACC 144 
#define  I40E_PHY_TYPE_25GBASE_AOC 143 
#define  I40E_PHY_TYPE_25GBASE_CR 142 
#define  I40E_PHY_TYPE_25GBASE_KR 141 
#define  I40E_PHY_TYPE_25GBASE_LR 140 
#define  I40E_PHY_TYPE_25GBASE_SR 139 
#define  I40E_PHY_TYPE_40GBASE_AOC 138 
#define  I40E_PHY_TYPE_40GBASE_CR4 137 
#define  I40E_PHY_TYPE_40GBASE_CR4_CU 136 
#define  I40E_PHY_TYPE_40GBASE_KR4 135 
#define  I40E_PHY_TYPE_40GBASE_LR4 134 
#define  I40E_PHY_TYPE_40GBASE_SR4 133 
#define  I40E_PHY_TYPE_SGMII 132 
#define  I40E_PHY_TYPE_XAUI 131 
#define  I40E_PHY_TYPE_XFI 130 
#define  I40E_PHY_TYPE_XLAUI 129 
#define  I40E_PHY_TYPE_XLPPI 128 

__attribute__((used)) static enum i40e_media_type i40e_get_media_type(struct i40e_hw *hw)
{
	enum i40e_media_type media;

	switch (hw->phy.link_info.phy_type) {
	case I40E_PHY_TYPE_10GBASE_SR:
	case I40E_PHY_TYPE_10GBASE_LR:
	case I40E_PHY_TYPE_1000BASE_SX:
	case I40E_PHY_TYPE_1000BASE_LX:
	case I40E_PHY_TYPE_40GBASE_SR4:
	case I40E_PHY_TYPE_40GBASE_LR4:
	case I40E_PHY_TYPE_25GBASE_LR:
	case I40E_PHY_TYPE_25GBASE_SR:
		media = I40E_MEDIA_TYPE_FIBER;
		break;
	case I40E_PHY_TYPE_100BASE_TX:
	case I40E_PHY_TYPE_1000BASE_T:
	case I40E_PHY_TYPE_10GBASE_T:
		media = I40E_MEDIA_TYPE_BASET;
		break;
	case I40E_PHY_TYPE_10GBASE_CR1_CU:
	case I40E_PHY_TYPE_40GBASE_CR4_CU:
	case I40E_PHY_TYPE_10GBASE_CR1:
	case I40E_PHY_TYPE_40GBASE_CR4:
	case I40E_PHY_TYPE_10GBASE_SFPP_CU:
	case I40E_PHY_TYPE_40GBASE_AOC:
	case I40E_PHY_TYPE_10GBASE_AOC:
	case I40E_PHY_TYPE_25GBASE_CR:
	case I40E_PHY_TYPE_25GBASE_AOC:
	case I40E_PHY_TYPE_25GBASE_ACC:
		media = I40E_MEDIA_TYPE_DA;
		break;
	case I40E_PHY_TYPE_1000BASE_KX:
	case I40E_PHY_TYPE_10GBASE_KX4:
	case I40E_PHY_TYPE_10GBASE_KR:
	case I40E_PHY_TYPE_40GBASE_KR4:
	case I40E_PHY_TYPE_20GBASE_KR2:
	case I40E_PHY_TYPE_25GBASE_KR:
		media = I40E_MEDIA_TYPE_BACKPLANE;
		break;
	case I40E_PHY_TYPE_SGMII:
	case I40E_PHY_TYPE_XAUI:
	case I40E_PHY_TYPE_XFI:
	case I40E_PHY_TYPE_XLAUI:
	case I40E_PHY_TYPE_XLPPI:
	default:
		media = I40E_MEDIA_TYPE_UNKNOWN;
		break;
	}

	return media;
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
          int _len_hw0 = 1;
          struct i40e_hw * hw = (struct i40e_hw *) malloc(_len_hw0*sizeof(struct i40e_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].phy.link_info.phy_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum i40e_media_type benchRet = i40e_get_media_type(hw);
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_hw0 = 100;
          struct i40e_hw * hw = (struct i40e_hw *) malloc(_len_hw0*sizeof(struct i40e_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].phy.link_info.phy_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum i40e_media_type benchRet = i40e_get_media_type(hw);
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
