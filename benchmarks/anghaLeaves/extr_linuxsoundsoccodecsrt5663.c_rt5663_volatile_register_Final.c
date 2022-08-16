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
#define  RT5663_ADC_EQ_1 173 
#define  RT5663_AD_DA_MIXER 172 
#define  RT5663_ANA_JD 171 
#define  RT5663_ASRC_11_2 170 
#define  RT5663_EM_JACK_TYPE_1 169 
#define  RT5663_EM_JACK_TYPE_2 168 
#define  RT5663_EM_JACK_TYPE_3 167 
#define  RT5663_FRAC_DIV_2 166 
#define  RT5663_GPIO_STA1 165 
#define  RT5663_HP_CALIB_1_1 164 
#define  RT5663_HP_CALIB_9 163 
#define  RT5663_HP_CALIB_ST1 162 
#define  RT5663_HP_CALIB_ST2 161 
#define  RT5663_HP_CALIB_ST3 160 
#define  RT5663_HP_CALIB_ST4 159 
#define  RT5663_HP_CALIB_ST5 158 
#define  RT5663_HP_CALIB_ST6 157 
#define  RT5663_HP_CALIB_ST7 156 
#define  RT5663_HP_CALIB_ST8 155 
#define  RT5663_HP_CALIB_ST9 154 
#define  RT5663_HP_IMP_GAIN_2 153 
#define  RT5663_HP_IMP_SEN_1 152 
#define  RT5663_HP_IMP_SEN_3 151 
#define  RT5663_HP_IMP_SEN_4 150 
#define  RT5663_HP_IMP_SEN_5 149 
#define  RT5663_IL_CMD_1 148 
#define  RT5663_IL_CMD_5 147 
#define  RT5663_IL_CMD_PWRSAV1 146 
#define  RT5663_INT_ST_1 145 
#define  RT5663_INT_ST_2 144 
#define  RT5663_JD_CTRL2 143 
#define  RT5663_MICBIAS_1 142 
#define  RT5663_MIC_DECRO_1 141 
#define  RT5663_MIC_DECRO_4 140 
#define  RT5663_PLL_INT_REG 139 
#define  RT5663_RESET 138 
#define  RT5663_SIL_DET_CTL 137 
#define  RT5663_SIN_GEN_1 136 
#define  RT5663_SOFT_RAMP 135 
#define  RT5663_STO_DRE_1 134 
#define  RT5663_STO_DRE_5 133 
#define  RT5663_STO_DRE_6 132 
#define  RT5663_STO_DRE_7 131 
#define  RT5663_VENDOR_ID 130 
#define  RT5663_VENDOR_ID_1 129 
#define  RT5663_VENDOR_ID_2 128 

__attribute__((used)) static bool rt5663_volatile_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case RT5663_RESET:
	case RT5663_SIL_DET_CTL:
	case RT5663_HP_IMP_GAIN_2:
	case RT5663_AD_DA_MIXER:
	case RT5663_FRAC_DIV_2:
	case RT5663_MICBIAS_1:
	case RT5663_ASRC_11_2:
	case RT5663_ADC_EQ_1:
	case RT5663_INT_ST_1:
	case RT5663_INT_ST_2:
	case RT5663_GPIO_STA1:
	case RT5663_SIN_GEN_1:
	case RT5663_IL_CMD_1:
	case RT5663_IL_CMD_5:
	case RT5663_IL_CMD_PWRSAV1:
	case RT5663_EM_JACK_TYPE_1:
	case RT5663_EM_JACK_TYPE_2:
	case RT5663_EM_JACK_TYPE_3:
	case RT5663_JD_CTRL2:
	case RT5663_VENDOR_ID:
	case RT5663_VENDOR_ID_1:
	case RT5663_VENDOR_ID_2:
	case RT5663_PLL_INT_REG:
	case RT5663_SOFT_RAMP:
	case RT5663_STO_DRE_1:
	case RT5663_STO_DRE_5:
	case RT5663_STO_DRE_6:
	case RT5663_STO_DRE_7:
	case RT5663_MIC_DECRO_1:
	case RT5663_MIC_DECRO_4:
	case RT5663_HP_IMP_SEN_1:
	case RT5663_HP_IMP_SEN_3:
	case RT5663_HP_IMP_SEN_4:
	case RT5663_HP_IMP_SEN_5:
	case RT5663_HP_CALIB_1_1:
	case RT5663_HP_CALIB_9:
	case RT5663_HP_CALIB_ST1:
	case RT5663_HP_CALIB_ST2:
	case RT5663_HP_CALIB_ST3:
	case RT5663_HP_CALIB_ST4:
	case RT5663_HP_CALIB_ST5:
	case RT5663_HP_CALIB_ST6:
	case RT5663_HP_CALIB_ST7:
	case RT5663_HP_CALIB_ST8:
	case RT5663_HP_CALIB_ST9:
	case RT5663_ANA_JD:
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
          int benchRet = rt5663_volatile_register(dev,reg);
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
          int benchRet = rt5663_volatile_register(dev,reg);
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
