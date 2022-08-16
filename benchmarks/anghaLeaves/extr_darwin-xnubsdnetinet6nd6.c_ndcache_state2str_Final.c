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
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Variables and functions */
#define  ND6_LLINFO_DELAY 134 
#define  ND6_LLINFO_INCOMPLETE 133 
#define  ND6_LLINFO_NOSTATE 132 
#define  ND6_LLINFO_PROBE 131 
#define  ND6_LLINFO_PURGE 130 
#define  ND6_LLINFO_REACHABLE 129 
#define  ND6_LLINFO_STALE 128 

const char *
ndcache_state2str(short ndp_state)
{
	const char *ndp_state_str = "UNKNOWN";
	switch (ndp_state) {
	case ND6_LLINFO_PURGE:
		ndp_state_str = "ND6_LLINFO_PURGE";
		break;
	case ND6_LLINFO_NOSTATE:
		ndp_state_str = "ND6_LLINFO_NOSTATE";
		break;
	case ND6_LLINFO_INCOMPLETE:
		ndp_state_str = "ND6_LLINFO_INCOMPLETE";
		break;
	case ND6_LLINFO_REACHABLE:
		ndp_state_str = "ND6_LLINFO_REACHABLE";
		break;
	case ND6_LLINFO_STALE:
		ndp_state_str = "ND6_LLINFO_STALE";
		break;
	case ND6_LLINFO_DELAY:
		ndp_state_str = "ND6_LLINFO_DELAY";
		break;
	case ND6_LLINFO_PROBE:
		ndp_state_str = "ND6_LLINFO_PROBE";
		break;
	default:
		/* Init'd to UNKNOWN */
		break;
	}
	return 	ndp_state_str;
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
          short ndp_state = 100;
          const char * benchRet = ndcache_state2str(ndp_state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          short ndp_state = 255;
          const char * benchRet = ndcache_state2str(ndp_state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          short ndp_state = 10;
          const char * benchRet = ndcache_state2str(ndp_state);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
