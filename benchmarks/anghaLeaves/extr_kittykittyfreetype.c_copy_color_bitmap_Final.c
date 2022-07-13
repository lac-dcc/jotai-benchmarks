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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  int pixel ;
struct TYPE_4__ {size_t top; size_t bottom; size_t left; size_t right; } ;
typedef  TYPE_1__ Region ;

/* Variables and functions */

__attribute__((used)) static inline void
copy_color_bitmap(uint8_t *src, pixel* dest, Region *src_rect, Region *dest_rect, size_t src_stride, size_t dest_stride) {
    for (size_t sr = src_rect->top, dr = dest_rect->top; sr < src_rect->bottom && dr < dest_rect->bottom; sr++, dr++) {
        pixel *d = dest + dest_stride * dr;
        uint8_t *s = src + src_stride * sr;
        for(size_t sc = src_rect->left, dc = dest_rect->left; sc < src_rect->right && dc < dest_rect->right; sc++, dc++) {
            uint8_t *bgra = s + 4 * sc;
            if (bgra[3]) {
#define C(idx, shift) ( (uint8_t)(((float)bgra[idx] / (float)bgra[3]) * 255) << shift)
                d[dc] = C(2, 24) | C(1, 16) | C(0, 8) | bgra[3];
#undef C
        } else d[dc] = 0;
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
          unsigned long src_stride = 100;
          unsigned long dest_stride = 100;
          int _len_src0 = 1;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 1;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_rect0 = 1;
          struct TYPE_4__ * src_rect = (struct TYPE_4__ *) malloc(_len_src_rect0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src_rect0; _i0++) {
            src_rect[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        src_rect[_i0].bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        src_rect[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        src_rect[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_rect0 = 1;
          struct TYPE_4__ * dest_rect = (struct TYPE_4__ *) malloc(_len_dest_rect0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dest_rect0; _i0++) {
            dest_rect[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        dest_rect[_i0].bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        dest_rect[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        dest_rect[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_color_bitmap(src,dest,src_rect,dest_rect,src_stride,dest_stride);
          free(src);
          free(dest);
          free(src_rect);
          free(dest_rect);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long src_stride = 255;
          unsigned long dest_stride = 255;
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 65025;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_rect0 = 65025;
          struct TYPE_4__ * src_rect = (struct TYPE_4__ *) malloc(_len_src_rect0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src_rect0; _i0++) {
            src_rect[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        src_rect[_i0].bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        src_rect[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        src_rect[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_rect0 = 65025;
          struct TYPE_4__ * dest_rect = (struct TYPE_4__ *) malloc(_len_dest_rect0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dest_rect0; _i0++) {
            dest_rect[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        dest_rect[_i0].bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        dest_rect[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        dest_rect[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_color_bitmap(src,dest,src_rect,dest_rect,src_stride,dest_stride);
          free(src);
          free(dest);
          free(src_rect);
          free(dest_rect);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long src_stride = 10;
          unsigned long dest_stride = 10;
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 100;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src_rect0 = 100;
          struct TYPE_4__ * src_rect = (struct TYPE_4__ *) malloc(_len_src_rect0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_src_rect0; _i0++) {
            src_rect[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        src_rect[_i0].bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        src_rect[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        src_rect[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest_rect0 = 100;
          struct TYPE_4__ * dest_rect = (struct TYPE_4__ *) malloc(_len_dest_rect0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_dest_rect0; _i0++) {
            dest_rect[_i0].top = ((-2 * (next_i()%2)) + 1) * next_i();
        dest_rect[_i0].bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        dest_rect[_i0].left = ((-2 * (next_i()%2)) + 1) * next_i();
        dest_rect[_i0].right = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          copy_color_bitmap(src,dest,src_rect,dest_rect,src_stride,dest_stride);
          free(src);
          free(dest);
          free(src_rect);
          free(dest_rect);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
