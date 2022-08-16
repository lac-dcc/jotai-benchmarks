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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_6__ {int width; int height; } ;
struct TYPE_5__ {int src_width; int cell_x_offset; int src_height; int cell_y_offset; int effective_num_rows; int effective_num_cols; } ;
typedef  TYPE_1__ ImageRef ;
typedef  TYPE_2__ CellPixelSize ;

/* Variables and functions */

__attribute__((used)) static inline void
update_dest_rect(ImageRef *ref, uint32_t num_cols, uint32_t num_rows, CellPixelSize cell) {
    uint32_t t;
    if (num_cols == 0) {
        t = ref->src_width + ref->cell_x_offset;
        num_cols = t / cell.width;
        if (t > num_cols * cell.width) num_cols += 1;
    }
    if (num_rows == 0) {
        t = ref->src_height + ref->cell_y_offset;
        num_rows = t / cell.height;
        if (t > num_rows * cell.height) num_rows += 1;
    }
    ref->effective_num_rows = num_rows;
    ref->effective_num_cols = num_cols;
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
          int num_cols = 100;
          int num_rows = 100;
          int _len_ref0 = 1;
          struct TYPE_5__ * ref = (struct TYPE_5__ *) malloc(_len_ref0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0].src_width = ((-2 * (next_i()%2)) + 1) * next_i();
        ref[_i0].cell_x_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ref[_i0].src_height = ((-2 * (next_i()%2)) + 1) * next_i();
        ref[_i0].cell_y_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ref[_i0].effective_num_rows = ((-2 * (next_i()%2)) + 1) * next_i();
        ref[_i0].effective_num_cols = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_6__ cell;
        cell.width = ((-2 * (next_i()%2)) + 1) * next_i();
        cell.height = ((-2 * (next_i()%2)) + 1) * next_i();
          update_dest_rect(ref,num_cols,num_rows,cell);
          free(ref);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
