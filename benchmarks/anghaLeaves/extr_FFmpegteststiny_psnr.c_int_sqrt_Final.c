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
       0            empty\n\
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
typedef  int uint64_t ;

/* Variables and functions */

__attribute__((used)) static uint64_t int_sqrt(uint64_t a)
{
    uint64_t ret    = 0;
    uint64_t ret_sq = 0;
    int s;

    for (s = 31; s >= 0; s--) {
        uint64_t b = ret_sq + (1ULL << (s * 2)) + (ret << s) * 2;
        if (b <= a) {
            ret_sq = b;
            ret   += 1ULL << s;
        }
    }
    return ret;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 843
          // ------------------------------- 
          // static_instructions_O1 : 31
          // dynamic_instructions_O1 : 620
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 524
          // ------------------------------- 
          // static_instructions_O3 : 44
          // dynamic_instructions_O3 : 524
          // ------------------------------- 
          // static_instructions_Ofast : 44
          // dynamic_instructions_Ofast : 524
          // ------------------------------- 
          // static_instructions_Os : 30
          // dynamic_instructions_Os : 619
          // ------------------------------- 
          // static_instructions_Oz : 33
          // dynamic_instructions_Oz : 686
          // ------------------------------- 

          int a = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = int_sqrt(a);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
