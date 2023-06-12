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
typedef  scalar_t__ real ;
typedef  scalar_t__ integer ;

/* Variables and functions */

int slamrg_(integer *n1, integer *n2, real *a, integer *
	strd1, integer *strd2, integer *index)
{
    /* System generated locals */
    integer i__1;

    /* Local variables */
    static integer i__, ind1, ind2, n1sv, n2sv;


/*
    -- LAPACK routine (version 3.2) --
    -- LAPACK is a software package provided by Univ. of Tennessee,    --
    -- Univ. of California Berkeley, Univ. of Colorado Denver and NAG Ltd..--
       November 2006


    Purpose
    =======

    SLAMRG will create a permutation list which will merge the elements
    of A (which is composed of two independently sorted sets) into a
    single set which is sorted in ascending order.

    Arguments
    =========

    N1     (input) INTEGER
    N2     (input) INTEGER
           These arguements contain the respective lengths of the two
           sorted lists to be merged.

    A      (input) REAL array, dimension (N1+N2)
           The first N1 elements of A contain a list of numbers which
           are sorted in either ascending or descending order.  Likewise
           for the final N2 elements.

    STRD1  (input) INTEGER
    STRD2  (input) INTEGER
           These are the strides to be taken through the array A.
           Allowable strides are 1 and -1.  They indicate whether a
           subset of A is sorted in ascending (STRDx = 1) or descending
           (STRDx = -1) order.

    INDEX  (output) INTEGER array, dimension (N1+N2)
           On exit this array will contain a permutation such that
           if B( I ) = A( INDEX( I ) ) for I=1,N1+N2, then B will be
           sorted in ascending order.

    =====================================================================
*/


    /* Parameter adjustments */
    --index;
    --a;

    /* Function Body */
    n1sv = *n1;
    n2sv = *n2;
    if (*strd1 > 0) {
	ind1 = 1;
    } else {
	ind1 = *n1;
    }
    if (*strd2 > 0) {
	ind2 = *n1 + 1;
    } else {
	ind2 = *n1 + *n2;
    }
    i__ = 1;
/*     while ( (N1SV > 0) & (N2SV > 0) ) */
L10:
    if (n1sv > 0 && n2sv > 0) {
	if (a[ind1] <= a[ind2]) {
	    index[i__] = ind1;
	    ++i__;
	    ind1 += *strd1;
	    --n1sv;
	} else {
	    index[i__] = ind2;
	    ++i__;
	    ind2 += *strd2;
	    --n2sv;
	}
	goto L10;
    }
/*     end while */
    if (n1sv == 0) {
	i__1 = n2sv;
	for (n1sv = 1; n1sv <= i__1; ++n1sv) {
	    index[i__] = ind2;
	    ++i__;
	    ind2 += *strd2;
/* L20: */
	}
    } else {
/*     N2SV .EQ. 0 */
	i__1 = n1sv;
	for (n2sv = 1; n2sv <= i__1; ++n2sv) {
	    index[i__] = ind1;
	    ++i__;
	    ind1 += *strd1;
/* L30: */
	}
    }

    return 0;

/*     End of SLAMRG */

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
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 49
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 33
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 32
          // ------------------------------- 

          int _len_n10 = 65025;
          long * n1 = (long *) malloc(_len_n10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n10; _i0++) {
            n1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_n20 = 65025;
          long * n2 = (long *) malloc(_len_n20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n20; _i0++) {
            n2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_a0 = 65025;
          long * a = (long *) malloc(_len_a0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_strd10 = 65025;
          long * strd1 = (long *) malloc(_len_strd10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_strd10; _i0++) {
            strd1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_strd20 = 65025;
          long * strd2 = (long *) malloc(_len_strd20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_strd20; _i0++) {
            strd2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_index0 = 65025;
          long * index = (long *) malloc(_len_index0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = slamrg_(n1,n2,a,strd1,strd2,index);
          printf("%d\n", benchRet); 
          free(n1);
          free(n2);
          free(a);
          free(strd1);
          free(strd2);
          free(index);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 49
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 33
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 32
          // ------------------------------- 

          int _len_n10 = 100;
          long * n1 = (long *) malloc(_len_n10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n10; _i0++) {
            n1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_n20 = 100;
          long * n2 = (long *) malloc(_len_n20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n20; _i0++) {
            n2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_a0 = 100;
          long * a = (long *) malloc(_len_a0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_strd10 = 100;
          long * strd1 = (long *) malloc(_len_strd10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_strd10; _i0++) {
            strd1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_strd20 = 100;
          long * strd2 = (long *) malloc(_len_strd20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_strd20; _i0++) {
            strd2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_index0 = 100;
          long * index = (long *) malloc(_len_index0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = slamrg_(n1,n2,a,strd1,strd2,index);
          printf("%d\n", benchRet); 
          free(n1);
          free(n2);
          free(a);
          free(strd1);
          free(strd2);
          free(index);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 49
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 33
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 32
          // ------------------------------- 

          int _len_n10 = 1;
          long * n1 = (long *) malloc(_len_n10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n10; _i0++) {
            n1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_n20 = 1;
          long * n2 = (long *) malloc(_len_n20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_n20; _i0++) {
            n2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_a0 = 1;
          long * a = (long *) malloc(_len_a0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_strd10 = 1;
          long * strd1 = (long *) malloc(_len_strd10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_strd10; _i0++) {
            strd1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_strd20 = 1;
          long * strd2 = (long *) malloc(_len_strd20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_strd20; _i0++) {
            strd2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_index0 = 1;
          long * index = (long *) malloc(_len_index0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_index0; _i0++) {
            index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = slamrg_(n1,n2,a,strd1,strd2,index);
          printf("%d\n", benchRet); 
          free(n1);
          free(n2);
          free(a);
          free(strd1);
          free(strd2);
          free(index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
