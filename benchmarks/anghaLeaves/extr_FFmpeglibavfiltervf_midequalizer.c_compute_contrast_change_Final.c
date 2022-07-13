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
       0            big-arr\n\
       1            big-arr-10x\n\
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

/* Variables and functions */

__attribute__((used)) static void compute_contrast_change(float *histogram1, float *histogram2,
                                    unsigned *cchange, size_t hsize)
{
    int i;

    for (i = 0; i < hsize; i++) {
        int j;

        for (j = 0; j < hsize && histogram2[j] < histogram1[i]; j++);

        cchange[i] = (i + j) / 2;
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

    // big-arr
    case 0:
    {
          unsigned long hsize = 255;
          int _len_histogram10 = 65025;
          float * histogram1 = (float *) malloc(_len_histogram10*sizeof(float));
          for(int _i0 = 0; _i0 < _len_histogram10; _i0++) {
            histogram1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_histogram20 = 65025;
          float * histogram2 = (float *) malloc(_len_histogram20*sizeof(float));
          for(int _i0 = 0; _i0 < _len_histogram20; _i0++) {
            histogram2[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_cchange0 = 65025;
          unsigned int * cchange = (unsigned int *) malloc(_len_cchange0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_cchange0; _i0++) {
            cchange[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          compute_contrast_change(histogram1,histogram2,cchange,hsize);
          free(histogram1);
          free(histogram2);
          free(cchange);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long hsize = 10;
          int _len_histogram10 = 100;
          float * histogram1 = (float *) malloc(_len_histogram10*sizeof(float));
          for(int _i0 = 0; _i0 < _len_histogram10; _i0++) {
            histogram1[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_histogram20 = 100;
          float * histogram2 = (float *) malloc(_len_histogram20*sizeof(float));
          for(int _i0 = 0; _i0 < _len_histogram20; _i0++) {
            histogram2[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_cchange0 = 100;
          unsigned int * cchange = (unsigned int *) malloc(_len_cchange0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_cchange0; _i0++) {
            cchange[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          compute_contrast_change(histogram1,histogram2,cchange,hsize);
          free(histogram1);
          free(histogram2);
          free(cchange);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
