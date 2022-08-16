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
struct mlx4_spec_list {int dummy; } ;
struct mlx4_en_priv {int dummy; } ;
struct list_head {int dummy; } ;
struct ethtool_rxnfc {int dummy; } ;
typedef  int /*<<< orphan*/  __be32 ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int mlx4_en_ethtool_add_mac_rule_by_ipv4(struct mlx4_en_priv *priv,
						struct ethtool_rxnfc *cmd,
						struct list_head *rule_list_h,
						struct mlx4_spec_list *spec_l2,
						__be32 ipv4_dst)
{
#ifdef CONFIG_INET
	unsigned char mac[ETH_ALEN];

	if (!ipv4_is_multicast(ipv4_dst)) {
		if (cmd->fs.flow_type & FLOW_MAC_EXT)
			memcpy(&mac, cmd->fs.h_ext.h_dest, ETH_ALEN);
		else
			memcpy(&mac, priv->dev->dev_addr, ETH_ALEN);
	} else {
		ip_eth_mc_map(ipv4_dst, mac);
	}

	return mlx4_en_ethtool_add_mac_rule(cmd, rule_list_h, spec_l2, &mac[0]);
#else
	return -EINVAL;
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
          int ipv4_dst = 100;
          int _len_priv0 = 1;
          struct mlx4_en_priv * priv = (struct mlx4_en_priv *) malloc(_len_priv0*sizeof(struct mlx4_en_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct ethtool_rxnfc * cmd = (struct ethtool_rxnfc *) malloc(_len_cmd0*sizeof(struct ethtool_rxnfc));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rule_list_h0 = 1;
          struct list_head * rule_list_h = (struct list_head *) malloc(_len_rule_list_h0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_rule_list_h0; _i0++) {
            rule_list_h[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_spec_l20 = 1;
          struct mlx4_spec_list * spec_l2 = (struct mlx4_spec_list *) malloc(_len_spec_l20*sizeof(struct mlx4_spec_list));
          for(int _i0 = 0; _i0 < _len_spec_l20; _i0++) {
            spec_l2[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx4_en_ethtool_add_mac_rule_by_ipv4(priv,cmd,rule_list_h,spec_l2,ipv4_dst);
          printf("%d\n", benchRet); 
          free(priv);
          free(cmd);
          free(rule_list_h);
          free(spec_l2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
