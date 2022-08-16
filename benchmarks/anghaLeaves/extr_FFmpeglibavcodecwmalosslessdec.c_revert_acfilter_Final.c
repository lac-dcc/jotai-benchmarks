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
typedef  int uint32_t ;
typedef  int int16_t ;
struct TYPE_3__ {int* acfilter_coeffs; int acfilter_scaling; int acfilter_order; int num_channels; int** acfilter_prevvalues; int** channel_residues; } ;
typedef  TYPE_1__ WmallDecodeCtx ;

/* Variables and functions */

__attribute__((used)) static void revert_acfilter(WmallDecodeCtx *s, int tile_size)
{
    int ich, pred, i, j;
    int16_t *filter_coeffs = s->acfilter_coeffs;
    int scaling            = s->acfilter_scaling;
    int order              = s->acfilter_order;

    for (ich = 0; ich < s->num_channels; ich++) {
        int *prevvalues = s->acfilter_prevvalues[ich];
        for (i = 0; i < order; i++) {
            pred = 0;
            for (j = 0; j < order; j++) {
                if (i <= j)
                    pred += filter_coeffs[j] * prevvalues[j - i];
                else
                    pred += s->channel_residues[ich][i - j - 1] * filter_coeffs[j];
            }
            pred >>= scaling;
            s->channel_residues[ich][i] += pred;
        }
        for (i = order; i < tile_size; i++) {
            pred = 0;
            for (j = 0; j < order; j++)
                pred += (uint32_t)s->channel_residues[ich][i - j - 1] * filter_coeffs[j];
            pred >>= scaling;
            s->channel_residues[ich][i] += pred;
        }
        for (j = 0; j < order; j++)
            prevvalues[j] = s->channel_residues[ich][tile_size - j - 1];
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
          int tile_size = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__acfilter_coeffs0 = 1;
          s[_i0].acfilter_coeffs = (int *) malloc(_len_s__i0__acfilter_coeffs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__acfilter_coeffs0; _j0++) {
            s[_i0].acfilter_coeffs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].acfilter_scaling = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].acfilter_order = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__acfilter_prevvalues0 = 1;
          s[_i0].acfilter_prevvalues = (int **) malloc(_len_s__i0__acfilter_prevvalues0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__acfilter_prevvalues0; _j0++) {
            int _len_s__i0__acfilter_prevvalues1 = 1;
            s[_i0].acfilter_prevvalues[_j0] = (int *) malloc(_len_s__i0__acfilter_prevvalues1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__acfilter_prevvalues1; _j1++) {
              s[_i0].acfilter_prevvalues[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__channel_residues0 = 1;
          s[_i0].channel_residues = (int **) malloc(_len_s__i0__channel_residues0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__channel_residues0; _j0++) {
            int _len_s__i0__channel_residues1 = 1;
            s[_i0].channel_residues[_j0] = (int *) malloc(_len_s__i0__channel_residues1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__channel_residues1; _j1++) {
              s[_i0].channel_residues[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          revert_acfilter(s,tile_size);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].acfilter_coeffs);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].acfilter_prevvalues));
        free(s[_aux].acfilter_prevvalues);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].channel_residues));
        free(s[_aux].channel_residues);
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
