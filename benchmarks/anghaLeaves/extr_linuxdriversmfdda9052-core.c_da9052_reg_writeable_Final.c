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
#define  DA9052_ADC_CONT_REG 234 
#define  DA9052_ADC_MAN_REG 233 
#define  DA9052_ADC_RES_H_REG 232 
#define  DA9052_ADC_RES_L_REG 231 
#define  DA9052_ALARM_D_REG 230 
#define  DA9052_ALARM_H_REG 229 
#define  DA9052_ALARM_MI_REG 228 
#define  DA9052_ALARM_MO_REG 227 
#define  DA9052_ALARM_Y_REG 226 
#define  DA9052_AUTO4_HIGH_REG 225 
#define  DA9052_AUTO4_LOW_REG 224 
#define  DA9052_AUTO5_HIGH_REG 223 
#define  DA9052_AUTO5_LOW_REG 222 
#define  DA9052_AUTO6_HIGH_REG 221 
#define  DA9052_AUTO6_LOW_REG 220 
#define  DA9052_BATCHG_REG 219 
#define  DA9052_BBAT_CONT_REG 218 
#define  DA9052_BOOST_REG 217 
#define  DA9052_BUCKA_REG 216 
#define  DA9052_BUCKB_REG 215 
#define  DA9052_BUCKCORE_REG 214 
#define  DA9052_BUCKMEM_REG 213 
#define  DA9052_BUCKPERI_REG 212 
#define  DA9052_BUCKPRO_REG 211 
#define  DA9052_CHGBUCK_REG 210 
#define  DA9052_CHG_CONT_REG 209 
#define  DA9052_CONTROL_A_REG 208 
#define  DA9052_CONTROL_B_REG 207 
#define  DA9052_CONTROL_C_REG 206 
#define  DA9052_CONTROL_D_REG 205 
#define  DA9052_COUNT_D_REG 204 
#define  DA9052_COUNT_H_REG 203 
#define  DA9052_COUNT_MI_REG 202 
#define  DA9052_COUNT_MO_REG 201 
#define  DA9052_COUNT_S_REG 200 
#define  DA9052_COUNT_Y_REG 199 
#define  DA9052_EVENT_A_REG 198 
#define  DA9052_EVENT_B_REG 197 
#define  DA9052_EVENT_C_REG 196 
#define  DA9052_EVENT_D_REG 195 
#define  DA9052_FAULTLOG_REG 194 
#define  DA9052_GPIO_0_1_REG 193 
#define  DA9052_GPIO_10_11_REG 192 
#define  DA9052_GPIO_12_13_REG 191 
#define  DA9052_GPIO_14_15_REG 190 
#define  DA9052_GPIO_2_3_REG 189 
#define  DA9052_GPIO_4_5_REG 188 
#define  DA9052_GPIO_6_7_REG 187 
#define  DA9052_GPIO_8_9_REG 186 
#define  DA9052_ICHG_END_REG 185 
#define  DA9052_ICHG_THD_REG 184 
#define  DA9052_ID_0_1_REG 183 
#define  DA9052_ID_10_11_REG 182 
#define  DA9052_ID_12_13_REG 181 
#define  DA9052_ID_14_15_REG 180 
#define  DA9052_ID_16_17_REG 179 
#define  DA9052_ID_18_19_REG 178 
#define  DA9052_ID_20_21_REG 177 
#define  DA9052_ID_2_3_REG 176 
#define  DA9052_ID_4_5_REG 175 
#define  DA9052_ID_6_7_REG 174 
#define  DA9052_ID_8_9_REG 173 
#define  DA9052_INPUT_CONT_REG 172 
#define  DA9052_IRQ_MASK_A_REG 171 
#define  DA9052_IRQ_MASK_B_REG 170 
#define  DA9052_IRQ_MASK_C_REG 169 
#define  DA9052_IRQ_MASK_D_REG 168 
#define  DA9052_ISET_REG 167 
#define  DA9052_LDO10_REG 166 
#define  DA9052_LDO1_REG 165 
#define  DA9052_LDO2_REG 164 
#define  DA9052_LDO3_REG 163 
#define  DA9052_LDO4_REG 162 
#define  DA9052_LDO5_REG 161 
#define  DA9052_LDO6_REG 160 
#define  DA9052_LDO7_REG 159 
#define  DA9052_LDO8_REG 158 
#define  DA9052_LDO9_REG 157 
#define  DA9052_LED1CONT_REG 156 
#define  DA9052_LED1_CONF_REG 155 
#define  DA9052_LED2CONT_REG 154 
#define  DA9052_LED2_CONF_REG 153 
#define  DA9052_LED3CONT_REG 152 
#define  DA9052_LED3_CONF_REG 151 
#define  DA9052_LEDMIN123_REG 150 
#define  DA9052_LED_CONT_4_REG 149 
#define  DA9052_LED_CONT_5_REG 148 
#define  DA9052_LED_CONT_REG 147 
#define  DA9052_PAGE0_CON_REG 146 
#define  DA9052_PAGE1_CON_REG 145 
#define  DA9052_PDDIS_REG 144 
#define  DA9052_PULLDOWN_REG 143 
#define  DA9052_RESET_REG 142 
#define  DA9052_SEQ_A_REG 141 
#define  DA9052_SEQ_B_REG 140 
#define  DA9052_SEQ_STATUS_REG 139 
#define  DA9052_SEQ_TIMER_REG 138 
#define  DA9052_SUPPLY_REG 137 
#define  DA9052_TBAT_HIGHN_REG 136 
#define  DA9052_TBAT_HIGHP_REG 135 
#define  DA9052_TBAT_LOW_REG 134 
#define  DA9052_TSI_CONT_A_REG 133 
#define  DA9052_TSI_CONT_B_REG 132 
#define  DA9052_T_OFFSET_REG 131 
#define  DA9052_VDD_MON_REG 130 
#define  DA9052_VDD_RES_REG 129 
#define  DA9052_WAITCONT_REG 128 

