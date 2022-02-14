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
struct aiocb {scalar_t__ __err; } ;

/* Variables and functions */
 int AIO_ALLDONE ; 
 int AIO_NOTCANCELED ; 
 scalar_t__ EINPROGRESS ; 

int aio_cancel(int fd, struct aiocb *cb)
{
	if (!cb) {
		/* FIXME: for correctness, we should return AIO_ALLDONE
		 * if there are no outstanding aio operations on this
		 * file descriptor, but that would require making aio
		 * much slower, and seems to have little advantage since
		 * we don't support cancellation anyway. */
		return AIO_NOTCANCELED;
	}
	return cb->__err==EINPROGRESS ? AIO_NOTCANCELED : AIO_ALLDONE;
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
          int fd = 255;
          int _len_cb0 = 1;
          struct aiocb * cb = (struct aiocb *) malloc(_len_cb0*sizeof(struct aiocb));
          for(int _i0 = 0; _i0 < _len_cb0; _i0++) {
            cb->__err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = aio_cancel(fd,cb);
          printf("%d\n", benchRet); 
          free(cb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
