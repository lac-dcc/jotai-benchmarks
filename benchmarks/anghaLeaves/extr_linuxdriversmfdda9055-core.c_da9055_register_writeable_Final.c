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
#define  DA9055_REG_ADCIN1_RES 189 
#define  DA9055_REG_ADCIN2_RES 188 
#define  DA9055_REG_ADCIN3_RES 187 
#define  DA9055_REG_ADC_CONT 186 
#define  DA9055_REG_ADC_MAN 185 
#define  DA9055_REG_ADC_RES_H 184 
#define  DA9055_REG_ADC_RES_L 183 
#define  DA9055_REG_ALARM_D 182 
#define  DA9055_REG_ALARM_H 181 
#define  DA9055_REG_ALARM_MI 180 
#define  DA9055_REG_ALARM_MO 179 
#define  DA9055_REG_ALARM_Y 178 
#define  DA9055_REG_BCORE_CONT 177 
#define  DA9055_REG_BCORE_MODE 176 
#define  DA9055_REG_BMEM_CONT 175 
#define  DA9055_REG_BUCK_LIM 174 
#define  DA9055_REG_CONTROL_A 173 
#define  DA9055_REG_CONTROL_B 172 
#define  DA9055_REG_CONTROL_C 171 
#define  DA9055_REG_CONTROL_D 170 
#define  DA9055_REG_CONTROL_E 169 
#define  DA9055_REG_COUNT_D 168 
#define  DA9055_REG_COUNT_H 167 
#define  DA9055_REG_COUNT_MI 166 
#define  DA9055_REG_COUNT_MO 165 
#define  DA9055_REG_COUNT_S 164 
#define  DA9055_REG_COUNT_Y 163 
#define  DA9055_REG_EVENT_A 162 
#define  DA9055_REG_EVENT_B 161 
#define  DA9055_REG_EVENT_C 160 
#define  DA9055_REG_GPIO0_1 159 
#define  DA9055_REG_GPIO2 158 
#define  DA9055_REG_GPIO_MODE0_2 157 
#define  DA9055_REG_IRQ_MASK_A 156 
#define  DA9055_REG_IRQ_MASK_B 155 
#define  DA9055_REG_IRQ_MASK_C 154 
#define  DA9055_REG_LDO1_CONT 153 
#define  DA9055_REG_LDO2_CONT 152 
#define  DA9055_REG_LDO3_CONT 151 
#define  DA9055_REG_LDO4_CONT 150 
#define  DA9055_REG_LDO5_CONT 149 
#define  DA9055_REG_LDO6_CONT 148 
#define  DA9055_REG_STATUS_A 147 
#define  DA9055_REG_STATUS_B 146 
#define  DA9055_REG_VBCORE_A 145 
#define  DA9055_REG_VBCORE_B 144 
#define  DA9055_REG_VBMEM_A 143 
#define  DA9055_REG_VBMEM_B 142 
#define  DA9055_REG_VLDO1_A 141 
#define  DA9055_REG_VLDO1_B 140 
#define  DA9055_REG_VLDO2_A 139 
#define  DA9055_REG_VLDO2_B 138 
#define  DA9055_REG_VLDO3_A 137 
#define  DA9055_REG_VLDO3_B 136 
#define  DA9055_REG_VLDO4_A 135 
#define  DA9055_REG_VLDO4_B 134 
#define  DA9055_REG_VLDO5_A 133 
#define  DA9055_REG_VLDO5_B 132 
#define  DA9055_REG_VLDO6_A 131 
#define  DA9055_REG_VLDO6_B 130 
#define  DA9055_REG_VSYS_MON 129 
#define  DA9055_REG_VSYS_RES 128 

__attribute__((used)) static bool da9055_register_writeable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case DA9055_REG_STATUS_A:
	case DA9055_REG_STATUS_B:
	case DA9055_REG_EVENT_A:
	case DA9055_REG_EVENT_B:
	case DA9055_REG_EVENT_C:
	case DA9055_REG_IRQ_MASK_A:
	case DA9055_REG_IRQ_MASK_B:
	case DA9055_REG_IRQ_MASK_C:

	case DA9055_REG_CONTROL_A:
	case DA9055_REG_CONTROL_B:
	case DA9055_REG_CONTROL_C:
	case DA9055_REG_CONTROL_D:
	case DA9055_REG_CONTROL_E:

	case DA9055_REG_ADC_MAN:
	case DA9055_REG_ADC_CONT:
	case DA9055_REG_VSYS_MON:
	case DA9055_REG_ADC_RES_L:
	case DA9055_REG_ADC_RES_H:
	case DA9055_REG_VSYS_RES:
	case DA9055_REG_ADCIN1_RES:
	case DA9055_REG_ADCIN2_RES:
	case DA9055_REG_ADCIN3_RES:

	case DA9055_REG_COUNT_S:
	case DA9055_REG_COUNT_MI:
	case DA9055_REG_COUNT_H:
	case DA9055_REG_COUNT_D:
	case DA9055_REG_COUNT_MO:
	case DA9055_REG_COUNT_Y:
	case DA9055_REG_ALARM_H:
	case DA9055_REG_ALARM_D:
	case DA9055_REG_ALARM_MI:
	case DA9055_REG_ALARM_MO:
	case DA9055_REG_ALARM_Y:

	case DA9055_REG_GPIO0_1:
	case DA9055_REG_GPIO2:
	case DA9055_REG_GPIO_MODE0_2:

	case DA9055_REG_BCORE_CONT:
	case DA9055_REG_BMEM_CONT:
	case DA9055_REG_LDO1_CONT:
	case DA9055_REG_LDO2_CONT:
	case DA9055_REG_LDO3_CONT:
	case DA9055_REG_LDO4_CONT:
	case DA9055_REG_LDO5_CONT:
	case DA9055_REG_LDO6_CONT:
	case DA9055_REG_BUCK_LIM:
	case DA9055_REG_BCORE_MODE:
	case DA9055_REG_VBCORE_A:
	case DA9055_REG_VBMEM_A:
	case DA9055_REG_VLDO1_A:
	case DA9055_REG_VLDO2_A:
	case DA9055_REG_VLDO3_A:
	case DA9055_REG_VLDO4_A:
	case DA9055_REG_VLDO5_A:
	case DA9055_REG_VLDO6_A:
	case DA9055_REG_VBCORE_B:
	case DA9055_REG_VBMEM_B:
	case DA9055_REG_VLDO1_B:
	case DA9055_REG_VLDO2_B:
	case DA9055_REG_VLDO3_B:
	case DA9055_REG_VLDO4_B:
	case DA9055_REG_VLDO5_B:
	case DA9055_REG_VLDO6_B:
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
          int benchRet = da9055_register_writeable(dev,reg);
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
          int benchRet = da9055_register_writeable(dev,reg);
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
