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
struct TYPE_3__ {int mclms_order; int num_channels; int mclms_recent; int* mclms_coeffs; int* mclms_coeffs_cur; int mclms_scaling; scalar_t__** channel_residues; scalar_t__* mclms_prevvalues; int /*<<< orphan*/ * is_channel_coded; } ;
typedef  TYPE_1__ WmallDecodeCtx ;

/* Variables and functions */

__attribute__((used)) static void mclms_predict(WmallDecodeCtx *s, int icoef, int *pred)
{
    int ich, i;
    int order        = s->mclms_order;
    int num_channels = s->num_channels;

    for (ich = 0; ich < num_channels; ich++) {
        pred[ich] = 0;
        if (!s->is_channel_coded[ich])
            continue;
        for (i = 0; i < order * num_channels; i++)
            pred[ich] += (uint32_t)s->mclms_prevvalues[i + s->mclms_recent] *
                         s->mclms_coeffs[i + order * num_channels * ich];
        for (i = 0; i < ich; i++)
            pred[ich] += (uint32_t)s->channel_residues[i][icoef] *
                         s->mclms_coeffs_cur[i + num_channels * ich];
        pred[ich] += 1 << s->mclms_scaling - 1;
        pred[ich] >>= s->mclms_scaling;
        s->channel_residues[ich][icoef] += pred[ich];
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
          int icoef = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].mclms_order = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].mclms_recent = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__mclms_coeffs0 = 1;
          s[_i0].mclms_coeffs = (int *) malloc(_len_s__i0__mclms_coeffs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__mclms_coeffs0; _j0++) {
            s[_i0].mclms_coeffs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__mclms_coeffs_cur0 = 1;
          s[_i0].mclms_coeffs_cur = (int *) malloc(_len_s__i0__mclms_coeffs_cur0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__mclms_coeffs_cur0; _j0++) {
            s[_i0].mclms_coeffs_cur[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].mclms_scaling = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__channel_residues0 = 1;
          s[_i0].channel_residues = (long **) malloc(_len_s__i0__channel_residues0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_s__i0__channel_residues0; _j0++) {
            int _len_s__i0__channel_residues1 = 1;
            s[_i0].channel_residues[_j0] = (long *) malloc(_len_s__i0__channel_residues1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_s__i0__channel_residues1; _j1++) {
              s[_i0].channel_residues[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__mclms_prevvalues0 = 1;
          s[_i0].mclms_prevvalues = (long *) malloc(_len_s__i0__mclms_prevvalues0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__mclms_prevvalues0; _j0++) {
            s[_i0].mclms_prevvalues[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s__i0__is_channel_coded0 = 1;
          s[_i0].is_channel_coded = (int *) malloc(_len_s__i0__is_channel_coded0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_s__i0__is_channel_coded0; _j0++) {
            s[_i0].is_channel_coded[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pred0 = 1;
          int * pred = (int *) malloc(_len_pred0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pred0; _i0++) {
            pred[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mclms_predict(s,icoef,pred);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].mclms_coeffs);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].mclms_coeffs_cur);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].channel_residues));
        free(s[_aux].channel_residues);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].mclms_prevvalues);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].is_channel_coded);
          }
          free(s);
          free(pred);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
