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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ XPointer ;
struct TYPE_5__ {scalar_t__ requestor; scalar_t__ property; } ;
struct TYPE_6__ {scalar_t__ state; scalar_t__ window; scalar_t__ atom; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ xselection; TYPE_2__ xproperty; } ;
typedef  TYPE_3__ XEvent ;
typedef  int /*<<< orphan*/  Display ;
typedef  int Bool ;

/* Variables and functions */
 scalar_t__ PropertyNewValue ; 
 scalar_t__ PropertyNotify ; 

__attribute__((used)) static Bool isSelPropNewValueNotify(Display* display, XEvent* event, XPointer pointer)
{
    XEvent* notification = (XEvent*) pointer;
    return event->type == PropertyNotify &&
           event->xproperty.state == PropertyNewValue &&
           event->xproperty.window == notification->xselection.requestor &&
           event->xproperty.atom == notification->xselection.property;
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
          long pointer = 100;
          int _len_display0 = 1;
          int * display = (int *) malloc(_len_display0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_display0; _i0++) {
            display[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 1;
          struct TYPE_7__ * event = (struct TYPE_7__ *) malloc(_len_event0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xselection.requestor = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xselection.property = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.state = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.window = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].xproperty.atom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isSelPropNewValueNotify(display,event,pointer);
          printf("%d\n", benchRet); 
          free(display);
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
