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
struct nf_tcp_net {int dummy; } ;
struct nf_proto_net {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int tcp_kmemdup_sysctl_table(struct nf_proto_net *pn,
				    struct nf_tcp_net *tn)
{
#ifdef CONFIG_SYSCTL
	if (pn->ctl_table)
		return 0;

	pn->ctl_table = kmemdup(tcp_sysctl_table,
				sizeof(tcp_sysctl_table),
				GFP_KERNEL);
	if (!pn->ctl_table)
		return -ENOMEM;

	pn->ctl_table[0].data = &tn->timeouts[TCP_CONNTRACK_SYN_SENT];
	pn->ctl_table[1].data = &tn->timeouts[TCP_CONNTRACK_SYN_RECV];
	pn->ctl_table[2].data = &tn->timeouts[TCP_CONNTRACK_ESTABLISHED];
	pn->ctl_table[3].data = &tn->timeouts[TCP_CONNTRACK_FIN_WAIT];
	pn->ctl_table[4].data = &tn->timeouts[TCP_CONNTRACK_CLOSE_WAIT];
	pn->ctl_table[5].data = &tn->timeouts[TCP_CONNTRACK_LAST_ACK];
	pn->ctl_table[6].data = &tn->timeouts[TCP_CONNTRACK_TIME_WAIT];
	pn->ctl_table[7].data = &tn->timeouts[TCP_CONNTRACK_CLOSE];
	pn->ctl_table[8].data = &tn->timeouts[TCP_CONNTRACK_RETRANS];
	pn->ctl_table[9].data = &tn->timeouts[TCP_CONNTRACK_UNACK];
	pn->ctl_table[10].data = &tn->tcp_loose;
	pn->ctl_table[11].data = &tn->tcp_be_liberal;
	pn->ctl_table[12].data = &tn->tcp_max_retrans;
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
          int _len_pn0 = 1;
          struct nf_proto_net * pn = (struct nf_proto_net *) malloc(_len_pn0*sizeof(struct nf_proto_net));
          for(int _i0 = 0; _i0 < _len_pn0; _i0++) {
            pn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tn0 = 1;
          struct nf_tcp_net * tn = (struct nf_tcp_net *) malloc(_len_tn0*sizeof(struct nf_tcp_net));
          for(int _i0 = 0; _i0 < _len_tn0; _i0++) {
            tn[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = tcp_kmemdup_sysctl_table(pn,tn);
          printf("%d\n", benchRet); 
          free(pn);
          free(tn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
