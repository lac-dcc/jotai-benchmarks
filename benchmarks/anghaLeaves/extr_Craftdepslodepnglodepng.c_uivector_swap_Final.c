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
struct TYPE_4__ {size_t size; size_t allocsize; unsigned int* data; } ;
typedef  TYPE_1__ uivector ;

/* Variables and functions */

__attribute__((used)) static void uivector_swap(uivector* p, uivector* q)
{
  size_t tmp;
  unsigned* tmpp;
  tmp = p->size; p->size = q->size; q->size = tmp;
  tmp = p->allocsize; p->allocsize = q->allocsize; q->allocsize = tmp;
  tmpp = p->data; p->data = q->data; q->data = tmpp;
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
          int _len_p0 = 1;
          struct TYPE_4__ * p = (struct TYPE_4__ *) malloc(_len_p0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].allocsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__data0 = 1;
          p[_i0].data = (unsigned int *) malloc(_len_p__i0__data0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_p__i0__data0; _j0++) {
            p[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_q0 = 1;
          struct TYPE_4__ * q = (struct TYPE_4__ *) malloc(_len_q0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].allocsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_q__i0__data0 = 1;
          q[_i0].data = (unsigned int *) malloc(_len_q__i0__data0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_q__i0__data0; _j0++) {
            q[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          uivector_swap(p,q);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].data);
          }
          free(p);
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].data);
          }
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
