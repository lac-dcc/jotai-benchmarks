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
typedef  int /*<<< orphan*/  u64 ;
struct btrfs_root {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int btrfs_ref_tree_mod(struct btrfs_root *root, u64 bytenr,
				     u64 num_bytes, u64 parent, u64 ref_root,
				     u64 owner, u64 offset, int action)
{
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
          int bytenr = 100;
          int num_bytes = 100;
          int parent = 100;
          int ref_root = 100;
          int owner = 100;
          int offset = 100;
          int action = 100;
          int _len_root0 = 1;
          struct btrfs_root * root = (struct btrfs_root *) malloc(_len_root0*sizeof(struct btrfs_root));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
            root[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = btrfs_ref_tree_mod(root,bytenr,num_bytes,parent,ref_root,owner,offset,action);
          printf("%d\n", benchRet); 
          free(root);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int bytenr = 10;
          int num_bytes = 10;
          int parent = 10;
          int ref_root = 10;
          int owner = 10;
          int offset = 10;
          int action = 10;
          int _len_root0 = 100;
          struct btrfs_root * root = (struct btrfs_root *) malloc(_len_root0*sizeof(struct btrfs_root));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
            root[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = btrfs_ref_tree_mod(root,bytenr,num_bytes,parent,ref_root,owner,offset,action);
          printf("%d\n", benchRet); 
          free(root);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
