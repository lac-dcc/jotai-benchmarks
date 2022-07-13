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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int offset; scalar_t__ virtual; } ;
struct TYPE_7__ {scalar_t__ virtual; scalar_t__ physical; } ;
struct TYPE_6__ {int offset; scalar_t__ virtual; scalar_t__ physical; } ;
struct TYPE_5__ {int offset; scalar_t__ virtual; scalar_t__ physical; } ;
struct i810fb_par {TYPE_4__ cursor_heap; TYPE_3__ aperture; TYPE_2__ iring; TYPE_1__ fb; } ;

/* Variables and functions */

__attribute__((used)) static void i810_fix_pointers(struct i810fb_par *par)
{
      	par->fb.physical = par->aperture.physical+(par->fb.offset << 12);
	par->fb.virtual = par->aperture.virtual+(par->fb.offset << 12);
	par->iring.physical = par->aperture.physical + 
		(par->iring.offset << 12);
	par->iring.virtual = par->aperture.virtual + 
		(par->iring.offset << 12);
	par->cursor_heap.virtual = par->aperture.virtual+
		(par->cursor_heap.offset << 12);
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
          int _len_par0 = 1;
          struct i810fb_par * par = (struct i810fb_par *) malloc(_len_par0*sizeof(struct i810fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].cursor_heap.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].cursor_heap.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].aperture.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].aperture.physical = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.physical = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.physical = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i810_fix_pointers(par);
          free(par);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_par0 = 65025;
          struct i810fb_par * par = (struct i810fb_par *) malloc(_len_par0*sizeof(struct i810fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].cursor_heap.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].cursor_heap.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].aperture.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].aperture.physical = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.physical = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.physical = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i810_fix_pointers(par);
          free(par);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_par0 = 100;
          struct i810fb_par * par = (struct i810fb_par *) malloc(_len_par0*sizeof(struct i810fb_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].cursor_heap.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].cursor_heap.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].aperture.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].aperture.physical = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].iring.physical = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.virtual = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].fb.physical = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          i810_fix_pointers(par);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
