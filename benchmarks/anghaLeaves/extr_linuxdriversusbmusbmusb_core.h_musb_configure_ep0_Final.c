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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct musb {TYPE_1__* endpoints; } ;
struct TYPE_2__ {int is_shared_fifo; void* max_packet_sz_rx; void* max_packet_sz_tx; } ;

/* Variables and functions */
 void* MUSB_EP0_FIFOSIZE ; 

__attribute__((used)) static inline void musb_configure_ep0(struct musb *musb)
{
	musb->endpoints[0].max_packet_sz_tx = MUSB_EP0_FIFOSIZE;
	musb->endpoints[0].max_packet_sz_rx = MUSB_EP0_FIFOSIZE;
	musb->endpoints[0].is_shared_fifo = true;
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
          int _len_musb0 = 1;
          struct musb * musb = (struct musb *) malloc(_len_musb0*sizeof(struct musb));
          for(int _i0 = 0; _i0 < _len_musb0; _i0++) {
              int _len_musb__i0__endpoints0 = 1;
          musb[_i0].endpoints = (struct TYPE_2__ *) malloc(_len_musb__i0__endpoints0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_musb__i0__endpoints0; _j0++) {
            musb[_i0].endpoints->is_shared_fifo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          musb_configure_ep0(musb);
          for(int _aux = 0; _aux < _len_musb0; _aux++) {
          free(musb[_aux].endpoints);
          }
          free(musb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
