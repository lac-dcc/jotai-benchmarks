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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int ssize_t ;
struct TYPE_3__ {int width; size_t rows; int* buf; size_t stride; size_t start_x; } ;
typedef  TYPE_1__ ProcessedBitmap ;

/* Variables and functions */

__attribute__((used)) static inline void
trim_borders(ProcessedBitmap *ans, size_t extra) {
    bool column_has_text = false;

    // Trim empty columns from the right side of the bitmap
    for (ssize_t x = ans->width - 1; !column_has_text && x > -1 && extra > 0; x--) {
        for (size_t y = 0; y < ans->rows && !column_has_text; y++) {
            if (ans->buf[x + y * ans->stride] > 200) column_has_text = true;
        }
        if (!column_has_text) { ans->width--; extra--; }
    }

    // Remove any remaining extra columns from the left edge of the bitmap
    ans->start_x = extra;
    ans->width -= extra;
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
          unsigned long extra = 100;
          int _len_ans0 = 1;
          struct TYPE_3__ * ans = (struct TYPE_3__ *) malloc(_len_ans0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ans0; _i0++) {
            ans[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        ans[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ans__i0__buf0 = 1;
          ans[_i0].buf = (int *) malloc(_len_ans__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ans__i0__buf0; _j0++) {
            ans[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ans[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
        ans[_i0].start_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          trim_borders(ans,extra);
          for(int _aux = 0; _aux < _len_ans0; _aux++) {
          free(ans[_aux].buf);
          }
          free(ans);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
