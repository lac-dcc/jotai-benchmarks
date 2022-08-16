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
struct TYPE_4__ {int /*<<< orphan*/  v6addr; } ;
struct TYPE_3__ {int /*<<< orphan*/  v6addr; } ;
struct pf_fragment {TYPE_2__ fr_dstx; TYPE_1__ fr_srcx; int /*<<< orphan*/  fr_af; int /*<<< orphan*/  fr_id6; int /*<<< orphan*/  fr_p; } ;
struct ip6_hdr {int /*<<< orphan*/  ip6_dst; int /*<<< orphan*/  ip6_src; } ;
struct ip6_frag {int /*<<< orphan*/  ip6f_ident; int /*<<< orphan*/  ip6f_nxt; } ;

/* Variables and functions */
 int /*<<< orphan*/  AF_INET6 ; 

__attribute__((used)) static void
pf_ip6hdr2key(struct pf_fragment *key, struct ip6_hdr *ip6,
    struct ip6_frag *fh)
{
	key->fr_p = fh->ip6f_nxt;
	key->fr_id6 = fh->ip6f_ident;
	key->fr_af = AF_INET6;
	key->fr_srcx.v6addr = ip6->ip6_src;
	key->fr_dstx.v6addr = ip6->ip6_dst;
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
            key[_i0].fr_dstx.v6addr = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].fr_srcx.v6addr = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].fr_af = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].fr_id6 = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].fr_p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ip60 = 1;
          struct ip6_hdr * ip6 = (struct ip6_hdr *) malloc(_len_ip60*sizeof(struct ip6_hdr));
          for(int _i0 = 0; _i0 < _len_ip60; _i0++) {
            ip6[_i0].ip6_dst = ((-2 * (next_i()%2)) + 1) * next_i();
        ip6[_i0].ip6_src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fh0 = 1;
          struct ip6_frag * fh = (struct ip6_frag *) malloc(_len_fh0*sizeof(struct ip6_frag));
          for(int _i0 = 0; _i0 < _len_fh0; _i0++) {
            fh[_i0].ip6f_ident = ((-2 * (next_i()%2)) + 1) * next_i();
        fh[_i0].ip6f_nxt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pf_ip6hdr2key(key,ip6,fh);
          free(key);
          free(ip6);
          free(fh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
