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
typedef  int /*<<< orphan*/  u32 ;
typedef  enum fman_exceptions { ____Placeholder_fman_exceptions } fman_exceptions ;

/* Variables and functions */
 int /*<<< orphan*/  EX_BMI_DISPATCH_RAM_ECC ; 
 int /*<<< orphan*/  EX_BMI_LIST_RAM_ECC ; 
 int /*<<< orphan*/  EX_BMI_STATISTICS_RAM_ECC ; 
 int /*<<< orphan*/  EX_BMI_STORAGE_PROFILE_ECC ; 
 int /*<<< orphan*/  EX_DMA_BUS_ERROR ; 
 int /*<<< orphan*/  EX_DMA_FM_WRITE_ECC ; 
 int /*<<< orphan*/  EX_DMA_READ_ECC ; 
 int /*<<< orphan*/  EX_DMA_SINGLE_PORT_ECC ; 
 int /*<<< orphan*/  EX_DMA_SYSTEM_WRITE_ECC ; 
 int /*<<< orphan*/  EX_FPM_DOUBLE_ECC ; 
 int /*<<< orphan*/  EX_FPM_SINGLE_ECC ; 
 int /*<<< orphan*/  EX_FPM_STALL_ON_TASKS ; 
 int /*<<< orphan*/  EX_MURAM_ECC ; 
 int /*<<< orphan*/  EX_QMI_DEQ_FROM_UNKNOWN_PORTID ; 
 int /*<<< orphan*/  EX_QMI_DOUBLE_ECC ; 
 int /*<<< orphan*/  EX_QMI_SINGLE_ECC ; 
#define  FMAN_EX_BMI_DISPATCH_RAM_ECC 143 
#define  FMAN_EX_BMI_LIST_RAM_ECC 142 
#define  FMAN_EX_BMI_STATISTICS_RAM_ECC 141 
#define  FMAN_EX_BMI_STORAGE_PROFILE_ECC 140 
#define  FMAN_EX_DMA_BUS_ERROR 139 
#define  FMAN_EX_DMA_FM_WRITE_ECC 138 
#define  FMAN_EX_DMA_READ_ECC 137 
#define  FMAN_EX_DMA_SINGLE_PORT_ECC 136 
#define  FMAN_EX_DMA_SYSTEM_WRITE_ECC 135 
#define  FMAN_EX_FPM_DOUBLE_ECC 134 
#define  FMAN_EX_FPM_SINGLE_ECC 133 
#define  FMAN_EX_FPM_STALL_ON_TASKS 132 
#define  FMAN_EX_MURAM_ECC 131 
#define  FMAN_EX_QMI_DEQ_FROM_UNKNOWN_PORTID 130 
#define  FMAN_EX_QMI_DOUBLE_ECC 129 
#define  FMAN_EX_QMI_SINGLE_ECC 128 

__attribute__((used)) static u32 get_exception_flag(enum fman_exceptions exception)
{
	u32 bit_mask;

	switch (exception) {
	case FMAN_EX_DMA_BUS_ERROR:
		bit_mask = EX_DMA_BUS_ERROR;
		break;
	case FMAN_EX_DMA_SINGLE_PORT_ECC:
		bit_mask = EX_DMA_SINGLE_PORT_ECC;
		break;
	case FMAN_EX_DMA_READ_ECC:
		bit_mask = EX_DMA_READ_ECC;
		break;
	case FMAN_EX_DMA_SYSTEM_WRITE_ECC:
		bit_mask = EX_DMA_SYSTEM_WRITE_ECC;
		break;
	case FMAN_EX_DMA_FM_WRITE_ECC:
		bit_mask = EX_DMA_FM_WRITE_ECC;
		break;
	case FMAN_EX_FPM_STALL_ON_TASKS:
		bit_mask = EX_FPM_STALL_ON_TASKS;
		break;
	case FMAN_EX_FPM_SINGLE_ECC:
		bit_mask = EX_FPM_SINGLE_ECC;
		break;
	case FMAN_EX_FPM_DOUBLE_ECC:
		bit_mask = EX_FPM_DOUBLE_ECC;
		break;
	case FMAN_EX_QMI_SINGLE_ECC:
		bit_mask = EX_QMI_SINGLE_ECC;
		break;
	case FMAN_EX_QMI_DOUBLE_ECC:
		bit_mask = EX_QMI_DOUBLE_ECC;
		break;
	case FMAN_EX_QMI_DEQ_FROM_UNKNOWN_PORTID:
		bit_mask = EX_QMI_DEQ_FROM_UNKNOWN_PORTID;
		break;
	case FMAN_EX_BMI_LIST_RAM_ECC:
		bit_mask = EX_BMI_LIST_RAM_ECC;
		break;
	case FMAN_EX_BMI_STORAGE_PROFILE_ECC:
		bit_mask = EX_BMI_STORAGE_PROFILE_ECC;
		break;
	case FMAN_EX_BMI_STATISTICS_RAM_ECC:
		bit_mask = EX_BMI_STATISTICS_RAM_ECC;
		break;
	case FMAN_EX_BMI_DISPATCH_RAM_ECC:
		bit_mask = EX_BMI_DISPATCH_RAM_ECC;
		break;
	case FMAN_EX_MURAM_ECC:
		bit_mask = EX_MURAM_ECC;
		break;
	default:
		bit_mask = 0;
		break;
	}

	return bit_mask;
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
          enum fman_exceptions exception = 0;
          int benchRet = get_exception_flag(exception);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
