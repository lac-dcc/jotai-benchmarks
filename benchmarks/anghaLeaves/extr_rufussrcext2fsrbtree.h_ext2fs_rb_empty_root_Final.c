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
struct rb_root {int /*<<< orphan*/ * rb_node; } ;

/* Variables and functions */

__attribute__((used)) static inline int ext2fs_rb_empty_root(struct rb_root *root)
{
	return root->rb_node == NULL;
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
          int _len_root0 = 1;
          struct rb_root * root = (struct rb_root *) malloc(_len_root0*sizeof(struct rb_root));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
              int _len_root__i0__rb_node0 = 1;
          root[_i0].rb_node = (int *) malloc(_len_root__i0__rb_node0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_root__i0__rb_node0; _j0++) {
            root[_i0].rb_node[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ext2fs_rb_empty_root(root);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_root0; _aux++) {
          free(root[_aux].rb_node);
          }
          free(root);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
