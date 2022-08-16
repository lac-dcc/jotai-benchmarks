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
typedef  int /*<<< orphan*/  dwc_otg_pcd_t ;
typedef  int /*<<< orphan*/  dwc_ep_t ;

/* Variables and functions */

__attribute__((used)) static inline void print_memory_payload(dwc_otg_pcd_t * pcd,  dwc_ep_t * ep)
{
#ifdef DEBUG
	deptsiz_data_t deptsiz_init = {.d32 = 0 };
	deptsiz_data_t deptsiz_updt = {.d32 = 0 };
	int pack_num;
	unsigned payload;

	deptsiz_init.d32 = pcd->core_if->start_doeptsiz_val[ep->num];
	deptsiz_updt.d32 =
		DWC_READ_REG32(&pcd->core_if->dev_if->
						out_ep_regs[ep->num]->doeptsiz);
	/* Payload will be */
	payload = deptsiz_init.b.xfersize - deptsiz_updt.b.xfersize;
	/* Packet count is decremented every time a packet
	 * is written to the RxFIFO not in to the external memory
	 * So, if payload == 0, then it means no packet was sent to ext memory*/
	pack_num = (!payload) ? 0 : (deptsiz_init.b.pktcnt - deptsiz_updt.b.pktcnt);
	DWC_DEBUGPL(DBG_PCDV,
		"Payload for EP%d-%s\n",
		ep->num, (ep->is_in ? "IN" : "OUT"));
	DWC_DEBUGPL(DBG_PCDV,
		"Number of transfered bytes = 0x%08x\n", payload);
	DWC_DEBUGPL(DBG_PCDV,
		"Number of transfered packets = %d\n", pack_num);
#endif
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
          int _len_pcd0 = 1;
          int * pcd = (int *) malloc(_len_pcd0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pcd0; _i0++) {
            pcd[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ep0 = 1;
          int * ep = (int *) malloc(_len_ep0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          print_memory_payload(pcd,ep);
          free(pcd);
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
