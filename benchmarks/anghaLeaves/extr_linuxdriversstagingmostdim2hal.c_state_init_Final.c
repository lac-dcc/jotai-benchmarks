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

/* Type definitions */
struct int_ch_state {scalar_t__ level; scalar_t__ idx2; scalar_t__ idx1; scalar_t__ service_counter; scalar_t__ request_counter; } ;

/* Variables and functions */

__attribute__((used)) static void state_init(struct int_ch_state *state)
{
	state->request_counter = 0;
	state->service_counter = 0;

	state->idx1 = 0;
	state->idx2 = 0;
	state->level = 0;
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
          int _len_state0 = 1;
          struct int_ch_state * state = (struct int_ch_state *) malloc(_len_state0*sizeof(struct int_ch_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].idx2 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].idx1 = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].service_counter = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].request_counter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          state_init(state);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
