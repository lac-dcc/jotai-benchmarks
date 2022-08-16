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
#define  WM9090_AGC_CONTROL_0 167 
#define  WM9090_AGC_CONTROL_1 166 
#define  WM9090_AGC_CONTROL_2 165 
#define  WM9090_ANALOGUE_HP_0 164 
#define  WM9090_ANTIPOP2 163 
#define  WM9090_CHARGE_PUMP_1 162 
#define  WM9090_CLASSD3 161 
#define  WM9090_CLOCKING_1 160 
#define  WM9090_DC_SERVO_0 159 
#define  WM9090_DC_SERVO_1 158 
#define  WM9090_DC_SERVO_3 157 
#define  WM9090_DC_SERVO_READBACK_0 156 
#define  WM9090_DC_SERVO_READBACK_1 155 
#define  WM9090_DC_SERVO_READBACK_2 154 
#define  WM9090_IN1_LINE_CONTROL 153 
#define  WM9090_IN1_LINE_INPUT_A_VOLUME 152 
#define  WM9090_IN1_LINE_INPUT_B_VOLUME 151 
#define  WM9090_IN2_LINE_CONTROL 150 
#define  WM9090_IN2_LINE_INPUT_A_VOLUME 149 
#define  WM9090_IN2_LINE_INPUT_B_VOLUME 148 
#define  WM9090_LEFT_OUTPUT_VOLUME 147 
#define  WM9090_OUTPUT_MIXER1 146 
#define  WM9090_OUTPUT_MIXER2 145 
#define  WM9090_OUTPUT_MIXER3 144 
#define  WM9090_OUTPUT_MIXER4 143 
#define  WM9090_POWER_MANAGEMENT_1 142 
#define  WM9090_POWER_MANAGEMENT_2 141 
#define  WM9090_POWER_MANAGEMENT_3 140 
#define  WM9090_RIGHT_OUTPUT_VOLUME 139 
#define  WM9090_SOFTWARE_RESET 138 
#define  WM9090_SPEAKER_MIXER 137 
#define  WM9090_SPEAKER_VOLUME_LEFT 136 
#define  WM9090_SPKMIXL_ATTENUATION 135 
#define  WM9090_SPKOUT_MIXERS 134 
#define  WM9090_WRITE_SEQUENCER_0 133 
#define  WM9090_WRITE_SEQUENCER_1 132 
#define  WM9090_WRITE_SEQUENCER_2 131 
#define  WM9090_WRITE_SEQUENCER_3 130 
#define  WM9090_WRITE_SEQUENCER_4 129 
#define  WM9090_WRITE_SEQUENCER_5 128 

__attribute__((used)) static bool wm9090_readable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM9090_SOFTWARE_RESET:
	case WM9090_POWER_MANAGEMENT_1:
	case WM9090_POWER_MANAGEMENT_2:
	case WM9090_POWER_MANAGEMENT_3:
	case WM9090_CLOCKING_1:
	case WM9090_IN1_LINE_CONTROL:
	case WM9090_IN2_LINE_CONTROL:
	case WM9090_IN1_LINE_INPUT_A_VOLUME:
	case WM9090_IN1_LINE_INPUT_B_VOLUME:
	case WM9090_IN2_LINE_INPUT_A_VOLUME:
	case WM9090_IN2_LINE_INPUT_B_VOLUME:
	case WM9090_LEFT_OUTPUT_VOLUME:
	case WM9090_RIGHT_OUTPUT_VOLUME:
	case WM9090_SPKMIXL_ATTENUATION:
	case WM9090_SPKOUT_MIXERS:
	case WM9090_CLASSD3:
	case WM9090_SPEAKER_VOLUME_LEFT:
	case WM9090_OUTPUT_MIXER1:
	case WM9090_OUTPUT_MIXER2:
	case WM9090_OUTPUT_MIXER3:
	case WM9090_OUTPUT_MIXER4:
	case WM9090_SPEAKER_MIXER:
	case WM9090_ANTIPOP2:
	case WM9090_WRITE_SEQUENCER_0:
	case WM9090_WRITE_SEQUENCER_1:
	case WM9090_WRITE_SEQUENCER_2:
	case WM9090_WRITE_SEQUENCER_3:
	case WM9090_WRITE_SEQUENCER_4:
	case WM9090_WRITE_SEQUENCER_5:
	case WM9090_CHARGE_PUMP_1:
	case WM9090_DC_SERVO_0:
	case WM9090_DC_SERVO_1:
	case WM9090_DC_SERVO_3:
	case WM9090_DC_SERVO_READBACK_0:
	case WM9090_DC_SERVO_READBACK_1:
	case WM9090_DC_SERVO_READBACK_2:
	case WM9090_ANALOGUE_HP_0:
	case WM9090_AGC_CONTROL_0:
	case WM9090_AGC_CONTROL_1:
	case WM9090_AGC_CONTROL_2:
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
          int benchRet = wm9090_readable(dev,reg);
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
          int benchRet = wm9090_readable(dev,reg);
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
