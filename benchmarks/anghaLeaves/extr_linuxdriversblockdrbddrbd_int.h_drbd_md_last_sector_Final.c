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
struct TYPE_2__ {int meta_dev_idx; scalar_t__ md_size_sect; scalar_t__ md_offset; } ;
struct drbd_backing_dev {TYPE_1__ md; } ;
typedef  int /*<<< orphan*/  sector_t ;

/* Variables and functions */
#define  DRBD_MD_INDEX_FLEX_EXT 130 
#define  DRBD_MD_INDEX_FLEX_INT 129 
#define  DRBD_MD_INDEX_INTERNAL 128 
 scalar_t__ MD_4kB_SECT ; 

__attribute__((used)) static inline sector_t drbd_md_last_sector(struct drbd_backing_dev *bdev)
{
	switch (bdev->md.meta_dev_idx) {
	case DRBD_MD_INDEX_INTERNAL:
	case DRBD_MD_INDEX_FLEX_INT:
		return bdev->md.md_offset + MD_4kB_SECT -1;
	case DRBD_MD_INDEX_FLEX_EXT:
	default:
		return bdev->md.md_offset + bdev->md.md_size_sect -1;
	}
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
          int _len_bdev0 = 1;
          struct drbd_backing_dev * bdev = (struct drbd_backing_dev *) malloc(_len_bdev0*sizeof(struct drbd_backing_dev));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
            bdev[_i0].md.meta_dev_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        bdev[_i0].md.md_size_sect = ((-2 * (next_i()%2)) + 1) * next_i();
        bdev[_i0].md.md_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = drbd_md_last_sector(bdev);
          printf("%d\n", benchRet); 
          free(bdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
