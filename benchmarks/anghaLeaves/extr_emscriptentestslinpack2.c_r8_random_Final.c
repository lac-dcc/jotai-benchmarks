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
typedef  scalar_t__ it3 ;
typedef  scalar_t__ it2 ;
typedef  scalar_t__ it1 ;

/* Variables and functions */

double r8_random ( int iseed[4] )

/******************************************************************************/
/*
  Purpose:

    R8_RANDOM returns a uniformly distributed random number between 0 and 1.

  Discussion:

    This routine uses a multiplicative congruential method with modulus
    2**48 and multiplier 33952834046453 (see G.S.Fishman,
    'Multiplicative congruential random number generators with modulus
    2**b: an exhaustive analysis for b = 32 and a partial analysis for
    b = 48', Math. Comp. 189, pp 331-344, 1990).

    48-bit integers are stored in 4 integer array elements with 12 bits
    per element. Hence the routine is portable across machines with
    integers of 32 bits or more.

  Parameters:

    Input/output, integer ISEED(4).
    On entry, the seed of the random number generator; the array
    elements must be between 0 and 4095, and ISEED(4) must be odd.
    On exit, the seed is updated.

    Output, double R8_RANDOM, the next pseudorandom number.
*/
{
  int ipw2 = 4096;
  int it1;
  int it2;
  int it3;
  int it4;
  int m1 = 494;
  int m2 = 322;
  int m3 = 2508;
  int m4 = 2549;
  double one = 1.0;
  double r = 1.0 / 4096.0;
  double value;
/*
  Multiply the seed by the multiplier modulo 2**48.
*/
  it4 = iseed[3] * m4;
  it3 = it4 / ipw2;
  it4 = it4 - ipw2 * it3;
  it3 = it3 + iseed[2] * m4 + iseed[3] * m3;
  it2 = it3 / ipw2;
  it3 = it3 - ipw2 * it2;
  it2 = it2 + iseed[1] * m4 + iseed[2] * m3 + iseed[3] * m2;
  it1 = it2 / ipw2;
  it2 = it2 - ipw2 * it1;
  it1 = it1 + iseed[0] * m4 + iseed[1] * m3 + iseed[2] * m2 + iseed[3] * m1;
  it1 = ( it1 % ipw2 );
/*
  Return updated seed
*/
  iseed[0] = it1;
  iseed[1] = it2;
  iseed[2] = it3;
  iseed[3] = it4;
/*
  Convert 48-bit integer to a real number in the interval (0,1)
*/
  value = 
      r * ( ( double ) ( it1 ) 
    + r * ( ( double ) ( it2 ) 
    + r * ( ( double ) ( it3 ) 
    + r * ( ( double ) ( it4 ) ) ) ) );

  return value;
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
          int _len_iseed0 = 4;
          int * iseed = (int *) malloc(_len_iseed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iseed0; _i0++) {
            iseed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = r8_random(iseed);
          printf("%lf\n", benchRet); 
          free(iseed);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_iseed0 = 100;
          int * iseed = (int *) malloc(_len_iseed0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_iseed0; _i0++) {
            iseed[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          double benchRet = r8_random(iseed);
          printf("%lf\n", benchRet); 
          free(iseed);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
