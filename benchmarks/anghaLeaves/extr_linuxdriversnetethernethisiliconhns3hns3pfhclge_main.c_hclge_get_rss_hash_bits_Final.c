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
typedef  int /*<<< orphan*/  u8 ;
struct ethtool_rxnfc {int data; scalar_t__ flow_type; } ;

/* Variables and functions */
 int /*<<< orphan*/  HCLGE_D_IP_BIT ; 
 int /*<<< orphan*/  HCLGE_D_PORT_BIT ; 
 int /*<<< orphan*/  HCLGE_S_IP_BIT ; 
 int /*<<< orphan*/  HCLGE_S_PORT_BIT ; 
 int /*<<< orphan*/  HCLGE_V_TAG_BIT ; 
 int RXH_IP_DST ; 
 int RXH_IP_SRC ; 
 int RXH_L4_B_0_1 ; 
 int RXH_L4_B_2_3 ; 
 scalar_t__ SCTP_V4_FLOW ; 
 scalar_t__ SCTP_V6_FLOW ; 

__attribute__((used)) static u8 hclge_get_rss_hash_bits(struct ethtool_rxnfc *nfc)
{
	u8 hash_sets = nfc->data & RXH_L4_B_0_1 ? HCLGE_S_PORT_BIT : 0;

	if (nfc->data & RXH_L4_B_2_3)
		hash_sets |= HCLGE_D_PORT_BIT;
	else
		hash_sets &= ~HCLGE_D_PORT_BIT;

	if (nfc->data & RXH_IP_SRC)
		hash_sets |= HCLGE_S_IP_BIT;
	else
		hash_sets &= ~HCLGE_S_IP_BIT;

	if (nfc->data & RXH_IP_DST)
		hash_sets |= HCLGE_D_IP_BIT;
	else
		hash_sets &= ~HCLGE_D_IP_BIT;

	if (nfc->flow_type == SCTP_V4_FLOW || nfc->flow_type == SCTP_V6_FLOW)
		hash_sets |= HCLGE_V_TAG_BIT;

	return hash_sets;
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
          int _len_nfc0 = 1;
          struct ethtool_rxnfc * nfc = (struct ethtool_rxnfc *) malloc(_len_nfc0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_nfc0; _i0++) {
            nfc[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
        nfc[_i0].flow_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = hclge_get_rss_hash_bits(nfc);
          printf("%d\n", benchRet); 
          free(nfc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
