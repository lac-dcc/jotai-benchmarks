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
struct thermal_cooling_device {int dummy; } ;
struct mlxsw_thermal {struct thermal_cooling_device** cdevs; } ;

/* Variables and functions */
 int ENODEV ; 
 int MLXSW_MFCR_PWMS_MAX ; 

__attribute__((used)) static int mlxsw_get_cooling_device_idx(struct mlxsw_thermal *thermal,
					struct thermal_cooling_device *cdev)
{
	int i;

	for (i = 0; i < MLXSW_MFCR_PWMS_MAX; i++)
		if (thermal->cdevs[i] == cdev)
			return i;

	return -ENODEV;
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
          int _len_thermal0 = 1;
          struct mlxsw_thermal * thermal = (struct mlxsw_thermal *) malloc(_len_thermal0*sizeof(struct mlxsw_thermal));
          for(int _i0 = 0; _i0 < _len_thermal0; _i0++) {
              int _len_thermal__i0__cdevs0 = 1;
          thermal[_i0].cdevs = (struct thermal_cooling_device **) malloc(_len_thermal__i0__cdevs0*sizeof(struct thermal_cooling_device *));
          for(int _j0 = 0; _j0 < _len_thermal__i0__cdevs0; _j0++) {
            int _len_thermal__i0__cdevs1 = 1;
            thermal[_i0].cdevs[_j0] = (struct thermal_cooling_device *) malloc(_len_thermal__i0__cdevs1*sizeof(struct thermal_cooling_device));
            for(int _j1 = 0; _j1 < _len_thermal__i0__cdevs1; _j1++) {
              thermal[_i0].cdevs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_cdev0 = 1;
          struct thermal_cooling_device * cdev = (struct thermal_cooling_device *) malloc(_len_cdev0*sizeof(struct thermal_cooling_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
            cdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlxsw_get_cooling_device_idx(thermal,cdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_thermal0; _aux++) {
          free(*(thermal[_aux].cdevs));
        free(thermal[_aux].cdevs);
          }
          free(thermal);
          free(cdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
