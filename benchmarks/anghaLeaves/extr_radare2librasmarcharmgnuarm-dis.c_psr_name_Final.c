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

/* Variables and functions */

__attribute__((used)) static const char *
psr_name (int regno)
{
  switch (regno)
    {
    case 0x0: return "APSR";
    case 0x1: return "IAPSR";
    case 0x2: return "EAPSR";
    case 0x3: return "PSR";
    case 0x5: return "IPSR";
    case 0x6: return "EPSR";
    case 0x7: return "IEPSR";
    case 0x8: return "MSP";
    case 0x9: return "PSP";
    case 0xa: return "MSPLIM";
    case 0xb: return "PSPLIM";
    case 0x10: return "PRIMASK";
    case 0x11: return "BASEPRI";
    case 0x12: return "BASEPRI_MAX";
    case 0x13: return "FAULTMASK";
    case 0x14: return "CONTROL";
    case 0x88: return "MSP_NS";
    case 0x89: return "PSP_NS";
    case 0x8a: return "MSPLIM_NS";
    case 0x8b: return "PSPLIM_NS";
    case 0x90: return "PRIMASK_NS";
    case 0x91: return "BASEPRI_NS";
    case 0x93: return "FAULTMASK_NS";
    case 0x94: return "CONTROL_NS";
    case 0x98: return "SP_NS";
    default: return "<unknown>";
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
          int regno = 100;
          const char * benchRet = psr_name(regno);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int regno = 255;
          const char * benchRet = psr_name(regno);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int regno = 10;
          const char * benchRet = psr_name(regno);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
