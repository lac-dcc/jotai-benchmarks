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
#define  RC5T583_GPIO_EN_INT 138 
#define  RC5T583_GPIO_GPEDGE1 137 
#define  RC5T583_GPIO_GPEDGE2 136 
 unsigned int RC5T583_GPIO_GPOFUNC ; 
 unsigned int RC5T583_GPIO_IOSEL ; 
#define  RC5T583_GPIO_MON_IOIN 135 
#define  RC5T583_INT_EN_ADC1 134 
#define  RC5T583_INT_EN_ADC2 133 
#define  RC5T583_INT_EN_ADC3 132 
#define  RC5T583_INT_EN_DCDC 131 
#define  RC5T583_INT_EN_RTC 130 
#define  RC5T583_INT_EN_SYS1 129 
#define  RC5T583_INT_EN_SYS2 128 
 unsigned int RC5T583_REG_DC0CTL ; 
 unsigned int RC5T583_REG_LDO9DAC_DS ; 
 unsigned int RC5T583_REG_LDOEN1 ; 
 unsigned int RC5T583_REG_SR3CTL ; 
 unsigned int RC5T583_SLPSEQ1 ; 
 unsigned int RC5T583_SLPSEQ11 ; 

__attribute__((used)) static bool volatile_reg(struct device *dev, unsigned int reg)
{
	/* Enable caching in interrupt registers */
	switch (reg) {
	case RC5T583_INT_EN_SYS1:
	case RC5T583_INT_EN_SYS2:
	case RC5T583_INT_EN_DCDC:
	case RC5T583_INT_EN_RTC:
	case RC5T583_INT_EN_ADC1:
	case RC5T583_INT_EN_ADC2:
	case RC5T583_INT_EN_ADC3:
	case RC5T583_GPIO_GPEDGE1:
	case RC5T583_GPIO_GPEDGE2:
	case RC5T583_GPIO_EN_INT:
		return false;

	case RC5T583_GPIO_MON_IOIN:
		/* This is gpio input register */
		return true;

	default:
		/* Enable caching in gpio registers */
		if ((reg >= RC5T583_GPIO_IOSEL) &&
				(reg <= RC5T583_GPIO_GPOFUNC))
			return false;

		/* Enable caching in sleep seq registers */
		if ((reg >= RC5T583_SLPSEQ1) && (reg <= RC5T583_SLPSEQ11))
			return false;

		/* Enable caching of regulator registers */
		if ((reg >= RC5T583_REG_DC0CTL) && (reg <= RC5T583_REG_SR3CTL))
			return false;
		if ((reg >= RC5T583_REG_LDOEN1) &&
					(reg <= RC5T583_REG_LDO9DAC_DS))
			return false;

		break;
	}

	return true;
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
          int benchRet = volatile_reg(dev,reg);
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
          int benchRet = volatile_reg(dev,reg);
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
