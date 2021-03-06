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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  unsigned int u32 ;
struct nvidia_par {int CrystalFreqKHz; } ;

/* Variables and functions */

__attribute__((used)) static void CalcVClock(int clockIn,
		       int *clockOut, u32 * pllOut, struct nvidia_par *par)
{
	unsigned lowM, highM;
	unsigned DeltaNew, DeltaOld;
	unsigned VClk, Freq;
	unsigned M, N, P;

	DeltaOld = 0xFFFFFFFF;

	VClk = (unsigned)clockIn;

	if (par->CrystalFreqKHz == 13500) {
		lowM = 7;
		highM = 13;
	} else {
		lowM = 8;
		highM = 14;
	}

	for (P = 0; P <= 4; P++) {
		Freq = VClk << P;
		if ((Freq >= 128000) && (Freq <= 350000)) {
			for (M = lowM; M <= highM; M++) {
				N = ((VClk << P) * M) / par->CrystalFreqKHz;
				if (N <= 255) {
					Freq =
					    ((par->CrystalFreqKHz * N) /
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

    // big-arr
    case 0:
    {
          int clockIn = 255;
          int _len_clockOut0 = 65025;
          int * clockOut = (int *) malloc(_len_clockOut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clockOut0; _i0++) {
            clockOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pllOut0 = 65025;
          unsigned int * pllOut = (unsigned int *) malloc(_len_pllOut0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pllOut0; _i0++) {
            pllOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 65025;
          struct nvidia_par * par = (struct nvidia_par *) malloc(_len_par0*sizeof(struct nvidia_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].CrystalFreqKHz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CalcVClock(clockIn,clockOut,pllOut,par);
          free(clockOut);
          free(pllOut);
          free(par);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int clockIn = 10;
          int _len_clockOut0 = 100;
          int * clockOut = (int *) malloc(_len_clockOut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_clockOut0; _i0++) {
            clockOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pllOut0 = 100;
          unsigned int * pllOut = (unsigned int *) malloc(_len_pllOut0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_pllOut0; _i0++) {
            pllOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_par0 = 100;
          struct nvidia_par * par = (struct nvidia_par *) malloc(_len_par0*sizeof(struct nvidia_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].CrystalFreqKHz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          CalcVClock(clockIn,clockOut,pllOut,par);
          free(clockOut);
          free(pllOut);
          free(par);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
