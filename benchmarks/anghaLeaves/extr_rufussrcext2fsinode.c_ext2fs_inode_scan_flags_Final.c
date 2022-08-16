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
typedef  TYPE_1__* ext2_inode_scan ;
struct TYPE_3__ {scalar_t__ magic; int scan_flags; } ;

/* Variables and functions */
 scalar_t__ EXT2_ET_MAGIC_INODE_SCAN ; 

int ext2fs_inode_scan_flags(ext2_inode_scan scan, int set_flags,
			    int clear_flags)
{
	int	old_flags;

	if (!scan || (scan->magic != EXT2_ET_MAGIC_INODE_SCAN))
		return 0;

	old_flags = scan->scan_flags;
	scan->scan_flags &= ~clear_flags;
	scan->scan_flags |= set_flags;
	return old_flags;
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
          int set_flags = 100;
          int clear_flags = 100;
          int _len_scan0 = 1;
          struct TYPE_3__ * scan = (struct TYPE_3__ *) malloc(_len_scan0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_scan0; _i0++) {
            scan[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
        scan[_i0].scan_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext2fs_inode_scan_flags(scan,set_flags,clear_flags);
          printf("%d\n", benchRet); 
          free(scan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
