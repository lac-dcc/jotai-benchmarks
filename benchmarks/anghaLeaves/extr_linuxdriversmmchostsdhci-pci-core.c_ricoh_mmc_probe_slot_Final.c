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
struct sdhci_pci_slot {TYPE_1__* host; } ;
struct TYPE_2__ {int caps; } ;

/* Variables and functions */
 int SDHCI_CAN_DO_HISPD ; 
 int SDHCI_CAN_DO_SDMA ; 
 int SDHCI_CAN_VDD_330 ; 
 int SDHCI_CLOCK_BASE_MASK ; 
 int SDHCI_CLOCK_BASE_SHIFT ; 
 int SDHCI_TIMEOUT_CLK_MASK ; 
 int SDHCI_TIMEOUT_CLK_SHIFT ; 
 int SDHCI_TIMEOUT_CLK_UNIT ; 

__attribute__((used)) static int ricoh_mmc_probe_slot(struct sdhci_pci_slot *slot)
{
	slot->host->caps =
		((0x21 << SDHCI_TIMEOUT_CLK_SHIFT)
			& SDHCI_TIMEOUT_CLK_MASK) |

		((0x21 << SDHCI_CLOCK_BASE_SHIFT)
			& SDHCI_CLOCK_BASE_MASK) |

		SDHCI_TIMEOUT_CLK_UNIT |
		SDHCI_CAN_VDD_330 |
		SDHCI_CAN_DO_HISPD |
		SDHCI_CAN_DO_SDMA;
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
          int _len_slot0 = 1;
          struct sdhci_pci_slot * slot = (struct sdhci_pci_slot *) malloc(_len_slot0*sizeof(struct sdhci_pci_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
              int _len_slot__i0__host0 = 1;
          slot[_i0].host = (struct TYPE_2__ *) malloc(_len_slot__i0__host0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_slot__i0__host0; _j0++) {
            slot[_i0].host->caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ricoh_mmc_probe_slot(slot);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_slot0; _aux++) {
          free(slot[_aux].host);
          }
          free(slot);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
