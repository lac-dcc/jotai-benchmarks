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
struct packet_type {int dummy; } ;
struct net_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline struct sk_buff *
sch_handle_ingress(struct sk_buff *skb, struct packet_type **pt_prev, int *ret,
		   struct net_device *orig_dev)
{
#ifdef CONFIG_NET_CLS_ACT
	struct mini_Qdisc *miniq = rcu_dereference_bh(skb->dev->miniq_ingress);
	struct tcf_result cl_res;

	/* If there's at least one ingress present somewhere (so
	 * we get here via enabled static key), remaining devices
	 * that are not configured with an ingress qdisc will bail
	 * out here.
	 */
	if (!miniq)
		return skb;

	if (*pt_prev) {
		*ret = deliver_skb(skb, *pt_prev, orig_dev);
		*pt_prev = NULL;
	}

	qdisc_skb_cb(skb)->pkt_len = skb->len;
	skb->tc_at_ingress = 1;
	mini_qdisc_bstats_cpu_update(miniq, skb);

	switch (tcf_classify(skb, miniq->filter_list, &cl_res, false)) {
	case TC_ACT_OK:
	case TC_ACT_RECLASSIFY:
		skb->tc_index = TC_H_MIN(cl_res.classid);
		break;
	case TC_ACT_SHOT:
		mini_qdisc_qstats_cpu_drop(miniq);
		kfree_skb(skb);
		return NULL;
	case TC_ACT_STOLEN:
	case TC_ACT_QUEUED:
	case TC_ACT_TRAP:
		consume_skb(skb);
		return NULL;
	case TC_ACT_REDIRECT:
		/* skb_mac_header check was done by cls/act_bpf, so
		 * we can safely push the L2 header back before
		 * redirecting to another netdev
		 */
		__skb_push(skb, skb->mac_len);
		skb_do_redirect(skb);
		return NULL;
	case TC_ACT_REINSERT:
		/* this does not scrub the packet, and updates stats on error */
		skb_tc_reinsert(skb, &cl_res);
		return NULL;
	default:
		break;
	}
#endif /* CONFIG_NET_CLS_ACT */
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
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pt_prev0 = 1;
          struct packet_type ** pt_prev = (struct packet_type **) malloc(_len_pt_prev0*sizeof(struct packet_type *));
          for(int _i0 = 0; _i0 < _len_pt_prev0; _i0++) {
            int _len_pt_prev1 = 1;
            pt_prev[_i0] = (struct packet_type *) malloc(_len_pt_prev1*sizeof(struct packet_type));
            for(int _i1 = 0; _i1 < _len_pt_prev1; _i1++) {
              pt_prev[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ret0 = 1;
          int * ret = (int *) malloc(_len_ret0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ret0; _i0++) {
            ret[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_orig_dev0 = 1;
          struct net_device * orig_dev = (struct net_device *) malloc(_len_orig_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_orig_dev0; _i0++) {
            orig_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct sk_buff * benchRet = sch_handle_ingress(skb,pt_prev,ret,orig_dev);
          printf("%d\n", (*benchRet).dummy);
          free(skb);
          for(int i1 = 0; i1 < _len_pt_prev0; i1++) {
            int _len_pt_prev1 = 1;
              free(pt_prev[i1]);
          }
          free(pt_prev);
          free(ret);
          free(orig_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
