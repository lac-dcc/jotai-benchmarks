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
union av_intfloat32 {unsigned int i; } ;
typedef  int uint16_t ;

/* Variables and functions */
 unsigned int FLOAT_MAX_BIASED_EXP ; 
 int HALF_FLOAT_MAX_BIASED_EXP ; 
 unsigned int HALF_FLOAT_MIN_BIASED_EXP_AS_SINGLE_FP_EXP ; 

__attribute__((used)) static union av_intfloat32 exr_half2float(uint16_t hf)
{
    unsigned int sign = (unsigned int) (hf >> 15);
    unsigned int mantissa = (unsigned int) (hf & ((1 << 10) - 1));
    unsigned int exp = (unsigned int) (hf & HALF_FLOAT_MAX_BIASED_EXP);
    union av_intfloat32 f;

    if (exp == HALF_FLOAT_MAX_BIASED_EXP) {
        // we have a half-float NaN or Inf
        // half-float NaNs will be converted to a single precision NaN
        // half-float Infs will be converted to a single precision Inf
        exp = FLOAT_MAX_BIASED_EXP;
        if (mantissa)
            mantissa = (1 << 23) - 1;    // set all bits to indicate a NaN
    } else if (exp == 0x0) {
        // convert half-float zero/denorm to single precision value
        if (mantissa) {
            mantissa <<= 1;
            exp = HALF_FLOAT_MIN_BIASED_EXP_AS_SINGLE_FP_EXP;
            // check for leading 1 in denorm mantissa
            while ((mantissa & (1 << 10))) {
                // for every leading 0, decrement single precision exponent by 1
                // and shift half-float mantissa value to the left
                mantissa <<= 1;
                exp -= (1 << 23);
            }
            // clamp the mantissa to 10 bits
            mantissa &= ((1 << 10) - 1);
            // shift left to generate single-precision mantissa of 23 bits
            mantissa <<= 13;
        }
    } else {
        // shift left to generate single-precision mantissa of 23 bits
        mantissa <<= 13;
        // generate single precision biased exponent value
        exp = (exp << 13) + HALF_FLOAT_MIN_BIASED_EXP_AS_SINGLE_FP_EXP;
    }

    f.i = (sign << 31) | exp | mantissa;

    return f;
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
          int hf = 100;
          union av_intfloat32 benchRet = exr_half2float(hf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hf = 255;
          union av_intfloat32 benchRet = exr_half2float(hf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hf = 10;
          union av_intfloat32 benchRet = exr_half2float(hf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
