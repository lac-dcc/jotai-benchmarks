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
struct mb86a16_state {int master_clk; } ;

/* Variables and functions */

__attribute__((used)) static void swp_info_get2(struct mb86a16_state *state,
			  int smrt,
			  int R,
			  int swp_freq,
			  int *afcex_freq,
			  int *fOSC,
			  unsigned char *AFCEX_L,
			  unsigned char *AFCEX_H)
{
	int AFCEX ;

	if (R == 0)
		*fOSC = (swp_freq + 1000) / 2000 * 2;
	else
		*fOSC = (swp_freq + 500) / 1000;

	if (*fOSC >= swp_freq)
		*afcex_freq = *fOSC * 1000 - swp_freq;
	else
		*afcex_freq = swp_freq - *fOSC * 1000;

	AFCEX = *afcex_freq * 8192 / state->master_clk;
	*AFCEX_L =  AFCEX & 0x00ff;
	*AFCEX_H = (AFCEX & 0x0f00) >> 8;
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
          int smrt = 100;
          int R = 100;
          int swp_freq = 100;
          int _len_state0 = 1;
          struct mb86a16_state * state = (struct mb86a16_state *) malloc(_len_state0*sizeof(struct mb86a16_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].master_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_afcex_freq0 = 1;
          int * afcex_freq = (int *) malloc(_len_afcex_freq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_afcex_freq0; _i0++) {
            afcex_freq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fOSC0 = 1;
          int * fOSC = (int *) malloc(_len_fOSC0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fOSC0; _i0++) {
            fOSC[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_AFCEX_L0 = 1;
          unsigned char * AFCEX_L = (unsigned char *) malloc(_len_AFCEX_L0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_AFCEX_L0; _i0++) {
            AFCEX_L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_AFCEX_H0 = 1;
          unsigned char * AFCEX_H = (unsigned char *) malloc(_len_AFCEX_H0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_AFCEX_H0; _i0++) {
            AFCEX_H[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          swp_info_get2(state,smrt,R,swp_freq,afcex_freq,fOSC,AFCEX_L,AFCEX_H);
          free(state);
          free(afcex_freq);
          free(fOSC);
          free(AFCEX_L);
          free(AFCEX_H);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
