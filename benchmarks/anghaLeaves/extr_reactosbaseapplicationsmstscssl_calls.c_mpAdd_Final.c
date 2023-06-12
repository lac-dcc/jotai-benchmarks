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
typedef  scalar_t__ DIGIT_T ;

/* Variables and functions */

__attribute__((used)) static DIGIT_T
mpAdd(DIGIT_T* w, DIGIT_T* u, DIGIT_T* v, unsigned int ndigits)
{
  /* Calculates w = u + v
     where w, u, v are multiprecision integers of ndigits each
     Returns carry if overflow. Carry = 0 or 1.

     Ref: Knuth Vol 2 Ch 4.3.1 p 266 Algorithm A. */
  DIGIT_T k;
  unsigned int j;

  /* Step A1. Initialise */
  k = 0;
  for (j = 0; j < ndigits; j++)
  {
    /* Step A2. Add digits w_j = (u_j + v_j + k)
       Set k = 1 if carry (overflow) occurs */
    w[j] = u[j] + k;
    if (w[j] < k)
    {
      k = 1;
    }
    else
    {
      k = 0;
    }
    w[j] += v[j];
    if (w[j] < v[j])
    {
      k++;
    }
  } /* Step A3. Loop on j */
  return k; /* w_n = k */
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
          unsigned int ndigits = 255;
        
          int _len_w0 = 65025;
          long * w = (long *) malloc(_len_w0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_u0 = 65025;
          long * u = (long *) malloc(_len_u0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_v0 = 65025;
          long * v = (long *) malloc(_len_v0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = mpAdd(w,u,v,ndigits);
          printf("%ld\n", benchRet); 
          free(w);
          free(u);
          free(v);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int ndigits = 10;
        
          int _len_w0 = 100;
          long * w = (long *) malloc(_len_w0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_u0 = 100;
          long * u = (long *) malloc(_len_u0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_v0 = 100;
          long * v = (long *) malloc(_len_v0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          long benchRet = mpAdd(w,u,v,ndigits);
          printf("%ld\n", benchRet); 
          free(w);
          free(u);
          free(v);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
