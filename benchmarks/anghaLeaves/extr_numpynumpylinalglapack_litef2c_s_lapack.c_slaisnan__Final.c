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
typedef  scalar_t__ real ;
typedef  int logical ;

/* Variables and functions */

logical slaisnan_(real *sin1, real *sin2)
{
    /* System generated locals */
    logical ret_val;


/*
    -- LAPACK auxiliary routine (version 3.2.2) --
    -- LAPACK is a software package provided by Univ. of Tennessee,    --
    -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..--
       June 2010


    Purpose
    =======

    This routine is not for general use.  It exists solely to avoid
    over-optimization in SISNAN.

    SLAISNAN checks for NaNs by comparing its two arguments for
    inequality.  NaN is the only floating-point value where NaN != NaN
    returns .TRUE.  To check for NaNs, pass the same variable as both
    arguments.

    A compiler must assume that the two arguments are
    not the same variable, and the test will not be optimized away.
    Interprocedural or whole-program optimization may delete this
    test.  The ISNAN functions will be replaced by the correct
    Fortran 03 intrinsic once the intrinsic is widely available.

    Arguments
    =========

    SIN1     (input) REAL

    SIN2     (input) REAL
            Two numbers to compare for inequality.

    =====================================================================
*/

    ret_val = *sin1 != *sin2;
    return ret_val;
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
          int _len_sin10 = 1;
          long * sin1 = (long *) malloc(_len_sin10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_sin10; _i0++) {
            sin1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sin20 = 1;
          long * sin2 = (long *) malloc(_len_sin20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_sin20; _i0++) {
            sin2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = slaisnan_(sin1,sin2);
          printf("%d\n", benchRet); 
          free(sin1);
          free(sin2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
