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
struct mpv_global {TYPE_1__* config; } ;
struct m_config {int dummy; } ;
struct TYPE_2__ {struct m_config* root; } ;

/* Variables and functions */

struct m_config *mp_get_root_config(struct mpv_global *global)
{
    return global->config->root;
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
          int _len_global0 = 1;
          struct mpv_global * global = (struct mpv_global *) malloc(_len_global0*sizeof(struct mpv_global));
          for(int _i0 = 0; _i0 < _len_global0; _i0++) {
              int _len_global__i0__config0 = 1;
          global[_i0].config = (struct TYPE_2__ *) malloc(_len_global__i0__config0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_global__i0__config0; _j0++) {
              int _len_global__i0__config_root0 = 1;
          global[_i0].config->root = (struct m_config *) malloc(_len_global__i0__config_root0*sizeof(struct m_config));
          for(int _j0 = 0; _j0 < _len_global__i0__config_root0; _j0++) {
            global[_i0].config->root->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct m_config * benchRet = mp_get_root_config(global);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_global0; _aux++) {
          free(global[_aux].config);
          }
          free(global);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
