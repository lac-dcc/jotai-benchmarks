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
#define  ALTR_A10SR_FMCAB_REG 143 
#define  ALTR_A10SR_HPS_RST_REG 142 
#define  ALTR_A10SR_I2C_M_REG 141 
#define  ALTR_A10SR_LED_REG 140 
#define  ALTR_A10SR_PBDSW_IRQ_REG 139 
#define  ALTR_A10SR_PBDSW_REG 138 
#define  ALTR_A10SR_PMBUS_REG 137 
#define  ALTR_A10SR_PWR_GOOD1_REG 136 
#define  ALTR_A10SR_PWR_GOOD2_REG 135 
#define  ALTR_A10SR_PWR_GOOD3_REG 134 
#define  ALTR_A10SR_SFPA_REG 133 
#define  ALTR_A10SR_SFPB_REG 132 
#define  ALTR_A10SR_USB_QSPI_REG 131 
#define  ALTR_A10SR_VERSION_READ 130 
#define  ALTR_A10SR_WARM_RST_REG 129 
#define  ALTR_A10SR_WR_KEY_REG 128 

__attribute__((used)) static bool altr_a10sr_reg_readable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case ALTR_A10SR_VERSION_READ:
	case ALTR_A10SR_LED_REG:
	case ALTR_A10SR_PBDSW_REG:
	case ALTR_A10SR_PBDSW_IRQ_REG:
	case ALTR_A10SR_PWR_GOOD1_REG:
	case ALTR_A10SR_PWR_GOOD2_REG:
	case ALTR_A10SR_PWR_GOOD3_REG:
	case ALTR_A10SR_FMCAB_REG:
	case ALTR_A10SR_HPS_RST_REG:
	case ALTR_A10SR_USB_QSPI_REG:
	case ALTR_A10SR_SFPA_REG:
	case ALTR_A10SR_SFPB_REG:
	case ALTR_A10SR_I2C_M_REG:
	case ALTR_A10SR_WARM_RST_REG:
	case ALTR_A10SR_WR_KEY_REG:
	case ALTR_A10SR_PMBUS_REG:
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
          int benchRet = altr_a10sr_reg_readable(dev,reg);
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
          int benchRet = altr_a10sr_reg_readable(dev,reg);
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
