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

__attribute__((used)) static int denormal_mulf(int hx, int hy)
{
	unsigned int ix, iy;
	unsigned long long m, n;
	int exp, w;

	ix = hx & 0x7fffffff;
	iy = hy & 0x7fffffff;
	if (iy < 0x00800000 || ix == 0)
		return ((hx ^ hy) & 0x80000000);

	exp = (iy & 0x7f800000) >> 23;
	ix &= 0x007fffff;
	iy = (iy & 0x007fffff) | 0x00800000;
	m = (unsigned long long)ix * iy;
	n = m;
	w = -1;
	while (n) { n >>= 1; w++; }

	/* FIXME: use guard bits */
	exp += w - 126 - 46;
	if (exp > 0)
		ix = ((int) (m >> (w - 23)) & 0x007fffff) | (exp << 23);
	else if (exp + 22 >= 0)
		ix = (int) (m >> (w - 22 - exp)) & 0x007fffff;
	else
		ix = 0;

	ix |= (hx ^ hy) & 0x80000000;
	return ix;
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
          int hx = 100;
          int hy = 100;
          int benchRet = denormal_mulf(hx,hy);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int hx = 255;
          int hy = 255;
          int benchRet = denormal_mulf(hx,hy);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hx = 10;
          int hy = 10;
          int benchRet = denormal_mulf(hx,hy);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
