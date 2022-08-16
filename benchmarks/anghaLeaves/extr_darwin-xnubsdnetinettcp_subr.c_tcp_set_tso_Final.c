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
struct tcpcb {scalar_t__ tso_max_segment_size; int /*<<< orphan*/  t_flags; } ;
struct ifnet {int if_hwassist; scalar_t__ if_tso_v4_mtu; } ;

/* Variables and functions */
 int IFNET_TSO_IPV4 ; 
 scalar_t__ TCP_MAXWIN ; 
 int /*<<< orphan*/  TF_TSO ; 

void
tcp_set_tso(struct tcpcb *tp, struct ifnet *ifp)
{
#if INET6
	struct inpcb *inp;
	int isipv6;
#endif /* INET6 */
#if MPTCP
	/*
	 * We can't use TSO if this tcpcb belongs to an MPTCP session.
	 */
	if (tp->t_mpflags & TMPF_MPTCP_TRUE) {
		tp->t_flags &= ~TF_TSO;
		return;
	}
#endif
#if INET6
	inp = tp->t_inpcb;
	isipv6 = (inp->inp_vflag & INP_IPV6) != 0;

	if (isipv6) {
		if (ifp && (ifp->if_hwassist & IFNET_TSO_IPV6)) {
			tp->t_flags |= TF_TSO;
			if (ifp->if_tso_v6_mtu != 0)
				tp->tso_max_segment_size = ifp->if_tso_v6_mtu;
			else
				tp->tso_max_segment_size = TCP_MAXWIN;
		} else
				tp->t_flags &= ~TF_TSO;

	} else
#endif /* INET6 */

	{
		if (ifp && (ifp->if_hwassist & IFNET_TSO_IPV4)) {
			tp->t_flags |= TF_TSO;
			if (ifp->if_tso_v4_mtu != 0)
				tp->tso_max_segment_size = ifp->if_tso_v4_mtu;
			else
				tp->tso_max_segment_size = TCP_MAXWIN;
		} else
				tp->t_flags &= ~TF_TSO;
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
          int _len_tp0 = 1;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].tso_max_segment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ifp0 = 1;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].if_hwassist = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_tso_v4_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcp_set_tso(tp,ifp);
          free(tp);
          free(ifp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
