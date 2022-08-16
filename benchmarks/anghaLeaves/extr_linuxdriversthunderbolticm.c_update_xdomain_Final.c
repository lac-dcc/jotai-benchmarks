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
typedef  int /*<<< orphan*/  u8 ;
typedef  int /*<<< orphan*/  u64 ;
struct tb_xdomain {int is_unplugged; int /*<<< orphan*/  route; int /*<<< orphan*/  link; } ;

/* Variables and functions */

__attribute__((used)) static void update_xdomain(struct tb_xdomain *xd, u64 route, u8 link)
{
	xd->link = link;
	xd->route = route;
	xd->is_unplugged = false;
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
          int route = 100;
          int link = 100;
          int _len_xd0 = 1;
          struct tb_xdomain * xd = (struct tb_xdomain *) malloc(_len_xd0*sizeof(struct tb_xdomain));
          for(int _i0 = 0; _i0 < _len_xd0; _i0++) {
            xd[_i0].is_unplugged = ((-2 * (next_i()%2)) + 1) * next_i();
        xd[_i0].route = ((-2 * (next_i()%2)) + 1) * next_i();
        xd[_i0].link = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_xdomain(xd,route,link);
          free(xd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
