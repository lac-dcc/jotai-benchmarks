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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int u_int8_t ;

/* Variables and functions */
#define  PF_BINAT 139 
#define  PF_DROP 138 
#define  PF_NAT 137 
#define  PF_NAT64 136 
#define  PF_NOBINAT 135 
#define  PF_NONAT 134 
#define  PF_NONAT64 133 
#define  PF_NORDR 132 
#define  PF_NOSCRUB 131 
#define  PF_PASS 130 
#define  PF_RDR 129 
 int PF_RULESET_BINAT ; 
 int PF_RULESET_FILTER ; 
 int PF_RULESET_MAX ; 
 int PF_RULESET_NAT ; 
 int PF_RULESET_RDR ; 
 int PF_RULESET_SCRUB ; 
#define  PF_SCRUB 128 

int
pf_get_ruleset_number(u_int8_t action)
{
	switch (action) {
	case PF_SCRUB:
	case PF_NOSCRUB:
		return (PF_RULESET_SCRUB);
	case PF_PASS:
	case PF_DROP:
		return (PF_RULESET_FILTER);
	case PF_NAT:
	case PF_NONAT:
		return (PF_RULESET_NAT);
	case PF_BINAT:
	case PF_NOBINAT:
		return (PF_RULESET_BINAT);
	case PF_RDR:
	case PF_NORDR:
	case PF_NAT64:
	case PF_NONAT64:
		return (PF_RULESET_RDR);
#if DUMMYNET
	case PF_DUMMYNET:
	case PF_NODUMMYNET:
		return (PF_RULESET_DUMMYNET);
#endif /* DUMMYNET */
	default:
		return (PF_RULESET_MAX);
	}
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
          int action = 100;
          int benchRet = pf_get_ruleset_number(action);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int action = 255;
          int benchRet = pf_get_ruleset_number(action);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int action = 10;
          int benchRet = pf_get_ruleset_number(action);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
