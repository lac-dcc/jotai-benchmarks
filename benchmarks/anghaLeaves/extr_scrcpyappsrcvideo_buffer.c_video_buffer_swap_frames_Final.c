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
struct video_buffer {int /*<<< orphan*/ * rendering_frame; int /*<<< orphan*/ * decoding_frame; } ;
typedef  int /*<<< orphan*/  AVFrame ;

/* Variables and functions */

__attribute__((used)) static void
video_buffer_swap_frames(struct video_buffer *vb) {
    AVFrame *tmp = vb->decoding_frame;
    vb->decoding_frame = vb->rendering_frame;
    vb->rendering_frame = tmp;
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
          int _len_vb0 = 1;
          struct video_buffer * vb = (struct video_buffer *) malloc(_len_vb0*sizeof(struct video_buffer));
          for(int _i0 = 0; _i0 < _len_vb0; _i0++) {
              int _len_vb__i0__rendering_frame0 = 1;
          vb[_i0].rendering_frame = (int *) malloc(_len_vb__i0__rendering_frame0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vb__i0__rendering_frame0; _j0++) {
            vb[_i0].rendering_frame[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vb__i0__decoding_frame0 = 1;
          vb[_i0].decoding_frame = (int *) malloc(_len_vb__i0__decoding_frame0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vb__i0__decoding_frame0; _j0++) {
            vb[_i0].decoding_frame[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          video_buffer_swap_frames(vb);
          for(int _aux = 0; _aux < _len_vb0; _aux++) {
          free(vb[_aux].rendering_frame);
          }
          for(int _aux = 0; _aux < _len_vb0; _aux++) {
          free(vb[_aux].decoding_frame);
          }
          free(vb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
