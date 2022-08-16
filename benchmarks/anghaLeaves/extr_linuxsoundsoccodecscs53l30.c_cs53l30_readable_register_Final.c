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
#define  CS53L30_ADC1A_AFE_CTL 174 
#define  CS53L30_ADC1A_DIG_VOL 173 
#define  CS53L30_ADC1B_AFE_CTL 172 
#define  CS53L30_ADC1B_DIG_VOL 171 
#define  CS53L30_ADC1_CTL3 170 
#define  CS53L30_ADC1_NG_CTL 169 
#define  CS53L30_ADC2A_AFE_CTL 168 
#define  CS53L30_ADC2A_DIG_VOL 167 
#define  CS53L30_ADC2B_AFE_CTL 166 
#define  CS53L30_ADC2B_DIG_VOL 165 
#define  CS53L30_ADC2_CTL3 164 
#define  CS53L30_ADC2_NG_CTL 163 
#define  CS53L30_ADCDMIC1_CTL1 162 
#define  CS53L30_ADCDMIC1_CTL2 161 
#define  CS53L30_ADCDMIC2_CTL1 160 
#define  CS53L30_ADCDMIC2_CTL2 159 
#define  CS53L30_ASPCFG_CTL 158 
#define  CS53L30_ASP_CTL1 157 
#define  CS53L30_ASP_CTL2 156 
#define  CS53L30_ASP_TDMTX_CTL1 155 
#define  CS53L30_ASP_TDMTX_CTL2 154 
#define  CS53L30_ASP_TDMTX_CTL3 153 
#define  CS53L30_ASP_TDMTX_CTL4 152 
#define  CS53L30_ASP_TDMTX_EN1 151 
#define  CS53L30_ASP_TDMTX_EN2 150 
#define  CS53L30_ASP_TDMTX_EN3 149 
#define  CS53L30_ASP_TDMTX_EN4 148 
#define  CS53L30_ASP_TDMTX_EN5 147 
#define  CS53L30_ASP_TDMTX_EN6 146 
#define  CS53L30_DEVID_AB 145 
#define  CS53L30_DEVID_CD 144 
#define  CS53L30_DEVID_E 143 
#define  CS53L30_DMIC1_STR_CTL 142 
#define  CS53L30_DMIC2_STR_CTL 141 
#define  CS53L30_INBIAS_CTL1 140 
#define  CS53L30_INBIAS_CTL2 139 
#define  CS53L30_INT_MASK 138 
#define  CS53L30_INT_SR_CTL 137 
#define  CS53L30_LRCK_CTL1 136 
#define  CS53L30_LRCK_CTL2 135 
#define  CS53L30_MCLKCTL 134 
#define  CS53L30_MICBIAS_CTL 133 
#define  CS53L30_MUTEP_CTL1 132 
#define  CS53L30_MUTEP_CTL2 131 
#define  CS53L30_PWRCTL 130 
#define  CS53L30_REVID 129 
#define  CS53L30_SFT_RAMP 128 

__attribute__((used)) static bool cs53l30_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case CS53L30_DEVID_AB:
	case CS53L30_DEVID_CD:
	case CS53L30_DEVID_E:
	case CS53L30_REVID:
	case CS53L30_PWRCTL:
	case CS53L30_MCLKCTL:
	case CS53L30_INT_SR_CTL:
	case CS53L30_MICBIAS_CTL:
	case CS53L30_ASPCFG_CTL:
	case CS53L30_ASP_CTL1:
	case CS53L30_ASP_TDMTX_CTL1:
	case CS53L30_ASP_TDMTX_CTL2:
	case CS53L30_ASP_TDMTX_CTL3:
	case CS53L30_ASP_TDMTX_CTL4:
	case CS53L30_ASP_TDMTX_EN1:
	case CS53L30_ASP_TDMTX_EN2:
	case CS53L30_ASP_TDMTX_EN3:
	case CS53L30_ASP_TDMTX_EN4:
	case CS53L30_ASP_TDMTX_EN5:
	case CS53L30_ASP_TDMTX_EN6:
	case CS53L30_ASP_CTL2:
	case CS53L30_SFT_RAMP:
	case CS53L30_LRCK_CTL1:
	case CS53L30_LRCK_CTL2:
	case CS53L30_MUTEP_CTL1:
	case CS53L30_MUTEP_CTL2:
	case CS53L30_INBIAS_CTL1:
	case CS53L30_INBIAS_CTL2:
	case CS53L30_DMIC1_STR_CTL:
	case CS53L30_DMIC2_STR_CTL:
	case CS53L30_ADCDMIC1_CTL1:
	case CS53L30_ADCDMIC1_CTL2:
	case CS53L30_ADC1_CTL3:
	case CS53L30_ADC1_NG_CTL:
	case CS53L30_ADC1A_AFE_CTL:
	case CS53L30_ADC1B_AFE_CTL:
	case CS53L30_ADC1A_DIG_VOL:
	case CS53L30_ADC1B_DIG_VOL:
	case CS53L30_ADCDMIC2_CTL1:
	case CS53L30_ADCDMIC2_CTL2:
	case CS53L30_ADC2_CTL3:
	case CS53L30_ADC2_NG_CTL:
	case CS53L30_ADC2A_AFE_CTL:
	case CS53L30_ADC2B_AFE_CTL:
	case CS53L30_ADC2A_DIG_VOL:
	case CS53L30_ADC2B_DIG_VOL:
	case CS53L30_INT_MASK:
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
          int benchRet = cs53l30_readable_register(dev,reg);
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
          int benchRet = cs53l30_readable_register(dev,reg);
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
