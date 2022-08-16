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
struct TYPE_2__ {scalar_t__ rev; } ;
struct adapter {int flags; TYPE_1__ params; } ;
typedef  int /*<<< orphan*/  irq_handler_t ;

/* Variables and functions */
 int USING_MSI ; 
 int USING_MSIX ; 
 int /*<<< orphan*/  t3_intr ; 
 int /*<<< orphan*/  t3_intr_msi ; 
 int /*<<< orphan*/  t3_intr_msi_napi ; 
 int /*<<< orphan*/  t3_sge_intr_msix ; 
 int /*<<< orphan*/  t3_sge_intr_msix_napi ; 
 int /*<<< orphan*/  t3b_intr ; 
 int /*<<< orphan*/  t3b_intr_napi ; 

irq_handler_t t3_intr_handler(struct adapter *adap, int polling)
{
	if (adap->flags & USING_MSIX)
		return polling ? t3_sge_intr_msix_napi : t3_sge_intr_msix;
	if (adap->flags & USING_MSI)
		return polling ? t3_intr_msi_napi : t3_intr_msi;
	if (adap->params.rev > 0)
		return polling ? t3b_intr_napi : t3b_intr;
	return t3_intr;
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
          int polling = 100;
          int _len_adap0 = 1;
          struct adapter * adap = (struct adapter *) malloc(_len_adap0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adap0; _i0++) {
            adap[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        adap[_i0].params.rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = t3_intr_handler(adap,polling);
          printf("%d\n", benchRet); 
          free(adap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
