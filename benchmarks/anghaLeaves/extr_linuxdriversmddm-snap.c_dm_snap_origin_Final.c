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
struct dm_snapshot {struct dm_dev* origin; } ;
struct dm_dev {int dummy; } ;

/* Variables and functions */

struct dm_dev *dm_snap_origin(struct dm_snapshot *s)
{
	return s->origin;
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
          struct dm_snapshot * s = (struct dm_snapshot *) malloc(_len_s0*sizeof(struct dm_snapshot));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__origin0 = 1;
          s[_i0].origin = (struct dm_dev *) malloc(_len_s__i0__origin0*sizeof(struct dm_dev));
          for(int _j0 = 0; _j0 < _len_s__i0__origin0; _j0++) {
            s[_i0].origin->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct dm_dev * benchRet = dm_snap_origin(s);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].origin);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
