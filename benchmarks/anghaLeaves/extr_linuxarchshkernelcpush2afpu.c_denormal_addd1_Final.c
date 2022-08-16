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

/* Type definitions */

/* Variables and functions */

__attribute__((used)) static long long denormal_addd1(unsigned long long ix, unsigned long long iy)
{
	long long frac;
	long long exp;

	if (ix < 0x0010000000000000LL)
		return ix + iy;

	exp = (ix & 0x7ff0000000000000LL) >> 52;
	if (exp - 1 > 63)
		return ix;
	iy >>= exp - 1;
	if (iy == 0)
	  return ix;

	frac = (ix & 0x000fffffffffffffLL) | 0x0010000000000000LL;
	frac += iy;
	if (frac >= 0x0020000000000000LL) {
		frac >>= 1;
		++exp;
	}

	return (exp << 52) | (frac & 0x000fffffffffffffLL);
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
          unsigned long long ix = 100;
          unsigned long long iy = 100;
          long long benchRet = denormal_addd1(ix,iy);
          printf("%lld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long long ix = 255;
          unsigned long long iy = 255;
          long long benchRet = denormal_addd1(ix,iy);
          printf("%lld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long long ix = 10;
          unsigned long long iy = 10;
          long long benchRet = denormal_addd1(ix,iy);
          printf("%lld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
