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
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_async {scalar_t__ events; scalar_t__ munge_ptr; scalar_t__ munge_count; scalar_t__ munge_chan; scalar_t__ scan_progress; scalar_t__ scans_done; scalar_t__ cur_chan; scalar_t__ buf_read_ptr; scalar_t__ buf_write_ptr; scalar_t__ buf_read_count; scalar_t__ buf_read_alloc_count; scalar_t__ buf_write_count; scalar_t__ buf_write_alloc_count; } ;

/* Variables and functions */

void comedi_buf_reset(struct comedi_subdevice *s)
{
	struct comedi_async *async = s->async;

	async->buf_write_alloc_count = 0;
	async->buf_write_count = 0;
	async->buf_read_alloc_count = 0;
	async->buf_read_count = 0;

	async->buf_write_ptr = 0;
	async->buf_read_ptr = 0;

	async->cur_chan = 0;
	async->scans_done = 0;
	async->scan_progress = 0;
	async->munge_chan = 0;
	async->munge_count = 0;
	async->munge_ptr = 0;

	async->events = 0;
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
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__async0 = 1;
          s[_i0].async = (struct comedi_async *) malloc(_len_s__i0__async0*sizeof(struct comedi_async));
          for(int _j0 = 0; _j0 < _len_s__i0__async0; _j0++) {
            s[_i0].async->events = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->munge_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->munge_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->munge_chan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->scan_progress = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->scans_done = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->cur_chan = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->buf_read_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->buf_write_ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->buf_read_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->buf_read_alloc_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->buf_write_count = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->buf_write_alloc_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          comedi_buf_reset(s);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].async);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
