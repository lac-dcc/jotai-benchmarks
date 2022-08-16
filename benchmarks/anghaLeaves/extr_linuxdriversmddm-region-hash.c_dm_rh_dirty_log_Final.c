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
struct dm_region_hash {struct dm_dirty_log* log; } ;
struct dm_dirty_log {int dummy; } ;

/* Variables and functions */

struct dm_dirty_log *dm_rh_dirty_log(struct dm_region_hash *rh)
{
	return rh->log;
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
          int _len_rh0 = 1;
          struct dm_region_hash * rh = (struct dm_region_hash *) malloc(_len_rh0*sizeof(struct dm_region_hash));
          for(int _i0 = 0; _i0 < _len_rh0; _i0++) {
              int _len_rh__i0__log0 = 1;
          rh[_i0].log = (struct dm_dirty_log *) malloc(_len_rh__i0__log0*sizeof(struct dm_dirty_log));
          for(int _j0 = 0; _j0 < _len_rh__i0__log0; _j0++) {
            rh[_i0].log->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dm_dirty_log * benchRet = dm_rh_dirty_log(rh);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rh0; _aux++) {
          free(rh[_aux].log);
          }
          free(rh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
