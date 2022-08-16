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
#define  IB_QP_ACCESS_FLAGS 148 
#define  IB_QP_ALT_PATH 147 
#define  IB_QP_AV 146 
#define  IB_QP_CAP 145 
#define  IB_QP_CUR_STATE 144 
#define  IB_QP_DEST_QPN 143 
#define  IB_QP_EN_SQD_ASYNC_NOTIFY 142 
#define  IB_QP_MAX_DEST_RD_ATOMIC 141 
#define  IB_QP_MAX_QP_RD_ATOMIC 140 
#define  IB_QP_MIN_RNR_TIMER 139 
#define  IB_QP_PATH_MIG_STATE 138 
#define  IB_QP_PATH_MTU 137 
#define  IB_QP_PKEY_INDEX 136 
#define  IB_QP_PORT 135 
#define  IB_QP_QKEY 134 
#define  IB_QP_RETRY_CNT 133 
#define  IB_QP_RNR_RETRY 132 
#define  IB_QP_RQ_PSN 131 
#define  IB_QP_SQ_PSN 130 
#define  IB_QP_STATE 129 
#define  IB_QP_TIMEOUT 128 
 int MLX5_QP_OPTPAR_ACK_TIMEOUT ; 
 int MLX5_QP_OPTPAR_ALT_ADDR_PATH ; 
 int MLX5_QP_OPTPAR_PKEY_INDEX ; 
 int MLX5_QP_OPTPAR_PM_STATE ; 
 int MLX5_QP_OPTPAR_PRIMARY_ADDR_PATH ; 
 int MLX5_QP_OPTPAR_PRI_PORT ; 
 int MLX5_QP_OPTPAR_Q_KEY ; 
 int MLX5_QP_OPTPAR_RAE ; 
 int MLX5_QP_OPTPAR_RETRY_COUNT ; 
 int MLX5_QP_OPTPAR_RNR_RETRY ; 
 int MLX5_QP_OPTPAR_RNR_TIMEOUT ; 
 int MLX5_QP_OPTPAR_RRA_MAX ; 
 int MLX5_QP_OPTPAR_RRE ; 
 int MLX5_QP_OPTPAR_RWE ; 
 int MLX5_QP_OPTPAR_SRA_MAX ; 

__attribute__((used)) static int ib_nr_to_mlx5_nr(int ib_mask)
{
	switch (ib_mask) {
	case IB_QP_STATE:
		return 0;
	case IB_QP_CUR_STATE:
		return 0;
	case IB_QP_EN_SQD_ASYNC_NOTIFY:
		return 0;
	case IB_QP_ACCESS_FLAGS:
		return MLX5_QP_OPTPAR_RWE | MLX5_QP_OPTPAR_RRE |
			MLX5_QP_OPTPAR_RAE;
	case IB_QP_PKEY_INDEX:
		return MLX5_QP_OPTPAR_PKEY_INDEX;
	case IB_QP_PORT:
		return MLX5_QP_OPTPAR_PRI_PORT;
	case IB_QP_QKEY:
		return MLX5_QP_OPTPAR_Q_KEY;
	case IB_QP_AV:
		return MLX5_QP_OPTPAR_PRIMARY_ADDR_PATH |
			MLX5_QP_OPTPAR_PRI_PORT;
	case IB_QP_PATH_MTU:
		return 0;
	case IB_QP_TIMEOUT:
		return MLX5_QP_OPTPAR_ACK_TIMEOUT;
	case IB_QP_RETRY_CNT:
		return MLX5_QP_OPTPAR_RETRY_COUNT;
	case IB_QP_RNR_RETRY:
		return MLX5_QP_OPTPAR_RNR_RETRY;
	case IB_QP_RQ_PSN:
		return 0;
	case IB_QP_MAX_QP_RD_ATOMIC:
		return MLX5_QP_OPTPAR_SRA_MAX;
	case IB_QP_ALT_PATH:
		return MLX5_QP_OPTPAR_ALT_ADDR_PATH;
	case IB_QP_MIN_RNR_TIMER:
		return MLX5_QP_OPTPAR_RNR_TIMEOUT;
	case IB_QP_SQ_PSN:
		return 0;
	case IB_QP_MAX_DEST_RD_ATOMIC:
		return MLX5_QP_OPTPAR_RRA_MAX | MLX5_QP_OPTPAR_RWE |
			MLX5_QP_OPTPAR_RRE | MLX5_QP_OPTPAR_RAE;
	case IB_QP_PATH_MIG_STATE:
		return MLX5_QP_OPTPAR_PM_STATE;
	case IB_QP_CAP:
		return 0;
	case IB_QP_DEST_QPN:
		return 0;
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
          int ib_mask = 100;
          int benchRet = ib_nr_to_mlx5_nr(ib_mask);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ib_mask = 255;
          int benchRet = ib_nr_to_mlx5_nr(ib_mask);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ib_mask = 10;
          int benchRet = ib_nr_to_mlx5_nr(ib_mask);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
