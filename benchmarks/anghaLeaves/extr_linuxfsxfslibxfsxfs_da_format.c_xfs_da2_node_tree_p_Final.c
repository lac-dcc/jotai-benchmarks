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
struct xfs_da_node_entry {int dummy; } ;
struct xfs_da_intnode {struct xfs_da_node_entry* __btree; } ;

/* Variables and functions */

__attribute__((used)) static struct xfs_da_node_entry *
xfs_da2_node_tree_p(struct xfs_da_intnode *dap)
{
	return dap->__btree;
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
          int _len_dap0 = 1;
          struct xfs_da_intnode * dap = (struct xfs_da_intnode *) malloc(_len_dap0*sizeof(struct xfs_da_intnode));
          for(int _i0 = 0; _i0 < _len_dap0; _i0++) {
              int _len_dap__i0____btree0 = 1;
          dap[_i0].__btree = (struct xfs_da_node_entry *) malloc(_len_dap__i0____btree0*sizeof(struct xfs_da_node_entry));
          for(int _j0 = 0; _j0 < _len_dap__i0____btree0; _j0++) {
            dap[_i0].__btree->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct xfs_da_node_entry * benchRet = xfs_da2_node_tree_p(dap);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_dap0; _aux++) {
          free(dap[_aux].__btree);
          }
          free(dap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
