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
typedef  scalar_t__ u32 ;
struct cx231xx_dmaqueue {scalar_t__ lines_completed; int current_field; } ;
struct cx231xx {int norm; } ;

/* Variables and functions */
 scalar_t__ NTSC_VBI_LINES ; 
 scalar_t__ PAL_VBI_LINES ; 
 int V4L2_STD_625_50 ; 

u8 cx231xx_is_vbi_buffer_done(struct cx231xx *dev,
			      struct cx231xx_dmaqueue *dma_q)
{
	u32 height = 0;

	height = ((dev->norm & V4L2_STD_625_50) ?
		  PAL_VBI_LINES : NTSC_VBI_LINES);
	if (dma_q->lines_completed == height && dma_q->current_field == 2)
		return 1;
	else
		return 0;
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
            dev[_i0].norm = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dma_q0 = 1;
          struct cx231xx_dmaqueue * dma_q = (struct cx231xx_dmaqueue *) malloc(_len_dma_q0*sizeof(struct cx231xx_dmaqueue));
          for(int _i0 = 0; _i0 < _len_dma_q0; _i0++) {
            dma_q[_i0].lines_completed = ((-2 * (next_i()%2)) + 1) * next_i();
        dma_q[_i0].current_field = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cx231xx_is_vbi_buffer_done(dev,dma_q);
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
