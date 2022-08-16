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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int mfc_control_RW; int /*<<< orphan*/  spu_lslr_RW; } ;
struct spu_state {TYPE_1__ priv2; } ;

/* Variables and functions */
 int /*<<< orphan*/  LS_ADDR_MASK ; 
 int MFC_CNTL_DMA_QUEUES_EMPTY_MASK ; 
 int MFC_CNTL_NORMAL_DMA_QUEUE_OPERATION ; 
 int MFC_CNTL_RESUME_DMA_QUEUE ; 

__attribute__((used)) static void init_priv2(struct spu_state *csa)
{
	csa->priv2.spu_lslr_RW = LS_ADDR_MASK;
	csa->priv2.mfc_control_RW = MFC_CNTL_RESUME_DMA_QUEUE |
	    MFC_CNTL_NORMAL_DMA_QUEUE_OPERATION |
	    MFC_CNTL_DMA_QUEUES_EMPTY_MASK;
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
          int _len_csa0 = 1;
          struct spu_state * csa = (struct spu_state *) malloc(_len_csa0*sizeof(struct spu_state));
          for(int _i0 = 0; _i0 < _len_csa0; _i0++) {
            csa[_i0].priv2.mfc_control_RW = ((-2 * (next_i()%2)) + 1) * next_i();
        csa[_i0].priv2.spu_lslr_RW = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_priv2(csa);
          free(csa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
