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
 double NaN ; 

double
asin(double x)
{
    double x2, result;

    /* Check range */
    if ((x > 1.) || (x < -1.)) return NaN;

    /* Calculate the square of x */
    x2 = (x * x);

    /* Start with 0, compiler will optimize this away */
    result = 0;

    result += (15*13*11*9*7*5*3*1./(16*14*12*10*8*6*4*2*17));
    result *= x2;

    result += (13*11*9*7*5*3*1./(14*12*10*8*6*4*2*15));
    result *= x2;

    result += (11*9*7*5*3*1./(12*10*8*6*4*2*13));
    result *= x2;

    result += (9*7*5*3*1./(10*8*6*4*2*11));
    result *= x2;

    result += (7*5*3*1./(8*6*4*2*9));
    result *= x2;

    result += (5*3*1./(6*4*2*7));
    result *= x2;

    result += (3*1./(4*2*5));
    result *= x2;

    result += (1./(2*3));
    result *= x2;

    result += 1.;
    result *= x;

    return result;
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
          double x = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double benchRet = asin(x);
          printf("%lf\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
