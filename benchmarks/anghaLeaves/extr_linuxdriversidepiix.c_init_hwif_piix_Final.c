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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ swdma_mask; scalar_t__ mwdma_mask; scalar_t__ ultra_mask; int /*<<< orphan*/  dma_base; } ;
typedef  TYPE_1__ ide_hwif_t ;

/* Variables and functions */
 scalar_t__ no_piix_dma ; 

__attribute__((used)) static void init_hwif_piix(ide_hwif_t *hwif)
{
	if (!hwif->dma_base)
		return;

	if (no_piix_dma)
		hwif->ultra_mask = hwif->mwdma_mask = hwif->swdma_mask = 0;
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
          int _len_hwif0 = 1;
          struct TYPE_3__ * hwif = (struct TYPE_3__ *) malloc(_len_hwif0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_hwif0; _i0++) {
            hwif[_i0].swdma_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hwif[_i0].mwdma_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hwif[_i0].ultra_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hwif[_i0].dma_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_hwif_piix(hwif);
          free(hwif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
