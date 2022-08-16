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
struct unpack_trees_options {int cache_bottom; scalar_t__ diff_index_cached; } ;
struct traverse_info {struct unpack_trees_options* data; } ;

/* Variables and functions */

__attribute__((used)) static void restore_cache_bottom(struct traverse_info *info, int bottom)
{
	struct unpack_trees_options *o = info->data;

	if (o->diff_index_cached)
		return;
	o->cache_bottom = bottom;
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
          int bottom = 100;
          int _len_info0 = 1;
          struct traverse_info * info = (struct traverse_info *) malloc(_len_info0*sizeof(struct traverse_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
              int _len_info__i0__data0 = 1;
          info[_i0].data = (struct unpack_trees_options *) malloc(_len_info__i0__data0*sizeof(struct unpack_trees_options));
          for(int _j0 = 0; _j0 < _len_info__i0__data0; _j0++) {
            info[_i0].data->cache_bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].data->diff_index_cached = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          restore_cache_bottom(info,bottom);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(info[_aux].data);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
