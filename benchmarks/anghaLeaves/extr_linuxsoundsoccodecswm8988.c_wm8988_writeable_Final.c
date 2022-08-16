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
#define  WM8988_3D 161 
#define  WM8988_ADCDAC 160 
#define  WM8988_ADCIN 159 
#define  WM8988_ADCTL1 158 
#define  WM8988_ADCTL2 157 
#define  WM8988_ADCTL3 156 
#define  WM8988_ALC1 155 
#define  WM8988_ALC2 154 
#define  WM8988_ALC3 153 
#define  WM8988_BASS 152 
#define  WM8988_IFACE 151 
#define  WM8988_LADC 150 
#define  WM8988_LADCIN 149 
#define  WM8988_LDAC 148 
#define  WM8988_LINVOL 147 
#define  WM8988_LOUT1V 146 
#define  WM8988_LOUT2V 145 
#define  WM8988_LOUTM1 144 
#define  WM8988_LOUTM2 143 
#define  WM8988_LPPB 142 
#define  WM8988_NGATE 141 
#define  WM8988_PWR1 140 
#define  WM8988_PWR2 139 
#define  WM8988_RADC 138 
#define  WM8988_RADCIN 137 
#define  WM8988_RDAC 136 
#define  WM8988_RESET 135 
#define  WM8988_RINVOL 134 
#define  WM8988_ROUT1V 133 
#define  WM8988_ROUT2V 132 
#define  WM8988_ROUTM1 131 
#define  WM8988_ROUTM2 130 
#define  WM8988_SRATE 129 
#define  WM8988_TREBLE 128 

__attribute__((used)) static bool wm8988_writeable(struct device *dev, unsigned int reg)
{
	switch (reg) {
	case WM8988_LINVOL:
	case WM8988_RINVOL:
	case WM8988_LOUT1V:
	case WM8988_ROUT1V:
	case WM8988_ADCDAC:
	case WM8988_IFACE:
	case WM8988_SRATE:
	case WM8988_LDAC:
	case WM8988_RDAC:
	case WM8988_BASS:
	case WM8988_TREBLE:
	case WM8988_RESET:
	case WM8988_3D:
	case WM8988_ALC1:
	case WM8988_ALC2:
	case WM8988_ALC3:
	case WM8988_NGATE:
	case WM8988_LADC:
	case WM8988_RADC:
	case WM8988_ADCTL1:
	case WM8988_ADCTL2:
	case WM8988_PWR1:
	case WM8988_PWR2:
	case WM8988_ADCTL3:
	case WM8988_ADCIN:
	case WM8988_LADCIN:
	case WM8988_RADCIN:
	case WM8988_LOUTM1:
	case WM8988_LOUTM2:
	case WM8988_ROUTM1:
	case WM8988_ROUTM2:
	case WM8988_LOUT2V:
	case WM8988_ROUT2V:
	case WM8988_LPPB:
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
          int benchRet = wm8988_writeable(dev,reg);
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
          int benchRet = wm8988_writeable(dev,reg);
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
