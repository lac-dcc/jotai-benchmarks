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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int type; scalar_t__ family; } ;
typedef  TYPE_1__ RAnalOp ;

/* Variables and functions */
 scalar_t__ R_ANAL_OP_FAMILY_PRIV ; 
#define  R_ANAL_OP_TYPE_CALL 135 
#define  R_ANAL_OP_TYPE_CJMP 134 
#define  R_ANAL_OP_TYPE_ILL 133 
#define  R_ANAL_OP_TYPE_JMP 132 
#define  R_ANAL_OP_TYPE_RCALL 131 
#define  R_ANAL_OP_TYPE_SWI 130 
#define  R_ANAL_OP_TYPE_TRAP 129 
#define  R_ANAL_OP_TYPE_UCALL 128 

__attribute__((used)) static bool checkAnalType(RAnalOp *op, int t) {
	if (t == 'c') {
		switch (op->type) {
		case R_ANAL_OP_TYPE_RCALL:
		case R_ANAL_OP_TYPE_UCALL:
		case R_ANAL_OP_TYPE_CALL:
			return true;
		}
	} else if (t == 's') {
		if (op->family == R_ANAL_OP_FAMILY_PRIV) {
			return true;
		}
		switch (op->type) {
		case R_ANAL_OP_TYPE_SWI:
			return true;
		}
	} else if (t == 'i') {
		switch (op->type) {
		case R_ANAL_OP_TYPE_TRAP:
		case R_ANAL_OP_TYPE_ILL:
			return true;
		}
	} else if (t == 'j') {
		switch (op->type) {
		case R_ANAL_OP_TYPE_JMP:
		//case R_ANAL_OP_TYPE_RJMP:
		//case R_ANAL_OP_TYPE_UJMP:
		case R_ANAL_OP_TYPE_CJMP:
			return true;
		}
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
          int t = 100;
          int _len_op0 = 1;
          struct TYPE_3__ * op = (struct TYPE_3__ *) malloc(_len_op0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = checkAnalType(op,t);
          printf("%d\n", benchRet); 
          free(op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
