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
typedef  enum mp_csp_trc { ____Placeholder_mp_csp_trc } mp_csp_trc ;

/* Variables and functions */
#define  MP_CSP_TRC_HLG 132 
#define  MP_CSP_TRC_PQ 131 
#define  MP_CSP_TRC_S_LOG1 130 
#define  MP_CSP_TRC_S_LOG2 129 
#define  MP_CSP_TRC_V_LOG 128 
 double MP_REF_WHITE ; 

float mp_trc_nom_peak(enum mp_csp_trc trc)
{
    switch (trc) {
    case MP_CSP_TRC_PQ:           return 10000.0 / MP_REF_WHITE;
    case MP_CSP_TRC_HLG:          return 12.0;
    case MP_CSP_TRC_V_LOG:        return 46.0855;
    case MP_CSP_TRC_S_LOG1:       return 6.52;
    case MP_CSP_TRC_S_LOG2:       return 9.212;
    }

    return 1.0;
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
          float benchRet = mp_trc_nom_peak(trc);
          printf("%f\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum mp_csp_trc trc = 0;
          float benchRet = mp_trc_nom_peak(trc);
          printf("%f\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum mp_csp_trc trc = 0;
          float benchRet = mp_trc_nom_peak(trc);
          printf("%f\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
