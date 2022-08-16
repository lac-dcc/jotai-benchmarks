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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  Pitch; int /*<<< orphan*/  A; int /*<<< orphan*/  R; int /*<<< orphan*/  G; int /*<<< orphan*/  B; int /*<<< orphan*/  V; int /*<<< orphan*/  U; int /*<<< orphan*/  Y; int /*<<< orphan*/  UV; } ;
struct TYPE_7__ {TYPE_1__ Data; } ;
typedef  TYPE_2__ mfxFrameSurface1 ;
struct TYPE_8__ {int format; int /*<<< orphan*/ * linesize; int /*<<< orphan*/ * data; } ;
typedef  TYPE_3__ AVFrame ;

/* Variables and functions */
#define  AV_PIX_FMT_NV12 131 
#define  AV_PIX_FMT_RGB32 130 
#define  AV_PIX_FMT_YUV420P 129 
#define  AV_PIX_FMT_YUYV422 128 
 int MFX_ERR_UNSUPPORTED ; 

__attribute__((used)) static int map_frame_to_surface(AVFrame *frame, mfxFrameSurface1 *surface)
{
    switch (frame->format) {
    case AV_PIX_FMT_NV12:
        surface->Data.Y  = frame->data[0];
        surface->Data.UV = frame->data[1];
        break;
    case AV_PIX_FMT_YUV420P:
        surface->Data.Y = frame->data[0];
        surface->Data.U = frame->data[1];
        surface->Data.V = frame->data[2];
        break;
    case AV_PIX_FMT_YUYV422:
        surface->Data.Y = frame->data[0];
        surface->Data.U = frame->data[0] + 1;
        surface->Data.V = frame->data[0] + 3;
        break;
    case AV_PIX_FMT_RGB32:
        surface->Data.B = frame->data[0];
        surface->Data.G = frame->data[0] + 1;
        surface->Data.R = frame->data[0] + 2;
        surface->Data.A = frame->data[0] + 3;
        break;
    default:
        return MFX_ERR_UNSUPPORTED;
    }
    surface->Data.Pitch = frame->linesize[0];

    return 0;
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
          struct TYPE_8__ * frame = (struct TYPE_8__ *) malloc(_len_frame0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_surface0 = 1;
          struct TYPE_7__ * surface = (struct TYPE_7__ *) malloc(_len_surface0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].Data.Pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].Data.A = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].Data.R = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].Data.G = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].Data.B = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].Data.V = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].Data.U = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].Data.Y = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].Data.UV = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = map_frame_to_surface(frame,surface);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_frame0; _aux++) {
          free(frame[_aux].data);
          }
          free(frame);
          free(surface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
