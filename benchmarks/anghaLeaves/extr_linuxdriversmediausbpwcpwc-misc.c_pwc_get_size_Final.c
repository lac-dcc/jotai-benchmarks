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
       1            big-arr-10x\n\
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
struct pwc_device {int image_mask; } ;

/* Variables and functions */
 int PSZ_MAX ; 
 int** pwc_image_sizes ; 

int pwc_get_size(struct pwc_device *pdev, int width, int height)
{
	int i;

	/* Find the largest size supported by the camera that fits into the
	   requested size. */
	for (i = PSZ_MAX - 1; i >= 0; i--) {
		if (!(pdev->image_mask & (1 << i)))
			continue;

		if (pwc_image_sizes[i][0] <= width &&
		    pwc_image_sizes[i][1] <= height)
			return i;
	}

	/* No mode found, return the smallest mode we have */
	for (i = 0; i < PSZ_MAX; i++) {
		if (pdev->image_mask & (1 << i))
			return i;
	}

	/* Never reached there always is atleast one supported mode */
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

    // int-bounds
    case 0:
    {
          int width = 100;
          int height = 100;
          int _len_pdev0 = 1;
          struct pwc_device * pdev = (struct pwc_device *) malloc(_len_pdev0*sizeof(struct pwc_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].image_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pwc_get_size(pdev,width,height);
          printf("%d\n", benchRet); 
          free(pdev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int width = 10;
          int height = 10;
          int _len_pdev0 = 100;
          struct pwc_device * pdev = (struct pwc_device *) malloc(_len_pdev0*sizeof(struct pwc_device));
          for(int _i0 = 0; _i0 < _len_pdev0; _i0++) {
            pdev[_i0].image_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pwc_get_size(pdev,width,height);
          printf("%d\n", benchRet); 
          free(pdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
