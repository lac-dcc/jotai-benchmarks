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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
#define  RT5659_4BTN_IL_CMD_1 221 
#define  RT5659_ADC_EQ_CTRL_1 220 
#define  RT5659_AJD1_CTRL 219 
#define  RT5659_AJD2_AJD3_CTRL 218 
#define  RT5659_ALC_PGA_STA_1 217 
#define  RT5659_ALC_PGA_STA_2 216 
#define  RT5659_ALC_PGA_STA_3 215 
#define  RT5659_ASRC_11 214 
#define  RT5659_CLK_DET 213 
#define  RT5659_DAC2_DIG_VOL 212 
#define  RT5659_DAC_EQ_CTRL_1 211 
#define  RT5659_DEVICE_ID 210 
#define  RT5659_DRC1_PRIV_1 209 
#define  RT5659_DRC1_PRIV_4 208 
#define  RT5659_DRC1_PRIV_5 207 
#define  RT5659_DRC1_PRIV_6 206 
#define  RT5659_DRC1_PRIV_7 205 
#define  RT5659_DRC2_PRIV_1 204 
#define  RT5659_DRC2_PRIV_4 203 
#define  RT5659_DRC2_PRIV_5 202 
#define  RT5659_DRC2_PRIV_6 201 
#define  RT5659_DRC2_PRIV_7 200 
#define  RT5659_EJD_CTRL_2 199 
#define  RT5659_GPIO_STA 198 
#define  RT5659_HAPTIC_GEN_CTRL_1 197 
#define  RT5659_HAPTIC_GEN_CTRL_3 196 
#define  RT5659_HAPTIC_LPF_CTRL_3 195 
#define  RT5659_HP_CALIB_CTRL_1 194 
#define  RT5659_HP_CALIB_CTRL_9 193 
#define  RT5659_HP_CALIB_STA_1 192 
#define  RT5659_HP_CALIB_STA_2 191 
#define  RT5659_HP_CALIB_STA_3 190 
#define  RT5659_HP_CALIB_STA_4 189 
#define  RT5659_HP_CALIB_STA_5 188 
#define  RT5659_HP_CALIB_STA_6 187 
#define  RT5659_HP_CALIB_STA_7 186 
#define  RT5659_HP_CALIB_STA_8 185 
#define  RT5659_HP_CALIB_STA_9 184 
#define  RT5659_HP_IMP_GAIN_2 183 
#define  RT5659_HP_IMP_SENS_CTRL_1 182 
#define  RT5659_HP_IMP_SENS_CTRL_3 181 
#define  RT5659_HP_IMP_SENS_CTRL_4 180 
#define  RT5659_IL_CMD_1 179 
#define  RT5659_INT_ST_1 178 
#define  RT5659_INT_ST_2 177 
#define  RT5659_JD_CTRL_3 176 
#define  RT5659_MEMORY_TEST 175 
#define  RT5659_MICBIAS_1 174 
#define  RT5659_MONO_AMP_CALIB_CTRL_1 173 
#define  RT5659_MONO_AMP_CALIB_CTRL_3 172 
#define  RT5659_MONO_AMP_CALIB_STA_1 171 
#define  RT5659_MONO_AMP_CALIB_STA_2 170 
#define  RT5659_MONO_AMP_CALIB_STA_3 169 
#define  RT5659_MONO_AMP_CALIB_STA_4 168 
#define  RT5659_MONO_NG2_CTRL_1 167 
#define  RT5659_MONO_NG2_CTRL_5 166 
#define  RT5659_MONO_NG2_CTRL_6 165 
#define  RT5659_PDM_DATA_CTRL_1 164 
#define  RT5659_PDM_DATA_CTRL_4 163 
#define  RT5659_PDM_OUT_CTRL 162 
#define  RT5659_PSV_IL_CMD_1 161 
#define  RT5659_PURE_DC_DET_CTRL_1 160 
#define  RT5659_PURE_DC_DET_CTRL_2 159 
#define  RT5659_RESET 158 
#define  RT5659_SILENCE_CTRL 157 
#define  RT5659_SINE_GEN_CTRL_1 156 
#define  RT5659_SOFT_RAMP_DEPOP_DAC_CLK_CTRL 155 
#define  RT5659_SPK_DC_CAILB_CTRL_1 154 
#define  RT5659_SPK_DC_CAILB_STA_1 153 
#define  RT5659_SPK_DC_CAILB_STA_10 152 
#define  RT5659_SPK_DC_CAILB_STA_2 151 
#define  RT5659_SPK_DC_CAILB_STA_3 150 
#define  RT5659_SPK_DC_CAILB_STA_4 149 
#define  RT5659_SPK_DC_CAILB_STA_5 148 
#define  RT5659_SPK_DC_CAILB_STA_6 147 
#define  RT5659_SPK_DC_CAILB_STA_7 146 
#define  RT5659_SPK_DC_CAILB_STA_8 145 
#define  RT5659_SPK_DC_CAILB_STA_9 144 
#define  RT5659_SPK_DC_DET_CTRL_1 143 
#define  RT5659_SPK_PWR_LMT_STA_1 142 
#define  RT5659_SPK_PWR_LMT_STA_2 141 
#define  RT5659_SPK_PWR_LMT_STA_3 140 
#define  RT5659_SPK_PWR_LMT_STA_4 139 
#define  RT5659_SPK_PWR_LMT_STA_5 138 
#define  RT5659_SPK_PWR_LMT_STA_6 137 
#define  RT5659_SPK_VDD_STA_1 136 
#define  RT5659_SPK_VDD_STA_2 135 
#define  RT5659_STO_NG2_CTRL_1 134 
#define  RT5659_STO_NG2_CTRL_5 133 
#define  RT5659_STO_NG2_CTRL_6 132 
#define  RT5659_STO_NG2_CTRL_7 131 
#define  RT5659_VENDOR_ID 130 
#define  RT5659_VENDOR_ID_1 129 
#define  RT5659_VOL_TEST 128 

