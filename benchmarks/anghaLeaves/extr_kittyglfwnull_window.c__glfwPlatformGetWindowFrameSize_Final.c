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

/* Type definitions */
typedef  int /*<<< orphan*/  _GLFWwindow ;

/* Variables and functions */

void _glfwPlatformGetWindowFrameSize(_GLFWwindow* window,
                                     int* left, int* top,
                                     int* right, int* bottom)
{
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
          int _len_window0 = 1;
          int * window = (int *) malloc(_len_window0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_left0 = 1;
          int * left = (int *) malloc(_len_left0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_left0; _i0++) {
            left[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_top0 = 1;
          int * top = (int *) malloc(_len_top0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_top0; _i0++) {
            top[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_right0 = 1;
          int * right = (int *) malloc(_len_right0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_right0; _i0++) {
            right[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bottom0 = 1;
          int * bottom = (int *) malloc(_len_bottom0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bottom0; _i0++) {
            bottom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _glfwPlatformGetWindowFrameSize(window,left,top,right,bottom);
          free(window);
          free(left);
          free(top);
          free(right);
          free(bottom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
