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
#define  WM9081_ANALOGUE_LINEOUT 182 
#define  WM9081_ANALOGUE_MIXER 181 
#define  WM9081_ANALOGUE_SPEAKER_1 180 
#define  WM9081_ANALOGUE_SPEAKER_2 179 
#define  WM9081_ANALOGUE_SPEAKER_PGA 178 
#define  WM9081_ANTI_POP_CONTROL 177 
#define  WM9081_AUDIO_INTERFACE_1 176 
#define  WM9081_AUDIO_INTERFACE_2 175 
#define  WM9081_AUDIO_INTERFACE_3 174 
#define  WM9081_AUDIO_INTERFACE_4 173 
#define  WM9081_BIAS_CONTROL_1 172 
#define  WM9081_CLOCK_CONTROL_1 171 
#define  WM9081_CLOCK_CONTROL_2 170 
#define  WM9081_CLOCK_CONTROL_3 169 
#define  WM9081_DAC_DIGITAL_1 168 
#define  WM9081_DAC_DIGITAL_2 167 
#define  WM9081_DRC_1 166 
#define  WM9081_DRC_2 165 
#define  WM9081_DRC_3 164 
#define  WM9081_DRC_4 163 
#define  WM9081_EQ_1 162 
#define  WM9081_EQ_10 161 
#define  WM9081_EQ_11 160 
#define  WM9081_EQ_12 159 
#define  WM9081_EQ_13 158 
#define  WM9081_EQ_14 157 
#define  WM9081_EQ_15 156 
#define  WM9081_EQ_16 155 
#define  WM9081_EQ_17 154 
#define  WM9081_EQ_18 153 
#define  WM9081_EQ_19 152 
#define  WM9081_EQ_2 151 
#define  WM9081_EQ_20 150 
#define  WM9081_EQ_3 149 
#define  WM9081_EQ_4 148 
#define  WM9081_EQ_5 147 
#define  WM9081_EQ_6 146 
#define  WM9081_EQ_7 145 
#define  WM9081_EQ_8 144 
#define  WM9081_EQ_9 143 
#define  WM9081_FLL_CONTROL_1 142 
#define  WM9081_FLL_CONTROL_2 141 
#define  WM9081_FLL_CONTROL_3 140 
#define  WM9081_FLL_CONTROL_4 139 
#define  WM9081_FLL_CONTROL_5 138 
#define  WM9081_INTERRUPT_CONTROL 137 
#define  WM9081_INTERRUPT_POLARITY 136 
#define  WM9081_INTERRUPT_STATUS 135 
#define  WM9081_INTERRUPT_STATUS_MASK 134 
#define  WM9081_MW_SLAVE_1 133 
#define  WM9081_POWER_MANAGEMENT 132 
#define  WM9081_SOFTWARE_RESET 131 
#define  WM9081_VMID_CONTROL 130 
#define  WM9081_WRITE_SEQUENCER_1 129 
#define  WM9081_WRITE_SEQUENCER_2 128 

__attribute__((used)) static bool wm9081_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM9081_SOFTWARE_RESET:
	case WM9081_ANALOGUE_LINEOUT:
	case WM9081_ANALOGUE_SPEAKER_PGA:
	case WM9081_VMID_CONTROL:
	case WM9081_BIAS_CONTROL_1:
	case WM9081_ANALOGUE_MIXER:
	case WM9081_ANTI_POP_CONTROL:
	case WM9081_ANALOGUE_SPEAKER_1:
	case WM9081_ANALOGUE_SPEAKER_2:
	case WM9081_POWER_MANAGEMENT:
	case WM9081_CLOCK_CONTROL_1:
	case WM9081_CLOCK_CONTROL_2:
	case WM9081_CLOCK_CONTROL_3:
	case WM9081_FLL_CONTROL_1:
	case WM9081_FLL_CONTROL_2:
	case WM9081_FLL_CONTROL_3:
	case WM9081_FLL_CONTROL_4:
	case WM9081_FLL_CONTROL_5:
	case WM9081_AUDIO_INTERFACE_1:
	case WM9081_AUDIO_INTERFACE_2:
	case WM9081_AUDIO_INTERFACE_3:
	case WM9081_AUDIO_INTERFACE_4:
	case WM9081_INTERRUPT_STATUS:
	case WM9081_INTERRUPT_STATUS_MASK:
	case WM9081_INTERRUPT_POLARITY:
	case WM9081_INTERRUPT_CONTROL:
	case WM9081_DAC_DIGITAL_1:
	case WM9081_DAC_DIGITAL_2:
	case WM9081_DRC_1:
	case WM9081_DRC_2:
	case WM9081_DRC_3:
	case WM9081_DRC_4:
	case WM9081_WRITE_SEQUENCER_1:
	case WM9081_WRITE_SEQUENCER_2:
	case WM9081_MW_SLAVE_1:
	case WM9081_EQ_1:
	case WM9081_EQ_2:
	case WM9081_EQ_3:
	case WM9081_EQ_4:
	case WM9081_EQ_5:
	case WM9081_EQ_6:
	case WM9081_EQ_7:
	case WM9081_EQ_8:
	case WM9081_EQ_9:
	case WM9081_EQ_10:
	case WM9081_EQ_11:
	case WM9081_EQ_12:
	case WM9081_EQ_13:
	case WM9081_EQ_14:
	case WM9081_EQ_15:
	case WM9081_EQ_16:
	case WM9081_EQ_17:
	case WM9081_EQ_18:
	case WM9081_EQ_19:
	case WM9081_EQ_20:
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
          int benchRet = wm9081_readable_register(dev,reg);
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
