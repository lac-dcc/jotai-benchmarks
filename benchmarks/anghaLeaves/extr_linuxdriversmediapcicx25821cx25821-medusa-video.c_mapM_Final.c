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

__attribute__((used)) static int mapM(int srcMin, int srcMax, int srcVal, int dstMin, int dstMax,
		int *dstVal)
{
	int numerator;
	int denominator;
	int quotient;

	if ((srcMin == srcMax) || (srcVal < srcMin) || (srcVal > srcMax))
		return -1;
	/*
	 * This is the overall expression used:
	 * *dstVal =
	 *   (srcVal - srcMin)*(dstMax - dstMin) / (srcMax - srcMin) + dstMin;
	 * but we need to account for rounding so below we use the modulus
	 * operator to find the remainder and increment if necessary.
	 */
	numerator = (srcVal - srcMin) * (dstMax - dstMin);
	denominator = srcMax - srcMin;
	quotient = numerator / denominator;

	if (2 * (numerator % denominator) >= denominator)
		quotient++;

	*dstVal = quotient + dstMin;

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
          int srcMin = 100;
          int srcMax = 100;
          int srcVal = 100;
          int dstMin = 100;
          int dstMax = 100;
          int _len_dstVal0 = 1;
          int * dstVal = (int *) malloc(_len_dstVal0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstVal0; _i0++) {
            dstVal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mapM(srcMin,srcMax,srcVal,dstMin,dstMax,dstVal);
          printf("%d\n", benchRet); 
          free(dstVal);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int srcMin = 10;
          int srcMax = 10;
          int srcVal = 10;
          int dstMin = 10;
          int dstMax = 10;
          int _len_dstVal0 = 100;
          int * dstVal = (int *) malloc(_len_dstVal0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstVal0; _i0++) {
            dstVal[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mapM(srcMin,srcMax,srcVal,dstMin,dstMax,dstVal);
          printf("%d\n", benchRet); 
          free(dstVal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
