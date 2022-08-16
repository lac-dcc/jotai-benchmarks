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
struct TYPE_3__ {int planes; int ptr_align; scalar_t__* data; } ;
typedef  TYPE_1__ AudioData ;

/* Variables and functions */

__attribute__((used)) static void calc_ptr_alignment(AudioData *a)
{
    int p;
    int min_align = 128;

    for (p = 0; p < a->planes; p++) {
        int cur_align = 128;
        while ((intptr_t)a->data[p] % cur_align)
            cur_align >>= 1;
        if (cur_align < min_align)
            min_align = cur_align;
    }
    a->ptr_align = min_align;
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
          int _len_a0 = 1;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].planes = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].ptr_align = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_a__i0__data0 = 1;
          a[_i0].data = (long *) malloc(_len_a__i0__data0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_a__i0__data0; _j0++) {
            a[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          calc_ptr_alignment(a);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].data);
          }
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
