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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ x; TYPE_1__* target; } ;
typedef  TYPE_3__ mc_point_t ;
struct TYPE_7__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {int port; TYPE_2__ target; } ;

/* Variables and functions */

__attribute__((used)) static int cmp_points (mc_point_t *A, mc_point_t *B) {
  if (A->x < B->x) {
    return -1;
  } else if (A->x > B->x) {
    return 1;
  } else if (A->target->target.s_addr < B->target->target.s_addr) {
    return -1;
  } else if (A->target->target.s_addr > B->target->target.s_addr) {
    return 1;
  } else {
    return A->target->port - B->target->port;
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
          int _len_A0 = 1;
          struct TYPE_8__ * A = (struct TYPE_8__ *) malloc(_len_A0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_A__i0__target0 = 1;
          A[_i0].target = (struct TYPE_6__ *) malloc(_len_A__i0__target0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_A__i0__target0; _j0++) {
            A[_i0].target->port = ((-2 * (next_i()%2)) + 1) * next_i();
        A[_i0].target->target.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_B0 = 1;
          struct TYPE_8__ * B = (struct TYPE_8__ *) malloc(_len_B0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_B__i0__target0 = 1;
          B[_i0].target = (struct TYPE_6__ *) malloc(_len_B__i0__target0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_B__i0__target0; _j0++) {
            B[_i0].target->port = ((-2 * (next_i()%2)) + 1) * next_i();
        B[_i0].target->target.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cmp_points(A,B);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_A0; _aux++) {
          free(A[_aux].target);
          }
          free(A);
          for(int _aux = 0; _aux < _len_B0; _aux++) {
          free(B[_aux].target);
          }
          free(B);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
