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
#define  WM8993_ADC_CTRL 237 
#define  WM8993_ADDITIONAL_CONTROL 236 
#define  WM8993_ANALOGUE_HP_0 235 
#define  WM8993_ANTIPOP1 234 
#define  WM8993_ANTIPOP2 233 
#define  WM8993_AUDIO_INTERFACE_1 232 
#define  WM8993_AUDIO_INTERFACE_2 231 
#define  WM8993_AUDIO_INTERFACE_3 230 
#define  WM8993_AUDIO_INTERFACE_4 229 
#define  WM8993_BUS_CONTROL_1 228 
#define  WM8993_CHARGE_PUMP_1 227 
#define  WM8993_CLASS_W_0 226 
#define  WM8993_CLOCKING_1 225 
#define  WM8993_CLOCKING_2 224 
#define  WM8993_CLOCKING_3 223 
#define  WM8993_CLOCKING_4 222 
#define  WM8993_DAC_CTRL 221 
#define  WM8993_DC_SERVO_0 220 
#define  WM8993_DC_SERVO_1 219 
#define  WM8993_DC_SERVO_3 218 
#define  WM8993_DC_SERVO_READBACK_0 217 
#define  WM8993_DC_SERVO_READBACK_1 216 
#define  WM8993_DC_SERVO_READBACK_2 215 
#define  WM8993_DIGITAL_PULLS 214 
#define  WM8993_DIGITAL_SIDE_TONE 213 
#define  WM8993_DRC_CONTROL_1 212 
#define  WM8993_DRC_CONTROL_2 211 
#define  WM8993_DRC_CONTROL_3 210 
#define  WM8993_DRC_CONTROL_4 209 
#define  WM8993_EQ1 208 
#define  WM8993_EQ10 207 
#define  WM8993_EQ11 206 
#define  WM8993_EQ12 205 
#define  WM8993_EQ13 204 
#define  WM8993_EQ14 203 
#define  WM8993_EQ15 202 
#define  WM8993_EQ16 201 
#define  WM8993_EQ17 200 
#define  WM8993_EQ18 199 
#define  WM8993_EQ19 198 
#define  WM8993_EQ2 197 
#define  WM8993_EQ20 196 
#define  WM8993_EQ21 195 
#define  WM8993_EQ22 194 
#define  WM8993_EQ23 193 
#define  WM8993_EQ24 192 
#define  WM8993_EQ3 191 
#define  WM8993_EQ4 190 
#define  WM8993_EQ5 189 
#define  WM8993_EQ6 188 
#define  WM8993_EQ7 187 
#define  WM8993_EQ8 186 
#define  WM8993_EQ9 185 
#define  WM8993_FLL_CONTROL_1 184 
#define  WM8993_FLL_CONTROL_2 183 
#define  WM8993_FLL_CONTROL_3 182 
#define  WM8993_FLL_CONTROL_4 181 
#define  WM8993_FLL_CONTROL_5 180 
#define  WM8993_GPIO1 179 
#define  WM8993_GPIOCTRL_2 178 
#define  WM8993_GPIO_CTRL_1 177 
#define  WM8993_GPIO_POL 176 
#define  WM8993_HPOUT2_MIXER 175 
#define  WM8993_HPOUT2_VOLUME 174 
#define  WM8993_INPUT_MIXER2 173 
#define  WM8993_INPUT_MIXER3 172 
#define  WM8993_INPUT_MIXER4 171 
#define  WM8993_INPUT_MIXER5 170 
#define  WM8993_INPUT_MIXER6 169 
#define  WM8993_IRQ_DEBOUNCE 168 
#define  WM8993_LEFT_ADC_DIGITAL_VOLUME 167 
#define  WM8993_LEFT_DAC_DIGITAL_VOLUME 166 
#define  WM8993_LEFT_LINE_INPUT_1_2_VOLUME 165 
#define  WM8993_LEFT_LINE_INPUT_3_4_VOLUME 164 
#define  WM8993_LEFT_OPGA_VOLUME 163 
#define  WM8993_LEFT_OUTPUT_VOLUME 162 
#define  WM8993_LINE_MIXER1 161 
#define  WM8993_LINE_MIXER2 160 
#define  WM8993_LINE_OUTPUTS_VOLUME 159 
#define  WM8993_MICBIAS 158 
#define  WM8993_MW_SLAVE_CONTROL 157 
#define  WM8993_OUTPUT_MIXER1 156 
#define  WM8993_OUTPUT_MIXER2 155 
#define  WM8993_OUTPUT_MIXER3 154 
#define  WM8993_OUTPUT_MIXER4 153 
#define  WM8993_OUTPUT_MIXER5 152 
#define  WM8993_OUTPUT_MIXER6 151 
#define  WM8993_POWER_MANAGEMENT_1 150 
#define  WM8993_POWER_MANAGEMENT_2 149 
#define  WM8993_POWER_MANAGEMENT_3 148 
#define  WM8993_RIGHT_ADC_DIGITAL_VOLUME 147 
#define  WM8993_RIGHT_DAC_DIGITAL_VOLUME 146 
#define  WM8993_RIGHT_LINE_INPUT_1_2_VOLUME 145 
#define  WM8993_RIGHT_LINE_INPUT_3_4_VOLUME 144 
#define  WM8993_RIGHT_OPGA_VOLUME 143 
#define  WM8993_RIGHT_OUTPUT_VOLUME 142 
#define  WM8993_SOFTWARE_RESET 141 
#define  WM8993_SPEAKER_MIXER 140 
#define  WM8993_SPEAKER_VOLUME_LEFT 139 
#define  WM8993_SPEAKER_VOLUME_RIGHT 138 
#define  WM8993_SPKMIXL_ATTENUATION 137 
#define  WM8993_SPKMIXR_ATTENUATION 136 
#define  WM8993_SPKOUT_BOOST 135 
#define  WM8993_SPKOUT_MIXERS 134 
#define  WM8993_WRITE_SEQUENCER_0 133 
#define  WM8993_WRITE_SEQUENCER_1 132 
#define  WM8993_WRITE_SEQUENCER_2 131 
#define  WM8993_WRITE_SEQUENCER_3 130 
#define  WM8993_WRITE_SEQUENCER_4 129 
#define  WM8993_WRITE_SEQUENCER_5 128 

