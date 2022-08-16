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
#define  CS42L42_ADC_CTL 277 
#define  CS42L42_ADC_DISABLE_MUTE 276 
#define  CS42L42_ADC_OVFL_INT_MASK 275 
#define  CS42L42_ADC_OVFL_STATUS 274 
#define  CS42L42_ADC_VOLUME 273 
#define  CS42L42_ADC_WNF_HPF_CTL 272 
#define  CS42L42_ASP_CLK_CFG 271 
#define  CS42L42_ASP_FRM_CFG 270 
#define  CS42L42_ASP_RX_DAI0_CH1_AP_RES 269 
#define  CS42L42_ASP_RX_DAI0_CH1_BIT_LSB 268 
#define  CS42L42_ASP_RX_DAI0_CH1_BIT_MSB 267 
#define  CS42L42_ASP_RX_DAI0_CH2_AP_RES 266 
#define  CS42L42_ASP_RX_DAI0_CH2_BIT_LSB 265 
#define  CS42L42_ASP_RX_DAI0_CH2_BIT_MSB 264 
#define  CS42L42_ASP_RX_DAI0_CH3_AP_RES 263 
#define  CS42L42_ASP_RX_DAI0_CH3_BIT_LSB 262 
#define  CS42L42_ASP_RX_DAI0_CH3_BIT_MSB 261 
#define  CS42L42_ASP_RX_DAI0_CH4_AP_RES 260 
#define  CS42L42_ASP_RX_DAI0_CH4_BIT_LSB 259 
#define  CS42L42_ASP_RX_DAI0_CH4_BIT_MSB 258 
#define  CS42L42_ASP_RX_DAI0_EN 257 
#define  CS42L42_ASP_RX_DAI1_CH1_AP_RES 256 
#define  CS42L42_ASP_RX_DAI1_CH1_BIT_LSB 255 
#define  CS42L42_ASP_RX_DAI1_CH1_BIT_MSB 254 
#define  CS42L42_ASP_RX_DAI1_CH2_AP_RES 253 
#define  CS42L42_ASP_RX_DAI1_CH2_BIT_LSB 252 
#define  CS42L42_ASP_RX_DAI1_CH2_BIT_MSB 251 
#define  CS42L42_ASP_RX_INT_MASK 250 
#define  CS42L42_ASP_RX_STATUS 249 
#define  CS42L42_ASP_TX_CH1_BIT_LSB 248 
#define  CS42L42_ASP_TX_CH1_BIT_MSB 247 
#define  CS42L42_ASP_TX_CH2_BIT_LSB 246 
#define  CS42L42_ASP_TX_CH2_BIT_MSB 245 
#define  CS42L42_ASP_TX_CH_AP_RES 244 
#define  CS42L42_ASP_TX_CH_EN 243 
#define  CS42L42_ASP_TX_HIZ_DLY_CFG 242 
#define  CS42L42_ASP_TX_INT_MASK 241 
#define  CS42L42_ASP_TX_STATUS 240 
#define  CS42L42_ASP_TX_SZ_EN 239 
#define  CS42L42_CLASSH_CTL 238 
#define  CS42L42_CODEC_INT_MASK 237 
#define  CS42L42_CODEC_STATUS 236 
#define  CS42L42_DAC_CTL1 235 
#define  CS42L42_DAC_CTL2 234 
#define  CS42L42_DET_INT1_MASK 233 
#define  CS42L42_DET_INT2_MASK 232 
#define  CS42L42_DET_INT_STATUS1 231 
#define  CS42L42_DET_INT_STATUS2 230 
#define  CS42L42_DET_STATUS1 229 
#define  CS42L42_DET_STATUS2 228 
#define  CS42L42_DEVID_AB 227 
#define  CS42L42_DEVID_CD 226 
#define  CS42L42_DEVID_E 225 
#define  CS42L42_EQ_COEF_IN0 224 
#define  CS42L42_EQ_COEF_IN1 223 
#define  CS42L42_EQ_COEF_IN2 222 
#define  CS42L42_EQ_COEF_IN3 221 
#define  CS42L42_EQ_COEF_OUT0 220 
#define  CS42L42_EQ_COEF_OUT1 219 
#define  CS42L42_EQ_COEF_OUT2 218 
#define  CS42L42_EQ_COEF_OUT3 217 
#define  CS42L42_EQ_COEF_RW 216 
#define  CS42L42_EQ_INIT_STAT 215 
#define  CS42L42_EQ_MUTE_CTL 214 
#define  CS42L42_EQ_START_FILT 213 
#define  CS42L42_FABID 212 
#define  CS42L42_FRZ_CTL 211 
#define  CS42L42_FSYNC_PW_LOWER 210 
#define  CS42L42_FSYNC_PW_UPPER 209 
#define  CS42L42_FSYNC_P_LOWER 208 
#define  CS42L42_FSYNC_P_UPPER 207 
#define  CS42L42_FS_RATE_EN 206 
#define  CS42L42_HP_CTL 205 
#define  CS42L42_HSBIAS_SC_AUTOCTL 204 
#define  CS42L42_HSDET_CTL1 203 
#define  CS42L42_HSDET_CTL2 202 
#define  CS42L42_HS_BIAS_CTL 201 
#define  CS42L42_HS_CLAMP_DISABLE 200 
#define  CS42L42_HS_DET_STATUS 199 
#define  CS42L42_HS_SWITCH_CTL 198 
#define  CS42L42_I2C_DEBOUNCE 197 
#define  CS42L42_I2C_STRETCH 196 
#define  CS42L42_I2C_TIMEOUT 195 
#define  CS42L42_IN_ASRC_CLK 194 
#define  CS42L42_LOAD_DET_DONE 193 
#define  CS42L42_LOAD_DET_EN 192 
#define  CS42L42_LOAD_DET_RCSTAT 191 
#define  CS42L42_MCLK_CTL 190 
#define  CS42L42_MCLK_SRC_SEL 189 
#define  CS42L42_MCLK_STATUS 188 
#define  CS42L42_MIC_DET_CTL1 187 
#define  CS42L42_MIC_DET_CTL2 186 
#define  CS42L42_MISC_DET_CTL 185 
#define  CS42L42_MIXER_ADC_VOL 184 
#define  CS42L42_MIXER_CHA_VOL 183 
#define  CS42L42_MIXER_CHB_VOL 182 
#define  CS42L42_MIXER_INT_MASK 181 
#define  CS42L42_MIXER_STATUS 180 
#define  CS42L42_OSC_SWITCH 179 
#define  CS42L42_OSC_SWITCH_STATUS 178 
#define  CS42L42_OUT_ASRC_CLK 177 
#define  CS42L42_PAGE_REGISTER 176 
#define  CS42L42_PLL_CAL_RATIO 175 
#define  CS42L42_PLL_CTL1 174 
#define  CS42L42_PLL_CTL3 173 
#define  CS42L42_PLL_CTL4 172 
#define  CS42L42_PLL_DIV_CFG1 171 
#define  CS42L42_PLL_DIV_FRAC0 170 
#define  CS42L42_PLL_DIV_FRAC1 169 
#define  CS42L42_PLL_DIV_FRAC2 168 
#define  CS42L42_PLL_DIV_INT 167 
#define  CS42L42_PLL_LOCK_INT_MASK 166 
#define  CS42L42_PLL_LOCK_STATUS 165 
#define  CS42L42_PWR_CTL1 164 
#define  CS42L42_PWR_CTL2 163 
#define  CS42L42_PWR_CTL3 162 
#define  CS42L42_REVID 161 
#define  CS42L42_RSENSE_CTL1 160 
#define  CS42L42_RSENSE_CTL2 159 
#define  CS42L42_RSENSE_CTL3 158 
#define  CS42L42_SFTRAMP_RATE 157 
#define  CS42L42_SPDIF_CLK_CFG 156 
#define  CS42L42_SPDIF_CTL1 155 
#define  CS42L42_SPDIF_CTL2 154 
#define  CS42L42_SPDIF_CTL3 153 
#define  CS42L42_SPDIF_CTL4 152 
#define  CS42L42_SPDIF_SW_CTL1 151 
#define  CS42L42_SP_RX_CH_SEL 150 
#define  CS42L42_SP_RX_FS 149 
#define  CS42L42_SP_RX_ISOC_CTL 148 
#define  CS42L42_SP_TX_FS 147 
#define  CS42L42_SP_TX_ISOC_CTL 146 
#define  CS42L42_SRCPL_INT_MASK 145 
#define  CS42L42_SRCPL_INT_STATUS 144 
#define  CS42L42_SRC_CTL 143 
#define  CS42L42_SRC_INT_MASK 142 
#define  CS42L42_SRC_SDIN_FS 141 
#define  CS42L42_SRC_SDOUT_FS 140 
#define  CS42L42_SRC_STATUS 139 
#define  CS42L42_SUB_REVID 138 
#define  CS42L42_TIPSENSE_CTL 137 
#define  CS42L42_TRSENSE_STATUS 136 
#define  CS42L42_TSENSE_CTL 135 
#define  CS42L42_TSRS_INT_DISABLE 134 
#define  CS42L42_TSRS_PLUG_INT_MASK 133 
#define  CS42L42_TSRS_PLUG_STATUS 132 
#define  CS42L42_VPMON_INT_MASK 131 
#define  CS42L42_VPMON_STATUS 130 
#define  CS42L42_WAKE_CTL 129 
#define  CS42l42_SPDIF_CH_SEL 128 

