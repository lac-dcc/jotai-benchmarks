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
typedef  int uint32_t ;
typedef  enum mdp4_cursor_format { ____Placeholder_mdp4_cursor_format } mdp4_cursor_format ;

/* Variables and functions */
 int MDP4_DMA_CURSOR_BLEND_CONFIG_FORMAT__MASK ; 
 int MDP4_DMA_CURSOR_BLEND_CONFIG_FORMAT__SHIFT ; 

__attribute__((used)) static inline uint32_t MDP4_DMA_CURSOR_BLEND_CONFIG_FORMAT(enum mdp4_cursor_format val)
{
	return ((val) << MDP4_DMA_CURSOR_BLEND_CONFIG_FORMAT__SHIFT) & MDP4_DMA_CURSOR_BLEND_CONFIG_FORMAT__MASK;
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
          enum mdp4_cursor_format val = 0;
          int benchRet = MDP4_DMA_CURSOR_BLEND_CONFIG_FORMAT(val);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum mdp4_cursor_format val = 0;
          int benchRet = MDP4_DMA_CURSOR_BLEND_CONFIG_FORMAT(val);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum mdp4_cursor_format val = 0;
          int benchRet = MDP4_DMA_CURSOR_BLEND_CONFIG_FORMAT(val);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
