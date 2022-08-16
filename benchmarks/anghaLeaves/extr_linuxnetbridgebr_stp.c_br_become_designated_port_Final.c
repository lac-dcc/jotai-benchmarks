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
struct net_bridge_port {int /*<<< orphan*/  port_id; int /*<<< orphan*/  designated_port; int /*<<< orphan*/  designated_bridge; int /*<<< orphan*/  designated_cost; int /*<<< orphan*/  designated_root; struct net_bridge* br; } ;
struct net_bridge {int /*<<< orphan*/  bridge_id; int /*<<< orphan*/  root_path_cost; int /*<<< orphan*/  designated_root; } ;

/* Variables and functions */

void br_become_designated_port(struct net_bridge_port *p)
{
	struct net_bridge *br;

	br = p->br;
	p->designated_root = br->designated_root;
	p->designated_cost = br->root_path_cost;
	p->designated_bridge = br->bridge_id;
	p->designated_port = p->port_id;
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
          int _len_p0 = 1;
          struct net_bridge_port * p = (struct net_bridge_port *) malloc(_len_p0*sizeof(struct net_bridge_port));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].port_id = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].designated_port = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].designated_bridge = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].designated_cost = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].designated_root = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_p__i0__br0 = 1;
          p[_i0].br = (struct net_bridge *) malloc(_len_p__i0__br0*sizeof(struct net_bridge));
          for(int _j0 = 0; _j0 < _len_p__i0__br0; _j0++) {
            p[_i0].br->bridge_id = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].br->root_path_cost = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].br->designated_root = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          br_become_designated_port(p);
          for(int _aux = 0; _aux < _len_p0; _aux++) {
          free(p[_aux].br);
          }
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
