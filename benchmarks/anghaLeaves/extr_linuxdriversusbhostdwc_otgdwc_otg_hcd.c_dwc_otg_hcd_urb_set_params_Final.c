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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  void* uint32_t ;
typedef  int /*<<< orphan*/  uint16_t ;
struct TYPE_3__ {int /*<<< orphan*/  status; int /*<<< orphan*/  interval; void* flags; void* setup_dma; void* setup_packet; void* length; void* dma; void* buf; void* priv; } ;
typedef  TYPE_1__ dwc_otg_hcd_urb_t ;
typedef  void* dwc_dma_t ;

/* Variables and functions */
 int /*<<< orphan*/  DWC_E_IN_PROGRESS ; 

void dwc_otg_hcd_urb_set_params(dwc_otg_hcd_urb_t * dwc_otg_urb,
				void *urb_handle, void *buf, dwc_dma_t dma,
				uint32_t buflen, void *setup_packet,
				dwc_dma_t setup_dma, uint32_t flags,
				uint16_t interval)
{
	dwc_otg_urb->priv = urb_handle;
	dwc_otg_urb->buf = buf;
	dwc_otg_urb->dma = dma;
	dwc_otg_urb->length = buflen;
	dwc_otg_urb->setup_packet = setup_packet;
	dwc_otg_urb->setup_dma = setup_dma;
	dwc_otg_urb->flags = flags;
	dwc_otg_urb->interval = interval;
	dwc_otg_urb->status = -DWC_E_IN_PROGRESS;
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
          int interval = 100;
          int _len_dwc_otg_urb0 = 1;
          struct TYPE_3__ * dwc_otg_urb = (struct TYPE_3__ *) malloc(_len_dwc_otg_urb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dwc_otg_urb0; _i0++) {
            dwc_otg_urb[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        dwc_otg_urb[_i0].interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * urb_handle;
          void * buf;
          void * dma;
          void * buflen;
          void * setup_packet;
          void * setup_dma;
          void * flags;
          dwc_otg_hcd_urb_set_params(dwc_otg_urb,urb_handle,buf,dma,buflen,setup_packet,setup_dma,flags,interval);
          free(dwc_otg_urb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int interval = 255;
          int _len_dwc_otg_urb0 = 65025;
          struct TYPE_3__ * dwc_otg_urb = (struct TYPE_3__ *) malloc(_len_dwc_otg_urb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dwc_otg_urb0; _i0++) {
            dwc_otg_urb[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        dwc_otg_urb[_i0].interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * urb_handle;
          void * buf;
          void * dma;
          void * buflen;
          void * setup_packet;
          void * setup_dma;
          void * flags;
          dwc_otg_hcd_urb_set_params(dwc_otg_urb,urb_handle,buf,dma,buflen,setup_packet,setup_dma,flags,interval);
          free(dwc_otg_urb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int interval = 10;
          int _len_dwc_otg_urb0 = 100;
          struct TYPE_3__ * dwc_otg_urb = (struct TYPE_3__ *) malloc(_len_dwc_otg_urb0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_dwc_otg_urb0; _i0++) {
            dwc_otg_urb[_i0].status = ((-2 * (next_i()%2)) + 1) * next_i();
        dwc_otg_urb[_i0].interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * urb_handle;
          void * buf;
          void * dma;
          void * buflen;
          void * setup_packet;
          void * setup_dma;
          void * flags;
          dwc_otg_hcd_urb_set_params(dwc_otg_urb,urb_handle,buf,dma,buflen,setup_packet,setup_dma,flags,interval);
          free(dwc_otg_urb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
