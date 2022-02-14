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
       0            big-arr\n\
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
typedef  int uint32_t ;
typedef  enum mdp5_scale_filter { ____Placeholder_mdp5_scale_filter } mdp5_scale_filter ;

/* Variables and functions */
 int MDP5_PIPE_SCALE_CONFIG_SCALEX_FILTER_COMP_0__MASK ; 
 int MDP5_PIPE_SCALE_CONFIG_SCALEX_FILTER_COMP_0__SHIFT ; 

__attribute__((used)) static inline uint32_t MDP5_PIPE_SCALE_CONFIG_SCALEX_FILTER_COMP_0(enum mdp5_scale_filter val)
{
	return ((val) << MDP5_PIPE_SCALE_CONFIG_SCALEX_FILTER_COMP_0__SHIFT) & MDP5_PIPE_SCALE_CONFIG_SCALEX_FILTER_COMP_0__MASK;
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

    // big-arr
    case 0:
    {
          enum mdp5_scale_filter val = 0;
          int benchRet = MDP5_PIPE_SCALE_CONFIG_SCALEX_FILTER_COMP_0(val);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
