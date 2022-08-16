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
struct kbd_state {int level; scalar_t__ mode_bit; } ;
struct TYPE_2__ {scalar_t__ levels; } ;

/* Variables and functions */
 int EINVAL ; 
 TYPE_1__ kbd_info ; 
 scalar_t__* kbd_mode_levels ; 
 int kbd_mode_levels_count ; 

__attribute__((used)) static int kbd_get_level(struct kbd_state *state)
{
	int i;

	if (kbd_info.levels != 0)
		return state->level;

	if (kbd_mode_levels_count > 0) {
		for (i = 0; i < kbd_mode_levels_count; ++i)
			if (kbd_mode_levels[i] == state->mode_bit)
				return i;
		return 0;
	}

	return -EINVAL;
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
          struct kbd_state * state = (struct kbd_state *) malloc(_len_state0*sizeof(struct kbd_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].level = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].mode_bit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kbd_get_level(state);
          printf("%d\n", benchRet); 
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
