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

/* Variables and functions */

int NextPowerOfTwo(int in)
{
	int out;

	for (out = 1; out < in; out <<= 1)
		;

	return out;
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
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 66
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 38
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 38
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 38
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 38
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 37
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 37
          // ------------------------------- 

          int in = 100;
        
          int benchRet = NextPowerOfTwo(in);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 74
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 42
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 42
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 42
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 42
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 41
          // ------------------------------- 

          int in = 255;
        
          int benchRet = NextPowerOfTwo(in);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 42
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 26
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 26
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 26
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 25
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 25
          // ------------------------------- 

          int in = 10;
        
          int benchRet = NextPowerOfTwo(in);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int in = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = NextPowerOfTwo(in);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
