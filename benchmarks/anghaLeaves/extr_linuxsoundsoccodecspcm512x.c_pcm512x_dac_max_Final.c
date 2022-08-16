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
struct pcm512x_priv {unsigned long overclock_dac; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long pcm512x_dac_max(struct pcm512x_priv *pcm512x,
				     unsigned long rate)
{
	return rate + rate * pcm512x->overclock_dac / 100;
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
          unsigned long rate = 100;
          int _len_pcm512x0 = 1;
          struct pcm512x_priv * pcm512x = (struct pcm512x_priv *) malloc(_len_pcm512x0*sizeof(struct pcm512x_priv));
          for(int _i0 = 0; _i0 < _len_pcm512x0; _i0++) {
            pcm512x[_i0].overclock_dac = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = pcm512x_dac_max(pcm512x,rate);
          printf("%lu\n", benchRet); 
          free(pcm512x);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long rate = 10;
          int _len_pcm512x0 = 100;
          struct pcm512x_priv * pcm512x = (struct pcm512x_priv *) malloc(_len_pcm512x0*sizeof(struct pcm512x_priv));
          for(int _i0 = 0; _i0 < _len_pcm512x0; _i0++) {
            pcm512x[_i0].overclock_dac = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = pcm512x_dac_max(pcm512x,rate);
          printf("%lu\n", benchRet); 
          free(pcm512x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
