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
#define  PCM512x_ANALOG_GAIN_BOOST 196 
#define  PCM512x_ANALOG_GAIN_CTRL 195 
#define  PCM512x_ANALOG_MUTE_CTRL 194 
#define  PCM512x_ANALOG_MUTE_DET 193 
#define  PCM512x_AUTO_MUTE 192 
#define  PCM512x_BCLK_LRCLK_CFG 191 
#define  PCM512x_CLKDET 190 
#define  PCM512x_CLOCK_STATUS 189 
#define  PCM512x_CRAM_CTRL 188 
#define  PCM512x_DAC_CLKDIV 187 
#define  PCM512x_DAC_REF 186 
#define  PCM512x_DAC_ROUTING 185 
#define  PCM512x_DIGITAL_MUTE_1 184 
#define  PCM512x_DIGITAL_MUTE_2 183 
#define  PCM512x_DIGITAL_MUTE_3 182 
#define  PCM512x_DIGITAL_MUTE_DET 181 
#define  PCM512x_DIGITAL_VOLUME_1 180 
#define  PCM512x_DIGITAL_VOLUME_2 179 
#define  PCM512x_DIGITAL_VOLUME_3 178 
#define  PCM512x_DSP 177 
#define  PCM512x_DSP_CLKDIV 176 
#define  PCM512x_DSP_GPIO_INPUT 175 
#define  PCM512x_DSP_PROGRAM 174 
#define  PCM512x_ERROR_DETECT 173 
#define  PCM512x_FLEX_A 172 
#define  PCM512x_FLEX_B 171 
#define  PCM512x_FS_SPEED_MODE 170 
#define  PCM512x_GPIN 169 
#define  PCM512x_GPIO_CONTROL_1 168 
#define  PCM512x_GPIO_CONTROL_2 167 
#define  PCM512x_GPIO_DACIN 166 
#define  PCM512x_GPIO_EN 165 
#define  PCM512x_GPIO_OUTPUT_1 164 
#define  PCM512x_GPIO_OUTPUT_2 163 
#define  PCM512x_GPIO_OUTPUT_3 162 
#define  PCM512x_GPIO_OUTPUT_4 161 
#define  PCM512x_GPIO_OUTPUT_5 160 
#define  PCM512x_GPIO_OUTPUT_6 159 
#define  PCM512x_GPIO_PLLIN 158 
#define  PCM512x_I2S_1 157 
#define  PCM512x_I2S_2 156 
#define  PCM512x_IDAC_1 155 
#define  PCM512x_IDAC_2 154 
#define  PCM512x_MASTER_CLKDIV_1 153 
#define  PCM512x_MASTER_CLKDIV_2 152 
#define  PCM512x_MASTER_MODE 151 
#define  PCM512x_MUTE 150 
#define  PCM512x_NCP_CLKDIV 149 
#define  PCM512x_OSR_CLKDIV 148 
#define  PCM512x_OUTPUT_AMPLITUDE 147 
#define  PCM512x_OVERFLOW 146 
#define  PCM512x_PLL_COEFF_0 145 
#define  PCM512x_PLL_COEFF_1 144 
#define  PCM512x_PLL_COEFF_2 143 
#define  PCM512x_PLL_COEFF_3 142 
#define  PCM512x_PLL_COEFF_4 141 
#define  PCM512x_PLL_EN 140 
#define  PCM512x_PLL_REF 139 
#define  PCM512x_POWER 138 
#define  PCM512x_RATE_DET_1 137 
#define  PCM512x_RATE_DET_2 136 
#define  PCM512x_RATE_DET_3 135 
#define  PCM512x_RATE_DET_4 134 
#define  PCM512x_RESET 133 
#define  PCM512x_SPI_MISO_FUNCTION 132 
#define  PCM512x_SYNCHRONIZE 131 
#define  PCM512x_UNDERVOLTAGE_PROT 130 
#define  PCM512x_VCOM_CTRL_1 129 
#define  PCM512x_VCOM_CTRL_2 128 

