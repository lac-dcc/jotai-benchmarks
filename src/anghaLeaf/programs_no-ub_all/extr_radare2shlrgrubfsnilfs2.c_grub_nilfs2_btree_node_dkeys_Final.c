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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct grub_nilfs2_btree_node {int bn_flags; } ;
typedef  int /*<<< orphan*/  grub_uint64_t ;

/* Variables and functions */
 int NILFS_BTREE_NODE_EXTRA_PAD_SIZE ; 
 int NILFS_BTREE_NODE_ROOT ; 

__attribute__((used)) static inline grub_uint64_t *
grub_nilfs2_btree_node_dkeys (struct grub_nilfs2_btree_node *node)
{
  return (grub_uint64_t *) ((char *) (node + 1) +
			    ((node->bn_flags & NILFS_BTREE_NODE_ROOT) ?
			     0 : NILFS_BTREE_NODE_EXTRA_PAD_SIZE));
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

    // big-arr
    case 0:
    {
          int _len_node0 = 1;
          struct grub_nilfs2_btree_node * node = (struct grub_nilfs2_btree_node *) malloc(_len_node0*sizeof(struct grub_nilfs2_btree_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node->bn_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = grub_nilfs2_btree_node_dkeys(node);
          printf("{{other_type}} %p\n", &benchRet); 
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
