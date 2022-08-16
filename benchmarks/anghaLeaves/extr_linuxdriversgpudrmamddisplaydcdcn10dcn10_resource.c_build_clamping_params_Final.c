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
struct TYPE_4__ {int /*<<< orphan*/  pixel_encoding; int /*<<< orphan*/  display_color_depth; } ;
struct TYPE_3__ {int /*<<< orphan*/  pixel_encoding; int /*<<< orphan*/  c_depth; int /*<<< orphan*/  clamping_level; } ;
struct dc_stream_state {TYPE_2__ timing; TYPE_1__ clamping; } ;

/* Variables and functions */
 int /*<<< orphan*/  CLAMPING_FULL_RANGE ; 

__attribute__((used)) static void build_clamping_params(struct dc_stream_state *stream)
{
	stream->clamping.clamping_level = CLAMPING_FULL_RANGE;
	stream->clamping.c_depth = stream->timing.display_color_depth;
	stream->clamping.pixel_encoding = stream->timing.pixel_encoding;
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
          struct dc_stream_state * stream = (struct dc_stream_state *) malloc(_len_stream0*sizeof(struct dc_stream_state));
          for(int _i0 = 0; _i0 < _len_stream0; _i0++) {
            stream[_i0].timing.pixel_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].timing.display_color_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].clamping.pixel_encoding = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].clamping.c_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        stream[_i0].clamping.clamping_level = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          build_clamping_params(stream);
          free(stream);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
