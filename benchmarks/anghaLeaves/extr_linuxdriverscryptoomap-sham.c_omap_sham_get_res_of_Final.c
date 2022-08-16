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
struct resource {int dummy; } ;
struct omap_sham_dev {int dummy; } ;
struct device {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int omap_sham_get_res_of(struct omap_sham_dev *dd,
		struct device *dev, struct resource *res)
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

    // int-bounds
    case 0:
    {
          int _len_dd0 = 1;
          struct omap_sham_dev * dd = (struct omap_sham_dev *) malloc(_len_dd0*sizeof(struct omap_sham_dev));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
            dd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_res0 = 1;
          struct resource * res = (struct resource *) malloc(_len_res0*sizeof(struct resource));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = omap_sham_get_res_of(dd,dev,res);
          printf("%d\n", benchRet); 
          free(dd);
          free(dev);
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
