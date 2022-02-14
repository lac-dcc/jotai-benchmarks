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
typedef  int u8 ;

/* Variables and functions */
#define  IB_RATE_10_GBPS 130 
#define  IB_RATE_2_5_GBPS 129 
#define  IB_RATE_5_GBPS 128 
 int MTHCA_RATE_TAVOR_1X ; 
 int MTHCA_RATE_TAVOR_1X_DDR ; 
 int MTHCA_RATE_TAVOR_4X ; 
 int MTHCA_RATE_TAVOR_FULL ; 

__attribute__((used)) static u8 ib_rate_to_tavor(u8 static_rate)
{
	switch (static_rate) {
	case IB_RATE_2_5_GBPS: return MTHCA_RATE_TAVOR_1X;
	case IB_RATE_5_GBPS:   return MTHCA_RATE_TAVOR_1X_DDR;
	case IB_RATE_10_GBPS:  return MTHCA_RATE_TAVOR_4X;
	default:	       return MTHCA_RATE_TAVOR_FULL;
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

    // big-arr
    case 0:
    {
          int static_rate = 255;
          int benchRet = ib_rate_to_tavor(static_rate);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
