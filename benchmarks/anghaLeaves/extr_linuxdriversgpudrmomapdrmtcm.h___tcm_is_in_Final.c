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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u16 ;
struct tcm_pt {scalar_t__ x; int y; } ;
struct TYPE_5__ {scalar_t__ x; int y; } ;
struct TYPE_4__ {scalar_t__ x; int y; } ;
struct tcm_area {TYPE_3__* tcm; TYPE_2__ p1; TYPE_1__ p0; scalar_t__ is2d; } ;
struct TYPE_6__ {int width; } ;

/* Variables and functions */

__attribute__((used)) static inline bool __tcm_is_in(struct tcm_pt *p, struct tcm_area *a)
{
	u16 i;

	if (a->is2d) {
		return p->x >= a->p0.x && p->x <= a->p1.x &&
		       p->y >= a->p0.y && p->y <= a->p1.y;
	} else {
		i = p->x + p->y * a->tcm->width;
		return i >= a->p0.x + a->p0.y * a->tcm->width &&
		       i <= a->p1.x + a->p1.y * a->tcm->width;
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
          int _len_p0 = 1;
          struct tcm_pt * p = (struct tcm_pt *) malloc(_len_p0*sizeof(struct tcm_pt));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 1;
          struct tcm_area * a = (struct tcm_area *) malloc(_len_a0*sizeof(struct tcm_area));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__tcm0 = 1;
          a[_i0].tcm = (struct TYPE_6__ *) malloc(_len_a__i0__tcm0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_a__i0__tcm0; _j0++) {
            a[_i0].tcm->width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        a[_i0].p1.x = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].p1.y = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].p0.x = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].p0.y = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].is2d = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __tcm_is_in(p,a);
          printf("%d\n", benchRet); 
          free(p);
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].tcm);
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
