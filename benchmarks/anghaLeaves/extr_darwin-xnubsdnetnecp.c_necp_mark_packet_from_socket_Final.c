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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u_int32_t ;
struct TYPE_7__ {scalar_t__ necp_skip_policy_id; int /*<<< orphan*/  necp_app_id; scalar_t__ necp_route_rule_id; scalar_t__ necp_last_interface_index; scalar_t__ necp_policy_id; } ;
struct TYPE_8__ {TYPE_3__ necp_mtag; } ;
struct mbuf {int m_flags; TYPE_4__ m_pkthdr; } ;
struct TYPE_5__ {scalar_t__ result; scalar_t__ route_rule_id; } ;
struct TYPE_6__ {int /*<<< orphan*/  app_id; TYPE_1__ results; scalar_t__ policy_id; } ;
struct inpcb {TYPE_2__ inp_policyresult; } ;
typedef  scalar_t__ necp_kernel_policy_id ;

/* Variables and functions */
 int EINVAL ; 
 int M_PKTHDR ; 
 scalar_t__ NECP_KERNEL_POLICY_ID_NONE ; 
 scalar_t__ NECP_KERNEL_POLICY_RESULT_IP_TUNNEL ; 
 scalar_t__ NECP_KERNEL_POLICY_RESULT_PASS ; 

int
necp_mark_packet_from_socket(struct mbuf *packet, struct inpcb *inp, necp_kernel_policy_id policy_id, u_int32_t route_rule_id,
							 necp_kernel_policy_id skip_policy_id)
{
	if (packet == NULL || inp == NULL || !(packet->m_flags & M_PKTHDR)) {
		return (EINVAL);
	}

	// Mark ID for Pass and IP Tunnel
	if (policy_id != NECP_KERNEL_POLICY_ID_NONE) {
		packet->m_pkthdr.necp_mtag.necp_policy_id = policy_id;
	} else if (inp->inp_policyresult.results.result == NECP_KERNEL_POLICY_RESULT_PASS ||
		inp->inp_policyresult.results.result == NECP_KERNEL_POLICY_RESULT_IP_TUNNEL) {
		packet->m_pkthdr.necp_mtag.necp_policy_id = inp->inp_policyresult.policy_id;
	} else {
		packet->m_pkthdr.necp_mtag.necp_policy_id = NECP_KERNEL_POLICY_ID_NONE;
	}
	packet->m_pkthdr.necp_mtag.necp_last_interface_index = 0;
	if (route_rule_id != 0) {
		packet->m_pkthdr.necp_mtag.necp_route_rule_id = route_rule_id;
	} else {
		packet->m_pkthdr.necp_mtag.necp_route_rule_id = inp->inp_policyresult.results.route_rule_id;
	}
	packet->m_pkthdr.necp_mtag.necp_app_id = inp->inp_policyresult.app_id;

	if (skip_policy_id != NECP_KERNEL_POLICY_ID_NONE) {
		packet->m_pkthdr.necp_mtag.necp_skip_policy_id = skip_policy_id;
	}

	return (0);
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
          long policy_id = 100;
          long route_rule_id = 100;
          long skip_policy_id = 100;
          int _len_packet0 = 1;
          struct mbuf * packet = (struct mbuf *) malloc(_len_packet0*sizeof(struct mbuf));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].m_pkthdr.necp_mtag.necp_skip_policy_id = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].m_pkthdr.necp_mtag.necp_app_id = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].m_pkthdr.necp_mtag.necp_route_rule_id = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].m_pkthdr.necp_mtag.necp_last_interface_index = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].m_pkthdr.necp_mtag.necp_policy_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_inp0 = 1;
          struct inpcb * inp = (struct inpcb *) malloc(_len_inp0*sizeof(struct inpcb));
          for(int _i0 = 0; _i0 < _len_inp0; _i0++) {
            inp[_i0].inp_policyresult.app_id = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_policyresult.results.result = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_policyresult.results.route_rule_id = ((-2 * (next_i()%2)) + 1) * next_i();
        inp[_i0].inp_policyresult.policy_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_mark_packet_from_socket(packet,inp,policy_id,route_rule_id,skip_policy_id);
          printf("%d\n", benchRet); 
          free(packet);
          free(inp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
