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

/* Type definitions */

/* Variables and functions */

bool InterpolateOrientation (double left, double middle,double right, double *degreeCorrection, double *peakValue)  
{  
	double a = ((left + right) - 2.0 * middle) / 2.0;   //抛物线捏合系数a  
	// degreeCorrection = peakValue = Double.NaN;  

	// Not a parabol  
	if (a == 0.0)  
		return false;  
	double c = (((left - middle) / a) - 1.0) / 2.0;  
	double b = middle - c * c * a;  
	if (c < -0.5 || c > 0.5)  
		return false;  
	*degreeCorrection = c;  
	*peakValue = b;  
	return true;  
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
          double left = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double middle = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double right = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_degreeCorrection0 = 1;
          double * degreeCorrection = (double *) malloc(_len_degreeCorrection0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_degreeCorrection0; _i0++) {
            degreeCorrection[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_peakValue0 = 1;
          double * peakValue = (double *) malloc(_len_peakValue0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_peakValue0; _i0++) {
            peakValue[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = InterpolateOrientation(left,middle,right,degreeCorrection,peakValue);
          printf("%d\n", benchRet); 
          free(degreeCorrection);
          free(peakValue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
