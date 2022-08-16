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
struct enic_port_profile {int dummy; } ;
struct enic {int dummy; } ;

/* Variables and functions */
 int EOPNOTSUPP ; 

__attribute__((used)) static int enic_pp_preassociate(struct enic *enic, int vf,
	struct enic_port_profile *prev_pp, int *restore_pp)
{
	return -EOPNOTSUPP;
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
          int vf = 100;
          int _len_enic0 = 1;
          struct enic * enic = (struct enic *) malloc(_len_enic0*sizeof(struct enic));
          for(int _i0 = 0; _i0 < _len_enic0; _i0++) {
            enic[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev_pp0 = 1;
          struct enic_port_profile * prev_pp = (struct enic_port_profile *) malloc(_len_prev_pp0*sizeof(struct enic_port_profile));
          for(int _i0 = 0; _i0 < _len_prev_pp0; _i0++) {
            prev_pp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_restore_pp0 = 1;
          int * restore_pp = (int *) malloc(_len_restore_pp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_restore_pp0; _i0++) {
            restore_pp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = enic_pp_preassociate(enic,vf,prev_pp,restore_pp);
          printf("%d\n", benchRet); 
          free(enic);
          free(prev_pp);
          free(restore_pp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
