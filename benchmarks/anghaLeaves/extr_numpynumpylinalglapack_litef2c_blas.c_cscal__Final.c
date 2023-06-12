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
struct TYPE_4__ {int r; int i; } ;
typedef  TYPE_1__ complex ;

/* Variables and functions */

int cscal_(integer *n, complex *ca, complex *cx, integer *
	incx)
{
    /* System generated locals */
    integer i__1, i__2, i__3, i__4;
    complex q__1;

    /* Local variables */
    static integer i__, nincx;


/*
    Purpose
    =======

       CSCAL scales a vector by a constant.

    Further Details
    ===============

       jack dongarra, linpack,  3/11/78.
       modified 3/93 to return if incx .le. 0.
       modified 12/3/93, array(1) declarations changed to array(*)

    =====================================================================
*/

    /* Parameter adjustments */
    --cx;

    /* Function Body */
    if (*n <= 0 || *incx <= 0) {
	return 0;
    }
    if (*incx == 1) {
	goto L20;
    }

/*        code for increment not equal to 1 */

    nincx = *n * *incx;
    i__1 = nincx;
    i__2 = *incx;
    for (i__ = 1; i__2 < 0 ? i__ >= i__1 : i__ <= i__1; i__ += i__2) {
	i__3 = i__;
	i__4 = i__;
	q__1.r = ca->r * cx[i__4].r - ca->i * cx[i__4].i, q__1.i = ca->r * cx[
		i__4].i + ca->i * cx[i__4].r;
	cx[i__3].r = q__1.r, cx[i__3].i = q__1.i;
/* L10: */
    }
    return 0;

/*        code for increment equal to 1 */

L20:
    i__2 = *n;
    for (i__ = 1; i__ <= i__2; ++i__) {
	i__1 = i__;
	i__3 = i__;
	q__1.r = ca->r * cx[i__3].r - ca->i * cx[i__3].i, q__1.i = ca->r * cx[
		i__3].i + ca->i * cx[i__3].r;
	cx[i__1].r = q__1.r, cx[i__1].i = q__1.i;
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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
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
        
          int _len_ca0 = 65025;
          struct TYPE_4__ * ca = (struct TYPE_4__ *) malloc(_len_ca0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
              ca[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          ca[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cx0 = 65025;
          struct TYPE_4__ * cx = (struct TYPE_4__ *) malloc(_len_cx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              cx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          cx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 65025;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cscal_(n,ca,cx,incx);
          printf("%d\n", benchRet); 
          free(n);
          free(ca);
          free(cx);
          free(incx);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
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
        
          int _len_ca0 = 100;
          struct TYPE_4__ * ca = (struct TYPE_4__ *) malloc(_len_ca0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
              ca[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          ca[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cx0 = 100;
          struct TYPE_4__ * cx = (struct TYPE_4__ *) malloc(_len_cx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              cx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          cx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 100;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cscal_(n,ca,cx,incx);
          printf("%d\n", benchRet); 
          free(n);
          free(ca);
          free(cx);
          free(incx);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
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
        
          int _len_ca0 = 1;
          struct TYPE_4__ * ca = (struct TYPE_4__ *) malloc(_len_ca0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
              ca[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          ca[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_cx0 = 1;
          struct TYPE_4__ * cx = (struct TYPE_4__ *) malloc(_len_cx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_cx0; _i0++) {
              cx[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          cx[_i0].i = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_incx0 = 1;
          int * incx = (int *) malloc(_len_incx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_incx0; _i0++) {
            incx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = cscal_(n,ca,cx,incx);
          printf("%d\n", benchRet); 
          free(n);
          free(ca);
          free(cx);
          free(incx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
