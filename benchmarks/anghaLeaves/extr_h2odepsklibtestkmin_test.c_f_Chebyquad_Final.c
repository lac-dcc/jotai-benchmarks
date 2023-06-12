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

/* Variables and functions */
 int /*<<< orphan*/  n_evals ; 

double f_Chebyquad(int n, double *x, void *data)
{
    int i, j;
    double y[20][20], f;
    int np, iw;
    double sum;
    for (j = 0; j != n; ++j) {
		y[0][j] = 1.;
		y[1][j] = 2. * x[j] - 1.;
    }
    for (i = 1; i != n; ++i)
		for (j = 0; j != n; ++j)
			y[i+1][j] = 2. * y[1][j] * y[i][j] - y[i-1][j];
    f = 0.;
    np = n + 1;
    iw = 1;
    for (i = 0; i != np; ++i) {
		sum = 0.;
		for (j = 0; j != n; ++j) sum += y[i][j];
		sum /= n;
		if (iw > 0) sum += 1. / ((i - 1) * (i + 1));
		iw = -iw;
		f += sum * sum;
    }
	++n_evals;
    return f;
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
          // static_instructions_O0 : 129
          // dynamic_instructions_O0 : 5195
          // ------------------------------- 
          // static_instructions_O1 : 85
          // dynamic_instructions_O1 : 1592
          // ------------------------------- 
          // static_instructions_O2 : 265
          // dynamic_instructions_O2 : 1672
          // ------------------------------- 
          // static_instructions_O3 : 273
          // dynamic_instructions_O3 : 1730
          // ------------------------------- 
          // static_instructions_Ofast : 292
          // dynamic_instructions_Ofast : 1778
          // ------------------------------- 
          // static_instructions_Os : 87
          // dynamic_instructions_Os : 1631
          // ------------------------------- 
          // static_instructions_Oz : 74
          // dynamic_instructions_Oz : 1794
          // ------------------------------- 

          int n = 10;
        
          int _len_x0 = 100;
          double * x = (double *) malloc(_len_x0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          void * data;
        
          double benchRet = f_Chebyquad(n,x,data);
          printf("%lf\n", benchRet); 
          free(x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
