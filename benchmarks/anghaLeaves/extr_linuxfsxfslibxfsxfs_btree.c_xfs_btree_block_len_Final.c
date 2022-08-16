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
       1            big-arr-10x\n\
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
struct xfs_btree_cur {int bc_flags; } ;

/* Variables and functions */
 int XFS_BTREE_CRC_BLOCKS ; 
 size_t XFS_BTREE_LBLOCK_CRC_LEN ; 
 size_t XFS_BTREE_LBLOCK_LEN ; 
 int XFS_BTREE_LONG_PTRS ; 
 size_t XFS_BTREE_SBLOCK_CRC_LEN ; 
 size_t XFS_BTREE_SBLOCK_LEN ; 

__attribute__((used)) static inline size_t xfs_btree_block_len(struct xfs_btree_cur *cur)
{
	if (cur->bc_flags & XFS_BTREE_LONG_PTRS) {
		if (cur->bc_flags & XFS_BTREE_CRC_BLOCKS)
			return XFS_BTREE_LBLOCK_CRC_LEN;
		return XFS_BTREE_LBLOCK_LEN;
	}
	if (cur->bc_flags & XFS_BTREE_CRC_BLOCKS)
		return XFS_BTREE_SBLOCK_CRC_LEN;
	return XFS_BTREE_SBLOCK_LEN;
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
          int _len_cur0 = 1;
          struct xfs_btree_cur * cur = (struct xfs_btree_cur *) malloc(_len_cur0*sizeof(struct xfs_btree_cur));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0].bc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xfs_btree_block_len(cur);
          printf("%lu\n", benchRet); 
          free(cur);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_cur0 = 100;
          struct xfs_btree_cur * cur = (struct xfs_btree_cur *) malloc(_len_cur0*sizeof(struct xfs_btree_cur));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur[_i0].bc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xfs_btree_block_len(cur);
          printf("%lu\n", benchRet); 
          free(cur);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
