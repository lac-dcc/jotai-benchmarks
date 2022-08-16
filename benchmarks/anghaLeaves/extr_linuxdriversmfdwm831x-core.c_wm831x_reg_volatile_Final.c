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
#define  WM831X_AUXADC_DATA 148 
#define  WM831X_CHARGER_STATUS 147 
#define  WM831X_DCDC_STATUS 146 
#define  WM831X_DCDC_UV_STATUS 145 
#define  WM831X_GPIO_LEVEL 144 
#define  WM831X_INTERRUPT_STATUS_1 143 
#define  WM831X_INTERRUPT_STATUS_2 142 
#define  WM831X_INTERRUPT_STATUS_3 141 
#define  WM831X_INTERRUPT_STATUS_4 140 
#define  WM831X_INTERRUPT_STATUS_5 139 
#define  WM831X_LDO_STATUS 138 
#define  WM831X_LDO_UV_STATUS 137 
#define  WM831X_OFF_SOURCE 136 
#define  WM831X_ON_SOURCE 135 
#define  WM831X_RTC_TIME_1 134 
#define  WM831X_RTC_TIME_2 133 
#define  WM831X_SYSTEM_INTERRUPTS 132 
#define  WM831X_SYSTEM_STATUS 131 
#define  WM831X_TOUCH_DATA_X 130 
#define  WM831X_TOUCH_DATA_Y 129 
#define  WM831X_TOUCH_DATA_Z 128 

__attribute__((used)) static bool wm831x_reg_volatile(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM831X_SYSTEM_STATUS:
	case WM831X_ON_SOURCE:
	case WM831X_OFF_SOURCE:
	case WM831X_GPIO_LEVEL:
	case WM831X_SYSTEM_INTERRUPTS:
	case WM831X_INTERRUPT_STATUS_1:
	case WM831X_INTERRUPT_STATUS_2:
	case WM831X_INTERRUPT_STATUS_3:
	case WM831X_INTERRUPT_STATUS_4:
	case WM831X_INTERRUPT_STATUS_5:
	case WM831X_RTC_TIME_1:
	case WM831X_RTC_TIME_2:
	case WM831X_TOUCH_DATA_X:
	case WM831X_TOUCH_DATA_Y:
	case WM831X_TOUCH_DATA_Z:
	case WM831X_AUXADC_DATA:
	case WM831X_CHARGER_STATUS:
	case WM831X_DCDC_STATUS:
	case WM831X_LDO_STATUS:
	case WM831X_DCDC_UV_STATUS:
	case WM831X_LDO_UV_STATUS:
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
          int benchRet = wm831x_reg_volatile(dev,reg);
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
          int benchRet = wm831x_reg_volatile(dev,reg);
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
