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

/* Type definitions */
struct arm_smccc_res {int a0; } ;

/* Variables and functions */
#define  SDEI_DENIED 132 
#define  SDEI_INVALID_PARAMETERS 131 
#define  SDEI_NOT_SUPPORTED 130 
#define  SDEI_OUT_OF_RESOURCE 129 
#define  SDEI_PENDING 128 

__attribute__((used)) static int sdei_is_err(struct arm_smccc_res *res)
{
	switch (res->a0) {
	case SDEI_NOT_SUPPORTED:
	case SDEI_INVALID_PARAMETERS:
	case SDEI_DENIED:
	case SDEI_PENDING:
	case SDEI_OUT_OF_RESOURCE:
		return true;
	}

	return false;
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
          int _len_res0 = 1;
          struct arm_smccc_res * res = (struct arm_smccc_res *) malloc(_len_res0*sizeof(struct arm_smccc_res));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].a0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sdei_is_err(res);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_res0 = 100;
          struct arm_smccc_res * res = (struct arm_smccc_res *) malloc(_len_res0*sizeof(struct arm_smccc_res));
          for(int _i0 = 0; _i0 < _len_res0; _i0++) {
            res[_i0].a0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sdei_is_err(res);
          printf("%d\n", benchRet); 
          free(res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
