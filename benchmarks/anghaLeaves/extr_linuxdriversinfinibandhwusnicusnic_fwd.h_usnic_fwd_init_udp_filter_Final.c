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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint32_t ;
typedef  scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ dst_port; int /*<<< orphan*/  flags; scalar_t__ dst_addr; int /*<<< orphan*/  protocol; } ;
struct TYPE_4__ {TYPE_1__ ipv4; } ;
struct filter {TYPE_2__ u; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  FILTER_FIELD_5TUP_DST_AD ; 
 int /*<<< orphan*/  FILTER_FIELD_5TUP_DST_PT ; 
 int /*<<< orphan*/  FILTER_FIELD_5TUP_PROTO ; 
 int /*<<< orphan*/  FILTER_IPV4_5TUPLE ; 
 int /*<<< orphan*/  PROTO_UDP ; 

__attribute__((used)) static inline void usnic_fwd_init_udp_filter(struct filter *filter,
						uint32_t daddr, uint16_t dport)
{
	filter->type = FILTER_IPV4_5TUPLE;
	filter->u.ipv4.flags = FILTER_FIELD_5TUP_PROTO;
	filter->u.ipv4.protocol = PROTO_UDP;

	if (daddr) {
		filter->u.ipv4.flags |= FILTER_FIELD_5TUP_DST_AD;
		filter->u.ipv4.dst_addr = daddr;
	}

	if (dport) {
		filter->u.ipv4.flags |= FILTER_FIELD_5TUP_DST_PT;
		filter->u.ipv4.dst_port = dport;
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
          long daddr = 100;
          long dport = 100;
          int _len_filter0 = 1;
          struct filter * filter = (struct filter *) malloc(_len_filter0*sizeof(struct filter));
          for(int _i0 = 0; _i0 < _len_filter0; _i0++) {
            filter[_i0].u.ipv4.dst_port = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].u.ipv4.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].u.ipv4.dst_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].u.ipv4.protocol = ((-2 * (next_i()%2)) + 1) * next_i();
        filter[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          usnic_fwd_init_udp_filter(filter,daddr,dport);
          free(filter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
