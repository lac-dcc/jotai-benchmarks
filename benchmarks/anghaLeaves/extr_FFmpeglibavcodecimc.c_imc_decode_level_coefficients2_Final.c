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

/* Type definitions */
typedef  int /*<<< orphan*/  IMCContext ;

/* Variables and functions */
 int BANDS ; 
 float* imc_exp_tab2 ; 

__attribute__((used)) static void imc_decode_level_coefficients2(IMCContext *q, int *levlCoeffBuf,
                                           float *old_floor, float *flcoeffs1,
                                           float *flcoeffs2)
{
    int i;
    /* FIXME maybe flag_buf = noise coding and flcoeffs1 = new scale factors
     *       and flcoeffs2 old scale factors
     *       might be incomplete due to a missing table that is in the binary code
     */
    for (i = 0; i < BANDS; i++) {
        flcoeffs1[i] = 0;
        if (levlCoeffBuf[i] < 16) {
            flcoeffs1[i] = imc_exp_tab2[levlCoeffBuf[i]] * old_floor[i];
            flcoeffs2[i] = (levlCoeffBuf[i] - 7) * 0.83048 + flcoeffs2[i]; // 0.83048 = log2(10) * 0.25
        } else {
            flcoeffs1[i] = old_floor[i];
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
          int _len_q0 = 1;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_levlCoeffBuf0 = 1;
          int * levlCoeffBuf = (int *) malloc(_len_levlCoeffBuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_levlCoeffBuf0; _i0++) {
            levlCoeffBuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_old_floor0 = 1;
          float * old_floor = (float *) malloc(_len_old_floor0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_old_floor0; _i0++) {
            old_floor[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_flcoeffs10 = 1;
          float * flcoeffs1 = (float *) malloc(_len_flcoeffs10*sizeof(float));
          for(int _i0 = 0; _i0 < _len_flcoeffs10; _i0++) {
            flcoeffs1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_flcoeffs20 = 1;
          float * flcoeffs2 = (float *) malloc(_len_flcoeffs20*sizeof(float));
          for(int _i0 = 0; _i0 < _len_flcoeffs20; _i0++) {
            flcoeffs2[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          imc_decode_level_coefficients2(q,levlCoeffBuf,old_floor,flcoeffs1,flcoeffs2);
          free(q);
          free(levlCoeffBuf);
          free(old_floor);
          free(flcoeffs1);
          free(flcoeffs2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
