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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct mb86a16_state {int deci; int csel; int rsel; int master_clk; } ;

/* Variables and functions */

__attribute__((used)) static void smrt_info_get(struct mb86a16_state *state, int rate)
{
	if (rate >= 37501) {
		state->deci = 0; state->csel = 0; state->rsel = 0;
	} else if (rate >= 30001) {
		state->deci = 0; state->csel = 0; state->rsel = 1;
	} else if (rate >= 26251) {
		state->deci = 0; state->csel = 1; state->rsel = 0;
	} else if (rate >= 22501) {
		state->deci = 0; state->csel = 1; state->rsel = 1;
	} else if (rate >= 18751) {
		state->deci = 1; state->csel = 0; state->rsel = 0;
	} else if (rate >= 15001) {
		state->deci = 1; state->csel = 0; state->rsel = 1;
	} else if (rate >= 13126) {
		state->deci = 1; state->csel = 1; state->rsel = 0;
	} else if (rate >= 11251) {
		state->deci = 1; state->csel = 1; state->rsel = 1;
	} else if (rate >= 9376) {
		state->deci = 2; state->csel = 0; state->rsel = 0;
	} else if (rate >= 7501) {
		state->deci = 2; state->csel = 0; state->rsel = 1;
	} else if (rate >= 6563) {
		state->deci = 2; state->csel = 1; state->rsel = 0;
	} else if (rate >= 5626) {
		state->deci = 2; state->csel = 1; state->rsel = 1;
	} else if (rate >= 4688) {
		state->deci = 3; state->csel = 0; state->rsel = 0;
	} else if (rate >= 3751) {
		state->deci = 3; state->csel = 0; state->rsel = 1;
	} else if (rate >= 3282) {
		state->deci = 3; state->csel = 1; state->rsel = 0;
	} else if (rate >= 2814) {
		state->deci = 3; state->csel = 1; state->rsel = 1;
	} else if (rate >= 2344) {
		state->deci = 4; state->csel = 0; state->rsel = 0;
	} else if (rate >= 1876) {
		state->deci = 4; state->csel = 0; state->rsel = 1;
	} else if (rate >= 1641) {
		state->deci = 4; state->csel = 1; state->rsel = 0;
	} else if (rate >= 1407) {
		state->deci = 4; state->csel = 1; state->rsel = 1;
	} else if (rate >= 1172) {
		state->deci = 5; state->csel = 0; state->rsel = 0;
	} else if (rate >=  939) {
		state->deci = 5; state->csel = 0; state->rsel = 1;
	} else if (rate >=  821) {
		state->deci = 5; state->csel = 1; state->rsel = 0;
	} else {
		state->deci = 5; state->csel = 1; state->rsel = 1;
	}

	if (state->csel == 0)
		state->master_clk = 92000;
	else
		state->master_clk = 61333;

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
          int rate = 100;
          int _len_state0 = 1;
          struct mb86a16_state * state = (struct mb86a16_state *) malloc(_len_state0*sizeof(struct mb86a16_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].deci = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].csel = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rsel = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].master_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smrt_info_get(state,rate);
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rate = 255;
          int _len_state0 = 65025;
          struct mb86a16_state * state = (struct mb86a16_state *) malloc(_len_state0*sizeof(struct mb86a16_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].deci = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].csel = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rsel = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].master_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smrt_info_get(state,rate);
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rate = 10;
          int _len_state0 = 100;
          struct mb86a16_state * state = (struct mb86a16_state *) malloc(_len_state0*sizeof(struct mb86a16_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].deci = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].csel = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rsel = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].master_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smrt_info_get(state,rate);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
