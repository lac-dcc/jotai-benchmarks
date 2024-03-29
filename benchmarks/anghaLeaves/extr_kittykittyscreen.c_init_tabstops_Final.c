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
typedef  unsigned int index_type ;

/* Variables and functions */

__attribute__((used)) static inline void
init_tabstops(bool *tabstops, index_type count) {
    // In terminfo we specify the number of initial tabstops (it) as 8
    for (unsigned int t=0; t < count; t++) {
        tabstops[t] = t % 8 == 0 ? true : false;
    }
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
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 4090
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 1794
          // ------------------------------- 
          // static_instructions_O2 : 104
          // dynamic_instructions_O2 : 644
          // ------------------------------- 
          // static_instructions_O3 : 104
          // dynamic_instructions_O3 : 644
          // ------------------------------- 
          // static_instructions_Ofast : 104
          // dynamic_instructions_Ofast : 644
          // ------------------------------- 
          // static_instructions_Os : 44
          // dynamic_instructions_Os : 3345
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 2048
          // ------------------------------- 

          unsigned int count = 255;
        
          int _len_tabstops0 = 65025;
          int * tabstops = (int *) malloc(_len_tabstops0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tabstops0; _i0++) {
            tabstops[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          init_tabstops(tabstops,count);
          free(tabstops);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 23
          // dynamic_instructions_O0 : 170
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 79
          // ------------------------------- 
          // static_instructions_O2 : 61
          // dynamic_instructions_O2 : 86
          // ------------------------------- 
          // static_instructions_O3 : 61
          // dynamic_instructions_O3 : 86
          // ------------------------------- 
          // static_instructions_Ofast : 61
          // dynamic_instructions_Ofast : 86
          // ------------------------------- 
          // static_instructions_Os : 44
          // dynamic_instructions_Os : 148
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 88
          // ------------------------------- 

          unsigned int count = 10;
        
          int _len_tabstops0 = 100;
          int * tabstops = (int *) malloc(_len_tabstops0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tabstops0; _i0++) {
            tabstops[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          init_tabstops(tabstops,count);
          free(tabstops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
