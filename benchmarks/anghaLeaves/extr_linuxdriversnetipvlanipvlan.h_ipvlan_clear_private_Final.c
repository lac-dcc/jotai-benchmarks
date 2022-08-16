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
       1            big-arr-10x\n\
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
struct ipvl_port {int /*<<< orphan*/  flags; } ;

/* Variables and functions */
 int /*<<< orphan*/  IPVLAN_F_PRIVATE ; 

__attribute__((used)) static inline void ipvlan_clear_private(struct ipvl_port *port)
{
	port->flags &= ~IPVLAN_F_PRIVATE;
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
          int _len_port0 = 1;
          struct ipvl_port * port = (struct ipvl_port *) malloc(_len_port0*sizeof(struct ipvl_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipvlan_clear_private(port);
          free(port);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_port0 = 100;
          struct ipvl_port * port = (struct ipvl_port *) malloc(_len_port0*sizeof(struct ipvl_port));
          for(int _i0 = 0; _i0 < _len_port0; _i0++) {
            port[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipvlan_clear_private(port);
          free(port);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
