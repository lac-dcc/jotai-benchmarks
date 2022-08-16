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
typedef  int /*<<< orphan*/  uint32_t ;

/* Variables and functions */
 scalar_t__ _COMM_PAGE_ATM_DIAGNOSTIC_CONFIG ; 
 scalar_t__ _COMM_PAGE_RW_OFFSET ; 
 scalar_t__ commPagePtr ; 

void
commpage_update_atm_diagnostic_config(uint32_t diagnostic_config)
{
	if (commPagePtr)
		*((volatile uint32_t*)(_COMM_PAGE_ATM_DIAGNOSTIC_CONFIG+_COMM_PAGE_RW_OFFSET)) = diagnostic_config;
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
          int diagnostic_config = 100;
          commpage_update_atm_diagnostic_config(diagnostic_config);
        
        break;
    }
    // big-arr
    case 1:
    {
          int diagnostic_config = 255;
          commpage_update_atm_diagnostic_config(diagnostic_config);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int diagnostic_config = 10;
          commpage_update_atm_diagnostic_config(diagnostic_config);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
