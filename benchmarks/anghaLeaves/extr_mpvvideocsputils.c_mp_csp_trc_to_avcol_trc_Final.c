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
typedef  enum mp_csp_trc { ____Placeholder_mp_csp_trc } mp_csp_trc ;

/* Variables and functions */
 int AVCOL_TRC_ARIB_STD_B67 ; 
 int AVCOL_TRC_BT709 ; 
 int AVCOL_TRC_GAMMA22 ; 
 int AVCOL_TRC_GAMMA28 ; 
 int AVCOL_TRC_IEC61966_2_1 ; 
 int AVCOL_TRC_LINEAR ; 
 int AVCOL_TRC_SMPTEST2084 ; 
 int AVCOL_TRC_UNSPECIFIED ; 
#define  MP_CSP_TRC_BT_1886 134 
#define  MP_CSP_TRC_GAMMA22 133 
#define  MP_CSP_TRC_GAMMA28 132 
#define  MP_CSP_TRC_HLG 131 
#define  MP_CSP_TRC_LINEAR 130 
#define  MP_CSP_TRC_PQ 129 
#define  MP_CSP_TRC_SRGB 128 

int mp_csp_trc_to_avcol_trc(enum mp_csp_trc trc)
{
    switch (trc) {
    // We just call it BT.1886 since we're decoding, but it's still BT.709
    case MP_CSP_TRC_BT_1886:      return AVCOL_TRC_BT709;
    case MP_CSP_TRC_SRGB:         return AVCOL_TRC_IEC61966_2_1;
    case MP_CSP_TRC_LINEAR:       return AVCOL_TRC_LINEAR;
    case MP_CSP_TRC_GAMMA22:      return AVCOL_TRC_GAMMA22;
    case MP_CSP_TRC_GAMMA28:      return AVCOL_TRC_GAMMA28;
    case MP_CSP_TRC_PQ:           return AVCOL_TRC_SMPTEST2084;
    case MP_CSP_TRC_HLG:          return AVCOL_TRC_ARIB_STD_B67;
    default:                      return AVCOL_TRC_UNSPECIFIED;
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
          enum mp_csp_trc trc = 0;
          int benchRet = mp_csp_trc_to_avcol_trc(trc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
