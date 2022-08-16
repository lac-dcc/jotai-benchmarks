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
struct thermal_cooling_device {struct etnaviv_gpu* devdata; } ;
struct etnaviv_gpu {unsigned long freq_scale; } ;

/* Variables and functions */

__attribute__((used)) static int
etnaviv_gpu_cooling_get_cur_state(struct thermal_cooling_device *cdev,
				  unsigned long *state)
{
	struct etnaviv_gpu *gpu = cdev->devdata;

	*state = gpu->freq_scale;

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
          int _len_cdev0 = 1;
          struct thermal_cooling_device * cdev = (struct thermal_cooling_device *) malloc(_len_cdev0*sizeof(struct thermal_cooling_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__devdata0 = 1;
          cdev[_i0].devdata = (struct etnaviv_gpu *) malloc(_len_cdev__i0__devdata0*sizeof(struct etnaviv_gpu));
          for(int _j0 = 0; _j0 < _len_cdev__i0__devdata0; _j0++) {
            cdev[_i0].devdata->freq_scale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state0 = 1;
          unsigned long * state = (unsigned long *) malloc(_len_state0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = etnaviv_gpu_cooling_get_cur_state(cdev,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].devdata);
          }
          free(cdev);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
