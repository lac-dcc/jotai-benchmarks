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
struct TYPE_6__ {TYPE_1__* TCPHeader; } ;
struct TYPE_7__ {scalar_t__ TypeL3; scalar_t__ TypeL4; scalar_t__ TypeL7; TYPE_2__ L4; } ;
struct TYPE_5__ {int Flag; } ;
typedef  int /*<<< orphan*/  SESSION ;
typedef  TYPE_3__ PKT ;

/* Variables and functions */
 scalar_t__ L3_ARPV4 ; 
 scalar_t__ L3_IPV4 ; 
 scalar_t__ L4_ICMPV4 ; 
 scalar_t__ L4_TCP ; 
 scalar_t__ L4_UDP ; 
 scalar_t__ L7_DHCPV4 ; 
 int TCP_FIN ; 
 int TCP_RST ; 
 int TCP_SYN ; 

bool IsMostHighestPriorityPacket(SESSION *s, PKT *p)
{
	// Validate arguments
	if (s == NULL || p == NULL)
	{
		return false;
	}

	if (p->TypeL3 == L3_ARPV4)
	{
		// ARP packets
		return true;
	}

	if (p->TypeL3 == L3_IPV4)
	{
		if (p->TypeL4 == L4_ICMPV4)
		{
			// ICMP packets
			return true;
		}

		if (p->TypeL4 == L4_TCP)
		{
			if ((p->L4.TCPHeader->Flag & TCP_SYN) || (p->L4.TCPHeader->Flag & TCP_FIN)
				|| (p->L4.TCPHeader->Flag & TCP_RST))
			{
				// SYN, FIN, RST packet
				return true;
			}
		}

		if (p->TypeL4 == L4_UDP)
		{
			if (p->TypeL7 == L7_DHCPV4)
			{
				// DHCP packets
				return true;
			}
		}
	}

	return false;
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
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p0 = 1;
          struct TYPE_7__ * p = (struct TYPE_7__ *) malloc(_len_p0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].TypeL3 = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].TypeL4 = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].TypeL7 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__L4_TCPHeader0 = 1;
          p[_i0].L4.TCPHeader = (struct TYPE_5__ *) malloc(_len_p__i0__L4_TCPHeader0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_p__i0__L4_TCPHeader0; _j0++) {
            p[_i0].L4.TCPHeader->Flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = IsMostHighestPriorityPacket(s,p);
          printf("%d\n", benchRet); 
          free(s);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
