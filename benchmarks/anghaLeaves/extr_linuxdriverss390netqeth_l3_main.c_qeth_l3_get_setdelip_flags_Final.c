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
typedef  int /*<<< orphan*/  u32 ;
struct qeth_ipaddr {int type; int /*<<< orphan*/  ipato; } ;

/* Variables and functions */
 int /*<<< orphan*/  QETH_IPA_DELIP_VIPA_FLAG ; 
 int /*<<< orphan*/  QETH_IPA_SETIP_TAKEOVER_FLAG ; 
 int /*<<< orphan*/  QETH_IPA_SETIP_VIPA_FLAG ; 
#define  QETH_IP_TYPE_RXIP 129 
#define  QETH_IP_TYPE_VIPA 128 

__attribute__((used)) static u32 qeth_l3_get_setdelip_flags(struct qeth_ipaddr *addr, bool set)
{
	switch (addr->type) {
	case QETH_IP_TYPE_RXIP:
		return (set) ? QETH_IPA_SETIP_TAKEOVER_FLAG : 0;
	case QETH_IP_TYPE_VIPA:
		return (set) ? QETH_IPA_SETIP_VIPA_FLAG :
			       QETH_IPA_DELIP_VIPA_FLAG;
	default:
		return (set && addr->ipato) ? QETH_IPA_SETIP_TAKEOVER_FLAG : 0;
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
          int set = 100;
          int _len_addr0 = 1;
          struct qeth_ipaddr * addr = (struct qeth_ipaddr *) malloc(_len_addr0*sizeof(struct qeth_ipaddr));
          for(int _i0 = 0; _i0 < _len_addr0; _i0++) {
            addr[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        addr[_i0].ipato = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qeth_l3_get_setdelip_flags(addr,set);
          printf("%d\n", benchRet); 
          free(addr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
