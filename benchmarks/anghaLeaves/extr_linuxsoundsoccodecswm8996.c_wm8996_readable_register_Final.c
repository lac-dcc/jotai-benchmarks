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
#define  WM8996_ACCESSORY_DETECT_MODE_1 321 
#define  WM8996_ACCESSORY_DETECT_MODE_2 320 
#define  WM8996_AIF1RX_CHANNEL_0_CONFIGURATION 319 
#define  WM8996_AIF1RX_CHANNEL_1_CONFIGURATION 318 
#define  WM8996_AIF1RX_CHANNEL_2_CONFIGURATION 317 
#define  WM8996_AIF1RX_CHANNEL_3_CONFIGURATION 316 
#define  WM8996_AIF1RX_CHANNEL_4_CONFIGURATION 315 
#define  WM8996_AIF1RX_CHANNEL_5_CONFIGURATION 314 
#define  WM8996_AIF1RX_DATA_CONFIGURATION 313 
#define  WM8996_AIF1RX_MONO_CONFIGURATION 312 
#define  WM8996_AIF1TX_CHANNEL_0_CONFIGURATION 311 
#define  WM8996_AIF1TX_CHANNEL_1_CONFIGURATION 310 
#define  WM8996_AIF1TX_CHANNEL_2_CONFIGURATION 309 
#define  WM8996_AIF1TX_CHANNEL_3_CONFIGURATION 308 
#define  WM8996_AIF1TX_CHANNEL_4_CONFIGURATION 307 
#define  WM8996_AIF1TX_CHANNEL_5_CONFIGURATION 306 
#define  WM8996_AIF1TX_DATA_CONFIGURATION_1 305 
#define  WM8996_AIF1TX_DATA_CONFIGURATION_2 304 
#define  WM8996_AIF1TX_TEST 303 
#define  WM8996_AIF1_BCLK 302 
#define  WM8996_AIF1_CONTROL 301 
#define  WM8996_AIF1_RX_LRCLK_1 300 
#define  WM8996_AIF1_RX_LRCLK_2 299 
#define  WM8996_AIF1_TX_LRCLK_1 298 
#define  WM8996_AIF1_TX_LRCLK_2 297 
#define  WM8996_AIF2RX_CHANNEL_0_CONFIGURATION 296 
#define  WM8996_AIF2RX_CHANNEL_1_CONFIGURATION 295 
#define  WM8996_AIF2RX_DATA_CONFIGURATION 294 
#define  WM8996_AIF2RX_MONO_CONFIGURATION 293 
#define  WM8996_AIF2TX_CHANNEL_0_CONFIGURATION 292 
#define  WM8996_AIF2TX_CHANNEL_1_CONFIGURATION 291 
#define  WM8996_AIF2TX_DATA_CONFIGURATION_1 290 
#define  WM8996_AIF2TX_DATA_CONFIGURATION_2 289 
#define  WM8996_AIF2TX_TEST 288 
#define  WM8996_AIF2_BCLK 287 
#define  WM8996_AIF2_CONTROL 286 
#define  WM8996_AIF2_RX_LRCLK_1 285 
#define  WM8996_AIF2_RX_LRCLK_2 284 
#define  WM8996_AIF2_TX_LRCLK_1 283 
#define  WM8996_AIF2_TX_LRCLK_2 282 
#define  WM8996_AIF_CLOCKING_1 281 
#define  WM8996_AIF_CLOCKING_2 280 
#define  WM8996_AIF_RATE 279 
#define  WM8996_ANALOGUE_HP_1 278 
#define  WM8996_ANALOGUE_HP_2 277 
#define  WM8996_CHARGE_PUMP_1 276 
#define  WM8996_CHARGE_PUMP_2 275 
#define  WM8996_CHIP_REVISION 274 
#define  WM8996_CLOCKING_1 273 
#define  WM8996_CLOCKING_2 272 
#define  WM8996_CONTROL_INTERFACE_1 271 
#define  WM8996_DAC1_HPOUT1_VOLUME 270 
#define  WM8996_DAC1_LEFT_MIXER_ROUTING 269 
#define  WM8996_DAC1_LEFT_VOLUME 268 
#define  WM8996_DAC1_MIXER_VOLUMES 267 
#define  WM8996_DAC1_RIGHT_MIXER_ROUTING 266 
#define  WM8996_DAC1_RIGHT_VOLUME 265 
#define  WM8996_DAC2_HPOUT2_VOLUME 264 
#define  WM8996_DAC2_LEFT_MIXER_ROUTING 263 
#define  WM8996_DAC2_LEFT_VOLUME 262 
#define  WM8996_DAC2_MIXER_VOLUMES 261 
#define  WM8996_DAC2_RIGHT_MIXER_ROUTING 260 
#define  WM8996_DAC2_RIGHT_VOLUME 259 
#define  WM8996_DAC_SOFTMUTE 258 
#define  WM8996_DC_SERVO_1 257 
#define  WM8996_DC_SERVO_2 256 
#define  WM8996_DC_SERVO_3 255 
#define  WM8996_DC_SERVO_5 254 
#define  WM8996_DC_SERVO_6 253 
#define  WM8996_DC_SERVO_7 252 
#define  WM8996_DC_SERVO_READBACK_0 251 
#define  WM8996_DSP1_DRC_1 250 
#define  WM8996_DSP1_DRC_2 249 
#define  WM8996_DSP1_DRC_3 248 
#define  WM8996_DSP1_DRC_4 247 
#define  WM8996_DSP1_DRC_5 246 
#define  WM8996_DSP1_RX_EQ_BAND_1_A 245 
#define  WM8996_DSP1_RX_EQ_BAND_1_B 244 
#define  WM8996_DSP1_RX_EQ_BAND_1_PG 243 
#define  WM8996_DSP1_RX_EQ_BAND_2_A 242 
#define  WM8996_DSP1_RX_EQ_BAND_2_B 241 
#define  WM8996_DSP1_RX_EQ_BAND_2_C 240 
#define  WM8996_DSP1_RX_EQ_BAND_2_PG 239 
#define  WM8996_DSP1_RX_EQ_BAND_3_A 238 
#define  WM8996_DSP1_RX_EQ_BAND_3_B 237 
#define  WM8996_DSP1_RX_EQ_BAND_3_C 236 
#define  WM8996_DSP1_RX_EQ_BAND_3_PG 235 
#define  WM8996_DSP1_RX_EQ_BAND_4_A 234 
#define  WM8996_DSP1_RX_EQ_BAND_4_B 233 
#define  WM8996_DSP1_RX_EQ_BAND_4_C 232 
#define  WM8996_DSP1_RX_EQ_BAND_4_PG 231 
#define  WM8996_DSP1_RX_EQ_BAND_5_A 230 
#define  WM8996_DSP1_RX_EQ_BAND_5_B 229 
#define  WM8996_DSP1_RX_EQ_BAND_5_PG 228 
#define  WM8996_DSP1_RX_EQ_GAINS_1 227 
#define  WM8996_DSP1_RX_EQ_GAINS_2 226 
#define  WM8996_DSP1_RX_FILTERS_1 225 
#define  WM8996_DSP1_RX_FILTERS_2 224 
#define  WM8996_DSP1_RX_LEFT_VOLUME 223 
#define  WM8996_DSP1_RX_RIGHT_VOLUME 222 
#define  WM8996_DSP1_TX_FILTERS 221 
#define  WM8996_DSP1_TX_LEFT_MIXER_ROUTING 220 
#define  WM8996_DSP1_TX_LEFT_VOLUME 219 
#define  WM8996_DSP1_TX_RIGHT_MIXER_ROUTING 218 
#define  WM8996_DSP1_TX_RIGHT_VOLUME 217 
#define  WM8996_DSP2_DRC_1 216 
#define  WM8996_DSP2_DRC_2 215 
#define  WM8996_DSP2_DRC_3 214 
#define  WM8996_DSP2_DRC_4 213 
#define  WM8996_DSP2_DRC_5 212 
#define  WM8996_DSP2_RX_EQ_BAND_1_A 211 
#define  WM8996_DSP2_RX_EQ_BAND_1_B 210 
#define  WM8996_DSP2_RX_EQ_BAND_1_PG 209 
#define  WM8996_DSP2_RX_EQ_BAND_2_A 208 
#define  WM8996_DSP2_RX_EQ_BAND_2_B 207 
#define  WM8996_DSP2_RX_EQ_BAND_2_C 206 
#define  WM8996_DSP2_RX_EQ_BAND_2_PG 205 
#define  WM8996_DSP2_RX_EQ_BAND_3_A 204 
#define  WM8996_DSP2_RX_EQ_BAND_3_B 203 
#define  WM8996_DSP2_RX_EQ_BAND_3_C 202 
#define  WM8996_DSP2_RX_EQ_BAND_3_PG 201 
#define  WM8996_DSP2_RX_EQ_BAND_4_A 200 
#define  WM8996_DSP2_RX_EQ_BAND_4_B 199 
#define  WM8996_DSP2_RX_EQ_BAND_4_C 198 
#define  WM8996_DSP2_RX_EQ_BAND_4_PG 197 
#define  WM8996_DSP2_RX_EQ_BAND_5_A 196 
#define  WM8996_DSP2_RX_EQ_BAND_5_B 195 
#define  WM8996_DSP2_RX_EQ_BAND_5_PG 194 
#define  WM8996_DSP2_RX_EQ_GAINS_1 193 
#define  WM8996_DSP2_RX_EQ_GAINS_2 192 
#define  WM8996_DSP2_RX_FILTERS_1 191 
#define  WM8996_DSP2_RX_FILTERS_2 190 
#define  WM8996_DSP2_RX_LEFT_VOLUME 189 
#define  WM8996_DSP2_RX_RIGHT_VOLUME 188 
#define  WM8996_DSP2_TX_FILTERS 187 
#define  WM8996_DSP2_TX_LEFT_MIXER_ROUTING 186 
#define  WM8996_DSP2_TX_LEFT_VOLUME 185 
#define  WM8996_DSP2_TX_RIGHT_MIXER_ROUTING 184 
#define  WM8996_DSP2_TX_RIGHT_VOLUME 183 
#define  WM8996_DSP_TX_MIXER_SELECT 182 
#define  WM8996_FLL_CONTROL_1 181 
#define  WM8996_FLL_CONTROL_2 180 
#define  WM8996_FLL_CONTROL_3 179 
#define  WM8996_FLL_CONTROL_4 178 
#define  WM8996_FLL_CONTROL_5 177 
#define  WM8996_FLL_CONTROL_6 176 
#define  WM8996_FLL_EFS_1 175 
#define  WM8996_FLL_EFS_2 174 
#define  WM8996_GPIO_1 173 
#define  WM8996_GPIO_2 172 
#define  WM8996_GPIO_3 171 
#define  WM8996_GPIO_4 170 
#define  WM8996_GPIO_5 169 
#define  WM8996_HEADPHONE_DETECT_1 168 
#define  WM8996_HEADPHONE_DETECT_2 167 
#define  WM8996_INTERRUPT_CONTROL 166 
#define  WM8996_INTERRUPT_RAW_STATUS_2 165 
#define  WM8996_INTERRUPT_STATUS_1 164 
#define  WM8996_INTERRUPT_STATUS_1_MASK 163 
#define  WM8996_INTERRUPT_STATUS_2 162 
#define  WM8996_INTERRUPT_STATUS_2_MASK 161 
#define  WM8996_LDO_1 160 
#define  WM8996_LDO_2 159 
#define  WM8996_LEFT_LINE_INPUT_VOLUME 158 
#define  WM8996_LEFT_PDM_SPEAKER 157 
#define  WM8996_LINE_INPUT_CONTROL 156 
#define  WM8996_MICBIAS_1 155 
#define  WM8996_MICBIAS_2 154 
#define  WM8996_MIC_DETECT_1 153 
#define  WM8996_MIC_DETECT_2 152 
#define  WM8996_MIC_DETECT_3 151 
#define  WM8996_OUTPUT1_LEFT_VOLUME 150 
#define  WM8996_OUTPUT1_RIGHT_VOLUME 149 
#define  WM8996_OUTPUT2_LEFT_VOLUME 148 
#define  WM8996_OUTPUT2_RIGHT_VOLUME 147 
#define  WM8996_OVERSAMPLING 146 
#define  WM8996_PDM_SPEAKER_MUTE_SEQUENCE 145 
#define  WM8996_PDM_SPEAKER_VOLUME 144 
#define  WM8996_POWER_MANAGEMENT_1 143 
#define  WM8996_POWER_MANAGEMENT_2 142 
#define  WM8996_POWER_MANAGEMENT_3 141 
#define  WM8996_POWER_MANAGEMENT_4 140 
#define  WM8996_POWER_MANAGEMENT_5 139 
#define  WM8996_POWER_MANAGEMENT_6 138 
#define  WM8996_POWER_MANAGEMENT_7 137 
#define  WM8996_POWER_MANAGEMENT_8 136 
#define  WM8996_PULL_CONTROL_1 135 
#define  WM8996_PULL_CONTROL_2 134 
#define  WM8996_RIGHT_LINE_INPUT_VOLUME 133 
#define  WM8996_RIGHT_PDM_SPEAKER 132 
#define  WM8996_SIDETONE 131 
#define  WM8996_SOFTWARE_RESET 130 
#define  WM8996_WRITE_SEQUENCER_CTRL_1 129 
#define  WM8996_WRITE_SEQUENCER_CTRL_2 128 

