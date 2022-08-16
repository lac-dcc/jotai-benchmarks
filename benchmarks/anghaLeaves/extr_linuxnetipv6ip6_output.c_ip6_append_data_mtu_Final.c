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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flags; unsigned int header_len; } ;
struct rt6_info {TYPE_1__ dst; } ;
struct frag_hdr {int dummy; } ;

/* Variables and functions */
 int DST_XFRM_TUNNEL ; 

__attribute__((used)) static void ip6_append_data_mtu(unsigned int *mtu,
				int *maxfraglen,
				unsigned int fragheaderlen,
				struct sk_buff *skb,
				struct rt6_info *rt,
				unsigned int orig_mtu)
{
	if (!(rt->dst.flags & DST_XFRM_TUNNEL)) {
		if (!skb) {
			/* first fragment, reserve header_len */
			*mtu = orig_mtu - rt->dst.header_len;

		} else {
			/*
			 * this fragment is not first, the headers
			 * space is regarded as data space.
			 */
			*mtu = orig_mtu;
		}
		*maxfraglen = ((*mtu - fragheaderlen) & ~7)
			      + fragheaderlen - sizeof(struct frag_hdr);
	}
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
          unsigned int fragheaderlen = 100;
          unsigned int orig_mtu = 100;
          int _len_mtu0 = 1;
          unsigned int * mtu = (unsigned int *) malloc(_len_mtu0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_mtu0; _i0++) {
            mtu[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maxfraglen0 = 1;
          int * maxfraglen = (int *) malloc(_len_maxfraglen0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_maxfraglen0; _i0++) {
            maxfraglen[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rt0 = 1;
          struct rt6_info * rt = (struct rt6_info *) malloc(_len_rt0*sizeof(struct rt6_info));
          for(int _i0 = 0; _i0 < _len_rt0; _i0++) {
            rt[_i0].dst.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rt[_i0].dst.header_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ip6_append_data_mtu(mtu,maxfraglen,fragheaderlen,skb,rt,orig_mtu);
          free(mtu);
          free(maxfraglen);
          free(skb);
          free(rt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
