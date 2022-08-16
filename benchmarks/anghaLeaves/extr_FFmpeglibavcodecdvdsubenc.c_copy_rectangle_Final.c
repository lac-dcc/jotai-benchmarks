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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  uint8_t ;
struct TYPE_4__ {int x; int y; int* linesize; int h; int w; int /*<<< orphan*/ ** data; } ;
typedef  TYPE_1__ AVSubtitleRect ;

/* Variables and functions */

__attribute__((used)) static void copy_rectangle(AVSubtitleRect *dst, AVSubtitleRect *src, int cmap[])
{
    int x, y;
    uint8_t *p, *q;

    p = src->data[0];
    q = dst->data[0] + (src->x - dst->x) +
                            (src->y - dst->y) * dst->linesize[0];
    for (y = 0; y < src->h; y++) {
        for (x = 0; x < src->w; x++)
            *(q++) = cmap[*(p++)];
        p += src->linesize[0] - src->w;
        q += dst->linesize[0] - src->w;
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
          int _len_dst0 = 1;
          struct TYPE_4__ * dst = (struct TYPE_4__ *) malloc(_len_dst0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__linesize0 = 1;
          dst[_i0].linesize = (int *) malloc(_len_dst__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dst__i0__linesize0; _j0++) {
            dst[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dst[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dst__i0__data0 = 1;
          dst[_i0].data = (int **) malloc(_len_dst__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dst__i0__data0; _j0++) {
            int _len_dst__i0__data1 = 1;
            dst[_i0].data[_j0] = (int *) malloc(_len_dst__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dst__i0__data1; _j1++) {
              dst[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_src0 = 1;
          struct TYPE_4__ * src = (struct TYPE_4__ *) malloc(_len_src0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_src__i0__linesize0 = 1;
          src[_i0].linesize = (int *) malloc(_len_src__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_src__i0__linesize0; _j0++) {
            src[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        src[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_src__i0__data0 = 1;
          src[_i0].data = (int **) malloc(_len_src__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_src__i0__data0; _j0++) {
            int _len_src__i0__data1 = 1;
            src[_i0].data[_j0] = (int *) malloc(_len_src__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_src__i0__data1; _j1++) {
              src[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cmap0 = 1;
          int * cmap = (int *) malloc(_len_cmap0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cmap0; _i0++) {
            cmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_rectangle(dst,src,cmap);
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(dst[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_dst0; _aux++) {
          free(*(dst[_aux].data));
        free(dst[_aux].data);
          }
          free(dst);
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(src[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_src0; _aux++) {
          free(*(src[_aux].data));
        free(src[_aux].data);
          }
          free(src);
          free(cmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
