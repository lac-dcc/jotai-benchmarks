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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct thermal_cooling_device {struct pwm_fan_ctx* devdata; } ;
struct pwm_fan_ctx {unsigned long pwm_fan_max_state; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int pwm_fan_get_max_state(struct thermal_cooling_device *cdev,
				 unsigned long *state)
{
	struct pwm_fan_ctx *ctx = cdev->devdata;

	if (!ctx)
		return -EINVAL;

	*state = ctx->pwm_fan_max_state;

	return 0;
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_cdev0 = 65025;
          struct thermal_cooling_device * cdev = (struct thermal_cooling_device *) malloc(_len_cdev0*sizeof(struct thermal_cooling_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__devdata0 = 1;
          cdev[_i0].devdata = (struct pwm_fan_ctx *) malloc(_len_cdev__i0__devdata0*sizeof(struct pwm_fan_ctx));
          for(int _j0 = 0; _j0 < _len_cdev__i0__devdata0; _j0++) {
              cdev[_i0].devdata->pwm_fan_max_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_state0 = 65025;
          unsigned long * state = (unsigned long *) malloc(_len_state0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pwm_fan_get_max_state(cdev,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].devdata);
          }
          free(cdev);
          free(state);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_cdev0 = 100;
          struct thermal_cooling_device * cdev = (struct thermal_cooling_device *) malloc(_len_cdev0*sizeof(struct thermal_cooling_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__devdata0 = 1;
          cdev[_i0].devdata = (struct pwm_fan_ctx *) malloc(_len_cdev__i0__devdata0*sizeof(struct pwm_fan_ctx));
          for(int _j0 = 0; _j0 < _len_cdev__i0__devdata0; _j0++) {
              cdev[_i0].devdata->pwm_fan_max_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_state0 = 100;
          unsigned long * state = (unsigned long *) malloc(_len_state0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pwm_fan_get_max_state(cdev,state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].devdata);
          }
          free(cdev);
          free(state);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int _len_cdev0 = 1;
          struct thermal_cooling_device * cdev = (struct thermal_cooling_device *) malloc(_len_cdev0*sizeof(struct thermal_cooling_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__devdata0 = 1;
          cdev[_i0].devdata = (struct pwm_fan_ctx *) malloc(_len_cdev__i0__devdata0*sizeof(struct pwm_fan_ctx));
          for(int _j0 = 0; _j0 < _len_cdev__i0__devdata0; _j0++) {
              cdev[_i0].devdata->pwm_fan_max_state = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_state0 = 1;
          unsigned long * state = (unsigned long *) malloc(_len_state0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = pwm_fan_get_max_state(cdev,state);
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
