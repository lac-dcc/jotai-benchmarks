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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ orientation; int h; int w; int nb_display_channels; float** magnitudes; } ;
typedef  TYPE_1__ ShowSpectrumContext ;

/* Variables and functions */
 scalar_t__ VERTICAL ; 

__attribute__((used)) static void scale_magnitudes(ShowSpectrumContext *s, float scale)
{
    int ch, y, h = s->orientation == VERTICAL ? s->h : s->w;

    for (ch = 0; ch < s->nb_display_channels; ch++) {
        float *magnitudes = s->magnitudes[ch];

        for (y = 0; y < h; y++)
            magnitudes[y] *= scale;
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
          float scale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].orientation = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].h = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].nb_display_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__magnitudes0 = 1;
          s[_i0].magnitudes = (float **) malloc(_len_s__i0__magnitudes0*sizeof(float *));
          for(int _j0 = 0; _j0 < _len_s__i0__magnitudes0; _j0++) {
            int _len_s__i0__magnitudes1 = 1;
            s[_i0].magnitudes[_j0] = (float *) malloc(_len_s__i0__magnitudes1*sizeof(float));
            for(int _j1 = 0; _j1 < _len_s__i0__magnitudes1; _j1++) {
              s[_i0].magnitudes[_j0][_j1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          }
          scale_magnitudes(s,scale);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].magnitudes));
        free(s[_aux].magnitudes);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
