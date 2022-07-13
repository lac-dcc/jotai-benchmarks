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
       0            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct bts_buffer {TYPE_1__* buf; } ;
struct TYPE_2__ {unsigned long offset; unsigned long displacement; } ;

/* Variables and functions */

__attribute__((used)) static unsigned long bts_buffer_offset(struct bts_buffer *buf, unsigned int idx)
{
	return buf->buf[idx].offset + buf->buf[idx].displacement;
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

    // big-arr-10x
    case 0:
    {
          unsigned int idx = 10;
          int _len_buf0 = 100;
          struct bts_buffer * buf = (struct bts_buffer *) malloc(_len_buf0*sizeof(struct bts_buffer));
          for(int _i0 = 0; _i0 < _len_buf0; _i0++) {
              int _len_buf__i0__buf0 = 1;
          buf[_i0].buf = (struct TYPE_2__ *) malloc(_len_buf__i0__buf0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_buf__i0__buf0; _j0++) {
            buf[_i0].buf->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        buf[_i0].buf->displacement = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long benchRet = bts_buffer_offset(buf,idx);
          printf("%lu\n", benchRet); 
          for(int _aux = 0; _aux < _len_buf0; _aux++) {
          free(buf[_aux].buf);
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
