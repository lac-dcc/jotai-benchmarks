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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int d; size_t k; scalar_t__ f; int splitPoint; } ;
typedef  TYPE_1__ ZDICT_fastCover_params_t ;

/* Variables and functions */
 scalar_t__ FASTCOVER_MAX_F ; 

__attribute__((used)) static int FASTCOVER_checkParameters(ZDICT_fastCover_params_t parameters,
                                 size_t maxDictSize) {
  /* k, d, and f are required parameters */
  if (parameters.d == 0 || parameters.k == 0 || parameters.f == 0) {
    return 0;
  }
  /* d has to be 6 or 8 */
  if (parameters.d != 6 && parameters.d != 8) {
    return 0;
  }
  /* 0 < f <= FASTCOVER_MAX_F */
  if (parameters.f > FASTCOVER_MAX_F) {
    return 0;
  }
  /* k <= maxDictSize */
  if (parameters.k > maxDictSize) {
    return 0;
  }
  /* d <= k */
  if (parameters.d > parameters.k) {
    return 0;
  }
  /* 0 < splitPoint <= 1 */
  if (parameters.splitPoint <= 0 || parameters.splitPoint > 1) {
    return 0;
  }
  return 1;
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
          unsigned long maxDictSize = 100;
          struct TYPE_3__ parameters;
        parameters.d = ((-2 * (next_i()%2)) + 1) * next_i();
        parameters.k = ((-2 * (next_i()%2)) + 1) * next_i();
        parameters.f = ((-2 * (next_i()%2)) + 1) * next_i();
        parameters.splitPoint = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = FASTCOVER_checkParameters(parameters,maxDictSize);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long maxDictSize = 255;
          struct TYPE_3__ parameters;
        parameters.d = ((-2 * (next_i()%2)) + 1) * next_i();
        parameters.k = ((-2 * (next_i()%2)) + 1) * next_i();
        parameters.f = ((-2 * (next_i()%2)) + 1) * next_i();
        parameters.splitPoint = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = FASTCOVER_checkParameters(parameters,maxDictSize);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long maxDictSize = 10;
          struct TYPE_3__ parameters;
        parameters.d = ((-2 * (next_i()%2)) + 1) * next_i();
        parameters.k = ((-2 * (next_i()%2)) + 1) * next_i();
        parameters.f = ((-2 * (next_i()%2)) + 1) * next_i();
        parameters.splitPoint = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = FASTCOVER_checkParameters(parameters,maxDictSize);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
