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
typedef  void* u8 ;
struct hal_data_8188e {void* CurrentBW4024GTxPwrIdx; void* CurrentBW2024GTxPwrIdx; void* CurrentOfdm24GTxPwrIdx; void* CurrentCckTxPwrIdx; } ;
struct adapter {struct hal_data_8188e* HalData; } ;

/* Variables and functions */

__attribute__((used)) static void phy_power_index_check(struct adapter *adapt, u8 channel,
				  u8 *cck_pwr, u8 *ofdm_pwr, u8 *bw20_pwr,
				  u8 *bw40_pwr)
{
	struct hal_data_8188e *hal_data = adapt->HalData;

	hal_data->CurrentCckTxPwrIdx = cck_pwr[0];
	hal_data->CurrentOfdm24GTxPwrIdx = ofdm_pwr[0];
	hal_data->CurrentBW2024GTxPwrIdx = bw20_pwr[0];
	hal_data->CurrentBW4024GTxPwrIdx = bw40_pwr[0];
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
          int _len_adapt0 = 1;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
              }
          }
          void * channel;
          int _len_cck_pwr0 = 1;
          void ** cck_pwr = (void **) malloc(_len_cck_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_cck_pwr0; _i0++) {
          }
          int _len_ofdm_pwr0 = 1;
          void ** ofdm_pwr = (void **) malloc(_len_ofdm_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_ofdm_pwr0; _i0++) {
          }
          int _len_bw20_pwr0 = 1;
          void ** bw20_pwr = (void **) malloc(_len_bw20_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_bw20_pwr0; _i0++) {
          }
          int _len_bw40_pwr0 = 1;
          void ** bw40_pwr = (void **) malloc(_len_bw40_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_bw40_pwr0; _i0++) {
          }
          phy_power_index_check(adapt,channel,cck_pwr,ofdm_pwr,bw20_pwr,bw40_pwr);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          for(int i1 = 0; i1 < _len_cck_pwr0; i1++) {
            int _len_cck_pwr1 = 1;
              }
          free(cck_pwr);
          for(int i1 = 0; i1 < _len_ofdm_pwr0; i1++) {
            int _len_ofdm_pwr1 = 1;
              }
          free(ofdm_pwr);
          for(int i1 = 0; i1 < _len_bw20_pwr0; i1++) {
            int _len_bw20_pwr1 = 1;
              }
          free(bw20_pwr);
          for(int i1 = 0; i1 < _len_bw40_pwr0; i1++) {
            int _len_bw40_pwr1 = 1;
              }
          free(bw40_pwr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapt0 = 65025;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
              }
          }
          void * channel;
          int _len_cck_pwr0 = 65025;
          void ** cck_pwr = (void **) malloc(_len_cck_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_cck_pwr0; _i0++) {
          }
          int _len_ofdm_pwr0 = 65025;
          void ** ofdm_pwr = (void **) malloc(_len_ofdm_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_ofdm_pwr0; _i0++) {
          }
          int _len_bw20_pwr0 = 65025;
          void ** bw20_pwr = (void **) malloc(_len_bw20_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_bw20_pwr0; _i0++) {
          }
          int _len_bw40_pwr0 = 65025;
          void ** bw40_pwr = (void **) malloc(_len_bw40_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_bw40_pwr0; _i0++) {
          }
          phy_power_index_check(adapt,channel,cck_pwr,ofdm_pwr,bw20_pwr,bw40_pwr);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          for(int i1 = 0; i1 < _len_cck_pwr0; i1++) {
            int _len_cck_pwr1 = 1;
              }
          free(cck_pwr);
          for(int i1 = 0; i1 < _len_ofdm_pwr0; i1++) {
            int _len_ofdm_pwr1 = 1;
              }
          free(ofdm_pwr);
          for(int i1 = 0; i1 < _len_bw20_pwr0; i1++) {
            int _len_bw20_pwr1 = 1;
              }
          free(bw20_pwr);
          for(int i1 = 0; i1 < _len_bw40_pwr0; i1++) {
            int _len_bw40_pwr1 = 1;
              }
          free(bw40_pwr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapt0 = 100;
          struct adapter * adapt = (struct adapter *) malloc(_len_adapt0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapt0; _i0++) {
              int _len_adapt__i0__HalData0 = 1;
          adapt[_i0].HalData = (struct hal_data_8188e *) malloc(_len_adapt__i0__HalData0*sizeof(struct hal_data_8188e));
          for(int _j0 = 0; _j0 < _len_adapt__i0__HalData0; _j0++) {
              }
          }
          void * channel;
          int _len_cck_pwr0 = 100;
          void ** cck_pwr = (void **) malloc(_len_cck_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_cck_pwr0; _i0++) {
          }
          int _len_ofdm_pwr0 = 100;
          void ** ofdm_pwr = (void **) malloc(_len_ofdm_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_ofdm_pwr0; _i0++) {
          }
          int _len_bw20_pwr0 = 100;
          void ** bw20_pwr = (void **) malloc(_len_bw20_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_bw20_pwr0; _i0++) {
          }
          int _len_bw40_pwr0 = 100;
          void ** bw40_pwr = (void **) malloc(_len_bw40_pwr0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_bw40_pwr0; _i0++) {
          }
          phy_power_index_check(adapt,channel,cck_pwr,ofdm_pwr,bw20_pwr,bw40_pwr);
          for(int _aux = 0; _aux < _len_adapt0; _aux++) {
          free(adapt[_aux].HalData);
          }
          free(adapt);
          for(int i1 = 0; i1 < _len_cck_pwr0; i1++) {
            int _len_cck_pwr1 = 1;
              }
          free(cck_pwr);
          for(int i1 = 0; i1 < _len_ofdm_pwr0; i1++) {
            int _len_ofdm_pwr1 = 1;
              }
          free(ofdm_pwr);
          for(int i1 = 0; i1 < _len_bw20_pwr0; i1++) {
            int _len_bw20_pwr1 = 1;
              }
          free(bw20_pwr);
          for(int i1 = 0; i1 < _len_bw40_pwr0; i1++) {
            int _len_bw40_pwr1 = 1;
              }
          free(bw40_pwr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
