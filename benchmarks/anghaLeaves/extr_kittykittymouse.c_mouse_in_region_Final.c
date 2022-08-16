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
typedef  struct TYPE_7__   TYPE_4__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {TYPE_1__* callback_os_window; } ;
struct TYPE_6__ {scalar_t__ left; scalar_t__ right; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_5__ {scalar_t__ mouse_y; scalar_t__ mouse_x; } ;
typedef  TYPE_2__ Region ;

/* Variables and functions */
 TYPE_4__ global_state ; 

__attribute__((used)) static inline bool
mouse_in_region(Region *r) {
    if (r->left == r->right) return false;
    if (global_state.callback_os_window->mouse_y < r->top || global_state.callback_os_window->mouse_y > r->bottom) return false;
    if (global_state.callback_os_window->mouse_x < r->left || global_state.callback_os_window->mouse_x > r->right) return false;
    return true;
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
          int _len_r0 = 1;
          struct TYPE_6__ * r = (struct TYPE_6__ *) malloc(_len_r0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].bottom = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mouse_in_region(r);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
