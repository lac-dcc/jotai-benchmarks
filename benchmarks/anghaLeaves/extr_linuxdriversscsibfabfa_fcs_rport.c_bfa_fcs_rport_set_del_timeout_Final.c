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
typedef  int u8 ;

/* Variables and functions */
 int bfa_fcs_rport_del_timeout ; 

void
bfa_fcs_rport_set_del_timeout(u8 rport_tmo)
{
	/* convert to Millisecs */
	if (rport_tmo > 0)
		bfa_fcs_rport_del_timeout = rport_tmo * 1000;
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
          int rport_tmo = 100;
          bfa_fcs_rport_set_del_timeout(rport_tmo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int rport_tmo = 255;
          bfa_fcs_rport_set_del_timeout(rport_tmo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int rport_tmo = 10;
          bfa_fcs_rport_set_del_timeout(rport_tmo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