__attribute__((used)) static bool wm8996_readable_register(struct device *dev, unsigned int reg)
{
	/* Due to the sparseness of the register map the compiler
	 * output from an explicit switch statement ends up being much
	 * more efficient than a table.
	 */
	switch (reg) {
	case WM8996_SOFTWARE_RESET:
	case WM8996_POWER_MANAGEMENT_1:
	case WM8996_POWER_MANAGEMENT_2:
	case WM8996_POWER_MANAGEMENT_3:
	case WM8996_POWER_MANAGEMENT_4:
	case WM8996_POWER_MANAGEMENT_5:
	case WM8996_POWER_MANAGEMENT_6:
	case WM8996_POWER_MANAGEMENT_7:
	case WM8996_POWER_MANAGEMENT_8:
	case WM8996_LEFT_LINE_INPUT_VOLUME:
	case WM8996_RIGHT_LINE_INPUT_VOLUME:
	case WM8996_LINE_INPUT_CONTROL:
	case WM8996_DAC1_HPOUT1_VOLUME:
	case WM8996_DAC2_HPOUT2_VOLUME:
	case WM8996_DAC1_LEFT_VOLUME:
	case WM8996_DAC1_RIGHT_VOLUME:
	case WM8996_DAC2_LEFT_VOLUME:
	case WM8996_DAC2_RIGHT_VOLUME:
	case WM8996_OUTPUT1_LEFT_VOLUME:
	case WM8996_OUTPUT1_RIGHT_VOLUME:
	case WM8996_OUTPUT2_LEFT_VOLUME:
	case WM8996_OUTPUT2_RIGHT_VOLUME:
	case WM8996_MICBIAS_1:
	case WM8996_MICBIAS_2:
	case WM8996_LDO_1:
	case WM8996_LDO_2:
	case WM8996_ACCESSORY_DETECT_MODE_1:
	case WM8996_ACCESSORY_DETECT_MODE_2:
	case WM8996_HEADPHONE_DETECT_1:
	case WM8996_HEADPHONE_DETECT_2:
	case WM8996_MIC_DETECT_1:
	case WM8996_MIC_DETECT_2:
	case WM8996_MIC_DETECT_3:
	case WM8996_CHARGE_PUMP_1:
	case WM8996_CHARGE_PUMP_2:
	case WM8996_DC_SERVO_1:
	case WM8996_DC_SERVO_2:
	case WM8996_DC_SERVO_3:
	case WM8996_DC_SERVO_5:
	case WM8996_DC_SERVO_6:
	case WM8996_DC_SERVO_7:
	case WM8996_DC_SERVO_READBACK_0:
	case WM8996_ANALOGUE_HP_1:
	case WM8996_ANALOGUE_HP_2:
	case WM8996_CHIP_REVISION:
	case WM8996_CONTROL_INTERFACE_1:
	case WM8996_WRITE_SEQUENCER_CTRL_1:
	case WM8996_WRITE_SEQUENCER_CTRL_2:
	case WM8996_AIF_CLOCKING_1:
	case WM8996_AIF_CLOCKING_2:
	case WM8996_CLOCKING_1:
	case WM8996_CLOCKING_2:
	case WM8996_AIF_RATE:
	case WM8996_FLL_CONTROL_1:
	case WM8996_FLL_CONTROL_2:
	case WM8996_FLL_CONTROL_3:
	case WM8996_FLL_CONTROL_4:
	case WM8996_FLL_CONTROL_5:
	case WM8996_FLL_CONTROL_6:
	case WM8996_FLL_EFS_1:
	case WM8996_FLL_EFS_2:
	case WM8996_AIF1_CONTROL:
	case WM8996_AIF1_BCLK:
	case WM8996_AIF1_TX_LRCLK_1:
	case WM8996_AIF1_TX_LRCLK_2:
	case WM8996_AIF1_RX_LRCLK_1:
	case WM8996_AIF1_RX_LRCLK_2:
	case WM8996_AIF1TX_DATA_CONFIGURATION_1:
	case WM8996_AIF1TX_DATA_CONFIGURATION_2:
	case WM8996_AIF1RX_DATA_CONFIGURATION:
	case WM8996_AIF1TX_CHANNEL_0_CONFIGURATION:
	case WM8996_AIF1TX_CHANNEL_1_CONFIGURATION:
	case WM8996_AIF1TX_CHANNEL_2_CONFIGURATION:
	case WM8996_AIF1TX_CHANNEL_3_CONFIGURATION:
	case WM8996_AIF1TX_CHANNEL_4_CONFIGURATION:
	case WM8996_AIF1TX_CHANNEL_5_CONFIGURATION:
	case WM8996_AIF1RX_CHANNEL_0_CONFIGURATION:
	case WM8996_AIF1RX_CHANNEL_1_CONFIGURATION:
	case WM8996_AIF1RX_CHANNEL_2_CONFIGURATION:
	case WM8996_AIF1RX_CHANNEL_3_CONFIGURATION:
	case WM8996_AIF1RX_CHANNEL_4_CONFIGURATION:
	case WM8996_AIF1RX_CHANNEL_5_CONFIGURATION:
	case WM8996_AIF1RX_MONO_CONFIGURATION:
	case WM8996_AIF1TX_TEST:
	case WM8996_AIF2_CONTROL:
	case WM8996_AIF2_BCLK:
	case WM8996_AIF2_TX_LRCLK_1:
	case WM8996_AIF2_TX_LRCLK_2:
	case WM8996_AIF2_RX_LRCLK_1:
	case WM8996_AIF2_RX_LRCLK_2:
	case WM8996_AIF2TX_DATA_CONFIGURATION_1:
	case WM8996_AIF2TX_DATA_CONFIGURATION_2:
	case WM8996_AIF2RX_DATA_CONFIGURATION:
	case WM8996_AIF2TX_CHANNEL_0_CONFIGURATION:
	case WM8996_AIF2TX_CHANNEL_1_CONFIGURATION:
	case WM8996_AIF2RX_CHANNEL_0_CONFIGURATION:
	case WM8996_AIF2RX_CHANNEL_1_CONFIGURATION:
	case WM8996_AIF2RX_MONO_CONFIGURATION:
	case WM8996_AIF2TX_TEST:
	case WM8996_DSP1_TX_LEFT_VOLUME:
	case WM8996_DSP1_TX_RIGHT_VOLUME:
	case WM8996_DSP1_RX_LEFT_VOLUME:
	case WM8996_DSP1_RX_RIGHT_VOLUME:
	case WM8996_DSP1_TX_FILTERS:
	case WM8996_DSP1_RX_FILTERS_1:
	case WM8996_DSP1_RX_FILTERS_2:
	case WM8996_DSP1_DRC_1:
	case WM8996_DSP1_DRC_2:
	case WM8996_DSP1_DRC_3:
	case WM8996_DSP1_DRC_4:
	case WM8996_DSP1_DRC_5:
	case WM8996_DSP1_RX_EQ_GAINS_1:
	case WM8996_DSP1_RX_EQ_GAINS_2:
	case WM8996_DSP1_RX_EQ_BAND_1_A:
	case WM8996_DSP1_RX_EQ_BAND_1_B:
	case WM8996_DSP1_RX_EQ_BAND_1_PG:
	case WM8996_DSP1_RX_EQ_BAND_2_A:
	case WM8996_DSP1_RX_EQ_BAND_2_B:
	case WM8996_DSP1_RX_EQ_BAND_2_C:
	case WM8996_DSP1_RX_EQ_BAND_2_PG:
	case WM8996_DSP1_RX_EQ_BAND_3_A:
	case WM8996_DSP1_RX_EQ_BAND_3_B:
	case WM8996_DSP1_RX_EQ_BAND_3_C:
	case WM8996_DSP1_RX_EQ_BAND_3_PG:
	case WM8996_DSP1_RX_EQ_BAND_4_A:
	case WM8996_DSP1_RX_EQ_BAND_4_B:
	case WM8996_DSP1_RX_EQ_BAND_4_C:
	case WM8996_DSP1_RX_EQ_BAND_4_PG:
	case WM8996_DSP1_RX_EQ_BAND_5_A:
	case WM8996_DSP1_RX_EQ_BAND_5_B:
	case WM8996_DSP1_RX_EQ_BAND_5_PG:
	case WM8996_DSP2_TX_LEFT_VOLUME:
	case WM8996_DSP2_TX_RIGHT_VOLUME:
	case WM8996_DSP2_RX_LEFT_VOLUME:
	case WM8996_DSP2_RX_RIGHT_VOLUME:
	case WM8996_DSP2_TX_FILTERS:
	case WM8996_DSP2_RX_FILTERS_1:
	case WM8996_DSP2_RX_FILTERS_2:
	case WM8996_DSP2_DRC_1:
	case WM8996_DSP2_DRC_2:
	case WM8996_DSP2_DRC_3:
	case WM8996_DSP2_DRC_4:
	case WM8996_DSP2_DRC_5:
	case WM8996_DSP2_RX_EQ_GAINS_1:
	case WM8996_DSP2_RX_EQ_GAINS_2:
	case WM8996_DSP2_RX_EQ_BAND_1_A:
	case WM8996_DSP2_RX_EQ_BAND_1_B:
	case WM8996_DSP2_RX_EQ_BAND_1_PG:
	case WM8996_DSP2_RX_EQ_BAND_2_A:
	case WM8996_DSP2_RX_EQ_BAND_2_B:
	case WM8996_DSP2_RX_EQ_BAND_2_C:
	case WM8996_DSP2_RX_EQ_BAND_2_PG:
	case WM8996_DSP2_RX_EQ_BAND_3_A:
	case WM8996_DSP2_RX_EQ_BAND_3_B:
	case WM8996_DSP2_RX_EQ_BAND_3_C:
	case WM8996_DSP2_RX_EQ_BAND_3_PG:
	case WM8996_DSP2_RX_EQ_BAND_4_A:
	case WM8996_DSP2_RX_EQ_BAND_4_B:
	case WM8996_DSP2_RX_EQ_BAND_4_C:
	case WM8996_DSP2_RX_EQ_BAND_4_PG:
	case WM8996_DSP2_RX_EQ_BAND_5_A:
	case WM8996_DSP2_RX_EQ_BAND_5_B:
	case WM8996_DSP2_RX_EQ_BAND_5_PG:
	case WM8996_DAC1_MIXER_VOLUMES:
	case WM8996_DAC1_LEFT_MIXER_ROUTING:
	case WM8996_DAC1_RIGHT_MIXER_ROUTING:
	case WM8996_DAC2_MIXER_VOLUMES:
	case WM8996_DAC2_LEFT_MIXER_ROUTING:
	case WM8996_DAC2_RIGHT_MIXER_ROUTING:
	case WM8996_DSP1_TX_LEFT_MIXER_ROUTING:
	case WM8996_DSP1_TX_RIGHT_MIXER_ROUTING:
	case WM8996_DSP2_TX_LEFT_MIXER_ROUTING:
	case WM8996_DSP2_TX_RIGHT_MIXER_ROUTING:
	case WM8996_DSP_TX_MIXER_SELECT:
	case WM8996_DAC_SOFTMUTE:
	case WM8996_OVERSAMPLING:
	case WM8996_SIDETONE:
	case WM8996_GPIO_1:
	case WM8996_GPIO_2:
	case WM8996_GPIO_3:
	case WM8996_GPIO_4:
	case WM8996_GPIO_5:
	case WM8996_PULL_CONTROL_1:
	case WM8996_PULL_CONTROL_2:
	case WM8996_INTERRUPT_STATUS_1:
	case WM8996_INTERRUPT_STATUS_2:
	case WM8996_INTERRUPT_RAW_STATUS_2:
	case WM8996_INTERRUPT_STATUS_1_MASK:
	case WM8996_INTERRUPT_STATUS_2_MASK:
	case WM8996_INTERRUPT_CONTROL:
	case WM8996_LEFT_PDM_SPEAKER:
	case WM8996_RIGHT_PDM_SPEAKER:
	case WM8996_PDM_SPEAKER_MUTE_SEQUENCE:
	case WM8996_PDM_SPEAKER_VOLUME:
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
        
          int benchRet = wm8996_readable_register(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
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
        
          int benchRet = wm8996_readable_register(dev,reg);
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
        
          int benchRet = wm8996_readable_register(dev,reg);
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
        
          int benchRet = wm8996_readable_register(dev,reg);
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
