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
 int WM8974_MCLKDIV_1 ; 
 int WM8974_MCLKDIV_12 ; 
 int WM8974_MCLKDIV_1_5 ; 
 int WM8974_MCLKDIV_2 ; 
 int WM8974_MCLKDIV_3 ; 
 int WM8974_MCLKDIV_4 ; 
 int WM8974_MCLKDIV_6 ; 
 int WM8974_MCLKDIV_8 ; 

__attribute__((used)) static unsigned int wm8974_get_mclkdiv(unsigned int f_in, unsigned int f_out,
				       int *mclkdiv)
{
	unsigned int ratio = 2 * f_in / f_out;

	if (ratio <= 2) {
		*mclkdiv = WM8974_MCLKDIV_1;
		ratio = 2;
	} else if (ratio == 3) {
		*mclkdiv = WM8974_MCLKDIV_1_5;
	} else if (ratio == 4) {
		*mclkdiv = WM8974_MCLKDIV_2;
	} else if (ratio <= 6) {
		*mclkdiv = WM8974_MCLKDIV_3;
		ratio = 6;
	} else if (ratio <= 8) {
		*mclkdiv = WM8974_MCLKDIV_4;
		ratio = 8;
	} else if (ratio <= 12) {
		*mclkdiv = WM8974_MCLKDIV_6;
		ratio = 12;
	} else if (ratio <= 16) {
		*mclkdiv = WM8974_MCLKDIV_8;
		ratio = 16;
	} else {
		*mclkdiv = WM8974_MCLKDIV_12;
		ratio = 24;
	}

	return f_out * ratio / 2;
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
          unsigned int f_in = 100;
          unsigned int f_out = 100;
          int _len_mclkdiv0 = 1;
          int * mclkdiv = (int *) malloc(_len_mclkdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mclkdiv0; _i0++) {
            mclkdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = wm8974_get_mclkdiv(f_in,f_out,mclkdiv);
          printf("%u\n", benchRet); 
          free(mclkdiv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int f_in = 10;
          unsigned int f_out = 10;
          int _len_mclkdiv0 = 100;
          int * mclkdiv = (int *) malloc(_len_mclkdiv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mclkdiv0; _i0++) {
            mclkdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = wm8974_get_mclkdiv(f_in,f_out,mclkdiv);
          printf("%u\n", benchRet); 
          free(mclkdiv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
