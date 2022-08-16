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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct v4l2_mbus_framefmt {int /*<<< orphan*/  field; int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;
struct TYPE_3__ {int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;
struct TYPE_4__ {TYPE_1__ bt; } ;
struct adv7511_state {TYPE_2__ dv_timings; } ;

/* Variables and functions */
 int /*<<< orphan*/  V4L2_FIELD_NONE ; 

__attribute__((used)) static void adv7511_fill_format(struct adv7511_state *state,
				struct v4l2_mbus_framefmt *format)
{
	format->width = state->dv_timings.bt.width;
	format->height = state->dv_timings.bt.height;
	format->field = V4L2_FIELD_NONE;
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
          struct adv7511_state * state = (struct adv7511_state *) malloc(_len_state0*sizeof(struct adv7511_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].dv_timings.bt.height = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].dv_timings.bt.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_format0 = 1;
          struct v4l2_mbus_framefmt * format = (struct v4l2_mbus_framefmt *) malloc(_len_format0*sizeof(struct v4l2_mbus_framefmt));
          for(int _i0 = 0; _i0 < _len_format0; _i0++) {
            format[_i0].field = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        format[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adv7511_fill_format(state,format);
          free(state);
          free(format);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
