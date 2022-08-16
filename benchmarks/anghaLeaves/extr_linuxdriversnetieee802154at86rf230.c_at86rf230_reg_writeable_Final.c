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

/* Type definitions */
struct device {int dummy; } ;

/* Variables and functions */
#define  RG_ANT_DIV 163 
#define  RG_BATMON 162 
#define  RG_CCA_THRES 161 
#define  RG_CSMA_BE 160 
#define  RG_CSMA_SEED_0 159 
#define  RG_CSMA_SEED_1 158 
#define  RG_FTN_CTRL 157 
#define  RG_IEEE_ADDR_0 156 
#define  RG_IEEE_ADDR_1 155 
#define  RG_IEEE_ADDR_2 154 
#define  RG_IEEE_ADDR_3 153 
#define  RG_IEEE_ADDR_4 152 
#define  RG_IEEE_ADDR_5 151 
#define  RG_IEEE_ADDR_6 150 
#define  RG_IEEE_ADDR_7 149 
#define  RG_IRQ_MASK 148 
#define  RG_PAN_ID_0 147 
#define  RG_PAN_ID_1 146 
#define  RG_PHY_CC_CCA 145 
#define  RG_PHY_ED_LEVEL 144 
#define  RG_PHY_TX_PWR 143 
#define  RG_PLL_CF 142 
#define  RG_PLL_DCU 141 
#define  RG_RX_CTRL 140 
#define  RG_RX_SYN 139 
#define  RG_SFD_VALUE 138 
#define  RG_SHORT_ADDR_0 137 
#define  RG_SHORT_ADDR_1 136 
#define  RG_TRX_CTRL_0 135 
#define  RG_TRX_CTRL_1 134 
#define  RG_TRX_CTRL_2 133 
#define  RG_TRX_STATE 132 
#define  RG_VREG_CTRL 131 
#define  RG_XAH_CTRL_0 130 
#define  RG_XAH_CTRL_1 129 
#define  RG_XOSC_CTRL 128 

__attribute__((used)) static bool
at86rf230_reg_writeable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case RG_TRX_STATE:
	case RG_TRX_CTRL_0:
	case RG_TRX_CTRL_1:
	case RG_PHY_TX_PWR:
	case RG_PHY_ED_LEVEL:
	case RG_PHY_CC_CCA:
	case RG_CCA_THRES:
	case RG_RX_CTRL:
	case RG_SFD_VALUE:
	case RG_TRX_CTRL_2:
	case RG_ANT_DIV:
	case RG_IRQ_MASK:
	case RG_VREG_CTRL:
	case RG_BATMON:
	case RG_XOSC_CTRL:
	case RG_RX_SYN:
	case RG_XAH_CTRL_1:
	case RG_FTN_CTRL:
	case RG_PLL_CF:
	case RG_PLL_DCU:
	case RG_SHORT_ADDR_0:
	case RG_SHORT_ADDR_1:
	case RG_PAN_ID_0:
	case RG_PAN_ID_1:
	case RG_IEEE_ADDR_0:
	case RG_IEEE_ADDR_1:
	case RG_IEEE_ADDR_2:
	case RG_IEEE_ADDR_3:
	case RG_IEEE_ADDR_4:
	case RG_IEEE_ADDR_5:
	case RG_IEEE_ADDR_6:
	case RG_IEEE_ADDR_7:
	case RG_XAH_CTRL_0:
	case RG_CSMA_SEED_0:
	case RG_CSMA_SEED_1:
	case RG_CSMA_BE:
		return true;
	default:
		return false;
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
          unsigned int reg = 100;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = at86rf230_reg_writeable(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int reg = 10;
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = at86rf230_reg_writeable(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
