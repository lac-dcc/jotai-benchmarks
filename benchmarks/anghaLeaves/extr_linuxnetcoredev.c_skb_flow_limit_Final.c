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

__attribute__((used)) static bool skb_flow_limit(struct sk_buff *skb, unsigned int qlen)
{
#ifdef CONFIG_NET_FLOW_LIMIT
	struct sd_flow_limit *fl;
	struct softnet_data *sd;
	unsigned int old_flow, new_flow;

	if (qlen < (netdev_max_backlog >> 1))
		return false;

	sd = this_cpu_ptr(&softnet_data);

	rcu_read_lock();
	fl = rcu_dereference(sd->flow_limit);
	if (fl) {
		new_flow = skb_get_hash(skb) & (fl->num_buckets - 1);
		old_flow = fl->history[fl->history_head];
		fl->history[fl->history_head] = new_flow;

		fl->history_head++;
		fl->history_head &= FLOW_LIMIT_HISTORY - 1;

		if (likely(fl->buckets[old_flow]))
			fl->buckets[old_flow]--;

		if (++fl->buckets[new_flow] > (FLOW_LIMIT_HISTORY >> 1)) {
			fl->count++;
			rcu_read_unlock();
			return true;
		}
	}
	rcu_read_unlock();
#endif
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
          unsigned int qlen = 100;
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = skb_flow_limit(skb,qlen);
          printf("%d\n", benchRet); 
          free(skb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int qlen = 10;
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = skb_flow_limit(skb,qlen);
          printf("%d\n", benchRet); 
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
