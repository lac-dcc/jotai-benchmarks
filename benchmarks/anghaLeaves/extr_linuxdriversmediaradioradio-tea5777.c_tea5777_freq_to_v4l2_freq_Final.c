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
typedef  int u32 ;
struct radio_tea5777 {int band; } ;

/* Variables and functions */
#define  BAND_AM 129 
#define  BAND_FM 128 
 int TEA5777_AM_FREQ_STEP ; 
 int TEA5777_AM_IF ; 
 int TEA5777_FM_FREQ_STEP ; 
 int TEA5777_FM_IF ; 

__attribute__((used)) static u32 tea5777_freq_to_v4l2_freq(struct radio_tea5777 *tea, u32 freq)
{
	switch (tea->band) {
	case BAND_FM:
		return (freq * TEA5777_FM_FREQ_STEP + TEA5777_FM_IF) * 16;
	case BAND_AM:
		return (freq * TEA5777_AM_FREQ_STEP + TEA5777_AM_IF) * 16;
	}
	return 0; /* Never reached */
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
          int _len_tea0 = 1;
          struct radio_tea5777 * tea = (struct radio_tea5777 *) malloc(_len_tea0*sizeof(struct radio_tea5777));
          for(int _i0 = 0; _i0 < _len_tea0; _i0++) {
            tea[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tea5777_freq_to_v4l2_freq(tea,freq);
          printf("%d\n", benchRet); 
          free(tea);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int freq = 10;
          int _len_tea0 = 100;
          struct radio_tea5777 * tea = (struct radio_tea5777 *) malloc(_len_tea0*sizeof(struct radio_tea5777));
          for(int _i0 = 0; _i0 < _len_tea0; _i0++) {
            tea[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tea5777_freq_to_v4l2_freq(tea,freq);
          printf("%d\n", benchRet); 
          free(tea);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
