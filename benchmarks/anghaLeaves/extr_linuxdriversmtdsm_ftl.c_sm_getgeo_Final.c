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
struct sm_ftl {int /*<<< orphan*/  cylinders; int /*<<< orphan*/  sectors; int /*<<< orphan*/  heads; } ;
struct mtd_blktrans_dev {struct sm_ftl* priv; } ;
struct hd_geometry {int /*<<< orphan*/  cylinders; int /*<<< orphan*/  sectors; int /*<<< orphan*/  heads; } ;

/* Variables and functions */

__attribute__((used)) static int sm_getgeo(struct mtd_blktrans_dev *dev, struct hd_geometry *geo)
{
	struct sm_ftl *ftl = dev->priv;
	geo->heads = ftl->heads;
	geo->sectors = ftl->sectors;
	geo->cylinders = ftl->cylinders;
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
          int _len_dev0 = 1;
          struct mtd_blktrans_dev * dev = (struct mtd_blktrans_dev *) malloc(_len_dev0*sizeof(struct mtd_blktrans_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__priv0 = 1;
          dev[_i0].priv = (struct sm_ftl *) malloc(_len_dev__i0__priv0*sizeof(struct sm_ftl));
          for(int _j0 = 0; _j0 < _len_dev__i0__priv0; _j0++) {
            dev[_i0].priv->cylinders = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].priv->sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].priv->heads = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_geo0 = 1;
          struct hd_geometry * geo = (struct hd_geometry *) malloc(_len_geo0*sizeof(struct hd_geometry));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
            geo[_i0].cylinders = ((-2 * (next_i()%2)) + 1) * next_i();
        geo[_i0].sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        geo[_i0].heads = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sm_getgeo(dev,geo);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].priv);
          }
          free(dev);
          free(geo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
