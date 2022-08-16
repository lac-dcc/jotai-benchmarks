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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct vpfe_hw_if_param {int if_type; int /*<<< orphan*/  hdpol; int /*<<< orphan*/  vdpol; } ;
struct TYPE_3__ {int /*<<< orphan*/  hd_pol; int /*<<< orphan*/  vd_pol; } ;
struct TYPE_4__ {int if_type; TYPE_1__ ycbcr; } ;

/* Variables and functions */
 int EINVAL ; 
#define  VPFE_BT656 131 
#define  VPFE_BT656_10BIT 130 
#define  VPFE_YCBCR_SYNC_16 129 
#define  VPFE_YCBCR_SYNC_8 128 
 TYPE_2__ ccdc_cfg ; 

__attribute__((used)) static int ccdc_set_hw_if_params(struct vpfe_hw_if_param *params)
{
	ccdc_cfg.if_type = params->if_type;

	switch (params->if_type) {
	case VPFE_BT656:
	case VPFE_YCBCR_SYNC_16:
	case VPFE_YCBCR_SYNC_8:
	case VPFE_BT656_10BIT:
		ccdc_cfg.ycbcr.vd_pol = params->vdpol;
		ccdc_cfg.ycbcr.hd_pol = params->hdpol;
		break;
	default:
		/* TODO add support for raw bayer here */
		return -EINVAL;
	}
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
          int _len_params0 = 1;
          struct vpfe_hw_if_param * params = (struct vpfe_hw_if_param *) malloc(_len_params0*sizeof(struct vpfe_hw_if_param));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].if_type = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].hdpol = ((-2 * (next_i()%2)) + 1) * next_i();
        params[_i0].vdpol = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ccdc_set_hw_if_params(params);
          printf("%d\n", benchRet); 
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
