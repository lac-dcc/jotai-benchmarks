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
typedef  int u32 ;

/* Variables and functions */
 int EAGAIN ; 
 int EBUSY ; 
 int EFAULT ; 
 int EINVAL ; 
 int ENOBUFS ; 
#define  OCRDMA_MBX_ADDI_STATUS_INSUFFICIENT_RESOURCES 164 
 int OCRDMA_MBX_RSP_ASTATUS_MASK ; 
 int OCRDMA_MBX_RSP_ASTATUS_SHIFT ; 
 int OCRDMA_MBX_RSP_STATUS_MASK ; 
 int OCRDMA_MBX_RSP_STATUS_SHIFT ; 
#define  OCRDMA_MBX_STATUS_ATOMIC_OPS_UNSUP 163 
#define  OCRDMA_MBX_STATUS_FAILED 162 
#define  OCRDMA_MBX_STATUS_ILLEGAL_FIELD 161 
#define  OCRDMA_MBX_STATUS_INVALID_ACC_RIGHTS 160 
#define  OCRDMA_MBX_STATUS_INVALID_CHANGE 159 
#define  OCRDMA_MBX_STATUS_INVALID_CQ 158 
#define  OCRDMA_MBX_STATUS_INVALID_FBO 157 
#define  OCRDMA_MBX_STATUS_INVALID_LENGTH 156 
#define  OCRDMA_MBX_STATUS_INVALID_LKEY 155 
#define  OCRDMA_MBX_STATUS_INVALID_PBE_SIZE 154 
#define  OCRDMA_MBX_STATUS_INVALID_PBL_ENTRY 153 
#define  OCRDMA_MBX_STATUS_INVALID_PD 152 
#define  OCRDMA_MBX_STATUS_INVALID_QP 151 
#define  OCRDMA_MBX_STATUS_INVALID_RNR_NAK_TIMER 150 
#define  OCRDMA_MBX_STATUS_INVALID_SRQ_ID 149 
#define  OCRDMA_MBX_STATUS_INVALID_VA 148 
#define  OCRDMA_MBX_STATUS_IRD_EXCEEDS 147 
#define  OCRDMA_MBX_STATUS_MAX_QP_EXCEEDS 146 
#define  OCRDMA_MBX_STATUS_MTU_EXCEEDS 145 
#define  OCRDMA_MBX_STATUS_MW_BOUND 144 
#define  OCRDMA_MBX_STATUS_MW_STILL_BOUND 143 
#define  OCRDMA_MBX_STATUS_OOR 142 
#define  OCRDMA_MBX_STATUS_ORD_EXCEEDS 141 
#define  OCRDMA_MBX_STATUS_PD_INUSE 140 
#define  OCRDMA_MBX_STATUS_PKEY_INDEX_EXCEEDS 139 
#define  OCRDMA_MBX_STATUS_PKEY_INDEX_INVALID 138 
#define  OCRDMA_MBX_STATUS_QP_BOUND 137 
#define  OCRDMA_MBX_STATUS_RECVQ_RQE_EXCEEDS 136 
#define  OCRDMA_MBX_STATUS_RQE_EXCEEDS 135 
#define  OCRDMA_MBX_STATUS_SENDQ_WQE_EXCEEDS 134 
#define  OCRDMA_MBX_STATUS_SGE_RECV_EXCEEDS 133 
#define  OCRDMA_MBX_STATUS_SGE_SEND_EXCEEDS 132 
#define  OCRDMA_MBX_STATUS_SGE_WRITE_EXCEEDS 131 
#define  OCRDMA_MBX_STATUS_SRQ_ERROR 130 
#define  OCRDMA_MBX_STATUS_SRQ_LIMIT_EXCEEDS 129 
#define  OCRDMA_MBX_STATUS_SRQ_SIZE_UNDERUNS 128 

