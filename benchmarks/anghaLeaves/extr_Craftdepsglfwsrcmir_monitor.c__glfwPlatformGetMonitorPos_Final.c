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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int x; int y; } ;
struct TYPE_5__ {TYPE_1__ mir; } ;
typedef  TYPE_2__ _GLFWmonitor ;

/* Variables and functions */

void _glfwPlatformGetMonitorPos(_GLFWmonitor* monitor, int* xpos, int* ypos)
{
    if (xpos)
        *xpos = monitor->mir.x;
    if (ypos)
        *ypos = monitor->mir.y;
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_monitor0 = 65025;
          struct TYPE_5__ * monitor = (struct TYPE_5__ *) malloc(_len_monitor0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_monitor0; _i0++) {
              monitor[_i0].mir.x = ((-2 * (next_i()%2)) + 1) * next_i();
          monitor[_i0].mir.y = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_xpos0 = 65025;
          int * xpos = (int *) malloc(_len_xpos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xpos0; _i0++) {
            xpos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ypos0 = 65025;
          int * ypos = (int *) malloc(_len_ypos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ypos0; _i0++) {
            ypos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          _glfwPlatformGetMonitorPos(monitor,xpos,ypos);
          free(monitor);
          free(xpos);
          free(ypos);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_monitor0 = 100;
          struct TYPE_5__ * monitor = (struct TYPE_5__ *) malloc(_len_monitor0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_monitor0; _i0++) {
              monitor[_i0].mir.x = ((-2 * (next_i()%2)) + 1) * next_i();
          monitor[_i0].mir.y = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          int _len_xpos0 = 100;
          int * xpos = (int *) malloc(_len_xpos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_xpos0; _i0++) {
            xpos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ypos0 = 100;
          int * ypos = (int *) malloc(_len_ypos0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ypos0; _i0++) {
            ypos[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          _glfwPlatformGetMonitorPos(monitor,xpos,ypos);
          free(monitor);
          free(xpos);
          free(ypos);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_monitor0 = 1;
          struct TYPE_5__ * monitor = (struct TYPE_5__ *) malloc(_len_monitor0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_monitor0; _i0++) {
              monitor[_i0].mir.x = ((-2 * (next_i()%2)) + 1) * next_i();
          monitor[_i0].mir.y = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
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
        
          _glfwPlatformGetMonitorPos(monitor,xpos,ypos);
          free(monitor);
          free(xpos);
          free(ypos);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
