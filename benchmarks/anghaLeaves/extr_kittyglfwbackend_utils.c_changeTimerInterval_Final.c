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
       0            empty\n\
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
typedef  size_t nfds_t ;
typedef  scalar_t__ id_type ;
struct TYPE_5__ {size_t timers_count; TYPE_1__* timers; } ;
struct TYPE_4__ {scalar_t__ id; double interval; } ;
typedef  TYPE_2__ EventLoopData ;

/* Variables and functions */

void
changeTimerInterval(EventLoopData *eld, id_type timer_id, double interval) {
    for (nfds_t i = 0; i < eld->timers_count; i++) {
        if (eld->timers[i].id == timer_id) {
            eld->timers[i].interval = interval;
            break;
        }
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


    // empty
    case 0:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          long timer_id = ((-2 * (next_i()%2)) + 1) * next_i();
        
          double interval = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          int _len_eld0 = 1;
          struct TYPE_5__ * eld = (struct TYPE_5__ *) malloc(_len_eld0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_eld0; _i0++) {
              eld[_i0].timers_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_eld__i0__timers0 = 1;
          eld[_i0].timers = (struct TYPE_4__ *) malloc(_len_eld__i0__timers0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_eld__i0__timers0; _j0++) {
              eld[_i0].timers->id = ((-2 * (next_i()%2)) + 1) * next_i();
          eld[_i0].timers->interval = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          }
        
          }
        
          changeTimerInterval(eld,timer_id,interval);
          for(int _aux = 0; _aux < _len_eld0; _aux++) {
          free(eld[_aux].timers);
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
