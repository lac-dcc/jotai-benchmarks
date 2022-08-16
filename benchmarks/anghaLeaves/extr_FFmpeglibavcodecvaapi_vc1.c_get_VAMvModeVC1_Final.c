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
typedef  enum MVModes { ____Placeholder_MVModes } MVModes ;

/* Variables and functions */
#define  MV_PMODE_1MV 132 
#define  MV_PMODE_1MV_HPEL 131 
#define  MV_PMODE_1MV_HPEL_BILIN 130 
#define  MV_PMODE_INTENSITY_COMP 129 
#define  MV_PMODE_MIXED_MV 128 
 int VAMvMode1Mv ; 
 int VAMvMode1MvHalfPel ; 
 int VAMvMode1MvHalfPelBilinear ; 
 int VAMvModeIntensityCompensation ; 
 int VAMvModeMixedMv ; 

__attribute__((used)) static int get_VAMvModeVC1(enum MVModes mv_mode)
{
    switch (mv_mode) {
    case MV_PMODE_1MV_HPEL_BILIN: return VAMvMode1MvHalfPelBilinear;
    case MV_PMODE_1MV:            return VAMvMode1Mv;
    case MV_PMODE_1MV_HPEL:       return VAMvMode1MvHalfPel;
    case MV_PMODE_MIXED_MV:       return VAMvModeMixedMv;
    case MV_PMODE_INTENSITY_COMP: return VAMvModeIntensityCompensation;
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
          enum MVModes mv_mode = 0;
          int benchRet = get_VAMvModeVC1(mv_mode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
