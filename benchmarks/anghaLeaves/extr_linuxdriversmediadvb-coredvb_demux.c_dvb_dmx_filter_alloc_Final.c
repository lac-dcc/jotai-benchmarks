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
       1            linked\n\
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
struct dvb_demux_filter {scalar_t__ state; } ;
struct dvb_demux {int filternum; struct dvb_demux_filter* filter; } ;

/* Variables and functions */
 scalar_t__ DMX_STATE_ALLOCATED ; 
 scalar_t__ DMX_STATE_FREE ; 

__attribute__((used)) static struct dvb_demux_filter *dvb_dmx_filter_alloc(struct dvb_demux *demux)
{
	int i;

	for (i = 0; i < demux->filternum; i++)
		if (demux->filter[i].state == DMX_STATE_FREE)
			break;

	if (i == demux->filternum)
		return NULL;

	demux->filter[i].state = DMX_STATE_ALLOCATED;

	return &demux->filter[i];
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
          int _len_demux0 = 1;
          struct dvb_demux * demux = (struct dvb_demux *) malloc(_len_demux0*sizeof(struct dvb_demux));
          for(int _i0 = 0; _i0 < _len_demux0; _i0++) {
            demux[_i0].filternum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demux__i0__filter0 = 1;
          demux[_i0].filter = (struct dvb_demux_filter *) malloc(_len_demux__i0__filter0*sizeof(struct dvb_demux_filter));
          for(int _j0 = 0; _j0 < _len_demux__i0__filter0; _j0++) {
            demux[_i0].filter->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dvb_demux_filter * benchRet = dvb_dmx_filter_alloc(demux);
          printf("%ld\n", (*benchRet).state);
          for(int _aux = 0; _aux < _len_demux0; _aux++) {
          free(demux[_aux].filter);
          }
          free(demux);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_demux0 = 1;
          struct dvb_demux * demux = (struct dvb_demux *) malloc(_len_demux0*sizeof(struct dvb_demux));
          for(int _i0 = 0; _i0 < _len_demux0; _i0++) {
            demux[_i0].filternum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_demux__i0__filter0 = 1;
          demux[_i0].filter = (struct dvb_demux_filter *) malloc(_len_demux__i0__filter0*sizeof(struct dvb_demux_filter));
          for(int _j0 = 0; _j0 < _len_demux__i0__filter0; _j0++) {
            demux[_i0].filter->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dvb_demux_filter * benchRet = dvb_dmx_filter_alloc(demux);
          printf("%ld\n", (*benchRet).state);
          for(int _aux = 0; _aux < _len_demux0; _aux++) {
          free(demux[_aux].filter);
          }
          free(demux);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
