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
#define  WM8904_ADC_DIGITAL_0 230 
#define  WM8904_ADC_DIGITAL_VOLUME_LEFT 229 
#define  WM8904_ADC_DIGITAL_VOLUME_RIGHT 228 
#define  WM8904_ADC_TEST_0 227 
#define  WM8904_ANALOGUE_ADC_0 226 
#define  WM8904_ANALOGUE_DAC_0 225 
#define  WM8904_ANALOGUE_HP_0 224 
#define  WM8904_ANALOGUE_LEFT_INPUT_0 223 
#define  WM8904_ANALOGUE_LEFT_INPUT_1 222 
#define  WM8904_ANALOGUE_LINEOUT_0 221 
#define  WM8904_ANALOGUE_OUT12_ZC 220 
#define  WM8904_ANALOGUE_OUT1_LEFT 219 
#define  WM8904_ANALOGUE_OUT1_RIGHT 218 
#define  WM8904_ANALOGUE_OUT2_LEFT 217 
#define  WM8904_ANALOGUE_OUT2_RIGHT 216 
#define  WM8904_ANALOGUE_OUTPUT_BIAS_0 215 
#define  WM8904_ANALOGUE_RIGHT_INPUT_0 214 
#define  WM8904_ANALOGUE_RIGHT_INPUT_1 213 
#define  WM8904_AUDIO_INTERFACE_0 212 
#define  WM8904_AUDIO_INTERFACE_1 211 
#define  WM8904_AUDIO_INTERFACE_2 210 
#define  WM8904_AUDIO_INTERFACE_3 209 
#define  WM8904_BIAS_CONTROL_0 208 
#define  WM8904_CHARGE_PUMP_0 207 
#define  WM8904_CLASS_W_0 206 
#define  WM8904_CLOCK_RATES_0 205 
#define  WM8904_CLOCK_RATES_1 204 
#define  WM8904_CLOCK_RATES_2 203 
#define  WM8904_CONTROL_INTERFACE_TEST_1 202 
#define  WM8904_DAC_DIGITAL_0 201 
#define  WM8904_DAC_DIGITAL_1 200 
#define  WM8904_DAC_DIGITAL_VOLUME_LEFT 199 
#define  WM8904_DAC_DIGITAL_VOLUME_RIGHT 198 
#define  WM8904_DC_SERVO_0 197 
#define  WM8904_DC_SERVO_1 196 
#define  WM8904_DC_SERVO_2 195 
#define  WM8904_DC_SERVO_4 194 
#define  WM8904_DC_SERVO_5 193 
#define  WM8904_DC_SERVO_6 192 
#define  WM8904_DC_SERVO_7 191 
#define  WM8904_DC_SERVO_8 190 
#define  WM8904_DC_SERVO_9 189 
#define  WM8904_DC_SERVO_READBACK_0 188 
#define  WM8904_DIGITAL_MICROPHONE_0 187 
#define  WM8904_DIGITAL_PULLS 186 
#define  WM8904_DRC_0 185 
#define  WM8904_DRC_1 184 
#define  WM8904_DRC_2 183 
#define  WM8904_DRC_3 182 
#define  WM8904_EQ1 181 
#define  WM8904_EQ10 180 
#define  WM8904_EQ11 179 
#define  WM8904_EQ12 178 
#define  WM8904_EQ13 177 
#define  WM8904_EQ14 176 
#define  WM8904_EQ15 175 
#define  WM8904_EQ16 174 
#define  WM8904_EQ17 173 
#define  WM8904_EQ18 172 
#define  WM8904_EQ19 171 
#define  WM8904_EQ2 170 
#define  WM8904_EQ20 169 
#define  WM8904_EQ21 168 
#define  WM8904_EQ22 167 
#define  WM8904_EQ23 166 
#define  WM8904_EQ24 165 
#define  WM8904_EQ3 164 
#define  WM8904_EQ4 163 
#define  WM8904_EQ5 162 
#define  WM8904_EQ6 161 
#define  WM8904_EQ7 160 
#define  WM8904_EQ8 159 
#define  WM8904_EQ9 158 
#define  WM8904_FLL_CONTROL_1 157 
#define  WM8904_FLL_CONTROL_2 156 
#define  WM8904_FLL_CONTROL_3 155 
#define  WM8904_FLL_CONTROL_4 154 
#define  WM8904_FLL_CONTROL_5 153 
#define  WM8904_FLL_NCO_TEST_0 152 
#define  WM8904_FLL_NCO_TEST_1 151 
#define  WM8904_GPIO_CONTROL_1 150 
#define  WM8904_GPIO_CONTROL_2 149 
#define  WM8904_GPIO_CONTROL_3 148 
#define  WM8904_GPIO_CONTROL_4 147 
#define  WM8904_INTERRUPT_DEBOUNCE 146 
#define  WM8904_INTERRUPT_POLARITY 145 
#define  WM8904_INTERRUPT_STATUS 144 
#define  WM8904_INTERRUPT_STATUS_MASK 143 
#define  WM8904_MIC_BIAS_CONTROL_0 142 
#define  WM8904_MIC_BIAS_CONTROL_1 141 
#define  WM8904_MIC_FILTER_CONTROL 140 
#define  WM8904_POWER_MANAGEMENT_0 139 
#define  WM8904_POWER_MANAGEMENT_2 138 
#define  WM8904_POWER_MANAGEMENT_3 137 
#define  WM8904_POWER_MANAGEMENT_6 136 
#define  WM8904_REVISION 135 
#define  WM8904_SW_RESET_AND_ID 134 
#define  WM8904_VMID_CONTROL_0 133 
#define  WM8904_WRITE_SEQUENCER_0 132 
#define  WM8904_WRITE_SEQUENCER_1 131 
#define  WM8904_WRITE_SEQUENCER_2 130 
#define  WM8904_WRITE_SEQUENCER_3 129 
#define  WM8904_WRITE_SEQUENCER_4 128 

