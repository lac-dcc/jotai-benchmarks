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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ mtt_hop_num; scalar_t__ cqe_hop_num; scalar_t__ srqc_hop_num; scalar_t__ cqc_hop_num; scalar_t__ mpt_hop_num; scalar_t__ qpc_hop_num; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;

/* Variables and functions */
 scalar_t__ HEM_TYPE_CQC ; 
 scalar_t__ HEM_TYPE_CQE ; 
 scalar_t__ HEM_TYPE_MTPT ; 
 scalar_t__ HEM_TYPE_MTT ; 
 scalar_t__ HEM_TYPE_QPC ; 
 scalar_t__ HEM_TYPE_SRQC ; 

bool hns_roce_check_whether_mhop(struct hns_roce_dev *hr_dev, u32 type)
{
	if ((hr_dev->caps.qpc_hop_num && type == HEM_TYPE_QPC) ||
	    (hr_dev->caps.mpt_hop_num && type == HEM_TYPE_MTPT) ||
	    (hr_dev->caps.cqc_hop_num && type == HEM_TYPE_CQC) ||
	    (hr_dev->caps.srqc_hop_num && type == HEM_TYPE_SRQC) ||
	    (hr_dev->caps.cqe_hop_num && type == HEM_TYPE_CQE) ||
	    (hr_dev->caps.mtt_hop_num && type == HEM_TYPE_MTT))
		return true;

	return false;
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
          long type = 100;
          int _len_hr_dev0 = 1;
          struct hns_roce_dev * hr_dev = (struct hns_roce_dev *) malloc(_len_hr_dev0*sizeof(struct hns_roce_dev));
          for(int _i0 = 0; _i0 < _len_hr_dev0; _i0++) {
            hr_dev[_i0].caps.mtt_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.cqe_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.srqc_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.cqc_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.mpt_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.qpc_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hns_roce_check_whether_mhop(hr_dev,type);
          printf("%d\n", benchRet); 
          free(hr_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          long type = 255;
          int _len_hr_dev0 = 65025;
          struct hns_roce_dev * hr_dev = (struct hns_roce_dev *) malloc(_len_hr_dev0*sizeof(struct hns_roce_dev));
          for(int _i0 = 0; _i0 < _len_hr_dev0; _i0++) {
            hr_dev[_i0].caps.mtt_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.cqe_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.srqc_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.cqc_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.mpt_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.qpc_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hns_roce_check_whether_mhop(hr_dev,type);
          printf("%d\n", benchRet); 
          free(hr_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long type = 10;
          int _len_hr_dev0 = 100;
          struct hns_roce_dev * hr_dev = (struct hns_roce_dev *) malloc(_len_hr_dev0*sizeof(struct hns_roce_dev));
          for(int _i0 = 0; _i0 < _len_hr_dev0; _i0++) {
            hr_dev[_i0].caps.mtt_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.cqe_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.srqc_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.cqc_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.mpt_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
        hr_dev[_i0].caps.qpc_hop_num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hns_roce_check_whether_mhop(hr_dev,type);
          printf("%d\n", benchRet); 
          free(hr_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
