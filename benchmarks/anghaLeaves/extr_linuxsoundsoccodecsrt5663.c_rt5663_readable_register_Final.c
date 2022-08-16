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
#define  RT5663_ADC_EQ_1 382 
#define  RT5663_ADC_EQ_2 381 
#define  RT5663_ADC_EQ_POST_VOL_L 380 
#define  RT5663_ADC_EQ_POST_VOL_R 379 
#define  RT5663_ADC_EQ_PRE_VOL_L 378 
#define  RT5663_ADC_EQ_PRE_VOL_R 377 
#define  RT5663_ADC_LCH_BPF1_A1 376 
#define  RT5663_ADC_LCH_BPF1_A2 375 
#define  RT5663_ADC_LCH_BPF1_H0 374 
#define  RT5663_ADC_LCH_BPF2_A1 373 
#define  RT5663_ADC_LCH_BPF2_A2 372 
#define  RT5663_ADC_LCH_BPF2_H0 371 
#define  RT5663_ADC_LCH_BPF3_A1 370 
#define  RT5663_ADC_LCH_BPF3_A2 369 
#define  RT5663_ADC_LCH_BPF3_H0 368 
#define  RT5663_ADC_LCH_BPF4_A1 367 
#define  RT5663_ADC_LCH_BPF4_A2 366 
#define  RT5663_ADC_LCH_BPF4_H0 365 
#define  RT5663_ADC_LCH_HPF1_A1 364 
#define  RT5663_ADC_LCH_HPF1_H0 363 
#define  RT5663_ADC_LCH_LPF1_A1 362 
#define  RT5663_ADC_LCH_LPF1_H0 361 
#define  RT5663_ADC_RCH_BPF1_A1 360 
#define  RT5663_ADC_RCH_BPF1_A2 359 
#define  RT5663_ADC_RCH_BPF1_H0 358 
#define  RT5663_ADC_RCH_BPF2_A1 357 
#define  RT5663_ADC_RCH_BPF2_A2 356 
#define  RT5663_ADC_RCH_BPF2_H0 355 
#define  RT5663_ADC_RCH_BPF3_A1 354 
#define  RT5663_ADC_RCH_BPF3_A2 353 
#define  RT5663_ADC_RCH_BPF3_H0 352 
#define  RT5663_ADC_RCH_BPF4_A1 351 
#define  RT5663_ADC_RCH_BPF4_A2 350 
#define  RT5663_ADC_RCH_BPF4_H0 349 
#define  RT5663_ADC_RCH_HPF1_A1 348 
#define  RT5663_ADC_RCH_HPF1_H0 347 
#define  RT5663_ADC_RCH_LPF1_A1 346 
#define  RT5663_ADC_RCH_LPF1_H0 345 
#define  RT5663_ADDA_CLK_1 344 
#define  RT5663_ADDA_RST 343 
#define  RT5663_AD_DA_MIXER 342 
#define  RT5663_ANA_BIAS_CUR_1 341 
#define  RT5663_ANA_BIAS_CUR_2 340 
#define  RT5663_ANA_BIAS_CUR_3 339 
#define  RT5663_ANA_BIAS_CUR_4 338 
#define  RT5663_ANA_BIAS_CUR_5 337 
#define  RT5663_ANA_BIAS_CUR_6 336 
#define  RT5663_ANA_JD 335 
#define  RT5663_ASRC_1 334 
#define  RT5663_ASRC_11 333 
#define  RT5663_ASRC_11_2 332 
#define  RT5663_ASRC_2 331 
#define  RT5663_ASRC_4 330 
#define  RT5663_ASRC_8 329 
#define  RT5663_ASRC_9 328 
#define  RT5663_AUTO_1MRC_CLK 327 
#define  RT5663_BIAS_CUR_5 326 
#define  RT5663_BIAS_CUR_6 325 
#define  RT5663_BIAS_CUR_7 324 
#define  RT5663_BIAS_CUR_8 323 
#define  RT5663_BIAS_CUR_9 322 
#define  RT5663_BYPASS_STO_DAC 321 
#define  RT5663_CALIB_ADC 320 
#define  RT5663_CALIB_BST 319 
#define  RT5663_CALIB_REC_MIX 318 
#define  RT5663_CBJ_1 317 
#define  RT5663_CBJ_2 316 
#define  RT5663_CBJ_3 315 
#define  RT5663_CHARGE_PUMP_1 314 
#define  RT5663_CHARGE_PUMP_1_2 313 
#define  RT5663_CHARGE_PUMP_1_3 312 
#define  RT5663_CHARGE_PUMP_2 311 
#define  RT5663_CHOP_ADC 310 
#define  RT5663_CHOP_DAC_L 309 
#define  RT5663_CHOP_DAC_R 308 
#define  RT5663_DACREF_LDO 307 
#define  RT5663_DEPOP_1 306 
#define  RT5663_DEPOP_2 305 
#define  RT5663_DEPOP_3 304 
#define  RT5663_DIG_IN_PIN1 303 
#define  RT5663_DIG_MISC 302 
#define  RT5663_DIG_SIDE_MIXER 301 
#define  RT5663_DIG_VOL_ZCD 300 
#define  RT5663_DUMMY_1 299 
#define  RT5663_DUMMY_2 298 
#define  RT5663_DUMMY_3 297 
#define  RT5663_DUMMY_CTL_DACLR 296 
#define  RT5663_DUMMY_REG 295 
#define  RT5663_DUMMY_REG_2 294 
#define  RT5663_DUMMY_REG_3 293 
#define  RT5663_DUMMY_REG_4 292 
#define  RT5663_DUMMY_REG_5 291 
#define  RT5663_DUMMY_REG_6 290 
#define  RT5663_EM_JACK_TYPE_1 289 
#define  RT5663_EM_JACK_TYPE_2 288 
#define  RT5663_EM_JACK_TYPE_3 287 
#define  RT5663_EM_JACK_TYPE_4 286 
#define  RT5663_EM_JACK_TYPE_5 285 
#define  RT5663_EM_JACK_TYPE_6 284 
#define  RT5663_FAST_OFF_MICBIAS 283 
#define  RT5663_FRAC_DIV_1 282 
#define  RT5663_FRAC_DIV_2 281 
#define  RT5663_GLB_CLK 280 
#define  RT5663_GPIO_1 279 
#define  RT5663_GPIO_2 278 
#define  RT5663_GPIO_STA1 277 
#define  RT5663_HP_AMP_DET 276 
#define  RT5663_HP_BIAS 275 
#define  RT5663_HP_CALIB_1 274 
#define  RT5663_HP_CALIB_10 273 
#define  RT5663_HP_CALIB_11 272 
#define  RT5663_HP_CALIB_1_1 271 
#define  RT5663_HP_CALIB_2 270 
#define  RT5663_HP_CALIB_3 269 
#define  RT5663_HP_CALIB_4 268 
#define  RT5663_HP_CALIB_5 267 
#define  RT5663_HP_CALIB_5_1 266 
#define  RT5663_HP_CALIB_6 265 
#define  RT5663_HP_CALIB_7 264 
#define  RT5663_HP_CALIB_9 263 
#define  RT5663_HP_CALIB_ST1 262 
#define  RT5663_HP_CALIB_ST2 261 
#define  RT5663_HP_CALIB_ST3 260 
#define  RT5663_HP_CALIB_ST4 259 
#define  RT5663_HP_CALIB_ST5 258 
#define  RT5663_HP_CALIB_ST6 257 
#define  RT5663_HP_CALIB_ST7 256 
#define  RT5663_HP_CALIB_ST8 255 
#define  RT5663_HP_CALIB_ST9 254 
#define  RT5663_HP_CHARGE_PUMP_1 253 
#define  RT5663_HP_CHARGE_PUMP_2 252 
#define  RT5663_HP_DECOUP 251 
#define  RT5663_HP_DECRO_1 250 
#define  RT5663_HP_DECRO_2 249 
#define  RT5663_HP_DECRO_3 248 
#define  RT5663_HP_DECRO_4 247 
#define  RT5663_HP_IMPSEN_DIG5 246 
#define  RT5663_HP_IMPSEN_MAP1 245 
#define  RT5663_HP_IMPSEN_MAP2 244 
#define  RT5663_HP_IMPSEN_MAP3 243 
#define  RT5663_HP_IMPSEN_MAP4 242 
#define  RT5663_HP_IMPSEN_MAP5 241 
#define  RT5663_HP_IMPSEN_MAP7 240 
#define  RT5663_HP_IMP_GAIN_1 239 
#define  RT5663_HP_IMP_GAIN_2 238 
#define  RT5663_HP_IMP_SEN_1 237 
#define  RT5663_HP_IMP_SEN_10 236 
#define  RT5663_HP_IMP_SEN_11 235 
#define  RT5663_HP_IMP_SEN_12 234 
#define  RT5663_HP_IMP_SEN_13 233 
#define  RT5663_HP_IMP_SEN_14 232 
#define  RT5663_HP_IMP_SEN_15 231 
#define  RT5663_HP_IMP_SEN_16 230 
#define  RT5663_HP_IMP_SEN_17 229 
#define  RT5663_HP_IMP_SEN_18 228 
#define  RT5663_HP_IMP_SEN_19 227 
#define  RT5663_HP_IMP_SEN_2 226 
#define  RT5663_HP_IMP_SEN_3 225 
#define  RT5663_HP_IMP_SEN_4 224 
#define  RT5663_HP_IMP_SEN_5 223 
#define  RT5663_HP_IMP_SEN_6 222 
#define  RT5663_HP_IMP_SEN_7 221 
#define  RT5663_HP_IMP_SEN_8 220 
#define  RT5663_HP_IMP_SEN_9 219 
#define  RT5663_HP_IMP_SEN_MAP10 218 
#define  RT5663_HP_IMP_SEN_MAP11 217 
#define  RT5663_HP_IMP_SEN_MAP8 216 
#define  RT5663_HP_IMP_SEN_MAP9 215 
#define  RT5663_HP_LCH_DRE 214 
#define  RT5663_HP_LOGIC_1 213 
#define  RT5663_HP_LOGIC_2 212 
#define  RT5663_HP_OUT_EN 211 
#define  RT5663_HP_RCH_DRE 210 
#define  RT5663_I2S1_SDP 209 
#define  RT5663_IL_CMD_1 208 
#define  RT5663_IL_CMD_2 207 
#define  RT5663_IL_CMD_3 206 
#define  RT5663_IL_CMD_4 205 
#define  RT5663_IL_CMD_5 204 
#define  RT5663_IL_CMD_6 203 
#define  RT5663_IL_CMD_7 202 
#define  RT5663_IL_CMD_8 201 
#define  RT5663_IL_CMD_PWRSAV1 200 
#define  RT5663_IL_CMD_PWRSAV2 199 
#define  RT5663_INT_ST_1 198 
#define  RT5663_INT_ST_2 197 
#define  RT5663_IRQ_1 196 
#define  RT5663_IRQ_2 195 
#define  RT5663_IRQ_3 194 
#define  RT5663_IRQ_4 193 
#define  RT5663_IRQ_5 192 
#define  RT5663_JD_CTRL1 191 
#define  RT5663_JD_CTRL2 190 
#define  RT5663_MICBIAS_1 189 
#define  RT5663_MIC_DECRO_1 188 
#define  RT5663_MIC_DECRO_2 187 
#define  RT5663_MIC_DECRO_3 186 
#define  RT5663_MIC_DECRO_4 185 
#define  RT5663_MIC_DECRO_5 184 
#define  RT5663_MIC_DECRO_6 183 
#define  RT5663_PAD_DRV_CTL 182 
#define  RT5663_PLL_1 181 
#define  RT5663_PLL_2 180 
#define  RT5663_PLL_INT_REG 179 
#define  RT5663_PRE_DIV_GATING_1 178 
#define  RT5663_PRE_DIV_GATING_2 177 
#define  RT5663_PWR_ANLG_1 176 
#define  RT5663_PWR_ANLG_2 175 
#define  RT5663_PWR_ANLG_3 174 
#define  RT5663_PWR_DIG_1 173 
#define  RT5663_PWR_DIG_2 172 
#define  RT5663_PWR_MIXER 171 
#define  RT5663_PWR_SAV_SILDET 170 
#define  RT5663_RC_CLK 169 
#define  RT5663_RECMIX 168 
#define  RT5663_REC_PATH_GAIN 167 
#define  RT5663_RESET 166 
#define  RT5663_SIDETONE_CTL 165 
#define  RT5663_SIG_CLK_DET 164 
#define  RT5663_SIL_DET_CTL 163 
#define  RT5663_SIN_GEN_1 162 
#define  RT5663_SIN_GEN_2 161 
#define  RT5663_SIN_GEN_3 160 
#define  RT5663_SOFT_RAMP 159 
#define  RT5663_SOF_VOL_ZC1 158 
#define  RT5663_STO1_ADC_DIG_VOL 157 
#define  RT5663_STO1_ADC_MIXER 156 
#define  RT5663_STO1_BOOST 155 
#define  RT5663_STO1_DAC_DIG_VOL 154 
#define  RT5663_STO1_HPF_ADJ1 153 
#define  RT5663_STO1_HPF_ADJ2 152 
#define  RT5663_STO_DAC_MIXER 151 
#define  RT5663_STO_DRE_1 150 
#define  RT5663_STO_DRE_10 149 
#define  RT5663_STO_DRE_2 148 
#define  RT5663_STO_DRE_3 147 
#define  RT5663_STO_DRE_4 146 
#define  RT5663_STO_DRE_5 145 
#define  RT5663_STO_DRE_6 144 
#define  RT5663_STO_DRE_7 143 
#define  RT5663_STO_DRE_8 142 
#define  RT5663_STO_DRE_9 141 
#define  RT5663_TDM_1 140 
#define  RT5663_TDM_2 139 
#define  RT5663_TDM_3 138 
#define  RT5663_TDM_4 137 
#define  RT5663_TDM_5 136 
#define  RT5663_TEST_MODE_1 135 
#define  RT5663_TEST_MODE_2 134 
#define  RT5663_TEST_MODE_3 133 
#define  RT5663_VENDOR_ID 132 
#define  RT5663_VENDOR_ID_1 131 
#define  RT5663_VENDOR_ID_2 130 
#define  RT5663_VREFADJ_OP 129 
#define  RT5663_VREF_RECMIX 128 

