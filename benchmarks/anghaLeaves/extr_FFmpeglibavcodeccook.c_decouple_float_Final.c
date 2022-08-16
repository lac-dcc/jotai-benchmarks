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
struct TYPE_3__ {int js_subband_start; } ;
typedef  TYPE_1__ COOKSubpacket ;
typedef  int /*<<< orphan*/  COOKContext ;

/* Variables and functions */
 int SUBBAND_SIZE ; 

__attribute__((used)) static void decouple_float(COOKContext *q,
                           COOKSubpacket *p,
                           int subband,
                           float f1, float f2,
                           float *decode_buffer,
                           float *mlt_buffer1, float *mlt_buffer2)
{
    int j, tmp_idx;
    for (j = 0; j < SUBBAND_SIZE; j++) {
        tmp_idx = ((p->js_subband_start + subband) * SUBBAND_SIZE) + j;
        mlt_buffer1[SUBBAND_SIZE * subband + j] = f1 * decode_buffer[tmp_idx];
        mlt_buffer2[SUBBAND_SIZE * subband + j] = f2 * decode_buffer[tmp_idx];
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
          int subband = 100;
          float f1 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          float f2 = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_q0 = 1;
          int * q = (int *) malloc(_len_q0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct TYPE_3__ * p = (struct TYPE_3__ *) malloc(_len_p0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].js_subband_start = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_decode_buffer0 = 1;
          float * decode_buffer = (float *) malloc(_len_decode_buffer0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_decode_buffer0; _i0++) {
            decode_buffer[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_mlt_buffer10 = 1;
          float * mlt_buffer1 = (float *) malloc(_len_mlt_buffer10*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mlt_buffer10; _i0++) {
            mlt_buffer1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_mlt_buffer20 = 1;
          float * mlt_buffer2 = (float *) malloc(_len_mlt_buffer20*sizeof(float));
          for(int _i0 = 0; _i0 < _len_mlt_buffer20; _i0++) {
            mlt_buffer2[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          decouple_float(q,p,subband,f1,f2,decode_buffer,mlt_buffer1,mlt_buffer2);
          free(q);
          free(p);
          free(decode_buffer);
          free(mlt_buffer1);
          free(mlt_buffer2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
