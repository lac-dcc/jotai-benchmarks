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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int curButton; int count; int rectX0; int rectY0; int rectX1; int rectY1; uintptr_t prevTime; } ;
typedef  TYPE_1__ uiprivClickCounter ;
typedef  int int32_t ;

/* Variables and functions */

int uiprivClickCounterClick(uiprivClickCounter *c, int button, int x, int y, uintptr_t time, uintptr_t maxTime, int32_t xdist, int32_t ydist)
{
	// different button than before? if so, don't count
	if (button != c->curButton)
		c->count = 0;

	// (x, y) in the allowed region for a double-click? if not, don't count
	if (x < c->rectX0)
		c->count = 0;
	if (y < c->rectY0)
		c->count = 0;
	if (x >= c->rectX1)
		c->count = 0;
	if (y >= c->rectY1)
		c->count = 0;

	// too slow? if so, don't count
	// note the below expression; time > (c.prevTime + maxTime) can overflow!
	if ((time - c->prevTime) > maxTime)	// too slow; don't count
		c->count = 0;

	c->count++;		// if either of the above ifs happened, this will make the click count 1; otherwise it will make the click count 2, 3, 4, 5, ...

	// now we need to update the internal structures for the next test
	c->curButton = button;
	c->prevTime = time;
	c->rectX0 = x - xdist;
	c->rectY0 = y - ydist;
	c->rectX1 = x + xdist;
	c->rectY1 = y + ydist;

	return c->count;
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
          int button = 100;
          int x = 100;
          int y = 100;
          unsigned long time = 100;
          unsigned long maxTime = 100;
          int xdist = 100;
          int ydist = 100;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].curButton = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].rectX0 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].rectY0 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].rectX1 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].rectY1 = ((-2 * (next_i()%2)) + 1) * next_i();
        c[_i0].prevTime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uiprivClickCounterClick(c,button,x,y,time,maxTime,xdist,ydist);
          printf("%d\n", benchRet); 
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
