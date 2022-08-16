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
struct vpfe_ipipe_yee {int en; int en_halo_red; scalar_t__ hpf_shft; scalar_t__ hpf_coef_00; scalar_t__ hpf_coef_01; scalar_t__ hpf_coef_02; scalar_t__ hpf_coef_10; scalar_t__ hpf_coef_11; scalar_t__ hpf_coef_12; scalar_t__ hpf_coef_20; scalar_t__ hpf_coef_21; scalar_t__ hpf_coef_22; scalar_t__ yee_thr; scalar_t__ es_gain; scalar_t__ es_thr1; scalar_t__ es_thr2; scalar_t__ es_gain_grad; scalar_t__ es_ofst_grad; scalar_t__* table; } ;

/* Variables and functions */
 int EINVAL ; 
 int VPFE_IPIPE_MAX_SIZE_YEE_LUT ; 
 scalar_t__ YEE_COEF_MASK ; 
 scalar_t__ YEE_ENTRY_MASK ; 
 scalar_t__ YEE_ES_GAIN_MASK ; 
 scalar_t__ YEE_ES_THR1_MASK ; 
 scalar_t__ YEE_HPF_SHIFT_MASK ; 
 scalar_t__ YEE_THR_MASK ; 

__attribute__((used)) static int ipipe_validate_yee_params(struct vpfe_ipipe_yee *yee)
{
	int i;

	if (yee->en > 1 ||
	    yee->en_halo_red > 1 ||
	    yee->hpf_shft > YEE_HPF_SHIFT_MASK)
		return -EINVAL;

	if (yee->hpf_coef_00 > YEE_COEF_MASK ||
	    yee->hpf_coef_01 > YEE_COEF_MASK ||
	    yee->hpf_coef_02 > YEE_COEF_MASK ||
	    yee->hpf_coef_10 > YEE_COEF_MASK ||
	    yee->hpf_coef_11 > YEE_COEF_MASK ||
	    yee->hpf_coef_12 > YEE_COEF_MASK ||
	    yee->hpf_coef_20 > YEE_COEF_MASK ||
	    yee->hpf_coef_21 > YEE_COEF_MASK ||
	    yee->hpf_coef_22 > YEE_COEF_MASK)
		return -EINVAL;

	if (yee->yee_thr > YEE_THR_MASK ||
	    yee->es_gain > YEE_ES_GAIN_MASK ||
	    yee->es_thr1 > YEE_ES_THR1_MASK ||
	    yee->es_thr2 > YEE_THR_MASK ||
	    yee->es_gain_grad > YEE_THR_MASK ||
	    yee->es_ofst_grad > YEE_THR_MASK)
		return -EINVAL;

	for (i = 0; i < VPFE_IPIPE_MAX_SIZE_YEE_LUT; i++)
		if (yee->table[i] > YEE_ENTRY_MASK)
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
          int _len_yee0 = 1;
          struct vpfe_ipipe_yee * yee = (struct vpfe_ipipe_yee *) malloc(_len_yee0*sizeof(struct vpfe_ipipe_yee));
          for(int _i0 = 0; _i0 < _len_yee0; _i0++) {
            yee[_i0].en = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].en_halo_red = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_shft = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_coef_00 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_coef_01 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_coef_02 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_coef_10 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_coef_11 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_coef_12 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_coef_20 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_coef_21 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].hpf_coef_22 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].yee_thr = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].es_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].es_thr1 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].es_thr2 = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].es_gain_grad = ((-2 * (next_i()%2)) + 1) * next_i();
        yee[_i0].es_ofst_grad = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_yee__i0__table0 = 1;
          yee[_i0].table = (long *) malloc(_len_yee__i0__table0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_yee__i0__table0; _j0++) {
            yee[_i0].table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ipipe_validate_yee_params(yee);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_yee0; _aux++) {
          free(yee[_aux].table);
          }
          free(yee);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
