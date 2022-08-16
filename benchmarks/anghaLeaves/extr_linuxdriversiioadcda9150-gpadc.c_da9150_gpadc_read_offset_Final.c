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

/* Variables and functions */
#define  DA9150_GPADC_CHAN_TJUNC_CORE 130 
#define  DA9150_GPADC_CHAN_TJUNC_OVP 129 
#define  DA9150_GPADC_CHAN_VBAT 128 
 int EINVAL ; 
 int IIO_VAL_INT ; 

__attribute__((used)) static int da9150_gpadc_read_offset(int channel, int *val)
{
	switch (channel) {
	case DA9150_GPADC_CHAN_VBAT:
		*val = 1500000 / 2932;
		return IIO_VAL_INT;
	case DA9150_GPADC_CHAN_TJUNC_CORE:
	case DA9150_GPADC_CHAN_TJUNC_OVP:
		*val = -144;
		return IIO_VAL_INT;
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
          int benchRet = da9150_gpadc_read_offset(channel,val);
          printf("%d\n", benchRet); 
          free(val);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int channel = 10;
          int _len_val0 = 100;
          int * val = (int *) malloc(_len_val0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_val0; _i0++) {
            val[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = da9150_gpadc_read_offset(channel,val);
          printf("%d\n", benchRet); 
          free(val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
