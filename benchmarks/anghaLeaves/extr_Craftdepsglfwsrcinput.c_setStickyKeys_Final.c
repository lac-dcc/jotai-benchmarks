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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int stickyKeys; scalar_t__* keys; } ;
typedef  TYPE_1__ _GLFWwindow ;

/* Variables and functions */
 int GLFW_KEY_LAST ; 
 scalar_t__ GLFW_RELEASE ; 
 scalar_t__ _GLFW_STICK ; 

__attribute__((used)) static void setStickyKeys(_GLFWwindow* window, int enabled)
{
    if (window->stickyKeys == enabled)
        return;

    if (!enabled)
    {
        int i;

        // Release all sticky keys
        for (i = 0;  i <= GLFW_KEY_LAST;  i++)
        {
            if (window->keys[i] == _GLFW_STICK)
                window->keys[i] = GLFW_RELEASE;
        }
    }

    window->stickyKeys = enabled;
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
          int enabled = 100;
          int _len_window0 = 1;
          struct TYPE_3__ * window = (struct TYPE_3__ *) malloc(_len_window0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_window0; _i0++) {
            window[_i0].stickyKeys = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_window__i0__keys0 = 1;
          window[_i0].keys = (long *) malloc(_len_window__i0__keys0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_window__i0__keys0; _j0++) {
            window[_i0].keys[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          setStickyKeys(window,enabled);
          for(int _aux = 0; _aux < _len_window0; _aux++) {
          free(window[_aux].keys);
          }
          free(window);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
