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
struct TYPE_3__ {int /*<<< orphan*/  cur_header_value_len; int /*<<< orphan*/  state; } ;
typedef  TYPE_1__ HttpResponseState ;

/* Variables and functions */
#define  CARRIAGE_RETURN 129 
 int /*<<< orphan*/  HTTP_STATE_ERROR ; 
 int /*<<< orphan*/  HTTP_STATE_INTERM ; 
#define  NEW_LINE 128 

__attribute__((used)) static void
http_parse_header_value(HttpResponseState *state, const char next)
{
	/* Allow everything except... \r, \n */
	switch (next)
	{
		case CARRIAGE_RETURN:
			state->state = HTTP_STATE_INTERM;
			break;
		case NEW_LINE:
			/* \n is not allowed */
			state->state = HTTP_STATE_ERROR;
			break;
		default:
			state->cur_header_value_len++;
			break;
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
          const char next = 100;
          int _len_state0 = 1;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].cur_header_value_len = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          http_parse_header_value(state,next);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