__attribute__((used)) static bool rt5663_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case RT5663_RESET:
	case RT5663_HP_OUT_EN:
	case RT5663_HP_LCH_DRE:
	case RT5663_HP_RCH_DRE:
	case RT5663_CALIB_BST:
	case RT5663_RECMIX:
	case RT5663_SIL_DET_CTL:
	case RT5663_PWR_SAV_SILDET:
	case RT5663_SIDETONE_CTL:
	case RT5663_STO1_DAC_DIG_VOL:
	case RT5663_STO1_ADC_DIG_VOL:
	case RT5663_STO1_BOOST:
	case RT5663_HP_IMP_GAIN_1:
	case RT5663_HP_IMP_GAIN_2:
	case RT5663_STO1_ADC_MIXER:
	case RT5663_AD_DA_MIXER:
	case RT5663_STO_DAC_MIXER:
	case RT5663_DIG_SIDE_MIXER:
	case RT5663_BYPASS_STO_DAC:
	case RT5663_CALIB_REC_MIX:
	case RT5663_PWR_DIG_1:
	case RT5663_PWR_DIG_2:
	case RT5663_PWR_ANLG_1:
	case RT5663_PWR_ANLG_2:
	case RT5663_PWR_ANLG_3:
	case RT5663_PWR_MIXER:
	case RT5663_SIG_CLK_DET:
	case RT5663_PRE_DIV_GATING_1:
	case RT5663_PRE_DIV_GATING_2:
	case RT5663_I2S1_SDP:
	case RT5663_ADDA_CLK_1:
	case RT5663_ADDA_RST:
	case RT5663_FRAC_DIV_1:
	case RT5663_FRAC_DIV_2:
	case RT5663_TDM_1:
	case RT5663_TDM_2:
	case RT5663_TDM_3:
	case RT5663_TDM_4:
	case RT5663_TDM_5:
	case RT5663_GLB_CLK:
	case RT5663_PLL_1:
	case RT5663_PLL_2:
	case RT5663_ASRC_1:
	case RT5663_ASRC_2:
	case RT5663_ASRC_4:
	case RT5663_DUMMY_REG:
	case RT5663_ASRC_8:
	case RT5663_ASRC_9:
	case RT5663_ASRC_11:
	case RT5663_DEPOP_1:
	case RT5663_DEPOP_2:
	case RT5663_DEPOP_3:
	case RT5663_HP_CHARGE_PUMP_1:
	case RT5663_HP_CHARGE_PUMP_2:
	case RT5663_MICBIAS_1:
	case RT5663_RC_CLK:
	case RT5663_ASRC_11_2:
	case RT5663_DUMMY_REG_2:
	case RT5663_REC_PATH_GAIN:
	case RT5663_AUTO_1MRC_CLK:
	case RT5663_ADC_EQ_1:
	case RT5663_ADC_EQ_2:
	case RT5663_IRQ_1:
	case RT5663_IRQ_2:
	case RT5663_IRQ_3:
	case RT5663_IRQ_4:
	case RT5663_IRQ_5:
	case RT5663_INT_ST_1:
	case RT5663_INT_ST_2:
	case RT5663_GPIO_1:
	case RT5663_GPIO_2:
	case RT5663_GPIO_STA1:
	case RT5663_SIN_GEN_1:
	case RT5663_SIN_GEN_2:
	case RT5663_SIN_GEN_3:
	case RT5663_SOF_VOL_ZC1:
	case RT5663_IL_CMD_1:
	case RT5663_IL_CMD_2:
	case RT5663_IL_CMD_3:
	case RT5663_IL_CMD_4:
	case RT5663_IL_CMD_5:
	case RT5663_IL_CMD_6:
	case RT5663_IL_CMD_7:
	case RT5663_IL_CMD_8:
	case RT5663_IL_CMD_PWRSAV1:
	case RT5663_IL_CMD_PWRSAV2:
	case RT5663_EM_JACK_TYPE_1:
	case RT5663_EM_JACK_TYPE_2:
	case RT5663_EM_JACK_TYPE_3:
	case RT5663_EM_JACK_TYPE_4:
	case RT5663_EM_JACK_TYPE_5:
	case RT5663_EM_JACK_TYPE_6:
	case RT5663_STO1_HPF_ADJ1:
	case RT5663_STO1_HPF_ADJ2:
	case RT5663_FAST_OFF_MICBIAS:
	case RT5663_JD_CTRL1:
	case RT5663_JD_CTRL2:
	case RT5663_DIG_MISC:
	case RT5663_VENDOR_ID:
	case RT5663_VENDOR_ID_1:
	case RT5663_VENDOR_ID_2:
	case RT5663_DIG_VOL_ZCD:
	case RT5663_ANA_BIAS_CUR_1:
	case RT5663_ANA_BIAS_CUR_2:
	case RT5663_ANA_BIAS_CUR_3:
	case RT5663_ANA_BIAS_CUR_4:
	case RT5663_ANA_BIAS_CUR_5:
	case RT5663_ANA_BIAS_CUR_6:
	case RT5663_BIAS_CUR_5:
	case RT5663_BIAS_CUR_6:
	case RT5663_BIAS_CUR_7:
	case RT5663_BIAS_CUR_8:
	case RT5663_DACREF_LDO:
	case RT5663_DUMMY_REG_3:
	case RT5663_BIAS_CUR_9:
	case RT5663_DUMMY_REG_4:
	case RT5663_VREFADJ_OP:
	case RT5663_VREF_RECMIX:
	case RT5663_CHARGE_PUMP_1:
	case RT5663_CHARGE_PUMP_1_2:
	case RT5663_CHARGE_PUMP_1_3:
	case RT5663_CHARGE_PUMP_2:
	case RT5663_DIG_IN_PIN1:
	case RT5663_PAD_DRV_CTL:
	case RT5663_PLL_INT_REG:
	case RT5663_CHOP_DAC_L:
	case RT5663_CHOP_ADC:
	case RT5663_CALIB_ADC:
	case RT5663_CHOP_DAC_R:
	case RT5663_DUMMY_CTL_DACLR:
	case RT5663_DUMMY_REG_5:
	case RT5663_SOFT_RAMP:
	case RT5663_TEST_MODE_1:
	case RT5663_TEST_MODE_2:
	case RT5663_TEST_MODE_3:
	case RT5663_STO_DRE_1:
	case RT5663_STO_DRE_2:
	case RT5663_STO_DRE_3:
	case RT5663_STO_DRE_4:
	case RT5663_STO_DRE_5:
	case RT5663_STO_DRE_6:
	case RT5663_STO_DRE_7:
	case RT5663_STO_DRE_8:
	case RT5663_STO_DRE_9:
	case RT5663_STO_DRE_10:
	case RT5663_MIC_DECRO_1:
	case RT5663_MIC_DECRO_2:
	case RT5663_MIC_DECRO_3:
	case RT5663_MIC_DECRO_4:
	case RT5663_MIC_DECRO_5:
	case RT5663_MIC_DECRO_6:
	case RT5663_HP_DECRO_1:
	case RT5663_HP_DECRO_2:
	case RT5663_HP_DECRO_3:
	case RT5663_HP_DECRO_4:
	case RT5663_HP_DECOUP:
	case RT5663_HP_IMP_SEN_MAP8:
	case RT5663_HP_IMP_SEN_MAP9:
	case RT5663_HP_IMP_SEN_MAP10:
	case RT5663_HP_IMP_SEN_MAP11:
	case RT5663_HP_IMP_SEN_1:
	case RT5663_HP_IMP_SEN_2:
	case RT5663_HP_IMP_SEN_3:
	case RT5663_HP_IMP_SEN_4:
	case RT5663_HP_IMP_SEN_5:
	case RT5663_HP_IMP_SEN_6:
	case RT5663_HP_IMP_SEN_7:
	case RT5663_HP_IMP_SEN_8:
	case RT5663_HP_IMP_SEN_9:
	case RT5663_HP_IMP_SEN_10:
	case RT5663_HP_IMP_SEN_11:
	case RT5663_HP_IMP_SEN_12:
	case RT5663_HP_IMP_SEN_13:
	case RT5663_HP_IMP_SEN_14:
	case RT5663_HP_IMP_SEN_15:
	case RT5663_HP_IMP_SEN_16:
	case RT5663_HP_IMP_SEN_17:
	case RT5663_HP_IMP_SEN_18:
	case RT5663_HP_IMP_SEN_19:
	case RT5663_HP_IMPSEN_DIG5:
	case RT5663_HP_IMPSEN_MAP1:
	case RT5663_HP_IMPSEN_MAP2:
	case RT5663_HP_IMPSEN_MAP3:
	case RT5663_HP_IMPSEN_MAP4:
	case RT5663_HP_IMPSEN_MAP5:
	case RT5663_HP_IMPSEN_MAP7:
	case RT5663_HP_LOGIC_1:
	case RT5663_HP_LOGIC_2:
	case RT5663_HP_CALIB_1:
	case RT5663_HP_CALIB_1_1:
	case RT5663_HP_CALIB_2:
	case RT5663_HP_CALIB_3:
	case RT5663_HP_CALIB_4:
	case RT5663_HP_CALIB_5:
	case RT5663_HP_CALIB_5_1:
	case RT5663_HP_CALIB_6:
	case RT5663_HP_CALIB_7:
	case RT5663_HP_CALIB_9:
	case RT5663_HP_CALIB_10:
	case RT5663_HP_CALIB_11:
	case RT5663_HP_CALIB_ST1:
	case RT5663_HP_CALIB_ST2:
	case RT5663_HP_CALIB_ST3:
	case RT5663_HP_CALIB_ST4:
	case RT5663_HP_CALIB_ST5:
	case RT5663_HP_CALIB_ST6:
	case RT5663_HP_CALIB_ST7:
	case RT5663_HP_CALIB_ST8:
	case RT5663_HP_CALIB_ST9:
	case RT5663_HP_AMP_DET:
	case RT5663_DUMMY_REG_6:
	case RT5663_HP_BIAS:
	case RT5663_CBJ_1:
	case RT5663_CBJ_2:
	case RT5663_CBJ_3:
	case RT5663_DUMMY_1:
	case RT5663_DUMMY_2:
	case RT5663_DUMMY_3:
	case RT5663_ANA_JD:
	case RT5663_ADC_LCH_LPF1_A1:
	case RT5663_ADC_RCH_LPF1_A1:
	case RT5663_ADC_LCH_LPF1_H0:
	case RT5663_ADC_RCH_LPF1_H0:
	case RT5663_ADC_LCH_BPF1_A1:
	case RT5663_ADC_RCH_BPF1_A1:
	case RT5663_ADC_LCH_BPF1_A2:
	case RT5663_ADC_RCH_BPF1_A2:
	case RT5663_ADC_LCH_BPF1_H0:
	case RT5663_ADC_RCH_BPF1_H0:
	case RT5663_ADC_LCH_BPF2_A1:
	case RT5663_ADC_RCH_BPF2_A1:
	case RT5663_ADC_LCH_BPF2_A2:
	case RT5663_ADC_RCH_BPF2_A2:
	case RT5663_ADC_LCH_BPF2_H0:
	case RT5663_ADC_RCH_BPF2_H0:
	case RT5663_ADC_LCH_BPF3_A1:
	case RT5663_ADC_RCH_BPF3_A1:
	case RT5663_ADC_LCH_BPF3_A2:
	case RT5663_ADC_RCH_BPF3_A2:
	case RT5663_ADC_LCH_BPF3_H0:
	case RT5663_ADC_RCH_BPF3_H0:
	case RT5663_ADC_LCH_BPF4_A1:
	case RT5663_ADC_RCH_BPF4_A1:
	case RT5663_ADC_LCH_BPF4_A2:
	case RT5663_ADC_RCH_BPF4_A2:
	case RT5663_ADC_LCH_BPF4_H0:
	case RT5663_ADC_RCH_BPF4_H0:
	case RT5663_ADC_LCH_HPF1_A1:
	case RT5663_ADC_RCH_HPF1_A1:
	case RT5663_ADC_LCH_HPF1_H0:
	case RT5663_ADC_RCH_HPF1_H0:
	case RT5663_ADC_EQ_PRE_VOL_L:
	case RT5663_ADC_EQ_PRE_VOL_R:
	case RT5663_ADC_EQ_POST_VOL_L:
	case RT5663_ADC_EQ_POST_VOL_R:
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
          int benchRet = rt5663_readable_register(dev,reg);
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
          int benchRet = rt5663_readable_register(dev,reg);
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
