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
struct lan743x_rx {int ring_size; } ;

/* Variables and functions */

__attribute__((used)) static int lan743x_rx_next_index(struct lan743x_rx *rx, int index)
{
	return ((++index) % rx->ring_size);
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
          int index = 100;
          int _len_rx0 = 1;
          struct lan743x_rx * rx = (struct lan743x_rx *) malloc(_len_rx0*sizeof(struct lan743x_rx));
          for(int _i0 = 0; _i0 < _len_rx0; _i0++) {
            rx[_i0].ring_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lan743x_rx_next_index(rx,index);
          printf("%d\n", benchRet); 
          free(rx);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int index = 10;
          int _len_rx0 = 100;
          struct lan743x_rx * rx = (struct lan743x_rx *) malloc(_len_rx0*sizeof(struct lan743x_rx));
          for(int _i0 = 0; _i0 < _len_rx0; _i0++) {
            rx[_i0].ring_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lan743x_rx_next_index(rx,index);
          printf("%d\n", benchRet); 
          free(rx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
