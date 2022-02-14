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
       0            big-arr\n\
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
typedef  int u32 ;

/* Variables and functions */
 int ECOMM ; 
 int EILSEQ ; 
 int EINVAL ; 
 int ENOSR ; 
 int EOVERFLOW ; 
 int EPIPE ; 
 int EPROTO ; 
 int EREMOTEIO ; 
 int ETIMEDOUT ; 
 int USB_TD_OK ; 
 int USB_TD_RX_DATA_OVERUN ; 
 int USB_TD_RX_DATA_UNDERUN ; 
 int USB_TD_RX_ER_BITSTUFF ; 
 int USB_TD_RX_ER_CRC ; 
 int USB_TD_RX_ER_NONOCT ; 
 int USB_TD_RX_ER_OVERUN ; 
 int USB_TD_RX_ER_PID ; 
 int USB_TD_TX_ER_NAK ; 
 int USB_TD_TX_ER_STALL ; 
 int USB_TD_TX_ER_TIMEOUT ; 
 int USB_TD_TX_ER_UNDERUN ; 

__attribute__((used)) static int status_to_error(u32 status)
{
	if (status == USB_TD_OK)
		return 0;
	else if (status & USB_TD_RX_ER_CRC)
		return -EILSEQ;
	else if (status & USB_TD_RX_ER_NONOCT)
		return -EPROTO;
	else if (status & USB_TD_RX_ER_OVERUN)
		return -ECOMM;
	else if (status & USB_TD_RX_ER_BITSTUFF)
		return -EPROTO;
	else if (status & USB_TD_RX_ER_PID)
		return -EILSEQ;
	else if (status & (USB_TD_TX_ER_NAK | USB_TD_TX_ER_TIMEOUT))
		return -ETIMEDOUT;
	else if (status & USB_TD_TX_ER_STALL)
		return -EPIPE;
	else if (status & USB_TD_TX_ER_UNDERUN)
		return -ENOSR;
	else if (status & USB_TD_RX_DATA_UNDERUN)
		return -EREMOTEIO;
	else if (status & USB_TD_RX_DATA_OVERUN)
		return -EOVERFLOW;
	else
		return -EINVAL;
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

    // big-arr
    case 0:
    {
          int status = 255;
          int benchRet = status_to_error(status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
