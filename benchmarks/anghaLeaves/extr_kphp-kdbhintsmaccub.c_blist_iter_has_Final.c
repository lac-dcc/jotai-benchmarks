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
struct TYPE_3__ {int* x; } ;
typedef  TYPE_1__ blist_iterator ;

/* Variables and functions */

int blist_iter_has (blist_iterator *it, int val) {
  if (it->x == NULL) {
    return 0;
  }

  int n = it->x[0];

  if (n <= 8) {
    int i;
    for (i = 1; i <= n; i++) {
      if (it->x[i] == val) {
        return 1;
      }
    }
    return 0;
  } else {
    int l = 1, r = n + 1, c;
    while (l + 1 < r) {
      c = (l + r) / 2;
      if (it->x[c] >= val) {
        l = c;
      } else {
        r = c;
      }
    }
    return it->x[l] == val;
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
          int val = 100;
          int _len_it0 = 1;
          struct TYPE_3__ * it = (struct TYPE_3__ *) malloc(_len_it0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_it0; _i0++) {
              int _len_it__i0__x0 = 1;
          it[_i0].x = (int *) malloc(_len_it__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_it__i0__x0; _j0++) {
            it[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = blist_iter_has(it,val);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_it0; _aux++) {
          free(it[_aux].x);
          }
          free(it);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
