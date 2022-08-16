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
struct untracked_cache_dir {int dirs_nr; TYPE_1__** dirs; scalar_t__ untracked_nr; scalar_t__ valid; } ;
struct untracked_cache {int /*<<< orphan*/  dir_invalidated; } ;
struct TYPE_2__ {scalar_t__ recurse; } ;

/* Variables and functions */

__attribute__((used)) static void invalidate_directory(struct untracked_cache *uc,
				 struct untracked_cache_dir *dir)
{
	int i;

	/*
	 * Invalidation increment here is just roughly correct. If
	 * untracked_nr or any of dirs[].recurse is non-zero, we
	 * should increment dir_invalidated too. But that's more
	 * expensive to do.
	 */
	if (dir->valid)
		uc->dir_invalidated++;

	dir->valid = 0;
	dir->untracked_nr = 0;
	for (i = 0; i < dir->dirs_nr; i++)
		dir->dirs[i]->recurse = 0;
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
          int _len_uc0 = 1;
          struct untracked_cache * uc = (struct untracked_cache *) malloc(_len_uc0*sizeof(struct untracked_cache));
          for(int _i0 = 0; _i0 < _len_uc0; _i0++) {
            uc[_i0].dir_invalidated = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dir0 = 1;
          struct untracked_cache_dir * dir = (struct untracked_cache_dir *) malloc(_len_dir0*sizeof(struct untracked_cache_dir));
          for(int _i0 = 0; _i0 < _len_dir0; _i0++) {
            dir[_i0].dirs_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dir__i0__dirs0 = 1;
          dir[_i0].dirs = (struct TYPE_2__ **) malloc(_len_dir__i0__dirs0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_dir__i0__dirs0; _j0++) {
            int _len_dir__i0__dirs1 = 1;
            dir[_i0].dirs[_j0] = (struct TYPE_2__ *) malloc(_len_dir__i0__dirs1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_dir__i0__dirs1; _j1++) {
              dir[_i0].dirs[_j0]->recurse = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        dir[_i0].untracked_nr = ((-2 * (next_i()%2)) + 1) * next_i();
        dir[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          invalidate_directory(uc,dir);
          free(uc);
          for(int _aux = 0; _aux < _len_dir0; _aux++) {
          free(*(dir[_aux].dirs));
        free(dir[_aux].dirs);
          }
          free(dir);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
