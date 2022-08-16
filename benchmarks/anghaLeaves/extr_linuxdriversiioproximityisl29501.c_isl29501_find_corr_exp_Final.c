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
       1            big-arr\n\
       2            big-arr-10x\n\
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

__attribute__((used)) static unsigned int isl29501_find_corr_exp(unsigned int val,
					   unsigned int max_exp,
					   unsigned int max_mantissa)
{
	unsigned int exp = 1;

	/*
	 * Correction coefficients are represented under
	 * mantissa * 2^exponent form, where mantissa and exponent
	 * are stored in two separate registers of the sensor.
	 *
	 * Compute and return the lowest exponent such as:
	 *	     mantissa = value / 2^exponent
	 *
	 *  where mantissa < max_mantissa.
	 */
	if (val <= max_mantissa)
		return 0;

	while ((val >> exp) > max_mantissa) {
		exp++;

		if (exp > max_exp)
			return max_exp;
	}

	return exp;
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
          unsigned int val = 100;
          unsigned int max_exp = 100;
          unsigned int max_mantissa = 100;
          unsigned int benchRet = isl29501_find_corr_exp(val,max_exp,max_mantissa);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int val = 255;
          unsigned int max_exp = 255;
          unsigned int max_mantissa = 255;
          unsigned int benchRet = isl29501_find_corr_exp(val,max_exp,max_mantissa);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int val = 10;
          unsigned int max_exp = 10;
          unsigned int max_mantissa = 10;
          unsigned int benchRet = isl29501_find_corr_exp(val,max_exp,max_mantissa);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
