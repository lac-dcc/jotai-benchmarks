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
struct nf_proto_net {int dummy; } ;
struct nf_dccp_net {int dummy; } ;
struct net {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int dccp_kmemdup_sysctl_table(struct net *net, struct nf_proto_net *pn,
				     struct nf_dccp_net *dn)
{
#ifdef CONFIG_SYSCTL
	if (pn->ctl_table)
		return 0;

	pn->ctl_table = kmemdup(dccp_sysctl_table,
				sizeof(dccp_sysctl_table),
				GFP_KERNEL);
	if (!pn->ctl_table)
		return -ENOMEM;

	pn->ctl_table[0].data = &dn->dccp_timeout[CT_DCCP_REQUEST];
	pn->ctl_table[1].data = &dn->dccp_timeout[CT_DCCP_RESPOND];
	pn->ctl_table[2].data = &dn->dccp_timeout[CT_DCCP_PARTOPEN];
	pn->ctl_table[3].data = &dn->dccp_timeout[CT_DCCP_OPEN];
	pn->ctl_table[4].data = &dn->dccp_timeout[CT_DCCP_CLOSEREQ];
	pn->ctl_table[5].data = &dn->dccp_timeout[CT_DCCP_CLOSING];
	pn->ctl_table[6].data = &dn->dccp_timeout[CT_DCCP_TIMEWAIT];
	pn->ctl_table[7].data = &dn->dccp_loose;

	/* Don't export sysctls to unprivileged users */
	if (net->user_ns != &init_user_ns)
		pn->ctl_table[0].procname = NULL;
#endif
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
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pn0 = 1;
          struct nf_proto_net * pn = (struct nf_proto_net *) malloc(_len_pn0*sizeof(struct nf_proto_net));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dn0 = 1;
          struct nf_dccp_net * dn = (struct nf_dccp_net *) malloc(_len_dn0*sizeof(struct nf_dccp_net));
          for(int _i0 = 0; _i0 < _len_dn0; _i0++) {
            dn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dccp_kmemdup_sysctl_table(net,pn,dn);
          printf("%d\n", benchRet); 
          free(net);
          free(pn);
          free(dn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
