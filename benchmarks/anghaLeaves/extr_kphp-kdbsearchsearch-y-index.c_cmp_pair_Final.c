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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ word; scalar_t__ doc_id; int position; } ;
typedef  TYPE_1__ pair_t ;

/* Variables and functions */

__attribute__((used)) static inline int cmp_pair (pair_t *X, pair_t *Y) {
  if (X->word < Y->word) {
    return -1;
  }
  if (X->word > Y->word) {
    return 1;
  }
  if (X->doc_id < Y->doc_id) {
    return -1;
  }
  if (X->doc_id > Y->doc_id) {
    return 1;
  }
  return X->position - Y->position;
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
          int _len_X0 = 1;
          struct TYPE_4__ * X = (struct TYPE_4__ *) malloc(_len_X0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_X0; _i0++) {
            X[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
        X[_i0].doc_id = ((-2 * (next_i()%2)) + 1) * next_i();
        X[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Y0 = 1;
          struct TYPE_4__ * Y = (struct TYPE_4__ *) malloc(_len_Y0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_Y0; _i0++) {
            Y[_i0].word = ((-2 * (next_i()%2)) + 1) * next_i();
        Y[_i0].doc_id = ((-2 * (next_i()%2)) + 1) * next_i();
        Y[_i0].position = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmp_pair(X,Y);
          printf("%d\n", benchRet); 
          free(X);
          free(Y);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
