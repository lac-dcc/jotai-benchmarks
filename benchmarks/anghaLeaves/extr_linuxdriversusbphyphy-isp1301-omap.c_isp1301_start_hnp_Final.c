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
       1            big-arr-10x\n\
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
struct usb_otg {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int
isp1301_start_hnp(struct usb_otg *otg)
{
#ifdef	CONFIG_USB_OTG
	struct isp1301	*isp = container_of(otg->usb_phy, struct isp1301, phy);
	u32 l;

	if (isp != the_transceiver)
		return -ENODEV;
	if (otg->default_a && (otg->host == NULL || !otg->host->b_hnp_enable))
		return -ENOTCONN;
	if (!otg->default_a && (otg->gadget == NULL
			|| !otg->gadget->b_hnp_enable))
		return -ENOTCONN;

	/* We want hardware to manage most HNP protocol timings.
	 * So do this part as early as possible...
	 */
	switch (isp->phy.otg->state) {
	case OTG_STATE_B_HOST:
		isp->phy.otg->state = OTG_STATE_B_PERIPHERAL;
		/* caller will suspend next */
		break;
	case OTG_STATE_A_HOST:
#if 0
		/* autoconnect mode avoids irq latency bugs */
		isp1301_set_bits(isp, ISP1301_MODE_CONTROL_1,
				MC1_BDIS_ACON_EN);
#endif
		/* caller must suspend then clear A_BUSREQ */
		usb_gadget_vbus_connect(otg->gadget);
		l = omap_readl(OTG_CTRL);
		l |= OTG_A_SETB_HNPEN;
		omap_writel(l, OTG_CTRL);

		break;
	case OTG_STATE_A_PERIPHERAL:
		/* initiated by B-Host suspend */
		break;
	default:
		return -EILSEQ;
	}
	pr_debug("otg: HNP %s, %06x ...\n",
		state_name(isp), omap_readl(OTG_CTRL));
	check_state(isp, __func__);
	return 0;
#else
	/* srp-only */
	return -EINVAL;
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
          int _len_otg0 = 1;
          struct usb_otg * otg = (struct usb_otg *) malloc(_len_otg0*sizeof(struct usb_otg));
          for(int _i0 = 0; _i0 < _len_otg0; _i0++) {
            otg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isp1301_start_hnp(otg);
          printf("%d\n", benchRet); 
          free(otg);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_otg0 = 100;
          struct usb_otg * otg = (struct usb_otg *) malloc(_len_otg0*sizeof(struct usb_otg));
          for(int _i0 = 0; _i0 < _len_otg0; _i0++) {
            otg[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = isp1301_start_hnp(otg);
          printf("%d\n", benchRet); 
          free(otg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
