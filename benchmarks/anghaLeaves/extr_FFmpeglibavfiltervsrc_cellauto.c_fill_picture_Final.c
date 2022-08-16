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
typedef  int uint8_t ;
struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int** data; int /*<<< orphan*/ * linesize; } ;
struct TYPE_6__ {int generation; int h; int buf_row_idx; int* buf; int w; scalar_t__ scroll; } ;
typedef  TYPE_1__ CellAutoContext ;
typedef  TYPE_2__ AVFrame ;
typedef  TYPE_3__ AVFilterContext ;

/* Variables and functions */

__attribute__((used)) static void fill_picture(AVFilterContext *ctx, AVFrame *picref)
{
    CellAutoContext *s = ctx->priv;
    int i, j, k, row_idx = 0;
    uint8_t *p0 = picref->data[0];

    if (s->scroll && s->generation >= s->h)
        /* show on top the oldest row */
        row_idx = (s->buf_row_idx + 1) % s->h;

    /* fill the output picture with the whole buffer */
    for (i = 0; i < s->h; i++) {
        uint8_t byte = 0;
        uint8_t *row = s->buf + row_idx*s->w;
        uint8_t *p = p0;
        for (k = 0, j = 0; j < s->w; j++) {
            byte |= row[j]<<(7-k++);
            if (k==8 || j == s->w-1) {
                k = 0;
                *p++ = byte;
                byte = 0;
            }
        }
        row_idx = (row_idx + 1) % s->h;
        p0 += picref->linesize[0];
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
          int _len_ctx0 = 1;
          struct TYPE_8__ * ctx = (struct TYPE_8__ *) malloc(_len_ctx0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__priv0 = 1;
          ctx[_i0].priv = (struct TYPE_6__ *) malloc(_len_ctx__i0__priv0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv0; _j0++) {
            ctx[_i0].priv->generation = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->h = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->buf_row_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__priv_buf0 = 1;
          ctx[_i0].priv->buf = (int *) malloc(_len_ctx__i0__priv_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__priv_buf0; _j0++) {
            ctx[_i0].priv->buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].priv->w = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].priv->scroll = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_picref0 = 1;
          struct TYPE_7__ * picref = (struct TYPE_7__ *) malloc(_len_picref0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_picref0; _i0++) {
              int _len_picref__i0__data0 = 1;
          picref[_i0].data = (int **) malloc(_len_picref__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_picref__i0__data0; _j0++) {
            int _len_picref__i0__data1 = 1;
            picref[_i0].data[_j0] = (int *) malloc(_len_picref__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_picref__i0__data1; _j1++) {
              picref[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_picref__i0__linesize0 = 1;
          picref[_i0].linesize = (int *) malloc(_len_picref__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_picref__i0__linesize0; _j0++) {
            picref[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fill_picture(ctx,picref);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].priv);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_picref0; _aux++) {
          free(*(picref[_aux].data));
        free(picref[_aux].data);
          }
          for(int _aux = 0; _aux < _len_picref0; _aux++) {
          free(picref[_aux].linesize);
          }
          free(picref);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
