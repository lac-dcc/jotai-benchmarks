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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int mode; int enable; } ;
struct TYPE_4__ {TYPE_1__ i; } ;
struct nv50_wndw_atom {TYPE_2__ xlut; } ;
struct nv50_wndw {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
base907c_ilut(struct nv50_wndw *wndw, struct nv50_wndw_atom *asyw)
{
	asyw->xlut.i.mode = 7;
	asyw->xlut.i.enable = 2;
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
          int _len_wndw0 = 1;
          struct nv50_wndw * wndw = (struct nv50_wndw *) malloc(_len_wndw0*sizeof(struct nv50_wndw));
          for(int _i0 = 0; _i0 < _len_wndw0; _i0++) {
            wndw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asyw0 = 1;
          struct nv50_wndw_atom * asyw = (struct nv50_wndw_atom *) malloc(_len_asyw0*sizeof(struct nv50_wndw_atom));
          for(int _i0 = 0; _i0 < _len_asyw0; _i0++) {
            asyw[_i0].xlut.i.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        asyw[_i0].xlut.i.enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          base907c_ilut(wndw,asyw);
          free(wndw);
          free(asyw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
