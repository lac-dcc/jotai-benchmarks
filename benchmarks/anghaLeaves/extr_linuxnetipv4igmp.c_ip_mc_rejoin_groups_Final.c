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
struct in_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void ip_mc_rejoin_groups(struct in_device *in_dev)
{
#ifdef CONFIG_IP_MULTICAST
	struct ip_mc_list *im;
	int type;
	struct net *net = dev_net(in_dev->dev);

	ASSERT_RTNL();

	for_each_pmc_rtnl(in_dev, im) {
		if (im->multiaddr == IGMP_ALL_HOSTS)
			continue;
		if (ipv4_is_local_multicast(im->multiaddr) &&
		    !net->ipv4.sysctl_igmp_llm_reports)
			continue;

		/* a failover is happening and switches
		 * must be notified immediately
		 */
		if (IGMP_V1_SEEN(in_dev))
			type = IGMP_HOST_MEMBERSHIP_REPORT;
		else if (IGMP_V2_SEEN(in_dev))
			type = IGMPV2_HOST_MEMBERSHIP_REPORT;
		else
			type = IGMPV3_HOST_MEMBERSHIP_REPORT;
		igmp_send_report(in_dev, im, type);
	}
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
          int _len_in_dev0 = 1;
          struct in_device * in_dev = (struct in_device *) malloc(_len_in_dev0*sizeof(struct in_device));
          for(int _i0 = 0; _i0 < _len_in_dev0; _i0++) {
            in_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ip_mc_rejoin_groups(in_dev);
          free(in_dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_in_dev0 = 100;
          struct in_device * in_dev = (struct in_device *) malloc(_len_in_dev0*sizeof(struct in_device));
          for(int _i0 = 0; _i0 < _len_in_dev0; _i0++) {
            in_dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ip_mc_rejoin_groups(in_dev);
          free(in_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
