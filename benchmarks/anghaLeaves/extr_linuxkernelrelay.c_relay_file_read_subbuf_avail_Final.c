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
struct rchan_buf {size_t data; size_t start; size_t offset; size_t* padding; TYPE_1__* chan; } ;
struct TYPE_2__ {size_t subbuf_size; } ;

/* Variables and functions */

__attribute__((used)) static size_t relay_file_read_subbuf_avail(size_t read_pos,
					   struct rchan_buf *buf)
{
	size_t padding, avail = 0;
	size_t read_subbuf, read_offset, write_subbuf, write_offset;
	size_t subbuf_size = buf->chan->subbuf_size;

	write_subbuf = (buf->data - buf->start) / subbuf_size;
	write_offset = buf->offset > subbuf_size ? subbuf_size : buf->offset;
	read_subbuf = read_pos / subbuf_size;
	read_offset = read_pos % subbuf_size;
	padding = buf->padding[read_subbuf];

	if (read_subbuf == write_subbuf) {
		if (read_offset + padding < write_offset)
			avail = write_offset - (read_offset + padding);
	} else
		avail = (subbuf_size - padding) - read_offset;

	return avail;
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
            buf[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].start = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_buf__i0__padding0 = 1;
          buf[_i0].padding = (unsigned long *) malloc(_len_buf__i0__padding0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_buf__i0__padding0; _j0++) {
            buf[_i0].padding[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_buf__i0__chan0 = 1;
          buf[_i0].chan = (struct TYPE_2__ *) malloc(_len_buf__i0__chan0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__chan0; _j0++) {
            buf[_i0].chan->subbuf_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = relay_file_read_subbuf_avail(read_pos,buf);
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
