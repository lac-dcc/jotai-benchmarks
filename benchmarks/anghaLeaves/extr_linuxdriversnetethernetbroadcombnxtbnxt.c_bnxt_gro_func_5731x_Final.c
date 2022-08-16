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
struct sk_buff {int dummy; } ;
struct bnxt_tpa_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct sk_buff *bnxt_gro_func_5731x(struct bnxt_tpa_info *tpa_info,
					   int payload_off, int tcp_ts,
					   struct sk_buff *skb)
{
#ifdef CONFIG_INET
	struct tcphdr *th;
	int len, nw_off;
	u16 outer_ip_off, inner_ip_off, inner_mac_off;
	u32 hdr_info = tpa_info->hdr_info;
	bool loopback = false;

	inner_ip_off = BNXT_TPA_INNER_L3_OFF(hdr_info);
	inner_mac_off = BNXT_TPA_INNER_L2_OFF(hdr_info);
	outer_ip_off = BNXT_TPA_OUTER_L3_OFF(hdr_info);

	/* If the packet is an internal loopback packet, the offsets will
	 * have an extra 4 bytes.
	 */
	if (inner_mac_off == 4) {
		loopback = true;
	} else if (inner_mac_off > 4) {
		__be16 proto = *((__be16 *)(skb->data + inner_ip_off -
					    ETH_HLEN - 2));

		/* We only support inner iPv4/ipv6.  If we don't see the
		 * correct protocol ID, it must be a loopback packet where
		 * the offsets are off by 4.
		 */
		if (proto != htons(ETH_P_IP) && proto != htons(ETH_P_IPV6))
			loopback = true;
	}
	if (loopback) {
		/* internal loopback packet, subtract all offsets by 4 */
		inner_ip_off -= 4;
		inner_mac_off -= 4;
		outer_ip_off -= 4;
	}

	nw_off = inner_ip_off - ETH_HLEN;
	skb_set_network_header(skb, nw_off);
	if (tpa_info->flags2 & RX_TPA_START_CMP_FLAGS2_IP_TYPE) {
		struct ipv6hdr *iph = ipv6_hdr(skb);

		skb_set_transport_header(skb, nw_off + sizeof(struct ipv6hdr));
		len = skb->len - skb_transport_offset(skb);
		th = tcp_hdr(skb);
		th->check = ~tcp_v6_check(len, &iph->saddr, &iph->daddr, 0);
	} else {
		struct iphdr *iph = ip_hdr(skb);

		skb_set_transport_header(skb, nw_off + sizeof(struct iphdr));
		len = skb->len - skb_transport_offset(skb);
		th = tcp_hdr(skb);
		th->check = ~tcp_v4_check(len, iph->saddr, iph->daddr, 0);
	}

	if (inner_mac_off) { /* tunnel */
		struct udphdr *uh = NULL;
		__be16 proto = *((__be16 *)(skb->data + outer_ip_off -
					    ETH_HLEN - 2));

		if (proto == htons(ETH_P_IP)) {
			struct iphdr *iph = (struct iphdr *)skb->data;

			if (iph->protocol == IPPROTO_UDP)
				uh = (struct udphdr *)(iph + 1);
		} else {
			struct ipv6hdr *iph = (struct ipv6hdr *)skb->data;

			if (iph->nexthdr == IPPROTO_UDP)
				uh = (struct udphdr *)(iph + 1);
		}
		if (uh) {
			if (uh->check)
				skb_shinfo(skb)->gso_type |=
					SKB_GSO_UDP_TUNNEL_CSUM;
			else
				skb_shinfo(skb)->gso_type |= SKB_GSO_UDP_TUNNEL;
		}
	}
#endif
	return skb;
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
          int payload_off = 100;
          int tcp_ts = 100;
          int _len_tpa_info0 = 1;
          struct bnxt_tpa_info * tpa_info = (struct bnxt_tpa_info *) malloc(_len_tpa_info0*sizeof(struct bnxt_tpa_info));
          for(int _i0 = 0; _i0 < _len_tpa_info0; _i0++) {
            tpa_info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sk_buff * benchRet = bnxt_gro_func_5731x(tpa_info,payload_off,tcp_ts,skb);
          printf("%d\n", (*benchRet).dummy);
          free(tpa_info);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