__attribute__((used)) static bool da9052_reg_writeable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case DA9052_PAGE0_CON_REG:
	case DA9052_EVENT_A_REG:
	case DA9052_EVENT_B_REG:
	case DA9052_EVENT_C_REG:
	case DA9052_EVENT_D_REG:
	case DA9052_FAULTLOG_REG:
	case DA9052_IRQ_MASK_A_REG:
	case DA9052_IRQ_MASK_B_REG:
	case DA9052_IRQ_MASK_C_REG:
	case DA9052_IRQ_MASK_D_REG:
	case DA9052_CONTROL_A_REG:
	case DA9052_CONTROL_B_REG:
	case DA9052_CONTROL_C_REG:
	case DA9052_CONTROL_D_REG:
	case DA9052_PDDIS_REG:
	case DA9052_RESET_REG:
	case DA9052_GPIO_0_1_REG:
	case DA9052_GPIO_2_3_REG:
	case DA9052_GPIO_4_5_REG:
	case DA9052_GPIO_6_7_REG:
	case DA9052_GPIO_8_9_REG:
	case DA9052_GPIO_10_11_REG:
	case DA9052_GPIO_12_13_REG:
	case DA9052_GPIO_14_15_REG:
	case DA9052_ID_0_1_REG:
	case DA9052_ID_2_3_REG:
	case DA9052_ID_4_5_REG:
	case DA9052_ID_6_7_REG:
	case DA9052_ID_8_9_REG:
	case DA9052_ID_10_11_REG:
	case DA9052_ID_12_13_REG:
	case DA9052_ID_14_15_REG:
	case DA9052_ID_16_17_REG:
	case DA9052_ID_18_19_REG:
	case DA9052_ID_20_21_REG:
	case DA9052_SEQ_STATUS_REG:
	case DA9052_SEQ_A_REG:
	case DA9052_SEQ_B_REG:
	case DA9052_SEQ_TIMER_REG:
	case DA9052_BUCKA_REG:
	case DA9052_BUCKB_REG:
	case DA9052_BUCKCORE_REG:
	case DA9052_BUCKPRO_REG:
	case DA9052_BUCKMEM_REG:
	case DA9052_BUCKPERI_REG:
	case DA9052_LDO1_REG:
	case DA9052_LDO2_REG:
	case DA9052_LDO3_REG:
	case DA9052_LDO4_REG:
	case DA9052_LDO5_REG:
	case DA9052_LDO6_REG:
	case DA9052_LDO7_REG:
	case DA9052_LDO8_REG:
	case DA9052_LDO9_REG:
	case DA9052_LDO10_REG:
	case DA9052_SUPPLY_REG:
	case DA9052_PULLDOWN_REG:
	case DA9052_CHGBUCK_REG:
	case DA9052_WAITCONT_REG:
	case DA9052_ISET_REG:
	case DA9052_BATCHG_REG:
	case DA9052_CHG_CONT_REG:
	case DA9052_INPUT_CONT_REG:
	case DA9052_BBAT_CONT_REG:
	case DA9052_BOOST_REG:
	case DA9052_LED_CONT_REG:
	case DA9052_LEDMIN123_REG:
	case DA9052_LED1_CONF_REG:
	case DA9052_LED2_CONF_REG:
	case DA9052_LED3_CONF_REG:
	case DA9052_LED1CONT_REG:
	case DA9052_LED2CONT_REG:
	case DA9052_LED3CONT_REG:
	case DA9052_LED_CONT_4_REG:
	case DA9052_LED_CONT_5_REG:
	case DA9052_ADC_MAN_REG:
	case DA9052_ADC_CONT_REG:
	case DA9052_ADC_RES_L_REG:
	case DA9052_ADC_RES_H_REG:
	case DA9052_VDD_RES_REG:
	case DA9052_VDD_MON_REG:
	case DA9052_ICHG_THD_REG:
	case DA9052_ICHG_END_REG:
	case DA9052_TBAT_HIGHP_REG:
	case DA9052_TBAT_HIGHN_REG:
	case DA9052_TBAT_LOW_REG:
	case DA9052_T_OFFSET_REG:
	case DA9052_AUTO4_HIGH_REG:
	case DA9052_AUTO4_LOW_REG:
	case DA9052_AUTO5_HIGH_REG:
	case DA9052_AUTO5_LOW_REG:
	case DA9052_AUTO6_HIGH_REG:
	case DA9052_AUTO6_LOW_REG:
	case DA9052_TSI_CONT_A_REG:
	case DA9052_TSI_CONT_B_REG:
	case DA9052_COUNT_S_REG:
	case DA9052_COUNT_MI_REG:
	case DA9052_COUNT_H_REG:
	case DA9052_COUNT_D_REG:
	case DA9052_COUNT_MO_REG:
	case DA9052_COUNT_Y_REG:
	case DA9052_ALARM_MI_REG:
	case DA9052_ALARM_H_REG:
	case DA9052_ALARM_D_REG:
	case DA9052_ALARM_MO_REG:
	case DA9052_ALARM_Y_REG:
	case DA9052_PAGE1_CON_REG:
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
          int benchRet = da9052_reg_writeable(dev,reg);
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
          int benchRet = da9052_reg_writeable(dev,reg);
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
