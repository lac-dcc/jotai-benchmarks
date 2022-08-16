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
struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int y; int x; } ;
struct tcm_area {TYPE_3__ p1; TYPE_2__ p0; scalar_t__ is2d; TYPE_1__* tcm; } ;
struct TYPE_4__ {int width; int height; } ;

/* Variables and functions */

__attribute__((used)) static inline bool tcm_area_is_valid(struct tcm_area *area)
{
	return area && area->tcm &&
		/* coordinate bounds */
		area->p1.x < area->tcm->width &&
		area->p1.y < area->tcm->height &&
		area->p0.y <= area->p1.y &&
		/* 1D coordinate relationship + p0.x check */
		((!area->is2d &&
		  area->p0.x < area->tcm->width &&
		  area->p0.x + area->p0.y * area->tcm->width <=
		  area->p1.x + area->p1.y * area->tcm->width) ||
		 /* 2D coordinate relationship */
		 (area->is2d &&
		  area->p0.x <= area->p1.x));
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
          int _len_area0 = 1;
          struct tcm_area * area = (struct tcm_area *) malloc(_len_area0*sizeof(struct tcm_area));
          for(int _i0 = 0; _i0 < _len_area0; _i0++) {
            area[_i0].p1.x = ((-2 * (next_i()%2)) + 1) * next_i();
        area[_i0].p1.y = ((-2 * (next_i()%2)) + 1) * next_i();
        area[_i0].p0.y = ((-2 * (next_i()%2)) + 1) * next_i();
        area[_i0].p0.x = ((-2 * (next_i()%2)) + 1) * next_i();
        area[_i0].is2d = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_area__i0__tcm0 = 1;
          area[_i0].tcm = (struct TYPE_4__ *) malloc(_len_area__i0__tcm0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_area__i0__tcm0; _j0++) {
            area[_i0].tcm->width = ((-2 * (next_i()%2)) + 1) * next_i();
        area[_i0].tcm->height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = tcm_area_is_valid(area);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_area0; _aux++) {
          free(area[_aux].tcm);
          }
          free(area);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
