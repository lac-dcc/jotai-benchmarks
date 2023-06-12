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
struct box {scalar_t__ count; scalar_t__ score; } ;

/* Variables and functions */

__attribute__((used)) static struct box *find_box_max_count(struct box *b, int count)
{
    struct box *best = NULL;
    for (; count--; b++)
        if (b->score && (!best || b->count > best->count)) best = b;
    return best;
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 5366
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 3065
          // ------------------------------- 
          // static_instructions_O2 : 36
          // dynamic_instructions_O2 : 2430
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 2430
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 2430
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 3065
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 2810
          // ------------------------------- 

          int count = 255;
        
          int _len_b0 = 65025;
          struct box * b = (struct box *) malloc(_len_b0*sizeof(struct box));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              b[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          b[_i0].score = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct box * benchRet = find_box_max_count(b,count);
          printf("%ld\n", (*benchRet).count);
          printf("%ld\n", (*benchRet).score);
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 221
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 125
          // ------------------------------- 
          // static_instructions_O2 : 35
          // dynamic_instructions_O2 : 108
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 108
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 108
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 125
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 115
          // ------------------------------- 

          int count = 10;
        
          int _len_b0 = 100;
          struct box * b = (struct box *) malloc(_len_b0*sizeof(struct box));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              b[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          b[_i0].score = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          struct box * benchRet = find_box_max_count(b,count);
          printf("%ld\n", (*benchRet).count);
          printf("%ld\n", (*benchRet).score);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
