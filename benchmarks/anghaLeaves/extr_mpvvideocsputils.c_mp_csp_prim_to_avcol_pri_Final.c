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
typedef  enum mp_csp_prim { ____Placeholder_mp_csp_prim } mp_csp_prim ;

/* Variables and functions */
 int AVCOL_PRI_BT2020 ; 
 int AVCOL_PRI_BT470BG ; 
 int AVCOL_PRI_BT470M ; 
 int AVCOL_PRI_BT709 ; 
 int AVCOL_PRI_SMPTE170M ; 
 int AVCOL_PRI_UNSPECIFIED ; 
#define  MP_CSP_PRIM_BT_2020 132 
#define  MP_CSP_PRIM_BT_470M 131 
#define  MP_CSP_PRIM_BT_601_525 130 
#define  MP_CSP_PRIM_BT_601_625 129 
#define  MP_CSP_PRIM_BT_709 128 

int mp_csp_prim_to_avcol_pri(enum mp_csp_prim prim)
{
    switch (prim) {
    case MP_CSP_PRIM_BT_601_525: return AVCOL_PRI_SMPTE170M;
    case MP_CSP_PRIM_BT_601_625: return AVCOL_PRI_BT470BG;
    case MP_CSP_PRIM_BT_709:     return AVCOL_PRI_BT709;
    case MP_CSP_PRIM_BT_2020:    return AVCOL_PRI_BT2020;
    case MP_CSP_PRIM_BT_470M:    return AVCOL_PRI_BT470M;
    default:                     return AVCOL_PRI_UNSPECIFIED;
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
          enum mp_csp_prim prim = 0;
          int benchRet = mp_csp_prim_to_avcol_pri(prim);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
