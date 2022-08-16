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
struct vpfe_subdev_info {int num_inputs; } ;
struct vpfe_device {struct vpfe_config* cfg; } ;
struct vpfe_config {int num_subdevs; struct vpfe_subdev_info* sub_devs; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int vpfe_get_subdev_input_index(struct vpfe_device *vpfe_dev,
					int *subdev_index,
					int *subdev_input_index,
					int app_input_index)
{
	struct vpfe_config *cfg = vpfe_dev->cfg;
	struct vpfe_subdev_info *sdinfo;
	int i, j = 0;

	for (i = 0; i < cfg->num_subdevs; i++) {
		sdinfo = &cfg->sub_devs[i];
		if (app_input_index < (j + sdinfo->num_inputs)) {
			*subdev_index = i;
			*subdev_input_index = app_input_index - j;
			return 0;
		}
		j += sdinfo->num_inputs;
	}
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
          int app_input_index = 100;
          int _len_vpfe_dev0 = 1;
          struct vpfe_device * vpfe_dev = (struct vpfe_device *) malloc(_len_vpfe_dev0*sizeof(struct vpfe_device));
          for(int _i0 = 0; _i0 < _len_vpfe_dev0; _i0++) {
              int _len_vpfe_dev__i0__cfg0 = 1;
          vpfe_dev[_i0].cfg = (struct vpfe_config *) malloc(_len_vpfe_dev__i0__cfg0*sizeof(struct vpfe_config));
          for(int _j0 = 0; _j0 < _len_vpfe_dev__i0__cfg0; _j0++) {
            vpfe_dev[_i0].cfg->num_subdevs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vpfe_dev__i0__cfg_sub_devs0 = 1;
          vpfe_dev[_i0].cfg->sub_devs = (struct vpfe_subdev_info *) malloc(_len_vpfe_dev__i0__cfg_sub_devs0*sizeof(struct vpfe_subdev_info));
          for(int _j0 = 0; _j0 < _len_vpfe_dev__i0__cfg_sub_devs0; _j0++) {
            vpfe_dev[_i0].cfg->sub_devs->num_inputs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_subdev_index0 = 1;
          int * subdev_index = (int *) malloc(_len_subdev_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subdev_index0; _i0++) {
            subdev_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_subdev_input_index0 = 1;
          int * subdev_input_index = (int *) malloc(_len_subdev_input_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_subdev_input_index0; _i0++) {
            subdev_input_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vpfe_get_subdev_input_index(vpfe_dev,subdev_index,subdev_input_index,app_input_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vpfe_dev0; _aux++) {
          free(vpfe_dev[_aux].cfg);
          }
          free(vpfe_dev);
          free(subdev_index);
          free(subdev_input_index);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
