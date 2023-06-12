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

/* Variables and functions */

__attribute__((used)) static double pres_dot(double *args, int n)
{
    int i;
    double sum;

    sum = 0.0;
    for (i = 0; i < n; ++i)
        sum += args[i] * args[i + n];
    return sum;
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
          int n = 255;
        
          int _len_args0 = 65025;
          double * args = (double *) malloc(_len_args0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          double benchRet = pres_dot(args,n);
          printf("%lf\n", benchRet); 
          free(args);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int n = 10;
        
          int _len_args0 = 100;
          double * args = (double *) malloc(_len_args0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          double benchRet = pres_dot(args,n);
          printf("%lf\n", benchRet); 
          free(args);
        
        break;
    }
    // empty
    case 2:
    {
          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_args0 = 1;
          double * args = (double *) malloc(_len_args0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_args0; _i0++) {
            args[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          double benchRet = pres_dot(args,n);
          printf("%lf\n", benchRet); 
          free(args);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
