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
struct sh_eth_cpu_data {int fcftr_value; scalar_t__ trscer_err_mask; scalar_t__ eesr_err_check; scalar_t__ tx_check; scalar_t__ fdr_value; scalar_t__ ecsipr_value; scalar_t__ ecsr_value; } ;

/* Variables and functions */
 scalar_t__ DEFAULT_ECSIPR_INIT ; 
 scalar_t__ DEFAULT_ECSR_INIT ; 
 scalar_t__ DEFAULT_EESR_ERR_CHECK ; 
 scalar_t__ DEFAULT_FDR_INIT ; 
 int DEFAULT_FIFO_F_D_RFD ; 
 int DEFAULT_FIFO_F_D_RFF ; 
 scalar_t__ DEFAULT_TRSCER_ERR_MASK ; 
 scalar_t__ DEFAULT_TX_CHECK ; 

__attribute__((used)) static void sh_eth_set_default_cpu_data(struct sh_eth_cpu_data *cd)
{
	if (!cd->ecsr_value)
		cd->ecsr_value = DEFAULT_ECSR_INIT;

	if (!cd->ecsipr_value)
		cd->ecsipr_value = DEFAULT_ECSIPR_INIT;

	if (!cd->fcftr_value)
		cd->fcftr_value = DEFAULT_FIFO_F_D_RFF |
				  DEFAULT_FIFO_F_D_RFD;

	if (!cd->fdr_value)
		cd->fdr_value = DEFAULT_FDR_INIT;

	if (!cd->tx_check)
		cd->tx_check = DEFAULT_TX_CHECK;

	if (!cd->eesr_err_check)
		cd->eesr_err_check = DEFAULT_EESR_ERR_CHECK;

	if (!cd->trscer_err_mask)
		cd->trscer_err_mask = DEFAULT_TRSCER_ERR_MASK;
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
          int _len_cd0 = 1;
          struct sh_eth_cpu_data * cd = (struct sh_eth_cpu_data *) malloc(_len_cd0*sizeof(struct sh_eth_cpu_data));
          for(int _i0 = 0; _i0 < _len_cd0; _i0++) {
            cd[_i0].fcftr_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cd[_i0].trscer_err_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        cd[_i0].eesr_err_check = ((-2 * (next_i()%2)) + 1) * next_i();
        cd[_i0].tx_check = ((-2 * (next_i()%2)) + 1) * next_i();
        cd[_i0].fdr_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cd[_i0].ecsipr_value = ((-2 * (next_i()%2)) + 1) * next_i();
        cd[_i0].ecsr_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sh_eth_set_default_cpu_data(cd);
          free(cd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
