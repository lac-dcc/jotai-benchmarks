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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct v4l2_subdev {scalar_t__ fwnode; } ;
struct TYPE_2__ {scalar_t__ fwnode; } ;
struct v4l2_async_subdev {TYPE_1__ match; } ;

/* Variables and functions */

__attribute__((used)) static bool match_fwnode(struct v4l2_subdev *sd, struct v4l2_async_subdev *asd)
{
	return sd->fwnode == asd->match.fwnode;
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
          int _len_sd0 = 1;
          struct v4l2_subdev * sd = (struct v4l2_subdev *) malloc(_len_sd0*sizeof(struct v4l2_subdev));
          for(int _i0 = 0; _i0 < _len_sd0; _i0++) {
            sd[_i0].fwnode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_asd0 = 1;
          struct v4l2_async_subdev * asd = (struct v4l2_async_subdev *) malloc(_len_asd0*sizeof(struct v4l2_async_subdev));
          for(int _i0 = 0; _i0 < _len_asd0; _i0++) {
            asd[_i0].match.fwnode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = match_fwnode(sd,asd);
          printf("%d\n", benchRet); 
          free(sd);
          free(asd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
