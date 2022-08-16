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
#define  AC97_CODEC_CLASS_REV 144 
#define  AC97_EXTENDED_ID 143 
#define  AC97_EXTENDED_MID 142 
#define  AC97_EXTENDED_MSTATUS 141 
#define  AC97_EXTENDED_STATUS 140 
#define  AC97_FUNC_INFO 139 
#define  AC97_FUNC_SELECT 138 
#define  AC97_GPIO_STATUS 137 
#define  AC97_INT_PAGING 136 
#define  AC97_MISC_AFE 135 
#define  AC97_PCI_SID 134 
#define  AC97_PCI_SVID 133 
#define  AC97_POWERDOWN 132 
#define  AC97_RESET 131 
#define  AC97_SENSE_INFO 130 
#define  AC97_VENDOR_ID1 129 
#define  AC97_VENDOR_ID2 128 

bool regmap_ac97_default_volatile(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case AC97_RESET:
	case AC97_POWERDOWN:
	case AC97_INT_PAGING:
	case AC97_EXTENDED_ID:
	case AC97_EXTENDED_STATUS:
	case AC97_EXTENDED_MID:
	case AC97_EXTENDED_MSTATUS:
	case AC97_GPIO_STATUS:
	case AC97_MISC_AFE:
	case AC97_VENDOR_ID1:
	case AC97_VENDOR_ID2:
	case AC97_CODEC_CLASS_REV:
	case AC97_PCI_SVID:
	case AC97_PCI_SID:
	case AC97_FUNC_SELECT:
	case AC97_FUNC_INFO:
	case AC97_SENSE_INFO:
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
          int benchRet = regmap_ac97_default_volatile(dev,reg);
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
          int benchRet = regmap_ac97_default_volatile(dev,reg);
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
