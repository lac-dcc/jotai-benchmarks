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
struct mp_aframe {struct AVFrame* av_frame; } ;
struct AVFrame {int dummy; } ;

/* Variables and functions */

struct AVFrame *mp_aframe_get_raw_avframe(struct mp_aframe *frame)
{
    return frame->av_frame;
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
          int _len_frame0 = 1;
          struct mp_aframe * frame = (struct mp_aframe *) malloc(_len_frame0*sizeof(struct mp_aframe));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__av_frame0 = 1;
          frame[_i0].av_frame = (struct AVFrame *) malloc(_len_frame__i0__av_frame0*sizeof(struct AVFrame));
          for(int _j0 = 0; _j0 < _len_frame__i0__av_frame0; _j0++) {
            frame[_i0].av_frame->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct AVFrame * benchRet = mp_aframe_get_raw_avframe(frame);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].av_frame);
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
