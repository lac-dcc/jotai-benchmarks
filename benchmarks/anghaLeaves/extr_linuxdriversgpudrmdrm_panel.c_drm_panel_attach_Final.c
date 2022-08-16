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
struct drm_panel {int /*<<< orphan*/  drm; struct drm_connector* connector; } ;
struct drm_connector {int /*<<< orphan*/  dev; } ;

/* Variables and functions */
 int EBUSY ; 

int drm_panel_attach(struct drm_panel *panel, struct drm_connector *connector)
{
	if (panel->connector)
		return -EBUSY;

	panel->connector = connector;
	panel->drm = connector->dev;

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
          int _len_panel0 = 1;
          struct drm_panel * panel = (struct drm_panel *) malloc(_len_panel0*sizeof(struct drm_panel));
          for(int _i0 = 0; _i0 < _len_panel0; _i0++) {
            panel[_i0].drm = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_panel__i0__connector0 = 1;
          panel[_i0].connector = (struct drm_connector *) malloc(_len_panel__i0__connector0*sizeof(struct drm_connector));
          for(int _j0 = 0; _j0 < _len_panel__i0__connector0; _j0++) {
            panel[_i0].connector->dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_connector0 = 1;
          struct drm_connector * connector = (struct drm_connector *) malloc(_len_connector0*sizeof(struct drm_connector));
          for(int _i0 = 0; _i0 < _len_connector0; _i0++) {
            connector[_i0].dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = drm_panel_attach(panel,connector);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_panel0; _aux++) {
          free(panel[_aux].connector);
          }
          free(panel);
          free(connector);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