__attribute__((used)) static int ocrdma_get_mbx_errno(u32 status)
{
	int err_num;
	u8 mbox_status = (status & OCRDMA_MBX_RSP_STATUS_MASK) >>
					OCRDMA_MBX_RSP_STATUS_SHIFT;
	u8 add_status = (status & OCRDMA_MBX_RSP_ASTATUS_MASK) >>
					OCRDMA_MBX_RSP_ASTATUS_SHIFT;

	switch (mbox_status) {
	case OCRDMA_MBX_STATUS_OOR:
	case OCRDMA_MBX_STATUS_MAX_QP_EXCEEDS:
		err_num = -EAGAIN;
		break;

	case OCRDMA_MBX_STATUS_INVALID_PD:
	case OCRDMA_MBX_STATUS_INVALID_CQ:
	case OCRDMA_MBX_STATUS_INVALID_SRQ_ID:
	case OCRDMA_MBX_STATUS_INVALID_QP:
	case OCRDMA_MBX_STATUS_INVALID_CHANGE:
	case OCRDMA_MBX_STATUS_MTU_EXCEEDS:
	case OCRDMA_MBX_STATUS_INVALID_RNR_NAK_TIMER:
	case OCRDMA_MBX_STATUS_PKEY_INDEX_INVALID:
	case OCRDMA_MBX_STATUS_PKEY_INDEX_EXCEEDS:
	case OCRDMA_MBX_STATUS_ILLEGAL_FIELD:
	case OCRDMA_MBX_STATUS_INVALID_PBL_ENTRY:
	case OCRDMA_MBX_STATUS_INVALID_LKEY:
	case OCRDMA_MBX_STATUS_INVALID_VA:
	case OCRDMA_MBX_STATUS_INVALID_LENGTH:
	case OCRDMA_MBX_STATUS_INVALID_FBO:
	case OCRDMA_MBX_STATUS_INVALID_ACC_RIGHTS:
	case OCRDMA_MBX_STATUS_INVALID_PBE_SIZE:
	case OCRDMA_MBX_STATUS_ATOMIC_OPS_UNSUP:
	case OCRDMA_MBX_STATUS_SRQ_ERROR:
	case OCRDMA_MBX_STATUS_SRQ_SIZE_UNDERUNS:
		err_num = -EINVAL;
		break;

	case OCRDMA_MBX_STATUS_PD_INUSE:
	case OCRDMA_MBX_STATUS_QP_BOUND:
	case OCRDMA_MBX_STATUS_MW_STILL_BOUND:
	case OCRDMA_MBX_STATUS_MW_BOUND:
		err_num = -EBUSY;
		break;

	case OCRDMA_MBX_STATUS_RECVQ_RQE_EXCEEDS:
	case OCRDMA_MBX_STATUS_SGE_RECV_EXCEEDS:
	case OCRDMA_MBX_STATUS_RQE_EXCEEDS:
	case OCRDMA_MBX_STATUS_SRQ_LIMIT_EXCEEDS:
	case OCRDMA_MBX_STATUS_ORD_EXCEEDS:
	case OCRDMA_MBX_STATUS_IRD_EXCEEDS:
	case OCRDMA_MBX_STATUS_SENDQ_WQE_EXCEEDS:
	case OCRDMA_MBX_STATUS_SGE_SEND_EXCEEDS:
	case OCRDMA_MBX_STATUS_SGE_WRITE_EXCEEDS:
		err_num = -ENOBUFS;
		break;

	case OCRDMA_MBX_STATUS_FAILED:
		switch (add_status) {
		case OCRDMA_MBX_ADDI_STATUS_INSUFFICIENT_RESOURCES:
			err_num = -EAGAIN;
			break;
		default:
			err_num = -EFAULT;
		}
		break;
	default:
		err_num = -EFAULT;
	}
	return err_num;
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
          int status = 100;
          int benchRet = ocrdma_get_mbx_errno(status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int status = 255;
          int benchRet = ocrdma_get_mbx_errno(status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int status = 10;
          int benchRet = ocrdma_get_mbx_errno(status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
