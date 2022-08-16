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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  ut64 ;
struct TYPE_3__ {int /*<<< orphan*/  off; } ;
typedef  int /*<<< orphan*/  RIODesc ;
typedef  TYPE_1__ RIO ;

/* Variables and functions */
#define  R_IO_SEEK_CUR 130 
#define  R_IO_SEEK_END 129 
#define  R_IO_SEEK_SET 128 
 int /*<<< orphan*/  UT64_MAX ; 

__attribute__((used)) static ut64 __lseek(RIO *io, RIODesc *fd, ut64 offset, int whence) {
	switch (whence) {
	case R_IO_SEEK_SET:
		io->off = offset;
		break;
	case R_IO_SEEK_CUR:
		io->off += offset;
		break;
	case R_IO_SEEK_END:
		io->off = UT64_MAX;
	}
	return io->off;
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
          int offset = 100;
          int whence = 100;
          int _len_io0 = 1;
          struct TYPE_3__ * io = (struct TYPE_3__ *) malloc(_len_io0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io[_i0].off = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fd0 = 1;
          int * fd = (int *) malloc(_len_fd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fd0; _i0++) {
            fd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __lseek(io,fd,offset,whence);
          printf("%d\n", benchRet); 
          free(io);
          free(fd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
