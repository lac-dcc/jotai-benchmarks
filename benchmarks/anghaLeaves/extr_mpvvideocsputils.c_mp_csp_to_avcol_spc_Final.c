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
       0            empty\n\
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
typedef  enum mp_csp { ____Placeholder_mp_csp } mp_csp ;

/* Variables and functions */
 int AVCOL_SPC_BT2020_CL ; 
 int AVCOL_SPC_BT2020_NCL ; 
 int AVCOL_SPC_BT470BG ; 
 int AVCOL_SPC_BT709 ; 
 int AVCOL_SPC_RGB ; 
 int AVCOL_SPC_SMPTE240M ; 
 int AVCOL_SPC_UNSPECIFIED ; 
 int AVCOL_SPC_YCOCG ; 
#define  MP_CSP_BT_2020_C 134 
#define  MP_CSP_BT_2020_NC 133 
#define  MP_CSP_BT_601 132 
#define  MP_CSP_BT_709 131 
#define  MP_CSP_RGB 130 
#define  MP_CSP_SMPTE_240M 129 
#define  MP_CSP_YCGCO 128 

int mp_csp_to_avcol_spc(enum mp_csp colorspace)
{
    switch (colorspace) {
    case MP_CSP_BT_709:         return AVCOL_SPC_BT709;
    case MP_CSP_BT_601:         return AVCOL_SPC_BT470BG;
    case MP_CSP_BT_2020_NC:     return AVCOL_SPC_BT2020_NCL;
    case MP_CSP_BT_2020_C:      return AVCOL_SPC_BT2020_CL;
    case MP_CSP_SMPTE_240M:     return AVCOL_SPC_SMPTE240M;
    case MP_CSP_RGB:            return AVCOL_SPC_RGB;
    case MP_CSP_YCGCO:          return AVCOL_SPC_YCOCG;
    default:                    return AVCOL_SPC_UNSPECIFIED;
    }
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // empty
    case 0:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          enum mp_csp colorspace = 0;
        
          int benchRet = mp_csp_to_avcol_spc(colorspace);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
