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
typedef  int u32 ;
typedef  enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;

/* Variables and functions */
 int EINVAL ; 
 int ENOTSUPP ; 
 int LPC18XX_SCU_USB1_EPD ; 
 int LPC18XX_SCU_USB1_EPWR ; 
#define  PIN_CONFIG_BIAS_DISABLE 130 
#define  PIN_CONFIG_BIAS_PULL_DOWN 129 
#define  PIN_CONFIG_LOW_POWER_MODE 128 

__attribute__((used)) static int lpc18xx_pconf_get_usb1(enum pin_config_param param, int *arg, u32 reg)
{
	switch (param) {
	case PIN_CONFIG_LOW_POWER_MODE:
		if (reg & LPC18XX_SCU_USB1_EPWR)
			*arg = 0;
		else
			*arg = 1;
		break;

	case PIN_CONFIG_BIAS_DISABLE:
		if (reg & LPC18XX_SCU_USB1_EPD)
			return -EINVAL;
		break;

	case PIN_CONFIG_BIAS_PULL_DOWN:
		if (reg & LPC18XX_SCU_USB1_EPD)
			*arg = 1;
		else
			return -EINVAL;
		break;

	default:
		return -ENOTSUPP;
	}

	return 0;
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
          enum pin_config_param param = 0;
          int reg = 100;
          int _len_arg0 = 1;
          int * arg = (int *) malloc(_len_arg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpc18xx_pconf_get_usb1(param,arg,reg);
          printf("%d\n", benchRet); 
          free(arg);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          enum pin_config_param param = 0;
          int reg = 10;
          int _len_arg0 = 100;
          int * arg = (int *) malloc(_len_arg0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lpc18xx_pconf_get_usb1(param,arg,reg);
          printf("%d\n", benchRet); 
          free(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
