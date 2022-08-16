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
struct rme32 {int wcreg; } ;

/* Variables and functions */
 int RME32_WCR_BITPOS_FREQ_0 ; 
 int RME32_WCR_BITPOS_FREQ_1 ; 
 int RME32_WCR_DS_BM ; 

__attribute__((used)) static int snd_rme32_playback_getrate(struct rme32 * rme32)
{
	int rate;

	rate = ((rme32->wcreg >> RME32_WCR_BITPOS_FREQ_0) & 1) +
	       (((rme32->wcreg >> RME32_WCR_BITPOS_FREQ_1) & 1) << 1);
	switch (rate) {
	case 1:
		rate = 32000;
		break;
	case 2:
		rate = 44100;
		break;
	case 3:
		rate = 48000;
		break;
	default:
		return -1;
	}
	return (rme32->wcreg & RME32_WCR_DS_BM) ? rate << 1 : rate;
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
          int _len_rme320 = 1;
          struct rme32 * rme32 = (struct rme32 *) malloc(_len_rme320*sizeof(struct rme32));
          for(int _i0 = 0; _i0 < _len_rme320; _i0++) {
            rme32[_i0].wcreg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_rme32_playback_getrate(rme32);
          printf("%d\n", benchRet); 
          free(rme32);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_rme320 = 100;
          struct rme32 * rme32 = (struct rme32 *) malloc(_len_rme320*sizeof(struct rme32));
          for(int _i0 = 0; _i0 < _len_rme320; _i0++) {
            rme32[_i0].wcreg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_rme32_playback_getrate(rme32);
          printf("%d\n", benchRet); 
          free(rme32);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
