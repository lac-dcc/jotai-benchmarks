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
struct TYPE_3__ {scalar_t__ cookie; } ;
struct TYPE_4__ {TYPE_1__ ike; } ;
struct pf_app_state {TYPE_2__ u; } ;
typedef  scalar_t__ int64_t ;

/* Variables and functions */

__attribute__((used)) static int
pf_ike_compare(struct pf_app_state *a, struct pf_app_state *b)
{
	int64_t d = a->u.ike.cookie - b->u.ike.cookie;
	return ((d > 0) ? 1 : ((d < 0) ? -1 : 0));
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
          int _len_a0 = 1;
          struct pf_app_state * a = (struct pf_app_state *) malloc(_len_a0*sizeof(struct pf_app_state));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].u.ike.cookie = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_b0 = 1;
          struct pf_app_state * b = (struct pf_app_state *) malloc(_len_b0*sizeof(struct pf_app_state));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0].u.ike.cookie = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pf_ike_compare(a,b);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
