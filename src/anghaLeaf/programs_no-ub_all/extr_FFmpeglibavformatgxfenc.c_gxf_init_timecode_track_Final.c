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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int media_type; int sample_rate; char media_info; int track_type; int sample_size; int /*<<< orphan*/  fields; int /*<<< orphan*/  lines_index; int /*<<< orphan*/  frame_rate_index; } ;
typedef  TYPE_1__ GXFStreamContext ;

/* Variables and functions */

__attribute__((used)) static void gxf_init_timecode_track(GXFStreamContext *sc, GXFStreamContext *vsc)
{
    if (!vsc)
        return;

    sc->media_type = vsc->sample_rate == 60 ? 7 : 8;
    sc->sample_rate = vsc->sample_rate;
    sc->media_info = ('T'<<8) | '0';
    sc->track_type = 3;
    sc->frame_rate_index = vsc->frame_rate_index;
    sc->lines_index = vsc->lines_index;
    sc->sample_size = 16;
    sc->fields = vsc->fields;
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
          int _len_sc0 = 1;
          struct TYPE_4__ * sc = (struct TYPE_4__ *) malloc(_len_sc0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc->media_type = ((-2 * (next_i()%2)) + 1) * next_i();
        sc->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        sc->media_info = ((-2 * (next_i()%2)) + 1) * next_i();
        sc->track_type = ((-2 * (next_i()%2)) + 1) * next_i();
        sc->sample_size = ((-2 * (next_i()%2)) + 1) * next_i();
        sc->fields = ((-2 * (next_i()%2)) + 1) * next_i();
        sc->lines_index = ((-2 * (next_i()%2)) + 1) * next_i();
        sc->frame_rate_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsc0 = 1;
          struct TYPE_4__ * vsc = (struct TYPE_4__ *) malloc(_len_vsc0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_vsc0; _i0++) {
            vsc->media_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vsc->sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        vsc->media_info = ((-2 * (next_i()%2)) + 1) * next_i();
        vsc->track_type = ((-2 * (next_i()%2)) + 1) * next_i();
        vsc->sample_size = ((-2 * (next_i()%2)) + 1) * next_i();
        vsc->fields = ((-2 * (next_i()%2)) + 1) * next_i();
        vsc->lines_index = ((-2 * (next_i()%2)) + 1) * next_i();
        vsc->frame_rate_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gxf_init_timecode_track(sc,vsc);
          free(sc);
          free(vsc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
