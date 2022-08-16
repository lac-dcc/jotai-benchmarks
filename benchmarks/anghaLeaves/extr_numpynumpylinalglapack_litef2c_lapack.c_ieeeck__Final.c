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
typedef  int real ;
typedef  scalar_t__ integer ;

/* Variables and functions */

integer ieeeck_(integer *ispec, real *zero, real *one)
{
    /* System generated locals */
    integer ret_val;

    /* Local variables */
    static real nan1, nan2, nan3, nan4, nan5, nan6, neginf, posinf, negzro,
	    newzro;


/*
    -- LAPACK auxiliary routine (version 3.2.2) --
    -- LAPACK is a software package provided by Univ. of Tennessee,    --
    -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..--
       June 2010


    Purpose
    =======

    IEEECK is called from the ILAENV to verify that Infinity and
    possibly NaN arithmetic is safe (i.e. will not trap).

    Arguments
    =========

    ISPEC   (input) INTEGER
            Specifies whether to test just for inifinity arithmetic
            or whether to test for infinity and NaN arithmetic.
            = 0: Verify infinity arithmetic only.
            = 1: Verify infinity and NaN arithmetic.

    ZERO    (input) REAL
            Must contain the value 0.0
            This is passed to prevent the compiler from optimizing
            away this code.

    ONE     (input) REAL
            Must contain the value 1.0
            This is passed to prevent the compiler from optimizing
            away this code.

    RETURN VALUE:  INTEGER
            = 0:  Arithmetic failed to produce the correct answers
            = 1:  Arithmetic produced the correct answers
*/

    ret_val = 1;

    posinf = *one / *zero;
    if (posinf <= *one) {
	ret_val = 0;
	return ret_val;
    }

    neginf = -(*one) / *zero;
    if (neginf >= *zero) {
	ret_val = 0;
	return ret_val;
    }

    negzro = *one / (neginf + *one);
    if (negzro != *zero) {
	ret_val = 0;
	return ret_val;
    }

    neginf = *one / negzro;
    if (neginf >= *zero) {
	ret_val = 0;
	return ret_val;
    }

    newzro = negzro + *zero;
    if (newzro != *zero) {
	ret_val = 0;
	return ret_val;
    }

    posinf = *one / newzro;
    if (posinf <= *one) {
	ret_val = 0;
	return ret_val;
    }

    neginf *= posinf;
    if (neginf >= *zero) {
	ret_val = 0;
	return ret_val;
    }

    posinf *= posinf;
    if (posinf <= *one) {
	ret_val = 0;
	return ret_val;
    }


/*     Return if we were only asked to check infinity arithmetic */

    if (*ispec == 0) {
	return ret_val;
    }

    nan1 = posinf + neginf;

    nan2 = posinf / neginf;

    nan3 = posinf / posinf;

    nan4 = posinf * *zero;

    nan5 = neginf * negzro;

    nan6 = nan5 * *zero;

    if (nan1 == nan1) {
	ret_val = 0;
	return ret_val;
    }

    if (nan2 == nan2) {
	ret_val = 0;
	return ret_val;
    }

    if (nan3 == nan3) {
	ret_val = 0;
	return ret_val;
    }

    if (nan4 == nan4) {
	ret_val = 0;
	return ret_val;
    }

    if (nan5 == nan5) {
	ret_val = 0;
	return ret_val;
    }

    if (nan6 == nan6) {
	ret_val = 0;
	return ret_val;
    }

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
          int _len_ispec0 = 1;
          long * ispec = (long *) malloc(_len_ispec0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_ispec0; _i0++) {
            ispec[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_zero0 = 1;
          int * zero = (int *) malloc(_len_zero0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_zero0; _i0++) {
            zero[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_one0 = 1;
          int * one = (int *) malloc(_len_one0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_one0; _i0++) {
            one[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = ieeeck_(ispec,zero,one);
          printf("%ld\n", benchRet); 
          free(ispec);
          free(zero);
          free(one);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
