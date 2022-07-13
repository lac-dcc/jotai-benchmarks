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
       0            big-arr\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct kimage {unsigned long nr_segments; TYPE_1__* segment; } ;
struct TYPE_2__ {unsigned long mem; unsigned long memsz; } ;

/* Variables and functions */

int kimage_is_destination_range(struct kimage *image,
					unsigned long start,
					unsigned long end)
{
	unsigned long i;

	for (i = 0; i < image->nr_segments; i++) {
		unsigned long mstart, mend;

		mstart = image->segment[i].mem;
		mend = mstart + image->segment[i].memsz;
		if ((end > mstart) && (start < mend))
			return 1;
	}

	return 0;
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

    // big-arr
    case 0:
    {
          unsigned long start = 255;
          unsigned long end = 255;
          int _len_image0 = 65025;
          struct kimage * image = (struct kimage *) malloc(_len_image0*sizeof(struct kimage));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].nr_segments = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_image__i0__segment0 = 1;
          image[_i0].segment = (struct TYPE_2__ *) malloc(_len_image__i0__segment0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_image__i0__segment0; _j0++) {
            image[_i0].segment->mem = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].segment->memsz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = kimage_is_destination_range(image,start,end);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_image0; _aux++) {
          free(image[_aux].segment);
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
