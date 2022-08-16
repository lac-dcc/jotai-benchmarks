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
#define  MLXPLAT_CPLD_LPC_REG_AGGRLO_MASK_OFFSET 167 
#define  MLXPLAT_CPLD_LPC_REG_AGGRLO_OFFSET 166 
#define  MLXPLAT_CPLD_LPC_REG_AGGR_MASK_OFFSET 165 
#define  MLXPLAT_CPLD_LPC_REG_AGGR_OFFSET 164 
#define  MLXPLAT_CPLD_LPC_REG_ASIC_EVENT_OFFSET 163 
#define  MLXPLAT_CPLD_LPC_REG_ASIC_HEALTH_OFFSET 162 
#define  MLXPLAT_CPLD_LPC_REG_ASIC_MASK_OFFSET 161 
#define  MLXPLAT_CPLD_LPC_REG_CPLD1_VER_OFFSET 160 
#define  MLXPLAT_CPLD_LPC_REG_CPLD2_VER_OFFSET 159 
#define  MLXPLAT_CPLD_LPC_REG_FAN_EVENT_OFFSET 158 
#define  MLXPLAT_CPLD_LPC_REG_FAN_MASK_OFFSET 157 
#define  MLXPLAT_CPLD_LPC_REG_FAN_OFFSET 156 
#define  MLXPLAT_CPLD_LPC_REG_GP1_OFFSET 155 
#define  MLXPLAT_CPLD_LPC_REG_GP2_OFFSET 154 
#define  MLXPLAT_CPLD_LPC_REG_LED1_OFFSET 153 
#define  MLXPLAT_CPLD_LPC_REG_LED2_OFFSET 152 
#define  MLXPLAT_CPLD_LPC_REG_LED3_OFFSET 151 
#define  MLXPLAT_CPLD_LPC_REG_LED4_OFFSET 150 
#define  MLXPLAT_CPLD_LPC_REG_LED5_OFFSET 149 
#define  MLXPLAT_CPLD_LPC_REG_PSU_EVENT_OFFSET 148 
#define  MLXPLAT_CPLD_LPC_REG_PSU_MASK_OFFSET 147 
#define  MLXPLAT_CPLD_LPC_REG_PSU_OFFSET 146 
#define  MLXPLAT_CPLD_LPC_REG_PWM1_OFFSET 145 
#define  MLXPLAT_CPLD_LPC_REG_PWM_CONTROL_OFFSET 144 
#define  MLXPLAT_CPLD_LPC_REG_PWR_EVENT_OFFSET 143 
#define  MLXPLAT_CPLD_LPC_REG_PWR_MASK_OFFSET 142 
#define  MLXPLAT_CPLD_LPC_REG_PWR_OFFSET 141 
#define  MLXPLAT_CPLD_LPC_REG_RESET_CAUSE_OFFSET 140 
#define  MLXPLAT_CPLD_LPC_REG_TACHO10_OFFSET 139 
#define  MLXPLAT_CPLD_LPC_REG_TACHO11_OFFSET 138 
#define  MLXPLAT_CPLD_LPC_REG_TACHO12_OFFSET 137 
#define  MLXPLAT_CPLD_LPC_REG_TACHO1_OFFSET 136 
#define  MLXPLAT_CPLD_LPC_REG_TACHO2_OFFSET 135 
#define  MLXPLAT_CPLD_LPC_REG_TACHO3_OFFSET 134 
#define  MLXPLAT_CPLD_LPC_REG_TACHO4_OFFSET 133 
#define  MLXPLAT_CPLD_LPC_REG_TACHO5_OFFSET 132 
#define  MLXPLAT_CPLD_LPC_REG_TACHO6_OFFSET 131 
#define  MLXPLAT_CPLD_LPC_REG_TACHO7_OFFSET 130 
#define  MLXPLAT_CPLD_LPC_REG_TACHO8_OFFSET 129 
#define  MLXPLAT_CPLD_LPC_REG_TACHO9_OFFSET 128 

__attribute__((used)) static bool mlxplat_mlxcpld_volatile_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case MLXPLAT_CPLD_LPC_REG_CPLD1_VER_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_CPLD2_VER_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_RESET_CAUSE_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_LED1_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_LED2_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_LED3_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_LED4_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_LED5_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_GP1_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_GP2_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_AGGR_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_AGGR_MASK_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_AGGRLO_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_AGGRLO_MASK_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_ASIC_HEALTH_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_ASIC_EVENT_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_ASIC_MASK_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_PSU_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_PSU_EVENT_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_PSU_MASK_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_PWR_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_PWR_EVENT_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_PWR_MASK_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_FAN_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_FAN_EVENT_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_FAN_MASK_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_PWM1_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO1_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO2_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO3_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO4_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO5_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO6_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO7_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO8_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO9_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO10_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO11_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_TACHO12_OFFSET:
	case MLXPLAT_CPLD_LPC_REG_PWM_CONTROL_OFFSET:
		return true;
	}
	return false;
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
          int benchRet = mlxplat_mlxcpld_volatile_reg(dev,reg);
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
          int benchRet = mlxplat_mlxcpld_volatile_reg(dev,reg);
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
