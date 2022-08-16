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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
#define  SCU_TASK_DONE_BREAK_RCVD 135 
#define  SCU_TASK_DONE_INV_FIS_LEN 134 
#define  SCU_TASK_DONE_LF_ERR 133 
#define  SCU_TASK_DONE_LL_LF_TERM 132 
#define  SCU_TASK_DONE_LL_SY_TERM 131 
#define  SCU_TASK_DONE_MAX_PLD_ERR 130 
#define  SCU_TASK_DONE_UNEXP_FIS 129 
#define  SCU_TASK_DONE_UNEXP_SDBFIS 128 

__attribute__((used)) static int sci_request_stpsata_completion_status_is_tx_rx_suspend(
	unsigned int completion_status)
{
	switch (completion_status) {
	case SCU_TASK_DONE_LF_ERR:
	case SCU_TASK_DONE_LL_SY_TERM:
	case SCU_TASK_DONE_LL_LF_TERM:
	case SCU_TASK_DONE_BREAK_RCVD:
	case SCU_TASK_DONE_INV_FIS_LEN:
	case SCU_TASK_DONE_UNEXP_FIS:
	case SCU_TASK_DONE_UNEXP_SDBFIS:
	case SCU_TASK_DONE_MAX_PLD_ERR:
		return 1;
	}
	return 0;
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
          unsigned int completion_status = 100;
          int benchRet = sci_request_stpsata_completion_status_is_tx_rx_suspend(completion_status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int completion_status = 255;
          int benchRet = sci_request_stpsata_completion_status_is_tx_rx_suspend(completion_status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int completion_status = 10;
          int benchRet = sci_request_stpsata_completion_status_is_tx_rx_suspend(completion_status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
