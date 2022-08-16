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
struct TYPE_3__ {int type; int /*<<< orphan*/  direction; } ;
typedef  TYPE_1__ RAnalOp ;

/* Variables and functions */
 int /*<<< orphan*/  R_ANAL_OP_DIR_EXEC ; 
 int /*<<< orphan*/  R_ANAL_OP_DIR_READ ; 
 int /*<<< orphan*/  R_ANAL_OP_DIR_REF ; 
 int /*<<< orphan*/  R_ANAL_OP_DIR_WRITE ; 
#define  R_ANAL_OP_TYPE_CALL 134 
#define  R_ANAL_OP_TYPE_JMP 133 
#define  R_ANAL_OP_TYPE_LEA 132 
#define  R_ANAL_OP_TYPE_LOAD 131 
 int R_ANAL_OP_TYPE_MASK ; 
#define  R_ANAL_OP_TYPE_STORE 130 
#define  R_ANAL_OP_TYPE_UCALL 129 
#define  R_ANAL_OP_TYPE_UJMP 128 

__attribute__((used)) static void set_opdir(RAnalOp *op) {
        switch (op->type & R_ANAL_OP_TYPE_MASK) {
        case R_ANAL_OP_TYPE_LOAD:
                op->direction = R_ANAL_OP_DIR_READ;
                break;
        case R_ANAL_OP_TYPE_STORE:
                op->direction = R_ANAL_OP_DIR_WRITE;
                break;
        case R_ANAL_OP_TYPE_LEA:
                op->direction = R_ANAL_OP_DIR_REF;
                break;
        case R_ANAL_OP_TYPE_CALL:
        case R_ANAL_OP_TYPE_JMP:
        case R_ANAL_OP_TYPE_UJMP:
        case R_ANAL_OP_TYPE_UCALL:
                op->direction = R_ANAL_OP_DIR_EXEC;
                break;
        default:
                break;
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

    // int-bounds
    case 0:
    {
          int _len_op0 = 1;
          struct TYPE_3__ * op = (struct TYPE_3__ *) malloc(_len_op0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_op0; _i0++) {
            op[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        op[_i0].direction = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_opdir(op);
          free(op);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
