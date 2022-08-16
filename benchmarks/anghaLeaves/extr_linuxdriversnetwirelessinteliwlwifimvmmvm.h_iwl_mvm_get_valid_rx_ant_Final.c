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
typedef  int u8 ;
struct iwl_mvm {TYPE_2__* fw; TYPE_1__* nvm_data; } ;
struct TYPE_4__ {int valid_rx_ant; } ;
struct TYPE_3__ {int valid_rx_ant; } ;

/* Variables and functions */

__attribute__((used)) static inline u8 iwl_mvm_get_valid_rx_ant(struct iwl_mvm *mvm)
{
	return mvm->nvm_data && mvm->nvm_data->valid_rx_ant ?
	       mvm->fw->valid_rx_ant & mvm->nvm_data->valid_rx_ant :
	       mvm->fw->valid_rx_ant;
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
          int _len_mvm0 = 1;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
              int _len_mvm__i0__fw0 = 1;
          mvm[_i0].fw = (struct TYPE_4__ *) malloc(_len_mvm__i0__fw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__fw0; _j0++) {
            mvm[_i0].fw->valid_rx_ant = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mvm__i0__nvm_data0 = 1;
          mvm[_i0].nvm_data = (struct TYPE_3__ *) malloc(_len_mvm__i0__nvm_data0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__nvm_data0; _j0++) {
            mvm[_i0].nvm_data->valid_rx_ant = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = iwl_mvm_get_valid_rx_ant(mvm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mvm0; _aux++) {
          free(mvm[_aux].fw);
          }
          for(int _aux = 0; _aux < _len_mvm0; _aux++) {
          free(mvm[_aux].nvm_data);
          }
          free(mvm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
