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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct smu8_hwmgr {int uvd_power_gated; int vce_power_gated; int samu_power_gated; int acp_power_gated; int pgacpinit; } ;
struct pp_hwmgr {struct smu8_hwmgr* backend; } ;

/* Variables and functions */

__attribute__((used)) static void smu8_init_power_gate_state(struct pp_hwmgr *hwmgr)
{
	struct smu8_hwmgr *data = hwmgr->backend;

	data->uvd_power_gated = false;
	data->vce_power_gated = false;
	data->samu_power_gated = false;
	data->acp_power_gated = false;
	data->pgacpinit = true;
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct smu8_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct smu8_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->uvd_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->vce_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->samu_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->acp_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->pgacpinit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          smu8_init_power_gate_state(hwmgr);
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].backend);
          }
          free(hwmgr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hwmgr0 = 65025;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct smu8_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct smu8_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->uvd_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->vce_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->samu_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->acp_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->pgacpinit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          smu8_init_power_gate_state(hwmgr);
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].backend);
          }
          free(hwmgr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hwmgr0 = 100;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
              int _len_hwmgr__i0__backend0 = 1;
          hwmgr[_i0].backend = (struct smu8_hwmgr *) malloc(_len_hwmgr__i0__backend0*sizeof(struct smu8_hwmgr));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__backend0; _j0++) {
            hwmgr[_i0].backend->uvd_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->vce_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->samu_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->acp_power_gated = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].backend->pgacpinit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          smu8_init_power_gate_state(hwmgr);
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].backend);
          }
          free(hwmgr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