__attribute__((used)) static bool cs42l42_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case CS42L42_PAGE_REGISTER:
	case CS42L42_DEVID_AB:
	case CS42L42_DEVID_CD:
	case CS42L42_DEVID_E:
	case CS42L42_FABID:
	case CS42L42_REVID:
	case CS42L42_FRZ_CTL:
	case CS42L42_SRC_CTL:
	case CS42L42_MCLK_STATUS:
	case CS42L42_MCLK_CTL:
	case CS42L42_SFTRAMP_RATE:
	case CS42L42_I2C_DEBOUNCE:
	case CS42L42_I2C_STRETCH:
	case CS42L42_I2C_TIMEOUT:
	case CS42L42_PWR_CTL1:
	case CS42L42_PWR_CTL2:
	case CS42L42_PWR_CTL3:
	case CS42L42_RSENSE_CTL1:
	case CS42L42_RSENSE_CTL2:
	case CS42L42_OSC_SWITCH:
	case CS42L42_OSC_SWITCH_STATUS:
	case CS42L42_RSENSE_CTL3:
	case CS42L42_TSENSE_CTL:
	case CS42L42_TSRS_INT_DISABLE:
	case CS42L42_TRSENSE_STATUS:
	case CS42L42_HSDET_CTL1:
	case CS42L42_HSDET_CTL2:
	case CS42L42_HS_SWITCH_CTL:
	case CS42L42_HS_DET_STATUS:
	case CS42L42_HS_CLAMP_DISABLE:
	case CS42L42_MCLK_SRC_SEL:
	case CS42L42_SPDIF_CLK_CFG:
	case CS42L42_FSYNC_PW_LOWER:
	case CS42L42_FSYNC_PW_UPPER:
	case CS42L42_FSYNC_P_LOWER:
	case CS42L42_FSYNC_P_UPPER:
	case CS42L42_ASP_CLK_CFG:
	case CS42L42_ASP_FRM_CFG:
	case CS42L42_FS_RATE_EN:
	case CS42L42_IN_ASRC_CLK:
	case CS42L42_OUT_ASRC_CLK:
	case CS42L42_PLL_DIV_CFG1:
	case CS42L42_ADC_OVFL_STATUS:
	case CS42L42_MIXER_STATUS:
	case CS42L42_SRC_STATUS:
	case CS42L42_ASP_RX_STATUS:
	case CS42L42_ASP_TX_STATUS:
	case CS42L42_CODEC_STATUS:
	case CS42L42_DET_INT_STATUS1:
	case CS42L42_DET_INT_STATUS2:
	case CS42L42_SRCPL_INT_STATUS:
	case CS42L42_VPMON_STATUS:
	case CS42L42_PLL_LOCK_STATUS:
	case CS42L42_TSRS_PLUG_STATUS:
	case CS42L42_ADC_OVFL_INT_MASK:
	case CS42L42_MIXER_INT_MASK:
	case CS42L42_SRC_INT_MASK:
	case CS42L42_ASP_RX_INT_MASK:
	case CS42L42_ASP_TX_INT_MASK:
	case CS42L42_CODEC_INT_MASK:
	case CS42L42_SRCPL_INT_MASK:
	case CS42L42_VPMON_INT_MASK:
	case CS42L42_PLL_LOCK_INT_MASK:
	case CS42L42_TSRS_PLUG_INT_MASK:
	case CS42L42_PLL_CTL1:
	case CS42L42_PLL_DIV_FRAC0:
	case CS42L42_PLL_DIV_FRAC1:
	case CS42L42_PLL_DIV_FRAC2:
	case CS42L42_PLL_DIV_INT:
	case CS42L42_PLL_CTL3:
	case CS42L42_PLL_CAL_RATIO:
	case CS42L42_PLL_CTL4:
	case CS42L42_LOAD_DET_RCSTAT:
	case CS42L42_LOAD_DET_DONE:
	case CS42L42_LOAD_DET_EN:
	case CS42L42_HSBIAS_SC_AUTOCTL:
	case CS42L42_WAKE_CTL:
	case CS42L42_ADC_DISABLE_MUTE:
	case CS42L42_TIPSENSE_CTL:
	case CS42L42_MISC_DET_CTL:
	case CS42L42_MIC_DET_CTL1:
	case CS42L42_MIC_DET_CTL2:
	case CS42L42_DET_STATUS1:
	case CS42L42_DET_STATUS2:
	case CS42L42_DET_INT1_MASK:
	case CS42L42_DET_INT2_MASK:
	case CS42L42_HS_BIAS_CTL:
	case CS42L42_ADC_CTL:
	case CS42L42_ADC_VOLUME:
	case CS42L42_ADC_WNF_HPF_CTL:
	case CS42L42_DAC_CTL1:
	case CS42L42_DAC_CTL2:
	case CS42L42_HP_CTL:
	case CS42L42_CLASSH_CTL:
	case CS42L42_MIXER_CHA_VOL:
	case CS42L42_MIXER_ADC_VOL:
	case CS42L42_MIXER_CHB_VOL:
	case CS42L42_EQ_COEF_IN0:
	case CS42L42_EQ_COEF_IN1:
	case CS42L42_EQ_COEF_IN2:
	case CS42L42_EQ_COEF_IN3:
	case CS42L42_EQ_COEF_RW:
	case CS42L42_EQ_COEF_OUT0:
	case CS42L42_EQ_COEF_OUT1:
	case CS42L42_EQ_COEF_OUT2:
	case CS42L42_EQ_COEF_OUT3:
	case CS42L42_EQ_INIT_STAT:
	case CS42L42_EQ_START_FILT:
	case CS42L42_EQ_MUTE_CTL:
	case CS42L42_SP_RX_CH_SEL:
	case CS42L42_SP_RX_ISOC_CTL:
	case CS42L42_SP_RX_FS:
	case CS42l42_SPDIF_CH_SEL:
	case CS42L42_SP_TX_ISOC_CTL:
	case CS42L42_SP_TX_FS:
	case CS42L42_SPDIF_SW_CTL1:
	case CS42L42_SRC_SDIN_FS:
	case CS42L42_SRC_SDOUT_FS:
	case CS42L42_SPDIF_CTL1:
	case CS42L42_SPDIF_CTL2:
	case CS42L42_SPDIF_CTL3:
	case CS42L42_SPDIF_CTL4:
	case CS42L42_ASP_TX_SZ_EN:
	case CS42L42_ASP_TX_CH_EN:
	case CS42L42_ASP_TX_CH_AP_RES:
	case CS42L42_ASP_TX_CH1_BIT_MSB:
	case CS42L42_ASP_TX_CH1_BIT_LSB:
	case CS42L42_ASP_TX_HIZ_DLY_CFG:
	case CS42L42_ASP_TX_CH2_BIT_MSB:
	case CS42L42_ASP_TX_CH2_BIT_LSB:
	case CS42L42_ASP_RX_DAI0_EN:
	case CS42L42_ASP_RX_DAI0_CH1_AP_RES:
	case CS42L42_ASP_RX_DAI0_CH1_BIT_MSB:
	case CS42L42_ASP_RX_DAI0_CH1_BIT_LSB:
	case CS42L42_ASP_RX_DAI0_CH2_AP_RES:
	case CS42L42_ASP_RX_DAI0_CH2_BIT_MSB:
	case CS42L42_ASP_RX_DAI0_CH2_BIT_LSB:
	case CS42L42_ASP_RX_DAI0_CH3_AP_RES:
	case CS42L42_ASP_RX_DAI0_CH3_BIT_MSB:
	case CS42L42_ASP_RX_DAI0_CH3_BIT_LSB:
	case CS42L42_ASP_RX_DAI0_CH4_AP_RES:
	case CS42L42_ASP_RX_DAI0_CH4_BIT_MSB:
	case CS42L42_ASP_RX_DAI0_CH4_BIT_LSB:
	case CS42L42_ASP_RX_DAI1_CH1_AP_RES:
	case CS42L42_ASP_RX_DAI1_CH1_BIT_MSB:
	case CS42L42_ASP_RX_DAI1_CH1_BIT_LSB:
	case CS42L42_ASP_RX_DAI1_CH2_AP_RES:
	case CS42L42_ASP_RX_DAI1_CH2_BIT_MSB:
	case CS42L42_ASP_RX_DAI1_CH2_BIT_LSB:
	case CS42L42_SUB_REVID:
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
          int benchRet = cs42l42_readable_register(dev,reg);
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
          int benchRet = cs42l42_readable_register(dev,reg);
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
