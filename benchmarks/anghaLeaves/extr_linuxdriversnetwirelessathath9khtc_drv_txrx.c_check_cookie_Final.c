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
typedef  scalar_t__ u8 ;
struct tx_mgmt_hdr {scalar_t__ cookie; } ;
struct tx_frame_hdr {scalar_t__ cookie; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath9k_htc_priv {scalar_t__ mgmt_ep; scalar_t__ data_bk_ep; scalar_t__ data_be_ep; scalar_t__ data_vi_ep; scalar_t__ data_vo_ep; scalar_t__ cab_ep; } ;

/* Variables and functions */

__attribute__((used)) static inline bool check_cookie(struct ath9k_htc_priv *priv,
				struct sk_buff *skb,
				u8 cookie, u8 epid)
{
	u8 fcookie = 0;

	if (epid == priv->mgmt_ep) {
		struct tx_mgmt_hdr *hdr;
		hdr = (struct tx_mgmt_hdr *) skb->data;
		fcookie = hdr->cookie;
	} else if ((epid == priv->data_bk_ep) ||
		   (epid == priv->data_be_ep) ||
		   (epid == priv->data_vi_ep) ||
		   (epid == priv->data_vo_ep) ||
		   (epid == priv->cab_ep)) {
		struct tx_frame_hdr *hdr;
		hdr = (struct tx_frame_hdr *) skb->data;
		fcookie = hdr->cookie;
	}

	if (fcookie == cookie)
		return true;

	return false;
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
          long cookie = 100;
          long epid = 100;
          int _len_priv0 = 1;
          struct ath9k_htc_priv * priv = (struct ath9k_htc_priv *) malloc(_len_priv0*sizeof(struct ath9k_htc_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].mgmt_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].data_bk_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].data_be_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].data_vi_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].data_vo_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].cab_ep = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_cookie(priv,skb,cookie,epid);
          printf("%d\n", benchRet); 
          free(priv);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
