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
typedef  enum fore200e_aal { ____Placeholder_fore200e_aal } fore200e_aal ;

/* Variables and functions */
#define  ATM_AAL0 132 
#define  ATM_AAL1 131 
#define  ATM_AAL2 130 
#define  ATM_AAL34 129 
#define  ATM_AAL5 128 
 int EINVAL ; 
 int FORE200E_AAL0 ; 
 int FORE200E_AAL34 ; 
 int FORE200E_AAL5 ; 

__attribute__((used)) static enum fore200e_aal
fore200e_atm2fore_aal(int aal)
{
    switch(aal) {
    case ATM_AAL0:  return FORE200E_AAL0;
    case ATM_AAL34: return FORE200E_AAL34;
    case ATM_AAL1:
    case ATM_AAL2:
    case ATM_AAL5:  return FORE200E_AAL5;
    }

    return -EINVAL;
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
          int aal = 100;
          enum fore200e_aal benchRet = fore200e_atm2fore_aal(aal);
        
        break;
    }
    // big-arr
    case 1:
    {
          int aal = 255;
          enum fore200e_aal benchRet = fore200e_atm2fore_aal(aal);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int aal = 10;
          enum fore200e_aal benchRet = fore200e_atm2fore_aal(aal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
