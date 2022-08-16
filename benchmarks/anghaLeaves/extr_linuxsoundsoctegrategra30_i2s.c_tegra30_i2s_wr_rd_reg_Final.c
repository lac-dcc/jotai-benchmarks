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
#define  TEGRA30_I2S_CH_CTRL 149 
#define  TEGRA30_I2S_CIF_RX_CTRL 148 
#define  TEGRA30_I2S_CIF_TX_CTRL 147 
#define  TEGRA30_I2S_CTRL 146 
#define  TEGRA30_I2S_FLOWCTL 145 
#define  TEGRA30_I2S_FLOW_OVER 144 
#define  TEGRA30_I2S_FLOW_STATUS 143 
#define  TEGRA30_I2S_FLOW_TOTAL 142 
#define  TEGRA30_I2S_FLOW_UNDER 141 
#define  TEGRA30_I2S_LCOEF_1_4_0 140 
#define  TEGRA30_I2S_LCOEF_1_4_1 139 
#define  TEGRA30_I2S_LCOEF_1_4_2 138 
#define  TEGRA30_I2S_LCOEF_1_4_3 137 
#define  TEGRA30_I2S_LCOEF_1_4_4 136 
#define  TEGRA30_I2S_LCOEF_1_4_5 135 
#define  TEGRA30_I2S_LCOEF_2_4_0 134 
#define  TEGRA30_I2S_LCOEF_2_4_1 133 
#define  TEGRA30_I2S_LCOEF_2_4_2 132 
#define  TEGRA30_I2S_OFFSET 131 
#define  TEGRA30_I2S_SLOT_CTRL 130 
#define  TEGRA30_I2S_TIMING 129 
#define  TEGRA30_I2S_TX_STEP 128 

__attribute__((used)) static bool tegra30_i2s_wr_rd_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case TEGRA30_I2S_CTRL:
	case TEGRA30_I2S_TIMING:
	case TEGRA30_I2S_OFFSET:
	case TEGRA30_I2S_CH_CTRL:
	case TEGRA30_I2S_SLOT_CTRL:
	case TEGRA30_I2S_CIF_RX_CTRL:
	case TEGRA30_I2S_CIF_TX_CTRL:
	case TEGRA30_I2S_FLOWCTL:
	case TEGRA30_I2S_TX_STEP:
	case TEGRA30_I2S_FLOW_STATUS:
	case TEGRA30_I2S_FLOW_TOTAL:
	case TEGRA30_I2S_FLOW_OVER:
	case TEGRA30_I2S_FLOW_UNDER:
	case TEGRA30_I2S_LCOEF_1_4_0:
	case TEGRA30_I2S_LCOEF_1_4_1:
	case TEGRA30_I2S_LCOEF_1_4_2:
	case TEGRA30_I2S_LCOEF_1_4_3:
	case TEGRA30_I2S_LCOEF_1_4_4:
	case TEGRA30_I2S_LCOEF_1_4_5:
	case TEGRA30_I2S_LCOEF_2_4_0:
	case TEGRA30_I2S_LCOEF_2_4_1:
	case TEGRA30_I2S_LCOEF_2_4_2:
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
          int benchRet = tegra30_i2s_wr_rd_reg(dev,reg);
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
          int benchRet = tegra30_i2s_wr_rd_reg(dev,reg);
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
