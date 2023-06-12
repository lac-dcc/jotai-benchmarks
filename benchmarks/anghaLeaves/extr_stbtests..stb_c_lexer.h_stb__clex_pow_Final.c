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

__attribute__((used)) static double stb__clex_pow(double base, unsigned int exponent)
{
   double value=1;
   for ( ; exponent; exponent >>= 1) {
      if (exponent & 1)
         value *= base;
      base *= base;
   }
   return value;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 111
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 50
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 50
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 50
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 50
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 60
          // ------------------------------- 

          double base = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          unsigned int exponent = 100;
        
          double benchRet = stb__clex_pow(base,exponent);
          printf("%lf\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 139
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 65
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 65
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 65
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 65
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 57
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 72
          // ------------------------------- 

          double base = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          unsigned int exponent = 255;
        
          double benchRet = stb__clex_pow(base,exponent);
          printf("%lf\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 69
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 33
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 33
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 33
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 33
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 31
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          double base = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          unsigned int exponent = 10;
        
          double benchRet = stb__clex_pow(base,exponent);
          printf("%lf\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 511
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 225
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 225
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 225
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 225
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 197
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 260
          // ------------------------------- 

          double base = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          unsigned int exponent = ((-2 * (next_i()%2)) + 1) * next_i();
        
          double benchRet = stb__clex_pow(base,exponent);
          printf("%lf\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
