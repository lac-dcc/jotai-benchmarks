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
typedef  int u8 ;
struct cx231xx_dmaqueue {int current_field; scalar_t__ lines_completed; scalar_t__ lines_per_field; scalar_t__ field1_done; } ;
struct cx231xx {int dummy; } ;

/* Variables and functions */

u8 cx231xx_is_buffer_done(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q)
{
	u8 buffer_complete = 0;

	/* Dual field stream */
	buffer_complete = ((dma_q->current_field == 2) &&
			   (dma_q->lines_completed >= dma_q->lines_per_field) &&
			    dma_q->field1_done);

	return buffer_complete;
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
          int _len_dev0 = 1;
          struct cx231xx * dev = (struct cx231xx *) malloc(_len_dev0*sizeof(struct cx231xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dma_q0 = 1;
          struct cx231xx_dmaqueue * dma_q = (struct cx231xx_dmaqueue *) malloc(_len_dma_q0*sizeof(struct cx231xx_dmaqueue));
          for(int _i0 = 0; _i0 < _len_dma_q0; _i0++) {
            dma_q[_i0].current_field = ((-2 * (next_i()%2)) + 1) * next_i();
        dma_q[_i0].lines_completed = ((-2 * (next_i()%2)) + 1) * next_i();
        dma_q[_i0].lines_per_field = ((-2 * (next_i()%2)) + 1) * next_i();
        dma_q[_i0].field1_done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cx231xx_is_buffer_done(dev,dma_q);
          printf("%d\n", benchRet); 
          free(dev);
          free(dma_q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
