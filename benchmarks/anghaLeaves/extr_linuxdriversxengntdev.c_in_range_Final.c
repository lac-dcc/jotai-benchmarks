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
struct gntdev_grant_map {TYPE_1__* vma; } ;
struct TYPE_2__ {unsigned long vm_start; unsigned long vm_end; } ;

/* Variables and functions */

__attribute__((used)) static bool in_range(struct gntdev_grant_map *map,
			      unsigned long start, unsigned long end)
{
	if (!map->vma)
		return false;
	if (map->vma->vm_start >= end)
		return false;
	if (map->vma->vm_end <= start)
		return false;

	return true;
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
          unsigned long start = 100;
          unsigned long end = 100;
          int _len_map0 = 1;
          struct gntdev_grant_map * map = (struct gntdev_grant_map *) malloc(_len_map0*sizeof(struct gntdev_grant_map));
          for(int _i0 = 0; _i0 < _len_map0; _i0++) {
              int _len_map__i0__vma0 = 1;
          map[_i0].vma = (struct TYPE_2__ *) malloc(_len_map__i0__vma0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_map__i0__vma0; _j0++) {
            map[_i0].vma->vm_start = ((-2 * (next_i()%2)) + 1) * next_i();
        map[_i0].vma->vm_end = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = in_range(map,start,end);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_map0; _aux++) {
          free(map[_aux].vma);
          }
          free(map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
