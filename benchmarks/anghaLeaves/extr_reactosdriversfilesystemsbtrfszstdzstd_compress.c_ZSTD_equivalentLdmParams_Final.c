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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ enableLdm; scalar_t__ hashLog; scalar_t__ bucketSizeLog; scalar_t__ minMatchLength; scalar_t__ hashEveryLog; } ;
typedef  TYPE_1__ ldmParams_t ;
typedef  int U32 ;

/* Variables and functions */

__attribute__((used)) static U32 ZSTD_equivalentLdmParams(ldmParams_t ldmParams1,
                                    ldmParams_t ldmParams2)
{
    return (!ldmParams1.enableLdm && !ldmParams2.enableLdm) ||
           (ldmParams1.enableLdm == ldmParams2.enableLdm &&
            ldmParams1.hashLog == ldmParams2.hashLog &&
            ldmParams1.bucketSizeLog == ldmParams2.bucketSizeLog &&
            ldmParams1.minMatchLength == ldmParams2.minMatchLength &&
            ldmParams1.hashEveryLog == ldmParams2.hashEveryLog);
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
          struct TYPE_4__ ldmParams1;
        ldmParams1.enableLdm = ((-2 * (next_i()%2)) + 1) * next_i();
        ldmParams1.hashLog = ((-2 * (next_i()%2)) + 1) * next_i();
        ldmParams1.bucketSizeLog = ((-2 * (next_i()%2)) + 1) * next_i();
        ldmParams1.minMatchLength = ((-2 * (next_i()%2)) + 1) * next_i();
        ldmParams1.hashEveryLog = ((-2 * (next_i()%2)) + 1) * next_i();
          struct TYPE_4__ ldmParams2;
        ldmParams2.enableLdm = ((-2 * (next_i()%2)) + 1) * next_i();
        ldmParams2.hashLog = ((-2 * (next_i()%2)) + 1) * next_i();
        ldmParams2.bucketSizeLog = ((-2 * (next_i()%2)) + 1) * next_i();
        ldmParams2.minMatchLength = ((-2 * (next_i()%2)) + 1) * next_i();
        ldmParams2.hashEveryLog = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = ZSTD_equivalentLdmParams(ldmParams1,ldmParams2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
