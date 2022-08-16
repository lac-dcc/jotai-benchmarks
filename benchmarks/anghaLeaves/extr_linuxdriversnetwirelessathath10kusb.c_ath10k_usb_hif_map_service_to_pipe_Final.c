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
typedef  int u16 ;
struct ath10k {int dummy; } ;

/* Variables and functions */
#define  ATH10K_HTC_SVC_ID_HTT_DATA_MSG 130 
#define  ATH10K_HTC_SVC_ID_RSVD_CTRL 129 
#define  ATH10K_HTC_SVC_ID_WMI_CONTROL 128 
 int /*<<< orphan*/  ATH10K_USB_PIPE_RX_DATA ; 
 int /*<<< orphan*/  ATH10K_USB_PIPE_TX_CTRL ; 
 int /*<<< orphan*/  ATH10K_USB_PIPE_TX_DATA_LP ; 
 int EPERM ; 

__attribute__((used)) static int ath10k_usb_hif_map_service_to_pipe(struct ath10k *ar, u16 svc_id,
					      u8 *ul_pipe, u8 *dl_pipe)
{
	switch (svc_id) {
	case ATH10K_HTC_SVC_ID_RSVD_CTRL:
	case ATH10K_HTC_SVC_ID_WMI_CONTROL:
		*ul_pipe = ATH10K_USB_PIPE_TX_CTRL;
		/* due to large control packets, shift to data pipe */
		*dl_pipe = ATH10K_USB_PIPE_RX_DATA;
		break;
	case ATH10K_HTC_SVC_ID_HTT_DATA_MSG:
		*ul_pipe = ATH10K_USB_PIPE_TX_DATA_LP;
		/* Disable rxdata2 directly, it will be enabled
		 * if FW enable rxdata2
		 */
		*dl_pipe = ATH10K_USB_PIPE_RX_DATA;
		break;
	default:
		return -EPERM;
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
          int svc_id = 100;
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ul_pipe0 = 1;
          int * ul_pipe = (int *) malloc(_len_ul_pipe0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ul_pipe0; _i0++) {
            ul_pipe[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dl_pipe0 = 1;
          int * dl_pipe = (int *) malloc(_len_dl_pipe0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dl_pipe0; _i0++) {
            dl_pipe[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_usb_hif_map_service_to_pipe(ar,svc_id,ul_pipe,dl_pipe);
          printf("%d\n", benchRet); 
          free(ar);
          free(ul_pipe);
          free(dl_pipe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
