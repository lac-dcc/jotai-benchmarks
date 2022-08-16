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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int ut32 ;
struct TYPE_5__ {TYPE_1__* operands; } ;
struct TYPE_4__ {scalar_t__ type; int immediate; } ;
typedef  TYPE_2__ ArmOp ;

/* Variables and functions */
 scalar_t__ ARM_CONSTANT ; 
 int UT32_MAX ; 

__attribute__((used)) static ut32 exception(ArmOp *op, ut32 k) {
	ut32 data = UT32_MAX;

	if (op->operands[0].type == ARM_CONSTANT) {
		int n = op->operands[0].immediate;
		data = k;
		data += (((n / 8) & 0xff) << 16);
		data += n << 29;//((n >> 8) << 8);
	}
	return data;
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
          int k = 100;
          int _len_op0 = 1;
          struct TYPE_5__ * op = (struct TYPE_5__ *) malloc(_len_op0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
              int _len_op__i0__operands0 = 1;
          op[_i0].operands = (struct TYPE_4__ *) malloc(_len_op__i0__operands0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_op__i0__operands0; _j0++) {
            op[_i0].operands->type = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].operands->immediate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = exception(op,k);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_op0; _aux++) {
          free(op[_aux].operands);
          }
          free(op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
