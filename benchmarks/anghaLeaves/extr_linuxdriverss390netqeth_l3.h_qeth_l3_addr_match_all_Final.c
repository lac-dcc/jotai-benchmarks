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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ mask; } ;
struct TYPE_4__ {scalar_t__ pfxlen; } ;
struct TYPE_6__ {TYPE_2__ a4; TYPE_1__ a6; } ;
struct qeth_ipaddr {scalar_t__ type; scalar_t__ proto; TYPE_3__ u; } ;

/* Variables and functions */
 scalar_t__ QETH_PROT_IPV6 ; 

__attribute__((used)) static inline bool qeth_l3_addr_match_all(struct qeth_ipaddr *a1,
					  struct qeth_ipaddr *a2)
{
	/* Assumes that the pair was obtained via qeth_l3_addr_find_by_ip(),
	 * so 'proto' and 'addr' match for sure.
	 *
	 * For ucast:
	 * -	'mac' is always 0.
	 * -	'mask'/'pfxlen' for RXIP/VIPA is always 0. For NORMAL, matching
	 *	values are required to avoid mixups in takeover eligibility.
	 *
	 * For mcast,
	 * -	'mac' is mapped from the IP, and thus always matches.
	 * -	'mask'/'pfxlen' is always 0.
	 */
	if (a1->type != a2->type)
		return false;
	if (a1->proto == QETH_PROT_IPV6)
		return a1->u.a6.pfxlen == a2->u.a6.pfxlen;
	return a1->u.a4.mask == a2->u.a4.mask;
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
          int _len_a10 = 1;
          struct qeth_ipaddr * a1 = (struct qeth_ipaddr *) malloc(_len_a10*sizeof(struct qeth_ipaddr));
          for(int _i0 = 0; _i0 < _len_a10; _i0++) {
            a1[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        a1[_i0].proto = ((-2 * (next_i()%2)) + 1) * next_i();
        a1[_i0].u.a4.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        a1[_i0].u.a6.pfxlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a20 = 1;
          struct qeth_ipaddr * a2 = (struct qeth_ipaddr *) malloc(_len_a20*sizeof(struct qeth_ipaddr));
          for(int _i0 = 0; _i0 < _len_a20; _i0++) {
            a2[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        a2[_i0].proto = ((-2 * (next_i()%2)) + 1) * next_i();
        a2[_i0].u.a4.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        a2[_i0].u.a6.pfxlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qeth_l3_addr_match_all(a1,a2);
          printf("%d\n", benchRet); 
          free(a1);
          free(a2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
