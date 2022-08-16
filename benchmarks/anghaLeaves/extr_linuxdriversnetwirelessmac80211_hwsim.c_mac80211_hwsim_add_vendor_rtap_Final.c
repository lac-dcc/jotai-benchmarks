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
struct sk_buff {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void mac80211_hwsim_add_vendor_rtap(struct sk_buff *skb)
{
	/*
	 * To enable this code, #define the HWSIM_RADIOTAP_OUI,
	 * e.g. like this:
	 * #define HWSIM_RADIOTAP_OUI "\x02\x00\x00"
	 * (but you should use a valid OUI, not that)
	 *
	 * If anyone wants to 'donate' a radiotap OUI/subns code
	 * please send a patch removing this #ifdef and changing
	 * the values accordingly.
	 */
#ifdef HWSIM_RADIOTAP_OUI
	struct ieee80211_vendor_radiotap *rtap;

	/*
	 * Note that this code requires the headroom in the SKB
	 * that was allocated earlier.
	 */
	rtap = skb_push(skb, sizeof(*rtap) + 8 + 4);
	rtap->oui[0] = HWSIM_RADIOTAP_OUI[0];
	rtap->oui[1] = HWSIM_RADIOTAP_OUI[1];
	rtap->oui[2] = HWSIM_RADIOTAP_OUI[2];
	rtap->subns = 127;

	/*
	 * Radiotap vendor namespaces can (and should) also be
	 * split into fields by using the standard radiotap
	 * presence bitmap mechanism. Use just BIT(0) here for
	 * the presence bitmap.
	 */
	rtap->present = BIT(0);
	/* We have 8 bytes of (dummy) data */
	rtap->len = 8;
	/* For testing, also require it to be aligned */
	rtap->align = 8;
	/* And also test that padding works, 4 bytes */
	rtap->pad = 4;
	/* push the data */
	memcpy(rtap->data, "ABCDEFGH", 8);
	/* make sure to clear padding, mac80211 doesn't */
	memset(rtap->data + 8, 0, 4);

	IEEE80211_SKB_RXCB(skb)->flag |= RX_FLAG_RADIOTAP_VENDOR_DATA;
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
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mac80211_hwsim_add_vendor_rtap(skb);
          free(skb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mac80211_hwsim_add_vendor_rtap(skb);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
