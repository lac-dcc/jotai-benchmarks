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
struct TYPE_3__ {int y; int* List; } ;
typedef  TYPE_1__ privacy_t ;

/* Variables and functions */

__attribute__((used)) static int compute_privacy_size (privacy_t *T) {
  int t = T->y & 255;
  return sizeof(privacy_t) + 4*(t == 255 ? T->List[0]+1 : t) + 4;
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
          int _len_T0 = 1;
          struct TYPE_3__ * T = (struct TYPE_3__ *) malloc(_len_T0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
            T[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_T__i0__List0 = 1;
          T[_i0].List = (int *) malloc(_len_T__i0__List0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_T__i0__List0; _j0++) {
            T[_i0].List[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = compute_privacy_size(T);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_T0; _aux++) {
          free(T[_aux].List);
          }
          free(T);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
