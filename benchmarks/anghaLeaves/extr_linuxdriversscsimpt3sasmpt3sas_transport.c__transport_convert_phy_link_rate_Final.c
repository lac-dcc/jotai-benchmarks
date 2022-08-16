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
typedef  enum sas_linkrate { ____Placeholder_sas_linkrate } sas_linkrate ;

/* Variables and functions */
#define  MPI25_SAS_NEG_LINK_RATE_12_0 137 
#define  MPI2_SAS_NEG_LINK_RATE_1_5 136 
#define  MPI2_SAS_NEG_LINK_RATE_3_0 135 
#define  MPI2_SAS_NEG_LINK_RATE_6_0 134 
#define  MPI2_SAS_NEG_LINK_RATE_NEGOTIATION_FAILED 133 
#define  MPI2_SAS_NEG_LINK_RATE_PHY_DISABLED 132 
#define  MPI2_SAS_NEG_LINK_RATE_PORT_SELECTOR 131 
#define  MPI2_SAS_NEG_LINK_RATE_SATA_OOB_COMPLETE 130 
#define  MPI2_SAS_NEG_LINK_RATE_SMP_RESET_IN_PROGRESS 129 
#define  MPI2_SAS_NEG_LINK_RATE_UNKNOWN_LINK_RATE 128 
 int SAS_LINK_RATE_12_0_GBPS ; 
 int SAS_LINK_RATE_1_5_GBPS ; 
 int SAS_LINK_RATE_3_0_GBPS ; 
 int SAS_LINK_RATE_6_0_GBPS ; 
 int SAS_LINK_RATE_FAILED ; 
 int SAS_LINK_RATE_UNKNOWN ; 
 int SAS_PHY_DISABLED ; 
 int SAS_PHY_RESET_IN_PROGRESS ; 
 int SAS_SATA_PORT_SELECTOR ; 

__attribute__((used)) static enum sas_linkrate
_transport_convert_phy_link_rate(u8 link_rate)
{
	enum sas_linkrate rc;

	switch (link_rate) {
	case MPI2_SAS_NEG_LINK_RATE_1_5:
		rc = SAS_LINK_RATE_1_5_GBPS;
		break;
	case MPI2_SAS_NEG_LINK_RATE_3_0:
		rc = SAS_LINK_RATE_3_0_GBPS;
		break;
	case MPI2_SAS_NEG_LINK_RATE_6_0:
		rc = SAS_LINK_RATE_6_0_GBPS;
		break;
	case MPI25_SAS_NEG_LINK_RATE_12_0:
		rc = SAS_LINK_RATE_12_0_GBPS;
		break;
	case MPI2_SAS_NEG_LINK_RATE_PHY_DISABLED:
		rc = SAS_PHY_DISABLED;
		break;
	case MPI2_SAS_NEG_LINK_RATE_NEGOTIATION_FAILED:
		rc = SAS_LINK_RATE_FAILED;
		break;
	case MPI2_SAS_NEG_LINK_RATE_PORT_SELECTOR:
		rc = SAS_SATA_PORT_SELECTOR;
		break;
	case MPI2_SAS_NEG_LINK_RATE_SMP_RESET_IN_PROGRESS:
		rc = SAS_PHY_RESET_IN_PROGRESS;
		break;

	default:
	case MPI2_SAS_NEG_LINK_RATE_SATA_OOB_COMPLETE:
	case MPI2_SAS_NEG_LINK_RATE_UNKNOWN_LINK_RATE:
		rc = SAS_LINK_RATE_UNKNOWN;
		break;
	}
	return rc;
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
          int link_rate = 100;
          enum sas_linkrate benchRet = _transport_convert_phy_link_rate(link_rate);
        
        break;
    }
    // big-arr
    case 1:
    {
          int link_rate = 255;
          enum sas_linkrate benchRet = _transport_convert_phy_link_rate(link_rate);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int link_rate = 10;
          enum sas_linkrate benchRet = _transport_convert_phy_link_rate(link_rate);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
