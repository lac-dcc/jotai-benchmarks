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
typedef  int u32 ;
struct dst_state {int bandwidth; scalar_t__ dst_type; int dst_hw_cap; int* tx_tuna; } ;

/* Variables and functions */
 int DST_TYPE_HAS_CA ; 
 scalar_t__ DST_TYPE_IS_TERR ; 
 int EINVAL ; 
 int EOPNOTSUPP ; 

__attribute__((used)) static int dst_set_bandwidth(struct dst_state *state, u32 bandwidth)
{
	state->bandwidth = bandwidth;

	if (state->dst_type != DST_TYPE_IS_TERR)
		return -EOPNOTSUPP;

	switch (bandwidth) {
	case 6000000:
		if (state->dst_hw_cap & DST_TYPE_HAS_CA)
			state->tx_tuna[7] = 0x06;
		else {
			state->tx_tuna[6] = 0x06;
			state->tx_tuna[7] = 0x00;
		}
		break;
	case 7000000:
		if (state->dst_hw_cap & DST_TYPE_HAS_CA)
			state->tx_tuna[7] = 0x07;
		else {
			state->tx_tuna[6] = 0x07;
			state->tx_tuna[7] = 0x00;
		}
		break;
	case 8000000:
		if (state->dst_hw_cap & DST_TYPE_HAS_CA)
			state->tx_tuna[7] = 0x08;
		else {
			state->tx_tuna[6] = 0x08;
			state->tx_tuna[7] = 0x00;
		}
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
          int bandwidth = 100;
          int _len_state0 = 1;
          struct dst_state * state = (struct dst_state *) malloc(_len_state0*sizeof(struct dst_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].dst_type = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].dst_hw_cap = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__tx_tuna0 = 1;
          state[_i0].tx_tuna = (int *) malloc(_len_state__i0__tx_tuna0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__tx_tuna0; _j0++) {
            state[_i0].tx_tuna[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dst_set_bandwidth(state,bandwidth);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].tx_tuna);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
