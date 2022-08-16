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

/* Type definitions */
struct axi_dmac_chan {unsigned int max_length; unsigned int align_mask; } ;

/* Variables and functions */

__attribute__((used)) static bool axi_dmac_check_len(struct axi_dmac_chan *chan, unsigned int len)
{
	if (len == 0 || len > chan->max_length)
		return false;
	if ((len & chan->align_mask) != 0) /* Not aligned */
		return false;
	return true;
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
          unsigned int len = 100;
          int _len_chan0 = 1;
          struct axi_dmac_chan * chan = (struct axi_dmac_chan *) malloc(_len_chan0*sizeof(struct axi_dmac_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].max_length = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].align_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = axi_dmac_check_len(chan,len);
          printf("%d\n", benchRet); 
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
