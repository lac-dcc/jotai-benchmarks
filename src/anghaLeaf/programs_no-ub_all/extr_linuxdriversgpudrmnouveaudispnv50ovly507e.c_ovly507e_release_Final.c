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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct nv50_wndw_atom {int dummy; } ;
struct nv50_wndw {int dummy; } ;
struct TYPE_2__ {scalar_t__ cpp; } ;
struct nv50_head_atom {TYPE_1__ ovly; } ;

/* Variables and functions */

void
ovly507e_release(struct nv50_wndw *wndw, struct nv50_wndw_atom *asyw,
		 struct nv50_head_atom *asyh)
{
	asyh->ovly.cpp = 0;
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

    // big-arr
    case 0:
    {
          int _len_wndw0 = 1;
          struct nv50_wndw * wndw = (struct nv50_wndw *) malloc(_len_wndw0*sizeof(struct nv50_wndw));
          for(int _i0 = 0; _i0 < _len_wndw0; _i0++) {
            wndw->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyw0 = 1;
          struct nv50_wndw_atom * asyw = (struct nv50_wndw_atom *) malloc(_len_asyw0*sizeof(struct nv50_wndw_atom));
          for(int _i0 = 0; _i0 < _len_asyw0; _i0++) {
            asyw->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyh0 = 1;
          struct nv50_head_atom * asyh = (struct nv50_head_atom *) malloc(_len_asyh0*sizeof(struct nv50_head_atom));
          for(int _i0 = 0; _i0 < _len_asyh0; _i0++) {
            asyh->ovly.cpp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ovly507e_release(wndw,asyw,asyh);
          free(wndw);
          free(asyw);
          free(asyh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
