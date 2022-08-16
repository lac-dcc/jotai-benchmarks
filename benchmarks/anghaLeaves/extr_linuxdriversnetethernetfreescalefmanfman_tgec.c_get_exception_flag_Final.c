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
typedef  int u32 ;
typedef  enum fman_mac_exceptions { ____Placeholder_fman_mac_exceptions } fman_mac_exceptions ;

/* Variables and functions */
#define  FM_MAC_EX_10G_LOC_FAULT 144 
#define  FM_MAC_EX_10G_MDIO_CMD_CMPL 143 
#define  FM_MAC_EX_10G_MDIO_SCAN_EVENT 142 
#define  FM_MAC_EX_10G_REM_FAULT 141 
#define  FM_MAC_EX_10G_RX_ALIGN_ER 140 
#define  FM_MAC_EX_10G_RX_CRC_ER 139 
#define  FM_MAC_EX_10G_RX_ECC_ER 138 
#define  FM_MAC_EX_10G_RX_FIFO_OVFL 137 
#define  FM_MAC_EX_10G_RX_FRAG_FRM 136 
#define  FM_MAC_EX_10G_RX_JAB_FRM 135 
#define  FM_MAC_EX_10G_RX_LEN_ER 134 
#define  FM_MAC_EX_10G_RX_OVRSZ_FRM 133 
#define  FM_MAC_EX_10G_RX_RUNT_FRM 132 
#define  FM_MAC_EX_10G_TX_ECC_ER 131 
#define  FM_MAC_EX_10G_TX_ER 130 
#define  FM_MAC_EX_10G_TX_FIFO_OVFL 129 
#define  FM_MAC_EX_10G_TX_FIFO_UNFL 128 
 int TGEC_IMASK_LOC_FAULT ; 
 int TGEC_IMASK_MDIO_CMD_CMPL ; 
 int TGEC_IMASK_MDIO_SCAN_EVENT ; 
 int TGEC_IMASK_REM_FAULT ; 
 int TGEC_IMASK_RX_ALIGN_ER ; 
 int TGEC_IMASK_RX_CRC_ER ; 
 int TGEC_IMASK_RX_ECC_ER ; 
 int TGEC_IMASK_RX_FIFO_OVFL ; 
 int TGEC_IMASK_RX_FRAG_FRM ; 
 int TGEC_IMASK_RX_JAB_FRM ; 
 int TGEC_IMASK_RX_LEN_ER ; 
 int TGEC_IMASK_RX_OVRSZ_FRM ; 
 int TGEC_IMASK_RX_RUNT_FRM ; 
 int TGEC_IMASK_TX_ECC_ER ; 
 int TGEC_IMASK_TX_ER ; 
 int TGEC_IMASK_TX_FIFO_OVFL ; 
 int TGEC_IMASK_TX_FIFO_UNFL ; 

__attribute__((used)) static int get_exception_flag(enum fman_mac_exceptions exception)
{
	u32 bit_mask;

	switch (exception) {
	case FM_MAC_EX_10G_MDIO_SCAN_EVENT:
		bit_mask = TGEC_IMASK_MDIO_SCAN_EVENT;
		break;
	case FM_MAC_EX_10G_MDIO_CMD_CMPL:
		bit_mask = TGEC_IMASK_MDIO_CMD_CMPL;
		break;
	case FM_MAC_EX_10G_REM_FAULT:
		bit_mask = TGEC_IMASK_REM_FAULT;
		break;
	case FM_MAC_EX_10G_LOC_FAULT:
		bit_mask = TGEC_IMASK_LOC_FAULT;
		break;
	case FM_MAC_EX_10G_TX_ECC_ER:
		bit_mask = TGEC_IMASK_TX_ECC_ER;
		break;
	case FM_MAC_EX_10G_TX_FIFO_UNFL:
		bit_mask = TGEC_IMASK_TX_FIFO_UNFL;
		break;
	case FM_MAC_EX_10G_TX_FIFO_OVFL:
		bit_mask = TGEC_IMASK_TX_FIFO_OVFL;
		break;
	case FM_MAC_EX_10G_TX_ER:
		bit_mask = TGEC_IMASK_TX_ER;
		break;
	case FM_MAC_EX_10G_RX_FIFO_OVFL:
		bit_mask = TGEC_IMASK_RX_FIFO_OVFL;
		break;
	case FM_MAC_EX_10G_RX_ECC_ER:
		bit_mask = TGEC_IMASK_RX_ECC_ER;
		break;
	case FM_MAC_EX_10G_RX_JAB_FRM:
		bit_mask = TGEC_IMASK_RX_JAB_FRM;
		break;
	case FM_MAC_EX_10G_RX_OVRSZ_FRM:
		bit_mask = TGEC_IMASK_RX_OVRSZ_FRM;
		break;
	case FM_MAC_EX_10G_RX_RUNT_FRM:
		bit_mask = TGEC_IMASK_RX_RUNT_FRM;
		break;
	case FM_MAC_EX_10G_RX_FRAG_FRM:
		bit_mask = TGEC_IMASK_RX_FRAG_FRM;
		break;
	case FM_MAC_EX_10G_RX_LEN_ER:
		bit_mask = TGEC_IMASK_RX_LEN_ER;
		break;
	case FM_MAC_EX_10G_RX_CRC_ER:
		bit_mask = TGEC_IMASK_RX_CRC_ER;
		break;
	case FM_MAC_EX_10G_RX_ALIGN_ER:
		bit_mask = TGEC_IMASK_RX_ALIGN_ER;
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
          enum fman_mac_exceptions exception = 0;
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
