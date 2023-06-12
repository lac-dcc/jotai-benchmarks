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
struct ieee_ets {int* tc_tsa; int* tc_tx_bw; } ;

/* Variables and functions */
#define  IEEE_8021QAZ_TSA_ETS 130 
#define  IEEE_8021QAZ_TSA_STRICT 129 
#define  IEEE_8021QAZ_TSA_VENDOR 128 
 int MLX5E_MAX_BW_ALLOC ; 

__attribute__((used)) static void mlx5e_build_tc_tx_bw(struct ieee_ets *ets, u8 *tc_tx_bw,
				 u8 *tc_group, int max_tc)
{
	int bw_for_ets_zero_bw_tc = 0;
	int last_ets_zero_bw_tc = -1;
	int num_ets_zero_bw = 0;
	int i;

	for (i = 0; i <= max_tc; i++) {
		if (ets->tc_tsa[i] == IEEE_8021QAZ_TSA_ETS &&
		    !ets->tc_tx_bw[i]) {
			num_ets_zero_bw++;
			last_ets_zero_bw_tc = i;
		}
	}

	if (num_ets_zero_bw)
		bw_for_ets_zero_bw_tc = MLX5E_MAX_BW_ALLOC / num_ets_zero_bw;

	for (i = 0; i <= max_tc; i++) {
		switch (ets->tc_tsa[i]) {
		case IEEE_8021QAZ_TSA_VENDOR:
			tc_tx_bw[i] = MLX5E_MAX_BW_ALLOC;
			break;
		case IEEE_8021QAZ_TSA_STRICT:
			tc_tx_bw[i] = MLX5E_MAX_BW_ALLOC;
			break;
		case IEEE_8021QAZ_TSA_ETS:
			tc_tx_bw[i] = ets->tc_tx_bw[i] ?
				      ets->tc_tx_bw[i] :
				      bw_for_ets_zero_bw_tc;
			break;
		}
	}

	/* Make sure the total bw for ets zero bw group is 100% */
	if (last_ets_zero_bw_tc != -1)
		tc_tx_bw[last_ets_zero_bw_tc] +=
			MLX5E_MAX_BW_ALLOC % num_ets_zero_bw;
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
          ets[_i0].tc_tx_bw = (int *) malloc(_len_ets__i0__tc_tx_bw0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ets__i0__tc_tx_bw0; _j0++) {
            ets[_i0].tc_tx_bw[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int _len_tc_tx_bw0 = 1;
          int * tc_tx_bw = (int *) malloc(_len_tc_tx_bw0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tc_tx_bw0; _i0++) {
            tc_tx_bw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_tc_group0 = 1;
          int * tc_group = (int *) malloc(_len_tc_group0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tc_group0; _i0++) {
            tc_group[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mlx5e_build_tc_tx_bw(ets,tc_tx_bw,tc_group,max_tc);
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tsa);
          }
          for(int _aux = 0; _aux < _len_ets0; _aux++) {
          free(ets[_aux].tc_tx_bw);
          }
          free(ets);
          free(tc_tx_bw);
          free(tc_group);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
