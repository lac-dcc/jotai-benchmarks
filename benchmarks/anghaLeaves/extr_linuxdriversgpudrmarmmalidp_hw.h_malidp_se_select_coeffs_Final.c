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
typedef  scalar_t__ u32 ;
typedef  enum malidp_scaling_coeff_set { ____Placeholder_malidp_scaling_coeff_set } malidp_scaling_coeff_set ;

/* Variables and functions */
 scalar_t__ FP_0_36363 ; 
 scalar_t__ FP_0_50000 ; 
 scalar_t__ FP_0_66667 ; 
 scalar_t__ FP_1_00000 ; 
 int MALIDP_DOWNSCALING_1_5_COEFFS ; 
 int MALIDP_DOWNSCALING_2_75_COEFFS ; 
 int MALIDP_DOWNSCALING_2_COEFFS ; 
 int MALIDP_DOWNSCALING_4_COEFFS ; 
 int MALIDP_UPSCALING_COEFFS ; 

__attribute__((used)) static inline enum malidp_scaling_coeff_set
malidp_se_select_coeffs(u32 upscale_factor)
{
	return (upscale_factor >= FP_1_00000) ? MALIDP_UPSCALING_COEFFS :
	       (upscale_factor >= FP_0_66667) ? MALIDP_DOWNSCALING_1_5_COEFFS :
	       (upscale_factor >= FP_0_50000) ? MALIDP_DOWNSCALING_2_COEFFS :
	       (upscale_factor >= FP_0_36363) ? MALIDP_DOWNSCALING_2_75_COEFFS :
	       MALIDP_DOWNSCALING_4_COEFFS;
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
          long upscale_factor = 100;
          enum malidp_scaling_coeff_set benchRet = malidp_se_select_coeffs(upscale_factor);
        
        break;
    }
    // big-arr
    case 1:
    {
          long upscale_factor = 255;
          enum malidp_scaling_coeff_set benchRet = malidp_se_select_coeffs(upscale_factor);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long upscale_factor = 10;
          enum malidp_scaling_coeff_set benchRet = malidp_se_select_coeffs(upscale_factor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
