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

/* Variables and functions */

unsigned int ff_vorbis_nth_root(unsigned int x, unsigned int n)
{
    unsigned int ret = 0, i, j;

    do {
        ++ret;
        for (i = 0, j = ret; i < n - 1; i++)
            j *= ret;
    } while (j <= x);

    return ret - 1;
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 3618
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 931
          // ------------------------------- 
          // static_instructions_O2 : 126
          // dynamic_instructions_O2 : 476
          // ------------------------------- 
          // static_instructions_O3 : 124
          // dynamic_instructions_O3 : 466
          // ------------------------------- 
          // static_instructions_Ofast : 124
          // dynamic_instructions_Ofast : 466
          // ------------------------------- 
          // static_instructions_Os : 57
          // dynamic_instructions_Os : 1151
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 1515
          // ------------------------------- 

          unsigned int x = 100;
        
          unsigned int n = 100;
        
          unsigned int benchRet = ff_vorbis_nth_root(x,n);
          printf("%u\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 9198
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 2326
          // ------------------------------- 
          // static_instructions_O2 : 126
          // dynamic_instructions_O2 : 881
          // ------------------------------- 
          // static_instructions_O3 : 124
          // dynamic_instructions_O3 : 871
          // ------------------------------- 
          // static_instructions_Ofast : 124
          // dynamic_instructions_Ofast : 871
          // ------------------------------- 
          // static_instructions_Os : 57
          // dynamic_instructions_Os : 2789
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 3840
          // ------------------------------- 

          unsigned int x = 255;
        
          unsigned int n = 255;
        
          unsigned int benchRet = ff_vorbis_nth_root(x,n);
          printf("%u\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 255
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 83
          // ------------------------------- 
          // static_instructions_O2 : 82
          // dynamic_instructions_O2 : 141
          // ------------------------------- 
          // static_instructions_O3 : 81
          // dynamic_instructions_O3 : 137
          // ------------------------------- 
          // static_instructions_Ofast : 81
          // dynamic_instructions_Ofast : 137
          // ------------------------------- 
          // static_instructions_Os : 57
          // dynamic_instructions_Os : 156
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 112
          // ------------------------------- 

          unsigned int x = 10;
        
          unsigned int n = 10;
        
          unsigned int benchRet = ff_vorbis_nth_root(x,n);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
