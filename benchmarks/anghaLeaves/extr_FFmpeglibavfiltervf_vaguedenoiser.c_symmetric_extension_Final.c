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
 int NPAD ; 

__attribute__((used)) static void symmetric_extension(float *output, const int size, const int left_ext, const int right_ext)
{
    int first = NPAD;
    int last = NPAD - 1 + size;
    const int originalLast = last;
    int i, nextend, idx;

    if (left_ext == 2)
        output[--first] = output[NPAD];
    if (right_ext == 2)
        output[++last] = output[originalLast];

    // extend left end
    nextend = first;
    for (i = 0; i < nextend; i++)
        output[--first] = output[NPAD + 1 + i];

    idx = NPAD + NPAD - 1 + size;

    // extend right end
    nextend = idx - last;
    for (i = 0; i < nextend; i++)
        output[++last] = output[originalLast - 1 - i];
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
          const int size = 100;
          const int left_ext = 100;
          const int right_ext = 100;
          int _len_output0 = 1;
          float * output = (float *) malloc(_len_output0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          symmetric_extension(output,size,left_ext,right_ext);
          free(output);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          const int size = 10;
          const int left_ext = 10;
          const int right_ext = 10;
          int _len_output0 = 100;
          float * output = (float *) malloc(_len_output0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          symmetric_extension(output,size,left_ext,right_ext);
          free(output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
