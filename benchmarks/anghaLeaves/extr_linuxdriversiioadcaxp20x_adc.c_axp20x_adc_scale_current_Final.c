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

/* Variables and functions */
#define  AXP20X_ACIN_I 131 
#define  AXP20X_BATT_CHRG_I 130 
#define  AXP20X_BATT_DISCHRG_I 129 
#define  AXP20X_VBUS_I 128 
 int EINVAL ; 
 int IIO_VAL_INT_PLUS_MICRO ; 

__attribute__((used)) static int axp20x_adc_scale_current(int channel, int *val, int *val2)
{
	switch (channel) {
	case AXP20X_ACIN_I:
		*val = 0;
		*val2 = 625000;
		return IIO_VAL_INT_PLUS_MICRO;

	case AXP20X_VBUS_I:
		*val = 0;
		*val2 = 375000;
		return IIO_VAL_INT_PLUS_MICRO;

	case AXP20X_BATT_DISCHRG_I:
	case AXP20X_BATT_CHRG_I:
		*val = 0;
		*val2 = 500000;
		return IIO_VAL_INT_PLUS_MICRO;

	default:
		return -EINVAL;
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
          int channel = 100;
          int _len_val0 = 1;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_val20 = 1;
          int * val2 = (int *) malloc(_len_val20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val20; _i0++) {
            val2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = axp20x_adc_scale_current(channel,val,val2);
          printf("%d\n", benchRet); 
          free(val);
          free(val2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
