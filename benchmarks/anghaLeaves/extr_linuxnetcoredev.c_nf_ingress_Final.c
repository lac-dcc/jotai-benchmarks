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

__attribute__((used)) static inline int nf_ingress(struct sk_buff *skb, struct packet_type **pt_prev,
			     int *ret, struct net_device *orig_dev)
{
#ifdef CONFIG_NETFILTER_INGRESS
	if (nf_hook_ingress_active(skb)) {
		int ingress_retval;

		if (*pt_prev) {
			*ret = deliver_skb(skb, *pt_prev, orig_dev);
			*pt_prev = NULL;
		}

		rcu_read_lock();
		ingress_retval = nf_hook_ingress(skb);
		rcu_read_unlock();
		return ingress_retval;
	}
#endif /* CONFIG_NETFILTER_INGRESS */
	return 0;
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
          int benchRet = nf_ingress(skb,pt_prev,ret,orig_dev);
          printf("%d\n", benchRet); 
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
