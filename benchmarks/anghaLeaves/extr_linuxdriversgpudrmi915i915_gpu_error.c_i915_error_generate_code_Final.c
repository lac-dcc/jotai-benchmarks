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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct i915_gpu_state {TYPE_1__* engine; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int instdone; } ;
struct TYPE_3__ {int ipehr; TYPE_2__ instdone; scalar_t__ hangcheck_stalled; } ;

/* Variables and functions */
 int I915_NUM_ENGINES ; 

__attribute__((used)) static uint32_t i915_error_generate_code(struct drm_i915_private *dev_priv,
					 struct i915_gpu_state *error,
					 int *engine_id)
{
	uint32_t error_code = 0;
	int i;

	/* IPEHR would be an ideal way to detect errors, as it's the gross
	 * measure of "the command that hung." However, has some very common
	 * synchronization commands which almost always appear in the case
	 * strictly a client bug. Use instdone to differentiate those some.
	 */
	for (i = 0; i < I915_NUM_ENGINES; i++) {
		if (error->engine[i].hangcheck_stalled) {
			if (engine_id)
				*engine_id = i;

			return error->engine[i].ipehr ^
			       error->engine[i].instdone.instdone;
		}
	}

	return error_code;
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
          int _len_dev_priv0 = 65025;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              dev_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_error0 = 65025;
          struct i915_gpu_state * error = (struct i915_gpu_state *) malloc(_len_error0*sizeof(struct i915_gpu_state));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
              int _len_error__i0__engine0 = 1;
          error[_i0].engine = (struct TYPE_3__ *) malloc(_len_error__i0__engine0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_error__i0__engine0; _j0++) {
              error[_i0].engine->ipehr = ((-2 * (next_i()%2)) + 1) * next_i();
          error[_i0].engine->instdone.instdone = ((-2 * (next_i()%2)) + 1) * next_i();
        
          error[_i0].engine->hangcheck_stalled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_engine_id0 = 65025;
          int * engine_id = (int *) malloc(_len_engine_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_engine_id0; _i0++) {
            engine_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = i915_error_generate_code(dev_priv,error,engine_id);
          printf("%d\n", benchRet); 
          free(dev_priv);
          for(int _aux = 0; _aux < _len_error0; _aux++) {
          free(error[_aux].engine);
          }
          free(error);
          free(engine_id);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dev_priv0 = 100;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              dev_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_error0 = 100;
          struct i915_gpu_state * error = (struct i915_gpu_state *) malloc(_len_error0*sizeof(struct i915_gpu_state));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
              int _len_error__i0__engine0 = 1;
          error[_i0].engine = (struct TYPE_3__ *) malloc(_len_error__i0__engine0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_error__i0__engine0; _j0++) {
              error[_i0].engine->ipehr = ((-2 * (next_i()%2)) + 1) * next_i();
          error[_i0].engine->instdone.instdone = ((-2 * (next_i()%2)) + 1) * next_i();
        
          error[_i0].engine->hangcheck_stalled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_engine_id0 = 100;
          int * engine_id = (int *) malloc(_len_engine_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_engine_id0; _i0++) {
            engine_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = i915_error_generate_code(dev_priv,error,engine_id);
          printf("%d\n", benchRet); 
          free(dev_priv);
          for(int _aux = 0; _aux < _len_error0; _aux++) {
          free(error[_aux].engine);
          }
          free(error);
          free(engine_id);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_dev_priv0 = 1;
          struct drm_i915_private * dev_priv = (struct drm_i915_private *) malloc(_len_dev_priv0*sizeof(struct drm_i915_private));
          for(int _i0 = 0; _i0 < _len_dev_priv0; _i0++) {
              dev_priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_error0 = 1;
          struct i915_gpu_state * error = (struct i915_gpu_state *) malloc(_len_error0*sizeof(struct i915_gpu_state));
          for(int _i0 = 0; _i0 < _len_error0; _i0++) {
              int _len_error__i0__engine0 = 1;
          error[_i0].engine = (struct TYPE_3__ *) malloc(_len_error__i0__engine0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_error__i0__engine0; _j0++) {
              error[_i0].engine->ipehr = ((-2 * (next_i()%2)) + 1) * next_i();
          error[_i0].engine->instdone.instdone = ((-2 * (next_i()%2)) + 1) * next_i();
        
          error[_i0].engine->hangcheck_stalled = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_engine_id0 = 1;
          int * engine_id = (int *) malloc(_len_engine_id0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_engine_id0; _i0++) {
            engine_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = i915_error_generate_code(dev_priv,error,engine_id);
          printf("%d\n", benchRet); 
          free(dev_priv);
          for(int _aux = 0; _aux < _len_error0; _aux++) {
          free(error[_aux].engine);
          }
          free(error);
          free(engine_id);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
