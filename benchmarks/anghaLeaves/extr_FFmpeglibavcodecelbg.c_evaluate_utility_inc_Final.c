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
typedef  int int64_t ;
struct TYPE_3__ {int numCB; int* utility; int error; int* utility_inc; } ;
typedef  TYPE_1__ elbg_data ;

/* Variables and functions */

__attribute__((used)) static void evaluate_utility_inc(elbg_data *elbg)
{
    int i;
    int64_t inc=0;

    for (i=0; i < elbg->numCB; i++) {
        if (elbg->numCB*elbg->utility[i] > elbg->error)
            inc += elbg->utility[i];
        elbg->utility_inc[i] = inc;
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
          int _len_elbg0 = 1;
          struct TYPE_3__ * elbg = (struct TYPE_3__ *) malloc(_len_elbg0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_elbg0; _i0++) {
            elbg[_i0].numCB = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_elbg__i0__utility0 = 1;
          elbg[_i0].utility = (int *) malloc(_len_elbg__i0__utility0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_elbg__i0__utility0; _j0++) {
            elbg[_i0].utility[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        elbg[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_elbg__i0__utility_inc0 = 1;
          elbg[_i0].utility_inc = (int *) malloc(_len_elbg__i0__utility_inc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_elbg__i0__utility_inc0; _j0++) {
            elbg[_i0].utility_inc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          evaluate_utility_inc(elbg);
          for(int _aux = 0; _aux < _len_elbg0; _aux++) {
          free(elbg[_aux].utility);
          }
          for(int _aux = 0; _aux < _len_elbg0; _aux++) {
          free(elbg[_aux].utility_inc);
          }
          free(elbg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
