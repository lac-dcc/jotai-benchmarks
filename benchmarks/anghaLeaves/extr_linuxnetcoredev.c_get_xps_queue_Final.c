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
struct net_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int get_xps_queue(struct net_device *dev, struct net_device *sb_dev,
			 struct sk_buff *skb)
{
#ifdef CONFIG_XPS
	struct xps_dev_maps *dev_maps;
	struct sock *sk = skb->sk;
	int queue_index = -1;

	if (!static_key_false(&xps_needed))
		return -1;

	rcu_read_lock();
	if (!static_key_false(&xps_rxqs_needed))
		goto get_cpus_map;

	dev_maps = rcu_dereference(sb_dev->xps_rxqs_map);
	if (dev_maps) {
		int tci = sk_rx_queue_get(sk);

		if (tci >= 0 && tci < dev->num_rx_queues)
			queue_index = __get_xps_queue_idx(dev, skb, dev_maps,
							  tci);
	}

get_cpus_map:
	if (queue_index < 0) {
		dev_maps = rcu_dereference(sb_dev->xps_cpus_map);
		if (dev_maps) {
			unsigned int tci = skb->sender_cpu - 1;

			queue_index = __get_xps_queue_idx(dev, skb, dev_maps,
							  tci);
		}
	}
	rcu_read_unlock();

	return queue_index;
#else
	return -1;
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sb_dev0 = 1;
          struct net_device * sb_dev = (struct net_device *) malloc(_len_sb_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_sb_dev0; _i0++) {
            sb_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_xps_queue(dev,sb_dev,skb);
          printf("%d\n", benchRet); 
          free(dev);
          free(sb_dev);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
