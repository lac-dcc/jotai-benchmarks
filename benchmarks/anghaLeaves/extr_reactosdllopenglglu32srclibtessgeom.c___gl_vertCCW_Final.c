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
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int s; int t; } ;
typedef  TYPE_1__ GLUvertex ;

/* Variables and functions */

int __gl_vertCCW( GLUvertex *u, GLUvertex *v, GLUvertex *w )
{
  /* For almost-degenerate situations, the results are not reliable.
   * Unless the floating-point arithmetic can be performed without
   * rounding errors, *any* implementation will give incorrect results
   * on some degenerate inputs, so the client must have some way to
   * handle this situation.
   */
  return (u->s*(v->t - w->t) + v->s*(w->t - u->t) + w->s*(u->t - v->t)) >= 0;
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
          int _len_u0 = 1;
          struct TYPE_5__ * u = (struct TYPE_5__ *) malloc(_len_u0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0].s = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_v0 = 1;
          struct TYPE_5__ * v = (struct TYPE_5__ *) malloc(_len_v0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0].s = ((-2 * (next_i()%2)) + 1) * next_i();
        v[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_w0 = 1;
          struct TYPE_5__ * w = (struct TYPE_5__ *) malloc(_len_w0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_w0; _i0++) {
            w[_i0].s = ((-2 * (next_i()%2)) + 1) * next_i();
        w[_i0].t = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = __gl_vertCCW(u,v,w);
          printf("%d\n", benchRet); 
          free(u);
          free(v);
          free(w);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
