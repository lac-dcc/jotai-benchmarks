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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ owner_id; scalar_t__ topic_id; scalar_t__ voting_id; } ;
typedef  TYPE_1__ voting_t ;

/* Variables and functions */

__attribute__((used)) static inline int cmp_voting (voting_t *x, voting_t *y) {
  if (x->owner_id < y->owner_id) {
    return -1;
  } else if (x->owner_id > y->owner_id) {
    return 1;
  } else if (x->topic_id < y->topic_id) {
    return -1;
  } else if (x->topic_id > y->topic_id) {
    return 1;
  } else if (x->voting_id < y->voting_id) {
    return -1;
  } else if (x->voting_id > y->voting_id) {
    return 1;
  } else {
    return 0;
  }
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
          int _len_x0 = 1;
          struct TYPE_4__ * x = (struct TYPE_4__ *) malloc(_len_x0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0].owner_id = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].topic_id = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].voting_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_y0 = 1;
          struct TYPE_4__ * y = (struct TYPE_4__ *) malloc(_len_y0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_y0; _i0++) {
            y[_i0].owner_id = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].topic_id = ((-2 * (next_i()%2)) + 1) * next_i();
        y[_i0].voting_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmp_voting(x,y);
          printf("%d\n", benchRet); 
          free(x);
          free(y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
