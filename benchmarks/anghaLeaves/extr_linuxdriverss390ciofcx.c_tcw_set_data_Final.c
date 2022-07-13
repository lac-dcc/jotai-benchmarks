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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  void* u64 ;
struct tcw {int /*<<< orphan*/  flags; void* output; scalar_t__ w; void* input; scalar_t__ r; } ;
typedef  scalar_t__ addr_t ;

/* Variables and functions */
 int /*<<< orphan*/  TCW_FLAGS_INPUT_TIDA ; 
 int /*<<< orphan*/  TCW_FLAGS_OUTPUT_TIDA ; 

void tcw_set_data(struct tcw *tcw, void *data, int use_tidal)
{
	if (tcw->r) {
		tcw->input = (u64) ((addr_t) data);
		if (use_tidal)
			tcw->flags |= TCW_FLAGS_INPUT_TIDA;
	} else if (tcw->w) {
		tcw->output = (u64) ((addr_t) data);
		if (use_tidal)
			tcw->flags |= TCW_FLAGS_OUTPUT_TIDA;
	}
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
          int use_tidal = 100;
          int _len_tcw0 = 1;
          struct tcw * tcw = (struct tcw *) malloc(_len_tcw0*sizeof(struct tcw));
          for(int _i0 = 0; _i0 < _len_tcw0; _i0++) {
            tcw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tcw[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        tcw[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          tcw_set_data(tcw,data,use_tidal);
          free(tcw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int use_tidal = 255;
          int _len_tcw0 = 65025;
          struct tcw * tcw = (struct tcw *) malloc(_len_tcw0*sizeof(struct tcw));
          for(int _i0 = 0; _i0 < _len_tcw0; _i0++) {
            tcw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tcw[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        tcw[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          tcw_set_data(tcw,data,use_tidal);
          free(tcw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int use_tidal = 10;
          int _len_tcw0 = 100;
          struct tcw * tcw = (struct tcw *) malloc(_len_tcw0*sizeof(struct tcw));
          for(int _i0 = 0; _i0 < _len_tcw0; _i0++) {
            tcw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        tcw[_i0].w = ((-2 * (next_i()%2)) + 1) * next_i();
        tcw[_i0].r = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          tcw_set_data(tcw,data,use_tidal);
          free(tcw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
