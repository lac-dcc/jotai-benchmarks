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
struct dma_map_ops {int dummy; } ;

/* Variables and functions */
 struct dma_map_ops const arm_nommu_dma_ops ; 
 struct dma_map_ops const dma_direct_ops ; 

__attribute__((used)) static const struct dma_map_ops *arm_nommu_get_dma_map_ops(bool coherent)
{
	return coherent ? &dma_direct_ops : &arm_nommu_dma_ops;
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
          int coherent = 100;
          const struct dma_map_ops * benchRet = arm_nommu_get_dma_map_ops(coherent);
        
        break;
    }
    // big-arr
    case 1:
    {
          int coherent = 255;
          const struct dma_map_ops * benchRet = arm_nommu_get_dma_map_ops(coherent);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int coherent = 10;
          const struct dma_map_ops * benchRet = arm_nommu_get_dma_map_ops(coherent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
