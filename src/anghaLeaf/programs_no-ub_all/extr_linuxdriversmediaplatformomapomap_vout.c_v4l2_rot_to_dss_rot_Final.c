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
typedef  enum dss_rotation { ____Placeholder_dss_rotation } dss_rotation ;

/* Variables and functions */
 int EINVAL ; 
 int dss_rotation_0_degree ; 
 int dss_rotation_180_degree ; 
 int dss_rotation_270_degree ; 
 int dss_rotation_90_degree ; 

__attribute__((used)) static int v4l2_rot_to_dss_rot(int v4l2_rotation,
			enum dss_rotation *rotation, bool mirror)
{
	int ret = 0;

	switch (v4l2_rotation) {
	case 90:
		*rotation = dss_rotation_90_degree;
		break;
	case 180:
		*rotation = dss_rotation_180_degree;
		break;
	case 270:
		*rotation = dss_rotation_270_degree;
		break;
	case 0:
		*rotation = dss_rotation_0_degree;
		break;
	default:
		ret = -EINVAL;
	}
	return ret;
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
          int v4l2_rotation = 255;
          int mirror = 255;
          int _len_rotation0 = 65025;
          enum dss_rotation * rotation = (enum dss_rotation *) malloc(_len_rotation0*sizeof(enum dss_rotation));
          for(int _i0 = 0; _i0 < _len_rotation0; _i0++) {
            rotation[_i0] = 0;
          }
          int benchRet = v4l2_rot_to_dss_rot(v4l2_rotation,rotation,mirror);
          printf("%d\n", benchRet); 
          free(rotation);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
