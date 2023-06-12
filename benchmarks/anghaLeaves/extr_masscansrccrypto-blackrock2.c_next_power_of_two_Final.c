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
typedef  unsigned long long uint64_t ;

/* Variables and functions */

__attribute__((used)) static uint64_t
next_power_of_two(uint64_t num)
{
    uint64_t power_of_two = 1;

    num++;

    while ((uint64_t)(1ULL << power_of_two) < num)
        power_of_two++;

    return (1ULL << power_of_two);
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 71
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 42
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 42
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 42
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 42
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 41
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          unsigned long long num = 100;
        
          unsigned long long benchRet = next_power_of_two(num);
          printf("%llu\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 80
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 47
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 47
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 47
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 47
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 46
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          unsigned long long num = 255;
        
          unsigned long long benchRet = next_power_of_two(num);
          printf("%llu\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 44
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 27
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 27
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 27
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 27
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 26
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 27
          // ------------------------------- 

          unsigned long long num = 10;
        
          unsigned long long benchRet = next_power_of_two(num);
          printf("%llu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
