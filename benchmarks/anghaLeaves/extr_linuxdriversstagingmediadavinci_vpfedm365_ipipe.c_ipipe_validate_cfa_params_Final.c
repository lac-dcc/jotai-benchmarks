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
struct vpfe_ipipe_cfa {scalar_t__ hpf_thr_2dir; scalar_t__ hpf_slp_2dir; scalar_t__ hp_mix_thr_2dir; scalar_t__ hp_mix_slope_2dir; scalar_t__ dir_thr_2dir; scalar_t__ dir_slope_2dir; scalar_t__ nd_wt_2dir; scalar_t__ hue_fract_daa; scalar_t__ edge_thr_daa; scalar_t__ thr_min_daa; scalar_t__ thr_slope_daa; scalar_t__ slope_min_daa; scalar_t__ slope_slope_daa; scalar_t__ lp_wt_daa; } ;

/* Variables and functions */
 scalar_t__ CFA_DAA_EDG_THR_MASK ; 
 scalar_t__ CFA_DAA_HUE_FRA_MASK ; 
 scalar_t__ CFA_DAA_LP_WT_MASK ; 
 scalar_t__ CFA_DAA_SLP_MIN_MASK ; 
 scalar_t__ CFA_DAA_SLP_SLP_MASK ; 
 scalar_t__ CFA_DAA_THR_MIN_MASK ; 
 scalar_t__ CFA_DAA_THR_SLP_MASK ; 
 scalar_t__ CFA_DIR_SLP_2DIR_MASK ; 
 scalar_t__ CFA_DIR_THR_2DIR_MASK ; 
 scalar_t__ CFA_HPF_MIX_SLP_2DIR_MASK ; 
 scalar_t__ CFA_HPF_MIX_THR_2DIR_MASK ; 
 scalar_t__ CFA_HPF_SLOPE_2DIR_MASK ; 
 scalar_t__ CFA_HPF_THR_2DIR_MASK ; 
 scalar_t__ CFA_ND_WT_2DIR_MASK ; 
 int EINVAL ; 

__attribute__((used)) static int ipipe_validate_cfa_params(struct vpfe_ipipe_cfa *cfa)
{
	if (cfa->hpf_thr_2dir > CFA_HPF_THR_2DIR_MASK ||
	    cfa->hpf_slp_2dir > CFA_HPF_SLOPE_2DIR_MASK ||
	    cfa->hp_mix_thr_2dir > CFA_HPF_MIX_THR_2DIR_MASK ||
	    cfa->hp_mix_slope_2dir > CFA_HPF_MIX_SLP_2DIR_MASK ||
	    cfa->dir_thr_2dir > CFA_DIR_THR_2DIR_MASK ||
	    cfa->dir_slope_2dir > CFA_DIR_SLP_2DIR_MASK ||
	    cfa->nd_wt_2dir > CFA_ND_WT_2DIR_MASK ||
	    cfa->hue_fract_daa > CFA_DAA_HUE_FRA_MASK ||
	    cfa->edge_thr_daa > CFA_DAA_EDG_THR_MASK ||
	    cfa->thr_min_daa > CFA_DAA_THR_MIN_MASK ||
	    cfa->thr_slope_daa > CFA_DAA_THR_SLP_MASK ||
	    cfa->slope_min_daa > CFA_DAA_SLP_MIN_MASK ||
	    cfa->slope_slope_daa > CFA_DAA_SLP_SLP_MASK ||
	    cfa->lp_wt_daa > CFA_DAA_LP_WT_MASK)
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
          int _len_cfa0 = 1;
          struct vpfe_ipipe_cfa * cfa = (struct vpfe_ipipe_cfa *) malloc(_len_cfa0*sizeof(struct vpfe_ipipe_cfa));
          for(int _i0 = 0; _i0 < _len_cfa0; _i0++) {
            cfa[_i0].hpf_thr_2dir = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].hpf_slp_2dir = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].hp_mix_thr_2dir = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].hp_mix_slope_2dir = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].dir_thr_2dir = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].dir_slope_2dir = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].nd_wt_2dir = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].hue_fract_daa = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].edge_thr_daa = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].thr_min_daa = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].thr_slope_daa = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].slope_min_daa = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].slope_slope_daa = ((-2 * (next_i()%2)) + 1) * next_i();
        cfa[_i0].lp_wt_daa = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_cfa_params(cfa);
          printf("%d\n", benchRet); 
          free(cfa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
