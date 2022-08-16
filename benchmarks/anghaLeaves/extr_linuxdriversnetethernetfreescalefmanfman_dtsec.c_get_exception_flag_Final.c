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
 int DTSEC_IMASK_BREN ; 
 int DTSEC_IMASK_BTEN ; 
 int DTSEC_IMASK_CRLEN ; 
 int DTSEC_IMASK_GRSCEN ; 
 int DTSEC_IMASK_GTSCEN ; 
 int DTSEC_IMASK_LCEN ; 
 int DTSEC_IMASK_MAGEN ; 
 int DTSEC_IMASK_MMRDEN ; 
 int DTSEC_IMASK_MMWREN ; 
 int DTSEC_IMASK_MSROEN ; 
 int DTSEC_IMASK_RXCEN ; 
 int DTSEC_IMASK_TDPEEN ; 
 int DTSEC_IMASK_TXCEN ; 
 int DTSEC_IMASK_TXEEN ; 
 int DTSEC_IMASK_XFUNEN ; 
#define  FM_MAC_EX_1G_BAB_RX 142 
#define  FM_MAC_EX_1G_BAB_TX 141 
#define  FM_MAC_EX_1G_COL_RET_LMT 140 
#define  FM_MAC_EX_1G_DATA_ERR 139 
#define  FM_MAC_EX_1G_GRATEFUL_RX_STP_COMPLET 138 
#define  FM_MAC_EX_1G_GRATEFUL_TX_STP_COMPLET 137 
#define  FM_MAC_EX_1G_LATE_COL 136 
#define  FM_MAC_EX_1G_MAG_PCKT 135 
#define  FM_MAC_EX_1G_MII_MNG_RD_COMPLET 134 
#define  FM_MAC_EX_1G_MII_MNG_WR_COMPLET 133 
#define  FM_MAC_EX_1G_RX_CTL 132 
#define  FM_MAC_EX_1G_RX_MIB_CNT_OVFL 131 
#define  FM_MAC_EX_1G_TX_CTL 130 
#define  FM_MAC_EX_1G_TX_ERR 129 
#define  FM_MAC_EX_1G_TX_FIFO_UNDRN 128 

__attribute__((used)) static int get_exception_flag(enum fman_mac_exceptions exception)
{
	u32 bit_mask;

	switch (exception) {
	case FM_MAC_EX_1G_BAB_RX:
		bit_mask = DTSEC_IMASK_BREN;
		break;
	case FM_MAC_EX_1G_RX_CTL:
		bit_mask = DTSEC_IMASK_RXCEN;
		break;
	case FM_MAC_EX_1G_GRATEFUL_TX_STP_COMPLET:
		bit_mask = DTSEC_IMASK_GTSCEN;
		break;
	case FM_MAC_EX_1G_BAB_TX:
		bit_mask = DTSEC_IMASK_BTEN;
		break;
	case FM_MAC_EX_1G_TX_CTL:
		bit_mask = DTSEC_IMASK_TXCEN;
		break;
	case FM_MAC_EX_1G_TX_ERR:
		bit_mask = DTSEC_IMASK_TXEEN;
		break;
	case FM_MAC_EX_1G_LATE_COL:
		bit_mask = DTSEC_IMASK_LCEN;
		break;
	case FM_MAC_EX_1G_COL_RET_LMT:
		bit_mask = DTSEC_IMASK_CRLEN;
		break;
	case FM_MAC_EX_1G_TX_FIFO_UNDRN:
		bit_mask = DTSEC_IMASK_XFUNEN;
		break;
	case FM_MAC_EX_1G_MAG_PCKT:
		bit_mask = DTSEC_IMASK_MAGEN;
		break;
	case FM_MAC_EX_1G_MII_MNG_RD_COMPLET:
		bit_mask = DTSEC_IMASK_MMRDEN;
		break;
	case FM_MAC_EX_1G_MII_MNG_WR_COMPLET:
		bit_mask = DTSEC_IMASK_MMWREN;
		break;
	case FM_MAC_EX_1G_GRATEFUL_RX_STP_COMPLET:
		bit_mask = DTSEC_IMASK_GRSCEN;
		break;
	case FM_MAC_EX_1G_DATA_ERR:
		bit_mask = DTSEC_IMASK_TDPEEN;
		break;
	case FM_MAC_EX_1G_RX_MIB_CNT_OVFL:
		bit_mask = DTSEC_IMASK_MSROEN;
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
