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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  point; } ;
typedef  TYPE_1__ ccv_mser_node_t ;
struct TYPE_6__ {int reinit; int last_size; int size; int prev_size; int last_mscr_area; int mscr_area; scalar_t__ prev_chi; scalar_t__ chi; scalar_t__ step_now; scalar_t__ rank; int /*<<< orphan*/  max_point; int /*<<< orphan*/  min_point; } ;
typedef  TYPE_2__ ccv_mscr_root_t ;

/* Variables and functions */

__attribute__((used)) static void _ccv_mscr_init_root(ccv_mscr_root_t* root, ccv_mser_node_t* node)
{
	root->reinit = 0x7FFFFFFF;
	root->min_point = root->max_point = node->point;
	root->rank = root->step_now = 0;
	root->chi = root->prev_chi = 0;
	root->last_size = root->size = root->prev_size = 1;
	root->last_mscr_area = root->mscr_area = -1;
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
          struct TYPE_6__ * root = (struct TYPE_6__ *) malloc(_len_root0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_root0; _i0++) {
            root[_i0].reinit = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].last_size = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].prev_size = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].last_mscr_area = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].mscr_area = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].prev_chi = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].chi = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].step_now = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].rank = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].max_point = ((-2 * (next_i()%2)) + 1) * next_i();
        root[_i0].min_point = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node0 = 1;
          struct TYPE_5__ * node = (struct TYPE_5__ *) malloc(_len_node0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].point = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _ccv_mscr_init_root(root,node);
          free(root);
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
