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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_6__ {float left; float right; float top; float bottom; } ;
struct TYPE_7__ {scalar_t__ src_height; scalar_t__ src_y; TYPE_1__ src_rect; scalar_t__ src_width; scalar_t__ src_x; } ;
typedef  TYPE_2__ ImageRef ;
typedef  TYPE_3__ Image ;

/* Variables and functions */

__attribute__((used)) static inline void
update_src_rect(ImageRef *ref, Image *img) {
    // The src rect in OpenGL co-ords [0, 1] with origin at top-left corner of image
    ref->src_rect.left = (float)ref->src_x / (float)img->width;
    ref->src_rect.right = (float)(ref->src_x + ref->src_width) / (float)img->width;
    ref->src_rect.top = (float)ref->src_y / (float)img->height;
    ref->src_rect.bottom = (float)(ref->src_y + ref->src_height) / (float)img->height;
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
          int _len_ref0 = 1;
          struct TYPE_7__ * ref = (struct TYPE_7__ *) malloc(_len_ref0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_ref0; _i0++) {
            ref[_i0].src_height = ((-2 * (next_i()%2)) + 1) * next_i();
        ref[_i0].src_y = ((-2 * (next_i()%2)) + 1) * next_i();
        ref[_i0].src_rect.left = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ref[_i0].src_rect.right = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ref[_i0].src_rect.top = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ref[_i0].src_rect.bottom = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        ref[_i0].src_width = ((-2 * (next_i()%2)) + 1) * next_i();
        ref[_i0].src_x = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_img0 = 1;
          struct TYPE_8__ * img = (struct TYPE_8__ *) malloc(_len_img0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_src_rect(ref,img);
          free(ref);
          free(img);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
