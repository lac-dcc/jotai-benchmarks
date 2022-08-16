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
struct saved_mount_fields {int /*<<< orphan*/  mnt_ioscale; int /*<<< orphan*/  mnt_ioqueue_depth; int /*<<< orphan*/  mnt_segwritecnt; int /*<<< orphan*/  mnt_segreadcnt; int /*<<< orphan*/  mnt_maxwritecnt; int /*<<< orphan*/  mnt_maxreadcnt; } ;
typedef  TYPE_1__* mount_t ;
struct TYPE_3__ {int /*<<< orphan*/  mnt_ioscale; int /*<<< orphan*/  mnt_ioqueue_depth; int /*<<< orphan*/  mnt_segwritecnt; int /*<<< orphan*/  mnt_segreadcnt; int /*<<< orphan*/  mnt_maxwritecnt; int /*<<< orphan*/  mnt_maxreadcnt; } ;

/* Variables and functions */

__attribute__((used)) static inline void
disk_conditioner_restore_mount_fields(mount_t mp, struct saved_mount_fields *mnt_fields) {
	mp->mnt_maxreadcnt = mnt_fields->mnt_maxreadcnt;
	mp->mnt_maxwritecnt = mnt_fields->mnt_maxwritecnt;
	mp->mnt_segreadcnt = mnt_fields->mnt_segreadcnt;
	mp->mnt_segwritecnt = mnt_fields->mnt_segwritecnt;
	mp->mnt_ioqueue_depth = mnt_fields->mnt_ioqueue_depth;
	mp->mnt_ioscale = mnt_fields->mnt_ioscale;
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
            mp[_i0].mnt_ioscale = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_ioqueue_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_maxwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mp[_i0].mnt_maxreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mnt_fields0 = 1;
          struct saved_mount_fields * mnt_fields = (struct saved_mount_fields *) malloc(_len_mnt_fields0*sizeof(struct saved_mount_fields));
          for(int _i0 = 0; _i0 < _len_mnt_fields0; _i0++) {
            mnt_fields[_i0].mnt_ioscale = ((-2 * (next_i()%2)) + 1) * next_i();
        mnt_fields[_i0].mnt_ioqueue_depth = ((-2 * (next_i()%2)) + 1) * next_i();
        mnt_fields[_i0].mnt_segwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mnt_fields[_i0].mnt_segreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mnt_fields[_i0].mnt_maxwritecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        mnt_fields[_i0].mnt_maxreadcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          disk_conditioner_restore_mount_fields(mp,mnt_fields);
          free(mp);
          free(mnt_fields);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
