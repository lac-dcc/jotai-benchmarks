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
#define  WM8995_ACCESSORY_DETECT_MODE1 339 
#define  WM8995_ACCESSORY_DETECT_MODE2 338 
#define  WM8995_AIF1ADC_DATA 337 
#define  WM8995_AIF1ADC_LRCLK 336 
#define  WM8995_AIF1DAC_DATA 335 
#define  WM8995_AIF1DAC_LRCLK 334 
#define  WM8995_AIF1_ADC1_FILTERS 333 
#define  WM8995_AIF1_ADC1_LEFT_MIXER_ROUTING 332 
#define  WM8995_AIF1_ADC1_LEFT_VOLUME 331 
#define  WM8995_AIF1_ADC1_RIGHT_MIXER_ROUTING 330 
#define  WM8995_AIF1_ADC1_RIGHT_VOLUME 329 
#define  WM8995_AIF1_ADC2_FILTERS 328 
#define  WM8995_AIF1_ADC2_LEFT_MIXER_ROUTING 327 
#define  WM8995_AIF1_ADC2_LEFT_VOLUME 326 
#define  WM8995_AIF1_ADC2_RIGHT_MIXER_ROUTING 325 
#define  WM8995_AIF1_ADC2_RIGHT_VOLUME 324 
#define  WM8995_AIF1_BCLK 323 
#define  WM8995_AIF1_CLOCKING_1 322 
#define  WM8995_AIF1_CLOCKING_2 321 
#define  WM8995_AIF1_CONTROL_1 320 
#define  WM8995_AIF1_CONTROL_2 319 
#define  WM8995_AIF1_DAC1_EQ_BAND_1_A 318 
#define  WM8995_AIF1_DAC1_EQ_BAND_1_B 317 
#define  WM8995_AIF1_DAC1_EQ_BAND_1_PG 316 
#define  WM8995_AIF1_DAC1_EQ_BAND_2_A 315 
#define  WM8995_AIF1_DAC1_EQ_BAND_2_B 314 
#define  WM8995_AIF1_DAC1_EQ_BAND_2_C 313 
#define  WM8995_AIF1_DAC1_EQ_BAND_2_PG 312 
#define  WM8995_AIF1_DAC1_EQ_BAND_3_A 311 
#define  WM8995_AIF1_DAC1_EQ_BAND_3_B 310 
#define  WM8995_AIF1_DAC1_EQ_BAND_3_C 309 
#define  WM8995_AIF1_DAC1_EQ_BAND_3_PG 308 
#define  WM8995_AIF1_DAC1_EQ_BAND_4_A 307 
#define  WM8995_AIF1_DAC1_EQ_BAND_4_B 306 
#define  WM8995_AIF1_DAC1_EQ_BAND_4_C 305 
#define  WM8995_AIF1_DAC1_EQ_BAND_4_PG 304 
#define  WM8995_AIF1_DAC1_EQ_BAND_5_A 303 
#define  WM8995_AIF1_DAC1_EQ_BAND_5_B 302 
#define  WM8995_AIF1_DAC1_EQ_BAND_5_PG 301 
#define  WM8995_AIF1_DAC1_EQ_GAINS_1 300 
#define  WM8995_AIF1_DAC1_EQ_GAINS_2 299 
#define  WM8995_AIF1_DAC1_FILTERS_1 298 
#define  WM8995_AIF1_DAC1_FILTERS_2 297 
#define  WM8995_AIF1_DAC1_LEFT_VOLUME 296 
#define  WM8995_AIF1_DAC1_RIGHT_VOLUME 295 
#define  WM8995_AIF1_DAC2_EQ_BAND_1_A 294 
#define  WM8995_AIF1_DAC2_EQ_BAND_1_B 293 
#define  WM8995_AIF1_DAC2_EQ_BAND_1_PG 292 
#define  WM8995_AIF1_DAC2_EQ_BAND_2_A 291 
#define  WM8995_AIF1_DAC2_EQ_BAND_2_B 290 
#define  WM8995_AIF1_DAC2_EQ_BAND_2_C 289 
#define  WM8995_AIF1_DAC2_EQ_BAND_2_PG 288 
#define  WM8995_AIF1_DAC2_EQ_BAND_3_A 287 
#define  WM8995_AIF1_DAC2_EQ_BAND_3_B 286 
#define  WM8995_AIF1_DAC2_EQ_BAND_3_C 285 
#define  WM8995_AIF1_DAC2_EQ_BAND_3_PG 284 
#define  WM8995_AIF1_DAC2_EQ_BAND_4_A 283 
#define  WM8995_AIF1_DAC2_EQ_BAND_4_B 282 
#define  WM8995_AIF1_DAC2_EQ_BAND_4_C 281 
#define  WM8995_AIF1_DAC2_EQ_BAND_4_PG 280 
#define  WM8995_AIF1_DAC2_EQ_BAND_5_A 279 
#define  WM8995_AIF1_DAC2_EQ_BAND_5_B 278 
#define  WM8995_AIF1_DAC2_EQ_BAND_5_PG 277 
#define  WM8995_AIF1_DAC2_EQ_GAINS_1 276 
#define  WM8995_AIF1_DAC2_EQ_GAINS_2 275 
#define  WM8995_AIF1_DAC2_FILTERS_1 274 
#define  WM8995_AIF1_DAC2_FILTERS_2 273 
#define  WM8995_AIF1_DAC2_LEFT_VOLUME 272 
#define  WM8995_AIF1_DAC2_RIGHT_VOLUME 271 
#define  WM8995_AIF1_DRC1_1 270 
#define  WM8995_AIF1_DRC1_2 269 
#define  WM8995_AIF1_DRC1_3 268 
#define  WM8995_AIF1_DRC1_4 267 
#define  WM8995_AIF1_DRC1_5 266 
#define  WM8995_AIF1_DRC2_1 265 
#define  WM8995_AIF1_DRC2_2 264 
#define  WM8995_AIF1_DRC2_3 263 
#define  WM8995_AIF1_DRC2_4 262 
#define  WM8995_AIF1_DRC2_5 261 
#define  WM8995_AIF1_MASTER_SLAVE 260 
#define  WM8995_AIF1_RATE 259 
#define  WM8995_AIF2ADC_DATA 258 
#define  WM8995_AIF2ADC_LRCLK 257 
#define  WM8995_AIF2DAC_DATA 256 
#define  WM8995_AIF2DAC_LRCLK 255 
#define  WM8995_AIF2_ADC_FILTERS 254 
#define  WM8995_AIF2_ADC_LEFT_VOLUME 253 
#define  WM8995_AIF2_ADC_RIGHT_VOLUME 252 
#define  WM8995_AIF2_BCLK 251 
#define  WM8995_AIF2_CLOCKING_1 250 
#define  WM8995_AIF2_CLOCKING_2 249 
#define  WM8995_AIF2_CONTROL_1 248 
#define  WM8995_AIF2_CONTROL_2 247 
#define  WM8995_AIF2_DAC_FILTERS_1 246 
#define  WM8995_AIF2_DAC_FILTERS_2 245 
#define  WM8995_AIF2_DAC_LEFT_VOLUME 244 
#define  WM8995_AIF2_DAC_RIGHT_VOLUME 243 
#define  WM8995_AIF2_DRC_1 242 
#define  WM8995_AIF2_DRC_2 241 
#define  WM8995_AIF2_DRC_3 240 
#define  WM8995_AIF2_DRC_4 239 
#define  WM8995_AIF2_DRC_5 238 
#define  WM8995_AIF2_EQ_BAND_1_A 237 
#define  WM8995_AIF2_EQ_BAND_1_B 236 
#define  WM8995_AIF2_EQ_BAND_1_PG 235 
#define  WM8995_AIF2_EQ_BAND_2_A 234 
#define  WM8995_AIF2_EQ_BAND_2_B 233 
#define  WM8995_AIF2_EQ_BAND_2_C 232 
#define  WM8995_AIF2_EQ_BAND_2_PG 231 
#define  WM8995_AIF2_EQ_BAND_3_A 230 
#define  WM8995_AIF2_EQ_BAND_3_B 229 
#define  WM8995_AIF2_EQ_BAND_3_C 228 
#define  WM8995_AIF2_EQ_BAND_3_PG 227 
#define  WM8995_AIF2_EQ_BAND_4_A 226 
#define  WM8995_AIF2_EQ_BAND_4_B 225 
#define  WM8995_AIF2_EQ_BAND_4_C 224 
#define  WM8995_AIF2_EQ_BAND_4_PG 223 
#define  WM8995_AIF2_EQ_BAND_5_A 222 
#define  WM8995_AIF2_EQ_BAND_5_B 221 
#define  WM8995_AIF2_EQ_BAND_5_PG 220 
#define  WM8995_AIF2_EQ_GAINS_1 219 
#define  WM8995_AIF2_EQ_GAINS_2 218 
#define  WM8995_AIF2_MASTER_SLAVE 217 
#define  WM8995_AIF2_RATE 216 
#define  WM8995_ANALOGUE_HP_1 215 
#define  WM8995_ANALOGUE_HP_2 214 
#define  WM8995_CHARGE_PUMP_1 213 
#define  WM8995_CHIP_REVISION 212 
#define  WM8995_CLASS_W_1 211 
#define  WM8995_CLOCKING_1 210 
#define  WM8995_CLOCKING_2 209 
#define  WM8995_CONTROL_INTERFACE_1 208 
#define  WM8995_CONTROL_INTERFACE_2 207 
#define  WM8995_DAC1_LEFT_MIXER_ROUTING 206 
#define  WM8995_DAC1_LEFT_VOLUME 205 
#define  WM8995_DAC1_MIXER_VOLUMES 204 
#define  WM8995_DAC1_RIGHT_MIXER_ROUTING 203 
#define  WM8995_DAC1_RIGHT_VOLUME 202 
#define  WM8995_DAC2_LEFT_MIXER_ROUTING 201 
#define  WM8995_DAC2_LEFT_VOLUME 200 
#define  WM8995_DAC2_MIXER_VOLUMES 199 
#define  WM8995_DAC2_RIGHT_MIXER_ROUTING 198 
#define  WM8995_DAC2_RIGHT_VOLUME 197 
#define  WM8995_DAC_SOFTMUTE 196 
#define  WM8995_DC_SERVO_1 195 
#define  WM8995_DC_SERVO_2 194 
#define  WM8995_DC_SERVO_3 193 
#define  WM8995_DC_SERVO_5 192 
#define  WM8995_DC_SERVO_6 191 
#define  WM8995_DC_SERVO_7 190 
#define  WM8995_DC_SERVO_READBACK_0 189 
#define  WM8995_FLL1_CONTROL_1 188 
#define  WM8995_FLL1_CONTROL_2 187 
#define  WM8995_FLL1_CONTROL_3 186 
#define  WM8995_FLL1_CONTROL_4 185 
#define  WM8995_FLL1_CONTROL_5 184 
#define  WM8995_FLL2_CONTROL_1 183 
#define  WM8995_FLL2_CONTROL_2 182 
#define  WM8995_FLL2_CONTROL_3 181 
#define  WM8995_FLL2_CONTROL_4 180 
#define  WM8995_FLL2_CONTROL_5 179 
#define  WM8995_GPIO_1 178 
#define  WM8995_GPIO_10 177 
#define  WM8995_GPIO_11 176 
#define  WM8995_GPIO_12 175 
#define  WM8995_GPIO_13 174 
#define  WM8995_GPIO_14 173 
#define  WM8995_GPIO_2 172 
#define  WM8995_GPIO_3 171 
#define  WM8995_GPIO_4 170 
#define  WM8995_GPIO_5 169 
#define  WM8995_GPIO_6 168 
#define  WM8995_GPIO_7 167 
#define  WM8995_GPIO_8 166 
#define  WM8995_GPIO_9 165 
#define  WM8995_HEADPHONE_DETECT1 164 
#define  WM8995_HEADPHONE_DETECT2 163 
#define  WM8995_INTERRUPT_CONTROL 162 
#define  WM8995_INTERRUPT_RAW_STATUS_2 161 
#define  WM8995_INTERRUPT_STATUS_1 160 
#define  WM8995_INTERRUPT_STATUS_1_MASK 159 
#define  WM8995_INTERRUPT_STATUS_2 158 
#define  WM8995_INTERRUPT_STATUS_2_MASK 157 
#define  WM8995_LDO_1 156 
#define  WM8995_LDO_2 155 
#define  WM8995_LEFT_LINE_INPUT_1_VOLUME 154 
#define  WM8995_LEFT_LINE_INPUT_CONTROL 153 
#define  WM8995_LEFT_PDM_SPEAKER_1 152 
#define  WM8995_LEFT_PDM_SPEAKER_2 151 
#define  WM8995_MICBIAS_1 150 
#define  WM8995_MICBIAS_2 149 
#define  WM8995_MIC_DETECT_1 148 
#define  WM8995_MIC_DETECT_2 147 
#define  WM8995_OUTPUT_VOLUME_ZC_1 146 
#define  WM8995_OVERSAMPLING 145 
#define  WM8995_PDM_SPEAKER_1_MUTE_SEQUENCE 144 
#define  WM8995_PDM_SPEAKER_2_MUTE_SEQUENCE 143 
#define  WM8995_POWER_MANAGEMENT_1 142 
#define  WM8995_POWER_MANAGEMENT_2 141 
#define  WM8995_POWER_MANAGEMENT_3 140 
#define  WM8995_POWER_MANAGEMENT_4 139 
#define  WM8995_POWER_MANAGEMENT_5 138 
#define  WM8995_PULL_CONTROL_1 137 
#define  WM8995_PULL_CONTROL_2 136 
#define  WM8995_RATE_STATUS 135 
#define  WM8995_RIGHT_LINE_INPUT_1_VOLUME 134 
#define  WM8995_RIGHT_PDM_SPEAKER_1 133 
#define  WM8995_RIGHT_PDM_SPEAKER_2 132 
#define  WM8995_SIDETONE 131 
#define  WM8995_SOFTWARE_RESET 130 
#define  WM8995_WRITE_SEQUENCER_CTRL_1 129 
#define  WM8995_WRITE_SEQUENCER_CTRL_2 128 

