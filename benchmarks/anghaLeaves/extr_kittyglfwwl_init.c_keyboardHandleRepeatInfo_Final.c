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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct wl_keyboard {int dummy; } ;
typedef  void* int32_t ;
struct TYPE_3__ {void* keyboardRepeatDelay; void* keyboardRepeatRate; struct wl_keyboard* keyboard; } ;
struct TYPE_4__ {TYPE_1__ wl; } ;

/* Variables and functions */
 TYPE_2__ _glfw ; 

__attribute__((used)) static void keyboardHandleRepeatInfo(void* data,
                                     struct wl_keyboard* keyboard,
                                     int32_t rate,
                                     int32_t delay)
{
    if (keyboard != _glfw.wl.keyboard)
        return;

    _glfw.wl.keyboardRepeatRate = rate;
    _glfw.wl.keyboardRepeatDelay = delay;
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
          void * data;
        
          int _len_keyboard0 = 65025;
          struct wl_keyboard * keyboard = (struct wl_keyboard *) malloc(_len_keyboard0*sizeof(struct wl_keyboard));
          for(int _i0 = 0; _i0 < _len_keyboard0; _i0++) {
              keyboard[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * rate;
        
          void * delay;
        
          keyboardHandleRepeatInfo(data,keyboard,rate,delay);
          free(keyboard);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          void * data;
        
          int _len_keyboard0 = 100;
          struct wl_keyboard * keyboard = (struct wl_keyboard *) malloc(_len_keyboard0*sizeof(struct wl_keyboard));
          for(int _i0 = 0; _i0 < _len_keyboard0; _i0++) {
              keyboard[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * rate;
        
          void * delay;
        
          keyboardHandleRepeatInfo(data,keyboard,rate,delay);
          free(keyboard);
        
        break;
    }
    // empty
    case 2:
    {
          void * data;
        
          int _len_keyboard0 = 1;
          struct wl_keyboard * keyboard = (struct wl_keyboard *) malloc(_len_keyboard0*sizeof(struct wl_keyboard));
          for(int _i0 = 0; _i0 < _len_keyboard0; _i0++) {
              keyboard[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          void * rate;
        
          void * delay;
        
          keyboardHandleRepeatInfo(data,keyboard,rate,delay);
          free(keyboard);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
