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
       0            empty\n\
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
typedef  int u8 ;
struct ieee_ets {int* tc_tsa; scalar_t__* tc_tx_bw; } ;

/* Variables and functions */
#define  IEEE_8021QAZ_TSA_ETS 130 
#define  IEEE_8021QAZ_TSA_STRICT 129 
#define  IEEE_8021QAZ_TSA_VENDOR 128 
 int MLX5E_LOWEST_PRIO_GROUP ; 
 int MLX5E_VENDOR_TC_GROUP_NUM ; 

__attribute__((used)) static void mlx5e_build_tc_group(struct ieee_ets *ets, u8 *tc_group, int max_tc)
{
	bool any_tc_mapped_to_ets = false;
	bool ets_zero_bw = false;
	int strict_group;
	int i;

	for (i = 0; i <= max_tc; i++) {
		if (ets->tc_tsa[i] == IEEE_8021QAZ_TSA_ETS) {
			any_tc_mapped_to_ets = true;
			if (!ets->tc_tx_bw[i])
				ets_zero_bw = true;
		}
	}

	/* strict group has higher priority than ets group */
	strict_group = MLX5E_LOWEST_PRIO_GROUP;
	if (any_tc_mapped_to_ets)
		strict_group++;
	if (ets_zero_bw)
		strict_group++;

	for (i = 0; i <= max_tc; i++) {
		switch (ets->tc_tsa[i]) {
		case IEEE_8021QAZ_TSA_VENDOR:
			tc_group[i] = MLX5E_VENDOR_TC_GROUP_NUM;
			break;
		case IEEE_8021QAZ_TSA_STRICT:
			tc_group[i] = strict_group++;
			break;
		case IEEE_8021QAZ_TSA_ETS:
			tc_group[i] = MLX5E_LOWEST_PRIO_GROUP;
			if (ets->tc_tx_bw[i] && ets_zero_bw)
				tc_group[i] = MLX5E_LOWEST_PRIO_GROUP + 1;
			break;
		}
	}
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int max_tc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ets0 = 1;
          struct ieee_ets * ets = (struct ieee_ets *) malloc(_len_ets0*sizeof(struct ieee_ets));
          for(int _i0 = 0; _i0 < _len_ets0; _i0++) {
              int _len_ets__i0__tc_tsa0 = 1;
          ets[_i0].tc_tsa = (int *) malloc(_len_ets__i0__tc_tsa0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ets__i0__tc_tsa0; _j0++) {
            ets[_i0].tc_tsa[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ets__i0__tc_tx_bw0 = 1;
          ets[_i0].tc_tx_bw = (long *) malloc(_len_ets__i0__tc_tx_bw0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ets__i0__tc_tx_bw0; _j0++) {
            ets[_i0].tc_tx_bw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_tc_group0 = 1;
          int * tc_group = (int *) malloc(_len_tc_group0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tc_group0; _i0++) {
            tc_group[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mlx5e_build_tc_group(ets,tc_group,max_tc);
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tsa);
          }
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tx_bw);
          }
          free(ets);
          free(tc_group);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
