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
struct spi_controller {int /*<<< orphan*/  transfer_one_message; int /*<<< orphan*/  transfer_one; int /*<<< orphan*/  transfer; TYPE_1__* mem_ops; } ;
struct TYPE_2__ {int /*<<< orphan*/  exec_op; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int spi_controller_check_ops(struct spi_controller *ctlr)
{
	/*
	 * The controller may implement only the high-level SPI-memory like
	 * operations if it does not support regular SPI transfers, and this is
	 * valid use case.
	 * If ->mem_ops is NULL, we request that at least one of the
	 * ->transfer_xxx() method be implemented.
	 */
	if (ctlr->mem_ops) {
		if (!ctlr->mem_ops->exec_op)
			return -EINVAL;
	} else if (!ctlr->transfer && !ctlr->transfer_one &&
		   !ctlr->transfer_one_message) {
		return -EINVAL;
	}

	return 0;
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
          int _len_ctlr0 = 1;
          struct spi_controller * ctlr = (struct spi_controller *) malloc(_len_ctlr0*sizeof(struct spi_controller));
          for(int _i0 = 0; _i0 < _len_ctlr0; _i0++) {
            ctlr[_i0].transfer_one_message = ((-2 * (next_i()%2)) + 1) * next_i();
        ctlr[_i0].transfer_one = ((-2 * (next_i()%2)) + 1) * next_i();
        ctlr[_i0].transfer = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctlr__i0__mem_ops0 = 1;
          ctlr[_i0].mem_ops = (struct TYPE_2__ *) malloc(_len_ctlr__i0__mem_ops0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctlr__i0__mem_ops0; _j0++) {
            ctlr[_i0].mem_ops->exec_op = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = spi_controller_check_ops(ctlr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctlr0; _aux++) {
          free(ctlr[_aux].mem_ops);
          }
          free(ctlr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
