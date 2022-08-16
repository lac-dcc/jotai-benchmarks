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
struct wlr_output {struct sway_output* data; } ;
struct sway_output {int dummy; } ;

/* Variables and functions */

struct sway_output *output_from_wlr_output(struct wlr_output *output) {
	return output->data;
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
          int _len_output0 = 1;
          struct wlr_output * output = (struct wlr_output *) malloc(_len_output0*sizeof(struct wlr_output));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
              int _len_output__i0__data0 = 1;
          output[_i0].data = (struct sway_output *) malloc(_len_output__i0__data0*sizeof(struct sway_output));
          for(int _j0 = 0; _j0 < _len_output__i0__data0; _j0++) {
            output[_i0].data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sway_output * benchRet = output_from_wlr_output(output);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_output0; _aux++) {
          free(output[_aux].data);
          }
          free(output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
