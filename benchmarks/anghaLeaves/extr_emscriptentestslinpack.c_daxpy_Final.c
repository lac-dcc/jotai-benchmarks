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
typedef  int REAL ;

/* Variables and functions */
 int ZERO ; 

void daxpy(int n, REAL da, REAL dx[], int incx, REAL dy[], int incy)
/*
     constant times a vector plus a vector.
     jack dongarra, linpack, 3/11/78.
*/

{
        int i,ix,iy,m,mp1;

        mp1 = 0;
        m = 0;

        if(n <= 0) return;
        if (da == ZERO) return;

        if(incx != 1 || incy != 1) {

                /* code for unequal increments or equal increments
                   not equal to 1                                       */

                ix = 0;
                iy = 0;
                if(incx < 0) ix = (-n+1)*incx;
                if(incy < 0)iy = (-n+1)*incy;
                for (i = 0;i < n; i++) {
                        dy[iy] = dy[iy] + da*dx[ix];
                        ix = ix + incx;
                        iy = iy + incy;
                     
                }
                return;
        }
        
        /* code for both increments equal to 1 */
        

#ifdef ROLL

        for (i = 0;i < n; i++) {
                dy[i] = dy[i] + da*dx[i];
        }


#endif

#ifdef UNROLL

        m = n % 4;
        if ( m != 0) {
                for (i = 0; i < m; i++) 
                        dy[i] = dy[i] + da*dx[i];
                        
                if (n < 4) return;
        }
        for (i = m; i < n; i = i + 4) {
                dy[i] = dy[i] + da*dx[i];
                dy[i+1] = dy[i+1] + da*dx[i+1];
                dy[i+2] = dy[i+2] + da*dx[i+2];
                dy[i+3] = dy[i+3] + da*dx[i+3];
                
        }

#endif
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
          int n = 255;
        
          int da = 255;
        
          int incx = 255;
        
          int incy = 255;
        
          int _len_dx0 = 65025;
          int * dx = (int *) malloc(_len_dx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dy0 = 65025;
          int * dy = (int *) malloc(_len_dy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dy0; _i0++) {
            dy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          daxpy(n,da,dx,incx,dy,incy);
          free(dx);
          free(dy);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int n = 10;
        
          int da = 10;
        
          int incx = 10;
        
          int incy = 10;
        
          int _len_dx0 = 100;
          int * dx = (int *) malloc(_len_dx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dy0 = 100;
          int * dy = (int *) malloc(_len_dy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dy0; _i0++) {
            dy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          daxpy(n,da,dx,incx,dy,incy);
          free(dx);
          free(dy);
        
        break;
    }
    // empty
    case 2:
    {
          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int da = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int incx = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int incy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dx0 = 1;
          int * dx = (int *) malloc(_len_dx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dy0 = 1;
          int * dy = (int *) malloc(_len_dy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dy0; _i0++) {
            dy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
