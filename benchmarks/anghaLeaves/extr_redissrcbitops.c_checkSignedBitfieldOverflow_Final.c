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
       0            big-arr-10x\n\
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
typedef  int uint64_t ;
typedef  int int64_t ;

/* Variables and functions */
 int BFOVERFLOW_SAT ; 
 int BFOVERFLOW_WRAP ; 
 int INT64_MAX ; 

int checkSignedBitfieldOverflow(int64_t value, int64_t incr, uint64_t bits, int owtype, int64_t *limit) {
    int64_t max = (bits == 64) ? INT64_MAX : (((int64_t)1<<(bits-1))-1);
    int64_t min = (-max)-1;

    /* Note that maxincr and minincr could overflow, but we use the values
     * only after checking 'value' range, so when we use it no overflow
     * happens. */
    int64_t maxincr = max-value;
    int64_t minincr = min-value;

    if (value > max || (bits != 64 && incr > maxincr) || (value >= 0 && incr > 0 && incr > maxincr))
    {
        if (limit) {
            if (owtype == BFOVERFLOW_WRAP) {
                goto handle_wrap;
            } else if (owtype == BFOVERFLOW_SAT) {
                *limit = max;
            }
        }
        return 1;
    } else if (value < min || (bits != 64 && incr < minincr) || (value < 0 && incr < 0 && incr < minincr)) {
        if (limit) {
            if (owtype == BFOVERFLOW_WRAP) {
                goto handle_wrap;
            } else if (owtype == BFOVERFLOW_SAT) {
                *limit = min;
            }
        }
        return -1;
    }
    return 0;

handle_wrap:
    {
        uint64_t mask = ((uint64_t)-1) << bits;
        uint64_t msb = (uint64_t)1 << (bits-1);
        uint64_t a = value, b = incr, c;
        c = a+b; /* Perform addition as unsigned so that's defined. */

        /* If the sign bit is set, propagate to all the higher order
         * bits, to cap the negative value. If it's clear, mask to
         * the positive integer limit. */
        if (c & msb) {
            c |= mask;
        } else {
            c &= ~mask;
        }
        *limit = c;
    }
    return 1;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 58
          // dynamic_instructions_O0 : 58
          // ------------------------------- 
          // static_instructions_O1 : 39
          // dynamic_instructions_O1 : 39
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 39
          // ------------------------------- 
          // static_instructions_O3 : 39
          // dynamic_instructions_O3 : 39
          // ------------------------------- 
          // static_instructions_Ofast : 39
          // dynamic_instructions_Ofast : 39
          // ------------------------------- 
          // static_instructions_Os : 39
          // dynamic_instructions_Os : 39
          // ------------------------------- 
          // static_instructions_Oz : 45
          // dynamic_instructions_Oz : 45
          // ------------------------------- 

          int value = 10;
        
          int incr = 10;
        
          int bits = 10;
        
          int owtype = 10;
        
          int _len_limit0 = 100;
          int * limit = (int *) malloc(_len_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_limit0; _i0++) {
            limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = checkSignedBitfieldOverflow(value,incr,bits,owtype,limit);
          printf("%d\n", benchRet); 
          free(limit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
