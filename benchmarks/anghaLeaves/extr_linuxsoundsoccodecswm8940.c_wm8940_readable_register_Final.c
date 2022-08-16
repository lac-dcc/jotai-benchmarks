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
#define  WM8940_ADC 167 
#define  WM8940_ADCBOOST 166 
#define  WM8940_ADCVOL 165 
#define  WM8940_ADDCNTRL 164 
#define  WM8940_ALC1 163 
#define  WM8940_ALC2 162 
#define  WM8940_ALC3 161 
#define  WM8940_ALC4 160 
#define  WM8940_CLOCK 159 
#define  WM8940_COMPANDINGCTL 158 
#define  WM8940_CTLINT 157 
#define  WM8940_DAC 156 
#define  WM8940_DACLIM1 155 
#define  WM8940_DACLIM2 154 
#define  WM8940_DACVOL 153 
#define  WM8940_GPIO 152 
#define  WM8940_IFACE 151 
#define  WM8940_INPUTCTL 150 
#define  WM8940_MONOMIX 149 
#define  WM8940_NOISEGATE 148 
#define  WM8940_NOTCH1 147 
#define  WM8940_NOTCH2 146 
#define  WM8940_NOTCH3 145 
#define  WM8940_NOTCH4 144 
#define  WM8940_NOTCH5 143 
#define  WM8940_NOTCH6 142 
#define  WM8940_NOTCH7 141 
#define  WM8940_NOTCH8 140 
#define  WM8940_OUTPUTCTL 139 
#define  WM8940_PGAGAIN 138 
#define  WM8940_PLLK1 137 
#define  WM8940_PLLK2 136 
#define  WM8940_PLLK3 135 
#define  WM8940_PLLN 134 
#define  WM8940_POWER1 133 
#define  WM8940_POWER2 132 
#define  WM8940_POWER3 131 
#define  WM8940_SOFTRESET 130 
#define  WM8940_SPKMIX 129 
#define  WM8940_SPKVOL 128 

__attribute__((used)) static bool wm8940_readable_register(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM8940_SOFTRESET:
	case WM8940_POWER1:
	case WM8940_POWER2:
	case WM8940_POWER3:
	case WM8940_IFACE:
	case WM8940_COMPANDINGCTL:
	case WM8940_CLOCK:
	case WM8940_ADDCNTRL:
	case WM8940_GPIO:
	case WM8940_CTLINT:
	case WM8940_DAC:
	case WM8940_DACVOL:
	case WM8940_ADC:
	case WM8940_ADCVOL:
	case WM8940_NOTCH1:
	case WM8940_NOTCH2:
	case WM8940_NOTCH3:
	case WM8940_NOTCH4:
	case WM8940_NOTCH5:
	case WM8940_NOTCH6:
	case WM8940_NOTCH7:
	case WM8940_NOTCH8:
	case WM8940_DACLIM1:
	case WM8940_DACLIM2:
	case WM8940_ALC1:
	case WM8940_ALC2:
	case WM8940_ALC3:
	case WM8940_NOISEGATE:
	case WM8940_PLLN:
	case WM8940_PLLK1:
	case WM8940_PLLK2:
	case WM8940_PLLK3:
	case WM8940_ALC4:
	case WM8940_INPUTCTL:
	case WM8940_PGAGAIN:
	case WM8940_ADCBOOST:
	case WM8940_OUTPUTCTL:
	case WM8940_SPKMIX:
	case WM8940_SPKVOL:
	case WM8940_MONOMIX:
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
          int benchRet = wm8940_readable_register(dev,reg);
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
          int benchRet = wm8940_readable_register(dev,reg);
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
