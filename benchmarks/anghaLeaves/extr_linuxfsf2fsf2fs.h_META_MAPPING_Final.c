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
struct f2fs_sb_info {TYPE_1__* meta_inode; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {struct address_space* i_mapping; } ;

/* Variables and functions */

__attribute__((used)) static inline struct address_space *META_MAPPING(struct f2fs_sb_info *sbi)
{
	return sbi->meta_inode->i_mapping;
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
          int _len_sbi0 = 1;
          struct f2fs_sb_info * sbi = (struct f2fs_sb_info *) malloc(_len_sbi0*sizeof(struct f2fs_sb_info));
          for(int _i0 = 0; _i0 < _len_sbi0; _i0++) {
              int _len_sbi__i0__meta_inode0 = 1;
          sbi[_i0].meta_inode = (struct TYPE_2__ *) malloc(_len_sbi__i0__meta_inode0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_sbi__i0__meta_inode0; _j0++) {
              int _len_sbi__i0__meta_inode_i_mapping0 = 1;
          sbi[_i0].meta_inode->i_mapping = (struct address_space *) malloc(_len_sbi__i0__meta_inode_i_mapping0*sizeof(struct address_space));
          for(int _j0 = 0; _j0 < _len_sbi__i0__meta_inode_i_mapping0; _j0++) {
            sbi[_i0].meta_inode->i_mapping->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct address_space * benchRet = META_MAPPING(sbi);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_sbi0; _aux++) {
          free(sbi[_aux].meta_inode);
          }
          free(sbi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
