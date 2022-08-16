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
struct TYPE_5__ {scalar_t__ tpid; scalar_t__ tci; } ;
struct TYPE_4__ {scalar_t__ tpid; scalar_t__ tci; } ;
struct TYPE_6__ {TYPE_2__ cvlan; TYPE_1__ vlan; } ;
struct sw_flow_key {TYPE_3__ eth; } ;

/* Variables and functions */

__attribute__((used)) static void clear_vlan(struct sw_flow_key *key)
{
	key->eth.vlan.tci = 0;
	key->eth.vlan.tpid = 0;
	key->eth.cvlan.tci = 0;
	key->eth.cvlan.tpid = 0;
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
          struct sw_flow_key * key = (struct sw_flow_key *) malloc(_len_key0*sizeof(struct sw_flow_key));
          for(int _i0 = 0; _i0 < _len_key0; _i0++) {
            key[_i0].eth.cvlan.tpid = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].eth.cvlan.tci = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].eth.vlan.tpid = ((-2 * (next_i()%2)) + 1) * next_i();
        key[_i0].eth.vlan.tci = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          clear_vlan(key);
          free(key);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
