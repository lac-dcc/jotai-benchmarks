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
struct pcie_link_state {int clkpm_default; } ;

/* Variables and functions */
#define  POLICY_DEFAULT 131 
#define  POLICY_PERFORMANCE 130 
#define  POLICY_POWERSAVE 129 
#define  POLICY_POWER_SUPERSAVE 128 
 int aspm_policy ; 

__attribute__((used)) static int policy_to_clkpm_state(struct pcie_link_state *link)
{
	switch (aspm_policy) {
	case POLICY_PERFORMANCE:
		/* Disable ASPM and Clock PM */
		return 0;
	case POLICY_POWERSAVE:
	case POLICY_POWER_SUPERSAVE:
		/* Enable Clock PM */
		return 1;
	case POLICY_DEFAULT:
		return link->clkpm_default;
	}
	return 0;
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
          int _len_link0 = 1;
          struct pcie_link_state * link = (struct pcie_link_state *) malloc(_len_link0*sizeof(struct pcie_link_state));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
            link[_i0].clkpm_default = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = policy_to_clkpm_state(link);
          printf("%d\n", benchRet); 
          free(link);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_link0 = 100;
          struct pcie_link_state * link = (struct pcie_link_state *) malloc(_len_link0*sizeof(struct pcie_link_state));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
            link[_i0].clkpm_default = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = policy_to_clkpm_state(link);
          printf("%d\n", benchRet); 
          free(link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
