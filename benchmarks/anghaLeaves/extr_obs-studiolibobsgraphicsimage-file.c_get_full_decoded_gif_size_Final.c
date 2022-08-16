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
struct TYPE_4__ {int width; int height; int frame_count; } ;
struct TYPE_5__ {TYPE_1__ gif; } ;
typedef  TYPE_2__ gs_image_file_t ;

/* Variables and functions */

__attribute__((used)) static inline int get_full_decoded_gif_size(gs_image_file_t *image)
{
	return image->gif.width * image->gif.height * 4 * image->gif.frame_count;
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
          int _len_image0 = 1;
          struct TYPE_5__ * image = (struct TYPE_5__ *) malloc(_len_image0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_image0; _i0++) {
            image[_i0].gif.width = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].gif.height = ((-2 * (next_i()%2)) + 1) * next_i();
        image[_i0].gif.frame_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_full_decoded_gif_size(image);
          printf("%d\n", benchRet); 
          free(image);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