__attribute__((used)) static bool rt5659_volatile_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case RT5659_RESET:
	case RT5659_EJD_CTRL_2:
	case RT5659_SILENCE_CTRL:
	case RT5659_DAC2_DIG_VOL:
	case RT5659_HP_IMP_GAIN_2:
	case RT5659_PDM_OUT_CTRL:
	case RT5659_PDM_DATA_CTRL_1:
	case RT5659_PDM_DATA_CTRL_4:
	case RT5659_HAPTIC_GEN_CTRL_1:
	case RT5659_HAPTIC_GEN_CTRL_3:
	case RT5659_HAPTIC_LPF_CTRL_3:
	case RT5659_CLK_DET:
	case RT5659_MICBIAS_1:
	case RT5659_ASRC_11:
	case RT5659_ADC_EQ_CTRL_1:
	case RT5659_DAC_EQ_CTRL_1:
	case RT5659_INT_ST_1:
	case RT5659_INT_ST_2:
	case RT5659_GPIO_STA:
	case RT5659_SINE_GEN_CTRL_1:
	case RT5659_IL_CMD_1:
	case RT5659_4BTN_IL_CMD_1:
	case RT5659_PSV_IL_CMD_1:
	case RT5659_AJD1_CTRL:
	case RT5659_AJD2_AJD3_CTRL:
	case RT5659_JD_CTRL_3:
	case RT5659_VENDOR_ID:
	case RT5659_VENDOR_ID_1:
	case RT5659_DEVICE_ID:
	case RT5659_MEMORY_TEST:
	case RT5659_SOFT_RAMP_DEPOP_DAC_CLK_CTRL:
	case RT5659_VOL_TEST:
	case RT5659_STO_NG2_CTRL_1:
	case RT5659_STO_NG2_CTRL_5:
	case RT5659_STO_NG2_CTRL_6:
	case RT5659_STO_NG2_CTRL_7:
	case RT5659_MONO_NG2_CTRL_1:
	case RT5659_MONO_NG2_CTRL_5:
	case RT5659_MONO_NG2_CTRL_6:
	case RT5659_HP_IMP_SENS_CTRL_1:
	case RT5659_HP_IMP_SENS_CTRL_3:
	case RT5659_HP_IMP_SENS_CTRL_4:
	case RT5659_HP_CALIB_CTRL_1:
	case RT5659_HP_CALIB_CTRL_9:
	case RT5659_HP_CALIB_STA_1:
	case RT5659_HP_CALIB_STA_2:
	case RT5659_HP_CALIB_STA_3:
	case RT5659_HP_CALIB_STA_4:
	case RT5659_HP_CALIB_STA_5:
	case RT5659_HP_CALIB_STA_6:
	case RT5659_HP_CALIB_STA_7:
	case RT5659_HP_CALIB_STA_8:
	case RT5659_HP_CALIB_STA_9:
	case RT5659_MONO_AMP_CALIB_CTRL_1:
	case RT5659_MONO_AMP_CALIB_CTRL_3:
	case RT5659_MONO_AMP_CALIB_STA_1:
	case RT5659_MONO_AMP_CALIB_STA_2:
	case RT5659_MONO_AMP_CALIB_STA_3:
	case RT5659_MONO_AMP_CALIB_STA_4:
	case RT5659_SPK_PWR_LMT_STA_1:
	case RT5659_SPK_PWR_LMT_STA_2:
	case RT5659_SPK_PWR_LMT_STA_3:
	case RT5659_SPK_PWR_LMT_STA_4:
	case RT5659_SPK_PWR_LMT_STA_5:
	case RT5659_SPK_PWR_LMT_STA_6:
	case RT5659_SPK_DC_CAILB_CTRL_1:
	case RT5659_SPK_DC_CAILB_STA_1:
	case RT5659_SPK_DC_CAILB_STA_2:
	case RT5659_SPK_DC_CAILB_STA_3:
	case RT5659_SPK_DC_CAILB_STA_4:
	case RT5659_SPK_DC_CAILB_STA_5:
	case RT5659_SPK_DC_CAILB_STA_6:
	case RT5659_SPK_DC_CAILB_STA_7:
	case RT5659_SPK_DC_CAILB_STA_8:
	case RT5659_SPK_DC_CAILB_STA_9:
	case RT5659_SPK_DC_CAILB_STA_10:
	case RT5659_SPK_VDD_STA_1:
	case RT5659_SPK_VDD_STA_2:
	case RT5659_SPK_DC_DET_CTRL_1:
	case RT5659_PURE_DC_DET_CTRL_1:
	case RT5659_PURE_DC_DET_CTRL_2:
	case RT5659_DRC1_PRIV_1:
	case RT5659_DRC1_PRIV_4:
	case RT5659_DRC1_PRIV_5:
	case RT5659_DRC1_PRIV_6:
	case RT5659_DRC1_PRIV_7:
	case RT5659_DRC2_PRIV_1:
	case RT5659_DRC2_PRIV_4:
	case RT5659_DRC2_PRIV_5:
	case RT5659_DRC2_PRIV_6:
	case RT5659_DRC2_PRIV_7:
	case RT5659_ALC_PGA_STA_1:
	case RT5659_ALC_PGA_STA_2:
	case RT5659_ALC_PGA_STA_3:
		return true;
	default:
		return false;
	}
}

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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int reg = 100;
        
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rt5659_volatile_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int reg = 255;
        
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rt5659_volatile_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int reg = 10;
        
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rt5659_volatile_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          unsigned int reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = rt5659_volatile_register(dev,reg);
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
