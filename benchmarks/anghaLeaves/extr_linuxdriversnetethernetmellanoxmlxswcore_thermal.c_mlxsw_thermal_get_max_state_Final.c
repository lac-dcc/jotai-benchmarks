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

/* Variables and functions */
 unsigned long MLXSW_THERMAL_MAX_STATE ; 

__attribute__((used)) static int mlxsw_thermal_get_max_state(struct thermal_cooling_device *cdev,
				       unsigned long *p_state)
{
	*p_state = MLXSW_THERMAL_MAX_STATE;
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
            cdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_state0 = 1;
          unsigned long * p_state = (unsigned long *) malloc(_len_p_state0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_p_state0; _i0++) {
            p_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlxsw_thermal_get_max_state(cdev,p_state);
          printf("%d\n", benchRet); 
          free(cdev);
          free(p_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
