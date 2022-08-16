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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct wt_status_change_data {scalar_t__ worktree_status; scalar_t__ dirty_submodule; } ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct wt_status {TYPE_2__ change; } ;
struct TYPE_3__ {struct wt_status_change_data* util; } ;

/* Variables and functions */
 scalar_t__ DIFF_STATUS_DELETED ; 
 scalar_t__ DIFF_STATUS_UNMERGED ; 

__attribute__((used)) static int wt_status_check_worktree_changes(struct wt_status *s,
					     int *dirty_submodules)
{
	int i;
	int changes = 0;

	*dirty_submodules = 0;

	for (i = 0; i < s->change.nr; i++) {
		struct wt_status_change_data *d;
		d = s->change.items[i].util;
		if (!d->worktree_status ||
		    d->worktree_status == DIFF_STATUS_UNMERGED)
			continue;
		if (!changes)
			changes = 1;
		if (d->dirty_submodule)
			*dirty_submodules = 1;
		if (d->worktree_status == DIFF_STATUS_DELETED)
			changes = -1;
	}
	return changes;
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
          int _len_s0 = 1;
          struct wt_status * s = (struct wt_status *) malloc(_len_s0*sizeof(struct wt_status));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].change.nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__change_items0 = 1;
          s[_i0].change.items = (struct TYPE_3__ *) malloc(_len_s__i0__change_items0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_s__i0__change_items0; _j0++) {
              int _len_s__i0__change_items_util0 = 1;
          s[_i0].change.items->util = (struct wt_status_change_data *) malloc(_len_s__i0__change_items_util0*sizeof(struct wt_status_change_data));
          for(int _j0 = 0; _j0 < _len_s__i0__change_items_util0; _j0++) {
            s[_i0].change.items->util->worktree_status = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].change.items->util->dirty_submodule = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dirty_submodules0 = 1;
          int * dirty_submodules = (int *) malloc(_len_dirty_submodules0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dirty_submodules0; _i0++) {
            dirty_submodules[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wt_status_check_worktree_changes(s,dirty_submodules);
          printf("%d\n", benchRet); 
          free(s);
          free(dirty_submodules);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
