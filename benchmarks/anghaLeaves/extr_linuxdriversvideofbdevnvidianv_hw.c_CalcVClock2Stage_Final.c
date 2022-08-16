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
struct nvidia_par {int CrystalFreqKHz; } ;

/* Variables and functions */

__attribute__((used)) static void CalcVClock2Stage(int clockIn,
			     int *clockOut,
			     u32 * pllOut,
			     u32 * pllBOut, struct nvidia_par *par)
{
	unsigned DeltaNew, DeltaOld;
	unsigned VClk, Freq;
	unsigned M, N, P;

	DeltaOld = 0xFFFFFFFF;

	*pllBOut = 0x80000401;	/* fixed at x4 for now */

	VClk = (unsigned)clockIn;

	for (P = 0; P <= 6; P++) {
		Freq = VClk << P;
		if ((Freq >= 400000) && (Freq <= 1000000)) {
			for (M = 1; M <= 13; M++) {
				N = ((VClk << P) * M) /
				    (par->CrystalFreqKHz << 2);
				if ((N >= 5) && (N <= 255)) {
					Freq =
					    (((par->CrystalFreqKHz << 2) * N) /
					     M) >> P;
					if (Freq > VClk)
						DeltaNew = Freq - VClk;
					else
						DeltaNew = VClk - Freq;
					if (DeltaNew < DeltaOld) {
						*pllOut =
						    (P << 16) | (N << 8) | M;
						*clockOut = Freq;
						DeltaOld = DeltaNew;
					}
				}
			}
		}
	}
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
          int clockIn = 100;
          int _len_clockOut0 = 1;
          int * clockOut = (int *) malloc(_len_clockOut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clockOut0; _i0++) {
            clockOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pllOut0 = 1;
          int * pllOut = (int *) malloc(_len_pllOut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pllOut0; _i0++) {
            pllOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pllBOut0 = 1;
          int * pllBOut = (int *) malloc(_len_pllBOut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pllBOut0; _i0++) {
            pllBOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 1;
          struct nvidia_par * par = (struct nvidia_par *) malloc(_len_par0*sizeof(struct nvidia_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].CrystalFreqKHz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CalcVClock2Stage(clockIn,clockOut,pllOut,pllBOut,par);
          free(clockOut);
          free(pllOut);
          free(pllBOut);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
