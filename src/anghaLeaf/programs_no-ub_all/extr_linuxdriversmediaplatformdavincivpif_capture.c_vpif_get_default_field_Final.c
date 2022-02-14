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
struct vpif_interface {scalar_t__ if_type; } ;
typedef  enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;

/* Variables and functions */
 int V4L2_FIELD_INTERLACED ; 
 int V4L2_FIELD_NONE ; 
 scalar_t__ VPIF_IF_RAW_BAYER ; 

__attribute__((used)) static inline enum v4l2_field vpif_get_default_field(
				struct vpif_interface *iface)
{
	return (iface->if_type == VPIF_IF_RAW_BAYER) ? V4L2_FIELD_NONE :
						V4L2_FIELD_INTERLACED;
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
          int _len_iface0 = 1;
          struct vpif_interface * iface = (struct vpif_interface *) malloc(_len_iface0*sizeof(struct vpif_interface));
          for(int _i0 = 0; _i0 < _len_iface0; _i0++) {
            iface->if_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum v4l2_field benchRet = vpif_get_default_field(iface);
          printf("{{other_type}} %p\n", &benchRet); 
          free(iface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
