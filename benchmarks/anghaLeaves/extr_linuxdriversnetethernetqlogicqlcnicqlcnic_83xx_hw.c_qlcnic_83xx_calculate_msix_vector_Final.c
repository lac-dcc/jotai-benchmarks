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
struct qlcnic_adapter {int drv_sds_rings; int flags; scalar_t__ drv_tx_rings; } ;

/* Variables and functions */
 int QLCNIC_TX_INTR_SHARED ; 

__attribute__((used)) static int qlcnic_83xx_calculate_msix_vector(struct qlcnic_adapter *adapter)
{
	int num_msix;

	num_msix = adapter->drv_sds_rings;

	/* account for AEN interrupt MSI-X based interrupts */
	num_msix += 1;

	if (!(adapter->flags & QLCNIC_TX_INTR_SHARED))
		num_msix += adapter->drv_tx_rings;

	return num_msix;
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
          int _len_adapter0 = 1;
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].drv_sds_rings = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].drv_tx_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qlcnic_83xx_calculate_msix_vector(adapter);
          printf("%d\n", benchRet); 
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
