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
       1            big-arr-10x\n\
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
typedef  scalar_t__ u32 ;
struct uid_gid_map {unsigned int nr_extents; struct uid_gid_extent* forward; struct uid_gid_extent* extent; } ;
struct uid_gid_extent {scalar_t__ first; scalar_t__ lower_first; scalar_t__ count; } ;

/* Variables and functions */
 unsigned int UID_GID_MAP_MAX_BASE_EXTENTS ; 

__attribute__((used)) static bool mappings_overlap(struct uid_gid_map *new_map,
			     struct uid_gid_extent *extent)
{
	u32 upper_first, lower_first, upper_last, lower_last;
	unsigned idx;

	upper_first = extent->first;
	lower_first = extent->lower_first;
	upper_last = upper_first + extent->count - 1;
	lower_last = lower_first + extent->count - 1;

	for (idx = 0; idx < new_map->nr_extents; idx++) {
		u32 prev_upper_first, prev_lower_first;
		u32 prev_upper_last, prev_lower_last;
		struct uid_gid_extent *prev;

		if (new_map->nr_extents <= UID_GID_MAP_MAX_BASE_EXTENTS)
			prev = &new_map->extent[idx];
		else
			prev = &new_map->forward[idx];

		prev_upper_first = prev->first;
		prev_lower_first = prev->lower_first;
		prev_upper_last = prev_upper_first + prev->count - 1;
		prev_lower_last = prev_lower_first + prev->count - 1;

		/* Does the upper range intersect a previous extent? */
		if ((prev_upper_first <= upper_last) &&
		    (prev_upper_last >= upper_first))
			return true;

		/* Does the lower range intersect a previous extent? */
		if ((prev_lower_first <= lower_last) &&
		    (prev_lower_last >= lower_first))
			return true;
	}
	return false;
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
          int _len_new_map0 = 65025;
          struct uid_gid_map * new_map = (struct uid_gid_map *) malloc(_len_new_map0*sizeof(struct uid_gid_map));
          for(int _i0 = 0; _i0 < _len_new_map0; _i0++) {
            new_map[_i0].nr_extents = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_new_map__i0__forward0 = 1;
          new_map[_i0].forward = (struct uid_gid_extent *) malloc(_len_new_map__i0__forward0*sizeof(struct uid_gid_extent));
          for(int _j0 = 0; _j0 < _len_new_map__i0__forward0; _j0++) {
            new_map[_i0].forward->first = ((-2 * (next_i()%2)) + 1) * next_i();
        new_map[_i0].forward->lower_first = ((-2 * (next_i()%2)) + 1) * next_i();
        new_map[_i0].forward->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_map__i0__extent0 = 1;
          new_map[_i0].extent = (struct uid_gid_extent *) malloc(_len_new_map__i0__extent0*sizeof(struct uid_gid_extent));
          for(int _j0 = 0; _j0 < _len_new_map__i0__extent0; _j0++) {
            new_map[_i0].extent->first = ((-2 * (next_i()%2)) + 1) * next_i();
        new_map[_i0].extent->lower_first = ((-2 * (next_i()%2)) + 1) * next_i();
        new_map[_i0].extent->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_extent0 = 65025;
          struct uid_gid_extent * extent = (struct uid_gid_extent *) malloc(_len_extent0*sizeof(struct uid_gid_extent));
          for(int _i0 = 0; _i0 < _len_extent0; _i0++) {
            extent[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
        extent[_i0].lower_first = ((-2 * (next_i()%2)) + 1) * next_i();
        extent[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mappings_overlap(new_map,extent);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_new_map0; _aux++) {
          free(new_map[_aux].forward);
          }
          for(int _aux = 0; _aux < _len_new_map0; _aux++) {
          free(new_map[_aux].extent);
          }
          free(new_map);
          free(extent);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_new_map0 = 100;
          struct uid_gid_map * new_map = (struct uid_gid_map *) malloc(_len_new_map0*sizeof(struct uid_gid_map));
          for(int _i0 = 0; _i0 < _len_new_map0; _i0++) {
            new_map[_i0].nr_extents = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_new_map__i0__forward0 = 1;
          new_map[_i0].forward = (struct uid_gid_extent *) malloc(_len_new_map__i0__forward0*sizeof(struct uid_gid_extent));
          for(int _j0 = 0; _j0 < _len_new_map__i0__forward0; _j0++) {
            new_map[_i0].forward->first = ((-2 * (next_i()%2)) + 1) * next_i();
        new_map[_i0].forward->lower_first = ((-2 * (next_i()%2)) + 1) * next_i();
        new_map[_i0].forward->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_new_map__i0__extent0 = 1;
          new_map[_i0].extent = (struct uid_gid_extent *) malloc(_len_new_map__i0__extent0*sizeof(struct uid_gid_extent));
          for(int _j0 = 0; _j0 < _len_new_map__i0__extent0; _j0++) {
            new_map[_i0].extent->first = ((-2 * (next_i()%2)) + 1) * next_i();
        new_map[_i0].extent->lower_first = ((-2 * (next_i()%2)) + 1) * next_i();
        new_map[_i0].extent->count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_extent0 = 100;
          struct uid_gid_extent * extent = (struct uid_gid_extent *) malloc(_len_extent0*sizeof(struct uid_gid_extent));
          for(int _i0 = 0; _i0 < _len_extent0; _i0++) {
            extent[_i0].first = ((-2 * (next_i()%2)) + 1) * next_i();
        extent[_i0].lower_first = ((-2 * (next_i()%2)) + 1) * next_i();
        extent[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mappings_overlap(new_map,extent);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_new_map0; _aux++) {
          free(new_map[_aux].forward);
          }
          for(int _aux = 0; _aux < _len_new_map0; _aux++) {
          free(new_map[_aux].extent);
          }
          free(new_map);
          free(extent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