__attribute__((used)) static bool pcm512x_readable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case PCM512x_RESET:
	case PCM512x_POWER:
	case PCM512x_MUTE:
	case PCM512x_PLL_EN:
	case PCM512x_SPI_MISO_FUNCTION:
	case PCM512x_DSP:
	case PCM512x_GPIO_EN:
	case PCM512x_BCLK_LRCLK_CFG:
	case PCM512x_DSP_GPIO_INPUT:
	case PCM512x_MASTER_MODE:
	case PCM512x_PLL_REF:
	case PCM512x_DAC_REF:
	case PCM512x_GPIO_DACIN:
	case PCM512x_GPIO_PLLIN:
	case PCM512x_SYNCHRONIZE:
	case PCM512x_PLL_COEFF_0:
	case PCM512x_PLL_COEFF_1:
	case PCM512x_PLL_COEFF_2:
	case PCM512x_PLL_COEFF_3:
	case PCM512x_PLL_COEFF_4:
	case PCM512x_DSP_CLKDIV:
	case PCM512x_DAC_CLKDIV:
	case PCM512x_NCP_CLKDIV:
	case PCM512x_OSR_CLKDIV:
	case PCM512x_MASTER_CLKDIV_1:
	case PCM512x_MASTER_CLKDIV_2:
	case PCM512x_FS_SPEED_MODE:
	case PCM512x_IDAC_1:
	case PCM512x_IDAC_2:
	case PCM512x_ERROR_DETECT:
	case PCM512x_I2S_1:
	case PCM512x_I2S_2:
	case PCM512x_DAC_ROUTING:
	case PCM512x_DSP_PROGRAM:
	case PCM512x_CLKDET:
	case PCM512x_AUTO_MUTE:
	case PCM512x_DIGITAL_VOLUME_1:
	case PCM512x_DIGITAL_VOLUME_2:
	case PCM512x_DIGITAL_VOLUME_3:
	case PCM512x_DIGITAL_MUTE_1:
	case PCM512x_DIGITAL_MUTE_2:
	case PCM512x_DIGITAL_MUTE_3:
	case PCM512x_GPIO_OUTPUT_1:
	case PCM512x_GPIO_OUTPUT_2:
	case PCM512x_GPIO_OUTPUT_3:
	case PCM512x_GPIO_OUTPUT_4:
	case PCM512x_GPIO_OUTPUT_5:
	case PCM512x_GPIO_OUTPUT_6:
	case PCM512x_GPIO_CONTROL_1:
	case PCM512x_GPIO_CONTROL_2:
	case PCM512x_OVERFLOW:
	case PCM512x_RATE_DET_1:
	case PCM512x_RATE_DET_2:
	case PCM512x_RATE_DET_3:
	case PCM512x_RATE_DET_4:
	case PCM512x_CLOCK_STATUS:
	case PCM512x_ANALOG_MUTE_DET:
	case PCM512x_GPIN:
	case PCM512x_DIGITAL_MUTE_DET:
	case PCM512x_OUTPUT_AMPLITUDE:
	case PCM512x_ANALOG_GAIN_CTRL:
	case PCM512x_UNDERVOLTAGE_PROT:
	case PCM512x_ANALOG_MUTE_CTRL:
	case PCM512x_ANALOG_GAIN_BOOST:
	case PCM512x_VCOM_CTRL_1:
	case PCM512x_VCOM_CTRL_2:
	case PCM512x_CRAM_CTRL:
	case PCM512x_FLEX_A:
	case PCM512x_FLEX_B:
		return true;
	default:
		/* There are 256 raw register addresses */
		return reg < 0xff;
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
          int benchRet = pcm512x_readable(dev,reg);
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
          int benchRet = pcm512x_readable(dev,reg);
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
