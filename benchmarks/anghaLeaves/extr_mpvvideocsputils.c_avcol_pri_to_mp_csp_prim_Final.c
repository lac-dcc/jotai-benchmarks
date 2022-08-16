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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  enum mp_csp_prim { ____Placeholder_mp_csp_prim } mp_csp_prim ;

/* Variables and functions */
#define  AVCOL_PRI_BT2020 133 
#define  AVCOL_PRI_BT470BG 132 
#define  AVCOL_PRI_BT470M 131 
#define  AVCOL_PRI_BT709 130 
#define  AVCOL_PRI_SMPTE170M 129 
#define  AVCOL_PRI_SMPTE240M 128 
 int MP_CSP_PRIM_AUTO ; 
 int MP_CSP_PRIM_BT_2020 ; 
 int MP_CSP_PRIM_BT_470M ; 
 int MP_CSP_PRIM_BT_601_525 ; 
 int MP_CSP_PRIM_BT_601_625 ; 
 int MP_CSP_PRIM_BT_709 ; 

enum mp_csp_prim avcol_pri_to_mp_csp_prim(int avpri)
{
    switch (avpri) {
    case AVCOL_PRI_SMPTE240M:   // Same as below
    case AVCOL_PRI_SMPTE170M:   return MP_CSP_PRIM_BT_601_525;
    case AVCOL_PRI_BT470BG:     return MP_CSP_PRIM_BT_601_625;
    case AVCOL_PRI_BT709:       return MP_CSP_PRIM_BT_709;
    case AVCOL_PRI_BT2020:      return MP_CSP_PRIM_BT_2020;
    case AVCOL_PRI_BT470M:      return MP_CSP_PRIM_BT_470M;
    default:                    return MP_CSP_PRIM_AUTO;
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
          int avpri = 100;
          enum mp_csp_prim benchRet = avcol_pri_to_mp_csp_prim(avpri);
        
        break;
    }
    // big-arr
    case 1:
    {
          int avpri = 255;
          enum mp_csp_prim benchRet = avcol_pri_to_mp_csp_prim(avpri);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int avpri = 10;
          enum mp_csp_prim benchRet = avcol_pri_to_mp_csp_prim(avpri);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
