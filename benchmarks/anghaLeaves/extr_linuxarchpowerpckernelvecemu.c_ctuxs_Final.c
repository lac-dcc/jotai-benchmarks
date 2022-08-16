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
       1            big-arr-10x\n\
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
 unsigned int VSCR_SAT ; 

__attribute__((used)) static unsigned int ctuxs(unsigned int x, int scale, unsigned int *vscrp)
{
	int exp;
	unsigned int mant;

	exp = (x >> 23) & 0xff;
	mant = x & 0x7fffff;
	if (exp == 255 && mant != 0)
		return 0;		/* NaN -> 0 */
	exp = exp - 127 + scale;
	if (exp < 0)
		return 0;		/* round towards zero */
	if (x & 0x80000000) {
		/* negative => saturate to 0 */
		*vscrp |= VSCR_SAT;
		return 0;
	}
	if (exp >= 32) {
		/* saturate */
		*vscrp |= VSCR_SAT;
		return 0xffffffff;
	}
	mant |= 0x800000;
	mant = (mant << 8) >> (31 - exp);
	return mant;
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
          unsigned int x = 100;
          int scale = 100;
          int _len_vscrp0 = 1;
          unsigned int * vscrp = (unsigned int *) malloc(_len_vscrp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_vscrp0; _i0++) {
            vscrp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ctuxs(x,scale,vscrp);
          printf("%u\n", benchRet); 
          free(vscrp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int x = 10;
          int scale = 10;
          int _len_vscrp0 = 100;
          unsigned int * vscrp = (unsigned int *) malloc(_len_vscrp0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_vscrp0; _i0++) {
            vscrp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = ctuxs(x,scale,vscrp);
          printf("%u\n", benchRet); 
          free(vscrp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
