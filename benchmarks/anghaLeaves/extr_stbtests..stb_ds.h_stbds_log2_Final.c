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

__attribute__((used)) static size_t stbds_log2(size_t slot_count)
{
  size_t n=0;
  while (slot_count > 1) {
    slot_count >>= 1;
    ++n;
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
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 63
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 39
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 39
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 39
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 39
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 38
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 37
          // ------------------------------- 

          unsigned long slot_count = 100;
        
          unsigned long benchRet = stbds_log2(slot_count);
          printf("%lu\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 72
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 44
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 44
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 44
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 44
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 43
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 42
          // ------------------------------- 

          unsigned long slot_count = 255;
        
          unsigned long benchRet = stbds_log2(slot_count);
          printf("%lu\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 24
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 24
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 24
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 24
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 22
          // ------------------------------- 

          unsigned long slot_count = 10;
        
          unsigned long benchRet = stbds_log2(slot_count);
          printf("%lu\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 576
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 324
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 324
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 324
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 324
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 323
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 322
          // ------------------------------- 

          unsigned long slot_count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long benchRet = stbds_log2(slot_count);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
