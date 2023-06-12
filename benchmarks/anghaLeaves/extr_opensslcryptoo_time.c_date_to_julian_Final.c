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

__attribute__((used)) static long date_to_julian(int y, int m, int d)
{
    return (1461 * (y + 4800 + (m - 14) / 12)) / 4 +
        (367 * (m - 2 - 12 * ((m - 14) / 12))) / 12 -
        (3 * ((y + 4900 + (m - 14) / 12) / 100)) / 4 + d - 32075;
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
          // static_instructions_O0 : 67
          // dynamic_instructions_O0 : 67
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 48
          // dynamic_instructions_O2 : 48
          // ------------------------------- 
          // static_instructions_O3 : 48
          // dynamic_instructions_O3 : 48
          // ------------------------------- 
          // static_instructions_Ofast : 48
          // dynamic_instructions_Ofast : 48
          // ------------------------------- 
          // static_instructions_Os : 48
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          int y = 100;
        
          int m = 100;
        
          int d = 100;
        
          long benchRet = date_to_julian(y,m,d);
          printf("%ld\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 67
          // dynamic_instructions_O0 : 67
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 48
          // dynamic_instructions_O2 : 48
          // ------------------------------- 
          // static_instructions_O3 : 48
          // dynamic_instructions_O3 : 48
          // ------------------------------- 
          // static_instructions_Ofast : 48
          // dynamic_instructions_Ofast : 48
          // ------------------------------- 
          // static_instructions_Os : 48
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          int y = 255;
        
          int m = 255;
        
          int d = 255;
        
          long benchRet = date_to_julian(y,m,d);
          printf("%ld\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 67
          // dynamic_instructions_O0 : 67
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 48
          // dynamic_instructions_O2 : 48
          // ------------------------------- 
          // static_instructions_O3 : 48
          // dynamic_instructions_O3 : 48
          // ------------------------------- 
          // static_instructions_Ofast : 48
          // dynamic_instructions_Ofast : 48
          // ------------------------------- 
          // static_instructions_Os : 48
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          int y = 10;
        
          int m = 10;
        
          int d = 10;
        
          long benchRet = date_to_julian(y,m,d);
          printf("%ld\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 67
          // dynamic_instructions_O0 : 67
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 48
          // dynamic_instructions_O2 : 48
          // ------------------------------- 
          // static_instructions_O3 : 48
          // dynamic_instructions_O3 : 48
          // ------------------------------- 
          // static_instructions_Ofast : 48
          // dynamic_instructions_Ofast : 48
          // ------------------------------- 
          // static_instructions_Os : 48
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 38
          // ------------------------------- 

          int y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int m = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int d = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long benchRet = date_to_julian(y,m,d);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
