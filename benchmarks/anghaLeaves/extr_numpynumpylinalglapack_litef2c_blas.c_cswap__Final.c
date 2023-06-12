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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int integer ;
struct TYPE_4__ {int /*<<< orphan*/  i; int /*<<< orphan*/  r; } ;
typedef  TYPE_1__ complex ;

/* Variables and functions */

int cswap_(integer *n, complex *cx, integer *incx, complex *
	cy, integer *incy)
{
    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    static integer i__, ix, iy;
    static complex ctemp;


/*
    Purpose
    =======

      CSWAP interchanges two vectors.

    Further Details
    ===============

       jack dongarra, linpack, 3/11/78.
       modified 12/3/93, array(1) declarations changed to array(*)

    =====================================================================
*/

    /* Parameter adjustments */
    --cy;
    --cx;

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
	i__2 = ix;
	ctemp.r = cx[i__2].r, ctemp.i = cx[i__2].i;
	i__2 = ix;
	i__3 = iy;
	cx[i__2].r = cy[i__3].r, cx[i__2].i = cy[i__3].i;
	i__2 = iy;
	cy[i__2].r = ctemp.r, cy[i__2].i = ctemp.i;
	ix += *incx;
	iy += *incy;
/* L10: */
    }
    return 0;

/*       code for both increments equal to 1 */
L20:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = i__;
	ctemp.r = cx[i__2].r, ctemp.i = cx[i__2].i;
	i__2 = i__;
	i__3 = i__;
	cx[i__2].r = cy[i__3].r, cx[i__2].i = cy[i__3].i;
	i__2 = i__;
	cy[i__2].r = ctemp.r, cy[i__2].i = ctemp.i;
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
        
          int _len_cx0 = 65025;
          struct TYPE_4__ * cx = (struct TYPE_4__ *) malloc(_len_cx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              cx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          cx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 65025;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cy0 = 65025;
          struct TYPE_4__ * cy = (struct TYPE_4__ *) malloc(_len_cy0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cy0; _i0++) {
              cy[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          cy[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incy0 = 65025;
          int * incy = (int *) malloc(_len_incy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incy0; _i0++) {
            incy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cswap_(n,cx,incx,cy,incy);
          printf("%d\n", benchRet); 
          free(n);
          free(cx);
          free(incx);
          free(cy);
          free(incy);
        
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
        
          int _len_cx0 = 100;
          struct TYPE_4__ * cx = (struct TYPE_4__ *) malloc(_len_cx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              cx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          cx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 100;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cy0 = 100;
          struct TYPE_4__ * cy = (struct TYPE_4__ *) malloc(_len_cy0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cy0; _i0++) {
              cy[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          cy[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incy0 = 100;
          int * incy = (int *) malloc(_len_incy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incy0; _i0++) {
            incy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cswap_(n,cx,incx,cy,incy);
          printf("%d\n", benchRet); 
          free(n);
          free(cx);
          free(incx);
          free(cy);
          free(incy);
        
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
        
          int _len_cx0 = 1;
          struct TYPE_4__ * cx = (struct TYPE_4__ *) malloc(_len_cx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              cx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          cx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 1;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_cy0 = 1;
          struct TYPE_4__ * cy = (struct TYPE_4__ *) malloc(_len_cy0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cy0; _i0++) {
              cy[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          cy[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incy0 = 1;
          int * incy = (int *) malloc(_len_incy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incy0; _i0++) {
            incy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cswap_(n,cx,incx,cy,incy);
          printf("%d\n", benchRet); 
          free(n);
          free(cx);
          free(incx);
          free(cy);
          free(incy);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
