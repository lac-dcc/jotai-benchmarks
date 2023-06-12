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
struct TYPE_4__ {scalar_t__ message_type; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ xclient; } ;
typedef  TYPE_2__ XEvent ;
typedef  int /*<<< orphan*/  Display ;
typedef  int /*<<< orphan*/  Bool ;

/* Variables and functions */
 scalar_t__ ClientMessage ; 
 int /*<<< orphan*/  False ; 
 int SPNAV_EVENT_BUTTON ; 
 int SPNAV_EVENT_MOTION ; 
 int /*<<< orphan*/  True ; 
 scalar_t__ button_press_event ; 
 scalar_t__ button_release_event ; 
 scalar_t__ motion_event ; 

__attribute__((used)) static Bool match_events(Display *dpy, XEvent *xev, char *arg)
{
  int evtype = *(int*)arg;

  if(xev->type != ClientMessage) {
    return False;
  }

  if(xev->xclient.message_type == motion_event) {
    return !evtype || evtype == SPNAV_EVENT_MOTION ? True : False;
  }
  if(xev->xclient.message_type == button_press_event ||
      xev->xclient.message_type == button_release_event) {
    return !evtype || evtype == SPNAV_EVENT_BUTTON ? True : False;
  }
  return False;
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
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_dpy0 = 65025;
          int * dpy = (int *) malloc(_len_dpy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dpy0; _i0++) {
            dpy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_xev0 = 65025;
          struct TYPE_5__ * xev = (struct TYPE_5__ *) malloc(_len_xev0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_xev0; _i0++) {
              xev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          xev[_i0].xclient.message_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_arg0 = 65025;
          char * arg = (char *) malloc(_len_arg0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = match_events(dpy,xev,arg);
          printf("%d\n", benchRet); 
          free(dpy);
          free(xev);
          free(arg);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int _len_dpy0 = 100;
          int * dpy = (int *) malloc(_len_dpy0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dpy0; _i0++) {
            dpy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_xev0 = 100;
          struct TYPE_5__ * xev = (struct TYPE_5__ *) malloc(_len_xev0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_xev0; _i0++) {
              xev[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          xev[_i0].xclient.message_type = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_arg0 = 100;
          char * arg = (char *) malloc(_len_arg0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = match_events(dpy,xev,arg);
          printf("%d\n", benchRet); 
          free(dpy);
          free(xev);
          free(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
