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
struct rchan_buf {size_t subbufs_consumed; size_t bytes_consumed; size_t* padding; TYPE_1__* chan; } ;
struct TYPE_2__ {size_t subbuf_size; size_t n_subbufs; } ;

/* Variables and functions */

__attribute__((used)) static size_t relay_file_read_start_pos(size_t read_pos,
					struct rchan_buf *buf)
{
	size_t read_subbuf, padding, padding_start, padding_end;
	size_t subbuf_size = buf->chan->subbuf_size;
	size_t n_subbufs = buf->chan->n_subbufs;
	size_t consumed = buf->subbufs_consumed % n_subbufs;

	if (!read_pos)
		read_pos = consumed * subbuf_size + buf->bytes_consumed;
	read_subbuf = read_pos / subbuf_size;
	padding = buf->padding[read_subbuf];
	padding_start = (read_subbuf + 1) * subbuf_size - padding;
	padding_end = (read_subbuf + 1) * subbuf_size;
	if (read_pos >= padding_start && read_pos < padding_end) {
		read_subbuf = (read_subbuf + 1) % n_subbufs;
		read_pos = read_subbuf * subbuf_size;
	}

	return read_pos;
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
          unsigned long read_pos = 100;
          int _len_buf0 = 1;
          struct rchan_buf * buf = (struct rchan_buf *) malloc(_len_buf0*sizeof(struct rchan_buf));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
            buf[_i0].subbufs_consumed = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].bytes_consumed = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__padding0 = 1;
          buf[_i0].padding = (unsigned long *) malloc(_len_buf__i0__padding0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_buf__i0__padding0; _j0++) {
            buf[_i0].padding[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__chan0 = 1;
          buf[_i0].chan = (struct TYPE_2__ *) malloc(_len_buf__i0__chan0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__chan0; _j0++) {
            buf[_i0].chan->subbuf_size = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].chan->n_subbufs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = relay_file_read_start_pos(read_pos,buf);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].padding);
          }
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].chan);
          }
          free(buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