__attribute__((used)) static bool wm8904_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM8904_SW_RESET_AND_ID:
	case WM8904_REVISION:
	case WM8904_BIAS_CONTROL_0:
	case WM8904_VMID_CONTROL_0:
	case WM8904_MIC_BIAS_CONTROL_0:
	case WM8904_MIC_BIAS_CONTROL_1:
	case WM8904_ANALOGUE_DAC_0:
	case WM8904_MIC_FILTER_CONTROL:
	case WM8904_ANALOGUE_ADC_0:
	case WM8904_POWER_MANAGEMENT_0:
	case WM8904_POWER_MANAGEMENT_2:
	case WM8904_POWER_MANAGEMENT_3:
	case WM8904_POWER_MANAGEMENT_6:
	case WM8904_CLOCK_RATES_0:
	case WM8904_CLOCK_RATES_1:
	case WM8904_CLOCK_RATES_2:
	case WM8904_AUDIO_INTERFACE_0:
	case WM8904_AUDIO_INTERFACE_1:
	case WM8904_AUDIO_INTERFACE_2:
	case WM8904_AUDIO_INTERFACE_3:
	case WM8904_DAC_DIGITAL_VOLUME_LEFT:
	case WM8904_DAC_DIGITAL_VOLUME_RIGHT:
	case WM8904_DAC_DIGITAL_0:
	case WM8904_DAC_DIGITAL_1:
	case WM8904_ADC_DIGITAL_VOLUME_LEFT:
	case WM8904_ADC_DIGITAL_VOLUME_RIGHT:
	case WM8904_ADC_DIGITAL_0:
	case WM8904_DIGITAL_MICROPHONE_0:
	case WM8904_DRC_0:
	case WM8904_DRC_1:
	case WM8904_DRC_2:
	case WM8904_DRC_3:
	case WM8904_ANALOGUE_LEFT_INPUT_0:
	case WM8904_ANALOGUE_RIGHT_INPUT_0:
	case WM8904_ANALOGUE_LEFT_INPUT_1:
	case WM8904_ANALOGUE_RIGHT_INPUT_1:
	case WM8904_ANALOGUE_OUT1_LEFT:
	case WM8904_ANALOGUE_OUT1_RIGHT:
	case WM8904_ANALOGUE_OUT2_LEFT:
	case WM8904_ANALOGUE_OUT2_RIGHT:
	case WM8904_ANALOGUE_OUT12_ZC:
	case WM8904_DC_SERVO_0:
	case WM8904_DC_SERVO_1:
	case WM8904_DC_SERVO_2:
	case WM8904_DC_SERVO_4:
	case WM8904_DC_SERVO_5:
	case WM8904_DC_SERVO_6:
	case WM8904_DC_SERVO_7:
	case WM8904_DC_SERVO_8:
	case WM8904_DC_SERVO_9:
	case WM8904_DC_SERVO_READBACK_0:
	case WM8904_ANALOGUE_HP_0:
	case WM8904_ANALOGUE_LINEOUT_0:
	case WM8904_CHARGE_PUMP_0:
	case WM8904_CLASS_W_0:
	case WM8904_WRITE_SEQUENCER_0:
	case WM8904_WRITE_SEQUENCER_1:
	case WM8904_WRITE_SEQUENCER_2:
	case WM8904_WRITE_SEQUENCER_3:
	case WM8904_WRITE_SEQUENCER_4:
	case WM8904_FLL_CONTROL_1:
	case WM8904_FLL_CONTROL_2:
	case WM8904_FLL_CONTROL_3:
	case WM8904_FLL_CONTROL_4:
	case WM8904_FLL_CONTROL_5:
	case WM8904_GPIO_CONTROL_1:
	case WM8904_GPIO_CONTROL_2:
	case WM8904_GPIO_CONTROL_3:
	case WM8904_GPIO_CONTROL_4:
	case WM8904_DIGITAL_PULLS:
	case WM8904_INTERRUPT_STATUS:
	case WM8904_INTERRUPT_STATUS_MASK:
	case WM8904_INTERRUPT_POLARITY:
	case WM8904_INTERRUPT_DEBOUNCE:
	case WM8904_EQ1:
	case WM8904_EQ2:
	case WM8904_EQ3:
	case WM8904_EQ4:
	case WM8904_EQ5:
	case WM8904_EQ6:
	case WM8904_EQ7:
	case WM8904_EQ8:
	case WM8904_EQ9:
	case WM8904_EQ10:
	case WM8904_EQ11:
	case WM8904_EQ12:
	case WM8904_EQ13:
	case WM8904_EQ14:
	case WM8904_EQ15:
	case WM8904_EQ16:
	case WM8904_EQ17:
	case WM8904_EQ18:
	case WM8904_EQ19:
	case WM8904_EQ20:
	case WM8904_EQ21:
	case WM8904_EQ22:
	case WM8904_EQ23:
	case WM8904_EQ24:
	case WM8904_CONTROL_INTERFACE_TEST_1:
	case WM8904_ADC_TEST_0:
	case WM8904_ANALOGUE_OUTPUT_BIAS_0:
	case WM8904_FLL_NCO_TEST_0:
	case WM8904_FLL_NCO_TEST_1:
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
          int benchRet = wm8904_readable_register(dev,reg);
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
          int benchRet = wm8904_readable_register(dev,reg);
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
