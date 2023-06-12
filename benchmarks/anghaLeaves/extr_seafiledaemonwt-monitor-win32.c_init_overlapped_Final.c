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
       2            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ OffsetHigh; scalar_t__ Offset; } ;
typedef  TYPE_1__ OVERLAPPED ;

/* Variables and functions */

__attribute__((used)) static inline void
init_overlapped(OVERLAPPED *ol)
{
    ol->Offset = ol->OffsetHigh = 0;
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
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_ol0 = 65025;
          struct TYPE_3__ * ol = (struct TYPE_3__ *) malloc(_len_ol0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ol0; _i0++) {
              ol[_i0].OffsetHigh = ((-2 * (next_i()%2)) + 1) * next_i();
          ol[_i0].Offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          init_overlapped(ol);
          free(ol);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_ol0 = 100;
          struct TYPE_3__ * ol = (struct TYPE_3__ *) malloc(_len_ol0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ol0; _i0++) {
              ol[_i0].OffsetHigh = ((-2 * (next_i()%2)) + 1) * next_i();
          ol[_i0].Offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          init_overlapped(ol);
          free(ol);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int _len_ol0 = 1;
          struct TYPE_3__ * ol = (struct TYPE_3__ *) malloc(_len_ol0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ol0; _i0++) {
              ol[_i0].OffsetHigh = ((-2 * (next_i()%2)) + 1) * next_i();
          ol[_i0].Offset = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          init_overlapped(ol);
          free(ol);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
