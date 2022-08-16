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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  necp_last_interface_index; } ;
struct TYPE_6__ {TYPE_1__ necp_mtag; } ;
struct mbuf {int m_flags; TYPE_2__ m_pkthdr; } ;
typedef  TYPE_3__* ifnet_t ;
struct TYPE_7__ {int /*<<< orphan*/  if_index; } ;

/* Variables and functions */
 int EINVAL ; 
 int M_PKTHDR ; 

int
necp_mark_packet_from_interface(struct mbuf *packet, ifnet_t interface)
{
	if (packet == NULL || !(packet->m_flags & M_PKTHDR)) {
		return (EINVAL);
	}

	// Mark ID for Pass and IP Tunnel
	if (interface != NULL) {
		packet->m_pkthdr.necp_mtag.necp_last_interface_index = interface->if_index;
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
          int _len_packet0 = 1;
          struct mbuf * packet = (struct mbuf *) malloc(_len_packet0*sizeof(struct mbuf));
          for(int _i0 = 0; _i0 < _len_packet0; _i0++) {
            packet[_i0].m_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        packet[_i0].m_pkthdr.necp_mtag.necp_last_interface_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_interface0 = 1;
          struct TYPE_7__ * interface = (struct TYPE_7__ *) malloc(_len_interface0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_interface0; _i0++) {
            interface[_i0].if_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_mark_packet_from_interface(packet,interface);
          printf("%d\n", benchRet); 
          free(packet);
          free(interface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
