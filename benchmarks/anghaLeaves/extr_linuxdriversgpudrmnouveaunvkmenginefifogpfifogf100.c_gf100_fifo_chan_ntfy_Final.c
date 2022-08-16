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
typedef  int u32 ;
struct nvkm_fifo_chan {TYPE_1__* fifo; } ;
struct nvkm_event {int dummy; } ;
struct TYPE_2__ {struct nvkm_event kevent; struct nvkm_event uevent; } ;

/* Variables and functions */
 int EINVAL ; 
#define  NV906F_V0_NTFY_KILLED 129 
#define  NV906F_V0_NTFY_NON_STALL_INTERRUPT 128 

int
gf100_fifo_chan_ntfy(struct nvkm_fifo_chan *chan, u32 type,
		     struct nvkm_event **pevent)
{
	switch (type) {
	case NV906F_V0_NTFY_NON_STALL_INTERRUPT:
		*pevent = &chan->fifo->uevent;
		return 0;
	case NV906F_V0_NTFY_KILLED:
		*pevent = &chan->fifo->kevent;
		return 0;
	default:
		break;
	}
	return -EINVAL;
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
          int type = 100;
          int _len_chan0 = 1;
          struct nvkm_fifo_chan * chan = (struct nvkm_fifo_chan *) malloc(_len_chan0*sizeof(struct nvkm_fifo_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
              int _len_chan__i0__fifo0 = 1;
          chan[_i0].fifo = (struct TYPE_2__ *) malloc(_len_chan__i0__fifo0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chan__i0__fifo0; _j0++) {
            chan[_i0].fifo->kevent.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        chan[_i0].fifo->uevent.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_pevent0 = 1;
          struct nvkm_event ** pevent = (struct nvkm_event **) malloc(_len_pevent0*sizeof(struct nvkm_event *));
          for(int _i0 = 0; _i0 < _len_pevent0; _i0++) {
            int _len_pevent1 = 1;
            pevent[_i0] = (struct nvkm_event *) malloc(_len_pevent1*sizeof(struct nvkm_event));
            for(int _i1 = 0; _i1 < _len_pevent1; _i1++) {
              pevent[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = gf100_fifo_chan_ntfy(chan,type,pevent);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_chan0; _aux++) {
          free(chan[_aux].fifo);
          }
          free(chan);
          for(int i1 = 0; i1 < _len_pevent0; i1++) {
            int _len_pevent1 = 1;
              free(pevent[i1]);
          }
          free(pevent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
