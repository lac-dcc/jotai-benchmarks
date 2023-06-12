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
       0            big-arr\n\
       1            big-arr-10x\n\
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

/* Variables and functions */

__attribute__((used)) static void mix_audio_with_buf(float *p_out, float *p_in, float *buf_in,
		size_t pos, size_t count)
{
	register float *out = p_out;
	register float *buf = buf_in + pos;
	register float *in = p_in + pos;
	register float *end = in + count;

	while (in < end)
		*(out++) += *(in++) * *(buf++);
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          unsigned long pos = 255;
        
          unsigned long count = 255;
        
          int _len_p_out0 = 65025;
          float * p_out = (float *) malloc(_len_p_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_p_out0; _i0++) {
            p_out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_p_in0 = 65025;
          float * p_in = (float *) malloc(_len_p_in0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_p_in0; _i0++) {
            p_in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_buf_in0 = 65025;
          float * buf_in = (float *) malloc(_len_buf_in0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_buf_in0; _i0++) {
            buf_in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          mix_audio_with_buf(p_out,p_in,buf_in,pos,count);
          free(p_out);
          free(p_in);
          free(buf_in);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long pos = 10;
        
          unsigned long count = 10;
        
          int _len_p_out0 = 100;
          float * p_out = (float *) malloc(_len_p_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_p_out0; _i0++) {
            p_out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_p_in0 = 100;
          float * p_in = (float *) malloc(_len_p_in0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_p_in0; _i0++) {
            p_in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_buf_in0 = 100;
          float * buf_in = (float *) malloc(_len_buf_in0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_buf_in0; _i0++) {
            buf_in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          mix_audio_with_buf(p_out,p_in,buf_in,pos,count);
          free(p_out);
          free(p_in);
          free(buf_in);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
