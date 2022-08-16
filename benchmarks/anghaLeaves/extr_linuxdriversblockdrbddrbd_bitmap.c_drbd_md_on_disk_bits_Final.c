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
typedef  int u64 ;
struct TYPE_2__ {int al_offset; int md_size_sect; int bm_offset; } ;
struct drbd_backing_dev {TYPE_1__ md; } ;

/* Variables and functions */

__attribute__((used)) static u64 drbd_md_on_disk_bits(struct drbd_backing_dev *ldev)
{
	u64 bitmap_sectors;
	if (ldev->md.al_offset == 8)
		bitmap_sectors = ldev->md.md_size_sect - ldev->md.bm_offset;
	else
		bitmap_sectors = ldev->md.al_offset - ldev->md.bm_offset;
	return bitmap_sectors << (9 + 3);
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
          int _len_ldev0 = 1;
          struct drbd_backing_dev * ldev = (struct drbd_backing_dev *) malloc(_len_ldev0*sizeof(struct drbd_backing_dev));
          for(int _i0 = 0; _i0 < _len_ldev0; _i0++) {
            ldev[_i0].md.al_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ldev[_i0].md.md_size_sect = ((-2 * (next_i()%2)) + 1) * next_i();
        ldev[_i0].md.bm_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = drbd_md_on_disk_bits(ldev);
          printf("%d\n", benchRet); 
          free(ldev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
