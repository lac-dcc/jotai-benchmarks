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
#define  S10_DERRADDR_OFST 139 
#define  S10_DIAGINTTEST_OFST 138 
#define  S10_ECCCTRL1_OFST 137 
#define  S10_ERRINTEN_OFST 136 
#define  S10_INTMODE_OFST 135 
#define  S10_INTSTAT_OFST 134 
#define  S10_SERRADDR_OFST 133 
#define  S10_SYSMGR_ECC_INTMASK_CLR_OFST 132 
#define  S10_SYSMGR_ECC_INTMASK_SET_OFST 131 
#define  S10_SYSMGR_ECC_INTMASK_VAL_OFST 130 
#define  S10_SYSMGR_ECC_INTSTAT_DERR_OFST 129 
#define  S10_SYSMGR_ECC_INTSTAT_SERR_OFST 128 

__attribute__((used)) static bool s10_sdram_readable_reg(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case S10_ECCCTRL1_OFST:
	case S10_ERRINTEN_OFST:
	case S10_INTMODE_OFST:
	case S10_INTSTAT_OFST:
	case S10_DERRADDR_OFST:
	case S10_SERRADDR_OFST:
	case S10_DIAGINTTEST_OFST:
	case S10_SYSMGR_ECC_INTMASK_VAL_OFST:
	case S10_SYSMGR_ECC_INTMASK_SET_OFST:
	case S10_SYSMGR_ECC_INTMASK_CLR_OFST:
	case S10_SYSMGR_ECC_INTSTAT_SERR_OFST:
	case S10_SYSMGR_ECC_INTSTAT_DERR_OFST:
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
          int benchRet = s10_sdram_readable_reg(dev,reg);
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
          int benchRet = s10_sdram_readable_reg(dev,reg);
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
