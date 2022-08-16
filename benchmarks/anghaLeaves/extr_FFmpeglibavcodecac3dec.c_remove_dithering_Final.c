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
struct TYPE_3__ {int fbw_channels; int* start_freq; int* end_freq; scalar_t__** fixed_coeffs; int /*<<< orphan*/ ** bap; scalar_t__* channel_in_cpl; int /*<<< orphan*/ * dither_flag; } ;
typedef  TYPE_1__ AC3DecodeContext ;

/* Variables and functions */
 size_t CPL_CH ; 

__attribute__((used)) static void remove_dithering(AC3DecodeContext *s) {
    int ch, i;

    for (ch = 1; ch <= s->fbw_channels; ch++) {
        if (!s->dither_flag[ch] && s->channel_in_cpl[ch]) {
            for (i = s->start_freq[CPL_CH]; i < s->end_freq[CPL_CH]; i++) {
                if (!s->bap[CPL_CH][i])
                    s->fixed_coeffs[ch][i] = 0;
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
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].fbw_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__start_freq0 = 1;
          s[_i0].start_freq = (int *) malloc(_len_s__i0__start_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__start_freq0; _j0++) {
            s[_i0].start_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__end_freq0 = 1;
          s[_i0].end_freq = (int *) malloc(_len_s__i0__end_freq0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__end_freq0; _j0++) {
            s[_i0].end_freq[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__fixed_coeffs0 = 1;
          s[_i0].fixed_coeffs = (long **) malloc(_len_s__i0__fixed_coeffs0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__fixed_coeffs0; _j0++) {
            int _len_s__i0__fixed_coeffs1 = 1;
            s[_i0].fixed_coeffs[_j0] = (long *) malloc(_len_s__i0__fixed_coeffs1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__fixed_coeffs1; _j1++) {
              s[_i0].fixed_coeffs[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__bap0 = 1;
          s[_i0].bap = (int **) malloc(_len_s__i0__bap0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__bap0; _j0++) {
            int _len_s__i0__bap1 = 1;
            s[_i0].bap[_j0] = (int *) malloc(_len_s__i0__bap1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__bap1; _j1++) {
              s[_i0].bap[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__channel_in_cpl0 = 1;
          s[_i0].channel_in_cpl = (long *) malloc(_len_s__i0__channel_in_cpl0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__channel_in_cpl0; _j0++) {
            s[_i0].channel_in_cpl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__dither_flag0 = 1;
          s[_i0].dither_flag = (int *) malloc(_len_s__i0__dither_flag0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__dither_flag0; _j0++) {
            s[_i0].dither_flag[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          remove_dithering(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].start_freq);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].end_freq);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].fixed_coeffs));
        free(s[_aux].fixed_coeffs);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].bap));
        free(s[_aux].bap);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].channel_in_cpl);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].dither_flag);
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
