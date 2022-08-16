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
struct TYPE_3__ {int num_syms; int* weights; int* cum_prob; int* idx2sym; } ;
typedef  TYPE_1__ Model ;

/* Variables and functions */

__attribute__((used)) static void model_reset(Model *m)
{
    int i;

    for (i = 0; i <= m->num_syms; i++) {
        m->weights[i]  = 1;
        m->cum_prob[i] = m->num_syms - i;
    }
    m->weights[0] = 0;
    for (i = 0; i < m->num_syms; i++)
        m->idx2sym[i + 1] = i;
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
          int _len_m0 = 1;
          struct TYPE_3__ * m = (struct TYPE_3__ *) malloc(_len_m0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].num_syms = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_m__i0__weights0 = 1;
          m[_i0].weights = (int *) malloc(_len_m__i0__weights0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__weights0; _j0++) {
            m[_i0].weights[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__cum_prob0 = 1;
          m[_i0].cum_prob = (int *) malloc(_len_m__i0__cum_prob0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__cum_prob0; _j0++) {
            m[_i0].cum_prob[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m__i0__idx2sym0 = 1;
          m[_i0].idx2sym = (int *) malloc(_len_m__i0__idx2sym0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_m__i0__idx2sym0; _j0++) {
            m[_i0].idx2sym[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          model_reset(m);
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].weights);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].cum_prob);
          }
          for(int _aux = 0; _aux < _len_m0; _aux++) {
          free(m[_aux].idx2sym);
          }
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
