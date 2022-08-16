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
typedef  int uint8_t ;
typedef  int ssize_t ;
struct TYPE_3__ {int right_edge; int width; size_t rows; int* buf; size_t stride; } ;
typedef  TYPE_1__ ProcessedBitmap ;

/* Variables and functions */

__attribute__((used)) static inline void
detect_right_edge(ProcessedBitmap *ans) {
    ans->right_edge = 0;
    for (ssize_t x = ans->width - 1; !ans->right_edge && x > -1; x--) {
        for (size_t y = 0; y < ans->rows && !ans->right_edge; y++) {
            uint8_t *p = ans->buf + x * 4 + y * ans->stride;
            if (p[3] > 20) ans->right_edge = x;
        }
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
          int _len_ans0 = 1;
          struct TYPE_3__ * ans = (struct TYPE_3__ *) malloc(_len_ans0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ans0; _i0++) {
            ans[_i0].right_edge = ((-2 * (next_i()%2)) + 1) * next_i();
        ans[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        ans[_i0].rows = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ans__i0__buf0 = 1;
          ans[_i0].buf = (int *) malloc(_len_ans__i0__buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ans__i0__buf0; _j0++) {
            ans[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ans[_i0].stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          detect_right_edge(ans);
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
