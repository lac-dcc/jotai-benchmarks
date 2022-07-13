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
typedef  int u64 ;

/* Variables and functions */
 int FME_PR_ERR_CRC_ERR ; 
 int FME_PR_ERR_FIFO_OVERFLOW ; 
 int FME_PR_ERR_INCOMPATIBLE_BS ; 
 int FME_PR_ERR_OPERATION_ERR ; 
 int FME_PR_ERR_PROTOCOL_ERR ; 
 int FPGA_MGR_STATUS_CRC_ERR ; 
 int FPGA_MGR_STATUS_FIFO_OVERFLOW_ERR ; 
 int FPGA_MGR_STATUS_INCOMPATIBLE_IMAGE_ERR ; 
 int FPGA_MGR_STATUS_IP_PROTOCOL_ERR ; 
 int FPGA_MGR_STATUS_OPERATION_ERR ; 

__attribute__((used)) static u64 pr_error_to_mgr_status(u64 err)
{
	u64 status = 0;

	if (err & FME_PR_ERR_OPERATION_ERR)
		status |= FPGA_MGR_STATUS_OPERATION_ERR;
	if (err & FME_PR_ERR_CRC_ERR)
		status |= FPGA_MGR_STATUS_CRC_ERR;
	if (err & FME_PR_ERR_INCOMPATIBLE_BS)
		status |= FPGA_MGR_STATUS_INCOMPATIBLE_IMAGE_ERR;
	if (err & FME_PR_ERR_PROTOCOL_ERR)
		status |= FPGA_MGR_STATUS_IP_PROTOCOL_ERR;
	if (err & FME_PR_ERR_FIFO_OVERFLOW)
		status |= FPGA_MGR_STATUS_FIFO_OVERFLOW_ERR;

	return status;
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
          int err = 100;
          int benchRet = pr_error_to_mgr_status(err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int err = 255;
          int benchRet = pr_error_to_mgr_status(err);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int err = 10;
          int benchRet = pr_error_to_mgr_status(err);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
