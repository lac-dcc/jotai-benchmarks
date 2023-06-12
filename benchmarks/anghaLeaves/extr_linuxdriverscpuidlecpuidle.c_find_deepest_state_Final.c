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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
struct cpuidle_state_usage {scalar_t__ disable; } ;
struct cpuidle_state {unsigned int exit_latency; unsigned int flags; int /*<<< orphan*/  enter_s2idle; scalar_t__ disabled; } ;
struct cpuidle_driver {int state_count; struct cpuidle_state* states; } ;
struct cpuidle_device {struct cpuidle_state_usage* states_usage; } ;

/* Variables and functions */

__attribute__((used)) static int find_deepest_state(struct cpuidle_driver *drv,
			      struct cpuidle_device *dev,
			      unsigned int max_latency,
			      unsigned int forbidden_flags,
			      bool s2idle)
{
	unsigned int latency_req = 0;
	int i, ret = 0;

	for (i = 1; i < drv->state_count; i++) {
		struct cpuidle_state *s = &drv->states[i];
		struct cpuidle_state_usage *su = &dev->states_usage[i];

		if (s->disabled || su->disable || s->exit_latency <= latency_req
		    || s->exit_latency > max_latency
		    || (s->flags & forbidden_flags)
		    || (s2idle && !s->enter_s2idle))
			continue;

		latency_req = s->exit_latency;
		ret = i;
	}
	return ret;
}

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
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          unsigned int max_latency = 100;
        
          unsigned int forbidden_flags = 100;
        
          int s2idle = 100;
        
          int _len_drv0 = 1;
          struct cpuidle_driver * drv = (struct cpuidle_driver *) malloc(_len_drv0*sizeof(struct cpuidle_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              drv[_i0].state_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drv__i0__states0 = 1;
          drv[_i0].states = (struct cpuidle_state *) malloc(_len_drv__i0__states0*sizeof(struct cpuidle_state));
          for(int _j0 = 0; _j0 < _len_drv__i0__states0; _j0++) {
              drv[_i0].states->exit_latency = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->enter_s2idle = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->disabled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_dev0 = 1;
          struct cpuidle_device * dev = (struct cpuidle_device *) malloc(_len_dev0*sizeof(struct cpuidle_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__states_usage0 = 1;
          dev[_i0].states_usage = (struct cpuidle_state_usage *) malloc(_len_dev__i0__states_usage0*sizeof(struct cpuidle_state_usage));
          for(int _j0 = 0; _j0 < _len_dev__i0__states_usage0; _j0++) {
              dev[_i0].states_usage->disable = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = find_deepest_state(drv,dev,max_latency,forbidden_flags,s2idle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].states);
          }
          free(drv);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].states_usage);
          }
          free(dev);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          unsigned int max_latency = 255;
        
          unsigned int forbidden_flags = 255;
        
          int s2idle = 255;
        
          int _len_drv0 = 65025;
          struct cpuidle_driver * drv = (struct cpuidle_driver *) malloc(_len_drv0*sizeof(struct cpuidle_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              drv[_i0].state_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drv__i0__states0 = 1;
          drv[_i0].states = (struct cpuidle_state *) malloc(_len_drv__i0__states0*sizeof(struct cpuidle_state));
          for(int _j0 = 0; _j0 < _len_drv__i0__states0; _j0++) {
              drv[_i0].states->exit_latency = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->enter_s2idle = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->disabled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_dev0 = 65025;
          struct cpuidle_device * dev = (struct cpuidle_device *) malloc(_len_dev0*sizeof(struct cpuidle_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__states_usage0 = 1;
          dev[_i0].states_usage = (struct cpuidle_state_usage *) malloc(_len_dev__i0__states_usage0*sizeof(struct cpuidle_state_usage));
          for(int _j0 = 0; _j0 < _len_dev__i0__states_usage0; _j0++) {
              dev[_i0].states_usage->disable = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = find_deepest_state(drv,dev,max_latency,forbidden_flags,s2idle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].states);
          }
          free(drv);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].states_usage);
          }
          free(dev);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          unsigned int max_latency = 10;
        
          unsigned int forbidden_flags = 10;
        
          int s2idle = 10;
        
          int _len_drv0 = 100;
          struct cpuidle_driver * drv = (struct cpuidle_driver *) malloc(_len_drv0*sizeof(struct cpuidle_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              drv[_i0].state_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drv__i0__states0 = 1;
          drv[_i0].states = (struct cpuidle_state *) malloc(_len_drv__i0__states0*sizeof(struct cpuidle_state));
          for(int _j0 = 0; _j0 < _len_drv__i0__states0; _j0++) {
              drv[_i0].states->exit_latency = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->enter_s2idle = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->disabled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_dev0 = 100;
          struct cpuidle_device * dev = (struct cpuidle_device *) malloc(_len_dev0*sizeof(struct cpuidle_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__states_usage0 = 1;
          dev[_i0].states_usage = (struct cpuidle_state_usage *) malloc(_len_dev__i0__states_usage0*sizeof(struct cpuidle_state_usage));
          for(int _j0 = 0; _j0 < _len_dev__i0__states_usage0; _j0++) {
              dev[_i0].states_usage->disable = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = find_deepest_state(drv,dev,max_latency,forbidden_flags,s2idle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].states);
          }
          free(drv);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].states_usage);
          }
          free(dev);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
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
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 19
          // ------------------------------- 

          unsigned int max_latency = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned int forbidden_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int s2idle = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_drv0 = 1;
          struct cpuidle_driver * drv = (struct cpuidle_driver *) malloc(_len_drv0*sizeof(struct cpuidle_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              drv[_i0].state_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drv__i0__states0 = 1;
          drv[_i0].states = (struct cpuidle_state *) malloc(_len_drv__i0__states0*sizeof(struct cpuidle_state));
          for(int _j0 = 0; _j0 < _len_drv__i0__states0; _j0++) {
              drv[_i0].states->exit_latency = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->enter_s2idle = ((-2 * (next_i()%2)) + 1) * next_i();
          drv[_i0].states->disabled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_dev0 = 1;
          struct cpuidle_device * dev = (struct cpuidle_device *) malloc(_len_dev0*sizeof(struct cpuidle_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__states_usage0 = 1;
          dev[_i0].states_usage = (struct cpuidle_state_usage *) malloc(_len_dev__i0__states_usage0*sizeof(struct cpuidle_state_usage));
          for(int _j0 = 0; _j0 < _len_dev__i0__states_usage0; _j0++) {
              dev[_i0].states_usage->disable = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = find_deepest_state(drv,dev,max_latency,forbidden_flags,s2idle);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].states);
          }
          free(drv);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].states_usage);
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
