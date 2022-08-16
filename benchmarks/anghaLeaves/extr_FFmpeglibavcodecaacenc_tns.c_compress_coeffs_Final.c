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

__attribute__((used)) static inline int compress_coeffs(int *coef, int order, int c_bits)
{
    int i;
    const int low_idx   = c_bits ?  4 : 2;
    const int shift_val = c_bits ?  8 : 4;
    const int high_idx  = c_bits ? 11 : 5;
#ifndef TNS_ENABLE_COEF_COMPRESSION
    return 0;
#endif /* TNS_ENABLE_COEF_COMPRESSION */
    for (i = 0; i < order; i++)
        if (coef[i] >= low_idx && coef[i] <= high_idx)
            return 0;
    for (i = 0; i < order; i++)
        coef[i] -= (coef[i] > high_idx) ? shift_val : 0;
    return 1;
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
          int order = 100;
          int c_bits = 100;
          int _len_coef0 = 1;
          int * coef = (int *) malloc(_len_coef0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_coef0; _i0++) {
            coef[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compress_coeffs(coef,order,c_bits);
          printf("%d\n", benchRet); 
          free(coef);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int order = 10;
          int c_bits = 10;
          int _len_coef0 = 100;
          int * coef = (int *) malloc(_len_coef0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_coef0; _i0++) {
            coef[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compress_coeffs(coef,order,c_bits);
          printf("%d\n", benchRet); 
          free(coef);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
