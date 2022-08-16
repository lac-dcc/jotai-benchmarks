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
typedef  int uint16_t ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int nb_planes; int* fill; int depth; int* planeheight; int* planewidth; TYPE_1__* borders; } ;
struct TYPE_6__ {int top; int bottom; int left; int right; } ;
typedef  TYPE_2__ FillBordersContext ;
typedef  TYPE_3__ AVFrame ;

/* Variables and functions */

__attribute__((used)) static void fixed_borders16(FillBordersContext *s, AVFrame *frame)
{
    int p, y, x;

    for (p = 0; p < s->nb_planes; p++) {
        uint16_t *ptr = (uint16_t *)frame->data[p];
        uint16_t fill = s->fill[p] << (s->depth - 8);
        int linesize = frame->linesize[p] / 2;

        for (y = s->borders[p].top; y < s->planeheight[p] - s->borders[p].bottom; y++) {
            for (x = 0; x < s->borders[p].left; x++) {
                ptr[y * linesize + x] = fill;
            }

            for (x = 0; x < s->borders[p].right; x++) {
                ptr[y * linesize + s->planewidth[p] - s->borders[p].right + x] = fill;
            }
        }

        for (y = 0; y < s->borders[p].top; y++) {
            for (x = 0; x < s->planewidth[p]; x++) {
                ptr[y * linesize + x] = fill;
            }
        }

        for (y = s->planeheight[p] - s->borders[p].bottom; y < s->planeheight[p]; y++) {
            for (x = 0; x < s->planewidth[p]; x++) {
                ptr[y * linesize + x] = fill;
            }
        }
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
          int _len_s0 = 1;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].nb_planes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__fill0 = 1;
          s[_i0].fill = (int *) malloc(_len_s__i0__fill0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__fill0; _j0++) {
            s[_i0].fill[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].depth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__planeheight0 = 1;
          s[_i0].planeheight = (int *) malloc(_len_s__i0__planeheight0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__planeheight0; _j0++) {
            s[_i0].planeheight[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__planewidth0 = 1;
          s[_i0].planewidth = (int *) malloc(_len_s__i0__planewidth0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__planewidth0; _j0++) {
            s[_i0].planewidth[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__borders0 = 1;
          s[_i0].borders = (struct TYPE_6__ *) malloc(_len_s__i0__borders0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_s__i0__borders0; _j0++) {
            s[_i0].borders->top = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].borders->bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].borders->left = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].borders->right = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_frame0 = 1;
          struct TYPE_8__ * frame = (struct TYPE_8__ *) malloc(_len_frame0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
              int _len_frame__i0__linesize0 = 1;
          frame[_i0].linesize = (int *) malloc(_len_frame__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_frame__i0__linesize0; _j0++) {
            frame[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frame__i0__data0 = 1;
          frame[_i0].data = (long *) malloc(_len_frame__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_frame__i0__data0; _j0++) {
            frame[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fixed_borders16(s,frame);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].fill);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].planeheight);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].planewidth);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].borders);
          }
          free(s);
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
