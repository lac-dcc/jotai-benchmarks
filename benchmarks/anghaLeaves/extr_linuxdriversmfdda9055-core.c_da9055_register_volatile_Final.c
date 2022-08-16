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
#define  DA9055_REG_ADCIN1_RES 156 
#define  DA9055_REG_ADCIN2_RES 155 
#define  DA9055_REG_ADCIN3_RES 154 
#define  DA9055_REG_ADC_MAN 153 
#define  DA9055_REG_ADC_RES_H 152 
#define  DA9055_REG_ADC_RES_L 151 
#define  DA9055_REG_ALARM_MI 150 
#define  DA9055_REG_BCORE_CONT 149 
#define  DA9055_REG_BMEM_CONT 148 
#define  DA9055_REG_CONTROL_A 147 
#define  DA9055_REG_CONTROL_E 146 
#define  DA9055_REG_COUNT_D 145 
#define  DA9055_REG_COUNT_H 144 
#define  DA9055_REG_COUNT_MI 143 
#define  DA9055_REG_COUNT_MO 142 
#define  DA9055_REG_COUNT_S 141 
#define  DA9055_REG_COUNT_Y 140 
#define  DA9055_REG_EVENT_A 139 
#define  DA9055_REG_EVENT_B 138 
#define  DA9055_REG_EVENT_C 137 
#define  DA9055_REG_LDO1_CONT 136 
#define  DA9055_REG_LDO2_CONT 135 
#define  DA9055_REG_LDO3_CONT 134 
#define  DA9055_REG_LDO4_CONT 133 
#define  DA9055_REG_LDO5_CONT 132 
#define  DA9055_REG_LDO6_CONT 131 
#define  DA9055_REG_STATUS_A 130 
#define  DA9055_REG_STATUS_B 129 
#define  DA9055_REG_VSYS_RES 128 

__attribute__((used)) static bool da9055_register_volatile(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case DA9055_REG_STATUS_A:
	case DA9055_REG_STATUS_B:
	case DA9055_REG_EVENT_A:
	case DA9055_REG_EVENT_B:
	case DA9055_REG_EVENT_C:

	case DA9055_REG_CONTROL_A:
	case DA9055_REG_CONTROL_E:

	case DA9055_REG_ADC_MAN:
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
	case DA9055_REG_ALARM_MI:

	case DA9055_REG_BCORE_CONT:
	case DA9055_REG_BMEM_CONT:
	case DA9055_REG_LDO1_CONT:
	case DA9055_REG_LDO2_CONT:
	case DA9055_REG_LDO3_CONT:
	case DA9055_REG_LDO4_CONT:
	case DA9055_REG_LDO5_CONT:
	case DA9055_REG_LDO6_CONT:
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
          int benchRet = da9055_register_volatile(dev,reg);
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
          int benchRet = da9055_register_volatile(dev,reg);
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
