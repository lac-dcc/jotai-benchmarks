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
typedef  int UINT ;

/* Variables and functions */

__attribute__((used)) static UINT make_pow2(UINT num)
{
    UINT result = 1;

    /* In the unlikely event somebody passes a large value, make sure we don't enter an infinite loop */
    if (num >= 0x80000000)
        return 0x80000000;

    while (result < num)
        result <<= 1;

    return result;
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 64
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 40
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 40
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 40
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 40
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 40
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 40
          // ------------------------------- 

          int num = 100;
        
          int benchRet = make_pow2(num);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 71
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 44
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 44
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 44
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 44
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 44
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 44
          // ------------------------------- 

          int num = 255;
        
          int benchRet = make_pow2(num);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 43
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 28
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 28
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 28
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 28
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 28
          // ------------------------------- 

          int num = 10;
        
          int benchRet = make_pow2(num);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int num = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = make_pow2(num);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
