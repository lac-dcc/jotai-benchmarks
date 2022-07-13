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
typedef  scalar_t__ u64 ;
struct btrfs_ordered_extent {scalar_t__ file_offset; scalar_t__ len; } ;

/* Variables and functions */

__attribute__((used)) static int range_overlaps(struct btrfs_ordered_extent *entry, u64 file_offset,
			  u64 len)
{
	if (file_offset + len <= entry->file_offset ||
	    entry->file_offset + entry->len <= file_offset)
		return 0;
	return 1;
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
          long file_offset = 100;
          long len = 100;
          int _len_entry0 = 1;
          struct btrfs_ordered_extent * entry = (struct btrfs_ordered_extent *) malloc(_len_entry0*sizeof(struct btrfs_ordered_extent));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].file_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = range_overlaps(entry,file_offset,len);
          printf("%d\n", benchRet); 
          free(entry);
        
        break;
    }
    // big-arr
    case 1:
    {
          long file_offset = 255;
          long len = 255;
          int _len_entry0 = 65025;
          struct btrfs_ordered_extent * entry = (struct btrfs_ordered_extent *) malloc(_len_entry0*sizeof(struct btrfs_ordered_extent));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].file_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = range_overlaps(entry,file_offset,len);
          printf("%d\n", benchRet); 
          free(entry);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long file_offset = 10;
          long len = 10;
          int _len_entry0 = 100;
          struct btrfs_ordered_extent * entry = (struct btrfs_ordered_extent *) malloc(_len_entry0*sizeof(struct btrfs_ordered_extent));
          for(int _i0 = 0; _i0 < _len_entry0; _i0++) {
            entry[_i0].file_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        entry[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = range_overlaps(entry,file_offset,len);
          printf("%d\n", benchRet); 
          free(entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
