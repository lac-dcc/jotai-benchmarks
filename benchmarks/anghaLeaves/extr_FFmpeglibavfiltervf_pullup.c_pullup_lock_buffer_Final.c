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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * lock; } ;
typedef  TYPE_1__ PullupBuffer ;

/* Variables and functions */

__attribute__((used)) static PullupBuffer *pullup_lock_buffer(PullupBuffer *b, int parity)
{
    if (!b)
        return NULL;

    if ((parity + 1) & 1)
        b->lock[0]++;
    if ((parity + 1) & 2)
        b->lock[1]++;

    return b;
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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 26
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int parity = 100;
        
          int _len_b0 = 1;
          struct TYPE_4__ * b = (struct TYPE_4__ *) malloc(_len_b0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__lock0 = 1;
          b[_i0].lock = (int *) malloc(_len_b__i0__lock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__lock0; _j0++) {
            b[_i0].lock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          struct TYPE_4__ * benchRet = pullup_lock_buffer(b,parity);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].lock);
          }
          free(b);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int parity = 255;
        
          int _len_b0 = 65025;
          struct TYPE_4__ * b = (struct TYPE_4__ *) malloc(_len_b0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__lock0 = 1;
          b[_i0].lock = (int *) malloc(_len_b__i0__lock0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_b__i0__lock0; _j0++) {
            b[_i0].lock[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          struct TYPE_4__ * benchRet = pullup_lock_buffer(b,parity);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].lock);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
