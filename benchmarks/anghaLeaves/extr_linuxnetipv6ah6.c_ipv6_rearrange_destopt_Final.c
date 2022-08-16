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
struct ipv6hdr {int dummy; } ;
struct ipv6_opt_hdr {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void ipv6_rearrange_destopt(struct ipv6hdr *iph, struct ipv6_opt_hdr *destopt) {}


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
          int _len_iph0 = 1;
          struct ipv6hdr * iph = (struct ipv6hdr *) malloc(_len_iph0*sizeof(struct ipv6hdr));
          for(int _i0 = 0; _i0 < _len_iph0; _i0++) {
            iph[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_destopt0 = 1;
          struct ipv6_opt_hdr * destopt = (struct ipv6_opt_hdr *) malloc(_len_destopt0*sizeof(struct ipv6_opt_hdr));
          for(int _i0 = 0; _i0 < _len_destopt0; _i0++) {
            destopt[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipv6_rearrange_destopt(iph,destopt);
          free(iph);
          free(destopt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
