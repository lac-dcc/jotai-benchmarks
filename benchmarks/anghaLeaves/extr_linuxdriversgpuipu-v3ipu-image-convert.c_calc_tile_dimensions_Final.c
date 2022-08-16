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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct ipu_image_tile {int height; int width; int size; int stride; int rot_stride; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct ipu_image_convert_image {int num_rows; int num_cols; TYPE_3__* fmt; TYPE_2__ base; struct ipu_image_tile* tile; } ;
struct ipu_image_convert_ctx {int num_tiles; } ;
struct TYPE_6__ {int bpp; scalar_t__ planar; } ;

/* Variables and functions */

__attribute__((used)) static void calc_tile_dimensions(struct ipu_image_convert_ctx *ctx,
				 struct ipu_image_convert_image *image)
{
	int i;

	for (i = 0; i < ctx->num_tiles; i++) {
		struct ipu_image_tile *tile = &image->tile[i];

		tile->height = image->base.pix.height / image->num_rows;
		tile->width = image->base.pix.width / image->num_cols;
		tile->size = ((tile->height * image->fmt->bpp) >> 3) *
			tile->width;

		if (image->fmt->planar) {
			tile->stride = tile->width;
			tile->rot_stride = tile->height;
		} else {
			tile->stride =
				(image->fmt->bpp * tile->width) >> 3;
			tile->rot_stride =
				(image->fmt->bpp * tile->height) >> 3;
		}
	}
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
          int _len_ctx0 = 1;
          struct ipu_image_convert_ctx * ctx = (struct ipu_image_convert_ctx *) malloc(_len_ctx0*sizeof(struct ipu_image_convert_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].num_tiles = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_image0 = 1;
          struct ipu_image_convert_image * image = (struct ipu_image_convert_image *) malloc(_len_image0*sizeof(struct ipu_image_convert_image));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].num_rows = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].num_cols = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__fmt0 = 1;
          image[_i0].fmt = (struct TYPE_6__ *) malloc(_len_image__i0__fmt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_image__i0__fmt0; _j0++) {
            image[_i0].fmt->bpp = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].fmt->planar = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        image[_i0].base.pix.height = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].base.pix.width = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__tile0 = 1;
          image[_i0].tile = (struct ipu_image_tile *) malloc(_len_image__i0__tile0*sizeof(struct ipu_image_tile));
          for(int _j0 = 0; _j0 < _len_image__i0__tile0; _j0++) {
            image[_i0].tile->height = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].tile->width = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].tile->size = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].tile->stride = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].tile->rot_stride = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          calc_tile_dimensions(ctx,image);
          free(ctx);
          for(int _aux = 0; _aux < _len_image0; _aux++) {
          free(image[_aux].fmt);
          }
          for(int _aux = 0; _aux < _len_image0; _aux++) {
          free(image[_aux].tile);
          }
          free(image);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
