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
struct thumb2 {int width; int max_height; } ;

/* Variables and functions */

__attribute__((used)) static int thumbs2_want_resize (int width, int height, struct thumb2 *u) {
  return width >= u->width && height >= u->max_height;
  /*
  RectangleInfo resize_rect, crop_rect;
  int res = get_thumb2_transforms (width, height, u, &resize_rect, &crop_rect);
  return (res & THUMB2_RESIZE_MASK) ? 1 : 0;
  */
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
          int width = 100;
          int height = 100;
          int _len_u0 = 1;
          struct thumb2 * u = (struct thumb2 *) malloc(_len_u0*sizeof(struct thumb2));
          for(int _i0 = 0; _i0 < _len_u0; _i0++) {
            u[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        u[_i0].max_height = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = thumbs2_want_resize(width,height,u);
          printf("%d\n", benchRet); 
          free(u);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
