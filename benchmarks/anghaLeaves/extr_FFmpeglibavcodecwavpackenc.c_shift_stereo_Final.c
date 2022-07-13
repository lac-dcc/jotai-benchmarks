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
       0            big-arr-10x\n\
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

/* Type definitions */
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static void shift_stereo(int32_t *left, int32_t *right,
                         int nb_samples, int shift)
{
    int i;
    for (i = 0; i < nb_samples; i++) {
        left [i] >>= shift;
        right[i] >>= shift;
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

    // big-arr-10x
    case 0:
    {
          int nb_samples = 10;
          int shift = 10;
          int _len_left0 = 100;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 100;
          int * right = (int *) malloc(_len_right0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          shift_stereo(left,right,nb_samples,shift);
          free(left);
          free(right);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
