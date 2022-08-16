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
struct fuse_io_priv {scalar_t__ err; scalar_t__ bytes; scalar_t__ size; scalar_t__ write; } ;
typedef  scalar_t__ ssize_t ;

/* Variables and functions */
 scalar_t__ EIO ; 

__attribute__((used)) static ssize_t fuse_get_res_by_io(struct fuse_io_priv *io)
{
	if (io->err)
		return io->err;

	if (io->bytes >= 0 && io->write)
		return -EIO;

	return io->bytes < 0 ? io->size : io->bytes;
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
          int _len_io0 = 1;
          struct fuse_io_priv * io = (struct fuse_io_priv *) malloc(_len_io0*sizeof(struct fuse_io_priv));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        io[_i0].write = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = fuse_get_res_by_io(io);
          printf("%ld\n", benchRet); 
          free(io);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
