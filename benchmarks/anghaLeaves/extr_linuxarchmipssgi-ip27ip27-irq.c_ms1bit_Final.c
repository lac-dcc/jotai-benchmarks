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

__attribute__((used)) static int ms1bit(unsigned long x)
{
	int b = 0, s;

	s = 16; if (x >> 16 == 0) s = 0; b += s; x >>= s;
	s =  8; if (x >>  8 == 0) s = 0; b += s; x >>= s;
	s =  4; if (x >>  4 == 0) s = 0; b += s; x >>= s;
	s =  2; if (x >>  2 == 0) s = 0; b += s; x >>= s;
	s =  1; if (x >>  1 == 0) s = 0; b += s;

	return b;
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
          // static_instructions_O0 : 70
          // dynamic_instructions_O0 : 70
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 34
          // ------------------------------- 

          unsigned long x = 100;
        
          int benchRet = ms1bit(x);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 69
          // dynamic_instructions_O0 : 69
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 34
          // ------------------------------- 

          unsigned long x = 255;
        
          int benchRet = ms1bit(x);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 70
          // dynamic_instructions_O0 : 70
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 34
          // ------------------------------- 

          unsigned long x = 10;
        
          int benchRet = ms1bit(x);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 67
          // dynamic_instructions_O0 : 67
          // ------------------------------- 
          // static_instructions_O1 : 34
          // dynamic_instructions_O1 : 34
          // ------------------------------- 
          // static_instructions_O2 : 34
          // dynamic_instructions_O2 : 34
          // ------------------------------- 
          // static_instructions_O3 : 34
          // dynamic_instructions_O3 : 34
          // ------------------------------- 
          // static_instructions_Ofast : 34
          // dynamic_instructions_Ofast : 34
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 34
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 34
          // ------------------------------- 

          unsigned long x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = ms1bit(x);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
