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
typedef  int u64 ;
struct i40iw_sc_dev {scalar_t__ is_pf; } ;
struct i40iw_hmc_info {TYPE_1__* hmc_obj; } ;
struct TYPE_2__ {int cnt; int size; } ;

/* Variables and functions */
 int I40IW_HMC_IW_PBLE ; 
 int I40IW_HMC_IW_QP ; 

__attribute__((used)) static u64 i40iw_est_sd(struct i40iw_sc_dev *dev, struct i40iw_hmc_info *hmc_info)
{
	int i;
	u64 size = 0;
	u64 sd;

	for (i = I40IW_HMC_IW_QP; i < I40IW_HMC_IW_PBLE; i++)
		size += hmc_info->hmc_obj[i].cnt * hmc_info->hmc_obj[i].size;

	if (dev->is_pf)
		size += hmc_info->hmc_obj[I40IW_HMC_IW_PBLE].cnt * hmc_info->hmc_obj[I40IW_HMC_IW_PBLE].size;

	if (size & 0x1FFFFF)
		sd = (size >> 21) + 1; /* add 1 for remainder */
	else
		sd = size >> 21;

	if (!dev->is_pf) {
		/* 2MB alignment for VF PBLE HMC */
		size = hmc_info->hmc_obj[I40IW_HMC_IW_PBLE].cnt * hmc_info->hmc_obj[I40IW_HMC_IW_PBLE].size;
		if (size & 0x1FFFFF)
			sd += (size >> 21) + 1; /* add 1 for remainder */
		else
			sd += size >> 21;
	}

	return sd;
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
          int _len_dev0 = 1;
          struct i40iw_sc_dev * dev = (struct i40iw_sc_dev *) malloc(_len_dev0*sizeof(struct i40iw_sc_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].is_pf = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hmc_info0 = 1;
          struct i40iw_hmc_info * hmc_info = (struct i40iw_hmc_info *) malloc(_len_hmc_info0*sizeof(struct i40iw_hmc_info));
          for(int _i0 = 0; _i0 < _len_hmc_info0; _i0++) {
              int _len_hmc_info__i0__hmc_obj0 = 1;
          hmc_info[_i0].hmc_obj = (struct TYPE_2__ *) malloc(_len_hmc_info__i0__hmc_obj0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hmc_info__i0__hmc_obj0; _j0++) {
            hmc_info[_i0].hmc_obj->cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        hmc_info[_i0].hmc_obj->size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = i40iw_est_sd(dev,hmc_info);
          printf("%d\n", benchRet); 
          free(dev);
          for(int _aux = 0; _aux < _len_hmc_info0; _aux++) {
          free(hmc_info[_aux].hmc_obj);
          }
          free(hmc_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
