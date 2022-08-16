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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  nominal; int /*<<< orphan*/  min; int /*<<< orphan*/  max; } ;
struct TYPE_3__ {int /*<<< orphan*/  nominal; int /*<<< orphan*/  min; int /*<<< orphan*/  max; } ;
struct ath_hw {TYPE_2__ nf_5g; TYPE_1__ nf_2g; } ;

/* Variables and functions */
 int /*<<< orphan*/  AR_PHY_CCA_MAX_GOOD_VAL_5416_2GHZ ; 
 int /*<<< orphan*/  AR_PHY_CCA_MAX_GOOD_VAL_5416_5GHZ ; 
 int /*<<< orphan*/  AR_PHY_CCA_MIN_GOOD_VAL_5416_2GHZ ; 
 int /*<<< orphan*/  AR_PHY_CCA_MIN_GOOD_VAL_5416_5GHZ ; 
 int /*<<< orphan*/  AR_PHY_CCA_NOM_VAL_5416_2GHZ ; 
 int /*<<< orphan*/  AR_PHY_CCA_NOM_VAL_5416_5GHZ ; 

__attribute__((used)) static void ar5008_hw_set_nf_limits(struct ath_hw *ah)
{
	ah->nf_2g.max = AR_PHY_CCA_MAX_GOOD_VAL_5416_2GHZ;
	ah->nf_2g.min = AR_PHY_CCA_MIN_GOOD_VAL_5416_2GHZ;
	ah->nf_2g.nominal = AR_PHY_CCA_NOM_VAL_5416_2GHZ;
	ah->nf_5g.max = AR_PHY_CCA_MAX_GOOD_VAL_5416_5GHZ;
	ah->nf_5g.min = AR_PHY_CCA_MIN_GOOD_VAL_5416_5GHZ;
	ah->nf_5g.nominal = AR_PHY_CCA_NOM_VAL_5416_5GHZ;
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
          int _len_ah0 = 1;
          struct ath_hw * ah = (struct ath_hw *) malloc(_len_ah0*sizeof(struct ath_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].nf_5g.nominal = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].nf_5g.min = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].nf_5g.max = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].nf_2g.nominal = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].nf_2g.min = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].nf_2g.max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ar5008_hw_set_nf_limits(ah);
          free(ah);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
