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
typedef  TYPE_1__* ext2_u32_list ;
typedef  TYPE_2__* ext2_u32_iterate ;
typedef  int /*<<< orphan*/  __u32 ;
struct TYPE_5__ {scalar_t__ magic; scalar_t__ ptr; TYPE_1__* bb; } ;
struct TYPE_4__ {scalar_t__ magic; scalar_t__ num; int /*<<< orphan*/ * list; } ;

/* Variables and functions */
 scalar_t__ EXT2_ET_MAGIC_BADBLOCKS_ITERATE ; 
 scalar_t__ EXT2_ET_MAGIC_BADBLOCKS_LIST ; 

int ext2fs_u32_list_iterate(ext2_u32_iterate iter, __u32 *blk)
{
	ext2_u32_list	bb;

	if (iter->magic != EXT2_ET_MAGIC_BADBLOCKS_ITERATE)
		return 0;

	bb = iter->bb;

	if (bb->magic != EXT2_ET_MAGIC_BADBLOCKS_LIST)
		return 0;

	if (iter->ptr < bb->num) {
		*blk = bb->list[iter->ptr++];
		return 1;
	}
	*blk = 0;
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
          int _len_iter0 = 1;
          struct TYPE_5__ * iter = (struct TYPE_5__ *) malloc(_len_iter0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__bb0 = 1;
          iter[_i0].bb = (struct TYPE_4__ *) malloc(_len_iter__i0__bb0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_iter__i0__bb0; _j0++) {
            iter[_i0].bb->magic = ((-2 * (next_i()%2)) + 1) * next_i();
        iter[_i0].bb->num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__bb_list0 = 1;
          iter[_i0].bb->list = (int *) malloc(_len_iter__i0__bb_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iter__i0__bb_list0; _j0++) {
            iter[_i0].bb->list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_blk0 = 1;
          int * blk = (int *) malloc(_len_blk0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blk0; _i0++) {
            blk[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ext2fs_u32_list_iterate(iter,blk);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].bb);
          }
          free(iter);
          free(blk);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
