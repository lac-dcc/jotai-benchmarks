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
typedef  struct TYPE_17__   TYPE_9__ ;
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct wl_surface {int dummy; } ;
struct TYPE_13__ {struct wl_surface* surface; } ;
struct TYPE_12__ {struct wl_surface* surface; } ;
struct TYPE_11__ {struct wl_surface* surface; } ;
struct TYPE_10__ {struct wl_surface* surface; } ;
struct TYPE_14__ {TYPE_4__ bottom; TYPE_3__ right; TYPE_2__ left; TYPE_1__ top; } ;
struct TYPE_15__ {TYPE_5__ decorations; } ;
struct TYPE_16__ {struct TYPE_16__* next; TYPE_6__ wl; } ;
typedef  TYPE_7__ _GLFWwindow ;
struct TYPE_17__ {TYPE_7__* windowListHead; } ;

/* Variables and functions */
 TYPE_9__ _glfw ; 
 int bottomDecoration ; 
 int leftDecoration ; 
 int rightDecoration ; 
 int topDecoration ; 

__attribute__((used)) static _GLFWwindow* findWindowFromDecorationSurface(struct wl_surface* surface, int* which)
{
    int focus;
    _GLFWwindow* window = _glfw.windowListHead;
    if (!which)
        which = &focus;
    while (window)
    {
        if (surface == window->wl.decorations.top.surface)
        {
            *which = topDecoration;
            break;
        }
        if (surface == window->wl.decorations.left.surface)
        {
            *which = leftDecoration;
            break;
        }
        if (surface == window->wl.decorations.right.surface)
        {
            *which = rightDecoration;
            break;
        }
        if (surface == window->wl.decorations.bottom.surface)
        {
            *which = bottomDecoration;
            break;
        }
        window = window->next;
    }
    return window;
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
          int _len_surface0 = 1;
          struct wl_surface * surface = (struct wl_surface *) malloc(_len_surface0*sizeof(struct wl_surface));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_which0 = 1;
          int * which = (int *) malloc(_len_which0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_which0; _i0++) {
            which[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_16__ * benchRet = findWindowFromDecorationSurface(surface,which);
          free(surface);
          free(which);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
