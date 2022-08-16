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
struct tracefs_mount_opts {int /*<<< orphan*/  gid; int /*<<< orphan*/  uid; int /*<<< orphan*/  mode; } ;
struct tracefs_fs_info {struct tracefs_mount_opts mount_opts; } ;
struct super_block {TYPE_1__* s_root; struct tracefs_fs_info* s_fs_info; } ;
struct inode {int /*<<< orphan*/  i_gid; int /*<<< orphan*/  i_uid; int /*<<< orphan*/  i_mode; } ;
struct TYPE_2__ {struct inode* d_inode; } ;

/* Variables and functions */
 int /*<<< orphan*/  S_IALLUGO ; 

__attribute__((used)) static int tracefs_apply_options(struct super_block *sb)
{
	struct tracefs_fs_info *fsi = sb->s_fs_info;
	struct inode *inode = sb->s_root->d_inode;
	struct tracefs_mount_opts *opts = &fsi->mount_opts;

	inode->i_mode &= ~S_IALLUGO;
	inode->i_mode |= opts->mode;

	inode->i_uid = opts->uid;
	inode->i_gid = opts->gid;

	return 0;
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
          int _len_sb0 = 1;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
              int _len_sb__i0__s_root0 = 1;
          sb[_i0].s_root = (struct TYPE_2__ *) malloc(_len_sb__i0__s_root0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sb__i0__s_root0; _j0++) {
              int _len_sb__i0__s_root_d_inode0 = 1;
          sb[_i0].s_root->d_inode = (struct inode *) malloc(_len_sb__i0__s_root_d_inode0*sizeof(struct inode));
          for(int _j0 = 0; _j0 < _len_sb__i0__s_root_d_inode0; _j0++) {
            sb[_i0].s_root->d_inode->i_gid = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].s_root->d_inode->i_uid = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].s_root->d_inode->i_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sb__i0__s_fs_info0 = 1;
          sb[_i0].s_fs_info = (struct tracefs_fs_info *) malloc(_len_sb__i0__s_fs_info0*sizeof(struct tracefs_fs_info));
          for(int _j0 = 0; _j0 < _len_sb__i0__s_fs_info0; _j0++) {
            sb[_i0].s_fs_info->mount_opts.gid = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].s_fs_info->mount_opts.uid = ((-2 * (next_i()%2)) + 1) * next_i();
        sb[_i0].s_fs_info->mount_opts.mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tracefs_apply_options(sb);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].s_root);
          }
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].s_fs_info);
          }
          free(sb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
