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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct vpfe_ipipe_otfdpc_3_0_cfg {scalar_t__ act_adj_shf; scalar_t__ det_thr; scalar_t__ det_slp; scalar_t__ det_thr_min; scalar_t__ det_thr_max; scalar_t__ corr_thr; scalar_t__ corr_slp; scalar_t__ corr_thr_min; scalar_t__ corr_thr_max; } ;
struct TYPE_5__ {scalar_t__ r; scalar_t__ gr; scalar_t__ gb; scalar_t__ b; } ;
struct TYPE_4__ {scalar_t__ r; scalar_t__ gr; scalar_t__ gb; scalar_t__ b; } ;
struct vpfe_ipipe_otfdpc_2_0_cfg {TYPE_2__ corr_thr; TYPE_1__ det_thr; } ;
struct TYPE_6__ {struct vpfe_ipipe_otfdpc_3_0_cfg dpc_3_0; struct vpfe_ipipe_otfdpc_2_0_cfg dpc_2_0; } ;
struct vpfe_ipipe_otfdpc {int en; scalar_t__ alg; TYPE_3__ alg_cfg; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ OTFDPC_DPC2_THR_MASK ; 
 scalar_t__ OTF_DPC3_0_CORR_MASK ; 
 scalar_t__ OTF_DPC3_0_DET_MASK ; 
 scalar_t__ OTF_DPC3_0_SHF_MASK ; 
 scalar_t__ OTF_DPC3_0_SLP_MASK ; 
 scalar_t__ VPFE_IPIPE_OTFDPC_2_0 ; 

__attribute__((used)) static int ipipe_validate_otfdpc_params(struct vpfe_ipipe_otfdpc *dpc_param)
{
	struct vpfe_ipipe_otfdpc_2_0_cfg *dpc_2_0;
	struct vpfe_ipipe_otfdpc_3_0_cfg *dpc_3_0;

	if (dpc_param->en > 1)
		return -EINVAL;

	if (dpc_param->alg == VPFE_IPIPE_OTFDPC_2_0) {
		dpc_2_0 = &dpc_param->alg_cfg.dpc_2_0;
		if (dpc_2_0->det_thr.r > OTFDPC_DPC2_THR_MASK ||
		    dpc_2_0->det_thr.gr > OTFDPC_DPC2_THR_MASK ||
		    dpc_2_0->det_thr.gb > OTFDPC_DPC2_THR_MASK ||
		    dpc_2_0->det_thr.b > OTFDPC_DPC2_THR_MASK ||
		    dpc_2_0->corr_thr.r > OTFDPC_DPC2_THR_MASK ||
		    dpc_2_0->corr_thr.gr > OTFDPC_DPC2_THR_MASK ||
		    dpc_2_0->corr_thr.gb > OTFDPC_DPC2_THR_MASK ||
		    dpc_2_0->corr_thr.b > OTFDPC_DPC2_THR_MASK)
			return -EINVAL;
		return 0;
	}

	dpc_3_0 = &dpc_param->alg_cfg.dpc_3_0;

	if (dpc_3_0->act_adj_shf > OTF_DPC3_0_SHF_MASK ||
	    dpc_3_0->det_thr > OTF_DPC3_0_DET_MASK ||
	    dpc_3_0->det_slp > OTF_DPC3_0_SLP_MASK ||
	    dpc_3_0->det_thr_min > OTF_DPC3_0_DET_MASK ||
	    dpc_3_0->det_thr_max > OTF_DPC3_0_DET_MASK ||
	    dpc_3_0->corr_thr > OTF_DPC3_0_CORR_MASK ||
	    dpc_3_0->corr_slp > OTF_DPC3_0_SLP_MASK ||
	    dpc_3_0->corr_thr_min > OTF_DPC3_0_CORR_MASK ||
	    dpc_3_0->corr_thr_max > OTF_DPC3_0_CORR_MASK)
		return -EINVAL;

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
          int _len_dpc_param0 = 1;
          struct vpfe_ipipe_otfdpc * dpc_param = (struct vpfe_ipipe_otfdpc *) malloc(_len_dpc_param0*sizeof(struct vpfe_ipipe_otfdpc));
          for(int _i0 = 0; _i0 < _len_dpc_param0; _i0++) {
            dpc_param[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_3_0.act_adj_shf = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_3_0.det_thr = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_3_0.det_slp = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_3_0.det_thr_min = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_3_0.det_thr_max = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_3_0.corr_thr = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_3_0.corr_slp = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_3_0.corr_thr_min = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_3_0.corr_thr_max = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_2_0.corr_thr.r = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_2_0.corr_thr.gr = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_2_0.corr_thr.gb = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_2_0.corr_thr.b = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_2_0.det_thr.r = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_2_0.det_thr.gr = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_2_0.det_thr.gb = ((-2 * (next_i()%2)) + 1) * next_i();
        dpc_param[_i0].alg_cfg.dpc_2_0.det_thr.b = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_otfdpc_params(dpc_param);
          printf("%d\n", benchRet); 
          free(dpc_param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
