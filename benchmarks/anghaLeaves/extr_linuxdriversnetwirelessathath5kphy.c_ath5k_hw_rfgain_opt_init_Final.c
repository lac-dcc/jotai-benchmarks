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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int g_low; int g_high; void* g_state; int /*<<< orphan*/  g_step_idx; } ;
struct ath5k_hw {int ah_radio; TYPE_1__ ah_gain; } ;
struct TYPE_6__ {int /*<<< orphan*/  go_default; } ;
struct TYPE_5__ {int /*<<< orphan*/  go_default; } ;

/* Variables and functions */
#define  AR5K_RF5111 129 
#define  AR5K_RF5112 128 
 void* AR5K_RFGAIN_ACTIVE ; 
 int EINVAL ; 
 TYPE_3__ rfgain_opt_5111 ; 
 TYPE_2__ rfgain_opt_5112 ; 

int ath5k_hw_rfgain_opt_init(struct ath5k_hw *ah)
{
	/* Initialize the gain optimization values */
	switch (ah->ah_radio) {
	case AR5K_RF5111:
		ah->ah_gain.g_step_idx = rfgain_opt_5111.go_default;
		ah->ah_gain.g_low = 20;
		ah->ah_gain.g_high = 35;
		ah->ah_gain.g_state = AR5K_RFGAIN_ACTIVE;
		break;
	case AR5K_RF5112:
		ah->ah_gain.g_step_idx = rfgain_opt_5112.go_default;
		ah->ah_gain.g_low = 20;
		ah->ah_gain.g_high = 85;
		ah->ah_gain.g_state = AR5K_RFGAIN_ACTIVE;
		break;
	default:
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
          int _len_ah0 = 1;
          struct ath5k_hw * ah = (struct ath5k_hw *) malloc(_len_ah0*sizeof(struct ath5k_hw));
          for(int _i0 = 0; _i0 < _len_ah0; _i0++) {
            ah[_i0].ah_radio = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].ah_gain.g_low = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].ah_gain.g_high = ((-2 * (next_i()%2)) + 1) * next_i();
        ah[_i0].ah_gain.g_step_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath5k_hw_rfgain_opt_init(ah);
          printf("%d\n", benchRet); 
          free(ah);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
