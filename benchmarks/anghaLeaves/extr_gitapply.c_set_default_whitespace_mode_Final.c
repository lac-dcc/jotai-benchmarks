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
struct apply_state {scalar_t__ apply; int /*<<< orphan*/  ws_error_action; int /*<<< orphan*/  whitespace_option; } ;

/* Variables and functions */
 int /*<<< orphan*/  apply_default_whitespace ; 
 int /*<<< orphan*/  nowarn_ws_error ; 
 int /*<<< orphan*/  warn_on_ws_error ; 

__attribute__((used)) static void set_default_whitespace_mode(struct apply_state *state)
{
	if (!state->whitespace_option && !apply_default_whitespace)
		state->ws_error_action = (state->apply ? warn_on_ws_error : nowarn_ws_error);
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
          struct apply_state * state = (struct apply_state *) malloc(_len_state0*sizeof(struct apply_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].apply = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].ws_error_action = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].whitespace_option = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_default_whitespace_mode(state);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
