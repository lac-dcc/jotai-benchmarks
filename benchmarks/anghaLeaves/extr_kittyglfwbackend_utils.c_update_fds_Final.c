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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ nfds_t ;
struct TYPE_6__ {int /*<<< orphan*/  events; scalar_t__ enabled; int /*<<< orphan*/  fd; } ;
typedef  TYPE_2__ Watch ;
struct TYPE_7__ {scalar_t__ watches_count; TYPE_1__* fds; TYPE_2__* watches; } ;
struct TYPE_5__ {int /*<<< orphan*/  events; int /*<<< orphan*/  fd; } ;
typedef  TYPE_3__ EventLoopData ;

/* Variables and functions */

void
update_fds(EventLoopData *eld) {
    for (nfds_t i = 0; i < eld->watches_count; i++) {
        Watch *w = eld->watches + i;
        eld->fds[i].fd = w->fd;
        eld->fds[i].events = w->enabled ? w->events : 0;
    }
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
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_eld0 = 65025;
          struct TYPE_7__ * eld = (struct TYPE_7__ *) malloc(_len_eld0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_eld0; _i0++) {
              eld[_i0].watches_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eld__i0__fds0 = 1;
          eld[_i0].fds = (struct TYPE_5__ *) malloc(_len_eld__i0__fds0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_eld__i0__fds0; _j0++) {
              eld[_i0].fds->events = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].fds->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_eld__i0__watches0 = 1;
          eld[_i0].watches = (struct TYPE_6__ *) malloc(_len_eld__i0__watches0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_eld__i0__watches0; _j0++) {
              eld[_i0].watches->events = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].watches->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].watches->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          update_fds(eld);
          for(int _aux = 0; _aux < _len_eld0; _aux++) {
          free(eld[_aux].fds);
          }
          for(int _aux = 0; _aux < _len_eld0; _aux++) {
          free(eld[_aux].watches);
          }
          free(eld);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_eld0 = 100;
          struct TYPE_7__ * eld = (struct TYPE_7__ *) malloc(_len_eld0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_eld0; _i0++) {
              eld[_i0].watches_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eld__i0__fds0 = 1;
          eld[_i0].fds = (struct TYPE_5__ *) malloc(_len_eld__i0__fds0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_eld__i0__fds0; _j0++) {
              eld[_i0].fds->events = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].fds->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_eld__i0__watches0 = 1;
          eld[_i0].watches = (struct TYPE_6__ *) malloc(_len_eld__i0__watches0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_eld__i0__watches0; _j0++) {
              eld[_i0].watches->events = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].watches->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].watches->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          update_fds(eld);
          for(int _aux = 0; _aux < _len_eld0; _aux++) {
          free(eld[_aux].fds);
          }
          for(int _aux = 0; _aux < _len_eld0; _aux++) {
          free(eld[_aux].watches);
          }
          free(eld);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_eld0 = 1;
          struct TYPE_7__ * eld = (struct TYPE_7__ *) malloc(_len_eld0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_eld0; _i0++) {
              eld[_i0].watches_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eld__i0__fds0 = 1;
          eld[_i0].fds = (struct TYPE_5__ *) malloc(_len_eld__i0__fds0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_eld__i0__fds0; _j0++) {
              eld[_i0].fds->events = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].fds->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
          int _len_eld__i0__watches0 = 1;
          eld[_i0].watches = (struct TYPE_6__ *) malloc(_len_eld__i0__watches0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_eld__i0__watches0; _j0++) {
              eld[_i0].watches->events = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].watches->enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].watches->fd = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          update_fds(eld);
          for(int _aux = 0; _aux < _len_eld0; _aux++) {
          free(eld[_aux].fds);
          }
          for(int _aux = 0; _aux < _len_eld0; _aux++) {
          free(eld[_aux].watches);
          }
          free(eld);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
