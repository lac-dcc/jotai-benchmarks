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
typedef  int u8 ;
typedef  enum tcm_tmreq_table { ____Placeholder_tcm_tmreq_table } tcm_tmreq_table ;

/* Variables and functions */
#define  ISCSI_TM_FUNC_ABORT_TASK 134 
#define  ISCSI_TM_FUNC_ABORT_TASK_SET 133 
#define  ISCSI_TM_FUNC_CLEAR_ACA 132 
#define  ISCSI_TM_FUNC_CLEAR_TASK_SET 131 
#define  ISCSI_TM_FUNC_LOGICAL_UNIT_RESET 130 
#define  ISCSI_TM_FUNC_TARGET_COLD_RESET 129 
#define  ISCSI_TM_FUNC_TARGET_WARM_RESET 128 
 int TMR_ABORT_TASK ; 
 int TMR_ABORT_TASK_SET ; 
 int TMR_CLEAR_ACA ; 
 int TMR_CLEAR_TASK_SET ; 
 int TMR_LUN_RESET ; 
 int TMR_TARGET_COLD_RESET ; 
 int TMR_TARGET_WARM_RESET ; 
 int TMR_UNKNOWN ; 

__attribute__((used)) static enum tcm_tmreq_table iscsit_convert_tmf(u8 iscsi_tmf)
{
	switch (iscsi_tmf) {
	case ISCSI_TM_FUNC_ABORT_TASK:
		return TMR_ABORT_TASK;
	case ISCSI_TM_FUNC_ABORT_TASK_SET:
		return TMR_ABORT_TASK_SET;
	case ISCSI_TM_FUNC_CLEAR_ACA:
		return TMR_CLEAR_ACA;
	case ISCSI_TM_FUNC_CLEAR_TASK_SET:
		return TMR_CLEAR_TASK_SET;
	case ISCSI_TM_FUNC_LOGICAL_UNIT_RESET:
		return TMR_LUN_RESET;
	case ISCSI_TM_FUNC_TARGET_WARM_RESET:
		return TMR_TARGET_WARM_RESET;
	case ISCSI_TM_FUNC_TARGET_COLD_RESET:
		return TMR_TARGET_COLD_RESET;
	default:
		return TMR_UNKNOWN;
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
          int iscsi_tmf = 100;
          enum tcm_tmreq_table benchRet = iscsit_convert_tmf(iscsi_tmf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int iscsi_tmf = 255;
          enum tcm_tmreq_table benchRet = iscsit_convert_tmf(iscsi_tmf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int iscsi_tmf = 10;
          enum tcm_tmreq_table benchRet = iscsit_convert_tmf(iscsi_tmf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
