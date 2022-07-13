// ========================================================================= //

// includes
#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct ath_hal {int dummy; } ;
typedef  scalar_t__ int32_t ;

/* Variables and functions */

__attribute__((used)) static int32_t
ar9300_find_mag_approx(struct ath_hal *ah, int32_t in_re, int32_t in_im)
{
    int32_t abs_i = abs(in_re);
    int32_t abs_q = abs(in_im);
    int32_t max_abs, min_abs;

    if (abs_i > abs_q) {
        max_abs = abs_i;
        min_abs = abs_q;
    } else {
        max_abs = abs_q;
        min_abs = abs_i; 
    }

    return (max_abs - (max_abs / 32) + (min_abs / 8) + (min_abs / 4));
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
          long in_re = 100;
          long in_im = 100;
          int _len_ah0 = 1;
          struct ath_hal * ah = (struct ath_hal *) malloc(_len_ah0*sizeof(struct ath_hal));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ar9300_find_mag_approx(ah,in_re,in_im);
          printf("%ld\n", benchRet); 
          free(ah);
        
        break;
    }
    // big-arr
    case 1:
    {
          long in_re = 255;
          long in_im = 255;
          int _len_ah0 = 65025;
          struct ath_hal * ah = (struct ath_hal *) malloc(_len_ah0*sizeof(struct ath_hal));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ar9300_find_mag_approx(ah,in_re,in_im);
          printf("%ld\n", benchRet); 
          free(ah);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long in_re = 10;
          long in_im = 10;
          int _len_ah0 = 100;
          struct ath_hal * ah = (struct ath_hal *) malloc(_len_ah0*sizeof(struct ath_hal));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ar9300_find_mag_approx(ah,in_re,in_im);
          printf("%ld\n", benchRet); 
          free(ah);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
