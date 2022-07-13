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
typedef  int /*<<< orphan*/  u16 ;
struct tc_configuration {int /*<<< orphan*/  desc_credits_max; } ;
struct ixgbe_dcb_config {struct tc_configuration* tc_config; } ;

/* Variables and functions */
 int MAX_TRAFFIC_CLASS ; 

void ixgbe_dcb_unpack_max(struct ixgbe_dcb_config *cfg, u16 *max)
{
	struct tc_configuration *tc_config = &cfg->tc_config[0];
	int tc;

	for (tc = 0; tc < MAX_TRAFFIC_CLASS; tc++)
		max[tc] = tc_config[tc].desc_credits_max;
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
          int _len_cfg0 = 1;
          struct ixgbe_dcb_config * cfg = (struct ixgbe_dcb_config *) malloc(_len_cfg0*sizeof(struct ixgbe_dcb_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
              int _len_cfg__i0__tc_config0 = 1;
          cfg[_i0].tc_config = (struct tc_configuration *) malloc(_len_cfg__i0__tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_cfg__i0__tc_config0; _j0++) {
            cfg[_i0].tc_config->desc_credits_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_max0 = 1;
          int * max = (int *) malloc(_len_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_dcb_unpack_max(cfg,max);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].tc_config);
          }
          free(cfg);
          free(max);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cfg0 = 65025;
          struct ixgbe_dcb_config * cfg = (struct ixgbe_dcb_config *) malloc(_len_cfg0*sizeof(struct ixgbe_dcb_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
              int _len_cfg__i0__tc_config0 = 1;
          cfg[_i0].tc_config = (struct tc_configuration *) malloc(_len_cfg__i0__tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_cfg__i0__tc_config0; _j0++) {
            cfg[_i0].tc_config->desc_credits_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_max0 = 65025;
          int * max = (int *) malloc(_len_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_dcb_unpack_max(cfg,max);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].tc_config);
          }
          free(cfg);
          free(max);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cfg0 = 100;
          struct ixgbe_dcb_config * cfg = (struct ixgbe_dcb_config *) malloc(_len_cfg0*sizeof(struct ixgbe_dcb_config));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
              int _len_cfg__i0__tc_config0 = 1;
          cfg[_i0].tc_config = (struct tc_configuration *) malloc(_len_cfg__i0__tc_config0*sizeof(struct tc_configuration));
          for(int _j0 = 0; _j0 < _len_cfg__i0__tc_config0; _j0++) {
            cfg[_i0].tc_config->desc_credits_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_max0 = 100;
          int * max = (int *) malloc(_len_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max0; _i0++) {
            max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_dcb_unpack_max(cfg,max);
          for(int _aux = 0; _aux < _len_cfg0; _aux++) {
          free(cfg[_aux].tc_config);
          }
          free(cfg);
          free(max);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
