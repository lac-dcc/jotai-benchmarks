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
struct ieee80211_hdr {int dummy; } ;

/* Variables and functions */
 scalar_t__ NET_IP_ALIGN ; 

__attribute__((used)) static unsigned int _rtl_rx_get_padding(struct ieee80211_hdr *hdr,
					unsigned int len)
{
#if NET_IP_ALIGN != 0
	unsigned int padding = 0;
#endif

	/* make function no-op when possible */
	if (NET_IP_ALIGN == 0 || len < sizeof(*hdr))
		return 0;

#if NET_IP_ALIGN != 0
	/* alignment calculation as in lbtf_rx() / carl9170_rx_copy_data() */
	/* TODO: deduplicate common code, define helper function instead? */

	if (ieee80211_is_data_qos(hdr->frame_control)) {
		u8 *qc = ieee80211_get_qos_ctl(hdr);

		padding ^= NET_IP_ALIGN;

		/* Input might be invalid, avoid accessing memory outside
		 * the buffer.
		 */
		if ((unsigned long)qc - (unsigned long)hdr < len &&
		    *qc & IEEE80211_QOS_CTL_A_MSDU_PRESENT)
			padding ^= NET_IP_ALIGN;
	}

	if (ieee80211_has_a4(hdr->frame_control))
		padding ^= NET_IP_ALIGN;

	return padding;
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
          unsigned int len = 100;
          int _len_hdr0 = 1;
          struct ieee80211_hdr * hdr = (struct ieee80211_hdr *) malloc(_len_hdr0*sizeof(struct ieee80211_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = _rtl_rx_get_padding(hdr,len);
          printf("%u\n", benchRet); 
          free(hdr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int len = 10;
          int _len_hdr0 = 100;
          struct ieee80211_hdr * hdr = (struct ieee80211_hdr *) malloc(_len_hdr0*sizeof(struct ieee80211_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = _rtl_rx_get_padding(hdr,len);
          printf("%u\n", benchRet); 
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}