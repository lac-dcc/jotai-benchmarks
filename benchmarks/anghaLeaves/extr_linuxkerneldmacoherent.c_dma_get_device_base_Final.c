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
struct dma_coherent_mem {int pfn_base; int device_base; scalar_t__ use_dev_dma_pfn_offset; } ;
struct device {int dma_pfn_offset; } ;
typedef  int dma_addr_t ;

/* Variables and functions */
 int PAGE_SHIFT ; 

__attribute__((used)) static inline dma_addr_t dma_get_device_base(struct device *dev,
					     struct dma_coherent_mem * mem)
{
	if (mem->use_dev_dma_pfn_offset)
		return (mem->pfn_base - dev->dma_pfn_offset) << PAGE_SHIFT;
	else
		return mem->device_base;
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
          int _len_dev0 = 1;
          struct device * dev = (struct device *) malloc(_len_dev0*sizeof(struct device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dma_pfn_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mem0 = 1;
          struct dma_coherent_mem * mem = (struct dma_coherent_mem *) malloc(_len_mem0*sizeof(struct dma_coherent_mem));
          for(int _i0 = 0; _i0 < _len_mem0; _i0++) {
            mem[_i0].pfn_base = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].device_base = ((-2 * (next_i()%2)) + 1) * next_i();
        mem[_i0].use_dev_dma_pfn_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dma_get_device_base(dev,mem);
          printf("%d\n", benchRet); 
          free(dev);
          free(mem);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