__attribute__((used)) static bool wm8993_readable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM8993_SOFTWARE_RESET:
	case WM8993_POWER_MANAGEMENT_1:
	case WM8993_POWER_MANAGEMENT_2:
	case WM8993_POWER_MANAGEMENT_3:
	case WM8993_AUDIO_INTERFACE_1:
	case WM8993_AUDIO_INTERFACE_2:
	case WM8993_CLOCKING_1:
	case WM8993_CLOCKING_2:
	case WM8993_AUDIO_INTERFACE_3:
	case WM8993_AUDIO_INTERFACE_4:
	case WM8993_DAC_CTRL:
	case WM8993_LEFT_DAC_DIGITAL_VOLUME:
	case WM8993_RIGHT_DAC_DIGITAL_VOLUME:
	case WM8993_DIGITAL_SIDE_TONE:
	case WM8993_ADC_CTRL:
	case WM8993_LEFT_ADC_DIGITAL_VOLUME:
	case WM8993_RIGHT_ADC_DIGITAL_VOLUME:
	case WM8993_GPIO_CTRL_1:
	case WM8993_GPIO1:
	case WM8993_IRQ_DEBOUNCE:
	case WM8993_GPIOCTRL_2:
	case WM8993_GPIO_POL:
	case WM8993_LEFT_LINE_INPUT_1_2_VOLUME:
	case WM8993_LEFT_LINE_INPUT_3_4_VOLUME:
	case WM8993_RIGHT_LINE_INPUT_1_2_VOLUME:
	case WM8993_RIGHT_LINE_INPUT_3_4_VOLUME:
	case WM8993_LEFT_OUTPUT_VOLUME:
	case WM8993_RIGHT_OUTPUT_VOLUME:
	case WM8993_LINE_OUTPUTS_VOLUME:
	case WM8993_HPOUT2_VOLUME:
	case WM8993_LEFT_OPGA_VOLUME:
	case WM8993_RIGHT_OPGA_VOLUME:
	case WM8993_SPKMIXL_ATTENUATION:
	case WM8993_SPKMIXR_ATTENUATION:
	case WM8993_SPKOUT_MIXERS:
	case WM8993_SPKOUT_BOOST:
	case WM8993_SPEAKER_VOLUME_LEFT:
	case WM8993_SPEAKER_VOLUME_RIGHT:
	case WM8993_INPUT_MIXER2:
	case WM8993_INPUT_MIXER3:
	case WM8993_INPUT_MIXER4:
	case WM8993_INPUT_MIXER5:
	case WM8993_INPUT_MIXER6:
	case WM8993_OUTPUT_MIXER1:
	case WM8993_OUTPUT_MIXER2:
	case WM8993_OUTPUT_MIXER3:
	case WM8993_OUTPUT_MIXER4:
	case WM8993_OUTPUT_MIXER5:
	case WM8993_OUTPUT_MIXER6:
	case WM8993_HPOUT2_MIXER:
	case WM8993_LINE_MIXER1:
	case WM8993_LINE_MIXER2:
	case WM8993_SPEAKER_MIXER:
	case WM8993_ADDITIONAL_CONTROL:
	case WM8993_ANTIPOP1:
	case WM8993_ANTIPOP2:
	case WM8993_MICBIAS:
	case WM8993_FLL_CONTROL_1:
	case WM8993_FLL_CONTROL_2:
	case WM8993_FLL_CONTROL_3:
	case WM8993_FLL_CONTROL_4:
	case WM8993_FLL_CONTROL_5:
	case WM8993_CLOCKING_3:
	case WM8993_CLOCKING_4:
	case WM8993_MW_SLAVE_CONTROL:
	case WM8993_BUS_CONTROL_1:
	case WM8993_WRITE_SEQUENCER_0:
	case WM8993_WRITE_SEQUENCER_1:
	case WM8993_WRITE_SEQUENCER_2:
	case WM8993_WRITE_SEQUENCER_3:
	case WM8993_WRITE_SEQUENCER_4:
	case WM8993_WRITE_SEQUENCER_5:
	case WM8993_CHARGE_PUMP_1:
	case WM8993_CLASS_W_0:
	case WM8993_DC_SERVO_0:
	case WM8993_DC_SERVO_1:
	case WM8993_DC_SERVO_3:
	case WM8993_DC_SERVO_READBACK_0:
	case WM8993_DC_SERVO_READBACK_1:
	case WM8993_DC_SERVO_READBACK_2:
	case WM8993_ANALOGUE_HP_0:
	case WM8993_EQ1:
	case WM8993_EQ2:
	case WM8993_EQ3:
	case WM8993_EQ4:
	case WM8993_EQ5:
	case WM8993_EQ6:
	case WM8993_EQ7:
	case WM8993_EQ8:
	case WM8993_EQ9:
	case WM8993_EQ10:
	case WM8993_EQ11:
	case WM8993_EQ12:
	case WM8993_EQ13:
	case WM8993_EQ14:
	case WM8993_EQ15:
	case WM8993_EQ16:
	case WM8993_EQ17:
	case WM8993_EQ18:
	case WM8993_EQ19:
	case WM8993_EQ20:
	case WM8993_EQ21:
	case WM8993_EQ22:
	case WM8993_EQ23:
	case WM8993_EQ24:
	case WM8993_DIGITAL_PULLS:
	case WM8993_DRC_CONTROL_1:
	case WM8993_DRC_CONTROL_2:
	case WM8993_DRC_CONTROL_3:
	case WM8993_DRC_CONTROL_4:
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
          int benchRet = wm8993_readable(dev,reg);
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
          int benchRet = wm8993_readable(dev,reg);
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
