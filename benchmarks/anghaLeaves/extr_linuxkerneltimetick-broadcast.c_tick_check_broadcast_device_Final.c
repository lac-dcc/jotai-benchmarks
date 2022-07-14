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
struct clock_event_device {int features; scalar_t__ rating; } ;
struct TYPE_2__ {scalar_t__ mode; } ;

/* Variables and functions */
 int CLOCK_EVT_FEAT_C3STOP ; 
 int CLOCK_EVT_FEAT_DUMMY ; 
 int CLOCK_EVT_FEAT_ONESHOT ; 
 int CLOCK_EVT_FEAT_PERCPU ; 
 scalar_t__ TICKDEV_MODE_ONESHOT ; 
 TYPE_1__ tick_broadcast_device ; 

__attribute__((used)) static bool tick_check_broadcast_device(struct clock_event_device *curdev,
					struct clock_event_device *newdev)
{
	if ((newdev->features & CLOCK_EVT_FEAT_DUMMY) ||
	    (newdev->features & CLOCK_EVT_FEAT_PERCPU) ||
	    (newdev->features & CLOCK_EVT_FEAT_C3STOP))
		return false;

	if (tick_broadcast_device.mode == TICKDEV_MODE_ONESHOT &&
	    !(newdev->features & CLOCK_EVT_FEAT_ONESHOT))
		return false;

	return !curdev || newdev->rating > curdev->rating;
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
          int _len_curdev0 = 1;
          struct clock_event_device * curdev = (struct clock_event_device *) malloc(_len_curdev0*sizeof(struct clock_event_device));
          for(int _i0 = 0; _i0 < _len_curdev0; _i0++) {
            curdev[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        curdev[_i0].rating = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_newdev0 = 1;
          struct clock_event_device * newdev = (struct clock_event_device *) malloc(_len_newdev0*sizeof(struct clock_event_device));
          for(int _i0 = 0; _i0 < _len_newdev0; _i0++) {
            newdev[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        newdev[_i0].rating = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tick_check_broadcast_device(curdev,newdev);
          printf("%d\n", benchRet); 
          free(curdev);
          free(newdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_curdev0 = 65025;
          struct clock_event_device * curdev = (struct clock_event_device *) malloc(_len_curdev0*sizeof(struct clock_event_device));
          for(int _i0 = 0; _i0 < _len_curdev0; _i0++) {
            curdev[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        curdev[_i0].rating = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_newdev0 = 65025;
          struct clock_event_device * newdev = (struct clock_event_device *) malloc(_len_newdev0*sizeof(struct clock_event_device));
          for(int _i0 = 0; _i0 < _len_newdev0; _i0++) {
            newdev[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        newdev[_i0].rating = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tick_check_broadcast_device(curdev,newdev);
          printf("%d\n", benchRet); 
          free(curdev);
          free(newdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_curdev0 = 100;
          struct clock_event_device * curdev = (struct clock_event_device *) malloc(_len_curdev0*sizeof(struct clock_event_device));
          for(int _i0 = 0; _i0 < _len_curdev0; _i0++) {
            curdev[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        curdev[_i0].rating = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_newdev0 = 100;
          struct clock_event_device * newdev = (struct clock_event_device *) malloc(_len_newdev0*sizeof(struct clock_event_device));
          for(int _i0 = 0; _i0 < _len_newdev0; _i0++) {
            newdev[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
        newdev[_i0].rating = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tick_check_broadcast_device(curdev,newdev);
          printf("%d\n", benchRet); 
          free(curdev);
          free(newdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}