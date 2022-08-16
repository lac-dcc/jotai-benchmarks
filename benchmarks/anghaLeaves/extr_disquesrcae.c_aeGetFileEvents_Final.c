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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int mask; } ;
typedef  TYPE_1__ aeFileEvent ;
struct TYPE_5__ {int setsize; TYPE_1__* events; } ;
typedef  TYPE_2__ aeEventLoop ;

/* Variables and functions */

int aeGetFileEvents(aeEventLoop *eventLoop, int fd) {
    if (fd >= eventLoop->setsize) return 0;
    aeFileEvent *fe = &eventLoop->events[fd];

    return fe->mask;
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
          int fd = 100;
          int _len_eventLoop0 = 1;
          struct TYPE_5__ * eventLoop = (struct TYPE_5__ *) malloc(_len_eventLoop0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_eventLoop0; _i0++) {
            eventLoop[_i0].setsize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eventLoop__i0__events0 = 1;
          eventLoop[_i0].events = (struct TYPE_4__ *) malloc(_len_eventLoop__i0__events0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_eventLoop__i0__events0; _j0++) {
            eventLoop[_i0].events->mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = aeGetFileEvents(eventLoop,fd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_eventLoop0; _aux++) {
          free(eventLoop[_aux].events);
          }
          free(eventLoop);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
