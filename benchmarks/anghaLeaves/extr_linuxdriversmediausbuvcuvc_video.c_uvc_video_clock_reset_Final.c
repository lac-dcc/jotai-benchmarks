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
struct uvc_clock {int last_sof; int sof_offset; scalar_t__ count; scalar_t__ head; } ;
struct uvc_streaming {struct uvc_clock clock; } ;

/* Variables and functions */

__attribute__((used)) static void uvc_video_clock_reset(struct uvc_streaming *stream)
{
	struct uvc_clock *clock = &stream->clock;

	clock->head = 0;
	clock->count = 0;
	clock->last_sof = -1;
	clock->sof_offset = -1;
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
          int _len_stream0 = 1;
          struct uvc_streaming * stream = (struct uvc_streaming *) malloc(_len_stream0*sizeof(struct uvc_streaming));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].clock.last_sof = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].clock.sof_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].clock.count = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].clock.head = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uvc_video_clock_reset(stream);
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
