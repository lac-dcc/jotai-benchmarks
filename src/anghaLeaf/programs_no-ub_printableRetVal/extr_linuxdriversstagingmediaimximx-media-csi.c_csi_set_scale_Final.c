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

/* Type definitions */
typedef  int u32 ;

/* Variables and functions */
 int ERANGE ; 
 int V4L2_SEL_FLAG_GE ; 
 int V4L2_SEL_FLAG_LE ; 

__attribute__((used)) static int csi_set_scale(u32 *compose, u32 crop, u32 flags)
{
	if ((flags & (V4L2_SEL_FLAG_LE | V4L2_SEL_FLAG_GE)) ==
		     (V4L2_SEL_FLAG_LE | V4L2_SEL_FLAG_GE) &&
	    *compose != crop && *compose != crop / 2)
		return -ERANGE;

	if (*compose <= crop / 2 ||
	    (*compose < crop * 3 / 4 && !(flags & V4L2_SEL_FLAG_GE)) ||
	    (*compose < crop && (flags & V4L2_SEL_FLAG_LE)))
		*compose = crop / 2;
	else
		*compose = crop;

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
          int crop = 255;
          int flags = 255;
          int _len_compose0 = 65025;
          int * compose = (int *) malloc(_len_compose0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_compose0; _i0++) {
            compose[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csi_set_scale(compose,crop,flags);
          printf("%d\n", benchRet); 
          free(compose);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
