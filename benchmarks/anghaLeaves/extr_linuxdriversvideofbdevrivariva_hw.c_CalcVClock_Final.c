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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int CrystalFreqKHz; scalar_t__ Architecture; unsigned int MaxVClockFreqKHz; } ;
typedef  TYPE_1__ RIVA_HW_INST ;

/* Variables and functions */
 scalar_t__ NV_ARCH_03 ; 

__attribute__((used)) static int CalcVClock
(
    int           clockIn,
    int          *clockOut,
    int          *mOut,
    int          *nOut,
    int          *pOut,
    RIVA_HW_INST *chip
)
{
    unsigned lowM, highM, highP;
    unsigned DeltaNew, DeltaOld;
    unsigned VClk, Freq;
    unsigned M, N, P;
    
    DeltaOld = 0xFFFFFFFF;

    VClk     = (unsigned)clockIn;
    
    if (chip->CrystalFreqKHz == 13500)
    {
        lowM  = 7;
        highM = 13 - (chip->Architecture == NV_ARCH_03);
    }
    else
    {
        lowM  = 8;
        highM = 14 - (chip->Architecture == NV_ARCH_03);
    }                      

    highP = 4 - (chip->Architecture == NV_ARCH_03);
    for (P = 0; P <= highP; P ++)
    {
        Freq = VClk << P;
        if ((Freq >= 128000) && (Freq <= chip->MaxVClockFreqKHz))
        {
            for (M = lowM; M <= highM; M++)
            {
                N    = (VClk << P) * M / chip->CrystalFreqKHz;
                if(N <= 255) {
                Freq = (chip->CrystalFreqKHz * N / M) >> P;
                if (Freq > VClk)
                    DeltaNew = Freq - VClk;
                else
                    DeltaNew = VClk - Freq;
                if (DeltaNew < DeltaOld)
                {
                    *mOut     = M;
                    *nOut     = N;
                    *pOut     = P;
                    *clockOut = Freq;
                    DeltaOld  = DeltaNew;
                }
            }
        }
    }
    }

    /* non-zero: M/N/P/clock values assigned.  zero: error (not set) */
    return (DeltaOld != 0xFFFFFFFF);
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
          int _len_mOut0 = 1;
          int * mOut = (int *) malloc(_len_mOut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mOut0; _i0++) {
            mOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nOut0 = 1;
          int * nOut = (int *) malloc(_len_nOut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_nOut0; _i0++) {
            nOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pOut0 = 1;
          int * pOut = (int *) malloc(_len_pOut0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pOut0; _i0++) {
            pOut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chip0 = 1;
          struct TYPE_3__ * chip = (struct TYPE_3__ *) malloc(_len_chip0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].CrystalFreqKHz = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].Architecture = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].MaxVClockFreqKHz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = CalcVClock(clockIn,clockOut,mOut,nOut,pOut,chip);
          printf("%d\n", benchRet); 
          free(clockOut);
          free(mOut);
          free(nOut);
          free(pOut);
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
