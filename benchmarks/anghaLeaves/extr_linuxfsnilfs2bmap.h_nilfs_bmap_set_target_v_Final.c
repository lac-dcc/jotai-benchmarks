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

/* Type definitions */
struct nilfs_bmap {void* b_last_allocated_ptr; void* b_last_allocated_key; } ;
typedef  void* __u64 ;

/* Variables and functions */

__attribute__((used)) static inline void nilfs_bmap_set_target_v(struct nilfs_bmap *bmap, __u64 key,
					   __u64 ptr)
{
	bmap->b_last_allocated_key = key;
	bmap->b_last_allocated_ptr = ptr;
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
          int _len_bmap0 = 1;
          struct nilfs_bmap * bmap = (struct nilfs_bmap *) malloc(_len_bmap0*sizeof(struct nilfs_bmap));
          for(int _i0 = 0; _i0 < _len_bmap0; _i0++) {
              }
          void * key;
          void * ptr;
          nilfs_bmap_set_target_v(bmap,key,ptr);
          free(bmap);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bmap0 = 65025;
          struct nilfs_bmap * bmap = (struct nilfs_bmap *) malloc(_len_bmap0*sizeof(struct nilfs_bmap));
          for(int _i0 = 0; _i0 < _len_bmap0; _i0++) {
              }
          void * key;
          void * ptr;
          nilfs_bmap_set_target_v(bmap,key,ptr);
          free(bmap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bmap0 = 100;
          struct nilfs_bmap * bmap = (struct nilfs_bmap *) malloc(_len_bmap0*sizeof(struct nilfs_bmap));
          for(int _i0 = 0; _i0 < _len_bmap0; _i0++) {
              }
          void * key;
          void * ptr;
          nilfs_bmap_set_target_v(bmap,key,ptr);
          free(bmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
