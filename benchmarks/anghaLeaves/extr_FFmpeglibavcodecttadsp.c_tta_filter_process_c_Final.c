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
       0            big-arr-10x\n\
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
typedef  scalar_t__ int32_t ;

/* Variables and functions */

__attribute__((used)) static void tta_filter_process_c(int32_t *qm, int32_t *dx, int32_t *dl,
                                 int32_t *error, int32_t *in, int32_t shift,
                                 int32_t round) {
    if (*error < 0) {
        qm[0] -= dx[0]; qm[1] -= dx[1]; qm[2] -= dx[2]; qm[3] -= dx[3];
        qm[4] -= dx[4]; qm[5] -= dx[5]; qm[6] -= dx[6]; qm[7] -= dx[7];
    } else if (*error > 0) {
        qm[0] += dx[0]; qm[1] += dx[1]; qm[2] += dx[2]; qm[3] += dx[3];
        qm[4] += dx[4]; qm[5] += dx[5]; qm[6] += dx[6]; qm[7] += dx[7];
    }

    round += dl[0] * qm[0] + dl[1] * qm[1] + dl[2] * qm[2] + dl[3] * qm[3] +
             dl[4] * qm[4] + dl[5] * qm[5] + dl[6] * qm[6] + dl[7] * qm[7];

    dx[0] = dx[1]; dx[1] = dx[2]; dx[2] = dx[3]; dx[3] = dx[4];
    dl[0] = dl[1]; dl[1] = dl[2]; dl[2] = dl[3]; dl[3] = dl[4];

    dx[4] = ((dl[4] >> 30) | 1);
    dx[5] = ((dl[5] >> 30) | 2) & ~1;
    dx[6] = ((dl[6] >> 30) | 2) & ~1;
    dx[7] = ((dl[7] >> 30) | 4) & ~3;

    *error = *in;
    *in += (round >> shift);

    dl[4] = -dl[5]; dl[5] = -dl[6];
    dl[6] = *in - dl[7]; dl[7] = *in;
    dl[5] += dl[6]; dl[4] += dl[5];
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr-10x
    case 0:
    {
          long shift = 10;
        
          long round = 10;
        
          int _len_qm0 = 100;
          long * qm = (long *) malloc(_len_qm0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_qm0; _i0++) {
            qm[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dx0 = 100;
          long * dx = (long *) malloc(_len_dx0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dl0 = 100;
          long * dl = (long *) malloc(_len_dl0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dl0; _i0++) {
            dl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_error0 = 100;
          long * error = (long *) malloc(_len_error0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
            error[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in0 = 100;
          long * in = (long *) malloc(_len_in0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          tta_filter_process_c(qm,dx,dl,error,in,shift,round);
          free(qm);
          free(dx);
          free(dl);
          free(error);
          free(in);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
