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
struct TYPE_3__ {unsigned int width; unsigned int crop_x; unsigned int crop_w; unsigned int height; unsigned int crop_y; unsigned int crop_h; } ;
typedef  TYPE_1__ zbar_image_t ;

/* Variables and functions */

void zbar_image_set_crop (zbar_image_t *img,
                          unsigned x,
                          unsigned y,
                          unsigned w,
                          unsigned h)
{
    unsigned img_w = img->width;
    if(x > img_w) x = img_w;
    if(x + w > img_w) w = img_w - x;
    img->crop_x = x;
    img->crop_w = w;

    unsigned img_h = img->height;
    if(y > img_h) y = img_h;
    if(y + h > img_h) h = img_h - y;
    img->crop_y = y;
    img->crop_h = h;
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
          unsigned int x = 100;
          unsigned int y = 100;
          unsigned int w = 100;
          unsigned int h = 100;
          int _len_img0 = 1;
          struct TYPE_3__ * img = (struct TYPE_3__ *) malloc(_len_img0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_img0; _i0++) {
            img[_i0].width = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_x = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_w = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].height = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_y = ((-2 * (next_i()%2)) + 1) * next_i();
        img[_i0].crop_h = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          zbar_image_set_crop(img,x,y,w,h);
          free(img);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
