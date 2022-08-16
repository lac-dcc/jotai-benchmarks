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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int /*<<< orphan*/  s_addr; } ;
struct TYPE_8__ {TYPE_1__ v4addr; } ;
struct TYPE_10__ {int /*<<< orphan*/  s_addr; } ;
struct TYPE_11__ {TYPE_4__ v4addr; } ;
struct pf_fragment {TYPE_2__ fr_dstx; TYPE_5__ fr_srcx; int /*<<< orphan*/  fr_af; int /*<<< orphan*/  fr_id; int /*<<< orphan*/  fr_p; } ;
struct TYPE_9__ {int /*<<< orphan*/  s_addr; } ;
struct TYPE_12__ {int /*<<< orphan*/  s_addr; } ;
struct ip {TYPE_3__ ip_dst; TYPE_6__ ip_src; int /*<<< orphan*/  ip_id; int /*<<< orphan*/  ip_p; } ;

/* Variables and functions */
 int /*<<< orphan*/  AF_INET ; 

__attribute__((used)) static void
pf_ip2key(struct pf_fragment *key, struct ip *ip)
{
	key->fr_p = ip->ip_p;
	key->fr_id = ip->ip_id;
	key->fr_af = AF_INET;
	key->fr_srcx.v4addr.s_addr = ip->ip_src.s_addr;
	key->fr_dstx.v4addr.s_addr = ip->ip_dst.s_addr;
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
          int _len_key0 = 1;
          struct pf_fragment * key = (struct pf_fragment *) malloc(_len_key0*sizeof(struct pf_fragment));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].fr_dstx.v4addr.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].fr_srcx.v4addr.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].fr_af = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].fr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].fr_p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ip0 = 1;
          struct ip * ip = (struct ip *) malloc(_len_ip0*sizeof(struct ip));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0].ip_dst.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ip[_i0].ip_src.s_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ip[_i0].ip_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ip[_i0].ip_p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pf_ip2key(key,ip);
          free(key);
          free(ip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
