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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned int uint32_t ;
struct TYPE_6__ {int l; int ioc; int sp; unsigned int bytes; void* bs; scalar_t__ sts; } ;
struct TYPE_7__ {TYPE_1__ b; } ;
struct TYPE_8__ {unsigned int buf; TYPE_2__ status; } ;
typedef  TYPE_3__ dwc_otg_dev_dma_desc_t ;
typedef  int /*<<< orphan*/  dwc_otg_core_if_t ;
struct TYPE_9__ {scalar_t__ type; int maxpacket; unsigned int xfer_len; unsigned int maxxfer; unsigned int total_len; unsigned int desc_cnt; unsigned int dma_addr; scalar_t__ sent_zlp; scalar_t__ is_in; TYPE_3__* desc_addr; } ;
typedef  TYPE_4__ dwc_ep_t ;

/* Variables and functions */
 void* BS_HOST_BUSY ; 
 void* BS_HOST_READY ; 
 scalar_t__ DWC_OTG_EP_TYPE_INTR ; 
 unsigned int MAX_DMA_DESC_CNT ; 

__attribute__((used)) static void init_dma_desc_chain(dwc_otg_core_if_t * core_if, dwc_ep_t * ep)
{
	dwc_otg_dev_dma_desc_t *dma_desc;
	uint32_t offset;
	uint32_t xfer_est;
	int i;
	unsigned maxxfer_local, total_len;

	if (!ep->is_in && ep->type == DWC_OTG_EP_TYPE_INTR &&
					(ep->maxpacket%4)) {
		maxxfer_local = ep->maxpacket;
		total_len = ep->xfer_len;
	} else {
		maxxfer_local = ep->maxxfer;
		total_len = ep->total_len;
	}

	ep->desc_cnt = (total_len / maxxfer_local) +
            ((total_len % maxxfer_local) ? 1 : 0);

	if (!ep->desc_cnt)
		ep->desc_cnt = 1;

	if (ep->desc_cnt > MAX_DMA_DESC_CNT)
		ep->desc_cnt = MAX_DMA_DESC_CNT;

	dma_desc = ep->desc_addr;
	if (maxxfer_local == ep->maxpacket) {
		if ((total_len % maxxfer_local) &&
				(total_len/maxxfer_local < MAX_DMA_DESC_CNT)) {
			xfer_est = (ep->desc_cnt - 1) * maxxfer_local +
					(total_len % maxxfer_local);
		} else
			xfer_est = ep->desc_cnt * maxxfer_local;
	} else
		xfer_est = total_len;
	offset = 0;
	for (i = 0; i < ep->desc_cnt; ++i) {
		/** DMA Descriptor Setup */
		if (xfer_est > maxxfer_local) {
			dma_desc->status.b.bs = BS_HOST_BUSY;
			dma_desc->status.b.l = 0;
			dma_desc->status.b.ioc = 0;
			dma_desc->status.b.sp = 0;
			dma_desc->status.b.bytes = maxxfer_local;
			dma_desc->buf = ep->dma_addr + offset;
			dma_desc->status.b.sts = 0;
			dma_desc->status.b.bs = BS_HOST_READY;

			xfer_est -= maxxfer_local;
			offset += maxxfer_local;
		} else {
			dma_desc->status.b.bs = BS_HOST_BUSY;
			dma_desc->status.b.l = 1;
			dma_desc->status.b.ioc = 1;
			if (ep->is_in) {
				dma_desc->status.b.sp =
				    (xfer_est %
				     ep->maxpacket) ? 1 : ((ep->
							    sent_zlp) ? 1 : 0);
				dma_desc->status.b.bytes = xfer_est;
			} else {
				if (maxxfer_local == ep->maxpacket)
					dma_desc->status.b.bytes = xfer_est;
				else
					dma_desc->status.b.bytes =
						xfer_est + ((4 - (xfer_est & 0x3)) & 0x3);
			}

			dma_desc->buf = ep->dma_addr + offset;
			dma_desc->status.b.sts = 0;
			dma_desc->status.b.bs = BS_HOST_READY;
		}
		dma_desc++;
	}
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
          int _len_core_if0 = 1;
          int * core_if = (int *) malloc(_len_core_if0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_core_if0; _i0++) {
            core_if[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ep0 = 1;
          struct TYPE_9__ * ep = (struct TYPE_9__ *) malloc(_len_ep0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].xfer_len = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].maxxfer = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].total_len = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].desc_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].dma_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].sent_zlp = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].is_in = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ep__i0__desc_addr0 = 1;
          ep[_i0].desc_addr = (struct TYPE_8__ *) malloc(_len_ep__i0__desc_addr0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ep__i0__desc_addr0; _j0++) {
            ep[_i0].desc_addr->buf = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].desc_addr->status.b.l = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].desc_addr->status.b.ioc = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].desc_addr->status.b.sp = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].desc_addr->status.b.bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].desc_addr->status.b.sts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          init_dma_desc_chain(core_if,ep);
          free(core_if);
          for(int _aux = 0; _aux < _len_ep0; _aux++) {
          free(ep[_aux].desc_addr);
          }
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
