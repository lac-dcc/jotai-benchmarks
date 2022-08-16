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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct hist_entry {TYPE_1__* thread; } ;
typedef  scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ tid; } ;

/* Variables and functions */

__attribute__((used)) static int64_t
sort__thread_cmp(struct hist_entry *left, struct hist_entry *right)
{
	return right->thread->tid - left->thread->tid;
}


// ------------------------------------------------------------------------- //




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
          int _len_left0 = 1;
          struct hist_entry * left = (struct hist_entry *) malloc(_len_left0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
              int _len_left__i0__thread0 = 1;
          left[_i0].thread = (struct TYPE_2__ *) malloc(_len_left__i0__thread0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_left__i0__thread0; _j0++) {
            left[_i0].thread->tid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_right0 = 1;
          struct hist_entry * right = (struct hist_entry *) malloc(_len_right0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
              int _len_right__i0__thread0 = 1;
          right[_i0].thread = (struct TYPE_2__ *) malloc(_len_right__i0__thread0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_right__i0__thread0; _j0++) {
            right[_i0].thread->tid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = sort__thread_cmp(left,right);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_left0; _aux++) {
          free(left[_aux].thread);
          }
          free(left);
          for(int _aux = 0; _aux < _len_right0; _aux++) {
          free(right[_aux].thread);
          }
          free(right);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