__attribute__((used)) static bool wm8995_readable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM8995_SOFTWARE_RESET:
	case WM8995_POWER_MANAGEMENT_1:
	case WM8995_POWER_MANAGEMENT_2:
	case WM8995_POWER_MANAGEMENT_3:
	case WM8995_POWER_MANAGEMENT_4:
	case WM8995_POWER_MANAGEMENT_5:
	case WM8995_LEFT_LINE_INPUT_1_VOLUME:
	case WM8995_RIGHT_LINE_INPUT_1_VOLUME:
	case WM8995_LEFT_LINE_INPUT_CONTROL:
	case WM8995_DAC1_LEFT_VOLUME:
	case WM8995_DAC1_RIGHT_VOLUME:
	case WM8995_DAC2_LEFT_VOLUME:
	case WM8995_DAC2_RIGHT_VOLUME:
	case WM8995_OUTPUT_VOLUME_ZC_1:
	case WM8995_MICBIAS_1:
	case WM8995_MICBIAS_2:
	case WM8995_LDO_1:
	case WM8995_LDO_2:
	case WM8995_ACCESSORY_DETECT_MODE1:
	case WM8995_ACCESSORY_DETECT_MODE2:
	case WM8995_HEADPHONE_DETECT1:
	case WM8995_HEADPHONE_DETECT2:
	case WM8995_MIC_DETECT_1:
	case WM8995_MIC_DETECT_2:
	case WM8995_CHARGE_PUMP_1:
	case WM8995_CLASS_W_1:
	case WM8995_DC_SERVO_1:
	case WM8995_DC_SERVO_2:
	case WM8995_DC_SERVO_3:
	case WM8995_DC_SERVO_5:
	case WM8995_DC_SERVO_6:
	case WM8995_DC_SERVO_7:
	case WM8995_DC_SERVO_READBACK_0:
	case WM8995_ANALOGUE_HP_1:
	case WM8995_ANALOGUE_HP_2:
	case WM8995_CHIP_REVISION:
	case WM8995_CONTROL_INTERFACE_1:
	case WM8995_CONTROL_INTERFACE_2:
	case WM8995_WRITE_SEQUENCER_CTRL_1:
	case WM8995_WRITE_SEQUENCER_CTRL_2:
	case WM8995_AIF1_CLOCKING_1:
	case WM8995_AIF1_CLOCKING_2:
	case WM8995_AIF2_CLOCKING_1:
	case WM8995_AIF2_CLOCKING_2:
	case WM8995_CLOCKING_1:
	case WM8995_CLOCKING_2:
	case WM8995_AIF1_RATE:
	case WM8995_AIF2_RATE:
	case WM8995_RATE_STATUS:
	case WM8995_FLL1_CONTROL_1:
	case WM8995_FLL1_CONTROL_2:
	case WM8995_FLL1_CONTROL_3:
	case WM8995_FLL1_CONTROL_4:
	case WM8995_FLL1_CONTROL_5:
	case WM8995_FLL2_CONTROL_1:
	case WM8995_FLL2_CONTROL_2:
	case WM8995_FLL2_CONTROL_3:
	case WM8995_FLL2_CONTROL_4:
	case WM8995_FLL2_CONTROL_5:
	case WM8995_AIF1_CONTROL_1:
	case WM8995_AIF1_CONTROL_2:
	case WM8995_AIF1_MASTER_SLAVE:
	case WM8995_AIF1_BCLK:
	case WM8995_AIF1ADC_LRCLK:
	case WM8995_AIF1DAC_LRCLK:
	case WM8995_AIF1DAC_DATA:
	case WM8995_AIF1ADC_DATA:
	case WM8995_AIF2_CONTROL_1:
	case WM8995_AIF2_CONTROL_2:
	case WM8995_AIF2_MASTER_SLAVE:
	case WM8995_AIF2_BCLK:
	case WM8995_AIF2ADC_LRCLK:
	case WM8995_AIF2DAC_LRCLK:
	case WM8995_AIF2DAC_DATA:
	case WM8995_AIF2ADC_DATA:
	case WM8995_AIF1_ADC1_LEFT_VOLUME:
	case WM8995_AIF1_ADC1_RIGHT_VOLUME:
	case WM8995_AIF1_DAC1_LEFT_VOLUME:
	case WM8995_AIF1_DAC1_RIGHT_VOLUME:
	case WM8995_AIF1_ADC2_LEFT_VOLUME:
	case WM8995_AIF1_ADC2_RIGHT_VOLUME:
	case WM8995_AIF1_DAC2_LEFT_VOLUME:
	case WM8995_AIF1_DAC2_RIGHT_VOLUME:
	case WM8995_AIF1_ADC1_FILTERS:
	case WM8995_AIF1_ADC2_FILTERS:
	case WM8995_AIF1_DAC1_FILTERS_1:
	case WM8995_AIF1_DAC1_FILTERS_2:
	case WM8995_AIF1_DAC2_FILTERS_1:
	case WM8995_AIF1_DAC2_FILTERS_2:
	case WM8995_AIF1_DRC1_1:
	case WM8995_AIF1_DRC1_2:
	case WM8995_AIF1_DRC1_3:
	case WM8995_AIF1_DRC1_4:
	case WM8995_AIF1_DRC1_5:
	case WM8995_AIF1_DRC2_1:
	case WM8995_AIF1_DRC2_2:
	case WM8995_AIF1_DRC2_3:
	case WM8995_AIF1_DRC2_4:
	case WM8995_AIF1_DRC2_5:
	case WM8995_AIF1_DAC1_EQ_GAINS_1:
	case WM8995_AIF1_DAC1_EQ_GAINS_2:
	case WM8995_AIF1_DAC1_EQ_BAND_1_A:
	case WM8995_AIF1_DAC1_EQ_BAND_1_B:
	case WM8995_AIF1_DAC1_EQ_BAND_1_PG:
	case WM8995_AIF1_DAC1_EQ_BAND_2_A:
	case WM8995_AIF1_DAC1_EQ_BAND_2_B:
	case WM8995_AIF1_DAC1_EQ_BAND_2_C:
	case WM8995_AIF1_DAC1_EQ_BAND_2_PG:
	case WM8995_AIF1_DAC1_EQ_BAND_3_A:
	case WM8995_AIF1_DAC1_EQ_BAND_3_B:
	case WM8995_AIF1_DAC1_EQ_BAND_3_C:
	case WM8995_AIF1_DAC1_EQ_BAND_3_PG:
	case WM8995_AIF1_DAC1_EQ_BAND_4_A:
	case WM8995_AIF1_DAC1_EQ_BAND_4_B:
	case WM8995_AIF1_DAC1_EQ_BAND_4_C:
	case WM8995_AIF1_DAC1_EQ_BAND_4_PG:
	case WM8995_AIF1_DAC1_EQ_BAND_5_A:
	case WM8995_AIF1_DAC1_EQ_BAND_5_B:
	case WM8995_AIF1_DAC1_EQ_BAND_5_PG:
	case WM8995_AIF1_DAC2_EQ_GAINS_1:
	case WM8995_AIF1_DAC2_EQ_GAINS_2:
	case WM8995_AIF1_DAC2_EQ_BAND_1_A:
	case WM8995_AIF1_DAC2_EQ_BAND_1_B:
	case WM8995_AIF1_DAC2_EQ_BAND_1_PG:
	case WM8995_AIF1_DAC2_EQ_BAND_2_A:
	case WM8995_AIF1_DAC2_EQ_BAND_2_B:
	case WM8995_AIF1_DAC2_EQ_BAND_2_C:
	case WM8995_AIF1_DAC2_EQ_BAND_2_PG:
	case WM8995_AIF1_DAC2_EQ_BAND_3_A:
	case WM8995_AIF1_DAC2_EQ_BAND_3_B:
	case WM8995_AIF1_DAC2_EQ_BAND_3_C:
	case WM8995_AIF1_DAC2_EQ_BAND_3_PG:
	case WM8995_AIF1_DAC2_EQ_BAND_4_A:
	case WM8995_AIF1_DAC2_EQ_BAND_4_B:
	case WM8995_AIF1_DAC2_EQ_BAND_4_C:
	case WM8995_AIF1_DAC2_EQ_BAND_4_PG:
	case WM8995_AIF1_DAC2_EQ_BAND_5_A:
	case WM8995_AIF1_DAC2_EQ_BAND_5_B:
	case WM8995_AIF1_DAC2_EQ_BAND_5_PG:
	case WM8995_AIF2_ADC_LEFT_VOLUME:
	case WM8995_AIF2_ADC_RIGHT_VOLUME:
	case WM8995_AIF2_DAC_LEFT_VOLUME:
	case WM8995_AIF2_DAC_RIGHT_VOLUME:
	case WM8995_AIF2_ADC_FILTERS:
	case WM8995_AIF2_DAC_FILTERS_1:
	case WM8995_AIF2_DAC_FILTERS_2:
	case WM8995_AIF2_DRC_1:
	case WM8995_AIF2_DRC_2:
	case WM8995_AIF2_DRC_3:
	case WM8995_AIF2_DRC_4:
	case WM8995_AIF2_DRC_5:
	case WM8995_AIF2_EQ_GAINS_1:
	case WM8995_AIF2_EQ_GAINS_2:
	case WM8995_AIF2_EQ_BAND_1_A:
	case WM8995_AIF2_EQ_BAND_1_B:
	case WM8995_AIF2_EQ_BAND_1_PG:
	case WM8995_AIF2_EQ_BAND_2_A:
	case WM8995_AIF2_EQ_BAND_2_B:
	case WM8995_AIF2_EQ_BAND_2_C:
	case WM8995_AIF2_EQ_BAND_2_PG:
	case WM8995_AIF2_EQ_BAND_3_A:
	case WM8995_AIF2_EQ_BAND_3_B:
	case WM8995_AIF2_EQ_BAND_3_C:
	case WM8995_AIF2_EQ_BAND_3_PG:
	case WM8995_AIF2_EQ_BAND_4_A:
	case WM8995_AIF2_EQ_BAND_4_B:
	case WM8995_AIF2_EQ_BAND_4_C:
	case WM8995_AIF2_EQ_BAND_4_PG:
	case WM8995_AIF2_EQ_BAND_5_A:
	case WM8995_AIF2_EQ_BAND_5_B:
	case WM8995_AIF2_EQ_BAND_5_PG:
	case WM8995_DAC1_MIXER_VOLUMES:
	case WM8995_DAC1_LEFT_MIXER_ROUTING:
	case WM8995_DAC1_RIGHT_MIXER_ROUTING:
	case WM8995_DAC2_MIXER_VOLUMES:
	case WM8995_DAC2_LEFT_MIXER_ROUTING:
	case WM8995_DAC2_RIGHT_MIXER_ROUTING:
	case WM8995_AIF1_ADC1_LEFT_MIXER_ROUTING:
	case WM8995_AIF1_ADC1_RIGHT_MIXER_ROUTING:
	case WM8995_AIF1_ADC2_LEFT_MIXER_ROUTING:
	case WM8995_AIF1_ADC2_RIGHT_MIXER_ROUTING:
	case WM8995_DAC_SOFTMUTE:
	case WM8995_OVERSAMPLING:
	case WM8995_SIDETONE:
	case WM8995_GPIO_1:
	case WM8995_GPIO_2:
	case WM8995_GPIO_3:
	case WM8995_GPIO_4:
	case WM8995_GPIO_5:
	case WM8995_GPIO_6:
	case WM8995_GPIO_7:
	case WM8995_GPIO_8:
	case WM8995_GPIO_9:
	case WM8995_GPIO_10:
	case WM8995_GPIO_11:
	case WM8995_GPIO_12:
	case WM8995_GPIO_13:
	case WM8995_GPIO_14:
	case WM8995_PULL_CONTROL_1:
	case WM8995_PULL_CONTROL_2:
	case WM8995_INTERRUPT_STATUS_1:
	case WM8995_INTERRUPT_STATUS_2:
	case WM8995_INTERRUPT_RAW_STATUS_2:
	case WM8995_INTERRUPT_STATUS_1_MASK:
	case WM8995_INTERRUPT_STATUS_2_MASK:
	case WM8995_INTERRUPT_CONTROL:
	case WM8995_LEFT_PDM_SPEAKER_1:
	case WM8995_RIGHT_PDM_SPEAKER_1:
	case WM8995_PDM_SPEAKER_1_MUTE_SEQUENCE:
	case WM8995_LEFT_PDM_SPEAKER_2:
	case WM8995_RIGHT_PDM_SPEAKER_2:
	case WM8995_PDM_SPEAKER_2_MUTE_SEQUENCE:
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
          unsigned int reg = 100;
        
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wm8995_readable(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int reg = 255;
        
          int _len_dev0 = 65025;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wm8995_readable(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int reg = 10;
        
          int _len_dev0 = 100;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wm8995_readable(dev,reg);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned int reg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = wm8995_readable(dev,reg);
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
