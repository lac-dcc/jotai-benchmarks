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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct TYPE_3__ {int subframe_size; float* noise_buffer; float* noise2_buffer; } ;
typedef  TYPE_1__ QDMCContext ;

/* Variables and functions */

__attribute__((used)) static void lin_calc(QDMCContext *s, float amplitude, int node1, int node2, int index)
{
    int subframe_size, i, j, k, length;
    float scale, *noise_ptr;

    scale = 0.5 * amplitude;
    subframe_size = s->subframe_size;
    if (subframe_size >= node2)
        subframe_size = node2;
    length = (subframe_size - node1) & 0xFFFC;
    j = node1;
    noise_ptr = &s->noise_buffer[256 * index];

    for (i = 0; i < length; i += 4, j+= 4, noise_ptr += 4) {
        s->noise2_buffer[j    ] += scale * noise_ptr[0];
        s->noise2_buffer[j + 1] += scale * noise_ptr[1];
        s->noise2_buffer[j + 2] += scale * noise_ptr[2];
        s->noise2_buffer[j + 3] += scale * noise_ptr[3];
    }

    k = length + node1;
    noise_ptr = s->noise_buffer + length + (index << 8);
    for (i = length; i < subframe_size - node1; i++, k++, noise_ptr++)
        s->noise2_buffer[k] += scale * noise_ptr[0];
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
          float amplitude = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int node1 = 100;
          int node2 = 100;
          int index = 100;
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].subframe_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__noise_buffer0 = 1;
          s[_i0].noise_buffer = (float *) malloc(_len_s__i0__noise_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__noise_buffer0; _j0++) {
            s[_i0].noise_buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_s__i0__noise2_buffer0 = 1;
          s[_i0].noise2_buffer = (float *) malloc(_len_s__i0__noise2_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__noise2_buffer0; _j0++) {
            s[_i0].noise2_buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          lin_calc(s,amplitude,node1,node2,index);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].noise_buffer);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].noise2_buffer);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          float amplitude = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int node1 = 255;
          int node2 = 255;
          int index = 255;
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].subframe_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__noise_buffer0 = 1;
          s[_i0].noise_buffer = (float *) malloc(_len_s__i0__noise_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__noise_buffer0; _j0++) {
            s[_i0].noise_buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_s__i0__noise2_buffer0 = 1;
          s[_i0].noise2_buffer = (float *) malloc(_len_s__i0__noise2_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__noise2_buffer0; _j0++) {
            s[_i0].noise2_buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          lin_calc(s,amplitude,node1,node2,index);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].noise_buffer);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].noise2_buffer);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float amplitude = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int node1 = 10;
          int node2 = 10;
          int index = 10;
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].subframe_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__noise_buffer0 = 1;
          s[_i0].noise_buffer = (float *) malloc(_len_s__i0__noise_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__noise_buffer0; _j0++) {
            s[_i0].noise_buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_s__i0__noise2_buffer0 = 1;
          s[_i0].noise2_buffer = (float *) malloc(_len_s__i0__noise2_buffer0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_s__i0__noise2_buffer0; _j0++) {
            s[_i0].noise2_buffer[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          lin_calc(s,amplitude,node1,node2,index);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].noise_buffer);
          }
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].noise2_buffer);
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
