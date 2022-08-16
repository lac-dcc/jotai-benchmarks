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
       1            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  u32 ;
struct meson_spicc_device {scalar_t__ rx_remain; } ;

/* Variables and functions */
 scalar_t__ SPICC_FIFO_HALF ; 
 int /*<<< orphan*/  SPICC_RH_EN ; 
 int /*<<< orphan*/  SPICC_RR_EN ; 

__attribute__((used)) static inline u32 meson_spicc_setup_rx_irq(struct meson_spicc_device *spicc,
					   u32 irq_ctrl)
{
	if (spicc->rx_remain > SPICC_FIFO_HALF)
		irq_ctrl |= SPICC_RH_EN;
	else
		irq_ctrl |= SPICC_RR_EN;

	return irq_ctrl;
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
          int irq_ctrl = 100;
          int _len_spicc0 = 1;
          struct meson_spicc_device * spicc = (struct meson_spicc_device *) malloc(_len_spicc0*sizeof(struct meson_spicc_device));
          for(int _i0 = 0; _i0 < _len_spicc0; _i0++) {
            spicc[_i0].rx_remain = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = meson_spicc_setup_rx_irq(spicc,irq_ctrl);
          printf("%d\n", benchRet); 
          free(spicc);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int irq_ctrl = 10;
          int _len_spicc0 = 100;
          struct meson_spicc_device * spicc = (struct meson_spicc_device *) malloc(_len_spicc0*sizeof(struct meson_spicc_device));
          for(int _i0 = 0; _i0 < _len_spicc0; _i0++) {
            spicc[_i0].rx_remain = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = meson_spicc_setup_rx_irq(spicc,irq_ctrl);
          printf("%d\n", benchRet); 
          free(spicc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
