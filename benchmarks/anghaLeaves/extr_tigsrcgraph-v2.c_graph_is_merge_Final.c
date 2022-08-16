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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct graph_canvas {TYPE_1__* symbols; } ;
struct TYPE_2__ {int /*<<< orphan*/  merge; } ;

/* Variables and functions */

__attribute__((used)) static bool
graph_is_merge(struct graph_canvas *canvas)
{
	return !!canvas->symbols->merge;
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
          int _len_canvas0 = 1;
          struct graph_canvas * canvas = (struct graph_canvas *) malloc(_len_canvas0*sizeof(struct graph_canvas));
          for(int _i0 = 0; _i0 < _len_canvas0; _i0++) {
              int _len_canvas__i0__symbols0 = 1;
          canvas[_i0].symbols = (struct TYPE_2__ *) malloc(_len_canvas__i0__symbols0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_canvas__i0__symbols0; _j0++) {
            canvas[_i0].symbols->merge = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = graph_is_merge(canvas);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_canvas0; _aux++) {
          free(canvas[_aux].symbols);
          }
          free(canvas);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
