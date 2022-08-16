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
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct TYPE_3__ {int full; } ;
typedef  TYPE_1__ fInt ;

/* Variables and functions */
 int MAX ; 
 int SHIFT_AMOUNT ; 

__attribute__((used)) static fInt ConvertToFraction(int X) /*Add all range checking here. Is it possible to make fInt a private declaration? */
{
	fInt temp;

	if (X <= MAX)
		temp.full = (X << SHIFT_AMOUNT);
	else
		temp.full = 0;

	return temp;
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
          int X = 100;
          struct TYPE_3__ benchRet = ConvertToFraction(X);
          printf("%d\n", benchRet.full);
        
        break;
    }
    // big-arr
    case 1:
    {
          int X = 255;
          struct TYPE_3__ benchRet = ConvertToFraction(X);
          printf("%d\n", benchRet.full);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int X = 10;
          struct TYPE_3__ benchRet = ConvertToFraction(X);
          printf("%d\n", benchRet.full);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
