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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct round_robin_t {scalar_t__ pos; scalar_t__ consumed_weight; } ;
struct TYPE_3__ {scalar_t__ size; } ;
typedef  TYPE_1__ h2o_socketpool_target_vector_t ;

/* Variables and functions */

__attribute__((used)) static inline void select_next(struct round_robin_t *self, h2o_socketpool_target_vector_t *targets)
{
    self->pos += 1;
    if (self->pos == targets->size)
        self->pos = 0;
    self->consumed_weight = 0;
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
          int _len_self0 = 1;
          struct round_robin_t * self = (struct round_robin_t *) malloc(_len_self0*sizeof(struct round_robin_t));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
            self[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        self[_i0].consumed_weight = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_targets0 = 1;
          struct TYPE_3__ * targets = (struct TYPE_3__ *) malloc(_len_targets0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_targets0; _i0++) {
            targets[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          select_next(self,targets);
          free(self);
          free(targets);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
