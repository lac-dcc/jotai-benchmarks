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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_2__* ext2_filsys ;
typedef  int dgrp_t ;
typedef  int blk64_t ;
struct TYPE_5__ {TYPE_1__* super; } ;
struct TYPE_4__ {int s_first_data_block; int s_blocks_per_group; } ;

/* Variables and functions */

dgrp_t ext2fs_group_of_blk2(ext2_filsys fs, blk64_t blk)
{
	return (blk - fs->super->s_first_data_block) /
		fs->super->s_blocks_per_group;
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
          int blk = 100;
          int _len_fs0 = 1;
          struct TYPE_5__ * fs = (struct TYPE_5__ *) malloc(_len_fs0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_fs0; _i0++) {
              int _len_fs__i0__super0 = 1;
          fs[_i0].super = (struct TYPE_4__ *) malloc(_len_fs__i0__super0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_fs__i0__super0; _j0++) {
            fs[_i0].super->s_first_data_block = ((-2 * (next_i()%2)) + 1) * next_i();
        fs[_i0].super->s_blocks_per_group = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ext2fs_group_of_blk2(fs,blk);
          printf("%d\n", benchRet); 
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
