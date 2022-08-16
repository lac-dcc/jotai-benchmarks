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
       0            int-bounds\n\
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
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  int int64_t ;
struct TYPE_6__ {scalar_t__ real; scalar_t__ decimal; } ;
struct TYPE_7__ {scalar_t__ full; TYPE_1__ partial; } ;
typedef  TYPE_2__ fInt ;

/* Variables and functions */

__attribute__((used)) static fInt fMultiply (fInt X, fInt Y) /* Uses 64-bit integers (int64_t) */
{
	fInt Product;
	int64_t tempProduct;
	bool X_LessThanOne, Y_LessThanOne;

	X_LessThanOne = (X.partial.real == 0 && X.partial.decimal != 0 && X.full >= 0);
	Y_LessThanOne = (Y.partial.real == 0 && Y.partial.decimal != 0 && Y.full >= 0);

	/*The following is for a very specific common case: Non-zero number with ONLY fractional portion*/
	/* TEMPORARILY DISABLED - CAN BE USED TO IMPROVE PRECISION

	if (X_LessThanOne && Y_LessThanOne) {
		Product.full = X.full * Y.full;
		return Product
	}*/

	tempProduct = ((int64_t)X.full) * ((int64_t)Y.full); /*Q(16,16)*Q(16,16) = Q(32, 32) - Might become a negative number! */
	tempProduct = tempProduct >> 16; /*Remove lagging 16 bits - Will lose some precision from decimal; */
	Product.full = (int)tempProduct; /*The int64_t will lose the leading 16 bits that were part of the integer portion */

	return Product;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          struct TYPE_7__ X;
        X.full = ((-2 * (next_i()%2)) + 1) * next_i();
        X.partial.real = ((-2 * (next_i()%2)) + 1) * next_i();
        X.partial.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_7__ Y;
        Y.full = ((-2 * (next_i()%2)) + 1) * next_i();
        Y.partial.real = ((-2 * (next_i()%2)) + 1) * next_i();
        Y.partial.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_7__ benchRet = fMultiply(X,Y);
          printf("%ld\n", benchRet.full);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
