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
struct TYPE_4__ {int reg_type; int shift_amount; int reg; int shift; } ;
typedef  TYPE_2__ ArmOp ;

/* Variables and functions */
 int ARM_NO_SHIFT ; 
 int ARM_REG32 ; 
 int ARM_REG64 ; 
 int UT32_MAX ; 

__attribute__((used)) static ut32 cmp(ArmOp *op) {
	ut32 data = UT32_MAX;
	int k = 0;
	if (op->operands[0].reg_type & ARM_REG64 && op->operands[1].reg_type & ARM_REG64) {
		k =  0x1f0000eb;
	} else if (op->operands[0].reg_type & ARM_REG32 && op->operands[1].reg_type & ARM_REG32) {
		if (op->operands[2].shift_amount > 31) {
			return UT32_MAX;
		}
		k =  0x1f00006b;
	} else {
		return UT32_MAX;
	}

	data = k | (op->operands[0].reg & 0x18) << 13 | op->operands[0].reg << 29 | op->operands[1].reg << 8;

	if (op->operands[2].shift != ARM_NO_SHIFT) {
		data |= op->operands[2].shift_amount << 18 | op->operands[2].shift << 14;
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
          int _len_op0 = 1;
          struct TYPE_5__ * op = (struct TYPE_5__ *) malloc(_len_op0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
              int _len_op__i0__operands0 = 1;
          op[_i0].operands = (struct TYPE_4__ *) malloc(_len_op__i0__operands0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_op__i0__operands0; _j0++) {
            op[_i0].operands->reg_type = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].operands->shift_amount = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].operands->reg = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].operands->shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = cmp(op);
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
