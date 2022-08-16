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
struct ext2_super_block {scalar_t__ s_rev_level; int /*<<< orphan*/  s_inode_size; int /*<<< orphan*/  s_first_ino; } ;
typedef  TYPE_1__* ext2_filsys ;
struct TYPE_3__ {struct ext2_super_block* super; } ;

/* Variables and functions */
 scalar_t__ EXT2_DYNAMIC_REV ; 
 int /*<<< orphan*/  EXT2_GOOD_OLD_FIRST_INO ; 
 int /*<<< orphan*/  EXT2_GOOD_OLD_INODE_SIZE ; 
 scalar_t__ EXT2_GOOD_OLD_REV ; 

void ext2fs_update_dynamic_rev(ext2_filsys fs)
{
	struct ext2_super_block *sb = fs->super;

	if (sb->s_rev_level > EXT2_GOOD_OLD_REV)
		return;

	sb->s_rev_level = EXT2_DYNAMIC_REV;
	sb->s_first_ino = EXT2_GOOD_OLD_FIRST_INO;
	sb->s_inode_size = EXT2_GOOD_OLD_INODE_SIZE;
	/* s_uuid is handled by e2fsck already */
	/* other fields should be left alone */
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
          int _len_fs0 = 1;
          struct TYPE_3__ * fs = (struct TYPE_3__ *) malloc(_len_fs0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
              int _len_fs__i0__super0 = 1;
          fs[_i0].super = (struct ext2_super_block *) malloc(_len_fs__i0__super0*sizeof(struct ext2_super_block));
          for(int _j0 = 0; _j0 < _len_fs__i0__super0; _j0++) {
            fs[_i0].super->s_rev_level = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].super->s_inode_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].super->s_first_ino = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ext2fs_update_dynamic_rev(fs);
          for(int _aux = 0; _aux < _len_fs0; _aux++) {
          free(fs[_aux].super);
          }
          free(fs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
