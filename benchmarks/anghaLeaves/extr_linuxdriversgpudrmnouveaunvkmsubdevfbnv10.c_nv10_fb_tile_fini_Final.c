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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct nvkm_fb_tile {scalar_t__ zcomp; scalar_t__ pitch; scalar_t__ limit; scalar_t__ addr; } ;
struct nvkm_fb {int dummy; } ;

/* Variables and functions */

void
nv10_fb_tile_fini(struct nvkm_fb *fb, int i, struct nvkm_fb_tile *tile)
{
	tile->addr  = 0;
	tile->limit = 0;
	tile->pitch = 0;
	tile->zcomp = 0;
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
          int i = 100;
          int _len_fb0 = 1;
          struct nvkm_fb * fb = (struct nvkm_fb *) malloc(_len_fb0*sizeof(struct nvkm_fb));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tile0 = 1;
          struct nvkm_fb_tile * tile = (struct nvkm_fb_tile *) malloc(_len_tile0*sizeof(struct nvkm_fb_tile));
          for(int _i0 = 0; _i0 < _len_tile0; _i0++) {
            tile[_i0].zcomp = ((-2 * (next_i()%2)) + 1) * next_i();
        tile[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        tile[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
        tile[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nv10_fb_tile_fini(fb,i,tile);
          free(fb);
          free(tile);
        
        break;
    }
    // big-arr
    case 1:
    {
          int i = 255;
          int _len_fb0 = 65025;
          struct nvkm_fb * fb = (struct nvkm_fb *) malloc(_len_fb0*sizeof(struct nvkm_fb));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tile0 = 65025;
          struct nvkm_fb_tile * tile = (struct nvkm_fb_tile *) malloc(_len_tile0*sizeof(struct nvkm_fb_tile));
          for(int _i0 = 0; _i0 < _len_tile0; _i0++) {
            tile[_i0].zcomp = ((-2 * (next_i()%2)) + 1) * next_i();
        tile[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        tile[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
        tile[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nv10_fb_tile_fini(fb,i,tile);
          free(fb);
          free(tile);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int i = 10;
          int _len_fb0 = 100;
          struct nvkm_fb * fb = (struct nvkm_fb *) malloc(_len_fb0*sizeof(struct nvkm_fb));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tile0 = 100;
          struct nvkm_fb_tile * tile = (struct nvkm_fb_tile *) malloc(_len_tile0*sizeof(struct nvkm_fb_tile));
          for(int _i0 = 0; _i0 < _len_tile0; _i0++) {
            tile[_i0].zcomp = ((-2 * (next_i()%2)) + 1) * next_i();
        tile[_i0].pitch = ((-2 * (next_i()%2)) + 1) * next_i();
        tile[_i0].limit = ((-2 * (next_i()%2)) + 1) * next_i();
        tile[_i0].addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nv10_fb_tile_fini(fb,i,tile);
          free(fb);
          free(tile);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
