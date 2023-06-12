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
typedef  TYPE_1__ doublecomplex ;

/* Variables and functions */

int zcopy_(integer *n, doublecomplex *zx, integer *incx,
	doublecomplex *zy, integer *incy)
{
    /* System generated locals */
    integer i__1, i__2, i__3;

    /* Local variables */
    static integer i__, ix, iy;


/*
    Purpose
    =======

       ZCOPY copies a vector, x, to a vector, y.

    Further Details
    ===============

       jack dongarra, linpack, 4/11/78.
       modified 12/3/93, array(1) declarations changed to array(*)

    =====================================================================
*/

    /* Parameter adjustments */
    --zy;
    --zx;

    /* Function Body */
    if (*n <= 0) {
	return 0;
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
	i__2 = iy;
	i__3 = ix;
	zy[i__2].r = zx[i__3].r, zy[i__2].i = zx[i__3].i;
	ix += *incx;
	iy += *incy;
/* L10: */
    }
    return 0;

/*        code for both increments equal to 1 */

L20:
    i__1 = *n;
    for (i__ = 1; i__ <= i__1; ++i__) {
	i__2 = i__;
	i__3 = i__;
	zy[i__2].r = zx[i__3].r, zy[i__2].i = zx[i__3].i;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_n0 = 65025;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_zx0 = 65025;
          struct TYPE_4__ * zx = (struct TYPE_4__ *) malloc(_len_zx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_zx0; _i0++) {
              zx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          zx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 65025;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_zy0 = 65025;
          struct TYPE_4__ * zy = (struct TYPE_4__ *) malloc(_len_zy0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_zy0; _i0++) {
              zy[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          zy[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incy0 = 65025;
          int * incy = (int *) malloc(_len_incy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incy0; _i0++) {
            incy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = zcopy_(n,zx,incx,zy,incy);
          printf("%d\n", benchRet); 
          free(n);
          free(zx);
          free(incx);
          free(zy);
          free(incy);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_n0 = 100;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_zx0 = 100;
          struct TYPE_4__ * zx = (struct TYPE_4__ *) malloc(_len_zx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_zx0; _i0++) {
              zx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          zx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 100;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_zy0 = 100;
          struct TYPE_4__ * zy = (struct TYPE_4__ *) malloc(_len_zy0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_zy0; _i0++) {
              zy[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          zy[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incy0 = 100;
          int * incy = (int *) malloc(_len_incy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incy0; _i0++) {
            incy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = zcopy_(n,zx,incx,zy,incy);
          printf("%d\n", benchRet); 
          free(n);
          free(zx);
          free(incx);
          free(zy);
          free(incy);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int _len_n0 = 1;
          int * n = (int *) malloc(_len_n0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_n0; _i0++) {
            n[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_zx0 = 1;
          struct TYPE_4__ * zx = (struct TYPE_4__ *) malloc(_len_zx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_zx0; _i0++) {
              zx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          zx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 1;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_zy0 = 1;
          struct TYPE_4__ * zy = (struct TYPE_4__ *) malloc(_len_zy0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_zy0; _i0++) {
              zy[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
          zy[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incy0 = 1;
          int * incy = (int *) malloc(_len_incy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incy0; _i0++) {
            incy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = zcopy_(n,zx,incx,zy,incy);
          printf("%d\n", benchRet); 
          free(n);
          free(zx);
          free(incx);
          free(zy);
          free(incy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
