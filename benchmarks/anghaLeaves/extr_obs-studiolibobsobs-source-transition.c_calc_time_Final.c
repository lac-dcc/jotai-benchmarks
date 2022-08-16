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
typedef  scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ transition_start_time; scalar_t__ transition_duration; } ;
typedef  TYPE_1__ obs_source_t ;

/* Variables and functions */

__attribute__((used)) static float calc_time(obs_source_t *transition, uint64_t ts)
{
	uint64_t end;

	if (ts <= transition->transition_start_time)
		return 0.0f;

	end = transition->transition_duration;
	ts -= transition->transition_start_time;
	if (ts >= end || end == 0)
		return 1.0f;

	return (float)((long double)ts / (long double)end);
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
          long ts = 100;
          int _len_transition0 = 1;
          struct TYPE_3__ * transition = (struct TYPE_3__ *) malloc(_len_transition0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_transition0; _i0++) {
            transition[_i0].transition_start_time = ((-2 * (next_i()%2)) + 1) * next_i();
        transition[_i0].transition_duration = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          float benchRet = calc_time(transition,ts);
          printf("%f\n", benchRet); 
          free(transition);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
