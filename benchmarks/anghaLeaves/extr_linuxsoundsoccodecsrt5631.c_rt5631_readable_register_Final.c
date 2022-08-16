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
#define  RT5631_ADC_CTRL_1 177 
#define  RT5631_ADC_CTRL_2 176 
#define  RT5631_ADC_REC_MIXER 175 
#define  RT5631_ALC_CTRL_1 174 
#define  RT5631_ALC_CTRL_2 173 
#define  RT5631_ALC_CTRL_3 172 
#define  RT5631_AUX_IN_VOL 171 
#define  RT5631_AXO1MIXER_CTRL 170 
#define  RT5631_AXO2MIXER_CTRL 169 
#define  RT5631_DEPOP_FUN_CTRL_1 168 
#define  RT5631_DEPOP_FUN_CTRL_2 167 
#define  RT5631_DIG_MIC_CTRL 166 
#define  RT5631_EQ_CTRL 165 
#define  RT5631_GEN_PUR_CTRL_REG 164 
#define  RT5631_GLOBAL_CLK_CTRL 163 
#define  RT5631_GPIO_CTRL 162 
#define  RT5631_HP_OUT_VOL 161 
#define  RT5631_INDEX_ADD 160 
#define  RT5631_INDEX_DATA 159 
#define  RT5631_INT_ST_IRQ_CTRL_1 158 
#define  RT5631_INT_ST_IRQ_CTRL_2 157 
#define  RT5631_JACK_DET_CTRL 156 
#define  RT5631_MIC_CTRL_1 155 
#define  RT5631_MIC_CTRL_2 154 
#define  RT5631_MISC_CTRL 153 
#define  RT5631_MONO_AXO_1_2_VOL 152 
#define  RT5631_MONO_INPUT_VOL 151 
#define  RT5631_MONO_SDP_CTRL 150 
#define  RT5631_OUTMIXER_L_CTRL 149 
#define  RT5631_OUTMIXER_R_CTRL 148 
#define  RT5631_PLL_CTRL 147 
#define  RT5631_PSEUDO_SPATL_CTRL 146 
#define  RT5631_PWR_MANAG_ADD1 145 
#define  RT5631_PWR_MANAG_ADD2 144 
#define  RT5631_PWR_MANAG_ADD3 143 
#define  RT5631_PWR_MANAG_ADD4 142 
#define  RT5631_RESET 141 
#define  RT5631_SDP_CTRL 140 
#define  RT5631_SOFT_VOL_CTRL 139 
#define  RT5631_SPK_MIXER_CTRL 138 
#define  RT5631_SPK_MONO_HP_OUT_CTRL 137 
#define  RT5631_SPK_MONO_OUT_CTRL 136 
#define  RT5631_SPK_OUT_VOL 135 
#define  RT5631_STEREO_AD_DA_CLK_CTRL 134 
#define  RT5631_STEREO_DAC_VOL_1 133 
#define  RT5631_STEREO_DAC_VOL_2 132 
#define  RT5631_VDAC_DIG_VOL 131 
#define  RT5631_VENDOR_ID 130 
#define  RT5631_VENDOR_ID1 129 
#define  RT5631_VENDOR_ID2 128 

__attribute__((used)) static bool rt5631_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case RT5631_RESET:
	case RT5631_SPK_OUT_VOL:
	case RT5631_HP_OUT_VOL:
	case RT5631_MONO_AXO_1_2_VOL:
	case RT5631_AUX_IN_VOL:
	case RT5631_STEREO_DAC_VOL_1:
	case RT5631_MIC_CTRL_1:
	case RT5631_STEREO_DAC_VOL_2:
	case RT5631_ADC_CTRL_1:
	case RT5631_ADC_REC_MIXER:
	case RT5631_ADC_CTRL_2:
	case RT5631_VDAC_DIG_VOL:
	case RT5631_OUTMIXER_L_CTRL:
	case RT5631_OUTMIXER_R_CTRL:
	case RT5631_AXO1MIXER_CTRL:
	case RT5631_AXO2MIXER_CTRL:
	case RT5631_MIC_CTRL_2:
	case RT5631_DIG_MIC_CTRL:
	case RT5631_MONO_INPUT_VOL:
	case RT5631_SPK_MIXER_CTRL:
	case RT5631_SPK_MONO_OUT_CTRL:
	case RT5631_SPK_MONO_HP_OUT_CTRL:
	case RT5631_SDP_CTRL:
	case RT5631_MONO_SDP_CTRL:
	case RT5631_STEREO_AD_DA_CLK_CTRL:
	case RT5631_PWR_MANAG_ADD1:
	case RT5631_PWR_MANAG_ADD2:
	case RT5631_PWR_MANAG_ADD3:
	case RT5631_PWR_MANAG_ADD4:
	case RT5631_GEN_PUR_CTRL_REG:
	case RT5631_GLOBAL_CLK_CTRL:
	case RT5631_PLL_CTRL:
	case RT5631_INT_ST_IRQ_CTRL_1:
	case RT5631_INT_ST_IRQ_CTRL_2:
	case RT5631_GPIO_CTRL:
	case RT5631_MISC_CTRL:
	case RT5631_DEPOP_FUN_CTRL_1:
	case RT5631_DEPOP_FUN_CTRL_2:
	case RT5631_JACK_DET_CTRL:
	case RT5631_SOFT_VOL_CTRL:
	case RT5631_ALC_CTRL_1:
	case RT5631_ALC_CTRL_2:
	case RT5631_ALC_CTRL_3:
	case RT5631_PSEUDO_SPATL_CTRL:
	case RT5631_INDEX_ADD:
	case RT5631_INDEX_DATA:
	case RT5631_EQ_CTRL:
	case RT5631_VENDOR_ID:
	case RT5631_VENDOR_ID1:
	case RT5631_VENDOR_ID2:
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
          int benchRet = rt5631_readable_register(dev,reg);
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
          int benchRet = rt5631_readable_register(dev,reg);
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
