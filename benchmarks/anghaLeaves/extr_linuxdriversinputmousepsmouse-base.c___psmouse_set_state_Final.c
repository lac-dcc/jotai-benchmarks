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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {scalar_t__ flags; } ;
struct psmouse {int state; int /*<<< orphan*/  last; TYPE_1__ ps2dev; scalar_t__ out_of_sync_cnt; scalar_t__ pktcnt; } ;
typedef  enum psmouse_state { ____Placeholder_psmouse_state } psmouse_state ;

/* Variables and functions */
 int /*<<< orphan*/  jiffies ; 

__attribute__((used)) static inline void __psmouse_set_state(struct psmouse *psmouse, enum psmouse_state new_state)
{
	psmouse->state = new_state;
	psmouse->pktcnt = psmouse->out_of_sync_cnt = 0;
	psmouse->ps2dev.flags = 0;
	psmouse->last = jiffies;
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
          enum psmouse_state new_state = 0;
          int _len_psmouse0 = 1;
          struct psmouse * psmouse = (struct psmouse *) malloc(_len_psmouse0*sizeof(struct psmouse));
          for(int _i0 = 0; _i0 < _len_psmouse0; _i0++) {
            psmouse[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].ps2dev.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].out_of_sync_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].pktcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __psmouse_set_state(psmouse,new_state);
          free(psmouse);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum psmouse_state new_state = 0;
          int _len_psmouse0 = 65025;
          struct psmouse * psmouse = (struct psmouse *) malloc(_len_psmouse0*sizeof(struct psmouse));
          for(int _i0 = 0; _i0 < _len_psmouse0; _i0++) {
            psmouse[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].ps2dev.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].out_of_sync_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].pktcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __psmouse_set_state(psmouse,new_state);
          free(psmouse);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum psmouse_state new_state = 0;
          int _len_psmouse0 = 100;
          struct psmouse * psmouse = (struct psmouse *) malloc(_len_psmouse0*sizeof(struct psmouse));
          for(int _i0 = 0; _i0 < _len_psmouse0; _i0++) {
            psmouse[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].last = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].ps2dev.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].out_of_sync_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        psmouse[_i0].pktcnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __psmouse_set_state(psmouse,new_state);
          free(psmouse);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
