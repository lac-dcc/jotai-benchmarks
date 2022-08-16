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
struct TYPE_3__ {unsigned long* key; int pos; scalar_t__ has_binomial; scalar_t__ has_gauss; scalar_t__ gauss; } ;
typedef  TYPE_1__ rk_state ;

/* Variables and functions */
 int RK_STATE_LEN ; 

void
rk_seed(unsigned long seed, rk_state *state)
{
    int pos;
    seed &= 0xffffffffUL;

    /* Knuth's PRNG as used in the Mersenne Twister reference implementation */
    for (pos = 0; pos < RK_STATE_LEN; pos++) {
        state->key[pos] = seed;
        seed = (1812433253UL * (seed ^ (seed >> 30)) + pos + 1) & 0xffffffffUL;
    }
    state->pos = RK_STATE_LEN;
    state->gauss = 0;
    state->has_gauss = 0;
    state->has_binomial = 0;
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
          unsigned long seed = 100;
          int _len_state0 = 1;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__key0 = 1;
          state[_i0].key = (unsigned long *) malloc(_len_state__i0__key0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_state__i0__key0; _j0++) {
            state[_i0].key[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].has_binomial = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].has_gauss = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].gauss = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rk_seed(seed,state);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].key);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
