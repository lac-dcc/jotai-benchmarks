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
struct TYPE_3__ {scalar_t__ push_to_mute_stop_time; int push_to_mute_delay; scalar_t__ push_to_talk_stop_time; int push_to_talk_delay; scalar_t__ push_to_talk_enabled; scalar_t__ push_to_mute_enabled; scalar_t__ user_muted; int /*<<< orphan*/  enabled; scalar_t__ user_push_to_talk_pressed; scalar_t__ user_push_to_mute_pressed; } ;
typedef  TYPE_1__ obs_source_t ;

/* Variables and functions */

__attribute__((used)) static inline bool source_muted(obs_source_t *source, uint64_t os_time)
{
	if (source->push_to_mute_enabled && source->user_push_to_mute_pressed)
		source->push_to_mute_stop_time = os_time +
			source->push_to_mute_delay * 1000000;

	if (source->push_to_talk_enabled && source->user_push_to_talk_pressed)
		source->push_to_talk_stop_time = os_time +
			source->push_to_talk_delay * 1000000;

	bool push_to_mute_active = source->user_push_to_mute_pressed ||
		os_time < source->push_to_mute_stop_time;
	bool push_to_talk_active = source->user_push_to_talk_pressed ||
		os_time < source->push_to_talk_stop_time;

	return !source->enabled || source->user_muted ||
			(source->push_to_mute_enabled && push_to_mute_active) ||
			(source->push_to_talk_enabled && !push_to_talk_active);
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
          long os_time = 100;
          int _len_source0 = 1;
          struct TYPE_3__ * source = (struct TYPE_3__ *) malloc(_len_source0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_source0; _i0++) {
            source[_i0].push_to_mute_stop_time = ((-2 * (next_i()%2)) + 1) * next_i();
        source[_i0].push_to_mute_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        source[_i0].push_to_talk_stop_time = ((-2 * (next_i()%2)) + 1) * next_i();
        source[_i0].push_to_talk_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        source[_i0].push_to_talk_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        source[_i0].push_to_mute_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        source[_i0].user_muted = ((-2 * (next_i()%2)) + 1) * next_i();
        source[_i0].enabled = ((-2 * (next_i()%2)) + 1) * next_i();
        source[_i0].user_push_to_talk_pressed = ((-2 * (next_i()%2)) + 1) * next_i();
        source[_i0].user_push_to_mute_pressed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = source_muted(source,os_time);
          printf("%d\n", benchRet); 
          free(source);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
