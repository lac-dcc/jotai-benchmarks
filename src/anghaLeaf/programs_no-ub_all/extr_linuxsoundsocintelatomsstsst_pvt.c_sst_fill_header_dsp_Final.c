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
       0            big-arr\n\
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
struct ipc_dsp_hdr {int cmd_id; int mod_index_id; int pipe_id; int length; scalar_t__ mod_id; } ;

/* Variables and functions */

void sst_fill_header_dsp(struct ipc_dsp_hdr *dsp, int msg,
					int pipe_id, int len)
{
	dsp->cmd_id = msg;
	dsp->mod_index_id = 0xff;
	dsp->pipe_id = pipe_id;
	dsp->length = len;
	dsp->mod_id = 0;
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

    // big-arr
    case 0:
    {
          int msg = 255;
          int pipe_id = 255;
          int len = 255;
          int _len_dsp0 = 1;
          struct ipc_dsp_hdr * dsp = (struct ipc_dsp_hdr *) malloc(_len_dsp0*sizeof(struct ipc_dsp_hdr));
          for(int _i0 = 0; _i0 < _len_dsp0; _i0++) {
            dsp->cmd_id = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp->mod_index_id = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp->pipe_id = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp->length = ((-2 * (next_i()%2)) + 1) * next_i();
        dsp->mod_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sst_fill_header_dsp(dsp,msg,pipe_id,len);
          free(dsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
