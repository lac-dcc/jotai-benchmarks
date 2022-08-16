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
       1            linked\n\
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

/* Type definitions */
struct vo_x11_state {scalar_t__ dnd_requested_format; scalar_t__ dnd_src_window; } ;
struct vo {struct vo_x11_state* x11; } ;

/* Variables and functions */

__attribute__((used)) static void dnd_reset(struct vo *vo)
{
    struct vo_x11_state *x11 = vo->x11;

    x11->dnd_src_window = 0;
    x11->dnd_requested_format = 0;
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
          int _len_vo0 = 1;
          struct vo * vo = (struct vo *) malloc(_len_vo0*sizeof(struct vo));
          for(int _i0 = 0; _i0 < _len_vo0; _i0++) {
              int _len_vo__i0__x110 = 1;
          vo[_i0].x11 = (struct vo_x11_state *) malloc(_len_vo__i0__x110*sizeof(struct vo_x11_state));
          for(int _j0 = 0; _j0 < _len_vo__i0__x110; _j0++) {
            vo[_i0].x11->dnd_requested_format = ((-2 * (next_i()%2)) + 1) * next_i();
        vo[_i0].x11->dnd_src_window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dnd_reset(vo);
          for(int _aux = 0; _aux < _len_vo0; _aux++) {
          free(vo[_aux].x11);
          }
          free(vo);
        
        break;
    }
    // linked
    case 1:
    {
          int _len_vo0 = 1;
          struct vo * vo = (struct vo *) malloc(_len_vo0*sizeof(struct vo));
          for(int _i0 = 0; _i0 < _len_vo0; _i0++) {
              int _len_vo__i0__x110 = 1;
          vo[_i0].x11 = (struct vo_x11_state *) malloc(_len_vo__i0__x110*sizeof(struct vo_x11_state));
          for(int _j0 = 0; _j0 < _len_vo__i0__x110; _j0++) {
            vo[_i0].x11->dnd_requested_format = ((-2 * (next_i()%2)) + 1) * next_i();
        vo[_i0].x11->dnd_src_window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dnd_reset(vo);
          for(int _aux = 0; _aux < _len_vo0; _aux++) {
          free(vo[_aux].x11);
          }
          free(vo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
