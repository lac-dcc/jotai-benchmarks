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
struct gasket_driver_desc {int dummy; } ;
struct gasket_dev {TYPE_1__* internal_desc; } ;
struct TYPE_2__ {struct gasket_driver_desc const* driver_desc; } ;

/* Variables and functions */

const struct gasket_driver_desc *gasket_get_driver_desc(struct gasket_dev *dev)
{
	return dev->internal_desc->driver_desc;
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
          int _len_dev0 = 1;
          struct gasket_dev * dev = (struct gasket_dev *) malloc(_len_dev0*sizeof(struct gasket_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__internal_desc0 = 1;
          dev[_i0].internal_desc = (struct TYPE_2__ *) malloc(_len_dev__i0__internal_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__internal_desc0; _j0++) {
              int _len_dev__i0__internal_desc_driver_desc0 = 1;
          dev[_i0].internal_desc->driver_desc = (const struct gasket_driver_desc *) malloc(_len_dev__i0__internal_desc_driver_desc0*sizeof(const struct gasket_driver_desc));
          for(int _j0 = 0; _j0 < _len_dev__i0__internal_desc_driver_desc0; _j0++) {
              }
          }
          }
          const struct gasket_driver_desc * benchRet = gasket_get_driver_desc(dev);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].internal_desc);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
