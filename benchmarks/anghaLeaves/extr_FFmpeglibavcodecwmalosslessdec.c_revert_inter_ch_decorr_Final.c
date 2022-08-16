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
struct TYPE_3__ {int num_channels; int** channel_residues; scalar_t__* is_channel_coded; } ;
typedef  TYPE_1__ WmallDecodeCtx ;

/* Variables and functions */

__attribute__((used)) static void revert_inter_ch_decorr(WmallDecodeCtx *s, int tile_size)
{
    if (s->num_channels != 2)
        return;
    else if (s->is_channel_coded[0] || s->is_channel_coded[1]) {
        int icoef;
        for (icoef = 0; icoef < tile_size; icoef++) {
            s->channel_residues[0][icoef] -= s->channel_residues[1][icoef] >> 1;
            s->channel_residues[1][icoef] += s->channel_residues[0][icoef];
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
          int tile_size = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].num_channels = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__channel_residues0 = 1;
          s[_i0].channel_residues = (int **) malloc(_len_s__i0__channel_residues0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_s__i0__channel_residues0; _j0++) {
            int _len_s__i0__channel_residues1 = 1;
            s[_i0].channel_residues[_j0] = (int *) malloc(_len_s__i0__channel_residues1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_s__i0__channel_residues1; _j1++) {
              s[_i0].channel_residues[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_s__i0__is_channel_coded0 = 1;
          s[_i0].is_channel_coded = (long *) malloc(_len_s__i0__is_channel_coded0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_s__i0__is_channel_coded0; _j0++) {
            s[_i0].is_channel_coded[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          revert_inter_ch_decorr(s,tile_size);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(*(s[_aux].channel_residues));
        free(s[_aux].channel_residues);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].is_channel_coded);
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
