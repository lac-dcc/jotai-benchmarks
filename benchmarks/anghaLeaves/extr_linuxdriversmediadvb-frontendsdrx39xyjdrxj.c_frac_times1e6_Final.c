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
       3            empty\n\
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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static u32 frac_times1e6(u32 N, u32 D)
{
	u32 remainder = 0;
	u32 frac = 0;

	/*
	   frac = (N * 1000000) / D
	   To let it fit in a 32 bits computation:
	   frac = (N * (1000000 >> 4)) / (D >> 4)
	   This would result in a problem in case D < 16 (div by 0).
	   So we do it more elaborate as shown below.
	 */
	frac = (((u32) N) * (1000000 >> 4)) / D;
	frac <<= 4;
	remainder = (((u32) N) * (1000000 >> 4)) % D;
	remainder <<= 4;
	frac += remainder / D;
	remainder = remainder % D;
	if ((remainder * 2) > D)
		frac++;

	return frac;
}

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
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int N = 100;
        
          int D = 100;
        
          int benchRet = frac_times1e6(N,D);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int N = 255;
        
          int D = 255;
        
          int benchRet = frac_times1e6(N,D);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int N = 10;
        
          int D = 10;
        
          int benchRet = frac_times1e6(N,D);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 39
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int N = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int D = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = frac_times1e6(N,D);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
