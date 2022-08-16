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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int priority; long long timestamp; } ;
typedef  TYPE_1__ event_t ;

/* Variables and functions */

int cmp_ev (event_t *ev1, event_t *ev2) {
  int x = ev1->priority - ev2->priority;
  long long t;
  if (x) return x;
  t = ev1->timestamp - ev2->timestamp;
  return t < 0 ? -1 : (t ? 1 : 0);
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
          int _len_ev10 = 1;
          struct TYPE_4__ * ev1 = (struct TYPE_4__ *) malloc(_len_ev10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ev10; _i0++) {
            ev1[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
        ev1[_i0].timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ev20 = 1;
          struct TYPE_4__ * ev2 = (struct TYPE_4__ *) malloc(_len_ev20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ev20; _i0++) {
            ev2[_i0].priority = ((-2 * (next_i()%2)) + 1) * next_i();
        ev2[_i0].timestamp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cmp_ev(ev1,ev2);
          printf("%d\n", benchRet); 
          free(ev1);
          free(ev2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
