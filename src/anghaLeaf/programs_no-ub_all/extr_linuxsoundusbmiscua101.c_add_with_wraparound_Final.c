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
       0            big-arr\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {unsigned int queue_length; } ;
struct ua101 {TYPE_1__ playback; } ;

/* Variables and functions */

__attribute__((used)) static inline void add_with_wraparound(struct ua101 *ua,
				       unsigned int *value, unsigned int add)
{
	*value += add;
	if (*value >= ua->playback.queue_length)
		*value -= ua->playback.queue_length;
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

    // big-arr
    case 0:
    {
          unsigned int add = 255;
          int _len_ua0 = 1;
          struct ua101 * ua = (struct ua101 *) malloc(_len_ua0*sizeof(struct ua101));
          for(int _i0 = 0; _i0 < _len_ua0; _i0++) {
            ua->playback.queue_length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_value0 = 65025;
          unsigned int * value = (unsigned int *) malloc(_len_value0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          add_with_wraparound(ua,value,add);
          free(ua);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
