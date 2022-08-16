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
struct vpfe_ipipe_nf {int en; scalar_t__ shft_val; scalar_t__ spread_val; int apply_lsc_gain; scalar_t__ edge_det_min_thr; scalar_t__ edge_det_max_thr; scalar_t__* thr; scalar_t__* str; } ;

/* Variables and functions */
 scalar_t__ D2F_EDGE_DET_THR_MASK ; 
 scalar_t__ D2F_SHFT_VAL_MASK ; 
 scalar_t__ D2F_SPR_VAL_MASK ; 
 scalar_t__ D2F_STR_VAL_MASK ; 
 scalar_t__ D2F_THR_VAL_MASK ; 
 int EINVAL ; 
 int VPFE_IPIPE_NF_STR_TABLE_SIZE ; 
 int VPFE_IPIPE_NF_THR_TABLE_SIZE ; 

__attribute__((used)) static int ipipe_validate_nf_params(struct vpfe_ipipe_nf *nf_param)
{
	int i;

	if (nf_param->en > 1 || nf_param->shft_val > D2F_SHFT_VAL_MASK ||
	    nf_param->spread_val > D2F_SPR_VAL_MASK ||
	    nf_param->apply_lsc_gain > 1 ||
	    nf_param->edge_det_min_thr > D2F_EDGE_DET_THR_MASK ||
	    nf_param->edge_det_max_thr > D2F_EDGE_DET_THR_MASK)
		return -EINVAL;

	for (i = 0; i < VPFE_IPIPE_NF_THR_TABLE_SIZE; i++)
		if (nf_param->thr[i] > D2F_THR_VAL_MASK)
			return -EINVAL;

	for (i = 0; i < VPFE_IPIPE_NF_STR_TABLE_SIZE; i++)
		if (nf_param->str[i] > D2F_STR_VAL_MASK)
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
          int _len_nf_param0 = 1;
          struct vpfe_ipipe_nf * nf_param = (struct vpfe_ipipe_nf *) malloc(_len_nf_param0*sizeof(struct vpfe_ipipe_nf));
          for(int _i0 = 0; _i0 < _len_nf_param0; _i0++) {
            nf_param[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
        nf_param[_i0].shft_val = ((-2 * (next_i()%2)) + 1) * next_i();
        nf_param[_i0].spread_val = ((-2 * (next_i()%2)) + 1) * next_i();
        nf_param[_i0].apply_lsc_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        nf_param[_i0].edge_det_min_thr = ((-2 * (next_i()%2)) + 1) * next_i();
        nf_param[_i0].edge_det_max_thr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_nf_param__i0__thr0 = 1;
          nf_param[_i0].thr = (long *) malloc(_len_nf_param__i0__thr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_nf_param__i0__thr0; _j0++) {
            nf_param[_i0].thr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nf_param__i0__str0 = 1;
          nf_param[_i0].str = (long *) malloc(_len_nf_param__i0__str0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_nf_param__i0__str0; _j0++) {
            nf_param[_i0].str[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipipe_validate_nf_params(nf_param);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_nf_param0; _aux++) {
          free(nf_param[_aux].thr);
          }
          for(int _aux = 0; _aux < _len_nf_param0; _aux++) {
          free(nf_param[_aux].str);
          }
          free(nf_param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
