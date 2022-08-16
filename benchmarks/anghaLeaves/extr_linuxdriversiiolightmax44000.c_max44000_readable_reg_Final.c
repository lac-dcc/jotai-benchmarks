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
#define  MAX44000_REG_ALS_DATA_HI 143 
#define  MAX44000_REG_ALS_DATA_LO 142 
#define  MAX44000_REG_ALS_LOTHR_HI 141 
#define  MAX44000_REG_ALS_LOTHR_LO 140 
#define  MAX44000_REG_ALS_UPTHR_HI 139 
#define  MAX44000_REG_ALS_UPTHR_LO 138 
#define  MAX44000_REG_CFG_MAIN 137 
#define  MAX44000_REG_CFG_RX 136 
#define  MAX44000_REG_CFG_TX 135 
#define  MAX44000_REG_PRX_DATA 134 
#define  MAX44000_REG_PRX_IND 133 
#define  MAX44000_REG_PRX_THR 132 
#define  MAX44000_REG_PST 131 
#define  MAX44000_REG_STATUS 130 
#define  MAX44000_REG_TRIM_GAIN_GREEN 129 
#define  MAX44000_REG_TRIM_GAIN_IR 128 

__attribute__((used)) static bool max44000_readable_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case MAX44000_REG_STATUS:
	case MAX44000_REG_CFG_MAIN:
	case MAX44000_REG_CFG_RX:
	case MAX44000_REG_CFG_TX:
	case MAX44000_REG_ALS_DATA_HI:
	case MAX44000_REG_ALS_DATA_LO:
	case MAX44000_REG_PRX_DATA:
	case MAX44000_REG_ALS_UPTHR_HI:
	case MAX44000_REG_ALS_UPTHR_LO:
	case MAX44000_REG_ALS_LOTHR_HI:
	case MAX44000_REG_ALS_LOTHR_LO:
	case MAX44000_REG_PST:
	case MAX44000_REG_PRX_IND:
	case MAX44000_REG_PRX_THR:
	case MAX44000_REG_TRIM_GAIN_GREEN:
	case MAX44000_REG_TRIM_GAIN_IR:
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
          int benchRet = max44000_readable_reg(dev,reg);
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
          int benchRet = max44000_readable_reg(dev,reg);
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
