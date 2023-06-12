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

void daxpy ( int n, double da, double dx[], int incx, double dy[], int incy )

/******************************************************************************/
/*
  Purpose:

    DAXPY computes constant times a vector plus a vector.

  Discussion:

    This routine uses unrolled loops for increments equal to one.

  Modified:

    30 March 2007

  Author:

    FORTRAN77 original by Jack Dongarra, Cleve Moler, Jim Bunch, Pete Stewart.
    C version by John Burkardt

  Reference:

    Jack Dongarra, Cleve Moler, Jim Bunch, Pete Stewart,
    LINPACK User's Guide,
    SIAM, 1979.

    Charles Lawson, Richard Hanson, David Kincaid, Fred Krogh,
    Basic Linear Algebra Subprograms for Fortran Usage,
    Algorithm 539, 
    ACM Transactions on Mathematical Software, 
    Volume 5, Number 3, September 1979, pages 308-323.

  Parameters:

    Input, int N, the number of elements in DX and DY.

    Input, double DA, the multiplier of DX.

    Input, double DX[*], the first vector.

    Input, int INCX, the increment between successive entries of DX.

    Input/output, double DY[*], the second vector.
    On output, DY[*] has been replaced by DY[*] + DA * DX[*].

    Input, int INCY, the increment between successive entries of DY.
*/
{
  int i;
  int ix;
  int iy;
  int m;

  if ( n <= 0 )
  {
    return;
  }

  if ( da == 0.0 )
  {
    return;
  }
/*
  Code for unequal increments or equal increments
  not equal to 1.
*/
  if ( incx != 1 || incy != 1 )
  {
    if ( 0 <= incx )
    {
      ix = 0;
    }
    else
    {
      ix = ( - n + 1 ) * incx;
    }

    if ( 0 <= incy )
    {
      iy = 0;
    }
    else
    {
      iy = ( - n + 1 ) * incy;
    }

    for ( i = 0; i < n; i++ )
    {
      dy[iy] = dy[iy] + da * dx[ix];
      ix = ix + incx;
      iy = iy + incy;
    }
  }
/*
  Code for both increments equal to 1.
*/
  else
  {
    m = n % 4;

    for ( i = 0; i < m; i++ )
    {
      dy[i] = dy[i] + da * dx[i];
    }

    for ( i = m; i < n; i = i + 4 )
    {
      dy[i  ] = dy[i  ] + da * dx[i  ];
      dy[i+1] = dy[i+1] + da * dx[i+1];
      dy[i+2] = dy[i+2] + da * dx[i+2];
      dy[i+3] = dy[i+3] + da * dx[i+3];
    }
  }
  return;
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
          // static_instructions_O0 : 55
          // dynamic_instructions_O0 : 6154
          // ------------------------------- 
          // static_instructions_O1 : 40
          // dynamic_instructions_O1 : 2072
          // ------------------------------- 
          // static_instructions_O2 : 84
          // dynamic_instructions_O2 : 1596
          // ------------------------------- 
          // static_instructions_O3 : 84
          // dynamic_instructions_O3 : 1596
          // ------------------------------- 
          // static_instructions_Ofast : 84
          // dynamic_instructions_Ofast : 1596
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 2068
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 2580
          // ------------------------------- 

          int n = 255;
        
          double da = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int incx = 255;
        
          int incy = 255;
        
          int _len_dx0 = 65025;
          double * dx = (double *) malloc(_len_dx0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_dy0 = 65025;
          double * dy = (double *) malloc(_len_dy0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dy0; _i0++) {
            dy[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          daxpy(n,da,dx,incx,dy,incy);
          free(dx);
          free(dy);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 55
          // dynamic_instructions_O0 : 274
          // ------------------------------- 
          // static_instructions_O1 : 40
          // dynamic_instructions_O1 : 112
          // ------------------------------- 
          // static_instructions_O2 : 77
          // dynamic_instructions_O2 : 125
          // ------------------------------- 
          // static_instructions_O3 : 77
          // dynamic_instructions_O3 : 125
          // ------------------------------- 
          // static_instructions_Ofast : 77
          // dynamic_instructions_Ofast : 125
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 108
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 130
          // ------------------------------- 

          int n = 10;
        
          double da = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int incx = 10;
        
          int incy = 10;
        
          int _len_dx0 = 100;
          double * dx = (double *) malloc(_len_dx0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_dy0 = 100;
          double * dy = (double *) malloc(_len_dy0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dy0; _i0++) {
            dy[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          daxpy(n,da,dx,incx,dy,incy);
          free(dx);
          free(dy);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 16
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          double da = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int incx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int incy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dx0 = 1;
          double * dx = (double *) malloc(_len_dx0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_dy0 = 1;
          double * dy = (double *) malloc(_len_dy0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_dy0; _i0++) {
            dy[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          daxpy(n,da,dx,incx,dy,incy);
          free(dx);
          free(dy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
