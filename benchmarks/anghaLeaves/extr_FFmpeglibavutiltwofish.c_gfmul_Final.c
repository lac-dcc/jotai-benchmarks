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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static uint8_t gfmul(uint8_t a, uint8_t b)
{
    uint8_t r = 0, t;
    while (a && b) {
        if (a & 1)
            r = r ^ b;
        t = b & 0x80;
        b = b << 1;
        if (t)
            b = b ^ 0x4d;
        a = a >> 1;
    }
    return r;
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 219
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 122
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 122
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 122
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 122
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 122
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 128
          // ------------------------------- 

          int a = 100;
        
          int b = 100;
        
          int benchRet = gfmul(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 257
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 138
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 138
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 138
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 138
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 138
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 145
          // ------------------------------- 

          int a = 255;
        
          int b = 255;
        
          int benchRet = gfmul(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 126
          // ------------------------------- 
          // static_instructions_O1 : 26
          // dynamic_instructions_O1 : 74
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 74
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 74
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 77
          // ------------------------------- 

          int a = 10;
        
          int b = 10;
        
          int benchRet = gfmul(a,b);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
