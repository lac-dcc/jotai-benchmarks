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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  M32; int /*<<< orphan*/  M31; int /*<<< orphan*/  M22; int /*<<< orphan*/  M21; int /*<<< orphan*/  M12; int /*<<< orphan*/  M11; } ;
typedef  TYPE_1__ uiDrawMatrix ;
struct TYPE_6__ {int /*<<< orphan*/  y0; int /*<<< orphan*/  x0; int /*<<< orphan*/  yy; int /*<<< orphan*/  xy; int /*<<< orphan*/  yx; int /*<<< orphan*/  xx; } ;
typedef  TYPE_2__ cairo_matrix_t ;

/* Variables and functions */

__attribute__((used)) static void m2c(uiDrawMatrix *m, cairo_matrix_t *c)
{
	c->xx = m->M11;
	c->yx = m->M12;
	c->xy = m->M21;
	c->yy = m->M22;
	c->x0 = m->M31;
	c->y0 = m->M32;
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
          struct TYPE_5__ * m = (struct TYPE_5__ *) malloc(_len_m0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].M32 = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].M31 = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].M22 = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].M21 = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].M12 = ((-2 * (next_i()%2)) + 1) * next_i();
        m[_i0].M11 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct TYPE_6__ * c = (struct TYPE_6__ *) malloc(_len_c0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].y0 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].x0 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].yy = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].xy = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].yx = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].xx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          m2c(m,c);
          free(m);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
