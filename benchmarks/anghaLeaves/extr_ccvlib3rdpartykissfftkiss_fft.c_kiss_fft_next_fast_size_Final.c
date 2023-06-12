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

int kiss_fft_next_fast_size(int n)
{
    while(1) {
        int m=n;
        while ( (m%2) == 0 ) m/=2;
        while ( (m%3) == 0 ) m/=3;
        while ( (m%5) == 0 ) m/=5;
        if (m<=1)
            break; /* n is completely factorable by twos, threes, and fives */
        n++;
    }
    return n;
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
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 79
          // ------------------------------- 
          // static_instructions_O1 : 44
          // dynamic_instructions_O1 : 61
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 59
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 59
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 53
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          int n = 100;
        
          int benchRet = kiss_fft_next_fast_size(n);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 53
          // dynamic_instructions_O0 : 179
          // ------------------------------- 
          // static_instructions_O1 : 56
          // dynamic_instructions_O1 : 122
          // ------------------------------- 
          // static_instructions_O2 : 54
          // dynamic_instructions_O2 : 118
          // ------------------------------- 
          // static_instructions_O3 : 54
          // dynamic_instructions_O3 : 118
          // ------------------------------- 
          // static_instructions_Ofast : 54
          // dynamic_instructions_Ofast : 118
          // ------------------------------- 
          // static_instructions_Os : 46
          // dynamic_instructions_Os : 110
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 98
          // ------------------------------- 

          int n = 255;
        
          int benchRet = kiss_fft_next_fast_size(n);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 55
          // ------------------------------- 
          // static_instructions_O1 : 44
          // dynamic_instructions_O1 : 44
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 42
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 42
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 42
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 36
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 39
          // ------------------------------- 

          int n = 10;
        
          int benchRet = kiss_fft_next_fast_size(n);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 31
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 19
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = kiss_fft_next_fast_size(n);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
