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
#define  DA7219_ACCDET_CONFIG_8 148 
#define  DA7219_ACCDET_IRQ_EVENT_A 147 
#define  DA7219_ACCDET_IRQ_EVENT_B 146 
#define  DA7219_ACCDET_STATUS_A 145 
#define  DA7219_ACCDET_STATUS_B 144 
#define  DA7219_ADC_L_GAIN_STATUS 143 
#define  DA7219_ALC_CTRL1 142 
#define  DA7219_ALC_OFFSET_AUTO_M_L 141 
#define  DA7219_ALC_OFFSET_AUTO_U_L 140 
#define  DA7219_CIF_CTRL 139 
#define  DA7219_DAC_L_GAIN_STATUS 138 
#define  DA7219_DAC_R_GAIN_STATUS 137 
#define  DA7219_HP_L_GAIN_STATUS 136 
#define  DA7219_HP_R_GAIN_STATUS 135 
#define  DA7219_MIC_1_GAIN_STATUS 134 
#define  DA7219_MIXIN_L_GAIN_STATUS 133 
#define  DA7219_PLL_SRM_STS 132 
#define  DA7219_SYSTEM_MODES_INPUT 131 
#define  DA7219_SYSTEM_MODES_OUTPUT 130 
#define  DA7219_SYSTEM_STATUS 129 
#define  DA7219_TONE_GEN_CFG1 128 

__attribute__((used)) static bool da7219_volatile_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case DA7219_MIC_1_GAIN_STATUS:
	case DA7219_MIXIN_L_GAIN_STATUS:
	case DA7219_ADC_L_GAIN_STATUS:
	case DA7219_DAC_L_GAIN_STATUS:
	case DA7219_DAC_R_GAIN_STATUS:
	case DA7219_HP_L_GAIN_STATUS:
	case DA7219_HP_R_GAIN_STATUS:
	case DA7219_CIF_CTRL:
	case DA7219_PLL_SRM_STS:
	case DA7219_ALC_CTRL1:
	case DA7219_SYSTEM_MODES_INPUT:
	case DA7219_SYSTEM_MODES_OUTPUT:
	case DA7219_ALC_OFFSET_AUTO_M_L:
	case DA7219_ALC_OFFSET_AUTO_U_L:
	case DA7219_TONE_GEN_CFG1:
	case DA7219_ACCDET_STATUS_A:
	case DA7219_ACCDET_STATUS_B:
	case DA7219_ACCDET_IRQ_EVENT_A:
	case DA7219_ACCDET_IRQ_EVENT_B:
	case DA7219_ACCDET_CONFIG_8:
	case DA7219_SYSTEM_STATUS:
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
          int benchRet = da7219_volatile_register(dev,reg);
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
          int benchRet = da7219_volatile_register(dev,reg);
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
