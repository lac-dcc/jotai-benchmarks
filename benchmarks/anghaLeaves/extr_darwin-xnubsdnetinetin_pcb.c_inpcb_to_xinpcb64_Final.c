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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_15__ {int /*<<< orphan*/  inp6_hops; scalar_t__ inp6_ifindex; int /*<<< orphan*/  inp6_cksum; scalar_t__ inp6_hlim; } ;
struct TYPE_13__ {int /*<<< orphan*/  inp4_ip_tos; } ;
struct TYPE_11__ {int /*<<< orphan*/  inp6_local; } ;
struct TYPE_9__ {int /*<<< orphan*/  inp6_foreign; } ;
struct xinpcb64 {TYPE_7__ inp_depend6; TYPE_5__ inp_depend4; TYPE_3__ inp_dependladdr; TYPE_1__ inp_dependfaddr; int /*<<< orphan*/  inp_ip_p; int /*<<< orphan*/  inp_ip_ttl; int /*<<< orphan*/  inp_vflag; int /*<<< orphan*/  inp_flow; int /*<<< orphan*/  inp_flags; int /*<<< orphan*/  inp_gencnt; int /*<<< orphan*/  inp_lport; int /*<<< orphan*/  inp_fport; } ;
struct TYPE_16__ {int /*<<< orphan*/  inp6_hops; int /*<<< orphan*/  inp6_cksum; } ;
struct TYPE_14__ {int /*<<< orphan*/  inp4_ip_tos; } ;
struct TYPE_12__ {int /*<<< orphan*/  inp6_local; } ;
struct TYPE_10__ {int /*<<< orphan*/  inp6_foreign; } ;
struct inpcb {TYPE_8__ inp_depend6; TYPE_6__ inp_depend4; TYPE_4__ inp_dependladdr; TYPE_2__ inp_dependfaddr; int /*<<< orphan*/  inp_ip_p; int /*<<< orphan*/  inp_ip_ttl; int /*<<< orphan*/  inp_vflag; int /*<<< orphan*/  inp_flow; int /*<<< orphan*/  inp_flags; int /*<<< orphan*/  inp_gencnt; int /*<<< orphan*/  inp_lport; int /*<<< orphan*/  inp_fport; } ;

/* Variables and functions */

void
inpcb_to_xinpcb64(struct inpcb *inp, struct xinpcb64 *xinp)
{
	xinp->inp_fport = inp->inp_fport;
	xinp->inp_lport = inp->inp_lport;
	xinp->inp_gencnt = inp->inp_gencnt;
	xinp->inp_flags = inp->inp_flags;
	xinp->inp_flow = inp->inp_flow;
	xinp->inp_vflag = inp->inp_vflag;
	xinp->inp_ip_ttl = inp->inp_ip_ttl;
	xinp->inp_ip_p = inp->inp_ip_p;
	xinp->inp_dependfaddr.inp6_foreign = inp->inp_dependfaddr.inp6_foreign;
	xinp->inp_dependladdr.inp6_local = inp->inp_dependladdr.inp6_local;
	xinp->inp_depend4.inp4_ip_tos = inp->inp_depend4.inp4_ip_tos;
	xinp->inp_depend6.inp6_hlim = 0;
	xinp->inp_depend6.inp6_cksum = inp->inp_depend6.inp6_cksum;
	xinp->inp_depend6.inp6_ifindex = 0;
	xinp->inp_depend6.inp6_hops = inp->inp_depend6.inp6_hops;
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
          int _len_inp0 = 1;
          struct inpcb * inp = (struct inpcb *) malloc(_len_inp0*sizeof(struct inpcb));
          for(int _i0 = 0; _i0 < _len_inp0; _i0++) {
            inp[_i0].inp_depend6.inp6_hops = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_depend6.inp6_cksum = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_depend4.inp4_ip_tos = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_dependladdr.inp6_local = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_dependfaddr.inp6_foreign = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_ip_p = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_ip_ttl = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_vflag = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_flow = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_gencnt = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_lport = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_fport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_xinp0 = 1;
          struct xinpcb64 * xinp = (struct xinpcb64 *) malloc(_len_xinp0*sizeof(struct xinpcb64));
          for(int _i0 = 0; _i0 < _len_xinp0; _i0++) {
            xinp[_i0].inp_depend6.inp6_hops = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_depend6.inp6_ifindex = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_depend6.inp6_cksum = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_depend6.inp6_hlim = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_depend4.inp4_ip_tos = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_dependladdr.inp6_local = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_dependfaddr.inp6_foreign = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_ip_p = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_ip_ttl = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_vflag = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_flow = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_gencnt = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_lport = ((-2 * (next_i()%2)) + 1) * next_i();
        xinp[_i0].inp_fport = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          inpcb_to_xinpcb64(inp,xinp);
          free(inp);
          free(xinp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
