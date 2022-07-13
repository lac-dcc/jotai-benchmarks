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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct pool {int sectors_per_block; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;

/* Variables and functions */
 int SECTOR_SHIFT ; 

__attribute__((used)) static int io_overlaps_block(struct pool *pool, struct bio *bio)
{
	return bio->bi_iter.bi_size ==
		(pool->sectors_per_block << SECTOR_SHIFT);
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
          int _len_pool0 = 1;
          struct pool * pool = (struct pool *) malloc(_len_pool0*sizeof(struct pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].sectors_per_block = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bio0 = 1;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_iter.bi_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = io_overlaps_block(pool,bio);
          printf("%d\n", benchRet); 
          free(pool);
          free(bio);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pool0 = 65025;
          struct pool * pool = (struct pool *) malloc(_len_pool0*sizeof(struct pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].sectors_per_block = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bio0 = 65025;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_iter.bi_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = io_overlaps_block(pool,bio);
          printf("%d\n", benchRet); 
          free(pool);
          free(bio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pool0 = 100;
          struct pool * pool = (struct pool *) malloc(_len_pool0*sizeof(struct pool));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].sectors_per_block = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bio0 = 100;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_iter.bi_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = io_overlaps_block(pool,bio);
          printf("%d\n", benchRet); 
          free(pool);
          free(bio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
