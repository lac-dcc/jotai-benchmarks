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
typedef  int uint32 ;
typedef  int SVGAOverlayFormat ;

/* Variables and functions */
#define  VMWARE_FOURCC_UYVY 130 
#define  VMWARE_FOURCC_YUY2 129 
#define  VMWARE_FOURCC_YV12 128 

__attribute__((used)) static inline bool
VMwareVideoGetAttributes(const SVGAOverlayFormat format,    /* IN */
                         uint32 *width,                     /* IN / OUT */
                         uint32 *height,                    /* IN / OUT */
                         uint32 *size,                      /* OUT */
                         uint32 *pitches,                   /* OUT (optional) */
                         uint32 *offsets)                   /* OUT (optional) */
{
    int tmp;

    *width = (*width + 1) & ~1;

    if (offsets) {
        offsets[0] = 0;
    }

    switch (format) {
    case VMWARE_FOURCC_YV12:
       *height = (*height + 1) & ~1;
       *size = (*width) * (*height);

       if (pitches) {
          pitches[0] = *width;
       }

       if (offsets) {
          offsets[1] = *size;
       }

       tmp = *width >> 1;

       if (pitches) {
          pitches[1] = pitches[2] = tmp;
       }

       tmp *= (*height >> 1);
       *size += tmp;

       if (offsets) {
          offsets[2] = *size;
       }

       *size += tmp;
       break;

    case VMWARE_FOURCC_YUY2:
    case VMWARE_FOURCC_UYVY:
       *size = *width * 2;

       if (pitches) {
          pitches[0] = *size;
       }

       *size *= *height;
       break;

    default:
       return false;
    }

    return true;
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
          const int format = 100;
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
          int _len_size0 = 1;
          int * size = (int *) malloc(_len_size0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_size0; _i0++) {
            size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pitches0 = 1;
          int * pitches = (int *) malloc(_len_pitches0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pitches0; _i0++) {
            pitches[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offsets0 = 1;
          int * offsets = (int *) malloc(_len_offsets0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_offsets0; _i0++) {
            offsets[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = VMwareVideoGetAttributes(format,width,height,size,pitches,offsets);
          printf("%d\n", benchRet); 
          free(width);
          free(height);
          free(size);
          free(pitches);
          free(offsets);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
