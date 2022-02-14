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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u8 ;
typedef  int u32 ;
struct TYPE_5__ {int select_data; } ;
typedef  TYPE_1__ ide_hwif_t ;
struct TYPE_6__ {scalar_t__ dma_mode; scalar_t__ dn; } ;
typedef  TYPE_2__ ide_drive_t ;

/* Variables and functions */
 scalar_t__ const XFER_MW_DMA_0 ; 
 scalar_t__ const XFER_UDMA_0 ; 

__attribute__((used)) static void tx4939ide_set_dma_mode(ide_hwif_t *hwif, ide_drive_t *drive)
{
	u32 mask, val;
	const u8 mode = drive->dma_mode;

	/* Update Data Transfer Mode for this drive. */
	if (mode >= XFER_UDMA_0)
		val = mode - XFER_UDMA_0 + 8;
	else
		val = mode - XFER_MW_DMA_0 + 5;
	if (drive->dn) {
		mask = 0x00f00000;
		val <<= 20;
	} else {
		mask = 0x000000f0;
		val <<= 4;
	}
	hwif->select_data = (hwif->select_data & ~mask) | val;
	/* tx4939ide_tf_load_fixup() will set the Sys_Ctl register */
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
          int _len_hwif0 = 1;
          struct TYPE_5__ * hwif = (struct TYPE_5__ *) malloc(_len_hwif0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_hwif0; _i0++) {
            hwif->select_data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_drive0 = 1;
          struct TYPE_6__ * drive = (struct TYPE_6__ *) malloc(_len_drive0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive->dma_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        drive->dn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tx4939ide_set_dma_mode(hwif,drive);
          free(hwif);
          free(drive);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
