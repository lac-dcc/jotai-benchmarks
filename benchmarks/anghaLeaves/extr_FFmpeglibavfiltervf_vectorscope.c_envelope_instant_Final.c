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
typedef  int uint8_t ;
struct TYPE_5__ {scalar_t__ mode; size_t pd; int /*<<< orphan*/  is_yuv; } ;
typedef  TYPE_1__ VectorscopeContext ;
struct TYPE_6__ {int* linesize; int** data; int height; int width; } ;
typedef  TYPE_2__ AVFrame ;

/* Variables and functions */
 scalar_t__ COLOR ; 

__attribute__((used)) static void envelope_instant(VectorscopeContext *s, AVFrame *out)
{
    const int dlinesize = out->linesize[0];
    uint8_t *dpd = s->mode == COLOR || !s->is_yuv ? out->data[s->pd] : out->data[0];
    int i, j;

    for (i = 0; i < out->height; i++) {
        for (j = 0; j < out->width; j++) {
            const int pos = i * dlinesize + j;
            const int poa = (i - 1) * dlinesize + j;
            const int pob = (i + 1) * dlinesize + j;

            if (dpd[pos] && (((!j || !dpd[pos - 1]) || ((j == (out->width - 1)) || !dpd[pos + 1]))
                         || ((!i || !dpd[poa]) || ((i == (out->height - 1)) || !dpd[pob])))) {
                dpd[pos] = 255;
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
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].pd = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].is_yuv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out0 = 1;
          struct TYPE_6__ * out = (struct TYPE_6__ *) malloc(_len_out0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
              int _len_out__i0__linesize0 = 1;
          out[_i0].linesize = (int *) malloc(_len_out__i0__linesize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_out__i0__linesize0; _j0++) {
            out[_i0].linesize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_out__i0__data0 = 1;
          out[_i0].data = (int **) malloc(_len_out__i0__data0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_out__i0__data0; _j0++) {
            int _len_out__i0__data1 = 1;
            out[_i0].data[_j0] = (int *) malloc(_len_out__i0__data1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_out__i0__data1; _j1++) {
              out[_i0].data[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        out[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        out[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          envelope_instant(s,out);
          free(s);
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(out[_aux].linesize);
          }
          for(int _aux = 0; _aux < _len_out0; _aux++) {
          free(*(out[_aux].data));
        free(out[_aux].data);
          }
          free(out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
