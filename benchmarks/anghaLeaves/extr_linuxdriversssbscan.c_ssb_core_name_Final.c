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
typedef  int u16 ;

/* Variables and functions */
#define  SSB_DEV_80211 160 
#define  SSB_DEV_ADSL 159 
#define  SSB_DEV_ARM_1176 158 
#define  SSB_DEV_ARM_7TDMI 157 
#define  SSB_DEV_ARM_CM3 156 
#define  SSB_DEV_CHIPCOMMON 155 
#define  SSB_DEV_ETHERNET 154 
#define  SSB_DEV_ETHERNET_GBIT 153 
#define  SSB_DEV_EXTIF 152 
#define  SSB_DEV_ILINE100 151 
#define  SSB_DEV_ILINE20 150 
#define  SSB_DEV_INTERNAL_MEM 149 
#define  SSB_DEV_IPSEC 148 
#define  SSB_DEV_MEMC_SDRAM 147 
#define  SSB_DEV_MIMO_PHY 146 
#define  SSB_DEV_MINI_MACPHY 145 
#define  SSB_DEV_MIPS 144 
#define  SSB_DEV_MIPS_3302 143 
#define  SSB_DEV_PARA_ATA 142 
#define  SSB_DEV_PCI 141 
#define  SSB_DEV_PCIE 140 
#define  SSB_DEV_PCMCIA 139 
#define  SSB_DEV_ROBOSWITCH 138 
#define  SSB_DEV_SATA_XORDMA 137 
#define  SSB_DEV_SDIO_HOST 136 
#define  SSB_DEV_SDRAM 135 
#define  SSB_DEV_SRAM_CTRLR 134 
#define  SSB_DEV_USB11_DEV 133 
#define  SSB_DEV_USB11_HOST 132 
#define  SSB_DEV_USB11_HOSTDEV 131 
#define  SSB_DEV_USB20_DEV 130 
#define  SSB_DEV_USB20_HOST 129 
#define  SSB_DEV_V90 128 

const char *ssb_core_name(u16 coreid)
{
	switch (coreid) {
	case SSB_DEV_CHIPCOMMON:
		return "ChipCommon";
	case SSB_DEV_ILINE20:
		return "ILine 20";
	case SSB_DEV_SDRAM:
		return "SDRAM";
	case SSB_DEV_PCI:
		return "PCI";
	case SSB_DEV_MIPS:
		return "MIPS";
	case SSB_DEV_ETHERNET:
		return "Fast Ethernet";
	case SSB_DEV_V90:
		return "V90";
	case SSB_DEV_USB11_HOSTDEV:
		return "USB 1.1 Hostdev";
	case SSB_DEV_ADSL:
		return "ADSL";
	case SSB_DEV_ILINE100:
		return "ILine 100";
	case SSB_DEV_IPSEC:
		return "IPSEC";
	case SSB_DEV_PCMCIA:
		return "PCMCIA";
	case SSB_DEV_INTERNAL_MEM:
		return "Internal Memory";
	case SSB_DEV_MEMC_SDRAM:
		return "MEMC SDRAM";
	case SSB_DEV_EXTIF:
		return "EXTIF";
	case SSB_DEV_80211:
		return "IEEE 802.11";
	case SSB_DEV_MIPS_3302:
		return "MIPS 3302";
	case SSB_DEV_USB11_HOST:
		return "USB 1.1 Host";
	case SSB_DEV_USB11_DEV:
		return "USB 1.1 Device";
	case SSB_DEV_USB20_HOST:
		return "USB 2.0 Host";
	case SSB_DEV_USB20_DEV:
		return "USB 2.0 Device";
	case SSB_DEV_SDIO_HOST:
		return "SDIO Host";
	case SSB_DEV_ROBOSWITCH:
		return "Roboswitch";
	case SSB_DEV_PARA_ATA:
		return "PATA";
	case SSB_DEV_SATA_XORDMA:
		return "SATA XOR-DMA";
	case SSB_DEV_ETHERNET_GBIT:
		return "GBit Ethernet";
	case SSB_DEV_PCIE:
		return "PCI-E";
	case SSB_DEV_MIMO_PHY:
		return "MIMO PHY";
	case SSB_DEV_SRAM_CTRLR:
		return "SRAM Controller";
	case SSB_DEV_MINI_MACPHY:
		return "Mini MACPHY";
	case SSB_DEV_ARM_1176:
		return "ARM 1176";
	case SSB_DEV_ARM_7TDMI:
		return "ARM 7TDMI";
	case SSB_DEV_ARM_CM3:
		return "ARM Cortex M3";
	}
	return "UNKNOWN";
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
          int coreid = 100;
          const char * benchRet = ssb_core_name(coreid);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int coreid = 255;
          const char * benchRet = ssb_core_name(coreid);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int coreid = 10;
          const char * benchRet = ssb_core_name(coreid);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
