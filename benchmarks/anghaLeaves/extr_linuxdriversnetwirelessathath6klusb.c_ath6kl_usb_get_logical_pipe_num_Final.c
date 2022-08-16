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
typedef  int u8 ;
struct ath6kl_usb {int dummy; } ;

/* Variables and functions */
#define  ATH6KL_USB_EP_ADDR_APP_CTRL_IN 135 
#define  ATH6KL_USB_EP_ADDR_APP_CTRL_OUT 134 
#define  ATH6KL_USB_EP_ADDR_APP_DATA2_IN 133 
#define  ATH6KL_USB_EP_ADDR_APP_DATA_HP_OUT 132 
#define  ATH6KL_USB_EP_ADDR_APP_DATA_IN 131 
#define  ATH6KL_USB_EP_ADDR_APP_DATA_LP_OUT 130 
#define  ATH6KL_USB_EP_ADDR_APP_DATA_MP_OUT 129 
#define  ATH6KL_USB_EP_ADDR_APP_INT_IN 128 
 int ATH6KL_USB_PIPE_INVALID ; 
 int ATH6KL_USB_PIPE_RX_CTRL ; 
 int ATH6KL_USB_PIPE_RX_DATA ; 
 int ATH6KL_USB_PIPE_RX_DATA2 ; 
 int ATH6KL_USB_PIPE_RX_INT ; 
 int ATH6KL_USB_PIPE_TX_CTRL ; 
 int ATH6KL_USB_PIPE_TX_DATA_HP ; 
 int ATH6KL_USB_PIPE_TX_DATA_LP ; 
 int ATH6KL_USB_PIPE_TX_DATA_MP ; 
 int RX_URB_COUNT ; 
 int TX_URB_COUNT ; 

__attribute__((used)) static u8 ath6kl_usb_get_logical_pipe_num(struct ath6kl_usb *ar_usb,
					  u8 ep_address, int *urb_count)
{
	u8 pipe_num = ATH6KL_USB_PIPE_INVALID;

	switch (ep_address) {
	case ATH6KL_USB_EP_ADDR_APP_CTRL_IN:
		pipe_num = ATH6KL_USB_PIPE_RX_CTRL;
		*urb_count = RX_URB_COUNT;
		break;
	case ATH6KL_USB_EP_ADDR_APP_DATA_IN:
		pipe_num = ATH6KL_USB_PIPE_RX_DATA;
		*urb_count = RX_URB_COUNT;
		break;
	case ATH6KL_USB_EP_ADDR_APP_INT_IN:
		pipe_num = ATH6KL_USB_PIPE_RX_INT;
		*urb_count = RX_URB_COUNT;
		break;
	case ATH6KL_USB_EP_ADDR_APP_DATA2_IN:
		pipe_num = ATH6KL_USB_PIPE_RX_DATA2;
		*urb_count = RX_URB_COUNT;
		break;
	case ATH6KL_USB_EP_ADDR_APP_CTRL_OUT:
		pipe_num = ATH6KL_USB_PIPE_TX_CTRL;
		*urb_count = TX_URB_COUNT;
		break;
	case ATH6KL_USB_EP_ADDR_APP_DATA_LP_OUT:
		pipe_num = ATH6KL_USB_PIPE_TX_DATA_LP;
		*urb_count = TX_URB_COUNT;
		break;
	case ATH6KL_USB_EP_ADDR_APP_DATA_MP_OUT:
		pipe_num = ATH6KL_USB_PIPE_TX_DATA_MP;
		*urb_count = TX_URB_COUNT;
		break;
	case ATH6KL_USB_EP_ADDR_APP_DATA_HP_OUT:
		pipe_num = ATH6KL_USB_PIPE_TX_DATA_HP;
		*urb_count = TX_URB_COUNT;
		break;
	default:
		/* note: there may be endpoints not currently used */
		break;
	}

	return pipe_num;
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
          int ep_address = 100;
          int _len_ar_usb0 = 1;
          struct ath6kl_usb * ar_usb = (struct ath6kl_usb *) malloc(_len_ar_usb0*sizeof(struct ath6kl_usb));
          for(int _i0 = 0; _i0 < _len_ar_usb0; _i0++) {
            ar_usb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_urb_count0 = 1;
          int * urb_count = (int *) malloc(_len_urb_count0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_urb_count0; _i0++) {
            urb_count[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath6kl_usb_get_logical_pipe_num(ar_usb,ep_address,urb_count);
          printf("%d\n", benchRet); 
          free(ar_usb);
          free(urb_count);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
