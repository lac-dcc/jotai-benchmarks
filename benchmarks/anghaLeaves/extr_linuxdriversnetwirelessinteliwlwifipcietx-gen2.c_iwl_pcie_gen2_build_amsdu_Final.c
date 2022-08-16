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
struct sk_buff {int dummy; } ;
struct iwl_trans {int dummy; } ;
struct iwl_tfh_tfd {int dummy; } ;
struct iwl_device_cmd {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int iwl_pcie_gen2_build_amsdu(struct iwl_trans *trans,
				     struct sk_buff *skb,
				     struct iwl_tfh_tfd *tfd, int start_len,
				     u8 hdr_len, struct iwl_device_cmd *dev_cmd)
{
#ifdef CONFIG_INET
	struct iwl_trans_pcie *trans_pcie = IWL_TRANS_GET_PCIE_TRANS(trans);
	struct iwl_tx_cmd *tx_cmd = (void *)dev_cmd->payload;
	struct ieee80211_hdr *hdr = (void *)skb->data;
	unsigned int snap_ip_tcp_hdrlen, ip_hdrlen, total_len, hdr_room;
	unsigned int mss = skb_shinfo(skb)->gso_size;
	u16 length, iv_len, amsdu_pad;
	u8 *start_hdr;
	struct iwl_tso_hdr_page *hdr_page;
	struct page **page_ptr;
	struct tso_t tso;

	/* if the packet is protected, then it must be CCMP or GCMP */
	iv_len = ieee80211_has_protected(hdr->frame_control) ?
		IEEE80211_CCMP_HDR_LEN : 0;

	trace_iwlwifi_dev_tx(trans->dev, skb, tfd, sizeof(*tfd),
			     &dev_cmd->hdr, start_len, 0);

	ip_hdrlen = skb_transport_header(skb) - skb_network_header(skb);
	snap_ip_tcp_hdrlen = 8 + ip_hdrlen + tcp_hdrlen(skb);
	total_len = skb->len - snap_ip_tcp_hdrlen - hdr_len - iv_len;
	amsdu_pad = 0;

	/* total amount of header we may need for this A-MSDU */
	hdr_room = DIV_ROUND_UP(total_len, mss) *
		(3 + snap_ip_tcp_hdrlen + sizeof(struct ethhdr)) + iv_len;

	/* Our device supports 9 segments at most, it will fit in 1 page */
	hdr_page = get_page_hdr(trans, hdr_room);
	if (!hdr_page)
		return -ENOMEM;

	get_page(hdr_page->page);
	start_hdr = hdr_page->pos;
	page_ptr = (void *)((u8 *)skb->cb + trans_pcie->page_offs);
	*page_ptr = hdr_page->page;
	memcpy(hdr_page->pos, skb->data + hdr_len, iv_len);
	hdr_page->pos += iv_len;

	/*
	 * Pull the ieee80211 header + IV to be able to use TSO core,
	 * we will restore it for the tx_status flow.
	 */
	skb_pull(skb, hdr_len + iv_len);

	/*
	 * Remove the length of all the headers that we don't actually
	 * have in the MPDU by themselves, but that we duplicate into
	 * all the different MSDUs inside the A-MSDU.
	 */
	le16_add_cpu(&tx_cmd->len, -snap_ip_tcp_hdrlen);

	tso_start(skb, &tso);

	while (total_len) {
		/* this is the data left for this subframe */
		unsigned int data_left = min_t(unsigned int, mss, total_len);
		struct sk_buff *csum_skb = NULL;
		unsigned int tb_len;
		dma_addr_t tb_phys;
		u8 *subf_hdrs_start = hdr_page->pos;

		total_len -= data_left;

		memset(hdr_page->pos, 0, amsdu_pad);
		hdr_page->pos += amsdu_pad;
		amsdu_pad = (4 - (sizeof(struct ethhdr) + snap_ip_tcp_hdrlen +
				  data_left)) & 0x3;
		ether_addr_copy(hdr_page->pos, ieee80211_get_DA(hdr));
		hdr_page->pos += ETH_ALEN;
		ether_addr_copy(hdr_page->pos, ieee80211_get_SA(hdr));
		hdr_page->pos += ETH_ALEN;

		length = snap_ip_tcp_hdrlen + data_left;
		*((__be16 *)hdr_page->pos) = cpu_to_be16(length);
		hdr_page->pos += sizeof(length);

		/*
		 * This will copy the SNAP as well which will be considered
		 * as MAC header.
		 */
		tso_build_hdr(skb, hdr_page->pos, &tso, data_left, !total_len);

		hdr_page->pos += snap_ip_tcp_hdrlen;

		tb_len = hdr_page->pos - start_hdr;
		tb_phys = dma_map_single(trans->dev, start_hdr,
					 tb_len, DMA_TO_DEVICE);
		if (unlikely(dma_mapping_error(trans->dev, tb_phys))) {
			dev_kfree_skb(csum_skb);
			goto out_err;
		}
		iwl_pcie_gen2_set_tb(trans, tfd, tb_phys, tb_len);
		trace_iwlwifi_dev_tx_tso_chunk(trans->dev, start_hdr, tb_len);
		/* add this subframe's headers' length to the tx_cmd */
		le16_add_cpu(&tx_cmd->len, hdr_page->pos - subf_hdrs_start);

		/* prepare the start_hdr for the next subframe */
		start_hdr = hdr_page->pos;

		/* put the payload */
		while (data_left) {
			tb_len = min_t(unsigned int, tso.size, data_left);
			tb_phys = dma_map_single(trans->dev, tso.data,
						 tb_len, DMA_TO_DEVICE);
			if (unlikely(dma_mapping_error(trans->dev, tb_phys))) {
				dev_kfree_skb(csum_skb);
				goto out_err;
			}
			iwl_pcie_gen2_set_tb(trans, tfd, tb_phys, tb_len);
			trace_iwlwifi_dev_tx_tso_chunk(trans->dev, tso.data,
						       tb_len);

			data_left -= tb_len;
			tso_build_data(skb, &tso, tb_len);
		}
	}

	/* re -add the WiFi header and IV */
	skb_push(skb, hdr_len + iv_len);

	return 0;

out_err:
#endif
	return -EINVAL;
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
          int start_len = 100;
          int hdr_len = 100;
          int _len_trans0 = 1;
          struct iwl_trans * trans = (struct iwl_trans *) malloc(_len_trans0*sizeof(struct iwl_trans));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
            trans[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tfd0 = 1;
          struct iwl_tfh_tfd * tfd = (struct iwl_tfh_tfd *) malloc(_len_tfd0*sizeof(struct iwl_tfh_tfd));
          for(int _i0 = 0; _i0 < _len_tfd0; _i0++) {
            tfd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev_cmd0 = 1;
          struct iwl_device_cmd * dev_cmd = (struct iwl_device_cmd *) malloc(_len_dev_cmd0*sizeof(struct iwl_device_cmd));
          for(int _i0 = 0; _i0 < _len_dev_cmd0; _i0++) {
            dev_cmd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iwl_pcie_gen2_build_amsdu(trans,skb,tfd,start_len,hdr_len,dev_cmd);
          printf("%d\n", benchRet); 
          free(trans);
          free(skb);
          free(tfd);
          free(dev_cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
