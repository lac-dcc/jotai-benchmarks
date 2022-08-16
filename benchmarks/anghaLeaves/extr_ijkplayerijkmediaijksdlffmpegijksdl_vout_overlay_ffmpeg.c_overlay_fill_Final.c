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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/ * linesize; int /*<<< orphan*/ * data; } ;
struct TYPE_5__ {int planes; int /*<<< orphan*/ * pitches; int /*<<< orphan*/ * pixels; } ;
typedef  TYPE_1__ SDL_VoutOverlay ;
typedef  TYPE_2__ AVFrame ;

/* Variables and functions */
 int AV_NUM_DATA_POINTERS ; 

__attribute__((used)) static void overlay_fill(SDL_VoutOverlay *overlay, AVFrame *frame, int planes)
{
    overlay->planes = planes;

    for (int i = 0; i < AV_NUM_DATA_POINTERS; ++i) {
        overlay->pixels[i] = frame->data[i];
        overlay->pitches[i] = frame->linesize[i];
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
          int planes = 100;
          int _len_overlay0 = 1;
          struct TYPE_5__ * overlay = (struct TYPE_5__ *) malloc(_len_overlay0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_overlay0; _i0++) {
            overlay[_i0].planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_overlay__i0__pitches0 = 1;
          overlay[_i0].pitches = (int *) malloc(_len_overlay__i0__pitches0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_overlay__i0__pitches0; _j0++) {
            overlay[_i0].pitches[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_overlay__i0__pixels0 = 1;
          overlay[_i0].pixels = (int *) malloc(_len_overlay__i0__pixels0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_overlay__i0__pixels0; _j0++) {
            overlay[_i0].pixels[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_frame0 = 1;
          struct TYPE_6__ * frame = (struct TYPE_6__ *) malloc(_len_frame0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__linesize0 = 1;
          frame[_i0].linesize = (int *) malloc(_len_frame__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__linesize0; _j0++) {
            frame[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame__i0__data0 = 1;
          frame[_i0].data = (int *) malloc(_len_frame__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__data0; _j0++) {
            frame[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          overlay_fill(overlay,frame,planes);
          for(int _aux = 0; _aux < _len_overlay0; _aux++) {
          free(overlay[_aux].pitches);
          }
          for(int _aux = 0; _aux < _len_overlay0; _aux++) {
          free(overlay[_aux].pixels);
          }
          free(overlay);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].data);
          }
          free(frame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
