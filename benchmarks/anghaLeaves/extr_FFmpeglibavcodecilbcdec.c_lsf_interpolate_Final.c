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
       2            empty\n\
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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void lsf_interpolate(int16_t *out, int16_t *in1,
                            int16_t *in2, int16_t coef,
                            int size)
{
    int invcoef = 16384 - coef, i;

    for (i = 0; i < size; i++)
        out[i] = (coef * in1[i] + invcoef * in2[i] + 8192) >> 14;
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
          int coef = 255;
        
          int size = 255;
        
          int _len_out0 = 65025;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in10 = 65025;
          int * in1 = (int *) malloc(_len_in10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in10; _i0++) {
            in1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in20 = 65025;
          int * in2 = (int *) malloc(_len_in20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in20; _i0++) {
            in2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          lsf_interpolate(out,in1,in2,coef,size);
          free(out);
          free(in1);
          free(in2);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int coef = 10;
        
          int size = 10;
        
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in10 = 100;
          int * in1 = (int *) malloc(_len_in10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in10; _i0++) {
            in1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in20 = 100;
          int * in2 = (int *) malloc(_len_in20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in20; _i0++) {
            in2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          lsf_interpolate(out,in1,in2,coef,size);
          free(out);
          free(in1);
          free(in2);
        
        break;
    }
    // empty
    case 2:
    {
          int coef = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int size = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_out0 = 1;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in10 = 1;
          int * in1 = (int *) malloc(_len_in10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in10; _i0++) {
            in1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_in20 = 1;
          int * in2 = (int *) malloc(_len_in20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_in20; _i0++) {
            in2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          lsf_interpolate(out,in1,in2,coef,size);
          free(out);
          free(in1);
          free(in2);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
