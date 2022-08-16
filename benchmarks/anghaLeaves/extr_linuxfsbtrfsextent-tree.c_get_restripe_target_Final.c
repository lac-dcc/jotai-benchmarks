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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct btrfs_fs_info {struct btrfs_balance_control* balance_ctl; } ;
struct TYPE_6__ {int flags; int target; } ;
struct TYPE_5__ {int flags; int target; } ;
struct TYPE_4__ {int flags; int target; } ;
struct btrfs_balance_control {TYPE_3__ meta; TYPE_2__ sys; TYPE_1__ data; } ;

/* Variables and functions */
 int BTRFS_BALANCE_ARGS_CONVERT ; 
 int BTRFS_BLOCK_GROUP_DATA ; 
 int BTRFS_BLOCK_GROUP_METADATA ; 
 int BTRFS_BLOCK_GROUP_SYSTEM ; 

__attribute__((used)) static u64 get_restripe_target(struct btrfs_fs_info *fs_info, u64 flags)
{
	struct btrfs_balance_control *bctl = fs_info->balance_ctl;
	u64 target = 0;

	if (!bctl)
		return 0;

	if (flags & BTRFS_BLOCK_GROUP_DATA &&
	    bctl->data.flags & BTRFS_BALANCE_ARGS_CONVERT) {
		target = BTRFS_BLOCK_GROUP_DATA | bctl->data.target;
	} else if (flags & BTRFS_BLOCK_GROUP_SYSTEM &&
		   bctl->sys.flags & BTRFS_BALANCE_ARGS_CONVERT) {
		target = BTRFS_BLOCK_GROUP_SYSTEM | bctl->sys.target;
	} else if (flags & BTRFS_BLOCK_GROUP_METADATA &&
		   bctl->meta.flags & BTRFS_BALANCE_ARGS_CONVERT) {
		target = BTRFS_BLOCK_GROUP_METADATA | bctl->meta.target;
	}

	return target;
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
          int flags = 100;
          int _len_fs_info0 = 1;
          struct btrfs_fs_info * fs_info = (struct btrfs_fs_info *) malloc(_len_fs_info0*sizeof(struct btrfs_fs_info));
          for(int _i0 = 0; _i0 < _len_fs_info0; _i0++) {
              int _len_fs_info__i0__balance_ctl0 = 1;
          fs_info[_i0].balance_ctl = (struct btrfs_balance_control *) malloc(_len_fs_info__i0__balance_ctl0*sizeof(struct btrfs_balance_control));
          for(int _j0 = 0; _j0 < _len_fs_info__i0__balance_ctl0; _j0++) {
            fs_info[_i0].balance_ctl->meta.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fs_info[_i0].balance_ctl->meta.target = ((-2 * (next_i()%2)) + 1) * next_i();
        fs_info[_i0].balance_ctl->sys.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fs_info[_i0].balance_ctl->sys.target = ((-2 * (next_i()%2)) + 1) * next_i();
        fs_info[_i0].balance_ctl->data.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        fs_info[_i0].balance_ctl->data.target = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_restripe_target(fs_info,flags);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fs_info0; _aux++) {
          free(fs_info[_aux].balance_ctl);
          }
          free(fs_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
