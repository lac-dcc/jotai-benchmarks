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
struct TYPE_3__ {int started; int ended; int /*<<< orphan*/  flags; scalar_t__ pathlist_walk_idx; scalar_t__ stat_calls; } ;
typedef  TYPE_1__ git_iterator ;

/* Variables and functions */
 int /*<<< orphan*/  GIT_ITERATOR_FIRST_ACCESS ; 

__attribute__((used)) static void iterator_clear(git_iterator *iter)
{
	iter->started = false;
	iter->ended = false;
	iter->stat_calls = 0;
	iter->pathlist_walk_idx = 0;
	iter->flags &= ~GIT_ITERATOR_FIRST_ACCESS;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_iter0 = 65025;
          struct TYPE_3__ * iter = (struct TYPE_3__ *) malloc(_len_iter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              iter[_i0].started = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].ended = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].pathlist_walk_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].stat_calls = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          iterator_clear(iter);
          free(iter);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_iter0 = 100;
          struct TYPE_3__ * iter = (struct TYPE_3__ *) malloc(_len_iter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              iter[_i0].started = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].ended = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].pathlist_walk_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].stat_calls = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          iterator_clear(iter);
          free(iter);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_iter0 = 1;
          struct TYPE_3__ * iter = (struct TYPE_3__ *) malloc(_len_iter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              iter[_i0].started = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].ended = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].pathlist_walk_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].stat_calls = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          iterator_clear(iter);
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
