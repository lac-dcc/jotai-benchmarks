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
       1            big-arr\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct wl_output {int dummy; } ;
struct TYPE_2__ {int scale; } ;
struct _GLFWmonitor {TYPE_1__ wl; } ;
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static void outputHandleScale(void* data,
                            struct wl_output* output,
                            int32_t factor)
{
    struct _GLFWmonitor *monitor = data;
    if (factor > 0 && factor < 24)
        monitor->wl.scale = factor;
}

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
          int factor = 100;
        
          void * data;
        
          int _len_output0 = 1;
          struct wl_output * output = (struct wl_output *) malloc(_len_output0*sizeof(struct wl_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              output[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          outputHandleScale(data,output,factor);
          free(output);
        
        break;
    }
    // big-arr
    case 1:
    {
          int factor = 255;
        
          void * data;
        
          int _len_output0 = 65025;
          struct wl_output * output = (struct wl_output *) malloc(_len_output0*sizeof(struct wl_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              output[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          outputHandleScale(data,output,factor);
          free(output);
        
        break;
    }
    // empty
    case 2:
    {
          int factor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          void * data;
        
          int _len_output0 = 1;
          struct wl_output * output = (struct wl_output *) malloc(_len_output0*sizeof(struct wl_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              output[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          outputHandleScale(data,output,factor);
          free(output);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
