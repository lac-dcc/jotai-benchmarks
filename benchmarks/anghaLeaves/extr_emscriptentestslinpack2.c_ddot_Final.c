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

double ddot ( int n, double dx[], int incx, double dy[], int incy )

/******************************************************************************/
/*
  Purpose:

    DDOT forms the dot product of two vectors.

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

    Input, int N, the number of entries in the vectors.

    Input, double DX[*], the first vector.

    Input, int INCX, the increment between successive entries in DX.

    Input, double DY[*], the second vector.

    Input, int INCY, the increment between successive entries in DY.

    Output, double DDOT, the sum of the product of the corresponding
    entries of DX and DY.
*/
{
  double dtemp;
  int i;
  int ix;
  int iy;
  int m;

  dtemp = 0.0;

  if ( n <= 0 )
  {
    return dtemp;
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
      dtemp = dtemp + dx[ix] * dy[iy];
      ix = ix + incx;
      iy = iy + incy;
    }
  }
/*
  Code for both increments equal to 1.
*/
  else
  {
    m = n % 5;

    for ( i = 0; i < m; i++ )
    {
      dtemp = dtemp + dx[i] * dy[i];
    }

    for ( i = m; i < n; i = i + 5 )
    {
      dtemp = dtemp + dx[i  ] * dy[i  ] 
                    + dx[i+1] * dy[i+1] 
                    + dx[i+2] * dy[i+2] 
                    + dx[i+3] * dy[i+3] 
                    + dx[i+4] * dy[i+4];
    }
  }
  return dtemp;
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
          // static_instructions_O0 : 52
          // dynamic_instructions_O0 : 5643
          // ------------------------------- 
          // static_instructions_O1 : 38
          // dynamic_instructions_O1 : 1816
          // ------------------------------- 
          // static_instructions_O2 : 84
          // dynamic_instructions_O2 : 2100
          // ------------------------------- 
          // static_instructions_O3 : 84
          // dynamic_instructions_O3 : 2100
          // ------------------------------- 
          // static_instructions_Ofast : 80
          // dynamic_instructions_Ofast : 1340
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 1812
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 2323
          // ------------------------------- 

          int n = 255;
        
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
        
          double benchRet = ddot(n,dx,incx,dy,incy);
          printf("%lf\n", benchRet); 
          free(dx);
          free(dy);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 52
          // dynamic_instructions_O0 : 253
          // ------------------------------- 
          // static_instructions_O1 : 38
          // dynamic_instructions_O1 : 101
          // ------------------------------- 
          // static_instructions_O2 : 80
          // dynamic_instructions_O2 : 144
          // ------------------------------- 
          // static_instructions_O3 : 80
          // dynamic_instructions_O3 : 144
          // ------------------------------- 
          // static_instructions_Ofast : 73
          // dynamic_instructions_Ofast : 113
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 97
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 118
          // ------------------------------- 

          int n = 10;
        
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
        
          double benchRet = ddot(n,dx,incx,dy,incy);
          printf("%lf\n", benchRet); 
          free(dx);
          free(dy);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 18
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 18
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 18
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
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
        
          double benchRet = ddot(n,dx,incx,dy,incy);
          printf("%lf\n", benchRet); 
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
