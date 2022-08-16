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
typedef  unsigned long long u64 ;
struct mic_dma_desc {unsigned long long qw0; unsigned long long qw1; } ;
typedef  unsigned long long dma_addr_t ;

/* Variables and functions */
 unsigned long long MIC_DMA_DESC_TYPE_SHIFT ; 
 scalar_t__ MIC_DMA_STATUS ; 
 unsigned long long MIC_DMA_STAT_INTR_SHIFT ; 

__attribute__((used)) static inline void mic_dma_prep_status_desc(struct mic_dma_desc *desc, u64 data,
	dma_addr_t dst_phys, bool generate_intr)
{
	u64 qw0, qw1;

	qw0 = data;
	qw1 = (u64) MIC_DMA_STATUS << MIC_DMA_DESC_TYPE_SHIFT | dst_phys;
	if (generate_intr)
		qw1 |= (1ULL << MIC_DMA_STAT_INTR_SHIFT);
	desc->qw0 = qw0;
	desc->qw1 = qw1;
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
          unsigned long long data = 100;
          unsigned long long dst_phys = 100;
          int generate_intr = 100;
          int _len_desc0 = 1;
          struct mic_dma_desc * desc = (struct mic_dma_desc *) malloc(_len_desc0*sizeof(struct mic_dma_desc));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].qw0 = ((-2 * (next_i()%2)) + 1) * next_i();
        desc[_i0].qw1 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mic_dma_prep_status_desc(desc,data,dst_phys,generate_intr);
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
