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
struct drm_encoder {int dummy; } ;
struct drm_connector {struct drm_encoder* encoder; TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_encoder* best_encoder; } ;

/* Variables and functions */

__attribute__((used)) static struct drm_encoder *drm_connector_get_encoder(struct drm_connector *connector)
{
	/* For atomic drivers only state objects are synchronously updated and
	 * protected by modeset locks, so check those first. */
	if (connector->state)
		return connector->state->best_encoder;
	return connector->encoder;
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
          int _len_connector0 = 1;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
              int _len_connector__i0__encoder0 = 1;
          connector[_i0].encoder = (struct drm_encoder *) malloc(_len_connector__i0__encoder0*sizeof(struct drm_encoder));
          for(int _j0 = 0; _j0 < _len_connector__i0__encoder0; _j0++) {
            connector[_i0].encoder->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_connector__i0__state0 = 1;
          connector[_i0].state = (struct TYPE_2__ *) malloc(_len_connector__i0__state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_connector__i0__state0; _j0++) {
              int _len_connector__i0__state_best_encoder0 = 1;
          connector[_i0].state->best_encoder = (struct drm_encoder *) malloc(_len_connector__i0__state_best_encoder0*sizeof(struct drm_encoder));
          for(int _j0 = 0; _j0 < _len_connector__i0__state_best_encoder0; _j0++) {
            connector[_i0].state->best_encoder->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct drm_encoder * benchRet = drm_connector_get_encoder(connector);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_connector0; _aux++) {
          free(connector[_aux].encoder);
          }
          for(int _aux = 0; _aux < _len_connector0; _aux++) {
          free(connector[_aux].state);
          }
          free(connector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
