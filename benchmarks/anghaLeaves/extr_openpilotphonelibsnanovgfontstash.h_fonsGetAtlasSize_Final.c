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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int width; int height; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef  TYPE_2__ FONScontext ;

/* Variables and functions */

void fonsGetAtlasSize(FONScontext* stash, int* width, int* height)
{
	if (stash == NULL) return;
	*width = stash->params.width;
	*height = stash->params.height;
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
          int _len_stash0 = 1;
          struct TYPE_5__ * stash = (struct TYPE_5__ *) malloc(_len_stash0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_stash0; _i0++) {
            stash[_i0].params.width = ((-2 * (next_i()%2)) + 1) * next_i();
        stash[_i0].params.height = ((-2 * (next_i()%2)) + 1) * next_i();
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
          fonsGetAtlasSize(stash,width,height);
          free(stash);
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
