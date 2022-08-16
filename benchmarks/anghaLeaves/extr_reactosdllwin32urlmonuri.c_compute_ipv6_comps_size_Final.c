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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int components_size; int h16_count; int elision_size; scalar_t__ elision; scalar_t__ ipv4; } ;
typedef  TYPE_1__ ipv6_address ;

/* Variables and functions */

__attribute__((used)) static void compute_ipv6_comps_size(ipv6_address *address) {
    address->components_size = address->h16_count * 2;

    if(address->ipv4)
        /* IPv4 address is 4 bytes. */
        address->components_size += 4;

    if(address->elision) {
        /* An elision can be anywhere from 2 bytes up to 16 bytes.
         * Its size depends on the size of the h16 and IPv4 components.
         */
        address->elision_size = 16 - address->components_size;
        if(address->elision_size < 2)
            address->elision_size = 2;
    } else
        address->elision_size = 0;
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
          int _len_address0 = 1;
          struct TYPE_3__ * address = (struct TYPE_3__ *) malloc(_len_address0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_address0; _i0++) {
            address[_i0].components_size = ((-2 * (next_i()%2)) + 1) * next_i();
        address[_i0].h16_count = ((-2 * (next_i()%2)) + 1) * next_i();
        address[_i0].elision_size = ((-2 * (next_i()%2)) + 1) * next_i();
        address[_i0].elision = ((-2 * (next_i()%2)) + 1) * next_i();
        address[_i0].ipv4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          compute_ipv6_comps_size(address);
          free(address);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
