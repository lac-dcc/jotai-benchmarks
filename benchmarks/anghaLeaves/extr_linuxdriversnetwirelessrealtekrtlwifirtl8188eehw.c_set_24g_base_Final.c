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
typedef  size_t u32 ;
struct txpower_info_2g {int** index_cck_base; int** index_bw40_base; int** bw20_diff; int** ofdm_diff; int** bw40_diff; int** cck_diff; } ;

/* Variables and functions */
 int MAX_CHNL_GROUP_24G ; 
 int MAX_TX_COUNT ; 

__attribute__((used)) static void set_24g_base(struct txpower_info_2g *pwrinfo24g, u32 rfpath)
{
	int group, txcnt;

	for (group = 0 ; group < MAX_CHNL_GROUP_24G; group++) {
		pwrinfo24g->index_cck_base[rfpath][group] = 0x2D;
		pwrinfo24g->index_bw40_base[rfpath][group] = 0x2D;
	}
	for (txcnt = 0; txcnt < MAX_TX_COUNT; txcnt++) {
		if (txcnt == 0) {
			pwrinfo24g->bw20_diff[rfpath][0] = 0x02;
			pwrinfo24g->ofdm_diff[rfpath][0] = 0x04;
		} else {
			pwrinfo24g->bw20_diff[rfpath][txcnt] = 0xFE;
			pwrinfo24g->bw40_diff[rfpath][txcnt] = 0xFE;
			pwrinfo24g->cck_diff[rfpath][txcnt] =	0xFE;
			pwrinfo24g->ofdm_diff[rfpath][txcnt] = 0xFE;
		}
	}
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
          unsigned long rfpath = 100;
          int _len_pwrinfo24g0 = 1;
          struct txpower_info_2g * pwrinfo24g = (struct txpower_info_2g *) malloc(_len_pwrinfo24g0*sizeof(struct txpower_info_2g));
          for(int _i0 = 0; _i0 < _len_pwrinfo24g0; _i0++) {
              int _len_pwrinfo24g__i0__index_cck_base0 = 1;
          pwrinfo24g[_i0].index_cck_base = (int **) malloc(_len_pwrinfo24g__i0__index_cck_base0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pwrinfo24g__i0__index_cck_base0; _j0++) {
            int _len_pwrinfo24g__i0__index_cck_base1 = 1;
            pwrinfo24g[_i0].index_cck_base[_j0] = (int *) malloc(_len_pwrinfo24g__i0__index_cck_base1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pwrinfo24g__i0__index_cck_base1; _j1++) {
              pwrinfo24g[_i0].index_cck_base[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pwrinfo24g__i0__index_bw40_base0 = 1;
          pwrinfo24g[_i0].index_bw40_base = (int **) malloc(_len_pwrinfo24g__i0__index_bw40_base0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pwrinfo24g__i0__index_bw40_base0; _j0++) {
            int _len_pwrinfo24g__i0__index_bw40_base1 = 1;
            pwrinfo24g[_i0].index_bw40_base[_j0] = (int *) malloc(_len_pwrinfo24g__i0__index_bw40_base1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pwrinfo24g__i0__index_bw40_base1; _j1++) {
              pwrinfo24g[_i0].index_bw40_base[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pwrinfo24g__i0__bw20_diff0 = 1;
          pwrinfo24g[_i0].bw20_diff = (int **) malloc(_len_pwrinfo24g__i0__bw20_diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pwrinfo24g__i0__bw20_diff0; _j0++) {
            int _len_pwrinfo24g__i0__bw20_diff1 = 1;
            pwrinfo24g[_i0].bw20_diff[_j0] = (int *) malloc(_len_pwrinfo24g__i0__bw20_diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pwrinfo24g__i0__bw20_diff1; _j1++) {
              pwrinfo24g[_i0].bw20_diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pwrinfo24g__i0__ofdm_diff0 = 1;
          pwrinfo24g[_i0].ofdm_diff = (int **) malloc(_len_pwrinfo24g__i0__ofdm_diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pwrinfo24g__i0__ofdm_diff0; _j0++) {
            int _len_pwrinfo24g__i0__ofdm_diff1 = 1;
            pwrinfo24g[_i0].ofdm_diff[_j0] = (int *) malloc(_len_pwrinfo24g__i0__ofdm_diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pwrinfo24g__i0__ofdm_diff1; _j1++) {
              pwrinfo24g[_i0].ofdm_diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pwrinfo24g__i0__bw40_diff0 = 1;
          pwrinfo24g[_i0].bw40_diff = (int **) malloc(_len_pwrinfo24g__i0__bw40_diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pwrinfo24g__i0__bw40_diff0; _j0++) {
            int _len_pwrinfo24g__i0__bw40_diff1 = 1;
            pwrinfo24g[_i0].bw40_diff[_j0] = (int *) malloc(_len_pwrinfo24g__i0__bw40_diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pwrinfo24g__i0__bw40_diff1; _j1++) {
              pwrinfo24g[_i0].bw40_diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pwrinfo24g__i0__cck_diff0 = 1;
          pwrinfo24g[_i0].cck_diff = (int **) malloc(_len_pwrinfo24g__i0__cck_diff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_pwrinfo24g__i0__cck_diff0; _j0++) {
            int _len_pwrinfo24g__i0__cck_diff1 = 1;
            pwrinfo24g[_i0].cck_diff[_j0] = (int *) malloc(_len_pwrinfo24g__i0__cck_diff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_pwrinfo24g__i0__cck_diff1; _j1++) {
              pwrinfo24g[_i0].cck_diff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          set_24g_base(pwrinfo24g,rfpath);
          for(int _aux = 0; _aux < _len_pwrinfo24g0; _aux++) {
          free(*(pwrinfo24g[_aux].index_cck_base));
        free(pwrinfo24g[_aux].index_cck_base);
          }
          for(int _aux = 0; _aux < _len_pwrinfo24g0; _aux++) {
          free(*(pwrinfo24g[_aux].index_bw40_base));
        free(pwrinfo24g[_aux].index_bw40_base);
          }
          for(int _aux = 0; _aux < _len_pwrinfo24g0; _aux++) {
          free(*(pwrinfo24g[_aux].bw20_diff));
        free(pwrinfo24g[_aux].bw20_diff);
          }
          for(int _aux = 0; _aux < _len_pwrinfo24g0; _aux++) {
          free(*(pwrinfo24g[_aux].ofdm_diff));
        free(pwrinfo24g[_aux].ofdm_diff);
          }
          for(int _aux = 0; _aux < _len_pwrinfo24g0; _aux++) {
          free(*(pwrinfo24g[_aux].bw40_diff));
        free(pwrinfo24g[_aux].bw40_diff);
          }
          for(int _aux = 0; _aux < _len_pwrinfo24g0; _aux++) {
          free(*(pwrinfo24g[_aux].cck_diff));
        free(pwrinfo24g[_aux].cck_diff);
          }
          free(pwrinfo24g);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
