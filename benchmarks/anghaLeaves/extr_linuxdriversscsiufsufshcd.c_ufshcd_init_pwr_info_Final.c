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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int lane_rx; int lane_tx; scalar_t__ hs_rate; void* pwr_tx; void* pwr_rx; void* gear_tx; void* gear_rx; } ;
struct ufs_hba {TYPE_1__ pwr_info; } ;

/* Variables and functions */
 void* SLOWAUTO_MODE ; 
 void* UFS_PWM_G1 ; 

__attribute__((used)) static void ufshcd_init_pwr_info(struct ufs_hba *hba)
{
	hba->pwr_info.gear_rx = UFS_PWM_G1;
	hba->pwr_info.gear_tx = UFS_PWM_G1;
	hba->pwr_info.lane_rx = 1;
	hba->pwr_info.lane_tx = 1;
	hba->pwr_info.pwr_rx = SLOWAUTO_MODE;
	hba->pwr_info.pwr_tx = SLOWAUTO_MODE;
	hba->pwr_info.hs_rate = 0;
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
          int _len_hba0 = 1;
          struct ufs_hba * hba = (struct ufs_hba *) malloc(_len_hba0*sizeof(struct ufs_hba));
          for(int _i0 = 0; _i0 < _len_hba0; _i0++) {
            hba[_i0].pwr_info.lane_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].pwr_info.lane_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        hba[_i0].pwr_info.hs_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ufshcd_init_pwr_info(hba);
          free(hba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
