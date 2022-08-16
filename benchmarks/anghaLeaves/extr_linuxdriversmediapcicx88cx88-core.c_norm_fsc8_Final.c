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
typedef  int v4l2_std_id ;

/* Variables and functions */
 int V4L2_STD_NTSC ; 
 int V4L2_STD_PAL_M ; 
 int V4L2_STD_PAL_Nc ; 

__attribute__((used)) static inline unsigned int norm_fsc8(v4l2_std_id norm)
{
	if (norm & V4L2_STD_PAL_M)
		return 28604892;      // 3.575611 MHz

	if (norm & (V4L2_STD_PAL_Nc))
		return 28656448;      // 3.582056 MHz

	if (norm & V4L2_STD_NTSC) // All NTSC/M and variants
		return 28636360;      // 3.57954545 MHz +/- 10 Hz

	/*
	 * SECAM have also different sub carrier for chroma,
	 * but step_db and step_dr, at cx88_set_tvnorm already handles that.
	 *
	 * The same FSC applies to PAL/BGDKIH, PAL/60, NTSC/4.43 and PAL/N
	 */

	return 35468950;      // 4.43361875 MHz +/- 5 Hz
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
          int norm = 100;
          unsigned int benchRet = norm_fsc8(norm);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int norm = 255;
          unsigned int benchRet = norm_fsc8(norm);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int norm = 10;
          unsigned int benchRet = norm_fsc8(norm);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
