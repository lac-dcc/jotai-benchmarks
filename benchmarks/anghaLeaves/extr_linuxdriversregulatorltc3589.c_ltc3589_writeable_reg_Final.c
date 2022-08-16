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
#define  LTC3589_B1DTV1 142 
#define  LTC3589_B1DTV2 141 
#define  LTC3589_B2DTV1 140 
#define  LTC3589_B2DTV2 139 
#define  LTC3589_B3DTV1 138 
#define  LTC3589_B3DTV2 137 
#define  LTC3589_CLIRQ 136 
#define  LTC3589_IRQSTAT 135 
#define  LTC3589_L2DTV1 134 
#define  LTC3589_L2DTV2 133 
#define  LTC3589_OVEN 132 
#define  LTC3589_SCR1 131 
#define  LTC3589_SCR2 130 
#define  LTC3589_VCCR 129 
#define  LTC3589_VRRCR 128 

__attribute__((used)) static bool ltc3589_writeable_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case LTC3589_IRQSTAT:
	case LTC3589_SCR1:
	case LTC3589_OVEN:
	case LTC3589_SCR2:
	case LTC3589_VCCR:
	case LTC3589_CLIRQ:
	case LTC3589_B1DTV1:
	case LTC3589_B1DTV2:
	case LTC3589_VRRCR:
	case LTC3589_B2DTV1:
	case LTC3589_B2DTV2:
	case LTC3589_B3DTV1:
	case LTC3589_B3DTV2:
	case LTC3589_L2DTV1:
	case LTC3589_L2DTV2:
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
          int benchRet = ltc3589_writeable_reg(dev,reg);
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
          int benchRet = ltc3589_writeable_reg(dev,reg);
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
