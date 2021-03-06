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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct SiS_Private {unsigned int SiS_VGAVT; unsigned int SiS_VGAVDE; unsigned int SiS_RVBHCMAX; unsigned int SiS_VT; unsigned int SiS_VDE; unsigned int SiS_RVBHCFACT; unsigned int SiS_HT; } ;

/* Variables and functions */

__attribute__((used)) static unsigned short
SiS_GetVGAHT2(struct SiS_Private *SiS_Pr)
{
  unsigned int tempax,tempbx;

  tempbx = (SiS_Pr->SiS_VGAVT - SiS_Pr->SiS_VGAVDE) * SiS_Pr->SiS_RVBHCMAX;
  tempax = (SiS_Pr->SiS_VT - SiS_Pr->SiS_VDE) * SiS_Pr->SiS_RVBHCFACT;
  tempax = (tempax * SiS_Pr->SiS_HT) / tempbx;
  return (unsigned short)tempax;
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
            SiS_Pr[_i0].SiS_VGAVT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RVBHCMAX = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RVBHCFACT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_HT = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned short benchRet = SiS_GetVGAHT2(SiS_Pr);
          printf("%hu\n", benchRet); 
          free(SiS_Pr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_SiS_Pr0 = 65025;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VGAVT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RVBHCMAX = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RVBHCFACT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_HT = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned short benchRet = SiS_GetVGAHT2(SiS_Pr);
          printf("%hu\n", benchRet); 
          free(SiS_Pr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_SiS_Pr0 = 100;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].SiS_VGAVT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VGAVDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RVBHCMAX = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_VDE = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_RVBHCFACT = ((-2 * (next_i()%2)) + 1) * next_i();
        SiS_Pr[_i0].SiS_HT = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned short benchRet = SiS_GetVGAHT2(SiS_Pr);
          printf("%hu\n", benchRet); 
          free(SiS_Pr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
