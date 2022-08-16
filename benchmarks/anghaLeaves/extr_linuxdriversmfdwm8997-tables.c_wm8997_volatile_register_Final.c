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
#define  ARIZONA_AOD_IRQ1 166 
#define  ARIZONA_AOD_IRQ2 165 
#define  ARIZONA_AOD_IRQ_RAW_STATUS 164 
#define  ARIZONA_AOD_WKUP_AND_TRIG 163 
#define  ARIZONA_ASYNC_SAMPLE_RATE_1_STATUS 162 
#define  ARIZONA_DEVICE_REVISION 161 
#define  ARIZONA_FLL1_NCO_TEST_0 160 
#define  ARIZONA_FLL2_NCO_TEST_0 159 
#define  ARIZONA_FX_CTRL2 158 
#define  ARIZONA_HAPTICS_STATUS 157 
#define  ARIZONA_HEADPHONE_DETECT_2 156 
#define  ARIZONA_HP_CTRL_1L 155 
#define  ARIZONA_HP_CTRL_1R 154 
#define  ARIZONA_INPUT_ENABLES_STATUS 153 
#define  ARIZONA_INTERRUPT_RAW_STATUS_3 152 
#define  ARIZONA_INTERRUPT_RAW_STATUS_4 151 
#define  ARIZONA_INTERRUPT_RAW_STATUS_5 150 
#define  ARIZONA_INTERRUPT_RAW_STATUS_6 149 
#define  ARIZONA_INTERRUPT_RAW_STATUS_7 148 
#define  ARIZONA_INTERRUPT_RAW_STATUS_8 147 
#define  ARIZONA_INTERRUPT_STATUS_1 146 
#define  ARIZONA_INTERRUPT_STATUS_2 145 
#define  ARIZONA_INTERRUPT_STATUS_3 144 
#define  ARIZONA_INTERRUPT_STATUS_4 143 
#define  ARIZONA_INTERRUPT_STATUS_5 142 
#define  ARIZONA_IRQ2_STATUS_1 141 
#define  ARIZONA_IRQ2_STATUS_3 140 
#define  ARIZONA_IRQ2_STATUS_4 139 
#define  ARIZONA_IRQ2_STATUS_5 138 
#define  ARIZONA_IRQ_PIN_STATUS 137 
#define  ARIZONA_MIC_DETECT_3 136 
#define  ARIZONA_OUTPUT_STATUS_1 135 
#define  ARIZONA_RAW_OUTPUT_STATUS_1 134 
#define  ARIZONA_SAMPLE_RATE_1_STATUS 133 
#define  ARIZONA_SAMPLE_RATE_2_STATUS 132 
#define  ARIZONA_SAMPLE_RATE_3_STATUS 131 
#define  ARIZONA_SLIMBUS_RX_PORT_STATUS 130 
#define  ARIZONA_SLIMBUS_TX_PORT_STATUS 129 
#define  ARIZONA_SOFTWARE_RESET 128 

__attribute__((used)) static bool wm8997_volatile_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case ARIZONA_SOFTWARE_RESET:
	case ARIZONA_DEVICE_REVISION:
	case ARIZONA_HAPTICS_STATUS:
	case ARIZONA_SAMPLE_RATE_1_STATUS:
	case ARIZONA_SAMPLE_RATE_2_STATUS:
	case ARIZONA_SAMPLE_RATE_3_STATUS:
	case ARIZONA_ASYNC_SAMPLE_RATE_1_STATUS:
	case ARIZONA_FLL1_NCO_TEST_0:
	case ARIZONA_FLL2_NCO_TEST_0:
	case ARIZONA_MIC_DETECT_3:
	case ARIZONA_HP_CTRL_1L:
	case ARIZONA_HP_CTRL_1R:
	case ARIZONA_HEADPHONE_DETECT_2:
	case ARIZONA_INPUT_ENABLES_STATUS:
	case ARIZONA_OUTPUT_STATUS_1:
	case ARIZONA_RAW_OUTPUT_STATUS_1:
	case ARIZONA_SLIMBUS_RX_PORT_STATUS:
	case ARIZONA_SLIMBUS_TX_PORT_STATUS:
	case ARIZONA_INTERRUPT_STATUS_1:
	case ARIZONA_INTERRUPT_STATUS_2:
	case ARIZONA_INTERRUPT_STATUS_3:
	case ARIZONA_INTERRUPT_STATUS_4:
	case ARIZONA_INTERRUPT_STATUS_5:
	case ARIZONA_IRQ2_STATUS_1:
	case ARIZONA_IRQ2_STATUS_3:
	case ARIZONA_IRQ2_STATUS_4:
	case ARIZONA_IRQ2_STATUS_5:
	case ARIZONA_INTERRUPT_RAW_STATUS_3:
	case ARIZONA_INTERRUPT_RAW_STATUS_4:
	case ARIZONA_INTERRUPT_RAW_STATUS_5:
	case ARIZONA_INTERRUPT_RAW_STATUS_6:
	case ARIZONA_INTERRUPT_RAW_STATUS_7:
	case ARIZONA_INTERRUPT_RAW_STATUS_8:
	case ARIZONA_IRQ_PIN_STATUS:
	case ARIZONA_AOD_WKUP_AND_TRIG:
	case ARIZONA_AOD_IRQ1:
	case ARIZONA_AOD_IRQ2:
	case ARIZONA_AOD_IRQ_RAW_STATUS:
	case ARIZONA_FX_CTRL2:
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
          int benchRet = wm8997_volatile_register(dev,reg);
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
          int benchRet = wm8997_volatile_register(dev,reg);
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
