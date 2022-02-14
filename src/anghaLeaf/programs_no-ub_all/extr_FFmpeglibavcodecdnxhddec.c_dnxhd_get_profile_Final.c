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
       0            big-arr\n\
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

/* Variables and functions */
 int FF_PROFILE_DNXHD ; 
 int FF_PROFILE_DNXHR_444 ; 
 int FF_PROFILE_DNXHR_HQ ; 
 int FF_PROFILE_DNXHR_HQX ; 
 int FF_PROFILE_DNXHR_LB ; 
 int FF_PROFILE_DNXHR_SQ ; 

__attribute__((used)) static int dnxhd_get_profile(int cid)
{
    switch(cid) {
    case 1270:
        return FF_PROFILE_DNXHR_444;
    case 1271:
        return FF_PROFILE_DNXHR_HQX;
    case 1272:
        return FF_PROFILE_DNXHR_HQ;
    case 1273:
        return FF_PROFILE_DNXHR_SQ;
    case 1274:
        return FF_PROFILE_DNXHR_LB;
    }
    return FF_PROFILE_DNXHD;
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

    // big-arr
    case 0:
    {
          int cid = 255;
          int benchRet = dnxhd_get_profile(cid);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
