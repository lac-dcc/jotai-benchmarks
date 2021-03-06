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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  enum ath10k_pkt_rx_err { ____Placeholder_ath10k_pkt_rx_err } ath10k_pkt_rx_err ;

/* Variables and functions */
#define  ATH10K_PKT_RX_ERR_CRYPT 132 
#define  ATH10K_PKT_RX_ERR_FCS 131 
#define  ATH10K_PKT_RX_ERR_MAX 130 
#define  ATH10K_PKT_RX_ERR_PEER_IDX_INVAL 129 
#define  ATH10K_PKT_RX_ERR_TKIP 128 

__attribute__((used)) static char *get_err_str(enum ath10k_pkt_rx_err i)
{
	switch (i) {
	case ATH10K_PKT_RX_ERR_FCS:
		return "fcs_err";
	case ATH10K_PKT_RX_ERR_TKIP:
		return "tkip_err";
	case ATH10K_PKT_RX_ERR_CRYPT:
		return "crypt_err";
	case ATH10K_PKT_RX_ERR_PEER_IDX_INVAL:
		return "peer_idx_inval";
	case ATH10K_PKT_RX_ERR_MAX:
		return "unknown";
	}

	return "unknown";
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
          enum ath10k_pkt_rx_err i = 0;
          char * benchRet = get_err_str(i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum ath10k_pkt_rx_err i = 0;
          char * benchRet = get_err_str(i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum ath10k_pkt_rx_err i = 0;
          char * benchRet = get_err_str(i);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
