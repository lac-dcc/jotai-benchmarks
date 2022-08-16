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
struct TYPE_3__ {int datadir; int statusdir; scalar_t__ status; scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ amiga; } ;
struct parport_state {TYPE_2__ u; } ;
struct pardevice {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void mfc3_init_state(struct pardevice *dev, struct parport_state *s)
{
	s->u.amiga.data = 0;
	s->u.amiga.datadir = 255;
	s->u.amiga.status = 0;
	s->u.amiga.statusdir = 0xe0;
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
          int _len_dev0 = 1;
          struct pardevice * dev = (struct pardevice *) malloc(_len_dev0*sizeof(struct pardevice));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          struct parport_state * s = (struct parport_state *) malloc(_len_s0*sizeof(struct parport_state));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].u.amiga.datadir = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].u.amiga.statusdir = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].u.amiga.status = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].u.amiga.data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mfc3_init_state(dev,s);
          free(dev);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
