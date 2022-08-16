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
struct ocfs2_caching_info {scalar_t__ ci_last_trans; scalar_t__ ci_created_trans; scalar_t__ ci_num_cached; int /*<<< orphan*/  ci_flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  OCFS2_CACHE_FL_INLINE ; 

__attribute__((used)) static void ocfs2_metadata_cache_reset(struct ocfs2_caching_info *ci,
				       int clear)
{
	ci->ci_flags |= OCFS2_CACHE_FL_INLINE;
	ci->ci_num_cached = 0;

	if (clear) {
		ci->ci_created_trans = 0;
		ci->ci_last_trans = 0;
	}
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
          int clear = 100;
          int _len_ci0 = 1;
          struct ocfs2_caching_info * ci = (struct ocfs2_caching_info *) malloc(_len_ci0*sizeof(struct ocfs2_caching_info));
          for(int _i0 = 0; _i0 < _len_ci0; _i0++) {
            ci[_i0].ci_last_trans = ((-2 * (next_i()%2)) + 1) * next_i();
        ci[_i0].ci_created_trans = ((-2 * (next_i()%2)) + 1) * next_i();
        ci[_i0].ci_num_cached = ((-2 * (next_i()%2)) + 1) * next_i();
        ci[_i0].ci_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ocfs2_metadata_cache_reset(ci,clear);
          free(ci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
