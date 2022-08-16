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
       0            big-arr-10x\n\
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
typedef  unsigned long long u64 ;
typedef  enum reg_val_type { ____Placeholder_reg_val_type } reg_val_type ;

/* Variables and functions */

__attribute__((used)) static void set_reg_val_type(u64 *rvt, int reg, enum reg_val_type type)
{
	*rvt &= ~(7ull << (reg * 3));
	*rvt |= ((u64)type << (reg * 3));
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

    // big-arr-10x
    case 0:
    {
          int reg = 10;
          enum reg_val_type type = 0;
          int _len_rvt0 = 100;
          unsigned long long * rvt = (unsigned long long *) malloc(_len_rvt0*sizeof(unsigned long long));
          for(int _i0 = 0; _i0 < _len_rvt0; _i0++) {
            rvt[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_reg_val_type(rvt,reg,type);
          free(rvt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
