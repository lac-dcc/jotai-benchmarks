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
       1            big-arr-10x\n\
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
typedef  size_t varInds_t ;
struct TYPE_3__ {scalar_t__* vals; } ;
typedef  TYPE_1__ paramValues_t ;

/* Variables and functions */
 size_t NUM_PARAMS ; 
 scalar_t__ PARAM_UNSET ; 
 size_t fadt_ind ; 

__attribute__((used)) static size_t variableParams(const paramValues_t paramConstraints, varInds_t* res, const int usingDictionary) {
    varInds_t i;
    size_t j = 0;
    for(i = 0; i < NUM_PARAMS; i++) {
        if(paramConstraints.vals[i] == PARAM_UNSET) {
            if(i == fadt_ind && !usingDictionary) continue; /* don't use fadt if no dictionary */
            res[j] = i; j++;
        }
    }
    return j;
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
          const int usingDictionary = 100;
          const struct TYPE_3__ paramConstraints;
          int _len_res0 = 1;
          unsigned long * res = (unsigned long *) malloc(_len_res0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = variableParams(paramConstraints,res,usingDictionary);
          printf("%lu\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          const int usingDictionary = 10;
          const struct TYPE_3__ paramConstraints;
          int _len_res0 = 100;
          unsigned long * res = (unsigned long *) malloc(_len_res0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = variableParams(paramConstraints,res,usingDictionary);
          printf("%lu\n", benchRet); 
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
