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
       0            big-arr\n\
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  u8 ;
typedef  scalar_t__ u32 ;

/* Variables and functions */

void memory_set(u8 *dest, u8 val, u32 len) {
    u8 *temp = (u8 *)dest;
    for ( ; len != 0; len--) *temp++ = val;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 3071
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 1028
          // ------------------------------- 
          // static_instructions_O2 : 67
          // dynamic_instructions_O2 : 159
          // ------------------------------- 
          // static_instructions_O3 : 67
          // dynamic_instructions_O3 : 159
          // ------------------------------- 
          // static_instructions_Ofast : 67
          // dynamic_instructions_Ofast : 159
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 1027
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 1282
          // ------------------------------- 

          int val = 255;
        
          long len = 255;
        
          int _len_dest0 = 65025;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          memory_set(dest,val,len);
          free(dest);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 131
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 48
          // ------------------------------- 
          // static_instructions_O2 : 45
          // dynamic_instructions_O2 : 49
          // ------------------------------- 
          // static_instructions_O3 : 45
          // dynamic_instructions_O3 : 49
          // ------------------------------- 
          // static_instructions_Ofast : 45
          // dynamic_instructions_Ofast : 49
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 57
          // ------------------------------- 

          int val = 10;
        
          long len = 10;
        
          int _len_dest0 = 100;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          memory_set(dest,val,len);
          free(dest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
