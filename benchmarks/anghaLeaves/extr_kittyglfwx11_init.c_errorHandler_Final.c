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
typedef  struct TYPE_7__   TYPE_4__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  error_code; } ;
typedef  TYPE_2__ XErrorEvent ;
struct TYPE_5__ {int /*<<< orphan*/  errorCode; } ;
struct TYPE_7__ {TYPE_1__ x11; } ;
typedef  int /*<<< orphan*/  Display ;

/* Variables and functions */
 TYPE_4__ _glfw ; 

__attribute__((used)) static int errorHandler(Display *display, XErrorEvent* event)
{
    _glfw.x11.errorCode = event->error_code;
    return 0;
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
          int _len_display0 = 1;
          int * display = (int *) malloc(_len_display0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_display0; _i0++) {
            display[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 1;
          struct TYPE_6__ * event = (struct TYPE_6__ *) malloc(_len_event0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].error_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = errorHandler(display,event);
          printf("%d\n", benchRet); 
          free(display);
          free(event);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_display0 = 65025;
          int * display = (int *) malloc(_len_display0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_display0; _i0++) {
            display[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 65025;
          struct TYPE_6__ * event = (struct TYPE_6__ *) malloc(_len_event0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].error_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = errorHandler(display,event);
          printf("%d\n", benchRet); 
          free(display);
          free(event);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_display0 = 100;
          int * display = (int *) malloc(_len_display0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_display0; _i0++) {
            display[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_event0 = 100;
          struct TYPE_6__ * event = (struct TYPE_6__ *) malloc(_len_event0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].error_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = errorHandler(display,event);
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
