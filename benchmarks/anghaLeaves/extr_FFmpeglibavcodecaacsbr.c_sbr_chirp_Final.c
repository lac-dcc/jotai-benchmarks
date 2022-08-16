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
struct TYPE_6__ {int** bs_invf_mode; float* bw_array; } ;
struct TYPE_5__ {int n_q; } ;
typedef  TYPE_1__ SpectralBandReplication ;
typedef  TYPE_2__ SBRData ;

/* Variables and functions */

__attribute__((used)) static void sbr_chirp(SpectralBandReplication *sbr, SBRData *ch_data)
{
    int i;
    float new_bw;
    static const float bw_tab[] = { 0.0f, 0.75f, 0.9f, 0.98f };

    for (i = 0; i < sbr->n_q; i++) {
        if (ch_data->bs_invf_mode[0][i] + ch_data->bs_invf_mode[1][i] == 1) {
            new_bw = 0.6f;
        } else
            new_bw = bw_tab[ch_data->bs_invf_mode[0][i]];

        if (new_bw < ch_data->bw_array[i]) {
            new_bw = 0.75f    * new_bw + 0.25f    * ch_data->bw_array[i];
        } else
            new_bw = 0.90625f * new_bw + 0.09375f * ch_data->bw_array[i];
        ch_data->bw_array[i] = new_bw < 0.015625f ? 0.0f : new_bw;
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
          int _len_sbr0 = 1;
          struct TYPE_5__ * sbr = (struct TYPE_5__ *) malloc(_len_sbr0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sbr0; _i0++) {
            sbr[_i0].n_q = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ch_data0 = 1;
          struct TYPE_6__ * ch_data = (struct TYPE_6__ *) malloc(_len_ch_data0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ch_data0; _i0++) {
              int _len_ch_data__i0__bs_invf_mode0 = 1;
          ch_data[_i0].bs_invf_mode = (int **) malloc(_len_ch_data__i0__bs_invf_mode0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ch_data__i0__bs_invf_mode0; _j0++) {
            int _len_ch_data__i0__bs_invf_mode1 = 1;
            ch_data[_i0].bs_invf_mode[_j0] = (int *) malloc(_len_ch_data__i0__bs_invf_mode1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ch_data__i0__bs_invf_mode1; _j1++) {
              ch_data[_i0].bs_invf_mode[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ch_data__i0__bw_array0 = 1;
          ch_data[_i0].bw_array = (float *) malloc(_len_ch_data__i0__bw_array0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_ch_data__i0__bw_array0; _j0++) {
            ch_data[_i0].bw_array[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          sbr_chirp(sbr,ch_data);
          free(sbr);
          for(int _aux = 0; _aux < _len_ch_data0; _aux++) {
          free(*(ch_data[_aux].bs_invf_mode));
        free(ch_data[_aux].bs_invf_mode);
          }
          for(int _aux = 0; _aux < _len_ch_data0; _aux++) {
          free(ch_data[_aux].bw_array);
          }
          free(ch_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
