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
typedef  int /*<<< orphan*/  _GLFWmonitor ;

/* Variables and functions */

void _glfwPlatformGetMonitorWorkarea(_GLFWmonitor* monitor, int* xpos, int* ypos, int *width, int *height)
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
          int _len_monitor0 = 1;
          int * monitor = (int *) malloc(_len_monitor0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_monitor0; _i0++) {
            monitor[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xpos0 = 1;
          int * xpos = (int *) malloc(_len_xpos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xpos0; _i0++) {
            xpos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ypos0 = 1;
          int * ypos = (int *) malloc(_len_ypos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ypos0; _i0++) {
            ypos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_width0 = 1;
          int * width = (int *) malloc(_len_width0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_width0; _i0++) {
            width[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_height0 = 1;
          int * height = (int *) malloc(_len_height0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_height0; _i0++) {
            height[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _glfwPlatformGetMonitorWorkarea(monitor,xpos,ypos,width,height);
          free(monitor);
          free(xpos);
          free(ypos);
          free(width);
          free(height);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
