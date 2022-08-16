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
struct netns_ipvs {int dummy; } ;
struct ip_vs_dest {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int expire_quiescent_template(struct netns_ipvs *ipvs,
				     struct ip_vs_dest *dest)
{
#ifdef CONFIG_SYSCTL
	return ipvs->sysctl_expire_quiescent_template &&
		(atomic_read(&dest->weight) == 0);
#else
	return 0;
#endif
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
          int _len_ipvs0 = 1;
          struct netns_ipvs * ipvs = (struct netns_ipvs *) malloc(_len_ipvs0*sizeof(struct netns_ipvs));
          for(int _i0 = 0; _i0 < _len_ipvs0; _i0++) {
            ipvs[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 1;
          struct ip_vs_dest * dest = (struct ip_vs_dest *) malloc(_len_dest0*sizeof(struct ip_vs_dest));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = expire_quiescent_template(ipvs,dest);
          printf("%d\n", benchRet); 
          free(ipvs);
          free(dest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
