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
typedef  int /*<<< orphan*/  u8 ;
struct adf7242_local {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void adf7242_debug(struct adf7242_local *lp, u8 irq1)
{
#ifdef DEBUG
	u8 stat;

	adf7242_status(lp, &stat);

	dev_dbg(&lp->spi->dev, "%s IRQ1 = %X:\n%s%s%s%s%s%s%s%s\n",
		__func__, irq1,
		irq1 & IRQ_CCA_COMPLETE ? "IRQ_CCA_COMPLETE\n" : "",
		irq1 & IRQ_SFD_RX ? "IRQ_SFD_RX\n" : "",
		irq1 & IRQ_SFD_TX ? "IRQ_SFD_TX\n" : "",
		irq1 & IRQ_RX_PKT_RCVD ? "IRQ_RX_PKT_RCVD\n" : "",
		irq1 & IRQ_TX_PKT_SENT ? "IRQ_TX_PKT_SENT\n" : "",
		irq1 & IRQ_CSMA_CA ? "IRQ_CSMA_CA\n" : "",
		irq1 & IRQ_FRAME_VALID ? "IRQ_FRAME_VALID\n" : "",
		irq1 & IRQ_ADDRESS_VALID ? "IRQ_ADDRESS_VALID\n" : "");

	dev_dbg(&lp->spi->dev, "%s STATUS = %X:\n%s\n%s\n%s\n%s\n%s%s%s%s%s\n",
		__func__, stat,
		stat & STAT_SPI_READY ? "SPI_READY" : "SPI_BUSY",
		stat & STAT_IRQ_STATUS ? "IRQ_PENDING" : "IRQ_CLEAR",
		stat & STAT_RC_READY ? "RC_READY" : "RC_BUSY",
		stat & STAT_CCA_RESULT ? "CHAN_IDLE" : "CHAN_BUSY",
		(stat & 0xf) == RC_STATUS_IDLE ? "RC_STATUS_IDLE" : "",
		(stat & 0xf) == RC_STATUS_MEAS ? "RC_STATUS_MEAS" : "",
		(stat & 0xf) == RC_STATUS_PHY_RDY ? "RC_STATUS_PHY_RDY" : "",
		(stat & 0xf) == RC_STATUS_RX ? "RC_STATUS_RX" : "",
		(stat & 0xf) == RC_STATUS_TX ? "RC_STATUS_TX" : "");
#endif
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
          int irq1 = 100;
          int _len_lp0 = 1;
          struct adf7242_local * lp = (struct adf7242_local *) malloc(_len_lp0*sizeof(struct adf7242_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adf7242_debug(lp,irq1);
          free(lp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int irq1 = 10;
          int _len_lp0 = 100;
          struct adf7242_local * lp = (struct adf7242_local *) malloc(_len_lp0*sizeof(struct adf7242_local));
          for(int _i0 = 0; _i0 < _len_lp0; _i0++) {
            lp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adf7242_debug(lp,irq1);
          free(lp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
