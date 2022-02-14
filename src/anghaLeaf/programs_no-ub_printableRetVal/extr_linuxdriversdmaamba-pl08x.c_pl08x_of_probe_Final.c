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
struct pl08x_driver_data {int dummy; } ;
struct device_node {int dummy; } ;
struct amba_device {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static inline int pl08x_of_probe(struct amba_device *adev,
				 struct pl08x_driver_data *pl08x,
				 struct device_node *np)
{
	return -EINVAL;
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
          int _len_adev0 = 1;
          struct amba_device * adev = (struct amba_device *) malloc(_len_adev0*sizeof(struct amba_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pl08x0 = 1;
          struct pl08x_driver_data * pl08x = (struct pl08x_driver_data *) malloc(_len_pl08x0*sizeof(struct pl08x_driver_data));
          for(int _i0 = 0; _i0 < _len_pl08x0; _i0++) {
            pl08x->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np0 = 1;
          struct device_node * np = (struct device_node *) malloc(_len_np0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pl08x_of_probe(adev,pl08x,np);
          printf("%d\n", benchRet); 
          free(adev);
          free(pl08x);
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
