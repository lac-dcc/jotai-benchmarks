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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
#define  WM8985_3D_CONTROL 182 
#define  WM8985_ADC_CONTROL 181 
#define  WM8985_ADDITIONAL_CONTROL 180 
#define  WM8985_ALC_CONTROL_1 179 
#define  WM8985_ALC_CONTROL_2 178 
#define  WM8985_ALC_CONTROL_3 177 
#define  WM8985_AUDIO_INTERFACE 176 
#define  WM8985_BEEP_CONTROL 175 
#define  WM8985_BIAS_CTRL 174 
#define  WM8985_CLOCK_GEN_CONTROL 173 
#define  WM8985_COMPANDING_CONTROL 172 
#define  WM8985_DAC_CONTROL 171 
#define  WM8985_DAC_LIMITER_1 170 
#define  WM8985_DAC_LIMITER_2 169 
#define  WM8985_EQ1_LOW_SHELF 168 
#define  WM8985_EQ2_PEAK_1 167 
#define  WM8985_EQ3_PEAK_2 166 
#define  WM8985_EQ4_PEAK_3 165 
#define  WM8985_EQ5_HIGH_SHELF 164 
#define  WM8985_GPIO_CONTROL 163 
#define  WM8985_INPUT_CTRL 162 
#define  WM8985_JACK_DETECT_CONTROL_1 161 
#define  WM8985_JACK_DETECT_CONTROL_2 160 
#define  WM8985_LEFT_ADC_BOOST_CTRL 159 
#define  WM8985_LEFT_ADC_DIGITAL_VOL 158 
#define  WM8985_LEFT_DAC_DIGITAL_VOL 157 
#define  WM8985_LEFT_INP_PGA_GAIN_CTRL 156 
#define  WM8985_LEFT_MIXER_CTRL 155 
#define  WM8985_LOUT1_HP_VOLUME_CTRL 154 
#define  WM8985_LOUT2_SPK_VOLUME_CTRL 153 
#define  WM8985_NOISE_GATE 152 
#define  WM8985_NOTCH_FILTER_1 151 
#define  WM8985_NOTCH_FILTER_2 150 
#define  WM8985_NOTCH_FILTER_3 149 
#define  WM8985_NOTCH_FILTER_4 148 
#define  WM8985_OUT3_MIXER_CTRL 147 
#define  WM8985_OUT4_MONO_MIX_CTRL 146 
#define  WM8985_OUT4_TO_ADC 145 
#define  WM8985_OUTPUT_CTRL0 144 
#define  WM8985_OUTPUT_CTRL1 143 
#define  WM8985_PLL_K_1 142 
#define  WM8985_PLL_K_2 141 
#define  WM8985_PLL_K_3 140 
#define  WM8985_PLL_N 139 
#define  WM8985_POWER_MANAGEMENT_1 138 
#define  WM8985_POWER_MANAGEMENT_2 137 
#define  WM8985_POWER_MANAGEMENT_3 136 
#define  WM8985_RIGHT_ADC_BOOST_CTRL 135 
#define  WM8985_RIGHT_ADC_DIGITAL_VOL 134 
#define  WM8985_RIGHT_DAC_DIGITAL_VOL 133 
#define  WM8985_RIGHT_INP_PGA_GAIN_CTRL 132 
#define  WM8985_RIGHT_MIXER_CTRL 131 
#define  WM8985_ROUT1_HP_VOLUME_CTRL 130 
#define  WM8985_ROUT2_SPK_VOLUME_CTRL 129 
#define  WM8985_SOFTWARE_RESET 128 

__attribute__((used)) static bool wm8985_writeable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM8985_SOFTWARE_RESET:
	case WM8985_POWER_MANAGEMENT_1:
	case WM8985_POWER_MANAGEMENT_2:
	case WM8985_POWER_MANAGEMENT_3:
	case WM8985_AUDIO_INTERFACE:
	case WM8985_COMPANDING_CONTROL:
	case WM8985_CLOCK_GEN_CONTROL:
	case WM8985_ADDITIONAL_CONTROL:
	case WM8985_GPIO_CONTROL:
	case WM8985_JACK_DETECT_CONTROL_1:
	case WM8985_DAC_CONTROL:
	case WM8985_LEFT_DAC_DIGITAL_VOL:
	case WM8985_RIGHT_DAC_DIGITAL_VOL:
	case WM8985_JACK_DETECT_CONTROL_2:
	case WM8985_ADC_CONTROL:
	case WM8985_LEFT_ADC_DIGITAL_VOL:
	case WM8985_RIGHT_ADC_DIGITAL_VOL:
	case WM8985_EQ1_LOW_SHELF:
	case WM8985_EQ2_PEAK_1:
	case WM8985_EQ3_PEAK_2:
	case WM8985_EQ4_PEAK_3:
	case WM8985_EQ5_HIGH_SHELF:
	case WM8985_DAC_LIMITER_1:
	case WM8985_DAC_LIMITER_2:
	case WM8985_NOTCH_FILTER_1:
	case WM8985_NOTCH_FILTER_2:
	case WM8985_NOTCH_FILTER_3:
	case WM8985_NOTCH_FILTER_4:
	case WM8985_ALC_CONTROL_1:
	case WM8985_ALC_CONTROL_2:
	case WM8985_ALC_CONTROL_3:
	case WM8985_NOISE_GATE:
	case WM8985_PLL_N:
	case WM8985_PLL_K_1:
	case WM8985_PLL_K_2:
	case WM8985_PLL_K_3:
	case WM8985_3D_CONTROL:
	case WM8985_OUT4_TO_ADC:
	case WM8985_BEEP_CONTROL:
	case WM8985_INPUT_CTRL:
	case WM8985_LEFT_INP_PGA_GAIN_CTRL:
	case WM8985_RIGHT_INP_PGA_GAIN_CTRL:
	case WM8985_LEFT_ADC_BOOST_CTRL:
	case WM8985_RIGHT_ADC_BOOST_CTRL:
	case WM8985_OUTPUT_CTRL0:
	case WM8985_LEFT_MIXER_CTRL:
	case WM8985_RIGHT_MIXER_CTRL:
	case WM8985_LOUT1_HP_VOLUME_CTRL:
	case WM8985_ROUT1_HP_VOLUME_CTRL:
	case WM8985_LOUT2_SPK_VOLUME_CTRL:
	case WM8985_ROUT2_SPK_VOLUME_CTRL:
	case WM8985_OUT3_MIXER_CTRL:
	case WM8985_OUT4_MONO_MIX_CTRL:
	case WM8985_OUTPUT_CTRL1:
	case WM8985_BIAS_CTRL:
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

    // big-arr
    case 0:
    {
          unsigned int reg = 255;
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wm8985_writeable(dev,reg);
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
