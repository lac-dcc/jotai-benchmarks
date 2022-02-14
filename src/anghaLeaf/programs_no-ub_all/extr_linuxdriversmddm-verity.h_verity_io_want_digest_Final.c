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
typedef  int /*<<< orphan*/  u8 ;
struct dm_verity_io {int dummy; } ;
struct dm_verity {int ahash_reqsize; int digest_size; } ;

/* Variables and functions */

__attribute__((used)) static inline u8 *verity_io_want_digest(struct dm_verity *v,
					struct dm_verity_io *io)
{
	return (u8 *)(io + 1) + v->ahash_reqsize + v->digest_size;
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
          int _len_v0 = 1;
          struct dm_verity * v = (struct dm_verity *) malloc(_len_v0*sizeof(struct dm_verity));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v->ahash_reqsize = ((-2 * (next_i()%2)) + 1) * next_i();
        v->digest_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_io0 = 1;
          struct dm_verity_io * io = (struct dm_verity_io *) malloc(_len_io0*sizeof(struct dm_verity_io));
          for(int _i0 = 0; _i0 < _len_io0; _i0++) {
            io->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = verity_io_want_digest(v,io);
          printf("{{other_type}} %p\n", &benchRet); 
          free(v);
          free(io);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
