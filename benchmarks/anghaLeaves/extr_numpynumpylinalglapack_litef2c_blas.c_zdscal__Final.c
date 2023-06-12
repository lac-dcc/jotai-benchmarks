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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int integer ;
typedef  void* doublereal ;
struct TYPE_3__ {int r; int i; } ;
typedef  TYPE_1__ doublecomplex ;

/* Variables and functions */

int zdscal_(integer *n, doublereal *da, doublecomplex *zx,
	integer *incx)
{
    /* System generated locals */
    integer i__1, i__2, i__3;
    doublecomplex z__1, z__2;

    /* Local variables */
    static integer i__, ix;


/*
    Purpose
    =======

       ZDSCAL scales a vector by a constant.

    Further Details
    ===============

       jack dongarra, 3/11/78.
       modified 3/93 to return if incx .le. 0.
       modified 12/3/93, array(1) declarations changed to array(*)

    =====================================================================
*/

    /* Parameter adjustments */
    --zx;

    /* Function Body */
    if (*n <= 0 || *incx <= 0) {
	return 0;
    }
    if (*incx == 1) {
	goto L20;
    }

/*        code for increment not equal to 1 */

    ix = 1;
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = ix;
	z__2.r = *da, z__2.i = 0.;
	i__3 = ix;
	z__1.r = z__2.r * zx[i__3].r - z__2.i * zx[i__3].i, z__1.i = z__2.r *
		zx[i__3].i + z__2.i * zx[i__3].r;
	zx[i__2].r = z__1.r, zx[i__2].i = z__1.i;
	ix += *incx;
/* L10: */
    }
    return 0;

/*        code for increment equal to 1 */

L20:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = i__;
	z__2.r = *da, z__2.i = 0.;
	i__3 = i__;
	z__1.r = z__2.r * zx[i__3].r - z__2.i * zx[i__3].i, z__1.i = z__2.r *
		zx[i__3].i + z__2.i * zx[i__3].r;
	zx[i__2].r = z__1.r, zx[i__2].i = z__1.i;
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
        
          int _len_da0 = 65025;
          void ** da = (void **) malloc(_len_da0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_da0; _i0++) {
          }
        
          int _len_zx0 = 65025;
          struct TYPE_3__ * zx = (struct TYPE_3__ *) malloc(_len_zx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zx0; _i0++) {
              zx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          zx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 65025;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = zdscal_(n,da,zx,incx);
          printf("%d\n", benchRet); 
          free(n);
          for(int i1 = 0; i1 < _len_da0; i1++) {
              }
          free(da);
          free(zx);
          free(incx);
        
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
        
          int _len_da0 = 100;
          void ** da = (void **) malloc(_len_da0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_da0; _i0++) {
          }
        
          int _len_zx0 = 100;
          struct TYPE_3__ * zx = (struct TYPE_3__ *) malloc(_len_zx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zx0; _i0++) {
              zx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          zx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 100;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = zdscal_(n,da,zx,incx);
          printf("%d\n", benchRet); 
          free(n);
          for(int i1 = 0; i1 < _len_da0; i1++) {
              }
          free(da);
          free(zx);
          free(incx);
        
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
        
          int _len_da0 = 1;
          void ** da = (void **) malloc(_len_da0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_da0; _i0++) {
          }
        
          int _len_zx0 = 1;
          struct TYPE_3__ * zx = (struct TYPE_3__ *) malloc(_len_zx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_zx0; _i0++) {
              zx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          zx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 1;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = zdscal_(n,da,zx,incx);
          printf("%d\n", benchRet); 
          free(n);
          for(int i1 = 0; i1 < _len_da0; i1++) {
              }
          free(da);
          free(zx);
          free(incx);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
