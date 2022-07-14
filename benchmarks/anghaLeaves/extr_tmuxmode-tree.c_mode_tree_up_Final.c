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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct mode_tree_data {scalar_t__ current; scalar_t__ line_size; scalar_t__ height; scalar_t__ offset; } ;

/* Variables and functions */

__attribute__((used)) static void
mode_tree_up(struct mode_tree_data *mtd, int wrap)
{
	if (mtd->current == 0) {
		if (wrap) {
			mtd->current = mtd->line_size - 1;
			if (mtd->line_size >= mtd->height)
				mtd->offset = mtd->line_size - mtd->height;
		}
	} else {
		mtd->current--;
		if (mtd->current < mtd->offset)
			mtd->offset--;
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
          int wrap = 100;
          int _len_mtd0 = 1;
          struct mode_tree_data * mtd = (struct mode_tree_data *) malloc(_len_mtd0*sizeof(struct mode_tree_data));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].current = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0].line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mode_tree_up(mtd,wrap);
          free(mtd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int wrap = 255;
          int _len_mtd0 = 65025;
          struct mode_tree_data * mtd = (struct mode_tree_data *) malloc(_len_mtd0*sizeof(struct mode_tree_data));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].current = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0].line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mode_tree_up(mtd,wrap);
          free(mtd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int wrap = 10;
          int _len_mtd0 = 100;
          struct mode_tree_data * mtd = (struct mode_tree_data *) malloc(_len_mtd0*sizeof(struct mode_tree_data));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].current = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0].line_size = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        mtd[_i0].offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mode_tree_up(mtd,wrap);
          free(mtd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}