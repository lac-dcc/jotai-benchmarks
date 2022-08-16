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
struct untracked_cache_dir {scalar_t__ untracked_nr; scalar_t__ valid; } ;
struct untracked_cache {int /*<<< orphan*/  dir_invalidated; } ;

/* Variables and functions */

__attribute__((used)) static void invalidate_one_directory(struct untracked_cache *uc,
				     struct untracked_cache_dir *ucd)
{
	uc->dir_invalidated++;
	ucd->valid = 0;
	ucd->untracked_nr = 0;
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
          int _len_ucd0 = 1;
          struct untracked_cache_dir * ucd = (struct untracked_cache_dir *) malloc(_len_ucd0*sizeof(struct untracked_cache_dir));
          for(int _i0 = 0; _i0 < _len_ucd0; _i0++) {
            ucd[_i0].untracked_nr = ((-2 * (next_i()%2)) + 1) * next_i();
        ucd[_i0].valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          invalidate_one_directory(uc,ucd);
          free(uc);
          free(ucd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
