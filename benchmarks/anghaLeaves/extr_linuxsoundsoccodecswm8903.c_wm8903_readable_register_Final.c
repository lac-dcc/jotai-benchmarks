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
#define  WM8903_ADC_DIGITAL_0 204 
#define  WM8903_ADC_DIGITAL_VOLUME_LEFT 203 
#define  WM8903_ADC_DIGITAL_VOLUME_RIGHT 202 
#define  WM8903_ANALOGUE_ADC_0 201 
#define  WM8903_ANALOGUE_DAC_0 200 
#define  WM8903_ANALOGUE_HP_0 199 
#define  WM8903_ANALOGUE_LEFT_INPUT_0 198 
#define  WM8903_ANALOGUE_LEFT_INPUT_1 197 
#define  WM8903_ANALOGUE_LEFT_MIX_0 196 
#define  WM8903_ANALOGUE_LINEOUT_0 195 
#define  WM8903_ANALOGUE_OUT1_LEFT 194 
#define  WM8903_ANALOGUE_OUT1_RIGHT 193 
#define  WM8903_ANALOGUE_OUT2_LEFT 192 
#define  WM8903_ANALOGUE_OUT2_RIGHT 191 
#define  WM8903_ANALOGUE_OUT3_LEFT 190 
#define  WM8903_ANALOGUE_OUT3_RIGHT 189 
#define  WM8903_ANALOGUE_OUTPUT_BIAS_0 188 
#define  WM8903_ANALOGUE_RIGHT_INPUT_0 187 
#define  WM8903_ANALOGUE_RIGHT_INPUT_1 186 
#define  WM8903_ANALOGUE_RIGHT_MIX_0 185 
#define  WM8903_ANALOGUE_SPK_MIX_LEFT_0 184 
#define  WM8903_ANALOGUE_SPK_MIX_LEFT_1 183 
#define  WM8903_ANALOGUE_SPK_MIX_RIGHT_0 182 
#define  WM8903_ANALOGUE_SPK_MIX_RIGHT_1 181 
#define  WM8903_ANALOGUE_SPK_OUTPUT_CONTROL_0 180 
#define  WM8903_AUDIO_INTERFACE_0 179 
#define  WM8903_AUDIO_INTERFACE_1 178 
#define  WM8903_AUDIO_INTERFACE_2 177 
#define  WM8903_AUDIO_INTERFACE_3 176 
#define  WM8903_BIAS_CONTROL_0 175 
#define  WM8903_CHARGE_PUMP_0 174 
#define  WM8903_CLASS_W_0 173 
#define  WM8903_CLOCK_RATES_0 172 
#define  WM8903_CLOCK_RATES_1 171 
#define  WM8903_CLOCK_RATES_2 170 
#define  WM8903_CLOCK_RATE_TEST_4 169 
#define  WM8903_CONTROL_INTERFACE 168 
#define  WM8903_DAC_DIGITAL_0 167 
#define  WM8903_DAC_DIGITAL_1 166 
#define  WM8903_DAC_DIGITAL_VOLUME_LEFT 165 
#define  WM8903_DAC_DIGITAL_VOLUME_RIGHT 164 
#define  WM8903_DC_SERVO_0 163 
#define  WM8903_DC_SERVO_2 162 
#define  WM8903_DC_SERVO_READBACK_1 161 
#define  WM8903_DC_SERVO_READBACK_2 160 
#define  WM8903_DC_SERVO_READBACK_3 159 
#define  WM8903_DC_SERVO_READBACK_4 158 
#define  WM8903_DIGITAL_MICROPHONE_0 157 
#define  WM8903_DRC_0 156 
#define  WM8903_DRC_1 155 
#define  WM8903_DRC_2 154 
#define  WM8903_DRC_3 153 
#define  WM8903_GPIO_CONTROL_1 152 
#define  WM8903_GPIO_CONTROL_2 151 
#define  WM8903_GPIO_CONTROL_3 150 
#define  WM8903_GPIO_CONTROL_4 149 
#define  WM8903_GPIO_CONTROL_5 148 
#define  WM8903_INTERRUPT_CONTROL 147 
#define  WM8903_INTERRUPT_POLARITY_1 146 
#define  WM8903_INTERRUPT_STATUS_1 145 
#define  WM8903_INTERRUPT_STATUS_1_MASK 144 
#define  WM8903_MIC_BIAS_CONTROL_0 143 
#define  WM8903_POWER_MANAGEMENT_0 142 
#define  WM8903_POWER_MANAGEMENT_1 141 
#define  WM8903_POWER_MANAGEMENT_2 140 
#define  WM8903_POWER_MANAGEMENT_3 139 
#define  WM8903_POWER_MANAGEMENT_4 138 
#define  WM8903_POWER_MANAGEMENT_5 137 
#define  WM8903_POWER_MANAGEMENT_6 136 
#define  WM8903_REVISION_NUMBER 135 
#define  WM8903_SW_RESET_AND_ID 134 
#define  WM8903_VMID_CONTROL_0 133 
#define  WM8903_WRITE_SEQUENCER_0 132 
#define  WM8903_WRITE_SEQUENCER_1 131 
#define  WM8903_WRITE_SEQUENCER_2 130 
#define  WM8903_WRITE_SEQUENCER_3 129 
#define  WM8903_WRITE_SEQUENCER_4 128 

