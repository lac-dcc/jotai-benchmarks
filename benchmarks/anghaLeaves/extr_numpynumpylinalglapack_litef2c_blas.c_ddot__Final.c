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
typedef  int integer ;
typedef  int doublereal ;

/* Variables and functions */

doublereal ddot_(integer *n, doublereal *dx, integer *incx, doublereal *dy,
	integer *incy)
{
    /* System generated locals */
    integer i__1;
    doublereal ret_val;

    /* Local variables */
    static integer i__, m, ix, iy, mp1;
    static doublereal dtemp;


/*
    Purpose
    =======

       DDOT forms the dot product of two vectors.
       uses unrolled loops for increments equal to one.

    Further Details
    ===============

       jack dongarra, linpack, 3/11/78.
       modified 12/3/93, array(1) declarations changed to array(*)

    =====================================================================
*/

    /* Parameter adjustments */
    --dy;
    --dx;

    /* Function Body */
    ret_val = 0.;
    dtemp = 0.;
    if (*n <= 0) {
	return ret_val;
    }
    if (*incx == 1 && *incy == 1) {
	goto L20;
    }

/*
          code for unequal increments or equal increments
            not equal to 1
*/

    ix = 1;
    iy = 1;
    if (*incx < 0) {
	ix = (-(*n) + 1) * *incx + 1;
    }
    if (*incy < 0) {
	iy = (-(*n) + 1) * *incy + 1;
    }
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dtemp += dx[ix] * dy[iy];
	ix += *incx;
	iy += *incy;
/* L10: */
    }
    ret_val = dtemp;
    return ret_val;

/*
          code for both increments equal to 1


          clean-up loop
*/

L20:
    m = *n % 5;
    if (m == 0) {
	goto L40;
    }
    i__1 = m;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dtemp += dx[i__] * dy[i__];
/* L30: */
    }
    if (*n < 5) {
	goto L60;
    }
L40:
    mp1 = m + 1;
    i__1 = *n;
    for (i__ = mp1; i__ <= i__1; i__ += 5) {
	dtemp = dtemp + dx[i__] * dy[i__] + dx[i__ + 1] * dy[i__ + 1] + dx[
		i__ + 2] * dy[i__ + 2] + dx[i__ + 3] * dy[i__ + 3] + dx[i__ +
		4] * dy[i__ + 4];
/* L50: */
    }
L60:
    ret_val = dtemp;
    return ret_val;
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int _len_n0 = 65025;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dx0 = 65025;
          int * dx = (int *) malloc(_len_dx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_incx0 = 65025;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dy0 = 65025;
          int * dy = (int *) malloc(_len_dy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dy0; _i0++) {
            dy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_incy0 = 65025;
          int * incy = (int *) malloc(_len_incy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incy0; _i0++) {
            incy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ddot_(n,dx,incx,dy,incy);
          printf("%d\n", benchRet); 
          free(n);
          free(dx);
          free(incx);
          free(dy);
          free(incy);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int _len_n0 = 100;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dx0 = 100;
          int * dx = (int *) malloc(_len_dx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_incx0 = 100;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dy0 = 100;
          int * dy = (int *) malloc(_len_dy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dy0; _i0++) {
            dy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_incy0 = 100;
          int * incy = (int *) malloc(_len_incy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incy0; _i0++) {
            incy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ddot_(n,dx,incx,dy,incy);
          printf("%d\n", benchRet); 
          free(n);
          free(dx);
          free(incx);
          free(dy);
          free(incy);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 19
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 19
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 19
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          int _len_n0 = 1;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dx0 = 1;
          int * dx = (int *) malloc(_len_dx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dx0; _i0++) {
            dx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_incx0 = 1;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dy0 = 1;
          int * dy = (int *) malloc(_len_dy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dy0; _i0++) {
            dy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_incy0 = 1;
          int * incy = (int *) malloc(_len_incy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incy0; _i0++) {
            incy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = ddot_(n,dx,incx,dy,incy);
          printf("%d\n", benchRet); 
          free(n);
          free(dx);
          free(incx);
          free(dy);
          free(incy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
