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
struct vfsioattr {int /*<<< orphan*/  io_max_swappin_available; int /*<<< orphan*/  io_flags; int /*<<< orphan*/  io_devblocksize; int /*<<< orphan*/  io_maxsegwritesize; int /*<<< orphan*/  io_maxsegreadsize; int /*<<< orphan*/  io_segwritecnt; int /*<<< orphan*/  io_segreadcnt; int /*<<< orphan*/  io_maxwritecnt; int /*<<< orphan*/  io_maxreadcnt; } ;
typedef  TYPE_1__* mount_t ;
struct TYPE_3__ {int /*<<< orphan*/  mnt_max_swappin_available; int /*<<< orphan*/  mnt_ioflags; int /*<<< orphan*/  mnt_devblocksize; int /*<<< orphan*/  mnt_maxsegwritesize; int /*<<< orphan*/  mnt_maxsegreadsize; int /*<<< orphan*/  mnt_segwritecnt; int /*<<< orphan*/  mnt_segreadcnt; int /*<<< orphan*/  mnt_maxwritecnt; int /*<<< orphan*/  mnt_maxreadcnt; } ;

/* Variables and functions */

void 
vfs_setioattr(mount_t mp, struct vfsioattr * ioattrp)
{
        if (mp == NULL)
	        return;
        mp->mnt_maxreadcnt  = ioattrp->io_maxreadcnt;
	mp->mnt_maxwritecnt = ioattrp->io_maxwritecnt;
	mp->mnt_segreadcnt  = ioattrp->io_segreadcnt;
	mp->mnt_segwritecnt = ioattrp->io_segwritecnt;
	mp->mnt_maxsegreadsize = ioattrp->io_maxsegreadsize;
	mp->mnt_maxsegwritesize = ioattrp->io_maxsegwritesize;
	mp->mnt_devblocksize = ioattrp->io_devblocksize;
	mp->mnt_ioflags = ioattrp->io_flags;
	mp->mnt_max_swappin_available = ioattrp->io_max_swappin_available;
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
          int _len_mp0 = 1;
          struct TYPE_3__ * mp = (struct TYPE_3__ *) malloc(_len_mp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_mp0; _i0++) {
            mp[_i0].mnt_max_swappin_available = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_ioflags = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_devblocksize = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_maxsegwritesize = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_maxsegreadsize = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_maxwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_maxreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ioattrp0 = 1;
          struct vfsioattr * ioattrp = (struct vfsioattr *) malloc(_len_ioattrp0*sizeof(struct vfsioattr));
          for(int _i0 = 0; _i0 < _len_ioattrp0; _i0++) {
            ioattrp[_i0].io_max_swappin_available = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_devblocksize = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_maxsegwritesize = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_maxsegreadsize = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_maxwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ioattrp[_i0].io_maxreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vfs_setioattr(mp,ioattrp);
          free(mp);
          free(ioattrp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
