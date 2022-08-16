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
struct dwc2_qtd {int dummy; } ;
struct dwc2_hsotg {int dummy; } ;
struct dwc2_host_chan {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool dwc2_halt_status_ok(struct dwc2_hsotg *hsotg,
				struct dwc2_host_chan *chan, int chnum,
				struct dwc2_qtd *qtd)
{
#ifdef DEBUG
	u32 hcchar;
	u32 hctsiz;
	u32 hcintmsk;
	u32 hcsplt;

	if (chan->halt_status == DWC2_HC_XFER_NO_HALT_STATUS) {
		/*
		 * This code is here only as a check. This condition should
		 * never happen. Ignore the halt if it does occur.
		 */
		hcchar = dwc2_readl(hsotg, HCCHAR(chnum));
		hctsiz = dwc2_readl(hsotg, HCTSIZ(chnum));
		hcintmsk = dwc2_readl(hsotg, HCINTMSK(chnum));
		hcsplt = dwc2_readl(hsotg, HCSPLT(chnum));
		dev_dbg(hsotg->dev,
			"%s: chan->halt_status DWC2_HC_XFER_NO_HALT_STATUS,\n",
			 __func__);
		dev_dbg(hsotg->dev,
			"channel %d, hcchar 0x%08x, hctsiz 0x%08x,\n",
			chnum, hcchar, hctsiz);
		dev_dbg(hsotg->dev,
			"hcint 0x%08x, hcintmsk 0x%08x, hcsplt 0x%08x,\n",
			chan->hcint, hcintmsk, hcsplt);
		if (qtd)
			dev_dbg(hsotg->dev, "qtd->complete_split %d\n",
				qtd->complete_split);
		dev_warn(hsotg->dev,
			 "%s: no halt status, channel %d, ignoring interrupt\n",
			 __func__, chnum);
		return false;
	}

	/*
	 * This code is here only as a check. hcchar.chdis should never be set
	 * when the halt interrupt occurs. Halt the channel again if it does
	 * occur.
	 */
	hcchar = dwc2_readl(hsotg, HCCHAR(chnum));
	if (hcchar & HCCHAR_CHDIS) {
		dev_warn(hsotg->dev,
			 "%s: hcchar.chdis set unexpectedly, hcchar 0x%08x, trying to halt again\n",
			 __func__, hcchar);
		chan->halt_pending = 0;
		dwc2_halt_channel(hsotg, chan, qtd, chan->halt_status);
		return false;
	}
#endif

	return true;
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
          int chnum = 100;
          int _len_hsotg0 = 1;
          struct dwc2_hsotg * hsotg = (struct dwc2_hsotg *) malloc(_len_hsotg0*sizeof(struct dwc2_hsotg));
          for(int _i0 = 0; _i0 < _len_hsotg0; _i0++) {
            hsotg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chan0 = 1;
          struct dwc2_host_chan * chan = (struct dwc2_host_chan *) malloc(_len_chan0*sizeof(struct dwc2_host_chan));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_qtd0 = 1;
          struct dwc2_qtd * qtd = (struct dwc2_qtd *) malloc(_len_qtd0*sizeof(struct dwc2_qtd));
          for(int _i0 = 0; _i0 < _len_qtd0; _i0++) {
            qtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dwc2_halt_status_ok(hsotg,chan,chnum,qtd);
          printf("%d\n", benchRet); 
          free(hsotg);
          free(chan);
          free(qtd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
