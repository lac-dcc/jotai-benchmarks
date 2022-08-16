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
#define  SGTL5000_CHIP_ADCDAC_CTRL 177 
#define  SGTL5000_CHIP_ANA_ADC_CTRL 176 
#define  SGTL5000_CHIP_ANA_CTRL 175 
#define  SGTL5000_CHIP_ANA_HP_CTRL 174 
#define  SGTL5000_CHIP_ANA_POWER 173 
#define  SGTL5000_CHIP_ANA_STATUS 172 
#define  SGTL5000_CHIP_ANA_TEST2 171 
#define  SGTL5000_CHIP_CLK_CTRL 170 
#define  SGTL5000_CHIP_CLK_TOP_CTRL 169 
#define  SGTL5000_CHIP_DAC_VOL 168 
#define  SGTL5000_CHIP_DIG_POWER 167 
#define  SGTL5000_CHIP_I2S_CTRL 166 
#define  SGTL5000_CHIP_ID 165 
#define  SGTL5000_CHIP_LINE_OUT_CTRL 164 
#define  SGTL5000_CHIP_LINE_OUT_VOL 163 
#define  SGTL5000_CHIP_LINREG_CTRL 162 
#define  SGTL5000_CHIP_MIC_CTRL 161 
#define  SGTL5000_CHIP_PAD_STRENGTH 160 
#define  SGTL5000_CHIP_PLL_CTRL 159 
#define  SGTL5000_CHIP_REF_CTRL 158 
#define  SGTL5000_CHIP_SHORT_CTRL 157 
#define  SGTL5000_CHIP_SSS_CTRL 156 
#define  SGTL5000_DAP_AUDIO_EQ 155 
#define  SGTL5000_DAP_AVC_ATTACK 154 
#define  SGTL5000_DAP_AVC_CTRL 153 
#define  SGTL5000_DAP_AVC_DECAY 152 
#define  SGTL5000_DAP_AVC_THRESHOLD 151 
#define  SGTL5000_DAP_BASS_ENHANCE 150 
#define  SGTL5000_DAP_BASS_ENHANCE_CTRL 149 
#define  SGTL5000_DAP_COEF_WR_A1_LSB 148 
#define  SGTL5000_DAP_COEF_WR_A1_MSB 147 
#define  SGTL5000_DAP_COEF_WR_A2_LSB 146 
#define  SGTL5000_DAP_COEF_WR_A2_MSB 145 
#define  SGTL5000_DAP_COEF_WR_B0_LSB 144 
#define  SGTL5000_DAP_COEF_WR_B0_MSB 143 
#define  SGTL5000_DAP_COEF_WR_B1_LSB 142 
#define  SGTL5000_DAP_COEF_WR_B1_MSB 141 
#define  SGTL5000_DAP_COEF_WR_B2_LSB 140 
#define  SGTL5000_DAP_COEF_WR_B2_MSB 139 
#define  SGTL5000_DAP_CTRL 138 
#define  SGTL5000_DAP_EQ_BASS_BAND0 137 
#define  SGTL5000_DAP_EQ_BASS_BAND1 136 
#define  SGTL5000_DAP_EQ_BASS_BAND2 135 
#define  SGTL5000_DAP_EQ_BASS_BAND3 134 
#define  SGTL5000_DAP_EQ_BASS_BAND4 133 
#define  SGTL5000_DAP_FLT_COEF_ACCESS 132 
#define  SGTL5000_DAP_MAIN_CHAN 131 
#define  SGTL5000_DAP_MIX_CHAN 130 
#define  SGTL5000_DAP_PEQ 129 
#define  SGTL5000_DAP_SURROUND 128 

__attribute__((used)) static bool sgtl5000_readable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case SGTL5000_CHIP_ID:
	case SGTL5000_CHIP_DIG_POWER:
	case SGTL5000_CHIP_CLK_CTRL:
	case SGTL5000_CHIP_I2S_CTRL:
	case SGTL5000_CHIP_SSS_CTRL:
	case SGTL5000_CHIP_ADCDAC_CTRL:
	case SGTL5000_CHIP_DAC_VOL:
	case SGTL5000_CHIP_PAD_STRENGTH:
	case SGTL5000_CHIP_ANA_ADC_CTRL:
	case SGTL5000_CHIP_ANA_HP_CTRL:
	case SGTL5000_CHIP_ANA_CTRL:
	case SGTL5000_CHIP_LINREG_CTRL:
	case SGTL5000_CHIP_REF_CTRL:
	case SGTL5000_CHIP_MIC_CTRL:
	case SGTL5000_CHIP_LINE_OUT_CTRL:
	case SGTL5000_CHIP_LINE_OUT_VOL:
	case SGTL5000_CHIP_ANA_POWER:
	case SGTL5000_CHIP_PLL_CTRL:
	case SGTL5000_CHIP_CLK_TOP_CTRL:
	case SGTL5000_CHIP_ANA_STATUS:
	case SGTL5000_CHIP_SHORT_CTRL:
	case SGTL5000_CHIP_ANA_TEST2:
	case SGTL5000_DAP_CTRL:
	case SGTL5000_DAP_PEQ:
	case SGTL5000_DAP_BASS_ENHANCE:
	case SGTL5000_DAP_BASS_ENHANCE_CTRL:
	case SGTL5000_DAP_AUDIO_EQ:
	case SGTL5000_DAP_SURROUND:
	case SGTL5000_DAP_FLT_COEF_ACCESS:
	case SGTL5000_DAP_COEF_WR_B0_MSB:
	case SGTL5000_DAP_COEF_WR_B0_LSB:
	case SGTL5000_DAP_EQ_BASS_BAND0:
	case SGTL5000_DAP_EQ_BASS_BAND1:
	case SGTL5000_DAP_EQ_BASS_BAND2:
	case SGTL5000_DAP_EQ_BASS_BAND3:
	case SGTL5000_DAP_EQ_BASS_BAND4:
	case SGTL5000_DAP_MAIN_CHAN:
	case SGTL5000_DAP_MIX_CHAN:
	case SGTL5000_DAP_AVC_CTRL:
	case SGTL5000_DAP_AVC_THRESHOLD:
	case SGTL5000_DAP_AVC_ATTACK:
	case SGTL5000_DAP_AVC_DECAY:
	case SGTL5000_DAP_COEF_WR_B1_MSB:
	case SGTL5000_DAP_COEF_WR_B1_LSB:
	case SGTL5000_DAP_COEF_WR_B2_MSB:
	case SGTL5000_DAP_COEF_WR_B2_LSB:
	case SGTL5000_DAP_COEF_WR_A1_MSB:
	case SGTL5000_DAP_COEF_WR_A1_LSB:
	case SGTL5000_DAP_COEF_WR_A2_MSB:
	case SGTL5000_DAP_COEF_WR_A2_LSB:
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
          int benchRet = sgtl5000_readable(dev,reg);
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
          int benchRet = sgtl5000_readable(dev,reg);
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
