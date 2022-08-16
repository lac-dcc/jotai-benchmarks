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
struct btrfs_fs_info {TYPE_1__* fs_devices; } ;
struct TYPE_2__ {int rw_devices; } ;

/* Variables and functions */
 int BTRFS_BLOCK_GROUP_RAID0 ; 
 int BTRFS_BLOCK_GROUP_RAID1 ; 
 int BTRFS_BLOCK_GROUP_RAID10 ; 
 int BTRFS_BLOCK_GROUP_RAID5 ; 
 int BTRFS_BLOCK_GROUP_RAID6 ; 

__attribute__((used)) static u64 get_profile_num_devs(struct btrfs_fs_info *fs_info, u64 type)
{
	u64 num_dev;

	if (type & (BTRFS_BLOCK_GROUP_RAID10 |
		    BTRFS_BLOCK_GROUP_RAID0 |
		    BTRFS_BLOCK_GROUP_RAID5 |
		    BTRFS_BLOCK_GROUP_RAID6))
		num_dev = fs_info->fs_devices->rw_devices;
	else if (type & BTRFS_BLOCK_GROUP_RAID1)
		num_dev = 2;
	else
		num_dev = 1;	/* DUP or single */

	return num_dev;
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
          int type = 100;
          int _len_fs_info0 = 1;
          struct btrfs_fs_info * fs_info = (struct btrfs_fs_info *) malloc(_len_fs_info0*sizeof(struct btrfs_fs_info));
          for(int _i0 = 0; _i0 < _len_fs_info0; _i0++) {
              int _len_fs_info__i0__fs_devices0 = 1;
          fs_info[_i0].fs_devices = (struct TYPE_2__ *) malloc(_len_fs_info__i0__fs_devices0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fs_info__i0__fs_devices0; _j0++) {
            fs_info[_i0].fs_devices->rw_devices = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_profile_num_devs(fs_info,type);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fs_info0; _aux++) {
          free(fs_info[_aux].fs_devices);
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
