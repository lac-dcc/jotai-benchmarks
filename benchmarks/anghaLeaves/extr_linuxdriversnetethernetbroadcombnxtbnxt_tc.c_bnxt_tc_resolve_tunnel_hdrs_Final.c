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
struct ip_tunnel_key {int dummy; } ;
struct bnxt_tc_l2_key {int dummy; } ;
struct bnxt {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

__attribute__((used)) static int bnxt_tc_resolve_tunnel_hdrs(struct bnxt *bp,
				       struct ip_tunnel_key *tun_key,
				       struct bnxt_tc_l2_key *l2_info)
{
#ifdef CONFIG_INET
	struct net_device *real_dst_dev = bp->dev;
	struct flowi4 flow = { {0} };
	struct net_device *dst_dev;
	struct neighbour *nbr;
	struct rtable *rt;
	int rc;

	flow.flowi4_proto = IPPROTO_UDP;
	flow.fl4_dport = tun_key->tp_dst;
	flow.daddr = tun_key->u.ipv4.dst;

	rt = ip_route_output_key(dev_net(real_dst_dev), &flow);
	if (IS_ERR(rt)) {
		netdev_info(bp->dev, "no route to %pI4b", &flow.daddr);
		return -EOPNOTSUPP;
	}

	/* The route must either point to the real_dst_dev or a dst_dev that
	 * uses the real_dst_dev.
	 */
	dst_dev = rt->dst.dev;
	if (is_vlan_dev(dst_dev)) {
#if IS_ENABLED(CONFIG_VLAN_8021Q)
		struct vlan_dev_priv *vlan = vlan_dev_priv(dst_dev);

		if (vlan->real_dev != real_dst_dev) {
			netdev_info(bp->dev,
				    "dst_dev(%s) doesn't use PF-if(%s)",
				    netdev_name(dst_dev),
				    netdev_name(real_dst_dev));
			rc = -EOPNOTSUPP;
			goto put_rt;
		}
		l2_info->inner_vlan_tci = htons(vlan->vlan_id);
		l2_info->inner_vlan_tpid = vlan->vlan_proto;
		l2_info->num_vlans = 1;
#endif
	} else if (dst_dev != real_dst_dev) {
		netdev_info(bp->dev,
			    "dst_dev(%s) for %pI4b is not PF-if(%s)",
			    netdev_name(dst_dev), &flow.daddr,
			    netdev_name(real_dst_dev));
		rc = -EOPNOTSUPP;
		goto put_rt;
	}

	nbr = dst_neigh_lookup(&rt->dst, &flow.daddr);
	if (!nbr) {
		netdev_info(bp->dev, "can't lookup neighbor for %pI4b",
			    &flow.daddr);
		rc = -EOPNOTSUPP;
		goto put_rt;
	}

	tun_key->u.ipv4.src = flow.saddr;
	tun_key->ttl = ip4_dst_hoplimit(&rt->dst);
	neigh_ha_snapshot(l2_info->dmac, nbr, dst_dev);
	ether_addr_copy(l2_info->smac, dst_dev->dev_addr);
	neigh_release(nbr);
	ip_rt_put(rt);

	return 0;
put_rt:
	ip_rt_put(rt);
	return rc;
#else
	return -EOPNOTSUPP;
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
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tun_key0 = 1;
          struct ip_tunnel_key * tun_key = (struct ip_tunnel_key *) malloc(_len_tun_key0*sizeof(struct ip_tunnel_key));
          for(int _i0 = 0; _i0 < _len_tun_key0; _i0++) {
            tun_key[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_l2_info0 = 1;
          struct bnxt_tc_l2_key * l2_info = (struct bnxt_tc_l2_key *) malloc(_len_l2_info0*sizeof(struct bnxt_tc_l2_key));
          for(int _i0 = 0; _i0 < _len_l2_info0; _i0++) {
            l2_info[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnxt_tc_resolve_tunnel_hdrs(bp,tun_key,l2_info);
          printf("%d\n", benchRet); 
          free(bp);
          free(tun_key);
          free(l2_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
