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
typedef  int uchar ;

/* Variables and functions */
 int WD33C93_FS_12_15 ; 
 int WD33C93_FS_16_20 ; 
 int WD33C93_FS_8_10 ; 

__attribute__((used)) static uchar
set_clk_freq(int freq, int *mhz)
{
	int x = freq;
	if (WD33C93_FS_8_10 == freq)
		freq = 8;
	else if (WD33C93_FS_12_15 == freq)
		freq = 12;
	else if (WD33C93_FS_16_20 == freq)
		freq = 16;
	else if (freq > 7 && freq < 11)
		x = WD33C93_FS_8_10;
		else if (freq > 11 && freq < 16)
		x = WD33C93_FS_12_15;
		else if (freq > 15 && freq < 21)
		x = WD33C93_FS_16_20;
	else {
			/* Hmm, wouldn't it be safer to assume highest freq here? */
		x = WD33C93_FS_8_10;
		freq = 8;
	}
	*mhz = freq;
	return x;
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
          int freq = 100;
          int _len_mhz0 = 1;
          int * mhz = (int *) malloc(_len_mhz0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mhz0; _i0++) {
            mhz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_clk_freq(freq,mhz);
          printf("%d\n", benchRet); 
          free(mhz);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int freq = 10;
          int _len_mhz0 = 100;
          int * mhz = (int *) malloc(_len_mhz0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mhz0; _i0++) {
            mhz[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = set_clk_freq(freq,mhz);
          printf("%d\n", benchRet); 
          free(mhz);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
