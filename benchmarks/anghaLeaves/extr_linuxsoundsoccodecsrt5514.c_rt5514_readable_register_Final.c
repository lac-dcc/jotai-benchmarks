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
#define  RT5514_ANA_CTRL_ADC12 174 
#define  RT5514_ANA_CTRL_ADC21 173 
#define  RT5514_ANA_CTRL_ADC22 172 
#define  RT5514_ANA_CTRL_ADC23 171 
#define  RT5514_ANA_CTRL_ADCFED 170 
#define  RT5514_ANA_CTRL_INBUF 169 
#define  RT5514_ANA_CTRL_LDO10 168 
#define  RT5514_ANA_CTRL_LDO18_16 167 
#define  RT5514_ANA_CTRL_MICBST 166 
#define  RT5514_ANA_CTRL_PLL1_1 165 
#define  RT5514_ANA_CTRL_PLL1_2 164 
#define  RT5514_ANA_CTRL_PLL3 163 
#define  RT5514_ANA_CTRL_VREF 162 
#define  RT5514_ASRC_IN_CTRL1 161 
#define  RT5514_CLK_CTRL1 160 
#define  RT5514_CLK_CTRL2 159 
#define  RT5514_DELAY_BUF_CTRL1 158 
#define  RT5514_DELAY_BUF_CTRL3 157 
#define  RT5514_DIG_IO_CTRL 156 
#define  RT5514_DIG_SOURCE_CTRL 155 
#define  RT5514_DMIC_DATA_CTRL 154 
#define  RT5514_DMIC_LP_CTRL 153 
#define  RT5514_DOWNFILTER0_CTRL1 152 
#define  RT5514_DOWNFILTER0_CTRL2 151 
#define  RT5514_DOWNFILTER0_CTRL3 150 
#define  RT5514_DOWNFILTER1_CTRL1 149 
#define  RT5514_DOWNFILTER1_CTRL2 148 
#define  RT5514_DOWNFILTER1_CTRL3 147 
#define  RT5514_DOWNFILTER2_CTRL1 146 
#define  RT5514_DSP_CTRL1 145 
#define  RT5514_DSP_CTRL3 144 
#define  RT5514_DSP_CTRL4 143 
#define  RT5514_EXT_VAD_CTRL 142 
#define  RT5514_I2S_CTRL1 141 
#define  RT5514_I2S_CTRL2 140 
#define  RT5514_MISC_CTRL_DSP 139 
#define  RT5514_PAD_CTRL1 138 
#define  RT5514_PLL3_CALIB_CTRL1 137 
#define  RT5514_PLL3_CALIB_CTRL5 136 
#define  RT5514_PLL_SOURCE_CTRL 135 
#define  RT5514_PWR_ANA1 134 
#define  RT5514_PWR_ANA2 133 
#define  RT5514_RESET 132 
#define  RT5514_SRC_CTRL 131 
#define  RT5514_VAD_CTRL6 130 
#define  RT5514_VENDOR_ID1 129 
#define  RT5514_VENDOR_ID2 128 

__attribute__((used)) static bool rt5514_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case RT5514_RESET:
	case RT5514_PWR_ANA1:
	case RT5514_PWR_ANA2:
	case RT5514_I2S_CTRL1:
	case RT5514_I2S_CTRL2:
	case RT5514_VAD_CTRL6:
	case RT5514_EXT_VAD_CTRL:
	case RT5514_DIG_IO_CTRL:
	case RT5514_PAD_CTRL1:
	case RT5514_DMIC_DATA_CTRL:
	case RT5514_DIG_SOURCE_CTRL:
	case RT5514_SRC_CTRL:
	case RT5514_DOWNFILTER2_CTRL1:
	case RT5514_PLL_SOURCE_CTRL:
	case RT5514_CLK_CTRL1:
	case RT5514_CLK_CTRL2:
	case RT5514_PLL3_CALIB_CTRL1:
	case RT5514_PLL3_CALIB_CTRL5:
	case RT5514_DELAY_BUF_CTRL1:
	case RT5514_DELAY_BUF_CTRL3:
	case RT5514_ASRC_IN_CTRL1:
	case RT5514_DOWNFILTER0_CTRL1:
	case RT5514_DOWNFILTER0_CTRL2:
	case RT5514_DOWNFILTER0_CTRL3:
	case RT5514_DOWNFILTER1_CTRL1:
	case RT5514_DOWNFILTER1_CTRL2:
	case RT5514_DOWNFILTER1_CTRL3:
	case RT5514_ANA_CTRL_LDO10:
	case RT5514_ANA_CTRL_LDO18_16:
	case RT5514_ANA_CTRL_ADC12:
	case RT5514_ANA_CTRL_ADC21:
	case RT5514_ANA_CTRL_ADC22:
	case RT5514_ANA_CTRL_ADC23:
	case RT5514_ANA_CTRL_MICBST:
	case RT5514_ANA_CTRL_ADCFED:
	case RT5514_ANA_CTRL_INBUF:
	case RT5514_ANA_CTRL_VREF:
	case RT5514_ANA_CTRL_PLL3:
	case RT5514_ANA_CTRL_PLL1_1:
	case RT5514_ANA_CTRL_PLL1_2:
	case RT5514_DMIC_LP_CTRL:
	case RT5514_MISC_CTRL_DSP:
	case RT5514_DSP_CTRL1:
	case RT5514_DSP_CTRL3:
	case RT5514_DSP_CTRL4:
	case RT5514_VENDOR_ID1:
	case RT5514_VENDOR_ID2:
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
          int benchRet = rt5514_readable_register(dev,reg);
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
          int benchRet = rt5514_readable_register(dev,reg);
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
