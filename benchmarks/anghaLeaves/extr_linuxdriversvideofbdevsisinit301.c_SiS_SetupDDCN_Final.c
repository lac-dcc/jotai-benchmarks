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
struct SiS_Private {int SiS_DDC_NData; int SiS_DDC_Data; int SiS_DDC_NClk; int SiS_DDC_Clk; int SiS_DDC_Index; scalar_t__ SiS_SensibleSR11; } ;

/* Variables and functions */

__attribute__((used)) static void
SiS_SetupDDCN(struct SiS_Private *SiS_Pr)
{
  SiS_Pr->SiS_DDC_NData = ~SiS_Pr->SiS_DDC_Data;
  SiS_Pr->SiS_DDC_NClk  = ~SiS_Pr->SiS_DDC_Clk;
  if((SiS_Pr->SiS_DDC_Index == 0x11) && (SiS_Pr->SiS_SensibleSR11)) {
     SiS_Pr->SiS_DDC_NData &= 0x0f;
     SiS_Pr->SiS_DDC_NClk  &= 0x0f;
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
          int _len_SiS_Pr0 = 1;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_DDC_NData = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_DDC_Data = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_DDC_NClk = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_DDC_Clk = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_DDC_Index = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_SensibleSR11 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_SetupDDCN(SiS_Pr);
          free(SiS_Pr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
