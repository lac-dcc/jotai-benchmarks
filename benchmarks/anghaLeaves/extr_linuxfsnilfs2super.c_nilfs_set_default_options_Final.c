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

/* Type definitions */
struct the_nilfs {int ns_mount_opt; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {int dummy; } ;

/* Variables and functions */
 int NILFS_MOUNT_BARRIER ; 
 int NILFS_MOUNT_ERRORS_RO ; 

__attribute__((used)) static inline void
nilfs_set_default_options(struct super_block *sb,
			  struct nilfs_super_block *sbp)
{
	struct the_nilfs *nilfs = sb->s_fs_info;

	nilfs->ns_mount_opt =
		NILFS_MOUNT_ERRORS_RO | NILFS_MOUNT_BARRIER;
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
              int _len_sb__i0__s_fs_info0 = 1;
          sb[_i0].s_fs_info = (struct the_nilfs *) malloc(_len_sb__i0__s_fs_info0*sizeof(struct the_nilfs));
          for(int _j0 = 0; _j0 < _len_sb__i0__s_fs_info0; _j0++) {
            sb[_i0].s_fs_info->ns_mount_opt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_sbp0 = 1;
          struct nilfs_super_block * sbp = (struct nilfs_super_block *) malloc(_len_sbp0*sizeof(struct nilfs_super_block));
          for(int _i0 = 0; _i0 < _len_sbp0; _i0++) {
            sbp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nilfs_set_default_options(sb,sbp);
          for(int _aux = 0; _aux < _len_sb0; _aux++) {
          free(sb[_aux].s_fs_info);
          }
          free(sb);
          free(sbp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
