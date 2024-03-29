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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct TYPE_2__ {scalar_t__ top; scalar_t__ right; scalar_t__ bottom; scalar_t__ left; } ;
struct sway_container {TYPE_1__ current_gaps; int /*<<< orphan*/  y; int /*<<< orphan*/  x; int /*<<< orphan*/  height; int /*<<< orphan*/  width; } ;

/* Variables and functions */

void container_remove_gaps(struct sway_container *c) {
	if (c->current_gaps.top == 0 && c->current_gaps.right == 0 &&
			c->current_gaps.bottom == 0 && c->current_gaps.left == 0) {
		return;
	}

	c->width += c->current_gaps.left + c->current_gaps.right;
	c->height += c->current_gaps.top + c->current_gaps.bottom;
	c->x -= c->current_gaps.left;
	c->y -= c->current_gaps.top;

	c->current_gaps.top = 0;
	c->current_gaps.right = 0;
	c->current_gaps.bottom = 0;
	c->current_gaps.left = 0;
}

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
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 44
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int _len_c0 = 65025;
          struct sway_container * c = (struct sway_container *) malloc(_len_c0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].current_gaps.top = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].current_gaps.right = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].current_gaps.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].current_gaps.left = ((-2 * (next_i()%2)) + 1) * next_i();
        
          c[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          container_remove_gaps(c);
          free(c);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 44
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int _len_c0 = 100;
          struct sway_container * c = (struct sway_container *) malloc(_len_c0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].current_gaps.top = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].current_gaps.right = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].current_gaps.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].current_gaps.left = ((-2 * (next_i()%2)) + 1) * next_i();
        
          c[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          container_remove_gaps(c);
          free(c);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 44
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 19
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int _len_c0 = 1;
          struct sway_container * c = (struct sway_container *) malloc(_len_c0*sizeof(struct sway_container));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              c[_i0].current_gaps.top = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].current_gaps.right = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].current_gaps.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].current_gaps.left = ((-2 * (next_i()%2)) + 1) * next_i();
        
          c[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
          c[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          container_remove_gaps(c);
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
