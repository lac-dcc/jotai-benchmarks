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

int drot_(integer *n, doublereal *dx, integer *incx,
	doublereal *dy, integer *incy, doublereal *c__, doublereal *s)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, ix, iy;
    static doublereal dtemp;


/*
    Purpose
    =======

       DROT applies a plane rotation.

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
    if (*n <= 0) {
	return 0;
    }
    if (*incx == 1 && *incy == 1) {
	goto L20;
    }

/*
         code for unequal increments or equal increments not equal
           to 1
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
	dtemp = *c__ * dx[ix] + *s * dy[iy];
	dy[iy] = *c__ * dy[iy] - *s * dx[ix];
	dx[ix] = dtemp;
	ix += *incx;
	iy += *incy;
/* L10: */
    }
    return 0;

/*       code for both increments equal to 1 */

L20:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	dtemp = *c__ * dx[i__] + *s * dy[i__];
	dy[i__] = *c__ * dy[i__] - *s * dx[i__];
	dx[i__] = dtemp;
/* L30: */
    }
    return 0;
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
        
          int _len_c__0 = 65025;
          int * c__ = (int *) malloc(_len_c__0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c__0; _i0++) {
            c__[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s0 = 65025;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = drot_(n,dx,incx,dy,incy,c__,s);
          printf("%d\n", benchRet); 
          free(n);
          free(dx);
          free(incx);
          free(dy);
          free(incy);
          free(c__);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
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
        
          int _len_c__0 = 100;
          int * c__ = (int *) malloc(_len_c__0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c__0; _i0++) {
            c__[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = drot_(n,dx,incx,dy,incy,c__,s);
          printf("%d\n", benchRet); 
          free(n);
          free(dx);
          free(incx);
          free(dy);
          free(incy);
          free(c__);
          free(s);
        
        break;
    }
    // empty
    case 2:
    {
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
        
          int _len_c__0 = 1;
          int * c__ = (int *) malloc(_len_c__0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_c__0; _i0++) {
            c__[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = drot_(n,dx,incx,dy,incy,c__,s);
          printf("%d\n", benchRet); 
          free(n);
          free(dx);
          free(incx);
          free(dy);
          free(incy);
          free(c__);
          free(s);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
