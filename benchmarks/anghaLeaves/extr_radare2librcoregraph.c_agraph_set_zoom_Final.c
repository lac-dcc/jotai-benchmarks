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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int is_tiny; int zoom; int need_update_dim; int need_set_layout; TYPE_1__* can; int /*<<< orphan*/  mode; } ;
struct TYPE_4__ {int sy; } ;
typedef  TYPE_2__ RAGraph ;

/* Variables and functions */
 int /*<<< orphan*/  R_AGRAPH_MODE_MINI ; 
 int /*<<< orphan*/  R_AGRAPH_MODE_NORMAL ; 
 int /*<<< orphan*/  R_AGRAPH_MODE_TINY ; 

__attribute__((used)) static void agraph_set_zoom(RAGraph *g, int v) {
	if (v >= -10) {
		g->is_tiny = false;
		if (v == 0) {
			g->mode = R_AGRAPH_MODE_MINI;
		} else if (v < 0) {
			g->mode = R_AGRAPH_MODE_TINY;
			g->is_tiny = true;
		} else {
			g->mode = R_AGRAPH_MODE_NORMAL;
		}
		const int K = 920;
		if (g->zoom < v) {
			g->can->sy = (g->can->sy * K) / 1000;
		}
		else {
			g->can->sy = (g->can->sy * 1000) / K;
		}
		g->zoom = v;
		g->need_update_dim = true;
		g->need_set_layout = true;
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
          int v = 100;
          int _len_g0 = 1;
          struct TYPE_5__ * g = (struct TYPE_5__ *) malloc(_len_g0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_g0; _i0++) {
            g[_i0].is_tiny = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].zoom = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].need_update_dim = ((-2 * (next_i()%2)) + 1) * next_i();
        g[_i0].need_set_layout = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_g__i0__can0 = 1;
          g[_i0].can = (struct TYPE_4__ *) malloc(_len_g__i0__can0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_g__i0__can0; _j0++) {
            g[_i0].can->sy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        g[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          agraph_set_zoom(g,v);
          for(int _aux = 0; _aux < _len_g0; _aux++) {
          free(g[_aux].can);
          }
          free(g);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