__attribute__((used)) static bool wm8903_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM8903_SW_RESET_AND_ID:
	case WM8903_REVISION_NUMBER:
	case WM8903_BIAS_CONTROL_0:
	case WM8903_VMID_CONTROL_0:
	case WM8903_MIC_BIAS_CONTROL_0:
	case WM8903_ANALOGUE_DAC_0:
	case WM8903_ANALOGUE_ADC_0:
	case WM8903_POWER_MANAGEMENT_0:
	case WM8903_POWER_MANAGEMENT_1:
	case WM8903_POWER_MANAGEMENT_2:
	case WM8903_POWER_MANAGEMENT_3:
	case WM8903_POWER_MANAGEMENT_4:
	case WM8903_POWER_MANAGEMENT_5:
	case WM8903_POWER_MANAGEMENT_6:
	case WM8903_CLOCK_RATES_0:
	case WM8903_CLOCK_RATES_1:
	case WM8903_CLOCK_RATES_2:
	case WM8903_AUDIO_INTERFACE_0:
	case WM8903_AUDIO_INTERFACE_1:
	case WM8903_AUDIO_INTERFACE_2:
	case WM8903_AUDIO_INTERFACE_3:
	case WM8903_DAC_DIGITAL_VOLUME_LEFT:
	case WM8903_DAC_DIGITAL_VOLUME_RIGHT:
	case WM8903_DAC_DIGITAL_0:
	case WM8903_DAC_DIGITAL_1:
	case WM8903_ADC_DIGITAL_VOLUME_LEFT:
	case WM8903_ADC_DIGITAL_VOLUME_RIGHT:
	case WM8903_ADC_DIGITAL_0:
	case WM8903_DIGITAL_MICROPHONE_0:
	case WM8903_DRC_0:
	case WM8903_DRC_1:
	case WM8903_DRC_2:
	case WM8903_DRC_3:
	case WM8903_ANALOGUE_LEFT_INPUT_0:
	case WM8903_ANALOGUE_RIGHT_INPUT_0:
	case WM8903_ANALOGUE_LEFT_INPUT_1:
	case WM8903_ANALOGUE_RIGHT_INPUT_1:
	case WM8903_ANALOGUE_LEFT_MIX_0:
	case WM8903_ANALOGUE_RIGHT_MIX_0:
	case WM8903_ANALOGUE_SPK_MIX_LEFT_0:
	case WM8903_ANALOGUE_SPK_MIX_LEFT_1:
	case WM8903_ANALOGUE_SPK_MIX_RIGHT_0:
	case WM8903_ANALOGUE_SPK_MIX_RIGHT_1:
	case WM8903_ANALOGUE_OUT1_LEFT:
	case WM8903_ANALOGUE_OUT1_RIGHT:
	case WM8903_ANALOGUE_OUT2_LEFT:
	case WM8903_ANALOGUE_OUT2_RIGHT:
	case WM8903_ANALOGUE_OUT3_LEFT:
	case WM8903_ANALOGUE_OUT3_RIGHT:
	case WM8903_ANALOGUE_SPK_OUTPUT_CONTROL_0:
	case WM8903_DC_SERVO_0:
	case WM8903_DC_SERVO_2:
	case WM8903_DC_SERVO_READBACK_1:
	case WM8903_DC_SERVO_READBACK_2:
	case WM8903_DC_SERVO_READBACK_3:
	case WM8903_DC_SERVO_READBACK_4:
	case WM8903_ANALOGUE_HP_0:
	case WM8903_ANALOGUE_LINEOUT_0:
	case WM8903_CHARGE_PUMP_0:
	case WM8903_CLASS_W_0:
	case WM8903_WRITE_SEQUENCER_0:
	case WM8903_WRITE_SEQUENCER_1:
	case WM8903_WRITE_SEQUENCER_2:
	case WM8903_WRITE_SEQUENCER_3:
	case WM8903_WRITE_SEQUENCER_4:
	case WM8903_CONTROL_INTERFACE:
	case WM8903_GPIO_CONTROL_1:
	case WM8903_GPIO_CONTROL_2:
	case WM8903_GPIO_CONTROL_3:
	case WM8903_GPIO_CONTROL_4:
	case WM8903_GPIO_CONTROL_5:
	case WM8903_INTERRUPT_STATUS_1:
	case WM8903_INTERRUPT_STATUS_1_MASK:
	case WM8903_INTERRUPT_POLARITY_1:
	case WM8903_INTERRUPT_CONTROL:
	case WM8903_CLOCK_RATE_TEST_4:
	case WM8903_ANALOGUE_OUTPUT_BIAS_0:
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
          int benchRet = wm8903_readable_register(dev,reg);
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
          int benchRet = wm8903_readable_register(dev,reg);
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
